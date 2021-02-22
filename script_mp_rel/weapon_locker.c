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
	var uLocal_14 = 0;
	var uLocal_15 = 0;
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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 4;
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
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
#endregion

void __EntryFunction__()
{
	func_1();
	if (func_2(&iLocal_13) != 1)
	{
	}
	else
	{
		func_3(&iLocal_13);
	}
	if (func_4(&iLocal_13) != 1)
	{
	}
	else
	{
		func_3(&iLocal_13);
	}
	func_5(&iLocal_13);
	func_3(&iLocal_13);
}

void func_1()
{
	TELEMETRY::_0xF0D54E0651DD7E07();
}

int func_2(int* iParam0)
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		return 1;
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_6(iParam0, -2017342099);
	if (!func_7(iParam0))
	{
		return 1;
	}
	if (!func_8(iParam0))
	{
		return 1;
	}
	func_9(iParam0, -488492526);
	func_10(iParam0);
	return 0;
}

void func_3(int iParam0)
{
	func_11(0, -1343026476);
	func_12();
	func_13(iParam0);
	if (!func_14(iParam0))
	{
	}
	if (!func_15(iParam0))
	{
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

int func_4(int iParam0)
{
	if (!func_16(joaat("WEAPON_LOCKER")))
	{
		return 1;
	}
	return 0;
}

void func_5(int* iParam0)
{
	bool bVar0;

	bVar0 = false;
	while (!bVar0)
	{
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			bVar0 = true;
		}
		if (!UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("WEAPON_LOCKER")))
		{
			bVar0 = true;
		}
		if (!bVar0)
		{
			func_17(iParam0);
			func_9(iParam0, UIAPPS::_0x96FD694FE5BE55DC(joaat("WEAPON_LOCKER")));
			func_18(iParam0);
		}
		BUILTIN::WAIT(0);
	}
}

void func_6(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

bool func_7(var uParam0)
{
	uParam0->f_93 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "weapon_locker");
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_93))
	{
		return false;
	}
	uParam0->f_93.f_1 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_93, "header_text", MISC::_CREATE_VAR_STRING(2, "WL_HEADER"));
	uParam0->f_93.f_2 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_93, "footer_text", "Footer text");
	uParam0->f_93.f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_93, "footer_color", joaat("COLOR_WHITE"));
	return true;
}

bool func_8(var uParam0)
{
	var uVar0;
	char[] cVar6[8];
	int iVar7;

	if (!func_19(uParam0, &(uParam0->f_93)))
	{
		return false;
	}
	if (!func_20(&(uParam0->f_2.f_2), &(uParam0->f_2), &uVar0))
	{
		return false;
	}
	if (func_21(&(uParam0->f_2.f_13), &(uParam0->f_2)))
	{
		func_22(&(uParam0->f_2.f_13), &(uParam0->f_2.f_20));
		iVar7 = 0;
		while (iVar7 < 4)
		{
			cVar6 = func_23(iVar7);
			cVar6 = MISC::_CREATE_VAR_STRING(2, cVar6);
			if (!func_24(&(uParam0->f_2.f_13), &(uParam0->f_2.f_20), cVar6))
			{
			}
			iVar7++;
		}
	}
	else
	{
		return false;
	}
	return true;
}

void func_9(int* iParam0, int iParam1)
{
	if (func_25(iParam0) != iParam1)
	{
		func_6(iParam0, iParam1);
		func_26(iParam0, func_25(iParam0));
		func_27(iParam0, func_25(iParam0));
	}
	func_28(iParam0, func_25(iParam0));
	func_29(iParam0, func_25(iParam0));
}

void func_10(int* iParam0)
{
	WEAPON::_0x94A3C1B804D291EC(Global_34, 0, 0, 1, 0);
}

int func_11(bool bParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1102219.f_16)
	{
		return 0;
	}
	if (!func_30())
	{
		return 0;
	}
	if (!func_31())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_32(&Global_0, 8);
	}
	func_32(&Global_0, 1);
	return 1;
}

void func_12()
{
	TELEMETRY::_TELEMETRY_GUN_LOCKER();
}

void func_13(int iParam0)
{
	if (!UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("WEAPON_LOCKER")))
	{
		return;
	}
	UIAPPS::_CLOSE_APP_BY_HASH(joaat("WEAPON_LOCKER"));
}

bool func_14(int iParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_93))
	{
		return false;
	}
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0->f_93);
	return true;
}

bool func_15(int iParam0)
{
	if (!func_33(iParam0))
	{
	}
	return true;
}

bool func_16(int iParam0)
{
	if (!UIAPPS::_CAN_LAUNCH_APP_BY_HASH(iParam0))
	{
		return false;
	}
	switch (UIAPPS::_LAUNCH_APP_BY_HASH(joaat("WEAPON_LOCKER")))
	{
		case 0:
			return true;
		case 1:
			return false;
		case 2:
			return false;
		default:
			break;
	}
	return false;
}

void func_17(int* iParam0)
{
	struct<4> Var0;

	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(1600976403))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(1600976403, &Var0))
		{
			func_34(iParam0, &Var0);
			UIEVENTS::_EVENT_MANAGER_POP_EVENT(1600976403);
		}
	}
	if (func_35(iParam0))
	{
		Var0 = { func_36(iParam0) };
		func_34(iParam0, &Var0);
		func_37(iParam0);
	}
}

void func_18(int* iParam0)
{
	struct<4> Var0;

	if (func_35(iParam0))
	{
		Var0 = { func_36(iParam0) };
		func_34(iParam0, &Var0);
		func_37(iParam0);
	}
}

bool func_19(var uParam0, var uParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam1))
	{
		return false;
	}
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam1, "weapons_page");
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2))
	{
		return false;
	}
	uParam0->f_2.f_1 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_2, "weapon_list");
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2.f_1))
	{
		DATABINDING::_0x3BF0767CF33FCC88(uParam0->f_2.f_1);
	}
	uParam0->f_2.f_89 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2, "weapon_list_hint_visible", 0);
	uParam0->f_2.f_90 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2, "weapon_list_hint_label", 0);
	return true;
}

bool func_20(var uParam0, var uParam1, var uParam2)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam1))
	{
		return false;
	}
	*uParam0 = *uParam1;
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam1, "weapon_stat_visible", *uParam2);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "WeaponPowerNew", uParam2->f_1);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "WeaponRangeNew", uParam2->f_2);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "WeaponAccuracyNew", uParam2->f_3);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "WeaponFireRateNew", uParam2->f_4);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "WeaponReloadNew", uParam2->f_5);
	return true;
}

bool func_21(var uParam0, var uParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam1))
	{
		return false;
	}
	*uParam0 = *uParam1;
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "tabCount", 0);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam1, "tabName", "");
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "tabIndex", 0);
	uParam0->f_5 = 1;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	return true;
}

void func_22(var uParam0, var uParam1)
{
	int iVar0;

	uParam0->f_4 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		(uParam1[iVar0 /*17*/])->f_16 = 0;
		StringCopy(uParam1[iVar0 /*17*/], "", 128);
		iVar0++;
	}
}

