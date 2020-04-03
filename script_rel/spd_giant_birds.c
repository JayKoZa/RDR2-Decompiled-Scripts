#region Local Var
	var uLocal_0[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_31 = 0f;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (iLocal_13 >= 3)
		{
			func_1(iLocal_13 >= 4);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	bVar0 = false;
	while (!bVar0)
	{
		BUILTIN::WAIT(0);
		switch (iLocal_13)
		{
			case 0:
				iLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(613.343f, 2192.701f, 223.576f, 0f, 0f, 11f, 29f, 46f, 9f, "BirdsTrigger");
				PED::_0xED9582B3DA8F02B4(12);
				STREAMING::REQUEST_MODEL(func_2(), false);
				iLocal_13 = 1;
				break;
			case 1:
				if (STREAMING::HAS_MODEL_LOADED(func_2()))
				{
					iLocal_13 = 2;
				}
				break;
			case 2:
				if (PED::_0x5C16855277819BBF() >= 12)
				{
					if (func_3())
					{
						iLocal_13 = 3;
					}
				}
				break;
			case 3:
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0) || MISC::IS_BULLET_IN_AREA(618.4946f, 2197.932f, 222.0223f, 13f, true))
				{
					iLocal_13 = 4;
					iLocal_15 = MISC::GET_GAME_TIMER();
				}
				break;
			case 4:
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (!PED::IS_PED_INJURED(&(uLocal_0[iVar1])))
					{
						if ((TASK::GET_SCRIPT_TASK_STATUS(&(uLocal_0[iVar1]), -708058584, 1) == 8 || iLocal_18[iVar1]) // PointerArith)
						{
							iVar2 = 0;
							switch (iVar2)
							{
								case 0:
									iVar2 = 0;
									break;
								case 1:
									iVar2 = 50;
									break;
								case 2:
									iVar2 = 160;
									break;
								case 3:
									iVar2 = 400;
									break;
								case 4:
									iVar2 = 310;
									break;
								case 5:
									iVar2 = 120;
									break;
								case 6:
									iVar2 = 200;
									break;
								case 7:
									iVar2 = 280;
									break;
								case 8:
									iVar2 = 390;
									break;
								case 9:
									iVar2 = 70;
									break;
								case 10:
									iVar2 = 220;
									break;
								case 11:
									iVar2 = 150;
									break;
							}
							if (MISC::GET_GAME_TIMER() >= (iVar2 + iLocal_15))
							{
								TASK::TASK_FLY_TO_COORD(&(uLocal_0[iVar1]), 3f, func_4(iLocal_16), 0, 1);
								iLocal_18[iVar1] = 0;
							}
						}
					}
					iVar1++;
				}
				if (!PED::IS_PED_INJURED(&(uLocal_0[0])))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(&(uLocal_0[0]), func_4(iLocal_16), 20f, 20f, 20f, false, false, 0))
					{
						iLocal_13 = 5;
					}
				}
				break;
			case 5:
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (!PED::IS_PED_INJURED(&(uLocal_0[iVar1])))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(&(uLocal_0[iVar1]), 475934052, 1) != 8)
						{
						}
						else
						{
							TASK::TASK_FLYING_CIRCLE(&(uLocal_0[iVar1]), 2f, func_4(iLocal_16), 2f, 10f);
						}
					}
					iVar1++;
				}
				if (!PED::IS_PED_INJURED(&(uLocal_0[0])))
				{
					vVar3 = { func_5(iLocal_16) };
					if (ENTITY::IS_ENTITY_AT_COORD(Global_35, func_4(iLocal_16), vVar3, false, false, 0))
					{
						if (iLocal_16 < 11)
						{
							iVar1 = 0;
							while (iVar1 < 12)
							{
								iLocal_18[iVar1] = 1;
								iVar1++;
							}
							iLocal_16 = (1 + iLocal_16);
							iLocal_13 = 4;
						}
						else
						{
							func_6();
							SCRIPTS::TERMINATE_THIS_THREAD();
						}
					}
				}
				break;
		}
		if (!func_7(12, 8388608))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1708.799f, 2160.965f, 318.8729f, false) < 160f)
			{
				(Global_40.f_11623[12 /*8*/])->f_2 = -15;
				func_8(12, 8388608, 1);
			}
		}
		if (iLocal_13 >= 3)
		{
			bVar6 = false;
			bVar7 = false;
			if (PED::IS_PED_INJURED(&(uLocal_0[iLocal_17])))
			{
				bVar7 = true;
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(Global_35, &(uLocal_0[iLocal_17]), 250f, 250f, 250f, false, false, 0))
			{
				bVar6 = true;
			}
			iLocal_17++;
			if (iLocal_17 >= 12)
			{
				iLocal_17 = 0;
			}
			if (!bVar6)
			{
				fLocal_31 = ((1f * BUILTIN::TIMESTEP()) + fLocal_31);
			}
			else
			{
				fLocal_31 = 0f;
			}
			if (bVar7 || fLocal_31 >= 5f)
			{
				if (fLocal_31 >= 5f)
				{
				}
				func_6();
				func_1((bVar7 || iLocal_13 >= 4));
				func_9(&(((*Global_1396257)[12 /*638*/])->f_626), 16384, 0);
				SCRIPTS::TERMINATE_THIS_THREAD();
			}
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(bool bParam0)
{
	if (bParam0)
	{
		(Global_40.f_11623[12 /*8*/])->f_2 = func_10();
	}
	func_9(&(((*Global_1396257)[12 /*638*/])->f_626), 8192, 1);
}

int func_2()
{
	return joaat("a_c_pheasant_01");
}

int func_3()
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(uLocal_0[iVar0])))
		{
			switch (iVar0)
			{
				case 0:
					vVar1 = { 622.3134f, 2200.764f, 221.5856f };
					fVar4 = -160f;
					break;
				case 1:
					vVar1 = { 621.2441f, 2199.146f, 221.7287f };
					fVar4 = -120f;
					break;
				case 2:
					vVar1 = { 619.4209f, 2194.512f, 221.7715f };
					fVar4 = -99f;
					break;
				case 3:
					vVar1 = { 619.327f, 2192.713f, 221.5658f };
					fVar4 = -155f;
					break;
				case 4:
					vVar1 = { 623.7524f, 2199.419f, 221.4249f };
					fVar4 = 142f;
					break;
				case 5:
					vVar1 = { 621.4307f, 2195.696f, 221.644f };
					fVar4 = -11f;
					break;
				case 6:
					vVar1 = { 623.0302f, 2189.17f, 220.8486f };
					fVar4 = -33f;
					break;
				case 7:
					vVar1 = { 618.2859f, 2196.883f, 222.0049f };
					fVar4 = 40f;
					break;
				case 8:
					vVar1 = { 617.9752f, 2193.77f, 221.7816f };
					fVar4 = -175f;
					break;
				case 9:
					vVar1 = { 620.5045f, 2199.149f, 221.8133f };
					fVar4 = -42f;
					break;
				case 10:
					vVar1 = { 632.3511f, 2197.817f, 220.63f };
					fVar4 = 20f;
					break;
				case 11:
					vVar1 = { 626.5476f, 2191.122f, 220.7776f };
					fVar4 = 68f;
					break;
			}
			uLocal_0[iVar0] = func_11(func_2(), vVar1, fVar4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uLocal_0[iVar0]), true);
			PED::SET_PED_KEEP_TASK(&(uLocal_0[iVar0]), true);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(&(uLocal_0[iVar0]), true);
			return 0;
		}
		iVar0++;
	}
	return 1;
}

