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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 2;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_15 = 1f;
	fLocal_16 = 1f;
	if (func_1(&uLocal_21))
	{
		func_2(&uLocal_21);
	}
	func_3(&uLocal_21);
}

int func_1(var uParam0)
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		return 0;
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_4(&uLocal_21, 0);
	func_5(uParam0);
	return 1;
}

void func_2(var uParam0)
{
	bool bVar0;

	bVar0 = false;
	while (!bVar0)
	{
		if (func_6(uParam0))
		{
			bVar0 = true;
		}
		func_7(uParam0);
		func_8(uParam0);
		func_9(uParam0);
		BUILTIN::WAIT(0);
	}
}

void func_3(var uParam0)
{
	func_10(uParam0);
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_4(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

int func_5(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 2;
	iVar2 = 1;
	while (iVar2 <= (iVar0 - 1))
	{
		iVar1 = func_11(iVar2, 1);
		if (!func_12(uParam0, iVar1))
		{
			return 0;
		}
		iVar2++;
	}
	return 1;
}

int func_6(var uParam0)
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		return 1;
	}
	return 0;
}

void func_7(var uParam0)
{
	var uVar0;

	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(1692899894))
	{
		if (!UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(1692899894, &uVar0))
		{
		}
		else
		{
			func_13(uParam0, &uVar0);
			UIEVENTS::_EVENT_MANAGER_POP_EVENT(1692899894);
		}
	}
}

void func_8(var uParam0)
{
	bool bVar0;

	if (func_14(uParam0, 1))
	{
		func_15(uParam0, 1, 0);
	}
	if (!UIAPPS::_IS_APP_ACTIVE(1890312850))
	{
		return;
	}
	bVar0 = UIAPPS::_IS_APP_RUNNING(1890312850);
	if (*uParam0 != bVar0)
	{
		*uParam0 = bVar0;
		if (bVar0)
		{
			func_15(uParam0, 1, 1);
		}
	}
}

void func_9(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = UIAPPS::_0x96FD694FE5BE55DC(1890312850);
	iVar1 = func_16(uParam0);
	if (iVar0 != iVar1)
	{
		if (iVar1 != 0)
		{
			func_17(uParam0, iVar1);
		}
		func_4(uParam0, iVar0);
		func_18(uParam0, iVar0);
	}
	func_19(uParam0, iVar0);
}

int func_10(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 2;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = func_11(iVar2, 1);
		func_20(uParam0, iVar1);
		iVar2++;
	}
	return 1;
}

int func_11(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1890312850;
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

int func_12(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1890312850:
			return func_21(uParam0);
	}
	return 0;
}

void func_13(var uParam0, var uParam1)
{
	switch (*uParam1)
	{
		case -1203660660:
			func_22(uParam0, uParam1);
			break;
	}
}

bool func_14(var uParam0, int iParam1)
{
	return func_23(uParam0->f_1, iParam1);
}

void func_15(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_24(&(uParam0->f_1), iParam1);
	}
	else
	{
		func_25(&(uParam0->f_1), iParam1);
	}
}

var func_16(var uParam0)
{
	return uParam0->f_2;
}

void func_17(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1890312850:
			func_26(uParam0);
			break;
	}
}

void func_18(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1890312850:
			func_27(uParam0);
			break;
	}
}

void func_19(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1890312850:
			func_28(uParam0);
			break;
	}
}

void func_20(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1890312850:
			func_29(uParam0);
			break;
	}
}

int func_21(var uParam0)
{
	if (!func_30(uParam0))
	{
		return 0;
	}
	return 1;
}

void func_22(var uParam0, var uParam1)
{
	switch (uParam1->f_2)
	{
		case 1907521504:
			func_31(1667056592);
			func_32(-1159030220);
			func_33(uParam0, Global_1275573->f_21);
			break;
	}
}