char* func_23(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WL_FILTER_ALL";
		case 1:
			return "WL_FILTER_LOCKER";
		case 2:
			return "WL_FILTER_HORSE";
		case 3:
			return "WL_FILTER_EQUIPPED";
		default:
			break;
	}
	return "INVALID_LABEL";
}

bool func_24(var uParam0, var uParam1, char* sParam2)
{
	int iVar0;

	iVar0 = *uParam1;
	if (uParam0->f_4 >= iVar0)
	{
		return false;
	}
	if (!uParam0->f_5)
	{
		return false;
	}
	*(uParam1[uParam0->f_4 /*17*/]) = { func_38(sParam2) };
	(uParam1[uParam0->f_4 /*17*/])->f_16 = 0;
	uParam0->f_4++;
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_1, uParam0->f_4);
	return true;
}

int func_25(int* iParam0)
{
	return iParam0->f_1;
}

void func_26(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case -488492526:
			func_39(uParam0);
			break;
	}
}

void func_27(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case -488492526:
			func_40(&(uParam0->f_2.f_13));
			break;
	}
}

void func_28(int* iParam0, int iParam1)
{
	switch (iParam1)
	{
		case -488492526:
			func_41(iParam0);
			break;
	}
}

void func_29(int* iParam0, int iParam1)
{
	switch (iParam1)
	{
		case -488492526:
			func_42(&(iParam0->f_2.f_13), &(iParam0->f_2.f_20));
			break;
	}
}

bool func_30()
{
	return !Global_1572887.f_9;
}

bool func_31()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

void func_32(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_33(int iParam0)
{
	return true;
}

void func_34(int* iParam0, var uParam1)
{
	int iVar0;

	iVar0 = uParam1->f_2;
	switch (*uParam1)
	{
		case -632467210:
			func_43(iParam0);
			break;
		case -1740156697:
			if (func_44(&(iParam0->f_2.f_13)))
			{
			}
			else
			{
				func_45(iParam0, uParam1);
				switch (iVar0)
				{
					case -2060496899:
					case -1694113483:
					case -1174213347:
					case -337881065:
						if (!func_46(iParam0, &(uParam1->f_3)))
						{
						}
						if (!func_47(&(iParam0->f_2.f_2), &(uParam1->f_3)))
						{
						}
						break;
				}
				func_48(iParam0, iVar0);
			}
			break;
		case -1203660660:
			switch (iVar0)
			{
				case -1313710397:
					if (func_49(&(uParam1->f_3), 2))
					{
						func_50(iParam0, 0, 1);
					}
					break;
				case -1756222973:
					if (func_49(&(uParam1->f_3), 3))
					{
						func_50(iParam0, 0, 1);
					}
					break;
				case -1073027202:
					if (func_51(&(uParam1->f_3)))
					{
						func_50(iParam0, 0, 1);
					}
					break;
				case -1103499950:
					if (func_52(&(uParam1->f_3)))
					{
						func_50(iParam0, 0, 1);
					}
					break;
				case -946029012:
					if (func_49(&(uParam1->f_3), 10))
					{
						func_50(iParam0, 0, 1);
					}
					break;
				case 1554581363:
					if (func_49(&(uParam1->f_3), 9))
					{
						func_50(iParam0, 0, 1);
					}
					break;
				case 941907253:
					if (func_49(&(uParam1->f_3), 4))
					{
						func_50(iParam0, 0, 1);
					}
					break;
				case -466398939:
					if (func_49(&(uParam1->f_3), 7))
					{
						func_50(iParam0, 0, 1);
					}
					break;
				case -260514364:
					if (func_49(&(uParam1->f_3), 8))
					{
						func_50(iParam0, 0, 1);
					}
					break;
			}
			break;
		case -722926211:
		case 703281244:
			switch (iVar0)
			{
				case 752670436:
					func_40(&(iParam0->f_2.f_13));
					func_53(iParam0);
					break;
			}
			break;
	}
}

bool func_35(int* iParam0)
{
	return iParam0->f_97 != 0;
}

struct<4> func_36(int* iParam0)
{
	return iParam0->f_97;
}

void func_37(int* iParam0)
{
	var uVar0;

	iParam0->f_97 = 0;
	iParam0->f_97.f_2 = 0;
	iParam0->f_97.f_1 = 0;
	iParam0->f_97.f_3 = uVar0;
}

struct<16> func_38(char* sParam0)
{
	char cVar0[128];

	StringCopy(&cVar0, sParam0, 128);
	return cVar0;
}

void func_39(var uParam0)
{
}

void func_40(var uParam0)
{
	if (!func_54(uParam0))
	{
		return;
	}
	uParam0->f_6 = 1;
}

void func_41(int* iParam0)
{
	int iVar0;

	if (func_44(&(iParam0->f_2.f_13)))
	{
		func_50(iParam0, 0, 1);
	}
	if (func_55(iParam0, 0))
	{
		func_50(iParam0, 0, 0);
		iVar0 = func_56(iParam0);
		if (!func_57(iParam0, iVar0))
		{
		}
		func_58(iParam0);
		func_59(iParam0, iVar0);
		func_60(iParam0, iVar0);
	}
}

void func_42(var uParam0, var uParam1)
{
	int iVar0;

	if (!func_54(uParam0))
	{
		uParam0->f_6 = 0;
		return;
	}
	if (!func_44(uParam0))
	{
		return;
	}
	iVar0 = func_61(uParam0);
	if (!func_62(uParam0, iVar0))
	{
		uParam0->f_6 = 0;
		return;
	}
	func_63(uParam0, uParam1, iVar0);
	uParam0->f_6 = 0;
}

int func_43(int* iParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_93.f_2))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(iParam0->f_93.f_2, "");
	return 1;
}

bool func_44(var uParam0)
{
	return uParam0->f_6;
}

int func_45(int* iParam0, var uParam1)
{
	if (*uParam1 == 0)
	{
		return 0;
	}
	MISC::_COPY_MEMORY(&(iParam0->f_101), uParam1, 4);
	return 1;
}

bool func_46(int* iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam1))
	{
		return false;
	}
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam1, "inventory_item");
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam1, "inventory_item_slot");
	Var2 = { func_65(iVar0, func_64(0), iVar1, 0) };
	if (!func_66(&Var2))
	{
		return false;
	}
	func_67(iParam0, Var2);
	return true;
}

bool func_47(var uParam0, var uParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam1))
	{
		return false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_2, DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "stat_damage"));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_3, DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "stat_range"));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_4, DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "stat_accuracy"));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_5, DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "stat_firerate"));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_6, DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "stat_reload"));
	return true;
}

void func_48(int* iParam0, int iParam1)
{
	switch (iParam1)
	{
		case -2060496899:
		case -1694113483:
		case -1174213347:
		case -337881065:
			if (!func_68(iParam0, iParam1))
			{
				func_43(iParam0);
			}
			break;
		default:
			func_43(iParam0);
			break;
	}
}

