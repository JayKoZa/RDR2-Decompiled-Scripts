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
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	struct<2> Var0;
	int iVar179;
	bool bVar180;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	Var0.f_1.f_2 = 1086324736;
	Var0.f_1.f_11.f_1 = 20;
	Var0.f_1.f_33 = 20;
	Var0.f_1 = ScriptParam_0.f_2;
	Var0.f_1.f_2 = 1f;
	iVar179 = func_1(Var0.f_1, -949239683);
	bVar180 = false;
	while (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		if (!ScriptParam_0.f_3)
		{
			func_2(&(Var0.f_1));
			if (Var0 > 1)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
			}
		}
		switch (Var0)
		{
			case 0:
				if (func_3(Var0.f_1, 0))
				{
					bVar180 = true;
					func_4(&(Var0.f_1));
				}
				if (ScriptParam_0.f_3)
				{
					Var0.f_1.f_2 = 1f;
					func_5(&Var0, 2);
				}
				else
				{
					func_5(&Var0, 1);
				}
				break;
			case 1:
				if (iVar179 == 845883585)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 442509369))
					{
						Var0.f_1.f_1++;
						func_6(&(Var0.f_1), IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2);
						func_7(Var0.f_1, 0);
						func_8(1);
						Var0.f_1.f_177 = 1;
						func_5(&Var0, 3);
					}
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 442509369))
				{
					Var0.f_1.f_1 = (1 + Var0.f_1.f_1);
					func_6(&(Var0.f_1), IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2);
					func_7(Var0.f_1, 0);
					func_5(&Var0, 3);
				}
				break;
			case 2:
				func_9(&Var0, iVar179, bVar180);
				func_5(&Var0, 3);
				break;
			case 3:
				if (ScriptParam_0.f_3)
				{
					SCRIPTS::TERMINATE_THIS_THREAD();
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	if (Var0 <= 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			func_9(&Var0, iVar179, bVar180);
		}
	}
}

int func_1(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if ((Var0[iVar42 /*2*/])->f_1 == iParam1)
			{
				return &(Var0[iVar42 /*2*/]);
			}
			iVar42++;
		}
	}
	return 0;
}

int func_2(var uParam0)
{
	if (!uParam0->f_176)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_174))
		{
			uParam0->f_174 = TASK::_0x05A0100EA714DB68(Global_34, 0);
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1234314267))
		{
			func_10(uParam0);
			return 1;
		}
	}
	if (!uParam0->f_177)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1895155945))
		{
			uParam0->f_177 = 1;
		}
	}
	return 0;
}

int func_3(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

void func_4(var uParam0)
{
	int iVar0;

	ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(*uParam0, &(uParam0->f_11));
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(uParam0->f_11.f_1[iVar0]), uParam0->f_33[iVar0 /*7*/]);
		iVar0++;
	}
}

void func_5(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_6(var uParam0, bool bParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;

	if ((func_11(*uParam0, 1573112293) || func_11(*uParam0, 672467738)) || func_11(*uParam0, -550842268))
	{
		bVar10 = true;
	}
	bVar11 = func_12(*uParam0);
	ATTRIBUTE::_0xD962F8579D702DB5();
	Global_1939067->f_26 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		switch ((uParam0->f_33[iVar0 /*7*/])->f_1)
		{
			case -943921969:
				fVar1 = func_13(0, (IntToFloat((uParam0->f_33[iVar0 /*7*/])->f_2) / uParam0->f_2));
				func_14((IntToFloat((uParam0->f_33[iVar0 /*7*/])->f_2) / uParam0->f_2));
				iVar9 = 1;
				break;
			case -1104847406:
				fVar2 = func_13(2, (IntToFloat((uParam0->f_33[iVar0 /*7*/])->f_2) / uParam0->f_2));
				func_15((IntToFloat((uParam0->f_33[iVar0 /*7*/])->f_2) / uParam0->f_2), 0);
				bVar8 = true;
				break;
			case 381158954:
				fVar3 = func_13(1, (IntToFloat((uParam0->f_33[iVar0 /*7*/])->f_2) / uParam0->f_2));
				func_16((IntToFloat((uParam0->f_33[iVar0 /*7*/])->f_2) / uParam0->f_2));
				break;
			case -416929031:
				fVar4 = func_17((IntToFloat((uParam0->f_33[iVar0 /*7*/])->f_2) / uParam0->f_2), ((uParam0->f_33[iVar0 /*7*/])->f_5 / uParam0->f_2));
				func_18(0, fVar4, 1, 1, bVar10);
				iVar9 = 1;
				break;
			case 1857353317:
				fVar5 = func_17((IntToFloat((uParam0->f_33[iVar0 /*7*/])->f_2) / uParam0->f_2), ((uParam0->f_33[iVar0 /*7*/])->f_5 / uParam0->f_2));
				func_18(2, fVar5, 1, 1, bVar10);
				bVar8 = true;
				break;
			case 1681823811:
				fVar6 = func_17((IntToFloat((uParam0->f_33[iVar0 /*7*/])->f_2) / uParam0->f_2), ((uParam0->f_33[iVar0 /*7*/])->f_5 / uParam0->f_2));
				func_18(1, fVar6, 1, 1, bVar10);
				break;
			case -816334026:
				func_19((BUILTIN::TO_FLOAT((uParam0->f_33[iVar0 /*7*/])->f_2) / uParam0->f_2), 1 == uParam0->f_1);
				break;
			default:
				if (bParam1)
				{
					switch ((uParam0->f_33[iVar0 /*7*/])->f_1)
					{
						case 2062242710:
							fVar7 = func_20(BUILTIN::TO_FLOAT((uParam0->f_33[iVar0 /*7*/])->f_3), (uParam0->f_33[iVar0 /*7*/])->f_4);
							func_21(19, fVar7, bVar11, 1);
							iVar9 = 1;
							break;
						case -826379728:
							fVar7 = func_20(BUILTIN::TO_FLOAT((uParam0->f_33[iVar0 /*7*/])->f_3), (uParam0->f_33[iVar0 /*7*/])->f_4);
							func_21(20, fVar7, bVar11, 1);
							bVar8 = true;
							break;
						case -1191740624:
							fVar7 = func_20(BUILTIN::TO_FLOAT((uParam0->f_33[iVar0 /*7*/])->f_3), (uParam0->f_33[iVar0 /*7*/])->f_4);
							func_21(18, fVar7, bVar11, 1);
							break;
						case 1869697234:
							fVar7 = func_20(BUILTIN::TO_FLOAT((uParam0->f_33[iVar0 /*7*/])->f_3), (uParam0->f_33[iVar0 /*7*/])->f_4);
							func_21(0, fVar7, bVar11, 1);
							iVar9 = 1;
							break;
						case 1342237631:
							fVar7 = func_20(BUILTIN::TO_FLOAT((uParam0->f_33[iVar0 /*7*/])->f_3), (uParam0->f_33[iVar0 /*7*/])->f_4);
							func_21(2, fVar7, bVar11, 1);
							bVar8 = true;
							break;
						case -1240225157:
							fVar7 = func_20(BUILTIN::TO_FLOAT((uParam0->f_33[iVar0 /*7*/])->f_3), (uParam0->f_33[iVar0 /*7*/])->f_4);
							func_21(1, fVar7, bVar11, 1);
							break;
					}
				}
				break;
		}
		iVar0++;
	}
	if (bParam1)
	{
		func_22(uParam0);
		func_23(*uParam0, bVar8, iVar9, 562618531);
	}
	func_10(uParam0);
	uParam0->f_3 = (uParam0->f_3 + fVar1);
	uParam0->f_4 = (uParam0->f_4 + fVar2);
	uParam0->f_5 = (uParam0->f_5 + fVar3);
	uParam0->f_6 = (uParam0->f_6 + fVar4);
	uParam0->f_7 = (uParam0->f_7 + fVar5);
	uParam0->f_8 = (uParam0->f_8 + fVar6);
}

void func_7(int iParam0, bool bParam1)
{
	struct<10> Var0;
	struct<16> Var10;

	switch (iParam0)
	{
		case 204375141: /* GXTEntry: "Ginseng Elixir" */
			break;
		case -417963070: /* GXTEntry: "Valerian Root" */
			break;
		case -21093309: /* GXTEntry: "Aged Pirate Rum" */
			break;
		case -1620920647: /* GXTEntry: "English Mace" */
		case -529638012: /* GXTEntry: "Yarrow" */
		case 128702355: /* GXTEntry: "Milkweed" */
		case 1433048902: /* GXTEntry: "Ginseng" */
		case 2006811763: /* GXTEntry: "Vanilla Flower" */
			func_24(350943398);
			break;
		case -2085219828: /* GXTEntry: "Common Bulrush" */
		case -2051332199: /* GXTEntry: "Oleander Sage" */
		case 228922461: /* GXTEntry: "Prairie Poppy" */
			if ((bParam1 || !func_25()) || !PED::IS_PED_ON_FOOT(Global_34))
			{
				return;
			}
			if (iParam0 != 228922461 || MISC::GET_RANDOM_INT_IN_RANGE(0, 3000) < 1000)
			{
				Var10 = { Var0 };
				StringCopy(&(Var10.f_10), "generic_puking_item", 32);
				Var10.f_14 = 512;
				func_26(Var10, 0);
			}
			break;
		case 1365804873: /* GXTEntry: "Potent Antidote" */
		case 1889838061: /* GXTEntry: "Antidote" */
			if (iParam0 == 1889838061)
			{
			}
			else if (iParam0 == 1365804873)
			{
			}
			func_27();
			break;
	}
}

void func_8(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (func_28())
	{
		return;
	}
	Global_17172.f_54.f_644.f_1780 = 0;
	iVar0 = 1;
	(Global_1951141->f_1657.f_1[iVar0 /*3*/])->f_1 = -282754472;
	*(Global_1951141->f_1538.f_1[iVar0 /*3*/]) = { *(Global_1951141->f_1657.f_1[iVar0 /*3*/]) };
	func_29(&(Global_1951141->f_1657.f_1[iVar0 /*3*/]), -282754472, 0, 1);
	func_30(1);
	iVar1 = func_31();
	func_32(&iVar1, 0, 0, 0, 4, 0, 0, 0);
	if (func_33(iVar1, Global_17172.f_54.f_644.f_1781, 1))
	{
		Global_17172.f_54.f_644.f_1781 = iVar1;
	}
	if (bParam0)
	{
		func_34(8, 0, 0, 0, 0);
	}
}

void func_9(int iParam0, int iParam1, bool bParam2)
{
	if (PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (iParam1 == 845883585)
	{
		func_36(func_35(), Global_34, -282754472, 1);
		func_30(1);
	}
	if (iParam0->f_1 == 80178851)
	{
	}
	if (func_3(iParam0->f_1, 0) && !bParam2)
	{
		func_4(&(iParam0->f_1));
	}
	func_6(&(iParam0->f_1), 1);
	func_7(iParam0->f_1, 1);
}

void func_10(var uParam0)
{
	if (!uParam0->f_176)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_174))
		{
			ENTITY::_0x18FF3110CF47115D(uParam0->f_174, 2, 0);
			uParam0->f_176 = 1;
		}
	}
}

int func_11(int iParam0, int iParam1)
{
	if (!func_3(iParam0, 0))
	{
		return func_38(func_37(iParam0), iParam1);
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

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case -1498871949:
		case -1283370018:
		case -822124724:
		case -818346432:
		case -624685730:
		case -610395813:
		case -545779394:
		case 348064119:
		case 447784640:
		case 827714260:
		case 1269193435:
		case 1532695640:
		case 1739830455:
		case 1847740267:
		case 1958345007:
		case 2103594888:
			return 0;
	}
	return 1;
}

float func_13(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	switch (iParam0)
	{
		case 0:
			fVar0 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_34));
			fVar1 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_34, 0));
			break;
		case 1:
			fVar0 = PED::_0x775A1CA7893AA8B5(Global_34);
			fVar1 = PED::_GET_PED_MAX_STAMINA(Global_34);
			break;
		case 2:
			fVar0 = PLAYER::_0xA81D24AE0AF99A5E(PLAYER::GET_PLAYER_INDEX());
			fVar1 = PLAYER::_0x592F58BC4D2A2CF3(PLAYER::GET_PLAYER_INDEX(), 0);
			break;
	}
	fVar3 = (fParam1 + fVar0);
	if (fVar3 > fVar1)
	{
		fVar2 = (fVar1 - fVar0);
	}
	else
	{
		fVar2 = (fVar3 - fVar0);
	}
	return (fVar2 / 2f);
}

void func_14(float fParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (fParam0 == 0f)
	{
		return;
	}
	else if (fParam0 == -1f)
	{
		fParam0 = BUILTIN::TO_FLOAT(PED::_0x16F2C8C084AB2092(iVar0));
	}
	iVar1 = func_39(2);
	func_40((fParam0 * IntToFloat(iVar1)), 0);
}

void func_15(float fParam0, bool bParam1)
{
	int iVar0;

	if (fParam0 == 0f)
	{
		return;
	}
	else if (fParam0 == -1f)
	{
		fParam0 = BUILTIN::TO_FLOAT(10);
	}
	iVar0 = func_41(2);
	func_42((fParam0 * IntToFloat(iVar0)), 0, bParam1);
}

void func_16(float fParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (fParam0 == 0f)
	{
		return;
	}
	else if (fParam0 == -1f)
	{
		fParam0 = BUILTIN::TO_FLOAT(PED::_0xFC3B580C4380B5B7(iVar0));
	}
	iVar1 = func_43(2);
	func_44((fParam0 * IntToFloat(iVar1)), 0);
}

float func_17(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 100f);
	}
	return ((fParam0 / 8f) * 100f);
}

void func_18(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (fParam1 == 0f)
	{
		return;
	}
	if (bParam4)
	{
		fParam1 = func_45(iParam0, fParam1, 1);
	}
	func_47(iParam0, (func_46(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

void func_19(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = func_48(13, 2);
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (func_49())
	{
		iVar1 = func_50(fVar0);
		fVar0 = (fVar0 + fParam0);
		iVar2 = func_50(fVar0);
		if (iVar1 != iVar2)
		{
			Global_1954472->f_1331.f_107 = func_31();
			func_32(&(Global_1954472->f_1331.f_107), 0, 0, 1, 0, 0, 0, 0);
		}
		func_52(13, func_51(fVar0, 0f, 100f), 2);
	}
	if (bParam1)
	{
		Global_17172.f_54.f_2438.f_41++;
		if (5 == Global_17172.f_54.f_2438.f_41)
		{
			func_53(109, 0);
		}
	}
}

float func_20(float fParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return (fParam0 * 0.033f);
		case 1:
			return (fParam0 * 2f);
		case 2:
			return (fParam0 * 120f);
		case 3:
			return (fParam0 * 2880f);
		default:
			break;
	}
	return fParam0;
}

int func_21(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	return func_54(iParam0, fParam1, bParam2, iParam3);
}

void func_22(var uParam0)
{
	switch (*uParam0)
	{
		case -2109344034:
		case -2053642092:
		case -1806099704:
		case -1563450693:
		case -1499480171:
		case -1437186306:
		case -669703557:
		case -30746180:
		case 429428887:
		case 812236345:
		case 1023793009:
		case 1271821570:
		case 1454312131:
		case 1879593571:
		case 1934214136:
			func_55(1614000521, -179343615, 8100);
			break;
	}
}

void func_23(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (bParam2 || func_11(iParam0, -537818634))
	{
		func_57(func_56(-704089207), 1);
	}
	if (func_11(iParam0, -1457797660))
	{
		func_57(func_56(-1909697259), 1);
	}
	if (func_11(iParam0, 1573112293))
	{
		func_59(func_58(iParam0), 1);
	}
	if (func_11(iParam0, 1939071949))
	{
		func_57(func_60(joaat("used"), -939665347), 1);
	}
	if (func_11(iParam0, 1992556171))
	{
		func_57(func_56(-1295035230), 1);
	}
	if (func_11(iParam0, 1239889275))
	{
		func_57(func_56(905765416), 1);
	}
	switch (iParam0)
	{
		case -1921080134: /* GXTEntry: "Classic Oatcakes" */
		case -635441454: /* GXTEntry: "Sugar Cube" */
		case 1448771675: /* GXTEntry: "Hay" */
			func_57(func_60(joaat("used"), -2049431929 /* GXTEntry: "Feed Bag" */), 1);
			break;
	}
	switch (iParam0)
	{
		case 299161628: /* GXTEntry: "Moonshine" */
			func_57(func_60(joaat("used"), 304473406), 1);
			break;
		case -1907044919: /* GXTEntry: "Opened Kentucky Bourbon" */
		case 688258043: /* GXTEntry: "Kentucky Bourbon" */
			func_57(func_60(joaat("used"), joaat("whiskey")), 1);
			break;
		case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
		case 206762213: /* GXTEntry: "Cocaine Gum" */
			func_57(func_60(joaat("used"), 2119695263), 1);
			break;
		case -653299524: /* GXTEntry: "Snake Oil" */
		case -486559882: /* GXTEntry: "Potent Snake Oil" */
		case 376981280: /* GXTEntry: "Opened Snake Oil" */
			func_57(func_60(joaat("used"), -1791969490), 1);
			break;
		case -324053813: /* GXTEntry: "Chewing Tobacco" */
		case 998010398: /* GXTEntry: "Opened Chewing Tobacco" */
			func_57(func_60(joaat("used"), -155567636), 1);
			break;
		case -2042563684: /* GXTEntry: "Horse Medicine" */
		case -1871448371: /* GXTEntry: "Special Horse Medicine" */
		case -834705084: /* GXTEntry: "Opened Horse Medicine" */
		case -623409049: /* GXTEntry: "Potent Horse Medicine" */
			func_57(func_60(joaat("used"), 497247514), 1);
			break;
		case 1929383243: /* GXTEntry: "Herbivore Bait" */
		case 2036955137: /* GXTEntry: "Potent Herbivore Bait" */
			func_57(func_60(joaat("used"), -868741806), 1);
			break;
		case -1635450397: /* GXTEntry: "Predator Bait" */
		case 1831763320: /* GXTEntry: "Potent Predator Bait" */
			func_57(func_60(joaat("used"), -208442209), 1);
			break;
	}
	if (func_61() == -1)
	{
		if (iParam0 == -1976480343)
		{
			func_57(func_60(joaat("used"), 595572217), 1);
		}
	}
	if (bParam1)
	{
		func_57(func_56(704570463), 1);
	}
	func_62(iParam0, iParam3);
}

void func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6[20];

	iVar1 = Global_1140484->f_41657.f_1.f_42;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = &Global_1140484->f_41657.f_1[iVar2 /*2*/];
		iVar3 = func_63(iVar0, 1);
		if (&Global_1140484->f_30603.f_847[iVar3 /*12*/] == iParam0)
		{
			func_64(iVar0);
			Global_1140484->f_41657.f_1.f_42 = (Global_1140484->f_41657.f_1.f_42 - 1);
		}
		else
		{
			*(Var6[iVar4 /*2*/]) = { *(Global_1140484->f_41657.f_1[iVar2 /*2*/]) };
			iVar4++;
		}
		iVar2++;
	}
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		*(Global_1140484->f_41657.f_1[iVar5 /*2*/]) = { *(Var6[iVar5 /*2*/]) };
		iVar5++;
	}
}

