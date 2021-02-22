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
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	struct<4> Var0;
	struct<4> Var4;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
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
						case joaat("ZONE"):
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
						case joaat("BLIP"):
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
	return Global_1572887.f_13;
}

void func_2(var uParam0)
{
	func_3(uParam0);
}

void func_3(var uParam0)
{
	struct<40> Var0;

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
		TXD::_REQUEST_STREAMED_TXD(-1859668514, false);
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
		case joaat("DISTRICT"):
			switch (*iParam0)
			{
				case -1740156697:
					uParam1->f_33 = func_19(func_18(iParam0));
					uParam1->f_37 = 1;
					break;
			}
			break;
		case joaat("TEXT_WRITTEN"):
			switch (*iParam0)
			{
				case -1740156697:
					uParam1->f_35 = func_18(iParam0);
					uParam1->f_37 = 1;
					break;
			}
			break;
		case joaat("TEXT_PRINTED"):
			switch (*iParam0)
			{
				case -1740156697:
					uParam1->f_36 = func_18(iParam0);
					uParam1->f_37 = 1;
					break;
			}
			break;
		case joaat("TOWN"):
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
		case 71:
			if (func_27(uParam0->f_25, &(uParam0->f_29)))
			{
				uParam0->f_26 = MISSIONDATA::MISSIONDATA_GET_TEXTURE_TXD(MISC::GET_HASH_KEY(&(Global_1835011[uParam0->f_29 /*72*/].f_9)));
			}
			else
			{
				uParam0->f_26 = -1640799778;
			}
			break;
		case 70:
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
		case 52:
		case 91:
			uParam0->f_28 = 0;
			return 0;
		default:
			uParam0->f_26 = func_30(uParam0->f_23, uParam0->f_25);
			break;
	}
	if (TXD::_DOES_STREAMED_TXD_EXIST(uParam0->f_26))
	{
		TXD::_REQUEST_STREAMED_TXD(uParam0->f_26, true);
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
			uParam0->f_39 = 0;
			UIAPPS::_REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("MAP"), joaat("SHOW_INFO"));
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
			case 71:
				func_35(uParam0->f_25, uParam0);
				break;
			case 70:
				func_36(uParam0->f_19, uParam0);
				break;
			case 92:
				func_37(uParam0->f_25, uParam0);
				break;
			case 93:
				func_38(uParam0->f_25, uParam0);
				break;
			case 94:
				func_39(uParam0->f_25, uParam0);
				break;
			case 95:
				func_40(uParam0->f_23, uParam0);
				break;
			default:
				func_40(uParam0->f_23, uParam0);
				break;
		}
	}
}

bool func_13(bool bParam0, bool bParam1)
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
				case joaat("ZONE"):
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
				case joaat("BLIP"):
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
				case joaat("CARD"):
					if (Var0 == -1203660660)
					{
						if (func_46(uParam1))
						{
							UIAPPS::_CLOSE_APP_BY_HASH(joaat("PAUSE_MENU"));
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
			case 91:
				func_50(uParam0->f_25, uParam0);
				break;
			case 71:
				func_51(uParam0, &uVar0);
				break;
			case 70:
				func_52(uParam0, &uVar0);
				break;
			case 96:
			case 97:
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
		case joaat("BAYOUNWA"):
			return 0;
		case joaat("BIGVALLEY"):
			return 1;
		case joaat("BLUEWATERMARSH"):
			return 2;
		case joaat("CUMBERLAND"):
			return 3;
		case joaat("GREATPLAINS"):
			return 4;
		case joaat("GRIZZLIESEAST"):
			return 6;
		case joaat("GRIZZLIESWEST"):
			return 7;
		case joaat("GUARMAD"):
			return 8;
		case joaat("HEARTLANDS"):
			return 9;
		case joaat("ROANOKE"):
			return 10;
		case joaat("SCARLETTMEADOWS"):
			return 11;
		case joaat("TALLTREES"):
			return 12;
		case joaat("GAPTOOTHRIDGE"):
			return 13;
		case joaat("RIOBRAVO"):
			return 14;
		case joaat("CHOLLASPRINGS"):
			return 15;
		case joaat("HENNIGANSSTEAD"):
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
		case joaat("ANNESBURG"):
			return 83;
		case joaat("ARMADILLO"):
			return 127;
		case joaat("BEECHERSHOPE"):
			return 39;
		case joaat("BLACKWATER"):
			return 40;
		case joaat("BRAITHWAITE"):
			return 99;
		case joaat("BUTCHER"):
			return 87;
		case joaat("CALIGA"):
			return 101;
		case joaat("CORNWALL"):
			return 70;
		case joaat("EMERALD"):
			return 74;
		case joaat("LAGRAS"):
			return 3;
		case joaat("MANZANITA"):
			return 116;
		case joaat("RHODES"):
			return 111;
		case joaat("STDENIS"):
			return 5;
		case joaat("SISKA"):
			return 33;
		case joaat("STRAWBERRY"):
			return 26;
		case joaat("TUMBLEWEED"):
			return 121;
		case joaat("VALENTINE"):
			return 81;
		case joaat("VANHORN"):
			return 98;
		case joaat("WALLACE"):
			return 37;
		case joaat("WAPITI"):
			return 60;
		case joaat("AGUASDULCESVILLA"):
		case joaat("AGUASDULCESRUINS"):
		case joaat("AGUASDULCESFARM"):
			return 62;
		case joaat("MANICATO"):
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
		case joaat("AMBARINO"):
			return joaat("REGION_AMBARINO");
		case joaat("LEMOYNE"):
			return joaat("REGION_LEMOYNE");
		case joaat("NEWAUSTIN"):
			return joaat("REGION_NEW_AUSTIN");
		case joaat("NEWHANOVER"):
			return joaat("REGION_NEW_HANOVER");
		case joaat("WESTELIZABETH"):
			return joaat("REGION_WEST_ELIZABETH");
		case joaat("LOWERWESTELIZABETH"):
			return joaat("REGION_LOWER_WEST_ELIZABETH");
		case joaat("UPPERWESTELIZABETH"):
			return joaat("REGION_UPPER_WEST_ELIZABETH");
		case joaat("GUARMA"):
			return joaat("REGION_GUARMA");
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

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DISTRICT_BAYOU_NWA");
		case 1:
			return joaat("DISTRICT_BIG_VALLEY");
		case 2:
			return joaat("DISTRICT_BLUEGILL_MARSH");
		case 3:
			return joaat("DISTRICT_CUMBERLAND_FOREST");
		case 4:
			return joaat("DISTRICT_GREAT_PLAINS");
		case 5:
			return joaat("DISTRICT_GRIZZLIES");
		case 6:
			return joaat("DISTRICT_GRIZZLIES_EAST");
		case 7:
			return joaat("DISTRICT_GRIZZLIES_WEST");
		case 8:
			return joaat("DISTRICT_GUAMA");
		case 9:
			return joaat("DISTRICT_HEARTLAND");
		case 10:
			return joaat("DISTRICT_ROANOKE_RIDGE");
		case 11:
			return joaat("DISTRICT_SCARLETT_MEADOWS");
		case 12:
			return joaat("DISTRICT_TALL_TREES");
		case 13:
			return joaat("DISTRICT_GAPTOOTH_RIDGE");
		case 14:
			return joaat("DISTRICT_RIO_BRAVO");
		case 15:
			return joaat("DISTRICT_CHOLLA_SPRINGS");
		case 16:
			return joaat("DISTRICT_HENNIGANS_STEAD");
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
	bool bVar2;

	bVar2 = MAP::SET_BLIP_FLASHES(iParam0, &uVar0, &uVar1);
	*uParam1 = uVar0;
	uParam1->f_1 = uVar1;
	return bVar2;
}

bool func_27(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1900807)
	{
		if (!func_67(Global_1900807[iVar0 /*2*/]))
		{
		}
		else if (Global_1900807[iVar0 /*2*/] == 2)
		{
			*uParam1 = func_68(Global_1900807[iVar0 /*2*/]);
			if ((func_69(*uParam1) && MAP::DOES_BLIP_EXIST(Global_1835011[*uParam1 /*72*/].f_28)) && Global_1835011[*uParam1 /*72*/].f_28 == iParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case joaat("LAGRAS"):
			return joaat("ZONE_LAGRAS");
		case joaat("STDENIS"):
			return joaat("ZONE_SAINT_DENIS");
		case joaat("STRAWBERRY"):
			return joaat("ZONE_STRAWBERRY");
		case joaat("BLACKWATER"):
			return joaat("ZONE_BLACKWATER");
		case joaat("EMERALD"):
			return joaat("ZONE_EMERALD_RANCH");
		case joaat("VALENTINE"):
			return joaat("ZONE_VALENTINE");
		case joaat("ANNESBURG"):
			return joaat("ZONE_ANNESBURG");
		case joaat("VANHORN"):
			return joaat("ZONE_VAN_HORN_TRADING_POST");
		case joaat("RHODES"):
			return joaat("ZONE_RHODES");
		case joaat("ARMADILLO"):
			return joaat("ZONE_ARMADILLO");
		case joaat("TUMBLEWEED"):
			return joaat("ZONE_TUMBLEWEED");
		default:
			break;
	}
	return -1;
}

int func_29()
{
	return joaat("ZONE_VALENTINE");
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
		case 55:
			return -1212983574;
		case 56:
			return -1805795741;
		case 57:
			return -1949319444;
		case 61:
			return -40867973;
		case 62:
			return -700024937;
		case 63:
			return -422762807;
		case 64:
			return 1307627757;
		case 65:
			return -1341878153;
		case 66:
			return 1334885374;
		case 67:
			return 1718870684;
		case 91:
			return -1640799778;
		case 92:
			return -1640799778;
		case 93:
			return -1640799778;
		case 94:
			return -1640799778;
		case 95:
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
		case 53:
		case 59:
		case 68:
		case 69:
			Var1 = { func_70(iParam1, iParam0, &uVar0) };
			iVar17 = MISC::GET_HASH_KEY(&Var1);
			break;
		case 16:
			iVar17 = MISC::GET_HASH_KEY("MAP_CARD_BLK_BOUNTY");
			break;
		case 58:
			Var1 = { func_71() };
			iVar17 = MISC::GET_HASH_KEY(&Var1);
			break;
		case 54:
		case 60:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
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
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
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
	if (!UIAPPS::_REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("MAP"), joaat("HIDE_INFO")))
	{
		uParam0->f_39 = 1;
	}
	else
	{
		uParam0->f_39 = 0;
	}
}

void func_33(var uParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (uParam0->f_38 && DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_9))
	{
		return;
	}
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

bool func_34(var uParam0)
{
	if (uParam0->f_39)
	{
		func_32(uParam0);
	}
	if (!uParam0->f_28)
	{
		return false;
	}
	switch (uParam0->f_23)
	{
		case 0:
		case 52:
		case 91:
			uParam0->f_28 = 0;
			return false;
		default:
			break;
	}
	if ((TXD::_DOES_STREAMED_TXD_EXIST(uParam0->f_26) && TXD::_HAS_STREAMED_TXD_LOADED(uParam0->f_26)) && (uParam0->f_27 == 0 || ((uParam0->f_27 != 0 && TXD::_DOES_STREAMED_TXD_EXIST(uParam0->f_27)) && TXD::_HAS_STREAMED_TXD_LOADED(uParam0->f_27))))
	{
		uParam0->f_28 = 0;
		uParam0->f_38 = 0;
		return true;
	}
	return false;
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
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", Global_1835011[uParam1->f_29 /*72*/].f_27);
	MemCopy(&cVar0, {Global_1835011[uParam1->f_29 /*72*/].f_9}, 2);
	StringConCat(&cVar0, "_DESC_PM", 16);
	if (!HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
	{
		StringCopy(&cVar0, "", 16);
	}
	iVar2 = MISC::GET_HASH_KEY(&(Global_1835011[uParam1->f_29 /*72*/].f_9));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&cVar0));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", iVar2);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", MISSIONDATA::MISSIONDATA_GET_TEXTURE_TXD(iVar2));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTX", MISSIONDATA::MISSIONDATA_GET_TEXTURE_NAME(iVar2));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 1544592360 /* GXTEntry: "Bounty:" */);
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
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", Global_1071686.f_23887.f_366[iVar1 /*272*/]);
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
	uParam0->f_37 = 1;
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
		case 71:
			uParam0->f_29 = func_89(uParam0->f_25);
			uParam0->f_26 = Var0.f_12;
			break;
		case 52:
		case 91:
			uParam0->f_28 = 0;
			uParam0->f_26 = 0;
			return 0;
		case 94:
			uParam0->f_26 = Var0.f_12;
			uParam0->f_27 = Var0.f_14;
			break;
		default:
			uParam0->f_26 = Var0.f_12;
			break;
	}
	if (!TXD::_DOES_STREAMED_TXD_EXIST(uParam0->f_26))
	{
		uParam0->f_26 = joaat("MAP_CARD_CAMP_FOOD");
	}
	if (TXD::_DOES_STREAMED_TXD_EXIST(uParam0->f_26))
	{
		TXD::_REQUEST_STREAMED_TXD(uParam0->f_26, true);
		uParam0->f_28 = 1;
		if (uParam0->f_27 != 0 && TXD::_DOES_STREAMED_TXD_EXIST(uParam0->f_27))
		{
			TXD::_REQUEST_STREAMED_TXD(uParam0->f_27, true);
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

bool func_46(var uParam0)
{
	struct<2> Var0;

	if (!func_49(func_47(uParam0->f_23), func_48(uParam0->f_25), &Var0))
	{
	}
	if (uParam0->f_23 == 92)
	{
		func_92(func_91(Var0.f_1), 6);
		return true;
	}
	return false;
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
		case joaat("BLIP_MISSION"):
			return uVar1;
		case joaat("BLIP_TOWN"):
			return uVar1;
		case joaat("BLIP_STORE"):
			return uVar1;
		case joaat("BLIP_PLAYLIST"):
			return uVar1;
		case joaat("BLIP_FAST_TRAVEL"):
			return uVar1;
		case joaat("BLIP_GFH_GIVER"):
			return uVar1;
		case joaat("BLIP_POSSE_CAMP"):
			return uVar1;
		case joaat("BLIP_POSSE_LOCAL_CAMP"):
			return uVar1;
		case joaat("BLIP_CUTSCENE"):
			return uVar1;
		default:
			break;
	}
	return uVar1;
}

bool func_49(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;

	Var0 = Global_1071686.f_28447;
	Var0.f_2 = -1629667380;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		*uParam2 = iParam0;
		uParam2->f_1 = iParam1;
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
		return true;
	}
	return false;
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
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", -486609646 /* GXTEntry: "Player Rank" */);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam1->f_9, "hint_value", func_97(iVar1));
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_player", uParam1->f_9);
}

