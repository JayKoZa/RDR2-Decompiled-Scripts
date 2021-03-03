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
	float fLocal_13 = 0f;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	struct<127> Var0;

	fLocal_13 = 1f;
	fLocal_14 = 1f;
	Var0.f_5.f_2 = 12;
	Var0.f_5.f_64 = 11;
	Var0.f_5.f_76 = 11;
	Var0.f_124 = 1;
	Var0.f_125 = 1;
	Var0.f_121 = 1;
	Var0.f_101 = ScriptParam_0.f_1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		Var0.f_118 = 1;
		Var0.f_126 = 1;
		func_1(&Var0, &Global_1913640);
	}
	if (func_2())
	{
		TASK::_0xED27560703F37258(Global_34);
	}
	Var0.f_108 = ANIMSCENE::_CREATE_ANIM_SCENE("lightrig@player_journal", 0, "plMain", false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(Var0.f_108);
	Var0.f_116 = 0;
	if (MISC::GET_GAME_TIMER() >= Global_1913503 && MISC::GET_GAME_TIMER() >= Global_17405)
	{
		Var0.f_93.f_4 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_34, false);
		Var0.f_116 = 1;
	}
	Global_1913503 = 0;
	Global_17407 = 0;
	Global_17408 = 0;
	Global_17410 = 0;
	if ((((MISC::GET_GAME_TIMER() < Global_17388 || Var0.f_116) || (func_3() == 0 && func_4(Global_1913502, 1224357681) == joaat("CI_TAG_FOLDER_TREASURE_MAPS"))) || func_5(Global_1913502, 566155764)) || (func_5(Global_1913502, -1472964441) && func_6(Global_1913502)))
	{
		Global_17407 = 1;
		Global_17408 = 1;
	}
	if (func_5(Global_1913502, MISC::GET_HASH_KEY("CI_TAG_ITEM_DOCUMENT_HIDE_READ_PROMPT")))
	{
		Global_17410 = 1;
	}
	if (Global_1940311.f_10892 == 0 || MISC::GET_GAME_TIMER() <= (3000 + Global_1940144.f_70.f_2))
	{
		Global_17407 = 1;
	}
	while (func_7(&Var0, &Global_1913640))
	{
		if (func_5(Global_1913640[0 /*11*/], 566155764) || func_5(Global_1913502, 566155764))
		{
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_FRONTEND_PAUSE"), false);
		}
		Var0.f_104 = TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_34);
		if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Var0.f_108) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Var0.f_108, true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Var0.f_108, false)) && CAM::_0xA24C1D341C6E0D53(1, 0, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Var0.f_108, Global_35, ENTITY::GET_ENTITY_ROTATION(Global_34, 2), 2);
			ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(Var0.f_108, Global_34, -1);
			ANIMSCENE::START_ANIM_SCENE(Var0.f_108);
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MELEE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_PRIMARY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_SECONDARY"), false);
		CAM::_0x8910C24B7E0046EC();
		if (UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("TRANSLATION_OVERLAY")))
		{
			HUD::_0xC9CAEAEEC1256E54(382897689);
		}
		if (Var0.f_116)
		{
			func_8(&Var0, &Global_1913640);
		}
		else
		{
			func_9(&Var0, &Global_1913640);
		}
		func_10(&Var0, &Global_1913640);
		BUILTIN::WAIT(0);
	}
	func_1(&Var0, &Global_1913640);
}

void func_1(var uParam0, var uParam1)
{
	if (func_11())
	{
	}
	else if (func_12() && !Global_1940311.f_8)
	{
		if (!SCRIPTS::_0x9E4EF615E307FBBE())
		{
			SCRIPTS::TERMINATE_THIS_THREAD();
		}
		return;
	}
	if (UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("TRANSLATION_OVERLAY")))
	{
		UIAPPS::_CLOSE_APP_BY_HASH(joaat("TRANSLATION_OVERLAY"));
	}
	if (uParam0->f_115)
	{
		func_13(uParam0, uParam1);
	}
	if (uParam0->f_119)
	{
		func_14(uParam0->f_1.f_1);
		uParam0->f_119 = 0;
	}
	func_15(uParam0, uParam1);
	func_16(uParam0);
	func_17(uParam0);
	if (uParam0->f_118)
	{
		func_18(uParam0, uParam1);
	}
	if (!uParam0->f_117)
	{
		if (!(uParam1[0 /*11*/])->f_1)
		{
			func_19(0);
		}
		else
		{
			Global_1913674[0 /*6*/].f_1 = 4;
		}
		func_19(2);
		func_19(1);
		func_20(uParam1);
	}
	else
	{
		func_21(uParam0, uParam1);
	}
	if (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

bool func_2()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return false;
	}
	if (!TASK::_0xEFC4303DDC6E60D3(iVar0))
	{
		return false;
	}
	iVar1 = TASK::_0xED1F514AF4732258(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		return false;
	}
	if (!PED::_0x2D64376CF437363E(iVar1))
	{
		return false;
	}
	return true;
}

int func_3()
{
	return Global_1572887.f_13;
}

int func_4(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if (Var0[iVar42 /*2*/].f_1 == iParam1)
			{
				return Var0[iVar42 /*2*/];
			}
			iVar42++;
		}
	}
	return 0;
}

bool func_5(int iParam0, int iParam1)
{
	if (!func_22(iParam0, 0))
	{
		return func_24(func_23(iParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return true;
	}
	return false;
}

bool func_6(int iParam0)
{
	if (func_5(iParam0, 566155764))
	{
		return false;
	}
	if (func_5(iParam0, 2028734248))
	{
		return true;
	}
	return false;
}

bool func_7(var uParam0, var uParam1)
{
	if (func_3() == 0 && func_25(0, 0))
	{
		return false;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		return false;
	}
	if (func_26(uParam0, uParam1) && (MISC::GET_GAME_TIMER() >= Global_17388 || !func_27(Global_1913502)))
	{
		uParam0->f_118 = 1;
		return false;
	}
	return true;
}

int func_8(var uParam0, var uParam1)
{
	if (*uParam0 > 0)
	{
		func_28(uParam0, uParam1);
	}
	switch (*uParam0)
	{
		case 0:
			uParam0->f_101 = TASK::_0x05A0100EA714DB68(Global_34, joaat("PRIMARYITEM"));
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_101))
			{
				func_29(uParam0, uParam1[0 /*11*/]);
				func_30(uParam0, uParam1);
				func_31(uParam0, (*uParam1)[0 /*11*/]);
				func_28(uParam0, uParam1);
				func_32(uParam0, 4);
			}
			break;
		case 4:
			if (func_33((*uParam1)[0 /*11*/], uParam0->f_104))
			{
				func_34((*uParam1)[0 /*11*/]);
				func_35(uParam0, uParam1, 1);
				func_32(uParam0, 6);
			}
			break;
		case 6:
			func_36(uParam0, uParam1[0 /*11*/]);
			func_37(uParam0, uParam1);
			func_38(uParam0, uParam1);
			if (func_39((*uParam1)[0 /*11*/], uParam0->f_104))
			{
				if (func_5((*uParam1)[0 /*11*/], -674618190))
				{
					func_32(uParam0, 7);
				}
				else
				{
					func_32(uParam0, 8);
				}
			}
			else if (func_40(Global_17395[3], 1))
			{
				func_41(uParam0, (*uParam1)[0 /*11*/]);
			}
			func_16(uParam0);
			break;
		case 8:
			if (!func_42((*uParam1)[0 /*11*/], 1) && !uParam0->f_123)
			{
				func_43((*uParam1)[0 /*11*/], 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				uParam0->f_123 = 1;
			}
			func_32(uParam0, 9);
			break;
		case 7:
			uParam0->f_93.f_3 = TASK::_GET_SCENARIO_POINT_TYPE(uParam0->f_93.f_4);
			uParam0->f_93 = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_93.f_4, true) };
			TASK::_0x4161648394262FDF(uParam0->f_93, 1f);
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_93.f_4))
			{
				uParam0->f_93.f_4 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(uParam0->f_93, uParam0->f_93.f_3, 1f, 1, false);
			}
			uParam0->f_93.f_5 = TASK::_GET_SCENARIO_POINT_ENTITY(uParam0->f_93.f_4, "PrimaryItem");
			uParam0->f_93.f_6 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_93.f_5);
			OBJECT::_SET_APPLY_OBJECT_TXD(uParam0->f_93.f_6, (uParam1[0 /*11*/])->f_5, 0, 0);
			func_32(uParam0, 9);
			break;
	}
	return 0;
}

int func_9(var uParam0, var uParam1)
{
	if (*uParam0 > 0)
	{
		func_28(uParam0, uParam1);
	}
	switch (*uParam0)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_101))
			{
				uParam0->f_101 = TASK::_0x05A0100EA714DB68(Global_34, joaat("PRIMARYITEM"));
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_101))
			{
				(*uParam1)[0 /*11*/] = func_44(uParam0);
				func_45(uParam0, (*uParam1)[0 /*11*/]);
				func_30(uParam0, uParam1);
				func_31(uParam0, (*uParam1)[0 /*11*/]);
				func_28(uParam0, uParam1);
				func_29(uParam0, uParam1[0 /*11*/]);
				func_46(uParam0, uParam1);
				if (Global_1913674[0 /*6*/].f_1 == 2)
				{
					func_47(uParam1[0 /*11*/], 0);
					func_48(uParam0, uParam1);
				}
				func_32(uParam0, 2);
			}
			break;
		case 2:
			if (func_47(uParam1[0 /*11*/], 0) && func_49(uParam0, uParam1))
			{
				func_32(uParam0, 3);
			}
			break;
		case 3:
			if (func_48(uParam0, uParam1))
			{
				func_32(uParam0, 4);
			}
			break;
		case 4:
			if (func_33((*uParam1)[0 /*11*/], uParam0->f_104))
			{
				func_35(uParam0, uParam1, 1);
				func_34((*uParam1)[0 /*11*/]);
				func_32(uParam0, 5);
			}
			break;
		case 5:
			func_36(uParam0, uParam1[0 /*11*/]);
			func_37(uParam0, uParam1);
			func_38(uParam0, uParam1);
			if (func_39((*uParam1)[0 /*11*/], uParam0->f_104))
			{
				func_32(uParam0, 9);
			}
			else if (func_50(Global_17395[2]) && func_51(Global_17395[2], 1))
			{
				func_32(uParam0, 9);
				uParam0->f_118 = 1;
				Global_1940311.f_8 = 1;
				Global_17406 = MISC::GET_GAME_TIMER() + 10000;
				func_52(1);
			}
			else if (func_40(Global_17395[3], 1))
			{
				func_41(uParam0, (*uParam1)[0 /*11*/]);
			}
			else if (!Global_17407 && func_53(uParam0))
			{
				uParam0->f_117 = 1;
				func_32(uParam0, 9);
			}
			func_16(uParam0);
			break;
	}
	return 0;
}

int func_10(var uParam0, var uParam1)
{
	int iVar0;

	Global_1940144.f_70.f_4 = MISC::GET_GAME_TIMER() + 5000;
	if (Global_17394 == 1)
	{
		iVar0 = TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_34);
		if (iVar0 == func_54(Global_1913502))
		{
			Global_17394 = 2;
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

bool func_11()
{
	if ((((Global_1211392.f_1204 && func_5(Global_1913502, -1472964441)) || (Global_1211392.f_1205 && func_5(Global_1913502, 1841149704))) || (Global_1211392.f_1206 && func_5(Global_1913502, 566155764))) || (Global_1211392.f_1207 && func_5(Global_1913502, -228153877)))
	{
		if ((Global_1211392.f_1202 && !func_55()) || (Global_1211392.f_1203 && func_55()))
		{
			return true;
		}
	}
	return false;
}

bool func_12()
{
	return (Global_1940311.f_1 || Global_1940311 == 1);
}

void func_13(var uParam0, var uParam1)
{
}

int func_14(int iParam0)
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

void func_15(var uParam0, var uParam1)
{
	int iVar0;

	if (!uParam0->f_126 && !SCRIPTS::_0x30BED53646C86D11(SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		iVar0 = 1946634759;
		if (*uParam1)[0 /*11*/] == joaat("DOCUMENT_LETTER_REVENGE_2")
		{
			iVar0 = -489628648;
		}
		if (func_56((*uParam1)[0 /*11*/]))
		{
			func_57((*uParam1)[0 /*11*/], iVar0);
		}
		func_58((*uParam1)[0 /*11*/]);
	}
}

void func_16(var uParam0)
{
	if (uParam0->f_5.f_1 && !UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("TRANSLATION_OVERLAY")))
	{
		AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
		uParam0->f_5.f_1 = 0;
	}
}

void func_17(var uParam0)
{
	int iVar0;

	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_5.f_63))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_5.f_63);
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_5.f_64[iVar0]))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_5.f_64[iVar0]);
		}
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_5.f_76[iVar0]))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_5.f_76[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_5.f_2)
	{
		uParam0->f_5.f_2[iVar0 /*5*/].f_3 = 0;
		iVar0++;
	}
}

void func_18(var uParam0, var uParam1)
{
	if ((*uParam1)[0 /*11*/] != 0)
	{
		if (func_54((*uParam1)[0 /*11*/]) != 0)
		{
			TASK::_0xB35370D5353995CB(Global_34, func_54((*uParam1)[0 /*11*/]), 1048576000 /* Float: 0.25f */);
		}
		if (((uParam0->f_116 && func_59((*uParam1)[0 /*11*/])) && !func_42((*uParam1)[0 /*11*/], 1)) && !uParam0->f_123)
		{
			func_43((*uParam1)[0 /*11*/], 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			uParam0->f_123 = 1;
		}
	}
}

void func_19(int iParam0)
{
	Global_1913674[iParam0 /*6*/].f_1 = 3;
	Global_1913674[iParam0 /*6*/] = 0;
	Global_1913674[iParam0 /*6*/].f_5 = 0;
}

void func_20(var uParam0)
{
	if (!Global_1940311.f_8)
	{
		if (((func_5(Global_1913502, -1472964441) || func_5(Global_1913502, 1841149704)) || func_5(Global_1913502, 566155764)) || func_5(Global_1913502, -228153877))
		{
			Global_1940144.f_70.f_5 = 1;
			Global_1940144.f_70.f_1 = Global_1913502;
		}
	}
	Global_1913502 = 0;
	Global_17405 = 0;
	Global_17394 = 2;
	Global_1913640[0 /*11*/].f_3 = 0;
	func_60(uParam0);
}

void func_21(var uParam0, var uParam1)
{
	if (uParam0->f_115)
	{
		func_13(uParam0, uParam1);
	}
	if (uParam0->f_110)
	{
		func_61(uParam1);
	}
	else
	{
		func_62(uParam1);
	}
	if (uParam0->f_119)
	{
		func_14(uParam0->f_1.f_1);
		uParam0->f_119 = 0;
	}
	func_63(uParam1);
	(uParam1[0 /*11*/])->f_3 = 0;
	Global_1913502 = (*uParam1)[0 /*11*/];
	func_64((*uParam1)[0 /*11*/], 0, 1, 0, 0f);
	GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
	Global_17405 = MISC::GET_GAME_TIMER() + 3000;
}

bool func_22(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_23(int iParam0)
{
	return iParam0;
}

int func_24(int iParam0, int iParam1)
{
	if (!func_65(iParam0, 2))
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

bool func_25(bool bParam0, bool bParam1)
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

bool func_26(var uParam0, var uParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return true;
	}
	if (!TASK::_0x038B1F1674F0E242(Global_34))
	{
		return true;
	}
	if (!func_66(16))
	{
		return true;
	}
	if ((!uParam0->f_118 && *uParam0 > 4) && (func_67((*uParam1)[0 /*11*/]) || func_68((*uParam1)[0 /*11*/])))
	{
		return true;
	}
	return false;
}

bool func_27(int iParam0)
{
	switch (iParam0)
	{
		case -904734609: /* GXTEntry: "Goodbye Letter from Mary" */
		case -595619260: /* GXTEntry: "Goodbye Letter from Mary" */
		case joaat("DOCUMENT_RE_FROZEN_DEATH_MAP"):
		case 1760651454: /* GXTEntry: "Goodbye Letter from Mary" */
			return true;
	}
	return false;
}

void func_28(var uParam0, var uParam1)
{
	if (!uParam0->f_122)
	{
		if (func_33((*uParam1)[0 /*11*/], uParam0->f_104))
		{
			func_35(uParam0, uParam1, 0);
			uParam0->f_122 = 1;
		}
	}
}

void func_29(var uParam0, var uParam1)
{
	struct<5> Var0;

	*uParam1 = func_44(uParam0);
	uParam1->f_6 = func_4(*uParam1, -949239683);
	uParam1->f_1 = func_69(uParam1->f_6);
	if (uParam1->f_1)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(*uParam1, &Var0))
		{
			uParam1->f_7.f_2 = Var0.f_4;
		}
	}
	func_45(uParam0, *uParam1);
}

void func_30(var uParam0, var uParam1)
{
}

void func_31(var uParam0, int iParam1)
{
	if (func_5(iParam1, -98816307))
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_34, "GENERIC_BOOK_TAKE_AVAILABLE", false, -1);
	}
	else
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_34, "GENERIC_BOOK_TAKE_AVAILABLE", true, -1);
	}
	if (func_5(iParam1, -1903335637))
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_34, "GENERIC_DOCUMENT_FLIP_AVAILABLE", true, -1);
	}
	else
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_34, "GENERIC_DOCUMENT_FLIP_AVAILABLE", false, -1);
	}
	if (uParam0->f_120)
	{
		if (func_5(iParam1, -98816307))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_34, "GENERIC_BOOK_TAKE_AVAILABLE", false, -1);
			PED::_SET_PED_BLACKBOARD_BOOL(Global_34, "GENERIC_BOOK_RETURN_AVAILABLE", true, -1);
		}
	}
	func_70(uParam0);
}

