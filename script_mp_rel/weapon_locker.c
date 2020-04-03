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
	var uLocal_35 = 0;
	var uLocal_36 = 4;
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
	var uLocal_118 = 0;
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
	if (!func_16(1937840514))
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
		if (!UIAPPS::_IS_APP_ACTIVE(1937840514))
		{
			bVar0 = true;
		}
		if (!bVar0)
		{
			func_17(iParam0);
			func_9(iParam0, UIAPPS::_0x96FD694FE5BE55DC(1937840514));
			func_18(iParam0);
		}
		BUILTIN::WAIT(0);
	}
}

void func_6(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

int func_7(var uParam0)
{
	uParam0->f_94 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "weapon_locker");
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_94))
	{
		return 0;
	}
	uParam0->f_94.f_1 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_94, "header_text", MISC::_CREATE_VAR_STRING(2, "WL_HEADER"));
	uParam0->f_94.f_2 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_94, "footer_text", "Footer text");
	uParam0->f_94.f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_94, "footer_color", joaat("COLOR_WHITE"));
	return 1;
}

int func_8(var uParam0)
{
	var uVar0;
	char* sVar6;
	int iVar7;

	if (!func_19(uParam0, &(uParam0->f_94)))
	{
		return 0;
	}
	if (!func_20(&(uParam0->f_2.f_2), &(uParam0->f_2), &uVar0))
	{
		return 0;
	}
	if (func_21(&(uParam0->f_2.f_13), &(uParam0->f_2), 1673159803))
	{
		func_22(&(uParam0->f_2.f_13));
		iVar7 = 0;
		while (iVar7 < 4)
		{
			sVar6 = func_23(iVar7);
			sVar6 = MISC::_CREATE_VAR_STRING(2, sVar6);
			if (!func_24(&(uParam0->f_2.f_13), &(uParam0->f_2.f_21), iVar7, sVar6))
			{
			}
			iVar7++;
		}
	}
	else
	{
		return 0;
	}
	return 1;
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
	if (!Global_1099294->f_16)
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
	TELEMETRY::_0x415FE28ED44BFF14();
}

void func_13(int iParam0)
{
	if (!UIAPPS::_IS_APP_RUNNING(1937840514))
	{
		return;
	}
	UIAPPS::_CLOSE_APP_BY_HASH(1937840514);
}

int func_14(int iParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_94))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0->f_94);
	return 1;
}

int func_15(int iParam0)
{
	if (!func_33(iParam0))
	{
	}
	return 1;
}

int func_16(int iParam0)
{
	if (!UIAPPS::_CAN_LAUNCH_APP_BY_HASH(iParam0))
	{
		return 0;
	}
	switch (UIAPPS::_LAUNCH_APP_BY_HASH(1937840514))
	{
		case 0:
			return 1;
		case 1:
			return 0;
		case 2:
			return 0;
		default:
			break;
	}
	return 0;
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

int func_19(var uParam0, var uParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam1))
	{
		return 0;
	}
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam1, "weapons_page");
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2))
	{
		return 0;
	}
	uParam0->f_2.f_1 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_2, "weapon_list");
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2.f_1))
	{
		DATABINDING::_0x3BF0767CF33FCC88(uParam0->f_2.f_1);
	}
	uParam0->f_2.f_90 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2, "weapon_list_hint_visible", 0);
	uParam0->f_2.f_91 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2, "weapon_list_hint_label", 0);
	return 1;
}

int func_20(var uParam0, var uParam1, var uParam2)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam1))
	{
		return 0;
	}
	*uParam0 = *uParam1;
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam1, "weapon_stat_visible", *uParam2);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "WeaponPowerNew", uParam2->f_1);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "WeaponRangeNew", uParam2->f_2);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "WeaponAccuracyNew", uParam2->f_3);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "WeaponFireRateNew", uParam2->f_4);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "WeaponReloadNew", uParam2->f_5);
	return 1;
}

int func_21(var uParam0, var uParam1, int iParam2)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam1))
	{
		return 0;
	}
	*uParam0 = *uParam1;
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "tabCount", 0);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam1, "tabName", "");
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam1, "tabIndex", 0);
	uParam0->f_7 = iParam2;
	uParam0->f_5 = 1;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	return 1;
}

void func_22(var uParam0)
{
	uParam0->f_4 = 0;
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

int func_24(var uParam0, var uParam1, int iParam2, char* sParam3)
{
	int iVar0;

	iVar0 = *uParam1;
	if (uParam0->f_4 >= iVar0)
	{
		return 0;
	}
	if (!uParam0->f_5)
	{
		return 0;
	}
	(*uParam1)[uParam0->f_4 /*17*/] = iParam2;
	((*uParam1)[uParam0->f_4 /*17*/])->f_1 = { func_38(sParam3) };
	uParam0->f_4++;
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_1, uParam0->f_4);
	return 1;
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
			func_42(&(iParam0->f_2.f_13), &(iParam0->f_2.f_21));
			break;
	}
}

bool func_30()
{
	return !Global_1572887->f_9;
}

int func_31()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