void func_51(var uParam0, var uParam1)
{
	func_31(uParam0);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_8, "BLIP");
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "name", uParam1->f_4);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_9, "description", HUD::_GET_LABEL_TEXT_BY_HASH(-54516066 /* GXTEntry: "...downloading..." */));
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
	if (uParam0->f_23 == 96 || uParam0->f_23 == 97)
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
		case 94:
			iVar4 = func_99(uParam1->f_1);
			if (!func_100(iVar4))
			{
			}
			else
			{
				iVar6 = func_101(iVar4);
				if (iVar6 == joaat("NONE"))
				{
				}
				else
				{
					if (func_102(iVar4) != joaat("BOUNTY"))
					{
						if (func_103(iVar4) == joaat("SADIE_ADLER"))
						{
							if (!func_104(func_103(iVar4)))
							{
								iVar6 = joaat("SECONDARY");
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
									case joaat("PRIMARY"):
										iVar3 = uParam1->f_8;
										iVar1 = uParam1->f_12;
										iVar2 = uParam1->f_13;
										break;
									case joaat("SECONDARY"):
										if (func_103(iVar4) == joaat("SADIE_ADLER"))
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
									case joaat("FEMALE"):
										iVar3 = -648664377; /* GXTEntry: "A stranger has some business for you." */
										break;
									case joaat("MALE"):
										iVar3 = 1463582430; /* GXTEntry: "A stranger has some business for you." */
										break;
									default:
										break;
								}
								iVar1 = -1859668514;
								iVar2 = joaat("IMAGE");
							}
							Jump @417; //curOff = 367
							iVar0 = func_107(iVar4, joaat("GIVER_NAME"));
							if (iVar0 == 0)
							{
								iVar0 = MISC::GET_HASH_KEY("GEM_BOUNTY_BOARD");
							}
							iVar3 = uParam1->f_8;
							iVar1 = uParam1->f_12;
							iVar2 = uParam1->f_13;
							Jump @447; //curOff = 417
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
						if (uParam1->f_10 != joaat("DYNAMIC_LOCATION"))
						{
							uParam0->f_38 = 1;
							DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_10, MISC::_CREATE_VAR_STRING(0, uParam1->f_10));
						}
						if (uParam0->f_23 == 92)
						{
							iVar7 = func_91(uParam1->f_1);
							func_108(iVar7);
							uParam0->f_18 = 0;
							uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_9, "startable", 1);
							uParam0->f_17 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "startPrompt", joaat("START_MATCHMAKING"));
							func_55(uParam0);
						}
						DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_8, -1, &(uParam1->f_25), uParam0->f_9);
					}
				}
			}
			default:
				break;
	}
}

void func_55(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (uParam0->f_23 == 92 && DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_16))
	{
		bVar0 = ((Global_1572887.f_106.f_75 > 1 && Global_1572887.f_106.f_75 <= 15) && !func_109());
		bVar1 = (GANG::_0x0F99F6436528A089(Global_1296859.f_15) && !GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()));
		bVar2 = (bVar0 || bVar1);
		if (uParam0->f_18 != bVar2)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_16, !bVar2);
			if (bVar0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_17, joaat("MATCHMAKING_ACTIVE_LINK"));
			}
			else if (bVar1)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_17, 740703372);
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_17, joaat("START_MATCHMAKING"));
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
		sVar1 = func_110(Global_265377.f_4[uParam0->f_30.f_2 /*51*/].f_22, &iVar0);
		if (iVar0 != 1)
		{
			uParam0->f_30.f_1 = 0;
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_13, sVar1);
			sVar2 = MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", &(Global_265377.f_4[uParam0->f_30.f_2 /*51*/].f_7));
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
				return joaat("LAW_REGION_VALENTINE_LOCKDOWN");
			}
			else
			{
				return joaat("LAW_REGION_VALENTINE");
			}
			break;
		case 111:
			if (func_111(iParam0))
			{
				return joaat("LAW_REGION_RHODES_LOCKDOWN");
			}
			else
			{
				return joaat("LAW_REGION_RHODES");
			}
			break;
		case 5:
			if (func_1() != -1 && func_112() == joaat("LAW_REGION_SAINT_DENIS_RURAL"))
			{
				return joaat("LAW_REGION_SAINT_DENIS_RURAL");
			}
			else
			{
				return joaat("LAW_REGION_SAINT_DENIS");
			}
			break;
		case 66:
			return joaat("LAW_REGION_MANICATO");
		case 83:
			return joaat("LAW_REGION_ANNESBURG");
		case 26:
			return joaat("LAW_REGION_STRAWBERRY");
		case 40:
			if (!bParam1 || func_1() != -1)
			{
				return joaat("LAW_REGION_BLACKWATER");
			}
			if (func_113(44))
			{
				return joaat("LAW_REGION_BLACKWATER");
			}
			else
			{
				return joaat("LAW_REGION_BLACKWATER_MAINGAME");
			}
			break;
		case 98:
			if (func_1() != -1)
			{
				return joaat("LAW_REGION_ROANOKE_RIDGE");
			}
			else
			{
				return joaat("LAW_REGION_VAN_HORN");
			}
			break;
		case 70:
			return joaat("LAW_REGION_CORNWALL");
		case 74:
			return joaat("LAW_REGION_EMERALD_RANCH");
		case 99:
			return joaat("LAW_REGION_BRAITHWAITE_MANOR");
		case 101:
			return joaat("LAW_REGION_CALIGA_HALL");
		case 62:
			return joaat("LAW_REGION_AGUASDULCES");
		case 3:
			return joaat("LAW_REGION_LAGRAS");
		case 33:
			return joaat("LAW_REGION_SISIKA");
		case 87:
			if (func_1() != -1)
			{
				return joaat("LAW_REGION_ROANOKE_RIDGE");
			}
			else
			{
				return joaat("LAW_REGION_BUTCHER_CREEK");
			}
			break;
		case 37:
			return joaat("LAW_REGION_FORT_WALLACE");
		case 60:
			if (func_1() != -1)
			{
				return joaat("LAW_REGION_GRIZZLIES");
			}
			else
			{
				return joaat("LAW_REGION_WAPITI");
			}
			break;
		case 135:
			return joaat("LAW_REGION_MACFARLANES_RANCH");
		case 127:
			return joaat("LAW_REGION_ARMADILLO");
		case 131:
			return joaat("LAW_REGION_RIDGEWOOD_FARM");
		case 121:
			return joaat("LAW_REGION_TUMBLEWEED");
		case 136:
			if (func_1() != -1)
			{
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
			}
			if (!bParam1)
			{
				return joaat("LAW_REGION_THIEVES_LANDING");
			}
			if (func_113(44))
			{
				return joaat("LAW_REGION_THIEVES_LANDING");
			}
			else
			{
				return joaat("LAW_REGION_THIEVES_LANDING_MAINGAME");
			}
			break;
		case 22:
			return joaat("LAW_REGION_PRONGHORN_RANCH");
		case 39:
			return joaat("LAW_REGION_BEECHERS_HOPE");
		case 4:
		case 9:
		case 45:
		case 63:
		case 76:
		case 84:
		case 104:
			break;
		case 116:
			return joaat("LAW_REGION_MANZANITA_POST");
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
		case joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP"):
			return -1;
		case joaat("LAW_REGION_CUMBERLAND_FOREST"):
		case joaat("LAW_REGION_VALENTINE"):
		case joaat("LAW_REGION_HEARTLANDS"):
		case joaat("LAW_REGION_CORNWALL"):
		case joaat("LAW_REGION_FORT_WALLACE"):
		case joaat("LAW_REGION_VALENTINE_LOCKDOWN"):
		case joaat("LAW_REGION_BUTCHER_CREEK"):
		case joaat("LAW_REGION_ROANOKE_RIDGE"):
		case joaat("LAW_REGION_EMERALD_RANCH"):
		case joaat("LAW_REGION_VAN_HORN"):
		case joaat("LAW_REGION_ANNESBURG"):
		case joaat("LAW_REGION_WAPITI"):
			return 1;
		case joaat("LAW_REGION_BAYOU_NWA"):
		case joaat("LAW_REGION_RHODES"):
		case joaat("LAW_REGION_RHODES_LOCKDOWN"):
		case joaat("LAW_REGION_LAGRAS"):
		case joaat("LAW_REGION_CALIGA_HALL"):
		case joaat("LAW_REGION_BLUEGILL_MARSH"):
		case joaat("LAW_REGION_SISIKA"):
		case joaat("LAW_REGION_BRAITHWAITE_MANOR"):
		case joaat("LAW_REGION_SAINT_DENIS"):
		case joaat("LAW_REGION_SCARLETT_MEADOWS"):
			return 2;
		case joaat("LAW_REGION_GRIZZLIES"):
			return 0;
		case joaat("LAW_REGION_MANICATO"):
		case joaat("LAW_REGION_GUAMA"):
		case joaat("LAW_REGION_AGUASDULCES"):
			return 5;
		case joaat("LAW_REGION_MANZANITA_POST"):
		case joaat("LAW_REGION_GREAT_PLAINS_MAINGAME"):
		case joaat("LAW_REGION_MANZANITA_POST_MAINGAME"):
		case joaat("LAW_REGION_GREAT_PLAINS"):
		case joaat("LAW_REGION_TALL_TREES"):
		case joaat("LAW_REGION_STRAWBERRY"):
		case joaat("LAW_REGION_BEECHERS_HOPE"):
		case joaat("LAW_REGION_TALL_TREES_MAINGAME"):
		case joaat("LAW_REGION_PRONGHORN_RANCH"):
		case joaat("LAW_REGION_BIG_VALLEY"):
		case joaat("LAW_REGION_BLACKWATER"):
		case joaat("LAW_REGION_BLACKWATER_MAINGAME"):
			return 3;
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME"):
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS"):
		case joaat("LAW_REGION_ARMADILLO"):
		case joaat("LAW_REGION_TUMBLEWEED"):
		case joaat("LAW_REGION_MACFARLANES_RANCH"):
		case joaat("LAW_REGION_THIEVES_LANDING"):
		case joaat("LAW_REGION_THIEVES_LANDING_MAINGAME"):
		case joaat("LAW_REGION_RIDGEWOOD_FARM"):
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

