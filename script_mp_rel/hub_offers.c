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
	int iLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 11;
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
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 5;
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
#endregion

void __EntryFunction__()
{
	fLocal_15 = 1f;
	fLocal_16 = 1f;
	if (func_1(&iLocal_21))
	{
		func_2(&iLocal_21);
	}
	func_3(&iLocal_21);
}

int func_1(int iParam0)
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		return 0;
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_4(iParam0, 0);
	if (!func_5(&(iParam0->f_18)))
	{
		return 0;
	}
	func_6(&(iParam0->f_42));
	if (!func_7(&(iParam0->f_46)))
	{
		return 0;
	}
	func_8(iParam0);
	return 1;
}

void func_2(int* iParam0)
{
	bool bVar0;

	bVar0 = false;
	while (!bVar0)
	{
		if (func_9(iParam0))
		{
			bVar0 = true;
		}
		func_10(iParam0);
		func_11(iParam0);
		func_12(&(iParam0->f_18), &(iParam0->f_42));
		func_13(&(iParam0->f_42));
		func_14(&(iParam0->f_46));
		BUILTIN::WAIT(0);
	}
}

void func_3(int iParam0)
{
	func_15(&(iParam0->f_79));
	func_16(iParam0);
	func_17(&(iParam0->f_46));
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_4(int iParam0, int iParam1)
{
	iParam0->f_1 = iParam1;
}

int func_5(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_18(uParam0->f_2[iVar0 /*3*/]);
		iVar0++;
	}
	func_18(&(uParam0->f_18));
	return 1;
}

void func_6(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0f;
}

int func_7(int* iParam0)
{
	func_19(iParam0, 0);
	StringCopy(&(iParam0->f_1), "", 128);
	StringCopy(&(iParam0->f_17), "", 128);
	return 1;
}

int func_8(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 2;
	iVar2 = 1;
	while (iVar2 <= (iVar0 - 1))
	{
		iVar1 = func_20(iVar2, 1);
		if (!func_21(iParam0, iVar1))
		{
			return 0;
		}
		iVar2++;
	}
	return 1;
}

int func_9(var uParam0)
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		return 1;
	}
	return 0;
}

void func_10(int* iParam0)
{
	var uVar0;
	struct<4> Var4;

	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(-21855895))
	{
		if (!UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(-21855895, &uVar0))
		{
		}
		else
		{
			func_22(iParam0, &uVar0, 0);
			UIEVENTS::_EVENT_MANAGER_POP_EVENT(-21855895);
		}
	}
	if (func_23(iParam0, 1))
	{
		Var4 = { func_24(iParam0) };
		if (func_25(iParam0, &Var4))
		{
			func_22(iParam0, &Var4, 1);
		}
		func_26(iParam0, 1, 0);
	}
}

void func_11(int* iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = UIAPPS::_0x96FD694FE5BE55DC(1821104826);
	iVar1 = func_27(iParam0);
	iVar0 = joaat("main");
	if (iVar0 != iVar1)
	{
		if (iVar1 != 0)
		{
			func_28(iParam0, iVar1);
		}
		func_4(iParam0, iVar0);
		func_29(iParam0, iVar0);
	}
	func_30(iParam0, iVar0);
}

void func_12(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (*uParam0)
	{
		if (!func_31(uParam1))
		{
			*uParam0 = 0;
		}
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = &uParam0->f_2[iVar1 /*3*/];
		if (!func_32(uParam0->f_2[iVar1 /*3*/]))
		{
		}
		else
		{
			if (!func_31(uParam1))
			{
				if (!func_33(uParam1, 35f, 1065353216 /* Float: 1f */))
				{
				}
				Jump @201; //curOff = 96
			}
			else
			{
				switch (func_34(uParam0->f_2[iVar1 /*3*/]))
				{
					case 0:
					case 2:
					case 4:
						break;
					case 3:
						break;
					default:
						iVar0++;
						Jump @201; //curOff = 156
						if (func_35(uParam1) < 1f)
						{
							iVar0++;
						}
						else
						{
							func_36(uParam1);
							func_37(uParam0, iVar2);
							*uParam0 = 1;
						}
						iVar1++;
						uParam0->f_1 = iVar0 > 0;
					}
				}
			}

void func_13(var uParam0)
{
	if (!func_31(uParam0))
	{
		return;
	}
	if (uParam0->f_2 > 0f)
	{
		if (func_35(uParam0) > uParam0->f_2)
		{
			*uParam0 = 0;
			return;
		}
	}
	func_38(0);
	HUD::_UIPROMPT_DISABLE_PROMPTS_THIS_FRAME();
}

void func_14(int* iParam0)
{
	if (!func_39(*iParam0, 1))
	{
		return;
	}
	if (!AUDIO::_0xD9130842D7226045(&(iParam0->f_1), 0))
	{
		return;
	}
	AUDIO::PLAY_SOUND_FRONTEND(&(iParam0->f_17), &(iParam0->f_1), false, 0);
	func_40(iParam0, 1);
}

void func_15(var uParam0)
{
	if (*uParam0 == 0)
	{
		return;
	}
	func_41(uParam0, *uParam0);
}

int func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 2;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = func_20(iVar2, 1);
		func_42(iParam0, iVar1);
		iVar2++;
	}
	return 1;
}

void func_17(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(iParam0->f_1)))
	{
		AUDIO::_0x531A78D6BF27014B(&(iParam0->f_1));
	}
	func_40(iParam0, 0);
	StringCopy(&(iParam0->f_1), "", 128);
	StringCopy(&(iParam0->f_17), "", 128);
}

void func_18(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
}

void func_19(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_20(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return joaat("main");
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

int func_21(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("main"):
			return func_43(iParam0);
	}
	return 0;
}

void func_22(var uParam0, var uParam1, int iParam2)
{
	switch (*uParam1)
	{
		case -1740156697:
			func_44(uParam0, uParam1, iParam2);
			func_45(uParam0, uParam1);
			break;
		case -1203660660:
			func_46(uParam0, uParam1, iParam2);
			break;
	}
}

bool func_23(int* iParam0, int iParam1)
{
	return func_39(*iParam0, iParam1);
}

struct<4> func_24(var uParam0)
{
	return uParam0->f_14;
}

int func_25(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 1;
	if (func_47(uParam0) > 0)
	{
		if (uParam1->f_1 >= func_47(uParam0))
		{
			uParam1->f_1 = (func_47(uParam0) - 1);
		}
		if (!func_48(uParam0, uParam1->f_1, &(uParam1->f_3)))
		{
		}
		if (*uParam1 != -1740156697)
		{
			*uParam1 = -1740156697;
		}
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam1->f_3))
		{
			uParam1->f_2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam1->f_3, func_49(57));
		}
		else
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_26(int* iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_19(iParam0, iParam1);
	}
	else
	{
		func_40(iParam0, iParam1);
	}
}

var func_27(var uParam0)
{
	return uParam0->f_1;
}

void func_28(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("main"):
			func_50(uParam0);
			break;
	}
}

void func_29(int* iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("main"):
			func_51(iParam0);
			break;
	}
}

void func_30(int* iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("main"):
			func_52(iParam0);
			break;
	}
}

bool func_31(var uParam0)
{
	return *uParam0;
}

int func_32(var uParam0)
{
	if (*uParam0 == -1)
	{
		return 0;
	}
	if (uParam0->f_1 == 0)
	{
		return 0;
	}
	return 1;
}

int func_33(var uParam0, float fParam1, int iParam2)
{
	if (func_31(uParam0))
	{
		return 0;
	}
	*uParam0 = 1;
	uParam0->f_1 = func_53();
	uParam0->f_2 = fParam1;
	uParam0->f_3 = iParam2;
	return 1;
}

int func_34(var uParam0)
{
	return func_54(*uParam0);
}

float func_35(var uParam0)
{
	if (!*uParam0)
	{
		return 0f;
	}
	return MISC::ABSF((func_53() - uParam0->f_1));
}

void func_36(var uParam0)
{
	if (func_35(uParam0) < uParam0->f_3)
	{
		uParam0->f_2 = MISC::ABSF((uParam0->f_3 - func_35(uParam0)));
	}
	else
	{
		*uParam0 = 0;
	}
}

