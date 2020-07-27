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
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	struct<4> Var0;
	struct<4> Var4;

	fLocal_16 = 1f;
	fLocal_17 = 1f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	Var4.f_19 = -1;
	Var4.f_33 = -1;
	Var4.f_34 = -1;
	Var4.f_35 = -1;
	Var4.f_36 = -1;
	Var4.f_37 = 1;
	if (func_1() != -1)
	{
		func_2(&Var4);
	}
	else
	{
		func_3(&Var4);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		func_4(&Var4);
	}
	if (func_1() == -1)
	{
		while (true)
		{
			while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iScriptParam_0))
			{
				if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iScriptParam_0, &Var0))
				{
					func_5(&Var0, &Var4);
					switch (Var0.f_2)
					{
						case joaat("zone"):
							Var4.f_4 = { Var0 };
							Var4 = { Var0 };
							switch (Var0)
							{
								case -1740156697:
									func_6(&Var4);
									break;
								case -632467210:
									Var4.f_33 = -1;
									Var4.f_34 = -1;
									func_7(&Var4);
									break;
							}
							Var4.f_37 = 1;
							break;
						case 651783971: /* GXTEntry: "Blip" */
							Var4 = { Var0 };
							switch (Var0)
							{
								case -1740156697:
									func_8(&Var4);
									break;
								case -632467210:
									func_9(&Var4);
									Var4 = { Var4.f_4 };
									func_6(&Var4);
									break;
								case -1203660660:
									func_10(&Var4);
									break;
							}
							break;
					}
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
				}
			}
			func_11(&Var4);
			func_12(&Var4);
			BUILTIN::WAIT(0);
		}
	}
	else
	{
		while (!func_13(1, 1))
		{
			func_14(iScriptParam_0, &Var4);
			func_11(&Var4);
			func_15(&Var4);
			BUILTIN::WAIT(0);
		}
	}
	func_4(&Var4);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_1()
{
	return Global_1572887->f_13;
}

void func_2(var uParam0)
{
	func_3(uParam0);
}

void func_3(var uParam0)
{
	struct<39> Var0;

	Var0.f_19 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = 1;
	*uParam0 = { Var0 };
	uParam0->f_20 = -1;
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST_FROM_PATH("", "MapFocus");
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_8, "Region", "");
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_8, "ItemHovered", 0);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_8, "HoveredName", "");
	HUD::_TEXT_DATABASE_REQUEST("FMMC");
	if (TXD::_DOES_STREAMED_TXD_EXIST(-1859668514))
	{
		TXD::_REQUEST_STREAMED_TXD(-1859668514, 0);
	}
	uParam0->f_37 = 1;
}

void func_4(var uParam0)
{
	if (func_1() == -1)
	{
		func_16(uParam0);
	}
	else
	{
		func_17(uParam0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_5(int iParam0, var uParam1)
{
	switch (iParam0->f_2)
	{
		case -590699808:
			switch (*iParam0)
			{
				case -1740156697:
					uParam1->f_33 = func_19(func_18(iParam0));
					uParam1->f_37 = 1;
					break;
			}
			break;
		case -2006263512:
			switch (*iParam0)
			{
				case -1740156697:
					uParam1->f_35 = func_18(iParam0);
					uParam1->f_37 = 1;
					break;
			}
			break;
		case -1666016325:
			switch (*iParam0)
			{
				case -1740156697:
					uParam1->f_36 = func_18(iParam0);
					uParam1->f_37 = 1;
					break;
			}
			break;
		case 1138540229:
			switch (*iParam0)
			{
				case -1740156697:
					uParam1->f_34 = func_20(func_18(iParam0));
					uParam1->f_37 = 1;
					break;
			}
			break;
	}
}

int func_6(var uParam0)
{
	uParam0->f_19 = uParam0->f_1;
	switch (func_21(uParam0))
	{
		case 2:
			uParam0->f_22 = func_22(uParam0->f_19);
			break;
		case 0:
			uParam0->f_22 = func_23(uParam0->f_20, 0);
			break;
		case 1:
			uParam0->f_22 = func_24(uParam0->f_21);
			break;
		default:
			func_25(uParam0);
			return 0;
	}
	func_25(uParam0);
	return 1;
}

void func_7(var uParam0)
{
	func_25(uParam0);
}

int func_8(var uParam0)
{
	uParam0->f_25 = uParam0->f_1;
	if (!func_26(uParam0->f_25, &(uParam0->f_23)))
	{
		uParam0->f_25 = 0;
		return 0;
	}
	switch (uParam0->f_23)
	{
		case 70:
			if (func_27(uParam0->f_25, &(uParam0->f_29)))
			{
				uParam0->f_26 = MISSIONDATA::_0x57E798B57C45EE16(MISC::GET_HASH_KEY(&(((*Global_1835011)[uParam0->f_29 /*72*/])->f_9)));
			}
			else
			{
				uParam0->f_26 = -1640799778;
			}
			break;
		case 69:
			switch (func_21(uParam0))
			{
				case 0:
					uParam0->f_22 = func_23(uParam0->f_20, 0);
					uParam0->f_26 = func_28(uParam0->f_19);
					if (!TXD::_DOES_STREAMED_TXD_EXIST(uParam0->f_26))
					{
						uParam0->f_26 = func_29();
					}
					break;
			}
			break;
		case 51:
		case 90:
			uParam0->f_28 = 0;
			return 0;
		default:
			uParam0->f_26 = func_30(uParam0->f_23, uParam0->f_25);
			break;
	}
	if (TXD::_DOES_STREAMED_TXD_EXIST(uParam0->f_26))
	{
		TXD::_REQUEST_STREAMED_TXD(uParam0->f_26, 1);
		uParam0->f_28 = 1;
		return 1;
	}
	return 0;
}

void func_9(var uParam0)
{
	struct<2> Var0;

	func_31(uParam0);
	uParam0->f_23 = { Var0 };
	uParam0->f_23 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = -1;
	func_32(uParam0);
}

int func_10(var uParam0)
{
	if (uParam0->f_25 != uParam0->f_1)
	{
		return 0;
	}
	if (!func_26(uParam0->f_25, &(uParam0->f_23)))
	{
		uParam0->f_25 = 0;
		return 0;
	}
	if (TXD::_DOES_STREAMED_TXD_EXIST(uParam0->f_26))
	{
		if (!uParam0->f_28)
		{
			uParam0->f_38 = 0;
			UIAPPS::_REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("map"), -556114113);
			return 1;
		}
	}
	return 0;
}

void func_11(var uParam0)
{
	if (uParam0->f_37)
	{
		func_33(uParam0);
		uParam0->f_37 = 0;
	}
}

void func_12(var uParam0)
{
	if (func_34(uParam0))
	{
		switch (uParam0->f_23)
		{
			case 70:
				func_35(uParam0->f_25, uParam0);
				break;
			case 69:
				func_36(uParam0->f_19, uParam0);
				break;
			case 91:
				func_37(uParam0->f_25, uParam0);
				break;
			case 92:
				func_38(uParam0->f_25, uParam0);
				break;
			case 93:
				func_39(uParam0->f_25, uParam0);
				break;
			case 94:
				func_40(uParam0->f_23, uParam0);
				break;
			default:
				func_40(uParam0->f_23, uParam0);
				break;
		}
	}
}

int func_13(bool bParam0, bool bParam1)
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

void func_14(int iParam0, var uParam1)
{
	struct<4> Var0;

	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iParam0))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iParam0, &Var0))
		{
			func_5(&Var0, uParam1);
			switch (Var0.f_2)
			{
				case joaat("zone"):
					uParam1->f_4 = { Var0 };
					*uParam1 = { Var0 };
					switch (Var0)
					{
						case -1740156697:
							func_41(uParam1);
							break;
						case -632467210:
							func_42(uParam1);
							break;
					}
					break;
				case 651783971: /* GXTEntry: "Blip" */
					*uParam1 = { Var0 };
					switch (Var0)
					{
						case -1740156697:
							func_43(uParam1);
							break;
						case -632467210:
							func_44(uParam1);
							*uParam1 = { uParam1->f_4 };
							func_41(uParam1);
							break;
						case -1203660660:
							func_45(uParam1);
							break;
					}
					break;
				case joaat("card"):
					if (Var0 == -1203660660)
					{
						if (func_46(uParam1))
						{
							UIAPPS::_CLOSE_APP_BY_HASH(29649618);
						}
					}
					break;
			}
			UIEVENTS::_EVENT_MANAGER_POP_EVENT(iParam0);
		}
	}
}

void func_15(var uParam0)
{
	var uVar0;

	if (func_34(uParam0))
	{
		if (!func_49(func_47(uParam0->f_23), func_48(uParam0->f_25), &uVar0))
		{
			return;
		}
		switch (uParam0->f_23)
		{
			case 90:
				func_50(uParam0->f_25, uParam0);
				break;
			case 70:
				func_51(uParam0, &uVar0);
				break;
			case 69:
				func_52(uParam0, &uVar0);
				break;
			case 95:
			case 96:
				func_53(uParam0, &uVar0);
				break;
			default:
				func_54(uParam0, &uVar0);
				break;
		}
	}
	func_55(uParam0);
	func_56(uParam0);
}

void func_16(var uParam0)
{
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_8);
}

void func_17(var uParam0)
{
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_8);
}

int func_18(int iParam0)
{
	if (iParam0->f_1 != 0)
	{
		return iParam0->f_1;
	}
	return -1;
}

int func_19(int iParam0)
{
	switch (iParam0)
	{
		case 2025841068:
			return 0;
		case 822658194:
			return 1;
		case 1308232528:
			return 2;
		case 1835499550:
			return 3;
		case 476637847:
			return 4;
		case -120156735:
			return 6;
		case 1645618177:
			return 7;
		case -512529193:
			return 8;
		case 131399519:
			return 9;
		case 178647645:
			return 10;
		case -864275692:
			return 11;
		case 1684533001:
			return 12;
		case -2066240242:
			return 13;
		case -2145992129:
			return 14;
		case -108848014:
			return 15;
		case 892930832:
			return 16;
		default:
			break;
	}
	return -1;
}

int func_20(int iParam0)
{
	switch (iParam0)
	{
		case 7359335:
			return 83;
		case joaat("ARMADILLO"):
			return 127;
		case -1708386982:
			return 39;
		case 1053078005:
			return 40;
		case 1778899666:
			return 99;
		case -1947415645:
			return 87;
		case 1862420670:
			return 101;
		case -1851305682:
			return 70;
		case -473051294:
			return 74;
		case 406627834:
			return 3;
		case 1463094051:
			return 116;
		case 2046780049:
			return 111;
		case -765540529:
			return 5;
		case 2147354003:
			return 33;
		case 427683330:
			return 26;
		case -1524959147:
			return 121;
		case 459833523:
			return 81;
		case 2126321341:
			return 98;
		case joaat("wallace"):
			return 37;
		case 1663398575:
			return 60;
		case -1207133769:
		case 201158410:
		case 1654810713:
			return 62;
		case 1299204683:
			return 66;
	}
	return -1;
}

int func_21(var uParam0)
{
	if (uParam0->f_19 == -1)
	{
		return -1;
	}
	uParam0->f_22 = func_22(uParam0->f_19);
	if (uParam0->f_22 != 0)
	{
		return 2;
	}
	uParam0->f_20 = func_20(uParam0->f_19);
	if (func_57(uParam0->f_20))
	{
		return 0;
	}
	uParam0->f_21 = func_19(uParam0->f_19);
	if (func_58(uParam0->f_21))
	{
		return 1;
	}
	return -1;
}

int func_22(int iParam0)
{
	switch (iParam0)
	{
		case -221059932: /* GXTEntry: "Ambarino" */
			return -594748684;
		case 10837344: /* GXTEntry: "Lemoyne" */
			return 1072597802;
		case 2045157995:
			return 1259085938;
		case -1289136221:
			return 1762760291;
		case 1246494439:
			return 1715468631;
		case -1973391500:
			return -960313506;
		case -1247148211:
			return -1581676015;
		case 1935063277: /* GXTEntry: "Guarma" */
			return -1431514117;
		default:
			break;
	}
	return 0;
}

int func_23(int iParam0, bool bParam1)
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

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 675537701;
		case 1:
			return -1915988145;
		case 2:
			return 38535626;
		case 3:
			return 1904167574;
		case 4:
			return 244711249;
		case 5:
			return -1859792564;
		case 6:
			return -1808688941;
		case 7:
			return -736296038;
		case 8:
			return -909439131;
		case 9:
			return 1917744724;
		case 10:
			return 821748379;
		case 11:
			return 196685551;
		case 12:
			return 1983548039;
		case 13:
			return 985737465;
		case 14:
			return -735550853;
		case 15:
			return -1716084250;
		case 16:
			return 869827975;
		default:
			break;
	}
	return 0;
}

void func_25(var uParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = 0;
	iVar1 = 0;
	sVar2 = "";
	iVar3 = func_20(uParam0->f_19);
	iVar4 = uParam0->f_33;
	if (!func_58(iVar4))
	{
		iVar4 = func_19(uParam0->f_19);
	}
	if (!func_58(iVar4))
	{
		iVar5 = func_60(func_59(iVar3, 1, 1));
	}
	else
	{
		iVar5 = func_61(iVar4);
	}
	if ((func_62(iVar4) || func_63(iVar5)) || func_64(iVar3))
	{
		if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
		{
			sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
		}
		else
		{
			sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
		}
		iVar0 = 1;
	}
	else if (func_65(iVar5))
	{
		iVar1 = func_66(iVar5);
		if (iVar1 > 0)
		{
			iVar0 = 1;
			sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_MAP_UI_BOUNTY_CASH", iVar1);
		}
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_11, iVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_12, sVar2);
}

bool func_26(int iParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;

	uVar2 = MAP::SET_BLIP_FLASHES(iParam0, &uVar0, &uVar1);
	*uParam1 = uVar0;
	uParam1->f_1 = uVar1;
	return uVar2;
}

int func_27(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < &Global_1900789)
	{
		if (!func_67(*((*Global_1900789)[iVar0 /*2*/])))
		{
		}
		else if (Global_1900789[iVar0 /*2*/] == 2)
		{
			*uParam1 = func_68(*((*Global_1900789)[iVar0 /*2*/]));
			if ((func_69(*uParam1) && MAP::DOES_BLIP_EXIST(((*Global_1835011)[*uParam1 /*72*/])->f_28)) && ((*Global_1835011)[*uParam1 /*72*/])->f_28 == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case 406627834:
			return 412187666;
		case -765540529:
			return -48955357;
		case 427683330:
			return -1366448499;
		case 1053078005:
			return -2142170718;
		case -473051294:
			return -652262915;
		case 459833523:
			return 1109427018;
		case 7359335:
			return -1353234788;
		case 2126321341:
			return -1965958161;
		case 2046780049:
			return -1059106609;
		case joaat("ARMADILLO"):
			return -1119990720;
		case -1524959147:
			return 539298361;
		default:
			break;
	}
	return -1;
}

int func_29()
{
	return 1109427018;
}

int func_30(int iParam0, int iParam1)
{
	var uVar0;
	struct<16> Var1;
	int iVar17;
	var uVar18;
	int iVar19;

	iVar17 = -1;
	switch (iParam0)
	{
		case 13:
			return -834434971;
		case 14:
			return -1014339941;
		case 15:
			return -1131397804;
		case 17:
			return -1211307166;
		case 18:
			return 909802596;
		case 19:
			return -1932898631;
		case 54:
			return -1212983574;
		case 55:
			return -1805795741;
		case 56:
			return -1949319444;
		case 60:
			return -40867973;
		case 61:
			return -700024937;
		case 62:
			return -422762807;
		case 63:
			return 1307627757;
		case 64:
			return -1341878153;
		case 65:
			return 1334885374;
		case 66:
			return 1718870684;
		case 90:
			return -1640799778;
		case 91:
			return -1640799778;
		case 92:
			return -1640799778;
		case 93:
			return -1640799778;
		case 94:
			return -1640799778;
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 52:
		case 58:
		case 67:
		case 68:
			Var1 = { func_70(iParam1, iParam0, &uVar0) };
			iVar17 = MISC::GET_HASH_KEY(&Var1);
			break;
		case 16:
			iVar17 = MISC::GET_HASH_KEY("MAP_CARD_BLK_BOUNTY");
			break;
		case 57:
			Var1 = { func_71() };
			iVar17 = MISC::GET_HASH_KEY(&Var1);
			break;
		case 53:
		case 59:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			Var1 = { func_72(iParam0, iParam1, &uVar0) };
			iVar17 = MISC::GET_HASH_KEY(&Var1);
			break;
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
			StringCopy(&Var1, func_73(iParam0), 128);
			iVar17 = MISC::GET_HASH_KEY(&Var1);
			break;
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
			MAP::SET_BLIP_FLASHES(iParam1, &uVar18, &iVar19);
			StringCopy(&Var1, func_74(iVar19), 128);
			iVar17 = MISC::GET_HASH_KEY(&Var1);
			break;
	}
	if (iVar17 != -1)
	{
		return iVar17;
	}
	return -1;
}

void func_31(var uParam0)
{
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_8);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_9);
}