void func_32(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_33(var uParam0, int iParam1)
{
	switch (func_4(uParam0, -949239683))
	{
		case -1420737577:
			if (iParam1 == 1607869040)
			{
				return true;
			}
			break;
		case 1712126263:
			if (iParam1 == -1424266966)
			{
				return true;
			}
			break;
		case 10252101:
			if (iParam1 == -487508500)
			{
				return true;
			}
			break;
		case -1229959999:
			if (iParam1 == -1791047090)
			{
				return true;
			}
			break;
		case -1050374492:
			if (iParam1 == 760057945)
			{
				return true;
			}
			break;
		case 1513351077:
			if (iParam1 == -1043439814)
			{
				return true;
			}
			break;
		case -1565009253:
			if (iParam1 == -2077441721)
			{
				return true;
			}
			break;
		case 733893097:
			if (iParam1 == 1972630951)
			{
				return true;
			}
			break;
		case -164980960:
			if (iParam1 == 2000759837)
			{
				return true;
			}
			break;
		case 1894156335:
			if (iParam1 == 374699583)
			{
				return true;
			}
			break;
		case 871191033:
			if (iParam1 == joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_BASE"))
			{
				return true;
			}
			break;
		case -1273369295:
			if (iParam1 == -1340223099)
			{
				return true;
			}
			break;
		case 82200319:
			if (iParam1 == joaat("DOCUMENT_INSPECT@NEWSPAPER_BASE"))
			{
				return true;
			}
			break;
		case -873135685:
			if (iParam1 == -1570312122 || iParam1 == -1563464392)
			{
				return true;
			}
			break;
		case 24248412:
			if (iParam1 == 416212934)
			{
				return true;
			}
			break;
		case -1239610997:
			if ((iParam1 == 1087288635 || iParam1 == 1761334567) || iParam1 == 504129763)
			{
				return true;
			}
			break;
		case 632545869:
			if ((iParam1 == -212251684 || iParam1 == -1401979141) || iParam1 == -1983586928)
			{
				return true;
			}
			break;
		case -793205628:
			if (iParam1 == 136592566 || iParam1 == 16062911)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_34(int iParam0)
{
	func_71(iParam0);
	func_72(iParam0, &(Global_17411.f_2966), 1);
	func_73(iParam0);
}

int func_35(var uParam0, var uParam1, bool bParam2)
{
	if (func_5((*uParam1)[0 /*11*/], 566155764))
	{
		return 1;
	}
	if (func_5((*uParam1)[0 /*11*/], -1472964441))
	{
		if (func_6((*uParam1)[0 /*11*/]))
		{
			return 1;
		}
	}
	if (!uParam0->f_120)
	{
		if (!Global_17407 && bParam2)
		{
			if (!func_22((*uParam1)[2 /*11*/], 0))
			{
				Global_17400[1] = 0;
				func_74(&(Global_17395[1]), 0);
			}
			else
			{
				Global_17400[1] = 1;
				func_74(&(Global_17395[1]), 1);
			}
			if (!func_22((*uParam1)[1 /*11*/], 0))
			{
				Global_17400[0] = 0;
				func_74(&(Global_17395[0]), 0);
			}
			else
			{
				Global_17400[0] = 1;
				func_74(&(Global_17395[0]), 1);
			}
		}
		Global_17400[3] = func_75(uParam0, uParam1[0 /*11*/]);
		func_74(&(Global_17395[3]), Global_17400[3]);
		if (*uParam1)[0 /*11*/] == joaat("DOCUMENT_BANKROB_NEWSCLIP")
		{
			Global_17409 = 1;
		}
		Global_17394 = 1;
	}
	if (uParam0->f_116)
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

void func_36(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (!func_33(*uParam1, uParam0->f_104) && !func_76(*uParam1, uParam0->f_104))
	{
		if (!uParam0->f_112)
		{
			if (func_77(Global_17395[0], 1))
			{
				uParam0->f_113 = 0;
			}
			else
			{
				uParam0->f_113 = 1;
			}
			if (func_77(Global_17395[1], 1))
			{
				uParam0->f_114 = 0;
			}
			else
			{
				uParam0->f_114 = 1;
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				func_78(&(Global_17395[iVar0]), 0);
				iVar0++;
			}
			uParam0->f_112 = 1;
		}
	}
	else if (uParam0->f_112)
	{
		func_79(uParam0, uParam1);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar1 = iVar0;
			if (((iVar1 == 0 && !uParam0->f_113) || (iVar1 == 1 && !uParam0->f_114)) || (iVar1 != 1 && iVar1 != 0))
			{
				func_78(&(Global_17395[iVar1]), 1);
			}
			iVar0++;
		}
		uParam0->f_112 = 0;
	}
}

void func_37(var uParam0, var uParam1)
{
	if (!uParam0->f_115 && func_80((*uParam1)[0 /*11*/], uParam0->f_104))
	{
		uParam0->f_115 = 1;
		func_81((*uParam1)[0 /*11*/]);
	}
}

void func_38(var uParam0, var uParam1)
{
}

bool func_39(var uParam0, int iParam1)
{
	switch (func_4(uParam0, -949239683))
	{
		case -1420737577:
			if (iParam1 == -34349608)
			{
				return true;
			}
			break;
		case 1712126263:
			if (iParam1 == 1918075176 || iParam1 == -1661733570)
			{
				return true;
			}
			break;
		case 10252101:
			if (iParam1 == -838154919 || iParam1 == 384644694)
			{
				return true;
			}
			break;
		case -1229959999:
			if (iParam1 == 779637421 || iParam1 == 1184806339)
			{
				return true;
			}
			break;
		case -1050374492:
			if (iParam1 == -13228069 || iParam1 == -733273327)
			{
				return true;
			}
			break;
		case 1513351077:
			if (iParam1 == -1855297853 || iParam1 == 327088472)
			{
				return true;
			}
			break;
		case -1565009253:
			if (iParam1 == -672448089 || iParam1 == 1505672707)
			{
				return true;
			}
			break;
		case 733893097:
			if (iParam1 == 329918092 || iParam1 == 1320390176)
			{
				return true;
			}
			break;
		case -164980960:
			if (iParam1 == 1096961806 || iParam1 == -1142551033)
			{
				return true;
			}
			break;
		case 1894156335:
			if (iParam1 == 2067181640 || iParam1 == -1286256799)
			{
				return true;
			}
			break;
		case 871191033:
			if (iParam1 == joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_OUTRO") || iParam1 == joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_FLIP_TO_FRONT_OUTRO"))
			{
				return true;
			}
			break;
		case -1273369295:
			if (iParam1 == 1434623772 || iParam1 == 1708036133)
			{
				return true;
			}
			break;
		case 82200319:
			if (iParam1 == joaat("DOCUMENT_INSPECT@NEWSPAPER_OUTRO") || iParam1 == joaat("DOCUMENT_INSPECT@NEWSPAPER_FLIP_TO_FRONT_OUTRO"))
			{
				return true;
			}
			break;
		case -873135685:
			if (iParam1 == 676329346 || iParam1 == 1940752053)
			{
				return true;
			}
			break;
		case 24248412:
			if (iParam1 == -587250236 || iParam1 == -503655797)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_40(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_50(iParam0))
	{
		return false;
	}
	iVar0 = func_82(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(Global_1951255[iVar0 /*23*/].f_3);
}

void func_41(var uParam0, int iParam1)
{
	if (func_5(iParam1, -1227898937))
	{
		if (UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(joaat("TRANSLATION_OVERLAY"), joaat("NEWSPAPER")) == 0)
		{
			uParam0->f_5.f_1 = 1;
			AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
			func_83(uParam0, iParam1);
		}
	}
	else if (UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(joaat("TRANSLATION_OVERLAY"), joaat("GENERIC")) == 0)
	{
		uParam0->f_5.f_1 = 1;
		AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
		func_83(uParam0, iParam1);
	}
}

bool func_42(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_22(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_84(iParam0);
	switch (iVar0)
	{
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("AMMO"):
			if (!func_85(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_86(iParam0))
			{
				return true;
			}
			break;
	}
	return func_87(iParam0, 0, 0, 0) >= iParam1;
}

int func_43(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	struct<13> Var6;
	int iVar29;
	struct<2> Var30;
	bool bVar32;

	if (!func_22(iParam0, 0))
	{
		return 0;
	}
	if (!func_88(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_89(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_90(iParam0, bParam2);
	iVar2 = 0;
	if (func_84(iParam0) == joaat("CLOTHING"))
	{
		if (!func_5(iParam0, 866047851) && !func_5(iParam0, -1979000645))
		{
			bVar3 = true;
		}
	}
	if (func_91(iParam0, 8388608) && !func_92(27))
	{
		func_93(27);
	}
	func_94(iParam0);
	if (!bVar3)
	{
		if (func_5(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			iVar1 = func_96(func_95(iParam0, 1), 0);
			if (WEAPON::IS_WEAPON_VALID(iVar1))
			{
				if (func_3() == -1)
				{
					func_97(iVar1);
				}
				if (func_98(0) && func_99(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_100(iParam0, iVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_101(iParam0, iVar0, iParam5);
				}
			}
		}
		else if (func_84(iParam0) == joaat("WEAPON"))
		{
			if (!func_102(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_84(iParam0) == joaat("AMMO") && func_103(iParam0))
		{
			if (!func_104(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_5(iParam0, -103750053))
		{
			func_106(func_105(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_106(func_107(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_5(iParam0, -121341956) && !func_5(iParam0, 606799272))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR"))
			{
				func_108(536, 0);
			}
			if (func_5(iParam0, -2017733358) || func_5(iParam0, -1369131378))
			{
			}
		}
		else if (func_5(iParam0, -136654233))
		{
			if (func_5(iParam0, -1021472396))
			{
			}
		}
		else if (func_5(iParam0, -1466706512) && func_5(iParam0, 1147021565))
		{
			func_108(519, 0);
		}
		else if (func_5(iParam0, 1147021565) && func_5(iParam0, -524514947))
		{
		}
		else if (func_5(iParam0, 554195525))
		{
		}
		else if (func_5(iParam0, 589988438))
		{
			if (func_109())
			{
				func_110(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_5(iParam0, 787083290) && func_5(iParam0, 949916894))
		{
			func_111(iParam0);
		}
		else if (func_5(iParam0, -1718133314))
		{
			func_112(iParam0);
		}
		else if (func_5(iParam0, -1738650224))
		{
			func_113(iParam0);
		}
		else if (func_5(iParam0, -1112814642) && func_5(iParam0, 949916894))
		{
			func_114(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1940144.f_21 = 0;
		}
		else if (func_5(iParam0, 1841149704))
		{
			func_115();
		}
		else if (func_5(iParam0, -1979000645))
		{
		}
		else if (func_5(iParam0, 606799272))
		{
		}
		else if (func_5(iParam0, -1112814642) && func_5(iParam0, -1697809989))
		{
		}
		else if (func_5(iParam0, -2017733358) || func_5(iParam0, -1369131378))
		{
		}
		else if (func_5(iParam0, -1921346699))
		{
			return 0;
		}
		else if (func_5(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_42(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1))
					{
						func_43(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_42(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1))
					{
						func_43(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_42(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1))
					{
						func_43(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_42(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1))
					{
						func_43(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_42(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1))
					{
						func_43(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_42(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1))
					{
						func_43(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_5(iParam0, -839724752) && func_91(iParam0, 4))
		{
		}
		else if (func_5(iParam0, 1399091007))
		{
			func_116(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		switch (iParam0)
		{
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("ARROW_BUNDLE");
				break;
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_CRICKETS");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_WORMS");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_MP_TREASURE_MAP_REWARDS_BOX_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("REWARD_ABANDONED_LOOT_MALE");
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
			case joaat("WEAPON_KIT_BINOCULARS_IMPROVED"):
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				func_118(272, func_117(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_118(270, func_117(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_118(271, func_117(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_119(685, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_119(685, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_119(685, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_119(685, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_LAMB_HEART"):
			case joaat("CONSUMABLE_MEAL_PRIME_RIB"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL"):
			case joaat("CONSUMABLE_MEAL_CONSOMME"):
			case joaat("CONSUMABLE_MEAL_FRIED_CATFISH"):
			case joaat("CONSUMABLE_MEAL_PRAIRIE_CHICKEN"):
			case joaat("CONSUMABLE_MEAL_LAMB_FRY"):
			case joaat("CONSUMABLE_MEAL_OYSTER_STEW"):
			case joaat("CONSUMABLE_MEAL_TURTLE_SOUP"):
			case joaat("CONSUMABLE_MEAL_OATMEAL"):
			case joaat("CONSUMABLE_MEAL_CORNED_BEEF_HASH"):
			case joaat("CONSUMABLE_MEAL_ROAST_BEEF"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_119(686, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_119(686, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_108(526, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_108(529, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_92(1))
				{
					func_108(522, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_108(521, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_3() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_108(534, 0);
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
		iVar5 = iParam0;
		func_120(&iVar5);
		if (!func_101(iVar5, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_98(0))
		{
			return 1;
		}
		if (func_84(iParam0) == joaat("CLOTHING"))
		{
			func_121(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_98(0) && !func_122())
		{
			Var6.f_1 = 10;
			Var6.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_34, 0, 0, iVar2, &Var6, 0);
			iVar29 = 0;
			while (iVar29 < Var6)
			{
				func_43(Var6.f_1[iVar29], Var6.f_12[iVar29], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar29++;
			}
		}
		else
		{
			func_123(iVar2, 0);
		}
	}
	Var30 = { func_124(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var30))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var30, iVar0);
	}
	func_125(iParam0);
	if (fParam6 > 0f)
	{
		if (func_5(iParam0, -839724752))
		{
			func_126(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 1248274121;
		func_127(iParam0, iVar0, 0, bVar32, 0, 0, 0);
	}
	return 1;
}

int func_44(var uParam0)
{
	int iVar0;

	if (uParam0->f_116)
	{
		if (DECORATOR::DECOR_EXIST_ON(uParam0->f_101, "letter_item"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(uParam0->f_101, "letter_item");
		}
		else
		{
			iVar0 = TASK::_0x804425C4BBD00883(Global_34);
			if (!func_22(iVar0, 0))
			{
			}
		}
		Global_1913502 = iVar0;
	}
	else
	{
		iVar0 = Global_1913502;
	}
	return iVar0;
}

void func_45(var uParam0, var uParam1)
{
	int iVar0;

	uParam0->f_105 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_NUM_LABEL_TYPES(uParam1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_105)
	{
		uParam0->f_5.f_2[iVar0 /*5*/] = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_TYPE(uParam1, iVar0);
		uParam0->f_5.f_2[iVar0 /*5*/].f_2 = uParam0->f_5.f_2[iVar0 /*5*/];
		uParam0->f_5.f_2[iVar0 /*5*/].f_1 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_NUM_VALUES(uParam1, uParam0->f_5.f_2[iVar0 /*5*/].f_2);
		iVar0++;
	}
}

void func_46(var uParam0, var uParam1)
{
	func_128(uParam0, (*uParam1)[0 /*11*/]);
	func_129(uParam0, uParam1);
	if ((*uParam1)[1 /*11*/] != 0)
	{
		func_130(1, (*uParam1)[1 /*11*/]);
	}
	else
	{
		func_19(1);
	}
	func_131(uParam0, uParam1);
	if ((*uParam1)[2 /*11*/] != 0)
	{
		func_130(2, (*uParam1)[2 /*11*/]);
	}
	else
	{
		func_19(2);
	}
	func_132(uParam1);
	func_133(uParam1);
}

int func_47(var uParam0, int iParam1)
{
	int iVar0;

	if (uParam0->f_1)
	{
		if (uParam0->f_7.f_1 == 0)
		{
			uParam0->f_7.f_1 = HUD::_0xB6857100F8FD433C(uParam0->f_7.f_3, -2);
		}
		if (uParam0->f_7.f_1 != 0 && uParam0->f_7 == 0)
		{
			uParam0->f_7 = HUD::_0xBE1067CD1C9570F6(uParam0->f_7.f_1);
			if (iParam1 == 0)
			{
				if (!func_134(uParam0))
				{
					return 0;
				}
			}
			return 1;
		}
	}
	else if (func_135(*uParam0, &iVar0, joaat("INVENTORY"), joaat("UI_ITEMVIEWER"), 0, 0))
	{
		if (TXD::_DOES_STREAMED_TXD_EXIST(iVar0))
		{
			TXD::_REQUEST_STREAMED_TXD(iVar0, false);
			uParam0->f_5 = iVar0;
		}
	}
	return 1;
}

bool func_48(var uParam0, var uParam1)
{
	if (func_136(uParam0, uParam1[0 /*11*/]))
	{
		func_137(uParam0, uParam1);
		return true;
	}
	return false;
}

int func_49(var uParam0, var uParam1)
{
	return 1;
}

bool func_50(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 60)
	{
		return false;
	}
	if (Global_1951255[iParam0 /*23*/].f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3);
}

bool func_51(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_50(iParam0))
	{
		return false;
	}
	iVar0 = func_82(iParam0);
	if (HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(Global_1951255[iVar0 /*23*/].f_3))
	{
		if (Global_1951255[iVar0 /*23*/].f_20)
		{
			iVar1 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = MISC::_GET_SYSTEM_TIME();
		}
		uVar2 = HUD::_0x81801291806DBC50(Global_1951255[iVar0 /*23*/].f_3);
		if (!HUD::_UIPROMPT_IS_ACTIVE(Global_1951255[iVar0 /*23*/].f_3))
		{
			iVar3 = (iVar1 - Global_1951255[iVar0 /*23*/].f_21);
			iVar4 = BUILTIN::FLOOR((IntToFloat(Global_1951255[iVar0 /*23*/].f_18) * (1f - Global_1951255[iVar0 /*23*/].f_22)));
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			Global_1951255[iVar0 /*23*/].f_21 = iVar1;
			Global_1951255[iVar0 /*23*/].f_22 = uVar2;
		}
	}
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1951255[iVar0 /*23*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1951255[iVar0 /*23*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1951255[iVar0 /*23*/].f_3);
}

void func_52(bool bParam0)
{
	if (bParam0)
	{
		Global_1940311 = 1;
	}
	else
	{
		Global_1940311 = 2;
	}
}

bool func_53(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	uParam0->f_110 = 0;
	if (func_40(Global_17395[1], 1))
	{
		iVar0 = 1;
		uParam0->f_110 = 1;
		func_78(&(Global_17395[1]), !uParam0->f_125);
		func_78(&(Global_17395[0]), 1);
	}
	if (func_40(Global_17395[0], 1))
	{
		iVar0 = 1;
		func_78(&(Global_17395[0]), !uParam0->f_124);
		func_78(&(Global_17395[1]), 1);
	}
	return iVar0;
}

int func_54(var uParam0)
{
	switch (func_4(uParam0, -949239683))
	{
		case -1420737577:
			return -34349608;
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
			return joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_OUTRO");
		case -1273369295:
			return 1434623772;
		case 82200319:
			return joaat("DOCUMENT_INSPECT@NEWSPAPER_OUTRO");
		case -873135685:
			return 486187924;
		case 24248412:
			return -1079287506;
	}
	return 0;
}

bool func_55()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

bool func_56(int iParam0)
{
	return (iParam0 == -492264119 || iParam0 == 1397875340);
}

void func_57(int iParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;
	struct<12> Var11;

	iVar0 = func_138(iParam0, 1);
	if (func_139(iVar0))
	{
		Var1 = -1;
		Var1.f_1 = -1;
		Var11.f_9 = 1;
		Var11.f_11 = -1591664384;
		if (func_140(&Var1, iVar0, &Var11, 1, iParam1, -1, 0))
		{
		}
	}
}

void func_58(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_LETTER_REVENGE_2"):
			func_141(-1419640182, 0);
			break;
		case -492264119: /* GXTEntry: "Letter from Cripps" */
			func_141(-2028134866, 0);
			func_108(861, 0);
			break;
		case 1397875340:
			func_141(518311877, 0);
			break;
	}
}

int func_59(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_RE_FROZEN_DEATH_MAP"):
			return 0;
	}
	return 1;
}

void func_60(var uParam0)
{
	(*uParam0)[0 /*11*/] = 0;
	(uParam0[0 /*11*/])->f_1 = 0;
	(uParam0[0 /*11*/])->f_3 = 0;
	(uParam0[0 /*11*/])->f_5 = 0;
	(uParam0[0 /*11*/])->f_6 = 0;
	(uParam0[0 /*11*/])->f_7 = 0;
	(uParam0[0 /*11*/])->f_7.f_1 = 0;
	(uParam0[0 /*11*/])->f_7.f_2 = 0;
	(uParam0[0 /*11*/])->f_7.f_3 = 0;
	func_63(uParam0);
}

void func_61(var uParam0)
{
	(*uParam0)[0 /*11*/] = (*uParam0)[2 /*11*/];
	(uParam0[0 /*11*/])->f_1 = (uParam0[2 /*11*/])->f_1;
	(uParam0[0 /*11*/])->f_5 = (uParam0[2 /*11*/])->f_5;
	(uParam0[0 /*11*/])->f_6 = (uParam0[2 /*11*/])->f_6;
	(uParam0[0 /*11*/])->f_7 = (uParam0[2 /*11*/])->f_7;
	(uParam0[0 /*11*/])->f_7.f_1 = (uParam0[2 /*11*/])->f_7.f_1;
	(uParam0[0 /*11*/])->f_7.f_2 = (uParam0[2 /*11*/])->f_7.f_2;
	(uParam0[0 /*11*/])->f_7.f_3 = (uParam0[2 /*11*/])->f_7.f_3;
	(uParam0[0 /*11*/])->f_3 = 0;
}

void func_62(var uParam0)
{
	(*uParam0)[0 /*11*/] = (*uParam0)[1 /*11*/];
	(uParam0[0 /*11*/])->f_1 = (uParam0[1 /*11*/])->f_1;
	(uParam0[0 /*11*/])->f_5 = (uParam0[1 /*11*/])->f_5;
	(uParam0[0 /*11*/])->f_6 = (uParam0[1 /*11*/])->f_6;
	(uParam0[0 /*11*/])->f_7 = (uParam0[1 /*11*/])->f_7;
	(uParam0[0 /*11*/])->f_7.f_1 = (uParam0[1 /*11*/])->f_7.f_1;
	(uParam0[0 /*11*/])->f_7.f_2 = (uParam0[1 /*11*/])->f_7.f_2;
	(uParam0[0 /*11*/])->f_7.f_3 = (uParam0[1 /*11*/])->f_7.f_3;
	(uParam0[0 /*11*/])->f_3 = 0;
}

void func_63(var uParam0)
{
	(*uParam0)[2 /*11*/] = 0;
	(uParam0[2 /*11*/])->f_1 = 0;
	(uParam0[2 /*11*/])->f_3 = 0;
	(uParam0[2 /*11*/])->f_5 = 0;
	(uParam0[2 /*11*/])->f_6 = 0;
	(uParam0[2 /*11*/])->f_7 = 0;
	(uParam0[2 /*11*/])->f_7.f_1 = 0;
	(uParam0[2 /*11*/])->f_7.f_2 = 0;
	(uParam0[2 /*11*/])->f_7.f_3 = 0;
	(*uParam0)[1 /*11*/] = 0;
	(uParam0[1 /*11*/])->f_1 = 0;
	(uParam0[1 /*11*/])->f_3 = 0;
	(uParam0[1 /*11*/])->f_5 = 0;
	(uParam0[1 /*11*/])->f_6 = 0;
	(uParam0[1 /*11*/])->f_7 = 0;
	(uParam0[1 /*11*/])->f_7.f_1 = 0;
	(uParam0[1 /*11*/])->f_7.f_2 = 0;
	(uParam0[1 /*11*/])->f_7.f_3 = 0;
}

int func_64(int iParam0, bool bParam1, bool bParam2, int iParam3, float fParam4)
{
	int iVar0;

	switch (func_4(iParam0, -949239683))
	{
		case -1420737577:
			if (!bParam1)
			{
				iVar0 = 2129866661;
				if (bParam2)
				{
					iVar0 = 1607869040;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
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
				iVar0 = joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_INTRO");
				if (bParam2)
				{
					iVar0 = joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_BASE");
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
				iVar0 = joaat("DOCUMENT_INSPECT@NEWSPAPER_INTRO");
				if (bParam2)
				{
					iVar0 = joaat("DOCUMENT_INSPECT@NEWSPAPER_BASE");
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
					iVar0 = -1791047090;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, fParam4);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_65(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

bool func_66(int iParam0)
{
	return func_142(iParam0);
}

bool func_67(int iParam0)
{
	return (func_5(iParam0, 566155764) && !UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("MAP")));
}

bool func_68(int iParam0)
{
	return ((func_5(iParam0, -1472964441) && func_6(iParam0)) && !UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("MAP")));
}

bool func_69(int iParam0)
{
	if (iParam0 == 82200319)
	{
		return true;
	}
	return false;
}

void func_70(var uParam0)
{
	if (uParam0->f_105 > 0)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_34, "GENERIC_BOOK_READ_AVAILABLE", true, -1);
	}
}

void func_71(int iParam0)
{
	if (func_5(iParam0, 1989861793))
	{
		func_57(iParam0, 1946634759);
	}
}

void func_72(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	struct<15> Var1;

	if (!func_5(iParam0, -1472964441))
	{
		return;
	}
	if (!func_6(iParam0))
	{
		return;
	}
	iVar0 = func_143(iParam0, bParam2);
	if (iVar0 != 0)
	{
		func_145(func_144(iVar0), 10000, 0, 0, 0, 1);
		return;
	}
	Var1 = 3;
	Var1.f_11 = 3;
	Var1.f_10 = iParam0;
	func_146(&Var1);
	iVar0 = func_147(Var1);
	if (iVar0 != 0)
	{
		func_145(func_144(iVar0), 10000, 0, 0, 0, 1);
		return;
	}
	if (uParam1->f_21)
	{
		func_148(uParam1, 0);
	}
	if (uParam1->f_18 != Var1.f_10)
	{
		func_106(func_149(joaat("COLLECTOR_MAP_OPENED")), 1);
		uParam1->f_18 = Var1.f_10;
	}
	func_150(Var1);
	Global_17411.f_3080 = { func_151() };
	uParam1->f_21 = 1;
	if (bParam2)
	{
		UIAPPS::_LAUNCH_APP_BY_HASH(joaat("MAP"));
		uParam1->f_22 = 0;
	}
}

void func_73(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	if (func_5(iParam0, 566155764))
	{
		func_152(iParam0);
		iVar0 = func_153(iParam0);
		if (iVar0 != -1)
		{
			vVar1 = { func_154(iVar0) };
			vVar4 = { func_155(iVar0) };
			MAP::_0xE0884C184728C75B(vVar1, vVar4.x);
		}
		UIAPPS::_LAUNCH_APP_BY_HASH(joaat("MAP"));
	}
}

void func_74(var uParam0, bool bParam1)
{
	if (func_50(*uParam0))
	{
		func_156(*uParam0, bParam1, 0, 1);
	}
}

bool func_75(var uParam0, var uParam1)
{
	bool bVar0;

	if (func_33(*uParam1, uParam0->f_104))
	{
		bVar0 = !func_5(*uParam1, 1051234725);
	}
	if (func_76(*uParam1, uParam0->f_104))
	{
		bVar0 = func_5(*uParam1, 601161511);
	}
	return bVar0;
}

bool func_76(var uParam0, int iParam1)
{
	switch (func_4(uParam0, -949239683))
	{
		case 1712126263:
			if (iParam1 == 2110129666)
			{
				return true;
			}
			break;
		case 10252101:
			if (iParam1 == -358392831)
			{
				return true;
			}
			break;
		case -1229959999:
			if (iParam1 == 391077233)
			{
				return true;
			}
			break;
		case -1050374492:
			if (iParam1 == 1010970643)
			{
				return true;
			}
			break;
		case 1513351077:
			if (iParam1 == 382283982)
			{
				return true;
			}
			break;
		case -1565009253:
			if (iParam1 == -498826883)
			{
				return true;
			}
			break;
		case 733893097:
			if (iParam1 == -1222090749)
			{
				return true;
			}
			break;
		case -164980960:
			if (iParam1 == 1641476577)
			{
				return true;
			}
			break;
		case 1894156335:
			if (iParam1 == 690458252)
			{
				return true;
			}
			break;
		case 871191033:
			if (iParam1 == joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_FLIPPED_BASE"))
			{
				return true;
			}
			break;
		case -1273369295:
			if (iParam1 == -277062447)
			{
				return true;
			}
			break;
		case 82200319:
			if (iParam1 == joaat("DOCUMENT_INSPECT@NEWSPAPER_FLIPPED_BASE"))
			{
				return true;
			}
			break;
		case -873135685:
			if (iParam1 == -180517239)
			{
				return true;
			}
			break;
		case 24248412:
			if (iParam1 == -2082844535)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_77(int iParam0, bool bParam1)
{
	if (bParam1 && !func_50(iParam0))
	{
		return false;
	}
	return !func_157(iParam0, 4);
}

void func_78(var uParam0, bool bParam1)
{
	if (func_50(*uParam0))
	{
		func_156(*uParam0, bParam1, 1, 1);
	}
}

void func_79(var uParam0, var uParam1)
{
	func_78(&(Global_17395[3]), func_75(uParam0, uParam1));
}

bool func_80(var uParam0, int iParam1)
{
	switch (func_4(uParam0, -949239683))
	{
		case 1712126263:
			if (iParam1 == 699685523)
			{
				return true;
			}
			break;
		case 10252101:
			if (iParam1 == 687211918)
			{
				return true;
			}
			break;
		case -1229959999:
			if (iParam1 == 1942589213)
			{
				return true;
			}
			break;
		case -1050374492:
			if (iParam1 == 557096072)
			{
				return true;
			}
			break;
		case 1513351077:
			if (iParam1 == 676223146)
			{
				return true;
			}
			break;
		case -1565009253:
			if (iParam1 == 961781775)
			{
				return true;
			}
			break;
		case 733893097:
			if (iParam1 == 88279163)
			{
				return true;
			}
			break;
		case -164980960:
			if (iParam1 == 251586723)
			{
				return true;
			}
			break;
		case 1894156335:
			if (iParam1 == 554041952)
			{
				return true;
			}
			break;
		case 871191033:
			if (iParam1 == joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_FLIP_TO_BACK"))
			{
				return true;
			}
			break;
		case -1273369295:
			if (iParam1 == 527714016)
			{
				return true;
			}
			break;
		case 82200319:
			if (iParam1 == joaat("DOCUMENT_INSPECT@NEWSPAPER_FLIP_TO_BACK"))
			{
				return true;
			}
			break;
		case -873135685:
			if (iParam1 == 1275147506)
			{
				return true;
			}
			break;
		case 24248412:
			if (iParam1 == 224513019)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_81(var uParam0)
{
}

int func_82(int iParam0)
{
	return iParam0;
}

void func_83(var uParam0, int iParam1)
{
	var uVar0;

	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Translate");
	uParam0->f_5.f_63 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uVar0, "Generic");
	if (func_5(iParam1, 1104960349))
	{
		func_158(uParam0, iParam1);
	}
	else if (func_5(iParam1, 1989861793))
	{
		if (func_5(iParam1, -885754398))
		{
			func_159(uParam0, iParam1);
		}
		else
		{
			func_160(uParam0, iParam1);
		}
	}
	else if (func_5(iParam1, 1989861793))
	{
		func_160(uParam0, iParam1);
	}
	else if (func_5(iParam1, -772152977))
	{
		func_161(uParam0, iParam1);
	}
	else if (func_5(iParam1, -2081717885))
	{
		func_162(uParam0, iParam1);
	}
	else if (func_4(iParam1, 1224357681) == joaat("CI_TAG_FOLDER_BOUNTY_POSTERS"))
	{
		func_163(uParam0, iParam1);
	}
	else if (func_5(iParam1, -1227898937))
	{
	}
	else
	{
		func_164(uParam0, iParam1);
	}
}

int func_84(int iParam0)
{
	vector3 vVar0;

	if (!func_22(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_85(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_22(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258.f_6)
	{
		return false;
	}
	iVar0 = func_165(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_166("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_167(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_168(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_14(iVar1);
				return true;
			}
			iVar3++;
		}
		func_14(iVar1);
	}
	return false;
}

bool func_86(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_22(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_169(iParam0);
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
	iVar1 = func_170(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_171(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_172(iParam0);
	iVar2 = func_171(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == Global_17411.f_55.f_644.f_1354.f_5[iVar2 /*17*/];
}

int func_87(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_22(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_84(iParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		iVar2 = func_165(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_173(iParam0, 0);
	}
	if (func_174(iParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_175(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_176(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_175(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

bool func_88(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_3() == -1)
	{
		if (func_177(iParam0) && func_178(iParam0))
		{
			func_179(iParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (iParam0 == joaat("CUSTOM_SATCHEL"))
	{
		bParam2 = true;
	}
	else if (iParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}
	return true;
}

bool func_89(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_180(iParam0, iParam1);
	Var0 = { func_181(iParam0, 0, 1) };
	iVar5 = func_182(iParam0, &Var0, 0, 0);
	iVar6 = func_183(iParam0, 0, 0, 0);
	if (iVar5 > 1 && (iVar6 + iParam2) >= iVar5)
	{
		if (func_5(iParam0, -2051813666))
		{
			func_108(674, 1);
		}
		else if (func_3() == -1)
		{
			func_108(673, 0);
		}
	}
	if (func_184(iParam0, &Var0, *iParam1, 0, 0, -1, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_90(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	if (!func_185())
	{
		return;
	}
	switch (func_4(iParam0, -949239683))
	{
		case -1565009253:
		case -1420737577:
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
			Global_1940144.f_70.f_5 = 1;
			Global_1940144.f_70.f_6 = 0;
			Global_1940144.f_70.f_1 = iParam0;
			break;
	}
}

bool func_91(int iParam0, int iParam1)
{
	if (!func_22(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

bool func_92(int iParam0)
{
	if (!func_186(iParam0))
	{
		return false;
	}
	return func_187(iParam0);
}

void func_93(int iParam0)
{
	if (!func_186(iParam0))
	{
		return;
	}
	func_188(iParam0);
	func_189(iParam0);
}

void func_94(int iParam0)
{
	if (func_5(iParam0, -1522723129))
	{
		func_190(-848633709, 0, 255, 0, 0);
	}
	else if (func_5(iParam0, -283942357))
	{
		func_190(-981153234, 0, 255, 0, 0);
	}
	else if (func_5(iParam0, 683680997))
	{
		func_190(-756350192, 0, 255, 0, 0);
	}
	else if (func_5(iParam0, 1307628809))
	{
		func_190(603094518, 0, 255, 0, 0);
	}
}

int func_95(int iParam0, bool bParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("AMMO_THROWING_KNIVES"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_CONFUSE"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_DISORIENT"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_DRAIN"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_IMPROVED"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_POISON"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_TRAIL"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_WOUND"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_DYNAMITE"):
			iVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_DYNAMITE_VOLATILE"):
			iVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_MOLOTOV"):
			iVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_MOLOTOV_VOLATILE"):
			iVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_TOMAHAWK"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_ANCIENT"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK_ANCIENT");
			break;
		case joaat("AMMO_TOMAHAWK_HOMING"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_IMPROVED"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_BOLAS"):
			iVar0 = joaat("WEAPON_THROWN_BOLAS");
			break;
		case joaat("AMMO_POISONBOTTLE"):
			iVar0 = joaat("WEAPON_THROWN_POISONBOTTLE");
			break;
		case joaat("AMMO_HATCHET"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET");
			break;
		case joaat("AMMO_HATCHET_HUNTER"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER");
			break;
		case joaat("AMMO_HATCHET_HUNTER_RUSTED"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER_RUSTED");
			break;
		case joaat("AMMO_HATCHET_ANCIENT"):
			iVar0 = joaat("WEAPON_MELEE_ANCIENT_HATCHET");
			break;
		case joaat("AMMO_HATCHET_CLEAVER"):
			iVar0 = joaat("WEAPON_MELEE_CLEAVER");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT_RUSTED"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT_RUSTED");
			break;
		case joaat("AMMO_HATCHET_HEWING"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HEWING");
			break;
		case joaat("AMMO_HATCHET_VIKING"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_VIKING");
			break;
		default:
			break;
	}
	if (func_22(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_191(iVar0) || func_192(iVar0))
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

int func_96(int iParam0, bool bParam1)
{
	if (!func_22(iParam0, 0))
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

void func_97(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_13 != -1)
	{
		return;
	}
	if (!func_168(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, true);
}

bool func_98(bool bParam0)
{
	if (func_3() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_175(bParam0));
}

bool func_99(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var27;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_MELEE(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
	{
		Var0 = { func_181(iParam0, 0, 1) };
		if (func_193(iParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_194(iParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_195(iParam0, Var0, Var0.f_4, 0) };
				func_196(iParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_98(0))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
		{
			return false;
		}
		func_100(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
		func_197(iParam0, iParam1);
		return true;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
	{
		return false;
	}
	if (iParam1 > 0)
	{
	}
	WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	return true;
}

bool func_100(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_103(iParam0))
	{
		return false;
	}
	if (!func_98(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_34, iParam0, iParam1, iParam2);
	return true;
}

int func_101(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_22(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_174(iParam0, joaat("DEFAULT"));
	if (iVar0 != 0)
	{
		return func_198(iParam0, iParam1, iParam2);
	}
	Var1 = { func_181(iParam0, 0, 1) };
	Var6 = { func_195(iParam0, Var1, Var1.f_4, 0) };
	return func_199(iParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

bool func_102(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;

	iVar0 = func_96(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_3() == -1)
		{
			func_97(iVar0);
			if (iParam1 == 1248274121)
			{
				func_200(iVar0);
			}
		}
		if (!func_184(iParam0, &uVar1, 1, 0, 0, -1, 0))
		{
			func_179(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_201(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_99(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || WEAPON::_IS_WEAPON_BINOCULARS(iVar0))
			{
				func_99(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_LASSO(iVar0))
			{
				func_99(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_MELEE(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !func_202())
				{
					return false;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!func_203(iVar0))
				{
					func_99(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_99(iVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = func_204(Global_34, 2, 0, 1);
				if ((((func_168(iVar7) && !Global_26640) && iVar7 != iVar0) && !func_42(joaat("UPGRADE_OFFHAND_HOLSTER"), 1)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_34, iVar7);
				}
				if (func_168(iVar7) && func_42(joaat("UPGRADE_OFFHAND_HOLSTER"), 1))
				{
					if (!func_99(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_99(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_99(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		func_108(515, 1);
	}
	return true;
}

bool func_103(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_104(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_103(iParam0))
	{
		return 0;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	if (func_168(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_34, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (WEAPON::_IS_WEAPON_BOW(iVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_GET_WEAPON_CLIP_SIZE(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
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
		func_118(func_205(iParam0), func_117(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_98(0))
	{
		if (func_100(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_101(iParam0, *iParam1, iParam2);
	}
	return 0;
}

struct<2> func_105(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_106(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

struct<2> func_107(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_108(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_206(iParam0, &iVar0, &iVar1);
	if (!func_207(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_208(iVar0, iVar1);
}

bool func_109()
{
	return false;
}

int func_110(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	if (func_3() == 0)
	{
		func_123(iParam0, 0);
		return 0;
	}
	iVar0 = func_209(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_210(iVar0, sParam4, iParam5, 0);
	}
	func_211(iVar0, bParam1, fParam2, iParam3);
	return iVar0;
}

void func_111(int iParam0)
{
}

void func_112(int iParam0)
{
}

void func_113(int iParam0)
{
}

void func_114(int iParam0)
{
}

void func_115()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_EXPL_ROOT"), joaat("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_116(int iParam0, int iParam1)
{
	var uVar0;

	func_212(iParam0, iParam1, &uVar0);
}

int func_117(int iParam0)
{
	int iVar0;

	if (!func_22(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_213(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

void func_118(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_206(iParam0, &iVar0, &iVar1);
	if (!func_207(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_214(iParam0, 1024))
	{
		return;
	}
	func_208(iVar0, iVar1);
	Global_1904651.f_33[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1904651.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_119(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_206(iParam0, &iVar0, &iVar1);
	if (!func_207(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_214(iParam0, 1024))
	{
		return;
	}
	func_208(iVar0, iVar1);
	Global_1904651.f_33[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		Global_1904651.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	}
	else
	{
		Global_1904651.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;
	}
}

void func_120(int iParam0)
{
	switch (*iParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*iParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
	}
}

void func_121(int iParam0)
{
	if (func_3() != -1)
	{
		return;
	}
}

bool func_122()
{
	if (INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return false;
	}
	return INVENTORY::_0xFC7563F482781A3D();
}

int func_123(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_215(&Var4, joaat("LOOT_TYPE_NORMAL"));
	return func_216(iParam0, &Var4, &uVar0, iParam1, 0);
}

struct<2> func_124(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_22(iParam0, 0))
	{
		return Var0;
	}
	if (func_5(iParam0, -305066475))
	{
		if (func_3() == -1)
		{
			if (func_5(iParam0, -537818634))
			{
				return func_149(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_149(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_5(iParam0, -537818634))
	{
		return func_149(joaat("MEDICINE_ITEMS"));
	}
	if (func_5(iParam0, 2084895747))
	{
		return func_149(joaat("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

void func_125(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			break;
	}
}

void func_126(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_217(Global_1903071.f_37);
	func_219(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_218(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_127(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	char* sVar14;
	char* sVar15;
	int iVar16;
	char* sVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	char* sVar21;
	char cVar22[128];

	if (!func_22(iParam0, 0))
	{
		return;
	}
	else if (iParam0 == joaat("KIT_HANDHELD_CATALOG"))
	{
		return;
	}
	else if (iParam1 == 0)
	{
		return;
	}
	if (!func_220() || bParam6)
	{
		func_221(iParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_222(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam0 == joaat("AMMO_MOONSHINEJUG_MP"))
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_222(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_91(iParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_84(iParam0);
	iVar10 = 0;
	iVar11 = joaat("INVENTORY");
	if (((((((iVar6 == joaat("AMMO") && iParam0 != joaat("AMMO_HATCHET")) && iParam0 != joaat("AMMO_HATCHET_CLEAVER")) && iParam0 != joaat("AMMO_HATCHET_HUNTER")) && iParam0 != joaat("AMMO_TOMAHAWK_ANCIENT")) && iParam0 != joaat("AMMO_BOLAS")) && iParam0 != joaat("AMMO_POISONBOTTLE")) && iParam0 != joaat("AMMO_MOONSHINEJUG_MP"))
	{
		iVar10 = joaat("AMMO_TYPES");
		iVar11 = joaat("AMMO_TYPES");
	}
	iVar12 = func_169(iParam0);
	if (((((((iVar6 == joaat("WEAPON_MOD") || iVar6 == joaat("WEAPON_DECORATION")) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_223(iParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (bParam5)
	{
		Var7 = "ITEMTYPE_ORDERED_ITEM";
		Var7.f_1 = "itemtype_textures";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar13 = joaat("COLOR_PURE_WHITE");
	sVar14 = "Transaction_Positive";
	sVar15 = "Transaction_Feed_Sounds";
	iVar16 = 0;
	if (bVar0)
	{
		iVar13 = joaat("COLOR_GREYMID");
		sVar14 = "Transaction_Negative";
		iVar16 = 1;
	}
	if (func_5(iParam0, 474910316))
	{
		sVar17 = func_224(iParam0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar17))
		{
			sVar14 = sVar17;
			sVar15 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = joaat("COLOR_RPG_SPECIAL_1");
		}
		else
		{
			iVar13 = joaat("COLOR_YELLOWDARK");
		}
	}
	if (func_5(iParam0, 1816585950))
	{
		iVar13 = joaat("COLOR_OBJECTIVE");
	}
	if (func_225(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = joaat("COLOR_YELLOW");
		}
		else
		{
			iVar13 = joaat("COLOR_YELLOWDARK");
		}
	}
	iVar18 = func_117(iParam0);
	if ((func_226(iVar12) && func_5(iParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_227(iParam0);
	}
	else if (func_84(iParam0) == joaat("CLOTHING"))
	{
		iVar19 = func_228(iParam0);
		if (func_22(iVar19, 0))
		{
			iVar18 = func_117(iVar19);
		}
	}
	if (func_229(iParam0, 1443104131) && bParam3)
	{
		iVar20 = 1;
		func_230(iParam0, -915411861, &iVar20, 0);
		iVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(iVar20)));
		iParam1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(iVar20)));
	}
	sVar21 = func_231(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, iVar18), iVar1), iVar13);
	if (iParam1 == 1)
	{
		sVar21 = MISC::_CREATE_VAR_STRING(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && iParam0 != joaat("CLOTHING_ITEM_HAIR_NONE")) && iParam0 != 1326838792) && iParam0 != -230310728) || ((iVar12 == 231148558 && iParam0 != joaat("CLOTHING_ITEM_M_BEARD_STUBBLE")) && iParam0 != joaat("CLOTHING_ITEM_BEARD_NONE"))) || (iVar12 == 252325943 && iParam0 != joaat("CLOTHING_BLEND_LIPSTICK_NONE"))) || (iVar12 == -636562458 && iParam0 != joaat("CLOTHING_BLEND_EYESHADOW_NONE")))
	{
		sVar21 = MISC::_CREATE_VAR_STRING(0, func_232(iParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		StringCopy(&cVar22, "", 128);
		if (func_233(iParam0, &cVar22))
		{
			sVar21 = func_235(func_234(cVar22), joaat("COLOR_PURE_WHITE"));
		}
	}
	func_219(sVar21, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

int func_128(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;

	if (func_166("ALL SATCHEL EXCLUDING CLOTHING", &(uParam0->f_1.f_1), &(uParam0->f_1), 1084182731, 0))
	{
		uParam0->f_119 = 1;
		iVar0 = 0;
		iVar1 = 0;
		if (uParam0->f_1 > 0)
		{
			Var2.f_9 = -1591664384;
			iVar0 = (uParam0->f_1 - 1);
			while (iVar0 >= 0)
			{
				if (!func_167(&Var2, iVar0, uParam0->f_1.f_1, uParam0->f_1))
				{
				}
				else
				{
					if (iParam1 == Var2.f_4)
					{
						uParam0->f_1.f_2 = iVar0;
						uParam0->f_1.f_3 = iVar1;
					}
					if (Global_1940311.f_10892 == 0)
					{
						if (func_236(&Var2, 0))
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

bool func_129(var uParam0, var uParam1)
{
	struct<10> Var0;
	int iVar14;
	bool bVar15;

	if (uParam0->f_1.f_2 + 1 >= uParam0->f_1)
	{
		(*uParam1)[2 /*11*/] = 0;
		return false;
	}
	if (Global_17407)
	{
		return false;
	}
	if (!uParam0->f_119)
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	iVar14 = 0;
	bVar15 = false;
	iVar14 = uParam0->f_1.f_2 + 1;
	while (iVar14 <= (uParam0->f_1 - 1))
	{
		if (func_167(&Var0, iVar14, uParam0->f_1.f_1, uParam0->f_1))
		{
			if (func_237((*uParam1)[0 /*11*/], Var0.f_4))
			{
				if (!bVar15)
				{
					(*uParam1)[1 /*11*/] = Var0.f_4;
					bVar15 = true;
				}
				else
				{
					uParam0->f_124 = 0;
					return bVar15;
				}
			}
		}
		iVar14++;
	}
	if (!bVar15)
	{
		(*uParam1)[1 /*11*/] = 0;
	}
	return bVar15;
}

void func_130(int iParam0, int iParam1)
{
	if (!func_22(iParam1, 0))
	{
		return;
	}
	if ((!func_5(iParam1, 747873593) && !func_5(iParam1, joaat("CI_TAG_FOLDER_LETTERS"))) && !func_5(iParam1, joaat("CI_TAG_FOLDER_NOTES")))
	{
		return;
	}
	if (iParam1 != Global_1913674[iParam0 /*6*/])
	{
		Global_1913674[iParam0 /*6*/].f_1 = 3;
		Global_1913674[iParam0 /*6*/] = iParam1;
		Global_1913674[iParam0 /*6*/].f_5 = 0;
	}
}

bool func_131(var uParam0, var uParam1)
{
	struct<10> Var0;
	int iVar14;
	int iVar15;
	int iVar16;
	bool bVar17;

	Var0.f_9 = -1591664384;
	iVar14 = 0;
	iVar15 = (16 - uParam0->f_1.f_3);
	if (Global_17407)
	{
		return false;
	}
	if (!uParam0->f_119)
	{
		return false;
	}
	bVar17 = false;
	iVar14 = (uParam0->f_1.f_2 - 1);
	while (iVar14 >= 0)
	{
		if (Global_1940311.f_10892 == 0)
		{
			iVar16++;
			if (iVar16 >= iVar15)
			{
				return false;
			}
		}
		if (func_167(&Var0, iVar14, uParam0->f_1.f_1, uParam0->f_1))
		{
			if (func_237((*uParam1)[0 /*11*/], Var0.f_4))
			{
				if (!bVar17)
				{
					(*uParam1)[2 /*11*/] = Var0.f_4;
					bVar17 = true;
				}
				else
				{
					uParam0->f_125 = 0;
					return bVar17;
				}
			}
		}
		iVar14 = (iVar14 + -1);
	}
	if (!bVar17)
	{
		(*uParam1)[2 /*11*/] = 0;
	}
	return bVar17;
}

void func_132(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_22((*uParam0)[iVar0 /*11*/], 0))
		{
			func_238(uParam0[iVar0 /*11*/]);
		}
		iVar0++;
	}
}

void func_133(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_22((*uParam0)[iVar0 /*11*/], 0))
		{
			(uParam0[iVar0 /*11*/])->f_6 = func_4((*uParam0)[iVar0 /*11*/], -949239683);
		}
		iVar0++;
	}
}

bool func_134(var uParam0)
{
	if ((!uParam0->f_3 && uParam0->f_7.f_1 != 0) && uParam0->f_7 != 0)
	{
		HUD::_0x51DE09A2196BD951(uParam0->f_7, uParam0->f_7.f_2);
		uParam0->f_3 = 1;
		return true;
	}
	return false;
}

bool func_135(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
			if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/]))
			{
				Jump @230; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/].f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/]);
				iVar2 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/].f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0 /*3*/].f_2 != iParam2)
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
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_136(var uParam0, var uParam1)
{
	if (uParam1->f_3)
	{
		return true;
	}
	if (uParam1->f_1)
	{
		return func_134(uParam1);
	}
	else if (uParam1->f_5 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_101) && TXD::_HAS_STREAMED_TXD_LOADED(uParam1->f_5))
		{
			if (!uParam1->f_3)
			{
				OBJECT::_SET_APPLY_OBJECT_TXD(uParam0->f_101, uParam1->f_5, 0, 0);
			}
			uParam1->f_3 = 1;
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

int func_137(var uParam0, var uParam1)
{
	return 0;
}

int func_138(int iParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_22(iParam0, 0))
	{
		return func_239(func_23(iParam0), bParam1);
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

bool func_139(int iParam0)
{
	return iParam0 != 0;
}

bool func_140(int* iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!func_240(iParam0, 0))
	{
		return false;
	}
	if (iParam4 == 0)
	{
		iParam4 = func_241(iParam1, 0, 1, iParam5, bParam6);
	}
	if (!func_242(iParam1, iParam4, iParam5))
	{
		return false;
	}
	uParam2->f_16 = iParam1;
	uParam2->f_8 = iParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = iParam4;
	uParam2->f_12 = 1248274121;
	if (!func_243(iParam0, *uParam2, 541670136, iParam3))
	{
		return false;
	}
	if (COLLECTION::_0x9ADEE485726025D4(iParam1) != 0)
	{
		if (Global_1293346.f_20.f_422 != -1)
		{
		}
		Global_1293346.f_20.f_422.f_1 = iParam1;
		Global_1293346.f_20.f_422 = iParam0->f_1;
	}
	return true;
}

int func_141(int iParam0, int iParam1)
{
	struct<30> Var0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (Global_1293346.f_458.f_1546 >= 40)
	{
		func_244();
		return -1;
	}
	Var0 = -1;
	Var0.f_5.f_1 = 11;
	Var0.f_18.f_1 = 10;
	Var0.f_4 = iParam0;
	Var0 = func_245();
	Var0.f_3 = iParam1;
	func_246(Var0, 0);
	return Var0;
}

bool func_142(int iParam0)
{
	return func_247(Global_1940144.f_38, iParam0);
}

int func_143(int iParam0, bool bParam1)
{
	if (!func_6(iParam0))
	{
		return 0;
	}
	if (func_248(0, 0, 1))
	{
		return 1;
	}
	if (iParam0 == joaat("DOCUMENT_COLLECTOR_MAP_ARROWHEADS"))
	{
		if (!func_42(joaat("KIT_COLLECTOR_SPADE"), 1))
		{
			return 3;
		}
	}
	else if ((iParam0 == joaat("DOCUMENT_COLLECTOR_MAP_JEWELRY") || iParam0 == joaat("DOCUMENT_COLLECTOR_MAP_COINS")) || iParam0 == joaat("DOCUMENT_COLLECTOR_MAP_HEIRLOOMS"))
	{
		if (!func_42(joaat("WEAPON_KIT_METAL_DETECTOR"), 1))
		{
			return 4;
		}
	}
	if (iParam0 == joaat("DOCUMENT_COLLECTOR_MAP_FOSSILS"))
	{
		if (!func_42(joaat("WEAPON_KIT_METAL_DETECTOR"), 1))
		{
			return 4;
		}
		else if (!func_249())
		{
			return 5;
		}
	}
	if (bParam1)
	{
		if (Global_17411.f_2966 > 0)
		{
			return 2;
		}
	}
	return 0;
}

char* func_144(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "COLLECTIBLE_MAP_ON_MISSION";
		case 2:
			return "COLLECTIBLE_MAP_ACTIVE_MAP";
		case 3:
			return "COLLECTIBLE_MAP_SPADE_MISSING";
		case 4:
			return "COLLECTIBLE_MAP_METAL_DETECTOR_MISSING";
		case 5:
			return "COLLECTIBLE_MAP_SEARCH_ITEMS_NOT_AVAILABLE";
	}
	return "NET_COLLECTIBLE_OPEN_MAP_RESULT_NONE";
}

var func_145(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	uVar15 = UIFEED::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_146(var uParam0)
{
	switch (uParam0->f_10)
	{
		case joaat("DOCUMENT_COLLECTOR_MAP_ARROWHEADS"):
			func_250(uParam0, -1995062316);
			break;
		case joaat("DOCUMENT_COLLECTOR_MAP_BIRD_EGGS"):
			func_250(uParam0, -149719013);
			break;
		case joaat("DOCUMENT_COLLECTOR_MAP_BOTTLES"):
			func_250(uParam0, 1239889275);
			break;
		case joaat("DOCUMENT_COLLECTOR_MAP_COINS"):
			func_250(uParam0, 143267379);
			break;
		case joaat("DOCUMENT_COLLECTOR_MAP_HEIRLOOMS"):
			func_250(uParam0, -944041124);
			break;
		case joaat("DOCUMENT_COLLECTOR_MAP_JEWELRY"):
			func_250(uParam0, 1562621600);
			break;
		case joaat("DOCUMENT_COLLECTOR_MAP_TAROT_CARDS"):
			func_250(uParam0, 1940829793);
			break;
		case joaat("DOCUMENT_COLLECTOR_MAP_WILD_FLOWERS"):
			func_250(uParam0, 781094263);
			break;
		case joaat("DOCUMENT_COLLECTOR_MAP_FOSSILS"):
			func_250(uParam0, -352095726);
			break;
		case joaat("DOCUMENT_COLLECTOR_MAP_RANDOM"):
			func_250(uParam0, 0);
			break;
		default:
			func_250(uParam0, 0);
			break;
	}
}

int func_147(vector3[] vParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < vParam0.x)
	{
		if (!func_251(vParam0[iVar0 /*3*/]))
		{
			return 0;
		}
		iVar0++;
	}
	return 5;
}

void func_148(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

struct<2> func_149(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_150(struct<12> Param0, var uParam12, var uParam13, var uParam14)
{
	int iVar0;

	Global_17411.f_2966.f_17 = Param0.f_10;
	iVar0 = 0;
	while (iVar0 < Param0)
	{
		Global_17411.f_2966.f_1[iVar0 /*5*/].f_1 = { Param0[iVar0 /*3*/] };
		Global_17411.f_2966.f_1[iVar0 /*5*/].f_4 = Param0.f_11[iVar0];
		iVar0++;
	}
}

struct<10> func_151()
{
	return Global_1297612.f_34[func_252() /*10*/];
}

void func_152(int iParam0)
{
	struct<6> Var0;
	var uVar6;

	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	SCRIPTS::_0x31010318BA9897AC(&uVar6, PLAYER::PLAYER_ID());
	func_253(&Var0, uVar6);
}

int func_153(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (func_254(iVar0, iParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_154(int iParam0)
{
	vector3 vVar0;
	struct<5> Var3;

	if (func_255(&Var3, iParam0) && func_256(&Var3))
	{
		func_257(Var3, 924198834, &vVar0, 1);
	}
	return vVar0;
}

Vector3 func_155(int iParam0)
{
	vector3 vVar0;
	struct<5> Var3;

	if (func_255(&Var3, iParam0) && func_256(&Var3))
	{
		func_257(Var3, 1334964216, &vVar0, 1);
	}
	return vVar0;
}

void func_156(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_50(iParam0))
	{
		return;
	}
	iVar0 = func_82(iParam0);
	if (bParam1)
	{
		func_258(iParam0, 4);
		if (bParam3)
		{
			func_259(iVar0, 1);
		}
		func_260(iVar0, 1);
	}
	else
	{
		func_261(iParam0, 4);
		func_260(iVar0, 0);
	}
}

bool func_157(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951255[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_158(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
			switch (uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					func_262(&(uParam0->f_5), 0, 0, 1, 0);
					break;
				case -641080715:
					func_262(&(uParam0->f_5), 1, 2, 1, 0);
					break;
				case 1724675796:
					func_262(&(uParam0->f_5), 2, 1, 1, 0);
					break;
				case 276123595:
					func_262(&(uParam0->f_5), 3, 3, 1, 0);
					break;
				case -139224928:
					func_262(&(uParam0->f_5), 4, 1, 1, 0);
					break;
				case -29447330:
					func_262(&(uParam0->f_5), 5, 2, 1, 0);
					break;
				case 159464507:
					func_262(&(uParam0->f_5), 6, 1, 1, 0);
					break;
				case 1175698187:
					func_262(&(uParam0->f_5), 7, 2, 0, 0);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_159(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;

	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			if (func_263(iVar0))
			{
				uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
				sVar3 = HUD::_GET_LABEL_TEXT_BY_HASH(uParam0->f_5);
				uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0 + 1);
				if (MISC::_DOES_STRING_EXIST_IN_STRING(sVar3, "_MH"))
				{
					func_262(&(uParam0->f_5), iVar2, 0, 1, 0);
				}
				else if (MISC::_DOES_STRING_EXIST_IN_STRING(sVar3, "_SH"))
				{
					func_262(&(uParam0->f_5), iVar2, 1, 1, 0);
				}
				else if (MISC::_DOES_STRING_EXIST_IN_STRING(sVar3, "_BDY_C"))
				{
					func_262(&(uParam0->f_5), iVar2, 3, 0, 0);
				}
				else if (MISC::_DOES_STRING_EXIST_IN_STRING(sVar3, "_BDY_J"))
				{
					func_262(&(uParam0->f_5), iVar2, 4, 0, 0);
				}
				else if (MISC::_DOES_STRING_EXIST_IN_STRING(sVar3, "_BDY_L"))
				{
					func_262(&(uParam0->f_5), iVar2, 2, 0, 0);
				}
				iVar2++;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_160(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
			switch (uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					func_262(&(uParam0->f_5), iVar2, 0, 1, 0);
					iVar2++;
					break;
				case -641080715:
					func_262(&(uParam0->f_5), iVar2, 2, 1, 0);
					iVar2++;
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_161(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
			switch (uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					func_262(&(uParam0->f_5), 0, 0, 1, 0);
					break;
				case -641080715:
					func_262(&(uParam0->f_5), 2, 3, 1, 0);
					break;
				case 276123595:
					func_262(&(uParam0->f_5), 3, 3, 1, 0);
					break;
				case -29447330:
					func_262(&(uParam0->f_5), 4, 3, 1, 0);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
	uParam0->f_5 = iParam1;
	func_262(&(uParam0->f_5), 1, 1, 1, 0);
}

void func_162(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
			switch (uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					func_262(&(uParam0->f_5), iVar2, 1, 1, 0);
					iVar2++;
					break;
				case 1724675796:
					func_262(&(uParam0->f_5), iVar2, 3, 1, 0);
					iVar2++;
					break;
				case -641080715:
					func_262(&(uParam0->f_5), iVar2, 2, 0, 0);
					iVar2++;
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_163(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
			switch (uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					func_262(&(uParam0->f_5), 0, 1, 1, 0);
					break;
				case 1724675796:
					func_262(&(uParam0->f_5), 1, 0, 1, 0);
					break;
				case -139224928:
					func_262(&(uParam0->f_5), 2, 0, 1, 0);
					break;
				case -641080715:
					func_262(&(uParam0->f_5), 3, 0, 1, 0);
					break;
				case 276123595:
					func_262(&(uParam0->f_5), 4, 3, 1, 0);
					break;
				case -29447330:
					func_262(&(uParam0->f_5), 5, 3, 1, 0);
					break;
				case 1175698187:
					func_262(&(uParam0->f_5), 6, 3, 1, 0);
					break;
				case 852595847:
					func_262(&(uParam0->f_5), 7, 3, 1, 0);
					break;
				case 1488412754:
					func_262(&(uParam0->f_5), 8, 3, 1, 0);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_164(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(iParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
			switch (uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 159464507:
				case 1410847083:
					func_264(iParam1, &(uParam0->f_5), &uVar2, 0);
					break;
				case -2016692014:
				case 1724675796:
					func_264(iParam1, &(uParam0->f_5), &uVar2, 1);
					break;
				case -1720361947:
				case -139224928:
					func_264(iParam1, &(uParam0->f_5), &uVar2, 1);
					break;
				case -641080715:
				case -29447330:
				case 276123595:
					func_264(iParam1, &(uParam0->f_5), &uVar2, 2);
					break;
				case 852595847:
				case 1175698187:
				case 1488412754:
					func_264(iParam1, &(uParam0->f_5), &uVar2, 2);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

int func_165(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_22(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_84(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_5(iParam0, 1399091007))
	{
		func_212(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_166(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_175(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_167(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_168(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_169(int iParam0)
{
	struct<2> Var0;

	if (!func_22(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_170(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CLOTHING_BLEND_FRECKLES_NONE"):
			return 241235545;
		case joaat("CLOTHING_BLEND_MOLES_NONE"):
			return 1827902148;
		case joaat("CLOTHING_BLEND_SPOTS_NONE"):
			return 1301555144;
		case joaat("CLOTHING_BLEND_FOUNDATION_NONE"):
			return -2056583192;
		case joaat("CLOTHING_BLEND_BLUSHER_NONE"):
			return 1015239729;
		case joaat("CLOTHING_BLEND_EYELINER_NONE"):
			return -340627321;
		case joaat("CLOTHING_BLEND_EYESHADOW_NONE"):
			return -875805376;
		case joaat("CLOTHING_BLEND_LIPSTICK_NONE"):
			return -768760704;
		case joaat("CLOTHING_BLEND_FACIAL_HAIR_NONE"):
			return -2118203104;
		case joaat("CLOTHING_BLEND_GRIME_NONE"):
			return 1285634184;
		case -643819742:
			return -559080197;
		case joaat("CLOTHING_BLEND_COMPLEXION_NONE"):
			return -1180698265;
		case joaat("CLOTHING_BLEND_COMPLEXION_2_NONE"):
			return -487028314;
		case 1687431937:
			return -1811760631;
		case joaat("CLOTHING_BLEND_SCAR_NONE"):
			return 1858448324;
		default:
			break;
	}
	return 0;
}

int func_171(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((uParam0[iVar0 /*17*/])->f_1 == -1)
		{
		}
		else
		{
			if ((uParam0[iVar0 /*17*/])->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_172(int iParam0)
{
	int iVar0;

	iVar0 = func_169(iParam0);
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

int func_173(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_265(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_267(&Var0, func_266(0));
	}
	if (!func_268(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_14(iVar14);
	return uVar15;
}

int func_174(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

int func_175(bool bParam0)
{
	if (func_3() == -1)
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

struct<4> func_176(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_181(iParam0, bParam1, 0) };
	return func_195(iParam0, Var0, Var0.f_4, bParam1);
}

bool func_177(int iParam0)
{
	return func_84(iParam0) == joaat("WEAPON");
}

bool func_178(int iParam0)
{
	var uVar0;

	if (func_3() != -1)
	{
		return false;
	}
	if (func_91(iParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_184(iParam0, &uVar0, 1, 0, 0, -1, 0);
	}
	return func_42(iParam0, 1);
}

void func_179(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_84(iParam0) != joaat("WEAPON"))
	{
		return;
	}
	iVar0 = func_96(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_192(iVar0))
	{
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iVar0, 0, false) && func_87(iParam0, 0, 0, 0) == 0))
		{
			if (func_3() == -1)
			{
				func_97(iVar0);
			}
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_127(iParam0, iParam1, 0, 0, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_180(int iParam0, int iParam1)
{
	if (func_5(iParam0, 58855631))
	{
		func_230(iParam0, -915411861, iParam1, 1);
	}
}

struct<5> func_181(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_269(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_84(iParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_195(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_266(bParam1) };
			if (bParam2 && func_270(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_193(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_193(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_194(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_271(bParam1) };
			switch (func_169(iParam0))
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
			if (func_272(iParam0, -1823706425))
			{
				Var0 = { func_195(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_272(iParam0, -1483207246))
			{
				Var0 = { func_195(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1911121386))
			{
				Var0 = { func_195(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_272(iParam0, -1653629781))
			{
				Var0 = { func_195(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_273(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_272(iParam0, -1653629781))
			{
				Var0 = { func_195(1384535894, Var0, 1784584921, bParam1) };
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

int func_182(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_22(iParam0, 0) && !func_65(func_23(iParam0), 2))
	{
		return 0;
	}
	if (func_84(iParam0) == joaat("FEE"))
	{
		return -1;
	}
	if (!bParam2 && func_174(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_175(bParam3), iParam0);
}

int func_183(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_103(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_175(bParam1), iParam0, iParam3);
}

bool func_184(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_274(&iParam0);
	if (!func_22(iParam0, 0) && !func_65(func_23(iParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_174(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam3 = true;
	}
	if (func_177(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		Var0 = { func_266(0) };
		Var4.f_9 = -1591664384;
		if (!func_193(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
		{
			return false;
		}
		else if (func_194(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
		{
			return false;
		}
		if (func_270(iParam0, 1))
		{
			if (!func_193(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
			{
				return false;
			}
			else if (func_194(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_182(iParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_275(iParam0, *uParam1, uParam1->f_4, bParam4, bParam3, iParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

bool func_185()
{
	if (((((!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_34, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_34)) && !func_276(Global_34, 1369124074)) && !func_276(Global_34, 713668775)) && !TASK::_0xEC7E480FF8BD0BED(Global_34)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_34, false))
	{
		return true;
	}
	return false;
}

bool func_186(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_187(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_39.f_3643[iVar1], iVar2);
}

void func_188(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_39.f_3643[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_39.f_3643[iVar1] = uVar3;
}

void func_189(int iParam0)
{
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
			func_277(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_278(1);
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_278(2);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_278(3);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 30:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 31:
			break;
		case 32:
			func_279(1);
			break;
		case 33:
			func_280(1);
			break;
		case 34:
			func_281(1);
			break;
		case 35:
			break;
		case 36:
			func_282(0);
			break;
		case 37:
			func_283(0);
			break;
		case 38:
			func_284(0);
			break;
		case 39:
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if (func_285() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_286("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_108(677, 0);
			break;
		case 3:
			if (func_285() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_286("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_108(678, 0);
			break;
		case 4:
			if (func_285() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_286("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_108(679, 0);
			break;
		case 5:
			if (func_285() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_286("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_108(680, 0);
			break;
		case 23:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			break;
		case 47:
			if (func_3() == -1)
			{
				if (!func_42(1013902307, 1))
				{
					func_101(1013902307, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_3() == -1)
			{
				if (!func_42(1013902307, 1))
				{
					func_101(1013902307, 1, 752097756);
				}
				if (!func_42(142640135, 1))
				{
					func_101(142640135, 1, 752097756);
				}
			}
			break;
		case 48:
			if (func_3() == -1)
			{
				if (!func_42(786809402, 1))
				{
					func_101(786809402, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_3() == -1)
			{
				if (!func_42(786809402, 1))
				{
					func_101(786809402, 1, 752097756);
				}
				if (!func_42(-518019409, 1))
				{
					func_101(-518019409, 1, 752097756);
				}
			}
			break;
		case 22:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 24:
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
		case 43:
			break;
		case 44:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1940258.f_41 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 45:
			break;
		case 46:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 51:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}
}

int func_190(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_287(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

bool func_191(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::_UNLOCK_IS_VISIBLE(iVar0))
	{
		return true;
	}
	return false;
}

bool func_192(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return true;
	}
	return false;
}

bool func_193(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_275(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

bool func_194(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_288(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_195(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_22(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_175(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_196(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (func_289(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_273(*uParam1, &Var0, bParam6, 0, -1))
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_98(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_3() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_290(joaat("USE"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_291(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_175(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_197(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_34, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar2 = func_292(WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_34, iParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_34, &iVar1, iParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_34, iParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_34, iParam0, iVar1);
		}
	}
}

int func_198(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_22(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_174(iParam0, joaat("DEFAULT"));
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_181(iParam0, 0, 0) };
	if (func_184(iParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_98(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_175(0), &uVar6, &Var1, iParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

int func_199(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_22(iParam0, 0))
	{
		return 0;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_184(iParam0, uParam2, iParam3, bParam5, 0, -1, 0))
	{
		return 0;
	}
	if (!func_98(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_175(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_200(int iParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34) || Global_1940258.f_6)
	{
		return;
	}
	if (WEAPON::_IS_WEAPON_BOW(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::_IS_WEAPON_PISTOL(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::_IS_WEAPON_REVOLVER(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::_IS_WEAPON_RIFLE(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::_IS_WEAPON_SHOTGUN(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_34, sVar0, iParam0);
	iVar2 = func_293();
	func_294(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_34, sVar1, iVar2);
}

int func_201(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_295(iParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, joaat("AMMO_ARROW")) <= 0)
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
		if (WEAPON::_IS_WEAPON_SNIPER(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
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

bool func_202()
{
	return false;
}

bool func_203(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_204(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_205(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_92(49))
			{
				if (!func_92(47))
				{
					return 149;
				}
				return 151;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_92(50))
			{
				if (!func_92(48))
				{
					return 150;
				}
				return 152;
			}
		}
	}
	return 153;
}

void func_206(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_207(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_296(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_297(iParam0))
	{
		return false;
	}
	if (func_298(iParam0))
	{
		return false;
	}
	if ((Global_1900736.f_67 && !func_214(iParam0, 1)) || func_299(32768))
	{
		if (!func_214(iParam0, 262144) || !Global_1904651.f_8686)
		{
			return false;
		}
	}
	if (!func_300())
	{
		return false;
	}
	return true;
}

void func_208(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904651[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904651[iParam0] = uVar0;
}

int func_209(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	int iVar25;

	if (func_3() == 0)
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_42(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_34, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (Var1.f_1[iVar24] == joaat("CURRENCY_CASH"))
		{
			return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = Var1.f_1[iVar24];
			if (func_22(iVar25, 0) && func_5(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_210(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (bParam3)
		{
			func_301(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_219(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_211(int iParam0, bool bParam1, float fParam2, int iParam3)
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
		if (func_302() || func_303())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_219(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
		}
		func_219(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, 752097756);
		func_106(func_149(joaat("CAREER_CASH")), iVar1);
	}
}

void func_212(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*iParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*iParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*iParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*iParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

int func_213(int iParam0)
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

bool func_214(int iParam0, int iParam1)
{
	return (Global_1904651.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

void func_215(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (uParam0->f_1[iVar1] == iParam1)
		{
			return;
		}
		switch (iParam1)
		{
			case joaat("LOOTER_PED_IS_FEMALE"):
			case joaat("LOOTER_PED_IS_MALE"):
				if (uParam0->f_1[iVar1] == joaat("LOOTER_PED_IS_MALE") || uParam0->f_1[iVar1] == joaat("LOOTER_PED_IS_FEMALE"))
				{
					bVar0 = true;
				}
				break;
			case joaat("LOOT_TYPE_NORMAL"):
			case joaat("LOOT_TYPE_SKINNING"):
				if (uParam0->f_1[iVar1] == joaat("LOOT_TYPE_NORMAL") || uParam0->f_1[iVar1] == joaat("LOOT_TYPE_SKINNING"))
				{
					bVar0 = true;
				}
				break;
			case joaat("FISHING_RESULT_RUINED"):
			case joaat("FISHING_RESULT_NORMAL"):
			case joaat("FISHING_RESULT_LEGENDARY"):
				if ((uParam0->f_1[iVar1] == joaat("FISHING_RESULT_NORMAL") || uParam0->f_1[iVar1] == joaat("FISHING_RESULT_RUINED")) || uParam0->f_1[iVar1] == joaat("FISHING_RESULT_LEGENDARY"))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			uParam0->f_1[iVar1] = iParam1;
			return;
		}
		iVar1++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_216(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	var uVar0;
	struct<15> Var1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_304(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_305(uParam2, iParam0, Var1);
	return 1;
}

char* func_217(int iParam0)
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

int func_218(int iParam0)
{
	var uVar0;

	if (!func_135(iParam0, &uVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		return joaat("_PLACEHOLDER");
	}
	return uVar0;
}

var func_219(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	uVar20 = UIFEED::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_306(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_220()
{
	return !Global_1913504;
}

void func_221(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1913504.f_3)
	{
		if ((((Global_1913504.f_4[iVar0 /*6*/] == iParam0 && Global_1913504.f_4[iVar0 /*6*/].f_2 == bParam2) && Global_1913504.f_4[iVar0 /*6*/].f_3 == iParam3) && Global_1913504.f_4[iVar0 /*6*/].f_4 == bParam4) && Global_1913504.f_4[iVar0 /*6*/].f_5 == bParam5)
		{
			Global_1913504.f_4[iVar0 /*6*/].f_1 = (Global_1913504.f_4[iVar0 /*6*/].f_1 + iParam1);
			return;
		}
		iVar0++;
	}
	if (Global_1913504.f_3 < 19)
	{
		Global_1913504.f_4[Global_1913504.f_3 /*6*/] = iParam0;
		Global_1913504.f_4[Global_1913504.f_3 /*6*/].f_1 = iParam1;
		Global_1913504.f_4[Global_1913504.f_3 /*6*/].f_2 = bParam2;
		Global_1913504.f_4[Global_1913504.f_3 /*6*/].f_3 = iParam3;
		Global_1913504.f_4[Global_1913504.f_3 /*6*/].f_4 = bParam4;
		Global_1913504.f_4[Global_1913504.f_3 /*6*/].f_5 = bParam5;
		Global_1913504.f_3++;
	}
}

char* func_222(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_223(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
			if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/]))
			{
				Jump @227; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/].f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/]);
				iVar2 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/].f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0 /*3*/].f_2 != iParam2)
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
					*uParam1 = { Var3.f_2[iVar0 /*3*/] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

char* func_224(int iParam0)
{
	if (func_5(iParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_5(iParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_5(iParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_5(iParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_5(iParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_5(iParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_5(iParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_5(iParam0, 781094263))
	{
		return "collectible_flowers";
	}
	if (((func_5(iParam0, -352095726) || func_5(iParam0, -2014783736)) || func_5(iParam0, -545064757)) || func_5(iParam0, 679186220))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_225(int iParam0)
{
	if (func_5(iParam0, -189374246))
	{
		if (((func_307(iParam0, joaat("CI_TAG_FOLDER_ANIMAL_SAMPLES_LEGENDARY_ALBINO")) || func_307(iParam0, joaat("CI_TAG_FOLDER_ANIMAL_SAMPLES_LEGENDARY_MELANISTIC"))) || func_307(iParam0, joaat("CI_TAG_FOLDER_ANIMAL_SAMPLES_LEGENDARY_PATTERNED"))) || func_307(iParam0, joaat("CI_TAG_FOLDER_ANIMAL_SAMPLES_LEGENDARY_RED_BLONDE")))
		{
			return true;
		}
	}
	if (func_5(iParam0, -753854379) || func_5(iParam0, 173360570))
	{
		return true;
	}
	return false;
}

bool func_226(int iParam0)
{
	switch (iParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return false;
		default:
			break;
	}
	return true;
}

int func_227(int iParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_22(iParam0, 0))
	{
		return 0;
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var0))
	{
		iVar35 = 0;
		while (iVar35 < 8)
		{
			if (Var0.f_18[iVar35 /*2*/].f_1 == 14460646)
			{
				if (Var0.f_18[iVar35 /*2*/] != 0)
				{
					return Var0.f_18[iVar35 /*2*/];
				}
			}
			iVar35++;
		}
	}
	return 0;
}

int func_228(int iParam0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	iVar0 = func_308(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_309(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_310(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (ITEMDATABASE::_0x8750F69A720C2E41(iVar11, iVar13, &iVar14) && func_311(iVar14))
			{
				func_312(iVar11);
				return iVar14;
			}
			iVar13++;
		}
		func_312(iVar11);
	}
	return 0;
}

bool func_229(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, -949239683))
	{
		return true;
	}
	return false;
}

int func_230(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_22(iParam0, 0) && !func_65(func_23(iParam0), 2))
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

char* func_231(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_232(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_313(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_233(int iParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_22(iParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_314(iParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_315(iParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_316(iParam0), 128);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
		return false;
	}
	StringConCat(&cVar1, " - ", 128);
	iVar0 = (iVar0 + HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar1));
	StringConCat(&cVar1, sParam1, 128);
	if (iVar0 >= 127)
	{
		return false;
	}
	*sParam1 = { cVar1 };
	return true;
}

char* func_234(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_235(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_231(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

bool func_236(var uParam0, int iParam1)
{
	int iVar0;

	if (func_317(uParam0->f_9))
	{
		return false;
	}
	if (!func_318(*uParam0))
	{
		return false;
	}
	if (!func_319(uParam0->f_4, iParam1, 0))
	{
		return false;
	}
	if (!func_320(uParam0->f_4))
	{
		return false;
	}
	if (func_321(0))
	{
		if (!func_22(uParam0->f_4, 0))
		{
			return false;
		}
		if (func_122())
		{
			iVar0 = func_183(uParam0->f_4, 1, 0, 0);
			if (iVar0 < func_275(uParam0->f_4, uParam0->f_5, uParam0->f_9, 0, 0, 0))
			{
				uParam0->f_11 = iVar0;
			}
		}
		if (uParam0->f_11 <= 0)
		{
			return false;
		}
	}
	if (Global_1940311.f_10893 == 0 && !func_322())
	{
		func_323(uParam0->f_4);
	}
	else
	{
		func_324(0);
	}
	return true;
}

bool func_237(int iParam0, int iParam1)
{
	switch (func_4(iParam1, -949239683))
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
			if (Global_1940311.f_10892 != 1061777683 || func_4(iParam0, 1224357681) == func_4(iParam1, 1224357681))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_238(var uParam0)
{
	struct<5> Var0;

	if (func_69(uParam0->f_6))
	{
		if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(*uParam0, &Var0))
		{
			uParam0->f_7.f_2 = Var0.f_4;
		}
	}
}

int func_239(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_65(iParam0, 2))
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

bool func_240(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_325(iParam0))
		{
			return false;
		}
	}
	if (func_326(&(iParam0->f_6)))
	{
		if (NETWORK::_0xE10F2D7715ABABEC(&(iParam0->f_6)))
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(2113164098))
	{
		return false;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("SELL")))
	{
		return false;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("UPDATE")))
	{
		return false;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("USE")))
	{
		return false;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return false;
	}
	if (NETSHOPPING::_CASHINVENTORY_IS_CONNECTION_FAULTED())
	{
		return false;
	}
	if (NETSHOPPING::_CASHINVENTORY_INIT_SESSION_IS_FAULTED())
	{
		return false;
	}
	return true;
}

int func_241(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (!func_327(iParam0))
	{
		return 0;
	}
	bVar1 = func_328(iParam3, 2);
	bVar2 = func_329(iParam0, -570078785, bVar1);
	bVar3 = func_329(iParam0, -915411861, bVar1);
	if (func_329(iParam0, 997808187, bVar1))
	{
		iParam1 = 997808187;
	}
	else if (bParam4 && (func_330(iParam0, &iVar0) || func_331(iParam0, &iVar0)))
	{
		iParam1 = iVar0;
	}
	else if (bVar2 && !bVar3)
	{
		iParam1 = -570078785;
	}
	else if (bVar2 && bVar3)
	{
		if (func_332())
		{
			iParam1 = -570078785;
		}
		else
		{
			iParam1 = -915411861;
		}
	}
	else if (bVar3)
	{
		iParam1 = -915411861;
	}
	else if (func_333(15) && func_329(iParam0, 369710026, bVar1))
	{
		iParam1 = 369710026;
	}
	if (iParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return iParam1;
}

int func_242(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_329(iParam0, iParam1, 0))
	{
		return 0;
	}
	if (func_328(iParam2, 2))
	{
		if (func_334(iParam0, iParam1))
		{
			return 0;
		}
	}
	if (NETWORK::_0xFBE782B3165AC8EC(iParam0))
	{
		return 0;
	}
	if (func_328(iParam2, 8))
	{
		return func_335(iParam0, iParam1);
	}
	return 1;
}

bool func_243(int* iParam0, struct<17> Param1, int iParam18, bool bParam19)
{
	if (iParam18 != 541670136)
	{
		return false;
	}
	if (!func_336(Param1))
	{
		return false;
	}
	if (!func_337(iParam0, iParam18))
	{
		return false;
	}
	if (func_338(*iParam0, iParam18, &Param1))
	{
	}
	else
	{
		return false;
	}
	return func_339(iParam0, bParam19);
}

void func_244()
{
}

var func_245()
{
	Global_1293346.f_458.f_1552++;
	if (Global_1293346.f_458.f_1552 >= 2147483646)
	{
		Global_1293346.f_458.f_1552 = 0;
	}
	return Global_1293346.f_458.f_1552;
}

void func_246(struct<30> Param0, int iParam30)
{
	switch (iParam30)
	{
		case 0:
			Global_1293346.f_458.f_44[func_340() /*30*/] = { Param0 };
			func_341((func_340() + 1 % 40));
			Global_1293346.f_458.f_1546++;
			break;
		case 1:
			Global_1293346.f_458.f_1245[func_342() /*30*/] = { Param0 };
			func_343((func_342() + 1 % 10));
			Global_1293346.f_458.f_1547++;
			break;
	}
}

bool func_247(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_248(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887.f_13 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1900736.f_67;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1900736.f_68;
		}
		if (func_344())
		{
			return true;
		}
		if (Global_1071686.f_3 && !Global_1572887.f_9)
		{
			if ((Global_1056141[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*471*/].f_463 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1900736.f_67;
		}
		else
		{
			return Global_1900736.f_68;
		}
	}
	if (iParam0 == 0 && func_346(func_345(0)))
	{
		return true;
	}
	if ((Global_1940258 && 81919 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < Global_1900871)
		{
			return true;
		}
	}
	switch (func_347(func_345(0)))
	{
		case -1:
			return false;
		case 2:
			return iParam0 & 1 == 0;
		case 5:
			return iParam0 & 2 == 0;
		case 3:
			return iParam0 & 16 == 0;
		case 4:
			return iParam0 & 32 == 0;
		case 7:
			return iParam0 & 1024 == 0;
		default:
			break;
	}
	return false;
}

bool func_249()
{
	if (!((UNLOCK::_UNLOCK_IS_VISIBLE(-474252899) || UNLOCK::_UNLOCK_IS_VISIBLE(294305054)) || UNLOCK::_UNLOCK_IS_VISIBLE(-296143697)))
	{
		return false;
	}
	else if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("DOCUMENT_COLLECTOR_MAP_FOSSILS")))
	{
		return false;
	}
	return true;
}

void func_250(var uParam0, int iParam1)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	int iVar12;
	vector3 vVar13;
	float fVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<10> Var20;

	Var1 = -1;
	Var1.f_1 = -1;
	Var1.f_2 = -1;
	Var1.f_3 = -1;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var1.f_6 = -1;
	Var1.f_7 = -1;
	Var1.f_8 = -1;
	Var1 = { func_309(-1591664384, -1591664384, 0, -1837820255, 0, 0, -1, iParam1, 0) };
	if (func_310(Var1, &iVar18, &iVar19, 0))
	{
		Var20 = { func_151() };
		if (iParam1 != 0)
		{
			func_348(uParam0, iVar18, iVar19);
		}
		iVar11 = 0;
		while (iVar11 < iVar19)
		{
			iVar17 = func_349(iVar11, iVar18);
			if (func_5(iVar17, -352095726))
			{
				if (!func_249() || !func_42(joaat("WEAPON_KIT_METAL_DETECTOR"), 1))
				{
				}
				else if (func_350(iVar17))
				{
					if (func_5(iVar17, 781094263))
					{
						if (func_5(iVar17, 1307628809))
						{
							iVar12 = 0;
							while (iVar12 <= 8)
							{
								iVar0 = func_351(Var20.f_7, iVar17, iVar12);
								vVar13 = { func_352(iVar0, iVar17) };
								fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_35, vVar13, true);
								func_353(uParam0, iVar17, vVar13, fVar16);
								iVar12++;
							}
						}
						else if (func_5(iVar17, 683680997))
						{
							iVar12 = 0;
							while (iVar12 <= 5)
							{
								iVar0 = func_351(Var20.f_7, iVar17, iVar12);
								vVar13 = { func_352(iVar0, iVar17) };
								fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_35, vVar13, true);
								func_353(uParam0, iVar17, vVar13, fVar16);
								iVar12++;
							}
						}
						else if (func_5(iVar17, -283942357))
						{
							if (iVar17 != joaat("PROVISION_WLDFLWR_AGARITA") && iVar17 != joaat("PROVISION_WLDFLWR_BLOOD_FLOWER"))
							{
								iVar12 = 0;
								while (iVar12 <= 2)
								{
									iVar0 = func_351(Var20.f_7, iVar17, iVar12);
									vVar13 = { func_352(iVar0, iVar17) };
									fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_35, vVar13, true);
									func_353(uParam0, iVar17, vVar13, fVar16);
									iVar12++;
								}
							}
						}
					}
					else if ((func_5(iVar17, -149719013) && func_5(iVar17, -283942357)) && iVar17 != joaat("PROVISION_VULTURE_EGG"))
					{
						iVar12 = 0;
						while (iVar12 <= 1)
						{
							iVar0 = func_354(Var20.f_6, iVar12);
							vVar13 = { func_352(iVar0, iVar17) };
							fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_35, vVar13, true);
							func_353(uParam0, iVar17, vVar13, fVar16);
							iVar12++;
						}
					}
					else
					{
						iVar0 = func_355(&Var20, iVar17);
						vVar13 = { func_352(iVar0, iVar17) };
						fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_35, vVar13, true);
						func_353(uParam0, iVar17, vVar13, fVar16);
					}
				}
				iVar11++;
				func_312(iVar18);
			}
		}
	}
}

bool func_251(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_252()
{
	struct<6> Var0;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	CLOCK::GET_POSIX_TIME(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	iVar7 = Var0.f_2;
	iVar8 = Var0.f_1;
	iVar9 = Var0;
	if (iVar8 <= 2)
	{
		iVar8 += 12;
		iVar9 = (iVar9 - 1);
	}
	iVar10 = (iVar9 % 100);
	iVar11 = (iVar9 / 100);
	iVar12 = (((((iVar7 + ((13 * iVar8 + 1) / 5)) + iVar10) + (iVar10 / 4)) + (iVar11 / 4)) + (5 * iVar11));
	iVar13 = (iVar12 + 6 % 7);
	return iVar13;
}

void func_253(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 33;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 6, 28, &uParam1);
	func_356(*uParam0);
}

bool func_254(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (Global_1211392.f_48[iParam0 /*21*/].f_18[iVar0] != 0 && Global_1211392.f_48[iParam0 /*21*/].f_18[iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_255(var uParam0, int iParam1)
{
	*uParam0 = Global_1211392.f_1201;
	uParam0->f_2 = 1335336942;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_256(var uParam0)
{
	uParam0->f_2 = 1037679264;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_257(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_VECTOR(uParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

void func_258(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 - (Global_1951255[iParam0 /*23*/].f_1 && iParam1));
}

void func_259(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		if (Global_1951255[iParam0 /*23*/].f_5 == 5 && !func_157(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_260(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1951255[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_261(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 || iParam1);
}

void func_262(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	char cVar0[16];

	if (iParam1 >= 11)
	{
		return;
	}
	StringCopy(&cVar0, "textField", 16);
	StringIntConCat(&cVar0, iParam1, 16);
	if (bParam4)
	{
		StringConCat(&cVar0, "Strike", 16);
	}
	uParam0->f_64[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &cVar0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_64[iParam1], "text", *uParam0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_64[iParam1], "style", iParam2);
	StringCopy(&cVar0, "divider", 16);
	StringIntConCat(&cVar0, iParam1, 16);
	uParam0->f_76[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &cVar0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_76[iParam1], "isVisible", iParam3);
}

bool func_263(int iParam0)
{
	if ((iParam0 % 2) == 0)
	{
		return true;
	}
	return false;
}

void func_264(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (*uParam2 < 7)
	{
		uParam1->f_64[*uParam2] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_63, func_357(iParam0, *uParam2));
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_64[*uParam2], "text", *uParam1);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_64[*uParam2], "style", iParam3);
		*uParam2++;
	}
}

struct<14> func_265(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_266(bool bParam0)
{
	int iVar0;

	iVar0 = func_175(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_4)))
		{
			Global_1293346.f_4 = { func_195(923904168, func_269(bParam0), -740156546, bParam0) };
		}
		return Global_1293346.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_16)))
		{
			Global_1293346.f_16 = { func_195(923904168, func_269(bParam0), -740156546, 0) };
		}
		return Global_1293346.f_16;
	}
	return func_195(923904168, func_269(bParam0), -740156546, 0);
}

void func_267(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_268(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_175(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

struct<4> func_269(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_175(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1293346))
			{
				Global_1293346 = { func_195(joaat("CHARACTER"), func_358(), -1591664384, bParam0) };
			}
			return Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_12)))
			{
				Global_1293346.f_12 = { func_195(joaat("CHARACTER"), func_358(), -1591664384, 0) };
			}
			return Global_1293346.f_12;
		}
	}
	return func_195(joaat("CHARACTER"), func_358(), -1591664384, bParam0);
}

bool func_270(int iParam0, bool bParam1)
{
	if (func_169(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_359();
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_271(bool bParam0)
{
	int iVar0;

	iVar0 = func_175(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_8)))
		{
			Global_1293346.f_8 = { func_195(271701509, func_269(bParam0), 12999093, 0) };
		}
		return Global_1293346.f_8;
	}
	return func_195(271701509, func_269(bParam0), 12999093, 0);
}

bool func_272(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_169(iParam0);
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
			if (func_360(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_273(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_361(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_274(int iParam0)
{
	if (!func_22(*iParam0, 0))
	{
		return 0;
	}
	if (!func_362(*iParam0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
			*iParam0 = joaat("UPGRADE_FSH_BAIT_CRICKET");
			break;
		case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
			*iParam0 = joaat("UPGRADE_FSH_BAIT_WORM");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*iParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*iParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		default:
			return 0;
	}
	return 1;
}

int func_275(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_22(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_174(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_195(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_175(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_175(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_276(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_277(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
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

void func_278(int iParam0)
{
	int iVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1956200.f_5.f_7))
	{
		return;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1956200.f_5.f_7) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1956200.f_5.f_7, iParam0);
		if (iVar0 == Global_1956200.f_5.f_14[iParam0 /*102*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1956200.f_5.f_7, iParam0, "pause_info_panel_list", Global_1956200.f_5.f_14[iParam0 /*102*/]);
}

void func_279(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_34, 440, !bParam0);
}

void func_280(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_34, 439, !bParam0);
}

void func_281(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_34, 438, !bParam0);
}

void func_282(bool bParam0)
{
	int iVar0;

	iVar0 = 398076311;
	if (bParam0)
	{
		HUD::_HIDE_HUD_COMPONENT(iVar0);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(iVar0);
	}
}

void func_283(bool bParam0)
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

void func_284(bool bParam0)
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

bool func_285()
{
	return true;
	if (Global_1572887.f_13 == 0)
	{
		return true;
	}
	return Global_39.f_1;
}

var func_286(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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
	Var13.f_7 = 1;
	uVar21 = UIFEED::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

int func_287(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	struct<17> Var3;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	if (NETWORK::_0xFBE782B3165AC8EC(iParam0))
	{
		return 1;
	}
	if (bParam7)
	{
		bVar0 = (GANG::_0xD6F6ACF4392187FB(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) && GANG::_0x0F99F6436528A089(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
		bParam7 = bVar0;
	}
	POSSE::_0xC08AFF658B2E51DA(&iVar1);
	if (iVar1 != 0)
	{
		func_363(iParam2, -372840566);
	}
	if (!bParam7)
	{
		if (!NETWORK::_0x64A36BA85CE01A81(&uVar2, &(uParam3->f_1), &(iParam2->f_1), uParam1))
		{
			return 0;
		}
	}
	else if (!NETWORK::_0x7A8E8DF782B47EB0(&uVar2, &(iParam2->f_1), uParam1))
	{
		return 0;
	}
	Var3.f_1 = 11;
	Var3.f_16 = 255;
	Var3.f_13 = iParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_364(uParam1, iParam0, Var3);
	return 1;
}

bool func_288(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_175(0);
	*uParam1 = { func_195(iParam0, func_266(0), iParam3, 0) };
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

bool func_289(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

int func_290(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_365(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_367(func_366(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_368(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_291(int iParam0, struct<17> Param1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346.f_20)
	{
		if (Global_1293346.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 == 1 || Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 == 5)
			{
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

int func_292(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_293()
{
	return Global_1902818;
}

void func_294(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_369(*iParam0);
	iVar1 = func_370(*iParam0);
	iVar2 = func_371(*iParam0);
	iVar3 = func_372(*iParam0);
	iVar4 = func_373(*iParam0);
	iVar5 = func_374(*iParam0);
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
	iVar6 = func_375(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_375(iVar1, iVar0);
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
	func_376(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_295(int iParam0)
{
	return WEAPON::_IS_WEAPON_BOW(iParam0);
}

bool func_296(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17411.f_2565[iParam0], iParam1);
}

bool func_297(int iParam0)
{
	if (func_214(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_298(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (Global_1904651.f_33[iParam0 /*9*/].f_2 & 98304 == 0)
	{
		return false;
	}
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	while (iVar0 < Global_39.f_3534)
	{
		if (Global_39.f_3534[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (Global_1904651.f_33[iParam0 /*9*/].f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if (Global_1904651.f_33[iParam0 /*9*/].f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (iVar1 - Global_39.f_3534[iVar0 /*3*/]);
			if (Global_39.f_3534[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && Global_1904651.f_33[iParam0 /*9*/].f_2 & 32768 != 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_299(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_300()
{
	if (!func_55())
	{
		return false;
	}
	return Global_1904651.f_8684;
}

void func_301(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_377())
	{
		Global_1913504.f_125 = MISC::GET_GAME_TIMER();
		Global_1913504.f_126 = iParam1;
	}
	Global_1913504.f_127 = (Global_1913504.f_127 + iParam0);
}

bool func_302()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_303()
{
	return DLC::IS_DLC_PRESENT(joaat("DLC_ULTIMATEEDITION"));
}

void func_304(var uParam0)
{
	func_215(uParam0, joaat("MULTIPLAYER_GAME"));
	if (func_378() == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_215(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_215(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_305(var uParam0, int iParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_326(uParam0))
	{
		return;
	}
	if (Global_1293346.f_2538 < 20)
	{
		Global_1293346.f_2538++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1293346.f_2538.f_1[iVar0 /*22*/] = { Global_1293346.f_2538.f_1[iVar0 + 1 /*22*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_3.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	Global_1293346.f_2538.f_1[(Global_1293346.f_2538 - 1) /*22*/] = { Var1 };
}

void func_306(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

int func_307(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1224357681))
	{
		return 1;
	}
	return 0;
}

int func_308(int iParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_22(iParam0, 0))
	{
		return 0;
	}
	iVar6 = ITEMDATABASE::_0x8870895BA5ED9385(iParam0, -442898163, &uVar0);
	if (iVar6 > 0)
	{
		return uVar0[0];
	}
	return 0;
}

struct<10> func_309(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
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
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

bool func_310(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

bool func_311(int iParam0)
{
	if (!func_22(iParam0, 0))
	{
	}
	if (func_5(iParam0, -393037696))
	{
		return true;
	}
	return false;
}

int func_312(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!ITEMDATABASE::_0xCBB7B6EDFA933ADE(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_313(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;
	int iVar43;

	iVar41 = 0;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar42, 20))
	{
		iVar43 = 0;
		while (iVar43 < iVar42)
		{
			if (Var0[iVar43 /*2*/].f_1 == iParam1)
			{
				iVar41 = Var0[iVar43 /*2*/];
				return iVar41;
			}
			iVar43++;
		}
	}
	return 0;
}

char* func_314(int iParam0)
{
	int iVar0;

	if (!func_22(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_117(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

bool func_315(int iParam0)
{
	if (func_169(iParam0) == -126813555 || func_169(iParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

char* func_316(int iParam0)
{
	int iVar0;

	if (!func_22(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_227(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

bool func_317(int iParam0)
{
	switch (iParam0)
	{
		case -1649851713:
		case -997505963:
		case 1005272:
		case 348853959:
		case 359221401:
		case 1045621973:
		case 1463321587:
		case 1583044470:
		case 1651573695:
			return true;
	}
	return false;
}

bool func_318(struct<10> Param0, var uParam10, var uParam11, var uParam12, var uParam13)
{
	struct<10> Var0;
	int iVar14;

	if ((((Param0.f_9 != 1084182731 && Param0.f_9 != -140655024) && Param0.f_9 != -1162387149) && Param0.f_9 != 1784584921) && Param0.f_9 != -511891179)
	{
		Var0.f_9 = -1591664384;
		if (!func_273(Param0.f_5, &Var0, 1, 0, -1))
		{
			return false;
		}
		if (!func_5(Var0.f_4, 1093867179))
		{
			return false;
		}
	}
	iVar14 = func_84(Param0.f_4);
	if (((iVar14 == joaat("WEAPON") && !WEAPON::_IS_WEAPON_BINOCULARS(Param0.f_4)) && Param0.f_4 != joaat("WEAPON_KIT_CAMERA")) && Param0.f_4 != joaat("WEAPON_KIT_CAMERA_ADVANCED"))
	{
		return false;
	}
	switch (iVar14)
	{
		case joaat("HORSE_EQUIPMENT"):
		case joaat("COUPON"):
		case joaat("HORSE"):
		case joaat("EMOTE"):
		case joaat("WEAPON_MOD"):
		case joaat("FEE"):
		case joaat("ACTIVE_CARD"):
		case joaat("AMMO"):
		case joaat("WEAPON_DECORATION"):
		case joaat("ABILITY_CARD"):
		case joaat("GOLD"):
		case joaat("COMPONENT"):
		case joaat("MINIGAME"):
		case joaat("ADVERT"):
		case joaat("CORE_ITEM"):
		case joaat("PASSIVE_CARD"):
			return false;
		case joaat("CLOTHING"):
			switch (func_169(Param0.f_4))
			{
				case -525676072:
					if (Param0.f_4 == joaat("KIT_MASK_GREY_CLOTH"))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				case 81053684:
					return true;
				case 1477698721:
					if (func_5(Param0.f_4, 160827531))
					{
						return true;
					}
					return false;
				default:
					return false;
			}
			break;
	}
	if (func_169(Param0.f_4) == -829303394)
	{
		return false;
	}
	return true;
}

bool func_319(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = false;
	if ((iParam1 == 0 || func_321(0)) || bParam2)
	{
		bVar0 = true;
	}
	if (!bParam2)
	{
		if ((!func_22(iParam0, 0) || iParam0 == joaat("CUSTOM_SATCHEL")) || iParam0 == joaat("KIT_WARDROBE"))
		{
			return false;
		}
	}
	if (!bVar0 && func_379(iParam0))
	{
		return false;
	}
	switch (iParam1)
	{
		case -889932290:
		case -283002878:
		case 0:
			if (!func_321(0))
			{
				if (iParam0 == joaat("KIT_HANDHELD_CATALOG"))
				{
					return true;
				}
				if (((((((((((func_319(iParam0, -1559802791, 1) || func_319(iParam0, -1268291907, 1)) || func_319(iParam0, -96974025, 1)) || func_319(iParam0, -1666604090, 1)) || func_319(iParam0, 1561961676, 1)) || func_319(iParam0, -156634416, 1)) || func_319(iParam0, 1061777683, 1)) || func_319(iParam0, -2074770370, 1)) || func_319(iParam0, -693134279, 1)) || func_319(iParam0, -182626652, 1)) || func_319(iParam0, 1783698482, 1)) || func_380(iParam0))
				{
					return true;
				}
			}
			else
			{
				return true;
			}
			break;
		case -1559802791:
			return func_5(iParam0, 1422457563);
		case -1268291907:
			return (func_5(iParam0, 1360707454) && !func_5(iParam0, 474910316));
		case -96974025:
			return (func_5(iParam0, 1009210113) && !func_5(iParam0, 474910316));
		case -1666604090:
			return (func_5(iParam0, -193035453) && !func_5(iParam0, 474910316));
		case 1561961676:
			if (func_5(iParam0, -111938901) && !func_5(iParam0, 474910316))
			{
				return true;
			}
			else if (func_5(iParam0, -189374246) || func_5(iParam0, -1257428961))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case -156634416:
			return (func_5(iParam0, -928967997) && !func_5(iParam0, 474910316));
		case 1061777683:
			return (func_5(iParam0, 747873593) && !func_5(iParam0, 474910316));
		case 1783698482:
			return ((func_5(iParam0, 474910316) && !func_321(0)) && func_381(iParam0));
		case -2074770370:
			if (Global_1940311.f_36 == 1 || Global_1940311.f_36 == 2)
			{
				return func_382(iParam0, iParam1);
			}
			else if (func_4(iParam0, -949239683) == -1337515701 && iParam0 != joaat("KIT_PLAYER_POCKETWATCH"))
			{
				return true;
			}
			else
			{
				return func_5(iParam0, -111938901);
			}
			break;
		case -693134279:
			return func_91(iParam0, 8388608);
		case -182626652:
			if (func_383(iParam0, Global_1915715.f_20241.f_1))
			{
				func_384(func_175(0), iParam0, 1);
				return true;
			}
			break;
	}
	return false;
}

bool func_320(int iParam0)
{
	int iVar0;

	if (Global_1940311.f_14.f_16 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_1940311.f_14.f_16)
		{
			if (Global_1940311.f_14[iVar0 /*3*/] != iParam0)
			{
			}
			else if (Global_1940311.f_14[iVar0 /*3*/].f_1 & 1 != 0)
			{
				return false;
			}
			iVar0++;
		}
	}
	switch (iParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_HIGH_QUALITY"):
			return false;
	}
	if (func_5(iParam0, 1989861793) && func_275(func_385(iParam0), func_269(1), 1084182731, 0, 0, 0) > 0)
	{
		return false;
	}
	if (func_321(0))
	{
		if (Global_1940311.f_10892 == -182626652 && !func_383(iParam0, Global_1915715.f_20241.f_1))
		{
			return false;
		}
		switch (Global_1915715.f_20241)
		{
			case 2:
				if (!func_386(iParam0))
				{
					return false;
				}
				break;
		}
	}
	if (func_5(iParam0, -805003139))
	{
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
		{
			return false;
		}
	}
	if (func_84(iParam0) == joaat("UPGRADE"))
	{
		if (!func_5(iParam0, -1540973036) && !func_5(iParam0, 1192444843))
		{
			return false;
		}
		else if (iParam0 == joaat("UPGRADE_FSH_LURE_NONE") || iParam0 == joaat("UPGRADE_FSH_BAIT_NONE"))
		{
			return false;
		}
	}
	return true;
}

bool func_321(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715.f_20638;
	}
	return (Global_1915715.f_20638 || Global_1915715.f_22504.f_1);
}

bool func_322()
{
	return Global_1940311.f_9;
}

void func_323(var uParam0)
{
	Global_1940311.f_10893 = uParam0;
}

void func_324(int iParam0)
{
	Global_1940311.f_9 = iParam0;
}

bool func_325(int* iParam0)
{
	int iVar0;

	if (iParam0->f_1 == -1)
	{
		return false;
	}
	iVar0 = func_387(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_326(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_327(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_BUY_AWARD_KEY_VALID(iParam0);
}

bool func_328(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_329(int iParam0, int iParam1, bool bParam2)
{
	if (!func_327(iParam0))
	{
		return false;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_334(iParam0, iParam1);
	}
	return true;
}

bool func_330(int iParam0, int iParam1)
{
	*iParam1 = func_388(iParam0, 1);
	return *iParam1 != 0;
}

bool func_331(int iParam0, int iParam1)
{
	*iParam1 = func_389(iParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_332()
{
	return Global_1915715.f_22477;
}

bool func_333(int iParam0)
{
	if (iParam0 == 34 && Global_1915715.f_22504.f_1)
	{
		return true;
	}
	if (func_321(1))
	{
		if (Global_1915715.f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_334(int iParam0, int iParam1)
{
	struct<47> Var0;
	int iVar471;
	int iVar472;
	int iVar473;
	int iVar474;
	int iVar475;

	Var0 = 10;
	Var0.f_1.f_4 = 15;
	Var0.f_1.f_36 = 10;
	Var0.f_1.f_47.f_4 = 15;
	Var0.f_1.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(iParam0, &Var0, &iVar471, 10) || iVar471 == 0)
	{
		return false;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iVar474 < iVar471)
	{
		if (Var0[iVar474 /*47*/] == iParam1)
		{
			iVar473 = Var0[iVar474 /*47*/].f_35;
			iVar475 = 0;
			while (iVar475 < iVar473)
			{
				iVar472 = Var0[iVar474 /*47*/].f_36[iVar475];
				if (iVar472 == 0)
				{
				}
				else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar472))
				{
					return true;
				}
				iVar475++;
			}
		}
		iVar474++;
	}
	return false;
}

int func_335(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (iParam1 == -570078785)
	{
		iVar0 = func_390(iParam0, -570078785, 0, 1);
		if (iVar0 == 0)
		{
		}
		if (!func_391(iVar0))
		{
			if (Global_1915715.f_20644)
			{
				func_393(MISC::_CREATE_VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_392(iVar0)));
			}
			return 0;
		}
	}
	else if (iParam1 == -915411861)
	{
		iVar1 = func_390(iParam0, -915411861, 0, 1);
		if (iVar1 == 0)
		{
		}
		if (!func_394(iVar1))
		{
			if (Global_1915715.f_20644)
			{
				func_393("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (iParam1 == 997808187)
	{
		return 1;
	}
	if (!func_395(iParam0, iParam1, &uVar2, 1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_336(struct<17> Param0)
{
	if (!func_327(Param0.f_16))
	{
		return false;
	}
	return true;
}

bool func_337(int* iParam0, int iParam1)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		if (!func_396(iParam0, iParam1))
		{
			return false;
		}
	}
	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0);
	if (iVar0 != iParam1 || NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) >= 50)
	{
		if (!func_397(iParam0))
		{
			return false;
		}
		if (!func_396(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_338(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

bool func_339(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return func_397(iParam0);
	}
	return true;
}

int func_340()
{
	if (Global_1293346.f_458.f_1548 >= 40 || Global_1293346.f_458.f_1548 < 0)
	{
		Global_1293346.f_458.f_1548 = 0;
	}
	return Global_1293346.f_458.f_1548;
}

void func_341(int iParam0)
{
	if (iParam0 >= 40 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1293346.f_458.f_1548 = iParam0;
}

int func_342()
{
	if (Global_1293346.f_458.f_1549 >= 10 || Global_1293346.f_458.f_1549 < 0)
	{
		Global_1293346.f_458.f_1549 = 0;
	}
	return Global_1293346.f_458.f_1549;
}

void func_343(int iParam0)
{
	if (iParam0 >= 10 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1293346.f_458.f_1549 = iParam0;
}

bool func_344()
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
	if (!func_346(Global_1051213) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

struct<2> func_345(int iParam0)
{
	return Global_1900736.f_1[iParam0 /*2*/];
}

bool func_346(struct<2> Param0)
{
	if (!func_398(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_399(Param0))
	{
		return false;
	}
	return true;
}

int func_347(var uParam0, var uParam1)
{
	return uParam0;
}

void func_348(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	float fVar3;
	vector3 vVar4;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	struct<10> Var13;

	Var13 = { func_151() };
	iVar8 = 0;
	while (iVar8 < iParam2)
	{
		iVar10 = func_349(iVar8, iParam1);
		if (func_350(iVar10))
		{
			if (func_5(iVar10, 781094263))
			{
				if (func_5(iVar10, 1307628809))
				{
					iVar9 = 0;
					while (iVar9 <= 8)
					{
						iVar12 = func_351(Var13.f_7, iVar10, iVar9);
						vVar0 = { func_352(iVar12, iVar10) };
						fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_35, vVar0, true);
						func_400(&uVar7, &fVar3, &vVar4, &vVar0, &uVar11, &iVar10);
						iVar9++;
					}
				}
				else if (func_5(iVar10, 683680997))
				{
					iVar9 = 0;
					while (iVar9 <= 5)
					{
						iVar12 = func_351(Var13.f_7, iVar10, iVar9);
						vVar0 = { func_352(iVar12, iVar10) };
						fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_35, vVar0, true);
						func_400(&uVar7, &fVar3, &vVar4, &vVar0, &uVar11, &iVar10);
						iVar9++;
					}
				}
				else if (func_5(iVar10, -283942357))
				{
					if (iVar10 != joaat("PROVISION_WLDFLWR_AGARITA") && iVar10 != joaat("PROVISION_WLDFLWR_BLOOD_FLOWER"))
					{
						iVar9 = 0;
						while (iVar9 <= 2)
						{
							iVar12 = func_351(Var13.f_7, iVar10, iVar9);
							vVar0 = { func_352(iVar12, iVar10) };
							fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_35, vVar0, true);
							func_400(&uVar7, &fVar3, &vVar4, &vVar0, &uVar11, &iVar10);
							iVar9++;
						}
					}
				}
			}
			else if ((func_5(iVar10, -149719013) && func_5(iVar10, -283942357)) && iVar10 != joaat("PROVISION_VULTURE_EGG"))
			{
				iVar9 = 0;
				while (iVar9 <= 1)
				{
					iVar12 = func_354(Var13.f_6, iVar9);
					vVar0 = { func_352(iVar12, iVar10) };
					fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_35, vVar0, true);
					func_400(&uVar7, &fVar3, &vVar4, &vVar0, &uVar11, &iVar10);
					iVar9++;
				}
			}
			else
			{
				iVar12 = func_355(&Var13, iVar10);
				vVar0 = { func_352(iVar12, iVar10) };
				fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_35, vVar0, true);
				func_400(&uVar7, &fVar3, &vVar4, &vVar0, &uVar11, &iVar10);
			}
		}
		iVar8++;
	}
	func_401(uParam0, uVar11, vVar4, 0);
}

int func_349(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= ITEMDATABASE::_0xD389A2549C4EFB30(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!ITEMDATABASE::_0x8750F69A720C2E41(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

bool func_350(int iParam0)
{
	int iVar0;

	if (!func_22(iParam0, 0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return false;
	}
	if (func_5(iParam0, -1995062316))
	{
		if (!func_42(joaat("KIT_COLLECTOR_SPADE"), 1))
		{
			return false;
		}
		if (func_5(iParam0, -283942357))
		{
			if (!func_42(joaat("WEAPON_KIT_METAL_DETECTOR"), 1))
			{
				return false;
			}
		}
	}
	if (((func_5(iParam0, 1562621600) || func_5(iParam0, 143267379)) || func_5(iParam0, -944041124)) || func_5(iParam0, -352095726))
	{
		if (!func_42(joaat("WEAPON_KIT_METAL_DETECTOR"), 1))
		{
			return false;
		}
	}
	if (!func_5(iParam0, -352095726))
	{
		iVar0 = func_402(12);
		if (iVar0 < 5)
		{
			if (func_5(iParam0, 683680997))
			{
				return false;
			}
		}
		if (iVar0 < 10)
		{
			if (func_5(iParam0, -283942357))
			{
				return false;
			}
		}
	}
	return true;
}

int func_351(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 40018245:
			iVar0 = 0;
			break;
		case -1586372771:
			iVar0 = 1;
			break;
		case -1356105008:
			iVar0 = 2;
			break;
		case -1175547818:
			iVar0 = 3;
			break;
		case -877579301:
			iVar0 = 4;
			break;
		case 1138992134:
			iVar0 = 5;
			break;
	}
	if (func_5(iParam1, 1307628809))
	{
		iParam2 = (iParam2 + iVar0 * 9);
	}
	else if (func_5(iParam1, 683680997))
	{
		iParam2 = (iParam2 + iVar0 * 6);
	}
	else if (func_5(iParam1, -283942357))
	{
		iParam2 = (iParam2 + iVar0 * 3);
	}
	switch (iParam2)
	{
		case 0:
			return 0;
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
		case 27:
			return 27;
		case 28:
			return 28;
		case 29:
			return 29;
		case 30:
			return 30;
		case 31:
			return 31;
		case 32:
			return 32;
		case 33:
			return 33;
		case 34:
			return 34;
		case 35:
			return 35;
		case 36:
			return 36;
		case 37:
			return 37;
		case 38:
			return 38;
		case 39:
			return 39;
		case 40:
			return 40;
		case 41:
			return 41;
		case 42:
			return 42;
		case 43:
			return 43;
		case 44:
			return 44;
		case 45:
			return 45;
		case 46:
			return 46;
		case 47:
			return 47;
		case 48:
			return 48;
		case 49:
			return 49;
		case 50:
			return 50;
		case 51:
			return 51;
		case 52:
			return 52;
		case 53:
			return 53;
		default:
			break;
	}
	return 0;
}

Vector3 func_352(int iParam0, int iParam1)
{
	vector3 vVar0;

	if (func_5(iParam1, -1995062316))
	{
		vVar0 = { func_403(iParam0, iParam1) };
	}
	if (func_5(iParam1, -149719013))
	{
		vVar0 = { func_404(iParam0, iParam1) };
	}
	if (func_5(iParam1, 143267379))
	{
		vVar0 = { func_405(iParam0, iParam1) };
	}
	if (func_5(iParam1, -944041124))
	{
		vVar0 = { func_406(iParam0, iParam1) };
	}
	if (func_5(iParam1, 1239889275))
	{
		vVar0 = { func_407(iParam0, iParam1) };
	}
	if (func_5(iParam1, 1940829793))
	{
		vVar0 = { func_408(iParam0, iParam1) };
	}
	if (func_5(iParam1, 1562621600))
	{
		vVar0 = { func_409(iParam0, iParam1) };
	}
	if (func_5(iParam1, 781094263))
	{
		vVar0 = { func_410(iParam0, iParam1) };
	}
	if (func_5(iParam1, -352095726))
	{
		vVar0 = { func_411(iParam0, iParam1) };
	}
	return vVar0;
}

void func_353(var uParam0, int iParam1, vector3 vParam2, float fParam5)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;

	if ((func_412(iParam1, vParam2) && func_350(iParam1)) && !func_251(vParam2))
	{
		iVar4 = 0;
		while (iVar4 < uParam0->f_11)
		{
			vVar0 = { *(uParam0[iVar4 /*3*/]) };
			fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_35, vVar0, true);
			if (iVar4 == 0)
			{
				if (func_251(*(uParam0[iVar4 /*3*/])))
				{
					func_401(uParam0, iParam1, vParam2, iVar4);
				}
				else if (iParam1 != uParam0->f_11[iVar4])
				{
					if (fParam5 < fVar3)
					{
						func_401(uParam0, iParam1, vParam2, iVar4);
					}
				}
			}
			else if (!func_413(uParam0, iParam1))
			{
				if (func_251(*(uParam0[iVar4 /*3*/])))
				{
					func_401(uParam0, iParam1, vParam2, iVar4);
				}
				else if (!func_414(uParam0, iVar4))
				{
					if (fParam5 < fVar3)
					{
						func_401(uParam0, iParam1, vParam2, iVar4);
					}
				}
				else
				{
					func_401(uParam0, iParam1, vParam2, iVar4 + 1);
				}
			}
			iVar4++;
		}
	}
}

int func_354(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1561655701:
			iParam1 = iParam1;
			break;
		case 1218924734:
			iParam1 += 2;
			break;
		case 1516368947:
			iParam1 += 4;
			break;
		case 1984048115:
			iParam1 += 6;
			break;
		case -2013016202:
			iParam1 += 8;
			break;
		case -1745916083:
			iParam1 += 10;
			break;
	}
	switch (iParam1)
	{
		case 0:
			return 0;
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
		default:
			break;
	}
	return 0;
}

int func_355(var uParam0, int iParam1)
{
	if (func_5(iParam1, 781094263))
	{
	}
	else if (func_5(iParam1, -149719013))
	{
		switch (uParam0->f_6)
		{
			case 1561655701:
				return 0;
			case 1218924734:
				return 1;
			case 1516368947:
				return 2;
			case 1984048115:
				return 3;
			case -2013016202:
				return 4;
			case -1745916083:
				return 5;
			default:
				break;
		}
	}
	else if (func_5(iParam1, -1995062316))
	{
		switch (*uParam0)
		{
			case 262189671:
				return 0;
			case -1865796416:
				return 1;
			case -2102912900:
				return 2;
			case -1471781960:
				return 3;
			case -1711487195:
				return 4;
			case 1532840411:
				return 5;
			default:
				break;
		}
	}
	else if (func_5(iParam1, 143267379))
	{
		switch (uParam0->f_3)
		{
			case -1285238734:
				return 0;
			case -888012916:
				return 1;
			case -1211213567:
				return 2;
			case -1116052391:
				return 3;
			case 1314063884:
				return 4;
			case 1644572018:
				return 5;
			default:
				break;
		}
	}
	else if (func_5(iParam1, -944041124))
	{
		switch (uParam0->f_4)
		{
			case -158969429:
				return 0;
			case 147060262:
				return 1;
			case -486692198:
				return 2;
			case 886099519:
				return 3;
			case -1789128804:
				return 4;
			case -1617026016:
				return 5;
			default:
				break;
		}
	}
	else if (func_5(iParam1, 1239889275))
	{
		switch (uParam0->f_1)
		{
			case -1859451998:
				return 0;
			case 467802382:
				return 1;
			case 212892331:
				return 2;
			case -137539355:
				return 3;
			case -366824048:
				return 4;
			case -1952384882:
				return 5;
			default:
				break;
		}
	}
	else if (func_5(iParam1, 1940829793))
	{
		switch (uParam0->f_8)
		{
			case 1381272898:
				return 0;
			case 1539809320:
				return 1;
			case -2102137352:
				return 2;
			case 199098446:
				return 3;
			case 1462376165:
				return 4;
			case 1885620569:
				return 5;
			default:
				break;
		}
	}
	else if (func_5(iParam1, 1562621600))
	{
		switch (uParam0->f_5)
		{
			case -1414390857:
				return 0;
			case -490927668:
				return 1;
			case 345304443:
				return 2;
			case -564887297:
				return 3;
			case 267084844:
				return 4;
			case 1120782832:
				return 5;
			default:
				break;
		}
	}
	else if (func_5(iParam1, -352095726))
	{
		switch (uParam0->f_9)
		{
			case 346286482:
				return 0;
			case 82987567:
				return 1;
			case -145707284:
				return 2;
			case 1940236180:
				return 3;
			case 1558018564:
				return 4;
			case 1310186617:
				return 5;
			default:
				break;
		}
	}
	return 0;
}

void func_356(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
}

char* func_357(int iParam0, int iParam1)
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

struct<4> func_358()
{
	struct<4> Var0;

	return Var0;
}

bool func_359()
{
	return (func_183(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_415(func_195(joaat("WARDROBE"), func_269(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_360(int iParam0, int iParam1, int iParam2)
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

bool func_361(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_175(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_362(int iParam0)
{
	return func_5(iParam0, 1279601681);
}

void func_363(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (RDR_LOCAL_LOAD_S >= 11)
	{
		return;
	}
}

void func_364(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_326(uParam0))
	{
		return;
	}
	if (Global_1293346.f_2011 < 20)
	{
		Global_1293346.f_2011++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1293346.f_2011.f_1[iVar0 /*24*/] = { Global_1293346.f_2011.f_1[iVar0 + 1 /*24*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 11;
	Var1.f_7.f_16 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	Global_1293346.f_2011.f_1[(Global_1293346.f_2011 - 1) /*24*/] = { Var1 };
}

bool func_365(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("USE"))
	{
		if ((func_416(uParam1->f_8, iParam0, uVar0, 2048) || func_416(uParam1->f_8, iParam0, uVar0, 32768)) || func_416(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_416(uParam1->f_8, iParam0, uVar0, 4) || func_416(uParam1->f_8, iParam0, uVar0, 256)) || func_416(uParam1->f_8, iParam0, uVar0, 65536)) || func_416(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SPEND"))
	{
		if (((func_416(uParam1->f_8, iParam0, uVar0, 1) || func_416(uParam1->f_8, iParam0, uVar0, 8)) || func_416(uParam1->f_8, iParam0, uVar0, 65536)) || func_416(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SELL"))
	{
		if (((func_416(uParam1->f_8, iParam0, uVar0, 1) || func_416(uParam1->f_8, iParam0, uVar0, 16)) || func_416(uParam1->f_8, iParam0, uVar0, 2)) || func_416(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_416(uParam1->f_8, iParam0, uVar0, 8) || func_416(uParam1->f_8, iParam0, uVar0, 4096)) || func_416(uParam1->f_8, iParam0, uVar0, 256)) || func_416(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_366(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_367(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_417(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_417(iParam1, 2, 0, 0);
	return -1;
}

int func_368(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_417(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_369(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_418(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_370(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_371(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_372(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_373(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_374(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_375(int iParam0, int iParam1)
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

void func_376(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_419(iParam0, iParam6);
	func_420(iParam0, iParam5);
	func_421(iParam0, iParam4);
	func_422(iParam0, iParam3);
	func_423(iParam0, iParam2);
	func_424(iParam0, iParam1);
}

bool func_377()
{
	return Global_1913504.f_127 == 0;
}

int func_378()
{
	return Global_1952637.f_1;
}

bool func_379(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1940311.f_38.f_1)
	{
		if (func_425(iParam0, Global_1940311.f_38.f_2[iVar0 /*2*/]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_380(int iParam0)
{
	if (func_5(iParam0, -839724752))
	{
		return func_5(iParam0, 1937586541);
	}
	return false;
}

bool func_381(int iParam0)
{
	if ((((((((((((((((func_426(iParam0, joaat("ANTIQUE_BOTTLES")) || func_426(iParam0, joaat("BIRD_EGGS"))) || func_426(iParam0, joaat("ARROWHEADS"))) || func_426(iParam0, joaat("FAMILY_HEIRLOOMS"))) || func_426(iParam0, joaat("WILD_FLOWERS"))) || func_426(iParam0, joaat("COINS"))) || func_426(iParam0, joaat("LOST_JEWELRY_RINGS"))) || func_426(iParam0, joaat("LOST_JEWELRY_BRACELETS"))) || func_426(iParam0, joaat("LOST_JEWELRY_EARRINGS"))) || func_426(iParam0, joaat("LOST_JEWELRY_NECKLACES"))) || func_426(iParam0, joaat("TAROT_CARDS_CUPS"))) || func_426(iParam0, joaat("TAROT_CARDS_PENTACLES"))) || func_426(iParam0, joaat("TAROT_CARDS_SWORDS"))) || func_426(iParam0, joaat("TAROT_CARDS_WANDS"))) || func_426(iParam0, 773314749)) || func_426(iParam0, -246025274)) || func_426(iParam0, -41527693))
	{
		return true;
	}
	return false;
}

int func_382(int iParam0, int iParam1)
{
	switch (Global_1940311.f_36)
	{
		case 1:
			if (iParam1 == -2074770370)
			{
				if ((func_5(iParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")) || func_5(iParam0, -839724752)) || func_5(iParam0, -136654233))
				{
					return 1;
				}
			}
			break;
		case 2:
			if (iParam1 == -2074770370)
			{
				if ((((((((func_5(iParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")) || func_5(iParam0, -839724752)) || func_5(iParam0, -136654233)) || func_5(iParam0, 554195525)) || func_5(iParam0, -1238310989)) || func_5(iParam0, 2127114599)) || func_5(iParam0, -1864584831)) || func_5(iParam0, 1068498601)) || func_5(iParam0, 1967571132))
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

bool func_383(int iParam0, int iParam1)
{
	if (iParam1 == 119)
	{
		return func_427(iParam0);
	}
	return func_428(iParam0, iParam1);
}

void func_384(int iParam0, int iParam1, bool bParam2)
{
	if (func_22(iParam1, 0))
	{
		if (bParam2)
		{
			INVENTORY::_0x6A564540FAC12211(iParam0, iParam1);
		}
		else
		{
			INVENTORY::_0x766315A564594401(iParam0, iParam1, 0);
		}
	}
}

int func_385(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;

	if (!func_5(iParam0, 1989861793))
	{
		return 0;
	}
	iVar0 = func_138(iParam0, 0);
	if (!ITEMDATABASE::_0xEF254F1A4C08B7E6(iVar0))
	{
		return 0;
	}
	iVar5 = ITEMDATABASE::_0x3FAA928A79591761(iVar0);
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		if (!ITEMDATABASE::_0x121D2005DD64496B(iVar0, iVar4, &iVar1))
		{
		}
		else if (func_5(iVar1, 1989861793))
		{
			return iVar1;
		}
		iVar4++;
	}
	return 0;
}

bool func_386(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (!func_139(iVar0))
	{
		return false;
	}
	if (((((((((((((iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("COINS"), 0) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("WILD_FLOWERS"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("FAMILY_HEIRLOOMS"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("ARROWHEADS"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("ANTIQUE_BOTTLES"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("BIRD_EGGS"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("LOST_JEWELRY_RINGS"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("LOST_JEWELRY_BRACELETS"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("LOST_JEWELRY_NECKLACES"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("LOST_JEWELRY_EARRINGS"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("TAROT_CARDS_CUPS"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("TAROT_CARDS_PENTACLES"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("TAROT_CARDS_SWORDS"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("TAROT_CARDS_WANDS"), 0))
	{
		return true;
	}
	return false;
}

int func_387(int* iParam0)
{
	return func_429(iParam0->f_1);
}

int func_388(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_430(iVar0, 1, 0);
		if (!func_431(iParam0, iVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_432(Var2[iVar34 /*2*/]))
				{
					if (!bParam1 || func_87(Var2[iVar34 /*2*/], 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @135; //curOff = 106
				}
				else if (Var2[iVar34 /*2*/] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_389(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	struct<2> Var9[15];
	int iVar40;
	int iVar41;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_430(iVar0, 0, 1);
		if (!func_431(iParam0, iVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_433(Var9[iVar41 /*2*/]))
				{
					if (!bParam1 || func_87(Var9[iVar41 /*2*/], 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (Var9[iVar41 /*2*/] == joaat("CURRENCY_CASH") || Var9[iVar41 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
				{
					if ((bParam2 && Var9[iVar41 /*2*/] == joaat("CURRENCY_CASH")) || (!bParam2 && Var9[iVar41 /*2*/] == joaat("CURRENCY_GOLD_BAR")))
					{
						if (iVar4 == 0 || (bVar6 && Var9[iVar41 /*2*/].f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = Var9[iVar41 /*2*/].f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || Var9[iVar41 /*2*/].f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = Var9[iVar41 /*2*/].f_1;
						iVar7 = 0;
					}
				}
				else if (Var9[iVar41 /*2*/] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && iVar5 != 0)
			{
				iVar4 = iVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return iVar4;
}

int func_390(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_431(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if ((Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR")) || Var0[iVar32 /*2*/] == joaat("CHARACTER_ROLE_TOKEN"))
		{
			return Var0[iVar32 /*2*/].f_1;
		}
		else if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam2)
	{
	}
	return 0;
}

bool func_391(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(0, iParam0);
}

int func_392(int iParam0)
{
	return (iParam0 / 100);
}

void func_393(char* sParam0)
{
	Global_1915715.f_22470 = func_145(sParam0, 10000, 0, 0, 0, 1);
}

bool func_394(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_3() == 0)
	{
		return func_434(iParam0);
	}
	return iParam0 <= func_435();
}

bool func_395(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;

	if (!func_431(iParam0, iParam1, &Var0, &iVar31, 0, 1))
	{
		return false;
	}
	iVar34 = -1;
	if (Global_1915715.f_20638)
	{
		iVar34 = Global_1915715.f_20241;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH"))
			{
				if (!bParam4 && !func_394(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else if (Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
			{
				if (!bParam4 && !func_391(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_436(iVar34, Var0[iVar32 /*2*/]);
				if (iVar33 != 0)
				{
					iVar35 = func_437(Var0[iVar32 /*2*/], iVar33);
				}
				else
				{
					iVar35 = func_87(Var0[iVar32 /*2*/], 0, bParam3, 1);
				}
				if (iVar35 < Var0[iVar32 /*2*/].f_1)
				{
					*uParam2 = { Var0[iVar32 /*2*/] };
					return false;
				}
			}
			iVar32++;
		}
	}
	return true;
}

bool func_396(int* iParam0, int iParam1)
{
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(iParam0, joaat("BASKET"), iParam1))
	{
		return false;
	}
	return true;
}

bool func_397(int* iParam0)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		func_417(*iParam0, 0, 0, 0);
		return true;
	}
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*iParam0);
		func_417(*iParam0, 4, 0, 0);
		return true;
	}
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(*iParam0))
	{
		func_417(*iParam0, 2, 0, 0);
		return false;
	}
	func_417(*iParam0, 1, 0, 0);
	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0);
	if (iVar0 == 2113164098 || iVar0 == 541670136)
	{
		iParam0->f_3 = 1;
	}
	iParam0->f_1 = *iParam0;
	*iParam0 = -1;
	iParam0->f_2 = 0;
	return true;
}

bool func_398(int iParam0)
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

int func_399(int iParam0)
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

void func_400(var uParam0, float fParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	if (func_412(*iParam5, *uParam3))
	{
		if (*uParam0 == 0f || *fParam1 < *uParam0)
		{
			*uParam2 = { *uParam3 };
			*uParam0 = *fParam1;
			*uParam4 = *iParam5;
		}
	}
}

void func_401(var uParam0, int iParam1, vector3 vParam2, int iParam5)
{
	uParam0->f_11[iParam5] = iParam1;
	*(uParam0[iParam5 /*3*/]) = { vParam2 };
}

int func_402(int iParam0)
{
	int iVar0;

	if (!func_438(iParam0))
	{
		return 0;
	}
	iVar0 = func_439(iParam0);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	else
	{
		return func_440(iParam0, 1);
	}
	return 0;
}

Vector3 func_403(int iParam0, int iParam1)
{
	vector3 vVar0;

	switch (iParam1)
	{
		case joaat("PROVISION_ARROWHEAD_AGATE"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1626.256f, -1440.047f, 81.56577f };
					break;
				case 1:
					vVar0 = { 228.4911f, 1905.913f, 205.1248f };
					break;
				case 2:
					vVar0 = { -166.4996f, 347.176f, 96.39246f };
					break;
				case 3:
					vVar0 = { -2048.924f, -485.327f, 148.617f };
					break;
				case 4:
					vVar0 = { 2591.175f, 464.552f, 65.386f };
					break;
				case 5:
					vVar0 = { 449.954f, 2139.728f, 242.163f };
					break;
			}
			break;
		case joaat("PROVISION_ARROWHEAD_BONE"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -3090.208f, -3687.019f, -23.07111f };
					break;
				case 1:
					vVar0 = { 331.659f, -751.492f, 41.516f };
					break;
				case 2:
					vVar0 = { 1467.294f, -1835.141f, 52.2977f };
					break;
				case 3:
					vVar0 = { 431.627f, 2181.339f, 245.228f };
					break;
				case 4:
					vVar0 = { -1630.31f, -916.825f, 96.558f };
					break;
				case 5:
					vVar0 = { 2732.805f, 1305.355f, 94.425f };
					break;
			}
			break;
		case joaat("PROVISION_ARROWHEAD_CHIPPED"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2681.312f, 888.0165f, 88.69837f };
					break;
				case 1:
					vVar0 = { -5077.907f, -3758.28f, -4.03334f };
					break;
				case 2:
					vVar0 = { -2076.948f, -2018.081f, 95.6292f };
					break;
				case 3:
					vVar0 = { 273.126f, 1471.93f, 157.105f };
					break;
				case 4:
					vVar0 = { 1856.797f, -1640.871f, 43.837f };
					break;
				case 5:
					vVar0 = { -834.325f, 1105.575f, 148.744f };
					break;
			}
			break;
		case joaat("PROVISION_ARROWHEAD_CRUDE"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1797.57f, -820.6117f, 41.44231f };
					break;
				case 1:
					vVar0 = { -1549.497f, -914.4499f, 88.37117f };
					break;
				case 2:
					vVar0 = { 1210.972f, -935.7455f, 61.7126f };
					break;
				case 3:
					vVar0 = { 2910.409f, 1220.405f, 42.791f };
					break;
				case 4:
					vVar0 = { -6010.271f, -3099.12f, -1.952f };
					break;
				case 5:
					vVar0 = { -2487.932f, -2683.609f, 75.215f };
					break;
			}
			break;
		case joaat("PROVISION_ARROWHEAD_FELDSPAR"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1327.926f, -2570.111f, 72.97827f };
					break;
				case 1:
					vVar0 = { -3738.736f, -2085.723f, -8.071209f };
					break;
				case 2:
					vVar0 = { -2416.179f, -1005.542f, 166.8462f };
					break;
				case 3:
					vVar0 = { -6387.865f, -3671.32f, -23.469f };
					break;
				case 4:
					vVar0 = { 1261.371f, -256.617f, 97.896f };
					break;
				case 5:
					vVar0 = { -2201.921f, -1444.722f, 136.539f };
					break;
			}
			break;
		case joaat("PROVISION_ARROWHEAD_FLINT"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 324.7118f, 1716.88f, 165.6345f };
					break;
				case 1:
					vVar0 = { -2138.969f, -1773.034f, 141.357f };
					break;
				case 2:
					vVar0 = { 2458.548f, 292.0694f, 69.62054f };
					break;
				case 3:
					vVar0 = { -1520.7f, 738.223f, 124.885f };
					break;
				case 4:
					vVar0 = { -4072.965f, -2612.864f, -5.672f };
					break;
				case 5:
					vVar0 = { 1443.389f, -1949.58f, 51.623f };
					break;
			}
			break;
		case joaat("PROVISION_ARROWHEAD_OBSIDIAN"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1141.345f, 465.1495f, 95.96226f };
					break;
				case 1:
					vVar0 = { -2586.866f, -95.34192f, 167.6172f };
					break;
				case 2:
					vVar0 = { -2905.136f, -254.2839f, 185.6743f };
					break;
				case 3:
					vVar0 = { 765.732f, 639.022f, 124.101f };
					break;
				case 4:
					vVar0 = { 2276.143f, 1061.22f, 77.504f };
					break;
				case 5:
					vVar0 = { -1141.282f, -959.976f, 63.03f };
					break;
			}
			break;
		case joaat("PROVISION_ARROWHEAD_QUARTZ"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2846.721f, 2253.417f, 156.0374f };
					break;
				case 1:
					vVar0 = { -1641.062f, 631.366f, 123.972f };
					break;
				case 2:
					vVar0 = { -5685.067f, -2757.809f, -17.34713f };
					break;
				case 3:
					vVar0 = { -1814.626f, -1612.653f, 104.607f };
					break;
				case 4:
					vVar0 = { 1294.231f, -1555.382f, 66.411f };
					break;
				case 5:
					vVar0 = { -3992.301f, -3472.408f, 52.659f };
					break;
			}
			break;
		case joaat("PROVISION_ARROWHEAD_RAW"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -2688.423f, -1502.831f, 150.2751f };
					break;
				case 1:
					vVar0 = { 1090.46f, -30.50565f, 85.73418f };
					break;
				case 2:
					vVar0 = { 491.7462f, -308.6388f, 142.6688f };
					break;
				case 3:
					vVar0 = { 1451.435f, -357.234f, 79.693f };
					break;
				case 4:
					vVar0 = { -964.51f, -1746.746f, 72.566f };
					break;
				case 5:
					vVar0 = { 737.965f, 217.404f, 143.854f };
					break;
			}
			break;
		case joaat("PROVISION_ARROWHEAD_ROUGH"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -4721.776f, -3225.844f, 8.061125f };
					break;
				case 1:
					vVar0 = { 116.6806f, 1217.888f, 183.4647f };
					break;
				case 2:
					vVar0 = { -2008.259f, -2782.807f, 69.77032f };
					break;
				case 3:
					vVar0 = { -4801.018f, -2393.364f, 6.379f };
					break;
				case 4:
					vVar0 = { 1985.262f, -556.278f, 40.807f };
					break;
				case 5:
					vVar0 = { -3144.45f, -2651.773f, 10.954f };
					break;
			}
			break;
		case joaat("PROVISION_ARROWHEAD_SLATE"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -2120.62f, 71.71207f, 254.9753f };
					break;
				case 1:
					vVar0 = { 1201.297f, -2041.166f, 55.00516f };
					break;
				case 2:
					vVar0 = { 1242.734f, 1173.516f, 148.6348f };
					break;
				case 3:
					vVar0 = { 2408.423f, 1764.503f, 88.656f };
					break;
				case 4:
					vVar0 = { -973.079f, 218.101f, 87.932f };
					break;
				case 5:
					vVar0 = { 241.777f, 1591.056f, 178.563f };
					break;
			}
			break;
		case joaat("PROVISION_ARROWHEAD_SPLINTERED"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -166.1597f, -164.5237f, 90.37929f };
					break;
				case 1:
					vVar0 = { 2535.888f, 700.0389f, 77.22427f };
					break;
				case 2:
					vVar0 = { 456.302f, 2192.027f, 244.7186f };
					break;
				case 3:
					vVar0 = { -2718.98f, 682.542f, 174.764f };
					break;
				case 4:
					vVar0 = { -462.207f, 1427.085f, 206.364f };
					break;
				case 5:
					vVar0 = { 2211.003f, -675.961f, 40.775f };
					break;
			}
			break;
	}
	return vVar0;
}

Vector3 func_404(int iParam0, int iParam1)
{
	vector3 vVar0;

	switch (iParam1)
	{
		case joaat("PROVISION_DUCK_EGG"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 130.6175f, 1513.541f, 115.4675f };
					break;
				case 1:
					vVar0 = { 2380.566f, 987.6273f, 73.02643f };
					break;
				case 2:
					vVar0 = { 2759.191f, 2185.55f, 155.8484f };
					break;
				case 3:
					vVar0 = { 1572.564f, 1365.523f, 144.8364f };
					break;
				case 4:
					vVar0 = { -2446.152f, -533.0729f, 141.4806f };
					break;
				case 5:
					vVar0 = { -2500.409f, -1472.979f, 146.5042f };
					break;
			}
			break;
		case joaat("PROVISION_EAGLE_EGG"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -2220.327f, -555.082f, 151.4888f };
					break;
				case 1:
					vVar0 = { -1215.258f, 1370.017f, 260.743f };
					break;
				case 2:
					vVar0 = { -2113.571f, -73.96356f, 262.4125f };
					break;
				case 3:
					vVar0 = { -984.1674f, 1529.783f, 247.623f };
					break;
				case 4:
					vVar0 = { -1513.108f, -340.9661f, 152.7582f };
					break;
				case 5:
					vVar0 = { -1955.492f, 2190.889f, 332.6355f };
					break;
				case 6:
					vVar0 = { -1170.96f, 1050.89f, 167.97f };
					break;
				case 7:
					vVar0 = { -2010.61f, -395.48f, 174.74f };
					break;
				case 8:
					vVar0 = { -1930.982f, 1240.447f, 194.9847f };
					break;
				case 9:
					vVar0 = { -1875.668f, -241.1899f, 199.1293f };
					break;
				case 10:
					vVar0 = { -1183.784f, 2093.181f, 355.679f };
					break;
				case 11:
					vVar0 = { -2374.11f, 193.6417f, 211.24f };
					break;
			}
			break;
		case joaat("PROVISION_EGRET_EGG"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2057.918f, -1722.14f, 43.88942f };
					break;
				case 1:
					vVar0 = { 1855.121f, -859.4686f, 45.96879f };
					break;
				case 2:
					vVar0 = { 2477.28f, -273.61f, 44.34f };
					break;
				case 3:
					vVar0 = { 2336.483f, -853.3739f, 45.38264f };
					break;
				case 4:
					vVar0 = { 1924.734f, -1141.323f, 44.74717f };
					break;
				case 5:
					vVar0 = { 1853.557f, -351.4071f, 50.09297f };
					break;
			}
			break;
		case joaat("PROVISION_GOOSE_EGG"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1455.642f, -2012.715f, 40.79536f };
					break;
				case 1:
					vVar0 = { 175.0837f, -762.0237f, 40.92589f };
					break;
				case 2:
					vVar0 = { 1650.297f, -2080.092f, 41.33918f };
					break;
				case 3:
					vVar0 = { -2151.871f, -2033.236f, 55.35887f };
					break;
				case 4:
					vVar0 = { -372.8311f, -1101.837f, 41.17361f };
					break;
				case 5:
					vVar0 = { 435.17f, -1659.833f, 43.82178f };
					break;
			}
			break;
		case joaat("PROVISION_HAWK_EGG"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1685.95f, 1813.614f, 218.2414f };
					break;
				case 1:
					vVar0 = { -1583.697f, 3174.265f, 484.5643f };
					break;
				case 2:
					vVar0 = { 813.1831f, 1999.82f, 283.3279f };
					break;
				case 3:
					vVar0 = { -1039.653f, 2650.086f, 318.0255f };
					break;
				case 4:
					vVar0 = { -215.7416f, 1607.373f, 168.6563f };
					break;
				case 5:
					vVar0 = { -1491.561f, 2597.406f, 374.8609f };
					break;
				case 6:
					vVar0 = { 1353.112f, 1545.57f, 198.9298f };
					break;
				case 7:
					vVar0 = { -712.7252f, 2593.39f, 339.63f };
					break;
				case 8:
					vVar0 = { 451.5644f, 1626.011f, 207.8618f };
					break;
				case 9:
					vVar0 = { -1336.23f, 2000.95f, 326.51f };
					break;
				case 10:
					vVar0 = { 90.35796f, 1705.762f, 187.9509f };
					break;
				case 11:
					vVar0 = { -715.788f, 2847.03f, 350.9099f };
					break;
			}
			break;
		case joaat("PROVISION_HERON_EGG"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2129.335f, -478.5026f, 44.24976f };
					break;
				case 1:
					vVar0 = { 2165.205f, -856.9f, 46.1399f };
					break;
				case 2:
					vVar0 = { 1721.049f, -998.6505f, 48.03225f };
					break;
				case 3:
					vVar0 = { 1936.41f, -1843.55f, 47.92f };
					break;
				case 4:
					vVar0 = { 2230.212f, -264.3365f, 45.79628f };
					break;
				case 5:
					vVar0 = { 2239.663f, -1140.097f, 46.36992f };
					break;
			}
			break;
		case joaat("PROVISION_LOON_EGG"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 682.966f, -1866.18f, 43.12862f };
					break;
				case 1:
					vVar0 = { -699.7326f, -463.4799f, 40.81263f };
					break;
				case 2:
					vVar0 = { -1098.347f, -905.8218f, 44.19538f };
					break;
				case 3:
					vVar0 = { -1912.605f, -1097.146f, 74.84635f };
					break;
				case 4:
					vVar0 = { -862.9524f, 587.9164f, 58.90303f };
					break;
				case 5:
					vVar0 = { 453.1795f, -663.71f, 47.58012f };
					break;
			}
			break;
		case joaat("PROVISION_SPOONBILL_EGG"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2054.959f, -1424.426f, 48.92442f };
					break;
				case 1:
					vVar0 = { 2385.209f, -628.4365f, 49.72212f };
					break;
				case 2:
					vVar0 = { 2803.415f, -695.4971f, 45.49643f };
					break;
				case 3:
					vVar0 = { 1765.679f, -557.788f, 49.223f };
					break;
				case 4:
					vVar0 = { 1569.394f, -913.1165f, 45.72157f };
					break;
				case 5:
					vVar0 = { 2004.221f, -1723.626f, 50.89873f };
					break;
			}
			break;
		case joaat("PROVISION_VULTURE_EGG"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -2916.537f, -2288.44f, 76.43781f };
					break;
				case 1:
					vVar0 = { -2054.743f, -1925.456f, 112.2727f };
					break;
				case 2:
					vVar0 = { 2653.375f, 1752.763f, 110.4145f };
					break;
				case 3:
					vVar0 = { -2531.534f, -2954.918f, 66.75875f };
					break;
				case 4:
					vVar0 = { 2719.022f, 2190.373f, 156.71f };
					break;
				case 5:
					vVar0 = { 2354.067f, 1451.83f, 142.5797f };
					break;
			}
			break;
	}
	return vVar0;
}

Vector3 func_405(int iParam0, int iParam1)
{
	vector3 vVar0;

	switch (iParam1)
	{
		case joaat("PROVISION_COIN_1700_NY_TKN"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2384.636f, 702.7831f, 68.47878f };
					break;
				case 1:
					vVar0 = { 1413.694f, -1774.543f, 65.75599f };
					break;
				case 2:
					vVar0 = { -2715.088f, 716.8932f, 170.1759f };
					break;
				case 3:
					vVar0 = { -4687.155f, -3742.616f, 9.319794f };
					break;
				case 4:
					vVar0 = { 2305.91f, 2000.815f, 179.0962f };
					break;
				case 5:
					vVar0 = { 2465.432f, -991.1915f, 40.44379f };
					break;
			}
			break;
		case joaat("PROVISION_COIN_1787_CENT_TKN"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 602.0844f, 550.2792f, 111.3233f };
					break;
				case 1:
					vVar0 = { 434.1988f, 1643.844f, 196.8673f };
					break;
				case 2:
					vVar0 = { -1705.896f, -1302.72f, 92.48844f };
					break;
				case 3:
					vVar0 = { -1372.737f, -2387.345f, 41.15795f };
					break;
				case 4:
					vVar0 = { 2107.461f, -1276.037f, 41.274f };
					break;
				case 5:
					vVar0 = { -2195.814f, 752.0993f, 122.809f };
					break;
			}
			break;
		case joaat("PROVISION_COIN_1789_PNY"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2868.94f, 1774.43f, 134.0816f };
					break;
				case 1:
					vVar0 = { 1639.768f, 833.7402f, 143.8371f };
					break;
				case 2:
					vVar0 = { 1196.359f, -570.8525f, 67.2235f };
					break;
				case 3:
					vVar0 = { -5544.435f, -2897.414f, -4.08f };
					break;
				case 4:
					vVar0 = { 2280.038f, -539.038f, 40.566f };
					break;
				case 5:
					vVar0 = { -537.863f, 2671.4f, 317.747f };
					break;
			}
			break;
		case joaat("PROVISION_COIN_1792_LIB_QTR"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -5170.19f, -2777.566f, 7.988142f };
					break;
				case 1:
					vVar0 = { -371.9685f, -80.23643f, 42.88546f };
					break;
				case 2:
					vVar0 = { -254.3018f, 1348.715f, 138.5417f };
					break;
				case 3:
					vVar0 = { 1585.462f, -1844.872f, 51.353f };
					break;
				case 4:
					vVar0 = { -3287.94f, -2802.297f, -4.167f };
					break;
				case 5:
					vVar0 = { 359.265f, 1421.24f, 175.937f };
					break;
			}
			break;
		case joaat("PROVISION_COIN_1792_NICKEL"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1788.771f, -581.2818f, 154.9099f };
					break;
				case 1:
					vVar0 = { 2535.496f, 1195.557f, 163.4559f };
					break;
				case 2:
					vVar0 = { 3139.878f, 1530.139f, 52.69886f };
					break;
				case 3:
					vVar0 = { -2269.376f, -1330.475f, 132.516f };
					break;
				case 4:
					vVar0 = { -4342.196f, -2604.031f, -1.945f };
					break;
				case 5:
					vVar0 = { 1374.679f, -2080.701f, 50.768f };
					break;
			}
			break;
		case joaat("PROVISION_COIN_1792_QTR"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 129.2208f, 1003.35f, 208.2303f };
					break;
				case 1:
					vVar0 = { -395.5179f, 1753.13f, 215.2918f };
					break;
				case 2:
					vVar0 = { 922.476f, 271.5775f, 115.754f };
					break;
				case 3:
					vVar0 = { 2622.302f, -651.247f, 42.497f };
					break;
				case 4:
					vVar0 = { -1649.375f, -1717.725f, 82.658f };
					break;
				case 5:
					vVar0 = { 2718.649f, 706.791f, 78.061f };
					break;
			}
			break;
		case joaat("PROVISION_COIN_1794_SLV_DLR"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2497.531f, -419.3243f, 40.53325f };
					break;
				case 1:
					vVar0 = { -2350.628f, 112.6509f, 216.7536f };
					break;
				case 2:
					vVar0 = { -3545.135f, -3007.878f, 10.43144f };
					break;
				case 3:
					vVar0 = { 2690.942f, 2029.559f, 158.495f };
					break;
				case 4:
					vVar0 = { 828.481f, -1553.911f, 43.209f };
					break;
				case 5:
					vVar0 = { -1993.648f, -1627.849f, 116.137f };
					break;
			}
			break;
		case joaat("PROVISION_COIN_1795_HLF_EAG"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1473.601f, 331.8847f, 89.07144f };
					break;
				case 1:
					vVar0 = { -6234.784f, -3518.823f, -31.67799f };
					break;
				case 2:
					vVar0 = { 81.67809f, 447.1742f, 153.211f };
					break;
				case 3:
					vVar0 = { -281.84f, 922.422f, 127.207f };
					break;
				case 4:
					vVar0 = { 1491.987f, 942.91f, 154.98f };
					break;
				case 5:
					vVar0 = { -1261.387f, -1607.831f, 79.704f };
					break;
			}
			break;
		case joaat("PROVISION_COIN_1796_HLF_PNY"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1404.415f, -2665.34f, 41.33462f };
					break;
				case 1:
					vVar0 = { -410.9144f, 668.2853f, 113.9756f };
					break;
				case 2:
					vVar0 = { -5420.417f, -2975.219f, 7.981212f };
					break;
				case 3:
					vVar0 = { -2704.466f, -2387.511f, 43.602f };
					break;
				case 4:
					vVar0 = { -3625.301f, -2570.524f, -15.811f };
					break;
				case 5:
					vVar0 = { 1948.57f, -679.584f, 40.927f };
					break;
			}
			break;
		case joaat("PROVISION_COIN_1797_GLD_EAG"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1268.305f, -386.9097f, 88.47926f };
					break;
				case 1:
					vVar0 = { 1957.905f, -159.5148f, 51.77026f };
					break;
				case 2:
					vVar0 = { -1648.063f, -2168.614f, 41.694f };
					break;
				case 3:
					vVar0 = { 895.89f, -1967.784f, 43.127f };
					break;
				case 4:
					vVar0 = { -2459.944f, 841.279f, 141.746f };
					break;
				case 5:
					vVar0 = { 2643.864f, -20.404f, 50.152f };
					break;
			}
			break;
		case joaat("PROVISION_COIN_1798_SLV_DLR"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -3207.183f, -3221.716f, -1.947383f };
					break;
				case 1:
					vVar0 = { 2110.998f, -1949.03f, 40.62194f };
					break;
				case 2:
					vVar0 = { 2428.506f, 579.6636f, 67.13865f };
					break;
				case 3:
					vVar0 = { -1673.309f, -336.558f, 173.006f };
					break;
				case 4:
					vVar0 = { -5387.589f, -3660.634f, -23.076f };
					break;
				case 5:
					vVar0 = { -3711.403f, -3618.255f, 41.47f };
					break;
			}
			break;
		case joaat("PROVISION_COIN_1800_FIVE_DLR"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 999.2269f, -943.6021f, 61.59056f };
					break;
				case 1:
					vVar0 = { -1036.054f, -1663.117f, 80.65519f };
					break;
				case 2:
					vVar0 = { 831.3604f, 1925.699f, 258.2985f };
					break;
				case 3:
					vVar0 = { -1645.33f, -1340.855f, 82.968f };
					break;
				case 4:
					vVar0 = { 371.924f, 1069.85f, 189.326f };
					break;
				case 5:
					vVar0 = { 1982.666f, 1795.47f, 191.102f };
					break;
			}
			break;
		case joaat("PROVISION_COIN_1800_GLD_DLR"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1393.007f, 1184.725f, 220.978f };
					break;
				case 1:
					vVar0 = { -4244.491f, -3191.862f, 17.72649f };
					break;
				case 2:
					vVar0 = { 1192.889f, -1348.479f, 70.41161f };
					break;
				case 3:
					vVar0 = { -3898.082f, -3165.799f, -0.558f };
					break;
				case 4:
					vVar0 = { 365.79f, -15.661f, 99.122f };
					break;
				case 5:
					vVar0 = { -1992.12f, -1036.359f, 73.885f };
					break;
			}
			break;
		case joaat("PROVISION_COIN_1800_GLD_QTR"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1938.051f, 462.7608f, 115.6562f };
					break;
				case 1:
					vVar0 = { -2649.848f, -2979.265f, 69.05343f };
					break;
				case 2:
					vVar0 = { 1844.446f, -676.2562f, 40.97815f };
					break;
				case 3:
					vVar0 = { -2261.235f, -1921.091f, 115.661f };
					break;
				case 4:
					vVar0 = { -1852.999f, -398.465f, 168.327f };
					break;
				case 5:
					vVar0 = { 647.94f, -563.003f, 66.216f };
					break;
			}
			break;
		case joaat("PROVISION_COIN_1800_HLF_DIME"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -746.9712f, 891.4087f, 107.9984f };
					break;
				case 1:
					vVar0 = { 192.283f, -409.8842f, 86.70686f };
					break;
				case 2:
					vVar0 = { -2264.846f, -504.1707f, 137.7239f };
					break;
				case 3:
					vVar0 = { -562.238f, -453.865f, 79.693f };
					break;
				case 4:
					vVar0 = { -2871.289f, -2024.989f, 77.634f };
					break;
				case 5:
					vVar0 = { -4331.344f, -2452.329f, 15.168f };
					break;
			}
			break;
	}
	return vVar0;
}

Vector3 func_406(int iParam0, int iParam1)
{
	vector3 vVar0;

	switch (iParam1)
	{
		case joaat("PROVISION_HRLM_BRUSH_BOAR"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2794.538f, 855.7374f, 72.215f };
					break;
				case 1:
					vVar0 = { -4366.604f, -2417.883f, 19.56f };
					break;
				case 2:
					vVar0 = { -5853.86f, -3743.685f, -25.09f };
					break;
				case 3:
					vVar0 = { -292.6273f, 863.1826f, 119.9146f };
					break;
				case 4:
					vVar0 = { 2256.442f, -793.3142f, 44.26483f };
					break;
				case 5:
					vVar0 = { -1026.682f, -1628.977f, 78.407f };
					break;
			}
			break;
		case joaat("PROVISION_HRLM_BRUSH_EBONY"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2359.031f, -1222.644f, 46.655f };
					break;
				case 1:
					vVar0 = { 1133.524f, -981.9582f, 69.475f };
					break;
				case 2:
					vVar0 = { -757.2515f, -1457.008f, 55.58f };
					break;
				case 3:
					vVar0 = { 2406.756f, -1060.379f, 43.44f };
					break;
				case 4:
					vVar0 = { -881.9086f, -1647.193f, 68.594f };
					break;
				case 5:
					vVar0 = { -818.7466f, 356.2394f, 98.16889f };
					break;
			}
			break;
		case joaat("PROVISION_HRLM_BRUSH_GOATHAIR"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1819.679f, -366.3559f, 166.325f };
					break;
				case 1:
					vVar0 = { -1352.955f, -2297.988f, 39.36f };
					break;
				case 2:
					vVar0 = { 2948.272f, 536.8262f, 49.64f };
					break;
				case 3:
					vVar0 = { -5624.502f, -2946.631f, 6.545f };
					break;
				case 4:
					vVar0 = { 1332.225f, -1375.457f, 79.685f };
					break;
				case 5:
					vVar0 = { 2222.584f, -769.3432f, 43.00125f };
					break;
			}
			break;
		case joaat("PROVISION_HRLM_BRUSH_HORSEHAIR"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -825.8105f, -1322.975f, 47.703f };
					break;
				case 1:
					vVar0 = { 2989.978f, 2194.683f, 166.21f };
					break;
				case 2:
					vVar0 = { 2659.991f, -963.4542f, 44.43f };
					break;
				case 3:
					vVar0 = { -3617.383f, -2620.49f, -14.34254f };
					break;
				case 4:
					vVar0 = { 1183.269f, -99.6868f, 94.54f };
					break;
				case 5:
					vVar0 = { 3029.329f, 1781.402f, 84.215f };
					break;
			}
			break;
		case joaat("PROVISION_HRLM_BRUSH_ROSEWOOD"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1119.399f, -1985.255f, 55.173f };
					break;
				case 1:
					vVar0 = { 1114.132f, 494.6769f, 97.36f };
					break;
				case 2:
					vVar0 = { 2947.771f, 1329.517f, 43.72f };
					break;
				case 3:
					vVar0 = { 1246.032f, -1319.193f, 76.11919f };
					break;
				case 4:
					vVar0 = { 1709.548f, -1006.039f, 42.95497f };
					break;
				case 5:
					vVar0 = { -1354.787f, 2444.092f, 308.264f };
					break;
			}
			break;
		case joaat("PROVISION_HRLM_BRUSH_ROSEWOOD_NG"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -323.1665f, 759.1418f, 117.515f };
					break;
				case 1:
					vVar0 = { 1772.645f, -1359.118f, 44.99425f };
					break;
				case 2:
					vVar0 = { 1331.819f, -1373.854f, 79.94992f };
					break;
				case 3:
					vVar0 = { 1984.691f, 1197.64f, 171.467f };
					break;
				case 4:
					vVar0 = { 2337.355f, -1199.357f, 44.59311f };
					break;
				case 5:
					vVar0 = { 1370.993f, -879.3163f, 69.373f };
					break;
			}
			break;
		case joaat("PROVISION_HRLM_COMB_BOXWOOD"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2834.479f, 1686.983f, 129.74f };
					break;
				case 1:
					vVar0 = { -326.9715f, 758.7587f, 121.685f };
					break;
				case 2:
					vVar0 = { -815.4717f, 355.9247f, 97.282f };
					break;
				case 3:
					vVar0 = { 2822.545f, -1229.885f, 46.63329f };
					break;
				case 4:
					vVar0 = { 901.0944f, 264.487f, 116.0603f };
					break;
				case 5:
					vVar0 = { -1812.807f, -368.4038f, 165.69f };
					break;
			}
			break;
		case joaat("PROVISION_HRLM_COMB_CHERRYWOOD"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2638.189f, -1220.527f, 59.64f };
					break;
				case 1:
					vVar0 = { 1019.273f, -1764.641f, 51.246f };
					break;
				case 2:
					vVar0 = { 774.061f, 844.8143f, 118.123f };
					break;
				case 3:
					vVar0 = { -325.2552f, 776.0793f, 121.4301f };
					break;
				case 4:
					vVar0 = { -4786.58f, -2729.231f, -14.37767f };
					break;
				case 5:
					vVar0 = { 2453.964f, -1290.005f, 45.63f };
					break;
			}
			break;
		case joaat("PROVISION_HRLM_COMB_IVORY"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -3697.792f, -2602.399f, -10.498f };
					break;
				case 1:
					vVar0 = { -861.1652f, -1281.893f, 43.37f };
					break;
				case 2:
					vVar0 = { 2310.05f, -327.5573f, 41.67405f };
					break;
				case 3:
					vVar0 = { -805.3663f, -1373.019f, 42.74774f };
					break;
				case 4:
					vVar0 = { 2557.495f, -919.4724f, 42.46076f };
					break;
				case 5:
					vVar0 = { 2945.906f, 1331.703f, 44.25066f };
					break;
			}
			break;
		case joaat("PROVISION_HRLM_COMB_TORTOISESHELL"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1373.292f, -878.3732f, 70.168f };
					break;
				case 1:
					vVar0 = { 2498.121f, -423.8156f, 44.15034f };
					break;
				case 2:
					vVar0 = { -5548.973f, -2399.283f, -8.260815f };
					break;
				case 3:
					vVar0 = { 2658.711f, -1296.561f, 50.89073f };
					break;
				case 4:
					vVar0 = { -1963.057f, 2156.889f, 327.6145f };
					break;
				case 5:
					vVar0 = { 517.873f, 566.1005f, 109.408f };
					break;
			}
			break;
		case joaat("PROVISION_HRLM_HAIRPIN_EBONY"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 411.5402f, 2245.408f, 251.6545f };
					break;
				case 1:
					vVar0 = { 2409.379f, -1094.746f, 46.877f };
					break;
				case 2:
					vVar0 = { 1461.757f, -1361.581f, 77.8037f };
					break;
				case 3:
					vVar0 = { -4787.916f, -2751.693f, -15.705f };
					break;
				case 4:
					vVar0 = { 2063.961f, -854.2643f, 43.15271f };
					break;
				case 5:
					vVar0 = { -315.609f, -108.42f, 48.217f };
					break;
			}
			break;
		case joaat("PROVISION_HRLM_HAIRPIN_IVORY"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1464.331f, 813.4755f, 100.369f };
					break;
				case 1:
					vVar0 = { 2777.36f, 535.0708f, 67.25923f };
					break;
				case 2:
					vVar0 = { 2474.075f, -1212.954f, 48.088f };
					break;
				case 3:
					vVar0 = { 2989.488f, 2184.499f, 166.8642f };
					break;
				case 4:
					vVar0 = { 1927.38f, 1964.747f, 262.468f };
					break;
				case 5:
					vVar0 = { 2638f, -1204.05f, 53.20464f };
					break;
			}
			break;
		case joaat("PROVISION_HRLM_HAIRPIN_JADE"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2130.675f, 150.517f, 74.84375f };
					break;
				case 1:
					vVar0 = { -4583.002f, -2906.29f, -18.69263f };
					break;
				case 2:
					vVar0 = { -936.1354f, -1283.669f, 50.2256f };
					break;
				case 3:
					vVar0 = { 2588.217f, 835.753f, 82.329f };
					break;
				case 4:
					vVar0 = { 1963.121f, -1217.119f, 41.096f };
					break;
				case 5:
					vVar0 = { 1004.484f, -1778.697f, 52.49139f };
					break;
			}
			break;
		case joaat("PROVISION_HRLM_HAIRPIN_METAL"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -4849.342f, -2670.424f, -13.5677f };
					break;
				case 1:
					vVar0 = { 2882.798f, -241.9108f, 41.67151f };
					break;
				case 2:
					vVar0 = { 2535.601f, 2287.424f, 175.5534f };
					break;
				case 3:
					vVar0 = { 2952.059f, 578.021f, 43.567f };
					break;
				case 4:
					vVar0 = { -5577.372f, -2577.874f, -9.463f };
					break;
				case 5:
					vVar0 = { -1500.475f, -784.755f, 102.998f };
					break;
			}
			break;
		case joaat("PROVISION_HRLM_HAIRPIN_WOODEN"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -2530.832f, 1161.717f, 223.6726f };
					break;
				case 1:
					vVar0 = { -608.9261f, 515.7279f, 95.39239f };
					break;
				case 2:
					vVar0 = { -2035.53f, -1890.794f, 109.1178f };
					break;
				case 3:
					vVar0 = { 2330.359f, -1358.269f, 44.966f };
					break;
				case 4:
					vVar0 = { 1374.128f, -1411.036f, 78.239f };
					break;
				case 5:
					vVar0 = { 3015.904f, 1761.071f, 82.617f };
					break;
			}
			break;
	}
	return vVar0;
}

Vector3 func_407(int iParam0, int iParam1)
{
	vector3 vVar0;

	switch (iParam1)
	{
		case joaat("CONSUMABLE_CARIB_RUM"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -4185.033f, -2504.018f, 2.03f };
					break;
				case 1:
					vVar0 = { -156.9135f, 1489.64f, 115.954f };
					break;
				case 2:
					vVar0 = { -1350.047f, 2435.303f, 307.533f };
					break;
				case 3:
					vVar0 = { 3005.017f, 478.9952f, 44.30219f };
					break;
				case 4:
					vVar0 = { -852.3582f, -1223.754f, 43.45f };
					break;
				case 5:
					vVar0 = { 2704.826f, 436.4368f, 87.14f };
					break;
			}
			break;
		case joaat("CONSUMABLE_COGNAC"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2005.196f, -1606.981f, 40.81687f };
					break;
				case 1:
					vVar0 = { -342.7149f, -154.2104f, 50.08184f };
					break;
				case 2:
					vVar0 = { 2784.679f, 531.0778f, 70.39831f };
					break;
				case 3:
					vVar0 = { -1892.469f, 1334.107f, 203.1187f };
					break;
				case 4:
					vVar0 = { -4368.796f, -2414.692f, 19.495f };
					break;
				case 5:
					vVar0 = { 1622.351f, -362.5829f, 76.39752f };
					break;
			}
			break;
		case joaat("CONSUMABLE_CYPRUS_BRANDY"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2701.95f, -1060.224f, 47.778f };
					break;
				case 1:
					vVar0 = { -1162.748f, -1941.539f, 41.755f };
					break;
				case 2:
					vVar0 = { -3830.432f, -3176.455f, -12.915f };
					break;
				case 3:
					vVar0 = { -5393.608f, -3665.479f, -24.45832f };
					break;
				case 4:
					vVar0 = { 2522.567f, 2300.74f, 192.7359f };
					break;
				case 5:
					vVar0 = { -2368.588f, 473.4166f, 132.0141f };
					break;
			}
			break;
		case joaat("CONSUMABLE_IRISH_WHISKEY"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -2459.279f, 843.0058f, 146.1292f };
					break;
				case 1:
					vVar0 = { 2368.739f, -859.4152f, 42.82577f };
					break;
				case 2:
					vVar0 = { 2689.612f, -1170.965f, 55.565f };
					break;
				case 3:
					vVar0 = { 2153.209f, -1647.306f, 40.60719f };
					break;
				case 4:
					vVar0 = { 609.4552f, -142.6026f, 144.8148f };
					break;
				case 5:
					vVar0 = { -1493.7f, 1246.622f, 317.667f };
					break;
			}
			break;
		case joaat("CONSUMABLE_LONDRY_GIN"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 401.546f, 888.0118f, 153.86f };
					break;
				case 1:
					vVar0 = { 3036.985f, 432.5538f, 60.047f };
					break;
				case 2:
					vVar0 = { 1004.679f, -1765.193f, 47.386f };
					break;
				case 3:
					vVar0 = { -3548.462f, -3007.078f, 11.10074f };
					break;
				case 4:
					vVar0 = { -2238.278f, 734.3409f, 135.314f };
					break;
				case 5:
					vVar0 = { 2197.229f, -1504.087f, 45.872f };
					break;
			}
			break;
		case joaat("CONSUMABLE_OLDTOM_GIN"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1877.212f, -739.4555f, 42.63802f };
					break;
				case 1:
					vVar0 = { 2237.905f, -145.7879f, 46.67f };
					break;
				case 2:
					vVar0 = { -2582.484f, -1381.714f, 147.0984f };
					break;
				case 3:
					vVar0 = { -720.3767f, 925.5535f, 116.076f };
					break;
				case 4:
					vVar0 = { -5962.709f, -3241.012f, -21.635f };
					break;
				case 5:
					vVar0 = { 2904.69f, 1377.523f, 53.61996f };
					break;
			}
			break;
		case joaat("CONSUMABLE_PLYMOUTH_GIN"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2639.127f, -0.559658f, 51.19f };
					break;
				case 1:
					vVar0 = { 1938.338f, 1948.734f, 265.1676f };
					break;
				case 2:
					vVar0 = { -2844.929f, 142.047f, 183.665f };
					break;
				case 3:
					vVar0 = { -1807.661f, -405.8664f, 152.926f };
					break;
				case 4:
					vVar0 = { 2827.936f, 276.3889f, 47.178f };
					break;
				case 5:
					vVar0 = { -239.8812f, 771.0339f, 117.5361f };
					break;
			}
			break;
		case joaat("CONSUMABLE_SCOTCH_WHISKEY"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 402.3609f, -1257.529f, 40.7177f };
					break;
				case 1:
					vVar0 = { -6049.142f, -3254.608f, -14.27233f };
					break;
				case 2:
					vVar0 = { 1706.455f, -1003.528f, 43.2974f };
					break;
				case 3:
					vVar0 = { -5198.34f, -2093.827f, 12.318f };
					break;
				case 4:
					vVar0 = { 756.4769f, -976.1186f, 48.7024f };
					break;
				case 5:
					vVar0 = { 2872.421f, -258.6376f, 41.34779f };
					break;
			}
			break;
		case joaat("CONSUMABLE_TENN_WHISKEY"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1982.173f, -1668.795f, 117.2746f };
					break;
				case 1:
					vVar0 = { 1320.882f, -2283.563f, 49.64003f };
					break;
				case 2:
					vVar0 = { 223.8315f, 985.9778f, 190.6785f };
					break;
				case 3:
					vVar0 = { 1450.358f, 369.3219f, 89.52037f };
					break;
				case 4:
					vVar0 = { 2329.757f, -1514.801f, 42.058f };
					break;
				case 5:
					vVar0 = { -3599.471f, -2645.779f, -12.37373f };
					break;
			}
			break;
	}
	return vVar0;
}

Vector3 func_408(int iParam0, int iParam1)
{
	vector3 vVar0;

	switch (iParam1)
	{
		case joaat("DOCUMENT_CARD_ACE_CUPS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -5411.058f, -2922.478f, 1.633f };
					break;
				case 1:
					vVar0 = { 2988.672f, 2185.661f, 166.535f };
					break;
				case 2:
					vVar0 = { -1333.433f, 2397.419f, 307.076f };
					break;
				case 3:
					vVar0 = { -6010.498f, -3144.973f, 5.219f };
					break;
				case 4:
					vVar0 = { -823.4883f, -1297.783f, 53.73291f };
					break;
				case 5:
					vVar0 = { 2401.79f, -1550.644f, 42.82064f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_KING_CUPS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2139.922f, -1284.657f, 49.816f };
					break;
				case 1:
					vVar0 = { 828.2776f, 1923.064f, 259.505f };
					break;
				case 2:
					vVar0 = { 1434.244f, -1363.573f, 84.95869f };
					break;
				case 3:
					vVar0 = { 1319.78f, -2287.278f, 50.32104f };
					break;
				case 4:
					vVar0 = { -626.771f, -74.001f, 83.297f };
					break;
				case 5:
					vVar0 = { 2991.004f, 2191.702f, 166.5247f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_QUEEN_CUPS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1825.769f, -1202.711f, 41.96914f };
					break;
				case 1:
					vVar0 = { -5982.722f, -3165.576f, -26.807f };
					break;
				case 2:
					vVar0 = { 1467.309f, 810.6748f, 100.721f };
					break;
				case 3:
					vVar0 = { 1373.336f, 357.3541f, 87.525f };
					break;
				case 4:
					vVar0 = { 2827.736f, 279.6334f, 50.85627f };
					break;
				case 5:
					vVar0 = { 1780.932f, -472.4116f, 45.54533f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_KNIGHT_CUPS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2139.922f, -1284.657f, 49.816f };
					break;
				case 1:
					vVar0 = { 2569.923f, -772.3018f, 42.324f };
					break;
				case 2:
					vVar0 = { -1384.26f, 1154.303f, 224.835f };
					break;
				case 3:
					vVar0 = { 2852.355f, -1148.669f, 46.25088f };
					break;
				case 4:
					vVar0 = { -5555.605f, -2400.442f, -8.176f };
					break;
				case 5:
					vVar0 = { -401.7801f, 1734.134f, 218.6434f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_PAGE_CUPS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2490.364f, -437.7844f, 41.405f };
					break;
				case 1:
					vVar0 = { -1992.476f, -1605.796f, 117.8166f };
					break;
				case 2:
					vVar0 = { 1313.643f, -2280.667f, 50.472f };
					break;
				case 3:
					vVar0 = { 775.4293f, 844.6693f, 118.956f };
					break;
				case 4:
					vVar0 = { 1620.895f, -360.2322f, 75.36804f };
					break;
				case 5:
					vVar0 = { 2239.058f, -147.8358f, 46.73964f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_TEN_CUPS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -3563.438f, -3025.844f, 11.424f };
					break;
				case 1:
					vVar0 = { 766.2133f, 880.913f, 120.9506f };
					break;
				case 2:
					vVar0 = { 1296.224f, -1150.173f, 81.165f };
					break;
				case 3:
					vVar0 = { -2493.048f, -2432.054f, 60.05442f };
					break;
				case 4:
					vVar0 = { 1796.942f, -100.2141f, 55.48214f };
					break;
				case 5:
					vVar0 = { 2401.277f, -1065.757f, 51.86878f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_NINE_CUPS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -2577.274f, -1383.74f, 148.261f };
					break;
				case 1:
					vVar0 = { -1409.911f, -2672.891f, 42.227f };
					break;
				case 2:
					vVar0 = { 2812.643f, -925.7277f, 44.12f };
					break;
				case 3:
					vVar0 = { 1115.424f, 507.2167f, 95.316f };
					break;
				case 4:
					vVar0 = { 2894.978f, 628.2769f, 57.15911f };
					break;
				case 5:
					vVar0 = { 1139.306f, -979.7267f, 69.35948f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_EIGHT_CUPS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -3666.746f, -2569.831f, -13.43366f };
					break;
				case 1:
					vVar0 = { 2501.691f, 818.5446f, 71.632f };
					break;
				case 2:
					vVar0 = { -575.309f, 2695.187f, 320.2f };
					break;
				case 3:
					vVar0 = { 2117.172f, -597.3241f, 42.401f };
					break;
				case 4:
					vVar0 = { -1395.294f, -2346.622f, 44.987f };
					break;
				case 5:
					vVar0 = { 3034.11f, 432.3413f, 51.154f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_SEVEN_CUPS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 341.8932f, -669.0356f, 42.25286f };
					break;
				case 1:
					vVar0 = { 2257.845f, -784.6151f, 44.225f };
					break;
				case 2:
					vVar0 = { 1807.804f, -48.12351f, 58.367f };
					break;
				case 3:
					vVar0 = { -821.4991f, 354.529f, 98.568f };
					break;
				case 4:
					vVar0 = { -1981.191f, -1617.101f, 118.1249f };
					break;
				case 5:
					vVar0 = { -4839.736f, -2661.281f, -13.171f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_SIX_CUPS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2856.656f, 1339.221f, 64.69f };
					break;
				case 1:
					vVar0 = { -5591.378f, -3323.73f, -22.117f };
					break;
				case 2:
					vVar0 = { -1622.703f, -877.8527f, 89.788f };
					break;
				case 3:
					vVar0 = { 1376.266f, -1315.819f, 77.12f };
					break;
				case 4:
					vVar0 = { 1748.228f, -1320.188f, 44.236f };
					break;
				case 5:
					vVar0 = { 590.6957f, 643.2216f, 131.0161f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_FIVE_CUPS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1897.236f, -736.8479f, 42.306f };
					break;
				case 1:
					vVar0 = { -791.3267f, -1356.294f, 51.668f };
					break;
				case 2:
					vVar0 = { -1094.955f, -570.4799f, 82.1826f };
					break;
				case 3:
					vVar0 = { 2739.444f, 1351.561f, 67.87411f };
					break;
				case 4:
					vVar0 = { 2815.994f, -1409.566f, 44.84941f };
					break;
				case 5:
					vVar0 = { 900.5817f, -1793.154f, 42.88783f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_FOUR_CUPS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1456.267f, -1363.698f, 78.26161f };
					break;
				case 1:
					vVar0 = { -3439.563f, -2719.311f, -3.935848f };
					break;
				case 2:
					vVar0 = { 2975.23f, 573.8652f, 45.12079f };
					break;
				case 3:
					vVar0 = { 2745.968f, -1182.872f, 48.988f };
					break;
				case 4:
					vVar0 = { -276.0031f, 813.6921f, 122.5749f };
					break;
				case 5:
					vVar0 = { 1299.625f, -1303.212f, 81.70584f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_THREE_CUPS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -785.7925f, 351.1424f, 96.443f };
					break;
				case 1:
					vVar0 = { -1310.024f, 392.2272f, 94.842f };
					break;
				case 2:
					vVar0 = { -4766.876f, -2707.932f, -14.12604f };
					break;
				case 3:
					vVar0 = { -1769.97f, -429.6013f, 154.674f };
					break;
				case 4:
					vVar0 = { 1046.408f, -1845.566f, 48.232f };
					break;
				case 5:
					vVar0 = { 2550f, 812.0331f, 75.636f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_TWO_CUPS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 506.6608f, 1766.462f, 182.225f };
					break;
				case 1:
					vVar0 = { -2370.792f, 470.3645f, 131.718f };
					break;
				case 2:
					vVar0 = { 980.776f, -2016.561f, 46.486f };
					break;
				case 3:
					vVar0 = { -172.0568f, 631.8036f, 113.4876f };
					break;
				case 4:
					vVar0 = { -5422.808f, -2971.498f, 12.298f };
					break;
				case 5:
					vVar0 = { 2977.604f, 1316.154f, 43.828f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_ACE_PENTACLES"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1522.962f, 450.2165f, 90.152f };
					break;
				case 1:
					vVar0 = { 576.9316f, 1675.01f, 187.7765f };
					break;
				case 2:
					vVar0 = { -5856.934f, -3185.338f, -13.16593f };
					break;
				case 3:
					vVar0 = { -977.3434f, -1200.263f, 57.98044f };
					break;
				case 4:
					vVar0 = { 2506.52f, 739.9262f, 74.187f };
					break;
				case 5:
					vVar0 = { 1752.954f, -1365.595f, 44.63037f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_KING_PENTACLES"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -606.1691f, -54.50835f, 84.257f };
					break;
				case 1:
					vVar0 = { 2745.335f, 1410.862f, 98.828f };
					break;
				case 2:
					vVar0 = { 1774.655f, -470.5374f, 45.029f };
					break;
				case 3:
					vVar0 = { -1416.201f, 1130.668f, 225.315f };
					break;
				case 4:
					vVar0 = { 2987.138f, 2190.272f, 166.2066f };
					break;
				case 5:
					vVar0 = { 199.2651f, 991.0287f, 189.9391f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_QUEEN_PENTACLES"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 3027.182f, 1776.44f, 83.926f };
					break;
				case 1:
					vVar0 = { -5512.32f, -2880.17f, -3.84f };
					break;
				case 2:
					vVar0 = { -1810.387f, -353.6751f, 160.907f };
					break;
				case 3:
					vVar0 = { 554.2538f, 568.2386f, 116.645f };
					break;
				case 4:
					vVar0 = { -5948.872f, -3267.162f, -21.71592f };
					break;
				case 5:
					vVar0 = { 2858.646f, -1272.893f, 49.91f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_KNIGHT_PENTACLES"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2291.082f, -1539.305f, 41.422f };
					break;
				case 1:
					vVar0 = { 1932.541f, 1947.621f, 262.954f };
					break;
				case 2:
					vVar0 = { 2542.088f, 699.2532f, 80.16f };
					break;
				case 3:
					vVar0 = { 1903.682f, -1821.06f, 41.97f };
					break;
				case 4:
					vVar0 = { -2398.913f, -2469.837f, 59.93f };
					break;
				case 5:
					vVar0 = { -2179.922f, 719.9606f, 122.396f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_PAGE_PENTACLES"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -365.4468f, -155.0315f, 50.555f };
					break;
				case 1:
					vVar0 = { 1781.656f, -400.4307f, 47.24f };
					break;
				case 2:
					vVar0 = { 2387.917f, 1690.443f, 95.509f };
					break;
				case 3:
					vVar0 = { -1814.892f, 658.8661f, 131.8925f };
					break;
				case 4:
					vVar0 = { 2005.39f, -761.9121f, 41.7f };
					break;
				case 5:
					vVar0 = { -16.03913f, 1232.503f, 173.3871f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_TEN_PENTACLES"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -3870.449f, -3169.91f, -13.01f };
					break;
				case 1:
					vVar0 = { 1372.678f, -874.9531f, 70.617f };
					break;
				case 2:
					vVar0 = { 2466.088f, 277.0007f, 78.516f };
					break;
				case 3:
					vVar0 = { 1117.4f, -1986.08f, 54.38f };
					break;
				case 4:
					vVar0 = { 2818.652f, -1107.754f, 45.89925f };
					break;
				case 5:
					vVar0 = { -248.1706f, 957.9525f, 138.105f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_NINE_PENTACLES"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1875.848f, 1330.423f, 202.013f };
					break;
				case 1:
					vVar0 = { 2902.685f, 1342.593f, 47.95f };
					break;
				case 2:
					vVar0 = { 2230.71f, -767.3853f, 43.725f };
					break;
				case 3:
					vVar0 = { 1357.015f, -1248.945f, 79.98093f };
					break;
				case 4:
					vVar0 = { -1841.589f, -421.5529f, 160.5227f };
					break;
				case 5:
					vVar0 = { 1424.431f, 382.3747f, 89.399f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_EIGHT_PENTACLES"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2495.921f, -935.5837f, 41.83111f };
					break;
				case 1:
					vVar0 = { -1360.017f, 2427.802f, 307.729f };
					break;
				case 2:
					vVar0 = { 1122.943f, 490.8148f, 97.197f };
					break;
				case 3:
					vVar0 = { 2930.417f, 1388.615f, 56.3945f };
					break;
				case 4:
					vVar0 = { 2467.235f, -1381.177f, 44.75f };
					break;
				case 5:
					vVar0 = { -905.5945f, -1367.161f, 45.22607f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_SEVEN_PENTACLES"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -768.07f, -1274.364f, 44.197f };
					break;
				case 1:
					vVar0 = { 1833.804f, -1423.065f, 43.601f };
					break;
				case 2:
					vVar0 = { -1424.302f, -2686.436f, 40.842f };
					break;
				case 3:
					vVar0 = { 2541.009f, -1456.998f, 46.277f };
					break;
				case 4:
					vVar0 = { -253.5445f, 638.9977f, 117.744f };
					break;
				case 5:
					vVar0 = { -5515.065f, -2919.768f, 1.611f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_SIX_PENTACLES"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -4684.597f, -3735.584f, 13.072f };
					break;
				case 1:
					vVar0 = { 1409.751f, -1287.476f, 78.037f };
					break;
				case 2:
					vVar0 = { 497.7721f, 673.6046f, 120.834f };
					break;
				case 3:
					vVar0 = { 2234.996f, -142.1575f, 47.40239f };
					break;
				case 4:
					vVar0 = { 1130.36f, -989.1239f, 68.874f };
					break;
				case 5:
					vVar0 = { 789.1991f, 839.0553f, 117.637f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_FIVE_PENTACLES"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1238.492f, -442.7407f, 90.514f };
					break;
				case 1:
					vVar0 = { 2090.363f, -1820.301f, 42.976f };
					break;
				case 2:
					vVar0 = { -395.2218f, 1724.644f, 216.2263f };
					break;
				case 3:
					vVar0 = { 1625.42f, -363.5916f, 75.70547f };
					break;
				case 4:
					vVar0 = { 1178.113f, 433.4455f, 92.715f };
					break;
				case 5:
					vVar0 = { 2824.817f, 280.6819f, 51.125f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_FOUR_PENTACLES"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1180.219f, -102.3198f, 94.513f };
					break;
				case 1:
					vVar0 = { 2753.752f, -1285.876f, 47.905f };
					break;
				case 2:
					vVar0 = { -2094.373f, -1900.385f, 114.15f };
					break;
				case 3:
					vVar0 = { -420.2359f, 1735.101f, 216.5775f };
					break;
				case 4:
					vVar0 = { 2997.642f, 485.2014f, 42.016f };
					break;
				case 5:
					vVar0 = { 894.0088f, 266.3849f, 115.945f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_THREE_PENTACLES"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2941.327f, 497.7603f, 45.557f };
					break;
				case 1:
					vVar0 = { 1456.948f, 803.3541f, 99.955f };
					break;
				case 2:
					vVar0 = { -1757.492f, -361.9659f, 170.035f };
					break;
				case 3:
					vVar0 = { 2410.756f, -1076.878f, 47.48f };
					break;
				case 4:
					vVar0 = { -856.5822f, 333.9793f, 98.936f };
					break;
				case 5:
					vVar0 = { 1338.637f, -2293.063f, 49.743f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_TWO_PENTACLES"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -2261.507f, 379.8123f, 176.935f };
					break;
				case 1:
					vVar0 = { 876.3088f, -1930.418f, 46.505f };
					break;
				case 2:
					vVar0 = { -3590.551f, -2610.387f, -15.073f };
					break;
				case 3:
					vVar0 = { -1976.613f, -1651.554f, 116.9042f };
					break;
				case 4:
					vVar0 = { 1310.683f, -1354.187f, 77.755f };
					break;
				case 5:
					vVar0 = { -1424.709f, -2193.708f, 42.745f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_ACE_SWORDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -414.2433f, 1748.174f, 219.237f };
					break;
				case 1:
					vVar0 = { 1903.133f, -1861.375f, 47.154f };
					break;
				case 2:
					vVar0 = { -322.3861f, -330.0626f, 101.448f };
					break;
				case 3:
					vVar0 = { 2930.624f, 511.4331f, 45.106f };
					break;
				case 4:
					vVar0 = { -59.93358f, 1241.177f, 170.5883f };
					break;
				case 5:
					vVar0 = { -1814.496f, -355.9884f, 161.8523f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_KING_SWORDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2634.352f, 1700.587f, 115.705f };
					break;
				case 1:
					vVar0 = { -5547.786f, -2398.16f, -9.09f };
					break;
				case 2:
					vVar0 = { 2585.521f, -1011.535f, 44.741f };
					break;
				case 3:
					vVar0 = { 1705.205f, -1005.103f, 43.291f };
					break;
				case 4:
					vVar0 = { 727.2112f, -473.8823f, 77.13835f };
					break;
				case 5:
					vVar0 = { 2312.604f, 1454.129f, 83.25579f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_QUEEN_SWORDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1422.935f, -2339.014f, 45.006f };
					break;
				case 1:
					vVar0 = { 1869.853f, 584.2012f, 113.291f };
					break;
				case 2:
					vVar0 = { 2452.558f, 2096.085f, 173.752f };
					break;
				case 3:
					vVar0 = { -1164.138f, -1944.113f, 42.134f };
					break;
				case 4:
					vVar0 = { 2366.678f, -1468.138f, 45.902f };
					break;
				case 5:
					vVar0 = { -844.3076f, -1183.771f, 43.381f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_KNIGHT_SWORDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1333.293f, -1376.881f, 84.072f };
					break;
				case 1:
					vVar0 = { 2951.417f, -1237.773f, 41.29379f };
					break;
				case 2:
					vVar0 = { -5529.383f, -2950.009f, 3.285f };
					break;
				case 3:
					vVar0 = { 2090.067f, -1816.521f, 42.725f };
					break;
				case 4:
					vVar0 = { -1090.415f, -573.9154f, 85.344f };
					break;
				case 5:
					vVar0 = { -1347.56f, 2403.389f, 306.888f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_PAGE_SWORDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1899.332f, 295.5579f, 76.264f };
					break;
				case 1:
					vVar0 = { 600.3424f, 568.1143f, 111.213f };
					break;
				case 2:
					vVar0 = { -672.7397f, 1033.106f, 134.759f };
					break;
				case 3:
					vVar0 = { 3034.291f, 1779.221f, 83.32f };
					break;
				case 4:
					vVar0 = { -1880.284f, 1318.582f, 201.2222f };
					break;
				case 5:
					vVar0 = { 458.9841f, 671.9208f, 116.7326f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_TEN_SWORDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1988.772f, 1197.333f, 170.926f };
					break;
				case 1:
					vVar0 = { 2446.509f, 290.5638f, 67.239f };
					break;
				case 2:
					vVar0 = { -154.1317f, 1490.631f, 116.839f };
					break;
				case 3:
					vVar0 = { -1576.273f, -923.0228f, 85.506f };
					break;
				case 4:
					vVar0 = { -1318.793f, 2462.397f, 309.7299f };
					break;
				case 5:
					vVar0 = { 1457.72f, 814.1915f, 101.44f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_NINE_SWORDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2601.089f, -1472.551f, 51.98522f };
					break;
				case 1:
					vVar0 = { 2881.864f, 1381.877f, 83.02f };
					break;
				case 2:
					vVar0 = { -4372.16f, -2412.86f, 19.484f };
					break;
				case 3:
					vVar0 = { 1935.854f, 1942.919f, 273.093f };
					break;
				case 4:
					vVar0 = { 2440.585f, 305.988f, 74.64512f };
					break;
				case 5:
					vVar0 = { 2561.756f, -1086.731f, 56.53377f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_EIGHT_SWORDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2570.364f, 784.302f, 81.694f };
					break;
				case 1:
					vVar0 = { 1052.559f, -1119.853f, 67.834f };
					break;
				case 2:
					vVar0 = { 2468.019f, -1172.61f, 48.823f };
					break;
				case 3:
					vVar0 = { 2276.614f, 1454.194f, 83.76834f };
					break;
				case 4:
					vVar0 = { 193.0581f, 991.5071f, 189.7564f };
					break;
				case 5:
					vVar0 = { -1201.22f, -1937.747f, 43.34136f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_SEVEN_SWORDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 487.1789f, 563.5685f, 111.264f };
					break;
				case 1:
					vVar0 = { -1858.694f, -1728.357f, 108.979f };
					break;
				case 2:
					vVar0 = { -1200.4f, -1951.404f, 43.37f };
					break;
				case 3:
					vVar0 = { 2824.703f, 276.2172f, 48.585f };
					break;
				case 4:
					vVar0 = { -1430.835f, 1203.193f, 225.4744f };
					break;
				case 5:
					vVar0 = { 2834.369f, -1052.816f, 43.75f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_SIX_SWORDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2150.482f, -641.6266f, 42.258f };
					break;
				case 1:
					vVar0 = { 1452.888f, 288.4397f, 103.551f };
					break;
				case 2:
					vVar0 = { -36.04559f, 1216.432f, 172.529f };
					break;
				case 3:
					vVar0 = { 1708.568f, -407.2771f, 49.432f };
					break;
				case 4:
					vVar0 = { -2182.214f, 721.0881f, 125.654f };
					break;
				case 5:
					vVar0 = { 1898.859f, -1872.568f, 46.79531f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_FIVE_SWORDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -5852.164f, -3740.74f, -25.688f };
					break;
				case 1:
					vVar0 = { -1816.15f, -435.9532f, 159.483f };
					break;
				case 2:
					vVar0 = { 877.7709f, -1819.264f, 43.837f };
					break;
				case 3:
					vVar0 = { 903.1764f, 261.0582f, 115.805f };
					break;
				case 4:
					vVar0 = { 3025.154f, 1442.077f, 47f };
					break;
				case 5:
					vVar0 = { -2342.035f, -2380.208f, 62.082f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_FOUR_SWORDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1477.258f, -769.9705f, 104.16f };
					break;
				case 1:
					vVar0 = { 2971.657f, 494.3364f, 48.924f };
					break;
				case 2:
					vVar0 = { 1885.005f, -1343.515f, 47.22f };
					break;
				case 3:
					vVar0 = { -1435.478f, -2265.299f, 43.42018f };
					break;
				case 4:
					vVar0 = { 1325.79f, -2287.317f, 49.11174f };
					break;
				case 5:
					vVar0 = { 1115.514f, 485.5861f, 96.73001f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_THREE_SWORDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -2497.293f, -2401.793f, 72.166f };
					break;
				case 1:
					vVar0 = { -344.1977f, 694.8963f, 116.853f };
					break;
				case 2:
					vVar0 = { -1728.967f, -85.84953f, 181.594f };
					break;
				case 3:
					vVar0 = { 2483.545f, 775.2837f, 67.025f };
					break;
				case 4:
					vVar0 = { 1374.706f, -1217.925f, 84.124f };
					break;
				case 5:
					vVar0 = { -443.3312f, 655.369f, 111.768f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_TWO_SWORDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -4361.989f, -3076.853f, -9.959f };
					break;
				case 1:
					vVar0 = { 2284.664f, -763.9371f, 41.677f };
					break;
				case 2:
					vVar0 = { -876.7333f, -1418.467f, 44.945f };
					break;
				case 3:
					vVar0 = { 2777.354f, -1044.44f, 46.328f };
					break;
				case 4:
					vVar0 = { -242.144f, 768.4951f, 117.886f };
					break;
				case 5:
					vVar0 = { -5990.474f, -3212.507f, -14.609f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_ACE_WANDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2507.901f, 2288.05f, 177.1559f };
					break;
				case 1:
					vVar0 = { -531.5649f, 2671.969f, 319.243f };
					break;
				case 2:
					vVar0 = { 1022.043f, -1769.855f, 48.084f };
					break;
				case 3:
					vVar0 = { -2217.574f, 726.6389f, 127.5132f };
					break;
				case 4:
					vVar0 = { 1751.351f, -411.8749f, 48.358f };
					break;
				case 5:
					vVar0 = { -1454.006f, -2295.404f, 43.308f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_KING_WANDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1831.834f, -608.7134f, 154.372f };
					break;
				case 1:
					vVar0 = { -1357.474f, -2290.772f, 45.951f };
					break;
				case 2:
					vVar0 = { 351.2373f, -17.20502f, 107.017f };
					break;
				case 3:
					vVar0 = { -5463.614f, -2908.602f, 0.658f };
					break;
				case 4:
					vVar0 = { -398.3195f, 1727.015f, 215.874f };
					break;
				case 5:
					vVar0 = { 2969.867f, 598.343f, 44.61f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_QUEEN_WANDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2784.246f, 533.7446f, 71.129f };
					break;
				case 1:
					vVar0 = { -3844.834f, -3009.312f, -7.398f };
					break;
				case 2:
					vVar0 = { 2092.187f, -610.6999f, 41.675f };
					break;
				case 3:
					vVar0 = { -1638.736f, -1362.702f, 84.28762f };
					break;
				case 4:
					vVar0 = { -5215.863f, -3505.096f, -21.82158f };
					break;
				case 5:
					vVar0 = { 534.3098f, 1745.734f, 183.704f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_KNIGHT_WANDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2685.521f, -1102.14f, 49.034f };
					break;
				case 1:
					vVar0 = { 1008.127f, -1805.869f, 46.506f };
					break;
				case 2:
					vVar0 = { -1021.207f, 1695.284f, 244.3578f };
					break;
				case 3:
					vVar0 = { -1820.981f, -372.3584f, 163.0933f };
					break;
				case 4:
					vVar0 = { 540.5381f, 595.9525f, 127.4449f };
					break;
				case 5:
					vVar0 = { 2343.544f, -1165.905f, 46.764f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_PAGE_WANDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -3959.438f, -2128.002f, -3.79f };
					break;
				case 1:
					vVar0 = { 2335.602f, 1403.099f, 103.33f };
					break;
				case 2:
					vVar0 = { 1186.981f, -103.3362f, 94.52f };
					break;
				case 3:
					vVar0 = { 2693.608f, -1523.545f, 46.1426f };
					break;
				case 4:
					vVar0 = { 758.8849f, 839.5547f, 120.5366f };
					break;
				case 5:
					vVar0 = { -1976.292f, -1668.282f, 117.1813f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_TEN_WANDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1585.455f, -732.2845f, 42.3866f };
					break;
				case 1:
					vVar0 = { 2482.621f, -1303.083f, 48.68f };
					break;
				case 2:
					vVar0 = { 2017.862f, 603.5269f, 160.514f };
					break;
				case 3:
					vVar0 = { 1270.417f, -403.1694f, 97.04227f };
					break;
				case 4:
					vVar0 = { 2883.358f, -253.6491f, 42.831f };
					break;
				case 5:
					vVar0 = { 2524.72f, 2286.114f, 177.152f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_NINE_WANDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2724.203f, 1403.457f, 68.73445f };
					break;
				case 1:
					vVar0 = { -2312.505f, -483.5394f, 144.9906f };
					break;
				case 2:
					vVar0 = { 728.6371f, -466.6955f, 84f };
					break;
				case 3:
					vVar0 = { -5201.147f, -3438.431f, -10.41009f };
					break;
				case 4:
					vVar0 = { 2497.068f, -421.6676f, 44.184f };
					break;
				case 5:
					vVar0 = { 1585.105f, -1845.161f, 58.605f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_EIGHT_WANDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -5420.16f, -3657.385f, -18.903f };
					break;
				case 1:
					vVar0 = { 2071.159f, -855.5762f, 43.65374f };
					break;
				case 2:
					vVar0 = { 2949.082f, 516.9532f, 46.254f };
					break;
				case 3:
					vVar0 = { 577.4657f, 1687.921f, 187.74f };
					break;
				case 4:
					vVar0 = { 1779.248f, -809.139f, 42.316f };
					break;
				case 5:
					vVar0 = { -1663.501f, -1378.33f, 83.807f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_SEVEN_WANDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -285.0148f, 872.1119f, 120.924f };
					break;
				case 1:
					vVar0 = { 753.2751f, -854.7612f, 55.11713f };
					break;
				case 2:
					vVar0 = { 2195.288f, -554.449f, 41.48f };
					break;
				case 3:
					vVar0 = { -1317.953f, 2436.072f, 309.366f };
					break;
				case 4:
					vVar0 = { 3027.961f, 1775.08f, 83.617f };
					break;
				case 5:
					vVar0 = { 1981.649f, 1193.035f, 171.202f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_SIX_WANDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1981.887f, -1670.349f, 119.02f };
					break;
				case 1:
					vVar0 = { 2797.684f, -1160.63f, 47.972f };
					break;
				case 2:
					vVar0 = { -323.7289f, -362.4248f, 88.009f };
					break;
				case 3:
					vVar0 = { -324.8878f, 763.9997f, 117.938f };
					break;
				case 4:
					vVar0 = { 2399.137f, -998.0281f, 44.005f };
					break;
				case 5:
					vVar0 = { 2850.777f, 1384.421f, 68.60077f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_FIVE_WANDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 225.7984f, 988.1877f, 190.999f };
					break;
				case 1:
					vVar0 = { 1321.554f, -1137.092f, 81.967f };
					break;
				case 2:
					vVar0 = { -3321.853f, -2872.174f, -6.147f };
					break;
				case 3:
					vVar0 = { -25.9034f, 1222.207f, 172.2385f };
					break;
				case 4:
					vVar0 = { -1150.443f, -1918.312f, 42.32f };
					break;
				case 5:
					vVar0 = { -1895.564f, 1330.18f, 200.1581f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_FOUR_WANDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2255.278f, -753.965f, 42.578f };
					break;
				case 1:
					vVar0 = { 2540.273f, 697.4079f, 81.22f };
					break;
				case 2:
					vVar0 = { 1445.074f, 374.511f, 89.922f };
					break;
				case 3:
					vVar0 = { -756.7344f, -1351.986f, 43.175f };
					break;
				case 4:
					vVar0 = { 2867.417f, 1449.662f, 69.19386f };
					break;
				case 5:
					vVar0 = { 1415.163f, -1399.66f, 81.95272f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_THREE_WANDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -225.4506f, 834.5778f, 124.406f };
					break;
				case 1:
					vVar0 = { 3033.43f, 1367.321f, 42.87f };
					break;
				case 2:
					vVar0 = { -2169.378f, -248.6758f, 192.337f };
					break;
				case 3:
					vVar0 = { -2321.166f, -2390.095f, 63.211f };
					break;
				case 4:
					vVar0 = { 1906.76f, -1860.9f, 44.076f };
					break;
				case 5:
					vVar0 = { 2463.728f, 302.1954f, 76.15352f };
					break;
			}
			break;
		case joaat("DOCUMENT_CARD_TWO_WANDS"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -5621.368f, -2941.645f, 6.196f };
					break;
				case 1:
					vVar0 = { -691.7759f, -1245.418f, 43.18266f };
					break;
				case 2:
					vVar0 = { 1424.569f, -1144.531f, 75.435f };
					break;
				case 3:
					vVar0 = { 1839.385f, -1275.077f, 43.297f };
					break;
				case 4:
					vVar0 = { 2279.529f, 1487.438f, 83.47887f };
					break;
				case 5:
					vVar0 = { 1931.983f, 1945.649f, 265.9054f };
					break;
			}
			break;
	}
	return vVar0;
}

Vector3 func_409(int iParam0, int iParam1)
{
	vector3 vVar0;

	switch (iParam1)
	{
		case joaat("PROVISION_JEWELRY_MOON_RING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1249.602f, 1156.183f, 151.6954f };
					break;
				case 1:
					vVar0 = { 2294.689f, 2076.941f, 199.8165f };
					break;
				case 2:
					vVar0 = { 2479.74f, 2000.122f, 167.1423f };
					break;
				case 3:
					vVar0 = { 1588.217f, 2192.406f, 325.189f };
					break;
				case 4:
					vVar0 = { -1188.505f, 326.9177f, 43.7868f };
					break;
				case 5:
					vVar0 = { 2063.751f, -1761.572f, 40.542f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_WHTGLD_DMND_RING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1169.316f, 1685.228f, 355.7802f };
					break;
				case 1:
					vVar0 = { -1521.499f, 518.2305f, 102.25f };
					break;
				case 2:
					vVar0 = { -596.504f, 856.5514f, 109.4832f };
					break;
				case 3:
					vVar0 = { 804.661f, 831.088f, 117.221f };
					break;
				case 4:
					vVar0 = { 2835.425f, 1681.985f, 129.9798f };
					break;
				case 5:
					vVar0 = { -686.152f, 1022.066f, 132.999f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_YLWGLD_DMND_RING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -2176.511f, 720.0225f, 125.2582f };
					break;
				case 1:
					vVar0 = { 1715.98f, -1725.556f, 50.62097f };
					break;
				case 2:
					vVar0 = { -1095.227f, 706.5919f, 103.139f };
					break;
				case 3:
					vVar0 = { 1218.012f, -143.7625f, 100.194f };
					break;
				case 4:
					vVar0 = { -1730.175f, -78.967f, 180.201f };
					break;
				case 5:
					vVar0 = { -2067.141f, -1928.338f, 112.243f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_FRENCH_DMND_RING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -347.9342f, 1153.391f, 125.6111f };
					break;
				case 1:
					vVar0 = { -2080.393f, -1891.941f, 113.6176f };
					break;
				case 2:
					vVar0 = { -1374.927f, 511.1898f, 100.6f };
					break;
				case 3:
					vVar0 = { 1965.265f, -1871.806f, 40.724f };
					break;
				case 4:
					vVar0 = { -410.4796f, 1749.962f, 218.5241f };
					break;
				case 5:
					vVar0 = { -4450.241f, -3879.977f, -26.709f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_TOPAZ_RING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1725.126f, -1968.61f, 46.54615f };
					break;
				case 1:
					vVar0 = { 1598.018f, -1840.43f, 58.632f };
					break;
				case 2:
					vVar0 = { 741.7739f, 1818.116f, 236.1417f };
					break;
				case 3:
					vVar0 = { 2443.097f, 290.514f, 66.50214f };
					break;
				case 4:
					vVar0 = { 2725.293f, -1057.348f, 46.91621f };
					break;
				case 5:
					vVar0 = { -159.714f, 1505.379f, 116.488f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_PEARL_RING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1308.987f, -389.3056f, 98.80263f };
					break;
				case 1:
					vVar0 = { 2926.397f, 2343.146f, 157.2647f };
					break;
				case 2:
					vVar0 = { -1755.261f, -225.4198f, 183.7908f };
					break;
				case 3:
					vVar0 = { -3817.285f, -3001.792f, -7.194f };
					break;
				case 4:
					vVar0 = { 1980.839f, 1187.971f, 169.914f };
					break;
				case 5:
					vVar0 = { 1845.287f, -1813.046f, 43.97054f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_CORAL_RING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1851.781f, 2317.591f, 348.1268f };
					break;
				case 1:
					vVar0 = { -853.7369f, 396.1281f, 94.9f };
					break;
				case 2:
					vVar0 = { 2569.415f, 717.7336f, 81.21738f };
					break;
				case 3:
					vVar0 = { -3172.644f, -2475.335f, 72.115f };
					break;
				case 4:
					vVar0 = { -1277.482f, 483.129f, 86.077f };
					break;
				case 5:
					vVar0 = { 1705.024f, -1008.447f, 40.684f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_EMERALD_RING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 3222.236f, 1464.866f, 52.10627f };
					break;
				case 1:
					vVar0 = { 1897.726f, -1195.392f, 41.91169f };
					break;
				case 2:
					vVar0 = { -1097.89f, -1356.006f, 64.07458f };
					break;
				case 3:
					vVar0 = { -6023.612f, -3233.676f, -22.148f };
					break;
				case 4:
					vVar0 = { 2489.684f, 884.126f, 72.419f };
					break;
				case 5:
					vVar0 = { 481.589f, 1845.104f, 196.887f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_ONYX_RING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -367.266f, 300.0798f, 89.44596f };
					break;
				case 1:
					vVar0 = { 2301.32f, -1322.696f, 42.06955f };
					break;
				case 2:
					vVar0 = { -2240.554f, 609.4323f, 117.2326f };
					break;
				case 3:
					vVar0 = { -2775.61f, -3209.412f, -7.898378f };
					break;
				case 4:
					vVar0 = { 1203.29f, -1204.167f, 75.664f };
					break;
				case 5:
					vVar0 = { -828.698f, -1516.472f, 62.305f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_PERS_TURQ_RING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -4496.287f, -3208.554f, 9.911187f };
					break;
				case 1:
					vVar0 = { 872.0493f, 1291.168f, 221.9553f };
					break;
				case 2:
					vVar0 = { 1899.343f, -1854.501f, 47.45892f };
					break;
				case 3:
					vVar0 = { 2248.565f, -766.519f, 41.818f };
					break;
				case 4:
					vVar0 = { 429.323f, 668.517f, 114.407f };
					break;
				case 5:
					vVar0 = { 2233.555f, -141.2088f, 48.10167f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_TURQUOISE_RING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1239.72f, -1911.497f, 55.959f };
					break;
				case 1:
					vVar0 = { 775.2253f, 849.8893f, 118.7485f };
					break;
				case 2:
					vVar0 = { -3584.689f, -3567.713f, 34.21161f };
					break;
				case 3:
					vVar0 = { 533.449f, 1746.879f, 162.112f };
					break;
				case 4:
					vVar0 = { 1317.384f, -2275.81f, 51.01833f };
					break;
				case 5:
					vVar0 = { 2329.152f, 1330.265f, 106.107f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_CORAL_DNGL_EARRING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1384.99f, -1402.253f, 93.5495f };
					break;
				case 1:
					vVar0 = { -1992.5f, -2384.515f, 56.43238f };
					break;
				case 2:
					vVar0 = { -5345.73f, -2913.978f, 8.322517f };
					break;
				case 3:
					vVar0 = { -2772.355f, -431.812f, 173.256f };
					break;
				case 4:
					vVar0 = { -5859.28f, -3185.474f, -14.348f };
					break;
				case 5:
					vVar0 = { 1859.219f, -739.871f, 41.361f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_DMND_PENDT_EARRING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2899.738f, 492.7514f, 65.84051f };
					break;
				case 1:
					vVar0 = { -2871.56f, -462.0377f, 196.8847f };
					break;
				case 2:
					vVar0 = { 1445.657f, 1456.146f, 188.63f };
					break;
				case 3:
					vVar0 = { 1871.821f, 578.064f, 112.566f };
					break;
				case 4:
					vVar0 = { -2585.285f, -2521.196f, 71.488f };
					break;
				case 5:
					vVar0 = { 2337.882f, 1007.901f, 88.839f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_DROP_EARRING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1795.936f, -421.4888f, 43.91587f };
					break;
				case 1:
					vVar0 = { -1693.907f, -1542.08f, 82.97929f };
					break;
				case 2:
					vVar0 = { 751.4978f, 1185.651f, 143.4009f };
					break;
				case 3:
					vVar0 = { 1876.071f, 1019.309f, 122.024f };
					break;
				case 4:
					vVar0 = { -3554.666f, -3389.052f, -1.595f };
					break;
				case 5:
					vVar0 = { -2618.264f, -348.66f, 141.183f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_ELK_TOOTH_EARRING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2985.184f, 1280.13f, 40.96151f };
					break;
				case 1:
					vVar0 = { 220.5197f, 686.5555f, 175.8618f };
					break;
				case 2:
					vVar0 = { 1388.297f, -645.8536f, 70.60245f };
					break;
				case 3:
					vVar0 = { 2120.819f, -640.731f, 40.687f };
					break;
				case 4:
					vVar0 = { -24.567f, 1248.657f, 171.727f };
					break;
				case 5:
					vVar0 = { 1591.662f, 2185.654f, 323.313f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_EMERALD_EARRING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2431.102f, 1748.229f, 86.07227f };
					break;
				case 1:
					vVar0 = { -5807.756f, -2853.925f, -21.07f };
					break;
				case 2:
					vVar0 = { 687.0368f, 1429.984f, 179.87f };
					break;
				case 3:
					vVar0 = { -1170.441f, 85.439f, 43.968f };
					break;
				case 4:
					vVar0 = { -2731.12f, -2522.983f, 64.287f };
					break;
				case 5:
					vVar0 = { -2258.174f, 740.849f, 123.933f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_GRNET_POST_EARRING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1515.215f, 2022.364f, 297.7653f };
					break;
				case 1:
					vVar0 = { 2916.78f, 1251.501f, 44.73628f };
					break;
				case 2:
					vVar0 = { -1398.124f, -1734.039f, 82.11946f };
					break;
				case 3:
					vVar0 = { 427.904f, -149.548f, 117.172f };
					break;
				case 4:
					vVar0 = { 2061.983f, 943.904f, 116.989f };
					break;
				case 5:
					vVar0 = { -4813.368f, -2709.548f, -14.264f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_PEARL_EARRING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1840.84f, 563.2191f, 112.6902f };
					break;
				case 1:
					vVar0 = { 2200.189f, -993.9132f, 40.68365f };
					break;
				case 2:
					vVar0 = { 2281.374f, 1445.469f, 84.43324f };
					break;
				case 3:
					vVar0 = { -3614.626f, -2662.714f, -12.783f };
					break;
				case 4:
					vVar0 = { -1005.908f, -1193.674f, 58.304f };
					break;
				case 5:
					vVar0 = { 1179.77f, -101.4314f, 97.15665f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_QN_DMND_EARRING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1882.536f, 138.9948f, 97.59777f };
					break;
				case 1:
					vVar0 = { 1237.213f, -1666.103f, 65.53084f };
					break;
				case 2:
					vVar0 = { -1052.817f, 75.87376f, 90.76984f };
					break;
				case 3:
					vVar0 = { 738.079f, -1444.563f, 48.618f };
					break;
				case 4:
					vVar0 = { -2260.866f, -1433.324f, 139.047f };
					break;
				case 5:
					vVar0 = { -1062.977f, -830.346f, 42.847f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_TURQ_STUD_EARRING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -4443.736f, -2688.467f, -12.10359f };
					break;
				case 1:
					vVar0 = { 2080.73f, -583.7109f, 40.68758f };
					break;
				case 2:
					vVar0 = { 2875.142f, 1019.903f, 40.91467f };
					break;
				case 3:
					vVar0 = { 224.485f, 1002.841f, 188.619f };
					break;
				case 4:
					vVar0 = { 511.3415f, 2242.749f, 245.8599f };
					break;
				case 5:
					vVar0 = { -3535.955f, -3047.648f, 11.114f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_RUDY_DNGL_EARRING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -422.9006f, 1124.224f, 116.5767f };
					break;
				case 1:
					vVar0 = { 2305.086f, -186.9085f, 40.92494f };
					break;
				case 2:
					vVar0 = { 882.827f, -293.7682f, 82.99796f };
					break;
				case 3:
					vVar0 = { 2330.561f, -1264.729f, 44.665f };
					break;
				case 4:
					vVar0 = { 1575.993f, -262.667f, 79.194f };
					break;
				case 5:
					vVar0 = { 297.576f, 847.984f, 186.128f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_WHT_DMND_EARRING"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1991.458f, -1903.824f, 40.69088f };
					break;
				case 1:
					vVar0 = { -164.3306f, 1731.664f, 169.7935f };
					break;
				case 2:
					vVar0 = { -754.5217f, -558.4883f, 40.81464f };
					break;
				case 3:
					vVar0 = { -1322.847f, -2177.425f, 41.373f };
					break;
				case 4:
					vVar0 = { -455.087f, 882.664f, 125.946f };
					break;
				case 5:
					vVar0 = { 2431.759f, 98.043f, 44.798f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_TURQUOISE_BRACELET"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1365.181f, 1827.732f, 190.9018f };
					break;
				case 1:
					vVar0 = { 1402.485f, -984.186f, 47.50457f };
					break;
				case 2:
					vVar0 = { -1585.871f, -2805.91f, 38.9954f };
					break;
				case 3:
					vVar0 = { 2001.609f, 700.08f, 170.329f };
					break;
				case 4:
					vVar0 = { -4380.315f, -3079.24f, -11.653f };
					break;
				case 5:
					vVar0 = { 956.51f, 389.518f, 109.939f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_DMND_BNGLE_BRACELET"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1070.01f, -1927.607f, 41.43198f };
					break;
				case 1:
					vVar0 = { -1799.061f, -1764.563f, 107.4229f };
					break;
				case 2:
					vVar0 = { 2382.294f, 882.2943f, 73.1396f };
					break;
				case 3:
					vVar0 = { -3306.079f, -2849.913f, -6.958f };
					break;
				case 4:
					vVar0 = { -380.661f, -361.891f, 85.739f };
					break;
				case 5:
					vVar0 = { 2623.028f, -1174.482f, 52.10396f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_CARVED_BRACELET"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2098.276f, 163.5964f, 73.96008f };
					break;
				case 1:
					vVar0 = { -3345.583f, -2856.703f, -7.089534f };
					break;
				case 2:
					vVar0 = { -1568.609f, 725.8712f, 129.2337f };
					break;
				case 3:
					vVar0 = { -2385.313f, -2360.324f, 60.861f };
					break;
				case 4:
					vVar0 = { -2172.959f, -255.478f, 190.639f };
					break;
				case 5:
					vVar0 = { -3483.668f, -3470.969f, -0.715999f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_GLD_BNGLE_BRACELET"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 700.8186f, -1252.892f, 43.97901f };
					break;
				case 1:
					vVar0 = { 157.7216f, 361.8874f, 118.6619f };
					break;
				case 2:
					vVar0 = { -5905.865f, -3413.23f, -4.372983f };
					break;
				case 3:
					vVar0 = { -399.17f, 1735.706f, 217.9749f };
					break;
				case 4:
					vVar0 = { 1592.672f, 1627.75f, 146.213f };
					break;
				case 5:
					vVar0 = { -2713.809f, -54.182f, 151.834f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_GRNET_BRACELET"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2056.683f, -797.0857f, 41.25389f };
					break;
				case 1:
					vVar0 = { -1356.743f, -928.0706f, 58.06551f };
					break;
				case 2:
					vVar0 = { -864.6054f, 625.0072f, 94.73165f };
					break;
				case 3:
					vVar0 = { -164.773f, 497.919f, 105.616f };
					break;
				case 4:
					vVar0 = { -4341.151f, -3496.203f, 31.601f };
					break;
				case 5:
					vVar0 = { -2071.77f, -2678.627f, 67.868f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_SPHR_BRACELET"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -2184.685f, -1664.431f, 138.5523f };
					break;
				case 1:
					vVar0 = { 468.4028f, 1091f, 195.0037f };
					break;
				case 2:
					vVar0 = { -614.8671f, 525.5435f, 97.91837f };
					break;
				case 3:
					vVar0 = { 2964.187f, 438.709f, 56.915f };
					break;
				case 4:
					vVar0 = { -1286.468f, -625.796f, 98.286f };
					break;
				case 5:
					vVar0 = { 344.1996f, -666.2773f, 41.90558f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_SPHR_BNGLE_BRACELET"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1045.887f, 421.9767f, 46.4541f };
					break;
				case 1:
					vVar0 = { -2231.449f, 891.0339f, 163.5341f };
					break;
				case 2:
					vVar0 = { -3312.46f, -1837.436f, 56.99748f };
					break;
				case 3:
					vVar0 = { -37.298f, 1108.598f, 167.237f };
					break;
				case 4:
					vVar0 = { -2454.475f, -2854.224f, 70.063f };
					break;
				case 5:
					vVar0 = { 1718.99f, 596.886f, 102.129f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_PEARL_BRACELET"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2063.583f, -851.6461f, 43.32316f };
					break;
				case 1:
					vVar0 = { 1619.393f, 1487.577f, 145.4048f };
					break;
				case 2:
					vVar0 = { -92.89658f, 1359.296f, 168.3585f };
					break;
				case 3:
					vVar0 = { 2372.439f, -859.7336f, 43.34306f };
					break;
				case 4:
					vVar0 = { 878.194f, -2029.334f, 43.937f };
					break;
				case 5:
					vVar0 = { -5633.213f, -2951.038f, 4.873f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_AMETHYST_NECKLACE"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2326.581f, 1092.258f, 102.1426f };
					break;
				case 1:
					vVar0 = { 621.4919f, 959.4529f, 176.381f };
					break;
				case 2:
					vVar0 = { 1482.876f, 1121.825f, 198.2411f };
					break;
				case 3:
					vVar0 = { -1506.288f, -755.233f, 104.926f };
					break;
				case 4:
					vVar0 = { 1306.245f, 321.932f, 87.032f };
					break;
				case 5:
					vVar0 = { 1993.759f, -1613.599f, 41.097f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_BLCK_PEARL_NECKLACE"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 873.05f, 2256.082f, 238.799f };
					break;
				case 1:
					vVar0 = { -630.5759f, 1132.453f, 156.1782f };
					break;
				case 2:
					vVar0 = { -584.6255f, -831.5223f, 40.69221f };
					break;
				case 3:
					vVar0 = { 1066.412f, -1023.771f, 67.869f };
					break;
				case 4:
					vVar0 = { -5520.459f, -3056.198f, -3.31f };
					break;
				case 5:
					vVar0 = { 135.157f, 177.181f, 120.193f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_GLD_CROSS_NECKLACE"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 715.0709f, 23.18262f, 151.8853f };
					break;
				case 1:
					vVar0 = { -948.6896f, 1634.235f, 244.38f };
					break;
				case 2:
					vVar0 = { 2416.921f, -738.7106f, 41.36396f };
					break;
				case 3:
					vVar0 = { 1469.829f, 798.88f, 98.616f };
					break;
				case 4:
					vVar0 = { 1896.782f, -1861.499f, 46.56086f };
					break;
				case 5:
					vVar0 = { 1893.525f, 299.28f, 75.9f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_GLD_PEARL_NECKLACE"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1757.989f, -2937.432f, -11.79251f };
					break;
				case 1:
					vVar0 = { 1182.359f, 2036.899f, 323.0538f };
					break;
				case 2:
					vVar0 = { 1465.587f, -1722.392f, 62.49817f };
					break;
				case 3:
					vVar0 = { -5583.634f, -2588.623f, -9.075f };
					break;
				case 4:
					vVar0 = { -1823.96f, -1133.145f, 88.989f };
					break;
				case 5:
					vVar0 = { 2715.422f, -1081.903f, 47.11272f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_GLD_PENDT_NECKLACE"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -414.3991f, 1265.394f, 160.5856f };
					break;
				case 1:
					vVar0 = { 2695.703f, 1996.243f, 123.35f };
					break;
				case 2:
					vVar0 = { -5992.344f, -3821.39f, -30.7928f };
					break;
				case 3:
					vVar0 = { 1712.729f, -1303.595f, 42.161f };
					break;
				case 4:
					vVar0 = { 2572.77f, 142.555f, 51.44873f };
					break;
				case 5:
					vVar0 = { -3341.876f, -2753.213f, -5.127f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_MTHR_PEARL_NECKLACE"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1143.589f, -2167.258f, 55.39804f };
					break;
				case 1:
					vVar0 = { 2675.015f, 424.8618f, 82.26527f };
					break;
				case 2:
					vVar0 = { 323.924f, 309.331f, 145.39f };
					break;
				case 3:
					vVar0 = { -482.686f, -70.27f, 42.896f };
					break;
				case 4:
					vVar0 = { 2623.636f, 1696.611f, 115.4945f };
					break;
				case 5:
					vVar0 = { -1871.348f, -1724.728f, 108.487f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_PORCELAIN_NECKLACE"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2383.226f, 1695.083f, 95.911f };
					break;
				case 1:
					vVar0 = { 1716.582f, 463.6513f, 106.2908f };
					break;
				case 2:
					vVar0 = { -1168.274f, 843.575f, 134.8053f };
					break;
				case 3:
					vVar0 = { 2684.51f, 1647.921f, 147.5019f };
					break;
				case 4:
					vVar0 = { 1732.463f, -1173.364f, 40.679f };
					break;
				case 5:
					vVar0 = { 1731.615f, -425.61f, 47.192f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_SLVR_PEARL_NECKLACE"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -63.90002f, 1234.047f, 170.8458f };
					break;
				case 1:
					vVar0 = { 1460.522f, -477.047f, 73.44901f };
					break;
				case 2:
					vVar0 = { -1638.215f, -1360.739f, 83.49316f };
					break;
				case 3:
					vVar0 = { 2780.342f, 534.8629f, 71.79f };
					break;
				case 4:
					vVar0 = { -5046.095f, -2504.365f, -11.168f };
					break;
				case 5:
					vVar0 = { 1121.401f, -1297.322f, 64.358f };
					break;
			}
			break;
		case joaat("PROVISION_JEWELRY_TOPAZ_NECKLACE"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -278.1749f, 88.7519f, 48.23199f };
					break;
				case 1:
					vVar0 = { -3694.892f, -2663.843f, -15.3165f };
					break;
				case 2:
					vVar0 = { -5397.794f, -3668.164f, -21.97512f };
					break;
				case 3:
					vVar0 = { -1302.337f, -875.792f, 69.533f };
					break;
				case 4:
					vVar0 = { -2773.447f, -3039.548f, 10.243f };
					break;
				case 5:
					vVar0 = { -393.977f, 1726.975f, 216.468f };
					break;
			}
			break;
	}
	return vVar0;
}

Vector3 func_410(int iParam0, int iParam1)
{
	vector3 vVar0;

	switch (iParam1)
	{
		case joaat("PROVISION_WLDFLWR_AGARITA"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -6158.079f, -3672.228f, 23.7246f };
					break;
				case 1:
					vVar0 = { -3176.188f, -2494.712f, 71.67211f };
					break;
				case 2:
					vVar0 = { -4454.255f, -3654.398f, 56.73625f };
					break;
				case 3:
					vVar0 = { -2837.986f, -2626.157f, 92.17568f };
					break;
				case 4:
					vVar0 = { -3517.831f, -1922.929f, 10.00902f };
					break;
				case 5:
					vVar0 = { -5994.68f, -3685.647f, -6.307046f };
					break;
				case 6:
					vVar0 = { -2860.788f, -2869.481f, 88.79768f };
					break;
				case 7:
					vVar0 = { -5399.701f, -3534.924f, 4.885307f };
					break;
				case 8:
					vVar0 = { -3677.977f, -3580.438f, 46.71785f };
					break;
				case 9:
					vVar0 = { -4742.011f, -2475.097f, 7.924973f };
					break;
				case 10:
					vVar0 = { -3108.148f, -2259.494f, 73.75759f };
					break;
				case 11:
					vVar0 = { -5242.113f, -3844.581f, -4.130068f };
					break;
				case 12:
					vVar0 = { -1807.05f, -2830.738f, 14.16864f };
					break;
				case 13:
					vVar0 = { -4757.845f, -2252.798f, 48.07966f };
					break;
				case 14:
					vVar0 = { -4910.926f, -3754.54f, 25.15245f };
					break;
				case 15:
					vVar0 = { -5379.681f, -2706.009f, 15.69893f };
					break;
				case 16:
					vVar0 = { -3386.393f, -3420.153f, 45.52135f };
					break;
				case 17:
					vVar0 = { -2123.675f, -2281.767f, 97.89298f };
					break;
			}
			break;
		case joaat("PROVISION_WLDFLWR_BITTERWEED"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -837.0764f, -179.6575f, 77.68317f };
					break;
				case 1:
					vVar0 = { -1451.45f, 475.6181f, 103.6345f };
					break;
				case 2:
					vVar0 = { -2527.715f, 362.7336f, 151.6517f };
					break;
				case 3:
					vVar0 = { 2854.28f, 694.4197f, 64.87576f };
					break;
				case 4:
					vVar0 = { -2080.122f, 693.6569f, 121.9127f };
					break;
				case 5:
					vVar0 = { 2545.92f, 274.1429f, 69.23188f };
					break;
				case 6:
					vVar0 = { 2682.133f, 295.6832f, 61.90741f };
					break;
				case 7:
					vVar0 = { -1957.831f, 477.7415f, 116.0796f };
					break;
				case 8:
					vVar0 = { -2458.693f, 459.8373f, 144.0181f };
					break;
				case 9:
					vVar0 = { -1308.998f, 286.0198f, 75.79656f };
					break;
				case 10:
					vVar0 = { 2074.065f, 823.5678f, 153.9429f };
					break;
				case 11:
					vVar0 = { -755.7537f, 25.02407f, 81.93896f };
					break;
				case 12:
					vVar0 = { -1708.174f, 603.0139f, 117.7064f };
					break;
				case 13:
					vVar0 = { 2245.984f, 392.1618f, 46.47459f };
					break;
				case 14:
					vVar0 = { -2541.703f, 658.5632f, 136.1618f };
					break;
				case 15:
					vVar0 = { 2363.628f, 883.5585f, 73.92034f };
					break;
				case 16:
					vVar0 = { -1450.8f, 107.9894f, 89.53876f };
					break;
				case 17:
					vVar0 = { -622.4541f, -18.40578f, 85.21953f };
					break;
				case 18:
					vVar0 = { 2177.449f, -80.94263f, 50.22923f };
					break;
				case 19:
					vVar0 = { 1934.772f, 470.8045f, 130.7732f };
					break;
				case 20:
					vVar0 = { -1800.463f, 345.83f, 115.2097f };
					break;
				case 21:
					vVar0 = { -2508.952f, 833.7975f, 147.4184f };
					break;
				case 22:
					vVar0 = { -1275.675f, 105.488f, 70.64514f };
					break;
				case 23:
					vVar0 = { 2491.08f, 937.9883f, 79.73892f };
					break;
				case 24:
					vVar0 = { -1311.239f, -77.12775f, 96.92197f };
					break;
				case 25:
					vVar0 = { 2252.339f, 100.3517f, 54.90428f };
					break;
				case 26:
					vVar0 = { -1684.869f, 354.543f, 107.3314f };
					break;
				case 27:
					vVar0 = { -2301.606f, 790.7549f, 132.5147f };
					break;
				case 28:
					vVar0 = { 2296.166f, 575.2374f, 75.16478f };
					break;
				case 29:
					vVar0 = { 2765.188f, 983.2751f, 66.55457f };
					break;
				case 30:
					vVar0 = { 2402.335f, 101.8964f, 45.81161f };
					break;
				case 31:
					vVar0 = { -2176.205f, 473.7471f, 117.8443f };
					break;
				case 32:
					vVar0 = { 2699.46f, 688.5892f, 75.24394f };
					break;
				case 33:
					vVar0 = { -1565.916f, 274.7366f, 113.4644f };
					break;
				case 34:
					vVar0 = { 2219.457f, 1329.016f, 98.94907f };
					break;
				case 35:
					vVar0 = { -1172.452f, -210.5993f, 92.73193f };
					break;
			}
			break;
		case joaat("PROVISION_WLDFLWR_BLOOD_FLOWER"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1577.387f, -919.5087f, 40.94017f };
					break;
				case 1:
					vVar0 = { 2306.311f, -194.6056f, 40.92645f };
					break;
				case 2:
					vVar0 = { 2741.538f, -694.9662f, 40.5845f };
					break;
				case 3:
					vVar0 = { 1956.2f, -1138.579f, 40.54645f };
					break;
				case 4:
					vVar0 = { 2348.779f, -616.8898f, 40.75293f };
					break;
				case 5:
					vVar0 = { 2306.104f, -258.4776f, 41.20464f };
					break;
				case 6:
					vVar0 = { 2244.353f, -620.5598f, 40.61773f };
					break;
				case 7:
					vVar0 = { 2144.061f, -349.5971f, 40.51577f };
					break;
				case 8:
					vVar0 = { 2193.562f, -1229.606f, 40.98674f };
					break;
				case 9:
					vVar0 = { 2208.828f, -1638.493f, 40.58871f };
					break;
				case 10:
					vVar0 = { 2780.535f, -588.9789f, 40.60842f };
					break;
				case 11:
					vVar0 = { 2023.787f, -623.6941f, 42.3571f };
					break;
				case 12:
					vVar0 = { 1691.598f, -682.3945f, 40.66817f };
					break;
				case 13:
					vVar0 = { 2046.46f, -1672.703f, 41.02987f };
					break;
				case 14:
					vVar0 = { 2360.87f, -534.0822f, 40.85497f };
					break;
				case 15:
					vVar0 = { 2272.366f, -576.9771f, 40.74205f };
					break;
				case 16:
					vVar0 = { 2235.588f, -817.0897f, 40.92264f };
					break;
				case 17:
					vVar0 = { 2126.303f, -1854.556f, 40.62185f };
					break;
			}
			break;
		case joaat("PROVISION_WLDFLWR_CARDINAL_FLOWER"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2096.103f, -570.0728f, 40.76724f };
					break;
				case 1:
					vVar0 = { 2118.5f, -1861.513f, 40.54971f };
					break;
				case 2:
					vVar0 = { 2271.446f, -475.6335f, 40.91769f };
					break;
				case 3:
					vVar0 = { 2050.705f, -1233.955f, 42.07559f };
					break;
				case 4:
					vVar0 = { 2212.287f, -817.0461f, 41.05512f };
					break;
				case 5:
					vVar0 = { 2213.18f, -1137.773f, 42.13002f };
					break;
				case 6:
					vVar0 = { 2031.381f, -1605.756f, 40.84847f };
					break;
				case 7:
					vVar0 = { 1765.468f, -1275.672f, 41.87871f };
					break;
				case 8:
					vVar0 = { 1894f, -1989.385f, 41.46169f };
					break;
				case 9:
					vVar0 = { 2268.59f, -507.9146f, 40.75f };
					break;
				case 10:
					vVar0 = { 2168.978f, -287.6918f, 41.27938f };
					break;
				case 11:
					vVar0 = { 1981.499f, -2008.384f, 40.91828f };
					break;
				case 12:
					vVar0 = { 2400.476f, -757.072f, 40.92308f };
					break;
				case 13:
					vVar0 = { 1994.725f, -1559.202f, 40.74926f };
					break;
				case 14:
					vVar0 = { 1595.292f, -971.217f, 41.22252f };
					break;
				case 15:
					vVar0 = { 2098.452f, -1047.086f, 41.35026f };
					break;
				case 16:
					vVar0 = { 2030.629f, -1138.634f, 40.50709f };
					break;
				case 17:
					vVar0 = { 2053.598f, -1840.162f, 40.69882f };
					break;
				case 18:
					vVar0 = { 1948.073f, -1158.214f, 40.86988f };
					break;
				case 19:
					vVar0 = { 2308.52f, -566.7586f, 40.77962f };
					break;
				case 20:
					vVar0 = { 1920.365f, -1850.414f, 40.9271f };
					break;
				case 21:
					vVar0 = { 2302.28f, -350.1679f, 41.79851f };
					break;
				case 22:
					vVar0 = { 2412.502f, -725.1883f, 40.95741f };
					break;
				case 23:
					vVar0 = { 2001.047f, -1001.912f, 42.31869f };
					break;
				case 24:
					vVar0 = { 2015.419f, -1554.983f, 40.73554f };
					break;
				case 25:
					vVar0 = { 2035.616f, -1999.656f, 41.09543f };
					break;
				case 26:
					vVar0 = { 1509.446f, -826.7535f, 44.47095f };
					break;
				case 27:
					vVar0 = { 2582.996f, -638.0927f, 42.48944f };
					break;
				case 28:
					vVar0 = { 1961.522f, -522.7937f, 40.75521f };
					break;
				case 29:
					vVar0 = { 2318.057f, -509.386f, 41.03922f };
					break;
				case 30:
					vVar0 = { 1906.669f, -1751.401f, 42.04636f };
					break;
				case 31:
					vVar0 = { 1640.019f, -741.5635f, 40.81805f };
					break;
				case 32:
					vVar0 = { 2094.501f, -924.8128f, 40.77338f };
					break;
				case 33:
					vVar0 = { 2061.693f, -1474.422f, 40.5374f };
					break;
				case 34:
					vVar0 = { 2112.21f, -1956.966f, 40.62199f };
					break;
				case 35:
					vVar0 = { 1881.001f, -1051.795f, 41.74044f };
					break;
				case 36:
					vVar0 = { 2065.621f, -1718.06f, 40.60165f };
					break;
				case 37:
					vVar0 = { 2379.899f, -496.1565f, 40.67059f };
					break;
				case 38:
					vVar0 = { 1912.171f, -411.4875f, 42.1138f };
					break;
				case 39:
					vVar0 = { 1795.963f, -814.7781f, 41.52293f };
					break;
				case 40:
					vVar0 = { 2218.973f, -896.0101f, 40.78076f };
					break;
				case 41:
					vVar0 = { 2164.055f, -1462.051f, 40.71122f };
					break;
				case 42:
					vVar0 = { 2361.998f, -661.2549f, 40.99789f };
					break;
				case 43:
					vVar0 = { 1812.99f, -1145.849f, 40.78216f };
					break;
				case 44:
					vVar0 = { 1978.474f, -1926.182f, 41.20599f };
					break;
				case 45:
					vVar0 = { 2228.102f, -1268.194f, 40.62177f };
					break;
				case 46:
					vVar0 = { 2506.603f, -428.8445f, 40.59692f };
					break;
				case 47:
					vVar0 = { 2012.282f, -332.8559f, 40.63703f };
					break;
				case 48:
					vVar0 = { 1791.035f, -1145.769f, 40.59069f };
					break;
				case 49:
					vVar0 = { 1906.752f, -746.4213f, 42.54567f };
					break;
				case 50:
					vVar0 = { 2281.305f, -978.6946f, 40.88538f };
					break;
				case 51:
					vVar0 = { 2056.947f, -1901.105f, 40.62201f };
					break;
				case 52:
					vVar0 = { 2162.393f, -683.0685f, 40.81242f };
					break;
				case 53:
					vVar0 = { 2169.019f, -1677.297f, 40.74394f };
					break;
			}
			Jump @9266; //curOff = 3664
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1802.734f, -1230.744f, 81.30141f };
					break;
				case 1:
					vVar0 = { 887.2073f, -1620.102f, 43.40933f };
					break;
				case 2:
					vVar0 = { -797.9009f, -573.506f, 53.54251f };
					break;
				case 3:
					vVar0 = { 688.0437f, -855.008f, 47.97547f };
					break;
				case 4:
					vVar0 = { 559.2841f, -563.241f, 69.24438f };
					break;
				case 5:
					vVar0 = { -996.9205f, -943.0409f, 60.46959f };
					break;
				case 6:
					vVar0 = { -471.9287f, -441.182f, 84.15424f };
					break;
				case 7:
					vVar0 = { -646.877f, 259.4007f, 90.02546f };
					break;
				case 8:
					vVar0 = { 167.3677f, -542.701f, 63.01952f };
					break;
				case 9:
					vVar0 = { 862.6147f, -1819.358f, 42.45035f };
					break;
				case 10:
					vVar0 = { -1770.195f, -1232.711f, 80.85489f };
					break;
				case 11:
					vVar0 = { 205.6236f, -603.0321f, 46.31397f };
					break;
				case 12:
					vVar0 = { -1160.332f, -841.0135f, 57.55645f };
					break;
				case 13:
					vVar0 = { 625.2186f, -627.9928f, 50.9932f };
					break;
				case 14:
					vVar0 = { 713.1145f, -882.6884f, 48.26238f };
					break;
				case 15:
					vVar0 = { -772.9506f, 140.4494f, 41.95989f };
					break;
				case 16:
					vVar0 = { -416.4897f, -454.566f, 76.58561f };
					break;
				case 17:
					vVar0 = { -659.2621f, -472.8685f, 50.49635f };
					break;
				case 18:
					vVar0 = { 907.9697f, -2013.26f, 44.72888f };
					break;
				case 19:
					vVar0 = { 807.1368f, -988.8497f, 52.42957f };
					break;
				case 20:
					vVar0 = { -999.7451f, -755.2712f, 58.68235f };
					break;
				case 21:
					vVar0 = { -1664.827f, -1162.666f, 77.30522f };
					break;
				case 22:
					vVar0 = { 713.1884f, -555.7805f, 77.14464f };
					break;
				case 23:
					vVar0 = { -571.5287f, -297.4931f, 53.0472f };
					break;
				case 24:
					vVar0 = { -1017.968f, -33.77452f, 43.04612f };
					break;
				case 25:
					vVar0 = { -302.5742f, -493.9792f, 65.02707f };
					break;
				case 26:
					vVar0 = { 266.8748f, -567.5861f, 60.7539f };
					break;
				case 27:
					vVar0 = { 938.4082f, -2064.738f, 43.32006f };
					break;
				case 28:
					vVar0 = { 831.8718f, -1048.238f, 48.52503f };
					break;
				case 29:
					vVar0 = { -773.7565f, -733.709f, 52.99412f };
					break;
				case 30:
					vVar0 = { -1663.015f, -1012.056f, 100.3875f };
					break;
				case 31:
					vVar0 = { 771.7671f, -617.4674f, 76.28725f };
					break;
				case 32:
					vVar0 = { -272.7094f, -548.2258f, 43.95261f };
					break;
				case 33:
					vVar0 = { -493.6351f, -99.02039f, 42.13488f };
					break;
				case 34:
					vVar0 = { -1028.052f, 93.09535f, 89.9007f };
					break;
				case 35:
					vVar0 = { 396.9534f, -568.6733f, 61.37666f };
					break;
				case 36:
					vVar0 = { 427.8954f, -670.0096f, 49.22416f };
					break;
				case 37:
					vVar0 = { 645.3694f, -1205.165f, 46.51438f };
					break;
				case 38:
					vVar0 = { -781.3183f, -708.7633f, 52.69588f };
					break;
				case 39:
					vVar0 = { -1480.488f, -1145.786f, 73.58723f };
					break;
				case 40:
					vVar0 = { 775.7672f, -633.3217f, 75.78204f };
					break;
				case 41:
					vVar0 = { 1018.206f, -2149.585f, 42.81111f };
					break;
				case 42:
					vVar0 = { -446.1029f, 35.37569f, 42.53957f };
					break;
				case 43:
					vVar0 = { -68.08208f, -535.2953f, 63.72619f };
					break;
				case 44:
					vVar0 = { -1086.443f, 293.9889f, 55.83007f };
					break;
				case 45:
					vVar0 = { 484.8581f, -646.3868f, 44.16967f };
					break;
				case 46:
					vVar0 = { 1120.864f, -2221.609f, 48.87132f };
					break;
				case 47:
					vVar0 = { 913.8426f, -1373.651f, 58.73856f };
					break;
				case 48:
					vVar0 = { -843.8945f, -646.6285f, 61.70801f };
					break;
				case 49:
					vVar0 = { -1375.26f, -884.5809f, 93.20879f };
					break;
				case 50:
					vVar0 = { 838.4435f, -807.2313f, 60.97507f };
					break;
				case 51:
					vVar0 = { -541.0539f, -499.2539f, 51.61814f };
					break;
				case 52:
					vVar0 = { -338.3631f, 187.3566f, 62.11228f };
					break;
				case 53:
					vVar0 = { 36.32716f, -560.6879f, 49.99359f };
					break;
			}
			Jump @9266; //curOff = 5187
			switch (iParam0)
			{
				case 0:
					vVar0 = { 1215.327f, -550.4489f, 69.20448f };
					break;
				case 1:
					vVar0 = { -1693.434f, 150.5699f, 139.3553f };
					break;
				case 2:
					vVar0 = { -1602.843f, -721.0051f, 134.8383f };
					break;
				case 3:
					vVar0 = { 1353.102f, -948.4034f, 54.34033f };
					break;
				case 4:
					vVar0 = { -1446.998f, -597.8992f, 124.9854f };
					break;
				case 5:
					vVar0 = { -2296.586f, -76.67634f, 236.971f };
					break;
				case 6:
					vVar0 = { -1938.189f, -254.6173f, 187.9133f };
					break;
				case 7:
					vVar0 = { -1158.12f, -417.6564f, 107.3296f };
					break;
				case 8:
					vVar0 = { 760.3007f, -1441.318f, 50.42412f };
					break;
				case 9:
					vVar0 = { 1852.904f, -250.8335f, 57.8251f };
					break;
				case 10:
					vVar0 = { -2035.193f, -422.1566f, 161.4343f };
					break;
				case 11:
					vVar0 = { 1331.847f, -1663.221f, 66.0006f };
					break;
				case 12:
					vVar0 = { 1558.239f, -373.491f, 80.65101f };
					break;
				case 13:
					vVar0 = { -2229.277f, -500.377f, 143.5234f };
					break;
				case 14:
					vVar0 = { 1686.212f, -1804f, 51.31548f };
					break;
				case 15:
					vVar0 = { -1826.407f, -920.2198f, 105.5977f };
					break;
				case 16:
					vVar0 = { 977.1981f, -318.6132f, 92.39168f };
					break;
				case 17:
					vVar0 = { 1397.009f, -2207.4f, 48.89367f };
					break;
			}
			Jump @9266; //curOff = 5702
			switch (iParam0)
			{
				case 0:
					vVar0 = { -4551.036f, -3717.372f, 16.74775f };
					break;
				case 1:
					vVar0 = { -4756.509f, -3243.545f, 7.083439f };
					break;
				case 2:
					vVar0 = { -1308.42f, -1904.898f, 62.07966f };
					break;
				case 3:
					vVar0 = { -5177.246f, -2452.09f, 0.591442f };
					break;
				case 4:
					vVar0 = { -881.3884f, -1971.176f, 49.44643f };
					break;
				case 5:
					vVar0 = { -5987.447f, -3678.175f, -6.555591f };
					break;
				case 6:
					vVar0 = { -4701.285f, -3750.453f, 11.8994f };
					break;
				case 7:
					vVar0 = { -4487.299f, -3140.017f, 7.967143f };
					break;
				case 8:
					vVar0 = { -5642.289f, -2894.806f, 2.9304f };
					break;
				case 9:
					vVar0 = { -749.5547f, -1941.077f, 47.16733f };
					break;
				case 10:
					vVar0 = { -5608.817f, -3765.67f, -24.15397f };
					break;
				case 11:
					vVar0 = { -1150.277f, -1911.295f, 41.6031f };
					break;
				case 12:
					vVar0 = { -4672.48f, -3541.827f, 15.18375f };
					break;
				case 13:
					vVar0 = { -4347.379f, -3357.034f, 33.69977f };
					break;
				case 14:
					vVar0 = { -5507.112f, -3186.329f, -21.6769f };
					break;
				case 15:
					vVar0 = { -5527.961f, -3600.143f, -22.37232f };
					break;
				case 16:
					vVar0 = { -1137.674f, -1829.151f, 61.23735f };
					break;
				case 17:
					vVar0 = { -758.7194f, -1756.665f, 53.39788f };
					break;
				case 18:
					vVar0 = { -5310.222f, -3986.815f, -9.60792f };
					break;
				case 19:
					vVar0 = { -4059.273f, -3291.623f, 32.05573f };
					break;
				case 20:
					vVar0 = { -1519.904f, -1989.379f, 46.35562f };
					break;
				case 21:
					vVar0 = { -5734.856f, -3350.746f, -24.15577f };
					break;
				case 22:
					vVar0 = { -817.0863f, -1644.762f, 61.01518f };
					break;
				case 23:
					vVar0 = { -1049.058f, -1692.225f, 81.09015f };
					break;
				case 24:
					vVar0 = { -4016.213f, -3415.796f, 47.05555f };
					break;
				case 25:
					vVar0 = { -5151.946f, -3656.595f, -3.751917f };
					break;
				case 26:
					vVar0 = { -682.2558f, -1589.873f, 47.90882f };
					break;
				case 27:
					vVar0 = { -1424.341f, -1981.077f, 44.61142f };
					break;
				case 28:
					vVar0 = { -5962.068f, -3498.418f, -24.10148f };
					break;
				case 29:
					vVar0 = { -1052.637f, -1796.781f, 62.35318f };
					break;
				case 30:
					vVar0 = { -5154.702f, -3471.117f, 0.055218f };
					break;
				case 31:
					vVar0 = { -3989.788f, -3672.628f, 47.61529f };
					break;
				case 32:
					vVar0 = { -698.519f, -1487.196f, 47.90404f };
					break;
				case 33:
					vVar0 = { -940.1525f, -1933.584f, 48.53842f };
					break;
				case 34:
					vVar0 = { -1374.326f, -1872.431f, 69.53745f };
					break;
				case 35:
					vVar0 = { -6336.438f, -3537.301f, -28.13726f };
					break;
			}
			Jump @9266; //curOff = 6721
			switch (iParam0)
			{
				case 0:
					vVar0 = { -3551.613f, -2539.796f, -14.11569f };
					break;
				case 1:
					vVar0 = { -2279.294f, -2538.378f, 64.17388f };
					break;
				case 2:
					vVar0 = { -4952.385f, -2448.958f, -4.652772f };
					break;
				case 3:
					vVar0 = { -4585.389f, -2931.452f, -19.1451f };
					break;
				case 4:
					vVar0 = { -3422.309f, -2735.995f, -5.550219f };
					break;
				case 5:
					vVar0 = { -3807.379f, -2660.309f, -14.97992f };
					break;
				case 6:
					vVar0 = { -3002.762f, -3204.804f, -0.745385f };
					break;
				case 7:
					vVar0 = { -2736.513f, -2584.714f, 66.61004f };
					break;
				case 8:
					vVar0 = { -2026.944f, -2914.289f, 7.941141f };
					break;
				case 9:
					vVar0 = { -2903.181f, -2520.676f, 64.85474f };
					break;
				case 10:
					vVar0 = { -3981.757f, -2377.309f, -9.19969f };
					break;
				case 11:
					vVar0 = { -3671.022f, -2226.875f, -13.62176f };
					break;
				case 12:
					vVar0 = { -2367.019f, -2719.615f, 67.30415f };
					break;
				case 13:
					vVar0 = { -2960.799f, -3103.594f, 7.026269f };
					break;
				case 14:
					vVar0 = { -4535.32f, -2959.584f, -18.97934f };
					break;
				case 15:
					vVar0 = { -3647.044f, -2967.884f, 3.168286f };
					break;
				case 16:
					vVar0 = { -4901.773f, -2732.863f, -11.23535f };
					break;
				case 17:
					vVar0 = { -1785.729f, -2867.956f, 3.920457f };
					break;
				case 18:
					vVar0 = { -3818.323f, -2431.667f, -11.85196f };
					break;
				case 19:
					vVar0 = { -3573.904f, -2077.847f, -13.69387f };
					break;
				case 20:
					vVar0 = { -2413.509f, -2600.069f, 79.50917f };
					break;
				case 21:
					vVar0 = { -3753.492f, -3147.621f, -7.111763f };
					break;
				case 22:
					vVar0 = { -4268.449f, -3031.226f, -10.47778f };
					break;
				case 23:
					vVar0 = { -4880.2f, -3002.013f, -19.80571f };
					break;
				case 24:
					vVar0 = { -1558.065f, -2653.922f, 61.00679f };
					break;
				case 25:
					vVar0 = { -3019.986f, -2678.777f, 83.5397f };
					break;
				case 26:
					vVar0 = { -2787.677f, -3094.006f, 11.7956f };
					break;
				case 27:
					vVar0 = { -3053.521f, -2550.07f, 69.55097f };
					break;
				case 28:
					vVar0 = { -3481.634f, -2268.223f, -4.268718f };
					break;
				case 29:
					vVar0 = { -3681.408f, -2437.438f, -14.75682f };
					break;
				case 30:
					vVar0 = { -4041.084f, -2841.911f, -8.170352f };
					break;
				case 31:
					vVar0 = { -4718.928f, -2797.024f, -10.74108f };
					break;
				case 32:
					vVar0 = { -2482.316f, -2620.406f, 74.44934f };
					break;
				case 33:
					vVar0 = { -2750.083f, -3066.452f, 8.679184f };
					break;
				case 34:
					vVar0 = { -1753.186f, -2664.416f, 64.18607f };
					break;
				case 35:
					vVar0 = { -3557.486f, -3220.925f, 4.855478f };
					break;
				case 36:
					vVar0 = { -3605.652f, -2553.657f, -15.10676f };
					break;
				case 37:
					vVar0 = { -1983.373f, -2516.197f, 64.48646f };
					break;
				case 38:
					vVar0 = { -3385.293f, -2426.299f, 0.909047f };
					break;
				case 39:
					vVar0 = { -2544.437f, -2392.296f, 64.56077f };
					break;
				case 40:
					vVar0 = { -3117.798f, -2193.891f, 73.96046f };
					break;
				case 41:
					vVar0 = { -3262.19f, -3033.966f, 0.071635f };
					break;
				case 42:
					vVar0 = { -4690.015f, -2971.554f, -19.06419f };
					break;
				case 43:
					vVar0 = { -3921.625f, -2908.703f, -16.13763f };
					break;
				case 44:
					vVar0 = { -2723.317f, -3063.674f, 5.848349f };
					break;
				case 45:
					vVar0 = { -2019.112f, -2598.32f, 67.13496f };
					break;
				case 46:
					vVar0 = { -2738.691f, -2152.243f, 79.31107f };
					break;
				case 47:
					vVar0 = { -4666.345f, -3016.519f, -16.4672f };
					break;
				case 48:
					vVar0 = { -3070.031f, -2841.298f, 19.88575f };
					break;
				case 49:
					vVar0 = { -3819.758f, -2720.052f, -15.92571f };
					break;
				case 50:
					vVar0 = { 2053.598f, -1840.162f, 40.69882f };
					break;
				case 51:
					vVar0 = { -3592.551f, -2689.42f, -10.87045f };
					break;
				case 52:
					vVar0 = { -3268.259f, -2678.055f, 6.380742f };
					break;
				case 53:
					vVar0 = { -2681.336f, -2582.359f, 68.82637f };
					break;
			}
			Jump @9266; //curOff = 8244
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1999.087f, -967.3788f, 100.2708f };
					break;
				case 1:
					vVar0 = { -2054.315f, -2129.293f, 51.13446f };
					break;
				case 2:
					vVar0 = { -2368.826f, -1824.353f, 107.4021f };
					break;
				case 3:
					vVar0 = { 2769.278f, 2074.029f, 166.9392f };
					break;
				case 4:
					vVar0 = { 2236.578f, 1626.647f, 84.76954f };
					break;
				case 5:
					vVar0 = { -2363.491f, -364.6791f, 143.1913f };
					break;
				case 6:
					vVar0 = { 2268.302f, 1274.2f, 93.99426f };
					break;
				case 7:
					vVar0 = { -1950.254f, -1062.476f, 75.34731f };
					break;
				case 8:
					vVar0 = { -2345.954f, -1739.286f, 114.7719f };
					break;
				case 9:
					vVar0 = { -2084.32f, -2089.309f, 56.60844f };
					break;
				case 10:
					vVar0 = { 2631.735f, 1974.998f, 96.31788f };
					break;
				case 11:
					vVar0 = { -2365.458f, -507.0249f, 145.6053f };
					break;
				case 12:
					vVar0 = { -1970.063f, -1124.512f, 74.62655f };
					break;
				case 13:
					vVar0 = { -2435.026f, -1586.924f, 148.4297f };
					break;
				case 14:
					vVar0 = { -2123.584f, -2032.072f, 58.84632f };
					break;
				case 15:
					vVar0 = { -2143.314f, -564.3889f, 137.8063f };
					break;
				case 16:
					vVar0 = { 2625.632f, 1851.786f, 89.97489f };
					break;
				case 17:
					vVar0 = { 2375.784f, 1069.28f, 84.05659f };
					break;
				case 18:
					vVar0 = { -2676.946f, -1423.428f, 147.7894f };
					break;
				case 19:
					vVar0 = { -1778.268f, -1118.677f, 82.0814f };
					break;
				case 20:
					vVar0 = { 2273.503f, 921.3495f, 78.24824f };
					break;
				case 21:
					vVar0 = { -2056.528f, -1906.18f, 110.8105f };
					break;
				case 22:
					vVar0 = { 2526.579f, 1726.432f, 87.43194f };
					break;
				case 23:
					vVar0 = { -2243.863f, -759.4833f, 141.9535f };
					break;
				case 24:
					vVar0 = { -2492f, -1385.933f, 148.4419f };
					break;
				case 25:
					vVar0 = { -2202.033f, -2002.685f, 75.23257f };
					break;
				case 26:
					vVar0 = { -2097.383f, -799.0377f, 83.25292f };
					break;
				case 27:
					vVar0 = { 2461.039f, 801.8494f, 67.13483f };
					break;
				case 28:
					vVar0 = { 2451.55f, 1697.122f, 96.74268f };
					break;
				case 29:
					vVar0 = { 2879.246f, 2218.497f, 156.5749f };
					break;
				case 30:
					vVar0 = { -2023.242f, -863.724f, 100.6152f };
					break;
				case 31:
					vVar0 = { -2609.855f, -1486.657f, 145.0986f };
					break;
				case 32:
					vVar0 = { 2443.427f, 635.2462f, 69.1945f };
					break;
				case 33:
					vVar0 = { 2428.804f, 1574.949f, 85.993f };
					break;
				case 34:
					vVar0 = { 2749.768f, 2172.252f, 155.8185f };
					break;
				case 35:
					vVar0 = { -2264.978f, -1887.964f, 118.8384f };
					break;
			}
			return vVar0;
		}

Vector3 func_411(int iParam0, int iParam1)
{
	vector3 vVar0;

	switch (iParam1)
	{
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_CORAL"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2141.272f, -823.959f, 40.52f };
					break;
				case 1:
					vVar0 = { 2793.688f, -713.969f, 40.5f };
					break;
				case 2:
					vVar0 = { 2249.056f, -1407.771f, 40.5f };
					break;
				case 3:
					vVar0 = { 1628.499f, -1102.416f, 40.537f };
					break;
				case 4:
					vVar0 = { 498.424f, 534.23f, 108.393f };
					break;
				case 5:
					vVar0 = { 1932.035f, -964.8993f, 39.97401f };
					break;
			}
			break;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_BIVALVE"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2566.666f, -709.825f, 40.52f };
					break;
				case 1:
					vVar0 = { 1654.044f, -695.2427f, 40.54647f };
					break;
				case 2:
					vVar0 = { 2834.497f, -141.3161f, 41.19836f };
					break;
				case 3:
					vVar0 = { 2731.036f, -432.3745f, 40.64665f };
					break;
				case 4:
					vVar0 = { 2192.02f, -423.3405f, 39.70004f };
					break;
				case 5:
					vVar0 = { 2435.077f, -329.223f, 40.52004f };
					break;
			}
			break;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_BRACHIOPOD"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -2879.071f, 96.89554f, 182.9811f };
					break;
				case 1:
					vVar0 = { -1470.532f, 278.8819f, 91.28812f };
					break;
				case 2:
					vVar0 = { -2675.592f, -334.693f, 141.007f };
					break;
				case 3:
					vVar0 = { -966.7284f, -1953.708f, 40.5f };
					break;
				case 4:
					vVar0 = { -2646.19f, -3254.188f, -16.439f };
					break;
				case 5:
					vVar0 = { -273.971f, -590.184f, 40.5f };
					break;
			}
			break;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_BROW_HORN"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 241.3359f, 1954.009f, 203.8331f };
					break;
				case 1:
					vVar0 = { -265.57f, 1415.222f, 103.074f };
					break;
				case 2:
					vVar0 = { -422.7934f, 73.59402f, 40.49999f };
					break;
				case 3:
					vVar0 = { 1585.246f, 1433.348f, 144.6408f };
					break;
				case 4:
					vVar0 = { -2464.38f, 768.951f, 128.829f };
					break;
				case 5:
					vVar0 = { -1200.365f, 112.272f, 40.5f };
					break;
			}
			break;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_CEPHALOPOD"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1085.924f, 824.4896f, 116.0231f };
					break;
				case 1:
					vVar0 = { -1323.116f, 1332.734f, 202.8198f };
					break;
				case 2:
					vVar0 = { 238.9727f, 1517.669f, 114.5001f };
					break;
				case 3:
					vVar0 = { -750.924f, 613.58f, 55.679f };
					break;
				case 4:
					vVar0 = { 546.835f, 1801.014f, 127.633f };
					break;
				case 5:
					vVar0 = { -3445.096f, -3148.687f, -11f };
					break;
			}
			break;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_TRILOBITE_CRYPTO"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1538.826f, 2965.289f, 463.942f };
					break;
				case 1:
					vVar0 = { -2231.305f, -2062.452f, 57.61456f };
					break;
				case 2:
					vVar0 = { -1828.741f, 2240.774f, 320.9892f };
					break;
				case 3:
					vVar0 = { -1730.363f, 467.283f, 108.748f };
					break;
				case 4:
					vVar0 = { 1315.935f, 661.2304f, 86.00089f };
					break;
				case 5:
					vVar0 = { -857.4758f, -957.7673f, 40.50006f };
					break;
			}
			break;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_TRILOBITE_ISO"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -2059.842f, -853.856f, 82.692f };
					break;
				case 1:
					vVar0 = { -648.1997f, -280.1455f, 40.49999f };
					break;
				case 2:
					vVar0 = { -1623.653f, -2439.15f, 40.5f };
					break;
				case 3:
					vVar0 = { -3998.81f, -3877.813f, -25.502f };
					break;
				case 4:
					vVar0 = { 2298.832f, 895.7715f, 72.58966f };
					break;
				case 5:
					vVar0 = { -1626.47f, -2834.9f, -12.75f };
					break;
			}
			break;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_TOOTH_MEGA"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 2956.994f, 351.384f, 40.5f };
					break;
				case 1:
					vVar0 = { 2636.47f, 1931.858f, 84.56282f };
					break;
				case 2:
					vVar0 = { 404.7244f, -1076.743f, 40.5f };
					break;
				case 3:
					vVar0 = { -473.4391f, 998.4291f, 86.65992f };
					break;
				case 4:
					vVar0 = { 2234.304f, 1354.916f, 84.05428f };
					break;
				case 5:
					vVar0 = { -1527.2f, -2183.455f, 40.5f };
					break;
			}
			break;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_NEO"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { 585.2773f, -627.6782f, 40.5f };
					break;
				case 1:
					vVar0 = { 576.2587f, -1625.504f, 40.5f };
					break;
				case 2:
					vVar0 = { -1887.101f, -1178.01f, 73.08592f };
					break;
				case 3:
					vVar0 = { 1529.85f, -2172.842f, 40.5f };
					break;
				case 4:
					vVar0 = { 2825.028f, 2179.208f, 155.6f };
					break;
				case 5:
					vVar0 = { 2258.411f, 333.4229f, 43.45484f };
					break;
			}
			break;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_STONE"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1833.167f, -2237.894f, 40.5f };
					break;
				case 1:
					vVar0 = { -1631.138f, 1663.711f, 245.4464f };
					break;
				case 2:
					vVar0 = { -1990.375f, 1065.361f, 167.4834f };
					break;
				case 3:
					vVar0 = { -2502.919f, -1549.846f, 143.1926f };
					break;
				case 4:
					vVar0 = { 1132.783f, -130.2699f, 84.65631f };
					break;
				case 5:
					vVar0 = { 796.393f, -1216.777f, 40.5f };
					break;
			}
			break;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_PET_WOOD"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -2832.628f, 1112.049f, 270.5342f };
					break;
				case 1:
					vVar0 = { -1009.801f, 1778.724f, 291.9197f };
					break;
				case 2:
					vVar0 = { -1118.27f, 1078.411f, 164.9164f };
					break;
				case 3:
					vVar0 = { -2058.14f, 1136.092f, 184.418f };
					break;
				case 4:
					vVar0 = { -1210.107f, 1059.117f, 170.5688f };
					break;
				case 5:
					vVar0 = { -2175.26f, 1071.477f, 219.0795f };
					break;
			}
			break;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_PET_WOOD_RAINBOW"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1438.599f, 1353.098f, 226.0597f };
					break;
				case 1:
					vVar0 = { -1159.856f, 1226.773f, 221.4363f };
					break;
				case 2:
					vVar0 = { -1794.874f, 1699.672f, 237.3792f };
					break;
				case 3:
					vVar0 = { -2553.499f, 1253.569f, 242.0133f };
					break;
				case 4:
					vVar0 = { -2006.899f, 1164.015f, 175.4224f };
					break;
				case 5:
					vVar0 = { -1915.941f, 1229.928f, 185.1237f };
					break;
			}
			break;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_SEA_LILY"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -2067.73f, 1223.025f, 227.7125f };
					break;
				case 1:
					vVar0 = { -1464.237f, 1544.253f, 252.5666f };
					break;
				case 2:
					vVar0 = { -1608.148f, 1746.335f, 279.4192f };
					break;
				case 3:
					vVar0 = { -886.0485f, 1362.238f, 243.5741f };
					break;
				case 4:
					vVar0 = { -1164.172f, 1429.997f, 303.1261f };
					break;
				case 5:
					vVar0 = { -1206.728f, 1147.919f, 168.9505f };
					break;
			}
			break;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_SEA_SCORPION"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1487.043f, 1250.889f, 313.5081f };
					break;
				case 1:
					vVar0 = { -761.7214f, 1628.036f, 280.7698f };
					break;
				case 2:
					vVar0 = { -1524.802f, 1718.539f, 239.584f };
					break;
				case 3:
					vVar0 = { -2110.301f, 1834.77f, 254.1476f };
					break;
				case 4:
					vVar0 = { -928.1132f, 1548.871f, 237.9028f };
					break;
				case 5:
					vVar0 = { -1408.09f, 1442.827f, 225.8582f };
					break;
			}
			break;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_TOOTH_SERRATED"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1624.272f, 1763.458f, 298.7617f };
					break;
				case 1:
					vVar0 = { -2179.87f, 1803.763f, 267.5596f };
					break;
				case 2:
					vVar0 = { -816.92f, 1492.335f, 259.852f };
					break;
				case 3:
					vVar0 = { -1603.005f, 1868.278f, 318.9729f };
					break;
				case 4:
					vVar0 = { -1981.376f, 1884.209f, 263.4395f };
					break;
				case 5:
					vVar0 = { -1059.849f, 2018.669f, 387.223f };
					break;
			}
			break;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_TAIL_SPIKE"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1956.95f, 1877.6f, 247.212f };
					break;
				case 1:
					vVar0 = { -986.2538f, 2175.431f, 340.0901f };
					break;
				case 2:
					vVar0 = { -1191.99f, 2091.873f, 348.0234f };
					break;
				case 3:
					vVar0 = { -1467.143f, 2030.774f, 338.4102f };
					break;
				case 4:
					vVar0 = { -1455.401f, 1864.565f, 306.1352f };
					break;
				case 5:
					vVar0 = { -1876.256f, 2176.413f, 312.5924f };
					break;
			}
			break;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_TOE_CLAW"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1981.892f, 2189.041f, 333.734f };
					break;
				case 1:
					vVar0 = { -1328.974f, 2290.826f, 308.623f };
					break;
				case 2:
					vVar0 = { -1589.428f, 2207.341f, 287.4981f };
					break;
				case 3:
					vVar0 = { -1721.467f, 2542.711f, 472.1256f };
					break;
				case 4:
					vVar0 = { -1762.796f, 2029.415f, 263.6463f };
					break;
				case 5:
					vVar0 = { -1492.626f, 2218.59f, 294.178f };
					break;
			}
			break;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_TOOTH_TREX"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1730.371f, 2193.851f, 292.6352f };
					break;
				case 1:
					vVar0 = { -2007.754f, 2271.368f, 402.5477f };
					break;
				case 2:
					vVar0 = { -1438.578f, 2395.003f, 313.6951f };
					break;
				case 3:
					vVar0 = { -1013.861f, 2632.919f, 311.9872f };
					break;
				case 4:
					vVar0 = { -1154.014f, 2343.382f, 324.9037f };
					break;
				case 5:
					vVar0 = { -1506.043f, 2455.094f, 418.0699f };
					break;
			}
			break;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_TULLY_MONSTER"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -1344.81f, 2543.583f, 314.6429f };
					break;
				case 1:
					vVar0 = { -1137.542f, 2415.694f, 331.9357f };
					break;
				case 2:
					vVar0 = { -424.708f, 2767.098f, 338.0498f };
					break;
				case 3:
					vVar0 = { -540.3226f, 2599.64f, 337.9672f };
					break;
				case 4:
					vVar0 = { -1414.336f, 2732.175f, 411.6711f };
					break;
				case 5:
					vVar0 = { -726.2466f, 2680.246f, 347.301f };
					break;
			}
			break;
		case joaat("PROVISION_ROLE_COLLECTOR_FOSSIL_PET_WOOD_YELLOW"):
			switch (iParam0)
			{
				case 0:
					vVar0 = { -846.821f, 2662.214f, 347.036f };
					break;
				case 1:
					vVar0 = { -1034.102f, 2872.896f, 370.5002f };
					break;
				case 2:
					vVar0 = { -5031.42f, -4073.341f, -29.08f };
					break;
				case 3:
					vVar0 = { -1065.014f, 2940.17f, 406.0876f };
					break;
				case 4:
					vVar0 = { -653.7477f, 2688.019f, 343.4409f };
					break;
				case 5:
					vVar0 = { -1480.449f, 3113.121f, 494.9475f };
					break;
			}
			break;
	}
	return vVar0;
}

bool func_412(int iParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;

	if (func_5(iParam0, -1522723129))
	{
		return false;
	}
	iVar0 = func_87(iParam0, 0, 0, 0);
	if (!func_5(iParam0, -352095726))
	{
		iVar1 = func_402(12);
		if (iVar1 < 5)
		{
			if (func_5(iParam0, 683680997))
			{
				return false;
			}
		}
		if (iVar1 < 10)
		{
			if (func_5(iParam0, -283942357))
			{
				return false;
			}
		}
	}
	if (iVar0 == 10)
	{
		return false;
	}
	if (PERSISTENCE::_0xB6E1A185C2B9319A(vParam1))
	{
		return false;
	}
	return true;
}

bool func_413(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		if (uParam0->f_11[iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_414(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1 + 1;
	if (func_441(iVar0))
	{
		return false;
	}
	if (!func_251(*(uParam0[iVar0 /*3*/])))
	{
		return false;
	}
	return true;
}

int func_415(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_442(&uParam0, iParam4, bParam5, iParam6);
}

int func_416(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_247(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_417(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346.f_20)
	{
		if (Global_1293346.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_2 = iParam2;
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_443(iParam0, iParam1, iParam2, iParam3);
}

int func_418(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_419(int iParam0, int iParam1)
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

void func_420(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_421(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_370(*iParam0);
	iVar1 = func_369(*iParam0);
	if (iParam1 < 1 || iParam1 > func_375(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_422(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_423(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_424(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_425(int iParam0, int iParam1)
{
	return iParam1 == func_4(iParam0, 1224357681);
}

int func_426(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3[15];

	iVar0 = COLLECTION::_0xCC644BC1DD655269(iParam1, 0);
	if (!func_139(iVar0))
	{
		return 0;
	}
	iVar1 = ITEMDATABASE::_0xF540239F9937033B(iVar0, -489628648);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (ITEMDATABASE::_0xF27F01BBF5ACD3F3(iVar0, -489628648, iVar2, &(Var3[iVar2 /*2*/])))
		{
			if (func_22(Var3[iVar2 /*2*/], 0) && Var3[iVar2 /*2*/] == iParam0)
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_427(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = Global_1915715.f_20646.f_1010.f_201;
	if (iParam0 != 0)
	{
		if (iVar1 < 200)
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (Global_1915715.f_20646.f_1010[iVar0] == iParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_428(int iParam0, int iParam1)
{
	struct<4> Var0;
	int iVar5;
	int iVar6;

	if (!func_22(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar5 = func_444(iParam1);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_445(6, &Var0))
	{
		return 0;
	}
	Var0.f_2 = -815325344;
	Var0.f_3 = func_446(iVar5);
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

int func_429(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_447(iParam0);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 5)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS(iParam0, &iVar1))
		{
			if ((iVar1 == 4 || iVar1 == 2) || (iVar0 == 0 && iVar1 != 0))
			{
				func_417(iParam0, iVar1, 0, 0);
				iVar0 = iVar1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 5)
		{
			func_417(iParam0, 4, 0, 0);
		}
	}
	return iVar0;
}

int func_430(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 205718222;
			case 1:
				return 866168015;
			case 2:
				return -1103707655;
			default:
				break;
		}
		iVar0 = 3;
	}
	if (bParam2)
	{
		switch ((iParam0 - iVar0))
		{
			case 0:
				return 75922725;
			case 1:
				return 1070046552;
			case 2:
				return -1843707398;
			case 3:
				return -1571233163;
			case 4:
				return -1197011183;
			default:
				break;
		}
	}
	return 0;
}

bool func_431(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_327(iParam0))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0xF540239F9937033B(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam4)
		{
		}
		return false;
	}
	if (!bParam4)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xF27F01BBF5ACD3F3(iParam0, iParam1, iVar0, uParam2[iVar0 /*2*/]))
		{
			Jump @112; //curOff = 100
		}
		else if (!bParam4)
		{
		}
		iVar0++;
	}
	if (bParam5)
	{
		func_448(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_432(int iParam0)
{
	return func_169(iParam0) == 1946043663;
}

bool func_433(int iParam0)
{
	return func_169(iParam0) == -126813555;
}

bool func_434(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iParam0, 0);
}

int func_435()
{
	if (func_3() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_436(int iParam0, int iParam1)
{
	if (iParam0 == 15 && func_5(iParam1, -2051813666))
	{
		return 1;
	}
	return 0;
}

int func_437(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;

	if (!func_22(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_269(0) };
	Var0.f_4 = func_449(iParam1);
	Var5 = { func_195(iParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var5))
	{
		return 0;
	}
	iVar9 = INVENTORY::_0xC97E0D2302382211(func_175(0), &Var5, 0);
	return iVar9;
}

bool func_438(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 22)
	{
		return false;
	}
	return true;
}

int func_439(int iParam0)
{
	if (!func_438(iParam0))
	{
		return 0;
	}
	return Global_1293346.f_3009[iParam0];
}

int func_440(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!func_438(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		iVar0 = func_450(iParam0);
		if (func_22(iVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = func_451(255);
			}
			else
			{
				iVar1 = func_275(iVar0, func_269(1), joaat("SLOTID_PROGRESSION"), 1, 0, 0);
			}
			Global_1293346.f_3009[iParam0] = iVar1;
			return iVar1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		iVar0 = func_452(iParam0);
		if (func_22(iVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = NETWORK::_NETWORK_GET_XP();
			}
			else
			{
				iVar1 = func_275(iVar0, func_269(1), joaat("SLOTID_PROGRESSION"), 1, 0, 0);
			}
			Global_1293346.f_2985[iParam0] = iVar1;
			return iVar1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_441(int iParam0)
{
	if (iParam0 > 2)
	{
		return true;
	}
	return false;
}

int func_442(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_453(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

void func_443(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1293346.f_20 < 20)
	{
		Global_1293346.f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1293346.f_20.f_1[iVar0 /*21*/] = { Global_1293346.f_20.f_1[iVar0 + 1 /*21*/] };
			iVar0++;
		}
	}
	func_454(&(Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/]));
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/] = iParam0;
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

int func_444(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 180))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 133:
			return 27;
		case 153:
			return 28;
		case 154:
			return 29;
		case 26:
			return 14;
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
			return 38;
		case 134:
			return 37;
		case 3:
		case 4:
		case 40:
		case 63:
		case 76:
		case 148:
			return 15;
		case 64:
		case 65:
		case 66:
		case 67:
			return 16;
		case 120:
		case 122:
		case 124:
		case 126:
		case 127:
		case 129:
			return 25;
		case 45:
		case 83:
		case 155:
		case 159:
		case 164:
		case 168:
		case 172:
			return 0;
		case 6:
		case 23:
		case 33:
		case 48:
		case 69:
		case 84:
		case 99:
		case 102:
		case 108:
		case 156:
		case 160:
		case 165:
		case 169:
		case 173:
			return 3;
		case 0:
		case 7:
		case 34:
		case 49:
		case 85:
		case 103:
		case 157:
		case 161:
		case 166:
		case 170:
		case 174:
			return 6;
		case 19:
		case 53:
			return 7;
		case 22:
		case 31:
		case 46:
		case 93:
		case 116:
		case 130:
			return 4;
		case 20:
			return 33;
		case 21:
		case 32:
		case 47:
		case 92:
		case 115:
		case 131:
			return 33;
		case 9:
		case 30:
		case 44:
		case 68:
		case 82:
		case 104:
			return 10;
		case 1:
		case 14:
		case 24:
		case 27:
		case 35:
		case 51:
		case 74:
		case 87:
		case 98:
		case 101:
		case 111:
		case 117:
			return 2;
		case 2:
		case 15:
		case 25:
		case 28:
		case 39:
		case 52:
		case 88:
		case 97:
		case 100:
		case 112:
		case 118:
			return 1;
		case 8:
		case 43:
		case 78:
			return 8;
		case 13:
		case 41:
		case 50:
		case 71:
		case 86:
		case 96:
		case 107:
			return 9;
		case 121:
		case 123:
		case 125:
		case 128:
			return 26;
		case 163:
			return 5;
		case 5:
		case 29:
		case 42:
		case 77:
			return 12;
		case 10:
		case 36:
		case 54:
		case 56:
		case 75:
		case 79:
		case 81:
		case 91:
		case 94:
		case 105:
		case 110:
			return 30;
		case 11:
		case 37:
		case 55:
		case 57:
		case 80:
		case 95:
		case 106:
			return 31;
		case 16:
		case 17:
		case 18:
		case 38:
		case 58:
		case 59:
		case 72:
		case 73:
		case 132:
			return 32;
		case 70:
		case 90:
			return 17;
		case 119:
			return 11;
		case 176:
			return 19;
		case 177:
			return 20;
		case 178:
			return 21;
		case 12:
		case 60:
			return 18;
		case 152:
			return 34;
		case 158:
		case 162:
		case 167:
		case 171:
		case 175:
			return 23;
		case 179:
			return 20;
		case 109:
		case 113:
		case 114:
			return 35;
		case 61:
		case 62:
		case 89:
			return 36;
		case 149:
		case 150:
		case 151:
			return 39;
		default:
			break;
	}
	return -1;
}

bool func_445(int iParam0, var uParam1)
{
	if (!func_455(iParam0))
	{
		return false;
	}
	*uParam1 = Global_1915666[iParam0];
	if (*uParam1 == 0)
	{
		return false;
	}
	return true;
}

int func_446(int iParam0)
{
	if (func_3() != -1)
	{
		if (Global_1071686.f_12)
		{
			if (iParam0 == 3)
			{
				return joaat("ST_GENERAL_INTRO");
			}
		}
	}
	return func_456(iParam0);
}

int func_447(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346.f_20)
	{
		if (Global_1293346.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			return Global_1293346.f_20.f_1[iVar0 /*21*/].f_1;
		}
		iVar0++;
	}
	return 0;
}

void func_448(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	float fVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_0xE81D0378A384E755(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if ((*uParam2)[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (fVar21[iVar0] != 1f && (uParam2[iVar0 /*2*/])->f_1 > 0)
		{
			if (*uParam2)[iVar0 /*2*/] == joaat("CURRENCY_GOLD_BAR")
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 10000);
			}
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_169((*uParam2)[iVar0 /*2*/]) != -829303394)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_449(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1084182731;
		case 1:
			return -1360128126;
		default:
			break;
	}
	return 1084182731;
}

int func_450(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("CHARACTER_RANK");
		case 7:
			return joaat("CHARACTER_RANK_BOUNTY_HUNTER");
		case 12:
			return joaat("CHARACTER_RANK_COLLECTOR");
		case 11:
			return joaat("CHARACTER_RANK_TRADER");
		case 13:
			return joaat("CHARACTER_RANK_SEASON_005");
		case 14:
			return joaat("CHARACTER_RANK_VIP_SEASON_005");
		case 15:
			return joaat("CHARACTER_RANK_MOONSHINER");
		case 16:
			return joaat("CHARACTER_RANK_SEASON_006");
		case 17:
			return joaat("CHARACTER_RANK_VIP_SEASON_006");
		case 18:
			return -296143963;
		case 19:
			return joaat("CHARACTER_RANK_SEASON_007");
		case 20:
			return joaat("CHARACTER_RANK_VIP_SEASON_007");
		case 21:
			return 1936286816;
		case 22:
			return -361115047;
		default:
			break;
	}
	return 0;
}

int func_451(int iParam0)
{
	if (iParam0 == 255 || iParam0 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
	{
		return NETWORK::_NETWORK_GET_RANK();
	}
	return Global_1145091[iParam0 /*35*/];
}

int func_452(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("CHARACTER_XP");
		case 7:
			return joaat("CHARACTER_XP_BOUNTY_HUNTER");
		case 12:
			return joaat("CHARACTER_XP_COLLECTOR");
		case 11:
			return joaat("CHARACTER_XP_TRADER");
		case 13:
			return joaat("CHARACTER_XP_SEASON_005");
		case 14:
			return joaat("CHARACTER_XP_VIP_SEASON_005");
		case 15:
			return joaat("CHARACTER_XP_MOONSHINER");
		case 16:
			return joaat("CHARACTER_XP_SEASON_006");
		case 17:
			return joaat("CHARACTER_XP_VIP_SEASON_006");
		case 18:
			return -399749454;
		case 19:
			return 1428145499;
		case 20:
			return -1318783204;
		case 21:
			return 893948884;
		case 22:
			return -187008013;
		default:
			break;
	}
	return 0;
}

bool func_453(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_175(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_361(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

void func_454(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_457(&(uParam0->f_4));
}

bool func_455(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_456(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("ST_DOCTOR");
		case 3:
			return joaat("ST_GENERAL");
		case 4:
			return joaat("ST_FENCE");
		case 33:
			return joaat("ST_MOONSHINE_STILL");
		case 6:
			return joaat("ST_GUNSMITH");
		case 7:
			return joaat("ST_TAILOR");
		case 8:
			return joaat("ST_BARBER");
		case 1:
			return joaat("ST_TRAIN_STATION");
		case 2:
			return joaat("ST_POST_OFFICE");
		case 9:
			return joaat("ST_HORSE_SHOP");
		case 10:
			return joaat("ST_BUTCHER");
		case 11:
			return joaat("ST_DYNAMIC");
		case 22:
			return joaat("ST_QUARTERMASTER");
		case 23:
			return joaat("ST_HORSE_TRAINER");
		case 24:
			return joaat("ST_BLACKSMITH");
		case 25:
			return joaat("ST_BOUNTYHUNTING_MP_RETURN");
		case 26:
			return joaat("ST_COACH");
		case 5:
			return joaat("ST_HORSE_FENCE");
		case 12:
			return joaat("ST_BANK");
		case 14:
			return joaat("ST_BAIT");
		case 30:
			return joaat("ST_BARTENDER");
		case 31:
			return joaat("ST_PIANIST");
		case 32:
			return joaat("ST_MUSICIAN");
		case 15:
			return joaat("ST_TRAPPER");
		case 16:
			return joaat("ST_PEARSON");
		case 17:
			return joaat("ST_HOTEL");
		case 27:
			return joaat("ST_WILDERNESS_SUPPLIES");
			return joaat("ST_CAMP_LOCKBOX");
			return joaat("ST_CAMP_BUTCHERTABLE");
			return joaat("ST_HANDHELD");
			return joaat("ST_WEAPON_MOD_STORE");
			return joaat("ST_CLOTHING");
			return joaat("ST_CAMP_SHAVING");
			return joaat("ST_PHOTO_STUDIO");
			return joaat("ST_HONOR_MP");
			return joaat("ST_THEATER_MP");
			return joaat("ST_TRAVELLING_SALESMAN");
			return joaat("ST_MOONSHINE_PROPERTY");
			return 374439621;
			return 0;
		}

void func_457(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -142743235;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	StringCopy(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
}

