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
	struct<12> Local_13 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 39;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
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
	var uLocal_68 = 39;
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
	var uLocal_113 = -1;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	func_1(&Local_13, vScriptParam_0);
	if (func_2() == -1)
	{
	}
	else
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		if (func_4(func_3(0)) != 7)
		{
		}
		else
		{
			func_5(&Local_13);
		}
	}
	if (func_2() == -1)
	{
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		{
			func_5(&Local_13);
		}
	}
	if (!TASK::_0x841475AC96E794D1(Local_13.f_11))
	{
		func_5(&Local_13);
	}
	while (func_6(&Local_13))
	{
		if (func_7())
		{
			func_5(&Local_13);
		}
		if (func_8(&Local_13))
		{
			func_5(&Local_13);
		}
		BUILTIN::WAIT(0);
	}
	func_5(&Local_13);
}

void func_1(var uParam0, vector3 vParam1)
{
	*uParam0 = func_9(vParam1);
	uParam0->f_1 = func_10(vParam1);
	uParam0->f_2 = func_11(vParam1);
	uParam0->f_3 = 0;
	uParam0->f_12 = vParam1.x;
	uParam0->f_11 = vParam1.y;
	uParam0->f_5 = { TASK::_0xA8452DD321607029(uParam0->f_11, 1) };
	uParam0->f_55[0] = 1924088058;
	uParam0->f_55[1] = 1639046972;
	uParam0->f_55[2] = -1963501782;
	uParam0->f_55[3] = 2143682238;
	uParam0->f_55[4] = -972590214;
	uParam0->f_55[5] = -417335499;
	uParam0->f_55[6] = 467408818;
	uParam0->f_55[7] = -2053586493;
	uParam0->f_55[8] = -2133164405;
	uParam0->f_55[9] = -1724023040;
	uParam0->f_55[10] = 494571889;
	uParam0->f_55[11] = 790068786;
	uParam0->f_55[12] = 1373471224;
	uParam0->f_55[13] = -1555042073;
	uParam0->f_55[14] = 1896032674;
	uParam0->f_55[15] = 1090498470;
	uParam0->f_55[16] = -458420031;
	uParam0->f_55[17] = 1664062243;
	uParam0->f_55[18] = -551182035;
	uParam0->f_55[19] = 384178408;
	uParam0->f_55[20] = 328855486;
	uParam0->f_55[21] = 1132161511;
	uParam0->f_55[22] = -1555585595;
	uParam0->f_55[23] = 383936181;
	uParam0->f_55[24] = 800098637;
	uParam0->f_55[25] = -1093637570;
	uParam0->f_55[26] = 1055791420;
	uParam0->f_55[27] = -586283258;
	uParam0->f_55[28] = -1922025145;
	uParam0->f_55[29] = -1653099775;
	uParam0->f_55[30] = 116619265;
	uParam0->f_55[31] = 1322862606;
	uParam0->f_55[32] = 1569902667;
	uParam0->f_55[33] = 1155584865;
	uParam0->f_55[34] = -2090931256;
	uParam0->f_55[35] = -2024019598;
	uParam0->f_55[36] = -274901691;
	uParam0->f_55[37] = 939128696;
	uParam0->f_55[38] = 76710316;
	uParam0->f_13 = func_12(uParam0);
}

int func_2()
{
	return Global_1572887->f_13;
}

struct<2> func_3(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

int func_4(var uParam0, var uParam1)
{
	return uParam0;
}

void func_5(var uParam0)
{
	func_13(&(uParam0->f_95));
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_54))
	{
		if (PLAYER::_0x0E6846476906C9DD(PLAYER::PLAYER_ID(), uParam0->f_54))
		{
			func_14(uParam0->f_54, uParam0->f_54, 0);
		}
	}
	SCRIPTS::_0xE7282390542F570D(uParam0->f_12);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_6(var uParam0)
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		func_5(uParam0);
		return 0;
	}
	return 1;
}