void func_32(var uParam0)
{
	if (!UIAPPS::_REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("map"), 1136348382))
	{
		uParam0->f_38 = 1;
	}
	else
	{
		uParam0->f_38 = 0;
	}
}

void func_33(var uParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	sVar0 = func_75(uParam0->f_35, uParam0->f_36);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		if (uParam0->f_34 != -1)
		{
			iVar1 = func_76(uParam0->f_34);
		}
		if (uParam0->f_33 != -1)
		{
			iVar2 = func_77(uParam0->f_33);
			iVar3 = func_78(uParam0->f_33);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(iVar1) && !MISC::IS_STRING_NULL_OR_EMPTY(iVar2))
		{
			sVar0 = MISC::_CREATE_VAR_STRING(42, "MAP_CARD_TOWN_FOOTER", iVar1, iVar2);
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(iVar2) && !MISC::IS_STRING_NULL_OR_EMPTY(iVar3))
		{
			sVar0 = MISC::_CREATE_VAR_STRING(42, "MAP_CARD_TOWN_FOOTER", iVar2, iVar3);
		}
		else
		{
			sVar0 = "";
		}
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_10, sVar0);
}

int func_34(var uParam0)
{
	if (uParam0->f_38)
	{
		func_32(uParam0);
	}
	if (!uParam0->f_28)
	{
		return 0;
	}
	switch (uParam0->f_23)
	{
		case 0:
		case 51:
		case 90:
			uParam0->f_28 = 0;
			return 0;
		default:
			break;
	}
	if ((TXD::_DOES_STREAMED_TXD_EXIST(uParam0->f_26) && TXD::_HAS_STREAMED_TXD_LOADED(uParam0->f_26)) && (uParam0->f_27 == 0 || ((uParam0->f_27 != 0 && TXD::_DOES_STREAMED_TXD_EXIST(uParam0->f_27)) && TXD::_HAS_STREAMED_TXD_LOADED(uParam0->f_27))))
	{
		uParam0->f_28 = 0;
		return 1;
	}
	return 0;
}

void func_35(int iParam0, var uParam1)
{
	char cVar0[16];
	int iVar2;

	if (!func_69(uParam1->f_29))
	{
		if (!func_27(iParam0, &(uParam1->f_29)))
		{
			return;
		}
	}
	func_31(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", ((*Global_1835011)[uParam1->f_29 /*72*/])->f_27);
	MemCopy(&cVar0, {((*Global_1835011)[uParam1->f_29 /*72*/])->f_9}, 2);
	StringConCat(&cVar0, "_DESC_PM", 16);
	if (!HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
	{
		StringCopy(&cVar0, "", 16);
	}
	iVar2 = MISC::GET_HASH_KEY(&(((*Global_1835011)[uParam1->f_29 /*72*/])->f_9));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&cVar0));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", iVar2);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", MISSIONDATA::_0x57E798B57C45EE16(iVar2));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTX", MISSIONDATA::_0x57E798B56C45EE15(iVar2));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 1544592360);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "$0.00");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

void func_36(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_31(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "Zone");
	uParam1->f_26 = func_28(iParam0);
	iVar0 = func_79(uParam1->f_20);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", func_80(iParam0));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", MISC::GET_HASH_KEY(func_77(iVar0)));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", func_81(iParam0));
	if (TXD::_DOES_STREAMED_TXD_EXIST(uParam1->f_26))
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_28(iParam0));
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTX", func_28(iParam0));
	}
	else
	{
		uParam1->f_26 = func_29();
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", uParam1->f_26);
	}
	iVar1 = func_61(iVar0);
	if (func_65(iVar1))
	{
		iVar2 = func_66(iVar1);
		if (iVar2 > 0)
		{
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_name", "LAW_UI_BOUNTY");
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam1->f_9, "hint_value", iVar2);
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_name", "LAW_UI_NO_BOUNTY");
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
		}
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 0);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_town", uParam1->f_9);
}

void func_37(int iParam0, var uParam1)
{
	var uVar0;
	int iVar1;

	MAP::SET_BLIP_FLASHES(iParam0, &uVar0, &iVar1);
	func_31(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", MISC::GET_HASH_KEY(func_82(iVar1)));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", -436556357);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_30(uParam1->f_23, uParam1->f_25));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 0);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

void func_38(int iParam0, var uParam1)
{
	var uVar0;
	int iVar1;

	MAP::SET_BLIP_FLASHES(iParam0, &uVar0, &iVar1);
	func_31(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", &(Global_1070356->f_22101.f_366[iVar1 /*272*/]));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", -436556357);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_30(uParam1->f_23, uParam1->f_25));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 0);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

void func_39(int iParam0, var uParam1)
{
	var uVar0;
	int iVar1;

	MAP::SET_BLIP_FLASHES(iParam0, &uVar0, &iVar1);
	func_31(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", func_83(iVar1));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", -436556357);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_30(uParam1->f_23, uParam1->f_25));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 0);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

void func_40(int iParam0, var uParam1)
{
	int iVar0;
	struct<16> Var1;
	char cVar17[128];
	char cVar33[128];

	func_31(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	StringCopy(&cVar17, func_84(iParam0), 128);
	switch (func_85(iParam0))
	{
		case 1:
			Var1 = { func_70(uParam1->f_25, iParam0, &iVar0) };
			if (iParam0 == 16)
			{
				StringCopy(&Var1, "MAP_CARD_BOUNTY", 128);
			}
			StringCopy(&cVar33, func_76(iVar0), 128);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", MISC::GET_HASH_KEY(&cVar17));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&Var1));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", MISC::GET_HASH_KEY(&cVar33));
			break;
		case 2:
			StringCopy(&Var1, func_73(iParam0), 128);
			iVar0 = func_86(MAP::GET_BLIP_COORDS(uParam1->f_25), 1);
			StringCopy(&cVar33, func_76(iVar0), 128);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", &cVar17);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&Var1));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", MISC::GET_HASH_KEY(&cVar33));
			break;
		case 5:
			Var1 = { func_87(iVar0) };
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", &cVar17);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&Var1));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
			break;
		default:
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", &cVar17);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&Var1));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
			break;
	}
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_30(iParam0, uParam1->f_25));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_value", 0);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

int func_41(var uParam0)
{
	struct<4> Var0;

	uParam0->f_19 = uParam0->f_1;
	if (func_49(uParam0->f_2, uParam0->f_1, &Var0))
	{
		uParam0->f_22 = Var0.f_3;
		func_88(uParam0);
		return 1;
	}
	func_88(uParam0);
	return 0;
}

void func_42(var uParam0)
{
	func_88(uParam0);
}

int func_43(var uParam0)
{
	struct<15> Var0;

	uParam0->f_25 = uParam0->f_1;
	if (!func_26(uParam0->f_25, &(uParam0->f_23)))
	{
		uParam0->f_25 = 0;
		return 0;
	}
	if (!func_49(func_47(uParam0->f_23), func_48(uParam0->f_25), &Var0))
	{
	}
	switch (uParam0->f_23)
	{
		case 70:
			uParam0->f_29 = func_89(uParam0->f_25);
			uParam0->f_26 = Var0.f_12;
			break;
		case 51:
		case 90:
			uParam0->f_28 = 0;
			uParam0->f_26 = 0;
			return 0;
		case 93:
			uParam0->f_26 = Var0.f_12;
			uParam0->f_27 = Var0.f_14;
			break;
		default:
			uParam0->f_26 = Var0.f_12;
			break;
	}
	if (!TXD::_DOES_STREAMED_TXD_EXIST(uParam0->f_26))
	{
		uParam0->f_26 = 1078908615; /* GXTEntry: "A daily meal of soup is prepared in the camp made with the best parts of the late" +
    "st hunted game. The soups help to revitalize the gang members and can provide a " +
    "variety of health benefits." */
	}
	if (TXD::_DOES_STREAMED_TXD_EXIST(uParam0->f_26))
	{
		TXD::_REQUEST_STREAMED_TXD(uParam0->f_26, 1);
		uParam0->f_28 = 1;
		if (uParam0->f_27 != 0 && TXD::_DOES_STREAMED_TXD_EXIST(uParam0->f_27))
		{
			TXD::_REQUEST_STREAMED_TXD(uParam0->f_27, 1);
		}
		return 1;
	}
	return 0;
}

void func_44(var uParam0)
{
	func_9(uParam0);
	func_90(uParam0);
}

int func_45(var uParam0)
{
	return func_10(uParam0);
}

int func_46(var uParam0)
{
	struct<2> Var0;

	if (!func_49(func_47(uParam0->f_23), func_48(uParam0->f_25), &Var0))
	{
	}
	if (uParam0->f_23 == 91)
	{
		func_92(func_91(Var0.f_1), 6);
		return 1;
	}
	return 0;
}

int func_47(int iParam0)
{
	return func_93(iParam0);
}

int func_48(int iParam0)
{
	int iVar0;
	var uVar1;

	if (!MAP::DOES_BLIP_EXIST(iParam0))
	{
		return 0;
	}
	MAP::SET_BLIP_FLASHES(iParam0, &iVar0, &uVar1);
	switch (func_93(iVar0))
	{
		case 249251635:
			return uVar1;
		case -1258576797: /* GXTEntry: "Town" */
			return uVar1;
		case 1528833484:
			return uVar1;
		case 2133809007:
			return uVar1;
		case 1753392288:
			return uVar1;
		case -1397234361:
			return uVar1;
		case -1174166673:
			return uVar1;
		case 1355002354:
			return uVar1;
		case -891753673:
			return uVar1;
		default:
			break;
	}
	return uVar1;
}

int func_49(var uParam0, var uParam1, var uParam2)
{
	struct<5> Var0;

	Var0 = Global_1070356->f_26933;
	Var0.f_2 = -1629667380;
	Var0.f_3 = uParam0;
	Var0.f_4 = uParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		*uParam2 = uParam0;
		uParam2->f_1 = uParam1;
		Var0.f_2 = -178053467;
		DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_3), &Var0);
		Var0.f_2 = 2068408867;
		DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_2), &Var0);
		Var0.f_2 = -2015838779;
		DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_4), &Var0);
		Var0.f_2 = -837877152;
		DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_5), &Var0);
		Var0.f_2 = -1422707781;
		DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_6), &Var0);
		Var0.f_2 = -875438543;
		DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_7), &Var0);
		Var0.f_2 = 680824008;
		DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_8), &Var0);
		Var0.f_2 = -1832584664;
		DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_9), &Var0);
		Var0.f_2 = 1926839997;
		DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_10), &Var0);
		Var0.f_2 = -839757535;
		DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_11), &Var0);
		Var0.f_2 = 378321223;
		DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_12), &Var0);
		Var0.f_2 = -865732538;
		DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_13), &Var0);
		Var0.f_2 = -1361232962;
		DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_14), &Var0);
		Var0.f_2 = 680460752;
		DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_15), &Var0);
		Var0.f_2 = 1929921658;
		DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_16), &Var0);
		Var0.f_2 = 1969633495;
		DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_17), &Var0);
		Var0.f_2 = -1607031478;
		DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_25), &Var0);
		return 1;
	}
	return 0;
}

void func_50(int iParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	struct<7> Var2;
	var uVar9;

	MAP::SET_BLIP_FLASHES(iParam0, &uVar0, &iVar1);
	func_31(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	Var2 = { func_94(PLAYER::INT_TO_PLAYERINDEX(iVar1)) };
	uParam1->f_15 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", func_95(PLAYER::GET_PLAYER_NAME(PLAYER::INT_TO_PLAYERINDEX(iVar1)), joaat("COLOR_PURE_WHITE")));
	uParam1->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", -436556357);
	uParam1->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
	func_96(&uVar9, Var2, 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", MISC::GET_HASH_KEY(&uVar9));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", -486609646);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam1->f_9, "hint_value", func_97(iVar1));
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_player", uParam1->f_9);
}

void func_51(var uParam0, var uParam1)
{
	func_31(uParam0);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_8, "BLIP");
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "name", uParam1->f_4);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_9, "description", HUD::_GET_LABEL_TEXT_BY_HASH(-54516066));
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_9, "description_title", "");
	func_98(uParam0, uParam1->f_8);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "imageTXD", uParam1->f_12);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "imageTX", uParam1->f_13);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "hint_name", uParam1->f_16);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_9, "hint_value", &(uParam1->f_17));
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_8, -1, &(uParam1->f_25), uParam0->f_9);
}

void func_52(var uParam0, var uParam1)
{
	func_31(uParam0);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_8, "BLIP");
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "name", uParam1->f_4);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "description", uParam1->f_8);
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "description_title", uParam1->f_7);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "imageTXD", uParam1->f_12);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "imageTX", uParam1->f_13);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "hint_name", uParam1->f_16);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_9, "hint_value", &(uParam1->f_17));
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_8, -1, &(uParam1->f_25), uParam0->f_9);
}

void func_53(var uParam0, var uParam1)
{
	func_31(uParam0);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_8, "BLIP");
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "name", uParam1->f_4);
	if (uParam0->f_23 == 95 || uParam0->f_23 == 96)
	{
		uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "description", uParam1->f_8);
		uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "description_title", uParam1->f_7);
	}
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "imageTXD", uParam1->f_12);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "imageTX", uParam1->f_13);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "hint_name", uParam1->f_16);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_9, "hint_value", &(uParam1->f_17));
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_8, -1, &(uParam1->f_25), uParam0->f_9);
}