bool func_62(int iParam0)
{
	if (!func_58(iParam0))
	{
		return false;
	}
	return func_116(iParam0, 2);
}

bool func_63(int iParam0)
{
	if (!func_65(iParam0))
	{
		return false;
	}
	return func_117(iParam0, 2);
}

bool func_64(int iParam0)
{
	if (!func_57(iParam0))
	{
		return false;
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

bool func_67(struct<2> Param0)
{
	if (!func_120(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_121(Param0))
	{
		return false;
	}
	return true;
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
		case 60:
			StringCopy(&Var0, "MAP_CARD_CAMP_", 128);
			StringConCat(&Var0, func_126(*uParam2), 128);
			break;
		case 54:
			StringCopy(&Var0, "MAP_CARD_CAMP_BEECHERSHOPE", 128);
			break;
		case 74:
			StringCopy(&Var0, "MAP_CARD_CAMP_FOOD", 128);
			break;
		case 75:
			StringCopy(&Var0, "MAP_CARD_CAMP_TITHING_BOX", 128);
			break;
		case 76:
			StringCopy(&Var0, "MAP_CARD_CAMP_BUTCHER", 128);
			break;
		case 77:
			StringCopy(&Var0, "MAP_CARD_CAMP_HORSE_HITCH", 128);
			break;
		case 78:
			StringCopy(&Var0, "MAP_CARD_CAMP_SUPPLY_AMMO", 128);
			break;
		case 79:
			StringCopy(&Var0, "MAP_CARD_CAMP_SUPPLY_MEDICINE", 128);
			break;
		case 80:
			StringCopy(&Var0, "MAP_CARD_CAMP_SUPPLY_PROVISIONS", 128);
			break;
		case 81:
			StringCopy(&Var0, "MAP_CARD_CAMP_MINIGAME_POKER", 128);
			break;
		case 82:
			StringCopy(&Var0, "MAP_CARD_CAMP_MINIGAME_FIVE_FINGER", 128);
			break;
		case 83:
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
		case joaat("HAI_HUNTING_02"):
			return "MAP_CARD_CAMP_HORSESHOE_HUNTING_CHARLES";
		case joaat("HAI_FISHING_01"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_FISHING_KIERAN";
		case joaat("HAI_FISHING_02"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_FISHING_JAVIER";
		case joaat("HAI_FIVE_FINGER_FILLET_01"):
			return "MAP_CARD_CAMP_HORSESHOE_FIVE_FINGER_FILLET_LENNY";
		case joaat("HAI_HUNTING_06"):
			return "MAP_CARD_CAMP_SHADYBELLE_HUNTING_PEARSON";
		case joaat("HAI_DOMINOES_01"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_DOMINOES_TILLY";
		case joaat("HAI_COACH_ROBBERY_01"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_COACH_ROBBERY_SEAN";
		case joaat("HAI_COACH_ROBBERY_02"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_COACH_ROBBERY_BILL";
		case joaat("HAI_FIVE_FINGER_FILLET_02"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_FIVE_FINGER_FILLET_MICAH";
		case joaat("HAI_BANK_ROBBERY_01"):
			return "MAP_CARD_CAMP_SHADYBELLE_BANK_ROBBERY_CHARLES";
		case joaat("HAI_COACH_ROBBERY_03"):
			return "MAP_CARD_CAMP_SHADYBELLE_COACH_ROBBERY_MICAH";
		case joaat("HAI_COACH_ROBBERY_04"):
			return "MAP_CARD_CAMP_SHADYBELLE_COACH_ROBBERY_LENNY";
		case joaat("HAI_RUSTLING_02"):
			return "MAP_CARD_CAMP_SHADYBELLE_RUSTLING_UNCLE";
		case joaat("HAI_HOME_ROBBERY_01"):
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

var func_76(int iParam0)
{
	if (!func_57(iParam0))
	{
		if (MISC::_IS_GLOBAL_BLOCK_VALID(4) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
		{
			return "FMMC_INV_ALID";
		}
		return "REGION_INV";
	}
	return func_128(Global_1887339[iParam0 /*36*/].f_23);
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
	else if (iParam0 <= 134)
	{
		return 15;
	}
	else if (iParam0 <= 138)
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
		iVar0 = joaat("GIVER_NAME");
	}
	else
	{
		iVar0 = joaat("GIVER_STRANGER_NAME");
	}
	return Global_1118808[iParam0 /*35*/].f_13[func_130(iVar0, 1)];
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
			return "SHOP_TITLE_GUS";
		case 51:
			return "BLIP_MP_ROLE_NATURALIST";
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
		case 52:
			return "BLIP_SHOP_WARDROBE";
		case 48:
			return "BLIP_MP_TRAVELLING_SALESWOMAN";
		case 49:
			return "BLIP_BUSINESS_MOONSHINE";
		case 50:
			return "BLIP_MOONSHINE_STILL";
		case 99:
			return "BLIP_MP_ROLE_MOONSHINER";
		case 53:
			return "BLIP_STABLE";
		case 54:
			return "BLIP_PROC_HOME";
		case 55:
			return "BLIP_PROC_HOME_LOCKED";
		case 56:
			return "BLIP_PROC_HOME";
		case 57:
			return "BLIP_AMBIENT_TELEGRAPH";
		case 58:
			return "BLIP_AMBIENT_COACH_TAXI";
		case 59:
			return "BLIP_AMBIENT_THEATRE";
		case 60:
			return "BLIP_REGION_CARAVAN";
		case 74:
			return "BLIP_CAMP_EAT";
		case 75:
			return "BLIP_AMBIENT_TITHING";
		case 76:
			return "BLIP_SHOP_PEARSON";
		case 77:
			return "BLIP_CAMP_HITCH";
		case 78:
			return "BLIP_SUPPLIES_AMMO";
		case 79:
			return "BLIP_SUPPLIES_HEALTH";
		case 80:
			return "BLIP_SUPPLIES_FOOD";
		case 81:
			return "BLIP_MG_POKER";
		case 82:
			return "BLIP_MG_FIVE_FINGER_FILLET";
		case 83:
			return "BLIP_MG_DOMINOES";
		case 84:
			return "BLIP_REGION_HUNTING";
		case 85:
			return "BLIP_MG_FISHING";
		case 86:
			return "BLIP_ROBBERY_COACH";
		case 87:
			return "BLIP_REGION_HUNTING";
		case 88:
			return "BLIP_ROBBERY_BANK";
		case 89:
			return "BLIP_MG_DOMINOES";
		case 90:
			return "BLIP_AMBIENT_HERD";
		case 61:
			return "BLIP_EVENT_APPLESEED";
		case 62:
			return "BLIP_EVENT_CASTOR";
		case 63:
			return "BLIP_EVENT_RAILROAD_CAMP";
		case 64:
			return "BLIP_EVENT_RIGGS_CAMP";
		case 65:
			return "BLIP_REGION_HIDEOUT";
		case 66:
			return "BLIP_PROC_HOME";
		case 67:
			return "BLIP_MG_FISHING";
		case 68:
			return "BLIP_AMBIENT_THEATRE";
		case 69:
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
		case 53:
		case 59:
		case 68:
		case 69:
			return 1;
		case 54:
		case 60:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
			return 3;
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
			return 4;
		case 58:
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
		if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Global_1887339[iVar0 /*36*/].f_4, vParam0))
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
	while (iVar0 < Global_1900807)
	{
		if (!func_67(Global_1900807[iVar0 /*2*/]))
		{
		}
		else if (Global_1900807[iVar0 /*2*/] == 2)
		{
			iVar1 = func_68(Global_1900807[iVar0 /*2*/]);
			if ((func_69(iVar1) && MAP::DOES_BLIP_EXIST(Global_1835011[iVar1 /*72*/].f_28)) && Global_1835011[iVar1 /*72*/].f_28 == iParam0)
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
		case joaat("NET_PLAYLIST_RACE_SERIES"):
			return 0;
		case joaat("NET_PLAYLIST_FEATURED_SERIES_001"):
			return 1;
		case joaat("NET_PLAYLIST_ADVERSARY_SMALL"):
			return 2;
		case joaat("NET_PLAYLIST_ADVERSARY_MEDIUM"):
			return 3;
		case joaat("NET_PLAYLIST_ADVERSARY_LARGE"):
			return 4;
		case joaat("NET_PLAYLIST_GUN_RUSH_TEAMS"):
			return 5;
		case joaat("NET_PLAYLIST_GUN_RUSH_FREE_FOR_ALL"):
			return 6;
		case joaat("NET_PLAYLIST_ELIMINATION_SMALL"):
			return 7;
		case joaat("NET_PLAYLIST_ELIMINATION_MEDIUM"):
			return 8;
		case joaat("NET_PLAYLIST_ELIMINATION_LARGE"):
			return 9;
		case joaat("NET_PLAYLIST_NOMINATED_SERIES"):
			return 10;
		case joaat("NET_PLAYLIST_NOMINATED_SERIES_SMALL"):
			return 11;
		case joaat("NET_PLAYLIST_NOMINATED_SERIES_MEDIUM"):
			return 12;
		case joaat("NET_PLAYLIST_NOMINATED_SERIES_LARGE"):
			return 13;
		case joaat("NET_PLAYLIST_PRIVATE_SERIES"):
			return 14;
		case joaat("NET_PLAYLIST_ORBIS_SERIES_1"):
			return 15;
		case joaat("NET_PLAYLIST_ORBIS_SERIES_2"):
			return 16;
		case joaat("NET_PLAYLIST_ORBIS_SERIES_3"):
			return 17;
		case joaat("NET_PLAYLIST_SHOOTOUT"):
			return 18;
		case joaat("NET_PLAYLIST_CAPTURE"):
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
		iVar0 = 0;
	}
	if (iParam0 == 18)
	{
		iVar1 = 3;
	}
	if (iParam1 == 1 || iParam1 == 2)
	{
		if (Global_1901947.f_762.f_1)
		{
			iVar1 = func_137(iParam0);
		}
	}
	iVar2 = 0;
	if (((iVar1 == 6 || iVar1 == 5) || iVar1 == 8) || iVar1 == 9)
	{
		iVar2 = 2;
	}
	func_138(iParam1);
	func_141(1, 32, iVar0, func_139(iVar1), func_140(), iVar2, -1, 0, 0, 0);
}

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case 91:
			return joaat("BLIP_PLAYER");
		case 92:
			return joaat("BLIP_PLAYLIST");
		case 93:
			return joaat("BLIP_FAST_TRAVEL");
		case 94:
			return joaat("BLIP_GFH_GIVER");
		case 95:
			return 1551310356;
		case 96:
			return joaat("BLIP_POSSE_CAMP");
		case 97:
			return joaat("BLIP_POSSE_LOCAL_CAMP");
		case 70:
			return joaat("BLIP_TOWN");
		case 100:
			return joaat("BLIP_TOWN");
		case 71:
			return joaat("BLIP_MISSION");
		case 72:
			return joaat("BLIP_CUTSCENE");
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
		case 51:
		case 53:
		case 59:
		case 68:
		case 69:
		case 98:
			return joaat("BLIP_STORE");
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
			return joaat("BLIP_MINIGAME");
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
	return func_142(MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
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
			return func_143(sParam0, NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&uParam1), iParam8);
		default:
			break;
	}
	return 3;
}

int func_97(int iParam0)
{
	if (iParam0 == 255 || iParam0 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
	{
		return NETWORK::_NETWORK_GET_RANK();
	}
	return Global_1145091[iParam0 /*35*/];
}

void func_98(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_144(iParam1);
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
	return func_145(13, uParam0);
}

bool func_100(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 36);
}

int func_101(int iParam0)
{
	return Global_1109804.f_260.f_4989[iParam0 /*13*/].f_1;
}

int func_102(int iParam0)
{
	return Global_1118808[iParam0 /*35*/].f_1;
}

int func_103(int iParam0)
{
	return Global_1118808[iParam0 /*35*/];
}

bool func_104(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_147(joaat("HAS_BEEN_INTERACTED_WITH"), func_146(iParam0)) };
	return func_148(Var0);
}

var func_105(int iParam0, int iParam1)
{
	return Global_1118808[iParam0 /*35*/].f_2[func_149(iParam1, 1) /*2*/];
}

int func_106(int iParam0, int iParam1)
{
	return Global_1118808[iParam0 /*35*/].f_2[func_149(iParam1, 1) /*2*/].f_1;
}

int func_107(int iParam0, int iParam1)
{
	return Global_1118808[iParam0 /*35*/].f_13[func_130(iParam1, 1)];
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
	func_150(Global_1901947.f_123[iVar0 /*2*/].f_1, Global_1901947.f_123[iVar0 /*2*/]);
}

bool func_109()
{
	return func_151(Global_1572887.f_7, 1);
}

char* func_110(int iParam0, var uParam1)
{
	char* sVar0;

	if (Global_265377.f_124386.f_130 > 0 && Global_265377.f_124386.f_130 != iParam0)
	{
		*uParam1 = 5;
		return "";
	}
	switch (Global_265377.f_124386)
	{
		case 0:
			if (!NETWORK::_0x2D5DC831176D0114(iParam0))
			{
				func_152(1);
			}
			else
			{
				NETWORK::_0x68103E2247887242();
				func_152(1);
			}
			break;
		case 1:
			NETWORK::UGC_REQUEST_CACHED_DESCRIPTION(iParam0);
			func_152(2);
			break;
		case 2:
			if (!NETWORK::_0xEBFA8D50ADDC54C4(iParam0))
			{
				*uParam1 = 1;
				return "";
			}
			if (NETWORK::_0x162C23CA83ED0A62(iParam0))
			{
				func_152(3);
			}
			else
			{
				func_152(0);
				*uParam1 = 3;
				return "";
			}
			break;
		case 3:
			sVar0 = NETWORK::UGC_GET_CACHED_DESCRIPTION(iParam0, 512);
			NETWORK::_0x5A34CD9C3C5BEC44(iParam0);
			func_152(0);
			*uParam1 = 2;
			return sVar0;
	}
	*uParam1 = 1;
	return "";
}

bool func_111(int iParam0)
{
	if (!func_57(iParam0))
	{
		return false;
	}
	return func_118(iParam0, 33554432);
}

int func_112()
{
	return Global_1939161.f_26;
}

bool func_113(int iParam0)
{
	if (!func_153(iParam0))
	{
		return false;
	}
	return func_154(iParam0);
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
	else if (iParam0 <= 134)
	{
		return 15;
	}
	else if (iParam0 <= 138)
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
			return joaat("LAW_REGION_BAYOU_NWA");
		case 1:
			return joaat("LAW_REGION_BIG_VALLEY");
		case 2:
			return joaat("LAW_REGION_BLUEGILL_MARSH");
		case 3:
			return joaat("LAW_REGION_CUMBERLAND_FOREST");
		case 4:
			if (!bParam1 || func_1() != -1)
			{
				return joaat("LAW_REGION_GREAT_PLAINS");
			}
			if (func_113(44))
			{
				return joaat("LAW_REGION_GREAT_PLAINS");
			}
			else
			{
				return joaat("LAW_REGION_GREAT_PLAINS_MAINGAME");
			}
			break;
		case 5:
			return joaat("LAW_REGION_GRIZZLIES");
		case 6:
			return joaat("LAW_REGION_GRIZZLIES");
		case 7:
			return joaat("LAW_REGION_GRIZZLIES");
		case 8:
			return joaat("LAW_REGION_GUAMA");
		case 9:
			return joaat("LAW_REGION_HEARTLANDS");
		case 10:
			return joaat("LAW_REGION_ROANOKE_RIDGE");
		case 11:
			return joaat("LAW_REGION_SCARLETT_MEADOWS");
		case 12:
			if (!bParam1 || func_1() != -1)
			{
				return joaat("LAW_REGION_TALL_TREES");
			}
			if (func_113(44))
			{
				return joaat("LAW_REGION_TALL_TREES");
			}
			else
			{
				return joaat("LAW_REGION_TALL_TREES_MAINGAME");
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_1() != -1)
			{
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
			}
			if (func_113(44))
			{
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
			}
			else
			{
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME");
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
	if (Global_1572887.f_13 == -1)
	{
		return (Global_39.f_263[iParam0] && iParam1) != 0;
	}
	return (Global_1071686.f_21398[iParam0] && iParam1) != 0;
}

bool func_117(int iParam0, int iParam1)
{
	if (!func_65(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_13 == -1)
	{
		return (Global_39.f_190[iParam0 /*12*/].f_5 && iParam1) != 0;
	}
	return (Global_1071686.f_21325[iParam0 /*12*/].f_5 && iParam1) != 0;
}

bool func_118(int iParam0, int iParam1)
{
	if (Global_1572887.f_13 == -1)
	{
		return (Global_8123[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1071686.f_19674[iParam0 /*11*/] && iParam1) != 0;
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
	if (Global_1572887.f_13 == -1)
	{
		return Global_39.f_190[iParam0 /*12*/];
	}
	iVar0 = 0;
	Var1 = { func_94(PLAYER::PLAYER_ID()) };
	BOUNTY::_0x4EF23E04A0C8FF51(&Var1, &uVar8);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1071686.f_21325[iVar0 /*12*/] = uVar8;
		iVar0++;
	}
	return Global_1071686.f_21325[iParam0 /*12*/];
}

bool func_120(int iParam0)
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

int func_121(int iParam0)
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

bool func_122(struct<2> Param0, var uParam2)
{
	if (!func_67(Param0))
	{
		return false;
	}
	func_155(uParam2);
	switch (Param0)
	{
		case 2:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636[Param0.f_1 /*3*/]), 3);
			return true;
		case 3:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_602[Param0.f_1 /*3*/]), 3);
			return true;
		case 4:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_2104[Param0.f_1 /*3*/]), 3);
			return true;
		case 5:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_12606[Param0.f_1 /*3*/]), 3);
			return true;
		case 6:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_12908[Param0.f_1 /*3*/]), 3);
			return true;
		case 7:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_15910[Param0.f_1 /*3*/]), 3);
			return true;
		case 8:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_16512[Param0.f_1 /*3*/]), 3);
			return true;
		default:
			break;
	}
	return false;
}