bool func_49(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		return false;
	}
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item");
	if (!func_69(iVar0, 0))
	{
		return false;
	}
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item_slot");
	if (!func_70(iVar0, iVar1, iParam1))
	{
		return false;
	}
	return true;
}

void func_50(int* iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_71(iParam0, iParam1);
	}
	else
	{
		func_72(iParam0, iParam1);
	}
}

bool func_51(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		return false;
	}
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item");
	if (!func_69(iVar0, 0))
	{
		return false;
	}
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item_slot");
	Var2 = { func_65(iVar0, func_64(0), iVar1, 0) };
	if (!func_66(&Var2))
	{
		return false;
	}
	if (!func_73(&Var2))
	{
		return false;
	}
	return true;
}

bool func_52(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		return false;
	}
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item");
	if (!func_69(iVar0, 0))
	{
		return false;
	}
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item_slot");
	Var2 = { func_65(iVar0, func_64(0), iVar1, 0) };
	if (!func_66(&Var2))
	{
		return false;
	}
	if (!func_74(&Var2))
	{
		return false;
	}
	return true;
}

void func_53(int* iParam0)
{
	func_75(&(iParam0->f_2.f_9));
}

bool func_54(var uParam0)
{
	return uParam0->f_5;
}

bool func_55(int* iParam0, int iParam1)
{
	return func_76(*iParam0, iParam1);
}

int func_56(int* iParam0)
{
	return func_61(&(iParam0->f_2.f_13));
}

bool func_57(int* iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;

	if (!func_77("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 1))
	{
		return false;
	}
	Var2.f_9 = -1591664384;
	iVar17 = 0;
	iVar19 = 0;
	while (iVar19 < 7)
	{
		iVar18 = 0;
		while (iVar18 < iVar1)
		{
			if (!func_78(&Var2, iVar18, iVar0, iVar1))
			{
			}
			else if (!func_79(Var2.f_4))
			{
			}
			else if (func_80(Var2.f_4) != iVar19)
			{
			}
			else
			{
				iVar16 = func_81(&Var2);
				if (iParam1 != 0)
				{
					switch (iVar16)
					{
						case -1:
							Jump @237; //curOff = 162
							Jump @204; //curOff = 165
							if (iParam1 != 3)
							{
							}
							else
							{
								Jump @204; //curOff = 177
								if (iParam1 != 2)
								{
								}
								else
								{
									Jump @204; //curOff = 189
									if (iParam1 != 1)
									{
									}
									else if (!func_82(iParam0, iVar17, Var2.f_4, Var2.f_9, iVar16, iParam1))
									{
									}
									else
									{
										iVar17++;
									}
								}
							}
							iVar18++;
							iVar19++;
							if (!func_83(iParam0, iVar17))
							{
							}
							if (!func_84(iVar0))
							{
							}
							return true;
						}
					}
				}
			}
		}

void func_58(int* iParam0)
{
	int iVar0;

	iVar0 = func_85(iParam0);
	func_86(&(iParam0->f_2.f_2), func_85(iParam0) > 0);
	if (iVar0 == 0)
	{
		func_87(&(iParam0->f_2.f_2));
	}
}

void func_59(int* iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_85(iParam0);
	switch (iParam1)
	{
		case 1:
			func_88(iParam0, iVar0 == 0);
			func_89(iParam0, -2012945523 /* GXTEntry: "You have no weapons in your locker." */);
			break;
		case 2:
			func_88(iParam0, iVar0 == 0);
			func_89(iParam0, -1705332461 /* GXTEntry: "You have no weapons on your horse." */);
			break;
		default:
			func_88(iParam0, 0);
			break;
	}
}

void func_60(int* iParam0, int iParam1)
{
	int iVar0;
	struct<4> Var1;

	iVar0 = func_85(iParam0);
	if (iVar0 > 0)
	{
		Var1 = -1740156697;
		if (func_44(&(iParam0->f_2.f_13)))
		{
			Var1.f_1 = 0;
		}
		else
		{
			Var1.f_1 = func_90(iParam0);
			if (Var1.f_1 >= iVar0)
			{
				Var1.f_1 = (iVar0 - 1);
			}
		}
		Var1.f_2 = func_91(iParam1);
		if (!func_92(iParam0, Var1.f_1, &(Var1.f_3)))
		{
		}
		if (!func_93(iParam0, &Var1))
		{
		}
	}
}

int func_61(var uParam0)
{
	if (!uParam0->f_5)
	{
		return -1;
	}
	return DATABINDING::_DATABINDING_READ_DATA_INT(uParam0->f_3);
}

bool func_62(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_4)
	{
		return false;
	}
	return true;
}

void func_63(var uParam0, var uParam1, int iParam2)
{
	func_95(uParam0, func_94(uParam1, iParam2));
	func_96(uParam1, iParam2);
}

struct<4> func_64(bool bParam0)
{
	int iVar0;

	iVar0 = func_97(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_4)))
		{
			Global_1293346.f_4 = { func_65(923904168, func_98(bParam0), -740156546, bParam0) };
		}
		return Global_1293346.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_16)))
		{
			Global_1293346.f_16 = { func_65(923904168, func_98(bParam0), -740156546, 0) };
		}
		return Global_1293346.f_16;
	}
	return func_65(923904168, func_98(bParam0), -740156546, 0);
}

