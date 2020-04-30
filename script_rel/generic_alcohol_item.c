#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	struct<181> Var0;
	float fVar182;
	bool bVar183;
	int iVar184;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	Var0.f_2.f_2 = 1086324736;
	Var0.f_2.f_11.f_1 = 20;
	Var0.f_2.f_33 = 20;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (!ScriptParam_0.f_3 && !Var0.f_180)
		{
			func_1(0);
		}
		func_2();
	}
	func_3(&ScriptParam_0, &(Var0.f_2));
	Var0.f_180 = 1;
	fVar182 = func_4(&Var0, &(ScriptParam_0.f_1));
	if (Var0.f_180)
	{
		Var0.f_2.f_2 = 1f;
	}
	else
	{
		Var0.f_2.f_2 = 4f;
	}
	if (!ScriptParam_0.f_3 && !Var0.f_180)
	{
		func_1(1);
		func_5();
	}
	while (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		if (!ScriptParam_0.f_3)
		{
			if (!Var0.f_180)
			{
				iVar184 = TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_35);
				func_6(&Var0);
				if (iVar184 == 1587785400 || iVar184 == 1183277175)
				{
					func_7(&Var0);
				}
				else if (iVar184 == 1342098323 || iVar184 == 79398913)
				{
					func_8(&Var0);
				}
				if (!PED::IS_PED_DEAD_OR_DYING(Global_35, true))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
				}
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
			func_9(&(Var0.f_2));
		}
		switch (Var0)
		{
			case 0:
				if (func_10(Var0.f_2, 0))
				{
					func_11(&(Var0.f_2));
				}
				if (ScriptParam_0.f_3)
				{
					Var0.f_2.f_2 = 1f;
					func_12(&Var0, 3);
				}
				else
				{
					func_12(&Var0, 1);
				}
				break;
			case 1:
				if (!Var0.f_180)
				{
					func_13(iVar184);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 442509369))
				{
					Var0.f_2.f_1 = (1 + Var0.f_2.f_1);
					func_14(fVar182);
					func_15(&(Var0.f_2), IntToFloat(Var0.f_2.f_1) >= Var0.f_2.f_2);
				}
				if (IntToFloat(Var0.f_2.f_1) >= Var0.f_2.f_2)
				{
					func_16(Var0.f_2, 0);
					func_12(&Var0, 2);
				}
				if (!Var0.f_180)
				{
					if ((MISC::GET_FRAME_COUNT() % 10) == 0 && ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_35) > 0.2f)
					{
						func_12(&Var0, 2);
					}
				}
				break;
			case 2:
				if (!Var0.f_180)
				{
					if (iVar184 == -1493684811 || iVar184 == -752898125)
					{
						TASK::_0xB35370D5353995CB(Global_35, func_17(Var0.f_2, iVar184), 0.25f);
						func_12(&Var0, 4);
					}
					else if (iVar184 != 1587785400)
					{
						if (iVar184 == 1342098323)
						{
							PED::_0xD65FDC686A031C83(Global_35, -1268666326, 1.5f);
							PED::_0x6D07B371E9439019(Global_35);
							func_12(&Var0, 4);
						}
					}
					else
					{
						if (TASK::_0x2D0571BB55879DA2(Global_35) != -1177373461)
						{
							PED::_0xD65FDC686A031C83(Global_35, -872596011, 3f);
							PED::_0x6D07B371E9439019(Global_35);
						}
						else
						{
							PED::_0xD65FDC686A031C83(Global_35, 1114994170, 1.5f);
							PED::_0x6D07B371E9439019(Global_35);
						}
						func_12(&Var0, 4);
					}
				}
				else
				{
					func_12(&Var0, 4);
				}
				break;
			case 3:
				func_14(fVar182);
				func_15(&(Var0.f_2), 1);
				func_16(Var0.f_2, 0);
				func_12(&Var0, 4);
				break;
			case 4:
				if (ScriptParam_0.f_3)
				{
					SCRIPTS::TERMINATE_THIS_THREAD();
				}
				else if (!bVar183)
				{
					if ((func_18() == -1 && func_19(0)) && func_20(Var0.f_2, 1490540191))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
						{
							if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
							{
								if (func_21(Global_35, "Player_Sick_Drinking_Cough", joaat("speech_params_force"), 0, 1, 0, 0, 1))
								{
									bVar183 = true;
								}
							}
						}
					}
					else
					{
						bVar183 = true;
					}
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	if (Var0 <= 1)
	{
		func_15(&(Var0.f_2), 1);
		func_16(Var0.f_2, 0);
	}
	if (!ScriptParam_0.f_3 && !Var0.f_180)
	{
		func_1(0);
	}
}

void func_1(int iParam0)
{
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 5, 0, iParam0);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 50, 0, iParam0);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 49, 0, iParam0);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 11, 0, iParam0);
}

void func_2()
{
	if (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_3(var uParam0, var uParam1)
{
	*uParam1 = uParam0->f_2;
	uParam1->f_174 = uParam0->f_1;
	uParam1->f_175 = Global_35;
}

float func_4(var uParam0, var uParam1)
{
	float fVar0;
	int iVar1;

	switch (uParam0->f_2)
	{
		case 731751336: /* GXTEntry: "Opened Guarma Rum" */
			fVar0 = 0.1f;
			break;
		case -1999230166: /* GXTEntry: "Opened Fine Brandy" */
			fVar0 = 0.1f;
			break;
		case -1724285052: /* GXTEntry: "Opened Gin" */
			fVar0 = 0.1f;
			break;
		case 1483206625: /* GXTEntry: "Guarma Rum" */
			fVar0 = 0.17f;
			break;
		case -24362764: /* GXTEntry: "Beer" */
			fVar0 = 0.025f;
			uParam0->f_180 = 0;
			break;
		case -368374107:
			fVar0 = 0.1f;
			uParam0->f_180 = 0;
			break;
		case 785091089: /* GXTEntry: "Fine Brandy" */
			fVar0 = 0.17f;
			break;
		case -221280702: /* GXTEntry: "Gin" */
			fVar0 = 0.17f;
			break;
		case -1907044919: /* GXTEntry: "Opened Kentucky Bourbon" */
			fVar0 = 0.13f;
			break;
		case 688258043: /* GXTEntry: "Kentucky Bourbon" */
			fVar0 = 0.25f;
			break;
		case -1679900928:
			fVar0 = 0.25f;
			break;
		case -520953319:
			fVar0 = 0.13f;
			break;
		case 299161628: /* GXTEntry: "Moonshine" */
			fVar0 = 0.3f;
			break;
		case -21093309: /* GXTEntry: "Aged Pirate Rum" */
			fVar0 = 0.5f;
			break;
		default:
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				iVar1 = ENTITY::GET_ENTITY_MODEL(*uParam1);
				if (iVar1 == -686064834)
				{
					uParam0->f_2 = -24362764; /* GXTEntry: "Beer" */
					fVar0 = 0.025f;
					uParam0->f_180 = 0;
				}
				else if (iVar1 == joaat("p_bottlejd01x"))
				{
					uParam0->f_2 = -368374107;
					fVar0 = 0.1f;
					uParam0->f_180 = 0;
				}
			}
			break;
	}
	if (func_22(-127011478 /* GXTEntry: "Wolf Heart Trinket" */, 1, 0))
	{
		fVar0 = (fVar0 * 0.5f);
	}
	return fVar0;
}

void func_5()
{
	if (TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_35) == -664271430)
	{
		STREAMING::_REQUEST_CLIP_SET_BY_HASH(-1154614502);
	}
	else
	{
		STREAMING::_REQUEST_CLIP_SET_BY_HASH(-1734420286);
	}
}