char[] func_123(int iParam0)
{
	char[] cVar0[8];

	if (!func_57(iParam0))
	{
		StringCopy(&cVar0, "UNK", 8);
		return cVar0;
	}
	return Global_1887339[iParam0 /*36*/].f_23;
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
		case 59:
			return "MAGICLANTERN";
		case 68:
			return "VAUDEVILLE";
		case 69:
			return "VAUDEVILLE";
		case 58:
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
		case 52:
			return "WARDROBE";
	}
	return "";
}

int func_125(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_156(*uParam0, 0f, 0f, 0f))
	{
		return 1;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar2)
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
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar3)
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
	switch (func_157(iParam0))
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
		case joaat("W_4_ABANDONED_MISSION"):
			return 993246734;
		case joaat("W_4_ABANDONED_TRADING_POST"):
			return 1352537560;
		case joaat("W_4_FIRE_LOOKOUT_TOWER"):
			return -1262808306;
		case joaat("W_4_FLATTENED_CABIN"):
			return 1582457845;
		case joaat("W_5_FORT_BRENNAND"):
			return 460210291;
		case joaat("W_5_LIMPANY"):
			return 2021420613;
		case joaat("W_4_METEOR_HOUSE"):
			return 1195199040;
		case joaat("W_4_OIL_DERRICK"):
			return -1212881551;
		case joaat("W_4_PLEASANCE"):
			return -2011320133;
		case joaat("W_4_ROADSIDE_BROTHEL"):
			return -1988847961;
		case joaat("W_4_THE_OLD_BACCHUS_PLACE"):
			return 2056389698;
		case joaat("W_4_TRADING_POST"):
			return -942443338;
		case joaat("W_4_TWO_CROWS"):
			return 539572870;
		case joaat("W_4_UTOPIAN_COLONY_BUILDING"):
			return 66159563;
		case joaat("W_4_WITCHES_CAULDRON"):
			return 387869270;
		case joaat("W_4_APPLESEED_TIMBER_COMPANY"):
			return -496244122;
		case joaat("W_4_CASTORS_RIDGE"):
			return -238119963;
		case joaat("W_4_CENTRAL_UNION_RAILROAD_1"):
			return 1028223611;
		case joaat("W_4_CENTRAL_UNION_RAILROAD_2"):
			return 730222325;
		case joaat("W_4_CENTRAL_UNION_RAILROAD_3"):
			return -597970767;
		case joaat("W_4_FORT_RIGGS_HOLDING_CAMP"):
			return -732274047;
		case joaat("W_5_BEAVER_HOLLOW"):
			return -1368676121;
		case joaat("W_4_CLEMENS_POINT"):
			return 759314201;
		case joaat("W_4_COLTER"):
			return 1826504111;
		case joaat("W_4_GAPTOOTH_BREACH"):
			return 1728445882;
		case joaat("W_4_HANGING_DOG_RANCH"):
			return -12216052;
		case joaat("W_4_HORSESHOE_OVERLOOK"):
			return -431488293;
		case joaat("W_4_PIKES_BASIN"):
			return 1474106589;
		case joaat("W_4_SHADY_BELLE"):
			return -353968602;
		case joaat("W_4_SIX_POINT_CABIN"):
			return -918096609;
		case joaat("W_4_SOLOMONS_FOLLY"):
			return 1979340260;
		case joaat("W_4_ABERDEEN_PIG_FARM"):
			return 1472232821;
		case joaat("W_4_ADLER_RANCH"):
			return 462373845;
		case joaat("W_4_CARMODY_DELL"):
			return -1836330842;
		case joaat("W_4_CATFISH_JACKSONS"):
			return -1150244084;
		case joaat("W_4_CHEZ_PORTER"):
			return -1727895786;
		case joaat("W_4_LARNED_SOD"):
			return -1101810198;
		case joaat("W_4_LONNIES_SHACK"):
			return 2143316225;
		case joaat("W_4_MACLEANS_HOUSE"):
			return 121074776;
		case joaat("W_4_PAINTED_SKY"):
			return -2086563810;
		case joaat("W_4_RIDGEWOOD_FARM"):
			return -1332669948;
		case joaat("W_4_VAN_HORN_MANSION"):
			return 85299473;
		case joaat("W_4_WATSONS_CABIN"):
			return -1813267128;
		case joaat("W_4_WILLARDS_REST"):
			return 458479023;
		case joaat("W_5_BERYLS_DREAM"):
			return -678676588;
		case joaat("W_5_BLACK_BALSAM_RISE"):
			return 1602161184;
		case joaat("W_5_BLACK_BONE_FOREST"):
			return -656861063;
		case joaat("W_4_BRITTLEBRUSH_TRAWL"):
			return 1735191955;
		case joaat("W_5_BROKEN_TREE"):
			return 2073023198;
		case joaat("W_4_CANEBREAK_MANOR"):
			return -1941572412;
		case joaat("W_5_CHADWICK_FARM"):
			return 215480587;
		case joaat("W_4_CLINGMAN"):
			return 545498183;
		case joaat("W_4_COCHINAY"):
			return 820139809;
		case joaat("W_4_COMPSONS_STEAD"):
			return 2063457042;
		case joaat("W_4_COPPERHEAD_LANDING"):
			return 1006072805;
		case joaat("W_4_CUEVA_SECA"):
			return 428613469;
		case joaat("W_4_DOVERHILL"):
			return -161135375;
		case joaat("W_4_DOWNES_RANCH"):
			return -1276637644;
		case joaat("W_4_EVELYN_MILLER_CAMP"):
			return -960425936;
		case joaat("W_4_FACE_ROCK"):
			return 532401286;
		case joaat("W_4_FIRWOOD_RISE"):
			return -1347759053;
		case joaat("W_5_FISHINGSPOT"):
			return 1542246539;
		case joaat("W_4_GREENHOLLOW"):
			return 1740117339;
		case joaat("W_4_GUTHRIE_FARM"):
			return 770074951;
		case joaat("W_4_HAGEN_ORCHARDS"):
			return -237206861;
		case joaat("W_4_HILL_HAVEN_RANCH"):
			return 1877776161;
		case joaat("W_4_HOUSEBOAT"):
			return 1837393665;
		case joaat("W_4_LAKE_DON_JULIO_HOUSE"):
			return 1603579970;
		case joaat("W_4_LONE_MULE_STEAD"):
			return -1456731677;
		case joaat("W_4_LUCKYS_CABIN"):
			return -1344767066;
		case joaat("W_4_MACOMBS_END"):
			return 1092217275;
		case joaat("W_4_MERKINS_WALLER"):
			return 1855549007;
		case joaat("W_4_MICAHS_HIDEOUT"):
			return -875696111;
		case joaat("W_4_MILLESANI_CLAIM"):
			return -91026072;
		case joaat("W_4_MOSSY_FLATS"):
			return 1876184276;
		case joaat("W_4_NEKOTI_ROCK"):
			return -876779166;
		case joaat("W_4_ODDFELLOWS_REST"):
			return -1116738159;
		case joaat("W_4_OLD_GREENBANK_MILL"):
			return 415864829;
		case joaat("W_4_OLD_TOMS_BLIND"):
			return -1408667066;
		case joaat("W_4_PLEASANCE_HOUSE"):
			return -1730421200;
		case joaat("W_4_PRINZ_CO"):
			return 1374995365;
		case joaat("W_6_RADLEYS_HOUSE"):
			return -1393093729;
		case joaat("W_5_RADLEYS_PASTURE"):
			return -1623232489;
		case joaat("W_4_RATTLESNAKE_HOLLOW"):
			return -1394664008;
		case joaat("W_4_REPENTANCE"):
			return -325788416;
		case joaat("W_4_RILEYS_CHARGE"):
			return -1807212021;
		case joaat("W_4_RIO_DEL_LOBO_HOUSE"):
			return -792566558;
		case joaat("W_4_SCRATCHING_POST"):
			return -2089448537;
		case joaat("W_4_SILENT_STEAD"):
			return 82527577;
		case joaat("W_4_SILTWATER_STRAND"):
			return -1354901649;
		case joaat("W_4_STILLWATER_CABIN"):
			return -1585921053;
		case joaat("W_4_STILT_SHACK"):
			return 222265732;
		case joaat("W_4_TANNERS_REACH"):
			return 1561007383;
		case joaat("W_4_TAXIDERMIST_HOUSE"):
			return 1104975149;
		case joaat("W_4_THE_HANGING_ROCK"):
			return 1515744307;
		case joaat("W_4_THE_LOFT"):
			return 893855320;
		case joaat("W_5_VALLEY_VIEW"):
			return 235472255;
		case joaat("W_4_VENTERS_PLACE"):
			return -1173041902;
		case joaat("W_4_VETERANS_HOMESTEAD"):
			return 326709244;
		case joaat("W_4_WALLACE_OVERLOOK"):
			return -1337880478;
		case joaat("W_5_ARGIL_RISE"):
			return 205568929;
		case joaat("W_4_BAYGALL_EDGE"):
			return 276890716;
		case joaat("W_4_BEAR_CLAW"):
			return -2110824426;
		case joaat("W_4_CAIRN_LODGE"):
			return 43681669;
		case joaat("W_4_CLAWSONS_REST"):
			return 562599937;
		case joaat("W_4_CRAWDAD_WILLIES"):
			return 1822876181;
		case joaat("W_5_DEER_COTTAGE"):
			return -683043834;
		case joaat("W_4_DODDS_BLUFF"):
			return 532503220;
		case joaat("W_4_DORMIN_CREST"):
			return 379859357;
		case joaat("W_4_FAIRVALE_SHANTY"):
			return 1610646968;
		case joaat("W_4_GILL_LANDING"):
			return 1268001912;
		case joaat("W_4_GRANGERS_HOGGERY"):
			return 653958186;
		case joaat("W_4_HANIS_BETHEL"):
			return -1917132299;
		case joaat("W_5_HURON_GLEN"):
			return -134804027;
		case joaat("W_5_LENORA_VIEW"):
			return 1116308524;
		case joaat("W_4_MANITO_GLADE"):
			return 1625008147;
		case joaat("W_4_MARTHAS_SWAIN"):
			return -727372692;
		case joaat("W_4_OLD_HARRY_FEN"):
			return 1354284392;
		case joaat("W_4_OLD_TRAIL_RISE"):
			return 1871337449;
		case joaat("W_4_OSMAN_GROVE"):
			return -1249289544;
		case joaat("W_4_PLANTERS_BAWN"):
			return 1714554710;
		case joaat("W_6_REED_COTTAGE"):
			return -443207523;
		case joaat("W_4_RIDGE_VIEW"):
			return -33677540;
		case joaat("W_4_ROBARD_FARM"):
			return -763271696;
		case joaat("W_4_SAWBONE_CLEARING"):
			return 2027689141;
		case joaat("W_4_SHEPHERDS_RISE"):
			return -1484929764;
		case joaat("W_4_SWADBASS_POINT"):
			return -1430883057;
		case joaat("W_4_TRAPPERS_CABIN"):
			return 2133877879;
		case joaat("W_5_VETTERS_ECHO"):
			return -508074447;
		case joaat("W_4_BEECHERS_HOPE"):
			return -507075109;
		case joaat("W_4_BUTCHER_CREEK"):
			return 147256338;
		case joaat("W_4_COOTS_CHAPEL"):
			return 929640770;
		case joaat("W_4_CORNWALL_KEROSENE_TAR"):
			return 648073069;
		case joaat("W_4_EWING_BASIN"):
			return 653799702;
		case joaat("W_5_GRAND_KORRIGAN_DOCKED"):
			return -296815465;
		case joaat("W_5_GRAND_KORRIGAN_SEA"):
			return 1944800674;
		case joaat("W_4_PRONGHORN_RANCH"):
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
		case joaat("VANHORN"):
			return "VHT";
		case joaat("EMERALD"):
			return "EMR";
		case joaat("ANNESBURG"):
			return "ANN";
		case joaat("LAGRAS"):
			return "LAG";
		case joaat("RHODES"):
			return "RHO";
		case joaat("STRAWBERRY"):
			return "STR";
		case joaat("BLACKWATER"):
			return "BLA";
		case joaat("STDENIS"):
			return "NBX";
		case joaat("VALENTINE"):
			return "VAL";
		case joaat("ARMADILLO"):
			return "AMD";
		case joaat("TUMBLEWEED"):
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
		case joaat("GIVER_NAME"):
			return 0;
		case joaat("GIVER_STRANGER_NAME"):
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
	return Global_1893587.f_2;
}