struct<4> func_65(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_69(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_97(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_66(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_67(int* iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	if (!func_66(&uParam1))
	{
		return 0;
	}
	MISC::_COPY_MEMORY(&(iParam0->f_2.f_9), &uParam1, 4);
	return 1;
}

bool func_68(int* iParam0, int iParam1)
{
	char* sVar0;
	struct<4> Var1;
	struct<10> Var5;

	switch (iParam1)
	{
		case -1174213347:
			break;
		case -1694113483:
			sVar0 = "WL_NUMBER_STORED_IN_WL";
			break;
		case -337881065:
			sVar0 = "WL_NUMBER_STOWED_ON_HORSE";
			break;
		case -2060496899:
			sVar0 = "WL_NUMBER_EQUIPPED";
			break;
		default:
			return false;
	}
	Var1 = { func_99(iParam0) };
	if (func_66(&Var1))
	{
		Var5.f_9 = -1591664384;
		if (INVENTORY::_0x025A1B1FB03FBF61(2, &Var1, &Var5, 22, 1))
		{
		}
		switch (func_100(&Var1))
		{
			case 3:
				func_101(iParam0, MISC::_CREATE_VAR_STRING(2, "WL_FOOTER_ALWAYS_MELEE"));
				return true;
			case 4:
			case 5:
				func_101(iParam0, MISC::_CREATE_VAR_STRING(2, "WL_FOOTER_ALWAYS_SIDEARMS"));
				return true;
		}
	}
	if (func_85(iParam0) > 0)
	{
		func_101(iParam0, MISC::_CREATE_VAR_STRING(2, sVar0, func_85(iParam0)));
	}
	else
	{
		func_43(iParam0);
	}
	return true;
}

bool func_69(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_70(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<4> Var1;
	struct<15> Var5;
	int iVar27;
	struct<15> Var28;
	var uVar50;
	bool bVar54;
	var uVar55;
	struct<10> Var59;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;

	Var1 = { func_65(iParam0, func_64(0), iParam1, 0) };
	Var5.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(2, &Var1, &Var5, 22, 1))
	{
		return false;
	}
	iVar0 = Var5.f_14;
	Var28.f_9 = -1591664384;
	if (WEAPON::_GET_PED_WEAPON_INVENTORY_UID(Global_34, iParam2, &uVar50))
	{
		if (!INVENTORY::_0x025A1B1FB03FBF61(2, &uVar50, &Var28, 22, 1))
		{
			return false;
		}
		iVar27 = Var28.f_14;
	}
	bVar54 = false;
	if (func_79(Var28.f_4))
	{
		Var59.f_9 = -1591664384;
		iVar83 = func_102(iParam0);
		iVar84 = 0;
		while (iVar84 < iVar83)
		{
			if (iVar84 >= (iVar83 - 1))
			{
			}
			else if (!func_103(iParam0, iVar84, &iVar82))
			{
			}
			else if (iParam2 != iVar82)
			{
			}
			else if (!func_103(iParam0, iVar84 + 1, &iVar81))
			{
			}
			else if (!func_104(iVar81))
			{
			}
			else
			{
				if (WEAPON::_GET_PED_WEAPON_INVENTORY_UID(Global_34, iVar81, &uVar55))
				{
					if (INVENTORY::_0x025A1B1FB03FBF61(2, &uVar55, &Var59, 22, 1))
					{
						if (func_79(Var59.f_4))
						{
						}
						else
						{
							Jump @289; //curOff = 283
							Jump @316; //curOff = 286
							if (func_105(&Var28, &iVar81, 1))
							{
								bVar54 = true;
								Jump @325; //curOff = 307
							}
						else
						{
							}
							else
							{
								iVar84++;
							}
							if (func_81(&Var5) == 2)
							{
								func_106(Var5.f_4);
							}
							if (func_105(&Var1, &iParam2, 0))
							{
							}
							if (!bVar54)
							{
								if (func_66(&uVar50))
								{
									if (func_107(iParam0, iVar27, iVar0))
									{
										if (func_105(&Var28, &iVar0, 1))
										{
										}
									}
								}
							}
							return true;
						}
					}
				}
			}
		}
	}
}

void func_71(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_72(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_73(var uParam0)
{
	struct<22> Var0;

	Var0.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(2, uParam0, &Var0, 22, 1))
	{
		return false;
	}
	Var0.f_21 = 0;
	if (!INVENTORY::_0xD80A8854DB5CFBA5(2, uParam0, &Var0, 22))
	{
		return false;
	}
	func_108(Var0.f_4);
	if (Var0.f_14 >= 0)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, Var0.f_14, false, false);
	}
	return true;
}

bool func_74(var uParam0)
{
	struct<22> Var0;

	Var0.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(2, uParam0, &Var0, 22, 1))
	{
		return false;
	}
	Var0.f_21 = 1;
	if (func_81(&Var0) == 2)
	{
		func_106(Var0.f_4);
	}
	if (!INVENTORY::_0xD80A8854DB5CFBA5(2, uParam0, &Var0, 22))
	{
		return false;
	}
	if (Var0.f_14 >= 0)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, Var0.f_14, false, false);
	}
	return true;
}

void func_75(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

bool func_76(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

bool func_77(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_97(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_78(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_79(int iParam0)
{
	if (!func_69(iParam0, 0))
	{
		return false;
	}
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return false;
	}
	if (!WEAPON::_0x705BE297EEBDB95D(iParam0) && !WEAPON::_IS_WEAPON_BOW(iParam0))
	{
		return false;
	}
	return true;
}

int func_80(int iParam0)
{
	if (!func_79(iParam0))
	{
		return -1;
	}
	if (WEAPON::_IS_WEAPON_PISTOL(iParam0))
	{
		return 0;
	}
	else if (WEAPON::_IS_WEAPON_REVOLVER(iParam0))
	{
		return 1;
	}
	else if (WEAPON::_IS_WEAPON_SHOTGUN(iParam0))
	{
		return 2;
	}
	else if (WEAPON::_IS_WEAPON_REPEATER(iParam0))
	{
		return 3;
	}
	else if (WEAPON::_IS_WEAPON_RIFLE(iParam0))
	{
		return 4;
	}
	else if (WEAPON::_IS_WEAPON_BOW(iParam0))
	{
		return 5;
	}
	return 6;
}

int func_81(var uParam0)
{
	struct<22> Var0;

	Var0.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(2, uParam0, &Var0, 22, 1))
	{
		return -1;
	}
	if (!Var0.f_21)
	{
		return 2;
	}
	else if (Var0.f_21 && Var0.f_14 != -1)
	{
		return 0;
	}
	else if (Var0.f_21 && Var0.f_14 == -1)
	{
		return 1;
	}
	return -1;
}

bool func_82(int* iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<13> Var0;
	bool bVar53;
	var uVar54;

	if (!func_79(iParam2))
	{
		return false;
	}
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = joaat("COLOR_WHITE");
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	if (!func_109(iParam2, iParam3, &Var0, iParam4, iParam5))
	{
		return false;
	}
	bVar53 = true;
	if (iParam1 < func_85(iParam0))
	{
		if (func_92(iParam0, iParam1, &uVar54))
		{
			if (func_110(&uVar54, &Var0))
			{
				bVar53 = false;
			}
		}
	}
	if (bVar53)
	{
		if (!func_111(iParam0, &Var0))
		{
			return false;
		}
	}
	return true;
}

bool func_83(int* iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_2.f_1))
	{
		return false;
	}
	iVar0 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(iParam0->f_2.f_1);
	if (iVar0 == 0)
	{
		return true;
	}
	if (iParam1 < 0 || iParam1 > iVar0)
	{
		return false;
	}
	iVar1 = iVar0;
	while (iVar1 >= iParam1)
	{
		DATABINDING::_0x6318FB3BE37E11B3(iParam0->f_2.f_1, iVar1);
		iVar1 = (iVar1 + -1);
	}
	return true;
}

bool func_84(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (!INVENTORY::_0x42A2F33A1942E865(iParam0))
	{
		return false;
	}
	return true;
}

int func_85(int* iParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_2.f_1))
	{
		return 0;
	}
	return DATABINDING::_DATABINDING_GET_ARRAY_COUNT(iParam0->f_2.f_1);
}

int func_86(var uParam0, bool bParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_1, bParam1);
	return 1;
}

int func_87(var uParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_2, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_3, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_4, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_5, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_6, 0);
	return 1;
}

int func_88(int* iParam0, bool bParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_2.f_89))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(iParam0->f_2.f_89, bParam1);
	return 1;
}

int func_89(int* iParam0, int iParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_2.f_90))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(iParam0->f_2.f_90, iParam1);
	return 1;
}

var func_90(int* iParam0)
{
	return iParam0->f_101.f_1;
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1174213347;
		case 1:
			return -1694113483;
		case 2:
			return -337881065;
		case 3:
			return -2060496899;
		default:
			break;
	}
	return 0;
}