void func_54(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	func_31(uParam0);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_8, "BLIP");
	switch (uParam0->f_23)
	{
		case 93:
			iVar4 = func_99(uParam1->f_1);
			if (!func_100(iVar4))
			{
			}
			else
			{
				iVar6 = func_101(iVar4);
				if (iVar6 == joaat("none"))
				{
				}
				else
				{
					if (func_102(iVar4) != -323664079)
					{
						if (func_103(iVar4) == -1211851008)
						{
							if (!func_104(func_103(iVar4)))
							{
								iVar6 = joaat("secondary");
							}
						}
						iVar5 = PLAYER::_0x8E84119A23C16623(func_105(iVar4, iVar6), 0, 0);
						if (iVar5 == 0)
						{
						}
						else
						{
							iVar0 = PLAYER::_0xDA9D7BE231FE865F(func_105(iVar4, iVar6), 0, 0);
							if (PLAYER::_0x354F689C4FFAAB37(iVar5))
							{
								switch (iVar6)
								{
									case joaat("primary"):
										iVar3 = uParam1->f_8;
										iVar1 = uParam1->f_12;
										iVar2 = uParam1->f_13;
										break;
									case joaat("secondary"):
										if (func_103(iVar4) == -1211851008)
										{
											iVar3 = uParam1->f_8;
											iVar1 = uParam1->f_12;
											iVar2 = uParam1->f_13;
										}
										else
										{
											iVar3 = uParam1->f_9;
											iVar1 = uParam1->f_14;
											iVar2 = uParam1->f_15;
											uParam1->f_12 = uParam1->f_14;
											uParam1->f_13 = uParam1->f_15;
										}
										break;
									default:
										break;
								}
							}
							else
							{
								switch (func_106(iVar4, iVar6))
								{
									case joaat("female"):
										iVar3 = -648664377; /* GXTEntry: "A stranger has some business for you." */
										break;
									case joaat("male"):
										iVar3 = 1463582430; /* GXTEntry: "A stranger has some business for you." */
										break;
									default:
										break;
								}
								iVar1 = -1859668514;
								iVar2 = -712210889;
							}
							Jump @401; //curOff = 367
							iVar0 = func_107(iVar4, -1100859510);
							iVar3 = uParam1->f_8;
							iVar1 = uParam1->f_12;
							iVar2 = uParam1->f_13;
							Jump @431; //curOff = 401
							iVar0 = uParam1->f_4;
							iVar1 = uParam1->f_12;
							iVar2 = uParam1->f_13;
							iVar3 = uParam1->f_8;
						}
						uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "name", iVar0);
						uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "description", iVar3);
						uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "description_title", uParam1->f_7);
						DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "imageTXD", iVar1);
						DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "imageTX", iVar2);
						DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "hint_name", uParam1->f_16);
						DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_9, "hint_value", &(uParam1->f_17));
						if (uParam0->f_23 == 91)
						{
							iVar7 = func_91(uParam1->f_1);
							func_108(iVar7);
							uParam0->f_18 = 0;
							uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_9, "startable", 1);
							uParam0->f_17 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "startPrompt", -578259052);
							func_55(uParam0);
						}
						DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_8, -1, &(uParam1->f_25), uParam0->f_9);
					}
				}
			}
		}

void func_55(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (uParam0->f_23 == 91 && DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_16))
	{
		bVar0 = ((Global_1572887->f_106.f_75 > 1 && Global_1572887->f_106.f_75 <= 14) && !func_109());
		bVar1 = (GANG::_0x0F99F6436528A089(Global_1275573->f_15) && !GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()));
		bVar2 = (bVar0 || bVar1);
		if (uParam0->f_18 != bVar2)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_16, !bVar2);
			if (bVar0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_17, 1595859403);
			}
			else if (bVar1)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_17, 740703372);
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_17, -578259052);
			}
			uParam0->f_18 = bVar2;
		}
	}
}

void func_56(var uParam0)
{
	int iVar0;
	char* sVar1;
	char* sVar2;

	if (uParam0->f_30)
	{
		uParam0->f_30 = 0;
		uParam0->f_30.f_1 = 1;
	}
	if (uParam0->f_30.f_1)
	{
		sVar1 = func_110((Global_265331->f_4[uParam0->f_30.f_2 /*51*/])->f_22, &iVar0);
		if (iVar0 != 1)
		{
			uParam0->f_30.f_1 = 0;
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_13, sVar1);
			sVar2 = MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", &((Global_265331->f_4[uParam0->f_30.f_2 /*51*/])->f_7));
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_14, sVar2);
		}
	}
}

bool func_57(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_58(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

int func_59(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 81:
			if (func_111(iParam0))
			{
				return 305496830;
			}
			else
			{
				return -1482428221;
			}
			break;
		case 111:
			if (func_111(iParam0))
			{
				return -1323821455;
			}
			else
			{
				return -1994249944;
			}
			break;
		case 5:
			if (func_1() != -1 && func_112() == 1339372314)
			{
				return 1339372314;
			}
			else
			{
				return 1559741032;
			}
			break;
		case 66:
			return 60667583;
		case 83:
			return 1758133584;
		case 26:
			return -577559008;
		case 40:
			if (!bParam1 || func_1() != -1)
			{
				return 1624541293;
			}
			if (func_113(44))
			{
				return 1624541293;
			}
			else
			{
				return 1716860278;
			}
			break;
		case 98:
			if (func_1() != -1)
			{
				return 1178102426;
			}
			else
			{
				return 1637569166;
			}
			break;
		case 70:
			return -867798278;
		case 74:
			return 1543937523;
		case 99:
			return 1030875135;
		case 101:
			return -201437056;
		case 62:
			return 794246846;
		case 3:
			return -968357677;
		case 33:
			return 728480338;
		case 87:
			if (func_1() != -1)
			{
				return 1178102426;
			}
			else
			{
				return 725489698;
			}
			break;
		case 37:
			return 183652754;
		case 60:
			if (func_1() != -1)
			{
				return -1147969487;
			}
			else
			{
				return 2056744450;
			}
			break;
		case 134:
			return 963280223;
		case 127:
			return -256309418;
		case 131:
			return 1666986024;
		case 121:
			return 251328732;
		case 135:
			if (func_1() != -1)
			{
				return -877373104;
			}
			if (!bParam1)
			{
				return 1024208566;
			}
			if (func_113(44))
			{
				return 1024208566;
			}
			else
			{
				return 1640255731;
			}
			break;
		case 22:
			return 965626876;
		case 39:
			return -497792649;
		case 4:
		case 9:
		case 45:
		case 63:
		case 76:
		case 84:
		case 104:
			break;
		case 116:
			return -1990305778;
	}
	if (bParam2)
	{
		iVar0 = func_114(iParam0);
		if (iVar0 != -1)
		{
			return func_115(iVar0, bParam1);
		}
	}
	return 0;
}

int func_60(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2126166785:
			return -1;
		case -2119728378:
		case -1482428221:
		case -1391142299:
		case -867798278:
		case 183652754:
		case 305496830:
		case 725489698:
		case 1178102426:
		case 1543937523:
		case 1637569166:
		case 1758133584:
		case 2056744450:
			return 1;
		case -2137625828:
		case -1994249944:
		case -1323821455:
		case -968357677:
		case -201437056:
		case 493546894:
		case 728480338:
		case 1030875135:
		case 1559741032:
		case 1608357655:
			return 2;
		case -1147969487:
			return 0;
		case 60667583:
		case 537788226:
		case 794246846:
			return 5;
		case -1990305778:
		case -1738342532:
		case -1679988168:
		case -1308265478:
		case -650528936:
		case -577559008:
		case -497792649:
		case 139139039:
		case 965626876:
		case 1039226266:
		case 1624541293:
		case 1716860278:
			return 3;
		case -1618764825:
		case -877373104:
		case -256309418:
		case 251328732:
		case 963280223:
		case 1024208566:
		case 1640255731:
		case 1666986024:
			return 4;
	}
	return -1;
}

int func_61(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

int func_62(int iParam0)
{
	if (!func_58(iParam0))
	{
		return 0;
	}
	return func_116(iParam0, 2);
}

int func_63(int iParam0)
{
	if (!func_65(iParam0))
	{
		return 0;
	}
	return func_117(iParam0, 2);
}

int func_64(int iParam0)
{
	if (!func_57(iParam0))
	{
		return 0;
	}
	return func_118(iParam0, 16777216);
}

bool func_65(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_66(int iParam0)
{
	return func_119(iParam0);
}

int func_67(struct<2> Param0)
{
	if (!func_120(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_121(Param0))
	{
		return 0;
	}
	return 1;
}

int func_68(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_122(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

bool func_69(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

struct<16> func_70(int iParam0, int iParam1, var uParam2)
{
	struct<16> Var0;
	vector3 vVar16;
	char cVar19[128];

	if (!MAP::DOES_BLIP_EXIST(iParam0))
	{
		return Var0;
	}
	vVar16 = { MAP::GET_BLIP_COORDS(iParam0) };
	*uParam2 = func_86(vVar16, 1);
	while (vVar16.z < 200f && !func_57(*uParam2))
	{
		vVar16.f_2 = (vVar16.z + 25f);
		*uParam2 = func_86(vVar16, 1);
	}
	if (!func_57(*uParam2))
	{
		return Var0;
	}
	StringCopy(&Var0, "MAP_CARD_", 128);
	cVar19 = func_123(*uParam2);
	StringConCat(&Var0, &cVar19, 128);
	StringConCat(&Var0, "_", 128);
	StringConCat(&Var0, func_124(iParam1, *uParam2, vVar16), 128);
	return Var0;
}

struct<16> func_71()
{
	char cVar0[128];

	StringCopy(&cVar0, "MAP_CARD_NBX_STAGECOACH", 128);
	return cVar0;
}

struct<16> func_72(int iParam0, int iParam1, var uParam2)
{
	struct<16> Var0;
	vector3 vVar16;

	if (!MAP::DOES_BLIP_EXIST(iParam1))
	{
		return Var0;
	}
	vVar16 = { MAP::GET_BLIP_COORDS(iParam1) };
	if (vVar16.z == 0f)
	{
		func_125(&vVar16, 50, 10, 0, 0);
	}
	if (vVar16.z == 0f)
	{
		vVar16.f_2 = Global_35.f_2;
	}
	*uParam2 = func_86(vVar16, 1);
	if (!func_57(*uParam2))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 59:
			StringCopy(&Var0, "MAP_CARD_CAMP_", 128);
			StringConCat(&Var0, func_126(*uParam2), 128);
			break;
		case 53:
			StringCopy(&Var0, "MAP_CARD_CAMP_BEECHERSHOPE", 128);
			break;
		case 73:
			StringCopy(&Var0, "MAP_CARD_CAMP_FOOD", 128);
			break;
		case 74:
			StringCopy(&Var0, "MAP_CARD_CAMP_TITHING_BOX", 128);
			break;
		case 75:
			StringCopy(&Var0, "MAP_CARD_CAMP_BUTCHER", 128);
			break;
		case 76:
			StringCopy(&Var0, "MAP_CARD_CAMP_HORSE_HITCH", 128);
			break;
		case 77:
			StringCopy(&Var0, "MAP_CARD_CAMP_SUPPLY_AMMO", 128);
			break;
		case 78:
			StringCopy(&Var0, "MAP_CARD_CAMP_SUPPLY_MEDICINE", 128);
			break;
		case 79:
			StringCopy(&Var0, "MAP_CARD_CAMP_SUPPLY_PROVISIONS", 128);
			break;
		case 80:
			StringCopy(&Var0, "MAP_CARD_CAMP_MINIGAME_POKER", 128);
			break;
		case 81:
			StringCopy(&Var0, "MAP_CARD_CAMP_MINIGAME_FIVE_FINGER", 128);
			break;
		case 82:
			StringCopy(&Var0, "MAP_CARD_CAMP_MINIGAME_DOMINOES", 128);
			break;
	}
	return Var0;
}

char* func_73(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MAP_CARD_MINIGAMES_BLACKJACK";
		case 7:
			return "MAP_CARD_MINIGAMES_FENCE_BUILDING";
		case 3:
			return "MAP_CARD_MINIGAMES_POKER";
		case 5:
			return "MAP_CARD_MINIGAMES_COW_MILKING";
		case 6:
			return "MAP_CARD_MINIGAMES_CLEANING_STALLS";
		case 2:
			return "MAP_CARD_MINIGAMES_DOMINOES_BLOCK";
		case 8:
			return "MAP_CARD_MINIGAMES_DOMINOES_ALL_THREES";
		case 9:
			return "MAP_CARD_MINIGAMES_DOMINOES_ALL_FIVES";
		case 10:
			return "MAP_CARD_MINIGAMES_DOMINOES_DRAW";
		case 4:
			return "MAP_CARD_MINIGAMES_FIVE_FINGER_FILLET_CLASSIC";
		case 11:
			return "MAP_CARD_MINIGAMES_FIVE_FINGER_FILLET_BURNOUT";
		case 12:
			return "MAP_CARD_MINIGAMES_FIVE_FINGER_FILLET_GUTS";
		default:
			break;
	}
	return "";
}

char* func_74(int iParam0)
{
	switch (iParam0)
	{
		case -1894360593:
			return "MAP_CARD_CAMP_HORSESHOE_HUNTING_CHARLES";
		case 581819093:
			return "MAP_CARD_CAMP_CLEMENSPOINT_FISHING_KIERAN";
		case 687859577:
			return "MAP_CARD_CAMP_CLEMENSPOINT_FISHING_JAVIER";
		case -103573613:
			return "MAP_CARD_CAMP_HORSESHOE_FIVE_FINGER_FILLET_LENNY";
		case 1202375449:
			return "MAP_CARD_CAMP_SHADYBELLE_HUNTING_PEARSON";
		case 2038046186:
			return "MAP_CARD_CAMP_CLEMENSPOINT_DOMINOES_TILLY";
		case -839878969:
			return "MAP_CARD_CAMP_CLEMENSPOINT_COACH_ROBBERY_SEAN";
		case -360730635:
			return "MAP_CARD_CAMP_CLEMENSPOINT_COACH_ROBBERY_BILL";
		case 194099983:
			return "MAP_CARD_CAMP_CLEMENSPOINT_FIVE_FINGER_FILLET_MICAH";
		case -1891229662:
			return "MAP_CARD_CAMP_SHADYBELLE_BANK_ROBBERY_CHARLES";
		case -668333238:
			return "MAP_CARD_CAMP_SHADYBELLE_COACH_ROBBERY_MICAH";
		case 99378894:
			return "MAP_CARD_CAMP_SHADYBELLE_COACH_ROBBERY_LENNY";
		case 673012160:
			return "MAP_CARD_CAMP_SHADYBELLE_RUSTLING_UNCLE";
		case -1220302226:
			return "MAP_CARD_CAMP_HORSESHOE_HOME_ROBBERY_JAVIER";
		default:
			break;
	}
	return "";
}

char* func_75(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam1;
	if (iParam0 != -1)
	{
		iVar1 = func_127(iParam0);
		if (iVar1 == 0 || MAP::_MAP_IS_DISCOVERY_ACTIVE(iVar1))
		{
			iVar0 = iParam0;
		}
	}
	if (iVar0 == -1)
	{
		return "";
	}
	return MISC::_CREATE_VAR_STRING(0, iVar0);
}

char* func_76(int iParam0)
{
	if (!func_57(iParam0))
	{
		if (MISC::_IS_GLOBAL_BLOCK_VALID(4) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
		{
			return "FMMC_INV_ALID";
		}
		return "REGION_INV";
	}
	return func_128(((*Global_1887327)[iParam0 /*36*/])->f_23);
}

char* func_77(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BAY";
		case 1:
			return "BGV";
		case 2:
			return "BLU";
		case 3:
			return "CML";
		case 4:
			return "GRT";
		case 5:
			return "GRZ";
		case 6:
			return "GRE";
		case 7:
			return "GRW";
		case 8:
			return "GUA";
		case 9:
			return "HRT";
		case 10:
			return "ROA";
		case 11:
			return "SCM";
		case 12:
			return "TAL";
		case 15:
			return "CHO";
		case 13:
			return "GAP";
		case 16:
			return "HEN";
		case 14:
			return "RIO";
		default:
			break;
	}
	if (func_1() == 0)
	{
		return "FMMC_INV_ALID";
	}
	return "No District Label!";
}

char* func_78(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LEMOYNE";
		case 1:
			return "WEST_ELIZ";
		case 2:
			return "LEMOYNE";
		case 3:
			return "NEW_HANOV";
		case 4:
			return "WEST_ELIZ";
		case 5:
			return "AMBARINO";
		case 6:
			return "AMBARINO";
		case 7:
			return "AMBARINO";
		case 8:
			return "GUARMA";
		case 9:
			return "NEW_HANOV";
		case 10:
			return "NEW_HANOV";
		case 11:
			return "LEMOYNE";
		case 12:
			return "WEST_ELIZ";
		case 13:
			return "NEW_AUST";
		case 14:
			return "NEW_AUST";
		case 15:
			return "NEW_AUST";
		case 16:
			return "NEW_AUST";
		default:
			break;
	}
	if (func_1() == 0)
	{
		return "FMMC_INV_ALID";
	}
	return "No State Label!";
}

int func_79(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 30)
	{
		return 1;
	}
	else if (iParam0 <= 34)
	{
		return 2;
	}
	else if (iParam0 <= 38)
	{
		return 3;
	}
	else if (iParam0 <= 41)
	{
		return 4;
	}
	else if (iParam0 <= 52)
	{
		return 7;
	}
	else if (iParam0 <= 61)
	{
		return 6;
	}
	else if (iParam0 <= 66)
	{
		return 8;
	}
	else if (iParam0 <= 81)
	{
		return 9;
	}
	else if (iParam0 <= 98)
	{
		return 10;
	}
	else if (iParam0 <= 112)
	{
		return 11;
	}
	else if (iParam0 <= 119)
	{
		return 12;
	}
	else if (iParam0 <= 122)
	{
		return 13;
	}
	else if (iParam0 <= 126)
	{
		return 14;
	}
	else if (iParam0 <= 133)
	{
		return 15;
	}
	else if (iParam0 <= 136)
	{
		return 16;
	}
	return -1;
}

int func_80(int iParam0)
{
	char* sVar0;

	sVar0 = func_129(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sVar0);
}

int func_81(int iParam0)
{
	char cVar0[64];
	char cVar8[64];

	StringCopy(&cVar0, func_129(iParam0), 64);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return 0;
	}
	StringCopy(&cVar8, "MAP_CARD_", 64);
	StringConCat(&cVar8, &cVar0, 64);
	StringConCat(&cVar8, "_DESC", 64);
	return MISC::GET_HASH_KEY(&cVar8);
}

char* func_82(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "NM_PLAYLIST_ADVERSARY_SMALL";
		case 3:
			return "NM_PLAYLIST_ADVERSARY_MEDIUM";
		case 4:
			return "NM_PLAYLIST_ADVERSARY_LARGE";
		case 5:
			return "NM_PLAYLIST_GUN_RUSH_TEAMS";
		case 6:
			return "NM_PLAYLIST_GUN_RUSH";
		case 7:
			return "NM_PLAYLIST_ELIMINATION_SMALL";
		case 8:
			return "NM_PLAYLIST_ELIMINATION_MEDIUM";
		case 9:
			return "NM_PLAYLIST_ELIMINATION_LARGE";
		case 0:
			return "NM_PLAYLIST_RACE";
		case 1:
			return "NM_PLAYLIST_FEATURED_001";
		case 10:
			return "NM_PLAYLIST_NOMINATED";
		case 11:
			return "NM_BUCKET_NOMINATED_SERIES_SMALL";
		case 12:
			return "NM_BUCKET_NOMINATED_SERIES_MEDIUM";
		case 13:
			return "NM_BUCKET_NOMINATED_SERIES_LARGE";
		case 15:
			return "NM_PLAYLIST_ORBIS_SERIES_1";
		case 16:
			return "NM_PLAYLIST_ORBIS_SERIES_2";
		case 17:
			return "NM_PLAYLIST_ORBIS_SERIES_3";
		case 19:
			return "NM_PLAYLIST_CAPTURE";
		case 18:
			return "NM_PLAYLIST_SHOOTOUT";
		default:
			break;
	}
	return "NM_PLAYLIST_FFA";
}