int func_37(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (&uParam0->f_2[iVar0 /*3*/] != iParam1)
		{
		}
		else
		{
			MISC::_COPY_MEMORY(&(uParam0->f_18), uParam0->f_2[iVar0 /*3*/], 3);
			func_18(uParam0->f_2[iVar0 /*3*/]);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_38(int iParam0)
{
	if (Global_1939067->f_102.f_2 >= iParam0)
	{
		return;
	}
	Global_1939067->f_102.f_2 = iParam0;
}

bool func_39(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

void func_40(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_41(var uParam0, int iParam1)
{
	int iVar0;

	if (*uParam0 != iParam1)
	{
		return;
	}
	iVar0 = (Global_1275573->f_21 - uParam0->f_1);
	TELEMETRY::_0x3255D4D2082C6339(*uParam0, iVar0, uParam0->f_2);
	func_55(uParam0);
}

void func_42(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("main"):
			func_56(iParam0);
			break;
	}
}

int func_43(int iParam0)
{
	if (!func_57(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_44(int* iParam0, var uParam1, int iParam2)
{
	if (iParam0->f_14.f_1 != uParam1->f_1)
	{
		func_58(&(iParam0->f_82));
	}
	switch (uParam1->f_2)
	{
		case -571766943:
		case 705463926:
			if (!func_59(iParam0, &(uParam1->f_3)))
			{
				func_60(iParam0);
			}
			break;
		case -1948187754:
		case -1585562139:
		case -797654126:
			if (!func_61(iParam0, &(uParam1->f_3)))
			{
				func_60(iParam0);
			}
			break;
		default:
			func_60(iParam0);
			break;
	}
}

void func_45(var uParam0, var uParam1)
{
	if (*uParam1 != -1740156697)
	{
		return;
	}
	MISC::_COPY_MEMORY(&(uParam0->f_14), uParam1, 4);
}

void func_46(var uParam0, var uParam1, int iParam2)
{
	switch (uParam1->f_2)
	{
		case -797654126:
		case -571766943:
			func_62();
			func_63();
			func_64();
			func_65();
			func_66();
			break;
		case -1948187754:
			if (!func_67(uParam0, &(uParam1->f_3)))
			{
			}
			break;
	}
}

int func_47(var uParam0)
{
	return DATABINDING::_DATABINDING_GET_ARRAY_COUNT(&(uParam0->f_2[1]));
}

int func_48(int* iParam0, int iParam1, var uParam2)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(&(iParam0->f_2[1]));
	if (iParam1 < 0 || iParam1 >= iVar0)
	{
		return 0;
	}
	*uParam2 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(&(iParam0->f_2[1]), iParam1);
	return 1;
}

char* func_49(int iParam0)
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

void func_50(int iParam0)
{
	func_58(&(iParam0->f_82));
	func_68(-712383481);
}

int func_51(int* iParam0)
{
	func_69(iParam0);
	func_26(iParam0, 0, 1);
	func_60(iParam0);
	func_70(&(iParam0->f_84), 4000);
	func_71(-712383481);
	return 1;
}

void func_52(int* iParam0)
{
	if (func_72(&(iParam0->f_84)))
	{
		if (func_73(&(iParam0->f_18)))
		{
		}
		else
		{
			func_26(iParam0, 0, 1);
		}
	}
	func_74(iParam0);
	if (func_75(&(iParam0->f_82)))
	{
		func_26(iParam0, 0, 1);
	}
	if (func_23(iParam0, 0))
	{
		func_76(iParam0);
		func_26(iParam0, 0, 0);
	}
}

float func_53()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_54(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_77(iParam0);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 5)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS(iParam0, &iVar1))
		{
			if ((iVar1 == 4 || iVar1 == 2) || (iVar0 == 0 && iVar1 != 0))
			{
				func_78(iParam0, iVar1, 0, 0);
				iVar0 = iVar1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 5)
		{
			func_78(iParam0, 4, 0, 0);
		}
	}
	return iVar0;
}

void func_55(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_56(int iParam0)
{
	func_50(iParam0);
}

int func_57(int iParam0)
{
	iParam0->f_2[0] = DATABINDING::_0xD7DB94AB78E8EBE4("", -1505966001);
	iParam0->f_2[1] = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST_BY_HASH(&(iParam0->f_2[0]), -849224310);
	iParam0->f_2[2] = DATABINDING::_DATABINDING_ADD_DATA_STRING_BY_HASH(&(iParam0->f_2[0]), 616081382, "");
	iParam0->f_2[3] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(&(iParam0->f_2[0]), -781821188, 0);
	iParam0->f_2[4] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(&(iParam0->f_2[0]), -3675574, 0);
	iParam0->f_2[5] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(&(iParam0->f_2[0]), -536627617, 0);
	iParam0->f_2[6] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(&(iParam0->f_2[0]), joaat("enabled"), 1);
	iParam0->f_2[7] = DATABINDING::_DATABINDING_ADD_DATA_STRING_BY_HASH(&(iParam0->f_2[0]), -242834141, "");
	iParam0->f_2[8] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(&(iParam0->f_2[0]), 1959966745, 0);
	iParam0->f_2[9] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(&(iParam0->f_2[0]), -1952794871, 0);
	iParam0->f_2[10] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(&(iParam0->f_2[0]), -129582355, 0);
	return 1;
}

int func_58(var uParam0)
{
	if (!func_79(*uParam0, 0))
	{
		return 0;
	}
	if (!func_80(*uParam0))
	{
		return 1;
	}
	func_81(*uParam0);
	*uParam0 = 0;
	uParam0->f_1 = 1;
	return 1;
}

int func_59(var uParam0, var uParam1)
{
	struct<4> Var0;
	struct<10> Var4;
	char* sVar18;
	int iVar19;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam1))
	{
		return 0;
	}
	func_82(uParam0, uParam1);
	if (!func_83(uParam1, &Var0))
	{
		return 0;
	}
	Var4.f_9 = -1591664384;
	if (!func_84(Var0, &Var4, 0, 0, -1))
	{
	}
	func_85(Var4.f_4);
	func_86(&(uParam0->f_82), Var4.f_4);
	iVar19 = 0;
	if (func_87(&Var0))
	{
		sVar18 = func_88(1);
	}
	else if (func_89(Var0))
	{
		sVar18 = func_90(Var0);
		iVar19 = 1;
	}
	else
	{
		sVar18 = func_90(Var0);
	}
	func_91(uParam0, iVar19);
	func_92(uParam0, sVar18);
	return 1;
}

void func_60(int* iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&(iParam0->f_2[2]), "");
	func_91(iParam0, 0);
}

int func_61(int* iParam0, var uParam1)
{
	struct<4> Var0;
	struct<10> Var4;
	char* sVar18;
	int iVar19;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam1))
	{
		return 0;
	}
	func_82(iParam0, uParam1);
	if (!func_83(uParam1, &Var0))
	{
		return 0;
	}
	Var4.f_9 = -1591664384;
	if (!func_84(Var0, &Var4, 0, 0, -1))
	{
		return 0;
	}
	func_85(Var4.f_4);
	func_86(&(iParam0->f_82), Var4.f_4);
	iVar19 = 0;
	if (func_93(Var4.f_4))
	{
		sVar18 = func_88(8);
	}
	else if (func_87(&Var0))
	{
		sVar18 = func_88(0);
	}
	else if (func_89(Var0))
	{
		sVar18 = func_90(Var0);
		iVar19 = 1;
	}
	else
	{
		sVar18 = func_90(Var0);
	}
	func_91(iParam0, iVar19);
	func_92(iParam0, sVar18);
	return 1;
}

int func_62()
{
	if (!UIAPPS::_IS_APP_ACTIVE(29649618) && !UIAPPS::_IS_APP_RUNNING(29649618))
	{
		return 0;
	}
	UIAPPS::_CLOSE_APP_BY_HASH(29649618);
	return 1;
}

void func_63()
{
	func_94(0);
}

void func_64()
{
	if (!UIAPPS::_IS_APP_ACTIVE(1821104826) && !UIAPPS::_IS_APP_RUNNING(1821104826))
	{
		return;
	}
	UIAPPS::_CLOSE_APP_BY_HASH(1821104826);
}

void func_65()
{
	Global_1051388->f_3577 = 1;
	func_95(&(Global_1051388->f_3579));
}

void func_66()
{
	if (!UIAPPS::_IS_APP_ACTIVE(1890312850) && !UIAPPS::_IS_APP_RUNNING(1890312850))
	{
		return;
	}
	UIAPPS::_CLOSE_APP_BY_HASH(1890312850);
}

int func_67(var uParam0, var uParam1)
{
	struct<4> Var0;
	struct<10> Var4;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam1))
	{
		return 0;
	}
	if (!func_83(uParam1, &Var0))
	{
		return 0;
	}
	Var4.f_9 = -1591664384;
	if (!func_84(Var0, &Var4, 1, 0, -1))
	{
		return 0;
	}
	if (!func_79(Var4.f_4, 0))
	{
		return 0;
	}
	if (!func_96(Var4.f_4))
	{
		return 0;
	}
	if (!func_97(Var4.f_4))
	{
		return 0;
	}
	if (!func_98(uParam0, Var4.f_4))
	{
		return 0;
	}
	return 1;
}

void func_68(int iParam0)
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
	func_99(Global_1958309);
}

int func_69(var uParam0)
{
	if (!func_100(uParam0->f_2[1]))
	{
		return 0;
	}
	return 1;
}