int func_132(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_158(vParam0);
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

bool func_133()
{
	return Global_263042[Global_1296859 /*70*/] > 2;
}

bool func_134()
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
	if (!func_67(Global_1051213) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_135()
{
	if (func_159(255) <= 2)
	{
		return false;
	}
	if (Global_265377.f_124517.f_71.f_21.f_2 != -504335712)
	{
		return false;
	}
	if (!func_160(Global_265377.f_124517.f_71.f_21.f_3))
	{
		return false;
	}
	return true;
}

bool func_136(int iParam0)
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(func_161(iParam0));
}

int func_137(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	int iVar6;
	int iVar7;

	iVar0 = 0;
	iVar1 = 1;
	if (func_162() > 0)
	{
		iVar1 = func_162();
	}
	switch (iParam0)
	{
		case 18:
			if (func_136(2) && func_163(2) >= iVar1)
			{
				iVar2[iVar0] = 2;
				iVar0++;
			}
			if (func_136(3) && func_163(3) >= iVar1)
			{
				iVar2[iVar0] = 3;
				iVar0++;
			}
			if (func_136(4) && func_163(4) >= iVar1)
			{
				iVar2[iVar0] = 4;
				iVar0++;
			}
			break;
		case 8:
			if (func_136(7) && func_163(7) >= iVar1)
			{
				iVar2[iVar0] = 7;
				iVar0++;
			}
			if (func_136(8) && func_163(8) >= iVar1)
			{
				iVar2[iVar0] = 8;
				iVar0++;
			}
			if (func_136(9) && func_163(9) >= iVar1)
			{
				iVar2[iVar0] = 9;
				iVar0++;
			}
			break;
		case 15:
			if (func_136(15) && func_163(15) >= iVar1)
			{
				iVar2[iVar0] = 15;
				iVar0++;
			}
			if (func_136(16) && func_163(16) >= iVar1)
			{
				iVar2[iVar0] = 16;
				iVar0++;
			}
			break;
		default:
			if (func_136(iParam0) && func_163(iParam0) >= iVar1)
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
	return iVar2[iVar7];
}

void func_138(int iParam0)
{
	Global_1572887.f_106.f_14 = iParam0;
}

int func_139(int iParam0)
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
		if (Global_265377.f_117359.f_6725[iVar0] == Global_265354.f_1[iParam0])
		{
			return Global_265377.f_117359.f_6758[iVar0];
		}
		iVar0++;
	}
	return 0;
}

struct<2> func_140()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_141(int iParam0, int iParam1, int iParam2, int iParam3, struct<2> Param4, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10)
{
	struct<7> Var0;
	char cVar57[64];
	struct<56> Var65;

	if (!func_164(iParam2, iParam3))
	{
		return 0;
	}
	if (func_165() && Global_1572887.f_106.f_75 != 9)
	{
		return 0;
	}
	if (!func_166(Global_1296859.f_10))
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
	func_167(&Var0);
	func_168(iParam2, iParam3, iParam7, 1);
	func_169(Param4, 1);
	func_170(iParam6);
	func_171(iParam9);
	func_172(iParam10, 1);
	if ((func_67(Param4) && !func_173()) && Global_1211325 == -1)
	{
		func_174(Param4);
	}
	NETWORK::_NETWORK_SESSION_SET_PLAYER_FLAGS(1);
	if (iParam2 != 2)
	{
		func_175();
	}
	if (func_173())
	{
		func_176(Param4);
	}
	else if (iParam2 == 3)
	{
		if (!func_177(268435456))
		{
			if (!UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PLAYER_MENU")))
			{
				func_178(1, 0);
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
			func_179(&Var65, iParam3, -1, -1, 3);
			StringCopy(&cVar57, func_180(&(Var65.f_37), joaat("COLOR_PURE_WHITE")), 64);
		}
		else if (iParam2 == 1)
		{
			StringCopy(&cVar57, MISC::_CREATE_VAR_STRING(2, func_181(iParam3)), 64);
		}
		else
		{
			StringCopy(&cVar57, MISC::_CREATE_VAR_STRING(2, func_183(func_182(), iParam3)), 64);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887.f_106.f_151, &cVar57);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887.f_106.f_153, MISC::_CREATE_VAR_STRING(2, "NM_PLAYLIST_MATCHMADE_PLAYERS", 1));
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_106.f_154);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_106.f_155);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_106.f_156);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_106.f_157);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_106.f_158);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_106.f_159);
	}
	if ((!GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()) && func_184(255, 0)) && !bParam8)
	{
		func_185("NM_MATCHMAKING_WARNING");
	}
	func_186(10);
	return 1;
}

char* func_142(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_143(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar10;
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
	iVar2 = func_187(iParam1, iParam2);
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
					iVar10 = func_188(iParam2);
					iVar1 = NETWORK::_LOCAL_PLAYER_PEDSHOT_TEXTURE_DOWNLOAD_REQUEST(iParam1, iVar10);
					if (iVar1 == -1)
					{
						return 3;
					}
					else if (iVar1 == 0)
					{
						func_189(iParam1, iParam2, 0);
						return 1;
					}
					func_190(iParam1, iParam2, iVar1);
					func_189(iParam1, iParam2, 3);
					break;
				case 3:
					iVar1 = func_191(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_189(iParam1, iParam2, 0);
						return 1;
					}
					iVar11 = NETWORK::GET_STATUS_OF_TEXTURE_DOWNLOAD(iVar1);
					switch (iVar11)
					{
						case 0:
							func_189(iParam1, iParam2, 4);
							return 3;
						case 1:
							return 3;
						case 2:
							func_189(iParam1, iParam2, 0);
							return 1;
						default:
							break;
					}
					break;
				case 4:
					iVar1 = func_191(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_189(iParam1, iParam2, 0);
						return 1;
					}
					sVar12 = NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1);
					if (MISC::_IS_STRING_SPACE(sVar12))
					{
						return 3;
					}
					func_189(iParam1, iParam2, 5);
					break;
				case 5:
					iVar1 = func_191(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_189(iParam1, iParam2, 0);
						return 1;
					}
					StringCopy(sParam0, NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1), 128);
					return 4;
			}
			break;
	}
	return 3;
}