var func_83(int iParam0)
{
	int iVar0;

	if (func_104(func_103(iParam0)))
	{
		iVar0 = -1100859510;
	}
	else
	{
		iVar0 = -107328778;
	}
	return &(((*Global_1113601)[iParam0 /*35*/])->f_13[func_130(iVar0, 1)]);
}

char* func_84(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "BLIP_MG_POKER";
		case 1:
			return "BLIP_MG_BLACKJACK";
		case 2:
			return "BLIP_MG_DOMINOES";
		case 7:
			return "BLIP_MG_FENCE_BUILDING";
		case 4:
			return "BLIP_MG_FIVE_FINGER_FILLET";
		case 5:
			return "BLIP_SUMMER_COW";
		case 6:
			return "BLIP_SUMMER_HORSE";
		case 8:
			return "BLIP_MG_DOMINOES_ALL3S";
		case 9:
			return "BLIP_MG_DOMINOES_ALL5S";
		case 10:
			return "BLIP_MG_DOMINOES_DRAW";
		case 11:
			return "BLIP_MG_FIVE_FINGER_FILLET_BURNOUT";
		case 12:
			return "BLIP_MG_FIVE_FINGER_FILLET_GUTS";
		case 14:
			return "BLIP_PROC_LOANSHARK";
		case 13:
			return "BLIP_AMBIENT_HERD";
		case 15:
			return "BLIP_PROC_BANK";
		case 16:
			return "BLIP_PROC_BOUNTY_POSTER";
		case 17:
			return "BLIP_AMBIENT_COACH";
		case 18:
			return "BLIP_AMBIENT_TRAIN";
		case 19:
			return "BLIP_AMBIENT_RIVERBOAT";
		case 20:
			return "BLIP_SHOP_STORE";
		case 21:
			return "BLIP_SHOP_SHADY_STORE";
		case 22:
			return "BLIP_AMBIENT_QUARTERMASTER";
		case 23:
			return "BLIP_SHOP_GUNSMITH";
		case 24:
			return "BLIP_SHOP_COACH_FENCING";
		case 25:
			return "BLIP_SHOP_DOCTOR";
		case 26:
			return "BLIP_SHOP_TAILOR";
		case 28:
			return "BLIP_SHOP_BLACKSMITH";
		case 29:
			return "BLIP_SHOP_TRAINER";
		case 33:
			return "BLIP_POST_OFFICE";
		case 34:
			return "BLIP_POST_OFFICE_REC";
		case 30:
			return "BLIP_SHOP_TRAIN";
		case 31:
			return "BLIP_SHOP_BARBER";
		case 32:
			return "BLIP_SHOP_BUTCHER";
		case 35:
			return "BLIP_SHOP_TACKLE";
		case 36:
			return "BLIP_SHOP_ANIMAL_TRAPPER";
		case 37:
			return "BLIP_SHOP_HORSE";
		case 38:
			return "BLIP_SHOP_HORSE_FENCING";
		case 39:
			return "BLIP_SHOP_HORSE_SADDLE";
		case 40:
			return "BLIP_HOTEL_BED";
		case 41:
			return "BLIP_PHOTO_STUDIO";
		case 27:
			return "BLIP_SALOON";
		case 51:
			return "BLIP_SHOP_WARDROBE";
		case 48:
			return "BLIP_MP_TRAVELLING_SALESWOMAN";
		case 49:
			return "BLIP_BUSINESS_MOONSHINE";
		case 50:
			return "BLIP_MOONSHINE_STILL";
		case 98:
			return "BLIP_MP_ROLE_MOONSHINER";
		case 52:
			return "BLIP_STABLE";
		case 53:
			return "BLIP_PROC_HOME";
		case 54:
			return "BLIP_PROC_HOME_LOCKED";
		case 55:
			return "BLIP_PROC_HOME";
		case 56:
			return "BLIP_AMBIENT_TELEGRAPH";
		case 57:
			return "BLIP_AMBIENT_COACH_TAXI";
		case 58:
			return "BLIP_AMBIENT_THEATRE";
		case 59:
			return "BLIP_REGION_CARAVAN";
		case 73:
			return "BLIP_CAMP_EAT";
		case 74:
			return "BLIP_AMBIENT_TITHING";
		case 75:
			return "BLIP_SHOP_PEARSON";
		case 76:
			return "BLIP_CAMP_HITCH";
		case 77:
			return "BLIP_SUPPLIES_AMMO";
		case 78:
			return "BLIP_SUPPLIES_HEALTH";
		case 79:
			return "BLIP_SUPPLIES_FOOD";
		case 80:
			return "BLIP_MG_POKER";
		case 81:
			return "BLIP_MG_FIVE_FINGER_FILLET";
		case 82:
			return "BLIP_MG_DOMINOES";
		case 83:
			return "BLIP_REGION_HUNTING";
		case 84:
			return "BLIP_MG_FISHING";
		case 85:
			return "BLIP_ROBBERY_COACH";
		case 86:
			return "BLIP_REGION_HUNTING";
		case 87:
			return "BLIP_ROBBERY_BANK";
		case 88:
			return "BLIP_MG_DOMINOES";
		case 89:
			return "BLIP_AMBIENT_HERD";
		case 60:
			return "BLIP_EVENT_APPLESEED";
		case 61:
			return "BLIP_EVENT_CASTOR";
		case 62:
			return "BLIP_EVENT_RAILROAD_CAMP";
		case 63:
			return "BLIP_EVENT_RIGGS_CAMP";
		case 64:
			return "BLIP_REGION_HIDEOUT";
		case 65:
			return "BLIP_PROC_HOME";
		case 66:
			return "BLIP_MG_FISHING";
		case 67:
			return "BLIP_AMBIENT_THEATRE";
		case 68:
			return "BLIP_AMBIENT_THEATRE";
		default:
			return "";
	}
	return "";
}

int func_85(int iParam0)
{
	switch (iParam0)
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
			return 2;
		case 16:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 52:
		case 58:
		case 67:
		case 68:
			return 1;
		case 53:
		case 59:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			return 3;
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
			return 4;
		case 57:
			return 5;
		default:
			break;
	}
	return 0;
	return 0;
}

int func_86(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_131();
	if (func_57(iVar0))
	{
		if (VOLUME::_0xF256A75210C5C0EB(((*Global_1887327)[iVar0 /*36*/])->f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_132(vParam0, iParam3);
}

struct<16> func_87(int iParam0)
{
	char cVar0[128];

	switch (iParam0)
	{
		case 111:
			StringCopy(&cVar0, "MAP_CARD_TAXI_RHODES", 128);
			break;
		case 5:
			StringCopy(&cVar0, "MAP_CARD_TAXI_SAINTDENIS", 128);
			break;
		case 81:
			StringCopy(&cVar0, "MAP_CARD_TAXI_VALENTINE", 128);
			break;
		case 26:
			StringCopy(&cVar0, "MAP_CARD_TAXI_STRAWBERRY", 128);
			break;
		case 40:
			StringCopy(&cVar0, "MAP_CARD_TAXI_BLACKWATER", 128);
			break;
		default:
			StringCopy(&cVar0, "MAP_CARD_TAXI_RHODES", 128);
			break;
	}
	return cVar0;
}

void func_88(var uParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	iVar1 = 0;
	sVar2 = "";
	iVar3 = uParam0->f_33;
	if (!func_58(iVar3))
	{
		iVar3 = func_19(uParam0->f_19);
	}
	iVar4 = func_61(iVar3);
	if ((func_133() || func_134()) || func_135())
	{
		return;
	}
	else if (func_62(iVar3) || func_63(iVar4))
	{
		if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
		{
			sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
		}
		else
		{
			sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
		}
		iVar0 = 1;
	}
	else if (func_65(iVar4))
	{
		iVar1 = func_66(iVar4);
		if (iVar1 > 0)
		{
			iVar0 = 1;
			sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_MAP_UI_BOUNTY_CASH", iVar1);
		}
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_11, iVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_12, sVar2);
}

int func_89(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < &Global_1900789)
	{
		if (!func_67(*((*Global_1900789)[iVar0 /*2*/])))
		{
		}
		else if (Global_1900789[iVar0 /*2*/] == 2)
		{
			iVar1 = func_68(*((*Global_1900789)[iVar0 /*2*/]));
			if ((func_69(iVar1) && MAP::DOES_BLIP_EXIST(((*Global_1835011)[iVar1 /*72*/])->f_28)) && ((*Global_1835011)[iVar1 /*72*/])->f_28 == iParam0)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_90(var uParam0)
{
	uParam0->f_30 = 0;
	uParam0->f_30.f_1 = 0;
	uParam0->f_30.f_2 = 0;
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case -1369928329:
			return 0;
		case -1804958860:
			return 1;
		case 1412564789:
			return 2;
		case 2090637823:
			return 3;
		case -1740003396:
			return 4;
		case -2140118397:
			return 5;
		case -141490041:
			return 6;
		case 112216621:
			return 7;
		case -1767965617:
			return 8;
		case 81153145:
			return 9;
		case 485273815:
			return 10;
		case 188100165:
			return 11;
		case -840966484:
			return 12;
		case 812079913:
			return 13;
		case 839886685:
			return 14;
		case 1749906378:
			return 15;
		case 1485493317:
			return 16;
		case -1956038143:
			return 17;
		case -1013295952:
			return 18;
		case 928731509:
			return 19;
		default:
			break;
	}
	return -1;
}

void func_92(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_136(iParam0))
	{
	}
	iVar0 = 1;
	iVar1 = iParam0;
	if (iParam0 >= 10 && iParam0 <= 13)
	{
		func_138(func_137(iParam0));
		iVar0 = 0;
	}
	if (iParam0 == 18)
	{
		iVar1 = 3;
	}
	if (iParam1 == 1 || iParam1 == 2)
	{
		if (Global_1901929->f_719.f_1)
		{
			iVar1 = func_139(iParam0);
		}
	}
	iVar2 = 0;
	if (((iVar1 == 6 || iVar1 == 5) || iVar1 == 8) || iVar1 == 9)
	{
		iVar2 = 2;
	}
	func_140(iParam1);
	func_143(1, 32, iVar0, func_141(iVar1), func_142(), iVar2, -1, 0, 0, 0);
}

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case 90:
			return -523921054 /* GXTEntry: "Player" */;
		case 91:
			return 2133809007;
		case 92:
			return 1753392288;
		case 93:
			return -1397234361;
		case 94:
			return 1551310356;
		case 95:
			return -1174166673;
		case 96:
			return 1355002354;
		case 69:
			return -1258576797 /* GXTEntry: "Town" */;
		case 70:
			return 249251635;
		case 71:
			return -891753673;
		case 16:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
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
		case 47:
		case 48:
		case 49:
		case 50:
		case 52:
		case 58:
		case 67:
		case 68:
		case 97:
			return 1528833484;
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
		case 46:
			return -188780617;
		default:
			break;
	}
	return 0;
}

struct<7> func_94(int iParam0)
{
	struct<7> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

char* func_95(char* sParam0, int iParam1)
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_144(MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

int func_96(char* sParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8)
{
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&uParam1))
	{
		return 1;
	}
	StringCopy(sParam0, "", 128);
	switch (iParam8)
	{
		case 0:
			StringCopy(sParam0, NETWORK::_0xB5C4B18B12A2AF23(&uParam1, iParam8), 128);
			return 4;
		case 1:
		case 2:
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&uParam1))
			{
				return 1;
			}
			return func_145(sParam0, NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&uParam1), iParam8);
		default:
			break;
	}
	return 3;
}

var func_97(int iParam0)
{
	if (iParam0 == 255 || iParam0 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
	{
		return NETWORK::_0x32C90CDFAF40514C();
	}
	return Global_1139395[iParam0 /*34*/];
}

void func_98(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_146(iParam1);
	if (iVar0 < 0)
	{
		return;
	}
	uParam0->f_30 = 1;
	uParam0->f_30.f_1 = 0;
	uParam0->f_30.f_2 = iVar0;
}

int func_99(var uParam0)
{
	return func_147(13, uParam0);
}

bool func_100(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 35);
}