bool func_23(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

void func_24(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_25(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_26(var uParam0)
{
	func_31(1667056592);
}

int func_27(var uParam0)
{
	func_34(uParam0);
	func_15(uParam0, 0, 1);
	func_35(&(uParam0->f_6), 2000);
	func_36(1667056592);
	return 1;
}

void func_28(var uParam0)
{
	if (MISC::ABSI((Global_1275573->f_21 - func_37(uParam0))) > 3)
	{
		if (Global_1958309->f_2 == -1)
		{
			func_36(1667056592);
		}
	}
	if (func_38(&(uParam0->f_6)))
	{
		func_15(uParam0, 0, 1);
	}
	if (func_14(uParam0, 1))
	{
		func_15(uParam0, 0, 1);
	}
	if (func_14(uParam0, 0))
	{
		func_39(uParam0);
		func_15(uParam0, 0, 0);
	}
}

void func_29(var uParam0)
{
	func_26(uParam0);
}

int func_30(var uParam0)
{
	uParam0->f_3[0] = DATABINDING::_0xD7DB94AB78E8EBE4("", -2057449687);
	uParam0->f_3[1] = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST_BY_HASH(&(uParam0->f_3[0]), -1963454052);
	return 1;
}

void func_31(int iParam0)
{
	int iVar0;

	if (Global_1958309->f_2 == -1)
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1958309->f_2 == -1)
	{
		return;
	}
	if (Global_1958309->f_2 != iParam0)
	{
	}
	iVar0 = MISC::ABSI((Global_1275573->f_21 - Global_1958309->f_1));
	TELEMETRY::_0x25CC50EC1A6F3A96(&Global_1958309, Global_1958309->f_2, iVar0);
	func_40(Global_1958309);
}

void func_32(int iParam0)
{
	Global_1958309 = iParam0;
}

void func_33(var uParam0, var uParam1)
{
	uParam0->f_10 = uParam1;
}

int func_34(var uParam0)
{
	if (!func_41(uParam0->f_3[1]))
	{
		return 0;
	}
	return 1;
}

void func_35(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_36(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1958309->f_2 != -1 && Global_1958309->f_2 != iParam0)
	{
		func_31(Global_1958309->f_2);
	}
	Global_1958309->f_1 = Global_1275573->f_21;
	Global_1958309->f_2 = iParam0;
}

int func_37(var uParam0)
{
	return uParam0->f_10;
}

int func_38(var uParam0)
{
	if (uParam0->f_3 <= 0)
	{
		if (func_42(uParam0))
		{
			func_43(uParam0);
		}
		return 0;
	}
	if (!func_42(uParam0))
	{
		func_44(uParam0, 1);
		return 1;
	}
	if (!func_45(uParam0) >= uParam0->f_3)
	{
		return 0;
	}
	func_46(uParam0);
	return 1;
}

void func_39(var uParam0)
{
	int iVar0;
	var uVar1;
	struct<12> Var2;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;

	uVar1 = INVENTORY::_0x97A3646645727F42(&iVar0);
	Var2.f_9 = -1591664384;
	iVar17 = 0;
	iVar18 = 0;
	iVar19 = 0;
	iVar16 = 0;
	while (iVar16 < iVar0)
	{
		if (!INVENTORY::_0x82FA24C3D3FCD9B7(uVar1, iVar16, &Var2))
		{
		}
		iVar18 = Var2.f_11;
		if (!func_47(&Var2))
		{
		}
		else if (!func_48(Var2.f_9))
		{
		}
		else
		{
			iVar19 = 0;
			while (iVar19 < iVar18)
			{
				if (!func_49(uParam0, &Var2, iVar17))
				{
				}
				else
				{
					iVar17++;
					if (iVar17 >= 6)
					{
					}
					else
					{
						iVar19++;
					}
					if (iVar17 >= 6)
					{
					}
					else
					{
						iVar16++;
					}
					INVENTORY::_0x42A2F33A1942E865(uVar1);
					if (iVar17 == 0)
					{
						if (func_50(uParam0, -1))
						{
							iVar17++;
						}
					}
					func_51(uParam0, iVar17);
				}
			}
		}
	}

void func_40(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_41(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		return 0;
	}
	iVar1 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(*uParam0);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		uVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(*uParam0, iVar2);
		if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uVar0))
		{
		}
		else
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uVar0);
		}
		iVar2++;
	}
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(*uParam0);
	return 1;
}