void func_32(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_33(int iParam0)
{
	return 1;
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
	return iParam0->f_98 != 0;
}

struct<4> func_36(int* iParam0)
{
	return iParam0->f_98;
}

void func_37(int* iParam0)
{
	var uVar0;

	iParam0->f_98 = 0;
	iParam0->f_98.f_2 = 0;
	iParam0->f_98.f_1 = 0;
	iParam0->f_98.f_3 = uVar0;
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
	if (!uParam0->f_5)
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
	if (func_54(iParam0, 0))
	{
		func_50(iParam0, 0, 0);
		iVar0 = func_55(iParam0);
		if (!func_56(iParam0, iVar0))
		{
		}
		func_57(iParam0);
		func_58(iParam0, iVar0);
		func_59(iParam0, iVar0);
	}
}

void func_42(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!uParam0->f_6)
	{
		return;
	}
	if (!uParam0->f_5)
	{
		uParam0->f_6 = 0;
		return;
	}
	iVar0 = func_60(uParam0);
	if (iVar0 == -1)
	{
		uParam0->f_6 = 0;
		return;
	}
	iVar1 = *uParam1;
	iVar2 = func_61(uParam0);
	iVar3 = (iVar2 - 1);
	if (iVar0 < 0 || iVar0 > iVar3)
	{
		uParam0->f_6 = 0;
		return;
	}
	if (iVar1 < iVar2)
	{
		uParam0->f_6 = 0;
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, &(((*uParam1)[iVar0 /*17*/])->f_1));
	uParam0->f_6 = 0;
}

int func_43(int* iParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_94.f_2))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(iParam0->f_94.f_2, "");
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
	MISC::_COPY_MEMORY(&(iParam0->f_102), uParam1, 4);
	return 1;
}

int func_46(int* iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam1))
	{
		return 0;
	}
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam1, "inventory_item");
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam1, "inventory_item_slot");
	Var2 = { func_63(iVar0, func_62(0), iVar1, 0) };
	if (!func_64(&Var2))
	{
		return 0;
	}
	func_65(iParam0, Var2);
	return 1;
}

int func_47(var uParam0, var uParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam1))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_2, DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "stat_damage"));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_3, DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "stat_range"));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_4, DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "stat_accuracy"));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_5, DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "stat_firerate"));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_6, DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "stat_reload"));
	return 1;
}

void func_48(int* iParam0, int iParam1)
{
	switch (iParam1)
	{
		case -2060496899:
		case -1694113483:
		case -1174213347:
		case -337881065:
			if (!func_66(iParam0, iParam1))
			{
				func_43(iParam0);
			}
			break;
		default:
			func_43(iParam0);
			break;
	}
}

int func_49(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		return 0;
	}
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item");
	if (!func_67(iVar0, 0))
	{
		return 0;
	}
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item_slot");
	if (!func_68(iVar0, iVar1, iParam1))
	{
		return 0;
	}
	return 1;
}

void func_50(int* iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_69(iParam0, iParam1);
	}
	else
	{
		func_70(iParam0, iParam1);
	}
}

int func_51(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		return 0;
	}
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item");
	if (!func_67(iVar0, 0))
	{
		return 0;
	}
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item_slot");
	Var2 = { func_63(iVar0, func_62(0), iVar1, 0) };
	if (!func_64(&Var2))
	{
		return 0;
	}
	if (!func_71(&Var2))
	{
		return 0;
	}
	return 1;
}

int func_52(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		return 0;
	}
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item");
	if (!func_67(iVar0, 0))
	{
		return 0;
	}
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "inventory_item_slot");
	Var2 = { func_63(iVar0, func_62(0), iVar1, 0) };
	if (!func_64(&Var2))
	{
		return 0;
	}
	if (!func_72(&Var2))
	{
		return 0;
	}
	return 1;
}

void func_53(int* iParam0)
{
	func_73(&(iParam0->f_2.f_9));
}

bool func_54(int* iParam0, int iParam1)
{
	return func_74(*iParam0, iParam1);
}

int func_55(int* iParam0)
{
	return func_75(&(iParam0->f_2.f_13), &(iParam0->f_2.f_21));
}

int func_56(int* iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;

	if (!func_76("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 1))
	{
		return 0;
	}
	Var2.f_9 = -1591664384;
	iVar17 = 0;
	iVar19 = 0;
	while (iVar19 < 7)
	{
		iVar18 = 0;
		while (iVar18 < iVar1)
		{
			if (!func_77(&Var2, iVar18, iVar0, iVar1))
			{
			}
			else if (!func_78(Var2.f_4))
			{
			}
			else if (func_79(Var2.f_4) != iVar19)
			{
			}
			else
			{
				iVar16 = func_80(&Var2);
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
									else if (!func_81(iParam0, iVar17, Var2.f_4, Var2.f_9, iVar16, iParam1))
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
							if (!func_82(iParam0, iVar17))
							{
							}
							if (!func_83(iVar0))
							{
							}
							return 1;
						}
					}
				}
			}

void func_57(int* iParam0)
{
	int iVar0;

	iVar0 = func_84(iParam0);
	func_85(&(iParam0->f_2.f_2), func_84(iParam0) > 0);
	if (iVar0 == 0)
	{
		func_86(&(iParam0->f_2.f_2));
	}
}

void func_58(int* iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_84(iParam0);
	switch (iParam1)
	{
		case 1:
			func_87(iParam0, iVar0 == 0);
			func_88(iParam0, -2012945523 /* GXTEntry: "You have no weapons in your locker." */);
			break;
		case 2:
			func_87(iParam0, iVar0 == 0);
			func_88(iParam0, -1705332461 /* GXTEntry: "You have no weapons on your horse." */);
			break;
		default:
			func_87(iParam0, 0);
			break;
	}
}

void func_59(int* iParam0, int iParam1)
{
	int iVar0;
	struct<4> Var1;

	iVar0 = func_84(iParam0);
	if (iVar0 > 0)
	{
		Var1 = -1740156697;
		if (func_44(&(iParam0->f_2.f_13)))
		{
			Var1.f_1 = 0;
		}
		else
		{
			Var1.f_1 = func_89(iParam0);
			if (Var1.f_1 >= iVar0)
			{
				Var1.f_1 = (iVar0 - 1);
			}
		}
		Var1.f_2 = func_90(iParam1);
		if (!func_91(iParam0, Var1.f_1, &(Var1.f_3)))
		{
		}
		if (!func_92(iParam0, &Var1))
		{
		}
	}
}

int func_60(var uParam0)
{
	if (!uParam0->f_5)
	{
		return -1;
	}
	return DATABINDING::_DATABINDING_READ_DATA_INT(uParam0->f_3);
}

int func_61(var uParam0)
{
	return uParam0->f_4;
}

struct<4> func_62(bool bParam0)
{
	int iVar0;

	iVar0 = func_93(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_4)))
		{
			Global_1272170->f_4 = { func_63(923904168, func_94(bParam0), -740156546, bParam0) };
		}
		return Global_1272170->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_16)))
		{
			Global_1272170->f_16 = { func_63(923904168, func_94(bParam0), -740156546, 0) };
		}
		return Global_1272170->f_16;
	}
	return func_63(923904168, func_94(bParam0), -740156546, 0);
}