void func_70(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_71(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1958309->f_2 != -1 && Global_1958309->f_2 != iParam0)
	{
		func_68(Global_1958309->f_2);
	}
	Global_1958309->f_1 = Global_1275573->f_21;
	Global_1958309->f_2 = iParam0;
}

int func_72(var uParam0)
{
	if (uParam0->f_3 <= 0)
	{
		if (func_101(uParam0))
		{
			func_95(uParam0);
		}
		return 0;
	}
	if (!func_101(uParam0))
	{
		func_102(uParam0, 1);
		return 1;
	}
	if (!func_103(uParam0) >= uParam0->f_3)
	{
		return 0;
	}
	func_104(uParam0);
	return 1;
}

bool func_73(var uParam0)
{
	return uParam0->f_1;
}

void func_74(int* iParam0)
{
	vector3 vVar0;
	var uVar3;

	if (!func_105(&(iParam0->f_18), &(iParam0->f_42)))
	{
		return;
	}
	if (func_106(&(iParam0->f_18)) == -1948187754)
	{
		func_107(iParam0, &vVar0);
		if (!func_108(vVar0.x, &uVar3))
		{
		}
		TELEMETRY::_0x621D719C4836292B(&uVar3, 0, vVar0.z, vVar0.y, vVar0.z, 1821104826);
		if (!func_109(iParam0, 0))
		{
		}
	}
	func_26(iParam0, 0, 1);
	func_26(iParam0, 1, 1);
}

int func_75(var uParam0)
{
	if (uParam0->f_1)
	{
		uParam0->f_1 = 0;
		return 1;
	}
	return 0;
}

void func_76(int* iParam0)
{
	int iVar0;
	int iVar1;
	struct<12> Var2;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;

	iVar1 = INVENTORY::_0x97A3646645727F42(&iVar0);
	Var2.f_9 = -1591664384;
	iVar17 = 0;
	iVar18 = 0;
	iVar19 = 0;
	iVar16 = 0;
	while (iVar16 < iVar0)
	{
		if (func_110(iVar17, 200))
		{
		}
		else
		{
			if (!INVENTORY::_0x82FA24C3D3FCD9B7(iVar1, iVar16, &Var2))
			{
			}
			else
			{
				iVar18 = Var2.f_11;
				if (!func_111(&Var2))
				{
				}
				else if (!func_112(Var2.f_9))
				{
				}
				else
				{
					iVar19 = 0;
					while (iVar19 < iVar18)
					{
						if (func_110(iVar17, 200))
						{
						}
						else
						{
							if (!func_113(iParam0, &Var2, iVar17))
							{
							}
							else
							{
								iVar17++;
							}
							iVar19++;
						}
					}
				}
			}
			iVar16++;
		}
	}
	INVENTORY::_0x42A2F33A1942E865(iVar1);
	if (iVar17 == 0)
	{
		func_114(iParam0);
	}
	func_115(iParam0, iVar17);
}

int func_77(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272170->f_20)
	{
		if (&Global_1272170->f_20.f_1[iVar0 /*20*/] == iParam0)
		{
			return (Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1;
		}
		iVar0++;
	}
	return 0;
}

void func_78(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_116(iParam0, iParam1, iParam2, iParam3);
}

int func_79(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_80(int iParam0)
{
	return UNLOCK::_UNLOCK_IS_NEW(func_117(iParam0));
}

void func_81(int iParam0)
{
	UNLOCK::_UNLOCK_SET_NEW(func_117(iParam0), false);
}

int func_82(int* iParam0, var uParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam1))
	{
		return 0;
	}
	func_118(iParam0, DATABINDING::_0x6329C34BEE5BFF4B(*uParam1, -242834141));
	func_119(iParam0, DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam1, 1959966745));
	func_120(iParam0, DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam1, -1952794871));
	func_121(iParam0, DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam1, -129582355));
	func_122(iParam0, DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT_BY_HASH(*uParam1, joaat("enabled")));
	func_123(iParam0, DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam1, 440050042), DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam1, 1058850005));
	return 1;
}

int func_83(var uParam0, var uParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		return 0;
	}
	*uParam1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(*uParam0, -376630643);
	uParam1->f_1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(*uParam0, -539230421);
	uParam1->f_2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(*uParam0, -1019689499);
	uParam1->f_3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(*uParam0, -1283381642);
	return 1;
}

bool func_84(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_124(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_85(int iParam0)
{
	if (!func_79(iParam0, 0))
	{
		return 0;
	}
	TELEMETRY::_0x37AA282163B0D2C4(iParam0);
	return 1;
}

int func_86(var uParam0, int iParam1)
{
	if (!func_79(iParam1, 0))
	{
		return 0;
	}
	if (!func_80(iParam1))
	{
		return 1;
	}
	*uParam0 = iParam1;
	return 1;
}

int func_87(var uParam0)
{
	if (!func_111(uParam0))
	{
		return 0;
	}
	return func_125(uParam0);
}

char* func_88(int iParam0)
{
	char* sVar0;

	sVar0 = func_126(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return "";
	}
	return MISC::_CREATE_VAR_STRING(2, sVar0);
}

int func_89(struct<4> Param0)
{
	if (!func_111(&Param0))
	{
		return 0;
	}
	if (func_125(&Param0))
	{
		return 0;
	}
	return func_128(func_127(Param0));
}

char* func_90(struct<4> Param0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	if (!func_111(&Param0))
	{
		return "";
	}
	if (func_127(Param0) <= 0)
	{
		return "";
	}
	vVar0 = { func_129(func_127(Param0), 1) };
	vVar3 = { func_130(func_127(Param0), 1) };
	vVar6 = { func_131(func_127(Param0)) };
	return MISC::_CREATE_VAR_STRING(170, func_126(2), &vVar0, &vVar3, &vVar6);
}

void func_91(int* iParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&(iParam0->f_2[3]), iParam1);
}

void func_92(int* iParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&(iParam0->f_2[2]), sParam1);
}

int func_93(int iParam0)
{
	int iVar0;

	if (!func_79(iParam0, 0))
	{
		return 0;
	}
	if (!func_96(iParam0))
	{
		return 0;
	}
	if (!func_132(iParam0, MISC::GET_HASH_KEY("CI_TAG_OFFER_MYSTERY")))
	{
		return 0;
	}
	iVar0 = func_133(iParam0, 1);
	if (iVar0 != 0)
	{
		return 0;
	}
	return 1;
}

void func_94(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1896726->f_382)
		{
			Global_1896726->f_382 = bParam0;
		}
	}
	else if (Global_1896726->f_382)
	{
		Global_1896726->f_382 = bParam0;
	}
}

void func_95(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_96(int iParam0)
{
	return func_134(iParam0) == 1946043663;
}

int func_97(int iParam0)
{
	int iVar0;

	if (!func_79(iParam0, 0))
	{
		return 0;
	}
	if (!func_96(iParam0))
	{
		return 0;
	}
	if (func_93(iParam0))
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, 920823793, -153848696))
	{
		iVar0 = func_133(iParam0, 1);
		if (!func_135(iVar0))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_98(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	struct<2> Var4;
	struct<5> Var14;

	if (!func_79(iParam1, 0))
	{
		return 0;
	}
	if (!func_96(iParam1))
	{
		return 0;
	}
	iVar0 = func_133(iParam1, 1);
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_BUY_AWARD_KEY_VALID(iVar0))
	{
		return 0;
	}
	if (!func_135(iVar0))
	{
		return 0;
	}
	if (func_136(iVar0))
	{
		return 0;
	}
	Var4 = -1;
	Var4.f_1 = -1;
	if (!func_138(&Var4, iVar0, Var14, 1, 1, 0, 0, func_137(iVar0, 0, 1, -1, 1), -1, 0))
	{
		return 0;
	}
	if (!func_139(&(uParam0->f_18), Var4, -1948187754, iParam1))
	{
		return 0;
	}
	vVar1.x = Var4;
	vVar1.f_2 = iParam1;
	vVar1.f_1 = func_140(iParam1);
	TELEMETRY::_0xCA9E42F437625A85(Var4, 1821104826, 1821104826);
	if (!func_141(&Var4))
	{
		return 0;
	}
	func_142(uParam0, &vVar1);
	return 1;
}