bool func_92(int* iParam0, int iParam1, var uParam2)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_2.f_1))
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= DATABINDING::_DATABINDING_GET_ARRAY_COUNT(iParam0->f_2.f_1))
	{
		return false;
	}
	*uParam2 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(iParam0->f_2.f_1, iParam1);
	return true;
}

bool func_93(int* iParam0, var uParam1)
{
	if (*uParam1 == 0)
	{
		return false;
	}
	if (iParam0->f_97 != 0)
	{
		return false;
	}
	MISC::_COPY_MEMORY(&(iParam0->f_97), uParam1, 4);
	return true;
}

var func_94(var uParam0, int iParam1)
{
	return func_112(*(uParam0[iParam1 /*17*/]));
}

void func_95(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, sParam1);
}

void func_96(var uParam0, int iParam1)
{
	(uParam0[iParam1 /*17*/])->f_16 = 1;
}

int func_97(bool bParam0)
{
	if (func_113() == -1)
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

struct<4> func_98(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_97(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1293346))
			{
				Global_1293346 = { func_65(joaat("CHARACTER"), func_114(), -1591664384, bParam0) };
			}
			return Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_12)))
			{
				Global_1293346.f_12 = { func_65(joaat("CHARACTER"), func_114(), -1591664384, 0) };
			}
			return Global_1293346.f_12;
		}
	}
	return func_65(joaat("CHARACTER"), func_114(), -1591664384, bParam0);
}

struct<4> func_99(int* iParam0)
{
	return iParam0->f_2.f_9;
}

int func_100(var uParam0)
{
	struct<15> Var0;
	int iVar22;

	if (!func_66(uParam0))
	{
		return 1;
	}
	Var0.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_97(0), uParam0, &Var0, 22, 1))
	{
		return 2;
	}
	iVar22 = Var0.f_14;
	switch (iVar22)
	{
		case 3:
			return 4;
		case 2:
			return 5;
		case 4:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_101(int* iParam0, char* sParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_93.f_2))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(iParam0->f_93.f_2, sParam1);
	return 1;
}

int func_102(int iParam0)
{
	if (!func_69(iParam0, 0))
	{
		return 0;
	}
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_BOW(iParam0))
	{
		return 2;
	}
	else if (WEAPON::_IS_WEAPON_TWO_HANDED(iParam0))
	{
		return 2;
	}
	else if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		return 2;
	}
	else if (WEAPON::_IS_WEAPON_MELEE(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_103(int iParam0, int iParam1, int iParam2)
{
	if (!func_69(iParam0, 0))
	{
		return false;
	}
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_BOW(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				*iParam2 = 8;
				return true;
			case 1:
				*iParam2 = 7;
				return true;
			default:
				break;
		}
	}
	else if (WEAPON::_IS_WEAPON_TWO_HANDED(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				*iParam2 = 10;
				return true;
			case 1:
				*iParam2 = 9;
				return true;
			default:
				break;
		}
	}
	else if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				*iParam2 = 2;
				return true;
			case 1:
				*iParam2 = 3;
				return true;
			default:
				break;
		}
	}
	else if (WEAPON::_IS_WEAPON_MELEE(iParam0))
	{
		*iParam2 = 4;
		return true;
	}
	return false;
}

bool func_104(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return func_115();
	}
	return true;
}

bool func_105(var uParam0, int iParam1, bool bParam2)
{
	struct<4> Var0;
	struct<13> Var22;
	var uVar38;
	int iVar44;
	char cVar45[64];
	char cVar53[64];

	Var0.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(2, uParam0, &Var0, 22, 1))
	{
		return false;
	}
	Var0.f_21 = 1;
	if (!INVENTORY::_0xD80A8854DB5CFBA5(2, uParam0, &Var0, 22))
	{
		return false;
	}
	Var22.f_7 = 752097756;
	Var22.f_8 = 1056964608;
	Var22.f_9 = 1065353216;
	Var22.f_4 = Var0.f_4;
	Var22 = { Var0 };
	Var22.f_6 = *iParam1;
	Var22.f_12 = 1;
	if (WEAPON::_GIVE_WEAPON_TO_PED(Global_34, &Var22, &uVar38))
	{
	}
	else
	{
		return false;
	}
	if (bParam2)
	{
		if (func_116(Var22.f_6, &iVar44))
		{
			StringCopy(&cVar45, func_117(Var22.f_4), 64);
			StringCopy(&cVar53, HUD::_GET_LABEL_TEXT_BY_HASH(iVar44), 64);
			func_118(MISC::_CREATE_VAR_STRING(42, "WL_TICKER_EQUIPPED_TO", &cVar45, &cVar53), -2, 0, 0, 0, 1);
		}
	}
	return true;
}

int func_106(int iParam0)
{
	if (!func_69(iParam0, 0))
	{
		return 0;
	}
	TELEMETRY::_0x317D9C9560529CC2(iParam0);
	return 1;
}

bool func_107(int iParam0, int iParam1, int iParam2)
{
	if (!func_69(iParam0, 0))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_TWO_HANDED(iParam0))
	{
		if (iParam1 == 10 && iParam2 == 9)
		{
			return true;
		}
		if (iParam2 == 10 && iParam1 == 9)
		{
			return true;
		}
	}
	return false;
}

int func_108(int iParam0)
{
	if (!func_69(iParam0, 0))
	{
		return 0;
	}
	TELEMETRY::_0xC3ADF4880784FA9C(iParam0);
	return 1;
}

bool func_109(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	struct<5> Var0;

	if (!func_79(iParam0))
	{
		return false;
	}
	if (INVENTORY::_0xE787F05DFC977BDE(func_97(1), iParam0, 0) > 1)
	{
		if (func_119(iParam1, &(uParam2->f_28), &(uParam2->f_27)))
		{
			uParam2->f_29 = 1;
		}
	}
	uParam2->f_4 = 1600976403;
	switch (iParam4)
	{
		case 0:
			uParam2->f_5 = -1174213347;
			break;
		case 3:
			uParam2->f_5 = -2060496899;
			break;
		case 2:
			uParam2->f_5 = -337881065;
			break;
		case 1:
			uParam2->f_5 = -1694113483;
			break;
	}
	StringCopy(&(uParam2->f_16), func_117(iParam0), 64);
	if (!func_120(iParam0, &Var0))
	{
	}
	uParam2->f_30 = Var0;
	uParam2->f_31 = Var0.f_1;
	uParam2->f_32 = Var0.f_4;
	uParam2->f_33 = Var0.f_2;
	uParam2->f_34 = Var0.f_3;
	uParam2->f_8 = 0;
	uParam2->f_9 = 0;
	if (!func_121(iParam0, iParam1, uParam2))
	{
		return false;
	}
	if (!func_122(iParam3, uParam2))
	{
		return false;
	}
	uParam2->f_51 = iParam0;
	uParam2->f_52 = iParam1;
	return true;
}