struct<4> func_63(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_67(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_93(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_64(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_65(int* iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	if (!func_64(&uParam1))
	{
		return 0;
	}
	MISC::_COPY_MEMORY(&(iParam0->f_2.f_9), &uParam1, 4);
	return 1;
}

int func_66(int* iParam0, int iParam1)
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
			return 0;
	}
	Var1 = { func_95(iParam0) };
	if (func_64(&Var1))
	{
		Var5.f_9 = -1591664384;
		if (INVENTORY::_0x025A1B1FB03FBF61(2, &Var1, &Var5, 22, 1))
		{
		}
		switch (func_96(&Var1))
		{
			case 3:
				func_97(iParam0, MISC::_CREATE_VAR_STRING(2, "WL_FOOTER_ALWAYS_MELEE"));
				return 1;
			case 4:
			case 5:
				func_97(iParam0, MISC::_CREATE_VAR_STRING(2, "WL_FOOTER_ALWAYS_SIDEARMS"));
				return 1;
		}
	}
	if (func_84(iParam0) > 0)
	{
		func_97(iParam0, MISC::_CREATE_VAR_STRING(2, sVar0, func_84(iParam0)));
	}
	else
	{
		func_43(iParam0);
	}
	return 1;
}

int func_67(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_68(int iParam0, int iParam1, int iParam2)
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

	Var1 = { func_63(iParam0, func_62(0), iParam1, 0) };
	Var5.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(2, &Var1, &Var5, 22, 1))
	{
		return 0;
	}
	iVar0 = Var5.f_14;
	Var28.f_9 = -1591664384;
	if (WEAPON::_0x6929E22158E52265(Global_34, iParam2, &uVar50))
	{
		if (!INVENTORY::_0x025A1B1FB03FBF61(2, &uVar50, &Var28, 22, 1))
		{
			return 0;
		}
		iVar27 = Var28.f_14;
	}
	bVar54 = false;
	if (func_78(Var28.f_4))
	{
		Var59.f_9 = -1591664384;
		iVar83 = func_98(iParam0);
		iVar84 = 0;
		while (iVar84 < iVar83)
		{
			if (iVar84 >= (iVar83 - 1))
			{
			}
			else if (!func_99(iParam0, iVar84, &iVar82))
			{
			}
			else if (iParam2 != iVar82)
			{
			}
			else if (!func_99(iParam0, iVar84 + 1, &iVar81))
			{
			}
			else if (!func_100(iVar81))
			{
			}
			else
			{
				if (WEAPON::_0x6929E22158E52265(Global_34, iVar81, &uVar55))
				{
					if (INVENTORY::_0x025A1B1FB03FBF61(2, &uVar55, &Var59, 22, 1))
					{
						if (func_78(Var59.f_4))
						{
						}
						else
						{
							Jump @289; //curOff = 283
							Jump @316; //curOff = 286
							if (func_101(&Var28, &iVar81, 1))
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
							if (func_80(&Var5) == 2)
							{
								func_102(Var5.f_4);
							}
							if (func_101(&Var1, &iParam2, 0))
							{
							}
							if (!bVar54)
							{
								if (func_64(&uVar50))
								{
									if (func_103(iParam0, iVar27, iVar0))
									{
										if (func_101(&Var28, &iVar0, 1))
										{
										}
									}
								}
							}
							return 1;
						}
					}
				}
			}
		}
	}

void func_69(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_70(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_71(var uParam0)
{
	struct<22> Var0;

	Var0.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(2, uParam0, &Var0, 22, 1))
	{
		return 0;
	}
	Var0.f_21 = 0;
	if (!INVENTORY::_0xD80A8854DB5CFBA5(2, uParam0, &Var0, 22))
	{
		return 0;
	}
	func_104(Var0.f_4);
	if (Var0.f_14 >= 0)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("weapon_unarmed"), true, Var0.f_14, false, false);
	}
	return 1;
}

int func_72(var uParam0)
{
	struct<22> Var0;

	Var0.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(2, uParam0, &Var0, 22, 1))
	{
		return 0;
	}
	Var0.f_21 = 1;
	if (func_80(&Var0) == 2)
	{
		func_102(Var0.f_4);
	}
	if (!INVENTORY::_0xD80A8854DB5CFBA5(2, uParam0, &Var0, 22))
	{
		return 0;
	}
	if (Var0.f_14 >= 0)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("weapon_unarmed"), true, Var0.f_14, false, false);
	}
	return 1;
}