void func_99(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_100(var uParam0)
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

bool func_101(var uParam0)
{
	return func_143(*uParam0, 1);
}

void func_102(var uParam0, bool bParam1)
{
	if (bParam1 || !func_101(uParam0))
	{
		func_104(uParam0);
	}
}

int func_103(var uParam0)
{
	if (!func_101(uParam0))
	{
		return 0;
	}
	if (func_144(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_145() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

void func_104(var uParam0)
{
	func_146(uParam0, 0f);
}

int func_105(var uParam0, var uParam1)
{
	if (*uParam0 && func_31(uParam1))
	{
		return 0;
	}
	return *uParam0;
}

int func_106(var uParam0)
{
	return uParam0->f_18.f_1;
}

void func_107(var uParam0, var uParam1)
{
	MISC::_COPY_MEMORY(uParam1, &(uParam0->f_39), 3);
}

int func_108(var uParam0, var uParam1)
{
	if (TELEMETRY::_0xF184B3ECE36219CF(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

int func_109(var uParam0, int iParam1)
{
	char[] cVar0[8];
	char[] cVar16[8];

	if (!func_147(iParam1, &cVar0, &cVar16))
	{
		return 0;
	}
	if (!func_148(&(uParam0->f_46), &cVar16, &cVar0))
	{
		return 0;
	}
	return 1;
}

int func_110(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam0 <= iParam1)
	{
		return 0;
	}
	return 1;
}

int func_111(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_112(int iParam0)
{
	if (iParam0 == 1045621973)
	{
		return 0;
	}
	return 1;
}

int func_113(int* iParam0, var uParam1, int iParam2)
{
	struct<10> Var0;
	struct<13> Var14;

	if (!func_111(uParam1))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	func_84(*uParam1, &Var0, 1, 0, -1);
	if (!func_79(Var0.f_4, 0))
	{
		return 0;
	}
	Var14 = 1;
	Var14.f_1 = 1;
	Var14.f_2 = joaat("COLOR_WHITE");
	Var14.f_4 = -1;
	Var14.f_5 = -1;
	Var14.f_6 = -1;
	Var14.f_10 = -1;
	Var14.f_11 = -1;
	Var14.f_12 = -1;
	if (func_149(Var0.f_4))
	{
		if (!func_150(uParam1, &Var14))
		{
			return 0;
		}
	}
	else if (func_96(Var0.f_4))
	{
		if (!func_151(uParam1, &Var14))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (!func_152(iParam0, &Var14, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_114(int* iParam0)
{
	struct<36> Var0;

	func_153(&Var0);
	func_118(iParam0, MISC::_CREATE_VAR_STRING(2, &Var0));
	func_119(iParam0, MISC::GET_HASH_KEY(&(Var0.f_16)));
	func_120(iParam0, 0);
	func_121(iParam0, 0);
	func_122(iParam0, 0);
	func_123(iParam0, Var0.f_34, Var0.f_35);
}

int func_115(int* iParam0, int iParam1)
{
	if (!func_154(iParam0->f_2[1], iParam1))
	{
		return 0;
	}
	return 1;
}

void func_116(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_117(int iParam0)
{
	return iParam0;
}

void func_118(int* iParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&(iParam0->f_2[7]), sParam1);
}

void func_119(int* iParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(&(iParam0->f_2[8]), iParam1);
}

void func_120(int* iParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(&(iParam0->f_2[9]), iParam1);
}

void func_121(int* iParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(&(iParam0->f_2[10]), iParam1);
}

void func_122(int* iParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&(iParam0->f_2[6]), iParam1);
}

void func_123(int* iParam0, int iParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(&(iParam0->f_2[4]), iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(&(iParam0->f_2[5]), iParam2);
}

int func_124(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_155(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_125(var uParam0)
{
	if (!func_111(uParam0))
	{
		return 0;
	}
	return INVENTORY::_0x0137C77A2EC64536(uParam0);
}

char* func_126(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HO_TOOLTIP_REWARD_EXPIRED";
		case 1:
			return "HO_TOOLTIP_OFFER_EXPIRED";
		case 2:
			return "HO_TOOLTIP_OFFER_AVAILABLE_DATE";
		case 3:
			return "HO_PROMPT_BROWSE_CATALOGUE";
		case 4:
			return "HO_PROMPT_REDEEM";
		case 5:
			return "HO_TOOLTIP_OFFER_FOR_HORSES";
		case 6:
			return "HO_ITEM_MYSTERY_REWARD_NAME";
		case 7:
			return "HO_ITEM_MYSTERY_REWARD_DESCRIPTION";
		case 8:
			return "HO_TOOLTIP_ITEM_MYSTERY_REWARD_NOT_REVEALED";
		default:
			break;
	}
	return "";
}

int func_127(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!func_111(&uParam0))
	{
		return 0;
	}
	return INVENTORY::_0x4A606C17276E1BCC(&uParam0);
}

bool func_128(int iParam0)
{
	if (iParam0 <= 0)
	{
		return false;
	}
	return (NETWORK::GET_CLOUD_TIME_AS_INT() + func_156()) > iParam0;
}

Vector3 func_129(int iParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar6[24];

	NETWORK::_GET_DATE_AND_TIME_FROM_UNIX_EPOCH(iParam0, &vVar0);
	if (bParam1)
	{
		StringCopy(&cVar6, "SR_DAY_", 24);
		StringIntConCat(&cVar6, vVar0.z, 24);
		StringCopy(&cVar6, MISC::_CREATE_VAR_STRING(2, &cVar6), 24);
		return cVar6;
	}
	StringCopy(&cVar6, func_157(vVar0.z), 24);
	return cVar6;
}

Vector3 func_130(int iParam0, bool bParam1)
{
	struct<2> Var0;
	vector3 vVar6[24];

	NETWORK::_GET_DATE_AND_TIME_FROM_UNIX_EPOCH(iParam0, &Var0);
	if (bParam1)
	{
		StringCopy(&cVar6, "MONTH_", 24);
		StringIntConCat(&cVar6, Var0.f_1, 24);
		StringCopy(&cVar6, MISC::_CREATE_VAR_STRING(2, &cVar6), 24);
		return cVar6;
	}
	StringCopy(&cVar6, func_157(Var0.f_1), 24);
	return cVar6;
}

Vector3 func_131(int iParam0)
{
	int iVar0;
	vector3 vVar6[24];

	NETWORK::_GET_DATE_AND_TIME_FROM_UNIX_EPOCH(iParam0, &iVar0);
	StringCopy(&cVar6, func_157(iVar0), 24);
	return cVar6;
}

int func_132(int iParam0, int iParam1)
{
	if (!func_79(iParam0, 0))
	{
		return func_159(func_158(iParam0), iParam1);
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

int func_133(int iParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_79(iParam0, 0))
	{
		return func_160(func_158(iParam0), bParam1);
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

int func_134(int iParam0)
{
	struct<2> Var0;

	if (!func_79(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_135(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_BUY_AWARD_KEY_VALID(iParam0);
}

int func_136(int iParam0)
{
	int iVar0;

	if (!func_161(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272170->f_1991)
	{
		if ((Global_1272170->f_1991.f_1[iVar0 /*24*/])->f_4 == iParam0 && (Global_1272170->f_1991.f_1[iVar0 /*24*/])->f_5 == 0)
		{
			return NETWORK::_0xE10F2D7715ABABEC(Global_1272170->f_1991.f_1[iVar0 /*24*/]);
		}
		iVar0++;
	}
	return 0;
}

int func_137(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (!func_135(iParam0))
	{
		return 0;
	}
	bVar1 = func_162(iParam3, 2);
	bVar2 = func_163(iParam0, -570078785, bVar1);
	bVar3 = func_163(iParam0, -915411861, bVar1);
	if (func_163(iParam0, 997808187, bVar1))
	{
		iParam1 = 997808187;
	}
	else if (iParam4 && (func_164(iParam0, &iVar0) || func_165(iParam0, &iVar0)))
	{
		iParam1 = iVar0;
	}
	else if (bVar2 && !bVar3)
	{
		iParam1 = -570078785;
	}
	else if (bVar2 && bVar3)
	{
		if (func_166())
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
	if (iParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return iParam1;
}

int func_138(int* iParam0, int iParam1, struct<4> Param2, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_9 = iParam7;
	Var0.f_11 = Param2.f_4;
	Var0.f_4 = { Param2 };
	Var0.f_10 = iParam8;
	Var0.f_14 = iParam10;
	if (!func_167(iParam0, iParam1, &Var0, iParam9, iParam11, iParam12, iParam13))
	{
		return 0;
	}
	func_168(Var0);
	return 1;
}

int func_139(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = 4;
	while (iVar0 >= 1)
	{
		MISC::_COPY_MEMORY(uParam0->f_2[iVar0 /*3*/], uParam0->f_2[(iVar0 - 1) /*3*/], 3);
		iVar0 = (iVar0 + -1);
	}
	uParam0->f_2[0 /*3*/] = iParam1;
	(uParam0->f_2[0 /*3*/])->f_1 = iParam2;
	(uParam0->f_2[0 /*3*/])->f_2 = iParam3;
	return 1;
}

int func_140(int iParam0)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	iVar0 = -1;
	if (!func_169(iParam0))
	{
		return iVar0;
	}
	iVar0 = 74330131;
	Var1 = { func_170(iParam0, 0, 0) };
	Var6 = { func_171(iParam0, Var1, Var1.f_4, 0) };
	if (!func_111(&Var6))
	{
		return -1;
	}
	if (func_89(Var6))
	{
		iVar0 = 90473367;
	}
	return iVar0;
}

int func_141(int* iParam0)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		func_78(*iParam0, 0, 0, 0);
		return 1;
	}
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*iParam0);
		func_78(*iParam0, 4, 0, 0);
		return 1;
	}
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(*iParam0))
	{
		func_78(*iParam0, 2, 0, 0);
		return 0;
	}
	func_78(*iParam0, 1, 0, 0);
	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0);
	if (iVar0 == 2113164098 || iVar0 == 541670136)
	{
		iParam0->f_3 = 1;
	}
	iParam0->f_1 = *iParam0;
	*iParam0 = -1;
	iParam0->f_2 = 0;
	return 1;
}

void func_142(var uParam0, var uParam1)
{
	MISC::_COPY_MEMORY(&(uParam0->f_39), uParam1, 3);
}

bool func_143(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_144(var uParam0)
{
	return func_143(*uParam0, 2);
}

int func_145()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_146(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_53() - fParam1);
	func_172(uParam0, 1);
	func_173(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_147(int iParam0, char* sParam1, char* sParam2)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "RDRO_Offer_Menu_Sounds", 128);
			StringCopy(sParam2, "offer_redeem", 128);
			return 1;
		default:
			break;
	}
	return 0;
}

int func_148(int* iParam0, char* sParam1, char* sParam2)
{
	if (!func_39(*iParam0, 0))
	{
		return 0;
	}
	if (func_39(*iParam0, 1))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	func_19(iParam0, 1);
	StringCopy(&(iParam0->f_1), sParam2, 128);
	StringCopy(&(iParam0->f_17), sParam1, 128);
	AUDIO::_0x0F2A2175734926D8(&(iParam0->f_17), &(iParam0->f_1));
	return 1;
}

bool func_149(int iParam0)
{
	return func_134(iParam0) == -126813555;
}

int func_150(var uParam0, var uParam1)
{
	var uVar0;

	if (!func_174(uParam0, &uVar0))
	{
		return 0;
	}
	if (!func_175(uParam0, uParam1))
	{
		return 0;
	}
	uParam1->f_37 = MISC::GET_HASH_KEY(func_176(&uVar0));
	if (func_177(&uVar0))
	{
		uParam1->f_5 = -571766943;
	}
	else
	{
		uParam1->f_5 = 705463926;
	}
	if (func_177(&uVar0))
	{
		uParam1->f_9 = 1;
		uParam1->f_8 = uParam1->f_39;
		StringCopy(&(uParam1->f_42), func_88(3), 128);
	}
	return 1;
}

int func_151(var uParam0, var uParam1)
{
	int iVar0;
	struct<36> Var1;

	if (!func_174(uParam0, &iVar0))
	{
		return 0;
	}
	if (!func_175(uParam0, uParam1))
	{
		return 0;
	}
	if (func_178(iVar0))
	{
		if (!func_179(iVar0, &(uParam1->f_38)))
		{
		}
	}
	if (func_93(iVar0))
	{
		uParam1->f_5 = -1585562139;
	}
	else if (!func_97(iVar0))
	{
		uParam1->f_5 = -797654126;
	}
	else
	{
		uParam1->f_5 = -1948187754;
	}
	uParam1->f_37 = MISC::GET_HASH_KEY(func_180(&iVar0));
	if (func_93(iVar0))
	{
		func_181(&Var1);
		StringCopy(&(uParam1->f_20), MISC::_CREATE_VAR_STRING(2, &Var1), 128);
		uParam1->f_36 = MISC::GET_HASH_KEY(&(Var1.f_16));
		uParam1->f_16 = Var1.f_32;
		uParam1->f_17 = Var1.f_33;
		uParam1->f_18 = Var1.f_34;
		uParam1->f_19 = Var1.f_35;
		uParam1->f_37 = 0;
	}
	if (!uParam1->f_39)
	{
	}
	else if (func_178(iVar0))
	{
	}
	else if (!func_97(iVar0))
	{
	}
	else
	{
		uParam1->f_8 = 1;
	}
	if (func_97(iVar0))
	{
		uParam1->f_9 = 1;
		StringCopy(&(uParam1->f_42), func_88(4), 128);
	}
	else if (func_177(&iVar0))
	{
		uParam1->f_9 = 1;
		uParam1->f_8 = 1;
		StringCopy(&(uParam1->f_42), func_88(3), 128);
	}
	return 1;
}

int func_152(int* iParam0, char[4] cParam1, int iParam2)
{
	int iVar0;
	char cVar1[64];
	struct<19> Var9;
	var uVar44;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(iParam0->f_2[1])))
	{
		return 0;
	}
	if (iParam2 < -1)
	{
		return 0;
	}
	iVar0 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(&(iParam0->f_2[1]));
	if (iParam2 == -1 || iParam2 >= iVar0)
	{
		StringCopy(&cVar1, "coupon_item_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		Var9.f_18 = 16;
		if (!func_182(&Var9, iParam0->f_2[1], cVar1, cParam1))
		{
			return 0;
		}
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(&(iParam0->f_2[1]), -1, "coupon_entry", Var9);
	}
	else
	{
		if (!func_48(iParam0, iParam2, &uVar44))
		{
			return 0;
		}
		if (!func_183(&uVar44, cParam1))
		{
			return 0;
		}
	}
	return 1;
}

void func_153(char* sParam0)
{
	StringCopy(sParam0, "COUPON_OFFER_NO_VALUE", 128);
	StringCopy(&(sParam0->f_16), "COUPON_OFFER_NO_VALUE_DESC", 128);
	sParam0->f_34 = MISC::GET_HASH_KEY("COUPON_OFFER_NO_VALUE");
	sParam0->f_35 = MISC::GET_HASH_KEY("mp_hub_coupons");
	sParam0->f_32 = MISC::GET_HASH_KEY("COUPON_OFFER_NO_VALUE");
	sParam0->f_33 = MISC::GET_HASH_KEY("mp_hub_coupons");
}

int func_154(var uParam0, int iParam1)
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

int func_155(bool bParam0)
{
	if (func_184() == -1)
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

int func_156()
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

var func_157(int iParam0)
{
	return MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(iParam0), 0);
}

int func_158(int iParam0)
{
	return iParam0;
}

int func_159(int iParam0, int iParam1)
{
	if (!func_185(iParam0, 2))
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

int func_160(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_185(iParam0, 2))
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

bool func_161(int iParam0)
{
	return iParam0 != 0;
}

bool func_162(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_163(int iParam0, int iParam1, bool bParam2)
{
	if (!func_135(iParam0))
	{
		return 0;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(iParam0, iParam1) == 0)
	{
		return 0;
	}
	if (bParam2)
	{
		return !func_186(iParam0, iParam1);
	}
	return 1;
}

bool func_164(int iParam0, int iParam1)
{
	*iParam1 = func_187(iParam0, 1);
	return *iParam1 != 0;
}

bool func_165(int iParam0, int iParam1)
{
	*iParam1 = func_188(iParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_166()
{
	return Global_1915180->f_21962;
}

int func_167(int* iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (!func_189(iParam0, 0))
	{
		return 0;
	}
	if (iParam4 == 0)
	{
		iParam4 = func_137(iParam1, 0, 1, iParam5, iParam6);
	}
	if (!func_190(iParam1, iParam4, iParam5))
	{
		return 0;
	}
	uParam2->f_16 = iParam1;
	uParam2->f_8 = iParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = iParam4;
	uParam2->f_12 = 1248274121;
	if (!func_191(iParam0, *uParam2, 541670136, iParam3))
	{
		return 0;
	}
	if (COLLECTION::_0x9ADEE485726025D4(iParam1) != 0)
	{
		if (Global_1272170->f_20.f_402 != -1)
		{
		}
		Global_1272170->f_20.f_402.f_1 = iParam1;
		Global_1272170->f_20.f_402 = iParam0->f_1;
	}
	return 1;
}

void func_168(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
	AUDIO::PLAY_SOUND_FRONTEND("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
}

int func_169(int iParam0)
{
	if (func_134(iParam0) == -126813555 || func_134(iParam0) == 1946043663)
	{
		return 1;
	}
	return 0;
}

struct<5> func_170(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_192(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_193(iParam0);
	switch (iVar5)
	{
		case joaat("clothing"):
			Var0 = { func_171(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			break;
		case joaat("weapon"):
			Var0 = { func_194(bParam1) };
			if (iParam2 && func_195(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_196(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_196(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_197(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_198(bParam1) };
			switch (func_134(iParam0))
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
			if (func_199(iParam0, -1823706425))
			{
				Var0 = { func_171(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_199(iParam0, -1483207246))
			{
				Var0 = { func_171(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1911121386))
			{
				Var0 = { func_171(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_199(iParam0, -1653629781))
			{
				Var0 = { func_171(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_84(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_199(iParam0, -1653629781))
			{
				Var0 = { func_171(1384535894, Var0, 1784584921, bParam1) };
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

struct<4> func_171(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_79(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_155(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

void func_172(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_173(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_174(var uParam0, int iParam1)
{
	struct<10> Var0;

	*iParam1 = 0;
	if (!func_111(uParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_84(*uParam0, &Var0, 1, 0, -1))
	{
		return 0;
	}
	if (!func_79(Var0.f_4, 0))
	{
		return 0;
	}
	if (!func_169(Var0.f_4))
	{
		return 0;
	}
	*iParam1 = Var0.f_4;
	return 1;
}

int func_175(var uParam0, var uParam1)
{
	int iVar0;
	struct<733> Var1;
	int iVar768;

	if (!func_174(uParam0, &iVar0))
	{
		return 0;
	}
	uParam1->f_4 = -21855895;
	uParam1->f_58 = { *uParam0 };
	if (func_87(uParam0))
	{
		uParam1->f_39 = 0;
	}
	else
	{
		uParam1->f_39 = 1;
		if (func_200(uParam0))
		{
			uParam1->f_40 = 1;
		}
		else if (func_89(*uParam0))
		{
			uParam1->f_41 = 1;
		}
	}
	if (!func_201(&iVar0, &(uParam1->f_20)))
	{
	}
	uParam1->f_36 = func_202(iVar0);
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
	if (ITEMDATABASE::_0x2A610BEE7D341CC4(iVar0, &Var1))
	{
		iVar768 = 0;
		while (iVar768 < 5)
		{
			switch ((Var1.f_732.f_2[iVar768 /*3*/])->f_2)
			{
				case -774197843:
					func_203(Var1.f_732.f_2[iVar768 /*3*/], &(uParam1->f_17), &(uParam1->f_16), 1);
					func_203(Var1.f_732.f_2[iVar768 /*3*/], &(uParam1->f_19), &(uParam1->f_18), 1);
					break;
			}
			iVar768++;
		}
	}
	return 1;
}

char* func_176(var uParam0)
{
	char* sVar0;

	if (!func_79(*uParam0, 0))
	{
		return "";
	}
	if (!func_149(*uParam0))
	{
		return "";
	}
	if (func_132(*uParam0, -462364930))
	{
		sVar0 = "COUPON_OFFER_LOCATION_BOUNTY_BOARD";
	}
	else if (func_132(*uParam0, 791503389))
	{
		sVar0 = "COUPON_OFFER_LOCATION_COOK";
	}
	else if (func_132(*uParam0, 1631625825) || func_132(*uParam0, 769052425))
	{
		sVar0 = "COUPON_OFFER_LOCATION_OUTFITTERS";
	}
	else if (func_132(*uParam0, 805642000))
	{
		sVar0 = "COUPON_OFFER_LOCATION_MADAM_NAZAR";
	}
	else if (func_132(*uParam0, -290607961))
	{
		sVar0 = "COUPON_OFFER_LOCATION_OFFER";
	}
	else if (func_132(*uParam0, -657940588))
	{
		sVar0 = "COUPON_OFFER_LOCATION_CATALOGUE";
	}
	else if (func_132(*uParam0, -2141994197))
	{
		sVar0 = "COUPON_OFFER_LOCATION_STABLE";
	}
	else if (func_132(*uParam0, -1336773246))
	{
		sVar0 = "COUPON_OFFER_LOCATION_GUNSMITH_STORE_CATALOGUE";
	}
	else if (func_132(*uParam0, 565025927))
	{
		sVar0 = "COUPON_OFFER_LOCATION_GUNSMITH";
	}
	else if (func_132(*uParam0, -698888345))
	{
		sVar0 = "COUPON_OFFER_LOCATION_GUNSMITH_CATALOGUE";
	}
	else if (func_132(*uParam0, -700325949))
	{
		sVar0 = "COUPON_OFFER_LOCATION_ABILITIES_MENU";
	}
	else if (func_132(*uParam0, 563589121))
	{
		sVar0 = "COUPON_OFFER_LOCATION_FAST_TRAVEL";
	}
	else if (func_132(*uParam0, -1572489300))
	{
		sVar0 = "COUPON_OFFER_LOCATION_MAGGIES";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return "";
	}
	return sVar0;
}

int func_177(int iParam0)
{
	if (!func_79(*iParam0, 0))
	{
		return 0;
	}
	if (func_132(*iParam0, -2141147161))
	{
		return 1;
	}
	if (func_132(*iParam0, -657940588))
	{
		return 1;
	}
	else if (func_132(*iParam0, -1197174069))
	{
		return 1;
	}
	else if (func_132(*iParam0, -1336773246))
	{
		return 1;
	}
	else if (func_132(*iParam0, -698888345))
	{
		return 1;
	}
	return 0;
}

int func_178(int iParam0)
{
	int iVar0;

	if (!func_79(iParam0, 0))
	{
		return 0;
	}
	if (!func_96(iParam0))
	{
		return 0;
	}
	if (func_93(iParam0))
	{
		return 0;
	}
	iVar0 = func_133(iParam0, 1);
	if (!func_135(iVar0))
	{
		return 0;
	}
	if (!func_186(iVar0, 205718222))
	{
		return 0;
	}
	return 1;
}

int func_179(int iParam0, var uParam1)
{
	int iVar0;

	if (!func_178(iParam0))
	{
		return 0;
	}
	iVar0 = func_204(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	*uParam1 = iVar0;
	return 1;
}

char* func_180(int iParam0)
{
	char* sVar0;

	if (!func_79(*iParam0, 0))
	{
		return "";
	}
	if (!func_96(*iParam0))
	{
		return "";
	}
	if (func_132(*iParam0, 791503389))
	{
		sVar0 = "COUPON_REWARD_LOCATION_COOK";
	}
	else if (func_132(*iParam0, 1678998893))
	{
		sVar0 = "COUPON_REWARD_LOCATION_BUTCHERS_TABLE";
	}
	else if (func_132(*iParam0, 1060967958))
	{
		sVar0 = "COUPON_REWARD_LOCATION_POSSE";
	}
	else if (func_132(*iParam0, -354977419))
	{
		sVar0 = "COUPON_REWARD_LOCATION_OPTIONS";
	}
	else if (func_132(*iParam0, -700325949))
	{
		sVar0 = "COUPON_REWARD_LOCATION_ABILITIES";
	}
	else if (func_132(*iParam0, -462364930))
	{
		sVar0 = "COUPON_REWARD_LOCATION_BOUNTY_BOARD";
	}
	else if (func_132(*iParam0, 769052425))
	{
		sVar0 = "COUPON_REWARD_LOCATION_OUTFITTERS_OR_CRIPPS";
	}
	else if (func_132(*iParam0, 1631625825))
	{
		sVar0 = "COUPON_REWARD_LOCATION_OUTFITTERS";
	}
	else if (func_132(*iParam0, 805642000))
	{
		sVar0 = "COUPON_REWARD_LOCATION_MADAM_NAZAR";
	}
	else if (func_132(*iParam0, -290607961))
	{
		sVar0 = "COUPON_REWARD_LOCATION_REWARD";
	}
	else if (func_132(*iParam0, -13230814))
	{
		sVar0 = "COUPON_REWARD_LOCATION_POST_OFFICE";
	}
	else if (func_132(*iParam0, 1501879121))
	{
		sVar0 = "COUPON_REWARD_LOCATION_OLD_MAN_JONES";
	}
	else if (func_132(*iParam0, -657940588))
	{
		sVar0 = "COUPON_REWARD_LOCATION_CATALOGUE";
	}
	else if (func_132(*iParam0, -1197174069))
	{
		sVar0 = "COUPON_REWARD_LOCATION_TAILOR_STORE_CATALOGUE";
	}
	else if (func_132(*iParam0, 565025927))
	{
		sVar0 = "COUPON_REWARD_LOCATION_GUNSMITH";
	}
	else if (func_132(*iParam0, -1336773246))
	{
		sVar0 = "COUPON_REWARD_LOCATION_GUNSMITH_STORE_CATALOGUE";
	}
	else if (func_132(*iParam0, -698888345))
	{
		sVar0 = "COUPON_REWARD_LOCATION_GUNSMITH_CATALOGUE";
	}
	else if (func_132(*iParam0, 720980519))
	{
		sVar0 = "COUPON_REWARD_LOCATION_CAMP_AND_PROPERTIES";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return "";
	}
	return sVar0;
}

void func_181(char* sParam0)
{
	StringCopy(sParam0, "HO_ITEM_MYSTERY_REWARD_NAME", 128);
	StringCopy(&(sParam0->f_16), "HO_ITEM_MYSTERY_REWARD_DESCRIPTION", 128);
	sParam0->f_34 = MISC::GET_HASH_KEY("VOUCHER_MYSTERY");
	sParam0->f_35 = MISC::GET_HASH_KEY("mp_hub_coupons");
	sParam0->f_32 = MISC::GET_HASH_KEY("VOUCHER_MYSTERY");
	sParam0->f_33 = MISC::GET_HASH_KEY("mp_hub_coupons");
}

int func_182(var uParam0, var uParam1, char[32] cParam2, char[4] cParam10)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam1))
	{
		return 0;
	}
	func_205(uParam0, *uParam1, cParam2, *cParam10);
	uParam0->f_18[0] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(*uParam0, 440050042, cParam10->f_16);
	uParam0->f_18[1] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(*uParam0, 1058850005, cParam10->f_17);
	uParam0->f_18[2] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(*uParam0, -3675574, cParam10->f_18);
	uParam0->f_18[3] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(*uParam0, -536627617, cParam10->f_19);
	uParam0->f_18[4] = DATABINDING::_DATABINDING_ADD_DATA_STRING_BY_HASH(*uParam0, -242834141, &(cParam10->f_20));
	uParam0->f_18[5] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(*uParam0, 1959966745, cParam10->f_36);
	uParam0->f_18[6] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(*uParam0, -1952794871, cParam10->f_37);
	uParam0->f_18[7] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(*uParam0, -129582355, cParam10->f_38);
	uParam0->f_18[8] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(*uParam0, joaat("enabled"), cParam10->f_39);
	uParam0->f_18[9] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(*uParam0, 1024435631, cParam10->f_40);
	uParam0->f_18[10] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(*uParam0, 596676017, cParam10->f_41);
	uParam0->f_18[11] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(*uParam0, -376630643, cParam10->f_58);
	uParam0->f_18[12] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(*uParam0, -539230421, cParam10->f_58.f_1);
	uParam0->f_18[13] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(*uParam0, -1019689499, cParam10->f_58.f_2);
	uParam0->f_18[14] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(*uParam0, -1283381642, cParam10->f_58.f_3);
	uParam0->f_18[15] = DATABINDING::_DATABINDING_ADD_DATA_STRING_BY_HASH(*uParam0, -2035241910, &(cParam10->f_42));
	return 1;
}

int func_183(var uParam0, char[4] cParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, func_49(0), *cParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, func_49(1), cParam1->f_1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_49(2), cParam1->f_2);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_49(54), cParam1->f_3);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_49(57), cParam1->f_5);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_49(56), cParam1->f_6);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, func_49(55), cParam1->f_4);
	DATABINDING::_0xA3BD6FF95E713EE5(*uParam0, -2035241910, &(cParam1->f_42));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, func_49(59), cParam1->f_8);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, func_49(60), cParam1->f_9);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam0, 440050042, cParam1->f_16);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam0, 1058850005, cParam1->f_17);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam0, -3675574, cParam1->f_18);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam0, -536627617, cParam1->f_19);
	DATABINDING::_0xA3BD6FF95E713EE5(*uParam0, -242834141, &(cParam1->f_20));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam0, 1959966745, cParam1->f_36);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam0, -1952794871, cParam1->f_37);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam0, -129582355, cParam1->f_38);
	DATABINDING::_0xBFC83DA249BEFCC9(*uParam0, joaat("enabled"), cParam1->f_39);
	DATABINDING::_0xBFC83DA249BEFCC9(*uParam0, 1024435631, cParam1->f_40);
	DATABINDING::_0xBFC83DA249BEFCC9(*uParam0, 596676017, cParam1->f_41);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT_BY_HASH(*uParam0, -376630643, cParam1->f_58);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT_BY_HASH(*uParam0, -539230421, cParam1->f_58.f_1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT_BY_HASH(*uParam0, -1019689499, cParam1->f_58.f_2);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT_BY_HASH(*uParam0, -1283381642, cParam1->f_58.f_3);
	return 1;
}

int func_184()
{
	return Global_1572887->f_13;
}

int func_185(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

int func_186(int iParam0, int iParam1)
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
		return 0;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iVar474 < iVar471)
	{
		if (&Var0[iVar474 /*47*/] == iParam1)
		{
			iVar473 = (Var0[iVar474 /*47*/])->f_35;
			iVar475 = 0;
			while (iVar475 < iVar473)
			{
				iVar472 = &(Var0[iVar474 /*47*/])->f_36[iVar475];
				if (iVar472 == 0)
				{
				}
				else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar472))
				{
					return 1;
				}
				iVar475++;
			}
		}
		iVar474++;
	}
	return 0;
}

int func_187(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_206(iVar0, 1, 0);
		if (!func_207(iParam0, iVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_96(&(Var2[iVar34 /*2*/])))
				{
					if (!bParam1 || func_208(&(Var2[iVar34 /*2*/]), 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (&Var2[iVar34 /*2*/] == 0)
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

int func_188(int iParam0, bool bParam1, bool bParam2)
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
		iVar40 = func_206(iVar0, 0, 1);
		if (!func_207(iParam0, iVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_149(&(Var9[iVar41 /*2*/])))
				{
					if (!bParam1 || func_208(&(Var9[iVar41 /*2*/]), 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (&Var9[iVar41 /*2*/] == 2084597891 || &Var9[iVar41 /*2*/] == 773203532)
				{
					if ((bParam2 && &Var9[iVar41 /*2*/] == 2084597891) || (!bParam2 && &Var9[iVar41 /*2*/] == 773203532))
					{
						if (iVar4 == 0 || (bVar6 && (Var9[iVar41 /*2*/])->f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = (Var9[iVar41 /*2*/])->f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || (Var9[iVar41 /*2*/])->f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = (Var9[iVar41 /*2*/])->f_1;
						iVar7 = 0;
					}
				}
				else if (&Var9[iVar41 /*2*/] == 0)
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

int func_189(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_209(iParam0))
		{
			return 0;
		}
	}
	if (func_210(&(iParam0->f_6)))
	{
		if (NETWORK::_0xE10F2D7715ABABEC(&(iParam0->f_6)))
		{
			return 0;
		}
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(2113164098))
	{
		return 0;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(-1318406457))
	{
		return 0;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("update")))
	{
		return 0;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("use")))
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	if (NETSHOPPING::_CASHINVENTORY_IS_CONNECTION_FAULTED())
	{
		return 0;
	}
	if (NETSHOPPING::_CASHINVENTORY_INIT_SESSION_IS_FAULTED())
	{
		return 0;
	}
	return 1;
}

int func_190(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_163(iParam0, iParam1, 0))
	{
		return 0;
	}
	if (func_162(iParam2, 2))
	{
		if (func_186(iParam0, iParam1))
		{
			return 0;
		}
	}
	if (NETWORK::_0xFBE782B3165AC8EC(iParam0))
	{
		return 0;
	}
	if (func_162(iParam2, 8))
	{
		return func_211(iParam0, iParam1);
	}
	return 1;
}

int func_191(int* iParam0, struct<17> Param1, int iParam18, bool bParam19)
{
	if (iParam18 != 541670136)
	{
		return 0;
	}
	if (!func_212(Param1))
	{
		return 0;
	}
	if (!func_213(iParam0, iParam18))
	{
		return 0;
	}
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(*iParam0, &Param1, 17))
	{
	}
	else
	{
		return 0;
	}
	return func_214(iParam0, bParam19);
}

struct<4> func_192(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_155(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1272170))
			{
				*Global_1272170 = { func_171(joaat("character"), func_215(), -1591664384, bParam0) };
			}
			return *Global_1272170;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_12)))
			{
				Global_1272170->f_12 = { func_171(joaat("character"), func_215(), -1591664384, 0) };
			}
			return Global_1272170->f_12;
		}
	}
	return func_171(joaat("character"), func_215(), -1591664384, bParam0);
}

int func_193(int iParam0)
{
	vector3 vVar0;

	if (!func_79(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_194(bool bParam0)
{
	int iVar0;

	iVar0 = func_155(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_4)))
		{
			Global_1272170->f_4 = { func_171(923904168, func_192(bParam0), -740156546, bParam0) };
		}
		return Global_1272170->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_16)))
		{
			Global_1272170->f_16 = { func_171(923904168, func_192(bParam0), -740156546, 0) };
		}
		return Global_1272170->f_16;
	}
	return func_171(923904168, func_192(bParam0), -740156546, 0);
}

int func_195(int iParam0, bool bParam1)
{
	if (func_134(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
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

bool func_196(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_217(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

int func_197(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_218(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_198(bool bParam0)
{
	int iVar0;

	iVar0 = func_155(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_8)))
		{
			Global_1272170->f_8 = { func_171(271701509, func_192(bParam0), 12999093, 0) };
		}
		return Global_1272170->f_8;
	}
	return func_171(271701509, func_192(bParam0), 12999093, 0);
}

int func_199(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_134(iParam0);
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

int func_200(var uParam0)
{
	struct<10> Var0;

	if (!func_111(uParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_84(*uParam0, &Var0, 1, 0, -1))
	{
		return 0;
	}
	if (!func_79(Var0.f_4, 0))
	{
		return 0;
	}
	return func_80(Var0.f_4);
}

int func_201(int iParam0, var uParam1)
{
	char cVar0[128];
	struct<19> Var16;
	int iVar51;
	int iVar52;
	char cVar53[128];

	if (!func_79(*iParam0, 0))
	{
		return 0;
	}
	if (!func_169(*iParam0))
	{
		return 0;
	}
	Var16.f_2 = 5;
	Var16.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(*iParam0, &Var16))
	{
		iVar51 = 0;
		while (iVar51 < 8)
		{
			if ((Var16.f_18[iVar51 /*2*/])->f_1 != 14460646)
			{
			}
			else
			{
				if (&Var16.f_18[iVar51 /*2*/] != 0)
				{
					StringCopy(&cVar0, HUD::_GET_LABEL_TEXT_BY_HASH(&(Var16.f_18[iVar51 /*2*/])), 128);
				}
			}
			else
			{
				iVar51++;
			}
		}
	}
	else
	{
		return 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		StringConCat(&cVar0, " - ", 128);
	}
	iVar52 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0);
	StringCopy(&cVar53, HUD::_GET_LABEL_TEXT_BY_HASH(*iParam0), 128);
	iVar52 = (iVar52 + HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar53));
	if (iVar52 >= 127)
	{
		*uParam1 = { cVar53 };
		return 1;
	}
	StringConCat(&cVar0, &cVar53, 128);
	*uParam1 = { cVar0 };
	return 1;
}

int func_202(int iParam0)
{
	if (!func_79(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0xA4550FE9C512E3DD(iParam0);
}

int func_203(var uParam0, var uParam1, var uParam2, bool bParam3)
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

int func_204(int iParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_79(iParam0, 0))
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
			if ((Var0.f_18[iVar35 /*2*/])->f_1 == 1646708583)
			{
				if (&Var0.f_18[iVar35 /*2*/] != 0)
				{
					return &(Var0.f_18[iVar35 /*2*/]);
				}
			}
			iVar35++;
		}
	}
	return 0;
}

void func_205(var uParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<16> Param10)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1, &cParam2);
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_49(0), Param10);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_49(1), Param10.f_1);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_49(2), Param10.f_2);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_49(54), Param10.f_3);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_49(55), Param10.f_4);
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_49(57), Param10.f_5);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_49(56), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = joaat("ib_select");
	}
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_49(58), Param10.f_7);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_49(59), Param10.f_8);
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_49(60), Param10.f_9);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_49(61), Param10.f_10);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_49(67), Param10.f_11);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_49(62), Param10.f_12);
	if (Param10.f_13 == 0)
	{
		Param10.f_13 = joaat("ib_select");
	}
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_49(64), Param10.f_13);
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_49(65), Param10.f_14);
	uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_49(66), Param10.f_15);
}

int func_206(int iParam0, bool bParam1, bool bParam2)
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

int func_207(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_135(iParam0))
	{
		return 0;
	}
	*iParam3 = ITEMDATABASE::_0xF540239F9937033B(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam4)
		{
		}
		return 0;
	}
	if (!bParam4)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xF27F01BBF5ACD3F3(iParam0, iParam1, iVar0, (*uParam2)[iVar0 /*2*/]))
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
		func_220(iParam0, iParam1, uParam2, *iParam3);
	}
	return 1;
}