int func_144(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_265377.f_2)
	{
		if (Global_265377.f_63755[iVar0 /*8*/] == iParam0)
		{
			return iVar0;
		}
		if (Global_265377.f_4[iVar0 /*51*/].f_28 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_145(int iParam0, var uParam1)
{
	struct<2> Var0;

	if (func_192(iParam0, uParam1, &Var0))
	{
		return Var0.f_1;
	}
	return -1;
}

int func_146(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WAR_VET"):
			return joaat("GFH_WAR_VET");
		case joaat("FLACO_HERNANDEZ"):
			return joaat("GFH_FLACO_HERNANDEZ");
		case joaat("JOSIAH_TRELAWNY"):
			return joaat("GFH_JOSIAH_TRELAWNY");
		case joaat("JOE"):
			return joaat("GFH_JOE");
		case joaat("SEAN_MACQUIRE"):
			return joaat("GFH_SEAN_MACQUIRE");
		case joaat("BLACK_BELLE"):
			return joaat("GFH_BLACK_BELLE");
		case joaat("SADIE_ADLER"):
			return joaat("GFH_SADIE_ADLER");
		case joaat("MAMMA_WATSON"):
			return joaat("GFH_MAMMA_WATSON");
		case joaat("THOMAS_SKIFF_CAPTAIN"):
			return joaat("GFH_THOMAS_SKIFF_CAPTAIN");
		case joaat("OBEDIAH_HINTON"):
			return joaat("GFH_OBEDIAH_HINTON");
		case joaat("ANTHONY_FOREMAN"):
			return joaat("GFH_ANTHONY_FOREMAN");
		case joaat("LANGTON"):
			return joaat("GFH_LANGTON");
		case joaat("BONNIE"):
			return joaat("GFH_BONNIE");
		case joaat("SHERIFF_FREEMAN"):
			return joaat("GFH_SHERIFF_FREEMAN");
		case joaat("SHAKY"):
			return joaat("GFH_SHAKY");
		case joaat("WALLACE_TRAIN_CLERK"):
			return joaat("GFH_TRAIN_CLERK_WALLACE");
		case joaat("ALDEN"):
			return joaat("GFH_ALDEN");
		case joaat("HECTOR"):
			return joaat("GFH_HECTOR");
		case joaat("THE_BOY"):
			return joaat("GFH_THE_BOY");
		case joaat("ABERDEEN_PIG_FARMERS"):
			return joaat("GFH_ABERDEEN_PIG_FARMERS");
		case joaat("SAINT_DENIS_BOUNTY_BOARD"):
			return joaat("SAINT_DENIS_SHERIFF_BOUNTY_BOARD");
		case joaat("VALENTINE_BOUNTY_BOARD"):
			return joaat("VALENTINE_SHERIFF_BOUNTY_BOARD");
		case joaat("RHODES_BOUNTY_BOARD"):
			return joaat("RHODES_SHERIFF_BOUNTY_BOARD");
		case joaat("STRAWBERRY_BOUNTY_BOARD"):
			return joaat("STRAWBERRY_SHERIFF_BOUNTY_BOARD");
		case joaat("TUMBLEWEED_BOUNTY_BOARD"):
			return joaat("TUMBLEWEED_SHERIFF_BOUNTY_BOARD");
		case joaat("ANNESBURG_BOUNTY_BOARD"):
			return joaat("ANNESBURG_SHERIFF_BOUNTY_BOARD");
		case joaat("ARMADILLO_BOUNTY_BOARD"):
			return joaat("ARMADILLO_SHERIFF_BOUNTY_BOARD");
		case joaat("BENEDICT_POINT_BOUNTY_BOARD"):
			return joaat("BENEDICT_POINT_STATION_BOUNTY_BOARD");
		case joaat("BLACKWATER_BOUNTY_BOARD"):
			return joaat("BLACKWATER_SHERIFF_BOUNTY_BOARD");
		case joaat("EMERALD_RANCH_BOUNTY_BOARD"):
			return joaat("EMERALD_RANCH_STATION_BOUNTY_BOARD");
		case joaat("VAN_HORN_BOUNTY_BOARD"):
			return joaat("VAN_HORN_POST_OFFICE_BOUNTY_BOARD");
		case joaat("RIGGS_BOUNTY_BOARD"):
			return joaat("RIGGS_STATION_BOUNTY_BOARD");
		case joaat("WALLACE_BOUNTY_BOARD"):
			return joaat("WALLACE_STATION_BOUNTY_BOARD");
		case joaat("CRIPPS"):
			return joaat("GFH_CRIPPS");
		case joaat("MOONSHINER"):
			return joaat("GFH_MAGGIE");
		case joaat("MARCEL"):
			return joaat("GFH_MARCEL");
		case -465704507:
			return -1719093715;
		default:
			break;
	}
	return 0;
}

struct<2> func_147(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

int func_148(var uParam0, var uParam1)
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

int func_149(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("SECONDARY"):
			return 2;
		case joaat("PRIMARY"):
			return 1;
		case joaat("NONE"):
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

void func_150(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 != 0)
	{
		iVar0 = iParam0;
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940311.f_1433.f_54.f_102, func_193(iVar0));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_1433.f_54.f_101, 1);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_1433.f_54.f_101, 0);
	}
	if (iParam1 != 0)
	{
		iVar0 = iParam1;
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940311.f_1433.f_54.f_99, func_193(iVar0));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_1433.f_54.f_98, 1);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_1433.f_54.f_98, 0);
	}
}

bool func_151(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_152(int iParam0)
{
	Global_265377.f_124386 = iParam0;
}

bool func_153(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_154(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_39.f_3643[iVar1], iVar2);
}

void func_155(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_156(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_157(int iParam0)
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

int func_158(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_194(vParam0, 0f, 0f, 0, 2);
	return func_194(vParam0, Global_1892740[iVar0 /*3*/].f_1, Global_1892740[iVar0 /*3*/].f_2, Global_1892740[iVar0 /*3*/], 4);
}

int func_159(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = Global_1296859.f_10;
	}
	return Global_263042[iParam0 /*70*/];
}

bool func_160(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

int func_161(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("NET_PLAYLIST_RACE_SERIES");
		case 1:
			return joaat("NET_PLAYLIST_FEATURED_SERIES_001");
		case 2:
			return joaat("NET_PLAYLIST_ADVERSARY_SMALL");
		case 3:
			return joaat("NET_PLAYLIST_ADVERSARY_MEDIUM");
		case 4:
			return joaat("NET_PLAYLIST_ADVERSARY_LARGE");
		case 5:
			return joaat("NET_PLAYLIST_GUN_RUSH_TEAMS");
		case 6:
			return joaat("NET_PLAYLIST_GUN_RUSH_FREE_FOR_ALL");
		case 7:
			return joaat("NET_PLAYLIST_ELIMINATION_SMALL");
		case 8:
			return joaat("NET_PLAYLIST_ELIMINATION_MEDIUM");
		case 9:
			return joaat("NET_PLAYLIST_ELIMINATION_LARGE");
		case 10:
			return joaat("NET_PLAYLIST_NOMINATED_SERIES");
		case 11:
			return joaat("NET_PLAYLIST_NOMINATED_SERIES_SMALL");
		case 12:
			return joaat("NET_PLAYLIST_NOMINATED_SERIES_MEDIUM");
		case 13:
			return joaat("NET_PLAYLIST_NOMINATED_SERIES_LARGE");
		case 14:
			return joaat("NET_PLAYLIST_PRIVATE_SERIES");
		case 15:
			return joaat("NET_PLAYLIST_ORBIS_SERIES_1");
		case 16:
			return joaat("NET_PLAYLIST_ORBIS_SERIES_2");
		case 17:
			return joaat("NET_PLAYLIST_ORBIS_SERIES_3");
		case 18:
			return joaat("NET_PLAYLIST_SHOOTOUT");
		case 19:
			return joaat("NET_PLAYLIST_CAPTURE");
		default:
			break;
	}
	return 0;
}

int func_162()
{
	return Global_1102219.f_3673;
}

int func_163(int iParam0)
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
		if (Global_265377.f_117359.f_6725[iVar0] == Global_265354.f_1[iParam0])
		{
			return Global_265377.f_117359.f_483[iVar0 /*194*/].f_193;
		}
		iVar0++;
	}
	return -1;
}

bool func_164(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam0 == 3)
	{
		return iParam1 != -1;
	}
	return iParam1 != 0;
}

bool func_165()
{
	return Global_1572887.f_106.f_75 != 1;
}

bool func_166(int iParam0)
{
	var uVar0;

	uVar0 = GANG::_0x901E0DC25080C8B9(iParam0);
	if (GANG::_0x0F99F6436528A089(uVar0) && !GANG::_0x424B17A7DC5C90BC(iParam0))
	{
		return false;
	}
	return true;
}

void func_167(var uParam0)
{
	MISC::_COPY_MEMORY(&(Global_1572887.f_106.f_17), uParam0, 57);
}

void func_168(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	Global_1572887.f_106 = iParam0;
	Global_1572887.f_106.f_9 = iParam1;
	Global_1572887.f_106.f_10 = iParam2;
	if (bParam3)
	{
		func_195();
	}
}

void func_169(struct<2> Param0, bool bParam2)
{
	Global_1572887.f_106.f_11 = { Param0 };
	if (bParam2)
	{
		func_195();
	}
}

void func_170(int iParam0)
{
	Global_1572887.f_106.f_15 = iParam0;
}

void func_171(int iParam0)
{
	Global_1572887.f_106.f_13 = iParam0;
}

void func_172(int iParam0, bool bParam1)
{
	Global_1572887.f_106.f_74 = iParam0;
	if (bParam1)
	{
		func_195();
	}
}

bool func_173()
{
	if (func_182() != 0)
	{
		return false;
	}
	if (Global_1572887.f_106.f_9 >= 5 && Global_1572887.f_106.f_9 <= 8)
	{
		return false;
	}
	return true;
}

int func_174(struct<2> Param0)
{
	if (func_196())
	{
		return 0;
	}
	if (!func_67(Param0))
	{
		return 0;
	}
	Global_1051213 = { Param0 };
	return 1;
}

void func_175()
{
	Global_1056141[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*471*/].f_15.f_11 = 0;
}

void func_176(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<8> Var3;

	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_106.f_153);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_106.f_154);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_106.f_155);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_106.f_156);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_106.f_157);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_106.f_158);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_106.f_159);
	iVar0 = func_197(Param0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = func_198(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	uVar2 = func_199(iVar0);
	Var3 = { func_200(iVar1, uVar2) };
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887.f_106.f_151, MISC::_CREATE_VAR_STRING(2, &Var3));
}

bool func_177(int iParam0)
{
	return (Global_1572887.f_106.f_15 && iParam0) != 0;
}

int func_178(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_201();
	}
	if (!func_202(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_203(iParam0);
	Global_1896738.f_386 = 1;
	Global_1896738.f_387 = bParam1;
	return 1;
}

int func_179(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
		func_204(uParam0, 4194304);
		return 1;
	}
	iVar0 = func_144(iParam1);
	if (iVar0 == -1)
	{
		return 0;
	}
	MemCopy(&(uParam0->f_27), {Global_265377.f_4[iVar0 /*51*/]}, 3);
	uParam0->f_37 = { Global_265377.f_4[iVar0 /*51*/].f_7 };
	uParam0->f_45 = Global_265377.f_4[iVar0 /*51*/].f_22;
	uParam0->f_46 = Global_265377.f_4[iVar0 /*51*/].f_30;
	uParam0->f_16 = Global_265377.f_4[iVar0 /*51*/].f_28;
	uParam0->f_17 = Global_265377.f_63755[iVar0 /*8*/];
	uParam0->f_61 = { Global_265377.f_4[iVar0 /*51*/].f_24 };
	uParam0->f_30 = Global_265377.f_4[iVar0 /*51*/].f_34;
	uParam0->f_32 = Global_265377.f_4[iVar0 /*51*/].f_32;
	uParam0->f_33 = Global_265377.f_4[iVar0 /*51*/].f_33;
	uParam0->f_21 = 1;
	uParam0->f_21.f_1 = 0;
	uParam0->f_21.f_4 = iParam4;
	uParam0->f_21.f_2 = Global_265377.f_4[iVar0 /*51*/].f_29;
	uParam0->f_21.f_3 = Global_265377.f_4[iVar0 /*51*/].f_31;
	uParam0->f_26 = Global_265377.f_4[iVar0 /*51*/].f_31;
	uParam0->f_34 = Global_265377.f_4[iVar0 /*51*/].f_40;
	uParam0->f_1 = { Global_265377.f_4[iVar0 /*51*/].f_15 };
	MemCopy(&(uParam0->f_8), {Global_265377.f_4[iVar0 /*51*/].f_4}, 8);
	func_205(&(Global_265377.f_4[iVar0 /*51*/]));
	if (iParam2 != -1)
	{
		if ((uParam0->f_21.f_2 == -933924539 && func_206(iParam2)) || (uParam0->f_21.f_2 == 395262693 && func_207(iParam2)))
		{
			uParam0->f_21.f_3 = iParam2;
			uParam0->f_26 = iParam2;
		}
	}
	if (iParam3 > 0)
	{
		uParam0->f_30 = iParam3;
	}
	iVar1 = func_208(Global_265377.f_63755[iVar0 /*8*/]);
	vVar2 = { func_209(uParam0->f_17) };
	if (iVar1 != -1)
	{
		uParam0->f_53 = { func_210(iVar1) };
	}
	else if (func_211(uParam0->f_17))
	{
		uParam0->f_53 = { func_213(func_212(uParam0->f_17)) };
	}
	else if (vVar2.y != -1 && vVar2.x != -1)
	{
		uParam0->f_53 = { func_214(&vVar2) };
	}
	else
	{
		uParam0->f_53 = { func_215(uParam0->f_16) };
		if (!func_67(uParam0->f_53))
		{
			uParam0->f_53 = { func_217(func_216(uParam0->f_21.f_2)) };
		}
	}
	func_218(uParam0);
	func_204(uParam0, 4194304);
	return 1;
}