void func_73(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

bool func_74(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

int func_75(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (!uParam0->f_5)
	{
		return -1;
	}
	iVar0 = *uParam1;
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT(uParam0->f_3);
	if (iVar1 < 0 || iVar1 >= iVar0)
	{
		return -1;
	}
	return uParam1[iVar1 /*17*/];
}

int func_76(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_93(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_77(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_78(int iParam0)
{
	if (!func_67(iParam0, 0))
	{
		return 0;
	}
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (!WEAPON::_0x705BE297EEBDB95D(iParam0) && !WEAPON::_0xC4DEC3CA8C365A5D(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_79(int iParam0)
{
	if (!func_78(iParam0))
	{
		return -1;
	}
	if (WEAPON::_0xDDC64F5E31EEDAB6(iParam0))
	{
		return 0;
	}
	else if (WEAPON::_0xC212F1D05A8232BB(iParam0))
	{
		return 1;
	}
	else if (WEAPON::_0xC75386174ECE95D5(iParam0))
	{
		return 2;
	}
	else if (WEAPON::_0xDDB2578E95EF7138(iParam0))
	{
		return 3;
	}
	else if (WEAPON::_0x0A82317B7EBFC420(iParam0))
	{
		return 4;
	}
	else if (WEAPON::_0xC4DEC3CA8C365A5D(iParam0))
	{
		return 5;
	}
	return 6;
}

int func_80(var uParam0)
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

int func_81(int* iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<13> Var0;
	bool bVar53;
	var uVar54;

	if (!func_78(iParam2))
	{
		return 0;
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
	if (!func_105(iParam2, iParam3, &Var0, iParam4, iParam5))
	{
		return 0;
	}
	bVar53 = true;
	if (iParam1 < func_84(iParam0))
	{
		if (func_91(iParam0, iParam1, &uVar54))
		{
			if (func_106(&uVar54, &Var0))
			{
				bVar53 = false;
			}
		}
	}
	if (bVar53)
	{
		if (!func_107(iParam0, &Var0))
		{
			return 0;
		}
	}
	return 1;
}

int func_82(int* iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_2.f_1))
	{
		return 0;
	}
	iVar0 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(iParam0->f_2.f_1);
	if (iVar0 == 0)
	{
		return 1;
	}
	if (iParam1 < 0 || iParam1 > iVar0)
	{
		return 0;
	}
	iVar1 = iVar0;
	while (iVar1 >= iParam1)
	{
		DATABINDING::_0x6318FB3BE37E11B3(iParam0->f_2.f_1, iVar1);
		iVar1 = (iVar1 + -1);
	}
	return 1;
}

int func_83(int iParam0)
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

int func_84(int* iParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_2.f_1))
	{
		return 0;
	}
	return DATABINDING::_DATABINDING_GET_ARRAY_COUNT(iParam0->f_2.f_1);
}

int func_85(var uParam0, bool bParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_1, bParam1);
	return 1;
}

int func_86(var uParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_2, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_3, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_4, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_5, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_6, 0);
	return 1;
}

int func_87(int* iParam0, bool bParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_2.f_90))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(iParam0->f_2.f_90, bParam1);
	return 1;
}

int func_88(int* iParam0, int iParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_2.f_91))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(iParam0->f_2.f_91, iParam1);
	return 1;
}

var func_89(int* iParam0)
{
	return iParam0->f_102.f_1;
}

int func_90(int iParam0)
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

int func_91(int* iParam0, int iParam1, var uParam2)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_2.f_1))
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= DATABINDING::_DATABINDING_GET_ARRAY_COUNT(iParam0->f_2.f_1))
	{
		return 0;
	}
	*uParam2 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(iParam0->f_2.f_1, iParam1);
	return 1;
}

int func_92(int* iParam0, var uParam1)
{
	if (*uParam1 == 0)
	{
		return 0;
	}
	if (iParam0->f_98 != 0)
	{
		return 0;
	}
	MISC::_COPY_MEMORY(&(iParam0->f_98), uParam1, 4);
	return 1;
}

int func_93(bool bParam0)
{
	if (func_108() == -1)
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

struct<4> func_94(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_93(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1272170))
			{
				*Global_1272170 = { func_63(joaat("character"), func_109(), -1591664384, bParam0) };
			}
			return *Global_1272170;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_12)))
			{
				Global_1272170->f_12 = { func_63(joaat("character"), func_109(), -1591664384, 0) };
			}
			return Global_1272170->f_12;
		}
	}
	return func_63(joaat("character"), func_109(), -1591664384, bParam0);
}

struct<4> func_95(int* iParam0)
{
	return iParam0->f_2.f_9;
}

int func_96(var uParam0)
{
	struct<15> Var0;
	int iVar22;

	if (!func_64(uParam0))
	{
		return 1;
	}
	Var0.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_93(0), uParam0, &Var0, 22, 1))
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

int func_97(int* iParam0, char* sParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_94.f_2))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(iParam0->f_94.f_2, sParam1);
	return 1;
}