int func_208(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_79(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_193(iParam0);
	if (iVar1 == joaat("ammo") || (bParam1 && iVar1 == joaat("weapon")))
	{
		iVar2 = func_221(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("weapon"))
	{
		return func_222(iParam0, 0);
	}
	if (func_223(iParam0, joaat("default")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_155(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_224(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_155(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

int func_209(int* iParam0)
{
	int iVar0;

	if (iParam0->f_1 == -1)
	{
		return 0;
	}
	iVar0 = func_225(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return 1;
	}
	return 0;
}

int func_210(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_211(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (iParam1 == -570078785)
	{
		iVar0 = func_226(iParam0, -570078785, 0, 1);
		if (iVar0 == 0)
		{
		}
		if (!func_227(iVar0))
		{
			if (Global_1915180->f_20142)
			{
				func_229(MISC::_CREATE_VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_228(iVar0)));
			}
			return 0;
		}
	}
	else if (iParam1 == -915411861)
	{
		iVar1 = func_226(iParam0, -915411861, 0, 1);
		if (iVar1 == 0)
		{
		}
		if (!func_230(iVar1))
		{
			if (Global_1915180->f_20142)
			{
				func_229("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (iParam1 == 997808187)
	{
		return 1;
	}
	if (!func_231(iParam0, iParam1, &uVar2))
	{
		return 0;
	}
	return 1;
}

int func_212(struct<17> Param0)
{
	if (!func_135(Param0.f_16))
	{
		return 0;
	}
	return 1;
}

int func_213(int* iParam0, int iParam1)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		if (!func_232(iParam0, iParam1))
		{
			return 0;
		}
	}
	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0);
	if (iVar0 != iParam1 || NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) >= 50)
	{
		if (!func_141(iParam0))
		{
			return 0;
		}
		if (!func_232(iParam0, iParam1))
		{
			return 0;
		}
	}
	return 1;
}

int func_214(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return func_141(iParam0);
	}
	return 1;
}

struct<4> func_215()
{
	struct<4> Var0;

	return Var0;
}

bool func_216()
{
	return (func_233(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, 0, 0) > 0 && func_234(func_171(889965687 /* GXTEntry: "Wardrobe" */, func_192(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_217(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_79(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_223(iParam0, joaat("default")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_171(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_155(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_155(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_218(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_155(0);
	*uParam1 = { func_171(iParam0, func_194(0), iParam3, 0) };
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

void func_220(int iParam0, int iParam1, var uParam2, int iParam3)
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
		uVar6 = &Var7.f_1[iVar1];
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
							if (uParam2[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
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
		if (&fVar21[iVar0] != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = (BUILTIN::ROUND((IntToFloat((10000 * ((*uParam2)[iVar0 /*2*/])->f_1)) * (&fVar21[iVar0] / 1f))) / 10000);
		}
		iVar0++;
	}
}

int func_221(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_79(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_193(iParam0);
	if (iVar0 == joaat("weapon") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("ammo") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_132(iParam0, 1399091007))
	{
		func_235(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_222(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_236(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_237(&Var0, func_194(0));
	}
	if (!func_238(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_239(iVar14);
	return uVar15;
}

int func_223(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

struct<4> func_224(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_170(iParam0, bParam1, 0) };
	return func_171(iParam0, Var0, Var0.f_4, bParam1);
}

int func_225(int* iParam0)
{
	return func_54(iParam0->f_1);
}

int func_226(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_207(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if ((&Var0[iVar32 /*2*/] == 2084597891 || &Var0[iVar32 /*2*/] == 773203532) || &Var0[iVar32 /*2*/] == -1295114026)
		{
			return (Var0[iVar32 /*2*/])->f_1;
		}
		else if (&Var0[iVar32 /*2*/] == 0)
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

bool func_227(int iParam0)
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

int func_228(int iParam0)
{
	return (iParam0 / 100);
}

void func_229(char* sParam0)
{
	Global_1915180->f_21955 = func_240(sParam0, 10000, 0, 0, 0, 1);
}

bool func_230(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_184() == 0)
	{
		return func_241(iParam0);
	}
	return iParam0 <= func_242();
}

int func_231(int iParam0, int iParam1, var uParam2)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_207(iParam0, iParam1, &Var0, &iVar31, 0, 1))
	{
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			if (&Var0[iVar32 /*2*/] == 2084597891)
			{
				if (!func_230((Var0[iVar32 /*2*/])->f_1))
				{
					return 0;
				}
			}
			else if (&Var0[iVar32 /*2*/] == 773203532)
			{
				if (!func_227((Var0[iVar32 /*2*/])->f_1))
				{
					return 0;
				}
			}
			else if (func_208(&(Var0[iVar32 /*2*/]), 0, 0, 1) < (Var0[iVar32 /*2*/])->f_1)
			{
				*uParam2 = { *(Var0[iVar32 /*2*/]) };
				return 0;
			}
			iVar32++;
		}
	}
	return 1;
}

int func_232(int* iParam0, int iParam1)
{
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(iParam0, 712853601, iParam1))
	{
		return 0;
	}
	return 1;
}

int func_233(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_243(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_155(bParam1), iParam0, iParam3);
}

int func_234(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_244(&uParam0, iParam4, bParam5, iParam6);
}

void func_235(int iParam0, var uParam1, var uParam2)
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

struct<14> func_236(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_237(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_238(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_155(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_239(int iParam0)
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

var func_240(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	uVar15 = _NAMESPACE71::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return uVar15;
}

bool func_241(int iParam0)
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

int func_242()
{
	if (func_184() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_243(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_244(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_245(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_245(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_155(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return 0;
	}
	if (!func_124(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