bool func_25()
{
	return func_65(1);
}

void func_26(struct<16> Param0, int iParam16)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1938417->f_161 >= 10)
	{
		return;
	}
	if (!func_66(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_67(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1938417)[iVar0 /*16*/])->f_10)))
		{
			*((*Global_1938417)[iVar0 /*16*/]) = { Param0 };
			Global_1938417->f_161++;
			func_68(iParam16);
			return;
		}
		iVar0++;
	}
}

void func_27()
{
	func_24(350943398);
	func_24(1775828486);
}

bool func_28()
{
	return (Global_1951141->f_1657.f_1[1 /*3*/])->f_1 == -282754472;
}

int func_29(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<5> Var0;
	struct<4> Var5;
	struct<15> Var9;
	struct<11> Var24;
	struct<17> Var38;
	int iVar55;

	if (!func_3(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_69(iParam0, 0, 0) };
	Var5 = { func_70(iParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var5))
	{
		return 0;
	}
	Var9.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_71(bParam2), &Var5, &Var9, 15, 1))
	{
		return 0;
	}
	Var24.f_9 = -1591664384;
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_71(bParam2), &Var5, &Var24, true))
	{
		return 0;
	}
	if (Var9.f_14 == iParam1 && Var24.f_10 == iParam3)
	{
		return 1;
	}
	if (func_72(bParam2))
	{
		Var9.f_14 = iParam1;
		if (!INVENTORY::_0xD80A8854DB5CFBA5(func_71(bParam2), &Var5, &Var9, 15))
		{
			return 0;
		}
	}
	else
	{
		Var38.f_9 = 1;
		Var38.f_11 = -1591664384;
		Var38 = { func_73(&Var9, 0) };
		Var38.f_10 = iParam3;
		Var38.f_16 = iParam1;
		iVar55 = func_74(joaat("update"), &Var38, 0);
		if (iVar55 == -1)
		{
			return 0;
		}
		Global_1951141->f_924 = iVar55;
	}
	return 1;
}

void func_30(bool bParam0)
{
	int iVar0;

	iVar0 = 1;
	func_75();
	if (func_76(64))
	{
		*(Global_1951141->f_2429.f_1[iVar0 /*3*/]) = { *(Global_1951141->f_1538.f_1[iVar0 /*3*/]) };
	}
	*(Global_1951141->f_1657.f_1[iVar0 /*3*/]) = { *(Global_1951141->f_1538.f_1[iVar0 /*3*/]) };
	if (bParam0)
	{
		func_77();
		func_78();
		func_79(&(Global_1951141->f_1055), &(Global_1951141->f_1055.f_9), 6);
	}
}

int func_31()
{
	return &Global_1902689;
}