bool func_110(var uParam0, var uParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		return false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, func_123(0), *uParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, func_123(1), uParam1->f_1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_123(2), uParam1->f_2);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_123(54), uParam1->f_3);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_123(55), uParam1->f_4);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_123(57), uParam1->f_5);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_123(56), uParam1->f_6);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_123(58), uParam1->f_7);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, func_123(59), uParam1->f_8);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, func_123(60), uParam1->f_9);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_123(9), uParam1->f_27);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_123(10), uParam1->f_28);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, func_123(11), uParam1->f_29);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(*uParam0, func_123(15), &(uParam1->f_16));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_123(21), uParam1->f_24);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_123(22), uParam1->f_25);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, func_123(23), uParam1->f_26);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(*uParam0, "stat_damage", uParam1->f_30);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(*uParam0, "stat_range", uParam1->f_31);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(*uParam0, "stat_accuracy", uParam1->f_32);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(*uParam0, "stat_firerate", uParam1->f_33);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(*uParam0, "stat_reload", uParam1->f_34);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_toggle_label", uParam1->f_37);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_toggle_enabled", uParam1->f_35);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_toggle_visible", uParam1->f_36);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_toggle_hash", uParam1->f_38);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_option_label", uParam1->f_41);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_option_enabled", uParam1->f_39);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_option_visible", uParam1->f_40);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_option_hash", uParam1->f_42);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dleft_label", uParam1->f_45);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dleft_enabled", uParam1->f_43);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dleft_visible", uParam1->f_44);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dleft_hash", uParam1->f_46);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dright_label", uParam1->f_49);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dright_enabled", uParam1->f_47);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dright_visible", uParam1->f_48);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "dynamic_list_item_prompt_dright_hash", uParam1->f_50);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item", uParam1->f_51);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item_slot", uParam1->f_52);
	return true;
}

bool func_111(int* iParam0, var uParam1)
{
	char cVar0[64];
	var uVar8;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_2))
	{
		return false;
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_2.f_1))
	{
		return false;
	}
	StringCopy(&cVar0, "Entry_", 64);
	StringIntConCat(&cVar0, DATABINDING::_DATABINDING_GET_ARRAY_COUNT(iParam0->f_2.f_1), 64);
	func_124(&uVar8, iParam0->f_2.f_1, cVar0, uParam1);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(iParam0->f_2.f_1, -1, "pm_dynamic_text_and_end_image", uVar8);
	return true;
}

var func_112(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_113()
{
	return Global_1572887.f_13;
}

struct<4> func_114()
{
	struct<4> Var0;

	return Var0;
}

bool func_115()
{
	if (!func_125())
	{
		return false;
	}
	if (func_126() < 2)
	{
		return false;
	}
	return true;
}

bool func_116(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
			*iParam1 = 825261881; /* GXTEntry: "Melee" */
			return true;
		case 3:
			*iParam1 = -2078679563; /* GXTEntry: "Off-Hand Sidearm" */
			return true;
		case 2:
			*iParam1 = 258571561; /* GXTEntry: "Sidearm" */
			return true;
		case 9:
			*iParam1 = 1282885388; /* GXTEntry: "Back" */
			return true;
		case 10:
			*iParam1 = -1522249011; /* GXTEntry: "Shoulder" */
			return true;
		default:
			break;
	}
	return false;
}

char* func_117(int iParam0)
{
	int iVar0;

	if (!func_69(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_127(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

var func_118(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar17;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar17 = UIFEED::_SHOW_SIMPLE_RIGHT_TEXT(&Var0, &Var13, iParam5);
	return uVar17;
}

bool func_119(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 1728382685: /* GXTEntry: "Right" */
			*uParam2 = joaat("MENU_TEXTURES");
			*uParam1 = joaat("CLUB");
			return true;
		case -649335959: /* GXTEntry: "Left" */
			*uParam2 = joaat("MENU_TEXTURES");
			*uParam1 = joaat("DIAMOND");
			return true;
		default:
			break;
	}
	return false;
}

bool func_120(int iParam0, var uParam1)
{
	struct<2> Var0;
	vector3 vVar22;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	float fVar34;
	struct<2> Var35;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<5> Var41;
	struct<4> Var46;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;

	if (!func_69(iParam0, 0))
	{
		return false;
	}
	if (!func_128(iParam0))
	{
		return false;
	}
	Var0.f_1 = 20;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam0, &Var0))
	{
		return false;
	}
	if (Var0 <= 0)
	{
		return false;
	}
	fVar34 = 100f;
	Var35 = { func_129(joaat("SKILL"), WEAPON::_0x8EC44AE8DECFF841(iParam0)) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::STAT_ID_GET_FLOAT(&Var35, &fVar34);
	}
	iVar37 = 0;
	while (iVar37 < Var0)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var0.f_1[iVar37], &vVar22))
		{
			if (vVar22.y == -266488916)
			{
				iVar29 = (iVar29 + vVar22.z);
			}
			else if (vVar22.y == 1648497600)
			{
				iVar30 = (iVar30 + vVar22.z);
			}
			else if (vVar22.y == -1856731002)
			{
				iVar31 = (iVar31 + vVar22.z);
			}
			else if (vVar22.y == 2038990430)
			{
				iVar32 = (iVar32 + vVar22.z);
			}
			else if (vVar22.y == 983649838)
			{
				iVar33 = (iVar33 + vVar22.z);
			}
			if (vVar22.y == 1465168878)
			{
				iVar30 = (iVar30 + BUILTIN::FLOOR((BUILTIN::TO_FLOAT(vVar22.z) * (fVar34 / 100f))));
			}
			else if (vVar22.y == -1103443887)
			{
				iVar32 = (iVar32 + BUILTIN::FLOOR((BUILTIN::TO_FLOAT(vVar22.z) * (fVar34 / 100f))));
			}
			else if (vVar22.y == -800430237)
			{
				iVar33 = (iVar33 + BUILTIN::FLOOR((BUILTIN::TO_FLOAT(vVar22.z) * (fVar34 / 100f))));
			}
		}
		iVar37++;
	}
	iVar38 = 0;
	iVar39 = 0;
	iVar40 = 0;
	Var41 = { func_130(iParam0, 0, 0) };
	Var46 = { func_65(iParam0, Var41, Var41.f_4, 0) };
	iVar50 = func_131(iParam0);
	iVar51 = 0;
	while (iVar51 < iVar50)
	{
		iVar52 = func_132(iParam0, iVar51);
		if (iVar52 != 0)
		{
			iVar53 = func_133(Var46, iVar52, 0, -1);
			if (func_69(iVar53, 0))
			{
				if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iVar53, &Var0))
				{
					iVar37 = 0;
					iVar37 = 0;
					while (iVar37 < Var0)
					{
						if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var0.f_1[iVar37], &vVar22))
						{
						}
						else if (vVar22.y == 1999781523)
						{
							iVar38 = (iVar38 + vVar22.z);
						}
						else if (vVar22.y == 1173003838)
						{
							iVar40 = (iVar40 + vVar22.z);
						}
						else if (vVar22.y == -1657343230)
						{
							iVar39 = (iVar39 + vVar22.z);
						}
						iVar37++;
					}
				}
			}
		}
		iVar51++;
	}
	iVar54 = (iVar29 + iVar38);
	iVar55 = (iVar30 + iVar39);
	iVar56 = (iVar33 + iVar40);
	*uParam1 = iVar54;
	uParam1->f_1 = iVar55;
	uParam1->f_4 = iVar56;
	uParam1->f_2 = iVar31;
	uParam1->f_3 = iVar32;
	return true;
}