int func_101(int iParam0)
{
	return (Global_1103537->f_1752.f_4839[iParam0 /*13*/])->f_1;
}

int func_102(int iParam0)
{
	return ((*Global_1113601)[iParam0 /*35*/])->f_1;
}

int func_103(int iParam0)
{
	return Global_1113601[iParam0 /*35*/];
}

bool func_104(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_149(-1684144076, func_148(iParam0)) };
	return func_150(Var0);
}

var func_105(int iParam0, int iParam1)
{
	return &(((*Global_1113601)[iParam0 /*35*/])->f_2[func_151(iParam1, 1) /*2*/]);
}

int func_106(int iParam0, int iParam1)
{
	return (((*Global_1113601)[iParam0 /*35*/])->f_2[func_151(iParam1, 1) /*2*/])->f_1;
}

int func_107(int iParam0, int iParam1)
{
	return &(((*Global_1113601)[iParam0 /*35*/])->f_13[func_130(iParam1, 1)]);
}

void func_108(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 <= -1)
	{
		return;
	}
	if (iVar0 > 20)
	{
		return;
	}
	func_152((Global_1901929->f_117[iVar0 /*2*/])->f_1, &(Global_1901929->f_117[iVar0 /*2*/]));
}

bool func_109()
{
	return func_153(Global_1572887->f_7, 1);
}

char* func_110(int iParam0, var uParam1)
{
	char* sVar0;

	if (Global_265331->f_124314.f_130 > 0 && Global_265331->f_124314.f_130 != iParam0)
	{
		*uParam1 = 5;
		return "";
	}
	switch (Global_265331->f_124314)
	{
		case 0:
			if (!NETWORK::_0x2D5DC831176D0114(iParam0))
			{
				func_154(1);
			}
			else
			{
				NETWORK::_0x68103E2247887242();
				func_154(1);
			}
			break;
		case 1:
			NETWORK::UGC_REQUEST_CACHED_DESCRIPTION(iParam0);
			func_154(2);
			break;
		case 2:
			if (!NETWORK::_0xEBFA8D50ADDC54C4(iParam0))
			{
				*uParam1 = 1;
				return "";
			}
			if (NETWORK::_0x162C23CA83ED0A62(iParam0))
			{
				func_154(3);
			}
			else
			{
				func_154(0);
				*uParam1 = 3;
				return "";
			}
			break;
		case 3:
			sVar0 = NETWORK::UGC_GET_CACHED_DESCRIPTION(iParam0, 512);
			NETWORK::_0x5A34CD9C3C5BEC44(iParam0);
			func_154(0);
			*uParam1 = 2;
			return sVar0;
	}
	*uParam1 = 1;
	return "";
}

int func_111(int iParam0)
{
	if (!func_57(iParam0))
	{
		return 0;
	}
	return func_118(iParam0, 33554432);
}

int func_112()
{
	return Global_1938085->f_26;
}

int func_113(int iParam0)
{
	if (!func_155(iParam0))
	{
		return 0;
	}
	return func_156(iParam0);
}

int func_114(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 30)
	{
		return 1;
	}
	else if (iParam0 <= 34)
	{
		return 2;
	}
	else if (iParam0 <= 38)
	{
		return 3;
	}
	else if (iParam0 <= 41)
	{
		return 4;
	}
	else if (iParam0 <= 52)
	{
		return 7;
	}
	else if (iParam0 <= 61)
	{
		return 6;
	}
	else if (iParam0 <= 66)
	{
		return 8;
	}
	else if (iParam0 <= 81)
	{
		return 9;
	}
	else if (iParam0 <= 98)
	{
		return 10;
	}
	else if (iParam0 <= 112)
	{
		return 11;
	}
	else if (iParam0 <= 119)
	{
		return 12;
	}
	else if (iParam0 <= 121)
	{
		return 13;
	}
	else if (iParam0 <= 126)
	{
		return 14;
	}
	else if (iParam0 <= 133)
	{
		return 15;
	}
	else if (iParam0 <= 136)
	{
		return 16;
	}
	return -1;
}

int func_115(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -2137625828;
		case 1:
			return 1039226266;
		case 2:
			return 493546894;
		case 3:
			return -2119728378;
		case 4:
			if (!bParam1 || func_1() != -1)
			{
				return -1308265478;
			}
			if (func_113(44))
			{
				return -1308265478;
			}
			else
			{
				return -1738342532;
			}
			break;
		case 5:
			return -1147969487;
		case 6:
			return -1147969487;
		case 7:
			return -1147969487;
		case 8:
			return 537788226;
		case 9:
			return -1391142299;
		case 10:
			return 1178102426;
		case 11:
			return 1608357655;
		case 12:
			if (!bParam1 || func_1() != -1)
			{
				return -650528936;
			}
			if (func_113(44))
			{
				return -650528936;
			}
			else
			{
				return 139139039;
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_1() != -1)
			{
				return -877373104;
			}
			if (func_113(44))
			{
				return -877373104;
			}
			else
			{
				return -1618764825;
			}
			break;
	}
	return 0;
}

bool func_116(int iParam0, int iParam1)
{
	if (!func_58(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return (Global_39.f_259[iParam0] && iParam1) != 0;
	}
	return (Global_1070356->f_19665[iParam0] && iParam1) != 0;
}

bool func_117(int iParam0, int iParam1)
{
	if (!func_65(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return ((Global_39.f_186[iParam0 /*12*/])->f_5 && iParam1) != 0;
	}
	return ((Global_1070356->f_19592[iParam0 /*12*/])->f_5 && iParam1) != 0;
}

bool func_118(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		return (Global_7887[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1070356->f_17941[iParam0 /*11*/] && iParam1) != 0;
}

int func_119(int iParam0)
{
	int iVar0;
	struct<7> Var1;
	var uVar8;

	if (!func_65(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_13 == -1)
	{
		return &(Global_39.f_186[iParam0 /*12*/]);
	}
	iVar0 = 0;
	Var1 = { func_94(PLAYER::PLAYER_ID()) };
	BOUNTY::_0x4EF23E04A0C8FF51(&Var1, &uVar8);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1070356->f_19592[iVar0 /*12*/] = uVar8;
		iVar0++;
	}
	return &(Global_1070356->f_19592[iParam0 /*12*/]);
}

int func_120(int iParam0)
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

int func_121(int iParam0)
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

int func_122(struct<2> Param0, var uParam2)
{
	if (!func_67(Param0))
	{
		return 0;
	}
	func_157(uParam2);
	switch (Param0)
	{
		case 2:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634[Param0.f_1 /*3*/], 3);
			return 1;
		case 3:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_602[Param0.f_1 /*3*/], 3);
			return 1;
		case 4:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_2104[Param0.f_1 /*3*/], 3);
			return 1;
		case 5:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_12606[Param0.f_1 /*3*/], 3);
			return 1;
		case 6:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_12908[Param0.f_1 /*3*/], 3);
			return 1;
		case 7:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_15910[Param0.f_1 /*3*/], 3);
			return 1;
		case 8:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_15981[Param0.f_1 /*3*/], 3);
			return 1;
		default:
			break;
	}
	return 0;
}

var func_123(int iParam0)
{
	char[] cVar0[8];

	if (!func_57(iParam0))
	{
		StringCopy(&cVar0, "UNK", 8);
		return cVar0;
	}
	return ((*Global_1887327)[iParam0 /*36*/])->f_23;
}

char* func_124(int iParam0, int iParam1, vector3 vParam2)
{
	switch (iParam0)
	{
		case 20:
			return "GENERALSTORE";
		case 21:
			return "FENCE";
		case 23:
			return "GUNSMITH";
		case 25:
			return "DOCTOR";
		case 26:
			return "TAILOR";
		case 28:
			return "BLACKSMITH";
		case 33:
			switch (iParam1)
			{
				case 111:
					return "TRAINSTATION";
				default:
					return "DEPOT";
			}
			break;
		case 34:
			return "DEPOT";
		case 30:
			switch (iParam1)
			{
				case 5:
					return "DEPOT";
				default:
					return "TRAINSTATION";
			}
			break;
		case 31:
			return "BARBER";
		case 32:
			return "BUTCHER";
		case 35:
			return "BAITSHOP";
		case 36:
			return "TRAPPER";
		case 37:
			return "HORSESHOP";
		case 38:
			return "HORSESHOP";
		case 40:
			return "HOTEL";
		case 41:
			return "PHOTOGRAPHER";
		case 58:
			return "MAGICLANTERN";
		case 67:
			return "VAUDEVILLE";
		case 68:
			return "VAUDEVILLE";
		case 57:
			return "STAGECOACH";
		case 27:
			switch (iParam1)
			{
				case 5:
					if (BUILTIN::VDIST(vParam2, 2796f, -1167f, vParam2.z) <= 25f)
					{
						return "SLUMSALOON";
					}
					else
					{
						return "NICESALOON";
					}
					break;
				case 81:
					if (BUILTIN::VDIST(vParam2, -308f, 807.05f, vParam2.z) <= 25f)
					{
						return "SALOON_BARBER";
					}
					else
					{
						return "SALOON2";
					}
					break;
				default:
					return "SALOON";
			}
			break;
		case 16:
			return "BOUNTY";
		case 51:
			return "WARDROBE";
	}
	return "";
}

int func_125(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_158(*uParam0, 0f, 0f, 0f))
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
	if (bParam4)
	{
		vVar4 = { *uParam0 };
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

char* func_126(int iParam0)
{
	switch (func_159(iParam0))
	{
		case 6:
			return "BEAVERHOLLOW";
		case 2:
			return "CLEMENSPOINT";
		case 0:
			return "COLTER";
		case 4:
			return "GUARMA";
		case 1:
			return "HORSESHOE";
		case 5:
			return "LAKAY";
		case 3:
			return "SHADYBELLE";
		case 7:
			return "PRONGHORN";
	}
	return "";
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case -787401661:
			return 993246734;
		case 1154382595:
			return 1352537560;
		case -744066564:
			return -1262808306;
		case 1448805167:
			return 1582457845;
		case -1753216046:
			return 460210291;
		case -832065774:
			return 2021420613;
		case -1942169613:
			return 1195199040;
		case 1307292947:
			return -1212881551;
		case 893044669:
			return -2011320133;
		case 1716154100:
			return -1988847961;
		case -1173672830:
			return 2056389698;
		case -2074284650:
			return -942443338;
		case -2133063188:
			return 539572870;
		case -769726319:
			return 66159563;
		case 863351250:
			return 387869270;
		case -419963911:
			return -496244122;
		case -619014970:
			return -238119963;
		case 538198805:
			return 1028223611;
		case 1557904547:
			return 730222325;
		case 1251481628:
			return -597970767;
		case -828659305:
			return -732274047;
		case -139400310:
			return -1368676121;
		case 1830267951:
			return 759314201;
		case -1496551068:
			return 1826504111;
		case 39999178:
			return 1728445882;
		case -103399754:
			return -12216052;
		case -1359523911:
			return -431488293;
		case -336631570:
			return 1474106589;
		case 866178028:
			return -353968602;
		case 2056953687:
			return -918096609;
		case 878474860:
			return 1979340260;
		case 219097977:
			return 1472232821;
		case -1043500161:
			return 462373845;
		case -1902025470:
			return -1836330842;
		case 1701820039:
			return -1150244084;
		case -2034338067:
			return -1727895786;
		case 1767462106:
			return -1101810198;
		case 770707682:
			return 2143316225;
		case -1592070727:
			return 121074776;
		case -1521776363:
			return -2086563810;
		case 1544029611:
			return -1332669948;
		case 881209616:
			return 85299473;
		case -1161186391:
			return -1813267128;
		case -154855189:
			return 458479023;
		case 1212679502:
			return -678676588;
		case -969933882:
			return 1602161184;
		case -1539536559:
			return -656861063;
		case -916903901:
			return 1735191955;
		case -2126414432:
			return 2073023198;
		case 580715948:
			return -1941572412;
		case -814535426:
			return 215480587;
		case 1987954784:
			return 545498183;
		case 320988519:
			return 820139809;
		case 522499758:
			return 2063457042;
		case 1082216465:
			return 1006072805;
		case 1247830528:
			return 428613469;
		case -645154787:
			return -161135375;
		case -657053325:
			return -1276637644;
		case 1030217084:
			return -960425936;
		case -1821194396:
			return 532401286;
		case -146460093:
			return -1347759053;
		case 2087258933:
			return 1542246539;
		case 1922831023:
			return 1740117339;
		case -1472363892:
			return 770074951;
		case 30800579:
			return -237206861;
		case -1769528472:
			return 1877776161;
		case 1895254880:
			return 1837393665;
		case -1692509313:
			return 1603579970;
		case -576782619:
			return -1456731677;
		case 229479634:
			return -1344767066;
		case 1062452343:
			return 1092217275;
		case 1350749955:
			return 1855549007;
		case 1506834348:
			return -875696111;
		case 2132554759:
			return -91026072;
		case 1016304714:
			return 1876184276;
		case 375900073:
			return -876779166;
		case -631265576:
			return -1116738159;
		case -291091669:
			return 415864829;
		case 1603158849:
			return -1408667066;
		case -2035208924:
			return -1730421200;
		case 1860552235:
			return 1374995365;
		case 1987585677:
			return -1393093729;
		case -259784188:
			return -1623232489;
		case 1477464408:
			return -1394664008;
		case 1136441188:
			return -325788416;
		case 738939338:
			return -1807212021;
		case -1247294802:
			return -792566558;
		case 6184171:
			return -2089448537;
		case -868607615:
			return 82527577;
		case 930788089:
			return -1354901649;
		case 1871224592:
			return -1585921053;
		case 1094048700:
			return 222265732;
		case -1419869345:
			return 1561007383;
		case -1894004139:
			return 1104975149;
		case 31314838:
			return 1515744307;
		case -438809735:
			return 893855320;
		case 690770514:
			return 235472255;
		case 126047903:
			return -1173041902;
		case 1001341519:
			return 326709244;
		case 1704544150:
			return -1337880478;
		case 245588937:
			return 205568929;
		case 199607503:
			return 276890716;
		case -264897431:
			return -2110824426;
		case -2000021141:
			return 43681669;
		case 1645047683:
			return 562599937;
		case -1164281509:
			return 1822876181;
		case 696910142:
			return -683043834;
		case -1768736648:
			return 532503220;
		case -930437658:
			return 379859357;
		case -1622112934:
			return 1610646968;
		case -9585484:
			return 1268001912;
		case -870780939:
			return 653958186;
		case 570617421:
			return -1917132299;
		case 230920996:
			return -134804027;
		case 1071862910:
			return 1116308524;
		case 1436995883:
			return 1625008147;
		case 806217109:
			return -727372692;
		case 1347794144:
			return 1354284392;
		case -215175141:
			return 1871337449;
		case 359085936:
			return -1249289544;
		case -1699818764:
			return 1714554710;
		case 1499492436:
			return -443207523;
		case -793097117:
			return -33677540;
		case 1400897589:
			return -763271696;
		case 848488661:
			return 2027689141;
		case -504005310:
			return -1484929764;
		case -1099073636:
			return -1430883057;
		case 372957665:
			return 2133877879;
		case 1427239788:
			return -508074447;
		case 1677148641:
			return -507075109;
		case -425430549:
			return 147256338;
		case -61172588:
			return 929640770;
		case 492552869:
			return 648073069;
		case -545967610:
			return 653799702;
		case -1999797981:
			return -296815465;
		case 1613985721:
			return 1944800674;
		case -120578354:
			return 221661572;
		default:
			break;
	}
	return 0;
}