Vector3 func_4(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 637f, 2120f, 236f;
		case 1:
			return 673f, 2034f, 245f;
		case 2:
			return 666f, 1935f, 241f;
		case 3:
			return 750f, 1924f, 260f;
		case 4:
			return 830f, 1851f, 270f;
		case 5:
			return 920f, 1862f, 298f;
		case 6:
			return 1003f, 1870f, 355f;
		case 7:
			return 1197f, 1896f, 349f;
		case 8:
			return 1358f, 2035f, 326f;
		case 9:
			return 1569f, 2129f, 334f;
		case 10:
			return 1723.816f, 2167.888f, 349.4869f;
	}
	return 0f, 0f, 0f;
}

Vector3 func_5(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 40f, 40f, 40f;
		case 1:
			return 45f, 45f, 45f;
		case 5:
			return 55f, 55f, 55f;
		case 6:
			return 65f, 65f, 65f;
		case 7:
			return 55f, 55f, 55f;
	}
	return 45f, 45f, 45f;
}

void func_6()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!PED::IS_PED_INJURED(&(uLocal_0[iVar0])))
		{
			TASK::TASK_FLY_AWAY(&(uLocal_0[iVar0]), Global_35);
		}
		iVar0++;
	}
}

bool func_7(int iParam0, int iParam1)
{
	return func_12((Global_40.f_11623[iParam0 /*8*/])->f_1, iParam1);
}

void func_8(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_13(&((Global_40.f_11623[iParam0 /*8*/])->f_1), iParam1);
	}
	else
	{
		func_14(&((Global_40.f_11623[iParam0 /*8*/])->f_1), iParam1);
	}
}

void func_9(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_13(uParam0, iParam1);
	}
	else
	{
		func_14(uParam0, iParam1);
	}
}

var func_10()
{
	return &Global_1899515;
}

int func_11(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_15(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_12(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_13(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_14(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_15(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_16(iParam1))
		{
			func_17(iParam0, 41788943);
		}
		else if (bParam5)
		{
			PED::_0x283978A15512B2FE(iParam0, 1);
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
			func_18(iParam0, 0, 1);
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
			func_19(iParam0, 0);
			bVar0 = true;
		}
		func_20(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

int func_16(int iParam0)
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

void func_17(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_21(iParam0, iParam1))
		{
			if (func_22(iParam0, iParam1))
			{
				if (func_23(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_24(iParam0);
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

void func_18(int iParam0, int iParam1, bool bParam2)
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

void func_19(int iParam0, bool bParam1)
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

void func_20(int iParam0, int iParam1)
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

bool func_21(int iParam0, int iParam1)
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

int func_22(int iParam0, int iParam1)
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

int func_23(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return 0;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (!func_21(iParam0, iVar0))
	{
		return 1;
	}
	if (iVar0 != iParam1)
	{
		return 0;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

void func_24(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