int func_7()
{
	return 0;
}

int func_8(var uParam0)
{
	bool bVar0;

	bVar0 = func_15(uParam0) < 4;
	if (func_15(uParam0) > 2 && func_15(uParam0) < 4)
	{
		func_16(&(uParam0->f_95), uParam0->f_5, bVar0, bVar0, 1);
	}
	if (func_17(Global_1275573->f_8, uParam0->f_5, 1) < 2f)
	{
		func_18(&(uParam0->f_95.f_6));
	}
	switch (func_15(uParam0))
	{
		case 0:
			func_19(uParam0, 1);
			break;
		case 1:
			if (!STREAMING::_0xCF45DF50C7775F2A())
			{
				if (!STREAMING::_IS_IMAP_ACTIVE_2(uParam0->f_1))
				{
					STREAMING::_REQUEST_IMAP_2(uParam0->f_1);
				}
				func_19(uParam0, 2);
			}
			break;
		case 2:
			if (func_20(uParam0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_21(uParam0)))
				{
					uParam0->f_8 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_54, true, false) };
					MAP::_0x7563CBCA99253D1A(uParam0->f_54, 187984275);
					MAP::_0x1726963E6049DB53(uParam0->f_54);
					func_22(uParam0->f_54, uParam0->f_54, 0);
					MISC::_0x553D67295DDD2309(uParam0->f_54);
					func_19(uParam0, 3);
				}
			}
			break;
		case 3:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_54))
			{
				if (func_20(uParam0) && ENTITY::DOES_ENTITY_EXIST(func_21(uParam0)))
				{
					MISC::_0x553D67295DDD2309(uParam0->f_54);
				}
				else
				{
					return 0;
				}
			}
			if (_NAMESPACE49::_0x188313616D184213(uParam0->f_8, ENTITY::GET_ENTITY_MODEL(uParam0->f_54)))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_54))
				{
					if (PLAYER::_0x0E6846476906C9DD(PLAYER::PLAYER_ID(), uParam0->f_54))
					{
						func_14(uParam0->f_54, uParam0->f_54, 0);
					}
					func_13(&(uParam0->f_95));
					func_19(uParam0, 4);
				}
			}
			break;
		case 4:
			break;
	}
	return 0;
}

int func_9(struct<2> Param0, var uParam2)
{
	int iVar0;
	var uVar1;

	uVar1 = Param0.f_1;
	if (TASK::_0x841475AC96E794D1(uVar1))
	{
		iVar0 = BUILTIN::ROUND(TASK::_0x6718F40313A2B5A6(uVar1));
	}
	switch (iVar0)
	{
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 7;
		case 8:
			return 8;
		case 9:
			return 9;
		case 10:
			return 10;
		case 11:
			return 11;
		case 12:
			return 12;
		case 13:
			return 13;
		case 14:
			return 14;
		case 15:
			return 15;
		case 16:
			return 16;
		case 17:
			return 17;
		case 18:
			return 18;
		case 19:
			return 19;
		case 20:
			return 20;
		case 21:
			return 21;
		case 22:
			return 22;
		case 23:
			return 23;
		case 24:
			return 24;
		case 25:
			return 25;
		case 26:
			return 26;
	}
	return 1;
}

int func_10(struct<2> Param0, var uParam2)
{
	int iVar0;
	var uVar1;

	uVar1 = Param0.f_1;
	if (TASK::_0x841475AC96E794D1(uVar1))
	{
		iVar0 = BUILTIN::ROUND(TASK::_0x6718F40313A2B5A6(uVar1));
	}
	switch (iVar0)
	{
		case 1:
			return -117847307;
		case 2:
			return 513934897;
		case 3:
			return 1181416174;
		case 4:
			return 373802338;
		case 5:
			return 620580306;
		case 6:
			return -1962566219;
		case 7:
			return 1423626752;
		case 8:
			return -509143136;
		case 9:
			return -1923863493;
		case 10:
			return -250669847;
		case 11:
			return 95187046;
		case 12:
			return 970334657;
		case 13:
			return 869083804;
		case 14:
			return 974243296;
		case 15:
			return 1803556695;
		case 16:
			return 82281660;
		case 17:
			return -1666038504;
		case 18:
			return 2111987179;
		case 19:
			return 1204906867;
		case 20:
			return 1143189384;
		case 21:
			return -1546507097;
		case 22:
			return -1082524312;
		case 23:
			return -833697651;
		case 24:
			return -783284068;
		case 25:
			return 1700073271;
		case 26:
			return 738652812;
	}
	return -117847307;
}