var func_128(var uParam0)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_129(int iParam0)
{
	switch (iParam0)
	{
		case 2126321341:
			return "VHT";
		case -473051294:
			return "EMR";
		case 7359335:
			return "ANN";
		case 406627834:
			return "LAG";
		case 2046780049:
			return "RHO";
		case 427683330:
			return "STR";
		case 1053078005:
			return "BLA";
		case -765540529:
			return "NBX";
		case 459833523:
			return "VAL";
		case joaat("ARMADILLO"):
			return "AMD";
		case -1524959147:
			return "TBL";
		default:
			break;
	}
	return "";
}

int func_130(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1100859510:
			return 0;
		case -107328778:
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

int func_131()
{
	return Global_1893575->f_2;
}

int func_132(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_160(vParam0);
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

bool func_133()
{
	return Global_262996[&Global_1275573 /*70*/] > 2;
}

int func_134()
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
	if (!func_67(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_135()
{
	if (func_161(255) <= 2)
	{
		return 0;
	}
	if (Global_265331->f_124445.f_70.f_21.f_2 != -504335712)
	{
		return 0;
	}
	if (!func_162(Global_265331->f_124445.f_70.f_21.f_3))
	{
		return 0;
	}
	return 1;
}

bool func_136(int iParam0)
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(func_163(iParam0));
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return 0;
		case 11:
			return 1;
		case 12:
			return 2;
		case 13:
			return 3;
		default:
			break;
	}
	return 0;
}

void func_138(int iParam0)
{
	int iVar0;
	int iVar1[20];
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;

	if (&((*Global_1055966)[&Global_1275573 /*436*/])->f_153.f_11[iParam0 /*6*/] != 0)
	{
		return;
	}
	iVar0 = 0;
	iVar23 = func_165(func_164(iParam0));
	iVar22 = 0;
	while (iVar22 < 1250)
	{
		if ((Global_265331->f_4[iVar22 /*51*/])->f_33 == iVar23 && (Global_265331->f_4[iVar22 /*51*/])->f_43 == -1)
		{
			iVar1[iVar0] = iVar22;
			iVar0++;
			if (iVar0 >= 20)
			{
			}
			else
			{
				iVar22++;
			}
			iVar24 = &iVar1[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0)];
			((*Global_1055966)[&Global_1275573 /*436*/])->f_153.f_11[iParam0 /*6*/] = &Global_265331->f_63755[iVar24 /*8*/];
			iVar22 = 0;
			while (iVar22 <= 31)
			{
				if (!MISC::IS_BIT_SET((Global_265331->f_63755[iVar24 /*8*/])->f_7, iVar22))
				{
				}
				else
				{
					if ((Global_265331->f_4[iVar24 /*51*/])->f_29 == -933924539)
					{
						(((*Global_1055966)[&Global_1275573 /*436*/])->f_153.f_11[iParam0 /*6*/])->f_1 = func_166(iVar22, 1);
					}
					else if ((Global_265331->f_4[iVar24 /*51*/])->f_29 == 395262693)
					{
						(((*Global_1055966)[&Global_1275573 /*436*/])->f_153.f_11[iParam0 /*6*/])->f_1 = func_167(iVar22, 1);
					}
				}
				else
				{
					iVar22++;
				}
			}
			iVar25 = MISC::GET_RANDOM_INT_IN_RANGE((Global_265331->f_63755[iVar24 /*8*/])->f_6, (Global_265331->f_4[iVar24 /*51*/])->f_34);
			(((*Global_1055966)[&Global_1275573 /*436*/])->f_153.f_11[iParam0 /*6*/])->f_2 = iVar25;
		}
	}

int func_139(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	int iVar6;
	int iVar7;

	iVar0 = 0;
	iVar1 = 1;
	if (func_168() > 0)
	{
		iVar1 = func_168();
	}
	switch (iParam0)
	{
		case 18:
			if (func_136(2) && func_165(2) >= iVar1)
			{
				iVar2[iVar0] = 2;
				iVar0++;
			}
			if (func_136(3) && func_165(3) >= iVar1)
			{
				iVar2[iVar0] = 3;
				iVar0++;
			}
			if (func_136(4) && func_165(4) >= iVar1)
			{
				iVar2[iVar0] = 4;
				iVar0++;
			}
			break;
		case 8:
			if (func_136(7) && func_165(7) >= iVar1)
			{
				iVar2[iVar0] = 7;
				iVar0++;
			}
			if (func_136(8) && func_165(8) >= iVar1)
			{
				iVar2[iVar0] = 8;
				iVar0++;
			}
			if (func_136(9) && func_165(9) >= iVar1)
			{
				iVar2[iVar0] = 9;
				iVar0++;
			}
			break;
		case 15:
			if (func_136(15) && func_165(15) >= iVar1)
			{
				iVar2[iVar0] = 15;
				iVar0++;
			}
			if (func_136(16) && func_165(16) >= iVar1)
			{
				iVar2[iVar0] = 16;
				iVar0++;
			}
			break;
		default:
			if (func_136(iParam0) && func_165(iParam0) >= iVar1)
			{
				iVar2[iVar0] = iParam0;
				iVar0++;
			}
			break;
	}
	iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536);
	iVar7 = (iVar6 % iVar0);
	if (iVar7 < 0 || iVar7 >= 3)
	{
		iVar7 = 0;
	}
	return &(iVar2[iVar7]);
}

void func_140(int iParam0)
{
	Global_1572887->f_106.f_14 = iParam0;
}

int func_141(int iParam0)
{
	int iVar0;

	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		return 6;
	}
	if (iParam0 == 11)
	{
		return 5;
	}
	if (iParam0 == 12)
	{
		return 7;
	}
	if (iParam0 == 13)
	{
		return 8;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (&Global_265331->f_117321.f_6725[iVar0] == &Global_265308->f_1[iParam0])
		{
			return &(Global_265331->f_117321.f_6758[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

struct<2> func_142()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_143(int iParam0, int iParam1, int iParam2, int iParam3, struct<2> Param4, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10)
{
	struct<7> Var0;
	char cVar57[64];
	struct<56> Var65;

	if (!func_169(iParam2, iParam3))
	{
		return 0;
	}
	if (func_170() && Global_1572887->f_106.f_75 != 8)
	{
		return 0;
	}
	if (!func_171(Global_1275573->f_10))
	{
		return 0;
	}
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_5 = 1;
	Var0.f_6 = 7;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = 1;
	Var0.f_3 = { Param4 };
	func_172(&Var0);
	func_173(iParam2, iParam3, iParam7, 1);
	func_174(Param4, 1);
	func_175(iParam6);
	func_176(iParam9);
	func_177(iParam10, 1);
	if ((func_67(Param4) && !func_178()) && &Global_1199546 == -1)
	{
		func_179(Param4);
	}
	NETWORK::_0x0AE241A4A9ADEEEC(1);
	if (iParam2 != 2)
	{
		func_180();
	}
	if (func_178())
	{
		func_181(Param4);
	}
	else if (iParam2 == 3)
	{
		if (!func_182(268435456))
		{
			if (!UIAPPS::_IS_APP_ACTIVE(1433015236))
			{
				func_183(1, 0);
			}
		}
	}
	else
	{
		if (iParam2 == 2)
		{
			Var65 = 255;
			Var65.f_18 = 2147483647;
			Var65.f_21.f_2 = -504335712;
			Var65.f_21.f_4 = 3;
			Var65.f_26 = -1;
			Var65.f_30 = 1;
			Var65.f_31 = 1;
			Var65.f_32 = 1;
			Var65.f_33 = 32;
			Var65.f_34 = 1;
			Var65.f_35 = -2;
			Var65.f_47.f_5 = -1;
			Var65.f_53 = -1;
			Var65.f_53.f_1 = -1;
			Var65.f_55.f_3 = -1;
			func_184(&Var65, iParam3, -1, -1, 3);
			StringCopy(&cVar57, func_185(&(Var65.f_37), joaat("COLOR_PURE_WHITE")), 64);
		}
		else if (iParam2 == 1)
		{
			StringCopy(&cVar57, MISC::_CREATE_VAR_STRING(2, func_186(iParam3)), 64);
		}
		else
		{
			StringCopy(&cVar57, MISC::_CREATE_VAR_STRING(2, func_188(func_187(), iParam3)), 64);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887->f_106.f_133, &cVar57);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887->f_106.f_135, MISC::_CREATE_VAR_STRING(2, "NM_PLAYLIST_MATCHMADE_PLAYERS", 1));
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_136);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_137);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_138);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_139);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_140);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_141);
	}
	if ((!GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()) && func_189(255, 0)) && !bParam8)
	{
		func_190("NM_MATCHMAKING_WARNING");
	}
	func_191(9);
	return 1;
}

char* func_144(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_145(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar10;
	int iVar11;
	char* sVar12;

	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 1;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam1);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 1;
	}
	StringCopy(sParam0, "", 128);
	iVar2 = func_192(iParam1, iParam2);
	switch (iParam2)
	{
		case 0:
			NETWORK::NETWORK_HANDLE_FROM_PLAYER(PLAYER::INT_TO_PLAYERINDEX(iParam1), &uVar3);
			if (!NETWORK::NETWORK_IS_HANDLE_VALID(&uVar3))
			{
				return 1;
			}
			StringCopy(sParam0, NETWORK::_0xB5C4B18B12A2AF23(&uVar3, iParam2), 128);
			return 4;
		case 1:
		case 2:
			switch (iVar2)
			{
				case 0:
				default:
					return 1;
					return 2;
				case 1:
					return 3;
				case 2:
					uVar10 = func_193(iParam2);
					iVar1 = NETWORK::_LOCAL_PLAYER_PEDSHOT_TEXTURE_DOWNLOAD_REQUEST(iParam1, uVar10);
					if (iVar1 == -1)
					{
						return 3;
					}
					else if (iVar1 == 0)
					{
						func_194(iParam1, iParam2, 0);
						return 1;
					}
					func_195(iParam1, iParam2, iVar1);
					func_194(iParam1, iParam2, 3);
					break;
				case 3:
					iVar1 = func_196(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_194(iParam1, iParam2, 0);
						return 1;
					}
					iVar11 = NETWORK::_GET_STATUS_OF_TEXTURE_DOWNLOAD(iVar1);
					switch (iVar11)
					{
						case 0:
							func_194(iParam1, iParam2, 4);
							return 3;
						case 1:
							return 3;
						case 2:
							func_194(iParam1, iParam2, 0);
							return 1;
						default:
							break;
					}
					break;
				case 4:
					iVar1 = func_196(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_194(iParam1, iParam2, 0);
						return 1;
					}
					sVar12 = NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1);
					if (MISC::_0x375F5870A7B8BEC1(sVar12))
					{
						return 3;
					}
					func_194(iParam1, iParam2, 5);
					break;
				case 5:
					iVar1 = func_196(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_194(iParam1, iParam2, 0);
						return 1;
					}
					StringCopy(sParam0, NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1), 128);
					return 4;
			}
			break;
	}
	return 3;
}

int func_146(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_265331->f_2)
	{
		if (&Global_265331->f_63755[iVar0 /*8*/] == iParam0)
		{
			return iVar0;
		}
		if ((Global_265331->f_4[iVar0 /*51*/])->f_28 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_147(int iParam0, var uParam1)
{
	struct<2> Var0;

	if (func_197(iParam0, uParam1, &Var0))
	{
		return Var0.f_1;
	}
	return -1;
}

int func_148(int iParam0)
{
	switch (iParam0)
	{
		case 1100375982:
			return 1637396385;
		case 734354744:
			return -750821175;
		case -8716208:
			return 863859481;
		case joaat("joe"):
			return -1564456688;
		case -705903163:
			return -43444905;
		case -190306145:
			return 878149797;
		case -1211851008:
			return -1972063755;
		case 842749101:
			return 1140320446;
		case -384872762:
			return -928778254;
		case 220113328:
			return -291799454;
		case -920491224:
			return 575720194;
		case 539824333:
			return 1886703229;
		case 1309348282:
			return -1891887312;
		case -701311458:
			return -1521318110;
		case 2048329431:
			return 1231714993;
		case -1601260627:
			return -197170169;
		case joaat("alden"):
			return -1157925372;
		case -604384854:
			return -853455962;
		case -399874304:
			return -1060127263;
		case -743855838:
			return -1490734701;
		case 1782409743:
			return 1685495859;
		case -1801643148:
			return -583455445;
		case -936554981:
			return -567552001;
		case 1693634754:
			return -950321673;
		case 1445116843:
			return 664333876;
		case -1616419296:
			return 515385649;
		case -587679385:
			return 391853669;
		case 279467723:
			return -1520322625;
		case 1301079447:
			return 464168739;
		case 314334361:
			return 1683882639;
		case 92524177:
			return -95879657;
		case 1346815252:
			return 1757204629;
		case -667711246:
			return 2060758004;
		case 2132950130:
			return -177810373;
		case 1766283257:
			return 1442898590;
		case -408236271:
			return 1174971643;
		default:
			break;
	}
	return 0;
}

struct<2> func_149(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	return Var0;
}

int func_150(var uParam0, var uParam1)
{
	var uVar0;

	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (!STATS::STAT_ID_GET_BOOL(&uParam0, &uVar0))
	{
		return 0;
	}
	return uVar0;
}

int func_151(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("secondary"):
			return 2;
		case joaat("primary"):
			return 1;
		case joaat("none"):
			return 0;
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

void func_152(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 != 0)
	{
		iVar0 = iParam0;
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939231->f_1433.f_54.f_101, func_198(iVar0));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_1433.f_54.f_100, 1);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_1433.f_54.f_100, 0);
	}
	if (iParam1 != 0)
	{
		iVar0 = iParam1;
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939231->f_1433.f_54.f_98, func_198(iVar0));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_1433.f_54.f_97, 1);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_1433.f_54.f_97, 0);
	}
}

bool func_153(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_154(int iParam0)
{
	Global_265331->f_124314 = iParam0;
}

int func_155(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_156(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_39.f_3434[iVar1]), iVar2);
}

void func_157(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_158(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_159(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 4:
			return 5;
		case 84:
			return 6;
		case 45:
			return 0;
		case 104:
			return 2;
		case 63:
			return 4;
		case 76:
			return 1;
		case 9:
			return 3;
		case 22:
			return 7;
		case 39:
			return 8;
		default:
			break;
	}
	return -1;
}

int func_160(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_199(vParam0, 0f, 0f, 0, 2);
	return func_199(vParam0, ((*Global_1892728)[iVar0 /*3*/])->f_1, ((*Global_1892728)[iVar0 /*3*/])->f_2, Global_1892728[iVar0 /*3*/], 4);
}

int func_161(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = Global_1275573->f_10;
	}
	return Global_262996[iParam0 /*70*/];
}

bool func_162(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

int func_163(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1369928329;
		case 1:
			return -1804958860;
		case 2:
			return 1412564789;
		case 3:
			return 2090637823;
		case 4:
			return -1740003396;
		case 5:
			return -2140118397;
		case 6:
			return -141490041;
		case 7:
			return 112216621;
		case 8:
			return -1767965617;
		case 9:
			return 81153145;
		case 10:
			return 485273815;
		case 11:
			return 188100165;
		case 12:
			return -840966484;
		case 13:
			return 812079913;
		case 14:
			return 839886685;
		case 15:
			return 1749906378;
		case 16:
			return 1485493317;
		case 17:
			return -1956038143;
		case 18:
			return -1013295952;
		case 19:
			return 928731509;
		default:
			break;
	}
	return 0;
}

int func_164(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 11;
		case 2:
			return 12;
		case 3:
			return 13;
		default:
			break;
	}
	return -1;
}