void func_6(var uParam0)
{
	if ((IntToFloat(uParam0->f_2.f_1) / uParam0->f_2.f_2) > 0.5f)
	{
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_ALCOHOL_BLOCK_AWAY_PROMPT", 1, 1);
	}
	switch (uParam0->f_1)
	{
		case 0:
			if (IntToFloat(uParam0->f_2.f_1) / uParam0->f_2.f_2) >= (1f / 3f)
			{
				if (!ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2089200315))
				{
					uParam0->f_1 = 1;
				}
			}
			break;
		case 1:
			PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_ALCOHOL_BLOCK_CHUG_A", 1, 1);
			PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_ALCOHOL_ALLOW_CHUG_B", 1, 1);
			if (IntToFloat(uParam0->f_2.f_1) / uParam0->f_2.f_2) >= (2f / 3f)
			{
				if (!ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2089200315))
				{
					uParam0->f_1 = 2;
				}
			}
			break;
		case 2:
			PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_ALCOHOL_BLOCK_CHUG_A", 1, 1);
			PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_ALCOHOL_ALLOW_CHUG_C", 1, 1);
			if ((IntToFloat(uParam0->f_2.f_1) / uParam0->f_2.f_2) >= 1f)
			{
				if (!ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2089200315))
				{
					uParam0->f_1 = 3;
				}
			}
			break;
		case 3:
			PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_ALCOHOL_BLOCK_CHUG_A", 1, 1);
			break;
	}
}

void func_7(var uParam0)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 574156416))
	{
		PED::_0x6D07B371E9439019(Global_35);
		PED::_0xD65FDC686A031C83(Global_35, 1114994170, 1.5f);
	}
}

void func_8(var uParam0)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 574156416))
	{
		PED::_0x6D07B371E9439019(Global_35);
		PED::_0xD65FDC686A031C83(Global_35, -1268666326, 1.5f);
	}
}

int func_9(var uParam0)
{
	if (!uParam0->f_176)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_174))
		{
			uParam0->f_174 = TASK::_0x05A0100EA714DB68(Global_35, 0);
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1234314267))
		{
			func_23(uParam0);
			return 1;
		}
	}
	if (!uParam0->f_177)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1895155945))
		{
			uParam0->f_177 = 1;
		}
	}
	return 0;
}

int func_10(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

void func_11(var uParam0)
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

void func_12(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_13(int iParam0)
{
	if (iParam0 == -1493684811)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) && (TASK::_0x2D0571BB55879DA2(Global_35) == -545460140 || TASK::_0x2D0571BB55879DA2(Global_35) == -1177373461))
		{
			TASK::_0xB35370D5353995CB(Global_35, 1587785400, 1f);
		}
	}
	else if (iParam0 == 1587785400)
	{
		if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || TASK::_0x0C3CB2E600C8977D(Global_35, 0))
		{
			TASK::_0xB35370D5353995CB(Global_35, -1493684811, 1f);
		}
	}
	else if (iParam0 == -752898125)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) && TASK::_0x2D0571BB55879DA2(Global_35) == -1177373461)
		{
			TASK::_0xB35370D5353995CB(Global_35, 1342098323, 1f);
		}
	}
	else if (iParam0 == 1342098323)
	{
		if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || TASK::_0x0C3CB2E600C8977D(Global_35, 0))
		{
			TASK::_0xB35370D5353995CB(Global_35, -752898125, 1f);
		}
	}
}

void func_14(float fParam0)
{
	if (fParam0 > 0f)
	{
		if (func_24())
		{
			func_25(fParam0);
		}
		Global_1935436->f_3 = MISC::GET_GAME_TIMER();
	}
}

void func_15(var uParam0, bool bParam1)
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
	bool bVar9;
	bool bVar10;
	bool bVar11;

	if ((func_20(*uParam0, 1573112293) || func_20(*uParam0, 672467738)) || func_20(*uParam0, -550842268))
	{
		bVar8 = true;
	}
	ATTRIBUTE::_0xD962F8579D702DB5();
	Global_1935496->f_26 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		if (-943921969 == (uParam0->f_33[iVar0 /*7*/])->f_1)
		{
			fVar1 = func_26(0, (IntToFloat((uParam0->f_33[iVar0 /*7*/])->f_2) / uParam0->f_2));
			func_27((IntToFloat((uParam0->f_33[iVar0 /*7*/])->f_2) / uParam0->f_2), 1);
			func_28(0, 7000);
			bVar10 = true;
		}
		else if (-1104847406 == (uParam0->f_33[iVar0 /*7*/])->f_1)
		{
			fVar2 = func_26(2, (IntToFloat((uParam0->f_33[iVar0 /*7*/])->f_2) / uParam0->f_2));
			func_29((IntToFloat((uParam0->f_33[iVar0 /*7*/])->f_2) / uParam0->f_2));
			func_28(2, 7000);
			bVar9 = true;
		}
		else if (381158954 == (uParam0->f_33[iVar0 /*7*/])->f_1)
		{
			fVar3 = func_26(1, (IntToFloat((uParam0->f_33[iVar0 /*7*/])->f_2) / uParam0->f_2));
			func_30((IntToFloat((uParam0->f_33[iVar0 /*7*/])->f_2) / uParam0->f_2));
			func_28(1, 7000);
		}
		else if (-416929031 == (uParam0->f_33[iVar0 /*7*/])->f_1)
		{
			fVar4 = func_31((IntToFloat((uParam0->f_33[iVar0 /*7*/])->f_2) / uParam0->f_2), ((uParam0->f_33[iVar0 /*7*/])->f_5 / uParam0->f_2));
			if (func_32(&(uParam0->f_9), &(uParam0->f_10), fVar4))
			{
				func_33(fVar4, 1, bVar8, 1);
				func_28(0, 7000);
			}
			bVar10 = true;
		}
		else if (1857353317 == (uParam0->f_33[iVar0 /*7*/])->f_1)
		{
			fVar5 = func_31((IntToFloat((uParam0->f_33[iVar0 /*7*/])->f_2) / uParam0->f_2), ((uParam0->f_33[iVar0 /*7*/])->f_5 / uParam0->f_2));
			if (func_32(&(uParam0->f_9), &(uParam0->f_10), fVar5))
			{
				func_34(fVar5, 1, bVar8, 1);
				func_28(2, 7000);
				bVar9 = true;
			}
		}
		else if (1681823811 == (uParam0->f_33[iVar0 /*7*/])->f_1)
		{
			fVar6 = func_31((IntToFloat((uParam0->f_33[iVar0 /*7*/])->f_2) / uParam0->f_2), ((uParam0->f_33[iVar0 /*7*/])->f_5 / uParam0->f_2));
			if (func_32(&(uParam0->f_9), &(uParam0->f_10), fVar6))
			{
				func_35(fVar6, 1, bVar8, 1);
				func_28(1, 7000);
			}
		}
		else if (-816334026 == (uParam0->f_33[iVar0 /*7*/])->f_1)
		{
			func_36((BUILTIN::TO_FLOAT((uParam0->f_33[iVar0 /*7*/])->f_2) / uParam0->f_2), 1 == uParam0->f_1);
		}
		else if (bParam1)
		{
			if (2062242710 == (uParam0->f_33[iVar0 /*7*/])->f_1)
			{
				fVar7 = func_37(BUILTIN::TO_FLOAT((uParam0->f_33[iVar0 /*7*/])->f_3), (uParam0->f_33[iVar0 /*7*/])->f_4);
				func_38(19, fVar7);
				bVar10 = true;
			}
			else if (-826379728 == (uParam0->f_33[iVar0 /*7*/])->f_1)
			{
				fVar7 = func_37(BUILTIN::TO_FLOAT((uParam0->f_33[iVar0 /*7*/])->f_3), (uParam0->f_33[iVar0 /*7*/])->f_4);
				func_38(20, fVar7);
				bVar9 = true;
			}
			else if (-1191740624 == (uParam0->f_33[iVar0 /*7*/])->f_1)
			{
				fVar7 = func_37(BUILTIN::TO_FLOAT((uParam0->f_33[iVar0 /*7*/])->f_3), (uParam0->f_33[iVar0 /*7*/])->f_4);
				func_38(18, fVar7);
			}
			else if (1869697234 == (uParam0->f_33[iVar0 /*7*/])->f_1)
			{
				fVar7 = func_37(BUILTIN::TO_FLOAT((uParam0->f_33[iVar0 /*7*/])->f_3), (uParam0->f_33[iVar0 /*7*/])->f_4);
				func_38(0, fVar7);
				bVar10 = true;
			}
			else if (1342237631 == (uParam0->f_33[iVar0 /*7*/])->f_1)
			{
				fVar7 = func_37(BUILTIN::TO_FLOAT((uParam0->f_33[iVar0 /*7*/])->f_3), (uParam0->f_33[iVar0 /*7*/])->f_4);
				func_38(2, fVar7);
				bVar9 = true;
			}
			else if (-1240225157 == (uParam0->f_33[iVar0 /*7*/])->f_1)
			{
				fVar7 = func_37(BUILTIN::TO_FLOAT((uParam0->f_33[iVar0 /*7*/])->f_3), (uParam0->f_33[iVar0 /*7*/])->f_4);
				func_38(1, fVar7);
			}
		}
		iVar0++;
	}
	if (bVar10)
	{
		if (fVar4 > 0f || fVar1 > 0f)
		{
			bVar11 = true;
		}
	}
	func_39(*uParam0, bParam1, bVar9, bVar11);
	func_23(uParam0);
	uParam0->f_3 = (uParam0->f_3 + fVar1);
	uParam0->f_4 = (uParam0->f_4 + fVar2);
	uParam0->f_5 = (uParam0->f_5 + fVar3);
	uParam0->f_6 = (uParam0->f_6 + fVar4);
	uParam0->f_7 = (uParam0->f_7 + fVar5);
	uParam0->f_8 = (uParam0->f_8 + fVar6);
}