char* func_180(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_142(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

char* func_181(int iParam0)
{
	int iVar0;

	iVar0 = func_219(iParam0);
	if (iVar0 == Global_265354.f_1[0])
	{
		return "NM_BUCKET_RACE";
	}
	if (iVar0 == Global_265354.f_1[1])
	{
		return "NET_PLAYLIST_FEATURED_SERIES_001";
	}
	if (iVar0 == Global_265354.f_1[5])
	{
		return "NET_PLAYLIST_SPECIAL_SERIES_1";
	}
	if (iVar0 == Global_265354.f_1[6])
	{
		return "NET_PLAYLIST_SPECIAL_SERIES_2";
	}
	if (iVar0 == Global_265354.f_1[7])
	{
		return "NET_PLAYLIST_ELIMINATION_SMALL";
	}
	if (iVar0 == Global_265354.f_1[8])
	{
		return "NET_PLAYLIST_ELIMINATION_MEDIUM";
	}
	if (iVar0 == Global_265354.f_1[9])
	{
		return "NET_PLAYLIST_ELIMINATION_LARGE";
	}
	if (iVar0 == Global_265354.f_1[2])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_SMALL";
	}
	if (iVar0 == Global_265354.f_1[3])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_MEDIUM";
	}
	if (iVar0 == Global_265354.f_1[4])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_LARGE";
	}
	if (iVar0 == Global_265354.f_1[15])
	{
		return "NM_BUCKET_ORBIS_SERIES_1";
	}
	if (iVar0 == Global_265354.f_1[16])
	{
		return "NM_BUCKET_ORBIS_SERIES_2";
	}
	if (iVar0 == Global_265354.f_1[17])
	{
		return "NM_BUCKET_ORBIS_SERIES_3";
	}
	if (iVar0 == Global_265354.f_1[19])
	{
		return "NET_PLAYLIST_CAPTURE";
	}
	if (iVar0 == Global_265354.f_1[18])
	{
		return "NET_PLAYLIST_SHOOTOUT";
	}
	return "Unmapped bucket hash";
}

int func_182()
{
	return Global_1572887.f_106;
}

char* func_183(int iParam0, int iParam1)
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

bool func_184(int iParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = false;
	if (iParam0 == 255)
	{
		bVar0 = true;
		iParam0 = func_220();
	}
	else if (iParam0 == func_220())
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam1)
		{
			return Global_1296859.f_14;
		}
	}
	if (!bVar0)
	{
		if (!Global_1296859.f_22[iParam0])
		{
			return false;
		}
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Global_1296859.f_154[iParam0]))
		{
			return false;
		}
	}
	if (GANG::_0x149A2751AB66AC02(GANG::_0x901E0DC25080C8B9(Global_1296859.f_154[iParam0])) <= 1)
	{
		return false;
	}
	return true;
}

var func_185(char* sParam0)
{
	char* sVar0;
	var uVar1;

	sVar0 = MISC::_CREATE_VAR_STRING(2, sParam0);
	uVar1 = func_221(sVar0, -2, 0, 0, 0, 1);
	return uVar1;
}

void func_186(int iParam0)
{
	Global_1572887.f_106.f_75 = iParam0;
}

int func_187(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	if (iParam1 <= -1)
	{
		return -1;
	}
	return Global_1139381.f_5079[iParam0 /*10*/].f_5[iParam1];
}

int func_188(int iParam0)
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
}

void func_189(int iParam0, int iParam1, int iParam2)
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
	Global_1139381.f_5079[iParam0 /*10*/].f_5[iParam1] = iParam2;
}

void func_190(int iParam0, int iParam1, int iParam2)
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
	Global_1139381.f_5079[iParam0 /*10*/][iParam1] = iParam2;
}

int func_191(int iParam0, int iParam1)
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
	return Global_1139381.f_5079[iParam0 /*10*/][iParam1];
}