int func_165(int iParam0)
{
	int iVar0;

	if (iParam0 == 10)
	{
		return 8;
	}
	if (iParam0 == 11)
	{
		return 4;
	}
	if (iParam0 == 12)
	{
		return 16;
	}
	if (iParam0 == 13)
	{
		return 32;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (&Global_265331->f_117321.f_6725[iVar0] == &Global_265308->f_1[iParam0])
		{
			return (Global_265331->f_117321.f_483[iVar0 /*194*/])->f_193;
		}
		iVar0++;
	}
	return -1;
}

int func_166(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -784189810;
		case 1:
			return 1579717899;
		case 2:
			return -63669280;
		case 3:
			return 851921060;
		case 4:
			return 2028478397;
		case 5:
			return 1457860192;
		case 6:
			return -79999383;
		case 7:
			return -1957416901;
		case 8:
			return 218185167;
		case 9:
			return 1744858848;
		case 10:
			return -1185533313;
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

int func_167(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1816768801;
		case 1:
			return -533426613;
		case 2:
			return -1918441640;
		case 3:
			return -457802746;
		case 4:
			return 1788958412;
		case 5:
			return 1153715636;
		case 6:
			return 424482930;
		case 7:
			return 1272390114;
		case 8:
			return -1581094459;
		case 9:
			return 1842544025;
		case 10:
			return -559809431;
		case 11:
			return 1175500245;
		case 12:
			return -1437925683;
		case 13:
			return -548018579;
		case 14:
			return -632356431;
		case 15:
			return 10577687;
		case 16:
			return -222655798;
		case 17:
			return -725256130;
		case 18:
			return 1943481570;
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

int func_168()
{
	return Global_1099294->f_340;
}

bool func_169(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam0 == 3)
	{
		return iParam1 != -1;
	}
	return iParam1 != 0;
}

bool func_170()
{
	return Global_1572887->f_106.f_75 != 1;
}

int func_171(int iParam0)
{
	var uVar0;

	uVar0 = GANG::_0x901E0DC25080C8B9(iParam0);
	if (GANG::_0x0F99F6436528A089(uVar0) && !GANG::_0x424B17A7DC5C90BC(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_172(var uParam0)
{
	MISC::_COPY_MEMORY(&(Global_1572887->f_106.f_17), uParam0, 57);
}

void func_173(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	Global_1572887->f_106 = iParam0;
	Global_1572887->f_106.f_9 = iParam1;
	Global_1572887->f_106.f_10 = iParam2;
	if (bParam3)
	{
		func_200();
	}
}

void func_174(struct<2> Param0, bool bParam2)
{
	Global_1572887->f_106.f_11 = { Param0 };
	if (bParam2)
	{
		func_200();
	}
}

void func_175(int iParam0)
{
	Global_1572887->f_106.f_15 = iParam0;
}

void func_176(int iParam0)
{
	Global_1572887->f_106.f_13 = iParam0;
}

void func_177(int iParam0, bool bParam1)
{
	Global_1572887->f_106.f_74 = iParam0;
	if (bParam1)
	{
		func_200();
	}
}

int func_178()
{
	if (func_187() != 0)
	{
		return 0;
	}
	if (Global_1572887->f_106.f_9 >= 5 && Global_1572887->f_106.f_9 <= 8)
	{
		return 0;
	}
	return 1;
}

int func_179(struct<2> Param0)
{
	if (func_201())
	{
		return 0;
	}
	if (!func_67(Param0))
	{
		return 0;
	}
	*Global_1051163 = { Param0 };
	return 1;
}

void func_180()
{
	((*Global_1055966)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*436*/])->f_15.f_9 = 0;
}

void func_181(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<8> Var3;

	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_135);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_136);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_137);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_138);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_139);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_140);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_141);
	iVar0 = func_202(Param0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = func_203(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	uVar2 = func_204(iVar0);
	Var3 = { func_205(iVar1, uVar2) };
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887->f_106.f_133, MISC::_CREATE_VAR_STRING(2, &Var3));
}

bool func_182(int iParam0)
{
	return (Global_1572887->f_106.f_15 && iParam0) != 0;
}

int func_183(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_206();
	}
	if (!func_207(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_208(iParam0);
	Global_1896726->f_386 = 1;
	Global_1896726->f_387 = bParam1;
	return 1;
}

int func_184(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (iParam1 == 0)
	{
		return 0;
	}
	if (uParam0->f_16 == iParam1)
	{
		func_209(uParam0, 4194304);
		return 1;
	}
	iVar0 = func_146(iParam1);
	if (iVar0 == -1)
	{
		return 0;
	}
	MemCopy(&(uParam0->f_27), {*(Global_265331->f_4[iVar0 /*51*/])}, 3);
	uParam0->f_37 = { (Global_265331->f_4[iVar0 /*51*/])->f_7 };
	uParam0->f_45 = (Global_265331->f_4[iVar0 /*51*/])->f_22;
	uParam0->f_46 = (Global_265331->f_4[iVar0 /*51*/])->f_30;
	uParam0->f_16 = (Global_265331->f_4[iVar0 /*51*/])->f_28;
	uParam0->f_17 = &Global_265331->f_63755[iVar0 /*8*/];
	uParam0->f_61 = { (Global_265331->f_4[iVar0 /*51*/])->f_24 };
	uParam0->f_30 = (Global_265331->f_4[iVar0 /*51*/])->f_34;
	uParam0->f_32 = (Global_265331->f_4[iVar0 /*51*/])->f_32;
	uParam0->f_33 = (Global_265331->f_4[iVar0 /*51*/])->f_33;
	uParam0->f_21 = 1;
	uParam0->f_21.f_1 = 0;
	uParam0->f_21.f_4 = iParam4;
	uParam0->f_21.f_2 = (Global_265331->f_4[iVar0 /*51*/])->f_29;
	uParam0->f_21.f_3 = (Global_265331->f_4[iVar0 /*51*/])->f_31;
	uParam0->f_26 = (Global_265331->f_4[iVar0 /*51*/])->f_31;
	uParam0->f_34 = (Global_265331->f_4[iVar0 /*51*/])->f_40;
	uParam0->f_1 = { (Global_265331->f_4[iVar0 /*51*/])->f_15 };
	MemCopy(&(uParam0->f_8), {(Global_265331->f_4[iVar0 /*51*/])->f_4}, 8);
	if (iParam2 != -1)
	{
		if ((uParam0->f_21.f_2 == -933924539 && func_210(iParam2)) || (uParam0->f_21.f_2 == 395262693 && func_211(iParam2)))
		{
			uParam0->f_21.f_3 = iParam2;
			uParam0->f_26 = iParam2;
		}
	}
	if (iParam3 > 0)
	{
		uParam0->f_30 = iParam3;
	}
	iVar1 = func_212(&(Global_265331->f_63755[iVar0 /*8*/]));
	vVar2 = { func_213(uParam0->f_17) };
	if (iVar1 != -1)
	{
		uParam0->f_53 = { func_214(iVar1) };
	}
	else if (func_215(uParam0->f_17))
	{
		uParam0->f_53 = { func_217(func_216(uParam0->f_17)) };
	}
	else if (vVar2.y != -1 && vVar2.x != -1)
	{
		uParam0->f_53 = { func_218(&vVar2) };
	}
	else
	{
		uParam0->f_53 = { func_219(uParam0->f_16) };
		if (!func_67(uParam0->f_53))
		{
			uParam0->f_53 = { func_221(func_220(uParam0->f_21.f_2)) };
		}
	}
	func_222(uParam0);
	func_209(uParam0, 4194304);
	return 1;
}

char* func_185(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_144(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

char* func_186(int iParam0)
{
	int iVar0;

	iVar0 = func_223(iParam0);
	if (iVar0 == &Global_265308->f_1[0])
	{
		return "NM_BUCKET_RACE";
	}
	if (iVar0 == &Global_265308->f_1[1])
	{
		return "NET_PLAYLIST_FEATURED_SERIES_001";
	}
	if (iVar0 == &Global_265308->f_1[5])
	{
		return "NET_PLAYLIST_SPECIAL_SERIES_1";
	}
	if (iVar0 == &Global_265308->f_1[6])
	{
		return "NET_PLAYLIST_SPECIAL_SERIES_2";
	}
	if (iVar0 == &Global_265308->f_1[7])
	{
		return "NET_PLAYLIST_ELIMINATION_SMALL";
	}
	if (iVar0 == &Global_265308->f_1[8])
	{
		return "NET_PLAYLIST_ELIMINATION_MEDIUM";
	}
	if (iVar0 == &Global_265308->f_1[9])
	{
		return "NET_PLAYLIST_ELIMINATION_LARGE";
	}
	if (iVar0 == &Global_265308->f_1[2])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_SMALL";
	}
	if (iVar0 == &Global_265308->f_1[3])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_MEDIUM";
	}
	if (iVar0 == &Global_265308->f_1[4])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_LARGE";
	}
	if (iVar0 == &Global_265308->f_1[15])
	{
		return "NM_BUCKET_ORBIS_SERIES_1";
	}
	if (iVar0 == &Global_265308->f_1[16])
	{
		return "NM_BUCKET_ORBIS_SERIES_2";
	}
	if (iVar0 == &Global_265308->f_1[17])
	{
		return "NM_BUCKET_ORBIS_SERIES_3";
	}
	if (iVar0 == &Global_265308->f_1[19])
	{
		return "NET_PLAYLIST_CAPTURE";
	}
	if (iVar0 == &Global_265308->f_1[18])
	{
		return "NET_PLAYLIST_SHOOTOUT";
	}
	return "Unmapped bucket hash";
}

int func_187()
{
	return Global_1572887->f_106;
}

char* func_188(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "NM_BUCKET_EIGHT_PLAYER";
				case 1:
					return "NM_BUCKET_RACE";
				case 2:
					return "NM_BUCKET_TWELVE_PLAYER";
				case 3:
					return "NM_BUCKET_ADVERSARIAL";
				case 6:
					return "NM_BUCKET_NOMINATED_SERIES";
				case 5:
					return "NM_BUCKET_NOMINATED_SERIES_SMALL";
				case 7:
					return "NM_BUCKET_NOMINATED_SERIES_MEDIUM";
				case 8:
					return "NM_BUCKET_NOMINATED_SERIES_LARGE";
				case 23:
					return "NM_BUCKET_MISSION_2_PLAYER";
				case 24:
					return "NM_BUCKET_FOUR_PLAYER";
				case 25:
					return "NM_BUCKET_EIGHT_PLAYER";
				case 26:
					return "NM_BUCKET_MISSION_10_PLAYER";
				case 27:
					return "NM_BUCKET_TWELVE_PLAYER";
				case 28:
					return "NM_BUCKET_ADVERSARIAL";
				default:
					break;
			}
			break;
	}
	return "Invalid Net Matchmaking Bucket";
}

int func_189(int iParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = false;
	if (iParam0 == 255)
	{
		bVar0 = true;
		iParam0 = func_224();
	}
	else if (iParam0 == func_224())
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam1)
		{
			return Global_1275573->f_14;
		}
	}
	if (!bVar0)
	{
		if (!&Global_1275573->f_22[iParam0])
		{
			return 0;
		}
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(&(Global_1275573->f_154[iParam0])))
		{
			return 0;
		}
	}
	if (GANG::_0x149A2751AB66AC02(GANG::_0x901E0DC25080C8B9(&(Global_1275573->f_154[iParam0]))) <= 1)
	{
		return 0;
	}
	return 1;
}

var func_190(char* sParam0)
{
	char* sVar0;
	var uVar1;

	sVar0 = MISC::_CREATE_VAR_STRING(2, sParam0);
	uVar1 = func_225(sVar0, -2, 0, 0, 0, 1);
	return uVar1;
}

void func_191(int iParam0)
{
	Global_1572887->f_106.f_75 = iParam0;
}

int func_192(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	if (iParam1 <= -1)
	{
		return -1;
	}
	return &((Global_1132968->f_5808[iParam0 /*10*/])->f_5[iParam1]);
}

int func_193(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		default:
			return 2;
			return 2;
		case 2:
			return 3;
		}

void func_194(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 == -1)
	{
		return;
	}
	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	(Global_1132968->f_5808[iParam0 /*10*/])->f_5[iParam1] = iParam2;
}

void func_195(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	(*Global_1132968->f_5808[iParam0 /*10*/])[iParam1] = iParam2;
}

int func_196(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 <= -1)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 0;
	}
	return Global_1132968->f_5808[iParam0 /*10*/][iParam1];
}