char* func_11(struct<2> Param0, var uParam2)
{
	int iVar0;
	var uVar1;

	uVar1 = Param0.f_1;
	if (TASK::_0x841475AC96E794D1(uVar1))
	{
		iVar0 = BUILTIN::ROUND(TASK::_0x6718F40313A2B5A6(uVar1));
	}
	switch (iVar0)
	{
		case 1:
			return "MP005_A1_ARBracelet02_IPL";
		case 2:
			return "MP005_A2_BMecklace03_IPL";
		case 3:
			return "mp005_a1_BPRing02_IPL";
		case 4:
			return "MP005_a2_BANecklace01_IPL";
		case 5:
			return "MP005_a2_BANecklace02_IPL";
		case 6:
			return "MP005_A2_BANecklace03_IPL";
		case 7:
			return "MP005_A1_DPBBracelet02_IPL";
		case 8:
			return "MP005_A2_DPBracelet03_IPL";
		case 9:
			return "MP005_A1_FPNecklace02_IPL";
		case 10:
			return "MP005_a1_GWGNecklace01_IPL";
		case 11:
			return "MP005_A2_HGBracelet02_IPL";
		case 12:
			return "MP005_A1_HGBBracelet03_IPL";
		case 13:
			return "mp005_a2_HGEarring02_IPL";
		case 14:
			return "mp005_a2_HCRing02_IPL";
		case 15:
			return "MP005_A2_HSBRACELET01_IPL";
		case 16:
			return "MP005_A1_HSBracelet02_IPL";
		case 17:
			return "MP005_A4_HSBracelet03_IPL";
		case 18:
			return "MP005_A4_ITBracelet03_IPL";
		case 19:
			return "mp005_a1_MTRing02_IPL";
		case 20:
			return "MP005_A4_ORGBBracelet03_IPL";
		case 21:
			return "MP005_A3_ODEarring1_IPL";
		case 22:
			return "MP005_A3_RANecklace02_IPL";
		case 23:
			return "MP005_A4_RANecklace03_IPL";
		case 24:
			return "mp005_a1_SDRing01_IPL";
		case 25:
			return "mp005_a1_WDRing1_IPL";
		case 26:
			return "mp005_a2_DEEarring02_IPL";
	}
	return "mp005_a1_arbracelet02_ipl";
}

int func_12(var uParam0)
{
	int iVar0;

	iVar0 = -1;
	switch (*uParam0)
	{
		case 1:
			iVar0 = 1776680074;
			break;
		case 2:
			iVar0 = 1776680074;
			break;
		case 3:
			iVar0 = 1776680074;
			break;
		case 4:
			iVar0 = 1776680074;
			break;
		case 5:
			iVar0 = 1776680074;
			break;
		case 6:
			iVar0 = 1776680074;
			break;
		case 7:
			iVar0 = 1776680074;
			break;
		case 8:
			iVar0 = 1776680074;
			break;
		case 9:
			iVar0 = 1776680074;
			break;
		case 10:
			iVar0 = 1776680074;
			break;
		case 11:
			iVar0 = 1776680074;
			break;
		case 12:
			iVar0 = 1776680074;
			break;
		case 13:
			iVar0 = 1776680074;
			break;
		case 14:
			iVar0 = 1776680074;
			break;
		case 15:
			iVar0 = 1776680074;
			break;
		case 16:
			iVar0 = 1776680074;
			break;
		case 17:
			iVar0 = 1776680074;
			break;
		case 18:
			iVar0 = 1776680074;
			break;
		case 19:
			iVar0 = 1776680074;
			break;
		case 20:
			iVar0 = 1776680074;
			break;
		case 21:
			iVar0 = 1776680074;
			break;
		case 22:
			iVar0 = 1776680074;
			break;
		case 23:
			iVar0 = 1776680074;
			break;
		case 24:
			iVar0 = 1776680074;
			break;
		case 25:
			iVar0 = 1776680074;
			break;
		case 26:
			iVar0 = 1776680074;
			break;
	}
	return iVar0;
}