int func_98(int iParam0)
{
	if (!func_67(iParam0, 0))
	{
		return 0;
	}
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_0xC4DEC3CA8C365A5D(iParam0))
	{
		return 2;
	}
	else if (WEAPON::_0x0556E9D2ECF39D01(iParam0))
	{
		return 2;
	}
	else if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		return 2;
	}
	else if (WEAPON::_0x959383DCD42040DA(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_99(int iParam0, int iParam1, int iParam2)
{
	if (!func_67(iParam0, 0))
	{
		return 0;
	}
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_0xC4DEC3CA8C365A5D(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				*iParam2 = 8;
				return 1;
			case 1:
				*iParam2 = 7;
				return 1;
			default:
				break;
		}
	}
	else if (WEAPON::_0x0556E9D2ECF39D01(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				*iParam2 = 10;
				return 1;
			case 1:
				*iParam2 = 9;
				return 1;
			default:
				break;
		}
	}
	else if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				*iParam2 = 2;
				return 1;
			case 1:
				*iParam2 = 3;
				return 1;
			default:
				break;
		}
	}
	else if (WEAPON::_0x959383DCD42040DA(iParam0))
	{
		*iParam2 = 4;
		return 1;
	}
	return 0;
}

int func_100(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return func_110();
	}
	return 1;
}

int func_101(var uParam0, int iParam1, bool bParam2)
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
		return 0;
	}
	Var0.f_21 = 1;
	if (!INVENTORY::_0xD80A8854DB5CFBA5(2, uParam0, &Var0, 22))
	{
		return 0;
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
		return 0;
	}
	if (bParam2)
	{
		if (func_111(Var22.f_6, &iVar44))
		{
			StringCopy(&cVar45, func_112(Var22.f_4), 64);
			StringCopy(&cVar53, HUD::_GET_LABEL_TEXT_BY_HASH(iVar44), 64);
			func_113(MISC::_CREATE_VAR_STRING(42, "WL_TICKER_EQUIPPED_TO", &cVar45, &cVar53), -2, 0, 0, 0, 1);
		}
	}
	return 1;
}

int func_102(int iParam0)
{
	if (!func_67(iParam0, 0))
	{
		return 0;
	}
	TELEMETRY::_0x317D9C9560529CC2(iParam0);
	return 1;
}

int func_103(int iParam0, int iParam1, int iParam2)
{
	if (!func_67(iParam0, 0))
	{
		return 0;
	}
	if (WEAPON::_0x0556E9D2ECF39D01(iParam0))
	{
		if (iParam1 == 10 && iParam2 == 9)
		{
			return 1;
		}
		if (iParam2 == 10 && iParam1 == 9)
		{
			return 1;
		}
	}
	return 0;
}

int func_104(int iParam0)
{
	if (!func_67(iParam0, 0))
	{
		return 0;
	}
	TELEMETRY::_0xC3ADF4880784FA9C(iParam0);
	return 1;
}

int func_105(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	struct<5> Var0;

	if (!func_78(iParam0))
	{
		return 0;
	}
	if (INVENTORY::_0xE787F05DFC977BDE(func_93(1), iParam0, 0) > 1)
	{
		if (func_114(iParam1, &(uParam2->f_28), &(uParam2->f_27)))
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
	StringCopy(&(uParam2->f_16), func_112(iParam0), 64);
	if (!func_115(iParam0, &Var0))
	{
	}
	uParam2->f_30 = Var0;
	uParam2->f_31 = Var0.f_1;
	uParam2->f_32 = Var0.f_4;
	uParam2->f_33 = Var0.f_2;
	uParam2->f_34 = Var0.f_3;
	uParam2->f_8 = 0;
	uParam2->f_9 = 0;
	if (!func_116(iParam0, iParam1, uParam2))
	{
		return 0;
	}
	if (!func_117(iParam3, uParam2))
	{
		return 0;
	}
	uParam2->f_51 = iParam0;
	uParam2->f_52 = iParam1;
	return 1;
}

int func_106(var uParam0, var uParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, func_118(0), *uParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, func_118(1), uParam1->f_1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_118(2), uParam1->f_2);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_118(54), uParam1->f_3);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_118(55), uParam1->f_4);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_118(57), uParam1->f_5);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_118(56), uParam1->f_6);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_118(58), uParam1->f_7);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, func_118(59), uParam1->f_8);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, func_118(60), uParam1->f_9);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_118(9), uParam1->f_27);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_118(10), uParam1->f_28);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, func_118(11), uParam1->f_29);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(*uParam0, func_118(15), &(uParam1->f_16));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_118(21), uParam1->f_24);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_118(22), uParam1->f_25);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, func_118(23), uParam1->f_26);
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
	return 1;
}

int func_107(int* iParam0, char[4] cParam1)
{
	char cVar0[64];
	var uVar8;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_2))
	{
		return 0;
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_2.f_1))
	{
		return 0;
	}
	StringCopy(&cVar0, "Entry_", 64);
	StringIntConCat(&cVar0, DATABINDING::_DATABINDING_GET_ARRAY_COUNT(iParam0->f_2.f_1), 64);
	func_119(&uVar8, iParam0->f_2.f_1, cVar0, cParam1);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(iParam0->f_2.f_1, -1, "pm_dynamic_text_and_end_image", uVar8);
	return 1;
}

int func_108()
{
	return Global_1572887->f_13;
}

