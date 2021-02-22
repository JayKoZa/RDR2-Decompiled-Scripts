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
	var uLocal_20 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	struct<126> Var0;
	int iVar127;
	int iVar128;

	fLocal_13 = 1f;
	fLocal_14 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	Var0.f_5.f_2 = 12;
	Var0.f_5.f_64 = 11;
	Var0.f_5.f_76 = 11;
	Var0.f_124 = 1;
	Var0.f_125 = 1;
	Var0.f_102 = TASK::_0x804425C4BBD00883(Global_34);
	if (!func_2(Var0.f_102, 0))
	{
		Global_1913502 = 0;
	}
	else
	{
		Global_1913502 = Var0.f_102;
	}
	Var0.f_105 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_NUM_LABEL_TYPES(Var0.f_102);
	iVar127 = 0;
	while (iVar127 < Var0.f_105)
	{
		Var0.f_5.f_2[iVar127 /*5*/] = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_TYPE(Var0.f_102, iVar127);
		Var0.f_5.f_2[iVar127 /*5*/].f_2 = Var0.f_5.f_2[iVar127 /*5*/];
		Var0.f_5.f_2[iVar127 /*5*/].f_1 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_NUM_VALUES(Var0.f_102, Var0.f_5.f_2[iVar127 /*5*/].f_2);
		iVar127++;
	}
	Var0.f_108 = ANIMSCENE::_CREATE_ANIM_SCENE("lightrig@player_journal", 0, "plMain", false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(Var0.f_108);
	Var0.f_116 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(Global_34) && (PED::IS_PED_USING_ANY_SCENARIO(Global_34) && !PED::GET_PED_CONFIG_FLAG(Global_34, 464, true)))
	{
		Var0.f_116 = 1;
	}
	if (func_3(Var0.f_102, -1903335637))
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_34, "GENERIC_DOCUMENT_FLIP_AVAILABLE", true, -1);
	}
	else
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_34, "GENERIC_DOCUMENT_FLIP_AVAILABLE", false, -1);
	}
	while (!func_4())
	{
		Var0.f_104 = TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_34);
		if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Var0.f_108) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Var0.f_108, true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Var0.f_108, false))
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Var0.f_108, Global_35, ENTITY::GET_ENTITY_ROTATION(Global_34, 2), 2);
			ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(Var0.f_108, Global_34, -1);
			ANIMSCENE::START_ANIM_SCENE(Var0.f_108);
		}
		iVar128 = TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_34);
		if (iVar128 == -1215562113 || iVar128 == -982676640)
		{
			if (Var0.f_105 > 0)
			{
				if (!PED::_GET_PED_BLACKBOARD_BOOL(Global_34, "GENERIC_BOOK_READ_AVAILABLE"))
				{
					PED::_SET_PED_BLACKBOARD_BOOL(Global_34, "GENERIC_BOOK_READ_AVAILABLE", true, -1);
				}
				if (PAD::IS_CONTROL_JUST_RELEASED(0, joaat("INPUT_CONTEXT_X")))
				{
					if (UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(joaat("TRANSLATION_OVERLAY"), joaat("GENERIC")) != 0)
					{
					}
					else
					{
						func_5(&Var0);
					}
				}
			}
			else if (PED::_GET_PED_BLACKBOARD_BOOL(Global_34, "GENERIC_BOOK_READ_AVAILABLE"))
			{
				PED::_SET_PED_BLACKBOARD_BOOL(Global_34, "GENERIC_BOOK_READ_AVAILABLE", false, -1);
			}
		}
		else
		{
			if (PED::_GET_PED_BLACKBOARD_BOOL(Global_34, "GENERIC_BOOK_READ_AVAILABLE"))
			{
				PED::_SET_PED_BLACKBOARD_BOOL(Global_34, "GENERIC_BOOK_READ_AVAILABLE", false, -1);
			}
			if (UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("TRANSLATION_OVERLAY")))
			{
				UIAPPS::_CLOSE_APP_BY_HASH(joaat("TRANSLATION_OVERLAY"));
			}
		}
		BUILTIN::WAIT(0);
	}
	func_1();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uLocal_20))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uLocal_20);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_3(int iParam0, int iParam1)
{
	if (!func_2(iParam0, 0))
	{
		return func_7(func_6(iParam0), iParam1);
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

bool func_4()
{
	if (Global_1572887.f_13 == 0 && func_8(0, 0))
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return true;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		return true;
	}
	if (!TASK::_0x038B1F1674F0E242(Global_34))
	{
		return true;
	}
	if (!func_9())
	{
		return true;
	}
	return false;
}

void func_5(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uLocal_20))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uLocal_20);
	}
	func_10(uParam0);
	uLocal_20 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Translate");
	uParam0->f_5.f_63 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uLocal_20, "Generic");
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_105)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEM_DATABASE_LOCALIZATION_GET_VALUE(uParam0->f_102, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
			switch (uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					func_11(&(uParam0->f_5), iVar2, 1, 1, 0);
					iVar2++;
					break;
				case -641080715:
					func_11(&(uParam0->f_5), iVar2, 3, 1, 0);
					iVar2++;
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

int func_6(int iParam0)
{
	return iParam0;
}

int func_7(int iParam0, int iParam1)
{
	if (!func_12(iParam0, 2))
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

bool func_8(bool bParam0, bool bParam1)
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

bool func_9()
{
	return func_13(1);
}

void func_10(var uParam0)
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

void func_11(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
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

bool func_12(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

bool func_13(int iParam0)
{
	return func_14(iParam0);
}

bool func_14(int iParam0)
{
	return func_15(Global_1940144.f_38, iParam0);
}

bool func_15(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