void func_13(var uParam0)
{
	func_23(uParam0);
	func_24(&(uParam0->f_7), 1);
}

int func_14(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	struct<2> Var1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ITEMSET::IS_ITEMSET_VALID(Global_1276326->f_31) && ITEMSET::IS_IN_ITEMSET(iParam0, Global_1276326->f_31))
	{
		ITEMSET::REMOVE_FROM_ITEMSET(iParam0, Global_1276326->f_31);
	}
	PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), iParam0);
	PLAYER::_0xDC5E09D012D759C4(iParam0, uParam1, iParam2);
	Var1.f_1 = -1082130432;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1276326[iVar0 /*2*/]) && Global_1276326[iVar0 /*2*/] == iParam0)
		{
			MISC::_COPY_MEMORY((*Global_1276326)[iVar0 /*2*/], &Var1, 2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_15(var uParam0)
{
	return uParam0->f_3;
}

void func_16(var uParam0, vector3 vParam1, bool bParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (!func_25(-1733092640 /* GXTEntry: "Collector\'s Bag" */, 1))
	{
		return;
	}
	if (func_26(0))
	{
		return;
	}
	if (func_27())
	{
		return;
	}
	if (&Global_1048576)
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		return;
	}
	if (TASK::_0xEC7E480FF8BD0BED(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		return;
	}
	if (!bParam4 && uParam0->f_1 == 0)
	{
		return;
	}
	if (!func_28(*Global_1201104) && MISC::GET_DISTANCE_BETWEEN_COORDS(*Global_1201104, vParam1, true) <= 5f)
	{
		bVar0 = true;
	}
	if (bVar0 && uParam0->f_1 == 0)
	{
		return;
	}
	fVar1 = func_17(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), vParam1, 1);
	fVar2 = 10f;
	fVar2 = (fVar2 * (1f + func_29()));
	switch (uParam0->f_1)
	{
		case 0:
			if (fVar1 < fVar2)
			{
				if (bParam5)
				{
					if (AUDIO::_0xD9130842D7226045("RDRO_Collectible_Sounds_Travelling_Saleswoman", 0))
					{
						uParam0->f_5 = AUDIO::GET_SOUND_ID();
						if (func_30(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1, 0) != -862059856)
						{
							AUDIO::_0xDCF5BA95BBF0FABA(uParam0->f_5, "collectible_lure", vParam1, "RDRO_Collectible_Sounds_Travelling_Saleswoman", 0, 0, iParam6);
						}
						func_31(uParam0, 1);
					}
				}
				else
				{
					func_31(uParam0, 1);
				}
			}
			break;
		case 1:
			iVar3 = BUILTIN::FLOOR((500f * ((fVar2 - fVar1) / fVar2)));
			iVar4 = BUILTIN::FLOOR((256f * ((fVar2 - fVar1) / fVar2)));
			if (iVar3 > 9999)
			{
				iVar3 = 9999;
			}
			PAD::SET_PAD_SHAKE(0, iVar3, iVar4);
			func_32(&(uParam0->f_2));
			func_31(uParam0, 2);
			break;
		case 2:
			if ((fVar1 >= (fVar2 + 5f) || !bParam4) || bVar0)
			{
				if (bParam5)
				{
					func_23(uParam0);
				}
				func_31(uParam0, 0);
			}
			else if (func_33(&(uParam0->f_2)) >= 2f)
			{
				func_31(uParam0, 1);
			}
			break;
	}
}

float func_17(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_18(var uParam0)
{
	if (AUDIO::_0xD9130842D7226045("RDRO_Collectible_Sounds_Travelling_Saleswoman", 0))
	{
		if (HUD::_0x1BE19185B8AFE299(joaat("INPUT_LOOT3")))
		{
			if (!*uParam0)
			{
				AUDIO::PLAY_SOUND_FRONTEND("collectible_found", "RDRO_Collectible_Sounds_Travelling_Saleswoman", true, 0);
				*uParam0 = 1;
			}
		}
		else if (*uParam0)
		{
			*uParam0 = 0;
		}
	}
}

void func_19(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

int func_20(var uParam0)
{
	if (func_34(&(uParam0->f_14), &(uParam0->f_55), 1, uParam0->f_5, 5f) > 0)
	{
		return 1;
	}
	return 0;
}

var func_21(var uParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_14[iVar0])))
		{
			uParam0->f_54 = &uParam0->f_14[iVar0];
			return &(uParam0->f_14[iVar0]);
		}
		iVar0++;
	}
	return uVar1;
}