struct<4> func_109()
{
	struct<4> Var0;

	return Var0;
}

int func_110()
{
	if (!func_120())
	{
		return 0;
	}
	if (func_121() < 2)
	{
		return 0;
	}
	return 1;
}

int func_111(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
			*iParam1 = 825261881; /* GXTEntry: "Melee" */
			return 1;
		case 3:
			*iParam1 = -2078679563; /* GXTEntry: "Off-Hand Sidearm" */
			return 1;
		case 2:
			*iParam1 = 258571561; /* GXTEntry: "Sidearm" */
			return 1;
		case 9:
			*iParam1 = 1282885388; /* GXTEntry: "Back" */
			return 1;
		case 10:
			*iParam1 = -1522249011; /* GXTEntry: "Shoulder" */
			return 1;
		default:
			break;
	}
	return 0;
}

char* func_112(int iParam0)
{
	int iVar0;

	if (!func_67(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_122(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

var func_113(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	uVar17 = _NAMESPACE71::_0xB2920B9760F0F36B(&Var0, &Var13, iParam5);
	return uVar17;
}

int func_114(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 1728382685: /* GXTEntry: "Right" */
			*uParam2 = 1210712530;
			*uParam1 = -2098954619;
			return 1;
		case -649335959: /* GXTEntry: "Left" */
			*uParam2 = 1210712530;
			*uParam1 = -1498731425;
			return 1;
		default:
			break;
	}
	return 0;
}

int func_115(int iParam0, var uParam1)
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

	if (!func_67(iParam0, 0))
	{
		return 0;
	}
	if (!func_123(iParam0))
	{
		return 0;
	}
	Var0.f_1 = 20;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam0, &Var0))
	{
		return 0;
	}
	if (Var0 <= 0)
	{
		return 0;
	}
	fVar34 = 100f;
	Var35 = { func_124(-664570214, WEAPON::_0x8EC44AE8DECFF841(iParam0)) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::STAT_ID_GET_FLOAT(&Var35, &fVar34);
	}
	iVar37 = 0;
	while (iVar37 < Var0)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var0.f_1[iVar37]), &vVar22))
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
	Var41 = { func_125(iParam0, 0, 0) };
	Var46 = { func_63(iParam0, Var41, Var41.f_4, 0) };
	iVar50 = func_126(iParam0);
	iVar51 = 0;
	while (iVar51 < iVar50)
	{
		iVar52 = func_127(iParam0, iVar51);
		if (iVar52 != 0)
		{
			iVar53 = func_128(Var46, iVar52, 0, -1);
			if (func_67(iVar53, 0))
			{
				if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iVar53, &Var0))
				{
					iVar37 = 0;
					iVar37 = 0;
					while (iVar37 < Var0)
					{
						if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var0.f_1[iVar37]), &vVar22))
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
	return 1;
}

int func_116(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_78(iParam0))
	{
		return 0;
	}
	Var0 = { func_63(iParam0, func_62(0), iParam1, 0) };
	if (!func_64(&Var0))
	{
		return 0;
	}
	if (!func_129(iParam0, 1728382685 /* GXTEntry: "Right" */, 0) && !func_129(iParam0, -649335959 /* GXTEntry: "Left" */, 0))
	{
		return 0;
	}
	iVar5 = func_98(iParam0);
	iVar6 = 0;
	while (iVar6 < iVar5)
	{
		if (!func_99(iParam0, iVar6, &iVar4))
		{
		}
		else if (iVar6 == 0)
		{
			uParam2->f_36 = func_100(iVar4);
			uParam2->f_35 = func_130(&Var0, iVar4) == 0;
			if (!func_131(iVar4, &(uParam2->f_37)))
			{
			}
			if (!func_132(iVar4, &(uParam2->f_38)))
			{
			}
		}
		else if (iVar6 == 1)
		{
			uParam2->f_40 = func_100(iVar4);
			uParam2->f_39 = func_130(&Var0, iVar4) == 0;
			if (!func_131(iVar4, &(uParam2->f_41)))
			{
			}
			if (!func_132(iVar4, &(uParam2->f_42)))
			{
			}
		}
		iVar6++;
	}
	uParam2->f_44 = 1;
	uParam2->f_43 = func_133(&Var0) == 0;
	uParam2->f_45 = 1039601264; /* GXTEntry: "Store in Locker" */
	uParam2->f_46 = -1073027202;
	uParam2->f_48 = 1;
	uParam2->f_47 = func_134(&Var0) == 0;
	uParam2->f_49 = 1901059961; /* GXTEntry: "Stow on your horse" */
	uParam2->f_50 = -1103499950;
	return 1;
}

int func_117(int iParam0, var uParam1)
{
	var uVar0;
	var uVar1;

	if (!func_135(iParam0, &uVar0, &uVar1))
	{
		uParam1->f_26 = 0;
		return 0;
	}
	uParam1->f_26 = 1;
	uParam1->f_25 = uVar0;
	uParam1->f_24 = uVar1;
	return 1;
}

char* func_118(int iParam0)
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