bool func_192(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_222(iParam0, uParam1, &uVar0))
	{
		func_223(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_193(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("STAMP_CASH");
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
			return joaat("STAMP_GOLD");
		case 10:
			return joaat("STAMP_LOCK");
		case 11:
			return joaat("STAMP_LOCKED_RANK");
		case 12:
			return 876516058;
		case 13:
			return joaat("STAMP_NEW");
		case 14:
			return joaat("STAMP_UNLOCKED_RANK");
		case 15:
			return joaat("STAMP_WISHLIST");
		default:
			break;
	}
	return 0;
}

int func_194(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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

void func_195()
{
	int iVar0;

	if (func_1() == -1)
	{
		return;
	}
	iVar0 = Global_1296859;
	if (func_151(Global_1572887.f_7, 1))
	{
		func_224(&(Global_1056141[iVar0 /*471*/].f_187.f_10), 4);
	}
	else
	{
		func_225(&(Global_1056141[iVar0 /*471*/].f_187.f_10), 4);
	}
	Global_1056141[iVar0 /*471*/].f_187 = Global_1572887.f_106;
	Global_1056141[iVar0 /*471*/].f_187.f_1 = Global_1572887.f_106.f_9;
	Global_1056141[iVar0 /*471*/].f_187.f_2 = Global_1572887.f_106.f_10;
	Global_1056141[iVar0 /*471*/].f_187.f_3 = { Global_1572887.f_106.f_11 };
	Global_1056141[iVar0 /*471*/].f_187.f_8 = Global_1572887.f_106.f_13;
	Global_1056141[iVar0 /*471*/].f_187.f_5 = { Global_1572887.f_360 };
	Global_1056141[iVar0 /*471*/].f_187.f_9 = Global_1572887.f_106.f_74;
	if (func_177(1024))
	{
		func_224(&(Global_1056141[iVar0 /*471*/].f_187.f_10), 2);
	}
	else
	{
		func_225(&(Global_1056141[iVar0 /*471*/].f_187.f_10), 2);
	}
}

bool func_196()
{
	return func_67(Global_1051213);
}

int func_197(struct<2> Param0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_226(Global_1196898.f_78[iVar0 /*20*/].f_7, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_198(int iParam0)
{
	return Global_1196898.f_78[iParam0 /*20*/].f_3;
}

var func_199(int iParam0)
{
	return Global_1196339.f_1[iParam0 /*26*/].f_3;
}

struct<8> func_200(int iParam0, var uParam1)
{
	struct<8> Var0;
	struct<5> Var8;

	if (((func_227(&Var8, iParam0) && func_228(&Var8)) && func_229(&Var8, uParam1)) && func_230(&Var8))
	{
		func_231(Var8, 37194763, &Var0, 1);
	}
	return Var0;
}

void func_201()
{
	if (!UIAPPS::_IS_ANY_APP_RUNNING())
	{
		return;
	}
	UIAPPS::_CLOSE_ALL_APPS();
}

bool func_202(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = func_233(bParam2, func_232(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return false;
	}
	return true;
}

void func_203(int iParam0)
{
	Global_1896738.f_390 = iParam0;
}

void func_204(var uParam0, int iParam1)
{
	uParam0->f_20 = (uParam0->f_20 || iParam1);
}

void func_205(char* sParam0)
{
	StringCopy(&(Global_1572887.f_106.f_91.f_6), sParam0, 32);
}

bool func_206(int iParam0)
{
	if (func_234(iParam0, 0) == -1)
	{
		return false;
	}
	return true;
}

bool func_207(int iParam0)
{
	if (func_235(iParam0, 0) == -1)
	{
		return false;
	}
	return true;
}

int func_208(int iParam0)
{
	int iVar0;

	if (func_1() == -1)
	{
		return -1;
	}
	iVar0 = 9;
	while (iVar0 <= 25)
	{
		if (func_236(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_209(int iParam0)
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
	if (!func_237(&Var0))
	{
		return vVar5;
	}
	if (!func_238(&Var0, 13, 0, 0, 1))
	{
		return vVar5;
	}
	if (!func_238(&Var0, 17, 0, 0, 1))
	{
		return vVar5;
	}
	uVar12 = Var0.f_1;
	iVar9 = func_239(&Var0, 0);
	iVar8 = 0;
	while (iVar8 <= (iVar9 - 1))
	{
		Var0.f_1 = uVar12;
		if (!func_238(&Var0, 19, iVar8, 0, 1))
		{
		}
		else if (!func_238(&Var0, 20, 0, 0, 1))
		{
		}
		else
		{
			iVar10 = func_239(&Var0, 1);
			if (!func_238(&Var0, 22, iParam0, 0, 0))
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
}

struct<2> func_210(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 100)
	{
		return func_140();
	}
	return Global_1835011[iParam0 /*72*/].f_1;
}

bool func_211(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return func_212(iParam0) != -1;
}

int func_212(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		iVar1 = iVar0;
		if (iParam0 == func_240(iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

struct<2> func_213(int iParam0)
{
	return func_241(iParam0);
}

struct<2> func_214(int iParam0)
{
	var uVar0;
	int iVar5;

	if (!func_237(&uVar0))
	{
		return func_140();
	}
	if (!func_238(&uVar0, 13, 0, 0, 1))
	{
		return func_140();
	}
	if (!func_238(&uVar0, 17, 0, 0, 1))
	{
		return func_140();
	}
	if (!func_238(&uVar0, 19, *iParam0, 0, 1))
	{
		return func_140();
	}
	if (!func_238(&uVar0, 20, 0, 0, 1))
	{
		return func_140();
	}
	if (!func_238(&uVar0, 23, iParam0->f_1, 0, 1))
	{
		return func_140();
	}
	iVar5 = func_242(&uVar0);
	return func_217(iVar5);
}

struct<2> func_215(int iParam0)
{
	var uVar0;
	struct<5> Var5;

	if (iParam0 == 0)
	{
		return func_140();
	}
	if (!func_243(&uVar0, 7, iParam0, 76966722))
	{
		return func_140();
	}
	func_244(7, &uVar0, &Var5);
	if (Var5.f_4 != 7)
	{
		return func_140();
	}
	return func_245(Var5.f_3, Var5.f_4);
}

int func_216(int iParam0)
{
	switch (iParam0)
	{
		case -504335712:
			return joaat("MP_VS_MISSION");
		case 395262693:
			return joaat("MP_DEATHMATCH");
		case -933924539:
			return joaat("MP_RACE");
		default:
			break;
	}
	return 0;
}

struct<2> func_217(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_245(iParam0, 2) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_245(iParam0, 7) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_245(iParam0, 5) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_245(iParam0, 6) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_245(iParam0, 8) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_245(iParam0, 3) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_245(iParam0, 4) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	return func_140();
}

void func_218(var uParam0)
{
	uParam0->f_20 = 0;
}

int func_219(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_265377.f_117359.f_6758[iVar0] == iParam0)
		{
			return Global_265377.f_117359.f_6725[iVar0];
		}
		iVar0++;
	}
	return 0;
}

int func_220()
{
	return Global_1102219.f_3672;
}

var func_221(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_222(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381.f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_246(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_223(var uParam0, int iParam1, var uParam2)
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

void func_224(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_225(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_226(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_227(var uParam0, int iParam1)
{
	if (!DATAFILE::_0x7907969497EA92F5(Global_1196898.f_455))
	{
		return false;
	}
	*uParam0 = Global_1196898.f_455;
	uParam0->f_2 = -1093317127;
	uParam0->f_3 = func_247(iParam1);
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_228(var uParam0)
{
	uParam0->f_2 = -310067910;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_229(var uParam0, var uParam1)
{
	uParam0->f_2 = -1739269194;
	uParam0->f_3 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_230(var uParam0)
{
	uParam0->f_2 = 1701407264;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_231(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
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

bool func_232()
{
	return Global_1915715.f_20643;
}

int func_233(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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
	iVar0 = Global_1296859.f_154[Global_1296859];
	iVar1 = Global_1296859.f_8;
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
			if (PED::_GET_PED_BLACKBOARD_BOOL(Global_34, "inInspectionMode"))
			{
				return 0;
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
				return 0;
			}
		}
	}
	if (!bParam1)
	{
		if (Global_1915715.f_20638 || Global_1915715.f_22504.f_1)
		{
			return 0;
		}
		if (TASK::_0xD04241BBF6D03A5E(Global_34) != 0)
		{
			return 0;
		}
	}
	if (func_248())
	{
		return 0;
	}
	if (Global_15)
	{
		return 0;
	}
	if (!bParam2 && (((Global_1940144.f_10 || Global_1940144.f_11) || Global_1940144.f_12) || Global_1940144.f_13))
	{
		return 0;
	}
	if (!bParam3)
	{
		iVar4 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (Global_1248240.f_9297 != -1)
		{
			return 0;
		}
		if (Global_1128574[iVar4 /*56*/].f_34 & 1 != 0 && Global_1128574[iVar4 /*56*/].f_34 & 2 == 0)
		{
			return 0;
		}
		if (Global_1130634.f_293)
		{
			return 0;
		}
		if (Global_1572887.f_106.f_75 > 11 && Global_1572887.f_106.f_75 < 15)
		{
			return 0;
		}
		else if (Global_1572887.f_106.f_75 > 15)
		{
			return 0;
		}
	}
	if (!bParam8)
	{
		if ((SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(2) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(8)) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(9))
		{
			if (Global_1048576 || Global_2883584)
			{
				return 0;
			}
			if (Global_1048581)
			{
				return 0;
			}
			if (Global_1048585)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_234(int iParam0, int iParam1)
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

int func_235(int iParam0, int iParam1)
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

int func_236(int iParam0)
{
	if (!func_69(iParam0))
	{
		return 0;
	}
	if (func_1() == -1)
	{
		return 0;
	}
	return Global_1835011[iParam0 /*72*/].f_51;
}

bool func_237(var uParam0)
{
	var uVar0;
	var uVar1;

	uVar0 = Global_1071686.f_28448[29 /*4*/].f_3;
	if (!DATAFILE::_0x7907969497EA92F5(uVar0))
	{
		return false;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(uVar0))
	{
		return false;
	}
	MISC::_COPY_MEMORY(uParam0, &uVar1, 5);
	*uParam0 = uVar0;
	return true;
}

bool func_238(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;

	uVar0 = uParam0->f_1;
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = iParam3;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		uParam0->f_1 = uVar0;
		return false;
	}
	return true;
}

int func_239(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(uParam0);
}

int func_240(int iParam0)
{
	return Global_1297047[iParam0 /*37*/].f_9;
}

struct<2> func_241(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	MISC::_COPY_MEMORY(&Var0, &(Global_1297047[iParam0 /*37*/].f_6), 2);
	return Var0;
}

var func_242(var uParam0)
{
	return func_249(uParam0, 60, 1);
}

bool func_243(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*uParam0 = Global_1139381.f_7;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = func_246(iParam1);
	uParam0->f_4 = iParam2;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

void func_244(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_250(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_251(iVar0);
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
			uParam2->f_5 = func_252(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_253(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_254(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_255(iVar0);
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
	iVar0 = 0;
	uParam1->f_2 = -739728609;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_32 = iVar0;
}

struct<2> func_245(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_256(iParam0, &(Global_1071686.f_636), func_121(iParam1));
			break;
		case 3:
			Var0.f_1 = func_256(iParam0, &(Global_1071686.f_636.f_602), func_121(iParam1));
			break;
		case 4:
			Var0.f_1 = func_256(iParam0, &(Global_1071686.f_636.f_2104), func_121(iParam1));
			break;
		case 5:
			Var0.f_1 = func_256(iParam0, &(Global_1071686.f_636.f_12606), func_121(iParam1));
			break;
		case 6:
			Var0.f_1 = func_256(iParam0, &(Global_1071686.f_636.f_12908), func_121(iParam1));
			break;
		case 7:
			Var0.f_1 = func_256(iParam0, &(Global_1071686.f_636.f_15910), func_121(iParam1));
			break;
		case 8:
			Var0.f_1 = func_256(iParam0, &(Global_1071686.f_636.f_16512), func_121(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_140();
	}
	return Var0;
}

int func_246(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("CHALLENGE");
			break;
		case -3:
			iVar0 = 1300413597;
			break;
		case 1:
			iVar0 = joaat("FEATURE");
			break;
		case -2:
			iVar0 = joaat("GOLD");
			break;
		case 2:
			iVar0 = joaat("MISSION_STORY");
			break;
		case 3:
			iVar0 = joaat("MISSION_PROCEDURAL");
			break;
		case 4:
			iVar0 = joaat("MISSION_FETCH");
			break;
		case 5:
			iVar0 = joaat("MISSION_MINIGAME");
			break;
		case 6:
			iVar0 = joaat("MISSION_FREE_MODE_EVENT");
			break;
		case 7:
			iVar0 = joaat("MISSION_UGC");
			break;
		case 8:
			iVar0 = joaat("MISSION_BEAT");
			break;
		case 9:
			iVar0 = joaat("PROPERTY");
			break;
		case 10:
			iVar0 = joaat("RECIPE");
			break;
		case 11:
			iVar0 = joaat("TITLE");
			break;
		case 12:
			iVar0 = joaat("SHOP");
			break;
		case 13:
			iVar0 = joaat("GFH_GIVERS");
			break;
		case 14:
			iVar0 = joaat("GFH_LOCATIONS");
			break;
		case 15:
			iVar0 = 1332629624;
			break;
		case 16:
			iVar0 = 1746212499;
			break;
		case 17:
			iVar0 = joaat("GVO_UNLOCKS");
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

int func_247(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("ARCHERY");
		case 1:
			return joaat("CHALLENGES");
		case 2:
			return joaat("DEAD_DROP");
		case 3:
			return joaat("GOLDEN_HAT");
		case 4:
			return joaat("HOT_PROPERTY");
		case 5:
			return joaat("KING_OF_THE_CASTLE");
		case 6:
			return joaat("KING_OF_THE_RAILS");
		case 15:
			return joaat("PV_CHALLENGE_HERBALIST");
		case 16:
			return joaat("PV_CHALLENGE_BIGGEST_FISH");
		case 17:
			return joaat("PV_CHALLENGE_FLYING_BIRD");
		case 18:
			return joaat("HUNT_THE_POSSE_LEADER");
		case 8:
			return joaat("ESCAPED_CONVICTS");
		case 10:
			return joaat("SUPPLY_TRAIN");
		case 9:
			return joaat("ROUND_UP");
		case 11:
			return joaat("WRECKAGE");
		case 12:
			return joaat("CONDOR_EGG");
		case 13:
			return -27117790;
		case 14:
			return 1653867545;
		case 7:
			return -142235487;
		default:
			break;
	}
	return 0;
}

bool func_248()
{
	return (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_26538) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_26538, false));
}

var func_249(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	uParam0->f_2 = iParam1;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, uParam0))
	{
	}
	return uVar0;
}

int func_250(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_257(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_251(int iParam0)
{
	switch (iParam0)
	{
		case 1336837986:
			return 0;
		case 2124631622:
			return 1;
		case joaat("ROBBERY_TRAIN"):
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
		case joaat("AMBUSH"):
			return 10;
		case -621956193:
			return 11;
		case joaat("GANG_EVENT_SHOWDOWN"):
			return 12;
		case joaat("GANG_EVENT_IMPROMPTU_RACE"):
			return 13;
		case -867762478:
			return 14;
		case 602097925:
			return 15;
		case joaat("TRAIN_ESCORT"):
			return 16;
		case joaat("IWD_1V1"):
			return 17;
		case joaat("IWD_PVP"):
			return 18;
		case joaat("IWD_PF"):
			return 20;
		case joaat("IWD_PLF"):
			return 21;
		case joaat("IWD_F"):
			return 28;
		case joaat("IWD_INF"):
			return 19;
		case joaat("ASSASSINATION"):
			return 22;
		case joaat("ASSASSINATION_TRACKING"):
			return 23;
		case joaat("ASSASSINATION_PVP_PLAYER"):
			return 24;
		case joaat("ASSASSINATION_PVP_POSSE"):
			return 25;
		case joaat("COACH_HOLDUP_ROBBERY"):
			return 26;
		case joaat("COACH_HOLDUP_KIDNAPPING"):
			return 27;
		case 1518877519:
			return 30;
		default:
			break;
	}
	return -1;
}

int func_252(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BLACKJACK"):
			return 0;
		case joaat("DOMINOES"):
			return 1;
		case joaat("POKER"):
			return 2;
		case joaat("FILLET"):
			return 3;
		case joaat("MILKING_COW"):
			return 4;
		case joaat("CLEAN_STALLS"):
			return 5;
		case joaat("FENCE_BUILDING"):
			return 6;
		default:
			break;
	}
	return -1;
}

int func_253(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ARCHERY"):
			return 0;
		case joaat("CHALLENGES"):
			return 1;
		case joaat("DEAD_DROP"):
			return 2;
		case joaat("GOLDEN_HAT"):
			return 3;
		case joaat("HOT_PROPERTY"):
			return 4;
		case joaat("KING_OF_THE_CASTLE"):
			return 5;
		case joaat("KING_OF_THE_RAILS"):
			return 6;
		case joaat("PV_CHALLENGE_HERBALIST"):
			return 15;
		case joaat("PV_CHALLENGE_BIGGEST_FISH"):
			return 16;
		case joaat("PV_CHALLENGE_FLYING_BIRD"):
			return 17;
		case joaat("HUNT_THE_POSSE_LEADER"):
			return 18;
		case joaat("ESCAPED_CONVICTS"):
			return 8;
		case joaat("SUPPLY_TRAIN"):
			return 10;
		case joaat("ROUND_UP"):
			return 9;
		case joaat("WRECKAGE"):
			return 11;
		case joaat("CONDOR_EGG"):
			return 12;
		case -27117790:
			return 13;
		case 1653867545:
			return 14;
		case -142235487:
			return 7;
		default:
			break;
	}
	return -1;
}

int func_254(int iParam0)
{
	switch (iParam0)
	{
		case joaat("UGC_MAJOR_ID_DBG_VERSUS"):
			return 0;
		case joaat("UGC_MAJOR_ID_DBG_DEATHMATCH"):
			return 1;
		case joaat("UGC_MAJOR_ID_DBG_RACE"):
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
		case joaat("UGC_MAJOR_ID_LBM"):
			return 8;
		case joaat("UGC_MAJOR_ID_MOONSHINE_COOP"):
			return 9;
		case 1039801657:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_255(int iParam0)
{
	switch (iParam0)
	{
		case joaat("NULL"):
			return -1;
		case joaat("NORMAL"):
			return 0;
		case joaat("INTRO_CHAR"):
			return 1;
		case joaat("INTRO_GENERIC"):
			return 2;
		case 1322114923:
			return 3;
		case joaat("INTRO_FREEMODE"):
			return 4;
		case joaat("INTRO_CLAY2"):
			return 5;
		case joaat("TEAMSTER"):
			return 6;
		case joaat("BOUNTYHUNTER"):
			return 7;
		case joaat("GUNSLINGER"):
			return 8;
		case joaat("OUTLAW"):
			return 9;
		case joaat("HUNTER"):
			return 10;
		case joaat("TRADER"):
			return 11;
		case joaat("COLLECTOR"):
			return 12;
		case joaat("SEASON005"):
			return 13;
		case joaat("VIPSEASON005"):
			return 14;
		case joaat("MOONSHINER"):
			return 15;
		case joaat("SEASON006"):
			return 16;
		case joaat("VIPSEASON006"):
			return 17;
		case 1976336482:
			return 18;
		case -713504854:
			return 19;
		case 753957709:
			return 20;
		case 1054483531:
			return 21;
		case 547199896:
			return 22;
		default:
			break;
	}
	return -1;
}

int func_256(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = (iParam2 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if ((*uParam1)[iVar2 /*3*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if ((*uParam1)[iVar2 /*3*/] < iParam0)
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

bool func_257(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_258(iParam0, uParam1, &uVar0))
	{
		func_223(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_258(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381.f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_246(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