int func_22(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(Global_1276326->f_31))
	{
		Global_1276326->f_31 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ITEMSET::IS_IN_ITEMSET(iParam0, Global_1276326->f_31))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam0, Global_1276326->f_31);
	}
	if (!func_35(iParam0))
	{
		PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), iParam0, 0);
		PLAYER::_0x6ECFC621A168424C(iParam0, uParam1, iParam2);
		PLAYER::_0x907B16B3834C69E2(iParam0, 500f);
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1276326[iVar0 /*2*/]))
		{
			(*Global_1276326)[iVar0 /*2*/] = iParam0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_23(var uParam0)
{
	if (uParam0->f_5 != -1)
	{
		AUDIO::_0x0F2A2175734926D8("collectible_lure", "RDRO_Collectible_Sounds_Travelling_Saleswoman");
		AUDIO::RELEASE_SOUND_ID(uParam0->f_5);
		PAD::STOP_PAD_SHAKE(0);
		uParam0->f_5 = -1;
	}
	AUDIO::_0x531A78D6BF27014B("RDRO_Collectible_Sounds_Travelling_Saleswoman");
}

void func_24(var uParam0, int iParam1)
{
	if (func_36(uParam0))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(uParam0, iParam1);
	}
}

bool func_25(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_37(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_38(iParam0);
	switch (iVar0)
	{
		case joaat("weapon"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, 0))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("ammo"):
			if (!func_39(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("clothing"):
			if (func_40(iParam0))
			{
				return true;
			}
			break;
	}
	return func_41(iParam0, 0, 0, 0) >= iParam1;
}

bool func_26(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915180->f_20136;
	}
	return (Global_1915180->f_20136 || Global_1915180->f_21989.f_1);
}

bool func_27()
{
	return func_42() != -1;
}

int func_28(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

float func_29()
{
	return (Global_1140484->f_2001[82 /*192*/])->f_188;
}

int func_30(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

void func_31(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_32(var uParam0)
{
	func_43(uParam0, 0f);
}

float func_33(var uParam0)
{
	if (!func_44(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_45(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_46() - uParam0->f_1);
}

int func_34(var uParam0, var uParam1, int iParam2, vector3 vParam3, float fParam6)
{
	var uVar0;
	var uVar1;

	uVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	uVar1 = func_47(uParam0, uParam1, uVar0, iParam2);
	func_48(uVar0);
	return uVar1;
}

int func_35(int iParam0)
{
	struct<5> Var0;
	var uVar5;
	int iVar13;
	int iVar14;
	int iVar15;

	if (func_49() == 0)
	{
		return 0;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(func_49()))
	{
		return 0;
	}
	Var0 = func_49();
	Var0.f_2 = 0;
	Var0.f_3 = 0;
	Var0.f_4 = 0;
	Var0.f_1 = 0;
	iVar13 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar14 = 0;
	while (iVar14 < 30)
	{
		Var0.f_1 = 0;
		Var0.f_3 = iVar14;
		Var0.f_2 = 0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 1;
			if (DATAFILE::_DATAFILE_GET_STRING(&uVar5, &Var0))
			{
				iVar15 = MISC::GET_HASH_KEY(&uVar5);
				if (iVar13 == iVar15)
				{
					return 1;
				}
			}
		}
		iVar14++;
	}
	return 0;
}

bool func_36(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

int func_37(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_38(int iParam0)
{
	vector3 vVar0;

	if (!func_37(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_39(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_37(iParam0, 0))
	{
		return 0;
	}
	if (Global_1939178->f_6)
	{
		return 0;
	}
	iVar0 = func_50(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_51("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_52(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_53(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_54(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_54(iVar1);
	}
	return 0;
}

bool func_40(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_37(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_55(iParam0);
	switch (iVar0)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1216664798:
		case 1341188928:
			break;
		default:
			return false;
	}
	iVar1 = func_56(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_57(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_58(iParam0);
	iVar2 = func_57(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17172.f_54.f_644.f_1353.f_5[iVar2 /*17*/];
}

int func_41(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_37(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_38(iParam0);
	if (iVar1 == joaat("ammo") || (bParam1 && iVar1 == joaat("weapon")))
	{
		iVar2 = func_50(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("weapon"))
	{
		return func_59(iParam0, 0);
	}
	if (func_60(iParam0, joaat("default")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_61(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_62(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_61(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

int func_42()
{
	return Global_1132549->f_137;
}

void func_43(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_46() - fParam1);
	func_63(uParam0, 1);
	func_64(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_44(var uParam0)
{
	return func_65(*uParam0, 1);
}

bool func_45(var uParam0)
{
	return func_65(*uParam0, 2);
}

float func_46()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_47(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(uParam2, iVar0, 3);
	if (iVar6 >= iParam3)
	{
	}
	iVar4 = 0;
	while (iVar4 < iVar6)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
		iVar2 = iVar1;
		if (ENTITY::IS_ENTITY_AN_OBJECT(iVar2))
		{
			iVar5 = 0;
			while (iVar5 < *uParam1)
			{
				if (uParam1[iVar5] == 0)
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *uParam1;
				}
				else if (ENTITY::GET_ENTITY_MODEL(iVar2) == uParam1[iVar5])
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *uParam1;
				}
				iVar5++;
			}
		}
		if (iVar3 >= iParam3)
		{
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return iParam3;
		}
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar3;
}

void func_48(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0))
	{
		VOLUME::_DELETE_VOLUME(uParam0);
	}
}

int func_49()
{
	return (Global_1070356->f_26934[46 /*4*/])->f_3;
}

int func_50(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_37(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_38(iParam0);
	if (iVar0 == joaat("weapon") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == joaat("ammo") && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_66(iParam0, 1399091007))
	{
		func_67(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_51(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_61(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_52(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_53(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_54(int iParam0)
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

int func_55(int iParam0)
{
	struct<2> Var0;

	if (!func_37(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_56(int iParam0)
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

int func_57(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (((*uParam0)[iVar0 /*17*/])->f_1 == -1)
		{
		}
		else
		{
			if (((*uParam0)[iVar0 /*17*/])->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_58(int iParam0)
{
	int iVar0;

	iVar0 = func_55(iParam0);
	switch (iVar0)
	{
		case 1341188928:
			return -2056583192;
		case 1216664798:
			return 1015239729;
		case 829857647:
			return -340627321;
		case -636562458:
			return -875805376;
		case 252325943:
			return -768760704;
		default:
			break;
	}
	return 0;
}

int func_59(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_68(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_70(&Var0, func_69(0));
	}
	if (!func_71(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_54(iVar14);
	return uVar15;
}

int func_60(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

int func_61(bool bParam0)
{
	if (func_2() == -1)
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

struct<4> func_62(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_72(iParam0, bParam1, 0) };
	return func_73(iParam0, Var0, Var0.f_4, bParam1);
}

void func_63(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_64(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_65(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_66(int iParam0, int iParam1)
{
	if (!func_37(iParam0, 0))
	{
		return func_75(func_74(iParam0), iParam1);
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

void func_67(int iParam0, var uParam1, var uParam2)
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

struct<14> func_68(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_69(bool bParam0)
{
	int iVar0;

	iVar0 = func_61(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_4)))
		{
			Global_1272170->f_4 = { func_73(923904168, func_76(bParam0), -740156546, bParam0) };
		}
		return Global_1272170->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_16)))
		{
			Global_1272170->f_16 = { func_73(923904168, func_76(bParam0), -740156546, 0) };
		}
		return Global_1272170->f_16;
	}
	return func_73(923904168, func_76(bParam0), -740156546, 0);
}

void func_70(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_71(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_61(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

struct<5> func_72(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_76(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_38(iParam0);
	switch (iVar5)
	{
		case joaat("clothing"):
			Var0 = { func_73(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			break;
		case joaat("weapon"):
			Var0 = { func_69(bParam1) };
			if (iParam2 && func_77(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_78(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_78(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_79(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_80(bParam1) };
			switch (func_55(iParam0))
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
			if (func_81(iParam0, -1823706425))
			{
				Var0 = { func_73(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_81(iParam0, -1483207246))
			{
				Var0 = { func_73(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1911121386))
			{
				Var0 = { func_73(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_81(iParam0, -1653629781))
			{
				Var0 = { func_73(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_82(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_81(iParam0, -1653629781))
			{
				Var0 = { func_73(1384535894, Var0, 1784584921, bParam1) };
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

struct<4> func_73(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_37(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_61(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_74(int iParam0)
{
	return iParam0;
}

int func_75(int iParam0, int iParam1)
{
	if (!func_83(iParam0, 2))
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

struct<4> func_76(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_61(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1272170))
			{
				*Global_1272170 = { func_73(joaat("character"), func_84(), -1591664384, bParam0) };
			}
			return *Global_1272170;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_12)))
			{
				Global_1272170->f_12 = { func_73(joaat("character"), func_84(), -1591664384, 0) };
			}
			return Global_1272170->f_12;
		}
	}
	return func_73(joaat("character"), func_84(), -1591664384, bParam0);
}

int func_77(int iParam0, bool bParam1)
{
	if (func_55(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_85();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_78(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_86(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

int func_79(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_87(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_80(bool bParam0)
{
	int iVar0;

	iVar0 = func_61(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_8)))
		{
			Global_1272170->f_8 = { func_73(271701509, func_76(bParam0), 12999093, 0) };
		}
		return Global_1272170->f_8;
	}
	return func_73(271701509, func_76(bParam0), 12999093, 0);
}

int func_81(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_55(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_88(iParam0, iParam1, iVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_82(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_89(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_83(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

struct<4> func_84()
{
	struct<4> Var0;

	return Var0;
}

bool func_85()
{
	return (func_90(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, 0, 0) > 0 && func_91(func_73(889965687 /* GXTEntry: "Wardrobe" */, func_76(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_86(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_37(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_60(iParam0, joaat("default")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_73(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_61(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_61(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_87(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_61(0);
	*uParam1 = { func_73(iParam0, func_69(0), iParam3, 0) };
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

int func_88(int iParam0, int iParam1, int iParam2)
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

int func_89(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_61(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_90(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_92(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_61(bParam1), iParam0, iParam3);
}

int func_91(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_93(&uParam0, iParam4, bParam5, iParam6);
}

bool func_92(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_93(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_94(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_94(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_61(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return 0;
	}
	if (!func_89(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