int func_197(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_226(iParam0, uParam1, &uVar0))
	{
		func_227(&uVar0, iParam0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_198(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1531758713;
		case 2:
			return 1111531686;
		case 3:
			return 2020859843;
		case 4:
			return -1620727213;
		case 5:
			return 2039881012;
		case 6:
			return -1429661529;
		case 7:
			return -540128588;
		case 8:
			return -1224238785;
		case 9:
			return 1485653341;
		case 10:
			return 1437644330;
		case 11:
			return 1511892115;
		case 12:
			return 876516058;
		case 13:
			return -1676572483;
		case 14:
			return 1995067205;
		case 15:
			return 1155770894;
		default:
			break;
	}
	return 0;
}

int func_199(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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

void func_200()
{
	int iVar0;

	if (func_1() == -1)
	{
		return;
	}
	iVar0 = &Global_1275573;
	if (func_153(Global_1572887->f_7, 1))
	{
		func_228(&(((*Global_1055966)[iVar0 /*436*/])->f_153.f_10), 4);
	}
	else
	{
		func_229(&(((*Global_1055966)[iVar0 /*436*/])->f_153.f_10), 4);
	}
	((*Global_1055966)[iVar0 /*436*/])->f_153 = Global_1572887->f_106;
	((*Global_1055966)[iVar0 /*436*/])->f_153.f_1 = Global_1572887->f_106.f_9;
	((*Global_1055966)[iVar0 /*436*/])->f_153.f_2 = Global_1572887->f_106.f_10;
	((*Global_1055966)[iVar0 /*436*/])->f_153.f_3 = { Global_1572887->f_106.f_11 };
	((*Global_1055966)[iVar0 /*436*/])->f_153.f_8 = Global_1572887->f_106.f_13;
	((*Global_1055966)[iVar0 /*436*/])->f_153.f_5 = { Global_1572887->f_342 };
	((*Global_1055966)[iVar0 /*436*/])->f_153.f_9 = Global_1572887->f_106.f_74;
	if (func_182(1024))
	{
		func_228(&(((*Global_1055966)[iVar0 /*436*/])->f_153.f_10), 2);
	}
	else
	{
		func_229(&(((*Global_1055966)[iVar0 /*436*/])->f_153.f_10), 2);
	}
}

bool func_201()
{
	return func_67(*Global_1051163);
}

int func_202(struct<2> Param0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_230((Global_1185132->f_66[iVar0 /*20*/])->f_7, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_203(int iParam0)
{
	return (Global_1185132->f_66[iParam0 /*20*/])->f_3;
}

var func_204(int iParam0)
{
	return (Global_1184573->f_1[iParam0 /*26*/])->f_3;
}

struct<8> func_205(int iParam0, var uParam1)
{
	struct<8> Var0;
	struct<5> Var8;

	if (((func_231(&Var8, iParam0) && func_232(&Var8)) && func_233(&Var8, uParam1)) && func_234(&Var8))
	{
		func_235(Var8, 37194763, &Var0, 1);
	}
	return Var0;
}

void func_206()
{
	if (!UIAPPS::_IS_ANY_APP_RUNNING())
	{
		return;
	}
	UIAPPS::_CLOSE_ALL_APPS();
}

int func_207(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = func_237(bParam2, func_236(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return 0;
	}
	return 1;
}

void func_208(int iParam0)
{
	Global_1896726->f_390 = iParam0;
}

void func_209(var uParam0, int iParam1)
{
	uParam0->f_20 = (uParam0->f_20 || iParam1);
}

int func_210(int iParam0)
{
	if (func_238(iParam0, 0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_211(int iParam0)
{
	if (func_239(iParam0, 0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_212(int iParam0)
{
	int iVar0;

	if (func_1() == -1)
	{
		return -1;
	}
	iVar0 = 9;
	while (iVar0 <= 25)
	{
		if (func_240(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_213(int iParam0)
{
	struct<2> Var0;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;

	vVar5 = -1;
	vVar5.f_1 = -1;
	vVar5.f_2 = -1;
	if (!func_241(&Var0))
	{
		return vVar5;
	}
	if (!func_242(&Var0, 13, 0, 0, 1))
	{
		return vVar5;
	}
	if (!func_242(&Var0, 17, 0, 0, 1))
	{
		return vVar5;
	}
	uVar12 = Var0.f_1;
	iVar9 = func_243(&Var0, 0);
	iVar8 = 0;
	while (iVar8 <= (iVar9 - 1))
	{
		Var0.f_1 = uVar12;
		if (!func_242(&Var0, 19, iVar8, 0, 1))
		{
		}
		else if (!func_242(&Var0, 20, 0, 0, 1))
		{
		}
		else
		{
			iVar10 = func_243(&Var0, 1);
			if (!func_242(&Var0, 22, iParam0, 0, 0))
			{
			}
			else
			{
				iVar11 = DATAFILE::_0xE13634BB6BAF0734(Var0, Var0.f_1);
				vVar5.x = iVar8;
				vVar5.f_1 = ((iVar10 - iVar11) - 1);
			}
			else
			{
				iVar8++;
			}
			return vVar5;
		}
	}

struct<2> func_214(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 100)
	{
		return func_142();
	}
	return ((*Global_1835011)[iParam0 /*72*/])->f_1;
}

bool func_215(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return func_216(iParam0) != -1;
}

int func_216(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		iVar1 = iVar0;
		if (iParam0 == func_244(iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

struct<2> func_217(int iParam0)
{
	return func_245(iParam0);
}

struct<2> func_218(int iParam0)
{
	var uVar0;
	int iVar5;

	if (!func_241(&uVar0))
	{
		return func_142();
	}
	if (!func_242(&uVar0, 13, 0, 0, 1))
	{
		return func_142();
	}
	if (!func_242(&uVar0, 17, 0, 0, 1))
	{
		return func_142();
	}
	if (!func_242(&uVar0, 19, *iParam0, 0, 1))
	{
		return func_142();
	}
	if (!func_242(&uVar0, 20, 0, 0, 1))
	{
		return func_142();
	}
	if (!func_242(&uVar0, 23, iParam0->f_1, 0, 1))
	{
		return func_142();
	}
	iVar5 = func_246(&uVar0);
	return func_221(iVar5);
}

struct<2> func_219(int iParam0)
{
	var uVar0;
	struct<5> Var5;

	if (iParam0 == 0)
	{
		return func_142();
	}
	if (!func_247(&uVar0, 7, iParam0, 76966722))
	{
		return func_142();
	}
	func_248(7, &uVar0, &Var5);
	if (Var5.f_4 != 7)
	{
		return func_142();
	}
	return func_249(Var5.f_3, Var5.f_4);
}

int func_220(int iParam0)
{
	switch (iParam0)
	{
		case -504335712:
			return 1005649839 /* GXTEntry: "VS Mission" */;
		case 395262693:
			return -47596571 /* GXTEntry: "Deathmatch" */;
		case -933924539:
			return 921725912 /* GXTEntry: "Race" */;
		default:
			break;
	}
	return 0;
}

struct<2> func_221(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_249(iParam0, 2) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_249(iParam0, 7) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_249(iParam0, 5) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_249(iParam0, 6) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_249(iParam0, 8) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_249(iParam0, 3) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_249(iParam0, 4) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	return func_142();
}

void func_222(var uParam0)
{
	uParam0->f_20 = 0;
}

int func_223(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (&Global_265331->f_117321.f_6758[iVar0] == iParam0)
		{
			return &(Global_265331->f_117321.f_6725[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

int func_224()
{
	return Global_1099294->f_339;
}

var func_225(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	uVar17 = _NAMESPACE71::_SHOW_SIMPLE_RIGHT_TEXT(&Var0, &Var13, iParam5);
	return uVar17;
}

bool func_226(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_250(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_227(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	*uParam2 = iParam1;
	uParam0->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam0);
	uParam0->f_2 = -2140901307;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, uParam0))
	{
		uParam2->f_2 = uVar0;
	}
	uParam0->f_2 = -2140901307;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_11), uParam0);
	uParam0->f_2 = 1292053410;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_19), uParam0);
	uParam0->f_2 = 1234058424;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_3), uParam0);
}

void func_228(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_229(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_230(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_231(var uParam0, int iParam1)
{
	if (!DATAFILE::_0x7907969497EA92F5(Global_1185132->f_443))
	{
		return false;
	}
	*uParam0 = Global_1185132->f_443;
	uParam0->f_2 = -1093317127;
	uParam0->f_3 = func_251(iParam1);
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_232(var uParam0)
{
	uParam0->f_2 = -310067910;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_233(var uParam0, var uParam1)
{
	uParam0->f_2 = -1739269194;
	uParam0->f_3 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_234(var uParam0)
{
	uParam0->f_2 = 1701407264;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_235(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_STRING(uParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_236()
{
	return Global_1915180->f_20141;
}

int func_237(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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
	if (func_252())
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

int func_238(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1957416901:
			return 7;
		case -1185533313:
			return 10;
		case -784189810:
			return 0;
		case -79999383:
			return 6;
		case -63669280:
			return 2;
		case 218185167:
			return 8;
		case 851921060:
			return 3;
		case 1457860192:
			return 5;
		case 1579717899:
			return 1;
		case 1744858848:
			return 9;
		case 2028478397:
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

int func_239(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1918441640:
			return 2;
		case -1581094459:
			return 8;
		case -1437925683:
			return 12;
		case -725256130:
			return 17;
		case -632356431:
			return 14;
		case -559809431:
			return 10;
		case -548018579:
			return 13;
		case -533426613:
			return 1;
		case -457802746:
			return 3;
		case -222655798:
			return 16;
		case 10577687:
			return 15;
		case 424482930:
			return 6;
		case 1153715636:
			return 5;
		case 1175500245:
			return 11;
		case 1272390114:
			return 7;
		case 1788958412:
			return 4;
		case 1816768801:
			return 0;
		case 1842544025:
			return 9;
		case 1943481570:
			return 18;
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
	if (!func_69(iParam0))
	{
		return 0;
	}
	if (func_1() == -1)
	{
		return 0;
	}
	return ((*Global_1835011)[iParam0 /*72*/])->f_51;
}

int func_241(var uParam0)
{
	var uVar0;
	var uVar1;

	uVar0 = (Global_1070356->f_26934[29 /*4*/])->f_3;
	if (!DATAFILE::_0x7907969497EA92F5(uVar0))
	{
		return 0;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(uVar0))
	{
		return 0;
	}
	MISC::_COPY_MEMORY(uParam0, &uVar1, 5);
	*uParam0 = uVar0;
	return 1;
}

int func_242(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;

	uVar0 = uParam0->f_1;
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = iParam3;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		uParam0->f_1 = uVar0;
		return 0;
	}
	return 1;
}

int func_243(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(uParam0);
}

int func_244(int iParam0)
{
	return ((*Global_1275761)[iParam0 /*37*/])->f_9;
}

struct<2> func_245(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	MISC::_COPY_MEMORY(&Var0, &(((*Global_1275761)[iParam0 /*37*/])->f_6), 2);
	return Var0;
}

int func_246(var uParam0)
{
	return func_253(uParam0, 59, 1);
}

bool func_247(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*uParam0 = Global_1132968->f_7;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = func_250(iParam1);
	uParam0->f_4 = iParam2;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

void func_248(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_254(iParam0, uParam2->f_1);
	uParam1->f_2 = -2140901307;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_2 = iVar0;
	uParam1->f_2 = -2140901307;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_9), uParam1);
	uParam1->f_2 = 1292053410;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_17), uParam1);
	if (*uParam2 == 3)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_255(iVar0);
		}
	}
	else if (*uParam2 == 4)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = iVar0;
		}
	}
	else if (*uParam2 == 5)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_256(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_257(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_258(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_259(iVar0);
	uParam1->f_2 = 1060782978;
	DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_8), uParam1);
	uParam1->f_2 = 162343104;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	uParam1->f_2 = -733480474;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_25), uParam1);
	uParam1->f_2 = 492825771;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_26), uParam1);
	uParam1->f_2 = -839279581;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_27), uParam1);
	uParam1->f_2 = -640941103;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_28), uParam1);
	iVar0 = 0;
	uParam1->f_2 = -2025968302;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_29 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1829781569;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_30 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1999176766;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_31 = iVar0;
}

struct<2> func_249(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_260(iParam0, &(Global_1070356->f_634), func_121(iParam1));
			break;
		case 3:
			Var0.f_1 = func_260(iParam0, &(Global_1070356->f_634.f_602), func_121(iParam1));
			break;
		case 4:
			Var0.f_1 = func_260(iParam0, &(Global_1070356->f_634.f_2104), func_121(iParam1));
			break;
		case 5:
			Var0.f_1 = func_260(iParam0, &(Global_1070356->f_634.f_12606), func_121(iParam1));
			break;
		case 6:
			Var0.f_1 = func_260(iParam0, &(Global_1070356->f_634.f_12908), func_121(iParam1));
			break;
		case 7:
			Var0.f_1 = func_260(iParam0, &(Global_1070356->f_634.f_15910), func_121(iParam1));
			break;
		case 8:
			Var0.f_1 = func_260(iParam0, &(Global_1070356->f_634.f_15981), func_121(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_142();
	}
	return Var0;
}

int func_250(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("challenge");
			break;
		case -3:
			iVar0 = 1300413597;
			break;
		case 1:
			iVar0 = -1841318328;
			break;
		case -2:
			iVar0 = joaat("gold");
			break;
		case 2:
			iVar0 = -1599460565;
			break;
		case 3:
			iVar0 = 1610555441;
			break;
		case 4:
			iVar0 = 2080488347;
			break;
		case 5:
			iVar0 = 1107336882;
			break;
		case 6:
			iVar0 = -1307562954;
			break;
		case 7:
			iVar0 = 1198585370;
			break;
		case 8:
			iVar0 = 1753821005;
			break;
		case 9:
			iVar0 = joaat("property");
			break;
		case 10:
			iVar0 = 1894568478;
			break;
		case 11:
			iVar0 = joaat("title");
			break;
		case 12:
			iVar0 = joaat("shop");
			break;
		case 13:
			iVar0 = 1252941330;
			break;
		case 14:
			iVar0 = -1930354636;
			break;
		case 15:
			iVar0 = 1332629624;
			break;
		case 16:
			iVar0 = 1746212499;
			break;
		case 17:
			iVar0 = 1859328971;
			break;
		case 18:
			iVar0 = 1151893103;
			break;
		case 19:
			iVar0 = -312924468;
			break;
	}
	return iVar0;
}

int func_251(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1697883736;
		case 1:
			return 1927192818;
		case 2:
			return -1363591469;
		case 3:
			return 1635448909;
		case 4:
			return -604494871;
		case 5:
			return -993281498;
		case 6:
			return -1871525158;
		case 12:
			return -596286663;
		case 13:
			return 923956646;
		case 14:
			return 1459450644;
		case 15:
			return -2071675432;
		case 7:
			return -552339597;
		case 9:
			return 2144670272;
		case 8:
			return 996459079;
		case 10:
			return 1996177174;
		case 11:
			return -1702168032;
		default:
			break;
	}
	return 0;
}

bool func_252()
{
	return (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_26285) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_26285, 0));
}

var func_253(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	uParam0->f_2 = iParam1;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, uParam0))
	{
	}
	return uVar0;
}

int func_254(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_261(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_255(int iParam0)
{
	switch (iParam0)
	{
		case 1336837986:
			return 0;
		case 2124631622:
			return 1;
		case -66250361:
			return 2;
		case 1443764480:
			return 3;
		case -668110249:
			return 4;
		case -1381389849:
			return 5;
		case 536699577:
			return 6;
		case 541147288:
			return 7;
		case 377122918:
			return 8;
		case 1158195437:
			return 9;
		case -1261475678:
			return 10;
		case -621956193:
			return 11;
		case 1081776803:
			return 12;
		case -218697175:
			return 13;
		case -867762478:
			return 14;
		case 602097925:
			return 15;
		case 1724417419:
			return 16;
		case -728200180:
			return 17;
		case 1404415665:
			return 18;
		case 339077182:
			return 20;
		case 650120418:
			return 21;
		case 1695693301:
			return 28;
		case -1809176396:
			return 19;
		case 349772825:
			return 22;
		case 1657045547:
			return 23;
		case -590482787:
			return 24;
		case -1711308722:
			return 25;
		case -409129282:
			return 26;
		case -1790985606:
			return 27;
		default:
			break;
	}
	return -1;
}

int func_256(int iParam0)
{
	switch (iParam0)
	{
		case -747096482:
			return 0;
		case 390152599:
			return 1;
		case 348001928:
			return 2;
		case 687137831:
			return 3;
		case 1221273613:
			return 4;
		case -669486032:
			return 5;
		case -1044132584:
			return 6;
		default:
			break;
	}
	return -1;
}

int func_257(int iParam0)
{
	switch (iParam0)
	{
		case 1697883736:
			return 0;
		case 1927192818:
			return 1;
		case -1363591469:
			return 2;
		case 1635448909:
			return 3;
		case -604494871:
			return 4;
		case -993281498:
			return 5;
		case -1871525158:
			return 6;
		case -596286663:
			return 12;
		case 923956646:
			return 13;
		case 1459450644:
			return 14;
		case -2071675432:
			return 15;
		case -552339597:
			return 7;
		case 2144670272:
			return 9;
		case 996459079:
			return 8;
		case 1996177174:
			return 10;
		case -1702168032:
			return 11;
		default:
			break;
	}
	return -1;
}

int func_258(int iParam0)
{
	switch (iParam0)
	{
		case 2049341823:
			return 0;
		case 1655635003:
			return 1;
		case -435635781:
			return 2;
		case 2006131499:
			return 3;
		case -1641798436:
			return 4;
		case 352400957:
			return 5;
		case 1211286129:
			return 6;
		case 787592898:
			return 7;
		case -568832219:
			return 8;
		case -1103026985:
			return 9;
		default:
			break;
	}
	return 0;
}

int func_259(int iParam0)
{
	switch (iParam0)
	{
		case joaat("null"):
			return -1;
		case joaat("normal"):
			return 0;
		case -640677282:
			return 1;
		case -1950303839:
			return 2;
		case 1322114923:
			return 3;
		case -525004462:
			return 4;
		case 1419735597:
			return 5;
		case 1004744465:
			return 6;
		case joaat("bountyhunter"):
			return 7;
		case 1777227915:
			return 8;
		case 408825843:
			return 9;
		case joaat("hunter"):
			return 10;
		case 64621749:
			return 11;
		case -1346830927:
			return 12;
		case -218234180:
			return 13;
		case 751663875:
			return 14;
		case 1766283257:
			return 15;
		case -269943670:
			return 16;
		case 522313648:
			return 17;
		default:
			break;
	}
	return -1;
}

int func_260(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = (iParam2 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (uParam1[iVar2 /*3*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (uParam1[iVar2 /*3*/] < iParam0)
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

int func_261(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_262(iParam0, uParam1, &uVar0))
	{
		func_227(&uVar0, iParam0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

bool func_262(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_250(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