bool func_121(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_79(iParam0))
	{
		return false;
	}
	Var0 = { func_65(iParam0, func_64(0), iParam1, 0) };
	if (!func_66(&Var0))
	{
		return false;
	}
	if (!func_134(iParam0, 1728382685 /* GXTEntry: "Right" */, 0) && !func_134(iParam0, -649335959 /* GXTEntry: "Left" */, 0))
	{
		return false;
	}
	iVar5 = func_102(iParam0);
	iVar6 = 0;
	while (iVar6 < iVar5)
	{
		if (!func_103(iParam0, iVar6, &iVar4))
		{
		}
		else if (iVar6 == 0)
		{
			uParam2->f_36 = func_104(iVar4);
			uParam2->f_35 = func_135(&Var0, iVar4) == 0;
			if (!func_136(iVar4, &(uParam2->f_37)))
			{
			}
			if (!func_137(iVar4, &(uParam2->f_38)))
			{
			}
		}
		else if (iVar6 == 1)
		{
			uParam2->f_40 = func_104(iVar4);
			uParam2->f_39 = func_135(&Var0, iVar4) == 0;
			if (!func_136(iVar4, &(uParam2->f_41)))
			{
			}
			if (!func_137(iVar4, &(uParam2->f_42)))
			{
			}
		}
		iVar6++;
	}
	uParam2->f_44 = 1;
	uParam2->f_43 = func_138(&Var0) == 0;
	uParam2->f_45 = 1039601264; /* GXTEntry: "Store in Locker" */
	uParam2->f_46 = -1073027202;
	uParam2->f_48 = 1;
	uParam2->f_47 = func_139(&Var0) == 0;
	uParam2->f_49 = 1901059961; /* GXTEntry: "Stow on your horse" */
	uParam2->f_50 = -1103499950;
	return true;
}

bool func_122(int iParam0, var uParam1)
{
	var uVar0;
	var uVar1;

	if (!func_140(iParam0, &uVar0, &uVar1))
	{
		uParam1->f_26 = 0;
		return false;
	}
	uParam1->f_26 = 1;
	uParam1->f_25 = uVar0;
	uParam1->f_24 = uVar1;
	return true;
}

char* func_123(int iParam0)
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

int func_124(var uParam0, var uParam1, char[32] cParam2, var uParam10)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam1))
	{
		return 0;
	}
	func_141(uParam0, uParam1, cParam2, *uParam10);
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		return 0;
	}
	uParam0->f_22 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_123(9), uParam10->f_27);
	uParam0->f_23 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_123(10), uParam10->f_28);
	uParam0->f_24 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_123(11), uParam10->f_29);
	uParam0->f_25 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "stat_damage", uParam10->f_30);
	uParam0->f_26 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "stat_range", uParam10->f_31);
	uParam0->f_27 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "stat_accuracy", uParam10->f_32);
	uParam0->f_28 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "stat_firerate", uParam10->f_33);
	uParam0->f_29 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "stat_reload", uParam10->f_34);
	uParam0->f_34 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_toggle_label", uParam10->f_37);
	uParam0->f_35 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_toggle_enabled", uParam10->f_35);
	uParam0->f_36 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_toggle_visible", uParam10->f_36);
	uParam0->f_37 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_toggle_hash", uParam10->f_38);
	uParam0->f_30 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_option_label", uParam10->f_41);
	uParam0->f_31 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_option_enabled", uParam10->f_39);
	uParam0->f_32 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_option_visible", uParam10->f_40);
	uParam0->f_33 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_option_hash", uParam10->f_42);
	uParam0->f_38 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_dleft_label", uParam10->f_45);
	uParam0->f_39 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_dleft_enabled", uParam10->f_43);
	uParam0->f_40 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_dleft_visible", uParam10->f_44);
	uParam0->f_41 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_dleft_hash", uParam10->f_46);
	uParam0->f_42 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_dright_label", uParam10->f_49);
	uParam0->f_43 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_dright_enabled", uParam10->f_47);
	uParam0->f_44 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_dright_visible", uParam10->f_48);
	uParam0->f_45 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_dright_hash", uParam10->f_50);
	uParam0->f_46 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "inventory_item", uParam10->f_51);
	uParam0->f_47 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "inventory_item_slot", uParam10->f_52);
	return 1;
}

