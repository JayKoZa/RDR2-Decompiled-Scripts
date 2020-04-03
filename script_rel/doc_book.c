#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
	var uLocal_14 = 0;
	bool bLocal_15 = false;
	bool bLocal_16 = false;
	bool bLocal_17 = false;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	var uLocal_21 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	struct<152> Var0;

	fLocal_12 = 1f;
	fLocal_13 = 1f;
	iLocal_19 = -1;
	Var0.f_5.f_2 = 12;
	Var0.f_5.f_64 = 24;
	Var0.f_5.f_89 = 24;
	Var0.f_150 = 1;
	Var0.f_151 = 1;
	Var0.f_147 = 1;
	Var0.f_127 = ScriptParam_0.f_1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		Var0.f_144 = 1;
		func_1(&Var0, Global_1911866);
	}
	if (func_2())
	{
		TASK::_0xED27560703F37258(Global_35);
	}
	Var0.f_134 = ANIMSCENE::_CREATE_ANIM_SCENE("lightrig@player_journal", 0, "plMain", false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(Var0.f_134);
	Var0.f_142 = 0;
	if (MISC::GET_GAME_TIMER() >= &Global_1911773 && MISC::GET_GAME_TIMER() >= Global_36631)
	{
		Var0.f_119.f_4 = TASK::_0xDF7993356F52359A(Global_35, 0);
		Var0.f_142 = 1;
	}
	Global_1911773 = 0;
	Global_36633 = 0;
	Global_36634 = 0;
	if (MISC::GET_GAME_TIMER() < Global_36614 || Var0.f_142)
	{
		Global_36633 = 1;
		Global_36634 = 1;
	}
	if (Global_1935689->f_10189 == 0 || MISC::GET_GAME_TIMER() <= Global_1935496->f_59.f_2 + 3000)
	{
		Global_36633 = 1;
	}
	while (func_3(&Var0, Global_1911866))
	{
		Var0.f_130 = TASK::_0x6AA3DCA2C6F5EB6D(Global_35);
		if (ANIMSCENE::_0x25557E324489393C(Var0.f_134) && ANIMSCENE::_0x477122B8D05E7968(Var0.f_134, 1, 0))
		{
			if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(Var0.f_134, 0))
				{
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Var0.f_134, Global_36, ENTITY::GET_ENTITY_ROTATION(Global_35, 2), 2);
					ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(Var0.f_134, Global_35, -1);
					ANIMSCENE::START_ANIM_SCENE(Var0.f_134);
				}
			}
			else if (ANIMSCENE::_0xCBFC7725DE6CE2E0(Var0.f_134, 0))
			{
				ANIMSCENE::ABORT_ANIM_SCENE(Var0.f_134, true);
			}
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MELEE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_PRIMARY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_SECONDARY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		CAM::_0x8910C24B7E0046EC();
		if (UIAPPS::_IS_APP_RUNNING(-605293197))
		{
			HUD::_0xC9CAEAEEC1256E54(382897689);
		}
		if (Var0.f_142)
		{
			func_4(&Var0, Global_1911866);
		}
		else
		{
			func_5(&Var0, Global_1911866);
		}
		func_6(&Var0, Global_1911866);
		BUILTIN::WAIT(0);
	}
	func_1(&Var0, Global_1911866);
}

void func_1(var uParam0, var uParam1)
{
	if (func_7() && !Global_1935689->f_9)
	{
		if (!SCRIPTS::_0x9E4EF615E307FBBE())
		{
			SCRIPTS::TERMINATE_THIS_THREAD();
		}
		return;
	}
	if (UIAPPS::_IS_APP_RUNNING(-605293197))
	{
		UIAPPS::_CLOSE_APP_BY_HASH(-605293197);
	}
	if (uParam0->f_141)
	{
		func_8(uParam0, uParam1);
	}
	if (uParam0->f_145)
	{
		func_9(uParam0->f_1.f_1);
	}
	func_10(uParam0, uParam1);
	func_11(uParam0);
	func_12(uParam0);
	if (uParam0->f_144)
	{
		func_13(uParam0, uParam1);
	}
	if (!uParam0->f_143)
	{
		if (!((*uParam1)[0 /*9*/])->f_1)
		{
			func_14(0);
		}
		else
		{
			((*Global_1911894)[0 /*6*/])->f_1 = 4;
		}
		func_14(2);
		func_14(1);
		func_15(uParam1);
	}
	else
	{
		func_16(uParam0, uParam1);
	}
	if (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

int func_2()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return 0;
	}
	if (!TASK::_0xEFC4303DDC6E60D3(iVar0))
	{
		return 0;
	}
	iVar1 = TASK::_0xED1F514AF4732258(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		return 0;
	}
	if (!PED::_0x2D64376CF437363E(iVar1))
	{
		return 0;
	}
	return 1;
}

int func_3(var uParam0, var uParam1)
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		return 0;
	}
	if (func_17(uParam0, uParam1) && (MISC::GET_GAME_TIMER() >= Global_36614 || !func_18(&Global_1911772)))
	{
		uParam0->f_144 = 1;
		return 0;
	}
	return 1;
}

int func_4(var uParam0, var uParam1)
{
	if (*uParam0 > 0)
	{
		func_19(uParam0, uParam1);
	}
	switch (*uParam0)
	{
		case 0:
			uParam0->f_127 = TASK::_0x05A0100EA714DB68(Global_35, 2120637577);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_127))
			{
				func_20(uParam0, (*uParam1)[0 /*9*/]);
				func_21(uParam0, uParam1);
				func_22(uParam0, uParam1[0 /*9*/]);
				func_19(uParam0, uParam1);
				func_23(uParam0, 4);
			}
			break;
		case 4:
			if (func_24(uParam1[0 /*9*/], uParam0->f_130))
			{
				func_25(uParam1[0 /*9*/]);
				func_26(uParam0, uParam1, 1);
				func_23(uParam0, 6);
			}
			break;
		case 6:
			func_27(uParam0, (*uParam1)[0 /*9*/]);
			func_28(uParam0, uParam1);
			func_29(uParam0, uParam1);
			if (func_30(uParam1[0 /*9*/], uParam0->f_130))
			{
				if (func_31(uParam1[0 /*9*/], -674618190))
				{
					func_23(uParam0, 7);
				}
				else
				{
					func_23(uParam0, 8);
				}
			}
			else if (func_32(&(Global_36621[3]), 1))
			{
				func_33(uParam0, uParam1[0 /*9*/]);
			}
			func_11(uParam0);
			break;
		case 8:
			if (func_34(uParam1[0 /*9*/]) && !uParam0->f_149)
			{
				func_35(uParam1[0 /*9*/], 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				uParam0->f_149 = 1;
			}
			func_23(uParam0, 9);
			break;
		case 7:
			uParam0->f_119.f_3 = TASK::_0xA92450B5AE687AAF(uParam0->f_119.f_4);
			uParam0->f_119 = { TASK::_0xA8452DD321607029(uParam0->f_119.f_4, 1) };
			TASK::_0x4161648394262FDF(uParam0->f_119, 1f);
			if (!TASK::_0x841475AC96E794D1(uParam0->f_119.f_4))
			{
				uParam0->f_119.f_4 = TASK::_0xF533D68FF970D190(uParam0->f_119, uParam0->f_119.f_3, 1f, 1, 0);
			}
			uParam0->f_119.f_5 = TASK::_0x295514F198EFD0CA(uParam0->f_119.f_4, "PrimaryItem");
			uParam0->f_119.f_6 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_119.f_5);
			OBJECT::_0xE124889AE0521FCF(uParam0->f_119.f_6, ((*uParam1)[0 /*9*/])->f_3, 0, 0);
			func_23(uParam0, 9);
			break;
	}
	return 0;
}

int func_5(var uParam0, var uParam1)
{
	if (*uParam0 > 0)
	{
		func_19(uParam0, uParam1);
	}
	switch (*uParam0)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_127))
			{
				uParam0->f_127 = TASK::_0x05A0100EA714DB68(Global_35, 2120637577);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_127))
			{
				(*uParam1)[0 /*9*/] = func_36(uParam0);
				func_37(uParam0, uParam1[0 /*9*/]);
				func_21(uParam0, uParam1);
				func_22(uParam0, uParam1[0 /*9*/]);
				func_19(uParam0, uParam1);
				func_20(uParam0, (*uParam1)[0 /*9*/]);
				func_38(uParam0, uParam1);
				if (((*Global_1911894)[0 /*6*/])->f_1 == 2)
				{
					func_39((*uParam1)[0 /*9*/], 0);
					func_40(uParam0, uParam1);
				}
				func_23(uParam0, 2);
			}
			break;
		case 2:
			if (func_39((*uParam1)[0 /*9*/], 0) && func_41(uParam0, uParam1))
			{
				func_23(uParam0, 3);
			}
			break;
		case 3:
			if (func_40(uParam0, uParam1))
			{
				func_23(uParam0, 4);
			}
			break;
		case 4:
			if (func_24(uParam1[0 /*9*/], uParam0->f_130))
			{
				func_26(uParam0, uParam1, 1);
				func_25(uParam1[0 /*9*/]);
				func_23(uParam0, 5);
			}
			break;
		case 5:
			func_27(uParam0, (*uParam1)[0 /*9*/]);
			func_28(uParam0, uParam1);
			func_29(uParam0, uParam1);
			if (func_30(uParam1[0 /*9*/], uParam0->f_130))
			{
				func_23(uParam0, 9);
			}
			else if (func_42(&(Global_36621[2])) && func_43(&(Global_36621[2]), 1))
			{
				func_23(uParam0, 9);
				uParam0->f_144 = 1;
				Global_1935689->f_9 = 1;
				Global_36632 = MISC::GET_GAME_TIMER() + 10000;
				func_44(1);
			}
			else if (func_32(&(Global_36621[3]), 1))
			{
				func_33(uParam0, uParam1[0 /*9*/]);
			}
			else if (!Global_36633 && func_45(uParam0))
			{
				uParam0->f_143 = 1;
				func_23(uParam0, 9);
			}
			func_11(uParam0);
			break;
	}
	return 0;
}

int func_6(var uParam0, var uParam1)
{
	int iVar0;

	Global_1935496->f_59.f_4 = MISC::GET_GAME_TIMER() + 5000;
	if (Global_36620 == 1)
	{
		iVar0 = TASK::_0x6AA3DCA2C6F5EB6D(Global_35);
		if (iVar0 == func_46(&Global_1911772))
		{
			Global_36620 = 2;
		}
	}
	switch (*uParam0)
	{
		case 9:
			func_1(uParam0, uParam1);
			break;
	}
	return 0;
}

bool func_7()
{
	return (Global_1935689->f_1 || &Global_1935689 == 1);
}

void func_8(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1[24];
	char[] cVar4[8];

	switch (uParam1[0 /*9*/])
	{
		case -1280336729: /* GXTEntry: "Emmet Granger Photograph" */
		case -691125380: /* GXTEntry: "Flaco Hernandez Photograph" */
		case -287018478: /* GXTEntry: "Billy Midnight Photograph" */
		case 305626647: /* GXTEntry: "Black Belle Photograph" */
			if (uParam1[0 /*9*/] == -1280336729)
			{
				iVar0 = 84;
			}
			else if (uParam1[0 /*9*/] == -691125380)
			{
				iVar0 = 86;
			}
			else if (uParam1[0 /*9*/] == -287018478)
			{
				iVar0 = 87;
			}
			else if (uParam1[0 /*9*/] == 305626647)
			{
				iVar0 = 88;
			}
			if (func_47(iVar0) && !func_48(iVar0))
			{
				func_49(iVar0, 1);
				if (func_50(0, 0, 1))
				{
					func_51(iVar0, 2);
				}
				else
				{
					func_52(iVar0);
				}
				if (!func_53(26, 32))
				{
					if ((((func_54(84, 0) || func_48(84)) && (func_54(86, 0) || func_48(86))) && (func_54(87, 0) || func_48(87))) && (func_54(88, 0) || func_48(88)))
					{
						MemCopy(&cVar1, {((*Global_1347702)[26 /*49*/])->f_1}, 3);
						StringConCat(&cVar1, "_obj2", 24);
						if (HUD::DOES_TEXT_LABEL_EXIST(&cVar1) && UILOG::_UILOG_IS_ENTRY_REGISTERED(func_55(26), func_56(26)))
						{
							cVar4 = func_57(0, &cVar1, 0, 0, -1, -1);
							func_58(26, &cVar1, cVar4, -1082130432 /* Float: -1f */);
							func_51(26, 32);
						}
					}
				}
			}
			break;
	}
}

int func_9(int iParam0)
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

void func_10(var uParam0, var uParam1)
{
	vector3 vVar0[24];
	char[] cVar3[8];

	switch (uParam1[0 /*9*/])
	{
		case 1193708294: /* GXTEntry: "Invitation from Mayor Lemieux" */
			if (func_47(109) && !func_48(109))
			{
				func_49(109, 1);
				func_59(109);
				MemCopy(&cVar0, {((*Global_1347702)[109 /*49*/])->f_1}, 3);
				StringConCat(&cVar0, "_obj", 24);
				if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0) && UILOG::_UILOG_IS_ENTRY_REGISTERED(func_55(109), func_56(109)))
				{
					cVar3 = func_57(0, &cVar0, 0, 0, -1, -1);
					func_58(109, &cVar0, cVar3, -1082130432 /* Float: -1f */);
				}
			}
			break;
		case -1069771785: /* GXTEntry: "Second Invitation from Mayor Lemieux" */
		case 1085543656: /* GXTEntry: "Second Invitation from Mayor Lemieux" */
			if (func_47(110) && !func_48(110))
			{
				func_49(110, 1);
				func_60(109, 0);
			}
			break;
	}
}

void func_11(var uParam0)
{
	if (uParam0->f_5.f_1 && !UIAPPS::_IS_APP_RUNNING(-605293197))
	{
		AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
		uParam0->f_5.f_1 = 0;
	}
}

void func_12(var uParam0)
{
	int iVar0;

	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_5.f_63))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_5.f_63);
	}
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_5.f_64[iVar0])))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(&(uParam0->f_5.f_64[iVar0]));
		}
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_5.f_89[iVar0])))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(&(uParam0->f_5.f_89[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_5.f_2)
	{
		(uParam0->f_5.f_2[iVar0 /*5*/])->f_3 = 0;
		iVar0++;
	}
}

void func_13(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = uParam1[0 /*9*/];
	if (*uParam0 == 0 && iVar0 == 0)
	{
		iVar0 = &Global_1911772;
	}
	if (iVar0 != 0)
	{
		if (func_46(iVar0) != 0)
		{
			TASK::_0xB35370D5353995CB(Global_35, func_46(iVar0), 1048576000);
		}
		if (((uParam0->f_142 && func_34(iVar0)) && !func_61(iVar0, 1, 0)) && !uParam0->f_149)
		{
			func_35(iVar0, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			uParam0->f_149 = 1;
		}
	}
}

void func_14(int iParam0)
{
	((*Global_1911894)[iParam0 /*6*/])->f_1 = 3;
	(*Global_1911894)[iParam0 /*6*/] = 0;
	((*Global_1911894)[iParam0 /*6*/])->f_5 = 0;
}

void func_15(var uParam0)
{
	if (!Global_1935689->f_9)
	{
		if (((func_31(&Global_1911772, -1472964441) || func_31(&Global_1911772, 1841149704)) || func_31(&Global_1911772, 566155764)) || func_31(&Global_1911772, -228153877))
		{
			Global_1935496->f_59.f_6 = 1;
			Global_1935496->f_59.f_7 = 1;
			Global_1935496->f_59.f_1 = &Global_1911772;
			Global_1935496->f_59.f_5 = MISC::GET_GAME_TIMER();
		}
	}
	Global_1911772 = 0;
	Global_36631 = 0;
	Global_36620 = 2;
	((*Global_1911866)[0 /*9*/])->f_2 = 0;
	func_62(uParam0);
}

void func_16(var uParam0, var uParam1)
{
	if (uParam0->f_141)
	{
		func_8(uParam0, uParam1);
	}
	if (uParam0->f_136)
	{
		func_63(uParam1);
	}
	else
	{
		func_64(uParam1);
	}
	if (uParam0->f_145)
	{
		func_9(uParam0->f_1.f_1);
	}
	func_65(uParam1);
	((*uParam1)[0 /*9*/])->f_2 = 0;
	Global_1911772 = uParam1[0 /*9*/];
	func_66(uParam1[0 /*9*/], 0, 1, 0, 0f);
	GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
	Global_36631 = MISC::GET_GAME_TIMER() + 3000;
}

int func_17(var uParam0, var uParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 1;
	}
	if (!TASK::_0x038B1F1674F0E242(Global_35))
	{
		return 1;
	}
	if (!func_67(16))
	{
		return 1;
	}
	if ((!uParam0->f_144 && *uParam0 > 4) && func_68(uParam1[0 /*9*/]))
	{
		return 1;
	}
	return 0;
}

int func_18(int iParam0)
{
	switch (iParam0)
	{
		case -1043796944: /* GXTEntry: "Killer Clue 2 Piece" */
		case -904734609: /* GXTEntry: "Goodbye Letter from Mary" */
		case -595619260: /* GXTEntry: "Goodbye Letter from Mary" */
		case -31140163: /* GXTEntry: "Panoramic Map" */
		case 1272643670: /* GXTEntry: "Killer Clue 3 Piece" */
		case 1760651454: /* GXTEntry: "Goodbye Letter from Mary" */
		case 2019023183: /* GXTEntry: "Killer Clue 1 Piece" */
			return 1;
	}
	return 0;
}

void func_19(var uParam0, var uParam1)
{
	if (!uParam0->f_148)
	{
		if (func_24(uParam1[0 /*9*/], uParam0->f_130))
		{
			func_26(uParam0, uParam1, 0);
			uParam0->f_148 = 1;
		}
	}
}

void func_20(var uParam0, var uParam1)
{
	struct<5> Var0;

	*uParam1 = func_36(uParam0);
	uParam1->f_4 = func_69(*uParam1, -949239683);
	uParam1->f_1 = func_70(uParam1->f_4);
	if (uParam1->f_1)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(*uParam1, &Var0))
		{
			uParam1->f_5.f_2 = Var0.f_4;
		}
	}
	func_37(uParam0, *uParam1);
}

void func_21(var uParam0, var uParam1)
{
	uParam0->f_146 = 1;
	switch (TASK::_0x804425C4BBD00883(Global_35))
	{
		case 2129073771:
			if (func_71() == 2)
			{
				iLocal_20 = 2093920838;
			}
			else if (func_71() == 6 || func_71() == 3)
			{
				iLocal_20 = 1921031594;
			}
			else
			{
				iLocal_20 = -1912187723;
			}
			TXD::_0xDB1BD07FB464584D(iLocal_20, 0);
			break;
		case -1391775747: /* GXTEntry: "Jail Ledger" */
			iLocal_20 = -658853329;
			TXD::_0xDB1BD07FB464584D(iLocal_20, 0);
			break;
		case -1448289118: /* GXTEntry: "Diary" */
			iLocal_20 = 1095224717;
			TXD::_0xDB1BD07FB464584D(iLocal_20, 0);
			break;
		case 1374000197: /* GXTEntry: "Ledger" */
			iLocal_20 = -1514495643;
			TXD::_0xDB1BD07FB464584D(iLocal_20, 0);
			break;
	}
}

void func_22(var uParam0, int iParam1)
{
	if (func_31(iParam1, -98816307))
	{
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_BOOK_TAKE_AVAILABLE", 0, -1);
	}
	else
	{
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_BOOK_TAKE_AVAILABLE", 1, -1);
	}
	if (func_31(iParam1, -1903335637))
	{
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_DOCUMENT_FLIP_AVAILABLE", 1, -1);
	}
	else
	{
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_DOCUMENT_FLIP_AVAILABLE", 0, -1);
	}
	if (uParam0->f_146)
	{
		if (func_31(iParam1, -98816307))
		{
			PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_BOOK_TAKE_AVAILABLE", 0, -1);
			PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_BOOK_RETURN_AVAILABLE", 1, -1);
		}
	}
	func_72(uParam0);
}

void func_23(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_24(int iParam0, int iParam1)
{
	switch (func_69(iParam0, -949239683))
	{
		case 1712126263:
			if (iParam1 == -1424266966)
			{
				return 1;
			}
			break;
		case 10252101:
			if (iParam1 == -487508500)
			{
				return 1;
			}
			break;
		case -1229959999:
			if (iParam1 == -1791047090)
			{
				return 1;
			}
			break;
		case -1050374492:
			if (iParam1 == 760057945)
			{
				return 1;
			}
			break;
		case 1513351077:
			if (iParam1 == -1043439814)
			{
				return 1;
			}
			break;
		case -1565009253:
			if (iParam1 == -2077441721)
			{
				return 1;
			}
			break;
		case 733893097:
			if (iParam1 == 1972630951)
			{
				return 1;
			}
			break;
		case -164980960:
			if (iParam1 == 2000759837)
			{
				return 1;
			}
			break;
		case 1894156335:
			if (iParam1 == 374699583)
			{
				return 1;
			}
			break;
		case 871191033:
			if (iParam1 == -59421711)
			{
				return 1;
			}
			break;
		case -1273369295:
			if (iParam1 == -1340223099)
			{
				return 1;
			}
			break;
		case 82200319:
			if (iParam1 == -1140851507)
			{
				return 1;
			}
			break;
		case -873135685:
			if (iParam1 == -1570312122 || iParam1 == -1563464392)
			{
				return 1;
			}
			break;
		case 24248412:
			if (iParam1 == 416212934)
			{
				return 1;
			}
			break;
		case -1239610997:
			if ((iParam1 == 1087288635 || iParam1 == 1761334567) || iParam1 == 504129763)
			{
				return 1;
			}
			break;
		case 632545869:
			if ((iParam1 == -212251684 || iParam1 == -1401979141) || iParam1 == -1983586928)
			{
				return 1;
			}
			break;
		case -793205628:
			if (iParam1 == 136592566 || iParam1 == 16062911)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_25(var uParam0)
{
}

int func_26(var uParam0, var uParam1, bool bParam2)
{
	if (!uParam0->f_146)
	{
		if (!Global_36633 && bParam2)
		{
			if (!func_73(uParam1[2 /*9*/], 0))
			{
				Global_36626[1] = 0;
				if (func_42(&(Global_36621[1])))
				{
					func_74(&(Global_36621[1]), 0, 1);
				}
			}
			else
			{
				Global_36626[1] = 1;
				if (func_42(&(Global_36621[1])))
				{
					func_74(&(Global_36621[1]), 1, 1);
				}
			}
			if (!func_73(uParam1[1 /*9*/], 0))
			{
				Global_36626[0] = 0;
				if (func_42(&(Global_36621[0])))
				{
					func_74(&(Global_36621[0]), 0, 1);
				}
			}
			else
			{
				Global_36626[0] = 1;
				if (func_42(&(Global_36621[0])))
				{
					func_74(&(Global_36621[0]), 1, 1);
				}
			}
		}
		Global_36626[3] = func_75(uParam0, (*uParam1)[0 /*9*/]);
		if (func_42(&(Global_36621[3])))
		{
			func_74(&(Global_36621[3]), &(Global_36626[3]), 1);
		}
		if (uParam1[0 /*9*/] == -1084135070)
		{
			Global_36635 = 1;
		}
		Global_36620 = 1;
	}
	if (uParam0->f_142)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INSPECT_ZOOM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DOCUMENT_PAGE_NEXT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DOCUMENT_PAGE_PREV"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_A"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_X"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INSPECT_OPEN_SATCHEL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INSPECT_OPEN_SATCHEL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_TAB_RIGHT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_TAB_LEFT"), false);
	}
	return 1;
}

void func_27(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (!func_24(*uParam1, uParam0->f_130) && !func_76(*uParam1, uParam0->f_130))
	{
		if (!uParam0->f_138)
		{
			if (func_77(&(Global_36621[0]), 1))
			{
				uParam0->f_139 = 0;
			}
			else
			{
				uParam0->f_139 = 1;
			}
			if (func_77(&(Global_36621[1]), 1))
			{
				uParam0->f_140 = 0;
			}
			else
			{
				uParam0->f_140 = 1;
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				func_78(Global_36621[iVar0], 0);
				iVar0++;
			}
			uParam0->f_138 = 1;
		}
	}
	else if (uParam0->f_138)
	{
		func_79(uParam0, uParam1);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar1 = iVar0;
			if (((iVar1 == 0 && !uParam0->f_139) || (iVar1 == 1 && !uParam0->f_140)) || (iVar1 != 1 && iVar1 != 0))
			{
				func_78(Global_36621[iVar1], 1);
			}
			iVar0++;
		}
		uParam0->f_138 = 0;
	}
}

void func_28(var uParam0, var uParam1)
{
	if (!uParam0->f_141 && func_80(uParam1[0 /*9*/], uParam0->f_130))
	{
		uParam0->f_141 = 1;
		func_81(uParam1[0 /*9*/]);
	}
}

void func_29(var uParam0, var uParam1)
{
	int iVar0;

	if (!UIAPPS::_IS_APP_RUNNING(-605293197) && uParam0->f_131 > 0)
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(0, joaat("INPUT_CONTEXT_X")))
		{
			if (UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(-605293197, joaat("generic")) == 0)
			{
				func_82(uParam0, uParam1);
			}
		}
		if (iLocal_19 == -1)
		{
			func_83(uParam0);
		}
		iVar0 = TASK::_0x6AA3DCA2C6F5EB6D(Global_35);
		if (!bLocal_15)
		{
			if (iVar0 == -271999469 || iVar0 == 1088578020)
			{
				bLocal_15 = true;
				iLocal_18++;
			}
		}
		else if (((iVar0 == 1087288635 || iVar0 == 504129763) || iVar0 == -1809475494) || iVar0 == 1854147388)
		{
			bLocal_15 = false;
		}
		if (!bLocal_16)
		{
			if (iVar0 == 447737959 || iVar0 == 847337666)
			{
				bLocal_16 = true;
				iLocal_18 = (iLocal_18 - 1);
			}
		}
		else if (((iVar0 == 1087288635 || iVar0 == 504129763) || iVar0 == -1809475494) || iVar0 == 1854147388)
		{
			bLocal_16 = false;
		}
		if (iLocal_18 == 0)
		{
			if (!PED::_0x4912DFE492DB98CD(Global_35, "BOOK_BLOCK_PAGE_PREV"))
			{
				PED::_0xCB9401F918CB0F75(Global_35, "BOOK_BLOCK_PAGE_PREV", 1, -1);
			}
		}
		else if (PED::_0x4912DFE492DB98CD(Global_35, "BOOK_BLOCK_PAGE_PREV"))
		{
			PED::_0xCB9401F918CB0F75(Global_35, "BOOK_BLOCK_PAGE_PREV", 0, -1);
		}
		if (iLocal_18 >= iLocal_19)
		{
			if (!PED::_0x4912DFE492DB98CD(Global_35, "BOOK_BLOCK_PAGE_NEXT"))
			{
				PED::_0xCB9401F918CB0F75(Global_35, "BOOK_BLOCK_PAGE_NEXT", 1, -1);
			}
		}
		else if (PED::_0x4912DFE492DB98CD(Global_35, "BOOK_BLOCK_PAGE_NEXT"))
		{
			PED::_0xCB9401F918CB0F75(Global_35, "BOOK_BLOCK_PAGE_NEXT", 0, -1);
		}
	}
	if (!bLocal_17 && iLocal_20 != 0)
	{
		if (TXD::_0xBE72591D1509FFE4(iLocal_20))
		{
			OBJECT::_0xE124889AE0521FCF(TASK::_0x05A0100EA714DB68(Global_35, 0), iLocal_20, 0, 0);
			bLocal_17 = true;
		}
	}
}

int func_30(int iParam0, int iParam1)
{
	switch (func_69(iParam0, -949239683))
	{
		case 1712126263:
			if (iParam1 == 1918075176 || iParam1 == -1661733570)
			{
				return 1;
			}
			break;
		case 10252101:
			if (iParam1 == -838154919 || iParam1 == 384644694)
			{
				return 1;
			}
			break;
		case -1229959999:
			if (iParam1 == 779637421 || iParam1 == 1184806339)
			{
				return 1;
			}
			break;
		case -1050374492:
			if (iParam1 == -13228069 || iParam1 == -733273327)
			{
				return 1;
			}
			break;
		case 1513351077:
			if (iParam1 == -1855297853 || iParam1 == 327088472)
			{
				return 1;
			}
			break;
		case -1565009253:
			if (iParam1 == -672448089 || iParam1 == 1505672707)
			{
				return 1;
			}
			break;
		case 733893097:
			if (iParam1 == 329918092 || iParam1 == 1320390176)
			{
				return 1;
			}
			break;
		case -164980960:
			if (iParam1 == 1096961806 || iParam1 == -1142551033)
			{
				return 1;
			}
			break;
		case 1894156335:
			if (iParam1 == 2067181640 || iParam1 == -1286256799)
			{
				return 1;
			}
			break;
		case 871191033:
			if (iParam1 == 313665285 || iParam1 == 474174677)
			{
				return 1;
			}
			break;
		case -1273369295:
			if (iParam1 == 1434623772 || iParam1 == 1708036133)
			{
				return 1;
			}
			break;
		case 82200319:
			if (iParam1 == 1668318109 || iParam1 == -465598822)
			{
				return 1;
			}
			break;
		case -873135685:
			if (iParam1 == 676329346 || iParam1 == 1940752053)
			{
				return 1;
			}
			break;
		case 24248412:
			if (iParam1 == -587250236 || iParam1 == -503655797)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_31(int iParam0, int iParam1)
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

bool func_32(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_42(iParam0))
	{
		return false;
	}
	iVar0 = func_84(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_33(var uParam0, int iParam1)
{
	if (func_31(iParam1, -1227898937))
	{
		if (UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(-605293197, 1536810153) == 0)
		{
			uParam0->f_5.f_1 = 1;
			AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
			func_85(uParam0, iParam1);
		}
	}
	else if (UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(-605293197, joaat("generic")) == 0)
	{
		uParam0->f_5.f_1 = 1;
		AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
		func_85(uParam0, iParam1);
	}
}

int func_34(int iParam0)
{
	switch (iParam0)
	{
		case -1043796944: /* GXTEntry: "Killer Clue 2 Piece" */
		case -31140163: /* GXTEntry: "Panoramic Map" */
		case 1272643670: /* GXTEntry: "Killer Clue 3 Piece" */
		case 2019023183: /* GXTEntry: "Killer Clue 1 Piece" */
			return 0;
	}
	return 1;
}

int func_35(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;

	if (!func_73(iParam0, 0))
	{
		return 0;
	}
	if (!func_86(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_87(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_88(iParam0, bParam2);
	iVar2 = 0;
	if (func_89(iParam0, 0, 0) == 0)
	{
		if (func_90(iParam0))
		{
			iVar5 = func_91(iParam0);
			iVar6 = func_92(iVar5);
			iVar7 = func_93(iVar6) + 1;
			func_94(iVar5);
			if (func_95(38))
			{
				func_96(483, 0);
			}
			else
			{
				func_96(482, 0);
			}
			if (iVar7 == func_97(iVar6))
			{
				func_35(func_98(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_99() && func_100(4))
				{
					if (func_99() && (func_101(38) || func_95(38)))
					{
						func_103(38, func_98(iVar6), 0, 0, func_102(), 0, -1, 0);
						func_104(2);
					}
					else
					{
						func_103(38, func_98(iVar6), 0, 0, func_102(), 0, -1, 0);
						func_104(1);
					}
				}
			}
			else if (func_99() && func_100(4))
			{
				if (func_99() && (func_101(38) || func_95(38)))
				{
					func_103(38, 0, 0, 0, func_102(), 0, -1, 0);
					func_104(2);
				}
				else
				{
					func_103(38, 0, 0, 0, func_102(), 0, -1, 0);
					func_104(1);
				}
			}
			if (func_99() && func_100(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_99() && (func_101(38) || func_95(38)))
					{
						func_105(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_105(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_106(iParam0) == joaat("clothing"))
	{
		if ((!func_31(iParam0, 866047851) && !func_31(iParam0, -1979000645)) && !func_31(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_107(iParam0, 8388608) && !func_108(28))
	{
		func_109(28);
	}
	if (!bVar3)
	{
		if (func_31(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_110(iParam0) == -1447088266)
			{
				iVar1 = func_112(func_111(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_113() == -1)
					{
						func_114(iVar1);
					}
					if (func_115(0) && func_116(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_117(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_0x5C2EA6C44F515F34(iParam0);
				if (WEAPON::_0x1F7977C9101F807F(iVar1))
				{
					if (func_113() == -1)
					{
						func_114(iParam0);
					}
					if (func_115(0) && func_116(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_117(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_106(iParam0) == joaat("weapon"))
		{
			if (!func_118(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_106(iParam0) == joaat("ammo") && func_119(iParam0))
		{
			if (!func_120(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_31(iParam0, 866047851))
		{
			func_121(iParam0);
		}
		else if (func_31(iParam0, 2000026003))
		{
			func_122(iParam0);
		}
		else if (func_31(iParam0, -103750053))
		{
			func_124(func_123(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_124(func_125(-717883113, 2091222383), iVar0);
		}
		else if (func_31(iParam0, -121341956) && !func_31(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_126(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_96(498, 0);
				}
			}
			if (func_31(iParam0, -2017733358) || func_31(iParam0, -1369131378))
			{
				func_127(iParam0);
			}
		}
		else if (func_31(iParam0, -136654233))
		{
			if (func_31(iParam0, -1021472396))
			{
			}
		}
		else if (func_31(iParam0, -1466706512) && func_31(iParam0, 1147021565))
		{
			func_96(484, 0);
		}
		else if (func_31(iParam0, 1147021565) && func_31(iParam0, -524514947))
		{
		}
		else if (func_31(iParam0, 554195525))
		{
		}
		else if (func_31(iParam0, 589988438))
		{
			if (func_128())
			{
				func_129(1339418451, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_31(iParam0, 787083290) && func_31(iParam0, 949916894))
		{
			func_130(iParam0);
		}
		else if (func_31(iParam0, -1718133314))
		{
			func_131(iParam0);
		}
		else if (func_31(iParam0, -1738650224))
		{
			func_132(iParam0);
		}
		else if (func_31(iParam0, -1112814642) && func_31(iParam0, 949916894))
		{
			func_133(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_31(iParam0, 1841149704))
		{
			func_134();
		}
		else if (func_31(iParam0, 606799272))
		{
			func_135(iParam0, iParam1);
			func_136(iParam0);
		}
		else if (func_31(iParam0, -1112814642) && func_31(iParam0, -1697809989))
		{
			func_137(iParam0, 0, 0, 0);
		}
		else if (func_31(iParam0, -2017733358) || func_31(iParam0, -1369131378))
		{
			func_127(iParam0);
		}
		else if (func_31(iParam0, -1921346699))
		{
			if (func_113() != -1)
			{
				return 0;
			}
			func_138(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_31(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868: /* GXTEntry: "Special Lake Lure" */
					if (!func_61(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_35(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438: /* GXTEntry: "Special River Lure" */
					if (!func_61(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_35(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217: /* GXTEntry: "Special Swamp Lure" */
					if (!func_61(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_35(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653: /* GXTEntry: "Lake Lure" */
					if (!func_61(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_35(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425: /* GXTEntry: "River Lure" */
					if (!func_61(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_35(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104: /* GXTEntry: "Swamp Lure" */
					if (!func_61(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_35(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_31(iParam0, -839724752) && func_107(iParam0, 4))
		{
			if (!func_95(42))
			{
				func_139(iParam0);
			}
		}
		else if (func_31(iParam0, 1399091007))
		{
			func_140(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_31(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case -593948563: /* GXTEntry: "Legend of the East Satchel" */
					iVar8 = -1281487556; /* GXTEntry: "Legend of the East Satchel" */
					break;
				case -1421669656: /* GXTEntry: "Tonics Satchel" */
					iVar8 = -59585102; /* GXTEntry: "Tonics Satchel" */
					break;
				case -830181022: /* GXTEntry: "Ingredients Satchel" */
					iVar8 = 1018123892; /* GXTEntry: "Ingredients Satchel" */
					break;
				case 917695895: /* GXTEntry: "Kit Satchel" */
					iVar8 = -1455768246; /* GXTEntry: "Kit Satchel" */
					break;
				case -1580595448: /* GXTEntry: "Provisions Satchel" */
					iVar8 = -921879912; /* GXTEntry: "Provisions Satchel" */
					break;
				case 1309992709: /* GXTEntry: "Materials Satchel" */
					iVar8 = 982182330; /* GXTEntry: "Materials Satchel" */
					break;
				case 1541618973: /* GXTEntry: "Valuables Satchel" */
					iVar8 = -1406390556; /* GXTEntry: "Valuables Satchel" */
					break;
			}
			if (iVar8 != 0)
			{
				func_35(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case 990323211: /* GXTEntry: "Bundle of Arrows" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1930309310;
				break;
			case 1143540373: /* GXTEntry: "Poison Throwing Knives" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1372580021;
				break;
			case -1073808995: /* GXTEntry: "Live Crickets" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1557306571;
				break;
			case 1903483453: /* GXTEntry: "Live Worms" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 306085243;
				break;
			case 224572565: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case -13395913: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case 1859340712: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1614861441: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1336735809: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case -1109613870: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case 637788839: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case -1161163727: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case 648503798: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -1434556002: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -843069275: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case 1356680930: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case -1185145312: /* GXTEntry: "Upgraded Off-Hand Holster" */
				func_109(24);
				if (&Global_1946804->f_1497.f_1[27 /*3*/] == &Global_1946804->f_57[27 /*11*/])
				{
					func_141(PLAYER::PLAYER_PED_ID(), -1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_142(&iVar9, 0))
				{
					func_116(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303: /* GXTEntry: "Upgraded Bandolier" */
				if (func_113() == -1 && &Global_1946804->f_1497.f_1[25 /*3*/] == &Global_1946804->f_57[25 /*11*/])
				{
					func_141(PLAYER::PLAYER_PED_ID(), 1171350303 /* GXTEntry: "Upgraded Bandolier" */, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("weapon_kit_binoculars"):
				break;
			case 2131771850:
				func_96(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_143();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_144();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_145();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_146();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_147();
				break;
			case -102111672: /* GXTEntry: "Map" */
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584: /* GXTEntry: "Jack Hall Gang Map 1" */
				func_148(499813453, 854119837, 0);
				func_149(499813453, 0);
				func_150(1);
				break;
			case 2127812557:
				func_148(499813453, -1292544588, 0);
				func_149(499813453, 0);
				func_150(2);
				break;
			case 808991383: /* GXTEntry: "Jack Hall Gang Map 3" */
				func_148(499813453, -1003325394, 0);
				func_149(499813453, 0);
				func_150(4);
				break;
			case 1134518629: /* GXTEntry: "High Stakes Treasure Map 1" */
				func_148(666607663, -335460405, 0);
				func_149(666607663, 0);
				func_151(1);
				break;
			case 902940106: /* GXTEntry: "High Stakes Treasure Map 2" */
				func_148(666607663, 903797617, 0);
				func_149(666607663, 0);
				func_151(2);
				break;
			case -418174898: /* GXTEntry: "High Stakes Treasure Map 3" */
				func_148(666607663, 669728650, 0);
				func_149(666607663, 0);
				func_151(4);
				break;
			case -648114971: /* GXTEntry: "The Poisonous Trail Map 1" */
				func_148(-220219788, 1214120047, 0);
				func_149(-220219788, 0);
				func_152(1);
				break;
			case 211153747: /* GXTEntry: "The Poisonous Trail Map 2" */
				func_148(-220219788, 655769340, 0);
				func_149(-220219788, 0);
				func_152(2);
				break;
			case -32876996: /* GXTEntry: "The Poisonous Trail Map 3" */
				func_148(-220219788, 885316185, 0);
				func_149(-220219788, 0);
				func_152(4);
				break;
			case 1191437462: /* GXTEntry: "Le Tresor des Morts Map 1" */
				func_148(218622660, -1491419385, 0);
				func_149(218622660, 0);
				func_153(1);
				break;
			case 1119149048: /* GXTEntry: "Le Tresor des Morts Riddle Note" */
				func_148(218622660, 1809565830, 0);
				func_149(218622660, 0);
				func_153(2);
				break;
			case 506073827: /* GXTEntry: "The Elemental Trail Map 1" */
				func_148(390004462, -628873767, 0);
				func_149(390004462, 0);
				func_154(1);
				break;
			case -1876986168: /* GXTEntry: "The Elemental Trail Map 2" */
				func_148(390004462, -405421956, 0);
				func_149(390004462, 0);
				func_154(2);
				break;
			case 2142623221:
				func_148(390004462, -1108972386, 0);
				func_149(390004462, 0);
				func_154(4);
				break;
			case 1508215381: /* GXTEntry: "Landmarks of Riches Map 1" */
				func_148(6410548, 1053716392, 0);
				func_149(6410548, 0);
				func_155(1);
				break;
			case -888935280: /* GXTEntry: "Landmarks of Riches Map 2" */
				func_148(6410548, 806507056, 0);
				func_149(6410548, 0);
				func_155(2);
				break;
			case -1252474566: /* GXTEntry: "Landmarks of Riches Map 3" */
				func_148(6410548, 1571925350, 0);
				func_149(6410548, 0);
				func_155(4);
				break;
			case -1465702449: /* GXTEntry: "Landmarks of Riches Map 4" */
				func_148(6410548, 1330352282, 0);
				func_149(6410548, 0);
				func_155(8);
				break;
			case -21093309: /* GXTEntry: "Aged Pirate Rum" */
				func_157(242, func_156(-21093309 /* GXTEntry: "Aged Pirate Rum" */), 0);
				break;
			case 204375141: /* GXTEntry: "Ginseng Elixir" */
				func_157(240, func_156(204375141 /* GXTEntry: "Ginseng Elixir" */), 0);
				break;
			case -417963070: /* GXTEntry: "Valerian Root" */
				func_157(241, func_156(-417963070 /* GXTEntry: "Valerian Root" */), 0);
				break;
			case -1080874779: /* GXTEntry: "Special Health Cure" */
			case -755485480: /* GXTEntry: "Potent Health Cure" */
			case 230530039: /* GXTEntry: "Health Cure" */
			case 299161628: /* GXTEntry: "Moonshine" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_158(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1067476102: /* GXTEntry: "Potent Bitters" */
			case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
			case 206762213: /* GXTEntry: "Cocaine Gum" */
			case 1566032147: /* GXTEntry: "Special Bitters" */
			case 1973952589: /* GXTEntry: "Bitters" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_158(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -653299524: /* GXTEntry: "Snake Oil" */
			case -486559882: /* GXTEntry: "Potent Snake Oil" */
			case -324053813: /* GXTEntry: "Chewing Tobacco" */
			case -223790555: /* GXTEntry: "Special Snake Oil" */
			case 998010398: /* GXTEntry: "Opened Chewing Tobacco" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_158(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1976480343: /* GXTEntry: "Special Miracle Tonic" */
			case -953313786: /* GXTEntry: "Miracle Tonic" */
			case 730856618: /* GXTEntry: "Potent Miracle Tonic" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_158(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -2034071102: /* GXTEntry: "Lamb Heart" */
			case -1939600995: /* GXTEntry: "Prime Rib" */
			case -1760041550: /* GXTEntry: "High Quality Beef Stew" */
			case -1708424762: /* GXTEntry: "Regional Beef Stew" */
			case -1598782722: /* GXTEntry: "Consomme" */
			case -1505924449: /* GXTEntry: "Fried Catfish" */
			case -1403873319: /* GXTEntry: "Prairie Chicken" */
			case -1335566375: /* GXTEntry: "Lamb Fry" */
			case -1192685521: /* GXTEntry: "Oyster Stew" */
			case 144810727: /* GXTEntry: "Turtle Soup" */
			case 567164682: /* GXTEntry: "Oatmeal" */
			case 1174625611: /* GXTEntry: "Corned Beef Hash" */
			case 1955751248: /* GXTEntry: "Roast Beef" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_158(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039: /* GXTEntry: "High Quality Beef and Eggs Stew" */
			case -399865011: /* GXTEntry: "Regional Beef and Eggs Stew" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_158(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case 80178851: /* GXTEntry: "Hair Tonic" */
				func_96(488, 0);
				break;
			case 1613651027: /* GXTEntry: "Hair Pomade" */
				func_96(491, 0);
				break;
			case -885810591: /* GXTEntry: "Premium Cigarettes" */
				func_96(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_35(func_159(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_35(func_160(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535: /* GXTEntry: "Ground Coffee" */
				if (func_108(1))
				{
					func_96(487, 0);
				}
				break;
			case -898386032: /* GXTEntry: "Gun Oil" */
				func_96(486, 0);
				break;
			case -2035110427: /* GXTEntry: "Mortar and Pestle" */
				if (func_113() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case 1510719693: /* GXTEntry: "Coffee Percolator" */
				func_96(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		func_161(&iVar10);
		if (!func_162(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_115(0))
		{
			return 1;
		}
		if (func_106(iParam0) == joaat("clothing"))
		{
			func_163(iParam0);
		}
		if (func_31(iParam0, -1979000645))
		{
			func_164(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_115(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_35(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_165(iVar2, 0);
		}
	}
	Var35 = { func_166(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_0x6A0184E904CDF25E(&Var35, iVar0);
	}
	func_167(iParam0);
	if (fParam6 > 0f)
	{
		if (func_31(iParam0, -839724752))
		{
			func_168(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_169(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

int func_36(var uParam0)
{
	int iVar0;

	if (uParam0->f_142)
	{
		if (DECORATOR::DECOR_EXIST_ON(uParam0->f_127, "letter_item"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(uParam0->f_127, "letter_item");
		}
		else
		{
			iVar0 = TASK::_0x804425C4BBD00883(Global_35);
			if (!func_73(iVar0, 0))
			{
				iVar0 = 323269915;
			}
		}
		Global_1911772 = iVar0;
	}
	else
	{
		iVar0 = &Global_1911772;
	}
	return iVar0;
}

void func_37(var uParam0, int iParam1)
{
	int iVar0;

	uParam0->f_131 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_NUM_LABEL_TYPES(iParam1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_131)
	{
		uParam0->f_5.f_2[iVar0 /*5*/] = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_TYPE(iParam1, iVar0);
		(uParam0->f_5.f_2[iVar0 /*5*/])->f_2 = &uParam0->f_5.f_2[iVar0 /*5*/];
		(uParam0->f_5.f_2[iVar0 /*5*/])->f_1 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_NUM_VALUES(iParam1, (uParam0->f_5.f_2[iVar0 /*5*/])->f_2);
		iVar0++;
	}
}

void func_38(var uParam0, var uParam1)
{
	func_170(uParam0, uParam1[0 /*9*/]);
	func_171(uParam0, uParam1);
	if (uParam1[1 /*9*/] != 0)
	{
		func_172(1, uParam1[1 /*9*/]);
	}
	else
	{
		func_14(1);
	}
	func_173(uParam0, uParam1);
	if (uParam1[2 /*9*/] != 0)
	{
		func_172(2, uParam1[2 /*9*/]);
	}
	else
	{
		func_14(2);
	}
	func_174(uParam1);
	func_175(uParam1);
}

int func_39(var uParam0, int iParam1)
{
	int iVar0;

	if (uParam0->f_1)
	{
		return 1;
	}
	else if (func_176(*uParam0, &iVar0, joaat("inventory"), -401018458, 0, 0))
	{
		if (TXD::_0xBA0163B277C2D2D0(iVar0))
		{
			TXD::_0xDB1BD07FB464584D(iVar0, 0);
			uParam0->f_3 = iVar0;
		}
	}
	return 1;
}

int func_40(var uParam0, var uParam1)
{
	if (func_177(uParam0, (*uParam1)[0 /*9*/]))
	{
		func_172(0, uParam1[0 /*9*/]);
		func_178(uParam0, uParam1);
		return 1;
	}
	return 0;
}

int func_41(var uParam0, var uParam1)
{
	return 1;
}

bool func_42(int iParam0)
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

bool func_43(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_42(iParam0))
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

void func_44(bool bParam0)
{
	if (bParam0)
	{
		Global_1935689 = 1;
	}
	else
	{
		Global_1935689 = 2;
	}
}

int func_45(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	uParam0->f_136 = 0;
	if (func_32(&(Global_36621[1]), 1))
	{
		iVar0 = 1;
		uParam0->f_136 = 1;
		func_78(Global_36621[1], !uParam0->f_151);
		func_78(Global_36621[0], 1);
	}
	if (func_32(&(Global_36621[0]), 1))
	{
		iVar0 = 1;
		func_78(Global_36621[0], !uParam0->f_150);
		func_78(Global_36621[1], 1);
	}
	return iVar0;
}

int func_46(int iParam0)
{
	switch (func_69(iParam0, -949239683))
	{
		case 1712126263:
			return 1918075176;
		case 10252101:
			return -838154919;
		case -1229959999:
			return 779637421;
		case -1050374492:
			return -13228069;
		case 1513351077:
			return -1855297853;
		case -1565009253:
			return -672448089;
		case 733893097:
			return 329918092;
		case -164980960:
			return 1096961806;
		case 1894156335:
			return 2067181640;
		case 871191033:
			return 313665285;
		case -1273369295:
			return 1434623772;
		case 82200319:
			return 1668318109;
		case -873135685:
			return 486187924;
		case 24248412:
			return -1079287506;
	}
	return 0;
}

bool func_47(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_48(int iParam0)
{
	if (func_113() != -1)
	{
		return 0;
	}
	if (!func_47(iParam0))
	{
		return 0;
	}
	return func_126(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

int func_49(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_179(((*Global_1347702)[iParam0 /*49*/])->f_12, 2097152))
		{
			if (func_126(((*Global_1835011)[59 /*74*/])->f_1, 1))
			{
				return 0;
			}
		}
		else if (func_179(((*Global_1347702)[iParam0 /*49*/])->f_12, 256))
		{
			if (!func_126(((*Global_1835011)[59 /*74*/])->f_1, 1))
			{
				return 0;
			}
		}
	}
	return func_180(iParam0);
}

int func_50(int iParam0, bool bParam1, bool bParam2)
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
		if (func_181())
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
		iVar0 = func_182(&(Global_1898164->f_1[0 /*5*/]));
		if (func_47(iVar0) && func_179(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_183(&(Global_1898164->f_1[0 /*5*/])))
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

void func_51(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

void func_52(int iParam0)
{
	func_184();
	if (!func_47(iParam0))
	{
		return;
	}
	Global_40.f_1093 = Global_1347702[iParam0 /*49*/];
}

bool func_53(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

int func_54(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_113() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == iParam0)
		{
			if (!bParam1 || ((*Global_1347702)[iVar0 /*49*/])->f_13 & 16384 == 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_55(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0 || ((*Global_1347702)[iParam0 /*49*/])->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_56(int iParam0)
{
	var uVar0;

	uVar0 = ((*Global_1347702)[iParam0 /*49*/])->f_3;
	return MISC::GET_HASH_KEY(&uVar0);
}

char* func_57(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4);
		case 2:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4, sParam5);
		case 3:
			return MISC::_CREATE_VAR_STRING(10, sParam1, sParam2);
		case 4:
			return MISC::_CREATE_VAR_STRING(42, sParam1, sParam2, sParam3);
	}
	return MISC::_CREATE_VAR_STRING(2, func_185(sParam1));
}

void func_58(int iParam0, char* sParam1, char* sParam2, float fParam3)
{
	int iVar0;

	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 67108864 != 0)
	{
		return;
	}
	iVar0 = func_55(iParam0);
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_56(iParam0)))
	{
		return;
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(iVar0, func_56(iParam0), MISC::GET_HASH_KEY(sParam1), sParam2, fParam3 >= 0.9f, 0, 0);
}

void func_59(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	char* sVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 67108864 != 0)
	{
		return;
	}
	iVar10 = func_186(iParam0, 0);
	iVar11 = iVar10;
	iVar12 = iVar10;
	if (iParam0 == 82 || iParam0 == 83)
	{
		iVar12 = MISC::GET_HASH_KEY("LAW_UI_DUTCH_GANG");
	}
	MemCopy(&cVar0, {((*Global_1347702)[iParam0 /*49*/])->f_3}, 8);
	StringConCat(&cVar0, "_DESC", 64);
	iVar13 = func_55(iParam0);
	UILOG::_UILOG_ADD_ENTRY_HASH(iVar13, func_56(iParam0), ((*Global_1347702)[iParam0 /*49*/])->f_24, iVar12, MISC::GET_HASH_KEY(&cVar0), ((*Global_1347702)[iParam0 /*49*/])->f_37);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(iVar13, func_56(iParam0), iVar11, MISC::GET_HASH_KEY("toast_log_blips"));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar8) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar9))
	{
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(iVar13, func_56(iParam0), MISC::GET_HASH_KEY(sVar8), MISC::GET_HASH_KEY(sVar9));
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar13, func_56(iParam0)))
	{
		func_51(iParam0, 4);
	}
}

void func_60(int iParam0, bool bParam1)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_53(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_55(iParam0), func_56(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_53(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_55(iParam0), func_56(iParam0), 1, "");
		}
		func_51(iParam0, 8);
	}
	else
	{
		if (func_53(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_55(iParam0), func_56(iParam0), 0, "");
		}
		func_187(iParam0, 8);
	}
}

bool func_61(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_73(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_106(iParam0);
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
		if (!func_188(iParam0, 1))
		{
			return false;
		}
	}
	return func_89(iParam0, 0, bParam2) >= iParam1;
}

void func_62(var uParam0)
{
	(*uParam0)[0 /*9*/] = 0;
	((*uParam0)[0 /*9*/])->f_1 = 0;
	((*uParam0)[0 /*9*/])->f_2 = 0;
	((*uParam0)[0 /*9*/])->f_3 = 0;
	((*uParam0)[0 /*9*/])->f_4 = 0;
	((*uParam0)[0 /*9*/])->f_5 = 0;
	((*uParam0)[0 /*9*/])->f_5.f_1 = 0;
	((*uParam0)[0 /*9*/])->f_5.f_2 = 0;
	((*uParam0)[0 /*9*/])->f_5.f_3 = 0;
	func_65(uParam0);
}

void func_63(var uParam0)
{
	(*uParam0)[0 /*9*/] = uParam0[2 /*9*/];
	((*uParam0)[0 /*9*/])->f_1 = ((*uParam0)[2 /*9*/])->f_1;
	((*uParam0)[0 /*9*/])->f_3 = ((*uParam0)[2 /*9*/])->f_3;
	((*uParam0)[0 /*9*/])->f_4 = ((*uParam0)[2 /*9*/])->f_4;
	((*uParam0)[0 /*9*/])->f_5 = ((*uParam0)[2 /*9*/])->f_5;
	((*uParam0)[0 /*9*/])->f_5.f_1 = ((*uParam0)[2 /*9*/])->f_5.f_1;
	((*uParam0)[0 /*9*/])->f_5.f_2 = ((*uParam0)[2 /*9*/])->f_5.f_2;
	((*uParam0)[0 /*9*/])->f_5.f_3 = ((*uParam0)[2 /*9*/])->f_5.f_3;
	((*uParam0)[0 /*9*/])->f_2 = 0;
}

void func_64(var uParam0)
{
	(*uParam0)[0 /*9*/] = uParam0[1 /*9*/];
	((*uParam0)[0 /*9*/])->f_1 = ((*uParam0)[1 /*9*/])->f_1;
	((*uParam0)[0 /*9*/])->f_3 = ((*uParam0)[1 /*9*/])->f_3;
	((*uParam0)[0 /*9*/])->f_4 = ((*uParam0)[1 /*9*/])->f_4;
	((*uParam0)[0 /*9*/])->f_5 = ((*uParam0)[1 /*9*/])->f_5;
	((*uParam0)[0 /*9*/])->f_5.f_1 = ((*uParam0)[1 /*9*/])->f_5.f_1;
	((*uParam0)[0 /*9*/])->f_5.f_2 = ((*uParam0)[1 /*9*/])->f_5.f_2;
	((*uParam0)[0 /*9*/])->f_5.f_3 = ((*uParam0)[1 /*9*/])->f_5.f_3;
	((*uParam0)[0 /*9*/])->f_2 = 0;
}

void func_65(var uParam0)
{
	(*uParam0)[2 /*9*/] = 0;
	((*uParam0)[2 /*9*/])->f_1 = 0;
	((*uParam0)[2 /*9*/])->f_2 = 0;
	((*uParam0)[2 /*9*/])->f_3 = 0;
	((*uParam0)[2 /*9*/])->f_4 = 0;
	((*uParam0)[2 /*9*/])->f_5 = 0;
	((*uParam0)[2 /*9*/])->f_5.f_1 = 0;
	((*uParam0)[2 /*9*/])->f_5.f_2 = 0;
	((*uParam0)[2 /*9*/])->f_5.f_3 = 0;
	(*uParam0)[1 /*9*/] = 0;
	((*uParam0)[1 /*9*/])->f_1 = 0;
	((*uParam0)[1 /*9*/])->f_2 = 0;
	((*uParam0)[1 /*9*/])->f_3 = 0;
	((*uParam0)[1 /*9*/])->f_4 = 0;
	((*uParam0)[1 /*9*/])->f_5 = 0;
	((*uParam0)[1 /*9*/])->f_5.f_1 = 0;
	((*uParam0)[1 /*9*/])->f_5.f_2 = 0;
	((*uParam0)[1 /*9*/])->f_5.f_3 = 0;
}

int func_66(int iParam0, bool bParam1, bool bParam2, int iParam3, float fParam4)
{
	int iVar0;

	switch (func_69(iParam0, -949239683))
	{
		case 1712126263:
			if (!bParam1)
			{
				iVar0 = 1589555562;
				if (bParam2)
				{
					iVar0 = -1424266966;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case -1229959999:
			if (!bParam1)
			{
				iVar0 = 1159762194;
				if (bParam2)
				{
					iVar0 = -1791047090;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case -1050374492:
			if (!bParam1)
			{
				iVar0 = 343713021;
				if (bParam2)
				{
					iVar0 = 760057945;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case 1513351077:
			if (!bParam1)
			{
				iVar0 = 889797228;
				if (bParam2)
				{
					iVar0 = -1043439814;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case -1565009253:
			if (!bParam1)
			{
				iVar0 = 1254219723;
				if (bParam2)
				{
					iVar0 = -2077441721;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case 733893097:
			if (!bParam1)
			{
				iVar0 = 436157482;
				if (bParam2)
				{
					iVar0 = 1972630951;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case -164980960:
			if (!bParam1)
			{
				iVar0 = -138141811;
				if (bParam2)
				{
					iVar0 = 2000759837;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case 1894156335:
			if (!bParam1)
			{
				iVar0 = 1801769345;
				if (bParam2)
				{
					iVar0 = 374699583;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case 871191033:
			if (!bParam1)
			{
				iVar0 = 1290994194;
				if (bParam2)
				{
					iVar0 = -59421711;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case -1273369295:
			if (!bParam1)
			{
				iVar0 = -27851152;
				if (bParam2)
				{
					iVar0 = -1340223099;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case 82200319:
			if (!bParam1)
			{
				iVar0 = -1216929452;
				if (bParam2)
				{
					iVar0 = -1140851507;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case -873135685:
			if (!bParam1)
			{
				iVar0 = -1418730365;
				if (bParam2)
				{
					iVar0 = -1570312122;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case 24248412:
			if (!bParam1)
			{
				iVar0 = 1014486005;
				if (bParam2)
				{
					iVar0 = 416212934;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
		case 10252101:
			if (!bParam1)
			{
				iVar0 = -1246302402;
				if (bParam2)
				{
					iVar0 = -487508500;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_67(int iParam0)
{
	return func_189(iParam0);
}

bool func_68(int iParam0)
{
	return (func_31(iParam0, 566155764) && !UIAPPS::_IS_APP_ACTIVE(joaat("map")));
}

int func_69(int iParam0, int iParam1)
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

int func_70(int iParam0)
{
	if (iParam0 == 82200319)
	{
		return 1;
	}
	return 0;
}

int func_71()
{
	return Global_40.f_4283;
}

void func_72(var uParam0)
{
	if (uParam0->f_131 > 0)
	{
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_BOOK_READ_AVAILABLE", 1, -1);
	}
}

int func_73(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

void func_74(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_42(iParam0))
	{
		return;
	}
	iVar0 = func_84(iParam0);
	if (bParam1)
	{
		func_190(iParam0, 4);
		func_191(iVar0, 1);
		func_192(iVar0, 1);
	}
	else
	{
		func_193(iParam0, 4);
		func_192(iVar0, 0);
	}
}

bool func_75(var uParam0, var uParam1)
{
	bool bVar0;

	if (func_24(*uParam1, uParam0->f_130))
	{
		bVar0 = !func_31(*uParam1, 1051234725);
	}
	if (func_76(*uParam1, uParam0->f_130))
	{
		bVar0 = func_31(*uParam1, 601161511);
	}
	return bVar0;
}

int func_76(int iParam0, int iParam1)
{
	switch (func_69(iParam0, -949239683))
	{
		case 1712126263:
			if (iParam1 == 2110129666)
			{
				return 1;
			}
			break;
		case 10252101:
			if (iParam1 == -358392831)
			{
				return 1;
			}
			break;
		case -1229959999:
			if (iParam1 == 391077233)
			{
				return 1;
			}
			break;
		case -1050374492:
			if (iParam1 == 1010970643)
			{
				return 1;
			}
			break;
		case 1513351077:
			if (iParam1 == 382283982)
			{
				return 1;
			}
			break;
		case -1565009253:
			if (iParam1 == -498826883)
			{
				return 1;
			}
			break;
		case 733893097:
			if (iParam1 == -1222090749)
			{
				return 1;
			}
			break;
		case -164980960:
			if (iParam1 == 1641476577)
			{
				return 1;
			}
			break;
		case 1894156335:
			if (iParam1 == 690458252)
			{
				return 1;
			}
			break;
		case 871191033:
			if (iParam1 == 1870337093)
			{
				return 1;
			}
			break;
		case -1273369295:
			if (iParam1 == -277062447)
			{
				return 1;
			}
			break;
		case 82200319:
			if (iParam1 == 1913655128)
			{
				return 1;
			}
			break;
		case -873135685:
			if (iParam1 == -180517239)
			{
				return 1;
			}
			break;
		case 24248412:
			if (iParam1 == -2082844535)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_77(int iParam0, bool bParam1)
{
	if (bParam1 && !func_42(iParam0))
	{
		return false;
	}
	return !func_194(iParam0, 4);
}

void func_78(var uParam0, bool bParam1)
{
	if (func_42(*uParam0))
	{
		func_74(*uParam0, bParam1, 1);
	}
}

void func_79(var uParam0, var uParam1)
{
	func_78(Global_36621[3], func_75(uParam0, uParam1));
}

int func_80(int iParam0, int iParam1)
{
	switch (func_69(iParam0, -949239683))
	{
		case 1712126263:
			if (iParam1 == 699685523)
			{
				return 1;
			}
			break;
		case 10252101:
			if (iParam1 == 687211918)
			{
				return 1;
			}
			break;
		case -1229959999:
			if (iParam1 == 1942589213)
			{
				return 1;
			}
			break;
		case -1050374492:
			if (iParam1 == 557096072)
			{
				return 1;
			}
			break;
		case 1513351077:
			if (iParam1 == 676223146)
			{
				return 1;
			}
			break;
		case -1565009253:
			if (iParam1 == 961781775)
			{
				return 1;
			}
			break;
		case 733893097:
			if (iParam1 == 88279163)
			{
				return 1;
			}
			break;
		case -164980960:
			if (iParam1 == 251586723)
			{
				return 1;
			}
			break;
		case 1894156335:
			if (iParam1 == 554041952)
			{
				return 1;
			}
			break;
		case 871191033:
			if (iParam1 == 1222452293)
			{
				return 1;
			}
			break;
		case -1273369295:
			if (iParam1 == 527714016)
			{
				return 1;
			}
			break;
		case 82200319:
			if (iParam1 == 1125283391)
			{
				return 1;
			}
			break;
		case -873135685:
			if (iParam1 == 1275147506)
			{
				return 1;
			}
			break;
		case 24248412:
			if (iParam1 == 224513019)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_81(var uParam0)
{
}

void func_82(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uLocal_21))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uLocal_21);
	}
	func_12(uParam0);
	uLocal_21 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Translate");
	uParam0->f_5.f_63 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uLocal_21, "Generic");
	iVar2 = 0;
	iLocal_19 = -1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_131)
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_5.f_2[iVar1 /*5*/])->f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(uParam1[0 /*9*/], (uParam0->f_5.f_2[iVar1 /*5*/])->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					func_195(&(uParam0->f_5), iVar2, 0, 1, 0);
					iVar2++;
					break;
				case 1724675796:
					func_195(&(uParam0->f_5), iVar2, 1, 1, 0);
					iVar2++;
					break;
				default:
					switch (uParam1[0 /*9*/])
					{
						case 2129073771:
							if (func_71() == 2)
							{
								if (iVar0 < 3)
								{
									func_196(&(uParam0->f_5), iVar1, &iVar2, 2, 1);
								}
							}
							else if (func_71() == 6 || func_71() == 3)
							{
								func_196(&(uParam0->f_5), iVar1, &iVar2, 2, 1);
							}
							else if (iVar0 < 2)
							{
								func_196(&(uParam0->f_5), iVar1, &iVar2, 2, 1);
							}
							TXD::_0xDB1BD07FB464584D(iLocal_20, 0);
							break;
						default:
							func_196(&(uParam0->f_5), iVar1, &iVar2, 2, 1);
							break;
					}
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_83(var uParam0)
{
	int iVar0;
	int iVar1;

	iLocal_19 = -1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_131)
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_5.f_2[iVar1 /*5*/])->f_1)
		{
			switch (&uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
				case 1724675796:
					break;
				default:
					if (!(uParam0->f_5.f_2[iVar1 /*5*/])->f_3)
					{
						iLocal_19++;
						(uParam0->f_5.f_2[iVar1 /*5*/])->f_4 = iLocal_19;
					}
					(uParam0->f_5.f_2[iVar1 /*5*/])->f_3 = 1;
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

int func_84(int iParam0)
{
	return iParam0;
}

void func_85(var uParam0, int iParam1)
{
	var uVar0;

	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Translate");
	uParam0->f_5.f_63 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar0, "Generic");
	if (func_31(iParam1, 1104960349))
	{
		func_197(uParam0, iParam1);
	}
	else if (func_31(iParam1, 1989861793))
	{
		func_198(uParam0, iParam1);
	}
	else if (func_31(iParam1, -772152977))
	{
		func_199(uParam0, iParam1);
	}
	else if (func_31(iParam1, -2081717885))
	{
		func_200(uParam0, iParam1);
	}
	else if (func_69(iParam1, 1224357681) == 1130538400)
	{
		func_201(uParam0, iParam1);
	}
	else if (func_31(iParam1, -1227898937))
	{
		uParam0->f_135 = 0;
		func_202(uParam0, iParam1);
	}
	else
	{
		func_203(uParam0, iParam1);
	}
}

int func_86(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_113() == -1)
	{
		if (func_204(iParam0) && func_205(iParam0))
		{
			func_206(iParam0, iParam1, 1, &bParam2, iParam3);
			return 0;
		}
	}
	else if (iParam0 == 1259508039)
	{
		bParam2 = true;
	}
	else if (iParam0 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	return 1;
}

int func_87(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_207(iParam0, iParam1);
	Var0 = { func_208(iParam0, 0, 1) };
	iVar5 = func_209(iParam0, &Var0, 0, 0);
	iVar6 = func_210(iParam0, 0);
	if ((iVar5 > 1 && !func_211()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_31(iParam0, -2051813666))
		{
			func_96(583, 1);
		}
		else
		{
			func_96(582, 0);
		}
	}
	if (func_212(iParam0, &Var0, *iParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_88(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_69(iParam0, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1935496->f_59.f_6 = 1;
			Global_1935496->f_59.f_7 = 0;
			Global_1935496->f_59.f_1 = iParam0;
			Global_1935496->f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}
}

int func_89(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_73(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_106(iParam0);
	if (iVar0 == joaat("ammo") || (bParam1 && iVar0 == joaat("weapon")))
	{
		iVar1 = func_213(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("weapon"))
	{
		return func_214(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_215(bParam2), iParam0, 0);
	return iVar2;
}

bool func_90(int iParam0)
{
	if (func_113() != -1)
	{
		return false;
	}
	return func_91(iParam0) != 0;
}

int func_91(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_216())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_217(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_92(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_93(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_216())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_92(iVar0))
		{
			if (func_61(func_217(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_94(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_218(48);
	func_219(0, -1);
}

int func_95(int iParam0)
{
	if (func_113() != -1)
	{
		return 0;
	}
	return func_126(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

void func_96(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_220(iParam0, &iVar0, &iVar1);
	if (!func_221(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_222(iVar0, iVar1);
}

int func_97(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_98(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

int func_99()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

int func_100(int iParam0)
{
	if (func_113() != -1)
	{
		return 0;
	}
	return func_126(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_101(int iParam0)
{
	if (func_113() != -1)
	{
		return 0;
	}
	if (!func_47(iParam0))
	{
		return 0;
	}
	return func_223(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_102()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_61(func_224(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_103(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_99() && (func_101(38) || func_95(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				iVar13 = 38816757; /* GXTEntry: "Smoking and Other Hobbies" */
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = 578982838; /* GXTEntry: "A New Hobby" */
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		case 39:
			if (func_99() && (func_101(39) || func_95(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = 1162303770; /* GXTEntry: "Deborah MacGuiness" */
				iVar13 = -1223580455; /* GXTEntry: "A Test of Faith" */
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = 349797279; /* GXTEntry: "Digging up the Past" */
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = -440187297;
			break;
		case 43:
			if (iParam3 == -1791518714)
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == -2087881550)
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == 1908068621)
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == 1611247019)
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == 1319635688)
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_225(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963; /* GXTEntry: "Duchesses and Other Animals" */
			break;
		case 41:
			if (func_99() && (func_101(41) || func_95(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = -273196610; /* GXTEntry: "Jeremy Gill" */
			iVar13 = -1666208710; /* GXTEntry: "A Fisher of Fish" */
			break;
		case 49:
			if (func_99() && (func_101(49) || func_95(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = -781551276; /* GXTEntry: "Francis Sinclair" */
				iVar13 = -170865073; /* GXTEntry: "Geology for Beginners" */
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = 1974744712; /* GXTEntry: "Rock Carvings" */
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = 2103522376;
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_225(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931; /* GXTEntry: "Ms. L Hobbs" */
			iVar13 = -1424865411; /* GXTEntry: "A Better World, A New Friend" */
			break;
	}
	sVar2 = func_226(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_227(iParam0, iVar13, iVar14))
	{
	}
	if (func_228(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_229(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_230(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_231(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_232(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_104(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_105(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_99() && (func_101(38) || func_95(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = 38816757; /* GXTEntry: "Smoking and Other Hobbies" */
			break;
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = -440187297;
			if (func_99() && (func_101(39) || func_95(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = 1162303770; /* GXTEntry: "Deborah MacGuiness" */
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = -1223580455; /* GXTEntry: "A Test of Faith" */
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = 911890963; /* GXTEntry: "Duchesses and Other Animals" */
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = -273196610; /* GXTEntry: "Jeremy Gill" */
			iVar6 = -1666208710; /* GXTEntry: "A Fisher of Fish" */
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = 2103522376;
			if (func_99() && (func_101(49) || func_95(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = -781551276; /* GXTEntry: "Francis Sinclair" */
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = -170865073; /* GXTEntry: "Geology for Beginners" */
			break;
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = 678508515;
			iVar4 = 1986498931; /* GXTEntry: "Ms. L Hobbs" */
			iVar6 = -1424865411; /* GXTEntry: "A Better World, A New Friend" */
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar5 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar5 = MISC::GET_HASH_KEY("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (func_99() && (func_101(38) || func_95(38)))
		{
			iVar6 = 38816757; /* GXTEntry: "Smoking and Other Hobbies" */
		}
		else
		{
			iVar6 = 578982838; /* GXTEntry: "A New Hobby" */
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_233(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_233(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_235(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, func_234(func_98(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_233(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_233(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_99() && (func_101(39) || func_95(39)))
		{
			iVar6 = -1223580455; /* GXTEntry: "A Test of Faith" */
		}
		else
		{
			iVar6 = 349797279; /* GXTEntry: "Digging up the Past" */
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_233(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_233(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_99() && (func_101(49) || func_95(49)))
		{
			iVar6 = -170865073; /* GXTEntry: "Geology for Beginners" */
		}
		else
		{
			iVar6 = 1974744712; /* GXTEntry: "Rock Carvings" */
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_233(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_233(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_233(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_233(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_106(int iParam0)
{
	vector3 vVar0;

	if (!func_73(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_107(int iParam0, int iParam1)
{
	if (!func_73(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

int func_108(int iParam0)
{
	if (!func_236(iParam0))
	{
		return 0;
	}
	return func_237(iParam0);
}

void func_109(int iParam0)
{
	if (!func_236(iParam0))
	{
		return;
	}
	func_238(iParam0);
	func_239(iParam0);
}

int func_110(int iParam0)
{
	struct<2> Var0;

	if (!func_73(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_111(int iParam0, bool bParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case -1639263599: /* GXTEntry: "Throwing Knife" */
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 1222378998: /* GXTEntry: "Improved Throwing Knife" */
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 2074469742: /* GXTEntry: "Poison Throwing Knife" */
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 480079517: /* GXTEntry: "Dynamite" */
			iVar0 = joaat("weapon_thrown_dynamite");
			break;
		case 840671577: /* GXTEntry: "Dynamite - Volatile" */
			iVar0 = joaat("weapon_thrown_dynamite");
			break;
		case joaat("ammo_molotov"):
			iVar0 = joaat("weapon_thrown_molotov");
			break;
		case -2006166057: /* GXTEntry: "Fire Bottle - Volatile" */
			iVar0 = joaat("weapon_thrown_molotov");
			break;
		case 1235846615: /* GXTEntry: "Tomahawk" */
			iVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case -228768324: /* GXTEntry: "Ancient Tomahawk" */
			iVar0 = joaat("weapon_thrown_tomahawk_ancient");
			break;
		case -1411922943: /* GXTEntry: "Tomahawk - Homing" */
			iVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case -834103244: /* GXTEntry: "Tomahawk - Improved" */
			iVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case 424030678: /* GXTEntry: "Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet");
			break;
		case 446901936: /* GXTEntry: "Hunter Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_hunter");
			break;
		case -1092841802: /* GXTEntry: "Rusted Hunter Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_hunter_rusted");
			break;
		case -1452241321: /* GXTEntry: "Stone Hatchet" */
			iVar0 = joaat("weapon_melee_ancient_hatchet");
			break;
		case -1188697038: /* GXTEntry: "Cleaver" */
			iVar0 = joaat("weapon_melee_cleaver");
			break;
		case 1671758975: /* GXTEntry: "Double Bit Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_double_bit");
			break;
		case -893514737: /* GXTEntry: "Rusted Double Bit Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_double_bit_rusted");
			break;
		case -2063089161: /* GXTEntry: "Hewing Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_hewing");
			break;
		case -452897925: /* GXTEntry: "Viking Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_viking");
			break;
		default:
			break;
	}
	if (func_73(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_240(iVar0) || func_241(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_112(int iParam0, bool bParam1)
{
	if (!func_73(iParam0, 0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

int func_113()
{
	return Global_1572887->f_12;
}

void func_114(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_242(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, true);
}

int func_115(bool bParam0)
{
	if (func_113() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_215(bParam0));
}

int func_116(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
	{
		Var0 = { func_208(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_243((375 + iVar28), 1);
			if (func_244(iParam0, &Var0, iVar5, 0))
			{
				if (func_245(iParam0, &Var6, iVar5))
				{
					Var29 = { func_246(iParam0, Var0, iVar5, 0) };
					func_247(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_115(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
					{
						return 0;
					}
					func_117(WEAPON::_0x5C2EA6C44F515F34(iParam0), iParam1, iParam6);
					func_248(iParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}

int func_117(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_119(iParam0))
	{
		return 0;
	}
	if (!func_115(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

int func_118(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;

	iVar0 = func_112(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_113() == -1)
		{
			func_114(iVar0);
			if (iParam1 == 1248274121)
			{
				func_249(iVar0);
			}
		}
		if (!func_212(iParam0, &uVar1, 1, 0, 0))
		{
			func_206(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_250(iVar0);
			if (WEAPON::_0x6AD66548840472E5(iVar0))
			{
				func_116(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("weapon_fishingrod") || iVar0 == joaat("weapon_kit_binoculars"))
			{
				func_116(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("weapon_lasso"))
			{
				func_116(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x959383DCD42040DA(iVar0))
			{
				if (iVar0 == joaat("weapon_melee_knife_john") && !func_251())
				{
					return 0;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!func_252(iVar0))
				{
					func_116(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_116(iVar0, WEAPON::_0xD3750CCC00635FC2(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
			{
				iVar7 = func_253(Global_35, 2, 0, 1);
				if ((((func_242(iVar7) && !Global_43890) && iVar7 != iVar0) && !func_61(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 1, 0)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				if (func_242(iVar7) && func_61(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 1, 0))
				{
					if (!func_116(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return 0;
					}
				}
				else if (!func_116(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return 0;
				}
			}
			else if (!func_116(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return 0;
			}
		}
	}
	else
	{
		return 0;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		func_96(480, 1);
	}
	return 1;
}

bool func_119(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_120(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_119(iParam0))
	{
		return 0;
	}
	iVar4 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_242(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (iVar4 == joaat("weapon_bow"))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_0xD3750CCC00635FC2(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (func_61(611073244 /* GXTEntry: "Crow Beak Trinket" */, 1, 0) && iParam2 == -897553835)
	{
		iVar6 = BUILTIN::CEIL((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_157(func_254(iParam0), func_156(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_113() == -1)
		{
			if (func_126(((*Global_1835011)[14 /*74*/])->f_1, 1))
			{
				func_96(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_115(0))
	{
		if (func_117(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_162(iParam0, *iParam1, iParam2);
	}
	return 0;
}

void func_121(int iParam0)
{
	var uVar0;

	if ((iParam0 == -615217896 && !func_255()) || iParam0 != -615217896)
	{
		if (func_256(Global_35, iParam0, &uVar0))
		{
			func_141(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415: /* GXTEntry: "Alligator Tooth Talisman" */
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_147();
			break;
		case -832719552: /* GXTEntry: "Bear Claw Talisman" */
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_147();
			break;
		case -1941112926: /* GXTEntry: "Bison Horn Talisman" */
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_147();
			break;
		case -615217896: /* GXTEntry: "Eagle Talon Talisman" */
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_145();
			break;
		case -121629511: /* GXTEntry: "Raven Claw Talisman" */
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_143();
			break;
	}
}

void func_122(int iParam0)
{
	switch (iParam0)
	{
		case -224110471: /* GXTEntry: "Beaver Tooth Trinket" */
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_143();
			break;
		case 1289585739: /* GXTEntry: "Tatanka Bison Horn Trinket" */
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_144();
			break;
		case 1441506783: /* GXTEntry: "Cougar Fang Trinket" */
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678: /* GXTEntry: "Coyote Fang Trinket" */
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695: /* GXTEntry: "Fox Claw Trinket" */
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_145();
			break;
		case 655868243: /* GXTEntry: "Iguana Scale Trinket" */
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_146();
			break;
		case 1299744282: /* GXTEntry: "Lion\'s Paw Trinket" */
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 1631240196: /* GXTEntry: "Moose Antler Trinket" */
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		case 1768869276: /* GXTEntry: "Owl Feather Trinket" */
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			func_147();
			break;
		case -569248339: /* GXTEntry: "Hawk Talon Trinket" */
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_257();
			break;
		case -1196089647: /* GXTEntry: "Shark Tooth Trinket" */
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431: /* GXTEntry: "Turtle Shell Trinket" */
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_258();
			break;
		case -1056342069: /* GXTEntry: "Cat Eye Trinket" */
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_123(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_124(var uParam0, int iParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

struct<2> func_125(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

int func_126(int iParam0, bool bParam1)
{
	switch (func_259(iParam0))
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

void func_127(int iParam0)
{
	bool bVar0;

	bVar0 = func_31(iParam0, -2017733358);
	if (func_260() < 3)
	{
		if (bVar0)
		{
			if (func_262(func_261(iParam0), iParam0))
			{
				func_157(79, func_156(func_261(iParam0)), 1);
			}
			else
			{
				func_157(78, func_156(func_261(iParam0)), 1);
			}
		}
		else
		{
			func_157(80, func_156(func_263(iParam0)), 1);
		}
	}
}

int func_128()
{
	if (((((func_264(839908568 /* GXTEntry: "Bounty Poster of Arthur" */, 400) || func_264(-1134030454 /* GXTEntry: "Bounty Notice" */, 400)) || func_264(623353496 /* GXTEntry: "Bounty Hunter\'s Orders" */, 400)) || func_264(-344413337 /* GXTEntry: "Poster of a Violent Criminal" */, 400)) || func_264(-1664948962 /* GXTEntry: "Bounty Hunter\'s Letter" */, 400)) || func_264(1795228059 /* GXTEntry: "Bounty Page" */, 400))
	{
		return 1;
	}
	return 0;
}

int func_129(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_265(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_266(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_267(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_130(int iParam0)
{
	switch (iParam0)
	{
		case -625427311: /* GXTEntry: "Letter from Ms. Hobbs" */
			func_103(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_105(51, 0, 0, 0, 0, -1, 0);
			func_268(8192);
			break;
		case 581047644: /* GXTEntry: "Invitation from Ms. Hobbs" */
			func_103(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_105(51, 0, 0, 0, 0, -1, 0);
			func_268(524288);
			break;
		case -644199619: /* GXTEntry: "Invitation from Deborah MacGuiness" */
			func_103(39, 0, 0, 0, 0, 0, 1, 0);
			func_105(39, 0, 0, 0, 0, -1, 0);
			func_269(16);
			break;
		case 684296857: /* GXTEntry: "Invitation from Jeremy Gill" */
			func_103(41, 0, 0, 0, 0, 0, 1, 0);
			func_105(41, 0, 0, 0, 0, -1, 0);
			func_270(8);
			break;
		case 466137807: /* GXTEntry: "Invitation from Francis Sinclair" */
			func_103(49, 0, 0, 0, 0, 0, 1, 0);
			func_105(49, 0, 0, 0, 0, -1, 0);
			func_271(16);
			break;
		case -1087522507: /* GXTEntry: "Exotic Collector\'s List" */
			func_103(43, 0, 0, -1791518714, func_272(1), 0, -1, 0);
			func_273(1);
			break;
		case -405829000: /* GXTEntry: "Exotic Collector\'s List" */
			func_103(43, 0, 0, -2087881550, func_272(2), 0, -1, 0);
			func_273(2);
			break;
		case 378660860: /* GXTEntry: "Exotic Collector\'s List" */
			func_103(43, 0, 0, 1908068621, func_272(4), 0, -1, 0);
			func_273(4);
			break;
		case 1566111097: /* GXTEntry: "Exotic Collector\'s List" */
			func_103(43, 0, 0, 1611247019, func_272(8), 0, -1, 0);
			func_273(8);
			break;
		case 1276007140: /* GXTEntry: "Exotic Collector\'s List" */
			func_103(43, 0, 0, 1319635688, func_272(16), 0, -1, 0);
			func_273(16);
			break;
	}
}

void func_131(int iParam0)
{
	if (func_274() == 1)
	{
		if (func_95(39))
		{
			func_96(342, 0);
		}
		else
		{
			func_96(343, 0);
			func_269(1);
		}
	}
	if (func_274() >= 30)
	{
		func_96(344, 0);
	}
	func_103(39, 0, 0, 0, 0, 0, -1, 0);
	func_105(39, 0, 0, func_274(), 30, 1, 0);
}

void func_132(int iParam0)
{
	if (func_275() == 1)
	{
		if (func_95(49))
		{
			func_96(409, 0);
		}
		else
		{
			func_96(410, 0);
			func_271(1);
		}
	}
	if (func_275() >= 10)
	{
		func_96(411, 0);
	}
	func_103(49, 0, 0, 0, 0, 0, -1, 0);
	func_105(49, 0, 0, func_275(), 10, 1, 0);
}

void func_133(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 1369162587: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(-949689219, 1);
			func_96(437, 0);
			func_96(440, 0);
			func_276(-949689219, 444160793 /* GXTEntry: "Perfect Squirrel Carcass" */, &sVar0, 1, 0, 0);
			func_103(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_105(51, 0, 0, sVar0, func_225(-949689219, 20), 1, 0);
			func_268(1);
			func_277(-748969569, 0, 0);
			break;
		case 1610047510: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(-1248968496, 1);
			func_276(-1248968496, -1969404854 /* GXTEntry: "Perfect Cardinal Carcass" */, &sVar0, 1, 0, 0);
			func_103(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_105(51, 0, 0, sVar0, func_225(-1248968496, 20), 1, 0);
			func_268(8);
			break;
		case 1317879106: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(1706369307, 1);
			func_276(1706369307, -832850511 /* GXTEntry: "Perfect Chipmunk Carcass" */, &sVar0, 1, 0, 0);
			func_103(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_105(51, 0, 0, sVar0, func_225(1706369307, 20), 1, 0);
			func_268(64);
			break;
		case 1062444751: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(1520110311, 1);
			func_276(1520110311, -100913452 /* GXTEntry: "Perfect Songbird Carcass" */, &sVar0, 1, 0, 0);
			func_103(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_105(51, 0, 0, sVar0, func_225(1520110311, 20), 1, 0);
			func_268(512);
			break;
		case 754186760: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(-1992824800, 1);
			func_96(438, 0);
			func_276(-1992824800, 905173572 /* GXTEntry: "Perfect Cedar Waxwing Carcass" */, &sVar0, 1, 0, 0);
			func_103(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_105(51, 0, 0, sVar0, func_225(-1992824800, 20), 1, 0);
			func_268(32768);
			break;
		default:
			func_96(439, 0);
			break;
	}
}

void func_134()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-1278339625) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1278339625, -1316535105, 1);
	}
}

void func_135(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_113() == -1)
	{
		if (!func_95(43))
		{
			if (iParam0 == 281887510)
			{
				func_96(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_96(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_96(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_96(400, 0);
			}
		}
		else if (func_31(iParam0, 412399755))
		{
			func_278(-1791518714);
			if (func_279() == 0)
			{
				func_219(0, 10);
				iVar1 = func_280(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_281(iParam0) < func_282(iParam0))
					{
						func_103(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_105(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_95(44))
		{
			if (iParam0 == -222563712)
			{
				func_96(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_96(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_96(401, 0);
			}
		}
		else if (func_31(iParam0, 709057512))
		{
			func_278(-2087881550);
			if (func_279() == 1)
			{
				func_219(0, 10);
				iVar1 = func_280(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_281(iParam0) < func_282(iParam0))
					{
						func_103(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_105(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_95(45))
		{
			if (iParam0 == 2116770557)
			{
				func_96(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_96(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_96(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_96(398, 0);
			}
		}
		else if (func_31(iParam0, -1478961327))
		{
			func_278(1908068621);
			if (func_279() == 2)
			{
				func_219(0, 10);
				iVar1 = func_280(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_283(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
					{
						func_284(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
						func_218(48);
					}
					if (func_281(iParam0) < func_282(iParam0))
					{
						func_103(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_105(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_281(iParam0) < func_282(iParam0))
					{
						func_103(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_105(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_95(46))
		{
			if (iParam0 == 2085530337)
			{
				func_96(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_96(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_96(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_96(406, 0);
			}
		}
		else if (func_31(iParam0, -1238404098))
		{
			func_278(1611247019);
			if (func_279() == 3)
			{
				func_219(0, 10);
				iVar1 = func_280(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_281(iParam0) < func_282(iParam0))
					{
						func_103(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_105(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_95(47))
		{
			if (iParam0 == -1521783510)
			{
				func_96(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_96(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_96(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_96(403, 0);
			}
		}
		else if (func_31(iParam0, 1160548794))
		{
			func_278(1319635688);
			if (func_279() == 4)
			{
				func_219(0, 10);
				iVar1 = func_280(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_281(iParam0) < func_282(iParam0))
					{
						func_103(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_105(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_136(int iParam0)
{
	int iVar0;

	if (iParam0 == 2116770557)
	{
		if (!func_283(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
		{
			func_284(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
			func_218(48);
		}
	}
}

void func_137(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, 678508515, -1160144609);
		if (func_61(func_285(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_286(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_287(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_138(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_113() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_129(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255: /* GXTEntry: "$1.00" */
			func_129(-949580860, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493: /* GXTEntry: "$5.00" */
			func_129(-1171997683, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627: /* GXTEntry: "$10.00" */
			func_129(-2140931002, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377: /* GXTEntry: "Bill Fold" */
			func_129(-1116228267, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086: /* GXTEntry: "Small Bill Fold" */
			func_129(2112896861, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686: /* GXTEntry: "Bill Stack" */
			func_129(-1915150712, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991: /* GXTEntry: "Coin" */
			func_129(994220262, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101: /* GXTEntry: "Coin Purse" */
			func_129(-1388440107, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918: /* GXTEntry: "Coin Sack" */
			func_129(-1531790128, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765: /* GXTEntry: "Coin Stack" */
			func_129(1351791770, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903: /* GXTEntry: "Money Clip" */
			func_129(-161493966, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684: /* GXTEntry: "Money Stack" */
			func_129(668131102, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340: /* GXTEntry: "Money Pile" */
			if (!func_288())
			{
				func_129(1330954593, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740: /* GXTEntry: "Change Cup" */
			func_129(817681514, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264: /* GXTEntry: "Coin Cup" */
			func_129(1404311868, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970: /* GXTEntry: "$50.00" */
			func_129(-175152067, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1027115192: /* GXTEntry: "$100.00" */
			func_129(-526915387, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1064332555: /* GXTEntry: "$200.00" */
			func_129(101362741, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1954478446: /* GXTEntry: "$45.00" */
			func_129(1458818027, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -518592739: /* GXTEntry: "$50.00" */
			func_129(-1957208512, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -2010073778: /* GXTEntry: "$70.00" */
			func_129(2066857461, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -700133011: /* GXTEntry: "$100.00" */
			func_129(803940201, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1415414735: /* GXTEntry: "$120.00" */
			func_129(-1717765429, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case 2045548742: /* GXTEntry: "$150.00" */
			func_129(1379920914, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case 830381058: /* GXTEntry: "$350.00" */
			func_129(447209691, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

void func_139(int iParam0)
{
	if (func_95(41))
	{
		func_96(363, 0);
	}
	else
	{
		func_96(362, 0);
	}
	switch (iParam0)
	{
		case 323124696: /* GXTEntry: "Legendary Bullhead Catfish" */
			func_289(-1865241121);
			func_290(-642026005);
			func_291(-642026005);
			func_219(0, 10);
			break;
		case -2108314374: /* GXTEntry: "Legendary Chain Pickerel" */
			func_289(2117142684);
			func_290(-940584364);
			func_291(-940584364);
			func_219(0, 10);
			break;
		case -1193798153: /* GXTEntry: "Legendary Lake Sturgeon" */
			func_289(-1409326024);
			func_290(1972645282);
			func_291(1972645282);
			func_219(0, 10);
			break;
		case -787702678: /* GXTEntry: "Legendary Largemouth Bass" */
			func_289(-641744968);
			func_290(1667205433);
			func_291(1667205433);
			func_219(0, 10);
			break;
		case -804542901: /* GXTEntry: "Legendary Longnose Gar" */
			func_289(-946988203);
			func_290(1362715885);
			func_291(1362715885);
			func_219(0, 10);
			break;
		case -1696275132: /* GXTEntry: "Legendary Muskie" */
			func_289(-646136018);
			func_290(1053540370);
			func_291(1053540370);
			func_219(0, 10);
			break;
		case -161595323: /* GXTEntry: "Legendary Perch" */
			func_289(-955835837);
			func_290(-1100103852);
			func_291(-1100103852);
			func_219(0, 10);
			break;
		case -1114363619: /* GXTEntry: "Legendary Redfin Pickerel" */
			func_289(-179276075);
			func_290(-1409869209);
			func_291(-1409869209);
			func_219(0, 10);
			break;
		case -368407134: /* GXTEntry: "Legendary Rock Bass" */
			func_289(-492711560);
			func_290(-1760235357);
			func_291(-1760235357);
			func_219(0, 10);
			break;
		case 1997759228: /* GXTEntry: "Legendary Smallmouth Bass" */
			func_289(1764383959);
			func_290(-138366827);
			func_291(-138366827);
			func_219(0, 10);
			break;
		case 1265573293: /* GXTEntry: "Legendary Sockeye Salmon" */
			func_289(317501533);
			func_290(-1261163843);
			func_291(-1261163843);
			func_219(0, 10);
			break;
		case -1030441283: /* GXTEntry: "Legendary Steelhead Trout" */
			func_289(817753087);
			func_290(-963523016);
			func_291(-963523016);
			func_219(0, 10);
			break;
		case -1490884871: /* GXTEntry: "Legendary Bluegill" */
			func_289(576606016);
			func_290(560825326);
			func_291(560825326);
			func_219(0, 10);
			break;
		case -395458616: /* GXTEntry: "Legendary Northern Pike" */
			func_289(814934957);
			func_290(858269539);
			func_291(858269539);
			break;
	}
}

void func_140(int iParam0, int iParam1)
{
	var uVar0;

	func_292(iParam0, iParam1, &uVar0);
}

int func_141(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_208(iParam1, 1, 0) };
		iParam3 = func_293(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_295(iParam1, iParam2, func_294(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_296(1, (func_113() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_294(iParam3, 1) /*11*/])
			{
				func_297(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_298(32768) && iParam1 != &Global_1946804->f_57[func_294(iParam3, 1) /*11*/])
			{
				func_299();
				func_297(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_297(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_300(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_297(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_301(0);
			func_302(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_297(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

int func_142(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar17;
	int iVar18;
	int iVar19;

	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_253(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_253(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_303("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_304(&Var3, iVar2, iVar0, iVar1))
			{
				if (WEAPON::_0xD955FEE4B87AFA07(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == iVar18 || Var3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*iParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_9(iVar0);
						if (*iParam0 != 0)
						{
							return 1;
						}
						return 0;
					}
				}
			}
		}
	}

void func_143()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_144()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_145()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_146()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_147()
{
	func_305();
	func_306();
	func_307();
}

void func_148(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	vector3 vVar4;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -293111728; /* GXTEntry: "Jack Hall Gang Treasure" */
			break;
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 1406403390; /* GXTEntry: "High Stakes Treasure" */
			break;
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 917780075; /* GXTEntry: "The Poisonous Trail Treasure" */
			break;
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -857004026; /* GXTEntry: "Le Tresor des Morts Treasure" */
			break;
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -1108821735; /* GXTEntry: "The Elemental Trail Treasure" */
			break;
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -208135085; /* GXTEntry: "Landmarks Of Riches Treasure" */
			break;
	}
	switch (iParam1)
	{
		case 854119837:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		case -1292544588:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		case -1003325394:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		case -696705861:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		case -335460405:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		case 903797617:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		case 669728650:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		case 1595354593:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		case 1214120047:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		case 655769340:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		case 885316185:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		case -2016706455:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		case -1491419385:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		case 1809565830:
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		case 2056119786:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		case -628873767:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		case -405421956:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		case -1108972386:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		case -878376933:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		case 1053716392:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		case 806507056:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		case 1571925350:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		case 1330352282:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		case 975496781:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iVar0);
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar0, vVar4, MISC::GET_HASH_KEY("COL_TH_TITLE"), MISC::GET_HASH_KEY(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, MISC::GET_HASH_KEY(sVar1), sVar1, false, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iVar0, 1);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("MISSION_RETH"), MISC::GET_HASH_KEY("SP_MISSIONS_19"));
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar0, MISC::_CREATE_VAR_STRING(2, sVar3));
}

void func_149(int iParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = -293111728; /* GXTEntry: "Jack Hall Gang Treasure" */
			break;
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = 1406403390; /* GXTEntry: "High Stakes Treasure" */
			break;
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = 917780075; /* GXTEntry: "The Poisonous Trail Treasure" */
			break;
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = -857004026; /* GXTEntry: "Le Tresor des Morts Treasure" */
			break;
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = -1108821735; /* GXTEntry: "The Elemental Trail Treasure" */
			break;
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = -208135085; /* GXTEntry: "Landmarks Of Riches Treasure" */
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
	func_233(MISC::_CREATE_VAR_STRING(2, sVar1), MISC::_CREATE_VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), 1433015236, MISC::_CREATE_VAR_STRING(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_150(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_151(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_152(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_153(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_154(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_155(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_156(int iParam0)
{
	if (!func_73(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_157(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_220(iParam0, &iVar0, &iVar1);
	if (!func_221(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_308(iParam0, 1024))
	{
		return;
	}
	func_222(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_158(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_220(iParam0, &iVar0, &iVar1);
	if (!func_221(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_308(iParam0, 1024))
	{
		return;
	}
	func_222(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 1;
	}
	else
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 5;
	}
}

int func_159()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_216())
	{
		return func_160();
	}
	iVar4 = (func_216() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_216())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_309(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_217(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_160()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_216());
	return func_217(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_161(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393: /* GXTEntry: "Opened Cigarettes" */
			*iParam0 = -885810591; /* GXTEntry: "Premium Cigarettes" */
			break;
		case 998010398: /* GXTEntry: "Opened Chewing Tobacco" */
			*iParam0 = -324053813; /* GXTEntry: "Chewing Tobacco" */
			break;
		case 1358243310: /* GXTEntry: "Opened Cigarettes" */
			*iParam0 = 1463786584; /* GXTEntry: "Cigarettes" */
			break;
		case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
			*iParam0 = 206762213; /* GXTEntry: "Cocaine Gum" */
			break;
	}
}

int func_162(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_73(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_208(iParam0, 0, 1) };
	Var5 = { func_246(iParam0, Var0, Var0.f_4, 0) };
	return func_310(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_163(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_113() != -1)
	{
		return;
	}
	switch (func_110(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_311(81053684, 0) <= 0)
			{
				func_297(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_297(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_312(iParam0);
			if (func_313(iVar0))
			{
				func_314(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_297(30, iParam0, 0, 0, 0);
			}
			if (func_315() == -2125499975 || func_315() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935: /* GXTEntry: "The Summer Gunslinger" */
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case 1661121390: /* GXTEntry: "The Gunslinger" */
						func_297(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_315() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						func_297(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_316(-525676072, 0))
			{
				if (func_317(-525676072, &iVar1))
				{
					func_297(33, iVar1, 0, 0, 0);
				}
			}
			func_297(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_318(99217379))
		{
			func_141(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_109(24);
		if (func_142(&iVar2, 0))
		{
			func_116(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_164(int iParam0)
{
	if (func_31(iParam0, 943695443))
	{
		func_319(0, iParam0);
	}
	else if (func_31(iParam0, -2096528786))
	{
		func_319(1, iParam0);
	}
	else if (func_31(iParam0, -1094167013))
	{
		func_319(2, iParam0);
	}
	else if (func_31(iParam0, 1936654645))
	{
		func_319(3, iParam0);
	}
	else if (func_31(iParam0, 1306489306))
	{
		func_319(4, iParam0);
	}
	else if (func_31(iParam0, 435762317))
	{
		func_319(5, iParam0);
	}
	else if (func_31(iParam0, 1259363210))
	{
		func_319(6, iParam0);
	}
	else if (func_31(iParam0, 881398259))
	{
		func_319(7, iParam0);
	}
	else if (func_31(iParam0, -541549214))
	{
		func_319(8, iParam0);
	}
	else if (func_31(iParam0, 130796156))
	{
		func_319(-1, iParam0);
	}
}

int func_165(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	func_320(&Var4, 1356624740);
	return func_321(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_166(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_73(iParam0, 0))
	{
		return Var0;
	}
	if (func_31(iParam0, -305066475))
	{
		if (func_113() == -1)
		{
			if (func_31(iParam0, -537818634))
			{
				return func_322(189951448);
			}
			else
			{
				return func_322(1176172851);
			}
		}
	}
	else if (func_31(iParam0, -537818634))
	{
		return func_322(-963660207);
	}
	if (func_31(iParam0, 2084895747))
	{
		return func_322(1694039471);
	}
	return Var2;
}

void func_167(int iParam0)
{
	switch (iParam0)
	{
		case 236757114: /* GXTEntry: "Flight Feather" */
			if (func_113() == -1)
			{
				if (func_126(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_96(109, 1);
				}
			}
			break;
	}
}

void func_168(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_324(func_323(0));
	func_326(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_325(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_169(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	char* sVar13;
	int iVar14;
	char* sVar15;

	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_73(iParam0, 0))
	{
		return;
	}
	if (iParam0 == 1807503187)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_327())
	{
		func_328(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_329(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_329(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_107(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_106(iParam0);
	iVar10 = 0;
	iVar11 = joaat("inventory");
	if ((iVar6 == joaat("ammo") && iParam0 != 424030678) && iParam0 != -1188697038)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	if (iVar6 == -1013984273 || iVar6 == 658570475)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_330(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar12 = joaat("COLOR_PURE_WHITE");
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = 619977481;
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = -856358433;
		}
		else
		{
			iVar12 = -1905433004;
		}
	}
	sVar15 = func_331(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, func_156(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_31(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, func_156(iParam0));
	}
	func_326(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_170(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;

	if (func_303("ALL SATCHEL", &(uParam0->f_1.f_1), &(uParam0->f_1), 1084182731, 0))
	{
		uParam0->f_145 = 1;
		iVar0 = 0;
		iVar1 = 0;
		if (uParam0->f_1 > 0)
		{
			Var2.f_9 = -1591664384;
			iVar0 = (uParam0->f_1 - 1);
			while (iVar0 >= 0)
			{
				if (!func_304(&Var2, iVar0, uParam0->f_1.f_1, uParam0->f_1))
				{
				}
				else
				{
					if (iParam1 == Var2.f_4)
					{
						uParam0->f_1.f_2 = iVar0;
						uParam0->f_1.f_3 = iVar1;
					}
					if (Global_1935689->f_10189 == 0)
					{
						if (func_332(&Var2, 0, 1))
						{
							iVar1++;
						}
						if (iVar1 >= 16)
						{
							return 1;
						}
					}
				}
				iVar0 = (iVar0 + -1);
			}
			return 1;
		}
	}
	return 0;
}

bool func_171(var uParam0, var uParam1)
{
	struct<10> Var0;
	int iVar14;
	bool bVar15;

	if (uParam0->f_1.f_2 + 1 >= uParam0->f_1)
	{
		(*uParam1)[2 /*9*/] = 0;
		return false;
	}
	if (Global_36633)
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	iVar14 = 0;
	bVar15 = false;
	iVar14 = uParam0->f_1.f_2 + 1;
	while (iVar14 <= (uParam0->f_1 - 1))
	{
		if (func_304(&Var0, iVar14, uParam0->f_1.f_1, uParam0->f_1))
		{
			if (func_333(uParam1[0 /*9*/], Var0.f_4))
			{
				if (!bVar15)
				{
					(*uParam1)[1 /*9*/] = Var0.f_4;
					bVar15 = true;
				}
				else
				{
					uParam0->f_150 = 0;
					return bVar15;
				}
			}
		}
		iVar14++;
	}
	if (!bVar15)
	{
		(*uParam1)[1 /*9*/] = 0;
	}
	return bVar15;
}

void func_172(int iParam0, int iParam1)
{
	if ((!func_31(iParam1, 747873593) && !func_31(iParam1, -1661502552)) && !func_31(iParam1, 2108217528))
	{
		return;
	}
	if (iParam1 != Global_1911894[iParam0 /*6*/])
	{
		((*Global_1911894)[iParam0 /*6*/])->f_1 = 3;
		(*Global_1911894)[iParam0 /*6*/] = iParam1;
		((*Global_1911894)[iParam0 /*6*/])->f_5 = 0;
	}
}

bool func_173(var uParam0, var uParam1)
{
	struct<10> Var0;
	int iVar14;
	int iVar15;
	int iVar16;
	bool bVar17;

	Var0.f_9 = -1591664384;
	iVar14 = 0;
	iVar15 = (16 - uParam0->f_1.f_3);
	if (Global_36633)
	{
		return false;
	}
	bVar17 = false;
	iVar14 = (uParam0->f_1.f_2 - 1);
	while (iVar14 >= 0)
	{
		if (Global_1935689->f_10189 == 0)
		{
			iVar16++;
			if (iVar16 >= iVar15)
			{
				return false;
			}
		}
		if (func_304(&Var0, iVar14, uParam0->f_1.f_1, uParam0->f_1))
		{
			if (func_333(uParam1[0 /*9*/], Var0.f_4))
			{
				if (!bVar17)
				{
					(*uParam1)[2 /*9*/] = Var0.f_4;
					bVar17 = true;
				}
				else
				{
					uParam0->f_151 = 0;
					return bVar17;
				}
			}
		}
		iVar14 = (iVar14 + -1);
	}
	if (!bVar17)
	{
		(*uParam1)[2 /*9*/] = 0;
	}
	return bVar17;
}

void func_174(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_73(uParam0[iVar0 /*9*/], 0))
		{
			func_334((*uParam0)[iVar0 /*9*/]);
		}
		iVar0++;
	}
}

void func_175(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_73(uParam0[iVar0 /*9*/], 0))
		{
			((*uParam0)[iVar0 /*9*/])->f_4 = func_69(uParam0[iVar0 /*9*/], -949239683);
		}
		iVar0++;
	}
}

int func_176(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var3.f_2[iVar0 /*3*/])))
			{
				Jump @230; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY((Var3.f_2[iVar0 /*3*/])->f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(&(Var3.f_2[iVar0 /*3*/]));
				iVar2 = MISC::GET_HASH_KEY((Var3.f_2[iVar0 /*3*/])->f_1);
				if (iParam2 != 0 && (Var3.f_2[iVar0 /*3*/])->f_2 != iParam2)
				{
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*iParam1 = iVar1;
					iParam1->f_1 = iVar2;
					iParam1->f_2 = iParam2;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_177(var uParam0, var uParam1)
{
	if (uParam1->f_2)
	{
		return 1;
	}
	if (uParam1->f_1)
	{
		return 1;
	}
	else if (uParam1->f_3 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_127) && TXD::_0xBE72591D1509FFE4(uParam1->f_3))
		{
			if (!uParam1->f_2)
			{
				OBJECT::_0xE124889AE0521FCF(uParam0->f_127, uParam1->f_3, 0, 0);
				TXD::_0x8232F37DF762ACB2(uParam1->f_3);
			}
			uParam1->f_2 = 1;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_178(var uParam0, var uParam1)
{
	return 0;
}

bool func_179(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_180(int iParam0)
{
	int iVar0;

	if (func_48(iParam0))
	{
		return 0;
	}
	if (func_54(iParam0, 0))
	{
		func_335(iParam0);
		return 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (&Global_40.f_450[iVar0] == -1)
			{
				func_335(iParam0);
				Global_40.f_450[iVar0] = iParam0;
				Global_40.f_1094++;
				Global_1430257 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_181()
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

int func_182(int iParam0)
{
	if (!func_183(iParam0))
	{
		return -1;
	}
	return func_337(func_336(iParam0));
}

bool func_183(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_184()
{
	int iVar0;
	int iVar1;

	iVar0 = Global_40.f_1093;
	Global_40.f_1093 = -1;
	if (func_338(iVar0))
	{
		iVar1 = 0;
		while (iVar1 < &Global_1347702)
		{
			if (func_47(iVar1) && Global_1347702[iVar1 /*49*/] == iVar0)
			{
				if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iVar1 /*49*/])->f_37))
				{
					func_339(iVar1, 0);
					func_341(iVar1, func_340(iVar1), 0, 0);
				}
			}
			iVar1++;
		}
	}
}

char* func_185(char* sParam0)
{
	return sParam0;
}

int func_186(int iParam0, bool bParam1)
{
	if (iParam0 == 22 || iParam0 == 23)
	{
		return 332378857 /* GXTEntry: "Brother Dorkins" */;
	}
	else if (iParam0 == 26)
	{
		return -1744398657 /* GXTEntry: "Jim \'Boy\' Calloway" */;
	}
	else if ((iParam0 == 30 || iParam0 == 33) || iParam0 == 36)
	{
		return -622951465 /* GXTEntry: "Chain Gang" */;
	}
	else if (iParam0 == 53 || iParam0 == 55)
	{
		return 877823184 /* GXTEntry: "Marco Dragic" */;
	}
	else if (iParam0 == 58)
	{
		return -1739686743 /* GXTEntry: "Doctor" */;
	}
	else if (iParam0 == 60 || iParam0 == 61)
	{
		return 2145479193;
	}
	else if ((iParam0 == 71 || iParam0 == 74) || iParam0 == 75)
	{
		return -1610853131 /* GXTEntry: "Evelyn Miller" */;
	}
	else if (iParam0 == 77)
	{
		return -434412386 /* GXTEntry: "Charles Châtenay" */;
	}
	else if (iParam0 == 82 || iParam0 == 83)
	{
		return -1489164512 /* GXTEntry: "Gang Leader" */;
	}
	else if (iParam0 == 89)
	{
		return 1970061205 /* GXTEntry: "Margaret" */;
	}
	else if (iParam0 == 101)
	{
		return -1259688762 /* GXTEntry: "Albert Mason" */;
	}
	else if (iParam0 == 115)
	{
		return 1079956634 /* GXTEntry: "Eagle Flies" */;
	}
	else if ((iParam0 == 117 || iParam0 == 118) || iParam0 == 119)
	{
		return -1280269885 /* GXTEntry: "Oh Brother" */;
	}
	else if (iParam0 == 121)
	{
		if (bParam1 || func_126(((*Global_1347702)[iParam0 /*49*/])->f_15, 1))
		{
			return 415367144 /* GXTEntry: "Obediah Hinton" */;
		}
	}
	else if (iParam0 == 127)
	{
		return -1962480616 /* GXTEntry: "Professor" */;
	}
	else if (iParam0 == 136)
	{
		return 194953189 /* GXTEntry: "Jeremiah Compson" */;
	}
	else if (iParam0 == 143)
	{
		return 825960713 /* GXTEntry: "Magnifico" */;
	}
	else if (iParam0 == 147)
	{
		if (bParam1 || func_126(((*Global_1347702)[iParam0 /*49*/])->f_15, 1))
		{
			return 1770336866 /* GXTEntry: "Hamish Sinclair" */;
		}
	}
	if (iParam0 == 151)
	{
		return -1176045274 /* GXTEntry: "William" */;
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_36;
}

void func_187(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

int func_188(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_73(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_213(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_303("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_304(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_242(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_9(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_9(iVar1);
	}
	return 0;
}

bool func_189(int iParam0)
{
	return func_342(Global_1935496->f_27, iParam0);
}

void func_190(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_191(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_194(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_192(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_193(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

bool func_194(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

void func_195(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	vector3 vVar0[24];

	if (iParam1 >= 24)
	{
		return;
	}
	StringCopy(&cVar0, "textField", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	if (bParam4)
	{
		StringConCat(&cVar0, "Strike", 24);
	}
	uParam0->f_64[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &cVar0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(&(uParam0->f_64[iParam1]), "text", *uParam0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(&(uParam0->f_64[iParam1]), "style", iParam2);
	StringCopy(&cVar0, "divider", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	uParam0->f_89[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &cVar0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_89[iParam1]), "isVisible", bParam3);
}

void func_196(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	char cVar0[16];

	if (*iParam2 >= 24)
	{
		return;
	}
	if (!(uParam0->f_2[iParam1 /*5*/])->f_3)
	{
		iLocal_19++;
		(uParam0->f_2[iParam1 /*5*/])->f_4 = iLocal_19;
	}
	(uParam0->f_2[iParam1 /*5*/])->f_3 = 1;
	StringCopy(&cVar0, "textField", 16);
	StringIntConCat(&cVar0, *iParam2, 16);
	uParam0->f_64[*iParam2] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &cVar0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(&(uParam0->f_64[*iParam2]), "text", *uParam0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(&(uParam0->f_64[*iParam2]), "style", iParam3);
	StringCopy(&cVar0, "divider", 16);
	StringIntConCat(&cVar0, *iParam2, 16);
	uParam0->f_89[*iParam2] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &cVar0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_89[*iParam2]), "isVisible", bParam4);
	*iParam2++;
}

void func_197(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < uParam0->f_131)
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_5.f_2[iVar1 /*5*/])->f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, (uParam0->f_5.f_2[iVar1 /*5*/])->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					func_195(&(uParam0->f_5), 0, 0, 1, 0);
					break;
				case -641080715:
					func_195(&(uParam0->f_5), 1, 2, 1, 0);
					break;
				case 1724675796:
					func_195(&(uParam0->f_5), 2, 1, 1, 0);
					break;
				case 276123595:
					func_195(&(uParam0->f_5), 3, 3, 1, 0);
					break;
				case -139224928:
					func_195(&(uParam0->f_5), 4, 1, 1, 0);
					break;
				case -29447330:
					func_195(&(uParam0->f_5), 5, 2, 1, 0);
					break;
				case 159464507:
					func_195(&(uParam0->f_5), 6, 1, 1, 0);
					break;
				case 1175698187:
					func_195(&(uParam0->f_5), 7, 2, 0, 0);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_198(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_131)
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_5.f_2[iVar1 /*5*/])->f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, (uParam0->f_5.f_2[iVar1 /*5*/])->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					func_195(&(uParam0->f_5), iVar2, 0, 1, 0);
					iVar2++;
					break;
				case -641080715:
					func_195(&(uParam0->f_5), iVar2, 2, 1, 0);
					iVar2++;
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_199(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < uParam0->f_131)
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_5.f_2[iVar1 /*5*/])->f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, (uParam0->f_5.f_2[iVar1 /*5*/])->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					func_195(&(uParam0->f_5), 0, 0, 1, 0);
					break;
				case -641080715:
					func_195(&(uParam0->f_5), 2, 3, 1, 0);
					break;
				case 276123595:
					func_195(&(uParam0->f_5), 3, 3, 1, 0);
					break;
				case -29447330:
					func_195(&(uParam0->f_5), 4, 3, 1, 0);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
	uParam0->f_5 = iParam1;
	func_195(&(uParam0->f_5), 1, 1, 1, 0);
}

void func_200(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_131)
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_5.f_2[iVar1 /*5*/])->f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, (uParam0->f_5.f_2[iVar1 /*5*/])->f_2, iVar0);
			switch (iParam1)
			{
				case -975275394: /* GXTEntry: "List of Debtors" */
				case -670753077: /* GXTEntry: "List of Debtors" */
				case -530731136: /* GXTEntry: "List of Debtors" */
				case -284144411: /* GXTEntry: "List of Debtors" */
				case 333354629: /* GXTEntry: "List of Debtors" */
				case 640727849: /* GXTEntry: "List of Debtors" */
					switch (&uParam0->f_5.f_2[iVar1 /*5*/])
					{
						case 1410847083:
							func_195(&(uParam0->f_5), iVar2, 1, 1, 0);
							iVar2++;
							break;
						case 1724675796:
							func_195(&(uParam0->f_5), iVar2, 6, 1, 0);
							iVar2++;
							break;
						case -641080715:
							func_195(&(uParam0->f_5), iVar2, 5, 0, func_31(iParam1, -1804424566));
							iVar2++;
							break;
						case 276123595:
							func_195(&(uParam0->f_5), iVar2, 5, 0, 0);
							iVar2++;
							break;
					}
					break;
				default:
					switch (&uParam0->f_5.f_2[iVar1 /*5*/])
					{
						case 1410847083:
							func_195(&(uParam0->f_5), iVar2, 1, 1, 0);
							iVar2++;
							break;
						case 1724675796:
							func_195(&(uParam0->f_5), iVar2, 3, 1, 0);
							iVar2++;
							break;
						case -641080715:
							func_195(&(uParam0->f_5), iVar2, 2, 0, 0);
							iVar2++;
							break;
					}
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_201(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < uParam0->f_131)
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_5.f_2[iVar1 /*5*/])->f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, (uParam0->f_5.f_2[iVar1 /*5*/])->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					func_195(&(uParam0->f_5), 0, 1, 1, 0);
					break;
				case 1724675796:
					func_195(&(uParam0->f_5), 1, 0, 1, 0);
					break;
				case -139224928:
					func_195(&(uParam0->f_5), 2, 0, 1, 0);
					break;
				case -641080715:
					func_195(&(uParam0->f_5), 3, 0, 1, 0);
					break;
				case 276123595:
					func_195(&(uParam0->f_5), 4, 3, 1, 0);
					break;
				case -29447330:
					func_195(&(uParam0->f_5), 5, 3, 1, 0);
					break;
				case 1175698187:
					func_195(&(uParam0->f_5), 6, 3, 1, 0);
					break;
				case 852595847:
					func_195(&(uParam0->f_5), 7, 3, 1, 0);
					break;
				case 1488412754:
					func_195(&(uParam0->f_5), 8, 3, 1, 0);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_202(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	if (uParam0->f_135 < 0 || uParam0->f_135 >= 12)
	{
		return;
	}
	iVar0 = uParam0->f_135;
	if (iVar0 == 0)
	{
		switch (iParam1)
		{
			case -14157738: /* GXTEntry: "Blackwater Ledger No. 62" */
			case 1566650197: /* GXTEntry: "Saint Denis Times No. 43" */
			case 1767753378: /* GXTEntry: "New Hanover Gazette No. 27" */
				if (func_344(func_343(3)) == 0)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
				break;
		}
	}
	uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Newspaper");
	iVar2 = 0;
	while (iVar2 < 15)
	{
		iVar3 = 0;
		if (iVar2 < (uParam0->f_5.f_2[iVar0 /*5*/])->f_1)
		{
			if ((uParam0->f_5.f_2[iVar0 /*5*/])->f_2 == 0)
			{
			}
			else if (ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_NUM_VALUES(iParam1, (uParam0->f_5.f_2[iVar0 /*5*/])->f_2) == 0)
			{
			}
			else
			{
				iVar3 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, (uParam0->f_5.f_2[iVar0 /*5*/])->f_2, iVar2);
				bVar4 = true;
				if (iVar3 == joaat("none") || iVar3 == 0)
				{
					bVar4 = false;
				}
				func_345(iVar2, uVar1, bVar4, iVar3);
			}
			iVar2++;
		}
	}

void func_203(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	iVar1 = 0;
	while (iVar1 < uParam0->f_131)
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_5.f_2[iVar1 /*5*/])->f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, (uParam0->f_5.f_2[iVar1 /*5*/])->f_2, iVar0);
			switch (&uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 159464507:
				case 1410847083:
					func_346(iParam1, &(uParam0->f_5), &uVar2, 0);
					break;
				case -2016692014:
				case 1724675796:
					func_346(iParam1, &(uParam0->f_5), &uVar2, 1);
					break;
				case -1720361947:
				case -139224928:
					func_346(iParam1, &(uParam0->f_5), &uVar2, 1);
					break;
				case -641080715:
				case -29447330:
				case 276123595:
					func_346(iParam1, &(uParam0->f_5), &uVar2, 2);
					break;
				case 852595847:
				case 1175698187:
				case 1488412754:
					func_346(iParam1, &(uParam0->f_5), &uVar2, 2);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

bool func_204(int iParam0)
{
	return func_106(iParam0) == joaat("weapon");
}

int func_205(int iParam0)
{
	var uVar0;

	if (func_113() != -1)
	{
		return 0;
	}
	if (func_107(iParam0, 1048576))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_212(iParam0, &uVar0, 1, 0, 0);
	}
	return func_61(iParam0, 1, 0);
}

void func_206(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_106(iParam0) != joaat("weapon"))
	{
		return;
	}
	iVar0 = func_112(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_241(iVar0))
	{
		if (func_113() == -1)
		{
			func_114(iVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, 0) && func_89(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_169(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_207(int iParam0, int iParam1)
{
	int iVar0;

	if (func_31(iParam0, 58855631))
	{
		func_347(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

struct<5> func_208(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_348(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_106(iParam0))
	{
		case joaat("clothing"):
			if (!INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0 = { func_246(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("weapon"):
			Var0 = { func_349(bParam1) };
			if (bParam2 && func_350(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_244(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_244(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_245(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_351(bParam1) };
			switch (func_110(iParam0))
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
			if (func_352(iParam0, -1823706425))
			{
				Var0 = { func_246(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_352(iParam0, -1483207246))
			{
				Var0 = { func_246(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
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
				if (!func_353(Var0, &Var27, bParam1, 0))
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

int func_209(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_73(iParam0, 0))
	{
		return 0;
	}
	if (!func_115(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_215(bParam3), iParam0);
}

int func_210(int iParam0, bool bParam1)
{
	if (func_119(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_215(bParam1), iParam0, 0);
}

int func_211()
{
	if (func_113() != -1)
	{
		return 0;
	}
	if (!func_99())
	{
		return 0;
	}
	if (!func_126(((*Global_1835011)[1 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_126(((*Global_1835011)[2 /*74*/])->f_1, 1) && func_126(((*Global_1347702)[120 /*49*/])->f_15, 1)) && !func_126(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_126(((*Global_1835011)[37 /*74*/])->f_1, 1) && !func_126(((*Global_1835011)[39 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_126(((*Global_1835011)[57 /*74*/])->f_1, 1) && !func_126(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_126(((*Global_1835011)[26 /*74*/])->f_1, 1) && !func_126(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if ((func_126(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_126(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_126(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_126(((*Global_1835011)[75 /*74*/])->f_1, 1) && !func_126(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if (func_126(((*Global_1835011)[76 /*74*/])->f_1, 1) && !func_126(((*Global_1835011)[77 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_126(((*Global_1835011)[40 /*74*/])->f_1, 1) && func_126(((*Global_1835011)[41 /*74*/])->f_1, 1)) && !func_126(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_126(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_126(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_126(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_126(((*Global_1835011)[65 /*74*/])->f_1, 1) && func_126(((*Global_1835011)[66 /*74*/])->f_1, 1)) && !func_126(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 1;
	}
	return 0;
}

int func_212(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_354(&iParam0);
	if (!func_73(iParam0, 0))
	{
		return 0;
	}
	if (!func_115(0))
	{
		bParam3 = true;
	}
	if (func_204(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
		{
			Var0 = { func_349(0) };
			Var4.f_9 = -1591664384;
			if (!func_244(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return 0;
			}
			else if (func_245(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return 0;
			}
			if (func_350(iParam0, 1))
			{
				if (!func_244(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return 0;
				}
				else if (func_245(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return 0;
				}
			}
		}
		else if (!func_355(iParam0, &uVar26, 0))
		{
			return 0;
		}
		return 1;
	}
	iVar27 = func_209(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_356(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_215(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return 1;
	}
	return 0;
}

int func_213(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_73(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_106(iParam0);
	if (iVar0 == joaat("weapon") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == joaat("ammo") && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_31(iParam0, 1399091007))
	{
		func_292(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_214(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_357(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_358(&Var0, func_349(0));
	}
	if (!func_359(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_9(iVar14);
	return uVar15;
}

int func_215(bool bParam0)
{
	if (func_113() == -1)
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

int func_216()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

int func_217(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_218(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_113() != -1)
	{
		return;
	}
	iVar0 = func_360(iParam0);
	fVar1 = func_361(iParam0);
	if ((Global_1347477->f_117 || !func_108(31)) || !func_362(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_363(iVar0) >= 7)
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
	func_364(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_326(MISC::_CREATE_VAR_STRING(6, func_365(iParam0), fVar1), "itemtype_textures", func_366(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_219(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_367(&Global_0, 8);
	}
	if (!func_99() || func_113() != -1)
	{
		return;
	}
	func_367(&Global_0, 1);
}

void func_220(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_221(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_368(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_369(iParam0))
	{
		return 0;
	}
	if (func_370(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_308(iParam0, 1)) || func_371(32768))
	{
		if (!func_308(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_372())
	{
		return 0;
	}
	return 1;
}

void func_222(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_223(int iParam0)
{
	int iVar0;

	iVar0 = func_259(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_224(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588 /* GXTEntry: "Cigarette Cards Famous Gunslingers" */;
		case 1:
			return -1021394391 /* GXTEntry: "Cigarette Cards Artists & Poets" */;
		case 2:
			return -987306668 /* GXTEntry: "Cigarette Cards Vistas of America" */;
		case 3:
			return -1028735103 /* GXTEntry: "Cigarette Cards Gems Of Beauty" */;
		case 4:
			return 515229791 /* GXTEntry: "Cigarette Cards Flora of America" */;
		case 5:
			return -1230863414 /* GXTEntry: "Cigarette Cards Stars of the Stage" */;
		case 6:
			return 232875659 /* GXTEntry: "Cigarette Cards Fauna of North America" */;
		case 7:
			return 1423129537 /* GXTEntry: "Cigarette Cards Marvels of Travel" */;
		case 8:
			return -435742319 /* GXTEntry: "Cigarette Cards The World\'s Champions" */;
		case 9:
			return -1854702679 /* GXTEntry: "Cigarette Cards Amazing Inventions" */;
		case 10:
			return 1265323898 /* GXTEntry: "Cigarette Cards Breeds of Horses" */;
		case 11:
			return -479775696 /* GXTEntry: "Cigarette Cards Prominent Americans" */;
		default:
			break;
	}
	return 0;
}

int func_225(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_373(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_226(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_102() >= 12)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_374(), 12);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_375(), 12);
			}
			break;
		case -440187297:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (func_274() >= 30)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_POSTED_OBJ", func_376(), 30);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_FOUND_OBJ", func_274(), 30);
			}
			break;
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_377(), 13);
			}
			break;
		case 2103522376:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (func_275() >= 10)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_POSTED_OBJ", func_378(), 10);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_FOUND_OBJ", func_275(), 10);
			}
			break;
		case 678508515:
			if (iParam2 == 3)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_225(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

int func_227(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -2076669067)
	{
		if (iParam1 == 38816757)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 578982838))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 578982838);
			}
		}
	}
	else if (iParam2 == -440187297)
	{
		if (iParam1 == -1223580455)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 349797279))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 349797279);
			}
		}
	}
	else if (iParam2 == 2103522376)
	{
		if (iParam1 == -170865073)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 1974744712))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 1974744712);
			}
		}
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iParam1);
	}
	return 1;
}

int func_228(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return 1;
}

int func_229(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, 1);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::_CREATE_VAR_STRING(2, sParam3));
	return 1;
}

int func_230(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_379(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_61(iVar2, 1, 0) || func_381(func_380(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_234(func_379(iVar0))), func_234(func_379(iVar0)), bVar1, 1, 0);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_274() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_382(iVar0)), func_382(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_376() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_382(iVar0)), func_382(iVar0), bVar1, 1, 0);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_382(iVar0)), func_382(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_285(iParam3, func_383(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_281(iVar2) - iParam7) >= func_225(iParam3, func_384(iVar0));
				}
				else
				{
					bVar1 = func_281(iVar2) >= func_225(iParam3, func_384(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_281(iVar2) + iParam7) >= func_225(iParam3, func_384(iVar0));
			}
			else
			{
				bVar1 = func_281(iVar2) >= func_225(iParam3, func_384(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_385(iVar2)), func_385(iVar2), bVar1, 1, 0);
		}
		if (iParam2 == 1995362678)
		{
			if (func_386(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_387(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_387(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, 1, 0);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_275() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_388(iVar0)), func_388(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_378() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_388(iVar0)), func_388(iVar0), bVar1, 1, 0);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_388(iVar0)), func_388(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_285(iParam3, func_383(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_281(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_389(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_389(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_390(iVar2)), func_390(iVar2), bVar1, 1, 0);
		}
		iVar0++;
	}
	return 1;
}

int func_231(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;

	bVar0 = false;
	if (iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == -2076669067)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", bVar0, 1, 0);
	}
	if (iParam2 == -1531394072)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", bVar0, 1, 0);
	}
	if (iParam2 == 1995362678)
	{
		if (func_377() >= 13)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", bVar0, 1, 0);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == 678508515)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", bVar0, 1, 0);
	}
	return 1;
}

int func_232(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_183(func_391(0)) && ((func_392(0) == 1 || func_392(0) == 8) || func_392(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == -440187297 || iParam2 == 1995362678) || iParam2 == 2103522376)
	{
		if (iParam3 == 7)
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == 678508515)
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
			}
		}
	}
	return 1;
}

var func_233(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

char* func_234(int iParam0)
{
	switch (iParam0)
	{
		case 554799588: /* GXTEntry: "Cigarette Cards Famous Gunslingers" */
			return "COL_CC_GUN_SET";
		case -1021394391: /* GXTEntry: "Cigarette Cards Artists & Poets" */
			return "COL_CC_ART_SET";
		case -987306668: /* GXTEntry: "Cigarette Cards Vistas of America" */
			return "COL_CC_LND_SET";
		case -1028735103: /* GXTEntry: "Cigarette Cards Gems Of Beauty" */
			return "COL_CC_GRL_SET";
		case 515229791: /* GXTEntry: "Cigarette Cards Flora of America" */
			return "COL_CC_PLT_SET";
		case -1230863414: /* GXTEntry: "Cigarette Cards Stars of the Stage" */
			return "COL_CC_ACT_SET";
		case 232875659: /* GXTEntry: "Cigarette Cards Fauna of North America" */
			return "COL_CC_AML_SET";
		case 1423129537: /* GXTEntry: "Cigarette Cards Marvels of Travel" */
			return "COL_CC_VEH_SET";
		case -435742319: /* GXTEntry: "Cigarette Cards The World\'s Champions" */
			return "COL_CC_SPT_SET";
		case -1854702679: /* GXTEntry: "Cigarette Cards Amazing Inventions" */
			return "COL_CC_INV_SET";
		case 1265323898: /* GXTEntry: "Cigarette Cards Breeds of Horses" */
			return "COL_CC_HOR_SET";
		case -479775696: /* GXTEntry: "Cigarette Cards Prominent Americans" */
			return "COL_CC_PAM_SET";
		default:
			break;
	}
	return "";
}

var func_235(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

int func_236(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_237(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_238(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_239(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_393(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_394(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_394(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_394(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			func_395(1);
			break;
		case 34:
			func_396(1);
			break;
		case 35:
			func_397(1);
			break;
		case 36:
			break;
		case 37:
			func_398(0);
			break;
		case 38:
			func_399(0);
			break;
		case 39:
			func_400(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if ((!&Global_1879534 && func_99()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_235("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 2);
			func_96(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_99()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_235("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 3);
			func_96(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_99()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_235("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 4);
			func_96(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_99()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_235("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 5, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 5);
			func_96(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-200143754, true);
			UNLOCK::_UNLOCK_SET_VISIBLE(-200143754, true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (func_113() == -1)
			{
				if (!func_318(99217379) || func_401(99217379) == 2110595215)
				{
					if (func_251())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = 899611344; /* GXTEntry: "Off-Hand Holster" */
					}
					if (!func_61(iVar0, 1, 0))
					{
						func_162(iVar0, 1, 752097756);
					}
					func_141(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_113() == -1)
			{
				if (!func_61(1013902307, 1, 0))
				{
					func_162(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_113() == -1)
			{
				if (!func_61(1013902307, 1, 0))
				{
					func_162(1013902307, 1, 752097756);
				}
				if (!func_61(142640135, 1, 0))
				{
					func_162(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_113() == -1)
			{
				if (!func_61(786809402, 1, 0))
				{
					func_162(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_113() == -1)
			{
				if (!func_61(786809402, 1, 0))
				{
					func_162(786809402, 1, 752097756);
				}
				if (!func_61(-518019409, 1, 0))
				{
					func_162(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-843169622, true);
			Global_1935630->f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_402();
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-78935213, true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-384786155, true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(296662302, true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-1871453000, true);
			break;
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(1397349651, true);
			break;
	}
}

int func_240(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_VISIBLE(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_241(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_242(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_243(int iParam0, int iParam1)
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

bool func_244(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_356(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_245(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_403(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_246(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_73(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_215(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_247(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_404(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_353(*uParam1, &Var0, bParam6, 0))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_115(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_215(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_248(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(iParam0))
	{
		iVar1 = func_405(WEAPON::_0xD3750CCC00635FC2(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

void func_249(int iParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630->f_12)
	{
		return;
	}
	if (WEAPON::_0xC4DEC3CA8C365A5D(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::_0xDDC64F5E31EEDAB6(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::_0xC212F1D05A8232BB(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::_0x0A82317B7EBFC420(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::_0xC75386174ECE95D5(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_35, sVar0, iParam0);
	iVar2 = func_406();
	func_407(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_250(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_408(iParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, 954660191) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_0x6AD66548840472E5(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::_0xD3750CCC00635FC2(iParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_0x5C2EA6C44F515F34(iParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

int func_251()
{
	if (func_113() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

bool func_252(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(iParam0));
}

int func_253(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_254(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_0x0556E9D2ECF39D01(iVar0))
		{
			if (!func_108(50))
			{
				if (!func_108(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
		{
			if (!func_108(51))
			{
				if (!func_108(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_255()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

int func_256(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	if (!func_73(iParam1, 0))
	{
		return 0;
	}
	if (func_106(iParam1) != joaat("clothing"))
	{
		return 0;
	}
	bVar1 = func_113() != -1;
	iVar2 = PED::_GET_METAPED_TYPE(iParam0);
	if (func_110(iParam1) == -999503751)
	{
		return 1;
	}
	iVar4 = func_409(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return 0;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_31(iParam1, 866047851))
	{
		iVar5 = func_294(iVar4, 1);
		if (func_410(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*uParam2 = -265166256; /* GXTEntry: "You are wearing too many of this item. Remove some before equipping more." */
			return 0;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_0x5FF9A878C3D115B8(iVar8, iVar2, bVar1) == 2056714954 && PED::_0xFB4891BD7578CDC1(iParam0, -1455751347))
			{
				*uParam2 = 111371848; /* GXTEntry: "Your shirt does not support this type of neckwear." */
				return 0;
			}
			iVar5 = 10;
			iVar3 = func_110(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return 0;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] != &Global_1946804->f_57[iVar5 /*11*/] && func_31(iParam1, -1638171711))
			{
				*uParam2 = 187275271; /* GXTEntry: "Your chaps do not support this." */
				return 0;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
			{
				*uParam2 = 2143522536;
				return 0;
			}
			if (PED::_0xFB4891BD7578CDC1(iParam0, -1968556728))
			{
				*uParam2 = -849690042; /* GXTEntry: "Your boots do not support having spurs." */
				return 0;
			}
			break;
		case -1505978566:
			if (func_411(1868067663, &uVar0))
			{
				*uParam2 = 939463734; /* GXTEntry: "Item cannot be worn with coats." */
				return 0;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = PED::_0x90403E8107B60E81(iParam0);
				iVar10 = func_412(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_412(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return 0;
				}
				Jump @726; //curOff = 583
				iVar3 = func_110(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6 /*11*/] && func_31(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), -1638171711))
				{
					*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
					return 0;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
					{
						*uParam2 = 2143522536;
						return 0;
					}
				}
			}
			*uParam2 = 0;
			return 1;
		}

void func_257()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_258()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	PLAYER::_0x08E22898A6AF4905(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::_0xFECA17CF3343694B(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::_0xBBADFB5E5E5766FB(PLAYER::PLAYER_ID(), (1f - fVar1));
}

int func_259(int iParam0)
{
	if (!func_183(iParam0))
	{
		return -1;
	}
	return func_413(iParam0);
}

int func_260()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_61(func_414(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_261(int iParam0)
{
	switch (iParam0)
	{
		case -1217729597: /* GXTEntry: "Gold Jointed Bracelet" */
		case 363594903: /* GXTEntry: "Vintage Civil War Handcuffs" */
		case 425319238: /* GXTEntry: "Legendary Alligator Tooth" */
			return -62615415 /* GXTEntry: "Alligator Tooth Talisman" */;
		case -1540119664: /* GXTEntry: "Legendary Bear Claw" */
		case 446659922: /* GXTEntry: "Silver Chain Bracelet" */
		case 2100194981: /* GXTEntry: "Quartz Chunk" */
			return -832719552 /* GXTEntry: "Bear Claw Talisman" */;
		case -1018798851: /* GXTEntry: "Cobalt Petrified Wood" */
		case -757567246: /* GXTEntry: "Gold Earring" */
		case -390982951: /* GXTEntry: "Legendary Boar Tusk" */
			return -184823984 /* GXTEntry: "Boar Tusk Talisman" */;
		case -2054602073: /* GXTEntry: "Legendary Bison Horn" */
		case -585121677: /* GXTEntry: "Silver Earring" */
		case -378441099: /* GXTEntry: "Abalone Shell Fragment" */
			return -1941112926 /* GXTEntry: "Bison Horn Talisman" */;
		case 1566949660: /* GXTEntry: "Old Brass Compass" */
			return -121629511 /* GXTEntry: "Raven Claw Talisman" */;
	}
	return 0;
}

int func_262(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case -62615415: /* GXTEntry: "Alligator Tooth Talisman" */
			if (iParam1 == 425319238)
			{
				iVar0 = 363594903; /* GXTEntry: "Vintage Civil War Handcuffs" */
				iVar1 = -1217729597; /* GXTEntry: "Gold Jointed Bracelet" */
			}
			else if (iParam1 == 363594903)
			{
				iVar0 = 425319238; /* GXTEntry: "Legendary Alligator Tooth" */
				iVar1 = -1217729597; /* GXTEntry: "Gold Jointed Bracelet" */
			}
			else
			{
				iVar0 = 425319238; /* GXTEntry: "Legendary Alligator Tooth" */
				iVar1 = 363594903; /* GXTEntry: "Vintage Civil War Handcuffs" */
			}
			break;
		case -832719552: /* GXTEntry: "Bear Claw Talisman" */
			if (iParam1 == -1540119664)
			{
				iVar0 = 2100194981; /* GXTEntry: "Quartz Chunk" */
				iVar1 = 446659922; /* GXTEntry: "Silver Chain Bracelet" */
			}
			else if (iParam1 == 2100194981)
			{
				iVar0 = -1540119664; /* GXTEntry: "Legendary Bear Claw" */
				iVar1 = 446659922; /* GXTEntry: "Silver Chain Bracelet" */
			}
			else
			{
				iVar0 = -1540119664; /* GXTEntry: "Legendary Bear Claw" */
				iVar1 = 2100194981; /* GXTEntry: "Quartz Chunk" */
			}
			break;
		case -184823984: /* GXTEntry: "Boar Tusk Talisman" */
			if (iParam1 == -390982951)
			{
				iVar0 = -1018798851; /* GXTEntry: "Cobalt Petrified Wood" */
				iVar1 = -757567246; /* GXTEntry: "Gold Earring" */
			}
			else if (iParam1 == -1018798851)
			{
				iVar0 = -390982951; /* GXTEntry: "Legendary Boar Tusk" */
				iVar1 = -757567246; /* GXTEntry: "Gold Earring" */
			}
			else
			{
				iVar0 = -390982951; /* GXTEntry: "Legendary Boar Tusk" */
				iVar1 = -1018798851; /* GXTEntry: "Cobalt Petrified Wood" */
			}
			break;
		case -1941112926: /* GXTEntry: "Bison Horn Talisman" */
			if (iParam1 == -2054602073)
			{
				iVar0 = -378441099; /* GXTEntry: "Abalone Shell Fragment" */
				iVar1 = -585121677; /* GXTEntry: "Silver Earring" */
			}
			else if (iParam1 == -378441099)
			{
				iVar0 = -2054602073; /* GXTEntry: "Legendary Bison Horn" */
				iVar1 = -585121677; /* GXTEntry: "Silver Earring" */
			}
			else
			{
				iVar0 = -2054602073; /* GXTEntry: "Legendary Bison Horn" */
				iVar1 = -378441099; /* GXTEntry: "Abalone Shell Fragment" */
			}
			break;
	}
	if (func_61(iVar0, 1, 0) && func_61(iVar1, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_263(int iParam0)
{
	switch (iParam0)
	{
		case 968830139: /* GXTEntry: "Legendary Beaver Tooth" */
			return -224110471 /* GXTEntry: "Beaver Tooth Trinket" */;
		case -649219937: /* GXTEntry: "Legendary Tatanka Bison Horn" */
			return 1289585739 /* GXTEntry: "Tatanka Bison Horn Trinket" */;
		case -858567048: /* GXTEntry: "Legendary Buck Antler" */
			return -269048282 /* GXTEntry: "Buck Antler Trinket" */;
		case -718162726: /* GXTEntry: "Legendary Cougar Fang" */
			return 1441506783 /* GXTEntry: "Cougar Fang Trinket" */;
		case -1284282080: /* GXTEntry: "Legendary Coyote Fang" */
			return 780305678 /* GXTEntry: "Coyote Fang Trinket" */;
		case -725003445: /* GXTEntry: "Legendary Elk Antler" */
			return 1811977508 /* GXTEntry: "Elk Antler Trinket" */;
		case -1445630104: /* GXTEntry: "Legendary Fox Claw" */
			return -935153695 /* GXTEntry: "Fox Claw Trinket" */;
		case 580970876: /* GXTEntry: "Lion\'s Paw" */
			return 1299744282 /* GXTEntry: "Lion\'s Paw Trinket" */;
		case 967601061: /* GXTEntry: "Legendary Moose Antler" */
			return 1631240196 /* GXTEntry: "Moose Antler Trinket" */;
		case 1946030891: /* GXTEntry: "Legendary Panther Eye" */
			return 517396587 /* GXTEntry: "Panther\'s Eye Trinket" */;
		case -1511404982: /* GXTEntry: "Legendary Pronghorn Horn" */
			return 1620353486 /* GXTEntry: "Pronghorn Horn Trinket" */;
		case -944465290: /* GXTEntry: "Legendary Ram Horn" */
			return 1816443627 /* GXTEntry: "Ram Horn Trinket" */;
		case -1701098855: /* GXTEntry: "Legendary Wolf Heart" */
			return -127011478 /* GXTEntry: "Wolf Heart Trinket" */;
		default:
			break;
	}
	return 0;
}

int func_264(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_415(iParam0);
	if (iVar0 != -15)
	{
		func_407(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_416(iVar0, 1);
	}
	return 0;
}

int func_265(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	int iVar25;

	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_61(1811977508 /* GXTEntry: "Elk Antler Trinket" */, 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (&Var1.f_1[iVar24] == 2084597891)
		{
			return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = &Var1.f_1[iVar24];
			if (func_73(iVar25, 0) && func_31(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_266(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_326(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_267(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_417())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_326(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_418(iVar0);
			func_419(iVar0, 0, 0);
		}
		func_326(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_124(func_322(1644987397), iVar1);
	}
}

void func_268(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_269(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_270(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_271(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_272(int iParam0)
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar9 = 281887510; /* GXTEntry: "Little Egret Plume" */
			iVar10 = -164081697; /* GXTEntry: "Reddish Egret Plume" */
			iVar11 = -1161319399; /* GXTEntry: "Snowy Egret Plume" */
			iVar12 = 728781265; /* GXTEntry: "Lady of the Night Orchid" */
			break;
		case 2:
			iVar9 = -222563712; /* GXTEntry: "Heron Plume" */
			iVar10 = 1794857344; /* GXTEntry: "Lady Slipper Orchid" */
			iVar11 = 1952409553; /* GXTEntry: "Moccasin Flower Orchid" */
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726; /* GXTEntry: "Acuna\'s Star Orchid" */
			iVar11 = -404270094; /* GXTEntry: "Cigar Orchid" */
			iVar12 = 2093126853; /* GXTEntry: "Ghost Orchid" */
			break;
		case 8:
			iVar9 = 2085530337; /* GXTEntry: "Spoonbill Plume" */
			iVar10 = -150591160; /* GXTEntry: "Night Scented Orchid" */
			iVar11 = -323969289; /* GXTEntry: "Rat Tail Orchid" */
			iVar12 = 1504361882; /* GXTEntry: "Spider Orchid" */
			break;
		case 16:
			iVar9 = -1521783510; /* GXTEntry: "Clamshell Orchid" */
			iVar10 = 1714875242; /* GXTEntry: "Dragon\'s Mouth Orchid" */
			iVar11 = 1019229063; /* GXTEntry: "Queen\'s Orchid" */
			iVar12 = 927763737; /* GXTEntry: "Sparrow\'s Egg Orchid" */
			break;
	}
	iVar1 = func_281(iVar9);
	iVar2 = func_281(iVar10);
	iVar3 = func_281(iVar11);
	iVar5 = func_282(iVar9);
	iVar6 = func_282(iVar10);
	iVar7 = func_282(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_281(iVar12);
		iVar8 = func_282(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam0 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

void func_273(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_274()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_420(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_275()
{
	return COLLECTION::_0x5461C821D00FE15A(2103522376, 0);
}

int func_276(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (iParam0)
	{
		case -949689219:
			if (iParam1 == -1866642239)
			{
				iVar0 = 444160793; /* GXTEntry: "Perfect Squirrel Carcass" */
			}
			else if (iParam1 == 444160793)
			{
				iVar0 = -1866642239; /* GXTEntry: "Perfect Rabbit Carcass" */
			}
			break;
		case -1248968496:
			if (iParam1 == -1969404854)
			{
				iVar0 = 1761263432; /* GXTEntry: "Perfect Rat Carcass" */
				iVar1 = -843795569; /* GXTEntry: "Perfect Woodpecker Carcass" */
			}
			else if (iParam1 == 1761263432)
			{
				iVar0 = -1969404854; /* GXTEntry: "Perfect Cardinal Carcass" */
				iVar1 = -843795569; /* GXTEntry: "Perfect Woodpecker Carcass" */
			}
			else if (iParam1 == -843795569)
			{
				iVar0 = -1969404854; /* GXTEntry: "Perfect Cardinal Carcass" */
				iVar1 = 1761263432; /* GXTEntry: "Perfect Rat Carcass" */
			}
			break;
		case 1706369307:
			if (iParam1 == -832850511)
			{
				iVar0 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				iVar1 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
				iVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (iParam1 == -935543049)
			{
				iVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				iVar1 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
				iVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (iParam1 == -1464585113)
			{
				iVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				iVar1 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				iVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (iParam1 == -1290897778)
			{
				iVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				iVar1 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				iVar2 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
			}
			break;
		case 1520110311:
			if (iParam1 == -100913452)
			{
				iVar0 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar1 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == 313332607)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == -124539232)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == 102446365)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar2 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == -1882344824)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar2 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar3 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
			}
			break;
		case -1992824800:
			if (iParam1 == 905173572)
			{
				iVar0 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar1 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == 1432949803)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == -983831788)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == 59384454)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar2 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == 924882045)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar2 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar3 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
			}
			break;
	}
	if (iParam0 == -949689219)
	{
		if (bParam3)
		{
			if (func_389(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_389(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_389(iVar0))
		{
			*sParam2++;
		}
		if (func_389(iVar0))
		{
			return 1;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_389(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_389(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_389(iVar0))
		{
			*sParam2++;
		}
		if (func_389(iVar1))
		{
			*sParam2++;
		}
		if (func_389(iVar0) && func_389(iVar1))
		{
			return 1;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_389(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_389(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_389(iVar0))
		{
			*sParam2++;
		}
		if (func_389(iVar1))
		{
			*sParam2++;
		}
		if (func_389(iVar2))
		{
			*sParam2++;
		}
		if ((func_389(iVar0) && func_389(iVar1)) && func_389(iVar2))
		{
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_389(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_389(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_389(iVar0))
		{
			*sParam2++;
		}
		if (func_389(iVar1))
		{
			*sParam2++;
		}
		if (func_389(iVar2))
		{
			*sParam2++;
		}
		if (func_389(iVar3))
		{
			*sParam2++;
		}
		if (((func_389(iVar0) && func_389(iVar1)) && func_389(iVar2)) && func_389(iVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_277(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_421(1497516462);
			func_422(2016141805);
			func_422(1010885152);
			func_422(-502324015);
			break;
		case 2016141805:
			func_422(1497516462);
			func_421(2016141805);
			func_422(1010885152);
			func_422(-502324015);
			break;
		case 1010885152:
			func_422(1497516462);
			func_422(2016141805);
			func_421(1010885152);
			func_422(-502324015);
			break;
		case -502324015:
			func_422(1497516462);
			func_422(2016141805);
			func_422(1010885152);
			func_421(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_422(-538889627);
			func_422(-538880323);
			func_422(-1056767524);
			func_421(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_423();
			func_421(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_424();
			func_421(iParam0);
			break;
		case 2019386373:
			func_422(-664252410);
			func_422(2109952320);
			func_421(2019386373);
			break;
		case -664252410:
			func_422(2019386373);
			func_422(2109952320);
			func_421(-664252410);
			break;
		case 2109952320:
			func_422(2019386373);
			func_422(-664252410);
			func_421(2109952320);
			break;
		case -1674179981:
			func_422(-1835851517);
			func_422(-1838352012);
			func_421(-1674179981);
			break;
		case -1835851517:
			func_422(-1674179981);
			func_422(-1838352012);
			func_421(-1835851517);
			break;
		case -1838352012:
			func_422(-1674179981);
			func_422(-1835851517);
			func_421(-1838352012);
			break;
		case -1717960576:
			func_422(210001842);
			func_421(-1717960576);
			break;
		case 210001842:
			func_422(-1717960576);
			func_421(210001842);
			break;
		case -150493654:
			func_422(-1271608261);
			func_422(1846061697);
			func_422(-1145519186);
			func_421(-150493654);
			break;
		case -1271608261:
			func_422(-150493654);
			func_422(1846061697);
			func_422(-1145519186);
			func_421(-1271608261);
			break;
		case 1846061697:
			func_422(-150493654);
			func_422(-1271608261);
			func_422(-1145519186);
			func_421(1846061697);
			break;
		case -1145519186:
			func_422(-150493654);
			func_422(-1271608261);
			func_422(1846061697);
			func_421(-1145519186);
			break;
		case 1766284049:
			func_422(280705402);
			func_422(1926308480);
			func_421(1766284049);
			break;
		case 280705402:
			func_422(1766284049);
			func_422(1926308480);
			func_421(280705402);
			break;
		case 1926308480:
			func_422(1766284049);
			func_422(280705402);
			func_421(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_422(439465264);
				func_421(1609506757);
			}
			else
			{
				func_422(1609506757);
				func_422(439465264);
			}
			break;
		case 439465264:
			if (func_425(1609506757))
			{
				if (bParam1)
				{
					func_421(439465264);
				}
				else
				{
					func_422(439465264);
				}
			}
			break;
		case 1822001510:
			func_422(-1612662716);
			func_421(1822001510);
			break;
		case -1612662716:
			func_422(1822001510);
			func_421(-1612662716);
			break;
		case 1306158345:
			func_422(1952610440);
			func_422(-223469678);
			func_422(-404698347);
			func_422(1517904467);
			func_421(1306158345);
			break;
		case 1952610440:
			func_422(1306158345);
			func_422(-223469678);
			func_422(-404698347);
			func_422(1517904467);
			func_421(1952610440);
			break;
		case -223469678:
			func_422(1306158345);
			func_422(1952610440);
			func_422(-404698347);
			func_422(1517904467);
			func_421(-223469678);
			break;
		case -404698347:
			func_422(1306158345);
			func_422(1952610440);
			func_422(-223469678);
			func_422(1517904467);
			func_421(-404698347);
			break;
		case 1517904467:
			func_422(1306158345);
			func_422(1952610440);
			func_422(-223469678);
			func_422(-404698347);
			func_421(1517904467);
			break;
		case 1376646519:
			func_422(931649776);
			func_422(-434590080);
			func_422(1743048395);
			func_422(449774763);
			func_421(1376646519);
			break;
		case 931649776:
			func_422(1376646519);
			func_422(-434590080);
			func_422(1743048395);
			func_422(449774763);
			func_421(931649776);
			break;
		case -434590080:
			func_422(1376646519);
			func_422(931649776);
			func_422(1743048395);
			func_422(449774763);
			func_421(-434590080);
			break;
		case 1743048395:
			func_422(1376646519);
			func_422(931649776);
			func_422(-434590080);
			func_422(449774763);
			func_421(1743048395);
			break;
		case 449774763:
			func_422(1376646519);
			func_422(931649776);
			func_422(-434590080);
			func_422(1743048395);
			func_421(449774763);
			break;
		case -1414537028:
			func_422(38162571);
			func_422(1350391819);
			func_422(54073871);
			func_421(-1414537028);
			break;
		case 38162571:
			func_422(-1414537028);
			func_422(1350391819);
			func_422(54073871);
			func_421(38162571);
			break;
		case 1350391819:
			func_422(-1414537028);
			func_422(38162571);
			func_422(54073871);
			func_421(1350391819);
			break;
		case 54073871:
			func_422(-1414537028);
			func_422(38162571);
			func_422(1350391819);
			func_421(54073871);
			break;
		case 198200492:
			func_421(198200492);
			func_422(-1124061431);
			func_422(52706132);
			func_422(-259123672);
			break;
		case -1124061431:
			func_422(198200492);
			func_421(-1124061431);
			func_422(52706132);
			func_422(-259123672);
			break;
		case 52706132:
			func_422(198200492);
			func_422(-1124061431);
			func_421(52706132);
			func_422(-259123672);
			break;
		case -259123672:
			func_422(198200492);
			func_422(-1124061431);
			func_422(52706132);
			func_421(-259123672);
			break;
		case -919512195:
			func_421(-919512195);
			func_422(-1925798111);
			func_422(420709909);
			func_422(1703426636);
			break;
		case -1925798111:
			func_421(-1925798111);
			func_422(-919512195);
			func_422(420709909);
			func_422(1703426636);
			break;
		case 420709909:
			func_421(420709909);
			func_422(-919512195);
			func_422(-1925798111);
			func_422(1703426636);
			break;
		case 1703426636:
			func_421(1703426636);
			func_422(-919512195);
			func_422(-1925798111);
			func_422(420709909);
			break;
		case -1223121209:
			func_421(-1223121209);
			func_422(630808005);
			break;
		case 630808005:
			func_421(630808005);
			func_422(-1223121209);
			break;
		case 1453909576:
			func_421(1453909576);
			func_422(1643531967);
			break;
		case 1643531967:
			func_421(1643531967);
			func_422(1453909576);
			break;
		case 0:
			func_421(0);
			func_422(473295046);
			func_422(-1738165526);
			break;
		case 473295046:
			func_421(473295046);
			func_422(0);
			func_422(-1738165526);
			break;
		case -1738165526:
			func_421(-1738165526);
			func_422(0);
			func_422(473295046);
			break;
		case 932909855:
			func_421(932909855);
			func_422(2051822093);
			break;
		case 2051822093:
			func_421(2051822093);
			func_422(932909855);
			break;
		case 405586984:
			func_421(405586984);
			func_422(1509509592);
			func_422(-959357075);
			func_422(-1311865656);
			break;
		case 1509509592:
			func_421(1509509592);
			func_422(405586984);
			func_422(-959357075);
			func_422(-1311865656);
			break;
		case -959357075:
			func_421(-959357075);
			func_422(1509509592);
			func_422(405586984);
			func_422(-1311865656);
			break;
		case -1311865656:
			func_421(-1311865656);
			func_422(1509509592);
			func_422(-959357075);
			func_422(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_421(-524145696);
			}
			else
			{
				func_422(-524145696);
			}
			func_422(1626481264);
			func_422(282809459);
			break;
		case 282809459:
			func_421(282809459);
			func_422(1626481264);
			func_422(-524145696);
			break;
		case 1626481264:
			func_421(1626481264);
			func_422(-524145696);
			func_422(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_421(885203519);
			}
			else
			{
				func_422(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_421(-1080627546);
			}
			else
			{
				func_422(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_425(iParam0))
				{
					func_421(iParam0);
				}
			}
			else if (func_425(iParam0))
			{
				func_422(iParam0);
			}
			break;
	}
}

void func_278(int iParam0)
{
	if (!func_426(iParam0))
	{
		func_428(func_427(iParam0));
	}
}

int func_279()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_426(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_280(int iParam0, int iParam1, int iParam2)
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510; /* GXTEntry: "Little Egret Plume" */
			iVar10 = -164081697; /* GXTEntry: "Reddish Egret Plume" */
			iVar11 = -1161319399; /* GXTEntry: "Snowy Egret Plume" */
			iVar12 = 728781265; /* GXTEntry: "Lady of the Night Orchid" */
			break;
		case 2:
			iVar9 = -222563712; /* GXTEntry: "Heron Plume" */
			iVar10 = 1794857344; /* GXTEntry: "Lady Slipper Orchid" */
			iVar11 = 1952409553; /* GXTEntry: "Moccasin Flower Orchid" */
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726; /* GXTEntry: "Acuna\'s Star Orchid" */
			iVar11 = -404270094; /* GXTEntry: "Cigar Orchid" */
			iVar12 = 2093126853; /* GXTEntry: "Ghost Orchid" */
			break;
		case 8:
			iVar9 = 2085530337; /* GXTEntry: "Spoonbill Plume" */
			iVar10 = -150591160; /* GXTEntry: "Night Scented Orchid" */
			iVar11 = -323969289; /* GXTEntry: "Rat Tail Orchid" */
			iVar12 = 1504361882; /* GXTEntry: "Spider Orchid" */
			break;
		case 16:
			iVar9 = -1521783510; /* GXTEntry: "Clamshell Orchid" */
			iVar10 = 1714875242; /* GXTEntry: "Dragon\'s Mouth Orchid" */
			iVar11 = 1019229063; /* GXTEntry: "Queen\'s Orchid" */
			iVar12 = 927763737; /* GXTEntry: "Sparrow\'s Egg Orchid" */
			break;
	}
	iVar1 = func_281(iVar9);
	iVar2 = func_281(iVar10);
	iVar3 = func_281(iVar11);
	iVar5 = func_282(iVar9);
	iVar6 = func_282(iVar10);
	iVar7 = func_282(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_281(iVar12);
		iVar8 = func_282(iVar12);
	}
	if (iParam0 == iVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 = (iVar0 + iVar5);
		}
		else
		{
			iVar0 = (iVar0 + (iVar1 + iParam1));
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iParam0 == iVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 = (iVar0 + iVar6);
		}
		else
		{
			iVar0 = (iVar0 + (iVar2 + iParam1));
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iParam0 == iVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 = (iVar0 + iVar7);
		}
		else
		{
			iVar0 = (iVar0 + (iVar3 + iParam1));
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iParam0 == iVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 = (iVar0 + iVar8);
			}
			else
			{
				iVar0 = (iVar0 + (iVar4 + iParam1));
			}
		}
		else if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_281(int iParam0)
{
	int iVar0;

	if (func_61(iParam0, 1, 0))
	{
		iVar0 = func_89(iParam0, 0, 0);
	}
	return iVar0;
}

int func_282(int iParam0)
{
	switch (iParam0)
	{
		case 281887510: /* GXTEntry: "Little Egret Plume" */
			return 5;
		case -164081697: /* GXTEntry: "Reddish Egret Plume" */
			return 5;
		case -1161319399: /* GXTEntry: "Snowy Egret Plume" */
			return 5;
		case 728781265: /* GXTEntry: "Lady of the Night Orchid" */
			return 15;
		case -222563712: /* GXTEntry: "Heron Plume" */
			return 20;
		case 1794857344: /* GXTEntry: "Lady Slipper Orchid" */
			return 7;
		case 1952409553: /* GXTEntry: "Moccasin Flower Orchid" */
			return 10;
		case 2116770557:
			return 25;
		case -651064726: /* GXTEntry: "Acuna\'s Star Orchid" */
			return 3;
		case -404270094: /* GXTEntry: "Cigar Orchid" */
			return 7;
		case 2093126853: /* GXTEntry: "Ghost Orchid" */
			return 5;
		case 2085530337: /* GXTEntry: "Spoonbill Plume" */
			return 30;
		case -150591160: /* GXTEntry: "Night Scented Orchid" */
			return 5;
		case -323969289: /* GXTEntry: "Rat Tail Orchid" */
			return 10;
		case 1504361882: /* GXTEntry: "Spider Orchid" */
			return 5;
		case -1521783510: /* GXTEntry: "Clamshell Orchid" */
			return 5;
		case 1714875242: /* GXTEntry: "Dragon\'s Mouth Orchid" */
			return 5;
		case 1019229063: /* GXTEntry: "Queen\'s Orchid" */
			return 5;
		case 927763737: /* GXTEntry: "Sparrow\'s Egg Orchid" */
			return 10;
		default:
			break;
	}
	return 0;
}

int func_283(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_284(int iParam0, int iParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, iParam1);
}

int func_285(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_373(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_286(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_285(iParam1, 5) || iParam0 == func_285(iParam1, 6)) || iParam0 == func_285(iParam1, 7)) || iParam0 == func_285(iParam1, 8)) || iParam0 == func_285(iParam1, 9))
	{
		func_276(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_103(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_105(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_287(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((iParam0 == func_285(iParam1, 5) || iParam0 == func_285(iParam1, 6)) || iParam0 == func_285(iParam1, 7)) || iParam0 == func_285(iParam1, 8)) || iParam0 == func_285(iParam1, 9))
	{
		if (func_276(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_103(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_105(51, 0, 0, iVar0, func_225(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_103(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_105(51, 0, 0, iVar0, func_225(iParam1, 20), 1, 0);
			}
		}
	}
}

int func_288()
{
	if (func_223(((*Global_1347702)[37 /*49*/])->f_15) && Global_1392388->f_7)
	{
		return 1;
	}
	return 0;
}

void func_289(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_290(int iParam0)
{
	if (!func_429(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_291(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

void func_292(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870: /* GXTEntry: "Revolver Cartridges - Regular" */
			*iParam1 = 1802325493;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case -1202134084: /* GXTEntry: "Opened Revolver Cartridges" */
			*iParam1 = -864693164;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case 1297050066: /* GXTEntry: "Revolver Cartridges - Express" */
			*iParam1 = -603289736;
			*uParam2 = 1232099469; /* GXTEntry: "Revolver Cartridges - Express" */
			break;
		case -1780177928: /* GXTEntry: "Revolver Cartridges - High Velocity" */
			*iParam1 = -1803237008;
			*uParam2 = -2084181920; /* GXTEntry: "Revolver Cartridges - High Velocity" */
			break;
		case -1467836497: /* GXTEntry: "Pistol Cartridges - Regular" */
			*iParam1 = -1175521284;
			*uParam2 = joaat("ammo_pistol");
			break;
		case 1723805622: /* GXTEntry: "Opened Pistol Cartridges" */
			*iParam1 = -1559549888;
			*uParam2 = joaat("ammo_pistol");
			break;
		case -153287664: /* GXTEntry: "Pistol Cartridges - Express" */
			*iParam1 = -1650796693;
			*uParam2 = 836939099; /* GXTEntry: "Pistol Cartridges - Express" */
			break;
		case 1845082736: /* GXTEntry: "Pistol Cartridges - High Velocity" */
			*iParam1 = -1521597660;
			*uParam2 = -1411815376; /* GXTEntry: "Pistol Cartridges - High Velocity" */
			break;
		case 406755377: /* GXTEntry: "Rifle Cartridges - Regular" */
			*iParam1 = -1288829256;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 1469029564: /* GXTEntry: "Opened Rifle Cartridges" */
			*iParam1 = 1393841762;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 45760211: /* GXTEntry: "Rifle Cartridges - Express" */
			*iParam1 = -851229814;
			*uParam2 = 1654725195; /* GXTEntry: "Rifle Cartridges - Express" */
			break;
		case -276295943: /* GXTEntry: "Rifle Cartridges - High Velocity" */
			*iParam1 = 914704115;
			*uParam2 = 1858824185; /* GXTEntry: "Rifle Cartridges - High Velocity" */
			break;
		case -2029793397: /* GXTEntry: "Repeater Cartridges - Regular" */
			*iParam1 = -219896679;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case 2120467495:
			*iParam1 = 516838334;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case -2075613923: /* GXTEntry: "Repeater Cartridges - Express" */
			*iParam1 = -385817936;
			*uParam2 = -578347576; /* GXTEntry: "Repeater Cartridges - Express" */
			break;
		case 122656217: /* GXTEntry: "Repeater Cartridges - High Velocity" */
			*iParam1 = 1192843172;
			*uParam2 = 231465488; /* GXTEntry: "Repeater Cartridges - High Velocity" */
			break;
		case 2107187484: /* GXTEntry: "Shotgun Shells - Regular" */
			*iParam1 = 954871696;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case -791844268: /* GXTEntry: "Opened Shotgun Shells" */
			*iParam1 = -1217273132;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case 305770744: /* GXTEntry: "Shotgun - Slug" */
			*iParam1 = -2087227528;
			*uParam2 = 314966081; /* GXTEntry: "Shotgun - Slug" */
			break;
		case 550900979: /* GXTEntry: "Rifle Cartridges - Varmint" */
			*iParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

int func_293(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_430(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_294(int iParam0, int iParam1)
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
		case -1506259487:
			return 5;
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

int func_295(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_431();
	if (iParam2 == 39)
	{
		Var0 = { func_208(iParam0, 1, 0) };
		iParam2 = func_294(func_293(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_31(iParam0, 866047851) && func_410(&(Global_1946804->f_1378)) >= 2)
	{
		return 0;
	}
	if ((func_298(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2 /*11*/])
	{
		func_432(func_430(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_433(iParam2);
	func_434(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && (Global_1946804->f_57[iParam2 /*11*/])->f_1 > 1)
	{
		func_435(Global_1946804->f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_435(Global_1946804->f_1497.f_1[iParam2 /*3*/], 4, 6);
	}
	func_436(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2 /*3*/] = iParam0;
	(Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1 = func_437(iParam0, iParam2, iParam1, func_113() != -1);
	if (bParam4)
	{
		func_438(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_438(&(Global_1946804->f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804->f_2589)
		{
			if (&Global_1946804->f_2589.f_2[iVar6 /*2*/] >= 0 && &Global_1946804->f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				(Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/])->f_1 = 0;
				func_439(func_430(&(Global_1946804->f_2589.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

void func_296(bool bParam0, bool bParam1, bool bParam2)
{
	func_440(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_297(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_441(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_442(Var0);
}

bool func_298(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_299()
{
	func_443(&(Global_1946804->f_2776));
	func_444(32768);
	func_439(1108822547, 8, 6);
}

int func_300(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_294(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/] || &Global_1946804->f_1378.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_301(int iParam0)
{
	struct<4> Var0;

	if (func_445(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_446(Var0);
}

void func_302(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_446(Var0);
}

int func_303(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_215(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_304(var uParam0, int iParam1, int iParam2, int iParam3)
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

float func_305()
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

	if (func_447())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_448(2);
	}
	if (Global_1347477->f_119)
	{
		return func_448(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_449();
	fVar2 = func_450();
	fVar3 = func_451();
	fVar4 = func_452();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_453()));
	fVar7 = (func_448(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_454(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_455(3, fVar9, fVar9 > 100f);
	return func_456(fVar7, -100f, 100f);
}

float func_306()
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

	if (func_447())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_448(1);
	}
	if (Global_1347477->f_119)
	{
		return func_448(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_449();
	fVar2 = func_450();
	fVar3 = func_451();
	fVar4 = func_452();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_453()));
	fVar7 = (func_448(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_454(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_455(2, fVar9, fVar9 > 100f);
	return func_456(fVar7, -100f, 100f);
}

float func_307()
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

	if (func_447())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_448(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_457())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_458())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_448(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_449();
	fVar2 = func_450();
	fVar3 = func_451();
	fVar4 = func_452();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_453()));
	fVar7 = (func_448(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_454(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_455(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_0x0317C947D062854E(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_448(0);
	}
	return func_456(fVar7, -100f, 100f);
}

bool func_308(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_309(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_310(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_73(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_212(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_115(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_215(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_311(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946804->f_2657.f_21;
		case 81053684:
			return Global_1946804->f_2657.f_23;
		case -525676072:
			return Global_1946804->f_2657.f_22;
		case -1719060085:
			return Global_1946804->f_2657.f_24;
		case -413129408:
			return Global_1946804->f_2657.f_25;
		case -999503751:
			if (bParam1)
			{
				return Global_1946804->f_2657.f_20;
			}
			else
			{
				return func_459();
			}
			break;
	}
	return 0;
}

int func_312(int iParam0)
{
	switch (iParam0)
	{
		case 439606975: /* GXTEntry: "Fancy Suit" */
			return 14;
		case 1661121390: /* GXTEntry: "The Gunslinger" */
			return 6;
		case 1164374808: /* GXTEntry: "Winter Outfit" */
			return 7;
		case 624063935: /* GXTEntry: "The Summer Gunslinger" */
			return 9;
		case -1476781101: /* GXTEntry: "Island Outfit" */
			return 10;
		case 1560492757: /* GXTEntry: "Robbery Outfit" */
			return 15;
		case -769081407: /* GXTEntry: "The Wittemore" */
			return 16;
		case 688004210: /* GXTEntry: "Police Outfit" */
			return 20;
		case 166243423: /* GXTEntry: "Custom Outfit" */
			return 0;
		case -1826731591: /* GXTEntry: "Brawler\'s Outfit" */
			return 24;
		case 2119049229:
			return 25;
		case 1352942778: /* GXTEntry: "The Rebel" */
			return 26;
		case 1964379549: /* GXTEntry: "The Innocent" */
			return 27;
		case 1201189539: /* GXTEntry: "The Pursuer" */
			return 28;
		case 1351927599: /* GXTEntry: "The Grizzlies Outlaw" */
			return 21;
		case 2032023096: /* GXTEntry: "The Nuevo Paraiso" */
			return 22;
		case 1784889667:
			return 13;
		case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
			return 8;
		case 1383300684: /* GXTEntry: "Saved Custom Outfit One" */
			return 1;
		case 2051441678: /* GXTEntry: "Saved Custom Outfit Two" */
			return 2;
		case 162509669: /* GXTEntry: "Saved Custom Outfit Three" */
			return 3;
		case 635948769: /* GXTEntry: "Saved Custom Outfit Four" */
			return 4;
		case 274995506: /* GXTEntry: "Saved Custom Outfit Five" */
			return 5;
		case 1902428294: /* GXTEntry: "The Wittemore" */
			return 17;
		case -2114499732:
			return 18;
		case 800827126:
			return 19;
		case 294553332: /* GXTEntry: "Island Outfit" */
			return 11;
		case 1788874135: /* GXTEntry: "Island Outfit Shackles" */
			return 12;
		case -1243402388:
			return 66;
		case 65931886:
			return 67;
		case 1371678229:
			return 68;
		case 2102263084:
			return 69;
		case -272211555: /* GXTEntry: "The Homesteader" */
			return 61;
		case -55563408:
			return 64;
		case -1914506115:
			return 71;
		case 802495462:
			return 75;
		case 842905332:
			return 77;
		case 1511551084:
			return 79;
		case -1725704631:
			return 81;
		case 1257427489:
			return 83;
		case -659341240:
			return 85;
		case 2038771525:
			return 87;
		case -535599244:
			return 89;
		case -389591806:
			return 73;
		case -1205612021: /* GXTEntry: "The Winter Cowboy" */
			return 70;
		case 890706995: /* GXTEntry: "The Cowhand" */
			return 93;
		case 1156438275: /* GXTEntry: "The Rancher" */
			return 90;
		case -1611873049: /* GXTEntry: "The Rancher" */
			return 91;
		case 594312243:
			return 92;
		case -978578725:
			return 94;
		case -361635024: /* GXTEntry: "The Cowboy" */
			return 62;
		case -1951220140:
			return 78;
		case 1460520700:
			return 76;
		case 523337834:
			return 80;
		case -19271249:
			return 82;
		case 214175524:
			return 84;
		case -1303643297:
			return 86;
		case 411856831:
			return 88;
		case -926815459:
			return 72;
		case -1300731953:
			return 74;
		case -409616653: /* GXTEntry: "The Homesteader" */
			return 65;
		case 509954990: /* GXTEntry: "The Chevalier" */
			return 29;
		case -445916744: /* GXTEntry: "The Heartlands" */
			return 30;
		case -866249154: /* GXTEntry: "The Gambler" */
			return 31;
		case -2077063704: /* GXTEntry: "The Earl" */
			return 32;
		case 205207539: /* GXTEntry: "The McLaughlin" */
			return 33;
		case -1033657275: /* GXTEntry: "The Josiah" */
			return 34;
		case 1806002837: /* GXTEntry: "The Farrier" */
			return 35;
		case 705324896: /* GXTEntry: "The Donegal" */
			return 36;
		case -1541763703: /* GXTEntry: "The Bulldogger" */
			return 37;
		case 387052410: /* GXTEntry: "The Ranch Hand" */
			return 38;
		case -361288914: /* GXTEntry: "The Scrapper" */
			return 39;
		case -911054515: /* GXTEntry: "The Armadillo" */
			return 40;
		case 1084200963: /* GXTEntry: "The Valentine" */
			return 41;
		case 1847948074: /* GXTEntry: "The Vaquero" */
			return 42;
		case -1212526764: /* GXTEntry: "The Dewberry Creek" */
			return 43;
		case 1851440270: /* GXTEntry: "The Clairmont" */
			return 44;
		case -2028985700: /* GXTEntry: "The Roscoe" */
			return 45;
		case 1074435214: /* GXTEntry: "The Estate Boss" */
			return 46;
		case -883015675: /* GXTEntry: "The Drover" */
			return 47;
		case -1047155604: /* GXTEntry: "The Calumet" */
			return 48;
		case 1123231221: /* GXTEntry: "The Cowpuncher" */
			return 49;
		case 1866989210: /* GXTEntry: "The Tumbleweed" */
			return 50;
		case 478183719: /* GXTEntry: "The Drifter" */
			return 51;
		case -1698955868: /* GXTEntry: "The Leatherman" */
			return 52;
		case -2029378634: /* GXTEntry: "The Cumberland" */
			return 53;
		case 1339864416: /* GXTEntry: "The Millesani" */
			return 54;
		case 890998115: /* GXTEntry: "The Faulkton" */
			return 55;
		case -1376288999: /* GXTEntry: "The Dolton" */
			return 56;
		case -1041123771: /* GXTEntry: "The Corson" */
			return 57;
		case 1389254668: /* GXTEntry: "The Saint Denis" */
			return 58;
		case -346112633: /* GXTEntry: "The Deauville" */
			return 59;
		case 773309172: /* GXTEntry: "The Bretagne" */
			return 60;
		case -291256376:
			return 23;
		default:
			break;
	}
	return -1;
}

int func_313(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return 0;
	}
	return 1;
}

void func_314(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_313(iParam0))
	{
		return;
	}
	if (func_460(iParam0))
	{
		return;
	}
	if (!func_461(iParam0))
	{
		func_462(iParam0, 1, 0);
	}
	iVar0 = func_463(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_464(iParam0, 512))
		{
			func_297(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_465() && !bParam1) && !func_50(0, 0, 1))
	{
		func_466(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_DONE", MISC::_CREATE_VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_467(iParam0, 6);
	if (bParam2)
	{
		if (!func_50(0, 0, 1))
		{
			func_219(1, 4);
		}
	}
}

int func_315()
{
	return Global_1946804->f_1;
}

bool func_316(int iParam0, bool bParam1)
{
	return func_311(iParam0, 0) < func_468(iParam0, bParam1);
}

int func_317(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_110(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_318(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_294(iParam0, 1) /*3*/] != &Global_1946804->f_57[func_294(iParam0, 1) /*11*/];
}

void func_319(int iParam0, int iParam1)
{
	if (func_31(iParam1, 130796156))
	{
		func_469(iParam1, 0);
	}
	else if (func_31(iParam1, 930141731))
	{
		func_469(iParam1, 1);
		func_470(iParam0);
	}
}

void func_320(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_1[iVar0] == iParam1)
		{
			return;
		}
		if ((((iParam1 == 617531372 && &uParam0->f_1[iVar0] == 291123060) || (iParam1 == 291123060 && &uParam0->f_1[iVar0] == 617531372)) || (iParam1 == 1356624740 && &uParam0->f_1[iVar0] == 1884295263)) || (iParam1 == 1884295263 && &uParam0->f_1[iVar0] == 1356624740))
		{
			uParam0->f_1[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_321(int iParam0, var uParam1, var uParam2, int iParam3)
{
	var uVar0;
	struct<14> Var1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_471(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_472(uParam2, iParam0, Var1);
	return 1;
}

struct<2> func_322(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

int func_323(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_324(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_325(int iParam0)
{
	var uVar0;

	if (!func_176(iParam0, &uVar0, joaat("inventory"), 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

var func_326(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_473(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_327()
{
	return !&Global_1911774;
}

void func_328(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	Global_1911774->f_4[Global_1911774->f_3 /*4*/] = iParam0;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_1 = iParam1;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_2 = bParam2;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_3 = bParam3;
	if (Global_1911774->f_3 < 20)
	{
		Global_1911774->f_3++;
	}
}

char* func_329(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_330(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var3.f_2[iVar0 /*3*/])))
			{
				Jump @227; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY((Var3.f_2[iVar0 /*3*/])->f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(&(Var3.f_2[iVar0 /*3*/]));
				iVar2 = MISC::GET_HASH_KEY((Var3.f_2[iVar0 /*3*/])->f_1);
				if (iParam2 != 0 && (Var3.f_2[iVar0 /*3*/])->f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { *(Var3.f_2[iVar0 /*3*/]) };
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

char* func_331(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_332(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_474(uParam0->f_9))
		{
			return 0;
		}
	}
	if (!func_475(uParam0->f_4))
	{
		return 0;
	}
	if (!func_476(uParam0->f_4, iParam1, 0))
	{
		return 0;
	}
	if (!func_477(uParam0->f_4))
	{
		return 0;
	}
	if (func_478(0))
	{
		if (!func_73(uParam0->f_4, 0) || uParam0->f_11 <= 0)
		{
			return 0;
		}
	}
	if (Global_1935689->f_10190 == 0 && !func_479())
	{
		func_480(uParam0->f_4);
	}
	return 1;
}

int func_333(int iParam0, int iParam1)
{
	switch (func_69(iParam1, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			if (Global_1935689->f_10189 != 1061777683 || func_69(iParam0, 1224357681) == func_69(iParam1, 1224357681))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_334(var uParam0)
{
	struct<5> Var0;

	if (func_70(uParam0->f_4))
	{
		if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(*uParam0, &Var0))
		{
			uParam0->f_5.f_2 = Var0.f_4;
		}
	}
}

void func_335(int iParam0)
{
	int iVar0;
	int iVar1;

	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 2 == 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (func_481(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar1])))
			{
				func_483(&iVar0, func_482(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar1])));
			}
			iVar1++;
		}
		if (iVar0 == 0)
		{
			func_484(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 2);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
		{
			if (func_486(iVar0, ((*Global_1347702)[iParam0 /*49*/])->f_15, 1, ((*Global_1347702)[iParam0 /*49*/])->f_27, func_485()))
			{
				func_484(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 2);
			}
		}
		else
		{
			func_484(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 2);
		}
	}
}

int func_336(int iParam0)
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

int func_337(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_338(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 81);
}

void func_339(int iParam0, bool bParam1)
{
	if (!func_47(iParam0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		func_487(&(((*Global_1347702)[iParam0 /*49*/])->f_14));
		func_488(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 16);
		func_489(iParam0);
		if ((!func_490(PLAYER::PLAYER_ID(), 1, 0, 1) || Global_43890) || bParam1)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			_NAMESPACE71::_0x2F901291EF177B02(((*Global_1347702)[iParam0 /*49*/])->f_40, 0);
			func_488(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 4096);
			func_491(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
		}
		else
		{
			func_492(iParam0, 16384);
			func_493(iParam0, 1, func_340(iParam0));
		}
	}
}

Vector3 func_340(int iParam0)
{
	vector3 vVar0;

	if (!func_47(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_494(iParam0, &vVar0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_24 = { vVar0 };
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_24;
}

void func_341(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3[24];
	char* sVar6;

	if (!func_47(iParam0))
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 256 != 0 && func_50(0, 0, 1))
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 16 != 0)
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_36 == 0)
	{
		return;
	}
	if (func_371(32768))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		return;
	}
	((*Global_1347702)[iParam0 /*49*/])->f_38 = func_495(iParam0);
	if (!bParam5 && func_496(iParam0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_37 = MAP::_0x45F13B7E0A15C880(((*Global_1347702)[iParam0 /*49*/])->f_38, func_497(iParam0), ((*Global_1347702)[iParam0 /*49*/])->f_18);
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(((*Global_1347702)[iParam0 /*49*/])->f_37, ((*Global_1347702)[iParam0 /*49*/])->f_36, true);
	}
	else
	{
		((*Global_1347702)[iParam0 /*49*/])->f_37 = MAP::_0x554D9D53F696D002(((*Global_1347702)[iParam0 /*49*/])->f_38, vParam1);
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(((*Global_1347702)[iParam0 /*49*/])->f_37, ((*Global_1347702)[iParam0 /*49*/])->f_36, true);
	}
	if (iParam0 == 61)
	{
		func_498(8);
	}
	else if (iParam0 == 62)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_THOMAS_DOWNES");
	}
	else if (iParam0 == 95)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, 838722941);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RHMRB");
	}
	else if (iParam0 == 42)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCFSH");
	}
	else if (iParam0 == 40)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCDIN");
	}
	else if (iParam0 == 50)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCRKF");
	}
	else if ((((iParam0 == 44 || iParam0 == 45) || iParam0 == 46) || iParam0 == 47) || iParam0 == 48)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCEXO");
	}
	func_499(iParam0);
	MAP::SET_BLIP_FLASH_TIMER(((*Global_1347702)[iParam0 /*49*/])->f_37, 64, iParam0);
	if (func_113() == -1)
	{
		func_500(iParam0);
		iVar0 = func_501(Global_40.f_4283);
		if (func_502(iVar0) && func_503(((*Global_1888801)[iVar0 /*35*/])->f_13))
		{
			bVar1 = true;
			bVar2 = func_504(iVar0);
		}
		if (func_505(iParam0, bVar1, iVar0))
		{
			func_506(((*Global_1347702)[iParam0 /*49*/])->f_15, bVar2, bVar1, iVar0);
		}
	}
	if (bParam4)
	{
		if (HUD::_0x66F35DD9D2B58579() || CAM::IS_SCREEN_FADED_OUT())
		{
			return;
		}
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 1 == 0)
	{
		func_484(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 1);
		if (((!func_496(iParam0) || func_179(((*Global_1347702)[iParam0 /*49*/])->f_12, 1)) || func_179(((*Global_1347702)[iParam0 /*49*/])->f_12, 512)) || func_507(((*Global_1347702)[iParam0 /*49*/])->f_13, 2048))
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, 580546400);
		}
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32768 == 0)
	{
		if ((((*Global_1347702)[iParam0 /*49*/])->f_36 == -1822497728 && ((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 == 0) && ((*Global_1347702)[iParam0 /*49*/])->f_12 & 2 != 0)
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, -211388321);
		}
		else
		{
			func_484(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32768);
		}
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 8 != 0 && Global_40.f_490.f_402[iParam0] & 2 == 0)
	{
		if (func_508(iParam0))
		{
			if (iParam0 == 97)
			{
				func_96(185, 0);
			}
			else
			{
				func_96(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {((*Global_1347702)[iParam0 /*49*/])->f_3}, 3);
			StringConCat(&cVar3, "_FIRST", 24);
			sVar6 = ((*Global_1347702)[iParam0 /*49*/])->f_37;
			((*Global_1347702)[iParam0 /*49*/])->f_40 = func_466(MISC::_CREATE_VAR_STRING(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		func_51(iParam0, 2);
	}
}

bool func_342(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_343(int iParam0)
{
	return ((*Global_1835011)[iParam0 /*74*/])->f_1;
}

int func_344(int iParam0)
{
	if (!func_183(iParam0))
	{
		return -1;
	}
	return func_509(iParam0);
}

void func_345(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	var uVar0;

	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1, func_510(iParam0));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, "style", func_511(iParam0));
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar0, "isVisible", bParam2);
	if (bParam2)
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, "text", iParam3);
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, "text", 0);
	}
}

void func_346(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (*uParam2 < 7)
	{
		uParam1->f_64[*uParam2] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_63, func_512(iParam0, *uParam2));
		DATABINDING::_DATABINDING_ADD_DATA_HASH(&(uParam1->f_64[*uParam2]), "text", *uParam1);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(&(uParam1->f_64[*uParam2]), "style", iParam3);
		*uParam2++;
	}
}

int func_347(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_73(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

struct<4> func_348(bool bParam0)
{
	return func_246(joaat("character"), func_513(), -1591664384, bParam0);
}

struct<4> func_349(bool bParam0)
{
	int iVar0;

	iVar0 = func_215(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_246(923904168, func_348(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_246(923904168, func_348(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_246(923904168, func_348(bParam0), -740156546, 0);
}

int func_350(int iParam0, bool bParam1)
{
	if (func_110(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_210(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_351(bool bParam0)
{
	int iVar0;

	iVar0 = func_215(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_246(271701509, func_348(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_246(271701509, func_348(bParam0), 12999093, 0);
}

int func_352(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_110(iParam0);
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

int func_353(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_215(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_354(int iParam0)
{
	if (!func_73(*iParam0, 0))
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

int func_355(int iParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;

	if (!func_73(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_208(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_243((375 + iVar29), 1);
		if (func_244(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_245(iParam0, &Var6, iVar5);
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

int func_356(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_73(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_246(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_215(bParam6), &Var0, 0);
	return uVar4;
}

struct<14> func_357(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_358(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_359(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_215(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_360(int iParam0)
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

float func_361(int iParam0)
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
			return func_514(iParam0);
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
			return func_514(iParam0);
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
			return func_514(iParam0);
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

int func_362(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_108(18);
		case 2:
			return func_108(20);
		case 1:
			return func_108(19);
		default:
			break;
	}
	return 1;
}

int func_363(int iParam0)
{
	return func_515(&(Global_40.f_11095.f_11[iParam0]));
}

void func_364(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_113() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_108(31))
	{
		return;
	}
	iVar0 = func_363(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_363(iParam0);
	if (func_516(iParam0) && func_517(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_518(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_519(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_96(func_520(iParam0), 0);
					}
					func_521(iParam0, iVar2, iVar3);
					func_522(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_365(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_366(int iParam0)
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

void func_367(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_368(int iParam0, int iParam1)
{
	if (func_113() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_369(int iParam0)
{
	if (func_113() != -1)
	{
		if (func_308(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_308(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_370(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_308(iParam0, 65536) && !func_308(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_308(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_308(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_371(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_372()
{
	return Global_1905944->f_5694;
}

int func_373(int iParam0, var uParam1)
{
	if (!func_523(iParam0))
	{
		return 0;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return 0;
	}
	return 1;
}

int func_374()
{
	return func_524(Global_40.f_12018);
}

int func_375()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_224(iVar1);
		if (func_61(iVar2, 1, 0) || func_381(func_380(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_376()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_525(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_377()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_386(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_378()
{
	return COLLECTION::_0x3A65F4844913A047(2103522376, 0);
}

int func_379(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588 /* GXTEntry: "Cigarette Cards Famous Gunslingers" */;
		case 1:
			return -1021394391 /* GXTEntry: "Cigarette Cards Artists & Poets" */;
		case 2:
			return -987306668 /* GXTEntry: "Cigarette Cards Vistas of America" */;
		case 3:
			return -1028735103 /* GXTEntry: "Cigarette Cards Gems Of Beauty" */;
		case 4:
			return 515229791 /* GXTEntry: "Cigarette Cards Flora of America" */;
		case 5:
			return -1230863414 /* GXTEntry: "Cigarette Cards Stars of the Stage" */;
		case 6:
			return 232875659 /* GXTEntry: "Cigarette Cards Fauna of North America" */;
		case 7:
			return 1423129537 /* GXTEntry: "Cigarette Cards Marvels of Travel" */;
		case 8:
			return -435742319 /* GXTEntry: "Cigarette Cards The World\'s Champions" */;
		case 9:
			return -1854702679 /* GXTEntry: "Cigarette Cards Amazing Inventions" */;
		case 10:
			return 1265323898 /* GXTEntry: "Cigarette Cards Breeds of Horses" */;
		case 11:
			return -479775696 /* GXTEntry: "Cigarette Cards Prominent Americans" */;
		default:
			break;
	}
	return 0;
}

int func_380(int iParam0)
{
	switch (iParam0)
	{
		case -1230863414: /* GXTEntry: "Cigarette Cards Stars of the Stage" */
			return 1;
		case -1021394391: /* GXTEntry: "Cigarette Cards Artists & Poets" */
			return 8;
		case 232875659: /* GXTEntry: "Cigarette Cards Fauna of North America" */
			return 4;
		case -1028735103: /* GXTEntry: "Cigarette Cards Gems Of Beauty" */
			return 16;
		case 554799588: /* GXTEntry: "Cigarette Cards Famous Gunslingers" */
			return 32;
		case 1265323898: /* GXTEntry: "Cigarette Cards Breeds of Horses" */
			return 64;
		case -1854702679: /* GXTEntry: "Cigarette Cards Amazing Inventions" */
			return 128;
		case -987306668: /* GXTEntry: "Cigarette Cards Vistas of America" */
			return 256;
		case -479775696: /* GXTEntry: "Cigarette Cards Prominent Americans" */
			return 2;
		case 515229791: /* GXTEntry: "Cigarette Cards Flora of America" */
			return 512;
		case -435742319: /* GXTEntry: "Cigarette Cards The World\'s Champions" */
			return 1024;
		case 1423129537: /* GXTEntry: "Cigarette Cards Marvels of Travel" */
			return 2048;
		default:
			break;
	}
	return 0;
}

bool func_381(var uParam0)
{
	return (Global_40.f_12018 && uParam0) != 0;
}

char* func_382(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
		case 1:
			return "COL_DB_SEND";
		case 2:
			return "COL_DB_COLLECT";
		default:
			break;
	}
	return "";
}

int func_383(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
		case 3:
			return 8;
		case 4:
			return 9;
		default:
			break;
	}
	return 5;
}

int func_384(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 16;
		case 2:
			return 17;
		case 3:
			return 18;
		case 4:
			return 19;
		default:
			break;
	}
	return 15;
}

char* func_385(int iParam0)
{
	switch (iParam0)
	{
		case 281887510: /* GXTEntry: "Little Egret Plume" */
			return "COL_EP_LITTLE_FOUND";
		case -164081697: /* GXTEntry: "Reddish Egret Plume" */
			return "COL_EP_REDDISH_FOUND";
		case -1161319399: /* GXTEntry: "Snowy Egret Plume" */
			return "COL_EP_SNOWY_FOUND";
		case 728781265: /* GXTEntry: "Lady of the Night Orchid" */
			return "COL_RO_LADY_OF_NIGHT_FOUND";
		case -222563712: /* GXTEntry: "Heron Plume" */
			return "COL_HF_FOUND";
		case 1794857344: /* GXTEntry: "Lady Slipper Orchid" */
			return "COL_RO_LADY_SLIPPER_FOUND";
		case 1952409553: /* GXTEntry: "Moccasin Flower Orchid" */
			return "COL_RO_MOCCASIN_FOUND";
		case 2116770557:
			return "COL_GF_FOUND";
		case -651064726: /* GXTEntry: "Acuna\'s Star Orchid" */
			return "COL_RO_ACUNAS_STAR_FOUND";
		case -404270094: /* GXTEntry: "Cigar Orchid" */
			return "COL_RO_CIGAR_FOUND";
		case 2093126853: /* GXTEntry: "Ghost Orchid" */
			return "COL_RO_GHOST_FOUND";
		case 2085530337: /* GXTEntry: "Spoonbill Plume" */
			return "COL_SF_FOUND";
		case -150591160: /* GXTEntry: "Night Scented Orchid" */
			return "COL_RO_NIGHT_SCENTED_FOUND";
		case -323969289: /* GXTEntry: "Rat Tail Orchid" */
			return "COL_RO_RAT_TAIL_FOUND";
		case 1504361882: /* GXTEntry: "Spider Orchid" */
			return "COL_RO_SPIDER_FOUND";
		case -1521783510: /* GXTEntry: "Clamshell Orchid" */
			return "COL_RO_CLAMSHELL_FOUND";
		case 1714875242: /* GXTEntry: "Dragon\'s Mouth Orchid" */
			return "COL_RO_DRAGONS_FOUND";
		case 1019229063: /* GXTEntry: "Queen\'s Orchid" */
			return "COL_RO_QUEENS_FOUND";
		case 927763737: /* GXTEntry: "Sparrow\'s Egg Orchid" */
			return "COL_RO_SPARROWS_FOUND";
		default:
			break;
	}
	return "";
}

bool func_386(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_387(int iParam0)
{
	switch (iParam0)
	{
		case -1865241121:
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		case 2117142684:
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		case -1409326024:
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		case -641744968:
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		case -946988203:
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		case -646136018:
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		case -955835837:
			return "PROVISION_FISH_PERCH_LEGENDARY";
		case -179276075:
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		case -492711560:
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		case 1764383959:
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		case 317501533:
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		case 817753087:
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
		case 576606016:
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		default:
			break;
	}
	return "";
}

char* func_388(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
		case 1:
			return "COL_RC_SEND";
		case 2:
			return "COL_RC_COLLECT";
		default:
			break;
	}
	return "";
}

int func_389(int iParam0)
{
	if (func_526(iParam0) && func_61(iParam0, 1, 0))
	{
		return 1;
	}
	else if (func_527(iParam0) && func_528(iParam0))
	{
		return 1;
	}
	return 0;
}

char* func_390(int iParam0)
{
	if (!func_73(iParam0, 0))
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(func_156(iParam0));
}

int func_391(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

int func_392(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

void func_393(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 1);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 0);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, 1);
	}
}

void func_394(int iParam0)
{
	int iVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1955569->f_5.f_1))
	{
		return;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1955569->f_5.f_1) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1955569->f_5.f_1, iParam0);
		if (iVar0 == &Global_1955569->f_5.f_2[iParam0 /*36*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1955569->f_5.f_1, iParam0, "pause_info_panel_list", &(Global_1955569->f_5.f_2[iParam0 /*36*/]));
}

void func_395(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
}

void func_396(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
}

void func_397(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
}

void func_398(bool bParam0)
{
	int iVar0;

	iVar0 = 398076311;
	if (bParam0)
	{
		HUD::_0x4CC5F2FC1332577F(iVar0);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(iVar0);
	}
}

void func_399(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 50;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

void func_400(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 49;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

int func_401(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_294(iParam0, 1) /*3*/]);
}

void func_402()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1526891582))
	{
		func_529();
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1526891582, true);
		func_114(joaat("weapon_revolver_cattleman_john"));
		func_162(joaat("weapon_revolver_cattleman_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman_john"), true, 2, false, false);
		func_114(joaat("weapon_melee_knife_john"));
		func_162(joaat("weapon_melee_knife_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife_john"), true, 4, false, false);
	}
}

int func_403(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_215(0);
	*uParam1 = { func_246(iParam0, func_349(0), iParam3, 0) };
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

int func_404(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_405(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_406()
{
	return &Global_1899515;
}

void func_407(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_530(*iParam0);
	iVar1 = func_531(*iParam0);
	iVar2 = func_532(*iParam0);
	iVar3 = func_533(*iParam0);
	iVar4 = func_534(*iParam0);
	iVar5 = func_535(*iParam0);
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
	iVar6 = func_536(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_536(iVar1, iVar0);
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
	func_537(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_408(int iParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(iParam0);
}

int func_409(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_208(iParam0, 1, 0) };
	return func_293(Var0.f_4);
}

int func_410(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_31(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_31(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_31(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_31(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_31(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_31(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

int func_411(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_294(func_538(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_110(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return 1;
		}
	}
	*uParam1 = 0;
	return 0;
}

int func_412(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == &Global_1946804->f_57[func_294(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_298(524288))
	{
		switch (iParam1)
		{
			case 673166414:
				iVar0++;
				break;
			case -207860920:
				iVar0++;
				break;
		}
	}
	iVar0 = (iVar0 + PED::_0x31B2E7F2E3C58B89(iParam0, joaat("base"), iParam2, bParam3));
	return iVar0;
}

int func_413(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_539(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_414(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 968830139 /* GXTEntry: "Legendary Beaver Tooth" */;
		case 1:
			return -649219937 /* GXTEntry: "Legendary Tatanka Bison Horn" */;
		case 2:
			return -858567048 /* GXTEntry: "Legendary Buck Antler" */;
		case 3:
			return -718162726 /* GXTEntry: "Legendary Cougar Fang" */;
		case 4:
			return -1284282080 /* GXTEntry: "Legendary Coyote Fang" */;
		case 5:
			return -725003445 /* GXTEntry: "Legendary Elk Antler" */;
		case 6:
			return -1445630104 /* GXTEntry: "Legendary Fox Claw" */;
		case 7:
			return 580970876 /* GXTEntry: "Lion\'s Paw" */;
		case 8:
			return 967601061 /* GXTEntry: "Legendary Moose Antler" */;
		case 9:
			return 1946030891 /* GXTEntry: "Legendary Panther Eye" */;
		case 10:
			return -1511404982 /* GXTEntry: "Legendary Pronghorn Horn" */;
		case 11:
			return -944465290 /* GXTEntry: "Legendary Ram Horn" */;
		case 12:
			return -1701098855 /* GXTEntry: "Legendary Wolf Heart" */;
		case 13:
			return 425319238 /* GXTEntry: "Legendary Alligator Tooth" */;
		case 14:
			return 363594903 /* GXTEntry: "Vintage Civil War Handcuffs" */;
		case 15:
			return -1217729597 /* GXTEntry: "Gold Jointed Bracelet" */;
		case 16:
			return -1540119664 /* GXTEntry: "Legendary Bear Claw" */;
		case 17:
			return 2100194981 /* GXTEntry: "Quartz Chunk" */;
		case 18:
			return 446659922 /* GXTEntry: "Silver Chain Bracelet" */;
		case 19:
			return -390982951 /* GXTEntry: "Legendary Boar Tusk" */;
		case 20:
			return -1018798851 /* GXTEntry: "Cobalt Petrified Wood" */;
		case 21:
			return -757567246 /* GXTEntry: "Gold Earring" */;
		case 22:
			return -2054602073 /* GXTEntry: "Legendary Bison Horn" */;
		case 23:
			return -378441099 /* GXTEntry: "Abalone Shell Fragment" */;
		case 24:
			return -585121677 /* GXTEntry: "Silver Earring" */;
		case 25:
			return 1566949660 /* GXTEntry: "Old Brass Compass" */;
		default:
			break;
	}
	return 0;
}

int func_415(int iParam0)
{
	return func_540(iParam0, -1);
}

bool func_416(int iParam0, bool bParam1)
{
	return func_541(func_406(), iParam0, bParam1);
}

int func_417()
{
	if (func_255())
	{
		return DLC::_0x1DB9D61E505AE3FC();
	}
	return 0;
}

void func_418(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_542((Global_40.f_4283.f_325 + iParam0));
}

void func_419(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_417())
	{
		func_326(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_326(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

bool func_420(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

void func_421(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_543(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::SET_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::SET_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::SET_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
		MISC::SET_BIT(Global_1058888->f_40567[iVar1], iVar2);
	}
	Global_1934765 = 0;
}

void func_422(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_543(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::CLEAR_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::CLEAR_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_423()
{
	func_422(-939420910);
	func_422(-1187950766);
	func_422(356365161);
	func_422(753127042);
	func_422(-2038424081);
	func_422(1884271742);
	func_422(459290420);
}

void func_424()
{
	func_422(704802028);
	func_422(588987611);
	func_422(2008888900);
	func_422(1649996811);
	func_422(227918160);
	func_422(168171957);
	func_422(1193080109);
	func_422(-491981251);
	func_422(-639037538);
	func_422(-618620429);
}

bool func_425(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_543(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_426(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_427(int iParam0)
{
	switch (iParam0)
	{
		case -1791518714:
			return 1;
		case -2087881550:
			return 2;
		case 1908068621:
			return 4;
		case 1611247019:
			return 8;
		case 1319635688:
			return 16;
		default:
			break;
	}
	return 0;
}

void func_428(var uParam0)
{
	Global_40.f_12018.f_43 = (Global_40.f_12018.f_43 || uParam0);
}

bool func_429(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_430(int iParam0, int iParam1)
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
			return -1506259487;
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

void func_431()
{
	int iVar0;

	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1946804->f_1378.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

void func_432(int iParam0)
{
	func_439(iParam0, 8, 6);
}

void func_433(int iParam0)
{
	func_544(&(Global_1946804->f_2589), iParam0);
}

void func_434(int iParam0, int iParam1)
{
	func_545(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_435(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_436(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_110(&(uParam0->f_1[iParam2 /*3*/]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_546(iParam2, 65536) && &uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_434(iVar1, iVar3);
		}
	}
	if (func_318(-1586649372) && func_546(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_434(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == &Global_1946804->f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (&uParam0->f_1[iVar1 /*3*/] == 1516947474)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_434(iVar1, iVar3);
					}
				}
			}
			func_547(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_547(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar0 = 16;
				if ((uParam0->f_1[iVar0 /*3*/])->f_1 == joaat("base") || (uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_434(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 525
				func_547(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/])->f_1 == joaat("base")
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = -1539589426;
					if (bParam4)
					{
						func_434(iVar1, iVar3);
					}
				}
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1530758430)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 1334603721;
					if (bParam4)
					{
						func_434(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 656
				func_547(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1170; //curOff = 691
				func_547(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_434(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 786
				func_547(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1170; //curOff = 807
				if (iParam1 == &Global_1946804->f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_434(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_434(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_110(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_434(iVar1, iVar3);
						}
					}
				}
				Jump @1170; //curOff = 1025
				iVar1 = 36;
				if (&uParam0->f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && func_31(&(Global_1946804->f_1497.f_1[iVar1 /*3*/]), -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
				Jump @1170; //curOff = 1110
				iVar1 = 36;
				if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
			}
			switch (func_110(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_110(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_434(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_110(&(uParam0->f_1[iVar1 /*3*/])) || func_31(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_434(iVar1, iVar3);
						}
					}
					break;
			}
		}

int func_437(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;

	uVar0 = func_548(0);
	if (iParam2 != 0 && func_549(iParam0, uVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_550(iParam0, func_430(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_438(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	bVar6 = func_113() != -1;
	iVar7 = func_548(0);
	if (func_298(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = &Global_1946804->f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_430(iVar0, 1);
			if (func_551(iVar5, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == joaat("MISSING") || &uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_551(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_412(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_552(uParam0);
				if (iVar3 > 0)
				{
					if (!func_298(524288))
					{
						func_441(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = &Global_1946804->f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_430(iVar0, 1);
							if (func_551(iVar5, 8))
							{
							}
							else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == joaat("MISSING") || &uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_551(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_412(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									if (bParam1)
									{
										func_434(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_444(524288);
				}
			}
		}
	}

void func_439(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_294(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_294(iParam0, 1) /*11*/])->f_10 - ((Global_1946804->f_57[func_294(iParam0, 1) /*11*/])->f_10 && iParam1));
}

void func_440(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_553(&(uParam0->f_2[iVar0 /*2*/]), bParam1, bParam2);
		iVar0++;
	}
	if (func_113() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_554(2, Global_26795.f_776)) || Global_1946804->f_1497 != func_463(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (&Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804->f_1497 = func_463(Global_40.f_7729);
				Global_1946804->f_1378 = func_463(Global_40.f_7729);
				Global_26795.f_776 = 0;
				func_555(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_556(0, 1);
	}
}

void func_441(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_442(struct<4> Param0)
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
		case 26:
			if (Global_1946804->f_850 >= 25)
			{
				return;
			}
			if (func_557(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804->f_850)
				{
					iVar1 = ((Global_1946804->f_855 + iVar0) % 25);
					if ((&Global_1946804->f_668[iVar1 /*4*/] == Param0 && (Global_1946804->f_668[iVar1 /*4*/])->f_1 == Param0.f_1) && (Global_1946804->f_668[iVar1 /*4*/])->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_558(Param0);
			*(Global_1946804->f_668[Global_1946804->f_856 /*4*/]) = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_441(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804->f_851 >= 25)
			{
				return;
			}
			if (func_557(Param0))
			{
				return;
			}
			func_558(Param0);
			*(Global_1946804->f_567[Global_1946804->f_851 /*4*/]) = { Param0 };
			Global_1946804->f_851++;
			func_441(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_302(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_443(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		PED::_0x13E7320C762F0477(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_444(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_445(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_446(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_557(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1 /*4*/] == Param0 && (Global_1946804->f_769[iVar1 /*4*/])->f_2 == Param0.f_2) && (Global_1946804->f_769[iVar1 /*4*/])->f_3 == Param0.f_3) && (Global_1946804->f_769[iVar1 /*4*/])->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1 /*4*/] == 34 && func_557(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_558(Param0);
	*(Global_1946804->f_769[Global_1946804->f_854 /*4*/]) = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_441(8);
}

int func_447()
{
	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	return Global_1347477->f_203;
}

float func_448(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_449()
{
	float fVar0;
	int iVar1;

	fVar0 = func_559(13);
	iVar1 = func_560(fVar0);
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

float func_450()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_451()
{
	if (func_255())
	{
		if (DLC::_0xA16B4FBA7887D7BA())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_452()
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

float func_453()
{
	return Global_1955565->f_3;
}

void func_454(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_561(iParam0, 1, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[1]), bParam2);
}

void func_455(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_561(iParam0, 2, 0, 0);
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

float func_456(float fParam0, float fParam1, float fParam2)
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

bool func_457()
{
	return func_559(12) <= -99f;
}

bool func_458()
{
	return func_559(12) >= 99f;
}

int func_459()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_110(iVar1) == -999503751)
		{
			if (func_562() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_460(int iParam0)
{
	if (!func_313(iParam0))
	{
		return 0;
	}
	if (func_464(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

int func_461(int iParam0)
{
	if (!func_313(iParam0))
	{
		return 0;
	}
	if (func_464(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void func_462(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_313(iParam0))
	{
		return;
	}
	if (!func_461(iParam0))
	{
		func_467(iParam0, 2);
		if (bParam2)
		{
			if (!func_50(0, 0, 1))
			{
				func_219(1, 4);
			}
		}
		if ((!func_465() && !bParam1) && !func_50(0, 0, 1))
		{
			func_466(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_ADD", func_563(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_463(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 439606975 /* GXTEntry: "Fancy Suit" */;
		case 6:
			return 1661121390 /* GXTEntry: "The Gunslinger" */;
		case 7:
			return 1164374808 /* GXTEntry: "Winter Outfit" */;
		case 8:
			return 1160643979 /* GXTEntry: "The Winter Gunslinger" */;
		case 9:
			return 624063935 /* GXTEntry: "The Summer Gunslinger" */;
		case 10:
			return -1476781101 /* GXTEntry: "Island Outfit" */;
		case 11:
			return 294553332 /* GXTEntry: "Island Outfit" */;
		case 12:
			return 1788874135 /* GXTEntry: "Island Outfit Shackles" */;
		case 15:
			return 1560492757 /* GXTEntry: "Robbery Outfit" */;
		case 16:
			return -769081407 /* GXTEntry: "The Wittemore" */;
		case 17:
			return 1902428294 /* GXTEntry: "The Wittemore" */;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return 688004210 /* GXTEntry: "Police Outfit" */;
		case 0:
			return 166243423 /* GXTEntry: "Custom Outfit" */;
		case 1:
			return 1383300684 /* GXTEntry: "Saved Custom Outfit One" */;
		case 2:
			return 2051441678 /* GXTEntry: "Saved Custom Outfit Two" */;
		case 3:
			return 162509669 /* GXTEntry: "Saved Custom Outfit Three" */;
		case 4:
			return 635948769 /* GXTEntry: "Saved Custom Outfit Four" */;
		case 5:
			return 274995506 /* GXTEntry: "Saved Custom Outfit Five" */;
		case 24:
			return -1826731591 /* GXTEntry: "Brawler\'s Outfit" */;
		case 25:
			return 2119049229;
		case 26:
			return 1352942778 /* GXTEntry: "The Rebel" */;
		case 27:
			return 1964379549 /* GXTEntry: "The Innocent" */;
		case 28:
			return 1201189539 /* GXTEntry: "The Pursuer" */;
		case 21:
			return 1351927599 /* GXTEntry: "The Grizzlies Outlaw" */;
		case 22:
			return 2032023096 /* GXTEntry: "The Nuevo Paraiso" */;
		case 23:
			return -291256376;
		case 66:
			return -1243402388;
		case 67:
			return 65931886;
		case 68:
			return 1371678229;
		case 69:
			return 2102263084;
		case 61:
			return -272211555 /* GXTEntry: "The Homesteader" */;
		case 64:
			return -55563408;
		case 71:
			return -1914506115;
		case 75:
			return 802495462;
		case 77:
			return 842905332;
		case 78:
			return -1951220140;
		case 79:
			return 1511551084;
		case 81:
			return -1725704631;
		case 83:
			return 1257427489;
		case 85:
			return -659341240;
		case 87:
			return 2038771525;
		case 89:
			return -535599244;
		case 73:
			return -389591806;
		case 70:
			return -1205612021 /* GXTEntry: "The Winter Cowboy" */;
		case 93:
			return 890706995 /* GXTEntry: "The Cowhand" */;
		case 90:
			return 1156438275 /* GXTEntry: "The Rancher" */;
		case 91:
			return -1611873049 /* GXTEntry: "The Rancher" */;
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return -361635024 /* GXTEntry: "The Cowboy" */;
		case 76:
			return 1460520700;
		case 80:
			return 523337834;
		case 82:
			return -19271249;
		case 84:
			return 214175524;
		case 86:
			return -1303643297;
		case 88:
			return 411856831;
		case 72:
			return -926815459;
		case 74:
			return -1300731953;
		case 65:
			return -409616653 /* GXTEntry: "The Homesteader" */;
		case 29:
			return 509954990 /* GXTEntry: "The Chevalier" */;
		case 30:
			return -445916744 /* GXTEntry: "The Heartlands" */;
		case 31:
			return -866249154 /* GXTEntry: "The Gambler" */;
		case 32:
			return -2077063704 /* GXTEntry: "The Earl" */;
		case 33:
			return 205207539 /* GXTEntry: "The McLaughlin" */;
		case 34:
			return -1033657275 /* GXTEntry: "The Josiah" */;
		case 35:
			return 1806002837 /* GXTEntry: "The Farrier" */;
		case 36:
			return 705324896 /* GXTEntry: "The Donegal" */;
		case 37:
			return -1541763703 /* GXTEntry: "The Bulldogger" */;
		case 38:
			return 387052410 /* GXTEntry: "The Ranch Hand" */;
		case 39:
			return -361288914 /* GXTEntry: "The Scrapper" */;
		case 40:
			return -911054515 /* GXTEntry: "The Armadillo" */;
		case 41:
			return 1084200963 /* GXTEntry: "The Valentine" */;
		case 42:
			return 1847948074 /* GXTEntry: "The Vaquero" */;
		case 43:
			return -1212526764 /* GXTEntry: "The Dewberry Creek" */;
		case 44:
			return 1851440270 /* GXTEntry: "The Clairmont" */;
		case 45:
			return -2028985700 /* GXTEntry: "The Roscoe" */;
		case 46:
			return 1074435214 /* GXTEntry: "The Estate Boss" */;
		case 47:
			return -883015675 /* GXTEntry: "The Drover" */;
		case 48:
			return -1047155604 /* GXTEntry: "The Calumet" */;
		case 49:
			return 1123231221 /* GXTEntry: "The Cowpuncher" */;
		case 50:
			return 1866989210 /* GXTEntry: "The Tumbleweed" */;
		case 51:
			return 478183719 /* GXTEntry: "The Drifter" */;
		case 52:
			return -1698955868 /* GXTEntry: "The Leatherman" */;
		case 53:
			return -2029378634 /* GXTEntry: "The Cumberland" */;
		case 54:
			return 1339864416 /* GXTEntry: "The Millesani" */;
		case 55:
			return 890998115 /* GXTEntry: "The Faulkton" */;
		case 56:
			return -1376288999 /* GXTEntry: "The Dolton" */;
		case 57:
			return -1041123771 /* GXTEntry: "The Corson" */;
		case 58:
			return 1389254668 /* GXTEntry: "The Saint Denis" */;
		case 59:
			return -346112633 /* GXTEntry: "The Deauville" */;
		case 60:
			return 773309172 /* GXTEntry: "The Bretagne" */;
		default:
			break;
	}
	return 0;
}

bool func_464(int iParam0, int iParam1)
{
	if (!func_313(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

bool func_465()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

var func_466(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _NAMESPACE71::_0x049D5C615BD38BAD(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_467(int iParam0, int iParam1)
{
	if (!func_313(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

int func_468(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1946804->f_2657.f_26.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1946804->f_2657.f_26.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1946804->f_2657.f_26;
			break;
		case -413129408:
			iVar0 = 1;
			break;
		default:
			return 0;
	}
	switch (iParam0)
	{
		case -999503751:
			if (iVar0 > 0 && !bParam1)
			{
				iVar0 = (iVar0 - 1);
			}
			break;
	}
	return iVar0;
}

void func_469(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_564(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_109(50);
			}
			else
			{
				func_109(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_109(51);
			}
			else
			{
				func_109(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_565(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_143();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_143();
			}
			break;
		case 3:
			func_109(24);
			if (bParam1)
			{
				if (!func_565(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_143();
				}
			}
			break;
	}
}

void func_470(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_566(0))
			{
				iVar0++;
			}
			if (func_566(2))
			{
				iVar0++;
			}
			if (func_566(4))
			{
				iVar0++;
			}
			if (!func_567(16))
			{
				if (iVar0 == 1)
				{
					func_568();
					func_96(456, 1);
					func_569(16);
				}
			}
			if (!func_567(32))
			{
				if (iVar0 >= 3)
				{
					func_568();
					func_96(456, 1);
					func_569(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_566(1))
			{
				iVar0++;
			}
			if (func_566(3))
			{
				iVar0++;
			}
			if (func_566(7))
			{
				iVar0++;
			}
			if (!func_567(1))
			{
				if (iVar0 == 1)
				{
					func_570();
					func_96(457, 1);
					func_569(1);
				}
			}
			if (!func_567(2))
			{
				if (iVar0 >= 3)
				{
					func_570();
					func_96(457, 1);
					func_569(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_566(5))
			{
				iVar0++;
			}
			if (func_566(6))
			{
				iVar0++;
			}
			if (func_566(8))
			{
				iVar0++;
			}
			if (!func_567(4))
			{
				if (iVar0 == 1)
				{
					func_571();
					func_96(455, 1);
					func_569(4);
				}
			}
			if (!func_567(8))
			{
				if (iVar0 >= 3)
				{
					func_571();
					func_96(455, 1);
					func_569(8);
				}
			}
			break;
	}
}

void func_471(var uParam0)
{
	func_320(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_320(uParam0, 617531372);
	}
	else
	{
		func_320(uParam0, 291123060);
	}
}

void func_472(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_572(uParam0))
	{
		return;
	}
	if (&Global_1224865 < 20)
	{
		Global_1224865 = &Global_1224865 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1224865->f_1[iVar0 /*21*/]) = { *(Global_1224865->f_1[iVar0 + 1 /*21*/]) };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1224865->f_1[(&Global_1224865 - 1) /*21*/]) = { Var1 };
}

void func_473(char* sParam0, char* sParam1, int iParam2)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	_NAMESPACE84::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	_NAMESPACE84::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

int func_474(int iParam0)
{
	switch (iParam0)
	{
		case -1162387149:
		case 1084182731:
			return 1;
	}
	return 0;
}

int func_475(int iParam0)
{
	int iVar0;

	iVar0 = func_106(iParam0);
	if ((iVar0 == joaat("weapon") && iParam0 != joaat("weapon_kit_binoculars")) && iParam0 != joaat("weapon_kit_camera"))
	{
		return 0;
	}
	if (iVar0 == joaat("money") && iParam0 != -1167047117)
	{
		return 0;
	}
	switch (iVar0)
	{
		case -1977020088:
		case -1879562593:
		case joaat("horse"):
		case -1650247667:
		case -1013984273:
		case 26423971:
		case 129583122:
		case joaat("ammo"):
		case 658570475:
		case 810656527:
		case joaat("gold"):
		case joaat("component"):
		case 1495295997:
		case 1780172046:
		case 2071704023:
		case 2088138839:
			return 0;
		case joaat("clothing"):
			switch (func_110(iParam0))
			{
				case -525676072:
					if (iParam0 == 1147557067)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case 81053684:
					return 1;
				default:
					return 0;
			}
			break;
	}
	if (func_110(iParam0) == -829303394)
	{
		return 0;
	}
	return 1;
}

int func_476(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = false;
	if (((iParam1 == 0 || iParam1 == -2074770370) || bParam2) || func_478(0))
	{
		bVar0 = true;
	}
	if (!bParam2)
	{
		if ((!func_73(iParam0, 0) || iParam0 == 1259508039) || iParam0 == -727924611)
		{
			return 0;
		}
	}
	if (!bVar0 && func_573(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case -283002878:
		case 0:
			if (!func_478(0))
			{
				if (iParam0 == 1807503187)
				{
					return 1;
				}
				if ((((((((((func_476(iParam0, -1559802791, 1) || func_476(iParam0, -1268291907, 1)) || func_476(iParam0, -96974025, 1)) || func_476(iParam0, -1666604090, 1)) || func_476(iParam0, 1561961676, 1)) || func_476(iParam0, -156634416, 1)) || func_476(iParam0, 1061777683, 1)) || func_476(iParam0, -2074770370, 1)) || func_476(iParam0, -693134279, 1)) || func_476(iParam0, -182626652, 1)) || func_574(iParam0))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
			break;
		case -1559802791:
			return func_31(iParam0, 1422457563);
		case -1268291907:
			return func_31(iParam0, 1360707454);
		case -96974025:
			return func_31(iParam0, 1009210113);
		case -1666604090:
			return func_31(iParam0, -193035453);
		case 1561961676:
			return func_31(iParam0, -111938901);
		case -156634416:
			return func_31(iParam0, -928967997);
		case 1061777683:
			return func_31(iParam0, 747873593);
		case -2074770370:
			if (Global_1935689->f_17 == 1 || Global_1935689->f_17 == 2)
			{
				return func_575(iParam0, iParam1);
			}
			else if (func_69(iParam0, -949239683) == -1337515701 && iParam0 != -780677328)
			{
				return 1;
			}
			else
			{
				return func_31(iParam0, -111938901);
			}
			break;
		case -693134279:
			return func_107(iParam0, 8388608);
		case -182626652:
			if (func_576(iParam0, Global_1914319->f_16855.f_1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_477(int iParam0)
{
	switch (iParam0)
	{
		case -776155824: /* GXTEntry: "Animal Carcass Perfect" */
		case -45650221: /* GXTEntry: "Animal Carcass Poor" */
		case 1715058708: /* GXTEntry: "Animal Carcass Good Quality" */
			return 0;
	}
	if (func_478(0) && Global_1914319->f_16855 == 2)
	{
		if (!func_577(iParam0))
		{
			return 0;
		}
	}
	else
	{
		switch (iParam0)
		{
			case -1854702679: /* GXTEntry: "Cigarette Cards Amazing Inventions" */
			case -1230863414: /* GXTEntry: "Cigarette Cards Stars of the Stage" */
			case -1028735103: /* GXTEntry: "Cigarette Cards Gems Of Beauty" */
			case -1021394391: /* GXTEntry: "Cigarette Cards Artists & Poets" */
			case -987306668: /* GXTEntry: "Cigarette Cards Vistas of America" */
			case -479775696: /* GXTEntry: "Cigarette Cards Prominent Americans" */
			case -435742319: /* GXTEntry: "Cigarette Cards The World\'s Champions" */
			case 232875659: /* GXTEntry: "Cigarette Cards Fauna of North America" */
			case 515229791: /* GXTEntry: "Cigarette Cards Flora of America" */
			case 554799588: /* GXTEntry: "Cigarette Cards Famous Gunslingers" */
			case 1265323898: /* GXTEntry: "Cigarette Cards Breeds of Horses" */
			case 1423129537: /* GXTEntry: "Cigarette Cards Marvels of Travel" */
				return 0;
		}
	}
	if (func_113() == 0)
	{
		if (func_31(iParam0, -805003139))
		{
			if (!UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
			{
				return 0;
			}
		}
	}
	if (func_106(iParam0) == -2130996531 && !(func_31(iParam0, -1540973036) || func_31(iParam0, 1192444843)))
	{
		return 0;
	}
	return 1;
}

bool func_478(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_17370;
	}
	return (Global_1914319->f_17370 || Global_1914319->f_18996.f_1);
}

bool func_479()
{
	return Global_1935689->f_10;
}

void func_480(var uParam0)
{
	Global_1935689->f_10190 = uParam0;
}

int func_481(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

int func_482(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

void func_483(int iParam0, var uParam1)
{
	*iParam0 = (*iParam0 || uParam1);
}

void func_484(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_485()
{
	return Global_40.f_4283.f_1;
}

int func_486(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (func_113() != -1)
	{
		return 1;
	}
	if (iParam2 == 0 && func_50(0, 1, 1))
	{
		return 0;
	}
	if (&Global_1879534)
	{
		return 0;
	}
	if (func_578(iParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_579(iVar0, &iParam0))
		{
			(Global_40.f_4942[iVar0 /*60*/])->f_59 = iParam1;
			if (iParam3 == iParam4)
			{
				func_580(iVar0, 512, 1);
			}
			else
			{
				func_581(iVar0, 512, 1);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_487(var uParam0)
{
	*uParam0 = 0;
}

void func_488(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_489(int iParam0)
{
	if (func_582(179) || func_582(180))
	{
		if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			if (((*Global_1347702)[iParam0 /*49*/])->f_37 == Global_1905944->f_5698)
			{
				func_583(1);
			}
		}
	}
	if (func_584(179))
	{
		func_585(179);
	}
	if (func_584(180))
	{
		func_585(180);
	}
}

int func_490(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_586(iParam0, bParam1, bParam2, bParam3))
	{
		return 1;
	}
	if (bParam1)
	{
		if (LAW::_0x0BB6DE7D23C60626(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

void func_491(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_492(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_47(iParam0))
	{
		return;
	}
	func_587(&(((*Global_1347702)[iParam0 /*49*/])->f_14), iParam1);
	func_587(&(((*Global_1347702)[iParam0 /*49*/])->f_14), 2);
	func_588(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 16384);
	func_488(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32);
	if (iParam1 != 16384)
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (func_47(&(Global_40.f_450[iVar0])))
			{
				if (&Global_40.f_450[iVar0] == iParam0)
				{
					Global_1430257 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

void func_493(int iParam0, bool bParam1, vector3 vParam2)
{
	if (!func_47(iParam0))
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32 != 0)
	{
		return;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 4096 != 0)
	{
		if (bParam1)
		{
			return;
		}
	}
	func_489(iParam0);
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1048576 != 0 && ((*Global_1347702)[iParam0 /*49*/])->f_13 & 2048 == 0)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
		}
		func_341(iParam0, func_497(iParam0), 0, 1);
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_18 > -1f)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
		}
		func_341(iParam0, vParam2, 0, 1);
	}
	else if (!bParam1)
	{
		func_341(iParam0, vParam2, 0, 0);
	}
	MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, 724623647);
	func_484(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 4096);
}

int func_494(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_344(((*Global_1347702)[iParam0 /*49*/])->f_15) != 0)
		{
			((*Global_1347702)[iParam0 /*49*/])->f_18 = 80f;
			*uParam1 = { 1015.113f, 159.7295f, 103.0175f };
			return 1;
		}
	}
	else if (iParam0 == 96)
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return 1;
		}
		else
		{
			*uParam1 = { -1629.71f, -1338.377f, 82.0174f };
			return 1;
		}
	}
	return 0;
}

int func_495(int iParam0)
{
	int iVar0;

	iVar0 = -1337945352;
	if (!func_47(iParam0))
	{
		return iVar0;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		iVar0 = 1673015813;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 512 != 0)
	{
		if (Global_40.f_1093 == Global_1347702[iParam0 /*49*/])
		{
			iVar0 = 2103462781;
		}
		else
		{
			iVar0 = -1337945352;
		}
	}
	else if (Global_40.f_1093 == Global_1347702[iParam0 /*49*/])
	{
		iVar0 = 2103462781;
	}
	else
	{
		iVar0 = -1337945352;
	}
	return iVar0;
}

int func_496(int iParam0)
{
	if (func_113() != -1)
	{
		return 0;
	}
	if (!func_47(iParam0))
	{
		return 0;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1048576 != 0 && ((*Global_1347702)[iParam0 /*49*/])->f_13 & 2048 != 0)
	{
		return 0;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_18 > -1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_497(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1794.04f, -1314.792f, 43.0923f;
		case 26:
			return -235.2066f, 763.6583f, 117.085f;
		case 30:
			return 1288.87f, -1397.85f, 77.93f;
		case 32:
			return 1234.24f, -1425.58f, 71.18f;
		case 33:
			return 905.92f, -421.19f, 88.23f;
		case 36:
			return -2476.07f, 832.13f, 141.25f;
		case 38:
			return -329.32f, -366.6f, 87f;
		case 39:
			return 97.4f, -212.47f, 111.6f;
		case 43:
			return 2586.494f, -1009.154f, 43.24f;
		case 41:
			return 337.3075f, -684.5404f, 41.8362f;
		case 49:
			return -2178.646f, -245.6886f, 191.1569f;
		case 51:
			return -1709.38f, -335.07f, 176.95f;
		case 53:
			return 2480.1f, -1377.69f, 45.32f;
		case 56:
			return 2011.776f, -504.0132f, 40.983f;
		case 57:
			return 1383.38f, -1336.83f, 77.59f;
		case 65:
			return -2095.11f, 656.32f, 119.87f;
		case 69:
			return 2943.93f, 1377.15f, 43.22f;
		case 70:
			return 2945.42f, 1342.78f, 43.92f;
		case 77:
			return 2793.35f, -1174.5f, 46.89f;
		case 78:
			return 2734.359f, -1207.682f, 48.6752f;
		case 80:
			return 2740.808f, -1312.805f, 46.648f;
		case 81:
			return 2503.755f, -1164.531f, 48.1928f;
		case 84:
			return -73.18f, -392.3f, 70.84f;
		case 88:
			return 2480.53f, -399.62f, 41.42f;
		case 89:
			return 1576.261f, -251.85f, 79.21f;
		case 91:
			return 1496.348f, -1083.286f, 54.1105f;
		case 92:
			return 1407.31f, 316.83f, 88.9555f;
		case 94:
			return 1414.4f, 248.2f, 88.85f;
		case 101:
			return -1378.656f, -735.3399f, 90.8243f;
		case 102:
			return -1666.59f, 610.82f, 124.03f;
		case 103:
			return 1356.44f, 533.95f, 86.12f;
		case 104:
			return 2407f, -585.32f, 40.66f;
		case 105:
			return -219.25f, 212.93f, 94.15f;
		case 116:
			return 211.99f, 512.98f, 126.54f;
		case 117:
			return -329.2f, 797.9f, 116.89f;
		case 118:
			return -300.3652f, 814.9069f, 117.4111f;
		case 119:
			return -1043.989f, 434.5095f, 53.6802f;
		case 121:
			return 2520.88f, 421.94f, 65.91f;
		case 127:
			return 2834.68f, -1048.04f, 42.86f;
		case 133:
			return 2688.427f, -1121.766f, 49.6782f;
		case 135:
			return -576.08f, 524.9f, 97.86f;
		case 136:
			return 1248.01f, -1280.07f, 75.17f;
		case 143:
			return 2954.45f, 523.05f, 44.47f;
		case 144:
			return 2304.697f, -0.13289f, 45.70486f;
		case 151:
			return 556.271f, 172.08f, 133.3435f;
		case 152:
			return 556.271f, 172.08f, 133.3435f;
		case 146:
			return -585.6761f, -347.216f, 81.28532f;
		default:
			break;
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_24;
}

void func_498(int iParam0)
{
	switch (func_113())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

void func_499(int iParam0)
{
	if (!func_496(iParam0))
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 16 != 0)
		{
			if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
			{
				if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
				{
					MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, -1446646876);
				}
				func_484(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32);
			}
		}
		else
		{
			if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
			{
				MAP::_0xB059D7BD3D78C16F(((*Global_1347702)[iParam0 /*49*/])->f_37, -1446646876);
			}
			func_488(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32);
		}
	}
}

void func_500(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, -1986290853);
		switch (iParam0)
		{
			case 140:
			case 142:
				MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, 495758964);
				break;
		}
	}
}

int func_501(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 5:
			return 4;
		case 6:
			return 79;
		case 0:
			return 43;
		case 2:
			return 98;
		case 4:
			return 58;
		case 1:
			return 71;
		case 3:
			return 9;
		case 7:
			return 22;
		case 8:
			return 37;
		default:
			break;
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

bool func_502(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_503(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36307)
	{
		return MAP::DOES_BLIP_EXIST(&(Global_36307[iParam0]));
	}
	return 0;
}

bool func_504(int iParam0)
{
	if (!func_589(Global_40.f_4283))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return true;
		}
		if (func_590(iParam0))
		{
			if (BUILTIN::VDIST(Global_36, func_591(iParam0)) < BUILTIN::VDIST(Global_36, ((*Global_1888801)[iParam0 /*35*/])->f_15))
			{
				return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_591(iParam0), false) <= func_592();
			}
		}
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, ((*Global_1888801)[iParam0 /*35*/])->f_15, false) <= func_592();
	}
	return func_593();
}

int func_505(int iParam0, bool bParam1, int iParam2)
{
	if ((bParam1 && MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37)) && ((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		return ((*Global_1347702)[iParam0 /*49*/])->f_27 == iParam2;
	}
	return 0;
}

void func_506(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_183(iParam0))
	{
		return;
	}
	switch (func_594(iParam0))
	{
		case 1:
			iVar0 = func_182(iParam0);
			if (func_595(iVar0, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				if ((func_596(iVar0, -1) && !((*Global_1835011)[iVar0 /*74*/])->f_70) && ((*Global_1835011)[iVar0 /*74*/])->f_63 & 2 == 0)
				{
					iVar2 = 1986697381;
				}
				else
				{
					iVar2 = -592708248;
				}
			}
			else if ((func_596(iVar0, -1) && !((*Global_1835011)[iVar0 /*74*/])->f_70) && ((*Global_1835011)[iVar0 /*74*/])->f_63 & 2 == 0)
			{
				iVar2 = -1559907306;
			}
			else
			{
				iVar2 = 1673015813;
			}
			if (((*Global_1835011)[iVar0 /*74*/])->f_28 != iVar2)
			{
				MAP::_0xBD62D98799A3DAF0(((*Global_1835011)[iVar0 /*74*/])->f_27, iVar2);
				if (!func_597(iVar0))
				{
					MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iVar0 /*74*/])->f_27, -1986290853);
				}
				if (func_598((*Global_1835011)[iVar0 /*74*/], 2))
				{
					MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iVar0 /*74*/])->f_27, 724623647);
				}
				((*Global_1835011)[iVar0 /*74*/])->f_28 = iVar2;
			}
			break;
		case 8:
			iVar1 = func_182(iParam0);
			if (func_599(iVar1, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				switch (func_495(iVar1))
				{
					case -1337945352:
						iVar2 = 588610391;
						break;
					case 2103462781:
						iVar2 = -1032930804;
						break;
					case -1485222547:
						iVar2 = 13700166;
						break;
					case 1673015813:
						iVar2 = -592708248;
						break;
					default:
						iVar2 = 588610391;
						break;
				}
			}
			else
			{
				iVar2 = func_495(iVar1);
			}
			if (((*Global_1347702)[iVar1 /*49*/])->f_38 != iVar2)
			{
				MAP::_0xBD62D98799A3DAF0(((*Global_1347702)[iVar1 /*49*/])->f_37, iVar2);
				func_500(iVar1);
				((*Global_1347702)[iVar1 /*49*/])->f_38 = iVar2;
			}
			break;
	}
}

bool func_507(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_508(int iParam0)
{
	if ((iParam0 == 97 || iParam0 == 99) || iParam0 == 6)
	{
		return 1;
	}
	return 0;
}

int func_509(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_3;
	}
	return 0;
}

char* func_510(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ArticleHeading";
		case 1:
			return "ArticleSubHeading1";
		case 2:
			return "ArticleSubHeading2";
		case 3:
			return "ArticleSubHeading3";
		case 4:
			return "ArticleSubHeading4";
		case 5:
			return "ArticleBody1";
		case 6:
			return "ArticleBody2";
		case 7:
			return "ArticleBody3";
		case 8:
			return "ArticleBody4";
		case 9:
			return "ArticleBody5";
		case 10:
			return "ArticleBody6";
		case 11:
			return "ArticleBody7";
		case 12:
			return "ArticleBody8";
		case 13:
			return "ArticleBody9";
		case 14:
			return "ArticleBody10";
		default:
			break;
	}
	return "";
}

int func_511(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 3;
		case 3:
			return 3;
		case 4:
			return 3;
		default:
			break;
	}
	return 4;
}

char* func_512(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "textField0";
		case 1:
			return "textField1";
		case 2:
			return "textField2";
		case 3:
			return "textField3";
		case 4:
			return "textField4";
		case 5:
			return "textField5";
		case 6:
			return "textField6";
		case 7:
			return "textField7";
	}
	return "";
}

struct<4> func_513()
{
	struct<4> Var0;

	return Var0;
}

float func_514(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_360(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_515(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_600(iVar6) - func_600(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_515(float fParam0)
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

int func_516(int iParam0)
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

int func_517(int iParam0)
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

int func_518(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_515(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_600(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_600(iVar0 + 1));
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

int func_519(int iParam0)
{
	int iVar0;

	if (func_601(iParam0, &iVar0))
	{
		return func_600(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_602())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_602())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_602())
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

int func_520(int iParam0)
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

void func_521(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	char* sVar1;
	bool bVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	int iVar8;
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
	iVar3 = (iVar3 + func_603(iParam0));
	sVar4 = func_605(func_604(iVar3, iParam2));
	sVar6 = func_606(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::_CREATE_VAR_STRING(10, sVar0, func_607(iParam0));
	iVar8 = func_608(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_609(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&Var10);
	}
	func_233(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_610(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_522(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

bool func_523(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_524(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_525(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

int func_526(int iParam0)
{
	switch (iParam0)
	{
		case 444160793: /* GXTEntry: "Perfect Squirrel Carcass" */
			return 1;
		case -1969404854: /* GXTEntry: "Perfect Cardinal Carcass" */
			return 1;
		case 1761263432: /* GXTEntry: "Perfect Rat Carcass" */
			return 1;
		case -843795569: /* GXTEntry: "Perfect Woodpecker Carcass" */
			return 1;
		case -832850511: /* GXTEntry: "Perfect Chipmunk Carcass" */
			return 1;
		case -1464585113: /* GXTEntry: "Perfect Oriole Carcass" */
			return 1;
		case -1290897778: /* GXTEntry: "Perfect Robin Carcass" */
			return 1;
		case -100913452: /* GXTEntry: "Perfect Songbird Carcass" */
			return 1;
		case 313332607: /* GXTEntry: "Perfect Sparrow Carcass" */
			return 1;
		case -124539232: /* GXTEntry: "Perfect Toad Carcass" */
			return 1;
		case 59384454: /* GXTEntry: "Perfect Crow Carcass" */
			return 1;
		case 905173572: /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
			return 1;
		case 1432949803: /* GXTEntry: "Perfect Bat Carcass" */
			return 1;
		case -983831788: /* GXTEntry: "Perfect Blue Jay Carcass" */
			return 1;
		case -1882344824: /* GXTEntry: "Perfect Bullfrog Carcass" */
			return 1;
		default:
			break;
	}
	return 0;
}

int func_527(int iParam0)
{
	switch (iParam0)
	{
		case -1866642239: /* GXTEntry: "Perfect Rabbit Carcass" */
			return 1;
		case -935543049: /* GXTEntry: "Perfect Opossum Carcass" */
			return 1;
		case 102446365: /* GXTEntry: "Perfect Skunk Carcass" */
			return 1;
		case 924882045: /* GXTEntry: "Perfect Beaver Carcass" */
			return 1;
		default:
			break;
	}
	return 0;
}

int func_528(int iParam0)
{
	int iVar0;
	struct<11> Var1;
	int iVar95;

	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_611(&iVar0, 0, iVar95, &Var1) && !func_611(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			func_612(iVar0, &Var1);
			if (func_73(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_529()
{
	var uVar0;
	struct<4> Var30;

	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	uVar0 = 29;
	func_613(Global_35, &uVar0);
	Var30 = { func_348(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_614(0);
	func_615(7);
	func_616(-1623728698 /* GXTEntry: "Bandana" */, 1, 1, 0);
	if (func_315() == 1160113249)
	{
		func_616(-763730846 /* GXTEntry: "John\'s Classic Hat" */, 1, 1, 1);
		func_616(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	func_617(Global_35, &uVar0);
}

int func_530(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_618(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_531(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_532(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_533(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_534(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_535(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_536(int iParam0, int iParam1)
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

void func_537(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_619(iParam0, iParam6);
	func_620(iParam0, iParam5);
	func_621(iParam0, iParam4);
	func_622(iParam0, iParam3);
	func_623(iParam0, iParam2);
	func_624(iParam0, iParam1);
}

int func_538(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_293(iVar0);
}

int func_539(int iParam0)
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

int func_540(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;

	if (iParam1 < 0)
	{
		iParam1 = func_215(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_619(&uVar6, iVar0);
	func_620(&uVar6, iVar1);
	func_621(&uVar6, iVar2);
	func_622(&uVar6, iVar3);
	func_623(&uVar6, iVar4);
	func_624(&uVar6, iVar5);
	return uVar6;
}

bool func_541(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_625(iParam1) || !func_625(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_542(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_322(1356759001) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

int func_543(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case -2066272360:
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case -1861414976:
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case -1610966108:
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case -1455998786:
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case -1340339190:
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case -1296807958:
			return 320;
		case -1283202000:
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case -911126844:
			return 336;
		case -897750037:
			return 334;
		case -895073533:
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case -851626677:
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case -781631220:
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case -734416508:
			return 340;
		case -699277634:
			return 4;
		case -693828600:
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case -524787708:
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case -502473159:
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case -355531636:
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case -108780030:
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case -61411516:
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case 74872959:
			return 348;
		case 93964309:
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case 229371495:
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case 509781469:
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case 582380806:
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case 747514327:
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case 784360470:
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case 885378256:
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case 1159471771:
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case 1166612791:
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case 1238086793:
			return 313;
		case 1250636944:
			return 259;
		case 1302228510:
			return 315;
		case 1306158345:
			return 202;
		case 1321892118:
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case 1549124796:
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case 1703398561:
			return 332;
		case 1703426636:
			return 43;
		case 1708045337:
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case 1744443559:
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case 1932172605:
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case 2113625508:
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
			return 87;
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

void func_544(var uParam0, int iParam1)
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
			if ((func_626(uParam0->f_2[iVar0 /*2*/], 2) || &uParam0->f_2[iVar0 /*2*/] == iParam1) || &uParam0->f_2[iVar0 /*2*/] == 39)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			else
			{
				if (func_626(uParam0->f_2[iVar0 /*2*/], 1))
				{
					func_627(uParam0->f_2[iVar0 /*2*/], 2, 6);
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

void func_545(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_628(uParam0, 1))
	{
		func_629(uParam0, 1);
	}
	(uParam0->f_2[*uParam0 /*2*/])->f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_546(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[iParam0 /*11*/])->f_9 && iParam1) != 0;
}

void func_547(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 3;
	}
	iVar1 = 12;
	iVar2 = 20;
	iVar3 = 16;
	if ((uParam0->f_1[iVar3 /*3*/])->f_1 == 1216705912 || (uParam0->f_1[iVar3 /*3*/])->f_1 == 654181853)
	{
		if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
		{
			(uParam0->f_1[iVar3 /*3*/])->f_1 = 1334603721;
		}
		else
		{
			(uParam0->f_1[iVar3 /*3*/])->f_1 = -1539589426;
			(uParam0->f_1[iVar1 /*3*/])->f_1 = joaat("base");
		}
		if (bParam2)
		{
			func_434(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_434(iVar3, iVar0);
		}
	}
	if ((uParam0->f_1[iVar2 /*3*/])->f_1 == -1333118809 || (uParam0->f_1[iVar2 /*3*/])->f_1 == joaat("custom"))
	{
		(uParam0->f_1[iVar2 /*3*/])->f_1 = joaat("base");
		if (bParam3)
		{
			func_434(iVar2, iVar0);
		}
	}
}

int func_548(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_315();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_549(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(iParam0, uParam1, bParam3))
	{
		if (PED::_0x6243635AF2F1B826(iParam0, iVar0, uParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_550(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("base");
	return 1;
}

bool func_551(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_294(iParam0, 1) /*11*/])->f_10 && iParam1) != 0;
}

int func_552(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 25;
	iVar1 = 0;
	if (&uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	iVar0 = 26;
	if (&uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	return iVar1;
}

void func_553(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*(Global_1946804->f_1497.f_1[iParam0 /*3*/]) = { *(Global_1946804->f_1378.f_1[iParam0 /*3*/]) };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_113() == -1)
	{
		func_630(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_26795.f_776);
	}
	else
	{
		func_631(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_36637.f_45.f_350.f_1011);
	}
}

int func_554(int iParam0, int iParam1)
{
	if (func_113() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return (Global_26795.f_26[iParam1 /*120*/] && iParam0) != 0;
		}
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] && iParam0) != 0;
	}
	return 0;
}

void func_555(int iParam0, bool bParam1, int iParam2)
{
	func_632(&(Global_1946804->f_1378), iParam0);
	func_633(2, iParam0, 6);
	if (bParam1)
	{
		func_556(0, 1);
	}
}

void func_556(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_634(0);
	}
	if (bParam0)
	{
		func_441(8);
		func_441(512);
	}
	else
	{
		func_441(8);
		func_441(16);
	}
}

bool func_557(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_558(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

float func_559(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_560(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

char* func_561(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_329(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_329(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_562()
{
	return Global_1946804->f_1497;
}

char* func_563(int iParam0)
{
	int iVar0;

	iVar0 = func_463(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_390(iVar0);
}

int func_564(int iParam0)
{
	int iVar0;

	if (func_635(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_636(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_637(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_638(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

int func_565(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_61(func_639(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		return 1;
	}
	return 0;
}

int func_566(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_61(func_640(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return 1;
	}
	return 0;
}

bool func_567(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_568()
{
	int iVar0;

	if (func_113() != -1)
	{
		return;
	}
	func_162(1654063339, 1, 752097756);
	iVar0 = func_363(1);
	func_521(1, iVar0, 0);
}

void func_569(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_570()
{
	int iVar0;

	if (func_113() != -1)
	{
		return;
	}
	func_162(1623931083, 1, 752097756);
	iVar0 = func_363(2);
	func_521(2, iVar0, 0);
}

void func_571()
{
	int iVar0;

	if (func_113() != -1)
	{
		return;
	}
	func_162(-1845241476, 1, 752097756);
	iVar0 = func_363(0);
	func_521(0, iVar0, 0);
}

int func_572(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_573(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1935689->f_19.f_1)
	{
		if (func_641(iParam0, &(Global_1935689->f_19.f_2[iVar0 /*2*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_574(int iParam0)
{
	if (func_31(iParam0, -839724752))
	{
		return func_31(iParam0, 1937586541);
	}
	return 0;
}

int func_575(int iParam0, int iParam1)
{
	if (func_31(iParam0, 173360570))
	{
		return 0;
	}
	switch (Global_1935689->f_17)
	{
		case 1:
			if (iParam1 == -2074770370)
			{
				if ((func_31(iParam0, -887064662) || func_31(iParam0, -839724752)) || func_31(iParam0, -136654233))
				{
					return 1;
				}
			}
			break;
		case 2:
			if (iParam1 == -2074770370)
			{
				if ((((((((func_31(iParam0, -887064662) || func_31(iParam0, -839724752)) || func_31(iParam0, -136654233)) || func_31(iParam0, 554195525)) || func_31(iParam0, -1238310989)) || func_31(iParam0, 2127114599)) || func_31(iParam0, -1864584831)) || func_31(iParam0, 1068498601)) || func_31(iParam0, 1967571132))
				{
					return 1;
				}
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_576(int iParam0, int iParam1)
{
	if (iParam1 == 101)
	{
		return func_642(iParam0);
	}
	if (func_643(iParam0, iParam1))
	{
		return 0;
	}
	return func_644(iParam0, iParam1);
}

int func_577(int iParam0)
{
	int iVar0;

	if (iParam0 != 0)
	{
		if (func_107(iParam0, 8388608))
		{
			iVar0 = func_285(func_645(iParam0), 10);
			if (iVar0 != 0 && func_61(iVar0, 1, 0))
			{
				Global_1901328->f_94 = 1;
				return func_646(func_645(iParam0), iParam0);
			}
			else if (iParam0 == func_285(func_647(iParam0), 5))
			{
				if (!func_48(39))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			else if (iParam0 == func_285(func_648(iParam0), 5))
			{
				if (!func_48(49))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			else if (func_649(iParam0))
			{
				if (!func_48(41))
				{
					return 0;
				}
				else
				{
					return func_651(func_650(iParam0), 5, 0);
				}
			}
			else if (func_652(iParam0))
			{
				if (func_61(-1813857561 /* GXTEntry: "Rare Orchids Order" */, 1, 0))
				{
					if (!func_48(48))
					{
						return 0;
					}
					else
					{
						return 1;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (func_653(iParam0))
			{
				if (!func_48(38))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			else if (iParam0 == -1813857561)
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_578(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_579(iVar0, &iParam0))
		{
			if ((Global_40.f_4942[iVar0 /*60*/])->f_59 != 0 && (Global_40.f_4942[iVar0 /*60*/])->f_59 != iParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_579(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_481(iParam0))
	{
		return false;
	}
	uVar0 = func_482(iParam0);
	return (*iParam1 && uVar0) != 0;
}

void func_580(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_481(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

void func_581(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_481(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (&Global_40.f_4942[iParam0 /*60*/] - (Global_40.f_4942[iParam0 /*60*/] && iParam1));
}

int func_582(int iParam0)
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	if (iVar0 != 0)
	{
		return iVar0 == (Global_1905944->f_22[iParam0 /*9*/])->f_1;
	}
	return 0;
}

void func_583(int iParam0)
{
	func_654(1);
}

bool func_584(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_220(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1905944[iVar0];
	return MISC::IS_BIT_SET(iVar2, iVar1);
}

void func_585(int iParam0)
{
	int iVar0;
	int iVar1;

	func_220(iParam0, &iVar0, &iVar1);
	func_655(iVar0, iVar1);
}

int func_586(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_656(bParam1, bParam2, bParam3);
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

void func_587(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_588(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_589(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return 0;
	}
	return 1;
}

int func_590(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
	}
	return 0;
}

Vector3 func_591(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return -2578.509f, 389.3037f, 148.3825f;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_15;
}

float func_592()
{
	switch (Global_40.f_4283)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return 70f;
	}
	return 25f;
}

bool func_593()
{
	return Global_1894899 & 2 != 0;
}

int func_594(int iParam0)
{
	if (!func_183(iParam0))
	{
		return 0;
	}
	return func_657(func_336(iParam0));
}

int func_595(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_658(iParam0, bParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

int func_596(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return 0;
	}
	if (func_659(iParam0))
	{
		switch (iParam0)
		{
			case 14:
			case 34:
				return 0;
		}
	}
	switch (iParam0)
	{
		case 5:
		case 8:
		case 10:
		case 12:
		case 13:
		case 14:
		case 18:
		case 21:
		case 27:
		case 28:
		case 29:
		case 34:
		case 40:
		case 41:
		case 44:
		case 46:
		case 48:
		case 51:
		case 54:
		case 55:
		case 63:
			return 1;
	}
	return 0;
}

bool func_597(int iParam0)
{
	return func_660(iParam0);
}

bool func_598(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

int func_599(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_505(iParam0, bParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

int func_600(int iParam0)
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

int func_601(int iParam0, int iParam1)
{
	return 0;
}

int func_602()
{
	return 0;
}

int func_603(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_0xE787F05DFC977BDE(func_215(0), -1845241476, 0);
		case 1:
			return INVENTORY::_0xE787F05DFC977BDE(func_215(0), 1654063339, 0);
		case 2:
			return INVENTORY::_0xE787F05DFC977BDE(func_215(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_604(int iParam0, int iParam1)
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

var func_605(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_606(int iParam0)
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

char* func_607(int iParam0)
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

int func_608(int iParam0)
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

int func_609(int iParam0)
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

int func_610(int iParam0)
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

int func_611(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	struct<4> Var1;
	var uVar5;

	if (func_661(iParam1) && !func_662(iParam1))
	{
		iVar0 = func_663(iParam1);
	}
	else
	{
		return 0;
	}
	func_664(uParam3);
	uVar5 = func_665(iParam2);
	if (!PED::_0x608BC6A6AACD5036(&Var1, iVar0, uVar5, 0))
	{
		return 0;
	}
	*iParam0 = Var1.f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && !ENTITY::_0x88AD6CC10D8D35B2(*iParam0))
	{
		return 0;
	}
	*uParam3 = ENTITY::GET_ENTITY_MODEL(*iParam0);
	uParam3->f_2 = ENTITY::_0xD21C7418C590BB40(*iParam0);
	uParam3->f_3 = ENTITY::_0x0FD25587BB306C86(*iParam0);
	return 1;
}

void func_612(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_666(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_667(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_613(int iParam0, var uParam1)
{
	var uVar0;
	int iVar30;
	int iVar31;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	uVar0 = 29;
	MISC::_COPY_MEMORY(uParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		iVar31 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar31, false, iVar30, true);
		if (func_242(iVar31))
		{
			(*uParam1)[iVar30] = iVar31;
		}
		else
		{
			(*uParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_614(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_73(iVar1, 0))
		{
			func_668(iVar1, 0, bParam0);
		}
		Global_1946804->f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804->f_2657.f_20 = 0;
	Global_1946804->f_2657.f_21 = 0;
	Global_1946804->f_2657.f_22 = 0;
	Global_1946804->f_2657.f_23 = 0;
	Global_1946804->f_2657.f_24 = 0;
	Global_1946804->f_2657.f_25 = 0;
	Global_1946804->f_2657.f_19 = 0;
	Global_1946804->f_2657.f_26.f_6 = 0;
}

void func_615(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_113() == -1)
	{
		func_669(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26795.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_26795[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_26795.f_20;
		Global_1946804->f_2657.f_21 = Global_26795.f_21;
		Global_1946804->f_2657.f_22 = Global_26795.f_22;
		Global_1946804->f_2657.f_23 = Global_26795.f_23;
		Global_1946804->f_2657.f_24 = Global_26795.f_24;
		Global_1946804->f_2657.f_25 = Global_26795.f_25;
		Global_1946804->f_2657.f_19 = Global_26795.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36637.f_45.f_350.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_36637.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_36637.f_45.f_350.f_20;
		Global_1946804->f_2657.f_21 = Global_36637.f_45.f_350.f_21;
		Global_1946804->f_2657.f_22 = Global_36637.f_45.f_350.f_22;
		Global_1946804->f_2657.f_23 = Global_36637.f_45.f_350.f_23;
		Global_1946804->f_2657.f_24 = Global_36637.f_45.f_350.f_24;
		Global_1946804->f_2657.f_25 = Global_36637.f_45.f_350.f_25;
		Global_1946804->f_2657.f_19 = Global_36637.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar2 = &Global_1946804->f_2657[iVar0];
		if (func_110(iVar2) != -999503751)
		{
			func_670(&(Global_1946804->f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_671(iVar2, 0))
		{
			func_672(iVar2, &Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_616(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_673(iParam0))
	{
		return;
	}
	iVar0 = func_110(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_674(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_674(iParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_674(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_674(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_674(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_674(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_675(0))
	{
		func_676(iParam0, 1);
		if (func_315() == 1160113249)
		{
			func_676(func_675(-2125499975), 0);
		}
		else
		{
			func_676(func_675(1160113249), 0);
		}
	}
	func_677();
	if (func_678(iVar0))
	{
		INVENTORY::_0x766315A564594401(func_215(0), iParam0, 0);
	}
	func_672(iParam0, bParam3);
	if (bParam2)
	{
		func_556(0, 0);
	}
}

void func_617(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (uParam1[iVar0] != 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, uParam1[iVar0], 0, 0))
			{
				if (func_241(uParam1[iVar0]))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, uParam1[iVar0], 0, false, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			iVar1 = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, false, iVar0, true);
			if (iVar1 != uParam1[iVar0])
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, uParam1[iVar0], true, iVar0, false, false);
			}
		}
		iVar0++;
	}
}

int func_618(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_619(int iParam0, int iParam1)
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

void func_620(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_621(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_531(*iParam0);
	iVar1 = func_530(*iParam0);
	if (iParam1 < 1 || iParam1 > func_536(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_622(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_623(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_624(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_625(int iParam0)
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
	iVar0 = func_535(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_534(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_533(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_530(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_531(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_532(iParam0);
	if (iVar5 < 1 || iVar5 > func_536(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

bool func_626(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_627(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_628(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_629(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_630(var uParam0, int iParam1, int iParam2)
{
	*((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_631(var uParam0, int iParam1, int iParam2)
{
	*((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_632(var uParam0, int iParam1)
{
	int iVar0;

	if (func_113() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		(Global_26795.f_26[iParam1 /*120*/])->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_630(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	(Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_631(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
		iVar0++;
	}
}

void func_633(int iParam0, int iParam1, int iParam2)
{
	if (func_113() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26795.f_26[iParam1 /*120*/] = (Global_26795.f_26[iParam1 /*120*/] || iParam0);
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36637.f_45.f_350.f_26[iParam1 /*120*/] = (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] || iParam0);
	}
}

void func_634(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

int func_635(int iParam0)
{
	if (!func_73(iParam0, 0))
	{
		return 0;
	}
	if (func_31(iParam0, -1066545920))
	{
		return 1;
	}
	return 0;
}

int func_636(int iParam0)
{
	if (!func_73(iParam0, 0))
	{
		return 0;
	}
	if (func_31(iParam0, -284267618))
	{
		return 1;
	}
	return 0;
}

int func_637(int iParam0)
{
	if (!func_73(iParam0, 0))
	{
		return 0;
	}
	if (func_31(iParam0, 363491182))
	{
		return 1;
	}
	return 0;
}

int func_638(int iParam0)
{
	if (!func_73(iParam0, 0))
	{
		return 0;
	}
	if (func_31(iParam0, 1406113494))
	{
		return 1;
	}
	return 0;
}

int func_639(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_679(iParam0);
		case 1:
			return func_680(iParam0);
		case 2:
			return func_681(iParam0);
		case 3:
			return func_682(iParam0);
	}
	return 0;
}

int func_640(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_683(iParam0);
		case 1:
			return func_684(iParam0);
		case 2:
			return func_685(iParam0);
		case 3:
			return func_686(iParam0);
		case 4:
			return func_687(iParam0);
		case 5:
			return func_688(iParam0);
		case 6:
			return func_689(iParam0);
		case 7:
			return func_690(iParam0);
		case 8:
			return func_691(iParam0);
	}
	return 0;
}

bool func_641(int iParam0, int iParam1)
{
	return iParam1 == func_69(iParam0, 1224357681);
}

int func_642(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = Global_1914319->f_17378.f_1010.f_201;
	if (iParam0 != 0)
	{
		if (iVar1 < 200)
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (&Global_1914319->f_17378.f_1010[iVar0] == iParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_643(int iParam0, int iParam1)
{
	if (func_113() == -1)
	{
		if (iParam1 == 61)
		{
			if (func_31(iParam0, 1490540191))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_644(int iParam0, int iParam1)
{
	struct<4> Var0;
	int iVar5;
	int iVar6;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar5 = func_692(iParam1);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_373(6, &Var0))
	{
		return 0;
	}
	Var0.f_2 = -815325344;
	Var0.f_3 = func_693(iVar5);
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		iVar6 = iParam0;
		Var0.f_2 = 549615901;
		Var0.f_3 = iVar6;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			return 1;
		}
	}
	return 0;
}

int func_645(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587: /* GXTEntry: "Hunting Request" */
			return -949689219;
		case 1610047510: /* GXTEntry: "Hunting Request" */
			return -1248968496;
		case 1317879106: /* GXTEntry: "Hunting Request" */
			return 1706369307;
		case 1062444751: /* GXTEntry: "Hunting Request" */
			return 1520110311;
		case 754186760: /* GXTEntry: "Hunting Request" */
			return -1992824800;
		default:
			break;
	}
	return 0;
}

int func_646(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_225(iParam0, 20);
	if (iVar0 == 5)
	{
		if ((((func_651(iParam0, 5, 0) && func_651(iParam0, 6, 0)) && func_651(iParam0, 7, 0)) && func_651(iParam0, 8, 0)) && func_651(iParam0, 9, 0))
		{
			return func_107(iParam1, 8388608);
		}
	}
	else if (iVar0 == 4)
	{
		if (((func_651(iParam0, 5, 0) && func_651(iParam0, 6, 0)) && func_651(iParam0, 7, 0)) && func_651(iParam0, 8, 0))
		{
			return func_107(iParam1, 8388608);
		}
	}
	else if (iVar0 == 3)
	{
		if ((func_651(iParam0, 5, 0) && func_651(iParam0, 6, 0)) && func_651(iParam0, 7, 0))
		{
			return func_107(iParam1, 8388608);
		}
	}
	else if (iVar0 == 2)
	{
		if (func_651(iParam0, 5, 0) && func_651(iParam0, 6, 0))
		{
			return func_107(iParam1, 8388608);
		}
	}
	return 0;
}

int func_647(int iParam0)
{
	switch (iParam0)
	{
		case 925148953: /* GXTEntry: "Heartlands Oil Field Bone Location" */
			return 1175400068;
		case 1373101183: /* GXTEntry: "Heartlands Dewberry Creek Bone Location" */
			return 854689865;
		case -1728976206: /* GXTEntry: "Scarlett Meadows Dewberry Creek Bone Location" */
			return 1772877245;
		case 656082694: /* GXTEntry: "Heartlands Grassy Hill Bone Location" */
			return -891504611;
		case 1821250027: /* GXTEntry: "Big Valley Rocky Slope Bone Location" */
			return -1134748898;
		case -1967305143: /* GXTEntry: "Grizzlies Rock Wall Bone Location" */
			return -810270260;
		case -840313695: /* GXTEntry: "Heartlands Cliff Face Bone Location" */
			return 83602522;
		case -595627572: /* GXTEntry: "Heartlands Abandoned Shack Bone Location" */
			return -2054476413;
		case -1301013066: /* GXTEntry: "Cholla Springs High Desert Bone Location" */
			return 1934461192;
		case 1625521054: /* GXTEntry: "Cholla Springs Jorge\'s Gap Bone Location" */
			return -1434912930;
		case -1796283468: /* GXTEntry: "Hennigan\'s Stead Pike\'s Basin Bone Location" */
			return 491871729;
		case 1095777400: /* GXTEntry: "Hennigan\'s Stead San Luis River Bone Location" */
			return -1078418763;
		case 2005280995: /* GXTEntry: "Cumberland Forest Six Point Overlook Bone Location" */
			return -1360396008;
		case -2048965227: /* GXTEntry: "Grizzlies Calumet Ravine Bone Location" */
			return -462984174;
		case -638980695: /* GXTEntry: "Grizzlies Dakota River Ledge Bone Location" */
			return -751449681;
		case 1782156874: /* GXTEntry: "Grizzlies Northern Boundary Bone Location" */
			return -1973995525;
		case -1064322315: /* GXTEntry: "Grizzlies O\'Creagh\'s Run Overlook Bone Location" */
			return 1988923494;
		case -826878141: /* GXTEntry: "Roanoke Ridge Overlook Bone Location" */
			return -1386480124;
		case 583368543: /* GXTEntry: "Cumberland Forest Bacchus Station Bone Location" */
			return -1676256391;
		case 236671671: /* GXTEntry: "Roanoke Ridge Valley Overlook Bone Location" */
			return 901975752;
		case -1210046910: /* GXTEntry: "Roanoke Ridge Kamassa River Bone Location" */
			return 2119466214;
		case -1297277988: /* GXTEntry: "Roanoke Ridge Van Horn Bone Location" */
			return 1812453453;
		case -627446859: /* GXTEntry: "Heartlands Northern Boundary Bone Location" */
			return 797237060;
		case -866431176: /* GXTEntry: "Big Valley Beryl\'s Dream Overlook Bone Location" */
			return 468989987;
		case -1899965424: /* GXTEntry: "Heartlands Southern Gorge Bone Location" */
			return 1393010249;
		case 1761708178: /* GXTEntry: "Big Valley Northern Cave Bone Location" */
			return 1099957082;
		case 764875198: /* GXTEntry: "Rio Bravo Del Lobo Rock Bone Location" */
			return -415281478;
		case -1613859285: /* GXTEntry: "Rio Bravo San Luis River Bone Location" */
			return -722949619;
		case 1382734693: /* GXTEntry: "Gaptooth Ridge North Tumbleweed Bone Location" */
			return 202086482;
		case 1032366068: /* GXTEntry: "Gaptooth Ridge South Tumbleweed Bone Location" */
			return -87394864;
		default:
			break;
	}
	return 0;
}

int func_648(int iParam0)
{
	switch (iParam0)
	{
		case 878840834: /* GXTEntry: "Rock Carving Coordinates 1" */
			return 790725359;
		case 1128245693: /* GXTEntry: "Rock Carving Coordinates 2" */
			return -1018620084;
		case -632432677: /* GXTEntry: "Rock Carving Coordinates 3" */
			return 1417352943;
		case -425693056: /* GXTEntry: "Rock Carving Coordinates 4" */
			return -198238953;
		case -37052716: /* GXTEntry: "Rock Carving Coordinates 5" */
			return -1572028097;
		case 204880811: /* GXTEntry: "Rock Carving Coordinates 6" */
			return 1013020015;
		case -905988301: /* GXTEntry: "Rock Carving Coordinates 7" */
			return 529834059;
		case -1746545912: /* GXTEntry: "Rock Carving Coordinates 8" */
			return -851121144;
		case -549854809: /* GXTEntry: "Rock Carving Coordinates 9" */
			return 489753387;
		case 1756820867: /* GXTEntry: "Rock Carving Coordinates 10" */
			return 288056757;
		default:
			break;
	}
	return 0;
}

int func_649(int iParam0)
{
	switch (iParam0)
	{
		case -2108314374: /* GXTEntry: "Legendary Chain Pickerel" */
		case -1696275132: /* GXTEntry: "Legendary Muskie" */
		case -1490884871: /* GXTEntry: "Legendary Bluegill" */
		case -1193798153: /* GXTEntry: "Legendary Lake Sturgeon" */
		case -1114363619: /* GXTEntry: "Legendary Redfin Pickerel" */
		case -1030441283: /* GXTEntry: "Legendary Steelhead Trout" */
		case -804542901: /* GXTEntry: "Legendary Longnose Gar" */
		case -787702678: /* GXTEntry: "Legendary Largemouth Bass" */
		case -368407134: /* GXTEntry: "Legendary Rock Bass" */
		case -161595323: /* GXTEntry: "Legendary Perch" */
		case 323124696: /* GXTEntry: "Legendary Bullhead Catfish" */
		case 1265573293: /* GXTEntry: "Legendary Sockeye Salmon" */
		case 1997759228: /* GXTEntry: "Legendary Smallmouth Bass" */
			return 1;
	}
	return 0;
}

int func_650(int iParam0)
{
	switch (iParam0)
	{
		case 323124696: /* GXTEntry: "Legendary Bullhead Catfish" */
			return -1865241121;
		case -2108314374: /* GXTEntry: "Legendary Chain Pickerel" */
			return 2117142684;
		case -1193798153: /* GXTEntry: "Legendary Lake Sturgeon" */
			return -1409326024;
		case -787702678: /* GXTEntry: "Legendary Largemouth Bass" */
			return -641744968;
		case -804542901: /* GXTEntry: "Legendary Longnose Gar" */
			return -946988203;
		case -1696275132: /* GXTEntry: "Legendary Muskie" */
			return -646136018;
		case -161595323: /* GXTEntry: "Legendary Perch" */
			return -955835837;
		case -1114363619: /* GXTEntry: "Legendary Redfin Pickerel" */
			return -179276075;
		case -368407134: /* GXTEntry: "Legendary Rock Bass" */
			return -492711560;
		case 1997759228: /* GXTEntry: "Legendary Smallmouth Bass" */
			return 1764383959;
		case 1265573293: /* GXTEntry: "Legendary Sockeye Salmon" */
			return 317501533;
		case -1030441283: /* GXTEntry: "Legendary Steelhead Trout" */
			return 817753087;
		case -1490884871: /* GXTEntry: "Legendary Bluegill" */
			return 576606016;
		default:
			break;
	}
	return 0;
}

int func_651(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = func_285(iParam0, iParam1);
	if ((((((((((((((((((((iVar0 == 444160793 || iVar0 == -1969404854) || iVar0 == 1761263432) || iVar0 == -843795569) || iVar0 == -832850511) || iVar0 == -1464585113) || iVar0 == -1290897778) || iVar0 == -100913452) || iVar0 == 313332607) || iVar0 == -124539232) || iVar0 == 59384454) || iVar0 == 905173572) || iVar0 == 1432949803) || iVar0 == -983831788) || iVar0 == -1882344824) || iVar0 == 323124696) || iVar0 == -2108314374) || iVar0 == -161595323) || iVar0 == -1114363619) || iVar0 == -368407134) || iVar0 == -1490884871)
	{
		if (func_61(iVar0, 1, 0))
		{
			if (bParam2)
			{
				Global_1901328->f_94 = 1;
				func_694(iVar0, 1, 0, -142743235, 0);
			}
			return 1;
		}
	}
	else if ((((((((((iVar0 == 102446365 || iVar0 == 924882045) || iVar0 == -935543049) || iVar0 == -1866642239) || iVar0 == -1193798153) || iVar0 == -804542901) || iVar0 == -1696275132) || iVar0 == -787702678) || iVar0 == 1997759228) || iVar0 == 1265573293) || iVar0 == -1030441283)
	{
		if (func_695(iVar0, bParam2))
		{
			return 1;
		}
	}
	return 0;
}

int func_652(int iParam0)
{
	switch (iParam0)
	{
		case -1521783510: /* GXTEntry: "Clamshell Orchid" */
		case -651064726: /* GXTEntry: "Acuna\'s Star Orchid" */
		case -404270094: /* GXTEntry: "Cigar Orchid" */
		case -323969289: /* GXTEntry: "Rat Tail Orchid" */
		case -150591160: /* GXTEntry: "Night Scented Orchid" */
		case 728781265: /* GXTEntry: "Lady of the Night Orchid" */
		case 927763737: /* GXTEntry: "Sparrow\'s Egg Orchid" */
		case 1019229063: /* GXTEntry: "Queen\'s Orchid" */
		case 1504361882: /* GXTEntry: "Spider Orchid" */
		case 1714875242: /* GXTEntry: "Dragon\'s Mouth Orchid" */
		case 1794857344: /* GXTEntry: "Lady Slipper Orchid" */
		case 1952409553: /* GXTEntry: "Moccasin Flower Orchid" */
		case 2093126853: /* GXTEntry: "Ghost Orchid" */
			return 1;
	}
	return 0;
}

int func_653(int iParam0)
{
	switch (iParam0)
	{
		case -1854702679: /* GXTEntry: "Cigarette Cards Amazing Inventions" */
		case -1230863414: /* GXTEntry: "Cigarette Cards Stars of the Stage" */
		case -1028735103: /* GXTEntry: "Cigarette Cards Gems Of Beauty" */
		case -1021394391: /* GXTEntry: "Cigarette Cards Artists & Poets" */
		case -987306668: /* GXTEntry: "Cigarette Cards Vistas of America" */
		case -479775696: /* GXTEntry: "Cigarette Cards Prominent Americans" */
		case -435742319: /* GXTEntry: "Cigarette Cards The World\'s Champions" */
		case 232875659: /* GXTEntry: "Cigarette Cards Fauna of North America" */
		case 515229791: /* GXTEntry: "Cigarette Cards Flora of America" */
		case 554799588: /* GXTEntry: "Cigarette Cards Famous Gunslingers" */
		case 1265323898: /* GXTEntry: "Cigarette Cards Breeds of Horses" */
		case 1423129537: /* GXTEntry: "Cigarette Cards Marvels of Travel" */
			return 1;
	}
	return 0;
}

void func_654(int iParam0)
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

void func_655(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_656(bool bParam0, bool bParam1, bool bParam2)
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

int func_657(int iParam0)
{
	return iParam0 & 31;
}

int func_658(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == 18)
	{
		return 0;
	}
	if (iParam0 == 71)
	{
		return 0;
	}
	if ((bParam1 && MAP::DOES_BLIP_EXIST(((*Global_1835011)[iParam0 /*74*/])->f_27)) && ((*Global_1835011)[iParam0 /*74*/])->f_21 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_659(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_696((*Global_1835011)[iParam0 /*74*/]);
	}
	return 0;
}

int func_660(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return 1;
	}
	return 0;
}

int func_661(int iParam0)
{
	iParam0 = func_697(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
	{
		return 1;
	}
	return 0;
}

int func_662(int iParam0)
{
	int iVar0;

	iParam0 = func_697(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_661(iParam0))
	{
		return 0;
	}
	iVar0 = func_663(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_663(int iParam0)
{
	iParam0 = func_697(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/];
}

void func_664(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_10[iVar0 /*8*/] = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_1 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_2 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_3 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_4 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_5 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_6 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_7 = 0;
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
}

int func_665(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 6;
	}
	return 0;
}

void func_666(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4)
{
	*iParam3 = PED::_0x88EFFED5FE8B0B4A(iParam0);
	*uParam2 = FLOCK::_0xF8B48A361DC388AE(iParam0);
	if (*uParam2 == 2)
	{
		*iParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*iParam1 = 3;
	}
	else
	{
		*uParam4 = PED::_0x7BCC6087D130312A(iParam0);
		switch (*uParam4)
		{
			case 0:
				*iParam1 = 0;
				break;
			case 1:
				*iParam1 = 1;
				break;
			case -1:
			case 2:
				*iParam1 = 2;
				break;
		}
	}
}

bool func_667(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;

	iVar0 = iParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = PED::_0x9E7738B291706746(iParam0, iParam1, iParam2);
	return uVar2;
}

void func_668(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_110(iParam0))
	{
		case -2061583405:
			bVar0 = func_698(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_698(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_698(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_698(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_698(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_698(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_677();
	}
	if (bParam1)
	{
		func_556(0, 0);
	}
}

void func_669(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;

	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_7 = -1;
	Var2.f_8 = -1;
	Var2.f_13 = -1;
	Var2 = { func_357(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_359(&Var2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946804->f_2657.f_26.f_2 = 5;
					Global_1946804->f_2657.f_26.f_1 = 5;
					Global_1946804->f_2657.f_26 = 5;
					break;
			}
		}
		func_9(iVar0);
	}
}

void func_670(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_699(iParam2, *uParam0);
	func_700(uParam0->f_1[*uParam0 /*5*/], iParam1, -1, 1, 0);
	*uParam0++;
}

int func_671(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_208(iParam0, 0, 0) };
	Var5 = { func_246(iParam0, Var0, Var0.f_4, 0) };
	if (func_356(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x9A113C660AEA3832(func_215(0), &Var5, iParam1);
	return 1;
}

void func_672(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_208(iParam0, 0, 0) };
	Var5 = { func_246(iParam0, Var0, Var0.f_4, 0) };
	if (func_356(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_215(0), &Var5, bParam1);
}

int func_673(int iParam0)
{
	if (func_113() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (iParam0 == 1164374808)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_674(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;

	iVar1 = iParam0;
	if (Global_1946804->f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_701(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_671(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_110(iParam0) != -999503751)
	{
		func_670(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_675(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_315();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846 /* GXTEntry: "John\'s Classic Hat" */;
	}
	return -1535516064 /* GXTEntry: "Arthur\'s Hat" */;
}

int func_676(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_208(iParam0, 0, 0) };
	Var5 = { func_246(iParam0, Var0, Var0.f_4, 0) };
	if (func_356(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, func_215(0), &Var5);
	return 1;
}

void func_677()
{
	int iVar0;

	if (func_113() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_2657.f_19)
		{
			Global_26795[iVar0] = &Global_1946804->f_2657[iVar0];
			iVar0++;
		}
		Global_26795.f_20 = Global_1946804->f_2657.f_20;
		Global_26795.f_21 = Global_1946804->f_2657.f_21;
		Global_26795.f_22 = Global_1946804->f_2657.f_22;
		Global_26795.f_23 = Global_1946804->f_2657.f_23;
		Global_26795.f_24 = Global_1946804->f_2657.f_24;
		Global_26795.f_19 = Global_1946804->f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		Global_36637.f_45.f_350[iVar0] = &Global_1946804->f_2657[iVar0];
		iVar0++;
	}
	Global_36637.f_45.f_350.f_20 = Global_1946804->f_2657.f_20;
	Global_36637.f_45.f_350.f_21 = Global_1946804->f_2657.f_21;
	Global_36637.f_45.f_350.f_22 = Global_1946804->f_2657.f_22;
	Global_36637.f_45.f_350.f_23 = Global_1946804->f_2657.f_23;
	Global_36637.f_45.f_350.f_24 = Global_1946804->f_2657.f_24;
	Global_36637.f_45.f_350.f_19 = Global_1946804->f_2657.f_19;
}

bool func_678(int iParam0)
{
	return func_703(func_702(iParam0));
}

int func_679(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058 /* GXTEntry: "Bandit Bandolier" */;
		case 1:
			return 1877538667 /* GXTEntry: "Explorer Bandolier" */;
		case 2:
			return -747118240 /* GXTEntry: "Gambler Bandolier" */;
		case 3:
			return 356885366 /* GXTEntry: "Herbalist Bandolier" */;
		case 4:
			return -733784435 /* GXTEntry: "Master Hunter Bandolier" */;
		case 5:
			return -2010021430 /* GXTEntry: "Horseman Bandolier" */;
		case 6:
			return -1563051210 /* GXTEntry: "Sharpshooter Bandolier" */;
		case 7:
			return 1532314048 /* GXTEntry: "Survivalist Bandolier" */;
		case 8:
			return -1378972544 /* GXTEntry: "Weapons Expert Bandolier" */;
		default:
			break;
	}
	return 0;
}

int func_680(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -77597297 /* GXTEntry: "Bandit Gun Belt" */;
		case 1:
			return 1289620458 /* GXTEntry: "Explorer Gun Belt" */;
		case 2:
			return 351104126 /* GXTEntry: "Gambler Gun Belt" */;
		case 3:
			return -991258198 /* GXTEntry: "Herbalist Gun Belt" */;
		case 4:
			return -446539844 /* GXTEntry: "Master Hunter Gun Belt" */;
		case 5:
			return 2146082234;
		case 6:
			return 330185476 /* GXTEntry: "Sharpshooter Gun Belt" */;
		case 7:
			return -1208917184 /* GXTEntry: "Survivalist Gun Belt" */;
		case 8:
			return -12904227 /* GXTEntry: "Weapons Expert Gun Belt" */;
		default:
			break;
	}
	return 0;
}

int func_681(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 624387589 /* GXTEntry: "Bandit Holster" */;
		case 1:
			return 1398329674 /* GXTEntry: "Explorer Holster" */;
		case 2:
			return -35737408 /* GXTEntry: "Gambler Holster" */;
		case 3:
			return 651323163 /* GXTEntry: "Herbalist Holster" */;
		case 4:
			return 343794650 /* GXTEntry: "Master Hunter Holster" */;
		case 5:
			return 2072880089 /* GXTEntry: "Horseman Holster" */;
		case 6:
			return -2120749726 /* GXTEntry: "Sharpshooter Holster" */;
		case 7:
			return -1749072364 /* GXTEntry: "Survivalist Holster" */;
		case 8:
			return -583780175 /* GXTEntry: "Weapons Expert Holster" */;
		default:
			break;
	}
	return 0;
}

int func_682(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1066104444 /* GXTEntry: "Bandit Off-Hand Holster" */;
		case 1:
			return -567070698 /* GXTEntry: "Explorer Off-Hand Holster" */;
		case 2:
			return 797308288 /* GXTEntry: "Gambler Off-Hand Holster" */;
		case 3:
			return -1669506545 /* GXTEntry: "Herbalist Off-Hand Holster" */;
		case 4:
			return -1011624341 /* GXTEntry: "Master Hunter Off-Hand Holster" */;
		case 5:
			return 516134254 /* GXTEntry: "Horseman Off-Hand Holster" */;
		case 6:
			return -940514956 /* GXTEntry: "Sharpshooter Off-Hand Holster" */;
		case 7:
			return 2030473481 /* GXTEntry: "Survivalist Off-Hand Holster" */;
		case 8:
			return 2084389834 /* GXTEntry: "Weapons Expert Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_683(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058 /* GXTEntry: "Bandit Bandolier" */;
		case 1:
			return -77597297 /* GXTEntry: "Bandit Gun Belt" */;
		case 2:
			return 624387589 /* GXTEntry: "Bandit Holster" */;
		case 3:
			return 1066104444 /* GXTEntry: "Bandit Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_684(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1877538667 /* GXTEntry: "Explorer Bandolier" */;
		case 1:
			return 1289620458 /* GXTEntry: "Explorer Gun Belt" */;
		case 2:
			return 1398329674 /* GXTEntry: "Explorer Holster" */;
		case 3:
			return -567070698 /* GXTEntry: "Explorer Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_685(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -747118240 /* GXTEntry: "Gambler Bandolier" */;
		case 1:
			return 351104126 /* GXTEntry: "Gambler Gun Belt" */;
		case 2:
			return -35737408 /* GXTEntry: "Gambler Holster" */;
		case 3:
			return 797308288 /* GXTEntry: "Gambler Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_686(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 356885366 /* GXTEntry: "Herbalist Bandolier" */;
		case 1:
			return -991258198 /* GXTEntry: "Herbalist Gun Belt" */;
		case 2:
			return 651323163 /* GXTEntry: "Herbalist Holster" */;
		case 3:
			return -1669506545 /* GXTEntry: "Herbalist Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_687(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -733784435 /* GXTEntry: "Master Hunter Bandolier" */;
		case 1:
			return -446539844 /* GXTEntry: "Master Hunter Gun Belt" */;
		case 2:
			return 343794650 /* GXTEntry: "Master Hunter Holster" */;
		case 3:
			return -1011624341 /* GXTEntry: "Master Hunter Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_688(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2010021430 /* GXTEntry: "Horseman Bandolier" */;
		case 1:
			return 2146082234;
		case 2:
			return 2072880089 /* GXTEntry: "Horseman Holster" */;
		case 3:
			return 516134254 /* GXTEntry: "Horseman Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_689(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1563051210 /* GXTEntry: "Sharpshooter Bandolier" */;
		case 1:
			return 330185476 /* GXTEntry: "Sharpshooter Gun Belt" */;
		case 2:
			return -2120749726 /* GXTEntry: "Sharpshooter Holster" */;
		case 3:
			return -940514956 /* GXTEntry: "Sharpshooter Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_690(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1532314048 /* GXTEntry: "Survivalist Bandolier" */;
		case 1:
			return -1208917184 /* GXTEntry: "Survivalist Gun Belt" */;
		case 2:
			return -1749072364 /* GXTEntry: "Survivalist Holster" */;
		case 3:
			return 2030473481 /* GXTEntry: "Survivalist Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_691(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1378972544 /* GXTEntry: "Weapons Expert Bandolier" */;
		case 1:
			return -12904227 /* GXTEntry: "Weapons Expert Gun Belt" */;
		case 2:
			return -583780175 /* GXTEntry: "Weapons Expert Holster" */;
		case 3:
			return 2084389834 /* GXTEntry: "Weapons Expert Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_692(int iParam0)
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

int func_693(int iParam0)
{
	return func_704(iParam0);
}

int func_694(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	if (!func_73(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_213(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_0xB6CFEC32E3742779(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_169(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_61(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_166(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_89(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_89(iParam0, 0, 0) - iParam1) < 0)
		{
			func_694(iParam0, func_89(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_106(iParam0) == joaat("weapon"))
	{
		if (!func_705(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_706(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_115(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_169(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_707(iParam0, iParam1);
	return 1;
}

int func_695(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	var uVar19;
	var uVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;

	if (PED::_0xA911EE21EDF69DAF(Global_35))
	{
		iVar14 = ITEMSET::CREATE_ITEMSET(false);
		PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar14);
		if (ITEMSET::IS_ITEMSET_VALID(iVar14))
		{
			iVar15 = ITEMSET::GET_ITEMSET_SIZE(iVar14);
			iVar16 = 0;
			while (iVar16 < iVar15)
			{
				iVar0 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar16, iVar14));
				if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
				}
				else if (ENTITY::_0x9A100F1CF4546629(iVar0) || ENTITY::_0xC346A546612C49A9(iVar0))
				{
					iVar21 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					iVar1 = func_708(iVar21, &uVar2);
					iVar23 = func_709(iVar0);
					if (iVar23 == iParam0)
					{
						if (bParam1)
						{
							Global_1901328->f_94 = 1;
							ENTITY::_0x0D0DB2B6AF19A987(&iVar0);
							func_169(iVar23, -1, 0, 0, 0);
							Global_1901328->f_94 = 0;
						}
						ITEMSET::DESTROY_ITEMSET(iVar14);
						return 1;
					}
					iVar22 = 0;
					while (iVar22 < iVar1)
					{
						if (&uVar2[iVar22] == iParam0)
						{
							if (bParam1)
							{
								Global_1901328->f_94 = 1;
								ENTITY::_0x0D0DB2B6AF19A987(&iVar0);
								func_169(&(uVar2[iVar22]), -1, 0, 0, 0);
								Global_1901328->f_94 = 0;
							}
							ITEMSET::DESTROY_ITEMSET(iVar14);
							return 1;
						}
						iVar22++;
					}
				}
				else
				{
					iVar24 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					func_666(iVar24, &iVar18, &uVar19, &iVar17, &uVar20);
					if (func_667(&iVar13, iVar24, iVar17, iVar18))
					{
						if (iVar13 == iParam0)
						{
							if (bParam1)
							{
								Global_1901328->f_94 = 1;
								ENTITY::_0x0D0DB2B6AF19A987(&iVar0);
								func_169(iVar13, -1, 0, 0, 0);
								Global_1901328->f_94 = 0;
							}
							ITEMSET::DESTROY_ITEMSET(iVar14);
							return 1;
						}
					}
				}
				iVar16++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar14);
		}
		else
		{
			return 0;
		}
	}
	return func_710(iParam0, bParam1);
}

int func_696(var uParam0)
{
	if (func_711(&(uParam0->f_29), 62))
	{
		switch (func_712())
		{
			case 1:
				if (!func_711(&(uParam0->f_29), 6))
				{
					return 0;
				}
				break;
			case 2:
				if (!func_711(&(uParam0->f_29), 8))
				{
					return 0;
				}
				break;
			case 4:
				if (!func_711(&(uParam0->f_29), 16))
				{
					return 0;
				}
				break;
			case 8:
				if (!func_711(&(uParam0->f_29), 32))
				{
					if (func_711(&(uParam0->f_29), 2))
					{
						if (func_533(func_406()) < 5)
						{
							return 0;
						}
					}
					else
					{
						return 0;
					}
				}
				break;
		}
	}
	return 1;
}

int func_697(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_698(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_701(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_110(iParam0) != -999503751)
		{
			func_713(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_110(iParam0) != -999503751)
	{
		func_713(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_671(iParam0, 1);
	return 1;
}

void func_699(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_700(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		func_714(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_294(func_409(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_715(uParam0);
	}
}

int func_701(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804->f_2657.f_19)
	{
		if (iParam0 == &Global_1946804->f_2657[*iParam1])
		{
			return 1;
		}
		*iParam1++;
	}
	return 0;
}

int func_702(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		case -1719060085:
			return 16;
		case -999503751:
			return 1;
		case -525676072:
			return 4;
		case 81053684:
			return 8;
		case -413129408:
			return 32;
		default:
			break;
	}
	return 0;
}

bool func_703(var uParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && uParam0) != 0;
}

int func_704(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1391860027;
		case 3:
			return -2049683567;
		case 4:
			return -1639750081;
		case 6:
			return -543306319;
		case 7:
			return 93160283;
		case 8:
			return -1838611891;
		case 1:
			return 1619762084;
		case 2:
			return -2104053099;
		case 9:
			return -1431073983;
		case 10:
			return 887432345;
		case 11:
			return -238320361;
		case 26:
			return -1433937760;
		case 27:
			return -681691620;
		case 28:
			return -706234936;
		case 29:
			return -282099500;
		case 30:
			return 1450105278;
		case 31:
			return -732027686;
		case 5:
			return 379756162;
		case 15:
			return 2128397741;
		case 17:
			return -924263120;
		case 33:
			return 1915478031;
		case 12:
			return -1775364220;
		case 13:
			return -1504845897;
		case 14:
			return -1227686818;
		case 18:
			return 1442571063;
		case 19:
			return -997221403;
		case 22:
			return 285759500;
		case 20:
			return 1489861748;
		case 32:
			return -2132712788;
		case 34:
			return 1427539511;
		case 23:
			return -967055532;
		case 24:
			return 662159626;
		case 25:
			return 1743191502;
		case 21:
			return -830712656;
		default:
			break;
	}
	return 0;
}

int func_705(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;
	struct<10> Var16;
	struct<4> Var30;
	int iVar35;
	int iVar36;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_357(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_358(&Var0, func_349(0));
	}
	if (!func_359(&Var0, &iVar14, &iVar15, 0))
	{
		return 0;
	}
	Var16.f_9 = -1591664384;
	iVar35 = 0;
	while (iVar35 < iVar15)
	{
		if (iVar36 >= iParam1)
		{
		}
		else
		{
			if (!func_304(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_247(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_9(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return 1;
}

int func_706(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_73(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_208(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_716(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_246(iParam0, Var0, Var0.f_4, bParam4) };
	return func_247(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_707(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_31(iParam0, 606799272))
		{
			func_717(iParam0, iParam1);
		}
		if (func_31(iParam0, -1112814642) && func_31(iParam0, -1697809989))
		{
			func_137(iParam0, iParam1, 1, 0);
		}
	}
}

int func_708(int iParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::_0x9A100F1CF4546629(iParam0) && !ENTITY::_0xC346A546612C49A9(iParam0))
	{
		return 0;
	}
	func_666(iParam0, &uVar1, &uVar2, &uVar0, &uVar3);
	uVar4 = PED::_0x6B89FAA36FC909A3(uParam1, iParam0, uVar0, uVar1);
	return uVar4;
}

int func_709(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_666(iVar0, &iVar2, &uVar3, &iVar1, &uVar4);
	if (func_667(&uVar5, iVar0, iVar1, iVar2))
	{
	}
	return uVar5;
}

int func_710(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;
	struct<10> Var17;
	int iVar31;
	int iVar32;

	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	Var3.f_13 = -1;
	Var17.f_9 = -1591664384;
	Var3.f_1 = 1084182731;
	iVar31 = func_718(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar31) && func_719(INVENTORY::_0x13D234A2A3F66E63(iVar31), &Var3, &iVar0, &iVar1))
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_304(&Var17, iVar2, iVar0, iVar1))
			{
				if (iParam0 == Var17.f_4)
				{
					if (bParam1)
					{
						iVar32 = 1;
						func_720(&iVar31, iParam0, &iVar32, 1, -142743235);
					}
					func_9(iVar0);
					return 1;
				}
			}
			iVar2++;
		}
		func_9(iVar0);
	}
	return 0;
}

int func_711(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

int func_712()
{
	return &Global_1899516;
}

void func_713(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_721(iParam1);
	func_722(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_723(&(uParam0->f_26), iVar1);
		if (func_724(uParam0->f_26, &iVar0))
		{
			func_725(iVar0, iVar1);
		}
	}
}

void func_714(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_726(&(uParam0->f_3));
}

void func_715(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_727(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

int func_716(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_404(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	if (!func_115(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_215(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_717(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (func_113() == -1)
	{
		if (func_95(43))
		{
			if (func_31(iParam0, 412399755))
			{
				func_278(-1791518714);
				if (func_279() == 0)
				{
					func_219(0, 10);
					iVar0 = func_728(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_281(iParam0) < func_282(iParam0))
						{
							func_103(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_95(44))
		{
			if (func_31(iParam0, 709057512))
			{
				func_278(-2087881550);
				if (func_279() == 1)
				{
					func_219(0, 10);
					iVar0 = func_728(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_281(iParam0) < func_282(iParam0))
						{
							func_103(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_95(45))
		{
			if (func_31(iParam0, -1478961327))
			{
				func_278(1908068621);
				if (func_279() == 2)
				{
					func_219(0, 10);
					iVar0 = func_728(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_281(iParam0) < func_282(iParam0))
						{
							func_103(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_95(46))
		{
			if (func_31(iParam0, -1238404098))
			{
				func_278(1611247019);
				if (func_279() == 3)
				{
					func_219(0, 10);
					iVar0 = func_728(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_281(iParam0) < func_282(iParam0))
						{
							func_103(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_95(47))
		{
			if (func_31(iParam0, 1160548794))
			{
				func_278(1319635688);
				if (func_279() == 4)
				{
					func_219(0, 10);
					iVar0 = func_728(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_281(iParam0) < func_282(iParam0))
						{
							func_103(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

int func_718(int iParam0)
{
	int iVar0;

	if (func_729(iParam0))
	{
		if (func_113() == -1)
		{
			iVar0 = PED::_0x4C8B59171957BCF7(Global_35);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar0 = func_663(func_697(0));
			}
		}
		else
		{
			iVar0 = PED::_0x4C8B59171957BCF7(func_730());
		}
	}
	else if (func_113() == -1)
	{
		iVar0 = func_663(0);
	}
	else
	{
		iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::GET_PLAYER_INDEX());
	}
	return iVar0;
}

int func_719(int iParam0, var uParam1, int iParam2, int iParam3)
{
	*iParam2 = INVENTORY::_0x640F890C3E5A3FFD(iParam0, uParam1, iParam3);
	if (*iParam2 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_720(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = INVENTORY::_0x13D234A2A3F66E63(*iParam0);
	iVar1 = func_731(iVar0, iParam1);
	if (func_732(*iParam0, iParam1, *iParam2, bParam3, iParam4))
	{
		Var2 = { func_166(iParam1) };
		if (STATS::_STAT_ID_IS_VALID(&Var2))
		{
			STATS::_0xBD861AE8A5181ED7(&Var2, *iParam2);
		}
		if (func_733(iParam1))
		{
			func_734(*iParam0, iParam1, *iParam2);
		}
		else
		{
			func_734(*iParam0, iParam1, *iParam2);
			func_735(*iParam0, iParam1, *iParam2, 1);
		}
		iVar4 = (iVar1 - func_731(iVar0, iParam1));
		*iParam2 = (*iParam2 - iVar4);
		return 1;
	}
	return 0;
}

int func_721(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_722(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_723(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_714(uParam0->f_1[iParam1 /*5*/]);
	*(uParam0->f_1[iParam1 /*5*/]) = { *(uParam0->f_1[*uParam0 /*5*/]) };
}

int func_724(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804->f_2657.f_19)
	{
		if (&Global_1946804->f_2657.f_26.f_7[*iParam1] == iParam0)
		{
			return 1;
		}
		*iParam1++;
	}
	return 0;
}

void func_725(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_726(var uParam0)
{
	if (*uParam0 && PED::_0x93FFD92F05EC32FD(uParam0->f_1))
	{
		PED::_0x13E7320C762F0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_727(var uParam0, var uParam1, var uParam2)
{
	var uVar0;

	uVar0 = func_736(func_315());
	if (*uParam0)
	{
		func_726(uParam0);
	}
	uParam0->f_1 = PED::_0xF6D9E1F3560CBF8E(uVar0, uParam1, 0, func_113() != -1, uParam2);
	*uParam0 = 1;
}

int func_728(int iParam0, int iParam1, int iParam2)
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510; /* GXTEntry: "Little Egret Plume" */
			iVar10 = -164081697; /* GXTEntry: "Reddish Egret Plume" */
			iVar11 = -1161319399; /* GXTEntry: "Snowy Egret Plume" */
			iVar12 = 728781265; /* GXTEntry: "Lady of the Night Orchid" */
			break;
		case 2:
			iVar9 = -222563712; /* GXTEntry: "Heron Plume" */
			iVar10 = 1794857344; /* GXTEntry: "Lady Slipper Orchid" */
			iVar11 = 1952409553; /* GXTEntry: "Moccasin Flower Orchid" */
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726; /* GXTEntry: "Acuna\'s Star Orchid" */
			iVar11 = -404270094; /* GXTEntry: "Cigar Orchid" */
			iVar12 = 2093126853; /* GXTEntry: "Ghost Orchid" */
			break;
		case 8:
			iVar9 = 2085530337; /* GXTEntry: "Spoonbill Plume" */
			iVar10 = -150591160; /* GXTEntry: "Night Scented Orchid" */
			iVar11 = -323969289; /* GXTEntry: "Rat Tail Orchid" */
			iVar12 = 1504361882; /* GXTEntry: "Spider Orchid" */
			break;
		case 16:
			iVar9 = -1521783510; /* GXTEntry: "Clamshell Orchid" */
			iVar10 = 1714875242; /* GXTEntry: "Dragon\'s Mouth Orchid" */
			iVar11 = 1019229063; /* GXTEntry: "Queen\'s Orchid" */
			iVar12 = 927763737; /* GXTEntry: "Sparrow\'s Egg Orchid" */
			break;
	}
	iVar1 = func_281(iVar9);
	iVar2 = func_281(iVar10);
	iVar3 = func_281(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_281(iVar12);
	}
	iVar5 = func_282(iVar9);
	iVar6 = func_282(iVar10);
	iVar7 = func_282(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_282(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_729(int iParam0)
{
	int iVar0;

	if (func_113() == -1)
	{
		if ((Global_1914319->f_17370 || iParam0) || Global_1914319->f_16855 == 2)
		{
			iVar0 = PED::_0x4C8B59171957BCF7(Global_35);
			if (iVar0 != func_663(7))
			{
				return 1;
			}
		}
		else if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			iVar0 = PED::GET_MOUNT(Global_35);
			if (iVar0 != func_663(7))
			{
				return 1;
			}
		}
	}
	else
	{
		iVar0 = PED::_0x4C8B59171957BCF7(func_730());
		if (iVar0 != PLAYER::_0xF49F14462F0AE27C(PLAYER::GET_PLAYER_INDEX()))
		{
			return 1;
		}
	}
	return 0;
}

int func_730()
{
	return PLAYER::GET_PLAYER_PED(255);
}

int func_731(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar4;

	if (!func_73(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_737(iParam0, iParam1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(iParam0, &Var0, 0);
	return uVar4;
}

bool func_732(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = INVENTORY::_0x13D234A2A3F66E63(iParam0);
	if (func_738(iParam0))
	{
		iVar1 = func_739(iParam0);
		if (func_73(iParam1, 0))
		{
			if (func_733(iParam1))
			{
				func_740(iVar1, iParam1, iParam2);
			}
		}
	}
	return func_741(iVar0, iParam1, iParam2, bParam3, iParam4);
}

int func_733(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_742(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 57)
	{
		iVar1 = func_743(iVar0, 1);
		iVar2 = iVar1;
		if (iParam0 == iVar2)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_734(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return iParam2;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar1 = iParam1;
	iVar0 = 2;
	while (iVar0 >= 0)
	{
		if (PED::_0x0CEEB6F4780B1F2F(iParam0, iVar0) == iVar1)
		{
			PED::_0x627F7F3A0C4C51FF(iParam0, iVar1);
			iParam2 = (iParam2 - 1);
		}
		if (iParam2 <= 0)
		{
		}
		else
		{
			iVar0 = (iVar0 + -1);
		}
	}
	return iParam2;
}

int func_735(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	int iVar9;

	if (!PED::_0xA911EE21EDF69DAF(iParam0))
	{
		return iParam2;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	iVar4 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	iVar3 = 0;
	while (iVar3 < iVar4)
	{
		if (iParam2 == 0)
		{
		}
		else
		{
			iVar2 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar1));
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
			}
			else
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar2))
				{
					iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
					func_666(iVar9, &iVar6, &uVar7, &iVar5, &uVar8);
					func_667(&iVar0, iVar9, iVar5, iVar6);
					if (!func_73(iVar0, 0))
					{
						iVar0 = func_744(iVar2);
					}
				}
				else
				{
					iVar0 = func_744(iVar2);
				}
				if (iVar0 == iParam1)
				{
					PED::_0xED00D72F81CF7278(iVar2, 0, 0);
					if (bParam3)
					{
						func_745(iVar2);
						ENTITY::_0x0D0DB2B6AF19A987(&iVar2);
					}
					iParam2 = (iParam2 - 1);
				}
			}
			iVar3++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	return iParam2;
}

int func_736(int iParam0)
{
	if (func_113() == -1)
	{
		switch (iParam0)
		{
			case -2125499975:
				return 0;
			case -449205311:
				return 0;
			case 1160113249:
				return 0;
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case 2026485318:
			return 0;
		case 24043185:
			return 1;
		default:
			break;
	}
	return 0;
}

struct<4> func_737(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { func_746(iParam0) };
	return func_747(iParam0, iParam1, Var0, Var0.f_4);
}

int func_738(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_739(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return 1;
}

int func_739(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == Global_1900383[iVar0 /*45*/])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_740(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iParam0 = func_697(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_748(iParam1);
	iVar1 = func_749(iVar0, 1);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_298[iVar1] = (&(Global_40.f_1095.f_1[iParam0 /*436*/])->f_298[iVar1] - iParam2);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_298[iVar1] = func_750(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_298[iVar1]), 0, 10);
}

int func_741(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;

	if (!func_73(iParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == 562618531;
	bVar1 = iParam4 == 1992602754;
	bVar2 = iParam4 == -1387038764;
	if (!func_751(iParam0, iParam1, 1))
	{
		return 0;
	}
	Var3 = { func_166(iParam1) };
	if (STATS::_STAT_ID_IS_VALID(&Var3))
	{
		if ((func_731(iParam0, iParam1) - iParam2) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var3, iParam2);
		}
		else if ((func_731(iParam0, iParam1) - iParam2) < 0)
		{
			func_741(iParam0, iParam1, func_89(iParam1, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!func_752(iParam0, iParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!func_115(0))
	{
		bParam3 = true;
	}
	if (!bParam3 && iParam1 != 1309979101)
	{
		func_169(iParam1, -iParam2, bVar0, bVar1, bVar2);
	}
	return 1;
}

int func_742(int iParam0)
{
	if (!func_73(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x4AEF1FB5B9011D75(iParam0);
}

int func_743(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -2059726619 /* GXTEntry: "Good Beaver Pelt" */;
		case 1:
			return -1569450319 /* GXTEntry: "Poor Beaver Pelt" */;
		case 2:
			return 854596618 /* GXTEntry: "Perfect Beaver Pelt" */;
		case 3:
			return -150200864 /* GXTEntry: "Legendary Beaver Pelt" */;
		case 4:
			return 2109269555 /* GXTEntry: "Legendary Boar Pelt" */;
		case 5:
			return 2116849039;
		case 6:
			return 1248540072 /* GXTEntry: "Poor Boar Pelt" */;
		case 7:
			return -1858513856 /* GXTEntry: "Perfect Boar Pelt" */;
		case 8:
			return -868657362 /* GXTEntry: "Good Buck Pelt" */;
		case 9:
			return 1603936352 /* GXTEntry: "Poor Buck Pelt" */;
		case 10:
			return -702790226 /* GXTEntry: "Perfect Buck Pelt" */;
		case 11:
			return -888740979 /* GXTEntry: "Legendary Buck Pelt" */;
		case 12:
			return 459744337 /* GXTEntry: "Good Cougar Pelt" */;
		case 13:
			return 1914602340 /* GXTEntry: "Poor Cougar Pelt" */;
		case 14:
			return -1791452194 /* GXTEntry: "Perfect Cougar Pelt" */;
		case 15:
			return 1528935719 /* GXTEntry: "Legendary Cougar Pelt" */;
		case 16:
			return 1150939141 /* GXTEntry: "Good Coyote Pelt" */;
		case 17:
			return -1558096473 /* GXTEntry: "Poor Coyote Pelt" */;
		case 18:
			return -794277189 /* GXTEntry: "Perfect Coyote Pelt" */;
		case 19:
			return -1517904196 /* GXTEntry: "Legendary Coyote Pelt" */;
		case 20:
			return -1827027577 /* GXTEntry: "Good Deer Pelt" */;
		case 21:
			return -662178186 /* GXTEntry: "Poor Deer Pelt" */;
		case 22:
			return -1035515486 /* GXTEntry: "Perfect Deer Pelt" */;
		case 23:
			return 238733925 /* GXTEntry: "Good Fox Pelt" */;
		case 24:
			return 1647012424 /* GXTEntry: "Poor Fox Pelt" */;
		case 25:
			return 500722008 /* GXTEntry: "Perfect Fox Pelt" */;
		case 26:
			return 1642484975 /* GXTEntry: "Legendary Fox Pelt" */;
		case 27:
			return 1710714415 /* GXTEntry: "Good Goat Hide" */;
		case 28:
			return 699990316 /* GXTEntry: "Poor Goat Hide" */;
		case 29:
			return -1648383828 /* GXTEntry: "Perfect Goat Hide" */;
		case 30:
			return -1379330323 /* GXTEntry: "Good Collared Peccary Pig Pelt" */;
		case 31:
			return -99092070 /* GXTEntry: "Poor Collared Peccary Pig Pelt" */;
		case 32:
			return 1963510418 /* GXTEntry: "Perfect Collared Peccary Pig Pelt" */;
		case 33:
			return 2047376405 /* GXTEntry: "White Cougar Pelt" */;
		case 34:
			return -395646254 /* GXTEntry: "Good Panther Pelt" */;
		case 35:
			return 1584468323 /* GXTEntry: "Poor Panther Pelt" */;
		case 36:
			return 1969175294 /* GXTEntry: "Perfect Panther Pelt" */;
		case 37:
			return 657906142 /* GXTEntry: "Legendary Panther Pelt" */;
		case 38:
			return -57190831 /* GXTEntry: "Good Pig Hide" */;
		case 39:
			return -308965548 /* GXTEntry: "Poor Pig Hide" */;
		case 40:
			return -1102272634 /* GXTEntry: "Perfect Pig Hide" */;
		case 41:
			return 554578289 /* GXTEntry: "Good Pronghorn Hide" */;
		case 42:
			return -983605026 /* GXTEntry: "Poor Pronghorn Hide" */;
		case 43:
			return -1544126829 /* GXTEntry: "Perfect Pronghorn Hide" */;
		case 44:
			return -103050851 /* GXTEntry: "Legendary Pronghorn Hide" */;
		case 45:
			return -476045512 /* GXTEntry: "Good Ram Hide" */;
		case 46:
			return 1796037447 /* GXTEntry: "Poor Ram Hide" */;
		case 47:
			return 1795984405 /* GXTEntry: "Perfect Ram Hide" */;
		case 48:
			return -734947450 /* GXTEntry: "Legendary Ram Hide" */;
		case 49:
			return -1317365569 /* GXTEntry: "Good Sheep Hide" */;
		case 50:
			return 1729948479 /* GXTEntry: "Poor Sheep Hide" */;
		case 51:
			return 1466150167 /* GXTEntry: "Perfect Sheep Hide" */;
		case 52:
			return 1145777975 /* GXTEntry: "Good Wolf Pelt" */;
		case 53:
			return 85441452 /* GXTEntry: "Poor Wolf Pelt" */;
		case 54:
			return 653400939 /* GXTEntry: "Perfect Wolf Pelt" */;
		case 55:
			return 552246565 /* GXTEntry: "Legendary Wolf Pelt" */;
		case 56:
			return 0;
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

int func_744(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::_0x31FEF6A20F00B963(iParam0);
	if (iVar0 == 0)
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			iVar0 = func_753(iVar1);
		}
	}
	return iVar0;
}

void func_745(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3[10];
	int iVar14;
	int iVar15;

	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	iVar1 = 878851736; /* GXTEntry: "Beef Stew" */
	iVar2 = Global_40.f_4283;
	if (func_754(ENTITY::GET_ENTITY_MODEL(iVar0), iVar2))
	{
		iVar1 = -1708424762; /* GXTEntry: "Regional Beef Stew" */
	}
	else
	{
		func_708(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), &uVar3);
		iVar15 = 0;
		while (iVar15 < 10)
		{
			if (!func_73(&(uVar3[iVar15]), 0))
			{
			}
			else if (!func_755(&(uVar3[iVar15])))
			{
			}
			else
			{
				iVar14 = func_756(&(uVar3[iVar15]), iVar2);
				if (func_757(iVar14, iVar1))
				{
					iVar1 = iVar14;
				}
			}
			iVar15++;
		}
	}
	func_758(&iVar1);
	if (func_757(iVar1, Global_1357549->f_1492))
	{
		Global_1357549->f_1492 = iVar1;
	}
}

struct<5> func_746(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_747(iParam0, joaat("character"), func_513(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_747(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	struct<4> Var0;

	if (!func_73(iParam1, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(iParam0, &uParam2, iParam1, iParam6, &Var0);
	return Var0;
}

int func_748(int iParam0)
{
	if (!func_733(iParam0))
	{
		return 0;
	}
	return iParam0;
}

int func_749(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2059726619: /* GXTEntry: "Good Beaver Pelt" */
			return 0;
		case -1858513856: /* GXTEntry: "Perfect Boar Pelt" */
			return 7;
		case -1827027577: /* GXTEntry: "Good Deer Pelt" */
			return 20;
		case -1791452194: /* GXTEntry: "Perfect Cougar Pelt" */
			return 14;
		case -1648383828: /* GXTEntry: "Perfect Goat Hide" */
			return 29;
		case -1569450319: /* GXTEntry: "Poor Beaver Pelt" */
			return 1;
		case -1558096473: /* GXTEntry: "Poor Coyote Pelt" */
			return 17;
		case -1544126829: /* GXTEntry: "Perfect Pronghorn Hide" */
			return 43;
		case -1517904196: /* GXTEntry: "Legendary Coyote Pelt" */
			return 19;
		case -1379330323: /* GXTEntry: "Good Collared Peccary Pig Pelt" */
			return 30;
		case -1317365569: /* GXTEntry: "Good Sheep Hide" */
			return 49;
		case -1102272634: /* GXTEntry: "Perfect Pig Hide" */
			return 40;
		case -1035515486: /* GXTEntry: "Perfect Deer Pelt" */
			return 22;
		case -983605026: /* GXTEntry: "Poor Pronghorn Hide" */
			return 42;
		case -888740979: /* GXTEntry: "Legendary Buck Pelt" */
			return 11;
		case -868657362: /* GXTEntry: "Good Buck Pelt" */
			return 8;
		case -794277189: /* GXTEntry: "Perfect Coyote Pelt" */
			return 18;
		case -734947450: /* GXTEntry: "Legendary Ram Hide" */
			return 48;
		case -702790226: /* GXTEntry: "Perfect Buck Pelt" */
			return 10;
		case -662178186: /* GXTEntry: "Poor Deer Pelt" */
			return 21;
		case -476045512: /* GXTEntry: "Good Ram Hide" */
			return 45;
		case -395646254: /* GXTEntry: "Good Panther Pelt" */
			return 34;
		case -308965548: /* GXTEntry: "Poor Pig Hide" */
			return 39;
		case -150200864: /* GXTEntry: "Legendary Beaver Pelt" */
			return 3;
		case -103050851: /* GXTEntry: "Legendary Pronghorn Hide" */
			return 44;
		case -99092070: /* GXTEntry: "Poor Collared Peccary Pig Pelt" */
			return 31;
		case -57190831: /* GXTEntry: "Good Pig Hide" */
			return 38;
		case 0:
			return 56;
		case 85441452: /* GXTEntry: "Poor Wolf Pelt" */
			return 53;
		case 238733925: /* GXTEntry: "Good Fox Pelt" */
			return 23;
		case 459744337: /* GXTEntry: "Good Cougar Pelt" */
			return 12;
		case 500722008: /* GXTEntry: "Perfect Fox Pelt" */
			return 25;
		case 552246565: /* GXTEntry: "Legendary Wolf Pelt" */
			return 55;
		case 554578289: /* GXTEntry: "Good Pronghorn Hide" */
			return 41;
		case 653400939: /* GXTEntry: "Perfect Wolf Pelt" */
			return 54;
		case 657906142: /* GXTEntry: "Legendary Panther Pelt" */
			return 37;
		case 699990316: /* GXTEntry: "Poor Goat Hide" */
			return 28;
		case 854596618: /* GXTEntry: "Perfect Beaver Pelt" */
			return 2;
		case 1145777975: /* GXTEntry: "Good Wolf Pelt" */
			return 52;
		case 1150939141: /* GXTEntry: "Good Coyote Pelt" */
			return 16;
		case 1248540072: /* GXTEntry: "Poor Boar Pelt" */
			return 6;
		case 1466150167: /* GXTEntry: "Perfect Sheep Hide" */
			return 51;
		case 1528935719: /* GXTEntry: "Legendary Cougar Pelt" */
			return 15;
		case 1584468323: /* GXTEntry: "Poor Panther Pelt" */
			return 35;
		case 1603936352: /* GXTEntry: "Poor Buck Pelt" */
			return 9;
		case 1642484975: /* GXTEntry: "Legendary Fox Pelt" */
			return 26;
		case 1647012424: /* GXTEntry: "Poor Fox Pelt" */
			return 24;
		case 1710714415: /* GXTEntry: "Good Goat Hide" */
			return 27;
		case 1729948479: /* GXTEntry: "Poor Sheep Hide" */
			return 50;
		case 1795984405: /* GXTEntry: "Perfect Ram Hide" */
			return 47;
		case 1796037447: /* GXTEntry: "Poor Ram Hide" */
			return 46;
		case 1914602340: /* GXTEntry: "Poor Cougar Pelt" */
			return 13;
		case 1963510418: /* GXTEntry: "Perfect Collared Peccary Pig Pelt" */
			return 32;
		case 1969175294: /* GXTEntry: "Perfect Panther Pelt" */
			return 36;
		case 2047376405: /* GXTEntry: "White Cougar Pelt" */
			return 33;
		case 2109269555: /* GXTEntry: "Legendary Boar Pelt" */
			return 4;
		case 2116849039:
			return 5;
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

int func_750(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_751(int iParam0, int iParam1, int iParam2)
{
	if (!func_73(iParam1, 0))
	{
		return false;
	}
	return func_731(iParam0, iParam1) >= iParam2;
}

int func_752(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_73(iParam1, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_746(iParam0) };
	Var5 = { func_747(iParam0, iParam1, Var0, Var0.f_4) };
	return func_759(iParam0, iParam1, &Var5, iParam2, iParam3, bParam4);
}

int func_753(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::_0x9A100F1CF4546629(iParam0) && !ENTITY::_0xC346A546612C49A9(iParam0))
	{
		return 0;
	}
	func_666(iParam0, &iVar1, &uVar2, &iVar0, &uVar3);
	func_667(&iVar4, iParam0, iVar0, iVar1);
	if (iVar4 != 0)
	{
		return iVar4;
	}
	switch (iVar0)
	{
		case 2:
			return -776155824 /* GXTEntry: "Animal Carcass Perfect" */;
		case 1:
			return 1715058708 /* GXTEntry: "Animal Carcass Good Quality" */;
		case 0:
			return -45650221 /* GXTEntry: "Animal Carcass Poor" */;
		default:
			break;
	}
	return -45650221 /* GXTEntry: "Animal Carcass Poor" */;
}

int func_754(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case joaat("a_c_duck_01"):
				case joaat("a_c_rabbit_01"):
				case joaat("a_c_pronghorn_01"):
					return 1;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case joaat("a_c_buck_01"):
				case joaat("a_c_turkey_01"):
				case joaat("a_c_turkey_02"):
				case joaat("a_c_fishrainbowtrout_01_lg"):
				case joaat("a_c_fishrainbowtrout_01_ms"):
				case joaat("a_c_deer_01"):
					return 1;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case joaat("a_c_alligator_01"):
				case joaat("a_c_alligator_02"):
				case joaat("a_c_alligator_03"):
				case joaat("a_c_fishlargemouthbass_01_ms"):
				case joaat("a_c_fishlargemouthbass_01_lg"):
				case joaat("a_c_carolinaparakeet_01"):
					return 1;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case joaat("a_c_elk_01"):
				case joaat("a_c_fishsalmonsockeye_01_ms"):
				case joaat("a_c_fishsalmonsockeye_01_lg"):
				case joaat("a_c_fishsalmonsockeye_01_ml"):
				case joaat("a_c_quail_01"):
					return 1;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_755(int iParam0)
{
	if ((func_31(iParam0, -839724752) || func_31(iParam0, -887064662)) || func_31(iParam0, 1286414894))
	{
		return 1;
	}
	return 0;
}

int func_756(int iParam0, int iParam1)
{
	if (!func_73(iParam0, 0))
	{
		return 878851736 /* GXTEntry: "Beef Stew" */;
	}
	if (!func_755(iParam0))
	{
		return 878851736 /* GXTEntry: "Beef Stew" */;
	}
	if (func_760(iParam0, iParam1))
	{
		return -1708424762 /* GXTEntry: "Regional Beef Stew" */;
	}
	else if (func_31(iParam0, -1690954218))
	{
		return -1760041550 /* GXTEntry: "High Quality Beef Stew" */;
	}
	else if (func_31(iParam0, 1149630095))
	{
		return -1760041550 /* GXTEntry: "High Quality Beef Stew" */;
	}
	else if (func_31(iParam0, 194498509))
	{
		return 116793994 /* GXTEntry: "Medium Quality Beef Stew" */;
	}
	else if (func_31(iParam0, 43251425))
	{
		return 1869130580 /* GXTEntry: "Low Quality Beef Stew" */;
	}
	return 1869130580 /* GXTEntry: "Low Quality Beef Stew" */;
}

bool func_757(int iParam0, int iParam1)
{
	int iVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	iVar0[0] = 878851736; /* GXTEntry: "Beef Stew" */
	iVar0[1] = 1762298001; /* GXTEntry: "Beef and Eggs Stew" */
	iVar0[2] = 1869130580; /* GXTEntry: "Low Quality Beef Stew" */
	iVar0[3] = 1336518004; /* GXTEntry: "Low Quality Beef and Eggs Stew" */
	iVar0[4] = 116793994; /* GXTEntry: "Medium Quality Beef Stew" */
	iVar0[5] = 515084529; /* GXTEntry: "Medium Quality Beef and Eggs Stew" */
	iVar0[6] = -1760041550; /* GXTEntry: "High Quality Beef Stew" */
	iVar0[7] = -1977068039; /* GXTEntry: "High Quality Beef and Eggs Stew" */
	iVar0[8] = -1708424762; /* GXTEntry: "Regional Beef Stew" */
	iVar0[9] = -399865011; /* GXTEntry: "Regional Beef and Eggs Stew" */
	iVar11 = -1;
	iVar12 = -1;
	iVar13 = 0;
	while (iVar13 <= 9)
	{
		if (&iVar0[iVar13] == iParam0)
		{
			iVar11 = iVar13;
		}
		else
		{
			iVar13++;
		}
	}
	if (iVar11 == -1)
	{
		return false;
	}
	iVar13 = 0;
	while (iVar13 <= 9)
	{
		if (&iVar0[iVar13] == iParam1)
		{
			iVar12 = iVar13;
		}
		else
		{
			iVar13++;
		}
	}
	if (iVar12 == -1)
	{
		return false;
	}
	return iVar11 > iVar12;
}

void func_758(int iParam0)
{
	if (Global_40.f_4283.f_313 > 1)
	{
		switch (*iParam0)
		{
			case 878851736: /* GXTEntry: "Beef Stew" */
				*iParam0 = 1762298001; /* GXTEntry: "Beef and Eggs Stew" */
				break;
			case 1869130580: /* GXTEntry: "Low Quality Beef Stew" */
				*iParam0 = 1336518004; /* GXTEntry: "Low Quality Beef and Eggs Stew" */
				break;
			case 116793994: /* GXTEntry: "Medium Quality Beef Stew" */
				*iParam0 = 515084529; /* GXTEntry: "Medium Quality Beef and Eggs Stew" */
				break;
			case -1760041550: /* GXTEntry: "High Quality Beef Stew" */
				*iParam0 = -1977068039; /* GXTEntry: "High Quality Beef and Eggs Stew" */
				break;
			case -1708424762: /* GXTEntry: "Regional Beef Stew" */
				*iParam0 = -399865011; /* GXTEntry: "Regional Beef and Eggs Stew" */
				break;
		}
	}
}

int func_759(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<12> Var0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_404(iParam1))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_761(iParam0, *uParam2, &Var0, 0))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(iParam0, uParam2, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_760(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case -1930144509: /* GXTEntry: "Good Pronghorn Carcass" */
				case -1866642239: /* GXTEntry: "Perfect Rabbit Carcass" */
				case -1816929509: /* GXTEntry: "Poor Pronghorn Carcass" */
				case -1508120809: /* GXTEntry: "Poor Rabbit Carcass" */
				case 1001171791: /* GXTEntry: "Perfect Duck Carcass" */
				case 1023080408: /* GXTEntry: "Good Duck Carcass" */
				case 1197831625: /* GXTEntry: "Good Rabbit Carcass" */
				case 1210345318: /* GXTEntry: "Poor Duck Carcass" */
				case 1846915545: /* GXTEntry: "Perfect Pronghorn Carcass" */
					return 1;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case -1837840093: /* GXTEntry: "Perfect Deer Carcass" */
				case -1836227998: /* GXTEntry: "Perfect Turkey Carcass" */
				case -1610329427: /* GXTEntry: "Good Turkey Carcass" */
				case -1310590179: /* GXTEntry: "Good Buck Carcass" */
				case -244657613: /* GXTEntry: "Poor Buck Carcass" */
				case 58634176: /* GXTEntry: "Poor Deer Carcass" */
				case 472142656: /* GXTEntry: "Good Deer Carcass" */
				case 619479575: /* GXTEntry: "Poor Turkey Carcass" */
				case 727522818: /* GXTEntry: "Poor Steelhead Trout" */
				case 785407605: /* GXTEntry: "Steelhead Trout" */
				case 992366796: /* GXTEntry: "Perfect Buck Carcass" */
					return 1;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case -1956973834: /* GXTEntry: "Perfect Carolina Parakeet Carcass" */
				case -1643384846: /* GXTEntry: "Poor Alligator Carcass" */
				case -1424697962: /* GXTEntry: "Perfect Alligator Carcass" */
				case -738999731: /* GXTEntry: "Poor Carolina Parakeet Carcass" */
				case -5376850: /* GXTEntry: "Largemouth Bass" */
				case 566023444: /* GXTEntry: "Good Carolina Parakeet Carcass" */
				case 915880986: /* GXTEntry: "Good Alligator Carcass" */
				case 1425358430: /* GXTEntry: "Poor Largemouth Bass" */
					return 1;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case -1726572562: /* GXTEntry: "Good Quail Carcass" */
				case -1017987135: /* GXTEntry: "Perfect Quail Carcass" */
				case 485620834: /* GXTEntry: "Poor Sockeye Salmon" */
				case 1471975165: /* GXTEntry: "Mature Venison Meat" */
				case 1570826681: /* GXTEntry: "Sockeye Salmon" */
				case 2058475216: /* GXTEntry: "Poor Quail Carcass" */
					return 1;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_761(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam1))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam0, &uParam1, uParam5, !bParam6))
	{
		return 0;
	}
	return 1;
}