void func_16(int iParam0, bool bParam1)
{
	float fVar0;
	struct<10> Var1;
	struct<16> Var11;

	switch (iParam0)
	{
		case 204375141: /* GXTEntry: "Ginseng Elixir" */
			if (func_40(0) >= 7)
			{
				func_42(244, func_41(204375141 /* GXTEntry: "Ginseng Elixir" */), 1);
			}
			func_43(19);
			break;
		case -417963070: /* GXTEntry: "Valerian Root" */
			if (func_40(2) >= 7)
			{
				func_42(243, func_41(-417963070 /* GXTEntry: "Valerian Root" */), 1);
			}
			func_43(50);
			break;
		case -21093309: /* GXTEntry: "Aged Pirate Rum" */
			if (func_40(1) >= 7)
			{
				func_42(245, func_41(-21093309 /* GXTEntry: "Aged Pirate Rum" */), 1);
			}
			func_43(30);
			break;
		case 433340626: /* GXTEntry: "Opened Cover Scent" */
		case 1895068170: /* GXTEntry: "Cover Scent Lotion" */
			if (iParam0 == 1895068170)
			{
				func_44(0, 60000);
				fVar0 = 0.25f;
			}
			else if (iParam0 == 433340626)
			{
				func_44(0, 30000);
				fVar0 = 0.5f;
			}
			func_45(580, 1);
			PED::_0x01B21B81865E2A1F(Global_35, fVar0);
			break;
		case -1620920647: /* GXTEntry: "English Mace" */
		case -529638012: /* GXTEntry: "Yarrow" */
		case 128702355: /* GXTEntry: "Milkweed" */
		case 1433048902: /* GXTEntry: "Ginseng" */
		case 2006811763: /* GXTEntry: "Vanilla Flower" */
			func_46(0);
			break;
		case -2085219828: /* GXTEntry: "Common Bulrush" */
		case -2051332199: /* GXTEntry: "Oleander Sage" */
		case 228922461: /* GXTEntry: "Prairie Poppy" */
			if ((bParam1 || !func_47()) || !PED::IS_PED_ON_FOOT(Global_35))
			{
				return;
			}
			if (iParam0 != 228922461 || MISC::GET_RANDOM_INT_IN_RANGE(0, 3000) < 1000)
			{
				Var11 = { Var1 };
				StringCopy(&(Var11.f_10), "generic_puking_item", 32);
				Var11.f_14 = 512;
				func_48(Var11, 0);
			}
			break;
		case 1365804873: /* GXTEntry: "Potent Antidote" */
		case 1889838061: /* GXTEntry: "Antidote" */
			if (iParam0 == 1889838061)
			{
				MISC::SET_BIT(Global_1051038, 0);
			}
			else if (iParam0 == 1365804873)
			{
				MISC::SET_BIT(Global_1051038, 1);
			}
			break;
	}
}

int func_17(var uParam0, int iParam1)
{
	switch (func_49(uParam0, -949239683))
	{
		case -476940445:
			if (iParam1 == 1587785400)
			{
				return 1534923913;
			}
			else
			{
				return -2061488501;
			}
			break;
		case -2001232688:
			return -458747598;
	}
	return -2061488501;
}

int func_18()
{
	return Global_1572887->f_12;
}

int func_19(int iParam0)
{
	if (func_50())
	{
		return 0;
	}
	return func_51(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

int func_20(int iParam0, int iParam1)
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

bool func_21(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_52(uParam0, &Var0);
}

bool func_22(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_10(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_53(iParam0);
	if (iVar0 == joaat("weapon"))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == joaat("ammo"))
	{
		if (!func_54(iParam0, 1))
		{
			return false;
		}
	}
	return func_55(iParam0, 0, bParam2) >= iParam1;
}

void func_23(var uParam0)
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

int func_24()
{
	if (func_56(0, 0, 1))
	{
		switch (func_57(0))
		{
			case 1:
			case 6:
			case 8:
			case 10:
				return 0;
			default:
				break;
		}
		if (func_18() == -1)
		{
			if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1895447864) > 0)
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_25(float fParam0)
{
	func_58((Global_1935436->f_9 + fParam0));
}

float func_26(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	switch (iParam0)
	{
		case 0:
			fVar0 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_35));
			fVar1 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0));
			break;
		case 1:
			fVar0 = PED::_0x775A1CA7893AA8B5(Global_35);
			fVar1 = PED::_GET_PED_MAX_STAMINA(Global_35);
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

void func_27(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;

	fVar0 = (50f * fParam0);
	iVar1 = BUILTIN::ROUND((fVar0 + IntToFloat(ENTITY::GET_ENTITY_HEALTH(Global_35))));
	if (bParam1 && fVar0 < 0f)
	{
		ENTITY::_0x835F131E7DC8F97A(Global_35, fVar0, 0, 0);
	}
	else if (fParam0 <= 0f || iVar1 > ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0))
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0), 0);
	}
	else
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, iVar1, 0);
	}
}