bool func_125()
{
	return (func_142(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_133(func_65(joaat("WARDROBE"), func_98(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_126()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	Var4.f_9 = -1591664384;
	if (func_77("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_78(&Var4, iVar2, iVar0, iVar1))
			{
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(Var4.f_4))
			{
				iVar3++;
			}
			iVar2++;
		}
		func_84(iVar0);
	}
	return iVar3;
}

int func_127(int iParam0)
{
	int iVar0;

	if (!func_69(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_143(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

bool func_128(int iParam0)
{
	return func_144(iParam0) == joaat("WEAPON");
}

struct<2> func_129(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	return Var0;
}

struct<5> func_130(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_98(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_144(iParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_65(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_64(bParam1) };
			if (bParam2 && func_145(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_146(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_146(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_147(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_148(bParam1) };
			switch (func_149(iParam0))
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
			if (func_150(iParam0, -1823706425))
			{
				Var0 = { func_65(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_150(iParam0, -1483207246))
			{
				Var0 = { func_65(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1911121386))
			{
				Var0 = { func_65(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_150(iParam0, -1653629781))
			{
				Var0 = { func_65(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_151(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_150(iParam0, -1653629781))
			{
				Var0 = { func_65(1384535894, Var0, 1784584921, bParam1) };
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

int func_131(int iParam0)
{
	int iVar0;

	if (!func_69(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_149(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

int func_132(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 0)
	{
		iVar0 = func_149(iParam0);
		if (iVar0 != 0)
		{
			if (iParam1 >= 0 && iParam1 < func_131(iParam0))
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar0, iParam1, &uVar1))
				{
					return uVar1;
				}
			}
		}
	}
	return 0;
}

int func_133(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_152(&uParam0, iParam4, bParam5, iParam6);
}

bool func_134(int iParam0, int iParam1, bool bParam2)
{
	struct<10> Var0;
	var uVar22;

	Var0.f_9 = -1591664384;
	if (!func_69(iParam0, 0))
	{
		return false;
	}
	if (!func_153(iParam0, &uVar22, &Var0, iParam1))
	{
		return false;
	}
	if (!bParam2)
	{
		if (func_147(iParam0, &Var0, iParam1))
		{
			return false;
		}
	}
	return true;
}

int func_135(var uParam0, int iParam1)
{
	struct<10> Var0;
	var uVar22;

	if (!func_66(uParam0))
	{
		return 1;
	}
	Var0.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_97(0), uParam0, &Var0, 22, 1))
	{
		return 2;
	}
	if (!WEAPON::_GET_PED_WEAPON_INVENTORY_UID(Global_34, iParam1, &uVar22))
	{
	}
	if (func_81(uParam0) == 0)
	{
		if (func_66(&uVar22))
		{
			if (func_154(uParam0, &uVar22))
			{
				return 3;
			}
		}
		switch (func_155(uParam0))
		{
			case 3:
				return 5;
		}
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(Var0.f_4) && iParam1 == 9)
	{
		if (!func_115())
		{
			return 4;
		}
	}
	return 0;
}

bool func_136(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 4:
			*uParam1 = 1000849983; /* GXTEntry: "Equip to Melee" */
			return true;
		case 3:
			*uParam1 = -327947319; /* GXTEntry: "Equip Off-Hand Sidearm" */
			return true;
		case 2:
			*uParam1 = 1588146127; /* GXTEntry: "Equip Sidearm" */
			return true;
		case 7:
		case 9:
			*uParam1 = 297513196; /* GXTEntry: "Equip to Back" */
			return true;
		case 8:
		case 10:
			*uParam1 = 108789798; /* GXTEntry: "Equip to Shoulder" */
			return true;
		default:
			break;
	}
	return false;
}

bool func_137(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 4:
			*uParam1 = 941907253;
			return true;
		case 3:
			*uParam1 = -1756222973;
			return true;
		case 2:
			*uParam1 = -1313710397;
			return true;
		case 9:
			*uParam1 = 1554581363;
			return true;
		case 10:
			*uParam1 = -946029012;
			return true;
		case 7:
			*uParam1 = -466398939;
			return true;
		case 8:
			*uParam1 = -260514364;
			return true;
		default:
			break;
	}
	return false;
}

int func_138(var uParam0)
{
	struct<10> Var0;

	if (!func_66(uParam0))
	{
		return 1;
	}
	Var0.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_97(0), uParam0, &Var0, 22, 1))
	{
		return 2;
	}
	if (func_81(uParam0) == 2)
	{
		return 3;
	}
	if (func_81(uParam0) == 0)
	{
		switch (func_155(uParam0))
		{
			case 1:
				return 1;
			case 2:
				return 2;
			case 3:
				return 4;
		}
	}
	return 0;
}

int func_139(var uParam0)
{
	struct<10> Var0;

	if (!func_66(uParam0))
	{
		return 1;
	}
	Var0.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_97(0), uParam0, &Var0, 22, 1))
	{
		return 1;
	}
	if (func_81(uParam0) == 1)
	{
		return 3;
	}
	if (WEAPON::_IS_WEAPON_MELEE(Var0.f_4))
	{
		return 5;
	}
	if (func_81(uParam0) == 0)
	{
		switch (func_155(uParam0))
		{
			case 1:
				return 1;
			case 2:
				return 2;
			case 3:
				return 4;
		}
	}
	return 0;
}

bool func_140(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam2 = joaat("MENU_TEXTURES");
			*uParam1 = joaat("MENU_ICON_HOLSTER");
			return true;
		case 1:
			*uParam2 = joaat("MENU_TEXTURES");
			*uParam1 = joaat("MENU_ICON_ON_HORSE");
			return true;
		case 2:
			*uParam2 = joaat("MENU_TEXTURES");
			*uParam1 = -229529296;
			return true;
		default:
			break;
	}
	return false;
}

void func_141(var uParam0, var uParam1, char[32] cParam2, struct<27> Param10)
{
	func_156(uParam0, uParam1, cParam2, Param10);
	uParam0->f_18 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_123(15), &(Param10.f_16));
	uParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_123(21), Param10.f_24);
	uParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_123(22), Param10.f_25);
	uParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_123(23), Param10.f_26);
}

int func_142(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_157(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_97(bParam1), iParam0, iParam3);
}

int func_143(int iParam0)
{
	switch (iParam0)
	{
		case joaat("KIT_POUCH_REMEDIES"):
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
		case joaat("KIT_POUCH_INGREDIENTS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
		case joaat("KIT_POUCH_MATERIALS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
		case joaat("KIT_POUCH_VALUABLES"):
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
		case joaat("KIT_POUCH_KIT"):
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
		case joaat("KIT_POUCH_PROVISIONS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
	}
	return 0;
}

int func_144(int iParam0)
{
	vector3 vVar0;

	if (!func_69(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_145(int iParam0, bool bParam1)
{
	if (func_149(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_125();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_146(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_158(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_147(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_153(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_148(bool bParam0)
{
	int iVar0;

	iVar0 = func_97(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_8)))
		{
			Global_1293346.f_8 = { func_65(271701509, func_98(bParam0), 12999093, 0) };
		}
		return Global_1293346.f_8;
	}
	return func_65(271701509, func_98(bParam0), 12999093, 0);
}

int func_149(int iParam0)
{
	struct<2> Var0;

	if (!func_69(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_150(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_149(iParam0);
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
			if (func_159(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_151(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_160(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_152(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_161(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_153(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_97(0);
	*uParam1 = { func_65(iParam0, func_64(0), iParam3, 0) };
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

bool func_154(var uParam0, var uParam1)
{
	if (((*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1) && uParam0->f_2 == uParam1->f_2) && uParam0->f_3 == uParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_155(var uParam0)
{
	struct<15> Var0;
	int iVar22;

	if (!func_66(uParam0))
	{
		return 1;
	}
	Var0.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_97(0), uParam0, &Var0, 22, 1))
	{
		return 2;
	}
	iVar22 = Var0.f_14;
	if (WEAPON::_IS_WEAPON_ONE_HANDED(Var0.f_4))
	{
		if (iVar22 == 2)
		{
			return 3;
		}
	}
	else if (WEAPON::_IS_WEAPON_MELEE(Var0.f_4))
	{
		if (iVar22 == 4)
		{
			return 3;
		}
	}
	return 0;
}

void func_156(var uParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<16> Param10)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1, &cParam2);
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_123(0), Param10);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_123(1), Param10.f_1);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_123(2), Param10.f_2);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_123(54), Param10.f_3);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_123(55), Param10.f_4);
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_123(57), Param10.f_5);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_123(56), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = joaat("IB_SELECT");
	}
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_123(58), Param10.f_7);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_123(59), Param10.f_8);
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_123(60), Param10.f_9);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_123(61), Param10.f_10);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_123(67), Param10.f_11);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_123(62), Param10.f_12);
	if (Param10.f_13 == 0)
	{
		Param10.f_13 = joaat("IB_SELECT");
	}
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_123(64), Param10.f_13);
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_123(65), Param10.f_14);
	uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_123(66), Param10.f_15);
}

bool func_157(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_158(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_69(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_162(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_65(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_97(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_97(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_159(int iParam0, int iParam1, int iParam2)
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

bool func_160(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_97(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_161(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_97(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_160(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

int func_162(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