void func_32(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_80(*iParam0);
	iVar1 = func_81(*iParam0);
	iVar2 = func_82(*iParam0);
	iVar3 = func_83(*iParam0);
	iVar4 = func_84(*iParam0);
	iVar5 = func_85(*iParam0);
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
	iVar6 = func_86(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_86(iVar1, iVar0);
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
	func_87(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_33(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_88(iParam1) || !func_88(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_34(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_89(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_90(Var0);
}

int func_35()
{
	return &(Global_1951141->f_1657.f_1[1 /*3*/]);
}

int func_36(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!func_91(iParam0, iParam2, 1, 1, 0))
	{
		return 0;
	}
	if (bParam3)
	{
		if (PED::IS_PED_A_PLAYER(iParam1))
		{
			iVar0 = 0;
			if (func_92(iParam0, -1811760631, &(Global_1951141->f_1055), &(Global_1951141->f_1055.f_9), 1))
			{
				iVar0 = 2048;
			}
			func_34(9, 0, iVar0, 0, 0);
		}
		else
		{
			func_34(9, 0, 1, iParam1, 0);
		}
	}
	func_93(1);
	return 1;
}

int func_37(int iParam0)
{
	return iParam0;
}

int func_38(int iParam0, int iParam1)
{
	if (!func_94(iParam0, 2))
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

int func_39(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_95(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954472->f_1446;
		case 1:
			return Global_1954472->f_1465.f_136;
		default:
			break;
	}
	return -1;
}

void func_40(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1275573->f_8;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	ENTITY::_0x835F131E7DC8F97A(iParam1, fParam0, 0, 0);
}

int func_41(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_95(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954472->f_1446.f_1;
		case 1:
			return Global_1954472->f_1465.f_136.f_1;
		default:
			break;
	}
	return -1;
}

void func_42(float fParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (fParam0 > 0f && func_96(iVar0))
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if ((PLAYER::_0xB16223CB7DA965F0(iVar0) && fParam0 > 0f) && !bParam2)
	{
		return;
	}
	if (fParam0 == 0f)
	{
		return;
	}
	fVar2 = PLAYER::_0xAB3773E7AA1E9DCC(iVar0);
	if (fParam0 < 0f && bParam1 == 1)
	{
		bParam1 = false;
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, 1f);
	}
	if (fParam0 > 0f)
	{
		PLAYER::_0x51345AE20F22C261(iVar0, fParam0, 0, 0, 1);
	}
	else
	{
		PLAYER::_0x200114E99552462B(iVar0, fParam0, 0);
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, fVar2);
	}
}

int func_43(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_95(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954472->f_1446.f_2;
		case 1:
			return Global_1954472->f_1465.f_136.f_2;
		default:
			break;
	}
	return -1;
}

void func_44(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1275573->f_8;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	PED::_0xC3D4B754C0E86B9E(iParam1, fParam0);
}

float func_45(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_31();
	func_97(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_98(iParam0, 2);
	if (func_33(iVar0, func_99(iParam0, 2), 1))
	{
		func_100(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_53(103, bParam2);
		return 0f;
	}
	func_101(iParam0, func_31(), 2);
	func_100(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_46(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_95(2);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1954472->f_1331.f_6[iParam0 /*3*/]);
		case 1:
			return &(Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/]);
		default:
			break;
	}
	return -1f;
}

int func_47(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_95(2);
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_102(iVar0, iParam0, fParam1))
	{
		if (bParam2)
		{
			if (fParam1 >= 100f)
			{
				AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
			}
		}
		if (bParam3)
		{
			func_103(iParam0, 7000, iParam5);
		}
		func_104(iVar0, iParam0, fParam1);
		func_105(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

float func_48(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_95(1);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1954472->f_1331.f_26[iParam0]);
		case 1:
			return &(Global_1954472->f_1465.f_2.f_26[iParam0]);
		default:
			break;
	}
	return -1f;
}

int func_49()
{
	if (Global_1954472->f_1331.f_107 == -15)
	{
		return 1;
	}
	return func_106(Global_1954472->f_1331.f_107, 0);
}

int func_50(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	fVar0 = ((2f * fVar0) - 100f);
	return BUILTIN::ROUND(((fVar0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

float func_51(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_52(int iParam0, float fParam1, int iParam2)
{
	if (!func_107(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_95(2);
	}
	func_108(iParam0, fParam1, iParam2);
	if (!ENTITY::IS_ENTITY_DEAD(Global_1275573->f_8))
	{
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_1275573->f_8, iParam0, BUILTIN::FLOOR(fParam1));
	}
	return 1;
}

void func_53(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_109(iParam0, &iVar0, &iVar1);
	if (!func_110(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_111(iVar0, iVar1);
}

int func_54(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1f)
	{
		if (func_112(iParam0))
		{
			fParam1 = 30f;
		}
		else
		{
			fParam1 = 30f;
		}
	}
	else if (fParam1 <= 0f)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				sVar0 = func_113(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_114(-1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, iParam3);
			Global_17172.f_54.f_2438.f_34[0 /*2*/] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_113(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_24(1775828486);
			func_115(-1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, iParam3);
			Global_17172.f_54.f_2438.f_34[1 /*2*/] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_113(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_116(-1, 0);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, iParam3);
			Global_17172.f_54.f_2438.f_34[2 /*2*/] = fParam1;
			break;
		case 19:
			func_24(350943398);
			func_117(0, 1, 1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, iParam3);
			(Global_17172.f_54.f_2438.f_34[0 /*2*/])->f_1 = fParam1;
			break;
		case 18:
			func_117(1, 1, 1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, iParam3);
			(Global_17172.f_54.f_2438.f_34[1 /*2*/])->f_1 = fParam1;
			break;
		case 20:
			func_117(2, 1, 1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, iParam3);
			(Global_17172.f_54.f_2438.f_34[2 /*2*/])->f_1 = fParam1;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_55(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!func_118(iParam1))
	{
		return 0;
	}
	if (!func_119(iParam1))
	{
		return 0;
	}
	if (!func_120(iParam0))
	{
		return 0;
	}
	if (!func_121(iParam0))
	{
		return 0;
	}
	if (!func_122(iParam0))
	{
		func_64(iParam0);
	}
	if (func_123(iParam0, iParam1))
	{
		iVar0 = func_124(iParam0);
		Global_1140484->f_41657.f_63[iVar0 /*2*/] = iParam0;
		(Global_1140484->f_41657.f_63[iVar0 /*2*/])->f_1 = (Global_1275573->f_21 + iParam2);
		return 1;
	}
	return 0;
}

struct<2> func_56(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_57(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

int func_58(int iParam0)
{
	switch (iParam0)
	{
		case 1433048902: /* GXTEntry: "Ginseng" */
			return 2;
		case -1602657245: /* GXTEntry: "Bay Bolete" */
			return 4;
		case -1991037110: /* GXTEntry: "Blackberry" */
			return 5;
		case 1047281747: /* GXTEntry: "Currant" */
			return 6;
		case -398744080: /* GXTEntry: "Burdock Root" */
			return 7;
		case -1066874997: /* GXTEntry: "Chanterelle" */
			return 8;
		case -2085219828: /* GXTEntry: "Common Bulrush" */
			return 11;
		case 2064962445: /* GXTEntry: "Creeping Thyme" */
			return 12;
		case -1620920647: /* GXTEntry: "English Mace" */
			return 15;
		case -1664530975: /* GXTEntry: "Evergreen Huckleberry" */
			return 16;
		case -597058368: /* GXTEntry: "Indian Tobacco" */
			return 20;
		case 128702355: /* GXTEntry: "Milkweed" */
			return 23;
		case -2051332199: /* GXTEntry: "Oleander Sage" */
			return 26;
		case 546981776: /* GXTEntry: "Oregano" */
			return 27;
		case -2013384490: /* GXTEntry: "Parasol Mushroom" */
			return 28;
		case 228922461: /* GXTEntry: "Prairie Poppy" */
			return 29;
		case -746674788: /* GXTEntry: "Ram\'s Head" */
			return 31;
		case 599861917: /* GXTEntry: "Raspberry" */
			return 33;
		case -1781387050: /* GXTEntry: "Sage" */
			return 34;
		case 2006811763: /* GXTEntry: "Vanilla Flower" */
			return 37;
		case -90546043: /* GXTEntry: "Violet Snowdrop" */
			return 38;
		case 1216456215: /* GXTEntry: "Wild Carrot" */
			return 48;
		case 746300881: /* GXTEntry: "Wild Feverfew" */
			return 49;
		case -435006002: /* GXTEntry: "Wild Mint" */
			return 50;
		case -624139784: /* GXTEntry: "Wintergreen Berry" */
			return 51;
		case -529638012: /* GXTEntry: "Yarrow" */
			return 52;
		case 1338475089: /* GXTEntry: "Agarita" */
			return 39;
		case 2605459: /* GXTEntry: "Texas Bluebonnet" */
			return 40;
		case 1071702353: /* GXTEntry: "Bitterweed" */
			return 41;
		case -1183422860: /* GXTEntry: "Blood Flower" */
			return 42;
		case -1957546791: /* GXTEntry: "Cardinal Flower" */
			return 43;
		case -589542533: /* GXTEntry: "Chocolate Daisy" */
			return 44;
		case -1776738559: /* GXTEntry: "Creek Plum" */
			return 45;
		case 1602215994: /* GXTEntry: "Wild Rhubarb" */
			return 46;
		case -396757268: /* GXTEntry: "Wisteria" */
			return 47;
	}
	return 0;
}

void func_59(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_60(-372368982, func_125(iParam0)) };
	STATS::_0x6A0184E904CDF25E(&Var0, iParam1);
	func_57(func_126(106002964), iParam1);
}

struct<2> func_60(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

int func_61()
{
	return Global_1572887->f_13;
}

void func_62(int iParam0, int iParam1)
{
	int iVar0;

	if (func_61() == 0)
	{
		iVar0 = func_1(iParam0, -949239683);
		if (iParam1 == -1387038764)
		{
			return;
		}
		if (func_11(iParam0, -136654233))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1823988672, -609313610, 1);
		}
		if ((func_11(iParam0, 1765172170) || 1443104131 == iVar0) || -1919515848 == iVar0)
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1823988672, 733633210, 1);
		}
		if (func_11(iParam0, 1573112293))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1823988672, -1274788474, 1);
		}
		if (func_11(iParam0, -2085281117) && !func_11(iParam0, -1237028043))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1823988672, -1456129530, 1);
		}
		if (func_11(iParam0, 200705431))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1823988672, 1380824593, 1);
		}
		if (((func_11(iParam0, -887064662) || func_11(iParam0, -839724752)) || func_11(iParam0, 1264218912)) || iParam0 == -1994237933)
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1823988672, 381139323, 1);
		}
		if (func_11(iParam0, -764700608))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1823988672, 1844266867, 1);
		}
	}
}

int func_63(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2101912686:
			return 13;
		case -2006026692:
			return 166;
		case -1993903481:
			return 124;
		case -1970041458:
			return 142;
		case -1935700575:
			return 136;
		case -1927422497:
			return 127;
		case -1920464018:
			return 58;
		case -1919393558:
			return 27;
		case -1857550353:
			return 163;
		case -1855662261:
			return 55;
		case -1840995238:
			return 15;
		case -1835722213:
			return 88;
		case -1790318144:
			return 106;
		case -1786033368:
			return 62;
		case -1767968552:
			return 86;
		case -1767662471:
			return 32;
		case -1729980669:
			return 108;
		case -1729554078:
			return 49;
		case -1727526861:
			return 109;
		case -1722264360:
			return 18;
		case -1719665775:
			return 37;
		case -1716981503:
			return 107;
		case -1697567574:
			return 72;
		case -1631930150:
			return 161;
		case -1629969648:
			return 164;
		case -1605880447:
			return 120;
		case -1575244501:
			return 61;
		case -1551628748:
			return 74;
		case -1543433893:
			return 70;
		case -1539337723:
			return 121;
		case -1525401254:
			return 64;
		case -1525233154:
			return 47;
		case -1491472827:
			return 94;
		case -1486927560:
			return 112;
		case -1480068681:
			return 50;
		case -1478178768:
			return 148;
		case -1465202595:
			return 104;
		case -1459368569:
			return 116;
		case -1431848307:
			return 76;
		case -1418298797:
			return 155;
		case -1378468884:
			return 60;
		case -1291022662:
			return 117;
		case -1288042557:
			return 19;
		case -1248720641:
			return 7;
		case -1229834518:
			return 89;
		case -1223791123:
			return 79;
		case -1209874968:
			return 45;
		case -1197630873:
			return 153;
		case -1181880939:
			return 80;
		case -1170784825:
			return 38;
		case -1125028284:
			return 137;
		case -1123356036:
			return 147;
		case -1100659165:
			return 6;
		case -1089821002:
			return 85;
		case -1084890102:
			return 162;
		case -1080696981:
			return 92;
		case -1010031245:
			return 39;
		case -992423055:
			return 157;
		case -979738281:
			return 77;
		case -931294997:
			return 111;
		case -920221586:
			return 110;
		case -900877140:
			return 30;
		case -885737328:
			return 114;
		case -885646667:
			return 67;
		case -837774766:
			return 78;
		case -799500009:
			return 145;
		case -751329575:
			return 139;
		case -711254121:
			return 132;
		case -660114191:
			return 31;
		case -649929946:
			return 53;
		case -636552746:
			return 123;
		case -587737142:
			return 71;
		case -546870456:
			return 159;
		case -521477124:
			return 82;
		case -481051896:
			return 135;
		case -425216802:
			return 17;
		case -415437740:
			return 103;
		case -415250715:
			return 144;
		case -392183396:
			return 90;
		case -343572565:
			return 21;
		case -286632741:
			return 8;
		case -267135864:
			return 138;
		case -233204301:
			return 105;
		case -203268054:
			return 143;
		case -161625840:
			return 167;
		case -126580932:
			return 0;
		case -117284255:
			return 122;
		case -60432888:
			return 44;
		case -56802666:
			return 102;
		case -47513954:
			return 99;
		case -35033037:
			return 133;
		case -33431232:
			return 12;
		case -29822088:
			return 40;
		case 0:
			return 1;
		case 1213703:
			return 154;
		case 54499763:
			return 98;
		case 111084081:
			return 56;
		case 114587291:
			return 29;
		case 149216078:
			return 57;
		case 168336706:
			return 149;
		case 173401469:
			return 100;
		case 180714777:
			return 81;
		case 268103762:
			return 97;
		case 282858309:
			return 171;
		case 320758674:
			return 158;
		case 352539363:
			return 169;
		case 398279342:
			return 34;
		case 408582472:
			return 5;
		case 420477860:
			return 25;
		case 509781427:
			return 93;
		case 550487527:
			return 35;
		case 576694808:
			return 165;
		case 638586808:
			return 118;
		case 659100749:
			return 59;
		case 666050502:
			return 65;
		case 698214003:
			return 2;
		case 713106899:
			return 36;
		case 780689752:
			return 3;
		case 791791441:
			return 125;
		case 797908556:
			return 42;
		case 798283666:
			return 141;
		case 807983049:
			return 150;
		case 839199173:
			return 91;
		case 846387993:
			return 14;
		case 852774198:
			return 113;
		case 878491929:
			return 33;
		case 887717126:
			return 66;
		case 926420921:
			return 51;
		case 946848176:
			return 68;
		case 952755846:
			return 24;
		case 955999834:
			return 134;
		case 956867472:
			return 9;
		case 1036630721:
			return 10;
		case 1037792287:
			return 140;
		case 1052684812:
			return 87;
		case 1075856357:
			return 95;
		case 1078589127:
			return 46;
		case 1095779900:
			return 22;
		case 1110815339:
			return 152;
		case 1138017610:
			return 11;
		case 1156950836:
			return 83;
		case 1195903441:
			return 52;
		case 1278022357:
			return 48;
		case 1323028278:
			return 41;
		case 1374979106:
			return 28;
		case 1405624312:
			return 146;
		case 1444077748:
			return 23;
		case 1498983922:
			return 84;
		case 1554410187:
			return 73;
		case 1585362808:
			return 16;
		case 1614000521:
			return 170;
		case 1636352616:
			return 151;
		case 1662680949:
			return 168;
		case 1698995037:
			return 4;
		case 1769731136:
			return 115;
		case 1801131110:
			return 75;
		case 1806354060:
			return 96;
		case 1811663962:
			return 131;
		case 1828803907:
			return 20;
		case 1829805500:
			return 54;
		case 1830494920:
			return 101;
		case 1838787462:
			return 129;
		case 1899963938:
			return 63;
		case 1900141702:
			return 156;
		case 1903067887:
			return 126;
		case 1907663129:
			return 43;
		case 2040423027:
			return 128;
		case 2050123975:
			return 130;
		case 2096770678:
			return 119;
		case 2110112797:
			return 69;
		case 2119170919:
			return 160;
		case 2132307595:
			return 26;
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

int func_64(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_121(iParam0))
	{
		return 0;
	}
	iVar0 = func_63(iParam0, 1);
	if (!func_119(&(Global_1140484->f_30603.f_847[iVar0 /*12*/])))
	{
		return 1;
	}
	iVar3 = func_127(&(Global_1140484->f_30603.f_847[iVar0 /*12*/]), 1);
	iVar4 = 0;
	while (iVar4 < (Global_1140484->f_30603[iVar3 /*6*/])->f_5)
	{
		iVar1 = Global_1140484->f_30603[iVar3 /*6*/][iVar4];
		switch (func_128(iParam0, iVar1))
		{
			case 0:
				func_129(iVar1, iParam0, iVar4);
				break;
			case 1:
				iVar5 = 0;
				while (iVar5 < Global_1140484->f_30603.f_10924)
				{
					if (&Global_1140484->f_30603.f_8871[iVar5 /*3*/] != iVar1 || (Global_1140484->f_30603.f_8871[iVar5 /*3*/])->f_1 != iParam0)
					{
					}
					else
					{
						func_129(iVar1, iParam0, iVar4);
						func_130(Global_1140484->f_30603.f_8871[iVar5 /*3*/]);
						Global_1140484->f_30603.f_10924 = (Global_1140484->f_30603.f_10924 - 1);
						*(Global_1140484->f_30603.f_8871[iVar5 /*3*/]) = { *(Global_1140484->f_30603.f_8871[Global_1140484->f_30603.f_10924 /*3*/]) };
						func_130(Global_1140484->f_30603.f_8871[Global_1140484->f_30603.f_10924 /*3*/]);
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @554; //curOff = 357
				iVar2 = func_131(iVar1, 1);
				func_132(iVar2, -1);
				if ((Global_1140484->f_30603.f_2900[iVar2 /*31*/])->f_29 <= 0)
				{
					func_133(iVar2, 0);
					iVar6 = 0;
					while (iVar6 < Global_1140484->f_30603.f_8870)
					{
						if (&Global_1140484->f_30603.f_8683[iVar6] != iVar1)
						{
						}
						else
						{
							Global_1140484->f_30603.f_8683[iVar6] = -1;
							Global_1140484->f_30603.f_8870 = (Global_1140484->f_30603.f_8870 - 1);
							Global_1140484->f_30603.f_8683[iVar6] = &Global_1140484->f_30603.f_8683[Global_1140484->f_30603.f_8870];
							Global_1140484->f_30603.f_8683[Global_1140484->f_30603.f_8870] = -1;
						}
						else
						{
							iVar6++;
						}
					}
				}
				iVar4++;
			}
			Global_1140484->f_30603.f_847[iVar0 /*12*/] = -1;
			func_134(Global_1140484->f_30603.f_847[iVar0 /*12*/]);
			return 1;
		}

bool func_65(int iParam0)
{
	return func_135(iParam0);
}

bool func_66(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_67(char* sParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1938417->f_161)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(((*Global_1938417)[iVar0 /*16*/])->f_10), sParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_68(int iParam0)
{
	if (func_66(iParam0, 1))
	{
		func_136(1);
	}
}

struct<5> func_69(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_137(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_138(iParam0);
	switch (iVar5)
	{
		case joaat("clothing"):
			Var0 = { func_70(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			break;
		case joaat("weapon"):
			Var0 = { func_139(bParam1) };
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
				Var0 = { func_70(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_145(iParam0, -1483207246))
			{
				Var0 = { func_70(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1911121386))
			{
				Var0 = { func_70(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_145(iParam0, -1653629781))
			{
				Var0 = { func_70(1384535894, Var0, 1784584921, bParam1) };
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
				Var0 = { func_70(1384535894, Var0, 1784584921, bParam1) };
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

struct<4> func_70(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_3(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_71(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_71(bool bParam0)
{
	if (func_61() == -1)
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

int func_72(bool bParam0)
{
	if (func_61() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_71(bParam0));
}

struct<16> func_73(var uParam0, bool bParam1)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	if (bParam1)
	{
		Var0.f_15 = func_147(uParam0->f_4, joaat("default"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_148() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_74(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_149(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			return func_150(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 17), iVar0, uParam1);
		}
	}
	else
	{
		return func_151(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

void func_75()
{
	Global_1951141->f_1054 = 0;
}

bool func_76(int iParam0)
{
	return (Global_1951141 && iParam0) != 0;
}

void func_77()
{
	Global_1132968->f_5509.f_7 = &Global_1951141->f_1657.f_1[1 /*3*/];
}

void func_78()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 11)
	{
		func_152(Global_1951141->f_1657.f_1[iVar0 /*3*/], iVar0, iVar1);
		iVar1++;
	}
}

void func_79(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	Global_17172.f_54.f_644.f_1353 = uParam0->f_1;
	Global_17172.f_54.f_644.f_1353.f_1 = uParam0->f_2;
	Global_17172.f_54.f_644.f_1353.f_2 = uParam0->f_3;
	Global_17172.f_54.f_644.f_1353.f_3 = uParam0->f_4;
	Global_17172.f_54.f_644.f_1353.f_4 = uParam0->f_5;
	if (uParam0->f_6 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (iVar0 >= uParam0->f_6)
		{
			Global_17172.f_54.f_644.f_1353.f_5[iVar0 /*17*/] = 0;
			(Global_17172.f_54.f_644.f_1353.f_5[iVar0 /*17*/])->f_1 = -1;
			(Global_17172.f_54.f_644.f_1353.f_5[iVar0 /*17*/])->f_2 = 0;
			(Global_17172.f_54.f_644.f_1353.f_5[iVar0 /*17*/])->f_3 = 0;
			(Global_17172.f_54.f_644.f_1353.f_5[iVar0 /*17*/])->f_4 = 0;
			(Global_17172.f_54.f_644.f_1353.f_5[iVar0 /*17*/])->f_5 = 0;
			(Global_17172.f_54.f_644.f_1353.f_5[iVar0 /*17*/])->f_6 = 0;
			(Global_17172.f_54.f_644.f_1353.f_5[iVar0 /*17*/])->f_7 = 0;
			(Global_17172.f_54.f_644.f_1353.f_5[iVar0 /*17*/])->f_8 = 0;
			(Global_17172.f_54.f_644.f_1353.f_5[iVar0 /*17*/])->f_9 = 0;
			(Global_17172.f_54.f_644.f_1353.f_5[iVar0 /*17*/])->f_10 = 0;
			(Global_17172.f_54.f_644.f_1353.f_5[iVar0 /*17*/])->f_11 = 0;
			(Global_17172.f_54.f_644.f_1353.f_5[iVar0 /*17*/])->f_12 = 0f;
			(Global_17172.f_54.f_644.f_1353.f_5[iVar0 /*17*/])->f_13 = 0f;
			(Global_17172.f_54.f_644.f_1353.f_5[iVar0 /*17*/])->f_14 = 0f;
			(Global_17172.f_54.f_644.f_1353.f_5[iVar0 /*17*/])->f_15 = 0;
			(Global_17172.f_54.f_644.f_1353.f_5[iVar0 /*17*/])->f_16 = 0;
		}
		else
		{
			Global_17172.f_54.f_644.f_1353.f_5[iVar0 /*17*/] = uParam1[iVar0 /*18*/];
			(Global_17172.f_54.f_644.f_1353.f_5[iVar0 /*17*/])->f_1 = ((*uParam1)[iVar0 /*18*/])->f_1;
			(Global_17172.f_54.f_644.f_1353.f_5[iVar0 /*17*/])->f_2 = ((*uParam1)[iVar0 /*18*/])->f_3;
			(Global_17172.f_54.f_644.f_1353.f_5[iVar0 /*17*/])->f_3 = ((*uParam1)[iVar0 /*18*/])->f_4;
			(Global_17172.f_54.f_644.f_1353.f_5[iVar0 /*17*/])->f_4 = ((*uParam1)[iVar0 /*18*/])->f_5;
			(Global_17172.f_54.f_644.f_1353.f_5[iVar0 /*17*/])->f_5 = ((*uParam1)[iVar0 /*18*/])->f_6;
			(Global_17172.f_54.f_644.f_1353.f_5[iVar0 /*17*/])->f_6 = ((*uParam1)[iVar0 /*18*/])->f_7;
			(Global_17172.f_54.f_644.f_1353.f_5[iVar0 /*17*/])->f_7 = ((*uParam1)[iVar0 /*18*/])->f_8;
			(Global_17172.f_54.f_644.f_1353.f_5[iVar0 /*17*/])->f_8 = ((*uParam1)[iVar0 /*18*/])->f_9;
			(Global_17172.f_54.f_644.f_1353.f_5[iVar0 /*17*/])->f_9 = ((*uParam1)[iVar0 /*18*/])->f_10;
			(Global_17172.f_54.f_644.f_1353.f_5[iVar0 /*17*/])->f_10 = ((*uParam1)[iVar0 /*18*/])->f_11;
			(Global_17172.f_54.f_644.f_1353.f_5[iVar0 /*17*/])->f_11 = ((*uParam1)[iVar0 /*18*/])->f_12;
			(Global_17172.f_54.f_644.f_1353.f_5[iVar0 /*17*/])->f_12 = ((*uParam1)[iVar0 /*18*/])->f_13;
			(Global_17172.f_54.f_644.f_1353.f_5[iVar0 /*17*/])->f_13 = ((*uParam1)[iVar0 /*18*/])->f_14;
			(Global_17172.f_54.f_644.f_1353.f_5[iVar0 /*17*/])->f_14 = ((*uParam1)[iVar0 /*18*/])->f_15;
			(Global_17172.f_54.f_644.f_1353.f_5[iVar0 /*17*/])->f_15 = ((*uParam1)[iVar0 /*18*/])->f_16;
			(Global_17172.f_54.f_644.f_1353.f_5[iVar0 /*17*/])->f_16 = ((*uParam1)[iVar0 /*18*/])->f_17;
		}
		iVar0++;
	}
}

int func_80(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_153(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_81(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_82(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_83(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_84(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_85(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_86(int iParam0, int iParam1)
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

void func_87(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_154(iParam0, iParam6);
	func_155(iParam0, iParam5);
	func_156(iParam0, iParam4);
	func_157(iParam0, iParam3);
	func_158(iParam0, iParam2);
	func_159(iParam0, iParam1);
}

int func_88(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_85(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_84(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_83(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_80(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_81(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_82(iParam0);
	if (iVar5 < 1 || iVar5 > func_86(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_89(int iParam0)
{
	Global_1951141 = (Global_1951141 || iParam0);
}

void func_90(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	switch (Param0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
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
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
			if (Global_1951141->f_916 >= 25)
			{
				return;
			}
			if (func_160(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1951141->f_916)
				{
					iVar1 = ((Global_1951141->f_921 + iVar0) % 25);
					if ((&Global_1951141->f_734[iVar1 /*4*/] == Param0 && (Global_1951141->f_734[iVar1 /*4*/])->f_1 == Param0.f_1) && (Global_1951141->f_734[iVar1 /*4*/])->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_161(Param0);
			*(Global_1951141->f_734[Global_1951141->f_922 /*4*/]) = { Param0 };
			Global_1951141->f_916++;
			Global_1951141->f_922 = (Global_1951141->f_922 + 1 % 25);
			func_89(8);
			break;
		case 23:
		case 24:
		case 25:
			if (Global_1951141->f_917 >= 25)
			{
				return;
			}
			if (func_160(Param0))
			{
				return;
			}
			func_161(Param0);
			*(Global_1951141->f_633[Global_1951141->f_917 /*4*/]) = { Param0 };
			Global_1951141->f_917++;
			func_89(8);
			break;
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 36:
		case 37:
		case 38:
			if (Global_1951141->f_918 >= 20)
			{
				return;
			}
			if (func_160(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1951141->f_918)
				{
					iVar1 = ((Global_1951141->f_919 + iVar0) % 20);
					if ((&Global_1951141->f_835[iVar1 /*4*/] == Param0 && (Global_1951141->f_835[iVar1 /*4*/])->f_1 == Param0.f_1) && (Global_1951141->f_835[iVar1 /*4*/])->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_161(Param0);
			*(Global_1951141->f_835[Global_1951141->f_920 /*4*/]) = { Param0 };
			Global_1951141->f_918++;
			Global_1951141->f_920 = (Global_1951141->f_920 + 1 % 20);
			func_89(8);
			break;
			break;
	}
}

int func_91(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_162();
	if (iParam2 == 39)
	{
		Var0 = { func_69(iParam0, 1, 0) };
		iParam2 = func_164(func_163(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_76(32768) && iParam2 == 10)
	{
		func_165(1108822547);
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_166(iParam2);
	func_167(iParam2, iVar5);
	func_168(Global_1951141->f_1538.f_1[iParam2 /*3*/], 4, 6);
	func_168(Global_1951141->f_1657.f_1[iParam2 /*3*/], 4, 6);
	func_169(&(Global_1951141->f_1538), iParam0, iParam2, bParam4);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1951141->f_1538.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1951141->f_1538.f_1[iParam2 /*3*/] = iParam0;
	(Global_1951141->f_1538.f_1[iParam2 /*3*/])->f_1 = func_170(iParam0, iParam2, iParam1);
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1951141->f_2760)
		{
			if (&Global_1951141->f_2760.f_2[iVar6 /*2*/] >= 0 && &Global_1951141->f_2760.f_2[iVar6 /*2*/] < 39)
			{
				Global_1951141->f_2627[&Global_1951141->f_2760.f_2[iVar6 /*2*/] /*2*/] = 0;
				(Global_1951141->f_2627[&Global_1951141->f_2760.f_2[iVar6 /*2*/] /*2*/])->f_1 = 0;
				func_172(func_171(&(Global_1951141->f_2760.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

int func_92(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<15> Var3;
	struct<18> Var21;

	if (func_173(&(Global_1951141->f_1055), 2))
	{
		return 0;
	}
	if (iParam1 == -2118203104)
	{
		iVar0 = func_174(iParam0);
	}
	else if (iParam1 == -1811760631)
	{
		iVar0 = func_175(iParam0);
	}
	else
	{
		return 0;
	}
	iVar1 = func_176(uParam3, iParam1);
	bVar2 = func_177(iVar0) != false;
	if (iVar1 == -1 && bVar2)
	{
		return 0;
	}
	if (bVar2)
	{
		if (bParam4)
		{
			func_178(uParam2, uParam3, iParam1);
		}
		else
		{
			func_179(uParam2, uParam3, iVar1);
		}
		return 1;
	}
	if (bParam4)
	{
		Var3.f_2 = -1;
		Var3.f_13 = 1065353216;
		Var3.f_14 = 1065353216;
		if (!func_180(&Var3, iVar0, 0, 1, 6))
		{
			return 0;
		}
		if (iVar1 != -1 && Var3.f_3 == ((*uParam3)[iVar1 /*18*/])->f_3)
		{
			return 0;
		}
		func_181(uParam2, uParam3, &Var3);
	}
	else if (iVar1 == -1)
	{
		func_182(uParam2, uParam3, iVar0, 0, 1);
	}
	else
	{
		Var21.f_2 = -1;
		Var21.f_13 = 1065353216;
		Var21.f_14 = 1065353216;
		if (!func_180(&Var21, iVar0, 0, 1, 6))
		{
			return 0;
		}
		*((*uParam3)[iVar1 /*18*/]) = { Var21 };
	}
	return 1;
}

void func_93(int iParam0)
{
	Global_1951141->f_1054 = iParam0;
}

int func_94(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

int func_95(int iParam0)
{
	return func_184(func_183(iParam0));
}

bool func_96(int iParam0)
{
	float fVar0;

	fVar0 = (func_185(iParam0) - PLAYER::_0xDF66A37936D5F3D9(iParam0));
	return fVar0 <= 1f;
}

void func_97(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_80(*iParam0);
	iVar1 = func_81(*iParam0);
	iVar2 = func_82(*iParam0);
	iVar3 = func_83(*iParam0);
	iVar4 = func_84(*iParam0);
	iVar5 = func_85(*iParam0);
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
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		if (iVar6 < 0)
		{
			iParam6++;
			iVar1 += 12;
		}
		iVar7 = func_86(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_87(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_98(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_95(2);
	}
	switch (iParam1)
	{
		case 0:
			return (Global_1954472->f_1331.f_6[iParam0 /*3*/])->f_2;
		case 1:
			return (Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/])->f_2;
		default:
			break;
	}
	return -1;
}

int func_99(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_95(2);
	}
	switch (iParam1)
	{
		case 0:
			return (Global_1954472->f_1331.f_6[iParam0 /*3*/])->f_1;
		case 1:
			return (Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/])->f_1;
		default:
			break;
	}
	return -15;
}

void func_100(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_95(2);
	}
	switch (iParam2)
	{
		case 0:
			(Global_1954472->f_1331.f_6[iParam0 /*3*/])->f_2 = iParam1;
			break;
		case 1:
			(Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/])->f_2 = iParam1;
			break;
		default:
			break;
	}
}

void func_101(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_95(2);
	}
	switch (iParam2)
	{
		case 0:
			(Global_1954472->f_1331.f_6[iParam0 /*3*/])->f_1 = iParam1;
			break;
		case 1:
			(Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/])->f_1 = iParam1;
			break;
		default:
			break;
	}
}

int func_102(int iParam0, int iParam1, float fParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (fParam2 > 100f)
	{
		fParam2 = 100f;
	}
	else if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iParam0, func_186(iParam1), BUILTIN::CEIL(fParam2));
	return 1;
}

void func_103(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_95(2);
	}
	if (iParam1 > 0)
	{
		iParam1 = (iParam1 + MISC::GET_GAME_TIMER());
	}
	switch (iParam2)
	{
		case 0:
			Global_1954472->f_1331.f_16[iParam0 /*3*/] = iParam1;
			break;
		case 1:
			Global_1954472->f_1465.f_2.f_16[iParam0 /*3*/] = iParam1;
			break;
		default:
			break;
	}
}

void func_104(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_187(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_0x437C08DB4FEBE2BD(iParam0, func_188(iParam1), fParam2, -1);
	}
}

void func_105(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	var uVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_95(2);
	}
	uVar0 = Global_1275573->f_21;
	func_189(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_190(iParam0, uVar0, iParam3);
	}
}

bool func_106(int iParam0, bool bParam1)
{
	return func_33(func_31(), iParam0, bParam1);
}

int func_107(int iParam0)
{
	if (func_112(iParam0))
	{
		return 1;
	}
	else if (func_191(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_108(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 <= 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_95(1);
	}
	switch (iParam2)
	{
		case 0:
			Global_1954472->f_1331.f_26[iParam0] = fParam1;
			break;
		case 1:
			Global_1954472->f_1465.f_2.f_26[iParam0] = fParam1;
			break;
		default:
			break;
	}
}

void func_109(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_110(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 30)
	{
		return 0;
	}
	if (func_192(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_193(iParam0))
	{
		return 0;
	}
	if (func_194(iParam0))
	{
		return 0;
	}
	if ((Global_1900718->f_67 && !func_195(iParam0, 1)) || func_196(32768))
	{
		if (!func_195(iParam0, 262144) || !Global_1904613->f_8198)
		{
			return 0;
		}
	}
	if (!func_197())
	{
		return 0;
	}
	return 1;
}

void func_111(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904613[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1904613)[iParam0] = uVar0;
}

int func_112(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		default:
			break;
	}
	return 0;
}

char* func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
		case 1:
			return "PlayerOverpower";
		case 2:
			return "PlayerOverpower";
		default:
			break;
	}
	return "";
}

void func_114(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0x16F2C8C084AB2092(iVar0);
	}
	iVar1 = func_39(2);
	func_40(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_115(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0xFC3B580C4380B5B7(iVar0);
	}
	iVar1 = func_43(2);
	func_44(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_116(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = 10;
	}
	iVar0 = func_41(2);
	func_42(BUILTIN::TO_FLOAT((iParam0 * iVar0)), 0, bParam1);
}

void func_117(int iParam0, bool bParam1, bool bParam2)
{
	func_47(iParam0, 100f, bParam1, bParam2, 1, 2);
}

int func_118(int iParam0)
{
	int iVar0;

	iVar0 = func_127(iParam0, 1);
	if (iVar0 >= 140 && iVar0 <= 140)
	{
		return 1;
	}
	return 0;
}

int func_119(int iParam0)
{
	int iVar0;

	iVar0 = func_127(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 141)
	{
		return 0;
	}
	return 1;
}

int func_120(int iParam0)
{
	int iVar0;

	iVar0 = func_63(iParam0, 1);
	if (iVar0 >= 170 && iVar0 <= 170)
	{
		return 1;
	}
	return 0;
}

int func_121(int iParam0)
{
	int iVar0;

	iVar0 = func_63(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 171)
	{
		return 0;
	}
	return 1;
}

bool func_122(int iParam0)
{
	if (!func_121(iParam0))
	{
		return false;
	}
	return &Global_1140484->f_30603.f_847[func_63(iParam0, 1) /*12*/] == -1;
}

int func_123(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_121(iParam0))
	{
		return 0;
	}
	iVar0 = func_63(iParam0, 1);
	if (!func_119(iParam1))
	{
		return 0;
	}
	iVar1 = func_127(iParam1, 1);
	if (&Global_1140484->f_30603.f_847[iVar0 /*12*/] == iParam1)
	{
		return 1;
	}
	if (func_119(&(Global_1140484->f_30603.f_847[iVar0 /*12*/])))
	{
		func_64(iParam0);
	}
	Global_1140484->f_30603.f_847[iVar0 /*12*/] = iParam1;
	iVar4 = 0;
	while (iVar4 < (Global_1140484->f_30603[iVar1 /*6*/])->f_5)
	{
		iVar2 = Global_1140484->f_30603[iVar1 /*6*/][iVar4];
		iVar3 = func_131(iVar2, 1);
		switch (func_198(iParam0, iVar2))
		{
			case 0:
				func_199(iVar2, iParam0, iVar4);
				break;
			case 1:
				Global_1140484->f_30603.f_8871[Global_1140484->f_30603.f_10924 /*3*/] = iVar2;
				(Global_1140484->f_30603.f_8871[Global_1140484->f_30603.f_10924 /*3*/])->f_1 = iParam0;
				(Global_1140484->f_30603.f_8871[Global_1140484->f_30603.f_10924 /*3*/])->f_2 = iVar4;
				Global_1140484->f_30603.f_10924++;
				break;
			case 2:
				Jump @391; //curOff = 312
				if ((Global_1140484->f_30603.f_2900[iVar3 /*31*/])->f_29 <= 0)
				{
					Global_1140484->f_30603.f_8683[Global_1140484->f_30603.f_8870] = iVar2;
					Global_1140484->f_30603.f_8870++;
				}
				func_132(iVar3, 1);
				iVar4++;
			}
			return 1;
		}

int func_124(int iParam0)
{
	int iVar0;

	iVar0 = func_63(iParam0, 1);
	if (func_200(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_201(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_202(iParam0))
	{
		return (iVar0 - 161);
	}
	else if (func_203(iParam0))
	{
		return (iVar0 - 162);
	}
	else if (func_120(iParam0))
	{
		return (iVar0 - 170);
	}
	else if (func_204(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_125(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -932875117 /* GXTEntry: "Alaskan Ginseng" */;
		case 3:
			return 1660962977 /* GXTEntry: "American Ginseng" */;
		case 4:
			return -131409450 /* GXTEntry: "Bay Bolete" */;
		case 5:
			return -1487527516 /* GXTEntry: "Blackberry" */;
		case 6:
			return 561629573 /* GXTEntry: "Blackcurrant" */;
		case 7:
			return 1829679323 /* GXTEntry: "Burdock Root" */;
		case 8:
			return -618617794 /* GXTEntry: "Chanterelles" */;
		case 11:
			return 653458791 /* GXTEntry: "Common Bulrush" */;
		case 12:
			return 437319607 /* GXTEntry: "Creeping Thyme" */;
		case 13:
			return -1519488075 /* GXTEntry: "Desert Sage" */;
		case 15:
			return 1014445254 /* GXTEntry: "English Mace" */;
		case 16:
			return 224814421 /* GXTEntry: "Evergreen Huckleberry" */;
		case 18:
			return 1012187868 /* GXTEntry: "Golden Currant" */;
		case 19:
			return -1040706491 /* GXTEntry: "Hummingbird Sage" */;
		case 20:
			return -1910627346 /* GXTEntry: "Indian Tobacco" */;
		case 23:
			return -1812487593 /* GXTEntry: "Milkweed" */;
		case 26:
			return 1983971282 /* GXTEntry: "Oleander Sage" */;
		case 27:
			return 1561519041 /* GXTEntry: "Oregano" */;
		case 28:
			return -980496853 /* GXTEntry: "Parasol Mushroom" */;
		case 29:
			return -1738887126 /* GXTEntry: "Prairie Poppy" */;
		case 31:
			return 424771379 /* GXTEntry: "Ram\'s Head" */;
		case 33:
			return 787316814 /* GXTEntry: "Red Raspberry" */;
		case 34:
			return 984616481 /* GXTEntry: "Red Sage" */;
		case 37:
			return 1078285403 /* GXTEntry: "Vanilla Flower" */;
		case 38:
			return -262897007 /* GXTEntry: "Violet Snowdrop" */;
		case 48:
			return -1727702531 /* GXTEntry: "Wild Carrot" */;
		case 49:
			return 1783324404 /* GXTEntry: "Wild Feverfew" */;
		case 50:
			return 1288848815 /* GXTEntry: "Wild Mint" */;
		case 51:
			return 918090738 /* GXTEntry: "Wintergreen Berry" */;
		case 52:
			return 170272501 /* GXTEntry: "Yarrow" */;
		case 1:
			return 2056650000 /* GXTEntry: "Acuna\'s Star Orchid" */;
		case 9:
			return -1195354638 /* GXTEntry: "Cigar Orchid" */;
		case 10:
			return 1077596967 /* GXTEntry: "Clamshell Orchid" */;
		case 14:
			return -2145199848 /* GXTEntry: "Dragon\'s Mouth Orchid" */;
		case 17:
			return 752824478 /* GXTEntry: "Ghost Orchid" */;
		case 21:
			return -819513569 /* GXTEntry: "Lady of the Night Orchid" */;
		case 22:
			return 1906968775 /* GXTEntry: "Lady Slipper Orchid" */;
		case 24:
			return -135434663 /* GXTEntry: "Moccasin Flower Orchid" */;
		case 25:
			return 920123680 /* GXTEntry: "Night Scented Orchid" */;
		case 30:
			return 150470908 /* GXTEntry: "Queen\'s Orchid" */;
		case 32:
			return -1665125257 /* GXTEntry: "Rat Tail Orchid" */;
		case 35:
			return 1587928307 /* GXTEntry: "Sparrow\'s Egg Orchid" */;
		case 36:
			return -1738925422 /* GXTEntry: "Spider Orchid" */;
		case 39:
			return 656594395;
		case 41:
			return -1174738785;
		case 42:
			return 1073505629;
		case 40:
			return -658674894;
		case 43:
			return -1504155535;
		case 44:
			return -1917345716;
		case 45:
			return 1823406682;
		case 46:
			return -1003637772;
		case 47:
			return -1571524081;
	}
	return 0;
}

struct<2> func_126(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

int func_127(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2137819446:
			return 100;
		case -2131931188:
			return 127;
		case -2130179962:
			return 63;
		case -2059502051:
			return 65;
		case -2056449621:
			return 93;
		case -1973221270:
			return 64;
		case -1969715419:
			return 35;
		case -1968787770:
			return 6;
		case -1957895818:
			return 56;
		case -1952291530:
			return 130;
		case -1950424573:
			return 54;
		case -1910888845:
			return 110;
		case -1883405573:
			return 78;
		case -1844803100:
			return 80;
		case -1831687141:
			return 62;
		case -1810408560:
			return 73;
		case -1805785047:
			return 41;
		case -1759910473:
			return 25;
		case -1756646040:
			return 92;
		case -1741565123:
			return 47;
		case -1609480552:
			return 61;
		case -1596526341:
			return 3;
		case -1573606823:
			return 49;
		case -1510695159:
			return 138;
		case -1504620904:
			return 107;
		case -1462866101:
			return 111;
		case -1405836475:
			return 55;
		case -1360021450:
			return 9;
		case -1356583879:
			return 128;
		case -1242362177:
			return 46;
		case -1235458416:
			return 74;
		case -1234968784:
			return 69;
		case -1234548949:
			return 7;
		case -1143906885:
			return 122;
		case -1140308479:
			return 134;
		case -1105699593:
			return 141;
		case -1008191715:
			return 1;
		case -985141745:
			return 79;
		case -974857798:
			return 131;
		case -914097888:
			return 123;
		case -900341092:
			return 133;
		case -859661758:
			return 60;
		case -810885450:
			return 40;
		case -750368411:
			return 48;
		case -691826426:
			return 77;
		case -608746625:
			return 17;
		case -567710817:
			return 2;
		case -565327488:
			return 72;
		case -559775780:
			return 117;
		case -549372097:
			return 59;
		case -455491084:
			return 85;
		case -447950391:
			return 94;
		case -418060375:
			return 4;
		case -391691334:
			return 68;
		case -375368707:
			return 58;
		case -357713093:
			return 119;
		case -336340230:
			return 115;
		case -309456186:
			return 10;
		case -300915357:
			return 136;
		case -252777454:
			return 126;
		case -190717545:
			return 30;
		case -179898515:
			return 118;
		case -179343615:
			return 140;
		case -132268497:
			return 132;
		case -120658935:
			return 67;
		case -97080319:
			return 43;
		case -93340399:
			return 106;
		case -2338369:
			return 39;
		case -1:
			return 0;
		case 18275459:
			return 8;
		case 47725914:
			return 11;
		case 151887407:
			return 18;
		case 153569762:
			return 44;
		case 163503896:
			return 101;
		case 183566846:
			return 15;
		case 193887912:
			return 113;
		case 225804550:
			return 124;
		case 267361268:
			return 86;
		case 272084311:
			return 71;
		case 312483235:
			return 29;
		case 349431355:
			return 105;
		case 350943398:
			return 102;
		case 383280474:
			return 12;
		case 467901857:
			return 51;
		case 508502713:
			return 125;
		case 548902645:
			return 109;
		case 591249118:
			return 28;
		case 611341556:
			return 16;
		case 618168626:
			return 26;
		case 620773281:
			return 98;
		case 668358831:
			return 139;
		case 677513315:
			return 45;
		case 713112284:
			return 50;
		case 722162219:
			return 88;
		case 730253571:
			return 36;
		case 731266401:
			return 90;
		case 785001351:
			return 135;
		case 793035862:
			return 81;
		case 802887669:
			return 114;
		case 828060856:
			return 38;
		case 837742789:
			return 70;
		case 900184247:
			return 21;
		case 924932702:
			return 14;
		case 969398724:
			return 89;
		case 1014273190:
			return 96;
		case 1033330939:
			return 82;
		case 1034286944:
			return 87;
		case 1123546272:
			return 104;
		case 1138545953:
			return 20;
		case 1157170123:
			return 75;
		case 1159895828:
			return 31;
		case 1296512587:
			return 97;
		case 1377989036:
			return 19;
		case 1423325819:
			return 32;
		case 1476796894:
			return 24;
		case 1486559056:
			return 120;
		case 1493749872:
			return 112;
		case 1500545235:
			return 129;
		case 1507470319:
			return 83;
		case 1543468593:
			return 137;
		case 1568867811:
			return 57;
		case 1625043854:
			return 22;
		case 1667258255:
			return 33;
		case 1695199279:
			return 121;
		case 1699722938:
			return 13;
		case 1746978940:
			return 84;
		case 1764814366:
			return 95;
		case 1767031434:
			return 116;
		case 1775828486:
			return 103;
		case 1830439946:
			return 23;
		case 1851839077:
			return 99;
		case 1860260195:
			return 66;
		case 1885285188:
			return 52;
		case 1905466026:
			return 27;
		case 1925734249:
			return 76;
		case 1938325642:
			return 5;
		case 2079700825:
			return 42;
		case 2081475118:
			return 37;
		case 2093509505:
			return 34;
		case 2100718034:
			return 108;
		case 2117355246:
			return 53;
		case 2146493981:
			return 91;
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

int func_128(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_205(iParam0);
	iVar1 = &Global_1275573;
	iVar2 = func_131(iParam1, 1);
	switch ((Global_1140484->f_30603.f_2900[iVar2 /*31*/])->f_1)
	{
		case -1912291748:
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case joaat("duration"):
		case -594821844:
		case 348502922:
		case 1002704651:
		case 1270499458:
			return 1;
		default:
			if (iVar1 == iVar0)
			{
				return 1;
			}
			break;
	}
	return 2;
}

int func_129(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;

	if (!func_121(iParam1))
	{
		return 0;
	}
	if (!func_206(iParam0))
	{
		return 0;
	}
	iVar0 = func_131(iParam0, 1);
	func_207(iParam0, iParam1, iParam2);
	if (func_208(*(Global_1140484->f_30603.f_2900[iVar0 /*31*/])) && func_209(iParam0, (Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4))
	{
		vVar1 = { func_210((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4) };
		if (func_211(vVar1))
		{
			if (func_212(vVar1.x, vVar1.y, vVar1.z))
			{
				func_213((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_214((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4);
			}
		}
		else
		{
			func_214((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4);
		}
	}
	return 1;
}

void func_130(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_131(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2139291255:
			return 145;
		case -2133203822:
			return 108;
		case -2119961771:
			return 90;
		case -2117138640:
			return 79;
		case -2115524796:
			return 60;
		case -2108980762:
			return 137;
		case -2088744988:
			return 91;
		case -2056483403:
			return 75;
		case -2008161946:
			return 26;
		case -2006179687:
			return 170;
		case -1961023994:
			return 92;
		case -1958950493:
			return 183;
		case -1954641284:
			return 28;
		case -1946267644:
			return 130;
		case -1925826694:
			return 49;
		case -1920322236:
			return 22;
		case -1886192107:
			return 55;
		case -1854279248:
			return 6;
		case -1853627206:
			return 134;
		case -1851126253:
			return 29;
		case -1847886830:
			return 16;
		case -1841577353:
			return 112;
		case -1840959475:
			return 106;
		case -1808210911:
			return 30;
		case -1803458707:
			return 8;
		case -1761885354:
			return 111;
		case -1749044999:
			return 96;
		case -1698597704:
			return 45;
		case -1631537135:
			return 63;
		case -1599892133:
			return 38;
		case -1514337705:
			return 177;
		case -1498884346:
			return 151;
		case -1448841146:
			return 50;
		case -1445919747:
			return 117;
		case -1441068914:
			return 39;
		case -1426414385:
			return 172;
		case -1421504146:
			return 109;
		case -1419242781:
			return 33;
		case -1394912816:
			return 186;
		case -1378028573:
			return 27;
		case -1370534631:
			return 110;
		case -1327315394:
			return 1;
		case -1311380047:
			return 46;
		case -1299791944:
			return 2;
		case -1280685390:
			return 132;
		case -1268916163:
			return 119;
		case -1256990268:
			return 76;
		case -1139172958:
			return 61;
		case -1112015628:
			return 163;
		case -1094465110:
			return 47;
		case -1038422902:
			return 74;
		case -1011126213:
			return 31;
		case -964953325:
			return 123;
		case -955252868:
			return 124;
		case -932897324:
			return 11;
		case -931584677:
			return 103;
		case -925634234:
			return 21;
		case -750441842:
			return 174;
		case -649515024:
			return 142;
		case -624920400:
			return 81;
		case -612675573:
			return 148;
		case -572117096:
			return 182;
		case -562496675:
			return 57;
		case -562150430:
			return 171;
		case -560965516:
			return 48;
		case -554207528:
			return 59;
		case -539762089:
			return 97;
		case -529396121:
			return 175;
		case -454200664:
			return 104;
		case -440727241:
			return 19;
		case -423133485:
			return 133;
		case -403292810:
			return 113;
		case -398496662:
			return 23;
		case -343145237:
			return 155;
		case -342633876:
			return 5;
		case -334674962:
			return 13;
		case -332283977:
			return 66;
		case -306011710:
			return 4;
		case -280832639:
			return 51;
		case -276166656:
			return 162;
		case -269291543:
			return 68;
		case -206787059:
			return 35;
		case -164741307:
			return 105;
		case -158245263:
			return 41;
		case -147416760:
			return 150;
		case -97000889:
			return 86;
		case -91604267:
			return 159;
		case -1:
			return 0;
		case 25589062:
			return 56;
		case 39330853:
			return 125;
		case 78014060:
			return 9;
		case 81243326:
			return 69;
		case 141777963:
			return 15;
		case 183131704:
			return 167;
		case 200623432:
			return 64;
		case 221495846:
			return 165;
		case 224471061:
			return 98;
		case 233412256:
			return 77;
		case 279713143:
			return 161;
		case 285724035:
			return 54;
		case 302482713:
			return 136;
		case 347710188:
			return 89;
		case 350341162:
			return 127;
		case 447464746:
			return 129;
		case 570385280:
			return 185;
		case 593083875:
			return 80;
		case 639606025:
			return 70;
		case 654960265:
			return 95;
		case 668064801:
			return 184;
		case 671416267:
			return 107;
		case 673708797:
			return 139;
		case 694721787:
			return 20;
		case 702532569:
			return 82;
		case 720207812:
			return 168;
		case 724367341:
			return 65;
		case 726043209:
			return 58;
		case 728769635:
			return 83;
		case 756791452:
			return 149;
		case 763061271:
			return 18;
		case 775646007:
			return 102;
		case 783509408:
			return 160;
		case 794883372:
			return 176;
		case 805902559:
			return 84;
		case 817456409:
			return 100;
		case 835146902:
			return 181;
		case 841152146:
			return 93;
		case 886162534:
			return 131;
		case 937140932:
			return 173;
		case 997052462:
			return 152;
		case 1034295275:
			return 17;
		case 1040501041:
			return 122;
		case 1093424641:
			return 115;
		case 1139016431:
			return 34;
		case 1144080006:
			return 32;
		case 1171151366:
			return 43;
		case 1175961229:
			return 138;
		case 1193587137:
			return 166;
		case 1201719505:
			return 42;
		case 1203687692:
			return 10;
		case 1208331227:
			return 12;
		case 1211076549:
			return 73;
		case 1265311313:
			return 36;
		case 1268462011:
			return 37;
		case 1294394742:
			return 179;
		case 1295163466:
			return 114;
		case 1300622865:
			return 99;
		case 1312155508:
			return 144;
		case 1324420970:
			return 25;
		case 1328995848:
			return 88;
		case 1336349861:
			return 143;
		case 1336429519:
			return 140;
		case 1390582854:
			return 94;
		case 1413720692:
			return 158;
		case 1433853218:
			return 85;
		case 1452940977:
			return 87;
		case 1480202237:
			return 178;
		case 1482822775:
			return 146;
		case 1514854451:
			return 180;
		case 1522457772:
			return 147;
		case 1523275824:
			return 62;
		case 1524301922:
			return 78;
		case 1557116130:
			return 126;
		case 1557362410:
			return 116;
		case 1578015076:
			return 72;
		case 1578708778:
			return 67;
		case 1596748830:
			return 101;
		case 1608803012:
			return 128;
		case 1644017723:
			return 153;
		case 1687654048:
			return 71;
		case 1704907062:
			return 169;
		case 1726722300:
			return 135;
		case 1744707601:
			return 3;
		case 1746613639:
			return 121;
		case 1767173923:
			return 141;
		case 1798083308:
			return 24;
		case 1813411238:
			return 157;
		case 1835150954:
			return 40;
		case 1903955831:
			return 7;
		case 1913593527:
			return 53;
		case 1930815945:
			return 118;
		case 1938151130:
			return 44;
		case 1976949991:
			return 156;
		case 2028487040:
			return 52;
		case 2051020894:
			return 164;
		case 2081856931:
			return 120;
		case 2113464199:
			return 154;
		case 2126590447:
			return 14;
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

void func_132(int iParam0, int iParam1)
{
	(Global_1140484->f_30603.f_2900[iParam0 /*31*/])->f_29 = ((Global_1140484->f_30603.f_2900[iParam0 /*31*/])->f_29 + iParam1);
}

void func_133(int iParam0, int iParam1)
{
	(Global_1140484->f_30603.f_2900[iParam0 /*31*/])->f_29 = iParam1;
}

void func_134(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1[iVar0 /*2*/] = 0;
		(uParam0->f_1[iVar0 /*2*/])->f_1 = 0;
		iVar0++;
	}
}

bool func_135(int iParam0)
{
	return func_215(Global_1939067->f_38, iParam0);
}

void func_136(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		}
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
		{
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");
		}
	}
}

struct<4> func_137(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_71(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1272170))
			{
				*Global_1272170 = { func_70(joaat("character"), func_148(), -1591664384, bParam0) };
			}
			return *Global_1272170;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_12)))
			{
				Global_1272170->f_12 = { func_70(joaat("character"), func_148(), -1591664384, 0) };
			}
			return Global_1272170->f_12;
		}
	}
	return func_70(joaat("character"), func_148(), -1591664384, bParam0);
}

int func_138(int iParam0)
{
	vector3 vVar0;

	if (!func_3(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_139(bool bParam0)
{
	int iVar0;

	iVar0 = func_71(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_4)))
		{
			Global_1272170->f_4 = { func_70(923904168, func_137(bParam0), -740156546, bParam0) };
		}
		return Global_1272170->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_16)))
		{
			Global_1272170->f_16 = { func_70(923904168, func_137(bParam0), -740156546, 0) };
		}
		return Global_1272170->f_16;
	}
	return func_70(923904168, func_137(bParam0), -740156546, 0);
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
			return func_216();
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
	return func_217(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

int func_142(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_218(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_143(bool bParam0)
{
	int iVar0;

	iVar0 = func_71(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_8)))
		{
			Global_1272170->f_8 = { func_70(271701509, func_137(bParam0), 12999093, 0) };
		}
		return Global_1272170->f_8;
	}
	return func_70(271701509, func_137(bParam0), 12999093, 0);
}

int func_144(int iParam0)
{
	struct<2> Var0;

	if (!func_3(iParam0, 0))
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
			if (func_219(iParam0, iParam1, iVar0))
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
	return func_220(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_147(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

struct<4> func_148()
{
	struct<4> Var0;

	return Var0;
}

int func_149(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("use"))
	{
		if (func_215(uVar0, 2048))
		{
			return 0;
		}
	}
	else if (func_215(uVar0, 8))
	{
		return 0;
	}
	else if (func_215(uVar0, 16))
	{
		return 0;
	}
	else if (func_215(uVar0, 65536))
	{
		return 0;
	}
	return 1;
}

int func_150(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_221(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_221(iParam1, 2, 0, 0);
	return -1;
}

int func_151(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_221(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

void func_152(var uParam0, int iParam1, int iParam2)
{
	*((Global_17172.f_54.f_644.f_32[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
}

int func_153(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_154(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_155(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_156(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_81(*iParam0);
	iVar1 = func_80(*iParam0);
	if (iParam1 < 1 || iParam1 > func_86(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_157(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_158(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_159(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_160(int iParam0)
{
	return &Global_1951141->f_593[iParam0] > 0;
}

void func_161(int iParam0)
{
	Global_1951141->f_593[iParam0] = &Global_1951141->f_593[iParam0] + 1;
}

void func_162()
{
	int iVar0;

	Global_1951141->f_1538 = Global_1951141->f_1657;
	Global_1951141->f_1534 = Global_1951141->f_1536;
	Global_1951141->f_1534.f_1 = Global_1951141->f_1536.f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1951141->f_1538.f_1[iVar0 /*3*/]) = { *(Global_1951141->f_1657.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

int func_163(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1951141->f_81[iVar0 /*12*/])->f_9 == iParam0)
		{
			return func_171(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_164(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case -1889597427:
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case -1292426046:
			return 8;
		case -1197751823:
			return 20;
		case -1176744536:
			return 24;
		case -1130865351:
			return 31;
		case -1130352927:
			return 1;
		case -893163968:
			return 17;
		case -735900586:
			return 28;
		case -676503695:
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case -207860920:
			return 26;
		case 99217379:
			return 27;
		case 304805134:
			return 21;
		case 383349088:
			return 7;
		case 389988485:
			return 2;
		case 673166414:
			return 25;
		case 735520874:
			return 5;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case 1367443060:
			return 4;
		case 1422688607:
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case 1780904876:
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
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

void func_165(int iParam0)
{
	func_172(iParam0, 8, 6);
}

void func_166(int iParam0)
{
	func_222(&(Global_1951141->f_2760), iParam0);
}

void func_167(int iParam0, int iParam1)
{
	func_223(&(Global_1951141->f_2760), iParam0, iParam1);
}

void func_168(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_169(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar2 = 0;
	iVar3 = iParam1;
	iVar4 = func_144(iVar3);
	iVar5 = 0;
	if (func_224() == 24043185)
	{
		iVar2 = 1;
	}
	if (bParam3)
	{
		iVar5 = 3;
	}
	switch (iVar4)
	{
		case 1297434125:
			if (iParam1 == &Global_1951141->f_81[iParam2 /*12*/])
			{
			}
			else
			{
				iVar0 = 16;
				if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
				{
					if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 0 || (uParam0->f_1[iVar0 /*3*/])->f_1 == joaat("base"))
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
					}
					else
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 1334603721;
					}
					func_167(iVar0, iVar5);
				}
				Jump @3216; //curOff = 253
				if (iParam1 == &Global_1951141->f_81[iParam2 /*12*/])
				{
				}
				else
				{
					iVar0 = 34;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
						func_167(iVar0, iVar5);
					}
					iVar0 = 36;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
						func_167(iVar0, iVar5);
					}
					iVar0 = 37;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_11(iVar3, -1278198125))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						func_167(iVar0, iVar5);
					}
					iVar0 = 18;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
					{
						iVar1 = &uParam0->f_1[iVar0 /*3*/];
						if (912453393 == func_144(iVar1) && (uParam0->f_1[iVar0 /*3*/])->f_1 != -2081918609)
						{
							(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
							func_167(iVar0, iVar5);
						}
					}
					Jump @3216; //curOff = 543
					if (iParam1 == &Global_1951141->f_81[iParam2 /*12*/])
					{
					}
					else
					{
						iVar0 = 36;
						func_167(iVar0, iVar5);
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_11(iVar3, -1473580422))
						{
							iVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (func_11(iVar1, 1469783911))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
							}
							else if (func_225(&(uParam0->f_1[iVar0 /*3*/]), iVar2, -2081918609) != -1)
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
							}
							else
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
							}
						}
						iVar0 = 18;
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_11(iVar3, 1583165364))
						{
							iVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (func_144(iVar1) == 912453393)
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
								func_167(iVar0, iVar5);
							}
						}
						iVar0 = 35;
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_11(iVar3, -1650340550))
						{
							iVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (func_144(iVar1) == 1769055947)
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_167(iVar0, iVar5);
							}
						}
						Jump @3216; //curOff = 918
						if (iParam1 == &Global_1951141->f_81[iParam2 /*12*/])
						{
						}
						else
						{
							iVar0 = 36;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_11(iVar3, 1718965018))
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
							}
							func_167(iVar0, iVar5);
							iVar0 = 35;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_167(iVar0, iVar5);
							}
							iVar0 = 20;
							iVar1 = &uParam0->f_1[iVar0 /*3*/];
							if ((&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_11(iVar1, 1090938458)) && func_11(iVar3, 475297062))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_167(iVar0, iVar5);
							}
							Jump @3216; //curOff = 1171
							func_167(36, iVar5);
							iVar0 = 18;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_167(iVar0, iVar5);
							}
							iVar0 = 17;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_167(iVar0, iVar5);
							}
							iVar0 = 35;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && 1769055947 == func_144(&(uParam0->f_1[iVar0 /*3*/])))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_167(iVar0, iVar5);
							}
							iVar0 = 29;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_167(iVar0, iVar5);
							}
							Jump @3216; //curOff = 1454
							func_167(16, iVar5);
							if (func_226(iVar3, 0))
							{
							}
							else
							{
								iVar0 = 29;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_11(iVar3, 1126863852))
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									func_167(iVar0, iVar5);
								}
								iVar0 = 16;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_11(iVar3, -985549034))
								{
									if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
									{
										(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
									}
									else if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721)
									{
										(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
									}
								}
								iVar0 = 12;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_11(iVar3, -1527414429))
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									func_167(iVar0, iVar5);
								}
								Jump @3216; //curOff = 1747
								if (func_226(iVar3, 0))
								{
								}
								else
								{
									iVar0 = 12;
									if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_11(iVar3, -1527414429))
									{
										uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
										(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
										func_167(iVar0, iVar5);
									}
									iVar0 = 16;
									if (((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430 || (uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721) && func_11(iVar3, -985549034))
									{
										if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
										{
											(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
											func_167(iVar0, iVar5);
										}
										else if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721)
										{
											(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
											func_167(iVar0, iVar5);
										}
									}
									Jump @3216; //curOff = 1988
									if (func_226(iVar3, 0))
									{
									}
									else
									{
										iVar0 = 17;
										if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
										{
											uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
											(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
											func_167(iVar0, iVar5);
										}
										if ((uParam0->f_1[iParam2 /*3*/])->f_1 != -2081918609)
										{
											iVar0 = 34;
											iVar1 = &uParam0->f_1[iVar0 /*3*/];
											if (func_11(iVar1, 1583165364))
											{
												(uParam0->f_1[iParam2 /*3*/])->f_1 = -2081918609;
												func_167(iParam2, iVar5);
											}
											else
											{
												iVar0 = 35;
												iVar1 = &uParam0->f_1[iVar0 /*3*/];
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && 1769055947 == func_144(iVar1))
												{
													(uParam0->f_1[iParam2 /*3*/])->f_1 = -2081918609;
													func_167(iParam2, iVar5);
												}
											}
										}
										Jump @3216; //curOff = 2214
										if (func_226(iVar3, 0))
										{
										}
										else
										{
											iVar0 = 12;
											if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_167(iVar0, iVar5);
											}
											iVar0 = 13;
											if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_167(iVar0, iVar5);
											}
											iVar0 = 25;
											if (&Global_1951141->f_1657.f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_11(iVar3, 675650051))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_167(iVar0, iVar5);
											}
											Jump @3216; //curOff = 2438
											if (iParam1 == &Global_1951141->f_81[iParam2 /*12*/])
											{
												iVar0 = 37;
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_167(iVar0, iVar5);
												}
												iVar0 = 38;
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_167(iVar0, iVar5);
												}
												iVar0 = 35;
												if (-923693316 == func_144(&(uParam0->f_1[iVar0 /*3*/])))
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_167(iVar0, iVar5);
												}
											}
											else
											{
												iVar0 = 35;
												iVar1 = &uParam0->f_1[iVar0 /*3*/];
												if ((func_11(iVar3, 813132419) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/]) && func_144(iVar1) == -923693316)
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_167(iVar0, iVar5);
												}
												if ((func_11(iVar3, -1650340550) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/]) && func_144(iVar1) == 1769055947)
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_167(iVar0, iVar5);
												}
												iVar0 = 37;
												if (func_11(iVar3, -1278198125) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_167(iVar0, iVar5);
												}
											}
											Jump @3216; //curOff = 2921
											iVar0 = 37;
											if (func_11(iVar3, -1278198125) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_167(iVar0, iVar5);
											}
											Jump @3216; //curOff = 3003
											iVar0 = 10;
											if (-525676072 == func_144(&(uParam0->f_1[iVar0 /*3*/])))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_167(iVar0, iVar5);
											}
											Jump @3216; //curOff = 3067
											iVar0 = 12;
											if (81053684 == func_144(&(uParam0->f_1[iVar0 /*3*/])))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_167(iVar0, iVar5);
											}
											Jump @3216; //curOff = 3131
											if (!func_11(iVar3, -1348134986))
											{
											}
											else
											{
												iVar0 = 10;
												if (-525676072 == func_144(&(uParam0->f_1[iVar0 /*3*/])))
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_167(iVar0, iVar5);
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			switch (func_171(iParam2, 1))
			{
				case -207860920:
					if (func_227(99217379) && func_11(iVar3, -1230785684))
					{
						iVar0 = 27;
						uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						func_167(iVar0, iVar5);
					}
					break;
				case 1742327865:
					iVar0 = 16;
					if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
						func_167(iVar0, iVar5);
					}
					else if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721)
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
						func_167(iVar0, iVar5);
					}
					break;
				case 1250092473:
					iVar0 = 12;
					if (2056714954 == PED::_GET_PED_COMPONENT(&(uParam0->f_1[iVar0 /*3*/]), iVar2, 1))
					{
						if ((iParam1 == &Global_1951141->f_81[iParam2 /*12*/] || func_11(iVar3, 1872585553)) || iVar4 == 1882579758)
						{
							uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
							(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
							func_167(iVar0, iVar5);
						}
					}
					iVar0 = 17;
					if (!func_226(&(uParam0->f_1[iVar0 /*3*/]), 0) && func_11(iVar3, 1467402774))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						func_167(iVar0, iVar5);
					}
					iVar0 = 29;
					if (!func_226(&(uParam0->f_1[iVar0 /*3*/]), 0) && func_11(iVar3, 1126863852))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						func_167(iVar0, iVar5);
					}
					break;
				case -1130352927:
					if (iParam1 == -230310728 || iParam1 == 1326838792)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = 289238755;
					}
					else if ((uParam0->f_1[iParam2 /*3*/])->f_1 == 289238755)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = joaat("base");
					}
					break;
				case 1367443060:
					if (iParam1 == 1733464892)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = 289238755;
					}
					else if ((uParam0->f_1[iParam2 /*3*/])->f_1 == 289238755)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = joaat("base");
					}
					break;
			}
		}

int func_170(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	if (func_224() == 24043185)
	{
		iVar0 = 1;
	}
	if (iParam2 == 289238755)
	{
		return 289238755;
	}
	if (iParam2 != 0 && func_225(iParam0, iVar0, iParam2) != -1)
	{
		return iParam2;
	}
	if (func_228(iParam0, func_171(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

int func_171(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		case 1:
			return -1130352927;
		case 2:
			return 389988485;
		case 3:
			return 1780904876;
		case 4:
			return 1367443060;
		case 5:
			return 735520874;
		case 6:
			return -676503695;
		case 7:
			return 383349088;
		case 8:
			return -1292426046;
		case 9:
			return 1422688607;
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return -1176744536;
		case 25:
			return 673166414;
		case 26:
			return -207860920;
		case 27:
			return 99217379;
		case 28:
			return -735900586;
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
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

void func_172(int iParam0, int iParam1, int iParam2)
{
	(Global_1951141->f_81[func_164(iParam0, 1) /*12*/])->f_11 = ((Global_1951141->f_81[func_164(iParam0, 1) /*12*/])->f_11 - ((Global_1951141->f_81[func_164(iParam0, 1) /*12*/])->f_11 && iParam1));
}

bool func_173(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

int func_174(int iParam0)
{
	if (iParam0 == 1733464892)
	{
		return -236468550;
	}
	return -28107610;
}

int func_175(int iParam0)
{
	if (iParam0 == -230310728 || iParam0 == 1326838792)
	{
		return -1551826771;
	}
	switch (iParam0)
	{
		case -157559400:
			return -25348444;
		case 465258498:
			return -25348444;
		case -533110106:
			return -25348444;
		case -393465732:
			return -25348444;
		case 74351192:
			return -25348444;
		case 116074515:
			return -25348444;
		case 1618144916:
			return -25348444;
		case 1785263689:
			return -25348444;
		case -906745111:
			return -25348444;
		case 373001057:
			return -25348444;
		case -1414997496:
			return -25348444;
		case -1466370865:
			return -25348444;
		case -428747163:
			return -25348444;
		case 539445454:
			return -25348444;
		case 1893781991:
			return -25348444;
		case -156560189:
			return -25348444;
		case -1337137168:
			return -25348444;
		case 1529984470:
			return 129780002;
		case 163973342:
			return 129780002;
		case 1242718228:
			return 129780002;
		case 471104751:
			return 129780002;
		case 2093241299:
			return 129780002;
		case 1900264118:
			return 129780002;
		case 1226668975:
			return 129780002;
		case -1054967705:
			return 129780002;
		case 664756881:
			return 129780002;
		case -1196414963:
			return 129780002;
		case -549784028:
			return 129780002;
		case -1114404061:
			return 129780002;
		case 1998608299:
			return 129780002;
		case -1905369120:
			return 129780002;
		case -2125350662:
			return 129780002;
		case 1734235879:
			return 129780002;
		case 675995216:
			return 129780002;
		case -1713496139: /* GXTEntry: "No Hair" */
			return 1687431937;
		default:
			break;
	}
	return 1661173679;
	return 1687431937;
}

int func_176(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (((*uParam0)[iVar0 /*18*/])->f_1 == -1 || ((*uParam0)[iVar0 /*18*/])->f_17 == 0)
		{
		}
		else
		{
			if (((*uParam0)[iVar0 /*18*/])->f_17 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_177(int iParam0)
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

int func_178(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_176(uParam1, iParam2);
	if (iVar0 == -1)
	{
		return 0;
	}
	PED::_0x96C349DE04C49011(*uParam0, ((*uParam1)[iVar0 /*18*/])->f_2);
	func_179(uParam0, uParam1, iVar0);
	return 1;
}

void func_179(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	uParam0->f_6 = (uParam0->f_6 - 1);
	iVar0 = iParam2;
	while (iVar0 <= uParam0->f_6)
	{
		if (iVar0 + 1 >= 22)
		{
		}
		else
		{
			*((*uParam1)[iVar0 /*18*/]) = { *((*uParam1)[iVar0 + 1 /*18*/]) };
			((*uParam1)[iVar0 /*18*/])->f_2 = (((*uParam1)[iVar0 /*18*/])->f_2 - 1);
			iVar0++;
		}
	}
}

int func_180(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	struct<5> Var0;

	Var0 = 660625468;
	Var0.f_1 = -756385367;
	Var0.f_2 = joaat("id");
	Var0.f_3 = 1;
	Var0.f_4 = iParam1;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	if (!func_229(&Var0, uParam0, 0, bParam2, bParam3, iParam4))
	{
		return 0;
	}
	*uParam0 = iParam1;
	return 1;
}

void func_181(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if ((!func_173(uParam0, 1) || func_173(uParam0, 2)) || uParam0->f_6 < 0)
	{
		return;
	}
	if (uParam2->f_17 == -1177453988)
	{
		if (uParam2->f_3 == 0)
		{
			uParam2->f_3 = uParam0->f_2;
		}
		if (uParam2->f_4 == 0)
		{
			uParam2->f_4 = uParam0->f_3;
		}
		if (uParam2->f_5 == 0)
		{
			uParam2->f_5 = uParam0->f_4;
		}
		func_230(uParam0, uParam2->f_3, uParam2->f_4, uParam2->f_5);
	}
	else
	{
		iVar0 = func_176(uParam1, uParam2->f_17);
		if (iVar0 <= -1)
		{
			if (uParam0->f_6 >= 22)
			{
				return;
			}
			*((*uParam1)[uParam0->f_6 /*18*/]) = { *uParam2 };
			uParam0->f_6++;
			func_231(uParam0, uParam1, (uParam0->f_6 - 1));
		}
		else
		{
			uParam2->f_2 = ((*uParam1)[iVar0 /*18*/])->f_2;
			*((*uParam1)[iVar0 /*18*/]) = { *uParam2 };
			func_232(uParam0, (*uParam1)[iVar0 /*18*/], 1);
		}
	}
}

int func_182(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<18> Var0;
	int iVar18;
	struct<18> Var19;

	Var0.f_2 = -1;
	Var0.f_13 = 1065353216;
	Var0.f_14 = 1065353216;
	if (!func_180(&Var0, iParam2, bParam3, bParam4, 6))
	{
		return 0;
	}
	if (uParam0->f_6 >= 22)
	{
		return 0;
	}
	*((*uParam1)[uParam0->f_6 /*18*/]) = { Var0 };
	uParam0->f_6++;
	Var19.f_2 = -1;
	Var19.f_13 = 1065353216;
	Var19.f_14 = 1065353216;
	iVar18 = (uParam0->f_6 - 1);
	while (iVar18 >= 1)
	{
		if (((*uParam1)[iVar18 /*18*/])->f_1 < ((*uParam1)[(iVar18 - 1) /*18*/])->f_1)
		{
			Var19 = { *((*uParam1)[iVar18 /*18*/]) };
			*((*uParam1)[iVar18 /*18*/]) = { *((*uParam1)[(iVar18 - 1) /*18*/]) };
			*((*uParam1)[(iVar18 - 1) /*18*/]) = { Var19 };
		}
	else
	{
		}
		else
		{
			iVar18 = (iVar18 + -1);
		}
	}
	return 1;
}

bool func_183(int iParam0)
{
	return func_233(&(Global_1954472->f_1465), iParam0, 1);
}

int func_184(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

float func_185(int iParam0)
{
	return (PLAYER::_0x592F58BC4D2A2CF3(iParam0, 0) - IntToFloat(func_234(2)));
}

int func_186(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

char* func_187(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		case 1:
			return "StaminaCoreValue";
		case 2:
			return "DeadEyeCoreValue";
		default:
			break;
	}
	return "";
}

char* func_188(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
		case 1:
			return "isLowStaminaCoreActive";
		case 2:
			return "isLowDeadEyeCoreActive";
		default:
			break;
	}
	return "";
}

void func_189(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_95(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1954472->f_1331.f_6[iParam0 /*3*/] = fParam1;
			break;
		case 1:
			Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/] = fParam1;
			break;
		default:
			break;
	}
}

void func_190(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_95(2);
	}
	switch (iParam2)
	{
		case 0:
			(Global_1954472->f_1331.f_16[iParam0 /*3*/])->f_2 = uParam1;
			break;
		case 1:
			(Global_1954472->f_1465.f_2.f_16[iParam0 /*3*/])->f_2 = uParam1;
			break;
		default:
			break;
	}
}

int func_191(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		case 13:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_192(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(&(Global_17172.f_2563[iParam0]), iParam1);
}

int func_193(int iParam0)
{
	if (func_195(iParam0, 4))
	{
		return 0;
	}
	return 1;
}

int func_194(int iParam0)
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

bool func_195(int iParam0, int iParam1)
{
	return ((Global_1904613->f_31[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_196(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_197()
{
	if (!func_235())
	{
		return 0;
	}
	return Global_1904613->f_8196;
}

int func_198(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_205(iParam0);
	iVar1 = &Global_1275573;
	iVar2 = func_131(iParam1, 1);
	switch (&Global_1140484->f_30603.f_2900[iVar2 /*31*/])
	{
		case 979390476:
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case -2139108927:
		case -2129621195:
		case -1503245593:
		case 190804938:
			return 1;
		default:
			if (iVar1 == iVar0)
			{
				return 1;
			}
			break;
	}
	return 2;
}

int func_199(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;

	if (!func_121(iParam1))
	{
		return 0;
	}
	if (!func_206(iParam0))
	{
		return 0;
	}
	iVar0 = func_131(iParam0, 1);
	if (!func_236(iParam2))
	{
		return 0;
	}
	bVar1 = func_208(*(Global_1140484->f_30603.f_2900[iVar0 /*31*/]));
	if (bVar1 && func_237((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4))
	{
		vVar2 = { func_238((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4) };
		if (!func_207(vVar2.x, vVar2.y, vVar2.z))
		{
			return 0;
		}
	}
	if (func_212(iParam0, iParam1, iParam2))
	{
		if (bVar1)
		{
			func_213((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4, iParam0, iParam1, iParam2);
		}
		return 1;
	}
	return 0;
}

int func_200(int iParam0)
{
	int iVar0;

	iVar0 = func_63(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return 1;
	}
	return 0;
}

int func_201(int iParam0)
{
	int iVar0;

	iVar0 = func_63(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return 1;
	}
	return 0;
}

int func_202(int iParam0)
{
	int iVar0;

	iVar0 = func_63(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return 1;
	}
	return 0;
}

int func_203(int iParam0)
{
	int iVar0;

	iVar0 = func_63(iParam0, 1);
	if (iVar0 >= 162 && iVar0 <= 169)
	{
		return 1;
	}
	return 0;
}

int func_204(int iParam0)
{
	int iVar0;

	iVar0 = func_63(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 160)
	{
		return 1;
	}
	return 0;
}

int func_205(int iParam0)
{
	if (func_200(iParam0))
	{
		return (func_124(iParam0) % 32);
	}
	return &Global_1275573;
}

int func_206(int iParam0)
{
	int iVar0;

	iVar0 = func_131(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 186)
	{
		return 0;
	}
	return 1;
}

int func_207(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar0 = func_63(iParam1, 1);
	iVar1 = func_131(iParam0, 1);
	iVar2 = func_127(&(Global_1140484->f_30603.f_847[iVar0 /*12*/]), 1);
	if (Global_1140484->f_30603[iVar2 /*6*/][iParam2] != iParam0)
	{
		return 0;
	}
	if (!&(Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/])
	{
		return 1;
	}
	(Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/] = 0;
	iVar4 = 0;
	while (iVar4 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_16)
	{
		iVar3 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/];
		iVar5 = func_239(iVar3, 1);
		if (!func_240(iVar3))
		{
		}
		else
		{
			(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] = (&(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] - 1);
			(Global_1140484->f_2001[iVar5 /*192*/])->f_188 = ((Global_1140484->f_2001[iVar5 /*192*/])->f_188 - func_241((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/]));
			func_242(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_28)
	{
		iVar6 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/];
		if (!func_243(iVar6))
		{
		}
		else
		{
			iVar8 = func_244(iVar6, 1);
			(*Global_1140484->f_18706[iVar8 /*195*/])[iVar1] = (Global_1140484->f_18706[iVar8 /*195*/][iVar1] - 1);
			if (Global_1140484->f_18706[iVar8 /*195*/][iVar1] <= 0)
			{
				MISC::_0xB909149F2BB5F6DA(&((Global_1140484->f_18706[iVar8 /*195*/])->f_187), iVar1);
			}
			if (!MISC::_0x80E9C316EF84DD81(&((Global_1140484->f_18706[iVar8 /*195*/])->f_187)))
			{
				(Global_1140484->f_18706[iVar8 /*195*/])->f_194 = 0;
				func_245(iVar6);
			}
		}
		iVar7++;
	}
	return 1;
}

bool func_208(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_209(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_206(iParam0))
	{
		return false;
	}
	if (!func_246(iParam1))
	{
		return false;
	}
	iVar0 = func_247(iParam1, 1);
	return &Global_1140484->f_30603.f_8667[iVar0 /*3*/] == iParam0;
}

Vector3 func_210(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_248(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return *(Global_1140484->f_30603.f_8871[iVar0 /*3*/]);
}

int func_211(vector3 vParam0)
{
	if (!func_206(vParam0.x))
	{
		return 0;
	}
	if (!func_121(vParam0.y))
	{
		return 0;
	}
	if (!func_236(vParam0.z))
	{
		return 0;
	}
	return 1;
}

int func_212(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar0 = func_63(iParam1, 1);
	iVar1 = func_131(iParam0, 1);
	iVar2 = func_127(&(Global_1140484->f_30603.f_847[iVar0 /*12*/]), 1);
	if (Global_1140484->f_30603[iVar2 /*6*/][iParam2] != iParam0)
	{
		return 0;
	}
	((Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/])->f_1 = Global_1275573->f_21;
	if (&(Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/])
	{
		return 1;
	}
	(Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/] = 1;
	iVar4 = 0;
	while (iVar4 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_16)
	{
		iVar3 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/];
		iVar5 = func_239(iVar3, 1);
		if (!func_240(iVar3))
		{
		}
		else
		{
			(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] = &(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] + 1;
			(Global_1140484->f_2001[iVar5 /*192*/])->f_188 = ((Global_1140484->f_2001[iVar5 /*192*/])->f_188 + func_241((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/]));
			func_249(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_28)
	{
		iVar6 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/];
		if (!func_243(iVar6))
		{
		}
		else if (!func_250((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/]))
		{
		}
		else
		{
			iVar8 = func_244(iVar6, 1);
			(*Global_1140484->f_18706[iVar8 /*195*/])[iVar1] = Global_1140484->f_18706[iVar8 /*195*/][iVar1] + 1;
			MISC::_0xE84AAC1B22A73E99(&((Global_1140484->f_18706[iVar8 /*195*/])->f_187), iVar1);
			if (!(Global_1140484->f_18706[iVar8 /*195*/])->f_194)
			{
				(Global_1140484->f_18706[iVar8 /*195*/])->f_194 = 1;
				func_251(iVar6);
			}
		}
		iVar7++;
	}
	func_252((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_2);
	return 1;
}

void func_213(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_246(iParam0))
	{
		return;
	}
	iVar0 = func_247(iParam0, 1);
	if (!func_206(iParam1))
	{
		return;
	}
	if (!func_121(iParam2))
	{
		return;
	}
	if (!func_236(iParam3))
	{
		return;
	}
	Global_1140484->f_30603.f_8667[iVar0 /*3*/] = iParam1;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_1 = iParam2;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_2 = iParam3;
}

void func_214(int iParam0)
{
	int iVar0;

	if (!func_246(iParam0))
	{
		return;
	}
	iVar0 = func_247(iParam0, 1);
	Global_1140484->f_30603.f_8667[iVar0 /*3*/] = -1;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_1 = 0;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_2 = -1;
}

bool func_215(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_216()
{
	return (func_253(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, 0, 0) > 0 && func_254(func_70(889965687 /* GXTEntry: "Wardrobe" */, func_137(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_217(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_3(iParam0, 0))
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
		Var1 = { func_70(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_71(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_71(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_218(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_71(0);
	*uParam1 = { func_70(iParam0, func_139(0), iParam3, 0) };
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

int func_219(int iParam0, int iParam1, int iParam2)
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

int func_220(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_71(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

void func_221(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_255(iParam0, iParam1, iParam2, iParam3);
}

void func_222(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;

	Var2 = 39;
	Var4 = 10;
	Var4.f_1 = 39;
	Var4.f_1.f_2 = 39;
	Var4.f_1.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_256(uParam0->f_2[iVar0 /*2*/], 2) || &uParam0->f_2[iVar0 /*2*/] == iParam1) || &uParam0->f_2[iVar0 /*2*/] == 39)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			else
			{
				if (func_256(uParam0->f_2[iVar0 /*2*/], 1))
				{
					func_257(uParam0->f_2[iVar0 /*2*/], 2, 6);
				}
				*(Var4[iVar1 /*2*/]) = { *(uParam0->f_2[iVar0 /*2*/]) };
				iVar1++;
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { *(Var4[iVar0 /*2*/]) };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}

void func_223(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_258(uParam0, 1))
	{
		func_259(uParam0, 1);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_2[iVar0 /*2*/] == iParam1)
		{
			(uParam0->f_2[iVar0 /*2*/])->f_1 = iParam2;
			return;
		}
		if ((Global_1951141->f_81[&uParam0->f_2[iVar0 /*2*/] /*12*/])->f_2 > (Global_1951141->f_81[iParam1 /*12*/])->f_2)
		{
			iVar1 = *uParam0;
			while (iVar1 >= iVar0 + 1)
			{
				*(uParam0->f_2[iVar1 /*2*/]) = { *(uParam0->f_2[(iVar1 - 1) /*2*/]) };
				iVar1 = (iVar1 + -1);
			}
			uParam0->f_2[iVar0 /*2*/] = iParam1;
			(uParam0->f_2[iVar0 /*2*/])->f_1 = iParam2;
			*uParam0++;
			return;
		}
		iVar0++;
	}
	(uParam0->f_2[*uParam0 /*2*/])->f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

int func_224()
{
	return Global_1951141->f_1;
}

int func_225(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(iParam0, iParam1, 1))
	{
		if (PED::_0x6243635AF2F1B826(iParam0, iVar0, iParam1, 1) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_226(int iParam0, bool bParam1)
{
	if (!func_3(iParam0, 0))
	{
	}
	if (!bParam1 && (iParam0 == -1713496139 || iParam0 == -598283164))
	{
		return 0;
	}
	if (func_11(iParam0, 265372629))
	{
		return 1;
	}
	return 0;
}

bool func_227(int iParam0)
{
	return &Global_1951141->f_1657.f_1[func_164(iParam0, 1) /*3*/] != &Global_1951141->f_81[func_164(iParam0, 1) /*12*/];
}

int func_228(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("base");
	return 1;
}

int func_229(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;

	if (DATAFILE::_0x44B3A36933AC009C(&uVar2, uParam0, -480981886))
	{
		uParam1->f_17 = uVar2;
	}
	else if (!bParam2)
	{
		return 0;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, uParam0, -925732223))
	{
		uParam1->f_3 = iVar0;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, uParam0, joaat("normal")))
	{
		uParam1->f_4 = iVar0;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, uParam0, joaat("material")))
	{
		uParam1->f_5 = iVar0;
	}
	if (DATAFILE::_0xB2B42607F7867576(&uVar4, uParam0, 2018964076))
	{
		uParam1->f_13 = uVar4;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, uParam0, 723829617))
	{
		uParam1->f_16 = func_260(iVar0);
	}
	if (DATAFILE::_0xB2B42607F7867576(&uVar4, uParam0, 1802626656))
	{
		uParam1->f_15 = uVar4;
	}
	if (DATAFILE::_0x52FC26D2D2FC2987(&uVar3, uParam0, 939944711))
	{
		uParam1->f_6 = uVar3;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, uParam0, 917806888))
	{
		uParam1->f_7 = iVar0;
		if (DATAFILE::_0x52FC26D2D2FC2987(&uVar3, uParam0, 1922465595))
		{
			uParam1->f_8 = uVar3;
		}
		if (DATAFILE::_0xB2B42607F7867576(&uVar4, uParam0, -1979206779))
		{
			uParam1->f_14 = uVar4;
		}
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, uParam0, 333547134))
	{
		uParam1->f_9 = iVar0;
		if (DATAFILE::_0x52FC26D2D2FC2987(&uVar3, uParam0, 1223307134))
		{
			uParam1->f_10 = uVar3;
		}
		if (DATAFILE::_0x52FC26D2D2FC2987(&uVar3, uParam0, 915180227))
		{
			uParam1->f_11 = uVar3;
		}
		if (DATAFILE::_0x52FC26D2D2FC2987(&uVar3, uParam0, -1231156504))
		{
			uParam1->f_12 = uVar3;
		}
	}
	uParam0->f_1 = 1777366913;
	uParam0->f_2 = joaat("id");
	uParam0->f_3 = 1;
	uParam0->f_4 = uVar2;
	DATAFILE::_0x91DED5DD64BB2691(uParam0);
	if (DATAFILE::_0x52FC26D2D2FC2987(&uVar1, uParam0, -1118674339))
	{
		uParam1->f_1 = uVar1;
	}
	if (bParam3)
	{
		func_261(uParam1, bParam4);
	}
	return 1;
}

void func_230(var uParam0, var uParam1, var uParam2, var uParam3)
{
	uParam0->f_2 = uParam1;
	uParam0->f_3 = uParam2;
	uParam0->f_4 = uParam3;
	PED::_0x253A63B5BADBC398(*uParam0, 0, uParam0->f_2, uParam0->f_3, uParam0->f_4);
}

void func_231(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 > 0 && ((*uParam1)[(iParam2 - 1) /*18*/])->f_1 > ((*uParam1)[iParam2 /*18*/])->f_1)
	{
		func_262(uParam0, uParam1);
	}
	else
	{
		func_263(uParam0, (*uParam1)[iParam2 /*18*/]);
	}
}

void func_232(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		PED::_0x253A63B5BADBC398(*uParam0, uParam1->f_2, uParam1->f_3, uParam1->f_4, uParam1->f_5);
	}
	if (uParam1->f_9 != 0)
	{
		PED::_0x1ED8588524AC9BE1(*uParam0, uParam1->f_2, uParam1->f_9);
		PED::_0x2DF59FFE6FFD6044(*uParam0, uParam1->f_2, uParam1->f_10, uParam1->f_11, uParam1->f_12);
	}
	if (uParam1->f_7 != 0)
	{
		PED::_0xF2EA041F1146D75B(*uParam0, uParam1->f_2, uParam1->f_7, uParam1->f_14, uParam1->f_8);
	}
	if (uParam1->f_15 > 0f)
	{
		PED::_0x057C4F092E2298BE(*uParam0, uParam1->f_2, uParam1->f_15);
	}
	PED::_0x3329AAE2882FC8E4(*uParam0, uParam1->f_2, uParam1->f_6);
	PED::_0x6C76BC24F8BB709A(*uParam0, uParam1->f_2, uParam1->f_13);
}

bool func_233(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_234(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_39(2) * 2;
		case 1:
			return func_43(2) * 2;
		case 2:
			return func_41(2) * 2;
		default:
			break;
	}
	return -1;
}

int func_235()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

int func_236(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return 0;
	}
	return 1;
}

int func_237(int iParam0)
{
	int iVar0;

	if (!func_246(iParam0))
	{
		return 0;
	}
	iVar0 = func_264(iParam0);
	if (!func_206(iVar0))
	{
		return 0;
	}
	return 1;
}

Vector3 func_238(int iParam0)
{
	vector3 vVar0;
	int iVar3;

	if (!func_246(iParam0))
	{
		vVar0 = -1;
		vVar0.f_2 = -1;
		return vVar0;
	}
	iVar3 = func_247(iParam0, 1);
	return *(Global_1140484->f_30603.f_8667[iVar3 /*3*/]);
}

int func_239(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1988557796:
			return 49;
		case -1936069272:
			return 47;
		case -1926692092:
			return 42;
		case -1846416021:
			return 58;
		case -1721745367:
			return 2;
		case -1701192079:
			return 41;
		case -1659620438:
			return 50;
		case -1607530002:
			return 61;
		case -1589052195:
			return 37;
		case -1575020444:
			return 86;
		case -1572802418:
			return 67;
		case -1514969696:
			return 74;
		case -1397050499:
			return 53;
		case -1349331938:
			return 43;
		case -1345921497:
			return 29;
		case -1309904053:
			return 22;
		case -1290490489:
			return 7;
		case -1202225775:
			return 56;
		case -1080116020:
			return 23;
		case -1079033682:
			return 46;
		case -1059185085:
			return 25;
		case -1003690472:
			return 51;
		case -851757466:
			return 64;
		case -744806636:
			return 52;
		case -516489227:
			return 11;
		case -514416345:
			return 63;
		case -484540420:
			return 36;
		case -483049716:
			return 71;
		case -400566333:
			return 14;
		case -391623459:
			return 69;
		case -374018223:
			return 59;
		case -349428415:
			return 39;
		case -231535884:
			return 15;
		case -201802680:
			return 1;
		case -85606741:
			return 62;
		case -77989269:
			return 76;
		case -1:
			return 0;
		case 66478954:
			return 85;
		case 146438590:
			return 83;
		case 198507096:
			return 68;
		case 222365748:
			return 78;
		case 295732030:
			return 40;
		case 340029732:
			return 66;
		case 374652900:
			return 82;
		case 410940916:
			return 84;
		case 515706097:
			return 5;
		case 527883710:
			return 44;
		case 549685826:
			return 60;
		case 641300611:
			return 81;
		case 696211072:
			return 30;
		case 778435476:
			return 19;
		case 808428606:
			return 4;
		case 854463919:
			return 79;
		case 857703729:
			return 48;
		case 874892169:
			return 87;
		case 886907851:
			return 16;
		case 995847993:
			return 65;
		case 1061744811:
			return 6;
		case 1149992366:
			return 27;
		case 1221256507:
			return 8;
		case 1247001946:
			return 72;
		case 1275912274:
			return 45;
		case 1333289277:
			return 20;
		case 1341193408:
			return 10;
		case 1447875596:
			return 75;
		case 1495919075:
			return 70;
		case 1509485650:
			return 17;
		case 1546732394:
			return 34;
		case 1572090083:
			return 55;
		case 1608132015:
			return 38;
		case 1664203120:
			return 32;
		case 1679987408:
			return 54;
		case 1728485678:
			return 28;
		case 1742416595:
			return 3;
		case 1766148221:
			return 73;
		case 1768495249:
			return 21;
		case 1900095956:
			return 18;
		case 1946296046:
			return 12;
		case 1968069853:
			return 24;
		case 1997267529:
			return 31;
		case 2000631014:
			return 77;
		case 2019620375:
			return 57;
		case 2037894795:
			return 9;
		case 2048982041:
			return 33;
		case 2063781084:
			return 13;
		case 2082272090:
			return 35;
		case 2089824257:
			return 26;
		case 2128780735:
			return 80;
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

int func_240(int iParam0)
{
	int iVar0;

	iVar0 = func_239(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 87)
	{
		return 0;
	}
	return 1;
}

float func_241(var uParam0)
{
	var uVar0;

	if (uParam0->f_2 != 0)
	{
		uVar0 = func_265(794259616, uParam0->f_2, uParam0->f_1, "");
		return uVar0;
	}
	return uParam0->f_1;
}

void func_242(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_240(iParam0))
	{
		return;
	}
	iVar0 = func_239(iParam0, 1);
	if (!func_266(&(Global_1140484->f_2001[iVar0 /*192*/])))
	{
		return;
	}
	(*(*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])[iVar0] = ((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/][iVar0] - 1);
	if ((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/][iVar0] > 0)
	{
		return;
	}
	(*(*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])[iVar0] = 0;
	(Global_1140484->f_2001[iVar0 /*192*/])->f_191 = 0;
	if (!func_267((Global_1140484->f_2001[iVar0 /*192*/])->f_190))
	{
		return;
	}
	iVar1 = func_268((Global_1140484->f_2001[iVar0 /*192*/])->f_190, 1);
	((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] = (&((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] - 1);
	if (&((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] > 0)
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < (Global_1140484->f_41529[iVar1 /*25*/])->f_23)
	{
		if (Global_1140484->f_41529[iVar1 /*25*/][iVar2] != &Global_1140484->f_2001[iVar0 /*192*/])
		{
		}
		else
		{
			(*Global_1140484->f_41529[iVar1 /*25*/])[iVar2] = -1;
			(Global_1140484->f_41529[iVar1 /*25*/])->f_23 = ((Global_1140484->f_41529[iVar1 /*25*/])->f_23 - 1);
			(*Global_1140484->f_41529[iVar1 /*25*/])[iVar2] = Global_1140484->f_41529[iVar1 /*25*/][(Global_1140484->f_41529[iVar1 /*25*/])->f_23];
			(*Global_1140484->f_41529[iVar1 /*25*/])[(Global_1140484->f_41529[iVar1 /*25*/])->f_23] = -1;
		}
		else
		{
			iVar2++;
		}
	}
}

int func_243(int iParam0)
{
	int iVar0;

	iVar0 = func_244(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 61)
	{
		return 0;
	}
	return 1;
}

int func_244(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2116044775:
			return 49;
		case -2103256604:
			return 12;
		case -2073453362:
			return 11;
		case -2041025962:
			return 60;
		case -1930487908:
			return 2;
		case -1913155192:
			return 41;
		case -1771755729:
			return 28;
		case -1751121159:
			return 50;
		case -1730553768:
			return 3;
		case -1655894020:
			return 25;
		case -1604680733:
			return 10;
		case -1511575465:
			return 34;
		case -1328991329:
			return 5;
		case -1136429013:
			return 45;
		case -1115905480:
			return 31;
		case -1026481003:
			return 6;
		case -966751997:
			return 13;
		case -824728332:
			return 33;
		case -718742742:
			return 55;
		case -698163919:
			return 32;
		case -662966589:
			return 1;
		case -549693655:
			return 14;
		case -488644714:
			return 4;
		case -430422799:
			return 36;
		case -350459285:
			return 61;
		case -268774736:
			return 40;
		case -220644763:
			return 26;
		case -199042163:
			return 56;
		case -191252842:
			return 22;
		case -166765081:
			return 51;
		case -106166013:
			return 19;
		case -1:
			return 0;
		case 50982971:
			return 17;
		case 125946764:
			return 20;
		case 367160929:
			return 57;
		case 482459685:
			return 24;
		case 492808644:
			return 18;
		case 539654946:
			return 23;
		case 656937467:
			return 39;
		case 692490127:
			return 15;
		case 718630298:
			return 52;
		case 785261183:
			return 48;
		case 793826854:
			return 21;
		case 892655276:
			return 46;
		case 907911269:
			return 27;
		case 955977457:
			return 43;
		case 966561884:
			return 7;
		case 988751276:
			return 30;
		case 1159158432:
			return 58;
		case 1204983685:
			return 37;
		case 1242495215:
			return 9;
		case 1254069395:
			return 59;
		case 1341326366:
			return 54;
		case 1348456703:
			return 35;
		case 1442295985:
			return 38;
		case 1527078018:
			return 42;
		case 1565429580:
			return 53;
		case 1696309427:
			return 44;
		case 1870637439:
			return 16;
		case 2067881273:
			return 8;
		case 2093700568:
			return 47;
		case 2113555978:
			return 29;
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

void func_245(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case -488644714:
			func_269();
			break;
		case -2103256604:
			func_270();
			break;
		case 692490127:
			PED::_REMOVE_PED_WOUND_EFFECT(iVar0, 0f);
			break;
		case 50982971:
			PED::_0xA5950E16B8F31052(iVar0, 0, 0);
			GRAPHICS::_0xC5CB91D65852ED7E(func_271(iParam0));
			break;
		case 1870637439:
			GRAPHICS::_0xC5CB91D65852ED7E(func_271(iParam0));
			break;
		case 492808644:
			GRAPHICS::_0xC5CB91D65852ED7E(func_271(iParam0));
			break;
		case 125946764:
			ATTRIBUTE::_0x3FC4C027FD0936F4(5);
			func_53(105, 1);
			break;
		case -106166013:
			GRAPHICS::_0xC5CB91D65852ED7E(func_271(iParam0));
			break;
		case 1204983685:
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 1);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 18);
			break;
		case 1442295985:
			NETWORK::_0x442B4347B6EC36E8(iVar0, 0, true);
			break;
		case 656937467:
			ATTRIBUTE::_0x3FC4C027FD0936F4(15);
			break;
		case -430422799:
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
			break;
		case 539654946:
			PLAYER::_0x5F8E0303C229C84B(iVar1, "");
			break;
		case -1655894020:
		case 482459685:
		case 907911269:
			func_273(func_272(iParam0));
			break;
		case -1771755729:
		case -220644763:
			PLAYER::_0x768E81AE285A4B67(iVar1, 0);
			PLAYER::_0xE910932F4B30BE23(iVar1);
			PLAYER::_0x0E9057A9DA78D0F8(iVar1, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 0);
			break;
		case 2113555978:
			GRAPHICS::_0xAF4D239B8903FCBE();
			PLAYER::_0x768E81AE285A4B67(iVar1, 0);
			PLAYER::_0xE910932F4B30BE23(iVar1);
			PLAYER::_0x0E9057A9DA78D0F8(iVar1, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 0);
			break;
		case 785261183:
			PLAYER::_0xCE285A4413B00B7F(iVar1, 1);
			break;
		case 793826854:
			func_274();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_266(17);
			break;
		case -824728332:
			func_266(16);
			break;
	}
}

int func_246(int iParam0)
{
	int iVar0;

	iVar0 = func_247(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return 0;
	}
	return 1;
}

int func_247(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1290685708:
			return 1;
		case -1038992817:
			return 5;
		case -950874556:
			return 4;
		case -290151400:
			return 3;
		case 0:
			return 0;
		case 1938826026:
			return 2;
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

int func_248(int iParam0)
{
	int iVar0;
	struct<31> Var1;
	struct<31> Var32;
	int iVar63;
	int iVar64;
	int iVar65;

	iVar0 = func_264(iParam0);
	Var1.f_3 = 1065353216;
	Var1.f_5 = -1;
	Var1.f_6 = 3;
	Var1.f_6.f_1 = -1;
	Var1.f_6.f_1.f_3 = -1;
	Var1.f_6.f_1.f_3.f_3 = -1;
	Var1.f_17 = 5;
	Var32.f_3 = 1065353216;
	Var32.f_5 = -1;
	Var32.f_6 = 3;
	Var32.f_6.f_1 = -1;
	Var32.f_6.f_1.f_3 = -1;
	Var32.f_6.f_1.f_3.f_3 = -1;
	Var32.f_17 = 5;
	iVar63 = -1;
	iVar65 = 0;
	while (iVar65 < Global_1140484->f_30603.f_10924)
	{
		iVar64 = func_131(&(Global_1140484->f_30603.f_8871[iVar65 /*3*/]), 1);
		if ((Global_1140484->f_30603.f_2900[iVar64 /*31*/])->f_4 != iParam0)
		{
		}
		else if (&Global_1140484->f_30603.f_8871[iVar65 /*3*/] == iVar0)
		{
		}
		else if (!func_275(&(Global_1140484->f_30603.f_8871[iVar65 /*3*/]), (Global_1140484->f_30603.f_8871[iVar65 /*3*/])->f_1))
		{
		}
		else
		{
			Var1 = { func_276(&(Global_1140484->f_30603.f_8871[iVar65 /*3*/])) };
			if (Var1.f_5 > Var32.f_5)
			{
				Var32 = { Var1 };
				iVar63 = iVar65;
			}
		}
		iVar65++;
	}
	return iVar63;
}

void func_249(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_240(iParam0))
	{
		return;
	}
	iVar0 = func_239(iParam0, 1);
	if (!func_266(&(Global_1140484->f_2001[iVar0 /*192*/])))
	{
		return;
	}
	(*(*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])[iVar0] = (*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/][iVar0] + 1;
	(Global_1140484->f_2001[iVar0 /*192*/])->f_191 = 1;
	if (!func_267((Global_1140484->f_2001[iVar0 /*192*/])->f_190))
	{
		return;
	}
	iVar1 = func_268((Global_1140484->f_2001[iVar0 /*192*/])->f_190, 1);
	((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] = &((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] + 1;
	iVar2 = 0;
	while (iVar2 < (Global_1140484->f_41529[iVar1 /*25*/])->f_23)
	{
		if (Global_1140484->f_41529[iVar1 /*25*/][iVar2] == &Global_1140484->f_2001[iVar0 /*192*/])
		{
			return;
		}
		iVar2++;
	}
	(*Global_1140484->f_41529[iVar1 /*25*/])[(Global_1140484->f_41529[iVar1 /*25*/])->f_23] = &Global_1140484->f_2001[iVar0 /*192*/];
	(Global_1140484->f_41529[iVar1 /*25*/])->f_23++;
}

int func_250(var uParam0)
{
	var uVar0;

	if (uParam0->f_1 != 0)
	{
		uVar0 = func_277(794259616, uParam0->f_1, 1, "");
		return uVar0;
	}
	return 1;
}

void func_251(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case -488644714:
			func_269();
			break;
		case -2103256604:
			func_270();
			break;
		case 692490127:
			PED::_SET_PED_WOUND_EFFECT(iVar0, 2, 14411, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case 50982971:
			PED::_0xA5950E16B8F31052(iVar0, 1, 0);
			GRAPHICS::ANIMPOSTFX_PLAY(func_271(iParam0));
			break;
		case 1870637439:
			GRAPHICS::ANIMPOSTFX_PLAY(func_271(iParam0));
			break;
		case 492808644:
			GRAPHICS::ANIMPOSTFX_PLAY(func_271(iParam0));
			break;
		case 125946764:
			ATTRIBUTE::_0xFB6E111908502871(5);
			func_53(104, 1);
			break;
		case -106166013:
			GRAPHICS::ANIMPOSTFX_PLAY(func_271(iParam0));
			break;
		case 1204983685:
			break;
		case 656937467:
			ATTRIBUTE::_0xFB6E111908502871(15);
			break;
		case 539654946:
			PLAYER::_0x5F8E0303C229C84B(iVar1, "focusfire");
			break;
		case 482459685:
			iVar2 = func_272(iParam0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_278(iParam0, 0));
			func_279(iVar2, 0, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_278(iParam0, 1));
			func_279(iVar2, 1, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_278(iParam0, 2));
			func_279(iVar2, 2, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_278(iParam0, 3));
			func_279(iVar2, 2, 1, iVar3, 0);
			break;
		case -1655894020:
			iVar2 = func_272(iParam0);
			func_279(iVar2, 3, 1, -1, 1);
			break;
		case 907911269:
			iVar2 = func_272(iParam0);
			func_279(iVar2, 4, 1, -1, 0);
			break;
		case -220644763:
			PLAYER::_0x768E81AE285A4B67(iVar1, 1014693585);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			break;
		case -1771755729:
			PLAYER::_0x768E81AE285A4B67(iVar1, 1936842089);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			break;
		case 2113555978:
			GRAPHICS::_0x249CD6B7285536F2(0f, 2f, 2f);
			PLAYER::_0x768E81AE285A4B67(iVar1, 1979474018);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 25);
			PLAYER::_0x263D69767F76059C(iVar1, 2);
			break;
		case 785261183:
			PLAYER::_0xCE285A4413B00B7F(iVar1, 0);
			break;
		case 793826854:
			func_280();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_266(17);
			break;
		case -824728332:
			func_266(16);
			break;
	}
}

void func_252(int iParam0)
{
	char* sVar0;
	char* sVar1;

	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_281(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	sVar1 = func_282(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	AUDIO::_PLAY_SOUND_FROM_ENTITY(sVar0, Global_1275573->f_8, sVar1, 0, 0, 0);
}

int func_253(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_283(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_71(bParam1), iParam0, iParam3);
}

int func_254(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_284(&uParam0, iParam4, bParam5, iParam6);
}

void func_255(int iParam0, int iParam1, int iParam2, int iParam3)
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

bool func_256(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_257(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_258(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_259(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_260(int iParam0)
{
	switch (iParam0)
	{
		case 377740851:
			return 0;
		case -897347426:
			return 1;
		case -409773112:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_261(var uParam0, bool bParam1)
{
	int iVar0;
	struct<17> Var1;
	int iVar18;
	struct<4> Var19;

	Var1.f_9 = 1;
	Var1.f_11 = -1591664384;
	iVar0 = func_285(uParam0->f_17);
	if (iVar0 == 0)
	{
		return;
	}
	iVar18 = *uParam0;
	Var19 = { func_70(889965687 /* GXTEntry: "Wardrobe" */, func_137(1), 1034665895, 1) };
	if (bParam1 && iVar18 != func_254(Var19, iVar0, 1, -1))
	{
		return;
	}
	Var1 = { func_286(func_70(iVar18, Var19, iVar0, 1), 1, 0) };
	if (Var1.f_16 <= 0)
	{
		return;
	}
	uParam0->f_13 = func_287(Var1.f_16);
}

void func_262(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<18> Var2;

	iVar1 = (uParam0->f_6 - 1);
	Var2.f_2 = -1;
	Var2.f_13 = 1065353216;
	Var2.f_14 = 1065353216;
	iVar0 = (uParam0->f_6 - 1);
	while (iVar0 >= 1)
	{
		if (((*uParam1)[iVar0 /*18*/])->f_1 < ((*uParam1)[(iVar0 - 1) /*18*/])->f_1)
		{
			PED::_0x96C349DE04C49011(*uParam0, ((*uParam1)[(iVar0 - 1) /*18*/])->f_2);
			Var2 = { *((*uParam1)[iVar0 /*18*/]) };
			*((*uParam1)[iVar0 /*18*/]) = { *((*uParam1)[(iVar0 - 1) /*18*/]) };
			*((*uParam1)[(iVar0 - 1) /*18*/]) = { Var2 };
			iVar1 = (iVar0 - 1);
		}
	else
	{
		}
		else
		{
			iVar0 = (iVar0 + -1);
		}
	}
	iVar0 = iVar1;
	while (iVar0 <= (uParam0->f_6 - 1))
	{
		func_263(uParam0, (*uParam1)[iVar0 /*18*/]);
		iVar0++;
	}
}

void func_263(var uParam0, var uParam1)
{
	uParam1->f_2 = PED::_0x86BB5FF45F193A02(*uParam0, uParam1->f_3, uParam1->f_4, uParam1->f_5, uParam1->f_16, uParam1->f_13, uParam1->f_6);
	func_232(uParam0, uParam1, 0);
}

int func_264(int iParam0)
{
	int iVar0;

	if (!func_246(iParam0))
	{
		return -1;
	}
	iVar0 = func_247(iParam0, 1);
	return &(Global_1140484->f_30603.f_8667[iVar0 /*3*/]);
}

float func_265(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	struct<11> Var0;
	float fVar22;

	if (func_288(iParam0, iParam1, &Var0))
	{
		fVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

int func_266(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 21)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		return 1;
	}
	if (MISC::_0x8F4F050054005C27(&(Global_1140484->f_1998), iParam0))
	{
		return 1;
	}
	if (Global_1140484->f_1997 >= 21)
	{
		return 0;
	}
	Global_1140484->f_1975[Global_1140484->f_1997] = iParam0;
	Global_1140484->f_1997++;
	return 1;
}

int func_267(int iParam0)
{
	int iVar0;

	iVar0 = func_268(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return 0;
	}
	return 1;
}

int func_268(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1745889187:
			return 3;
		case -1016837116:
			return 5;
		case 0:
			return 0;
		case 370243254:
			return 4;
		case 1213888609:
			return 2;
		case 1416591065:
			return 1;
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

void func_269()
{
	bool bVar0;
	bool bVar1;

	if ((Global_1140484->f_18706[3 /*195*/])->f_194)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 550, bVar0);
	if ((Global_1140484->f_18706[4 /*195*/])->f_194)
	{
		bVar1 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 556, bVar1);
}

void func_270()
{
	bool bVar0;

	bVar0 = false;
	if ((Global_1140484->f_18706[12 /*195*/])->f_194)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 263, bVar0);
}

char* func_271(int iParam0)
{
	switch (iParam0)
	{
		case 1870637439:
			return "MP_ArrowDrain";
		case 492808644:
			return "MP_ArrowDisorient";
		case 50982971:
			return "MP_ArrowTracking";
		case -106166013:
			return "MP_MoonshineToxic";
		default:
			break;
	}
	return "";
}

int func_272(int iParam0)
{
	switch (iParam0)
	{
		case 482459685:
			return -843895567;
		case -1655894020:
			return -1655894020;
		case 907911269:
			return 907911269;
		default:
			break;
	}
	return 0;
}

void func_273(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (((*Global_1182208)[iVar0 /*8*/])->f_5 == iParam0)
		{
			((*Global_1182208)[iVar0 /*8*/])->f_7 = 1;
			((*Global_1182208)[iVar0 /*8*/])->f_5 = 0;
		}
		iVar0++;
	}
}

void func_274()
{
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 305, false);
	PED::_0x801917E7D7BCE418(Global_1275573->f_8);
}

int func_275(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<31> Var4;

	if (!func_206(iParam0))
	{
		return 0;
	}
	iVar0 = func_131(iParam0, 1);
	iVar2 = (Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4;
	if (func_208(*(Global_1140484->f_30603.f_2900[iVar0 /*31*/])))
	{
		iVar3 = &Global_1140484->f_30603.f_8667[func_247(iVar2, 1) /*3*/];
		Var4 = { func_276(iVar3) };
		if (iVar3 != iParam0 && (Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_5 <= Var4.f_5)
		{
			return 0;
		}
	}
	switch (&Global_1140484->f_30603.f_2900[iVar0 /*31*/])
	{
		case -1606735498:
		case -1455211650:
		case -1324410551:
		case -1276912520:
		case -1028878953:
		case -992973338:
		case -971275364:
		case -932644421:
		case -590004554:
		case -528257357:
		case -193993646:
		case -166662497:
		case -23641105:
		case 37083370:
		case 52193493:
		case 180258367:
		case 429965152:
		case 461381338:
		case 522523138:
		case 589907865:
		case 979390476:
		case 1028557598:
		case 1154303630:
		case 1254162401:
		case 1269394302:
		case 1305415806:
		case 1461424861:
		case 1691008805:
		case 1759133423:
		case 1810352391:
		case 1915097582:
		case 1921800945:
		case 2046842849:
		case 2116793692:
			return 1;
		case 1245579893:
			if (!func_289() && !func_290())
			{
				return 0;
			}
			return 1;
		case -2010146101:
			if (!func_289())
			{
				return 0;
			}
			return 1;
		case -2139108927:
			iVar1 = func_205(iParam1);
			if (iVar1 == &Global_1275573)
			{
				return 0;
			}
			return 1;
		case -2129621195:
			iVar1 = func_205(iParam1);
			if (iVar1 == &Global_1275573)
			{
				return 0;
			}
			if (!_NAMESPACE26::_0x424B17A7DC5C90BC(&(Global_1275573->f_154[&Global_1275573])))
			{
				return 0;
			}
			if (!_NAMESPACE26::_0x81FB74C83C2ED69F(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			return 1;
		case 190804938:
			iVar1 = func_205(iParam1);
			if (!NETWORK::_0x255A5EF65EDA9167(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			if (iVar1 != &Global_1275573 && !func_291(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			if (!func_292(512, iVar1))
			{
				return 0;
			}
			return 1;
		case -1503245593:
			if (!&Global_1954472->f_1616[8])
			{
				return 0;
			}
			iVar1 = func_205(iParam1);
			if (!NETWORK::_0x255A5EF65EDA9167(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			if (PED::_0x0C31C51168E80365(Global_1275573->f_8) != PLAYER::GET_PLAYER_PED(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			return 1;
		default:
			break;
	}
	return 0;
}

struct<31> func_276(int iParam0)
{
	int iVar0;

	iVar0 = func_131(iParam0, 1);
	return *(Global_1140484->f_30603.f_2900[iVar0 /*31*/]);
}

bool func_277(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	struct<11> Var0;
	bool bVar22;

	if (func_288(iParam0, iParam1, &Var0))
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_BOOL(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_BOOL(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_278(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 482459685:
			switch (iParam1)
			{
				case 0:
					return "PH_HEAD";
				case 1:
					return "CP_CHEST";
				case 2:
					return "CP_R_UpperArm";
				case 3:
					return "CP_L_UpperArm";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_279(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1182208[iVar0 /*8*/]) && !((*Global_1182208)[iVar0 /*8*/])->f_6)
		{
			((*Global_1182208)[iVar0 /*8*/])->f_5 = iParam0;
			((*Global_1182208)[iVar0 /*8*/])->f_1 = iParam1;
			((*Global_1182208)[iVar0 /*8*/])->f_2 = iParam2;
			((*Global_1182208)[iVar0 /*8*/])->f_3 = iParam3;
			((*Global_1182208)[iVar0 /*8*/])->f_4 = iParam4;
			((*Global_1182208)[iVar0 /*8*/])->f_6 = 1;
			return;
		}
		iVar0++;
	}
}

void func_280()
{
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 305, true);
	PED::_0x05CE6AF4DF071D23(Global_1275573->f_8, 0.7f);
}

char* func_281(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "Head_Shot_Ricco";
		default:
			break;
	}
	return "";
}

char* func_282(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "RDRO_Ability_Cards_SFX_Sounds";
		default:
			break;
	}
	return "";
}

bool func_283(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_284(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_293(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_285(int iParam0)
{
	switch (iParam0)
	{
		case 12857284:
			return -1990383629;
		case 299749022:
			return -101524555;
		case -1180698265:
			return -1915385310;
		case -487028314:
			return 1315162488;
		case 241235545:
			return 727393558;
		case 1827902148:
			return -1228057307;
		case 1301555144:
			return 1712094016;
		case -2056583192:
			return -1248299493;
		case 1015239729:
			return -451359317;
		case -340627321:
			return -2041626192;
		case -875805376:
			return -1371514637;
		case -768760704:
			return 1547608292;
		case 1089431066:
			return -361152079;
		case -2118203104:
			return -1994943603;
		case 1285634184:
			return 1011151573;
		case -559080197:
			return 892816668;
		case -1811760631:
			return -246340825;
		case 1858448324:
			return -1839865333;
		default:
			break;
	}
	return 0;
}

struct<17> func_286(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<17> Var0;
	struct<15> Var17;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_71(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_73(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

float func_287(int iParam0)
{
	return (BUILTIN::TO_FLOAT(iParam0) / 10000f);
}

int func_288(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	int iVar7;

	Var0 = -178401592;
	Var0.f_1 = iParam0;
	Var0.f_2 = joaat("name");
	Var0.f_3 = 1;
	Var0.f_4 = iParam1;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	if (DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, joaat("name")))
	{
		*uParam2 = iParam0;
		uParam2->f_9 = iParam1;
		StringCopy(&(uParam2->f_1), "", 64);
		StringIntConCat(&(uParam2->f_1), iVar7, 64);
		DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, joaat("type"));
		uParam2->f_10.f_3 = func_294(iVar7);
		uParam2->f_14.f_3 = uParam2->f_10.f_3;
		uParam2->f_18.f_3 = uParam2->f_10.f_3;
		switch (uParam2->f_10.f_3)
		{
			case 0:
				if (!DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_10), &Var0, joaat("default")))
				{
				}
				break;
			case 1:
				if (!DATAFILE::_0xB2B42607F7867576(&(uParam2->f_10.f_1), &Var0, joaat("default")))
				{
				}
				break;
			case 2:
				if (!DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_10.f_2), &Var0, joaat("default")))
				{
				}
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_14), &Var0, joaat("min"));
				break;
			case 1:
				DATAFILE::_0xB2B42607F7867576(&(uParam2->f_14.f_1), &Var0, joaat("min"));
				break;
			case 2:
				DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_14.f_2), &Var0, joaat("min"));
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_18), &Var0, joaat("max"));
				break;
			case 1:
				DATAFILE::_0xB2B42607F7867576(&(uParam2->f_18.f_1), &Var0, joaat("max"));
				break;
			case 2:
				DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_18.f_2), &Var0, joaat("max"));
				break;
		}
		switch (uParam2->f_10.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		return 1;
	}
	return 0;
}

bool func_289()
{
	return Global_1572887->f_6;
}

int func_290()
{
	if (!&Global_1048577)
	{
		return 0;
	}
	if (!func_296(func_295(0)))
	{
		return 0;
	}
	if (&Global_3145858 != -504335712)
	{
		return 0;
	}
	if (func_297(Global_524288->f_39792))
	{
		return 1;
	}
	return 0;
}

bool func_291(var uParam0)
{
	if (func_298(uParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, uParam0) != 1)
		{
			func_299(uParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, uParam0) == 1;
}

bool func_292(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1099294->f_3 && iParam0) != 0;
	}
	return (((*Global_1097610)[iParam1 /*51*/])->f_3 && iParam0) != 0;
}

int func_293(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_71(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return 0;
	}
	if (!func_220(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_294(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("int"):
			iVar0 = 0;
			break;
		case joaat("float"):
			iVar0 = 1;
			break;
		case joaat("bool"):
			iVar0 = 2;
			break;
	}
	return iVar0;
}

struct<2> func_295(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

int func_296(struct<2> Param0)
{
	if (!func_300(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_301(Param0))
	{
		return 0;
	}
	return 1;
}

bool func_297(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

int func_298(var uParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), uParam0))
	{
		return 1;
	}
	return 0;
}

void func_299(var uParam0)
{
	int iVar0;

	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = uParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!&Global_1275573->f_22[iVar0])
	{
		func_302(uParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_303(iVar0);
	NETWORK::_0x51951DE06C0D1C40(uParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

int func_300(int iParam0)
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

int func_301(int iParam0)
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

void func_302(var uParam0)
{
	int iVar0;

	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = uParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 0)
	{
		return;
	}
	func_303(iVar0);
	NETWORK::_0x51951DE06C0D1C40(uParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_303(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