void func_28(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_29(float fParam0)
{
	PLAYER::_0x51345AE20F22C261(PLAYER::PLAYER_ID(), (fParam0 * 14f), 0, 0, 0);
}

void func_30(float fParam0)
{
	int iVar0;

	if (func_18() != -1)
	{
		return;
	}
	if (fParam0 == -1f)
	{
		PED::_RESTORE_PED_STAMINA(Global_35, 100f);
	}
	else
	{
		iVar0 = 8;
		PED::_0xC3D4B754C0E86B9E(Global_35, (fParam0 * IntToFloat(iVar0)));
	}
}

float func_31(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 200f);
	}
	return ((fParam0 / 8f) * 200f);
}

int func_32(var uParam0, var uParam1, float fParam2)
{
	if (func_18() != -1)
	{
		return 1;
	}
	if (!func_19(0))
	{
		return 1;
	}
	if (fParam2 <= 0f)
	{
		return 1;
	}
	if (*uParam0)
	{
		return !*uParam1;
	}
	*uParam0 = 1;
	if (!Global_1347477->f_191.f_3)
	{
		func_21(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		Global_1347477->f_191.f_3 = 1;
	}
	if (Global_1347477->f_191 < MISC::GET_GAME_TIMER())
	{
		Global_1347477->f_191.f_1 = 0;
	}
	Global_1347477->f_191.f_1++;
	if (Global_1347477->f_191.f_1 > 3)
	{
		if (Global_1347477->f_191.f_2 < MISC::GET_GAME_TIMER())
		{
			func_45(0, 1);
			Global_1347477->f_191.f_2 = (MISC::GET_GAME_TIMER() + 480000);
		}
		func_21(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		*uParam1 = 1;
		return 0;
	}
	Global_1347477->f_191 = (MISC::GET_GAME_TIMER() + 480000);
	*uParam1 = 0;
	return 1;
}

void func_33(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_18() == 0)
	{
		func_59(0, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_60(0);
	if (bParam1)
	{
		func_61(fVar0);
	}
	if (fVar0 >= (100f - 1f))
	{
		func_62();
	}
	if (bParam2)
	{
		fParam0 = func_63(0, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_65(0, func_64(fParam0, -100f, 100f), bParam1);
}

void func_34(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_18() == 0)
	{
		func_59(2, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_60(2);
	if (bParam1)
	{
		func_61(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_63(2, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_65(2, func_64(fParam0, -100f, 100f), bParam1);
}

void func_35(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_18() == 0)
	{
		func_59(1, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_60(1);
	if (bParam1)
	{
		func_61(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_63(1, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_65(1, func_64(fParam0, -100f, 100f), bParam1);
}

void func_36(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	fVar0 = func_66(13);
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (!func_67(17))
	{
		return;
	}
	if (func_68())
	{
		iVar1 = func_69(fVar0);
		fVar0 = (fVar0 + fParam0);
		iVar2 = func_69(fVar0);
		if (iVar1 != iVar2)
		{
			Global_1347477->f_195 = func_70();
			func_71(&(Global_1347477->f_195), 0, 0, 1, 0, 0, 0, 0);
		}
		func_72(&fVar3, &fVar4);
		func_73(13, func_64(fVar0, fVar3, fVar4));
	}
	if (bParam1)
	{
		Global_40.f_11095.f_66++;
		if (5 == Global_40.f_11095.f_66)
		{
			func_45(94, 0);
		}
	}
}

float func_37(float fParam0, int iParam1)
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

void func_38(int iParam0, float fParam1)
{
	int iVar0;
	char* sVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1f)
	{
		if (func_74(iParam0))
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
		return;
	}
	fParam1 = (fParam1 * (1f + Global_40.f_11095.f_70));
	switch (iParam0)
	{
		case 0:
			sVar1 = func_75(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_76(-1);
			func_46(0);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar0, iParam0, fParam1, 1);
			Global_40.f_11095.f_4[0 /*2*/] = fParam1;
			break;
		case 1:
			sVar1 = func_75(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_77(-1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar0, iParam0, fParam1, 1);
			Global_40.f_11095.f_4[1 /*2*/] = fParam1;
			break;
		case 2:
			sVar1 = func_75(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_78(-1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar0, iParam0, fParam1, 1);
			Global_40.f_11095.f_4[2 /*2*/] = fParam1;
			break;
		case 19:
			func_79(0, 1, 1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar0, iParam0, fParam1, 1);
			(Global_40.f_11095.f_4[0 /*2*/])->f_1 = fParam1;
			break;
		case 18:
			func_79(1, 1, 1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar0, iParam0, fParam1, 1);
			(Global_40.f_11095.f_4[1 /*2*/])->f_1 = fParam1;
			break;
		case 20:
			func_79(2, 1, 1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar0, iParam0, fParam1, 1);
			(Global_40.f_11095.f_4[2 /*2*/])->f_1 = fParam1;
			break;
		default:
			break;
	}
}

void func_39(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		return;
	}
	if (bParam3 || func_20(iParam0, -537818634))
	{
		func_81(func_80(-704089207), 1);
	}
	if (func_20(iParam0, -1457797660))
	{
		func_81(func_80(-1909697259), 1);
	}
	if (func_20(iParam0, 1573112293))
	{
		func_83(func_82(&iParam0), 1);
	}
	if (func_20(iParam0, 1939071949))
	{
		func_81(func_84(joaat("used"), -939665347), 1);
	}
	switch (iParam0)
	{
		case -1921080134: /* GXTEntry: "Classic Oatcakes" */
		case -635441454: /* GXTEntry: "Sugar Cube" */
		case 1448771675: /* GXTEntry: "Hay" */
			func_81(func_84(joaat("used"), -2049431929 /* GXTEntry: "Feed Bag" */), 1);
			break;
	}
	switch (iParam0)
	{
		case 299161628: /* GXTEntry: "Moonshine" */
			func_81(func_84(joaat("used"), 304473406), 1);
			break;
		case -1907044919: /* GXTEntry: "Opened Kentucky Bourbon" */
		case 688258043: /* GXTEntry: "Kentucky Bourbon" */
			func_81(func_84(joaat("used"), joaat("whiskey")), 1);
			break;
		case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
		case 206762213: /* GXTEntry: "Cocaine Gum" */
			func_81(func_84(joaat("used"), 2119695263), 1);
			break;
		case -653299524: /* GXTEntry: "Snake Oil" */
		case -486559882: /* GXTEntry: "Potent Snake Oil" */
		case 376981280: /* GXTEntry: "Opened Snake Oil" */
			func_81(func_84(joaat("used"), -1791969490), 1);
			break;
		case -324053813: /* GXTEntry: "Chewing Tobacco" */
		case 998010398: /* GXTEntry: "Opened Chewing Tobacco" */
			func_81(func_84(joaat("used"), -155567636), 1);
			break;
		case -2042563684: /* GXTEntry: "Horse Medicine" */
		case -834705084: /* GXTEntry: "Opened Horse Medicine" */
			func_81(func_84(joaat("used"), 497247514), 1);
			break;
		case 433340626: /* GXTEntry: "Opened Cover Scent" */
		case 1895068170: /* GXTEntry: "Cover Scent Lotion" */
			func_81(func_84(joaat("used"), 1199394531), 1);
			break;
		case 1929383243: /* GXTEntry: "Herbivore Bait" */
		case 2036955137: /* GXTEntry: "Potent Herbivore Bait" */
			func_81(func_84(joaat("used"), -868741806), 1);
			break;
		case -1635450397: /* GXTEntry: "Predator Bait" */
		case 1831763320: /* GXTEntry: "Potent Predator Bait" */
			func_81(func_84(joaat("used"), -208442209), 1);
			break;
	}
	if (func_18() == -1)
	{
		if (iParam0 == -1976480343)
		{
			func_81(func_84(joaat("used"), 595572217), 1);
		}
	}
	if (bParam2)
	{
		func_81(func_80(704570463), 1);
	}
}

int func_40(int iParam0)
{
	return func_85(&(Global_40.f_11095.f_11[iParam0]));
}

int func_41(int iParam0)
{
	if (!func_10(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_42(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_86(iParam0, &iVar0, &iVar1);
	if (!func_87(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_88(iParam0, 1024))
	{
		return;
	}
	func_89(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_43(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_18() != -1)
	{
		return;
	}
	iVar0 = func_90(iParam0);
	fVar1 = func_91(iParam0);
	if ((Global_1347477->f_117 || !func_67(31)) || !func_92(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_40(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477->f_182));
	fVar1 = BUILTIN::TO_FLOAT(BUILTIN::ROUND(fVar1));
	func_93(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_96(MISC::_CREATE_VAR_STRING(6, func_94(iParam0), fVar1), "itemtype_textures", func_95(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_44(int iParam0, int iParam1)
{
	(*Global_1911859)[iParam0 /*3*/] = MISC::_0x483B8C542103AD72();
	((*Global_1911859)[iParam0 /*3*/])->f_1 = iParam1;
	((*Global_1911859)[iParam0 /*3*/])->f_2 = 1;
}

void func_45(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_86(iParam0, &iVar0, &iVar1);
	if (!func_87(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_89(iVar0, iVar1);
}

void func_46(bool bParam0)
{
	if (func_18() != -1)
	{
		return;
	}
	if (bParam0 && ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0))
	{
		return;
	}
	if (Global_40.f_11095.f_43 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_45(89, 1);
		ATTRIBUTE::_0xFB6E111908502871(5);
	}
	else
	{
		func_45(90, 1);
		ATTRIBUTE::_0x3FC4C027FD0936F4(5);
	}
	func_97(1, bParam0, 1);
	func_98();
	Global_40.f_11095.f_43 = bParam0;
}

bool func_47()
{
	return func_99(1);
}

void func_48(struct<16> Param0, int iParam16)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_100(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_101(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1934603)[iVar0 /*16*/])->f_10)))
		{
			*((*Global_1934603)[iVar0 /*16*/]) = { Param0 };
			Global_1934603->f_161++;
			func_102(iParam16);
			return;
		}
		iVar0++;
	}
}

int func_49(var uParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(uParam0, &Var0, &iVar41, 20))
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

int func_50()
{
	if (func_18() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

int func_51(int iParam0, bool bParam1)
{
	switch (func_103(iParam0))
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

var func_52(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

int func_53(int iParam0)
{
	vector3 vVar0;

	if (!func_10(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_54(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_10(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_104(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_105("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_106(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_107(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_108(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_108(iVar1);
	}
	return 0;
}

int func_55(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!func_10(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_53(iParam0);
	if (iVar0 == joaat("ammo") || (bParam1 && iVar0 == joaat("weapon")))
	{
		iVar1 = func_104(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("weapon"))
	{
		return func_109(iParam0, 0);
	}
	uVar2 = INVENTORY::_0xE787F05DFC977BDE(func_110(bParam2), iParam0, 0);
	return uVar2;
}

int func_56(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_111())
		{
			return 1;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if (((*Global_1055058)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/])->f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return 1;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if ((Global_1898164->f_1[0 /*5*/])->f_2 == 8)
	{
		iVar0 = func_112(&(Global_1898164->f_1[0 /*5*/]));
		if (func_113(iVar0) && func_114(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_115(&(Global_1898164->f_1[0 /*5*/])))
	{
		return 1;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < &Global_1898438)
		{
			return 1;
		}
	}
	switch ((Global_1898164->f_1[0 /*5*/])->f_2)
	{
		case 0:
			return 0;
		case 1:
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & 512 == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return 0;
}

int func_57(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

void func_58(float fParam0)
{
	if ((Global_1357549->f_1495 & 512 != 0 || PED::IS_PED_ON_MOUNT(Global_35)) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		if (fParam0 >= 0.75f)
		{
			Global_1935436->f_9 = (0.75f - 0.01f);
			return;
		}
	}
	if (fParam0 < 0f)
	{
		Global_1935436->f_9 = 0f;
	}
	else if (fParam0 > 1f)
	{
		Global_1935436->f_9 = 1f;
	}
	else
	{
		Global_1935436->f_9 = fParam0;
	}
}

void func_59(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		fParam1 = func_63(iParam0, fParam1, 1);
	}
	func_117(iParam0, (func_116(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

float func_60(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

void func_61(float fParam0)
{
	if (fParam0 >= (100f - 1f))
	{
		AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
	}
}

void func_62()
{
	Global_40.f_11095.f_11[14] = 100f;
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
}

float func_63(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_70();
	func_118(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_119(iParam0, 2);
	if (func_121(iVar0, func_120(iParam0, 2), 1))
	{
		func_122(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_45(88, bParam2);
		return 0f;
	}
	func_123(iParam0, func_70(), 2);
	func_122(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_64(float fParam0, float fParam1, float fParam2)
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

void func_65(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;

	if (func_18() != -1)
	{
		return;
	}
	if (!func_67(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_124(BUILTIN::CEIL(&(Global_40.f_11095[iParam0])));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, func_125(iParam0), iVar0);
	func_127(func_126(iParam0), (100f * (BUILTIN::TO_FLOAT(iVar0) / 100f)), 0);
	if (((fParam1 <= func_128(15) && iParam0 == 1) && PED::IS_PED_ON_FOOT(Global_35)) && !PED::IS_PED_SWIMMING(Global_35))
	{
		func_45(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_45(func_129(iParam0), 1);
	}
	sVar1 = func_130(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		PED::_0x437C08DB4FEBE2BD(Global_35, sVar1, BUILTIN::TO_FLOAT(iVar0), -1);
	}
}

float func_66(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_67(int iParam0)
{
	if (!func_131(iParam0))
	{
		return 0;
	}
	return func_132(iParam0);
}

int func_68()
{
	if (func_18() != -1)
	{
		return 0;
	}
	if (Global_1347477->f_200)
	{
		return 0;
	}
	if (Global_1347477->f_195 == -15)
	{
		return 1;
	}
	return func_133(Global_1347477->f_195, 0);
}

int func_69(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

int func_70()
{
	return &Global_1899515;
}

void func_71(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_134(*uParam0);
	iVar1 = func_135(*uParam0);
	iVar2 = func_136(*uParam0);
	iVar3 = func_137(*uParam0);
	iVar4 = func_138(*uParam0);
	iVar5 = func_139(*uParam0);
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
	iVar6 = func_140(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_140(iVar1, iVar0);
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
	func_141(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_72(var uParam0, var uParam1)
{
	if (!func_142())
	{
		*uParam0 = -100f;
		*uParam1 = 100f;
		return;
	}
	*uParam0 = Global_40.f_11095.f_40;
	*uParam1 = Global_40.f_11095.f_41;
}

void func_73(int iParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;

	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_143(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_144(1, bVar1, 1, sVar2);
		func_145(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_124(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
		func_98();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_124(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_124(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

int func_74(int iParam0)
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

char* func_75(int iParam0)
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

void func_76(int iParam0)
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
	iVar1 = func_146(2);
	func_147(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_77(int iParam0)
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
	iVar1 = func_148(2);
	func_149(BUILTIN::TO_FLOAT((iParam0 * iVar1)));
}

void func_78(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PLAYER::_0x57D9991DC1334151(iVar0);
	}
	iVar1 = func_150(2);
	func_151(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_79(int iParam0, bool bParam1, bool bParam2)
{
	func_117(iParam0, 100f, bParam1, bParam2, 1, 2);
}

struct<2> func_80(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_81(var uParam0, int iParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

int func_82(int iParam0)
{
	switch (*iParam0)
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
			return 39;
		case 746300881: /* GXTEntry: "Wild Feverfew" */
			return 40;
		case -435006002: /* GXTEntry: "Wild Mint" */
			return 41;
		case -624139784: /* GXTEntry: "Wintergreen Berry" */
			return 42;
		case -529638012: /* GXTEntry: "Yarrow" */
			return 43;
		case -651064726: /* GXTEntry: "Acuna\'s Star Orchid" */
			return 1;
		case -404270094: /* GXTEntry: "Cigar Orchid" */
			return 9;
		case -1521783510: /* GXTEntry: "Clamshell Orchid" */
			return 10;
		case 1714875242: /* GXTEntry: "Dragon\'s Mouth Orchid" */
			return 14;
		case 2093126853: /* GXTEntry: "Ghost Orchid" */
			return 17;
		case 728781265: /* GXTEntry: "Lady of the Night Orchid" */
			return 21;
		case 1794857344: /* GXTEntry: "Lady Slipper Orchid" */
			return 22;
		case 1952409553: /* GXTEntry: "Moccasin Flower Orchid" */
			return 24;
		case -150591160: /* GXTEntry: "Night Scented Orchid" */
			return 25;
		case 1019229063: /* GXTEntry: "Queen\'s Orchid" */
			return 30;
		case -323969289: /* GXTEntry: "Rat Tail Orchid" */
			return 32;
		case 927763737: /* GXTEntry: "Sparrow\'s Egg Orchid" */
			return 35;
		case 1504361882: /* GXTEntry: "Spider Orchid" */
			return 36;
	}
	return 0;
}

void func_83(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_84(-372368982, func_152(iParam0)) };
	STATS::_0x6A0184E904CDF25E(&Var0, iParam1);
	func_81(func_153(106002964), iParam1);
}

struct<2> func_84(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

int func_85(float fParam0)
{
	if (fParam0 <= IntToFloat(-1))
	{
		return -1;
	}
	if (fParam0 < IntToFloat(50))
	{
		return 0;
	}
	if (fParam0 < IntToFloat(100))
	{
		return 1;
	}
	if (fParam0 < IntToFloat(200))
	{
		return 2;
	}
	if (fParam0 < IntToFloat(350))
	{
		return 3;
	}
	if (fParam0 < IntToFloat(550))
	{
		return 4;
	}
	if (fParam0 < IntToFloat(800))
	{
		return 5;
	}
	if (fParam0 < IntToFloat(1100))
	{
		return 6;
	}
	return 7;
}

void func_86(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_87(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_154(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_155(iParam0))
	{
		return 0;
	}
	if (func_156(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_88(iParam0, 1)) || func_157(32768))
	{
		if (!func_88(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_158())
	{
		return 0;
	}
	return 1;
}

bool func_88(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

void func_89(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_90(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

float func_91(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5f;
		case 2:
			return 20f;
		case 3:
			return 10f;
		case 4:
			return 10f;
		case 5:
			return 20f;
		case 6:
			return 10f;
		case 7:
			return 15f;
		case 8:
			return 15f;
		case 9:
			return 20f;
		case 10:
			return 5f;
		case 11:
			return 5f;
		case 12:
			return 10f;
		case 13:
			return 20f;
		case 14:
			return 30f;
		case 15:
			return 5f;
		case 16:
			return 5f;
		case 17:
			return 3f;
		case 18:
			return 20f;
		case 19:
			return func_159(iParam0);
		case 20:
			return 25f;
		case 21:
			return 50f;
		case 22:
			return 100f;
		case 23:
			return 150f;
		case 24:
			return 20f;
		case 25:
			return 10f;
		case 26:
			return 20f;
		case 27:
			return 20f;
		case 28:
			return 20f;
		case 29:
			return 20f;
		case 30:
			return func_159(iParam0);
		case 31:
			return 25f;
		case 32:
			return 50f;
		case 33:
			return 100f;
		case 34:
			return 150f;
		case 35:
			return 1f;
		case 36:
			return 5f;
		case 37:
			return 1f;
		case 38:
			return 3f;
		case 39:
			return 1f;
		case 40:
			return 1f;
		case 41:
			return 1f;
		case 42:
			return 5f;
		case 43:
			return 10f;
		case 49:
			return 20f;
		case 44:
			return 5f;
		case 45:
			return 5f;
		case 46:
			return 10f;
		case 47:
			return 10f;
		case 48:
			return 5f;
		case 50:
			return func_159(iParam0);
		case 51:
			return 25f;
		case 52:
			return 50f;
		case 53:
			return 100f;
		case 54:
			return 150f;
		case 55:
			return 5f;
		default:
			break;
	}
	return 0f;
}

int func_92(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_67(18);
		case 2:
			return func_67(20);
		case 1:
			return func_67(19);
		default:
			break;
	}
	return 1;
}

void func_93(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_18() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_67(31))
	{
		return;
	}
	iVar0 = func_40(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_40(iParam0);
	if (func_160(iParam0) && func_161(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_162(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_163(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_45(func_164(iParam0), 0);
					}
					func_165(iParam0, iVar2, iVar3);
					func_28(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_94(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_95(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 837097462;
		case 0:
			return 2001720289;
		case 2:
			return 234329797;
		default:
			break;
	}
	return 0;
}

var func_96(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _NAMESPACE71::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_166(sParam0, sParam1, iParam2);
	return uVar20;
}

void func_97(int iParam0, bool bParam1, bool bParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_5, bParam2);
}

void func_98()
{
	func_167();
	func_168();
	func_169();
}

bool func_99(int iParam0)
{
	return func_170(iParam0);
}

bool func_100(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_101(char* sParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(((*Global_1934603)[iVar0 /*16*/])->f_10), sParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_102(int iParam0)
{
	if (func_100(iParam0, 1))
	{
		func_171(1);
	}
}

int func_103(int iParam0)
{
	if (!func_115(iParam0))
	{
		return -1;
	}
	return func_172(iParam0);
}

int func_104(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_10(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_53(iParam0);
	if (iVar0 == joaat("weapon") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == joaat("ammo") && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_20(iParam0, 1399091007))
	{
		func_173(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_105(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_110(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_106(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_107(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_108(int iParam0)
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

int func_109(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_174(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_176(&Var0, func_175(0));
	}
	if (!func_177(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_108(iVar14);
	return uVar15;
}

int func_110(bool bParam0)
{
	if (func_18() == -1)
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

int func_111()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_524298)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_112(int iParam0)
{
	if (!func_115(iParam0))
	{
		return -1;
	}
	return func_179(func_178(iParam0));
}

bool func_113(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_114(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_115(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

float func_116(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_180();
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1955569->f_753.f_5[iParam0 /*3*/]);
		case 1:
			return &(Global_1955569->f_866.f_2.f_5[iParam0 /*3*/]);
		default:
			break;
	}
	return -1f;
}

int func_117(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_180();
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
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
		func_181(iParam0, 7000, iParam5);
	}
	if (fParam1 > 100f)
	{
		fParam1 = 100f;
	}
	else if (fParam1 < 0f)
	{
		fParam1 = 0f;
	}
	func_182(iVar0, iParam0, fParam1);
	func_183(iParam0, fParam1, bParam4, iParam5);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iVar0, func_125(iParam0), BUILTIN::CEIL(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_118(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_134(*iParam0);
	iVar1 = func_135(*iParam0);
	iVar2 = func_136(*iParam0);
	iVar3 = func_137(*iParam0);
	iVar4 = func_138(*iParam0);
	iVar5 = func_139(*iParam0);
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
		iVar7 = func_140(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_141(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_119(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_180();
	}
	switch (iParam1)
	{
		case 0:
			return (Global_1955569->f_753.f_5[iParam0 /*3*/])->f_2;
		case 1:
			return (Global_1955569->f_866.f_2.f_5[iParam0 /*3*/])->f_2;
		default:
			break;
	}
	return -1;
}

int func_120(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_180();
	}
	switch (iParam1)
	{
		case 0:
			return (Global_1955569->f_753.f_5[iParam0 /*3*/])->f_1;
		case 1:
			return (Global_1955569->f_866.f_2.f_5[iParam0 /*3*/])->f_1;
		default:
			break;
	}
	return -15;
}

bool func_121(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_184(iParam1) || !func_184(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_122(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_180();
	}
	switch (iParam2)
	{
		case 0:
			(Global_1955569->f_753.f_5[iParam0 /*3*/])->f_2 = iParam1;
			break;
		case 1:
			(Global_1955569->f_866.f_2.f_5[iParam0 /*3*/])->f_2 = iParam1;
			break;
		default:
			break;
	}
}

void func_123(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_180();
	}
	switch (iParam2)
	{
		case 0:
			(Global_1955569->f_753.f_5[iParam0 /*3*/])->f_1 = iParam1;
			break;
		case 1:
			(Global_1955569->f_866.f_2.f_5[iParam0 /*3*/])->f_1 = iParam1;
			break;
		default:
			break;
	}
}

int func_124(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0 + 100) / 200f);
	return BUILTIN::CEIL((100f * fVar0));
}

int func_125(int iParam0)
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

int func_126(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 0;
}

void func_127(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_185(iParam0, 0, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[0]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[0]), bParam2);
}

float func_128(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0) / 100f);
	return ((fVar0 * 200f) - 100f);
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 87;
		case 1:
			return 85;
		case 2:
			return 86;
		default:
			break;
	}
	return -1;
}

char* func_130(int iParam0)
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

int func_131(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_132(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

bool func_133(int iParam0, bool bParam1)
{
	return func_121(func_70(), iParam0, bParam1);
}

int func_134(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_186(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_135(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_136(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_137(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_138(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_139(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_140(int iParam0, int iParam1)
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

void func_141(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_187(iParam0, iParam6);
	func_188(iParam0, iParam5);
	func_189(iParam0, iParam4);
	func_190(iParam0, iParam3);
	func_191(iParam0, iParam2);
	func_192(iParam0, iParam1);
}

int func_142()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

char* func_143(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_144(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_7, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_9, sParam3);
}

void func_145(bool bParam0, bool bParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_185(0, 1, bParam0, bParam1);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[1]), bParam2);
	if (bParam0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), false);
	}
	else if (bParam1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[1]), "rpg_cold");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[1]), "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[1]), "rpg_hot");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[1]), "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), true);
	}
}

int func_146(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_180();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569->f_850;
		case 1:
			return Global_1955569->f_866.f_115;
		default:
			break;
	}
	return -1;
}

void func_147(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = PLAYER::PLAYER_PED_ID();
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

int func_148(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_180();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569->f_850.f_2;
		case 1:
			return Global_1955569->f_866.f_115.f_2;
		default:
			break;
	}
	return -1;
}

void func_149(float fParam0)
{
	int iVar0;

	if (fParam0 == 0f)
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	PED::_0xC3D4B754C0E86B9E(iVar0, fParam0);
}

int func_150(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_180();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569->f_850.f_1;
		case 1:
			return Global_1955569->f_866.f_115.f_1;
		default:
			break;
	}
	return -1;
}

void func_151(float fParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (PLAYER::_0xB16223CB7DA965F0(iVar0) && fParam0 > 0f)
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
		PLAYER::_0x51345AE20F22C261(iVar0, fParam0, 0, 0, 0);
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

int func_152(int iParam0)
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
		case 39:
			return -1727702531 /* GXTEntry: "Wild Carrot" */;
		case 40:
			return 1783324404 /* GXTEntry: "Wild Feverfew" */;
		case 41:
			return 1288848815 /* GXTEntry: "Wild Mint" */;
		case 42:
			return 918090738 /* GXTEntry: "Wintergreen Berry" */;
		case 43:
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
	}
	return 0;
}

struct<2> func_153(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

bool func_154(int iParam0, int iParam1)
{
	if (func_18() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_155(int iParam0)
{
	if (func_18() != -1)
	{
		if (func_88(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_88(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_156(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_88(iParam0, 65536) && !func_88(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_88(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_88(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_157(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_158()
{
	return Global_1905944->f_5694;
}

float func_159(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_90(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_85(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_193(iVar6) - func_193(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_160(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_161(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 16:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_162(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_85(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_193(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_193(iVar0 + 1));
	fVar3 = (fVar2 - fVar1);
	iVar4 = BUILTIN::FLOOR((((fParam0 - fVar1) / fVar3) * 4f));
	iVar5 = BUILTIN::FLOOR((((fParam1 - fVar1) / fVar3) * 4f));
	if (iVar4 == iVar5)
	{
		return 0;
	}
	if (iVar5 >= 4 || iVar5 < 0)
	{
		return 0;
	}
	return iVar5;
}

int func_163(int iParam0)
{
	int iVar0;

	if (func_194(iParam0, &iVar0))
	{
		return func_193(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_195())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_195())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_195())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 4:
			return 0;
	}
	return 0;
}

int func_164(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 246;
		case 2:
			return 247;
		case 1:
			return 248;
		default:
			break;
	}
	return -1;
}

void func_165(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	char* sVar1;
	bool bVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	var uVar8;
	int iVar9;
	struct<6> Var10;

	if (iParam1 == 0)
	{
		return;
	}
	iVar3 = iParam1 + 1;
	if (iParam2 != 0)
	{
		sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
		sVar1 = MISC::_CREATE_VAR_STRING(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, iVar3 + 1);
	}
	else
	{
		sVar0 = "RPG_LEVEL_INCREASED_TOAST";
		sVar1 = MISC::_CREATE_VAR_STRING(2, "RPG_LEVEL_INCREASED_BODY", iVar3);
		bVar2 = true;
	}
	iVar3 = (iVar3 + func_196(iParam0));
	sVar4 = func_198(func_197(iVar3, iParam2));
	sVar6 = func_199(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::_CREATE_VAR_STRING(10, sVar0, func_200(iParam0));
	uVar8 = func_201(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = uVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_202(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&Var10);
	}
	func_204(sVar7, sVar1, uVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_203(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_166(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

float func_167()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_205())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_60(2);
	}
	if (Global_1347477->f_119)
	{
		return func_60(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_206();
	fVar2 = func_207();
	fVar3 = func_208();
	fVar4 = func_209();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_210()));
	fVar7 = (func_60(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_211(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_212(3, fVar9, fVar9 > 100f);
	return func_64(fVar7, -100f, 100f);
}

float func_168()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_205())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_60(1);
	}
	if (Global_1347477->f_119)
	{
		return func_60(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_206();
	fVar2 = func_207();
	fVar3 = func_208();
	fVar4 = func_209();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_210()));
	fVar7 = (func_60(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_211(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_212(2, fVar9, fVar9 > 100f);
	return func_64(fVar7, -100f, 100f);
}

float func_169()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_205())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_60(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_213())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_214())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_60(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_206();
	fVar2 = func_207();
	fVar3 = func_208();
	fVar4 = func_209();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_210()));
	fVar7 = (func_60(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_211(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_212(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_0x0317C947D062854E(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_60(0);
	}
	return func_64(fVar7, -100f, 100f);
}

bool func_170(int iParam0)
{
	return func_215(Global_1935496->f_27, iParam0);
}

void func_171(int iParam0)
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

int func_172(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_216(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

void func_173(int iParam0, var uParam1, var uParam2)
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

struct<14> func_174(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	return Var0;
}

struct<4> func_175(bool bParam0)
{
	int iVar0;

	iVar0 = func_110(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_218(923904168, func_217(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_218(923904168, func_217(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_218(923904168, func_217(bParam0), -740156546, 0);
}

void func_176(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_177(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	*uParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_110(bParam3), uParam0, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_178(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12105[iParam0 /*7*/]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0 /*2*/]);
}

int func_179(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_180()
{
	if (func_219())
	{
		return 1;
	}
	return 0;
}

void func_181(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_180();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_15[iParam0 /*3*/] = iParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_15[iParam0 /*3*/] = iParam1;
			break;
		default:
			break;
	}
}

void func_182(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_130(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_0x437C08DB4FEBE2BD(iParam0, func_220(iParam1), fParam2, -1);
	}
}

void func_183(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_180();
	}
	iVar0 = MISC::GET_GAME_TIMER();
	func_221(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_222(iParam0, iVar0, iParam3);
	}
}

int func_184(int iParam0)
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
	iVar0 = func_139(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_138(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_137(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_134(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_135(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_136(iParam0);
	if (iVar5 < 1 || iVar5 > func_140(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

char* func_185(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					}
					else
					{
						return func_143(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_143(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
			}
			break;
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_186(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_187(int iParam0, int iParam1)
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

void func_188(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_189(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_135(*iParam0);
	iVar1 = func_134(*iParam0);
	if (iParam1 < 1 || iParam1 > func_140(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_190(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_191(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_192(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_193(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 50;
		case 2:
			return 100;
		case 3:
			return 200;
		case 4:
			return 350;
		case 5:
			return 550;
		case 6:
			return 800;
		case 7:
			return 1100;
		default:
			break;
	}
	return 0;
}

int func_194(int iParam0, int iParam1)
{
	return 0;
}

int func_195()
{
	return 0;
}

int func_196(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_0xE787F05DFC977BDE(func_110(0), -1845241476, 0);
		case 1:
			return INVENTORY::_0xE787F05DFC977BDE(func_110(0), 1654063339, 0);
		case 2:
			return INVENTORY::_0xE787F05DFC977BDE(func_110(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_197(int iParam0, int iParam1)
{
	char cVar0[32];

	if (iParam0 >= 10)
	{
		iParam1 = 0;
	}
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	return cVar0;
}

var func_198(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_199(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "health";
		case 0:
			return "stamina";
		case 2:
			return "dead_eye_level_up";
		default:
			break;
	}
	return "";
}

char* func_200(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_STAMINA";
		case 0:
			return "RPG_HEALTH";
		case 2:
			return "RPG_DEADEYE";
		default:
			break;
	}
	return "";
}

int func_201(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 444492752;
		case 0:
			return 1874233471;
		case 2:
			return -1285232277;
		default:
			break;
	}
	return 0;
}

int func_202(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_203(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1896546861;
		case 1:
			return 304419444;
		case 2:
			return 1497019382;
		default:
			break;
	}
	return 0;
}

var func_204(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, char* sParam5, var uParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = sParam8;
	Var0.f_2 = sParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = uParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

int func_205()
{
	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	return Global_1347477->f_203;
}

float func_206()
{
	float fVar0;
	int iVar1;

	fVar0 = func_66(13);
	iVar1 = func_69(fVar0);
	if (iVar1 == 0)
	{
		return 0.15f;
	}
	if (iVar1 == 10 || iVar1 == -10)
	{
		return -0.25f;
	}
	return 0f;
}

float func_207()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_208()
{
	if (func_223())
	{
		if (DLC::_0xA16B4FBA7887D7BA())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_209()
{
	if (Global_40.f_39 == 11966224)
	{
		return 0f;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		return -0.2f;
	}
	if (Global_40.f_11095.f_67 >= 7)
	{
		return -0.05f;
	}
	return 0f;
}

float func_210()
{
	return Global_1955565->f_3;
}

void func_211(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_185(iParam0, 1, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[1]), bParam2);
}

void func_212(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_185(iParam0, 2, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[2]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[2]), bParam2);
	if (fParam1 > 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_DOWN");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), joaat("COLOR_RED"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), true);
	}
	else if (fParam1 < 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_UP");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), joaat("COLOR_WHITE"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), false);
	}
}

bool func_213()
{
	return func_66(12) <= -99f;
}

bool func_214()
{
	return func_66(12) >= 99f;
}

bool func_215(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_216(int iParam0)
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

struct<4> func_217(bool bParam0)
{
	return func_218(joaat("character"), func_224(), -1591664384, bParam0);
}

struct<4> func_218(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_10(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_110(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_219()
{
	return Global_1955569->f_866;
}

char* func_220(int iParam0)
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

void func_221(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_180();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_5[iParam0 /*3*/] = fParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_5[iParam0 /*3*/] = fParam1;
			break;
		default:
			break;
	}
}

void func_222(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_180();
	}
	switch (iParam2)
	{
		case 0:
			(Global_1955569->f_753.f_15[iParam0 /*3*/])->f_2 = iParam1;
			break;
		case 1:
			(Global_1955569->f_866.f_2.f_15[iParam0 /*3*/])->f_2 = iParam1;
			break;
		default:
			break;
	}
}

bool func_223()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

struct<4> func_224()
{
	struct<4> Var0;

	return Var0;
}