bool func_42(var uParam0)
{
	return func_52(*uParam0, 1);
}

void func_43(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_44(var uParam0, bool bParam1)
{
	if (bParam1 || !func_42(uParam0))
	{
		func_46(uParam0);
	}
}

int func_45(var uParam0)
{
	if (!func_42(uParam0))
	{
		return 0;
	}
	if (func_53(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_54() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

void func_46(var uParam0)
{
	func_55(uParam0, 0f);
}

int func_47(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_48(int iParam0)
{
	if (iParam0 == 1045621973)
	{
		return 0;
	}
	return 1;
}

int func_49(var uParam0, var uParam1, int iParam2)
{
	struct<10> Var0;
	var uVar14;

	Var0.f_9 = -1591664384;
	func_56(*uParam1, &Var0, 1, 0, -1);
	if (!func_57(Var0.f_4, 0))
	{
		return 0;
	}
	if (func_58(Var0.f_4))
	{
		if (!func_59(uParam1, &uVar14))
		{
			return 0;
		}
	}
	else if (func_60(Var0.f_4))
	{
		if (!func_61(uParam1, &uVar14))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (!func_62(uParam0, &uVar14, iParam2))
	{
		return 0;
	}
	return 1;
}

int func_50(var uParam0, int iParam1)
{
	struct<34> Var0;
	struct<2> Var36;

	func_63(&Var0);
	Var36 = Var0.f_32;
	Var36.f_1 = Var0.f_33;
	if (!func_62(uParam0, &Var36, iParam1))
	{
		return 0;
	}
	return 1;
}

int func_51(var uParam0, int iParam1)
{
	if (!func_64(uParam0->f_3[1], iParam1))
	{
		return 0;
	}
	return 1;
}

bool func_52(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_53(var uParam0)
{
	return func_52(*uParam0, 2);
}

int func_54()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_55(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_65() - fParam1);
	func_66(uParam0, 1);
	func_67(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_56(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_68(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_57(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_58(int iParam0)
{
	return func_69(iParam0) == -126813555;
}

int func_59(var uParam0, var uParam1)
{
	var uVar0;

	if (!func_70(uParam0, &uVar0))
	{
		return 0;
	}
	if (!func_71(uParam0, uParam1))
	{
		return 0;
	}
	return 1;
}

bool func_60(int iParam0)
{
	return func_69(iParam0) == 1946043663;
}

int func_61(var uParam0, var uParam1)
{
	int iVar0;
	struct<34> Var1;

	if (!func_70(uParam0, &iVar0))
	{
		return 0;
	}
	if (!func_71(uParam0, uParam1))
	{
		return 0;
	}
	if (func_72(iVar0))
	{
		func_73(&Var1);
		uParam1->f_1 = Var1.f_33;
		*uParam1 = Var1.f_32;
		uParam1->f_2 = 1;
	}
	return 1;
}

int func_62(var uParam0, char[4] cParam1, int iParam2)
{
	int iVar0;
	char cVar1[64];
	var uVar9[6];
	var uVar16;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_3[1])))
	{
		return 0;
	}
	if (iParam2 < -1)
	{
		return 0;
	}
	iVar0 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(&(uParam0->f_3[1]));
	if (iParam2 == -1 || iParam2 >= iVar0)
	{
		StringCopy(&cVar1, "offer_item_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		if (!func_74(&uVar9, uParam0->f_3[1], cVar1, cParam1))
		{
			return 0;
		}
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(&(uParam0->f_3[1]), -1, "coupon_small_entry", &(uVar9[0]));
	}
	else
	{
		if (!func_75(uParam0, iParam2, &uVar16))
		{
			return 0;
		}
		if (!func_76(&uVar16, cParam1))
		{
			return 0;
		}
	}
	return 1;
}

void func_63(char* sParam0)
{
	StringCopy(sParam0, "COUPON_OFFER_NO_VALUE", 128);
	StringCopy(&(sParam0->f_16), "COUPON_OFFER_NO_VALUE_DESC", 128);
	sParam0->f_34 = MISC::GET_HASH_KEY("COUPON_OFFER_NO_VALUE");
	sParam0->f_35 = MISC::GET_HASH_KEY("mp_hub_coupons");
	sParam0->f_32 = MISC::GET_HASH_KEY("COUPON_OFFER_NO_VALUE");
	sParam0->f_33 = MISC::GET_HASH_KEY("mp_hub_coupons");
}

int func_64(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		return 0;
	}
	iVar0 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(*uParam0);
	if (iParam1 < 0 || iParam1 >= iVar0)
	{
		return 0;
	}
	iVar1 = iVar0;
	while (iVar1 >= iParam1)
	{
		DATABINDING::_0x6318FB3BE37E11B3(*uParam0, iParam1);
		iVar1 = (iVar1 + -1);
	}
	return 1;
}

float func_65()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_66(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_67(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_68(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_77(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_69(int iParam0)
{
	struct<2> Var0;

	if (!func_57(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_70(var uParam0, var uParam1)
{
	struct<10> Var0;

	*uParam1 = 0;
	if (!func_47(uParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_56(*uParam0, &Var0, 1, 0, -1))
	{
		return 0;
	}
	if (!func_57(Var0.f_4, 0))
	{
		return 0;
	}
	if (!func_78(Var0.f_4))
	{
		return 0;
	}
	*uParam1 = Var0.f_4;
	return 1;
}

int func_71(var uParam0, var uParam1)
{
	var uVar0;
	struct<733> Var1;
	int iVar768;

	if (!func_70(uParam0, &uVar0))
	{
		return 0;
	}
	Var1.f_8 = 10;
	Var1.f_8.f_1.f_4 = 15;
	Var1.f_8.f_1.f_36 = 10;
	Var1.f_8.f_1.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var1.f_480 = 10;
	Var1.f_480.f_1.f_4 = 10;
	Var1.f_480.f_1.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_25.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var1.f_732.f_2 = 5;
	Var1.f_732.f_18 = 8;
	if (!ITEMDATABASE::_0x2A610BEE7D341CC4(uVar0, &Var1))
	{
		return 0;
	}
	iVar768 = 0;
	while (iVar768 < 5)
	{
		switch ((Var1.f_732.f_2[iVar768 /*3*/])->f_2)
		{
			case -774197843:
				func_79(Var1.f_732.f_2[iVar768 /*3*/], &(uParam1->f_1), uParam1, 1);
				break;
		}
		iVar768++;
	}
	if (func_80(uParam0))
	{
		uParam1->f_2 = 0;
	}
	else
	{
		uParam1->f_2 = 1;
		if (func_81(uParam0))
		{
			uParam1->f_3 = 1;
		}
		else if (func_82(*uParam0))
		{
			uParam1->f_4 = 1;
		}
	}
	return 1;
}

int func_72(int iParam0)
{
	int iVar0;

	if (!func_57(iParam0, 0))
	{
		return 0;
	}
	if (!func_60(iParam0))
	{
		return 0;
	}
	if (!func_83(iParam0, MISC::GET_HASH_KEY("CI_TAG_OFFER_MYSTERY")))
	{
		return 0;
	}
	iVar0 = func_84(iParam0, 1);
	if (iVar0 != 0)
	{
		return 0;
	}
	return 1;
}

void func_73(char* sParam0)
{
	StringCopy(sParam0, "HO_ITEM_MYSTERY_REWARD_NAME", 128);
	StringCopy(&(sParam0->f_16), "HO_ITEM_MYSTERY_REWARD_DESCRIPTION", 128);
	sParam0->f_34 = MISC::GET_HASH_KEY("VOUCHER_MYSTERY");
	sParam0->f_35 = MISC::GET_HASH_KEY("mp_hub_coupons");
	sParam0->f_32 = MISC::GET_HASH_KEY("VOUCHER_MYSTERY");
	sParam0->f_33 = MISC::GET_HASH_KEY("mp_hub_coupons");
}

int func_74(var uParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam1))
	{
		return 0;
	}
	(*uParam0)[0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam1, &cParam2);
	(*uParam0)[1] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(uParam0[0], 440050042, *cParam10);
	(*uParam0)[2] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(uParam0[0], 1058850005, cParam10->f_1);
	(*uParam0)[3] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(uParam0[0], joaat("enabled"), cParam10->f_2);
	(*uParam0)[4] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(uParam0[0], 1024435631, cParam10->f_3);
	(*uParam0)[5] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(uParam0[0], 596676017, cParam10->f_4);
	return 1;
}

int func_75(var uParam0, int iParam1, var uParam2)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(&(uParam0->f_3[1]));
	if (iParam1 < 0 || iParam1 >= iVar0)
	{
		return 0;
	}
	*uParam2 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(&(uParam0->f_3[1]), iParam1);
	return 1;
}

int func_76(var uParam0, char[4] cParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam0, 440050042, *cParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam0, 1058850005, cParam1->f_1);
	DATABINDING::_0xBFC83DA249BEFCC9(*uParam0, joaat("enabled"), cParam1->f_2);
	DATABINDING::_0xBFC83DA249BEFCC9(*uParam0, 1024435631, cParam1->f_3);
	DATABINDING::_0xBFC83DA249BEFCC9(*uParam0, 596676017, cParam1->f_4);
	return 1;
}

int func_77(bool bParam0)
{
	if (func_85() == -1)
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

int func_78(int iParam0)
{
	if (func_69(iParam0) == -126813555 || func_69(iParam0) == 1946043663)
	{
		return 1;
	}
	return 0;
}

int func_79(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(*uParam0))
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(uParam0->f_1);
	iVar1 = MISC::GET_HASH_KEY(*uParam0);
	if (!TXD::_DOES_STREAMED_TXD_EXIST(iVar0))
	{
		return 0;
	}
	if (!bParam3)
	{
		if (TXD::_HAS_STREAMED_TXD_LOADED(iVar0))
		{
			if (!GRAPHICS::_0xA2A51869BDED733B(iVar0, iVar1))
			{
				return 0;
			}
		}
	}
	*uParam1 = iVar0;
	*uParam2 = iVar1;
	return 1;
}

int func_80(var uParam0)
{
	if (!func_47(uParam0))
	{
		return 0;
	}
	return func_86(uParam0);
}

int func_81(var uParam0)
{
	struct<10> Var0;

	if (!func_47(uParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_56(*uParam0, &Var0, 1, 0, -1))
	{
		return 0;
	}
	if (!func_57(Var0.f_4, 0))
	{
		return 0;
	}
	return func_87(Var0.f_4);
}

int func_82(struct<4> Param0)
{
	if (!func_47(&Param0))
	{
		return 0;
	}
	if (func_86(&Param0))
	{
		return 0;
	}
	return func_89(func_88(Param0));
}

int func_83(int iParam0, int iParam1)
{
	if (!func_57(iParam0, 0))
	{
		return func_91(func_90(iParam0), iParam1);
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

int func_84(int iParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_57(iParam0, 0))
	{
		return func_92(func_90(iParam0), bParam1);
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

int func_85()
{
	return Global_1572887->f_13;
}

int func_86(var uParam0)
{
	if (!func_47(uParam0))
	{
		return 0;
	}
	return INVENTORY::_0x0137C77A2EC64536(uParam0);
}

bool func_87(var uParam0)
{
	return UNLOCK::_UNLOCK_IS_NEW(func_93(uParam0));
}

int func_88(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!func_47(&uParam0))
	{
		return 0;
	}
	return INVENTORY::_0x4A606C17276E1BCC(&uParam0);
}

bool func_89(int iParam0)
{
	if (iParam0 <= 0)
	{
		return false;
	}
	return (NETWORK::GET_CLOUD_TIME_AS_INT() + func_94()) > iParam0;
}

int func_90(int iParam0)
{
	return iParam0;
}

int func_91(int iParam0, int iParam1)
{
	if (!func_95(iParam0, 2))
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

int func_92(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_95(iParam0, 2))
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

var func_93(var uParam0)
{
	return uParam0;
}

int func_94()
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

int func_95(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