int func_119(var uParam0, var uParam1, char[32] cParam2, char[4] cParam10)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam1))
	{
		return 0;
	}
	func_136(uParam0, uParam1, cParam2, *cParam10);
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		return 0;
	}
	uParam0->f_22 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_118(9), cParam10->f_27);
	uParam0->f_23 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_118(10), cParam10->f_28);
	uParam0->f_24 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_118(11), cParam10->f_29);
	uParam0->f_25 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "stat_damage", cParam10->f_30);
	uParam0->f_26 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "stat_range", cParam10->f_31);
	uParam0->f_27 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "stat_accuracy", cParam10->f_32);
	uParam0->f_28 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "stat_firerate", cParam10->f_33);
	uParam0->f_29 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "stat_reload", cParam10->f_34);
	uParam0->f_34 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_toggle_label", cParam10->f_37);
	uParam0->f_35 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_toggle_enabled", cParam10->f_35);
	uParam0->f_36 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_toggle_visible", cParam10->f_36);
	uParam0->f_37 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_toggle_hash", cParam10->f_38);
	uParam0->f_30 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_option_label", cParam10->f_41);
	uParam0->f_31 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_option_enabled", cParam10->f_39);
	uParam0->f_32 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_option_visible", cParam10->f_40);
	uParam0->f_33 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_option_hash", cParam10->f_42);
	uParam0->f_38 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_dleft_label", cParam10->f_45);
	uParam0->f_39 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_dleft_enabled", cParam10->f_43);
	uParam0->f_40 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_dleft_visible", cParam10->f_44);
	uParam0->f_41 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_dleft_hash", cParam10->f_46);
	uParam0->f_42 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_dright_label", cParam10->f_49);
	uParam0->f_43 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_dright_enabled", cParam10->f_47);
	uParam0->f_44 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "dynamic_list_item_prompt_dright_visible", cParam10->f_48);
	uParam0->f_45 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "dynamic_list_item_prompt_dright_hash", cParam10->f_50);
	uParam0->f_46 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "inventory_item", cParam10->f_51);
	uParam0->f_47 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "inventory_item_slot", cParam10->f_52);
	return 1;
}

bool func_120()
{
	return (func_137(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, 0, 0) > 0 && func_128(func_63(889965687 /* GXTEntry: "Wardrobe" */, func_94(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_121()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	Var4.f_9 = -1591664384;
	if (func_76("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_77(&Var4, iVar2, iVar0, iVar1))
			{
			}
			else if (WEAPON::_0xD955FEE4B87AFA07(Var4.f_4))
			{
				iVar3++;
			}
			iVar2++;
		}
		func_83(iVar0);
	}
	return iVar3;
}

int func_122(int iParam0)
{
	int iVar0;

	if (!func_67(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_138(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

bool func_123(int iParam0)
{
	return func_139(iParam0) == joaat("weapon");
}

struct<2> func_124(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	return Var0;
}

struct<5> func_125(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_94(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_139(iParam0);
	switch (iVar5)
	{
		case joaat("clothing"):
			Var0 = { func_63(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			break;
		case joaat("weapon"):
			Var0 = { func_62(bParam1) };
			if (iParam2 && func_140(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_141(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_141(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_142(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_143(bParam1) };
			switch (func_144(iParam0))
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
			if (func_145(iParam0, -1823706425))
			{
				Var0 = { func_63(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_145(iParam0, -1483207246))
			{
				Var0 = { func_63(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1911121386))
			{
				Var0 = { func_63(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_145(iParam0, -1653629781))
			{
				Var0 = { func_63(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_146(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_145(iParam0, -1653629781))
			{
				Var0 = { func_63(1384535894, Var0, 1784584921, bParam1) };
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

int func_126(int iParam0)
{
	int iVar0;

	if (!func_67(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_144(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

int func_127(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 0)
	{
		iVar0 = func_144(iParam0);
		if (iVar0 != 0)
		{
			if (iParam1 >= 0 && iParam1 < func_126(iParam0))
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

int func_128(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_147(&uParam0, iParam4, bParam5, iParam6);
}

int func_129(int iParam0, int iParam1, bool bParam2)
{
	struct<10> Var0;
	var uVar22;

	Var0.f_9 = -1591664384;
	if (!func_67(iParam0, 0))
	{
		return 0;
	}
	if (!func_148(iParam0, &uVar22, &Var0, iParam1))
	{
		return 0;
	}
	if (!bParam2)
	{
		if (func_142(iParam0, &Var0, iParam1))
		{
			return 0;
		}
	}
	return 1;
}

int func_130(var uParam0, int iParam1)
{
	struct<10> Var0;
	var uVar22;

	if (!func_64(uParam0))
	{
		return 1;
	}
	Var0.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_93(0), uParam0, &Var0, 22, 1))
	{
		return 2;
	}
	if (!WEAPON::_0x6929E22158E52265(Global_34, iParam1, &uVar22))
	{
	}
	if (func_80(uParam0) == 0)
	{
		if (func_64(&uVar22))
		{
			if (func_149(uParam0, &uVar22))
			{
				return 3;
			}
		}
	}
	if (WEAPON::_0xD955FEE4B87AFA07(Var0.f_4) && iParam1 == 9)
	{
		if (!func_110())
		{
			return 4;
		}
	}
	return 0;
}

int func_131(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 4:
			*uParam1 = 1000849983; /* GXTEntry: "Equip to Melee" */
			return 1;
		case 3:
			*uParam1 = -327947319; /* GXTEntry: "Equip Off-Hand Sidearm" */
			return 1;
		case 2:
			*uParam1 = 1588146127; /* GXTEntry: "Equip Sidearm" */
			return 1;
		case 7:
		case 9:
			*uParam1 = 297513196; /* GXTEntry: "Equip to Back" */
			return 1;
		case 8:
		case 10:
			*uParam1 = 108789798; /* GXTEntry: "Equip to Shoulder" */
			return 1;
		default:
			break;
	}
	return 0;
}

int func_132(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 4:
			*uParam1 = 941907253;
			return 1;
		case 3:
			*uParam1 = -1756222973;
			return 1;
		case 2:
			*uParam1 = -1313710397;
			return 1;
		case 9:
			*uParam1 = 1554581363;
			return 1;
		case 10:
			*uParam1 = -946029012;
			return 1;
		case 7:
			*uParam1 = -466398939;
			return 1;
		case 8:
			*uParam1 = -260514364;
			return 1;
		default:
			break;
	}
	return 0;
}

int func_133(var uParam0)
{
	struct<10> Var0;

	if (!func_64(uParam0))
	{
		return 1;
	}
	Var0.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_93(0), uParam0, &Var0, 22, 1))
	{
		return 2;
	}
	if (func_80(uParam0) == 2)
	{
		return 3;
	}
	if (func_80(uParam0) == 0)
	{
		switch (func_150(uParam0))
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

int func_134(var uParam0)
{
	struct<10> Var0;

	if (!func_64(uParam0))
	{
		return 1;
	}
	Var0.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_93(0), uParam0, &Var0, 22, 1))
	{
		return 1;
	}
	if (func_80(uParam0) == 1)
	{
		return 3;
	}
	if (WEAPON::_0x959383DCD42040DA(Var0.f_4))
	{
		return 5;
	}
	if (func_80(uParam0) == 0)
	{
		switch (func_150(uParam0))
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

int func_135(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam2 = 1210712530;
			*uParam1 = 863205103;
			return 1;
		case 1:
			*uParam2 = 1210712530;
			*uParam1 = -2122928365;
			return 1;
		case 2:
			*uParam2 = 1210712530;
			*uParam1 = -229529296;
			return 1;
		default:
			break;
	}
	return 0;
}

void func_136(var uParam0, var uParam1, char[32] cParam2, struct<27> Param10)
{
	func_151(uParam0, uParam1, cParam2, Param10);
	uParam0->f_18 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_118(15), &(Param10.f_16));
	uParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_118(21), Param10.f_24);
	uParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_118(22), Param10.f_25);
	uParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_118(23), Param10.f_26);
}

int func_137(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_152(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_93(bParam1), iParam0, iParam3);
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case -59585102: /* GXTEntry: "Tonics Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
		case 1018123892: /* GXTEntry: "Ingredients Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
		case 982182330: /* GXTEntry: "Materials Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
		case -1406390556: /* GXTEntry: "Valuables Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
		case -1455768246: /* GXTEntry: "Kit Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
		case -921879912: /* GXTEntry: "Provisions Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
	}
	return 0;
}

int func_139(int iParam0)
{
	vector3 vVar0;

	if (!func_67(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_140(int iParam0, bool bParam1)
{
	if (func_144(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_120();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_141(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_153(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

int func_142(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_148(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_143(bool bParam0)
{
	int iVar0;

	iVar0 = func_93(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_8)))
		{
			Global_1272170->f_8 = { func_63(271701509, func_94(bParam0), 12999093, 0) };
		}
		return Global_1272170->f_8;
	}
	return func_63(271701509, func_94(bParam0), 12999093, 0);
}

int func_144(int iParam0)
{
	struct<2> Var0;

	if (!func_67(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_145(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_144(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_154(iParam0, iParam1, iVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_146(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_155(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_147(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_156(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_148(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_93(0);
	*uParam1 = { func_63(iParam0, func_62(0), iParam3, 0) };
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

int func_149(var uParam0, var uParam1)
{
	if (((*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1) && uParam0->f_2 == uParam1->f_2) && uParam0->f_3 == uParam1->f_3)
	{
		return 1;
	}
	return 0;
}

int func_150(var uParam0)
{
	struct<15> Var0;
	int iVar22;

	if (!func_64(uParam0))
	{
		return 1;
	}
	Var0.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_93(0), uParam0, &Var0, 22, 1))
	{
		return 2;
	}
	iVar22 = Var0.f_14;
	if (WEAPON::_0xD955FEE4B87AFA07(Var0.f_4))
	{
		if (iVar22 == 3 || iVar22 == 2)
		{
			return 3;
		}
	}
	else if (WEAPON::_0x959383DCD42040DA(Var0.f_4))
	{
		if (iVar22 == 4)
		{
			return 3;
		}
	}
	return 0;
}

void func_151(var uParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<16> Param10)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1, &cParam2);
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_118(0), Param10);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_118(1), Param10.f_1);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_118(2), Param10.f_2);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_118(54), Param10.f_3);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_118(55), Param10.f_4);
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_118(57), Param10.f_5);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_118(56), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = joaat("ib_select");
	}
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_118(58), Param10.f_7);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_118(59), Param10.f_8);
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_118(60), Param10.f_9);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_118(61), Param10.f_10);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_118(67), Param10.f_11);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_118(62), Param10.f_12);
	if (Param10.f_13 == 0)
	{
		Param10.f_13 = joaat("ib_select");
	}
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_118(64), Param10.f_13);
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_118(65), Param10.f_14);
	uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_118(66), Param10.f_15);
}

bool func_152(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_153(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_67(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_157(iParam0, joaat("default")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_63(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_93(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_93(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_154(int iParam0, int iParam1, int iParam2)
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

int func_155(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_93(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_156(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_93(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return 0;
	}
	if (!func_155(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_157(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

