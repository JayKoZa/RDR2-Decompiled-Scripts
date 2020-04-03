#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<9> Local_3 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	struct<11> Local_19[64];
	int iLocal_724 = 0;
	int iLocal_725 = 0;
	int iLocal_726 = 0;
	int iLocal_727[1] = { 0 };
	var uLocal_729[1] = { 0 };
	int iLocal_731[1] = { 0 };
	bool bLocal_733 = false;
	int iLocal_734 = 0;
	var uLocal_735 = 24;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	int iLocal_833[1] = { 0 };
	int iLocal_835 = 0;
	vector3 vLocal_836[1] = {{ 0f, 0f, 0f } };
	vector3 vLocal_840[1] = {{ 0f, 0f, 0f } };
	int iLocal_844 = 0;
	int iLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	int iLocal_849 = 0;
	float fLocal_850 = 0f;
	char* sLocal_851 = NULL;
	char* sLocal_852 = NULL;
	bool bLocal_853 = false;
	int iLocal_854 = 0;
	struct<4> Local_855 = { 0, 0, 0, 0 } ;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_844 = joaat("stand");
	iLocal_854 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_855);
	}
	func_2(&Local_855, &uScriptParam_0);
	while (!func_3(&Local_855))
	{
		func_4(&Local_855);
		switch (func_5(Local_855))
		{
			case 0:
				if (func_6(&Local_855))
				{
					func_7(&Local_855, 1);
				}
				break;
			case 1:
				if (func_8(&Local_855))
				{
					func_7(&Local_855, 2);
				}
				break;
			case 2:
				if (func_9(&Local_855))
				{
					func_7(&Local_855, 3);
				}
				break;
			case 3:
				func_1(&Local_855);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_855);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_10();
	func_11(uParam0);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_12(&(iLocal_727[iVar0])))
		{
			func_13(&(iLocal_727[iVar0]), 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 27)
	{
		iVar2 = iVar1;
		if (func_14(iVar2) && func_12(iVar2))
		{
			iVar3 = Global_1360165[iVar1 /*1157*/];
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (func_15(iVar2))
				{
					func_13(iVar2, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
				}
			}
		}
		iVar1++;
	}
	if (func_16(uParam0, 4))
	{
		MISC::CLEAR_BIT(&(Global_1956578->f_1), 5);
		func_17(uParam0, 4);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2(var uParam0, var uParam1)
{
	uParam0->f_1 = uParam1->f_1;
	if (ANIMSCENE::_0x25557E324489393C(*uParam1))
	{
		uParam0->f_2 = *uParam1;
		ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_2);
		func_18(uParam0, 1);
	}
	if (uParam1->f_3)
	{
		func_18(uParam0, 2);
	}
	func_19(uParam0);
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	return 1;
}

int func_3(var uParam0)
{
	if (func_20(&Global_1935630, 16384))
	{
		return 1;
	}
	if (!func_16(uParam0, 8))
	{
		if (func_20(&Global_1935630, 32768))
		{
			return 1;
		}
	}
	return 0;
}

void func_4(var uParam0)
{
	if (!func_16(uParam0, 4))
	{
		if ((ANIMSCENE::_0x25557E324489393C(uParam0->f_2) && ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_2, 0)) && !CAM::IS_GAMEPLAY_CAM_RENDERING())
		{
			MISC::SET_BIT(&(Global_1956578->f_1), 5);
			func_18(uParam0, 4);
		}
	}
	else if ((!ANIMSCENE::_0x25557E324489393C(uParam0->f_2) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_2, 0)) || CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		MISC::CLEAR_BIT(&(Global_1956578->f_1), 5);
		func_17(uParam0, 4);
	}
}

int func_5(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return uParam0;
}

int func_6(var uParam0)
{
	if (!func_21(iLocal_844, 1, 0, 0))
	{
		return 0;
	}
	if ((func_22(sLocal_851) && func_23(iLocal_844)) && PED::_0x5E420FF293EE5472())
	{
		return 1;
	}
	return 0;
}

void func_7(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_8(var uParam0)
{
	if ((!func_16(uParam0, 2) && SCRIPTS::_DOES_THREAD_EXIST(uParam0->f_1)) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
	{
		return 0;
	}
	return func_24(uParam0);
}

int func_9(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		if (!func_25(iVar1))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	if (!func_26())
	{
		iVar0 = 0;
	}
	if (!func_27(uParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_10()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_14(iVar0) && func_15(iVar0))
		{
			func_28(iVar0, 56, 1);
		}
		iVar0++;
	}
	func_29(&(Global_1359489->f_40), 1);
}

void func_11(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_729[iVar0])) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(&(uLocal_729[iVar0]), true))
		{
			if (PED::IS_PED_IN_GROUP(&(uLocal_729[iVar0])))
			{
				PED::REMOVE_PED_FROM_GROUP(&(uLocal_729[iVar0]));
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uLocal_729[iVar0]);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_833[iVar0])) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(&(iLocal_833[iVar0]), true))
		{
			func_30(&(iLocal_833[iVar0]), &(iLocal_727[iVar0]), 1, 0, 0);
		}
		iVar0++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_835) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_835, true))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_835);
	}
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_851);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_852);
	func_31(8);
	if (PED::DOES_GROUP_EXIST(iLocal_734))
	{
		PED::REMOVE_GROUP(iLocal_734);
	}
	func_32(iLocal_844);
	if (PED::_0x5C16855277819BBF() > iLocal_845)
	{
		PED::_0x7D4E70A67A651C71((PED::_0x5C16855277819BBF() + iLocal_845));
	}
	if (func_33(&(uLocal_729[iLocal_849]), 0) && PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0x0C6B89876262A99D(PLAYER::GET_PLAYER_INDEX(), &(uLocal_729[iLocal_849]));
	}
	func_34(1);
	func_35();
	MISC::_0x1096603B519C905F("");
}

bool func_12(int iParam0)
{
	return func_36(iParam0, 16, 1);
}

void func_13(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	var uVar1;
	bool bVar2;

	if (!func_14(iParam0))
	{
		return;
	}
	if (func_12(iParam0))
	{
		if (((*Global_1360165)[iParam0 /*1157*/])->f_129 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_28(iParam0, 56, 1);
		func_29(&(Global_1359489->f_40), 1);
	}
	func_37(iParam0, 0);
	func_38(iParam0, 4, 0);
	func_31(iParam0);
	func_39(iParam0);
	func_40(iParam0, 37, 1);
	bVar0 = func_33(Global_1360165[iParam0 /*1157*/], 0);
	uVar1 = func_41(iParam0, 0);
	bVar2 = _NAMESPACE48::_0x800DF3FC913355F3(uVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_42(iParam0, 64, 1))
	{
		func_40(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_40(iParam0, 33, 1);
		func_40(iParam0, 34, 1);
		func_43(iParam0, 1056964608 /* Float: 0.5f */, -1, 1061158912 /* Float: 0.75f */);
		func_44(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_28(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_28(iParam0, 35, 1);
			if (bParam8)
			{
				func_28(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_45(iParam0, 0);
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
			}
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
		}
		if (bVar2)
		{
			_NAMESPACE48::_0xBB68908CD11AEBDC(uVar1);
		}
		func_40(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_28(iParam0, 33, 1);
		func_44(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_133 = fParam4;
			func_29(&(((*Global_1360165)[iParam0 /*1157*/])->f_130), 1);
		}
		else
		{
			func_46(&(((*Global_1360165)[iParam0 /*1157*/])->f_130));
		}
		if (bParam9)
		{
			func_28(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_47(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_42(iParam0, 45, 1))
	{
		func_40(iParam0, 45, 1);
	}
	func_48(iParam0, 16, 1);
	func_40(iParam0, 44, 1);
	((*Global_1360165)[iParam0 /*1157*/])->f_129 = 0;
	(Global_40.f_4942[iParam0 /*60*/])->f_4 = 0;
	if (bParam5)
	{
		if (func_33(func_49(iParam0), 0))
		{
			func_30(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

int func_14(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

bool func_15(int iParam0)
{
	if (!func_14(iParam0))
	{
		return false;
	}
	if (!func_12(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_16(var uParam0, int iParam1)
{
	return (uParam0->f_3 && iParam1) != 0;
}

void func_17(var uParam0, int iParam1)
{
	uParam0->f_3 = (uParam0->f_3 - (uParam0->f_3 && iParam1));
}

void func_18(var uParam0, int iParam1)
{
	uParam0->f_3 = (uParam0->f_3 || iParam1);
}

void func_19(var uParam0)
{
	int iVar0;

	iLocal_727[0] = 8;
	iLocal_849 = 0;
	if (func_50(((*Global_1835011)[20 /*74*/])->f_1) == 1)
	{
		func_51(8);
		bLocal_733 = true;
		func_52(&uLocal_846);
		bLocal_853 = true;
	}
	else if (func_50(((*Global_1835011)[20 /*74*/])->f_1) == 2)
	{
		func_51(8);
		bLocal_733 = true;
		bLocal_853 = false;
	}
	else
	{
		bLocal_733 = false;
		bLocal_853 = false;
	}
	sLocal_851 = "brt2_outroRideToCamp";
	sLocal_852 = "brt2_outroCME";
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_851);
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_852);
	*(vLocal_836[0 /*3*/]) = { 663.47f, -1230.6f, 43.4f };
	*(vLocal_840[0 /*3*/]) = { 668.77f, -1233.93f, 44.16f };
	StringCopy(&Local_3, "camera_treatments", 64);
	StringCopy(&(Local_3.f_8), "GENERIC_CME_PULL_OUT_TREATMENT_REQUEST", 64);
	CAM::_0x6A4D224FC7643941(&Local_3);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_53(vLocal_836[iVar0 /*3*/], 50, 10, 0);
		func_53(vLocal_840[iVar0 /*3*/], 50, 10, 0);
		iVar0++;
	}
	fLocal_850 = 5.2f;
	iLocal_845 = 2;
	if (PED::_0x5C16855277819BBF() <= iLocal_845)
	{
		PED::_0xED9582B3DA8F02B4((PED::_0x5C16855277819BBF() + iLocal_845));
	}
	func_52(&uLocal_846);
	func_34(0);
	func_54();
}

bool func_20(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_21(int iParam0, int iParam1, int iParam2, int iParam3)
{
	return STREAMING::_0x19A6BE7D9C6884D3(iParam0, iParam1, iParam2, iParam3);
}

int func_22(char* sParam0)
{
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam0))
	{
		return 1;
	}
	return 0;
}

var func_23(int iParam0)
{
	return STREAMING::_0x9427C94D2E4094A4(iParam0, 0);
}

int func_24(var uParam0)
{
	switch (iLocal_725)
	{
		case 0:
			if (func_55(&iLocal_727, &uLocal_729, 0, 1, 0, 0, 0, 0))
			{
				iLocal_725 = 1;
			}
		else
		{
			}
			else
			{
				iLocal_835 = PED::GET_MOUNT(Global_35);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_835))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_835, true, true);
				}
				iLocal_725 = 2;
				iLocal_833[0] = PED::GET_MOUNT(&(uLocal_729[0]));
				iLocal_725 = 3;
				func_56();
				func_57(iLocal_835, &iLocal_833);
				iLocal_725 = 4;
				MISC::_0x1096603B519C905F("BRT2");
				return 1;
			}
			return 0;
		}

int func_25(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(&(uLocal_729[iParam0])))
	{
		return 1;
	}
	if (func_58(&(uLocal_729[iParam0]), 1, 1))
	{
		iLocal_731[iParam0] = 18;
		if (func_12(&(iLocal_727[iParam0])))
		{
			func_13(&(iLocal_727[iParam0]), 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_833[iParam0])))
		{
			func_30(&(iLocal_833[iParam0]), &(iLocal_727[iParam0]), 1, 0, 0);
		}
		return 1;
	}
	if (bLocal_733 && func_59(Global_35, &(uLocal_729[iParam0]), 0) > 6400f)
	{
		MAP::_0x662D364ABF16DE2F(func_60(8), -1269631044);
		bLocal_733 = false;
		bLocal_853 = false;
	}
	switch (&iLocal_731[iParam0])
	{
		case 0:
			if (func_61(iParam0))
			{
				if (bLocal_853)
				{
					CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0, 0);
					STREAMING::PREFETCH_SRL("script@tripskip@brt2_srl");
					CAM::_0x1B3C2D961F5FC0E1("script@Cinematics@TripSkip@Clemens_Point");
					TASK::OPEN_SEQUENCE_TASK(&iLocal_726);
					TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(&(uLocal_729[iParam0]), true, false) + Vector(0f, -5f, -4f), 1.5f, -1, 0.25f, 8192, 40000f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_726);
					TASK::TASK_PERFORM_SEQUENCE(&(uLocal_729[iParam0]), iLocal_726);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_726);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_726);
					TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(&(uLocal_729[iParam0]), true, false) + Vector(0f, -5f, -4f), 1.5f, -1, 0.25f, 8192, 40000f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_726);
					TASK::_TASK_PERFORM_SEQUENCE_2(Global_35, iLocal_726, 0.25f, 0.25f);
					if (CAM::_0xDD0B7C5AE58F721D(&Local_3))
					{
						CAM::_0xB8B207C34285E978(&Local_3);
					}
					func_52(&uLocal_846);
					iLocal_731[iParam0] = 7;
				}
				else
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(&(uLocal_729[iParam0]), sLocal_851, -1.5f, 0, 9224, -1, 0);
					iLocal_731[iParam0] = 13;
				}
			}
			break;
		case 7:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if ((func_62(&uLocal_846) > 3f && CAM::_0xAA235E2F2C09E952("script@Cinematics@TripSkip@Clemens_Point")) && STREAMING::IS_SRL_LOADED())
			{
				CAM::_0x0A5A4F1979ABB40E(&Local_3);
				CAM::_0x798BE43C9393632B(&Local_3);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(&(uLocal_729[iParam0]), 0, 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(&(iLocal_833[iParam0]), 0, 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_835, 0, 1);
				func_63(iLocal_835, 1180.4f, -1554.3f, 53.4f, 19.7f, 1, 1073741824 /* Float: 2f */);
				func_63(&(iLocal_833[0]), 1178.3f, -1559f, 53.7f, 19.7f, 1, 1073741824 /* Float: 2f */);
				PED::FORCE_PED_MOTION_STATE(&(iLocal_833[0]), -1115154469, false, 0, false);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1.75f, 2000, 0f, true, false);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(&(uLocal_729[iParam0]), sLocal_852, -1.5f, 5, 4196386, -1, 0);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(Global_35, sLocal_852, 1f, 5, 11266, -1, 0);
				AUDIO::_0x5E3CCF03995388B5(-1723251484, 1192.2f, -1557f, 55.4f);
				CAM::_0xBC016635D6A73B31("script@Cinematics@TripSkip@Clemens_Point", "2_TripSkip_BRT2_1", 5);
				STREAMING::END_SRL();
				STREAMING::PREFETCH_SRL("script@tripskip@brt2_burning_srl");
				CAM::_0x1B3C2D961F5FC0E1("script@Cinematics@TripSkip@Clemens_Point");
				func_52(&uLocal_846);
				iLocal_731[iParam0] = 9;
			}
			break;
		case 9:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			func_64(2, Global_35, 0, iLocal_835, 0, 1092616192 /* Float: 10f */, 1103626240 /* Float: 25f */);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(&(uLocal_729[iParam0]), 2.5f);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35, 2.5f);
			func_65(&(uLocal_729[iParam0]), 2.5f);
			func_65(Global_35, 2.5f);
			if (AUDIO::_0xFFE9C53DEEA3DB0B((CAM::_0xEA113BF9B0C0C5D7("script@Cinematics@TripSkip@Clemens_Point", "2_TripSkip_BRT2_1", 5) - func_66(&uLocal_846)), -1485537194, 1919.4f, -1341.3f, 49.1f, 1, 2147483647))
			{
				AUDIO::_0xCCE219C922737BFA("MAIN_LOOP", 1916.311f, -1299.35f, 42f, "VEGETATION_FIRE_SOUNDSET", 0, 0, 1, 0);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(&(uLocal_729[iParam0]), 0, 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
				func_63(&(iLocal_833[0]), 756.4f, -1186.3f, 45f, 144.3f, 6, 1073741824 /* Float: 2f */);
				func_63(iLocal_835, 761.5f, -1179.3f, 44.9f, 144.3f, 6, 1073741824 /* Float: 2f */);
				ENTITY::FREEZE_ENTITY_POSITION(&(iLocal_833[0]), true);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_835, true);
				func_64(0, Global_35, 0, iLocal_835, 0, 1092616192 /* Float: 10f */, 1103626240 /* Float: 25f */);
				func_64(1, Global_35, 0, iLocal_835, 0, 1092616192 /* Float: 10f */, 1103626240 /* Float: 25f */);
				CAM::_0xA54D643D0773EB65("script@Cinematics@TripSkip@Clemens_Point", "2_TripSkip_BRT2_1", 5);
				CAM::_0xBC016635D6A73B31("script@Cinematics@TripSkip@Clemens_Point", "2_TripSkip_BRT2_2", 5);
				STREAMING::END_SRL();
				STREAMING::PREFETCH_SRL("script@tripskip@clemens_cove_srl");
				func_67(53, 1, 0);
				func_68(134, 1, 0, 0, 0);
				func_68(138, 1, 0, 0, 0);
				func_52(&uLocal_846);
				iLocal_731[iParam0] = 11;
			}
			break;
		case 11:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			func_64(2, Global_35, 0, iLocal_835, 0, 1092616192 /* Float: 10f */, 1103626240 /* Float: 25f */);
			if (func_62(&uLocal_846) >= 9f && !CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(3000);
			}
			if (AUDIO::_0xFFE9C53DEEA3DB0B((CAM::_0xEA113BF9B0C0C5D7("script@Cinematics@TripSkip@Clemens_Point", "2_TripSkip_BRT2_2", 5) - func_66(&uLocal_846)), 1506582591, 749.7f, -1202.1f, 46f, 1, 2147483647) && CAM::IS_SCREEN_FADED_OUT())
			{
				ENTITY::FREEZE_ENTITY_POSITION(&(iLocal_833[0]), false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_835, false);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(&(uLocal_729[iParam0]), sLocal_852, -1.5f, 444, 9216, -1, 0);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(Global_35, sLocal_852, 1f, 439, 9216, -1, 0);
				PED::FORCE_PED_MOTION_STATE(&(iLocal_833[0]), -1415276238, false, 0, false);
				PED::FORCE_PED_MOTION_STATE(iLocal_835, -1415276238, false, 0, false);
				CAM::_0xA54D643D0773EB65("script@Cinematics@TripSkip@Clemens_Point", "2_TripSkip_BRT2_2", 5);
				CAM::_0xBC016635D6A73B31("script@Cinematics@TripSkip@Clemens_Point", "1_TripSkip_Clemens_1", 5);
				AUDIO::_0x0F2A2175734926D8("MAIN_LOOP", "VEGETATION_FIRE_SOUNDSET");
				func_52(&uLocal_846);
				STREAMING::END_SRL();
				CAM::DO_SCREEN_FADE_IN(1000);
				iLocal_731[iParam0] = 12;
			}
			break;
		case 12:
			func_64(2, Global_35, 0, iLocal_835, 0, 1092616192 /* Float: 10f */, 1103626240 /* Float: 25f */);
			CAM::_0x702B75DC9D3EDE56(true);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			func_65(Global_35, 1.25f);
			func_65(&(uLocal_729[iParam0]), 1.25f);
			if (AUDIO::_0xFFE9C53DEEA3DB0B((CAM::_0xEA113BF9B0C0C5D7("script@Cinematics@TripSkip@Clemens_Point", "1_TripSkip_Clemens_1", 5) - func_66(&uLocal_846)), 0, 749.7f, -1202.1f, 46f, 1, 2147483647))
			{
				AUDIO::_0x43037ABFE214A851();
				CAM::_0xA54D643D0773EB65("script@Cinematics@TripSkip@Clemens_Point", "1_TripSkip_Clemens_1", 5);
				func_64(3, Global_35, 0, iLocal_835, 0, 1092616192 /* Float: 10f */, 1103626240 /* Float: 25f */);
				TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1.501f, 3000, 0f, true, false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				iLocal_731[iParam0] = 14;
			}
			else if (func_62(&uLocal_846) > 6f && !func_69(1))
			{
				func_70(&uLocal_735, "BRT2_AFTER_CME", &(uLocal_729[0]), Global_35, 0, 0, 1, 1);
			}
			break;
		case 13:
			if (iParam0 == 0)
			{
				func_71();
			}
			if (!PED::IS_PED_ON_MOUNT(&(uLocal_729[iParam0])))
			{
				TASK::CLEAR_PED_TASKS(&(uLocal_729[iParam0]), 1, 0);
				func_72(&(uLocal_729[iParam0]), &(iLocal_833[0]), 0, -1, 1);
				func_73(14);
			}
			if (func_74(&(uLocal_729[iParam0]), *(vLocal_836[iParam0 /*3*/]), 1) < 20f)
			{
				func_75();
				func_73(14);
			}
			else if ((TASK::GET_SCRIPT_TASK_STATUS(&(uLocal_729[0]), 242628503, 1) != 0 && TASK::GET_SCRIPT_TASK_STATUS(&(uLocal_729[0]), 242628503, 1) != 1) && !TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(&(uLocal_729[0]), 0))
			{
				iLocal_731[iParam0] = 0;
			}
			break;
		case 3:
			if (PED::IS_PED_ON_MOUNT(&(uLocal_729[iParam0])))
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(&(uLocal_729[iParam0]), sLocal_851, 0, 14, -1, 0, 0, -1);
				iLocal_731[iParam0] = 13;
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(&(uLocal_729[iParam0]), 1435919172, 1) != 0 && TASK::GET_SCRIPT_TASK_STATUS(&(uLocal_729[iParam0]), 1435919172, 1) != 1)
			{
				TASK::TASK_MOUNT_ANIMAL(&(uLocal_729[iParam0]), &(iLocal_833[0]), 20000, -1, 1073741824, 1, 0, 0);
			}
			break;
		case 14:
			func_65(&(uLocal_729[iParam0]), 1.501f);
			if (func_76(&(uLocal_729[iParam0]), *(vLocal_836[iParam0 /*3*/]), 1f, 1096810496 /* Float: 14f */))
			{
				iLocal_731[iParam0] = 15;
			}
			break;
		case 15:
			if (func_77(&(uLocal_729[iParam0])))
			{
				iLocal_731[iParam0] = 16;
			}
			break;
		case 16:
			if (func_78(&(iLocal_833[iParam0]), *(vLocal_836[iParam0 /*3*/]), 2f))
			{
				iLocal_731[iParam0] = 17;
			}
			break;
		case 17:
			if (func_76(&(uLocal_729[iParam0]), *(vLocal_840[iParam0 /*3*/]), 1f, 0.5f))
			{
				iLocal_731[iParam0] = 18;
			}
			break;
		case 18:
			return 1;
	}
	return 0;
}

int func_26()
{
	int iVar0;

	iVar0 = 1;
	return iVar0;
}

int func_27(var uParam0)
{
	return 1;
}

void func_28(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_79(iParam0))
		{
			return;
		}
	}
	func_80(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_29(var uParam0, bool bParam1)
{
	if (bParam1 || !func_81(uParam0))
	{
		func_52(uParam0);
	}
}

void func_30(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!func_79(iParam1))
	{
		return;
	}
	iVar0 = func_49(iParam1);
	if (func_82(iParam1))
	{
		if (!func_83(iParam1))
		{
			return;
		}
	}
	func_40(iParam1, 39, 1);
	func_84(iParam1, 64, 0);
	((*Global_1360165)[iParam1 /*1157*/])->f_70.f_11 = 0;
	func_84(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_84(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_28(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_85(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_31(int iParam0)
{
	func_38(iParam0, 8, 0);
}

var func_32(int iParam0)
{
	return STREAMING::_0x4EDDD9E9CA5AF985(iParam0);
}

int func_33(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return 1;
	}
	if (func_86(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_86(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_86(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_86(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_86(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_86(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_86(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_86(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_34(bool bParam0)
{
	if (bParam0)
	{
		if (func_87(Global_1393447, 1024))
		{
			func_88(Global_1393447, 1024);
		}
	}
	else
	{
		func_89(Global_1393447, 1024);
	}
}

void func_35()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Local_19 - 1))
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST((Local_19[iVar0 /*11*/])->f_10))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED((Local_19[iVar0 /*11*/])->f_10, false);
			GRAPHICS::REMOVE_PARTICLE_FX((Local_19[iVar0 /*11*/])->f_10, false);
		}
		iVar0++;
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_724))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_724, false);
		GRAPHICS::REMOVE_PARTICLE_FX(iLocal_724, false);
		iLocal_724 = 0;
	}
}

bool func_36(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_79(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

void func_37(int iParam0, bool bParam1)
{
	if (!func_79(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_90(&(((*Global_1360165)[iParam0 /*1157*/])->f_12), 1))
		{
			func_38(iParam0, 1, 0);
		}
	}
	func_38(iParam0, 16, bParam1);
}

void func_38(int iParam0, int iParam1, bool bParam2)
{
	if (!func_79(iParam0))
	{
		return;
	}
	func_91(&(((*Global_1360165)[iParam0 /*1157*/])->f_13), iParam1, bParam2);
}

void func_39(int iParam0)
{
	func_28(iParam0, 36, 1);
}

void func_40(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_79(iParam0))
		{
			return;
		}
	}
	func_80(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

int func_41(int iParam0, bool bParam1)
{
	if (!func_14(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_1))
		{
			func_92(iParam0);
		}
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_1;
}

bool func_42(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_79(iParam0))
		{
			return false;
		}
	}
	func_80(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0]), iVar1);
}

void func_43(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_14(iParam0))
	{
		iVar1 = func_93(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179, true);
			func_94(iParam0);
		}
	}
	if (func_42(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_93(iParam0), 137, true);
	}
}

void func_44(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_79(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_40(iParam0, 50, 1);
		func_40(iParam0, 48, 1);
		func_40(iParam0, 49, 1);
		func_40(iParam0, 51, 1);
		func_40(iParam0, 52, 1);
		func_40(iParam0, 54, 1);
		func_40(iParam0, 55, 1);
	}
	else
	{
		func_28(iParam0, 50, 1);
		func_28(iParam0, 48, 1);
		func_28(iParam0, 49, 1);
		func_28(iParam0, 51, 1);
		if (bParam3)
		{
			func_28(iParam0, 54, 1);
		}
		else
		{
			func_40(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_28(iParam0, 52, 1);
			if (bParam3)
			{
				func_28(iParam0, 55, 1);
			}
		}
		else
		{
			func_40(iParam0, 52, 1);
			if (!bParam3)
			{
				func_40(iParam0, 55, 1);
			}
		}
	}
}

void func_45(int iParam0, bool bParam1)
{
	if (!func_79(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_93(iParam0), 204, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_93(iParam0), 204, false);
	}
}

void func_46(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_47(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;

	if (!func_14(iParam0))
	{
		return;
	}
	if (func_12(iParam0))
	{
		if (!func_15(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_42(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	uVar0 = func_41(iParam0, 0);
	if (!MISC::_0x716F17F8A0419F95(uVar0))
	{
		return;
	}
	iVar1 = func_93(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_95(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_ATTACHED(iVar1))
	{
		if (((TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar1, 1) || TASK::_0x0C3CB2E600C8977D(iVar1, 1)) || PED::IS_PED_ON_MOUNT(iVar1)) || PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
		{
			PED::_0xF1C03A5352243A30(iVar1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, 1, 1);
		}
		ENTITY::DETACH_ENTITY(iVar1, true, true);
	}
	if (bParam4)
	{
		func_28(iParam0, 2, 1);
	}
	else
	{
		func_96(iParam0);
		func_28(iParam0, 1, 1);
	}
}

void func_48(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_14(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (&Global_40.f_4942[iParam0 /*60*/] - (Global_40.f_4942[iParam0 /*60*/] && iParam1));
}

int func_49(int iParam0)
{
	if (!func_14(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(((*Global_1360165)[iParam0 /*1157*/])->f_70))
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70 = 0;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70;
}

int func_50(int iParam0)
{
	if (!func_97(iParam0))
	{
		return -1;
	}
	return func_98(iParam0);
}

void func_51(int iParam0)
{
	func_38(iParam0, 8, 1);
}

void func_52(var uParam0)
{
	func_99(uParam0, 0f);
}

int func_53(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_100(*uParam0, 0f, 0f, 0f))
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

void func_54()
{
	int iVar0;

	Local_19[0 /*11*/] = "ent_amb_generic_fire_field";
	(Local_19[0 /*11*/])->f_1 = { 1867.722f, -1269.971f, 41.75f };
	Local_19[1 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	(Local_19[1 /*11*/])->f_1 = { 1874.872f, -1268.89f, 42f };
	Local_19[2 /*11*/] = "ent_amb_generic_fire_field";
	(Local_19[2 /*11*/])->f_1 = { 1872.931f, -1277.735f, 42f };
	Local_19[3 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	(Local_19[3 /*11*/])->f_1 = { 1877.412f, -1277.697f, 42f };
	Local_19[4 /*11*/] = "ent_amb_generic_fire_field_smoke";
	(Local_19[4 /*11*/])->f_1 = { 1881.375f, -1278.052f, 42f };
	Local_19[5 /*11*/] = "ent_amb_generic_fire_field";
	(Local_19[5 /*11*/])->f_1 = { 1881.468f, -1273.121f, 42f };
	Local_19[6 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	(Local_19[6 /*11*/])->f_1 = { 1884.448f, -1284.069f, 42f };
	Local_19[7 /*11*/] = "ent_amb_generic_fire_field";
	(Local_19[7 /*11*/])->f_1 = { 1891.398f, -1280.363f, 42f };
	Local_19[8 /*11*/] = "ent_amb_generic_fire_field";
	(Local_19[8 /*11*/])->f_1 = { 1872.865f, -1264.383f, 41.25f };
	Local_19[9 /*11*/] = "ent_amb_generic_fire_field";
	(Local_19[9 /*11*/])->f_1 = { 1875.69f, -1259.6f, 41.25f };
	Local_19[10 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	(Local_19[10 /*11*/])->f_1 = { 1876.942f, -1264.856f, 41.25f };
	Local_19[11 /*11*/] = "ent_amb_generic_fire_field_smoke";
	(Local_19[11 /*11*/])->f_1 = { 1877.321f, -1263.243f, 41.25f };
	Local_19[12 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	(Local_19[12 /*11*/])->f_1 = { 1883.229f, -1267.838f, 41.25f };
	Local_19[13 /*11*/] = "ent_amb_generic_fire_field";
	(Local_19[13 /*11*/])->f_1 = { 1886.58f, -1263.57f, 41.25f };
	Local_19[14 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	(Local_19[14 /*11*/])->f_1 = { 1887.436f, -1273.811f, 41.25f };
	Local_19[15 /*11*/] = "ent_amb_generic_fire_field";
	(Local_19[15 /*11*/])->f_1 = { 1895.106f, -1270.913f, 41.25f };
	Local_19[16 /*11*/] = "ent_amb_generic_fire_field";
	(Local_19[16 /*11*/])->f_1 = { 1916.311f, -1299.35f, 42f };
	Local_19[17 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	(Local_19[17 /*11*/])->f_1 = { 1929.981f, -1294.95f, 42f };
	Local_19[18 /*11*/] = "ent_amb_generic_fire_field_smoke";
	(Local_19[18 /*11*/])->f_1 = { 1929.423f, -1297.452f, 40.94f };
	Local_19[19 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	(Local_19[19 /*11*/])->f_1 = { 1929.332f, -1299.335f, 42f };
	Local_19[20 /*11*/] = "ent_amb_generic_fire_field";
	(Local_19[20 /*11*/])->f_1 = { 1926.691f, -1304.741f, 42f };
	Local_19[21 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	(Local_19[21 /*11*/])->f_1 = { 1924.386f, -1287.569f, 41.25f };
	Local_19[22 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	(Local_19[22 /*11*/])->f_1 = { 1934.887f, -1282.643f, 41.25f };
	Local_19[23 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	(Local_19[23 /*11*/])->f_1 = { 1934.175f, -1288.681f, 41.25f };
	Local_19[24 /*11*/] = "ent_amb_generic_fire_field";
	(Local_19[24 /*11*/])->f_1 = { 1943.7f, -1290.295f, 41.25f };
	Local_19[25 /*11*/] = "ent_amb_generic_fire_field";
	(Local_19[25 /*11*/])->f_1 = { 1883.25f, -1240.5f, 41.25f };
	Local_19[26 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	(Local_19[26 /*11*/])->f_1 = { 1884.1f, -1239.539f, 41.25f };
	Local_19[27 /*11*/] = "ent_amb_generic_fire_field";
	(Local_19[27 /*11*/])->f_1 = { 1889.946f, -1225.296f, 41.25f };
	Local_19[28 /*11*/] = "ent_amb_generic_fire_field";
	(Local_19[28 /*11*/])->f_1 = { 1899.524f, -1227.511f, 41.25f };
	Local_19[29 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	(Local_19[29 /*11*/])->f_1 = { 1896.586f, -1233.633f, 41.25f };
	Local_19[30 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	(Local_19[30 /*11*/])->f_1 = { 1894.156f, -1244.739f, 41.25f };
	Local_19[31 /*11*/] = "ent_amb_generic_fire_field";
	(Local_19[31 /*11*/])->f_1 = { 1890.77f, -1242.07f, 41.25f };
	Local_19[32 /*11*/] = "ent_amb_generic_fire_field";
	(Local_19[32 /*11*/])->f_1 = { 1902.875f, -1244.947f, 41.25f };
	Local_19[33 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	(Local_19[33 /*11*/])->f_1 = { 1904.97f, -1246.24f, 41.25f };
	Local_19[34 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	(Local_19[34 /*11*/])->f_1 = { 1879.71f, -1212.97f, 42.04f };
	Local_19[35 /*11*/] = "ent_amb_generic_fire_field";
	(Local_19[35 /*11*/])->f_1 = { 1872.41f, -1212.49f, 42.06f };
	Local_19[36 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	(Local_19[36 /*11*/])->f_1 = { 1880.6f, -1223.4f, 42.21f };
	Local_19[37 /*11*/] = "ent_amb_generic_fire_field";
	(Local_19[37 /*11*/])->f_1 = { 1929.277f, -1257.978f, 41.25f };
	Local_19[38 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	(Local_19[38 /*11*/])->f_1 = { 1931.329f, -1252.778f, 41.25f };
	Local_19[39 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	(Local_19[39 /*11*/])->f_1 = { 1922.45f, -1247.88f, 41.19f };
	Local_19[40 /*11*/] = "ent_amb_generic_fire_field";
	(Local_19[40 /*11*/])->f_1 = { 1937.175f, -1238.535f, 41.25f };
	Local_19[41 /*11*/] = "ent_amb_generic_fire_field";
	(Local_19[41 /*11*/])->f_1 = { 1940.458f, -1246.872f, 41.25f };
	Local_19[42 /*11*/] = "ent_amb_generic_fire_field_smoke";
	(Local_19[42 /*11*/])->f_1 = { 1934.825f, -1233.654f, 40.8048f };
	Local_19[43 /*11*/] = "ent_amb_generic_fire_field";
	(Local_19[43 /*11*/])->f_1 = { 1928.609f, -1230.984f, 40.8149f };
	Local_19[44 /*11*/] = "ent_amb_generic_fire_field";
	(Local_19[44 /*11*/])->f_1 = { 1926.991f, -1227.241f, 40.9096f };
	Local_19[45 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	(Local_19[45 /*11*/])->f_1 = { 1920.667f, -1238.667f, 40.891f };
	Local_19[46 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	(Local_19[46 /*11*/])->f_1 = { 1908.395f, -1239.765f, 41.1811f };
	Local_19[47 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	(Local_19[47 /*11*/])->f_1 = { 1910.051f, -1232.456f, 41.2506f };
	Local_19[48 /*11*/] = "scr_brt2_firesmoke_field";
	(Local_19[48 /*11*/])->f_1 = { 1909.43f, -1261.56f, 44f };
	(Local_19[49 /*11*/])->f_1 = { 1833.908f, -1276.66f, 42.25f };
	Local_19[49 /*11*/] = "scr_brt2_fire_roof";
	(Local_19[49 /*11*/])->f_4 = { 0f, 0f, 55f };
	(Local_19[50 /*11*/])->f_1 = { 1837.839f, -1275.031f, 42.25f };
	Local_19[50 /*11*/] = "scr_brt2_fire_roof";
	(Local_19[51 /*11*/])->f_1 = { 1836.424f, -1275.242f, 42.25f };
	Local_19[51 /*11*/] = "scr_brt2_fire_roof";
	(Local_19[51 /*11*/])->f_7 = 0.7f;
	(Local_19[52 /*11*/])->f_1 = { 1833.969f, -1272.529f, 42.25f };
	Local_19[52 /*11*/] = "scr_brt2_fire_roof";
	(Local_19[53 /*11*/])->f_1 = { 1834.613f, -1272.529f, 42.25f };
	Local_19[53 /*11*/] = "scr_brt2_fire_roof";
	(Local_19[53 /*11*/])->f_7 = 0.7f;
	(Local_19[54 /*11*/])->f_1 = { 1836.333f, -1273.839f, 42.25f };
	Local_19[54 /*11*/] = "scr_brt2_fire_roof";
	(Local_19[54 /*11*/])->f_4 = { 0f, 0f, -0.76f };
	(Local_19[55 /*11*/])->f_1 = { 1831.993f, -1279.635f, 42.25f };
	Local_19[55 /*11*/] = "ent_amb_generic_fire_field_nosmoke";
	(Local_19[55 /*11*/])->f_4 = { 0f, 0f, 100f };
	(Local_19[56 /*11*/])->f_1 = { 1830.964f, -1278.585f, 42.25f };
	Local_19[56 /*11*/] = "scr_brt2_fire_roof";
	(Local_19[56 /*11*/])->f_7 = 0.7f;
	(Local_19[57 /*11*/])->f_1 = { 1829.634f, -1276.956f, 45.765f };
	Local_19[57 /*11*/] = "scr_brt2_fire_roof";
	(Local_19[58 /*11*/])->f_1 = { 1836.749f, -1276.813f, 48.12f };
	Local_19[58 /*11*/] = "ent_amb_falling_embers";
	(Local_19[59 /*11*/])->f_1 = { 1830.366f, -1274.423f, 51.5f };
	Local_19[59 /*11*/] = "scr_brt2_fire_roof";
	(Local_19[60 /*11*/])->f_1 = { 1837.817f, -1278.222f, 48.677f };
	Local_19[60 /*11*/] = "scr_brt2_fire_win";
	(Local_19[60 /*11*/])->f_4 = { 0f, 0f, 60f };
	(Local_19[60 /*11*/])->f_7 = 1.5f;
	(Local_19[61 /*11*/])->f_1 = { 1838.397f, -1278.578f, 50.9f };
	Local_19[61 /*11*/] = "scr_brt2_fire_win";
	(Local_19[61 /*11*/])->f_4 = { 0f, 0f, 60f };
	(Local_19[61 /*11*/])->f_7 = 0.8f;
	(Local_19[62 /*11*/])->f_1 = { 1834.637f, -1277.732f, 51.742f };
	Local_19[62 /*11*/] = "scr_brt2_fire_roof";
	(Local_19[62 /*11*/])->f_7 = 0.5f;
	(Local_19[63 /*11*/])->f_1 = { 1833.666f, -1275.347f, 52.15f };
	Local_19[63 /*11*/] = "ent_amb_generic_fire_up";
	iVar0 = 0;
	while (iVar0 <= (Local_19 - 1))
	{
		(Local_19[iVar0 /*11*/])->f_10 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(&(Local_19[iVar0 /*11*/]), (Local_19[iVar0 /*11*/])->f_1, (Local_19[iVar0 /*11*/])->f_4, (Local_19[iVar0 /*11*/])->f_7, false, false, false, false);
		if (MISC::ARE_STRINGS_EQUAL(&(Local_19[iVar0 /*11*/]), "ent_amb_generic_fire_field") || MISC::ARE_STRINGS_EQUAL(&(Local_19[iVar0 /*11*/]), "ent_amb_generic_fire_field_nosmoke"))
		{
			(Local_19[iVar0 /*11*/])->f_9 = 1f;
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION((Local_19[iVar0 /*11*/])->f_10, "spread", (Local_19[iVar0 /*11*/])->f_9, false);
		}
		GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION((Local_19[iVar0 /*11*/])->f_10, "strength", (Local_19[iVar0 /*11*/])->f_8, false);
		iVar0++;
	}
	if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_724))
	{
		iLocal_724 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("ent_amb_generic_fire_field_glow", 1888.38f, -1298.95f, 41.96f, 0f, 0f, 0f, 1f, false, false, false, false);
		GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_724, "strength", 1f, false);
	}
}

int func_55(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *iParam0)
	{
		if (!func_15(iParam0[iVar1]))
		{
			(*uParam1)[iVar1] = func_101(iParam0[iVar1], bParam2, iParam3, 0, 0, 0, 0, bParam4, 1, 0, bParam5, 0, 0, 0, 0, bParam6, 0, 1, 1, 1, 0, 0, 1, bParam7, 1);
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *iParam0)
	{
		if (uParam1[iVar1] == 0)
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_56()
{
	WEAPON::SET_CURRENT_PED_WEAPON(&(uLocal_729[0]), joaat("weapon_unarmed"), false, 0, false, false);
	if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_833[0])))
	{
		TASK::CLEAR_PED_TASKS(&(iLocal_833[0]), 1, 0);
	}
	if (bLocal_853)
	{
		func_102();
	}
	func_103(&uLocal_735, &(uLocal_729[0]), "SEAN", 0);
	func_103(&uLocal_735, Global_35, "ARTHUR", 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uLocal_729[0]), true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(iLocal_833[0]), true);
}

void func_57(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, -1538724068);
	}
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1[iVar0]))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1[iVar0], -1538724068);
		}
		iVar0++;
	}
}

int func_58(int iParam0, bool bParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 1;
	}
	if (!Global_1935630->f_12)
	{
		if (bParam1 && func_59(iParam0, Global_35, 1) < 22500f)
		{
			return 0;
		}
		if (bParam2 && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, iParam0, 17))
		{
			return 0;
		}
	}
	return 1;
}

float func_59(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	}
	return func_104(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

int func_60(int iParam0)
{
	int iVar0;

	if (!func_79(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	if (MAP::DOES_BLIP_EXIST(((*Global_1360165)[iParam0 /*1157*/])->f_2))
	{
		iVar0 = ((*Global_1360165)[iParam0 /*1157*/])->f_2;
	}
	return iVar0;
}

int func_61(int iParam0)
{
	float fVar0;

	if (ENTITY::IS_ENTITY_DEAD(&(uLocal_729[iParam0])))
	{
		return 0;
	}
	fVar0 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar0 = 0.3f;
			break;
	}
	if (func_105(&uLocal_846, fVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(&(uLocal_729[iParam0]), joaat("weapon_unarmed"), true, 0, false, false);
		return 1;
	}
	return 0;
}

float func_62(var uParam0)
{
	if (!func_81(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_106(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_107() - uParam0->f_1);
}

void func_63(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	var uVar5;
	int iVar6;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		uVar3 = PED::_0xD5FE956C70FF370B(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == func_108(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_109(iParam0))
	{
		if (func_110(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (func_86(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_63(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_63(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_86(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 0, 1);
		}
	}
	if (func_86(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_86(iParam5, 32), 1);
		}
		else
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_86(iParam5, 32), 1);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (func_86(iParam5, 129))
	{
		if (func_86(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_86(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_86(iParam5, 32), 1);
	}
	if (bVar4)
	{
		if (!func_86(iParam5, 16))
		{
			PED::_0x7DE9692C6F64CFE8(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), uVar3, 0, 0);
		}
		if (func_109(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_86(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, 1, 0);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_86(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

void func_64(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (!func_111(iParam2, 1))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true);
				if (!ENTITY::IS_ENTITY_DEAD(iParam3))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iParam3, true);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iParam4))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iParam4, true);
				}
			}
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iParam1, 1);
			break;
		case 1:
			if (!func_111(iParam2, 4))
			{
				iVar0 = VOLUME::_CREATE_VOLUME_BOX(OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true, false), ENTITY::GET_ENTITY_HEADING(iParam1), 0f, (fParam6 * 0.5f), 0f), 0f, 0f, ENTITY::GET_ENTITY_HEADING(iParam1), iParam5, fParam6, 10f);
				MISC::_0x2FCD528A397E5C88(iVar0, 1064968);
				VOLUME::_0x43F867EF5C463A53(iVar0);
			}
			break;
		case 2:
			if (!func_111(iParam2, 8))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam3))
				{
					if (!func_112(iParam1, iParam3, 1))
					{
						PED::_SET_PED_ON_MOUNT(iParam1, iParam3, -1, true);
					}
				}
				else if (!ENTITY::IS_ENTITY_DEAD(iParam4))
				{
					if (!PED::IS_PED_ON_SPECIFIC_VEHICLE(iParam1, iParam4))
					{
						PED::SET_PED_INTO_VEHICLE(iParam1, iParam4, -1);
					}
				}
			}
			if (!func_111(iParam2, 16))
			{
				if (PED::IS_PED_ON_MOUNT(iParam1))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_EXIT"), false);
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
				}
			}
			break;
		case 3:
			if (!func_111(iParam2, 2))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iParam1, false);
				if (!ENTITY::IS_ENTITY_DEAD(iParam3))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iParam3, false);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iParam4))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iParam4, false);
				}
			}
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iParam1, 0);
			break;
	}
}

void func_65(int iParam0, float fParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam0, 0))
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam0, fParam1, 0, -1082130432, 0);
		}
	}
}

int func_66(var uParam0)
{
	if (!func_81(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_106(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_113() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

int func_67(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_114(iParam0))
	{
		return 1;
	}
	if (func_115(32768))
	{
		return 1;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1835011)[iParam0 /*74*/])->f_16, false))
	{
		return 1;
	}
	iVar0 = func_117(func_116(iParam0));
	if (((*Global_1835011)[iParam0 /*74*/])->f_71)
	{
		return 1;
	}
	if (!func_118(func_116(iParam0)))
	{
		func_119(iParam0, 0, 0, -1);
	}
	if (func_120(iVar0))
	{
		if (!((*Global_1835011)[iParam0 /*74*/])->f_71)
		{
			if (bParam1)
			{
				func_121(iVar0, 256);
			}
			if (bParam2)
			{
				func_121(iVar0, 512);
			}
			((*Global_1835011)[iParam0 /*74*/])->f_71 = 1;
			return 1;
		}
	}
	return 0;
}

int func_68(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_122(iParam0))
	{
		return 1;
	}
	if (!func_123(iParam0, 0))
	{
		if (iParam1 == 0)
		{
			return 1;
		}
		func_124(iParam0, 0);
	}
	if (bParam2)
	{
		if (!func_125(((*Global_1347702)[iParam0 /*49*/])->f_13, 1024))
		{
			func_126(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 1024);
		}
	}
	if (bParam4 && !func_125(((*Global_1347702)[iParam0 /*49*/])->f_13, 8192))
	{
		func_126(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 8192);
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1347702)[iParam0 /*49*/])->f_42, false))
	{
		if (func_125(((*Global_1347702)[iParam0 /*49*/])->f_13, 64))
		{
			return 1;
		}
		return 0;
	}
	if (!func_127(iParam0))
	{
		func_128(((*Global_1347702)[iParam0 /*49*/])->f_15);
	}
	else if (bParam3 && !func_129(((*Global_1347702)[iParam0 /*49*/])->f_15))
	{
		func_130(((*Global_1347702)[iParam0 /*49*/])->f_15);
	}
	if (!func_125(((*Global_1347702)[iParam0 /*49*/])->f_13, 256))
	{
		func_126(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 256);
	}
	return 0;
}

bool func_69(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

int func_70(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	vector3 vVar0[24];
	int iVar3;

	iParam3 = iParam3;
	iParam4 = iParam4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam2) && (func_131(iParam2, iParam3, 1, 1) < 70f || bParam5))
	{
		StringCopy(&cVar0, sParam1, 24);
		if (bParam7)
		{
			TASK::TASK_LOOK_AT_ENTITY(iParam2, iParam3, 7000, 0, 51, 0);
			if (func_131(iParam2, iParam3, 1, 1) < 25f)
			{
				TASK::TASK_LOOK_AT_ENTITY(iParam3, iParam2, 7000, 0, 51, 0);
			}
		}
		if (iParam4 > 0)
		{
			iVar3 = 1;
		}
		func_52(&uLocal_0);
		if (AUDIO::_0xD89504D9D7D5057D(sParam1))
		{
			if (func_132(sParam1))
			{
				return 1;
			}
		}
		else if (func_133(uParam0, cVar0, iVar3, iParam4, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_71()
{
	float fVar0;
	char cVar1[16];

	if (bLocal_853)
	{
		if (func_135(Global_35, func_134(105), 1, 0))
		{
			fVar0 = 1.501f;
		}
		else
		{
			fVar0 = 1.75f;
		}
		func_136(&(uLocal_729[0]), fVar0, 0, 1045220557 /* Float: 0.2f */, 1, 3f, (30f / 2f), (60f / 2f), 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 0, 1045220557 /* Float: 0.2f */, 0);
		if (func_131(Global_35, &(uLocal_729[0]), 1, 1) > 80f)
		{
			func_75();
			func_52(&uLocal_846);
			bLocal_853 = false;
		}
		if (iLocal_854 <= 2)
		{
			if (func_62(&uLocal_846) > 20f)
			{
				StringCopy(&cVar1, "BRT2_OUT_", 16);
				StringIntConCat(&cVar1, iLocal_854, 16);
				if (func_70(&uLocal_735, &cVar1, &(uLocal_729[0]), Global_35, 0, 0, 1, 1))
				{
					iLocal_854++;
					func_52(&uLocal_846);
				}
			}
		}
	}
	else if (func_62(&uLocal_846) > 10f && func_131(Global_35, &(uLocal_729[0]), 1, 1) < 10f)
	{
		if (func_70(&uLocal_735, "BRT2_OUT_S", &(uLocal_729[0]), Global_35, 0, 0, 1, 1))
		{
			func_102();
			func_52(&uLocal_846);
			func_51(8);
			bLocal_733 = true;
			bLocal_853 = true;
		}
	}
}

int func_72(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (PED::GET_MOUNT(iParam0) != iParam1)
	{
		PED::_SET_PED_ON_MOUNT(iParam0, iParam1, iParam3, bParam4);
		PED::SET_PED_CAN_BE_TARGETTED(iParam1, bParam2);
	}
	return 1;
}

void func_73(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_729[iVar0])))
		{
			iLocal_731[iVar0] = iParam0;
		}
		iVar0++;
	}
}

float func_74(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_75()
{
	if (PED::DOES_GROUP_EXIST(iLocal_734))
	{
		PED::REMOVE_GROUP(iLocal_734);
	}
	if (func_33(&(uLocal_729[0]), 0) && PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0x0C6B89876262A99D(PLAYER::GET_PLAYER_INDEX(), &(uLocal_729[0]));
	}
}

int func_76(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 1;
	}
	if (func_137(iParam0, vParam1, 1) < fParam5)
	{
		TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
		return 1;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 713668775, 1) > 1)
	{
		TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, vParam1, fParam4, -1, 0.25f, 4, 40000f);
	}
	return 0;
}

int func_77(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 1;
	}
	if (func_138(iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 501393341, 1) > 1)
		{
			TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
			TASK::TASK_DISMOUNT_ANIMAL(iParam0, 0, 0, 0, 0, 0);
		}
	}
	else
	{
		TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
		return 1;
	}
	return 0;
}

int func_78(int iParam0, vector3 vParam1, float fParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 1;
	}
	if (func_139(iParam0, vParam1, fParam4, 0))
	{
		return 1;
	}
	return 0;
}

bool func_79(int iParam0)
{
	return iParam0 > -1;
}

int func_80(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_81(var uParam0)
{
	return func_140(*uParam0, 1);
}

int func_82(int iParam0)
{
	if (!func_79(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == 0 || ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == ((*Global_1360165)[iParam0 /*1157*/])->f_128)
	{
		return 0;
	}
	return 1;
}

bool func_83(int iParam0)
{
	if (!func_79(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_84(int iParam0, int iParam1, bool bParam2)
{
	if (!func_79(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 || iParam1);
	}
	else
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 - (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 && iParam1));
	}
}

int func_85(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!func_79(iParam0))
	{
		return 0;
	}
	iVar0 = func_49(iParam0);
	if (func_33(iVar0, 0))
	{
		if (func_33(PED::_0xB676EFDA03DADA52(iVar0, 0), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_82(iParam0)) || func_83(iParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(iVar0) && func_59(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 10000f))
			{
				iVar1 = func_141(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
					}
					func_142(iParam0);
					_NAMESPACE48::_0x7B204F88F6C3D287(func_143(iParam0, 0));
					_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_143(iParam0, 0));
					func_144(iParam0);
				}
			}
			else
			{
				if (func_36(iParam0, 32768, 1))
				{
					uVar2 = func_143(iParam0, 0);
					_NAMESPACE48::_0xB65E7F733956CF25(uVar2);
					_NAMESPACE48::_0xFCC6DB8DBE709BC8(uVar2);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_33(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
		{
			if (func_36(iParam0, 32768, 1))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(((*Global_1360165)[iParam0 /*1157*/])->f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				}
				func_142(iParam0);
				_NAMESPACE48::_0x7B204F88F6C3D287(func_143(iParam0, 0));
				_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_143(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				func_142(iParam0);
				PED::DELETE_PED(&(((*Global_1360165)[iParam0 /*1157*/])->f_124));
			}
		}
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = 0;
	func_145(iParam0, 0);
	return 1;
}

bool func_86(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_87(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

void func_88(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_89(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_90(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_91(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || iParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	}
}

void func_92(int iParam0)
{
	int iVar0;

	if (!func_79(iParam0))
	{
		return;
	}
	if (!MISC::_0x716F17F8A0419F95(((*Global_1360165)[iParam0 /*1157*/])->f_1))
	{
		iVar0 = func_146(iParam0);
		if (iVar0 != 0)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = _NAMESPACE48::_0x4F76E3676583D951(iVar0);
			_NAMESPACE48::_0xFCC6DB8DBE709BC8(((*Global_1360165)[iParam0 /*1157*/])->f_1);
		}
		else
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = 0;
		}
	}
}

int func_93(int iParam0)
{
	if (!func_79(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_94(int iParam0)
{
	if (func_14(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_93(iParam0)))
		{
			func_147(iParam0, 67108864, 1);
			func_40(iParam0, 19, 1);
		}
	}
}

float func_95(int iParam0)
{
	if (!func_79(iParam0))
	{
		return 0f;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_134;
}

void func_96(int iParam0)
{
	int iVar0;
	var uVar1;
	bool bVar2;

	iVar0 = func_93(iParam0);
	uVar1 = func_41(iParam0, 0);
	func_148(iParam0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			PED::_0xF008E0BA1FE1D644(1);
			bVar2 = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
		_NAMESPACE48::_0x7B204F88F6C3D287(uVar1);
		if (bVar2)
		{
			PED::_0x7D4E70A67A651C71(1);
		}
	}
	_NAMESPACE48::_0xFCC6DB8DBE709BC8(uVar1);
}

bool func_97(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_98(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_3;
	}
	return 0;
}

void func_99(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_107() - fParam1);
	func_149(uParam0, 1);
	func_150(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_100(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_101(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;

	if (!func_14(iParam0))
	{
		return 0;
	}
	vVar0.x = iParam3;
	vVar0.f_1 = iParam4;
	vVar0.f_2 = iParam5;
	if (((Global_1572864->f_13 || Global_1572864->f_14) || Global_1572864->f_8 != 0) || Global_1391438->f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch (((*Global_1360165)[iParam0 /*1157*/])->f_11)
	{
		case 0:
			if (func_42(iParam0, 2, 1))
			{
				func_40(iParam0, 2, 1);
			}
			if (func_36(iParam0, 16, 1))
			{
				if ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD()
				{
					if (bParam14)
					{
						func_28(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1360165)[iParam0 /*1157*/])->f_129, false))
					{
					}
					else
					{
						func_13(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_33(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (func_33(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						func_151(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_28(iParam0, 44, 1);
				((*Global_1360165)[iParam0 /*1157*/])->f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_152(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_28(iParam0, 44, 1);
				((*Global_1360165)[iParam0 /*1157*/])->f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_152(iParam0, 1);
			}
			else
			{
				return 0;
			}
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = (Global_40.f_4942[iParam0 /*60*/])->f_4;
				}
			}
			if (!func_42(iParam0, 44, 0))
			{
				func_28(iParam0, 44, 0);
			}
			if (func_153(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_152(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			func_40(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 0);
			_NAMESPACE48::_0x6759BEE6762E140B(((*Global_1360165)[iParam0 /*1157*/])->f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			func_44(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_154(iParam0, 0, 0, 1);
			}
			func_40(iParam0, 33, 1);
			func_40(iParam0, 34, 1);
			func_40(iParam0, 29, 1);
			if (!func_155(vVar0) && bParam7)
			{
				func_152(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_152(iParam0, 4);
			}
			else
			{
				func_152(iParam0, 5);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/]))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1360165[iParam0 /*1157*/]) && bParam10)
					{
					}
					else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1360165[iParam0 /*1157*/]))
					{
						func_151(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_63(Global_1360165[iParam0 /*1157*/], vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[iParam0 /*1157*/], 0) && !TASK::_0x0C3CB2E600C8977D(Global_1360165[iParam0 /*1157*/], 1))
				{
					TASK::CLEAR_PED_TASKS(Global_1360165[iParam0 /*1157*/], 1, 0);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				func_152(iParam0, 4);
			}
			else
			{
				func_152(iParam0, 5);
			}
			break;
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = (Global_40.f_4942[iParam0 /*60*/])->f_4;
					}
				}
				if (func_156(iParam0, iParam13))
				{
					if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
					{
						func_157(iParam0, iParam13, 0);
						func_158(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (func_42(iParam0, 25, 0))
						{
							func_40(iParam0, 25, 0);
						}
						func_28(iParam0, 66, 0);
						func_152(iParam0, 5);
						((*Global_1360165)[iParam0 /*1157*/])->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_152(iParam0, 5);
				}
				func_28(iParam0, 28, 1);
			}
			else
			{
				func_152(iParam0, 5);
			}
			break;
		case 5:
			if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
			{
				func_152(iParam0, 6);
			}
			break;
		case 6:
			if (func_33(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (bParam24)
				{
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], true);
				}
				if (bParam18)
				{
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5);
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5, "ALL");
							iVar5++;
						}
						PED::_0xE3144B932DFDFF65(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
						PED::_0xD049920CD29F6CC8(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					func_159(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					func_160(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			func_152(iParam0, 7);
		case 7:
			func_44(iParam0, bParam9, bParam15, 0);
			func_38(iParam0, 4, bParam11);
			func_39(iParam0);
			if (bParam20)
			{
				if (func_161(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			func_162(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
			}
			(Global_40.f_4942[iParam0 /*60*/])->f_4 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
			func_152(iParam0, 0);
			func_147(iParam0, 16, 1);
			func_40(iParam0, 44, 1);
			((*Global_1360165)[iParam0 /*1157*/])->f_1156 = 0;
			((*Global_1360165)[iParam0 /*1157*/])->f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

void func_102()
{
	iLocal_734 = PED::CREATE_GROUP(0);
	PED::SET_GROUP_FORMATION(iLocal_734, 10);
	PED::SET_PED_CONFIG_FLAG(&(uLocal_729[0]), 279, true);
	PED::SET_PED_AS_GROUP_LEADER(&(uLocal_729[0]), iLocal_734, 0);
	PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::GET_PLAYER_INDEX(), &(uLocal_729[0]), -1082130432, -1082130432, 1, 2, 0);
}

void func_103(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_163(uParam0, iParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam1, bParam3);
			}
		}
	}
}

float func_104(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_105(var uParam0, float fParam1)
{
	if (!func_81(uParam0))
	{
		return 0;
	}
	if (func_62(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

bool func_106(var uParam0)
{
	return func_140(*uParam0, 2);
}

float func_107()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_108(var uParam0)
{
	return uParam0;
}

int func_109(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_0x772A1969F649E902(iVar0);
}

int func_110(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x34D6AC1157C8226C(iParam0, -1805387726))
	{
		return 1;
	}
	return 0;
}

bool func_111(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_112(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (bParam2)
			{
				return (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true) && PED::GET_MOUNT(iParam0) == iParam1);
			}
			else
			{
				return (PED::IS_PED_ON_MOUNT(iParam0) && PED::GET_MOUNT(iParam0) == iParam1);
			}
		}
	}
	return 0;
}

int func_113()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_114(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_115(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_116(int iParam0)
{
	if (!func_114(iParam0))
	{
		return 0;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_1;
}

int func_117(int iParam0)
{
	int iVar0;

	if (&Global_1898329 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1898329 - 1))
	{
		if (Global_1898330[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_118(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = (Global_12105[iParam0 /*7*/])->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_164(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

int func_119(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (!func_165(iParam0))
	{
		return 0;
	}
	if ((func_166(((*Global_1347702)[59 /*49*/])->f_15, 1) && !func_166(((*Global_1347702)[61 /*49*/])->f_15, 1)) && Global_40.f_9052.f_21 & 2 == 0)
	{
		return 0;
	}
	if (func_167(PLAYER::PLAYER_ID(), 1, 0))
	{
		if ((!MAP::DOES_BLIP_EXIST(((*Global_1835011)[iParam0 /*74*/])->f_27) && !func_168(iParam0)) && !Global_43890)
		{
			func_170(iParam0, BUILTIN::VDIST2(func_169(iParam0), Global_36), -1, 1, 1);
			func_171((*Global_1835011)[iParam0 /*74*/], 2);
		}
		return 0;
	}
	if (bParam2)
	{
		if (!func_173(func_172(iParam0), func_116(iParam0), 0, ((*Global_1835011)[iParam0 /*74*/])->f_21, iParam3))
		{
			return 0;
		}
		if (func_174(1) > 1)
		{
			if (((*Global_1835011)[iParam0 /*74*/])->f_73 <= 0)
			{
				((*Global_1835011)[iParam0 /*74*/])->f_73 = MISC::GET_GAME_TIMER();
			}
			if ((MISC::GET_GAME_TIMER() - ((*Global_1835011)[iParam0 /*74*/])->f_73) < 60000)
			{
				if (func_175(iParam0, 0, 1))
				{
					return 0;
				}
				if ((iParam0 == 15 && Global_1357549->f_1494 & 32768 != 0) && func_177(Global_35, func_176(iParam0), 50f, 1, 1))
				{
					if (!GRAPHICS::_0xF2FDDCC8C6BAE1B3(((*Global_1835011)[iParam0 /*74*/])->f_72))
					{
						((*Global_1835011)[iParam0 /*74*/])->f_72 = GRAPHICS::CREATE_TRACKED_POINT();
						GRAPHICS::SET_TRACKED_POINT_INFO(((*Global_1835011)[iParam0 /*74*/])->f_72, func_176(iParam0), 5f);
					}
					if (CAM::IS_SCREEN_FADED_IN() && (GRAPHICS::IS_TRACKED_POINT_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_72) || CAM::IS_SPHERE_VISIBLE(func_176(iParam0), 2.5f)))
					{
						return 0;
					}
				}
			}
		}
	}
	iVar0 = func_128(((*Global_1835011)[iParam0 /*74*/])->f_1);
	if (!func_120(iVar0))
	{
		return 0;
	}
	else if (((*Global_1835011)[iParam0 /*74*/])->f_73 != 0)
	{
		((*Global_1835011)[iParam0 /*74*/])->f_73 = 0;
		func_178(iParam0);
		if (GRAPHICS::_0xF2FDDCC8C6BAE1B3(((*Global_1835011)[iParam0 /*74*/])->f_72))
		{
			GRAPHICS::DESTROY_TRACKED_POINT(((*Global_1835011)[iParam0 /*74*/])->f_72);
		}
	}
	if (bParam1)
	{
		func_130(((*Global_1835011)[iParam0 /*74*/])->f_1);
	}
	else if (!&Global_1879534)
	{
		func_179(4);
	}
	return 1;
}

int func_120(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return 0;
	}
	return 1;
}

void func_121(int iParam0, int iParam1)
{
	if (!func_120(iParam0))
	{
		return;
	}
	((*Global_1898346)[iParam0 /*6*/])->f_1 = (((*Global_1898346)[iParam0 /*6*/])->f_1 || iParam1);
}

bool func_122(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_123(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_180() != -1)
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

int func_124(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_181(((*Global_1347702)[iParam0 /*49*/])->f_12, 2097152))
		{
			if (func_166(((*Global_1835011)[59 /*74*/])->f_1, 1))
			{
				return 0;
			}
		}
		else if (func_181(((*Global_1347702)[iParam0 /*49*/])->f_12, 256))
		{
			if (!func_166(((*Global_1835011)[59 /*74*/])->f_1, 1))
			{
				return 0;
			}
		}
	}
	return func_182(iParam0);
}

bool func_125(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_126(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_127(int iParam0)
{
	if (func_180() != -1)
	{
		return 0;
	}
	if (!func_122(iParam0))
	{
		return 0;
	}
	return func_118(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_128(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> Var3;

	if (&Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_183(iParam0))
	{
		return -1;
	}
	if (func_180() != -1)
	{
		iVar2 = func_117(iParam0);
		if (iVar2 >= 0)
		{
			func_184(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = &Global_1898329;
			(*Global_1898330)[iVar1] = iParam0;
			*((*Global_1898346)[iVar1 /*6*/]) = { Var3 };
			func_185(iVar1, 1);
			func_184(iParam0, 1);
			Global_1898329 = &Global_1898329 + 1;
			if (&Global_1898329 > 15)
			{
				Global_1898329 = 15;
			}
			return iVar1;
		}
	}
	else
	{
		iVar2 = func_117(iParam0);
		if (iVar2 >= 0)
		{
			func_184(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < &Global_1898330)
			{
				if (!func_97(Global_1898330[iVar0]))
				{
					(*Global_1898330)[iVar0] = iParam0;
					*((*Global_1898346)[iVar0 /*6*/]) = { Var3 };
					func_185(iVar0, 1);
					func_184(iParam0, 1);
					Global_1898329 = &Global_1898329 + 1;
					if (&Global_1898329 > 15)
					{
						Global_1898329 = 15;
					}
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

bool func_129(int iParam0)
{
	return func_186(iParam0) == 2;
}

void func_130(int iParam0)
{
	func_187(iParam0);
}

float func_131(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && bParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && bParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

int func_132(char* sParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(sParam0))
	{
		AUDIO::START_PRELOADED_CONVERSATION(sParam0);
		return 1;
	}
	return 0;
}

bool func_133(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!AUDIO::_0xD89504D9D7D5057D(&cParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&cParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_188(cParam1, cParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&cParam1, iParam5);
		}
	}
	return bVar0;
}

int func_134(int iParam0)
{
	if (!func_189(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_3;
}

bool func_135(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

void func_136(int iParam0, float fParam1, int iParam2, int iParam3, bool bParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam0, 0))
			{
				if (bParam4)
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam0, fParam1, iParam2, iParam3, 0);
				}
				TASK::SET_ENABLE_SPEED_RESTRAIN_FOR_WAYPOINT_RECORDING_LEADER(iParam0, 1);
				TASK::SET_UP_SPEED_RESTRAIN_INFORMATION_FOR_PLAYER_FOLLOWER(iParam0, fParam5, fParam6, fParam7, iParam8, iParam9, iParam11, iParam12, iParam13);
			}
		}
	}
	if (bParam10)
	{
		if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MELEE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_PRIMARY"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_SECONDARY"), false);
		}
	}
}

float func_137(int iParam0, vector3 vParam1, bool bParam4)
{
	vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	}
	if (bParam4)
	{
		return BUILTIN::VDIST2(vVar0, vParam1);
	}
	return func_104(vVar0, vParam1);
}

bool func_138(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

int func_139(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	int iVar0;
	var uVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	func_190(vParam1, fParam4, 0);
	TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
	iVar0 = -1805387726;
	uVar1 = TASK::_0xF533D68FF970D190(vParam1, iVar0, fParam4, 1, 0);
	if (TASK::_0x841475AC96E794D1(uVar1))
	{
		TASK::_TASK_USE_SCENARIO_POINT(iParam0, uVar1, 0, -1, 1, iParam5, iVar0, 0, -1082130432, 0);
	}
	else
	{
		TASK::TASK_STAND_STILL(iParam0, -1);
	}
	return 1;
}

bool func_140(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_141(int iParam0, bool bParam1)
{
	if (!func_79(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_127 != 0)
	{
		return ((*Global_1360165)[iParam0 /*1157*/])->f_127;
	}
	switch (iParam0)
	{
		case 3:
			return -698095578;
		case 7:
			return 230221572;
		case 0:
			return 47961446;
		case 5:
			return 1268955201;
		case 2:
			return 2103924091;
		case 1:
			return 1554677062;
		case 9:
			return 984702223;
		case 6:
			return -1825091419;
		case 11:
			return 948152617;
		case 8:
			return 795059774;
		case 23:
			return -1880884094;
		case 20:
			return 849012978;
		case 4:
			return 404801781;
		case 10:
			return -1094022447;
		case 26:
			return -1484815615;
		case 12:
		case 14:
			return 0;
		default:
			break;
	}
	if (bParam1)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_127 = func_191(iParam0);
		return ((*Global_1360165)[iParam0 /*1157*/])->f_127;
	}
	return 0;
}

void func_142(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_49(iParam0);
	if (!PED::_0xA911EE21EDF69DAF(iVar0))
	{
		return;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = 0;
	while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar1))
	{
		iVar3 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar1));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
		}
		else
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(iVar3))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar3, true, true);
			}
			ENTITY::_0x0D0DB2B6AF19A987(&iVar3);
		}
		iVar2++;
	}
}

int func_143(int iParam0, bool bParam1)
{
	if (!func_79(iParam0))
	{
		return 0;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_126) && bParam1)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_126 = func_192(iParam0);
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_126;
}

void func_144(int iParam0)
{
	int iVar0;

	if (!func_79(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((Global_1357549->f_1675[iVar0 /*5*/])->f_1 == iParam0)
		{
			(Global_1357549->f_1675[iVar0 /*5*/])->f_1 = -1;
			((*Global_1360165)[iParam0 /*1157*/])->f_127 = 0;
		}
		iVar0++;
	}
}

void func_145(int iParam0, int iParam1)
{
	if (!func_79(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_12 = iParam1;
}

int func_146(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -177936449;
		case 0:
			return -1758735922;
		case 6:
			return -680519380;
		case 3:
			return 263744889;
		case 7:
			return 351057032;
		case 4:
			return 1172283326;
		case 2:
			return -1046310682;
		case 5:
			return 652984488;
		case 8:
			return 1389665576;
		case 9:
			return -1066280913;
		case 13:
			return 1975793632;
		case 14:
			return -1887627202;
		case 15:
			return 1851096281;
		case 16:
			return 47402526;
		case 17:
			return 1762683397;
		case 18:
			return -1154551809;
		case 19:
			return -333682158;
		case 20:
			return 1465089966;
		case 21:
			return 511213393;
		case 22:
			return -1214580355;
		case 23:
			return -1397900723;
		case 10:
			return 541398842;
		case 24:
			return -1960060437;
		case 25:
			return 1634371177;
		case 26:
			return -1308114737;
		case 11:
			return 683250525;
		case 12:
			return -814958461;
	}
	return 0;
}

void func_147(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_14(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

void func_148(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		func_193(iParam1);
	}
}

void func_149(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_150(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_151(int iParam0, bool bParam1, char* sParam2)
{
	int iVar0;

	iVar0 = func_93(iParam0);
	if (!func_14(iParam0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	PED::_0xF1C03A5352243A30(iVar0);
	if (bParam1)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, 0, 1);
	}
	else
	{
		TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
	}
}

void func_152(int iParam0, int iParam1)
{
	if (!func_79(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_11 = iParam1;
}

int func_153(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_79(iParam0))
	{
		return 0;
	}
	switch (((*Global_1360165)[iParam0 /*1157*/])->f_3)
	{
		case 0:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(89040947))
			{
				SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(89040947);
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_3 = 1;
		case 1:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(89040947))
			{
				return 0;
			}
			if (Global_1359489->f_9 != -1)
			{
				return 0;
			}
			Global_1359489->f_9 = iParam0;
			if (iParam4 == 0)
			{
				if (iParam9 != -1)
				{
					iParam4 = func_194(iParam0, iParam9, bParam7, 1);
				}
				else if ((((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2 == (Global_40.f_4942[iParam0 /*60*/])->f_59) && (func_118(((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2) || func_195(((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2)))
				{
					iParam4 = ((*Global_1360165)[iParam0 /*1157*/])->f_4.f_1;
				}
				else
				{
					iParam4 = func_194(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if (((*Global_1360165)[iParam0 /*1157*/])->f_63 != iParam4 && func_196(((*Global_1360165)[iParam0 /*1157*/])->f_63))
				{
					if (!func_197(iParam0, 0))
					{
						func_28(iParam0, 25, 0);
					}
				}
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_4 = { func_198(iParam0, iParam4, vParam1, iParam5, bParam6, bParam8, (Global_40.f_4942[iParam0 /*60*/])->f_59, bParam11) };
			if (!bParam6)
			{
				func_40(iParam0, 44, 1);
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_3 = 2;
		case 2:
			if (!func_33(func_93(iParam0), 0))
			{
				return 0;
			}
			if (iParam5 && iParam10)
			{
				if (!func_33(func_49(iParam0), 0))
				{
					return 0;
				}
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_3 = 3;
		case 3:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_154(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_14(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_199(iParam0, bParam3);
	}
	else
	{
		func_200(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_201(iParam0, bParam3);
	}
	else
	{
		func_202(iParam0, bParam3);
	}
}

int func_155(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_156(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_14(iParam0))
	{
		return 0;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return 1;
	}
	uVar0 = func_203(iParam0, iParam1);
	return uVar0;
}

void func_157(int iParam0, int iParam1, bool bParam2)
{
	if (!func_14(iParam0))
	{
		return;
	}
	if (!func_156(iParam0, iParam1))
	{
		return;
	}
	(Global_40.f_4942[iParam0 /*60*/])->f_3 = iParam1;
	if (bParam2)
	{
		func_28(iParam0, 25, 1);
	}
}

void func_158(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (func_204(iParam2))
		{
			iVar0 = func_205(iParam2, -1);
			if (func_206(iParam1, iVar0))
			{
				if (func_207(iParam1, iVar0))
				{
					if (func_208(iParam1, iVar0))
					{
						PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_209(iParam1);
					}
				}
				else
				{
					PED::_0x1902C4CFCC5BE57C(iParam1, iVar0);
				}
			}
		}
		func_210(iParam0, iParam1, 0);
		PED::_0xCC8CA3E88256E58F(iParam1, 0, 1, 1, 1, 0);
		PED::_0xE3144B932DFDFF65(iParam1, 0f, -1, 1, 1);
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam1, 10, "ALL");
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 3);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 0);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 5);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 7);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 8);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 9);
		if (bParam3)
		{
			func_28(iParam0, 66, 0);
		}
	}
}

void func_159(int iParam0)
{
	func_211(iParam0);
	func_212(iParam0, 0);
}

void func_160(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_unarmed"), true, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_unarmed"), true, 1, false, false);
		if (PED::IS_PED_A_PLAYER(iParam0) && iParam1 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("weapon_unarmed"), 0);
			}
		}
	}
}

int func_161(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, iVar0, true);
		if (!WEAPON::IS_WEAPON_VALID(iVar1))
		{
		}
		else if (!WEAPON::_0x0556E9D2ECF39D01(iVar1))
		{
		}
		else
		{
			iVar2 = 1;
			WEAPON::_0xE9BD19F8121ADE3E(iParam0, iVar1);
		}
		iVar0++;
	}
	return iVar2;
}

void func_162(int iParam0, int iParam1)
{
	if (!func_79(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if ((Global_40.f_4942[iParam0 /*60*/])->f_3 == -1341683964)
			{
				func_213(iParam1, joaat("weapon_revolver_cattleman_sadie"), 0, 0, 2, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				func_213(iParam1, joaat("weapon_revolver_cattleman_sadie_dualwield"), 0, 0, 3, 1, 1, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 1, 0, 0);
			}
			break;
	}
}

bool func_163(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &(((*uParam0)[iVar1 /*4*/])->f_1)))
		{
			(*uParam0)[iVar1 /*4*/] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97 /*4*/] = iParam1;
			StringCopy(&(((*uParam0)[uParam0->f_97 /*4*/])->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

int func_164(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_214(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_165(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_183(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

int func_166(int iParam0, bool bParam1)
{
	switch (func_186(iParam0))
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

int func_167(int iParam0, bool bParam1, bool bParam2)
{
	if (func_215(iParam0, bParam1, bParam2, 1))
	{
		return 1;
	}
	return 0;
}

bool func_168(int iParam0)
{
	return func_216(iParam0);
}

Vector3 func_169(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 880.67f, 1267.78f, 233.66f;
		default:
			break;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_18;
}

int func_170(int iParam0, float fParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	char cVar7[16];

	if (func_115(32768))
	{
		return 0;
	}
	iVar0 = func_180();
	if ((bParam4 && func_217(&(((*Global_1835011)[iParam0 /*74*/])->f_29), 512)) && !func_217(&(((*Global_1835011)[iParam0 /*74*/])->f_29), 1024))
	{
		if (func_218())
		{
			return 0;
		}
	}
	if (((*Global_1835011)[iParam0 /*74*/])->f_71)
	{
		return 0;
	}
	if (!func_219(iParam0))
	{
		return 0;
	}
	if (iVar0 == -1)
	{
		if (iParam0 == 19)
		{
			if ((func_166(((*Global_1835011)[20 /*74*/])->f_1, 1) && Global_1879514->f_1 == ((*Global_1835011)[20 /*74*/])->f_1) && (MISC::GET_GAME_TIMER() - func_220()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 20)
		{
			if ((func_166(((*Global_1835011)[19 /*74*/])->f_1, 1) && Global_1879514->f_1 == ((*Global_1835011)[19 /*74*/])->f_1) && (MISC::GET_GAME_TIMER() - func_220()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 14)
		{
			if (!func_166(((*Global_1347702)[62 /*49*/])->f_15, 1))
			{
				return 0;
			}
		}
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1835011)[iParam0 /*74*/])->f_27))
	{
		bVar3 = ((*Global_1835011)[iParam0 /*74*/])->f_70;
		if (func_221(iParam0, iVar0) && !bVar3)
		{
			if (bParam3 || func_222((*Global_1835011)[iParam0 /*74*/], 2))
			{
				if (func_223(iParam0))
				{
					((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0x554D9D53F696D002(1673015813, func_224(iParam0));
					bVar2 = true;
				}
				else
				{
					((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0x554D9D53F696D002(1673015813, func_225(iParam0));
				}
			}
			else if (func_223(iParam0))
			{
				((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0xEC174ADBCB611ECC(1673015813, func_224(iParam0), func_226(iParam0), func_227(iParam0));
				bVar2 = true;
			}
			else
			{
				((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0x45F13B7E0A15C880(1673015813, func_228(iParam0), func_229(iParam0));
			}
		}
		else if (bVar3)
		{
			if (!func_223(iParam0))
			{
				((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0x554D9D53F696D002(1673015813, func_169(iParam0));
			}
			else
			{
				((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0x554D9D53F696D002(1673015813, func_224(iParam0));
				bVar2 = true;
			}
		}
		else if (func_168(iParam0))
		{
			if (iParam0 == 7)
			{
				((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0x554D9D53F696D002(-1337945352, func_225(iParam0));
			}
			else
			{
				((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0x554D9D53F696D002(1673015813, func_225(iParam0));
			}
		}
		else
		{
			((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_0x554D9D53F696D002(1673015813, func_225(iParam0));
		}
		((*Global_1835011)[iParam0 /*74*/])->f_28 = 1673015813;
		bVar1 = true;
		if (iParam2 != -1)
		{
			if (bVar2 || func_223(iParam0))
			{
				func_121(iParam2, 4194304);
			}
			else
			{
				func_230(iParam2, 4194304);
			}
		}
		MAP::SET_BLIP_FLASH_TIMER(((*Global_1835011)[iParam0 /*74*/])->f_27, 63, iParam0);
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1835011)[iParam0 /*74*/])->f_27))
	{
		return 0;
	}
	if (bVar1)
	{
		MAP::SET_BLIP_SPRITE(((*Global_1835011)[iParam0 /*74*/])->f_27, ((*Global_1835011)[iParam0 /*74*/])->f_26, true);
		if (iVar0 != -1)
		{
			MAP::_0x9CB1A1623062F402(((*Global_1835011)[iParam0 /*74*/])->f_27, &(((*Global_1835011)[iParam0 /*74*/])->f_39));
		}
		if (!func_217(&(((*Global_1835011)[iParam0 /*74*/])->f_29), 1024) && !func_168(iParam0))
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iParam0 /*74*/])->f_27, 580546400);
			func_231(&(((*Global_1835011)[iParam0 /*74*/])->f_29), 1024);
		}
	}
	if (iVar0 != -1)
	{
		return 1;
	}
	if (!func_168(iParam0))
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iParam0 /*74*/])->f_27, -1986290853);
	}
	if (bParam3 || func_222((*Global_1835011)[iParam0 /*74*/], 2))
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iParam0 /*74*/])->f_27, 724623647);
	}
	else
	{
		MAP::_0xB059D7BD3D78C16F(((*Global_1835011)[iParam0 /*74*/])->f_27, 724623647);
	}
	iVar4 = func_232(Global_40.f_4283);
	if (func_189(iVar4) && func_233(((*Global_1888801)[iVar4 /*35*/])->f_13))
	{
		bVar5 = true;
		bVar6 = func_234(iVar4);
	}
	if (func_235(iParam0, bVar5, iVar4))
	{
		func_236(((*Global_1835011)[iParam0 /*74*/])->f_1, bVar6, bVar5, iVar4);
	}
	if (iParam0 == 7 && !func_237(579))
	{
		func_238(579, ((*Global_1835011)[iParam0 /*74*/])->f_27, 0);
	}
	if (iParam0 == 2)
	{
		return 1;
	}
	if (((((((func_217(&(((*Global_1835011)[iParam0 /*74*/])->f_29), 4096) && !func_217(&(((*Global_1835011)[iParam0 /*74*/])->f_29), 8192)) && IntToFloat(func_220()) >= 10f) && !Global_1935630->f_12) && !Global_16) && !func_239(Global_35, -2016812721)) && !PED::_0x34D6AC1157C8226C(Global_35, -1054012177)) && !PED::_0x34D6AC1157C8226C(Global_35, 1097070152))
	{
		if (!func_221(iParam0, iVar0) || (fParam1 >= (func_240(iParam0) * func_240(iParam0)) && !((*Global_1835011)[iParam0 /*74*/])->f_70))
		{
			MemCopy(&cVar7, {((*Global_1835011)[iParam0 /*74*/])->f_8}, 2);
			StringConCat(&cVar7, "_FIRST", 16);
			func_241(&cVar7, 10000, 0, 0, 0, 1);
			func_231(&(((*Global_1835011)[iParam0 /*74*/])->f_29), 8192);
		}
	}
	return 1;
}

void func_171(var uParam0, int iParam1)
{
	uParam0->f_63 = (uParam0->f_63 || iParam1);
}

int func_172(int iParam0)
{
	if (!func_114(iParam0))
	{
		return 0;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_30;
}

int func_173(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (func_180() != -1)
	{
		return 1;
	}
	if (iParam2 == 0 && func_242(0, 1, 1))
	{
		return 0;
	}
	if (&Global_1879534)
	{
		return 0;
	}
	if (func_243(iParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_244(iVar0, &iParam0))
		{
			(Global_40.f_4942[iVar0 /*60*/])->f_59 = iParam1;
			if (iParam3 == iParam4)
			{
				func_147(iVar0, 512, 1);
			}
			else
			{
				func_48(iVar0, 512, 1);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_174(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = 0;
	while (iVar3 < Global_1879534->f_7300)
	{
		if (!MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar3 /*4*/]), 2))
		{
			if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar3 /*4*/]), 1))
			{
				switch (&Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar3 /*4*/])->f_1 /*3*/])
				{
					case 987244216:
						iVar1 = (Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar3 /*4*/])->f_1 /*3*/])->f_2;
						if (func_181(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
						{
							iVar0++;
						}
						break;
				}
			}
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < Global_1879534->f_7300)
	{
		if (!MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar3 /*4*/]), 2))
		{
			if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar3 /*4*/]), 1))
			{
				switch (&Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar3 /*4*/])->f_1 /*3*/])
				{
					case -2093459088:
						if (!bParam0)
						{
							iVar0++;
						}
						else
						{
							iVar2 = (Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar3 /*4*/])->f_1 /*3*/])->f_2;
							if (func_114(iVar2) && !func_216(iVar2))
							{
								iVar0++;
							}
						}
						break;
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

int func_175(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	iVar0 = func_172(iParam0);
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_244(iVar1, &iVar0))
		{
			iVar2 = func_93(func_245(iParam0));
			if (ENTITY::IS_ENTITY_DEAD(iVar2))
			{
			}
			else
			{
				if (bParam1 && func_42(iVar1, 67, 1))
				{
					return 1;
				}
				if (bParam2 && func_42(iVar1, 47, 1))
				{
					return 1;
				}
				if (!PED::_0x5102307CE88798EB(iVar2))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(iVar2);
				}
				if (PED::IS_TRACKED_PED_VISIBLE(iVar2))
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

Vector3 func_176(int iParam0)
{
	return func_225(iParam0);
}

int func_177(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return 1;
		}
	}
	else if (func_104(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

void func_178(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_172(iParam0);
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_244(iVar1, &iVar0))
		{
			iVar2 = func_93(func_245(iParam0));
			if (ENTITY::IS_ENTITY_DEAD(iVar2))
			{
			}
			else if (PED::_0x5102307CE88798EB(iVar2))
			{
				PED::_0x3088634CF8C819CF(iVar2);
			}
		}
		iVar1++;
	}
}

void func_179(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

int func_180()
{
	return Global_1572887->f_12;
}

bool func_181(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_182(int iParam0)
{
	int iVar0;

	if (func_246(iParam0))
	{
		return 0;
	}
	if (func_123(iParam0, 0))
	{
		func_247(iParam0);
		return 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (&Global_40.f_450[iVar0] == -1)
			{
				func_247(iParam0);
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

bool func_183(int iParam0)
{
	return func_186(iParam0) == 0;
}

void func_184(int iParam0, bool bParam1)
{
	if (!func_97(iParam0))
	{
		return;
	}
	if (!func_183(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_248(iParam0) == 0)
		{
		}
		else if (!STATS::_0x01F4D242765C6B24(func_248(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_249(iParam0), func_250(iParam0), func_251(iParam0), func_248(iParam0), Global_36);
		}
	}
	func_252(iParam0, 1);
	bParam1 = bParam1;
}

void func_185(int iParam0, bool bParam1)
{
	if (((*Global_1898346)[iParam0 /*6*/])->f_2 == 0 || bParam1)
	{
		((*Global_1898346)[iParam0 /*6*/])->f_2 = func_253(Global_1898330[iParam0]);
		func_254(((*Global_1898346)[iParam0 /*6*/])->f_2, &(((*Global_1898346)[iParam0 /*6*/])->f_4), &(((*Global_1898346)[iParam0 /*6*/])->f_5), &(((*Global_1898346)[iParam0 /*6*/])->f_3));
	}
}

int func_186(int iParam0)
{
	if (!func_97(iParam0))
	{
		return -1;
	}
	return func_164(iParam0);
}

void func_187(int iParam0)
{
	if (!func_97(iParam0))
	{
		return;
	}
	if (!func_118(iParam0))
	{
		return;
	}
	func_252(iParam0, 2);
}

void func_188(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < cParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST(cParam3[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(cParam3[iVar0 /*4*/]))
			{
				AUDIO::ADD_PED_TO_CONVERSATION(&cParam0, cParam3[iVar0 /*4*/], &(((*cParam3)[iVar0 /*4*/])->f_1));
			}
		}
		iVar0++;
	}
}

bool func_189(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_190(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

int func_191(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!func_79(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if ((Global_1357549->f_1675[iVar1 /*5*/])->f_1 == iParam0)
			{
				((*Global_1360165)[iParam0 /*1157*/])->f_126 = (Global_1357549->f_1675[iVar1 /*5*/])->f_4;
				return &(Global_1357549->f_1675[iVar1 /*5*/]);
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (&Global_1357549->f_1675[iVar1 /*5*/] != 0 && (Global_1357549->f_1675[iVar1 /*5*/])->f_1 == -1)
		{
			iVar0 = &Global_1357549->f_1675[iVar1 /*5*/];
			Jump @165; //curOff = 150
		}
		iVar1++;
	}
	if (!func_79(iParam0))
	{
		if (iVar0 != 0)
		{
			(Global_1357549->f_1675[iVar1 /*5*/])->f_1 = iParam0;
			((*Global_1360165)[iParam0 /*1157*/])->f_126 = (Global_1357549->f_1675[iVar1 /*5*/])->f_4;
		}
	}
	return iVar0;
}

int func_192(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_79(iParam0))
	{
		return 0;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_126))
	{
		iVar0 = func_141(iParam0, 1);
		iVar1 = _NAMESPACE48::_0xA00DF706C60173D1(iVar0);
		if ((Global_40.f_4942[iParam0 /*60*/])->f_7 != 0 && iVar1 != (Global_40.f_4942[iParam0 /*60*/])->f_7)
		{
			_NAMESPACE48::_0x8BC555034A5A5E8C(iVar0, (Global_40.f_4942[iParam0 /*60*/])->f_7);
		}
		((*Global_1360165)[iParam0 /*1157*/])->f_126 = _NAMESPACE48::_0x4F76E3676583D951(iVar0);
		_NAMESPACE48::_0xFCC6DB8DBE709BC8(((*Global_1360165)[iParam0 /*1157*/])->f_126);
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_126;
}

void func_193(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iVar0))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(iVar0);
	}
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

int func_194(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;

	if (!func_79(iParam0))
	{
		return 0;
	}
	iVar0 = CLOCK::GET_CLOCK_HOURS() + 1;
	if (iVar0 == 25)
	{
		iVar0 = 0;
	}
	iVar7 = 0;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					if (func_166(((*Global_1835011)[4 /*74*/])->f_1, 1))
					{
						iVar1[0] = -695701225;
					}
					else
					{
						iVar1[0] = 404503428;
					}
					break;
				default:
					iVar1[0] = 178615350;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 1:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = 1818898449;
					iVar7 = 3;
					break;
				case 3:
					if (func_255(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					if (!bParam2)
					{
						iVar1[0] = -268604689;
					}
					break;
				case 4:
					iVar1[0] = -268604689;
					break;
				case 5:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 6:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -268604689;
					iVar1[0] = -1632589543;
					iVar1[1] = 1818898449;
					iVar7 = 3;
					break;
				case 8:
					iVar1[0] = -268604689;
					break;
				case 9:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 10:
					if (func_166(((*Global_1347702)[63 /*49*/])->f_15, 1) || func_195(((*Global_1347702)[63 /*49*/])->f_15))
					{
						iVar1[0] = -268604689;
					}
					else
					{
						iVar1[0] = -310473775;
					}
					break;
				case 11:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 13:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -268604689;
					break;
				case 15:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 16:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 17:
					if (func_255(iVar0, 9, 12))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					else
					{
						iVar1[0] = -268604689;
					}
					break;
				case 18:
					if (!func_166(((*Global_1835011)[14 /*74*/])->f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_36(18, 134217728, 1))
					{
						iVar1[0] = 961676983;
					}
					else
					{
						iVar1[0] = -1587546924;
					}
					break;
				case 19:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -23947011;
					iVar7 = 3;
					break;
				default:
					iVar1[0] = -268604689;
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_255(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 5:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 8:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 9:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar1[4] = 1744281750;
					iVar7 = 5;
					break;
				case 10:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 11:
					if (func_166(((*Global_1347702)[134 /*49*/])->f_15, 1) || func_195(((*Global_1347702)[134 /*49*/])->f_15))
					{
						iVar1[0] = -2040275819;
						iVar1[1] = 1205492208;
						iVar7 = 2;
					}
					else
					{
						iVar1[0] = -922193456;
					}
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 2:
					if (func_166(((*Global_1835011)[38 /*74*/])->f_1, 1))
					{
						iVar1[0] = -1559986688;
					}
					else
					{
						iVar1[0] = -1874208704;
					}
					break;
				default:
					iVar1[0] = 1593315648;
					break;
			}
			break;
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_255(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = 1295334688;
					iVar7 = 1;
					break;
				case 11:
					iVar1[0] = -2051275045;
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar7 = 2;
					break;
				case 14:
					iVar1[0] = -426171916;
					iVar1[1] = 1484386316;
					iVar1[2] = 1254970547;
					iVar7 = 3;
					break;
				case 4:
					if (func_256(747937920, 1) && !func_166(((*Global_1347702)[1 /*49*/])->f_15, 1))
					{
						iVar1[0] = -1155031950;
					}
					else
					{
						iVar1[0] = -1341683964;
					}
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar1[2] = 1484386316;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -1092189504;
					iVar1[1] = 80515440;
					iVar7 = 2;
					break;
				case 4:
					iVar1[0] = -1341683964;
					iVar1[1] = 867156718;
					iVar7 = 2;
					break;
				case 7:
					iVar1[0] = -1341683964;
					iVar1[1] = 1484386316;
					iVar7 = 2;
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
	}
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(func_93(iParam0)))
	{
		iVar10 = 0;
		while (iVar10 < iVar7)
		{
			if (&iVar1[iVar10] == (Global_40.f_4942[iParam0 /*60*/])->f_3)
			{
				bVar9 = true;
				iVar8 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
			}
			iVar10++;
		}
	}
	if (!bVar9)
	{
		iVar11 = 0;
		if (iVar7 > 0 && bParam2)
		{
			iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar7);
		}
		iVar8 = &iVar1[iVar11];
	}
	if (!func_156(iParam0, iVar8))
	{
		iVar8 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
	}
	return iVar8;
}

bool func_195(int iParam0)
{
	int iVar0;

	iVar0 = func_186(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_196(int iParam0)
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_197(int iParam0, bool bParam1)
{
	if (!func_79(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_12(iParam0) || func_42(iParam0, 44, 1))
		{
			return false;
		}
	}
	return MISC::ARE_STRINGS_EQUAL(&(((*Global_1360165)[iParam0 /*1157*/])->f_48), "Sleep");
}

struct<7> func_198(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9)
{
	struct<7> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_3 = { vParam2 };
	Var0.f_2 = uParam8;
	Var0.f_6 = 0;
	if (bParam5)
	{
		MISC::SET_BIT(&(Var0.f_6), 0);
	}
	if (bParam6)
	{
		MISC::SET_BIT(&(Var0.f_6), 1);
	}
	if (bParam7)
	{
		MISC::SET_BIT(&(Var0.f_6), 2);
	}
	if (bParam9)
	{
		MISC::SET_BIT(&(Var0.f_6), 3);
	}
	return Var0;
}

void func_199(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_79(iParam0))
	{
		return;
	}
	iVar0 = func_93(iParam0);
	func_257(iVar0);
	func_28(iParam0, 60, 1);
	if (bParam1)
	{
		func_258(iParam0);
	}
}

void func_200(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_79(iParam0))
	{
		return;
	}
	iVar0 = func_93(iParam0);
	func_259(iVar0);
	func_40(iParam0, 60, 1);
	if (bParam1)
	{
		func_260(iParam0);
	}
}

void func_201(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_79(iParam0))
	{
		return;
	}
	iVar0 = func_93(iParam0);
	func_261(iVar0);
	if (iParam0 == 14)
	{
		func_262(iVar0);
	}
	func_28(iParam0, 61, 1);
	if (bParam1)
	{
		func_263(iParam0);
	}
}

void func_202(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_79(iParam0))
	{
		return;
	}
	iVar0 = func_93(iParam0);
	func_264(iVar0);
	func_40(iParam0, 61, 1);
	if (bParam1)
	{
		func_265(iParam0);
	}
}

bool func_203(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_79(iParam0))
	{
		return false;
	}
	func_266(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_65[iVar0]), iVar1);
}

int func_204(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_205(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case 178615350:
			return 331645018;
		case 2094043703:
			return -1395382793;
		case -695701225:
			return -1090160065;
		case 404503428:
			return -1704514526;
		case -1268239471:
			return -1832874334;
		case -1874208704:
			return 1680324116;
		case 1593315648:
			return 989578874;
		case -1559986688:
			return 174754238;
		case 1071744295:
			return -2065784734;
		case 977450639:
			return 2111449038;
		case 1901494236:
			return 1245083301;
		case 713940276:
			return -1949892659;
		case 1744281750:
			return -663077666;
		case 283037683:
			return 1996046145;
		case -2051275045:
			return -306710010;
		case 1495063555:
			return -339275545;
		case 1046468203:
			return 393090546;
		case 1018353621:
			return 114272443;
		case -433615745:
			return 643643053;
		case 777603945:
			return -328334844;
		case -1668922931:
			return -1915831038;
		case -1341683964:
			return 1689938120;
		case 928493661:
			return 861275228;
		case 431390894:
			return -20643141;
		case -301101630:
			return -1187204983;
		case -1155031950:
			return 1883650185;
		case -1248623443:
			return -1437962122;
		case 350498312:
			return 1959714099;
		case -481967001:
			return 1833893952;
		case 513932985:
			return 505715365;
		case -193269670:
			return -1774801049;
		case -1684458716:
			return 1976273473;
		case -973332710:
			return -2045878709;
		case 1658153743:
			return -2072429185;
		case 1842975347:
			return 491764525;
		case -1678882891:
			return -1638703055;
		case -268604689:
			return -1496612359;
		case 1818898449:
			return 30596609;
		case -922193456:
			switch (iParam1)
			{
				case 24:
				case 25:
					return 41788943;
				default:
					break;
			}
			return -99272505;
		case 1205492208:
			return 1598276604;
		case 1199580439:
			return -1443192745;
		case -310473775:
			return -877585857;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case 296923297:
			iVar0 = func_267(296923297, iParam1);
			return func_268(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = func_267(1237718549, iParam1);
			return func_268(iVar0);
		case -23947011:
			return -456769142;
		case 1295334688:
			return 869636257;
		case 1200878026:
			return 1560123389;
		case -1692022104:
			return -1851470579;
		case 707545953:
			return 890352471;
		case -1532979576:
			return 1391951221;
		case -1642335258:
			return -1491647079;
		case 876797088:
			return 1309207681;
		case -1587546924:
			return -1303789247;
		case 961676983:
			return -1527307534;
		case 1300659195:
			return -309158751;
		case -571427255:
			return -251280159;
		case 837028314:
			return -20984612;
		case -1394723994:
			return -1857650992;
		case -1335291723:
			return -1120526485;
		case -445211559:
			return -757536090;
		case -946772361:
			return 646599895;
		case 1950972546:
			return -1699183538;
		case -1092189504:
			return 389057251;
		case 80515440:
			return -2137653778;
		case 6418928:
			return -211106360;
		case -1648322231:
			return 1074183062;
		case -1065026089:
			return 1087308308;
		case 2062813606:
			return 1709174532;
		case 876535472:
			return -1916145078;
		case -1205468859:
			return -757536090;
		case 1484386316:
			return -800489594;
		case 1254970547:
			return -211106360;
		case 867156718:
			return 241911854;
		case -426171916:
			return 41788943;
	}
	return 41788943;
}

bool func_206(int iParam0, int iParam1)
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

int func_207(int iParam0, int iParam1)
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

int func_208(int iParam0, int iParam1)
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
	if (!func_206(iParam0, iVar0))
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

void func_209(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_210(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (PED::_0xFB4891BD7578CDC1(iParam1, 1933068772))
	{
		PED::_0xD710A5007C2AC539(iParam1, 1933068772, 1);
	}
	if (PED::_0xFB4891BD7578CDC1(iParam1, 494009478))
	{
		PED::_0xD710A5007C2AC539(iParam1, 494009478, 1);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1 > 0 && func_206(iParam1, 860729266))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 860729266);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 4096 > 0 && func_206(iParam1, 879715242))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 879715242);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 128 > 0 && func_206(iParam1, 1606325429))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1606325429);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 256 > 0 && func_206(iParam1, 1743550585))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1743550585);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 512 > 0 && func_206(iParam1, 1064646155))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1064646155);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1024 > 0 && func_206(iParam1, -536694793))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -536694793);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 2048 > 0 && func_206(iParam1, -1304053509))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1304053509);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & -2147483648 > 0 && func_206(iParam1, 718939204))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 718939204);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 65536 > 0 && func_206(iParam1, -972364774))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -972364774);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 16384 > 0 && func_206(iParam1, -1100875244))
	{
		if (PED::_0xFB4891BD7578CDC1(iParam1, -134124598))
		{
			PED::_0xD710A5007C2AC539(iParam1, -134124598, 1);
		}
		if (PED::_0xFB4891BD7578CDC1(iParam1, 2071466316))
		{
			PED::_0xD710A5007C2AC539(iParam1, 2071466316, 1);
		}
		PED::_0x1902C4CFCC5BE57C(iParam1, -1100875244);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 262144 > 0 && func_206(iParam1, 1153596794))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1153596794);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 524288 > 0 && func_206(iParam1, 1016389820))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1016389820);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1048576 > 0 && func_206(iParam1, -726966617))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -726966617);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 2097152 > 0 && func_206(iParam1, 1365901568))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1365901568);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 32768 > 0 && func_206(iParam1, -1658942149))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1658942149);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 131072 > 0 && func_206(iParam1, -1980913856))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1980913856);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 4194304 > 0 && func_206(iParam1, 491764525))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 491764525);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 8388608 > 0 && func_206(iParam1, -76015264))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -76015264);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 16777216 > 0 && func_206(iParam1, 622113465))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 622113465);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 33554432 > 0 && func_206(iParam1, 781533162))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 781533162);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 67108864 > 0 && func_206(iParam1, -271415321))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -271415321);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 134217728 > 0 && func_206(iParam1, -1683207356))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1683207356);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 268435456 > 0 && func_206(iParam1, -254794762))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -254794762);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 536870912 > 0 && func_206(iParam1, 609066278))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 609066278);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1073741824 > 0 && func_206(iParam1, -1712783565))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1712783565);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 8192 > 0 && func_206(iParam1, 1544915253))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1544915253);
	}
	if (bParam2)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_57 = 1;
	}
}

void func_211(int iParam0)
{
	func_269(iParam0, 1);
	func_269(iParam0, 128);
	func_269(iParam0, 256);
	func_269(iParam0, 512);
	func_269(iParam0, 1024);
	func_269(iParam0, 2048);
	func_269(iParam0, 4096);
	func_269(iParam0, 65536);
	func_269(iParam0, 16384);
	func_269(iParam0, 262144);
	func_269(iParam0, 524288);
	func_269(iParam0, 1048576);
	func_269(iParam0, 2097152);
	func_269(iParam0, 32768);
	func_269(iParam0, 131072);
	func_269(iParam0, 134217728);
	func_269(iParam0, 1073741824 /* Float: 2f */);
}

void func_212(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		return;
	}
	if (!bParam1)
	{
		if (DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
		{
			DECORATOR::DECOR_REMOVE(Global_1360165[iParam0 /*1157*/], "wearing_bandana");
		}
	}
	else if (!DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
	{
		DECORATOR::DECOR_SET_BOOL(Global_1360165[iParam0 /*1157*/], "wearing_bandana", true);
	}
}

bool func_213(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	switch (iParam1)
	{
		case joaat("group_sniper"):
		case -1101297303:
		case -594562071:
		case joaat("group_pistol"):
		case joaat("group_shotgun"):
		case joaat("group_rifle"):
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			bVar0 = iParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(bVar0) || WEAPON::_0x959383DCD42040DA(bVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				StringCopy(&cVar5, WEAPON::_0x89CF5FF3D363311E(bVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43890 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					bVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_270(bVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, bVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(bVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						bVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43890)
						{
							if (func_270(bVar4) && bVar4 != bVar0)
							{
								bVar0 = bVar4;
							}
						}
						else if (bVar4 == bVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_180() == -1 && !func_271(bVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, bVar0, 0, 0) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((bVar4 == bVar0 && !Global_43890) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
		{
			bVar22 = true;
		}
		else
		{
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
		}
	}
	if (bVar0 == joaat("weapon_unarmed") && iParam1 == joaat("weapon_unarmed"))
	{
		return bVar0;
	}
	else if (bVar0 == joaat("weapon_unarmed"))
	{
		switch (iParam1)
		{
			case -1101297303:
			case joaat("group_pistol"):
				bVar0 = joaat("weapon_revolver_cattleman");
				break;
			case joaat("group_sniper"):
			case -594562071:
			case joaat("group_shotgun"):
			case joaat("group_rifle"):
				if (func_271(joaat("weapon_repeater_carbine")))
				{
					bVar0 = joaat("weapon_repeater_carbine");
				}
				else
				{
					bVar0 = joaat("weapon_revolver_cattleman");
				}
				break;
			default:
				bVar0 = joaat("weapon_revolver_cattleman");
				break;
		}
	}
	else if (bVar0 == joaat("weapon_melee_lantern") && iParam0 == Global_35)
	{
		bVar0 = joaat("weapon_melee_davy_lantern");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_270(bVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, bVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::_0x959383DCD42040DA(bVar0) && bVar0 != joaat("weapon_unarmed")) && !WEAPON::_0x79407D33328286C6(bVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, bVar0));
			iVar24 = WEAPON::_0xD3750CCC00635FC2(bVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_272(bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_273(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_274(bVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, bVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), bVar0, iParam4);
	}
	return bVar0;
}

int func_214(int iParam0)
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

int func_215(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_275(bParam1, bParam2, bParam3);
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

int func_216(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return 1;
	}
	return 0;
}

int func_217(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_218()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

int func_219(int iParam0)
{
	if (func_180() == 0)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 18:
			return func_166(((*Global_1347702)[21 /*49*/])->f_15, 1);
		case 44:
			return func_166(((*Global_1347702)[83 /*49*/])->f_15, 1);
	}
	return 1;
}

int func_220()
{
	return &Global_1898438;
}

int func_221(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return 0;
	}
	if (func_223(iParam0))
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

bool func_222(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

int func_223(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_276((*Global_1835011)[iParam0 /*74*/]);
	}
	return 0;
}

Vector3 func_224(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return -240.576f, 769.614f, 117.085f;
		case 34:
			return 2544.982f, -1187.344f, 52.3104f;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_18;
}

Vector3 func_225(int iParam0)
{
	if (func_223(iParam0))
	{
		return func_224(iParam0);
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_18;
}

Vector3 func_226(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 7.5f, 8f, 5f;
		default:
			break;
	}
	return 5f, 5f, 5f;
}

int func_227(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 19;
		default:
			break;
	}
	return 0;
}

Vector3 func_228(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return -1541.14f, -305.74f, ((*Global_1835011)[iParam0 /*74*/])->f_18.f_2;
		case 39:
			return 4432.49f, -3404.77f, ((*Global_1835011)[iParam0 /*74*/])->f_18.f_2;
		case 8:
			return 891.27f, 1279.39f, 234.14f;
		case 27:
			return 2604.742f, -1212.295f, 52.3389f;
		case 29:
			return 2715.245f, -1356.552f, ((*Global_1835011)[iParam0 /*74*/])->f_18.f_2;
		case 41:
			return 1332.632f, -7248.313f, 55.5522f;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_18;
}

float func_229(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 45f;
		case 8:
			return 54f;
		case 27:
			return 35f;
		case 41:
			return 50f;
		case 54:
			return 17.5f;
		default:
			break;
	}
	return 25f;
}

void func_230(int iParam0, int iParam1)
{
	if (!func_120(iParam0))
	{
		return;
	}
	((*Global_1898346)[iParam0 /*6*/])->f_1 = (((*Global_1898346)[iParam0 /*6*/])->f_1 - (((*Global_1898346)[iParam0 /*6*/])->f_1 && iParam1));
}

void func_231(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_232(int iParam0)
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

int func_233(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36307)
	{
		return MAP::DOES_BLIP_EXIST(&(Global_36307[iParam0]));
	}
	return 0;
}

bool func_234(int iParam0)
{
	if (!func_277(Global_40.f_4283))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return true;
		}
		if (func_278(iParam0))
		{
			if (BUILTIN::VDIST(Global_36, func_279(iParam0)) < BUILTIN::VDIST(Global_36, ((*Global_1888801)[iParam0 /*35*/])->f_15))
			{
				return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_279(iParam0), false) <= func_280();
			}
		}
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, ((*Global_1888801)[iParam0 /*35*/])->f_15, false) <= func_280();
	}
	return func_281();
}

int func_235(int iParam0, bool bParam1, int iParam2)
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

void func_236(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_97(iParam0))
	{
		return;
	}
	switch (func_249(iParam0))
	{
		case 1:
			iVar0 = func_250(iParam0);
			if (func_282(iVar0, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				if ((func_221(iVar0, -1) && !((*Global_1835011)[iVar0 /*74*/])->f_70) && ((*Global_1835011)[iVar0 /*74*/])->f_63 & 2 == 0)
				{
					iVar2 = 1986697381;
				}
				else
				{
					iVar2 = -592708248;
				}
			}
			else if ((func_221(iVar0, -1) && !((*Global_1835011)[iVar0 /*74*/])->f_70) && ((*Global_1835011)[iVar0 /*74*/])->f_63 & 2 == 0)
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
				if (!func_168(iVar0))
				{
					MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iVar0 /*74*/])->f_27, -1986290853);
				}
				if (func_222((*Global_1835011)[iVar0 /*74*/], 2))
				{
					MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iVar0 /*74*/])->f_27, 724623647);
				}
				((*Global_1835011)[iVar0 /*74*/])->f_28 = iVar2;
			}
			break;
		case 8:
			iVar1 = func_250(iParam0);
			if (func_283(iVar1, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				switch (func_284(iVar1))
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
				iVar2 = func_284(iVar1);
			}
			if (((*Global_1347702)[iVar1 /*49*/])->f_38 != iVar2)
			{
				MAP::_0xBD62D98799A3DAF0(((*Global_1347702)[iVar1 /*49*/])->f_37, iVar2);
				func_285(iVar1);
				((*Global_1347702)[iVar1 /*49*/])->f_38 = iVar2;
			}
			break;
	}
}

bool func_237(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_180() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_238(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_286(iParam0, &iVar0, &iVar1);
	if (!func_287(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_288(iParam0, 1024))
	{
		return;
	}
	func_289(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 3;
}

bool func_239(int iParam0, int iParam1)
{
	return PED::_0x34D6AC1157C8226C(iParam0, iParam1);
}

float func_240(int iParam0)
{
	return (func_229(iParam0) / 2f);
}

var func_241(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = cParam0;
	uVar15 = _NAMESPACE71::_0x049D5C615BD38BAD(&Var0, &Var13, iParam5);
	return uVar15;
}

int func_242(int iParam0, bool bParam1, bool bParam2)
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
		if (func_290())
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
		iVar0 = func_250(&(Global_1898164->f_1[0 /*5*/]));
		if (func_122(iVar0) && func_181(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_97(&(Global_1898164->f_1[0 /*5*/])))
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

int func_243(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_244(iVar0, &iParam0))
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

bool func_244(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_14(iParam0))
	{
		return false;
	}
	uVar0 = func_291(iParam0);
	return (*iParam1 && uVar0) != 0;
}

int func_245(int iParam0)
{
	if (!func_114(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case 14:
			return 1;
		case 1:
		case 5:
		case 13:
			return 2;
		case 2:
		case 24:
		case 43:
		case 55:
			return 3;
		case 6:
			return 4;
		case 11:
		case 12:
		case 21:
		case 54:
			return 6;
		case 0:
		case 3:
		case 16:
		case 17:
		case 26:
		case 27:
		case 29:
		case 30:
		case 31:
		case 33:
		case 37:
		case 40:
		case 47:
		case 50:
		case 51:
		case 57:
		case 58:
			return 0;
		case 22:
		case 49:
		case 52:
		case 75:
			return 7;
		case 20:
			return 8;
		case 4:
		case 15:
		case 18:
			return 5;
		case 60:
		case 77:
			return 13;
		case 65:
			return 14;
		case 34:
			return 23;
		case 19:
		case 23:
		case 38:
		case 39:
		case 41:
		case 42:
		case 48:
		case 53:
		case 66:
		case 67:
		case 76:
			return -1;
		case 10:
			return 21;
		case 32:
		case 44:
		case 45:
		case 46:
		case 59:
		case 69:
			return 11;
		case 35:
			return 19;
		case 25:
			return 8;
		case 70:
			return 4;
		case 71:
			return 13;
		default:
			return 1;
	}
	return -1;
}

int func_246(int iParam0)
{
	if (func_180() != -1)
	{
		return 0;
	}
	if (!func_122(iParam0))
	{
		return 0;
	}
	return func_166(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

void func_247(int iParam0)
{
	int iVar0;
	int iVar1;

	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 2 == 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (func_14(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar1])))
			{
				func_292(&iVar0, func_291(&(((*Global_1347702)[iParam0 /*49*/])->f_29[iVar1])));
			}
			iVar1++;
		}
		if (iVar0 == 0)
		{
			func_126(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 2);
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
		{
			if (func_173(iVar0, ((*Global_1347702)[iParam0 /*49*/])->f_15, 1, ((*Global_1347702)[iParam0 /*49*/])->f_27, func_293()))
			{
				func_126(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 2);
			}
		}
		else
		{
			func_126(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 2);
		}
	}
}

int func_248(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_5;
	}
	return (Global_1058888->f_498[iParam0 /*2*/])->f_1;
}

int func_249(int iParam0)
{
	if (!func_97(iParam0))
	{
		return 0;
	}
	return func_294(func_253(iParam0));
}

int func_250(int iParam0)
{
	if (!func_97(iParam0))
	{
		return -1;
	}
	return func_295(func_253(iParam0));
}

int func_251(int iParam0)
{
	if (!func_97(iParam0))
	{
		return -1;
	}
	return func_296(func_253(iParam0));
}

void func_252(int iParam0, int iParam1)
{
	if (!func_97(iParam0))
	{
		return;
	}
	func_297(iParam0, iParam1);
}

int func_253(int iParam0)
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

void func_254(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_294(iParam0);
	*uParam1 = func_295(iParam0);
	*uParam2 = func_296(iParam0);
}

int func_255(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

int func_256(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_298(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_257(int iParam0)
{
	if (func_299(iParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 179, true);
	ENTITY::SET_ENTITY_PROOFS(iParam0, 127, false);
	if (FIRE::IS_ENTITY_ON_FIRE(iParam0))
	{
		FIRE::STOP_ENTITY_FIRE(iParam0, 0);
		ENTITY::_SET_ENTITY_HEALTH(iParam0, ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, 0), 0);
	}
}

void func_258(int iParam0)
{
	int iVar0;

	if (!func_79(iParam0))
	{
		return;
	}
	if (func_141(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_49(iParam0);
	func_257(iVar0);
	func_84(iParam0, 8192, 1);
}

void func_259(int iParam0)
{
	if (func_299(iParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 179, false);
	ENTITY::SET_ENTITY_PROOFS(iParam0, 0, false);
}

void func_260(int iParam0)
{
	int iVar0;

	if (!func_79(iParam0))
	{
		return;
	}
	if (func_141(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_49(iParam0);
	func_259(iVar0);
	func_84(iParam0, 8192, 0);
}

void func_261(int iParam0)
{
	if (func_299(iParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(iParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8229);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, false);
}

void func_262(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (func_12(14))
	{
		return;
	}
	if (Global_40.f_4283 != 7 && Global_40.f_4283 != 8)
	{
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(&(Global_1357549->f_3[4])))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(iParam0, &(Global_1357549->f_3[4]), true, 0))
	{
		return;
	}
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 909522);
}

void func_263(int iParam0)
{
	int iVar0;

	if (!func_79(iParam0))
	{
		return;
	}
	if (func_141(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_49(iParam0);
	func_261(iVar0);
	func_84(iParam0, 16384, 1);
}

void func_264(int iParam0)
{
	if (func_299(iParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(iParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 1);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, true);
}

void func_265(int iParam0)
{
	int iVar0;

	if (!func_79(iParam0))
	{
		return;
	}
	if (func_141(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_49(iParam0);
	func_264(iVar0);
	func_84(iParam0, 16384, 0);
}

int func_266(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_300(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_267(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iParam0)
	{
		case 296923297:
			iVar2 = -268604689;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar0)
			{
				case 0:
					iVar1 = -268604689;
					break;
				case 1:
					iVar1 = -1632589543;
					break;
				case 2:
					iVar1 = -1862464078;
					break;
			}
			break;
		case 1237718549:
			iVar2 = -922193456;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			switch (iVar0)
			{
				case 0:
					iVar1 = -922193456;
					break;
				case 1:
					iVar1 = -2040275819;
					break;
				case 2:
					iVar1 = -1114682645;
					break;
				case 3:
					iVar1 = -1414977761;
					break;
			}
			break;
	}
	if (iParam1 != -1)
	{
		if (func_156(iParam1, iVar1))
		{
			iVar2 = iVar1;
		}
	}
	return iVar2;
}

int func_268(int iParam0)
{
	switch (iParam0)
	{
		case -268604689:
			return -1496612359;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case -922193456:
			return -99272505;
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		default:
			break;
	}
	return 41788943;
}

void func_269(int iParam0, int iParam1)
{
	(Global_40.f_4942[iParam0 /*60*/])->f_5 = ((Global_40.f_4942[iParam0 /*60*/])->f_5 - ((Global_40.f_4942[iParam0 /*60*/])->f_5 && iParam1));
}

bool func_270(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != joaat("weapon_unarmed"));
}

int func_271(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(bParam0);
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

int func_272(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(bParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
	{
		Var0 = { func_301(bParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_302((375 + iVar28), 1);
			if (func_303(bParam0, &Var0, iVar5, 0))
			{
				if (func_304(bParam0, &Var6, iVar5))
				{
					Var29 = { func_305(bParam0, Var0, iVar5, 0) };
					func_306(bParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_307(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
					{
						return 0;
					}
					func_308(WEAPON::_0x5C2EA6C44F515F34(bParam0), iParam1, iParam6);
					func_309(bParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}

void func_273(int iParam0, bool bParam1, float fParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((*bParam1 == joaat("weapon_revolver_cattleman_mexican") || *bParam1 == joaat("weapon_revolver_cattleman_pig")) || *bParam1 == joaat("weapon_revolver_doubleaction_exotic")) || *bParam1 == joaat("weapon_revolver_schofield_calloway")) || *bParam1 == joaat("weapon_revolver_schofield_golden")) || *bParam1 == joaat("weapon_pistol_mauser_drunk")) || *bParam1 == joaat("weapon_shotgun_doublebarrel_exotic")) || *bParam1 == joaat("weapon_sniperrifle_rollingblock_exotic"))
	{
		*fParam2 = 0f;
		return;
	}
	switch (iVar1)
	{
		case joaat("g_m_m_uniduster_03"):
		case joaat("u_m_m_unidusterhenchman_03"):
		case joaat("g_m_m_uniduster_04"):
		case joaat("u_m_m_unidusterhenchman_02"):
		case joaat("g_m_m_uniduster_02"):
		case joaat("u_m_m_fatduster_01"):
		case joaat("u_m_m_unidusterhenchman_01"):
		case joaat("g_m_m_uniduster_01"):
		case joaat("cs_disguisedduster_01"):
		case joaat("g_f_m_uniduster_01"):
		case joaat("u_m_m_unidusterleader_01"):
		case joaat("cs_disguisedduster_03"):
		case joaat("g_m_m_uniduster_05"):
		case joaat("cs_disguisedduster_02"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("g_m_y_uniexconfeds_02"):
		case joaat("g_m_y_uniexconfeds_01"):
		case joaat("g_m_o_uniexconfeds_01"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("u_m_m_uniexconfedsbounty_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		case joaat("g_m_m_uniinbred_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		case joaat("u_m_m_bht_skinnersearch"):
		case joaat("g_m_m_unimountainmen_01"):
		case joaat("u_m_m_bht_skinnerbrother"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		case joaat("g_m_m_uniranchers_01"):
		case joaat("cs_laramie"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		case joaat("u_m_m_bht_banditoshack"):
		case joaat("u_m_m_bht_banditomine"):
		case joaat("g_m_m_unibanditos_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("u_m_m_nbxbrontegoon_01"):
		case joaat("u_m_m_nbxbrontesecform_01"):
		case joaat("u_m_m_nbxbronteasc_01"):
		case joaat("g_m_m_unibrontegoons_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 361, true);
	}
}

bool func_274(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(bParam0));
}

int func_275(bool bParam0, bool bParam1, bool bParam2)
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

int func_276(var uParam0)
{
	if (func_217(&(uParam0->f_29), 62))
	{
		switch (func_310())
		{
			case 1:
				if (!func_217(&(uParam0->f_29), 6))
				{
					return 0;
				}
				break;
			case 2:
				if (!func_217(&(uParam0->f_29), 8))
				{
					return 0;
				}
				break;
			case 4:
				if (!func_217(&(uParam0->f_29), 16))
				{
					return 0;
				}
				break;
			case 8:
				if (!func_217(&(uParam0->f_29), 32))
				{
					if (func_217(&(uParam0->f_29), 2))
					{
						if (func_312(func_311()) < 5)
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

int func_277(int iParam0)
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

int func_278(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
	}
	return 0;
}

Vector3 func_279(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return -2578.509f, 389.3037f, 148.3825f;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_15;
}

float func_280()
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

bool func_281()
{
	return Global_1894899 & 2 != 0;
}

int func_282(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_235(iParam0, bParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

int func_283(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_313(iParam0, bParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

int func_284(int iParam0)
{
	int iVar0;

	iVar0 = -1337945352;
	if (!func_122(iParam0))
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

void func_285(int iParam0)
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

void func_286(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_287(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_314(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_315(iParam0))
	{
		return 0;
	}
	if (func_316(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_288(iParam0, 1)) || func_115(32768))
	{
		if (!func_288(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_317())
	{
		return 0;
	}
	return 1;
}

bool func_288(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

void func_289(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_290()
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

int func_291(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

void func_292(int iParam0, var uParam1)
{
	*iParam0 = (*iParam0 || uParam1);
}

int func_293()
{
	return Global_40.f_4283.f_1;
}

int func_294(int iParam0)
{
	return iParam0 & 31;
}

int func_295(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_296(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383;
}

void func_297(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_318(iParam0);
	}
	else
	{
		func_319(iParam0, iParam1);
	}
	func_320();
}

bool func_298(int iParam0)
{
	int iVar0;
	int iVar1;

	func_321(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(Global_1357549->f_1866[iVar0]), iVar1);
}

int func_299(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(iParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(iParam0);
		}
	}
	return 1;
}

int func_300(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2051275045:
			return 14;
		case -2040275819:
			return 46;
		case -1874208704:
			return 5;
		case -1862464078:
			return 44;
		case -1692022104:
			return 63;
		case -1684458716:
			return 31;
		case -1678882891:
			return 36;
		case -1668922931:
			return 20;
		case -1648322231:
			return 72;
		case -1642335258:
			return 66;
		case -1632589543:
			return 43;
		case -1587546924:
			return 54;
		case -1559986688:
			return 7;
		case -1532979576:
			return 65;
		case -1414977761:
			return 48;
		case -1394723994:
			return 59;
		case -1341683964:
			return 21;
		case -1335291723:
			return 60;
		case -1268239471:
			return 68;
		case -1256711921:
			return 35;
		case -1248623443:
			return 26;
		case -1205468859:
			return 76;
		case -1155031950:
			return 25;
		case -1114682645:
			return 47;
		case -1092189504:
			return 69;
		case -1065026089:
			return 73;
		case -973332710:
			return 32;
		case -946772361:
			return 62;
		case -922193456:
			return 39;
		case -695701225:
			return 3;
		case -571427255:
			return 57;
		case -481967001:
			return 28;
		case -445211559:
			return 61;
		case -433615745:
			return 18;
		case -426171916:
			return 80;
		case -310473775:
			return 42;
		case -301101630:
			return 24;
		case -268604689:
			return 37;
		case -193269670:
			return 30;
		case -23947011:
			return 50;
		case 0:
			return 0;
		case 6418928:
			return 71;
		case 80515440:
			return 70;
		case 178615350:
			return 1;
		case 283037683:
			return 13;
		case 296923297:
			return 45;
		case 350498312:
			return 27;
		case 404503428:
			return 4;
		case 431390894:
			return 23;
		case 513932985:
			return 29;
		case 707545953:
			return 64;
		case 713940276:
			return 11;
		case 777603945:
			return 19;
		case 837028314:
			return 58;
		case 867156718:
			return 79;
		case 876535472:
			return 75;
		case 876797088:
			return 53;
		case 928493661:
			return 22;
		case 961676983:
			return 55;
		case 977450639:
			return 9;
		case 1018353621:
			return 17;
		case 1046468203:
			return 16;
		case 1071744295:
			return 8;
		case 1199580439:
			return 41;
		case 1200878026:
			return 52;
		case 1205492208:
			return 40;
		case 1237718549:
			return 49;
		case 1254970547:
			return 78;
		case 1295334688:
			return 51;
		case 1300659195:
			return 56;
		case 1484386316:
			return 77;
		case 1495063555:
			return 15;
		case 1593315648:
			return 6;
		case 1658153743:
			return 33;
		case 1744281750:
			return 12;
		case 1818898449:
			return 38;
		case 1842975347:
			return 34;
		case 1901494236:
			return 10;
		case 1950972546:
			return 67;
		case 2062813606:
			return 74;
		case 2094043703:
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

struct<5> func_301(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_322(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_323(bParam0))
	{
		case joaat("clothing"):
			if (!INVENTORY::_0x780C5B9AE2819807(bParam0, 1034665895))
			{
				Var0 = { func_305(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("weapon"):
			Var0 = { func_324(bParam1) };
			if (iParam2 && func_325(bParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_303(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_303(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_304(bParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_326(bParam1) };
			switch (func_327(bParam0))
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
			if (func_328(bParam0, -1823706425))
			{
				Var0 = { func_305(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, -1838434463);
			}
			else if (func_328(bParam0, -1483207246))
			{
				Var0 = { func_305(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (INVENTORY::_0x780C5B9AE2819807(bParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_329(Var0, &Var27, bParam1, 0))
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
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("character"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_302(int iParam0, int iParam1)
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
			return 1011151573;
			return 1122339631;
			return 454815308;
			return 990701735;
			return -246340825;
			return -1410671073;
			return 1547608292;
			return -714132970;
			return 732290690;
			return 971340545;
			return -234132662;
			return -2143057988;
			return -993947465;
			return -486552269;
			return -1156317860;
			return 1229625803;
			return -388596167;
			return -1204639465;
			return -1384685096;
			return -2026728113;
			return -1228057307;
			return 1835126290;
			return 1890833594;
			return -751549960;
			return -1682270750;
			return -1839865333;
			return -1990383629;
			return 1712094016;
			return 1532953697;
			return 1620318083;
			return -307230331;
			return -1034549620;
			return -1293064293;
			return -1540142553;
			return -1769886012;
			return -1983081126;
			return -1106117124;
			return -1873108338;
			return -2097543219;
			return 155413195;
			return -1162387149;
			return 1728382685 /* GXTEntry: "Right" */;
			return -649335959 /* GXTEntry: "Left" */;
			return -1876502240;
			return -2107032155;
			return 619103418;
			return 1355448197;
			return 1681762005;
			return 1026887814;
			return 354352628;
			return 1519366642;
			return -82757515;
			return 386306655;
			return 1243962119;
			return 756214903;
			return -718417579;
			return -1445516411;
			return -672392892;
			return 1465341584;
			return -427758369;
			return -735647142;
			return 1535838048;
			return -602272282;
			return 2051264661;
			return 487172188;
			return 282270687;
			return 1607708943;
			return 1686264939;
			return 314786149;
			return 1402841185;
			return 1099170772;
			return 2125676786;
			return -363896735;
			return -468790222;
			return -1779133048;
			return 1732537631;
			return 1755095401;
			return 835771095;
			return 1963317232;
			return 259627919;
			return 1299075397;
			return -1509094230;
			return 61132362;
			return 1549741908;
			return 288484254;
			return -1877032947;
			return -1395676456;
			return 1136146715;
			return 468034421;
			return 1079459546;
			return -140369351;
			return 1822341990;
			return 1219701681;
			return 1601295268;
			return -1692460667;
			return 1471419228;
			return 907446160;
			return -1126482585;
			return 1911050315;
			return -1343525599;
			return 1261891225;
			return 763162704;
			return 1335861197;
			return 526744654;
			return -1177461517;
			return -241638635;
			return 1024262875;
			return 853355463;
			return -337288221;
			return 361381308;
			return -1264898804;
			return -585289073;
			return 1423542233;
			return -948489286;
			return 2063859257;
			return -1652627327;
			return -1959697839;
			return -1532267859;
			return -1410062763;
			return -901428716;
			return -1628873469;
			return 144855571;
			return -617589883;
			return -1306457086;
			return 1713542477;
			return -305542365;
			return 1985390213;
			return -2145069367;
			return -1674390752;
			return -2117214398;
			return 1880805647;
			return -62390436;
			return 1815288415;
			return 196214097;
			return -201958220;
			return 1400281261;
			return 1601515402;
			return -940704970;
			return -548371721;
			return -1022384613;
			return -357406394;
			return 1077068189;
			return -782241404;
			return 1669853467;
			return 1592019450;
			return 635273153;
			return -1559225678;
			return -266425508;
			return 1117400455;
			return 454332195;
			return -1328061889;
			return 561650932;
			return 256105670;
			return 1976779618;
			return -269095126;
			return 2145617267;
			return 1150213537;
			return 1598825281;
			return -712527121;
			return 1308553072;
			return 852866398;
			return -1794417972;
			return 293062146;
			return 95360094;
			return 807631773;
			return 1603958275;
			return 860052020;
			return -1885979781;
			return 746147970;
			return 666663006;
			return -2096186453;
			return 859409444;
			return -671427187;
			return 100192478;
			return 307812616;
			return 1670843243;
			return 899615863;
			return -298901850;
			return 1379186917;
			return -817206030;
			return -1150323212;
			return -247466821;
			return 427124242;
			return 855418120;
			return -777015093;
			return -722462870;
			return -937454324;
			return -339438116;
			return 2135639035;
			return 1254273765;
			return -792172668;
			return 1905987493;
			return 495693044;
			return -1693422950;
			return -205873076;
			return -2143114654;
			return -1420574021;
			return -1959250381;
			return -1088328663;
			return 513602003;
			return 359221401;
			return 1005272;
			return 1583044470;
			return 348853959;
			return 1045621973;
			return 1084576580;
			return 1651573695;
			return 1463321587;
			return -997505963;
			return -1649851713;
			return -386012962;
			return 1386101789;
			return 1227915917;
			return -218846335;
			return -352578118;
			return 1426626782;
			return -714081520;
			return 74547781;
			return 1271463052;
			return 1983140194;
			return 677262775;
			return -832337898;
			return -319249747;
			return -16955722;
			return -1360128126;
			return -1535425646;
			return -1063641743;
			return -1041133401;
			return 1380479304;
			return 600890828;
			return 733333190;
			return 1843035435;
			return -304127320;
			return 122470371;
			return 0;
			return -1591664384;
			return -673000374;
			return -1150938404;
			return -1756997214;
			return -813824107;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}

bool func_303(bool bParam0, var uParam1, int iParam2, int iParam3)
{
	return func_330(bParam0, *uParam1, iParam2, iParam3) > 0;
}

int func_304(bool bParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_331(bParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_305(bool bParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_332(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_333(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

int func_306(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_334(bParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_329(*uParam1, &Var0, bParam6, 0))
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
	if (!func_307(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_333(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_307(bool bParam0)
{
	if (func_180() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_333(bParam0));
}

int func_308(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_335(iParam0))
	{
		return 0;
	}
	if (!func_307(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_309(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, bParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(bParam0))
	{
		iVar1 = func_336(WEAPON::_0xD3750CCC00635FC2(bParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, bParam0, iVar1);
	}
}

int func_310()
{
	return &Global_1899516;
}

int func_311()
{
	return &Global_1899515;
}

int func_312(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_313(int iParam0, bool bParam1, int iParam2)
{
	if ((bParam1 && MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37)) && ((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		return ((*Global_1347702)[iParam0 /*49*/])->f_27 == iParam2;
	}
	return 0;
}

bool func_314(int iParam0, int iParam1)
{
	if (func_180() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_315(int iParam0)
{
	if (func_180() != -1)
	{
		if (func_288(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_288(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_316(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_288(iParam0, 65536) && !func_288(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_288(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_288(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_317()
{
	return Global_1905944->f_5694;
}

int func_318(int iParam0)
{
	int iVar0;

	iVar0 = func_214(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_337(iVar0);
}

int func_319(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (Global_1058888->f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888->f_40501 == 0)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888->f_40501)
	{
		if (iParam0 == &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
		else if (iParam0 > &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			iVar2++;
		}
		else if (iParam0 < &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			func_338(iVar2);
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888->f_40501 < 31)
	{
		iVar2 = Global_1058888->f_40501;
		*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		if (Global_1058888->f_40501 > 32)
		{
			Global_1058888->f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_320()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_321(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_339(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

struct<4> func_322(bool bParam0)
{
	return func_305(joaat("character"), func_340(), -1591664384, bParam0);
}

int func_323(bool bParam0)
{
	vector3 vVar0;

	if (!func_332(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_324(bool bParam0)
{
	int iVar0;

	iVar0 = func_333(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_305(923904168, func_322(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_305(923904168, func_322(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_305(923904168, func_322(bParam0), -740156546, 0);
}

int func_325(bool bParam0, bool bParam1)
{
	if (func_327(bParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(bParam0))
	{
		if (bParam1)
		{
			return func_341(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_326(bool bParam0)
{
	int iVar0;

	iVar0 = func_333(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_305(271701509, func_322(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_305(271701509, func_322(bParam0), 12999093, 0);
}

int func_327(bool bParam0)
{
	struct<2> Var0;

	if (!func_332(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_328(bool bParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_327(bParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &uVar0))
		{
			if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(bParam0, iParam1, uVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_329(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_333(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_330(bool bParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_332(bParam0, 0))
	{
		return 0;
	}
	Var0 = { func_305(bParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_333(bParam6), &Var0, 0);
	return uVar4;
}

int func_331(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_333(0);
	*uParam1 = { func_305(bParam0, func_324(0), iParam3, 0) };
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

int func_332(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_333(bool bParam0)
{
	if (func_180() == -1)
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

int func_334(bool bParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return 1;
	}
	return 0;
}

bool func_335(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_336(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_337(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = iParam0;
	while (iVar0 < Global_1058888->f_40501)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 /*2*/]) = { *(Global_1058888->f_40501.f_1[iVar0 + 1 /*2*/]) };
		}
		iVar0++;
	}
	Var1 = -1;
	if (Global_1058888->f_40501 < 32)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var1 };
	}
	Global_1058888->f_40501 = (Global_1058888->f_40501 - 1);
	if (Global_1058888->f_40501 < 0)
	{
		Global_1058888->f_40501 = 0;
	}
	return 1;
}

int func_338(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = (Global_1058888->f_40501 - 1);
	Var1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 + 1 /*2*/]) = { *(Global_1058888->f_40501.f_1[iVar0 /*2*/]) };
		}
		iVar0 = (iVar0 - 1);
	}
	*(Global_1058888->f_40501.f_1[iParam0 /*2*/]) = { Var1 };
	Global_1058888->f_40501++;
	if (Global_1058888->f_40501 > 32)
	{
		Global_1058888->f_40501 = 32;
	}
	return 1;
}

int func_339(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2147332013:
			return 129;
		case -2137730706:
			return 13;
		case -2129915369:
			return 383;
		case -2122981486:
			return 179;
		case -2104294676:
			return 83;
		case -2098336883:
			return 145;
		case -2093351659:
			return 297;
		case -2093199573:
			return 185;
		case -2082302444:
			return 259;
		case -2075517304:
			return 393;
		case -2071373019:
			return 440;
		case -2063047758:
			return 190;
		case -2047114234:
			return 351;
		case -2041153728:
			return 277;
		case -2038346064:
			return 244;
		case -2033572567:
			return 92;
		case -2030965067:
			return 380;
		case -2023813568:
			return 125;
		case -2006082799:
			return 56;
		case -1994410205:
			return 499;
		case -1988547710:
			return 457;
		case -1981702243:
			return 96;
		case -1971110347:
			return 435;
		case -1955429862:
			return 387;
		case -1949364492:
			return 285;
		case -1943655584:
			return 460;
		case -1935893216:
			return 124;
		case -1934704933:
			return 423;
		case -1922834065:
			return 320;
		case -1917134080:
			return 309;
		case -1916588959:
			return 29;
		case -1897704131:
			return 225;
		case -1888506091:
			return 142;
		case -1885734028:
			return 110;
		case -1868521635:
			return 396;
		case -1866112883:
			return 257;
		case -1856459307:
			return 219;
		case -1837343824:
			return 496;
		case -1832590852:
			return 326;
		case -1827461037:
			return 233;
		case -1827211287:
			return 197;
		case -1827011525:
			return 98;
		case -1825730216:
			return 18;
		case -1818590041:
			return 246;
		case -1812183035:
			return 97;
		case -1805142260:
			return 273;
		case -1804466187:
			return 77;
		case -1802212639:
			return 10;
		case -1790474454:
			return 331;
		case -1771575988:
			return 16;
		case -1757085331:
			return 454;
		case -1738185394:
			return 411;
		case -1728071186:
			return 108;
		case -1719149624:
			return 131;
		case -1689239424:
			return 312;
		case -1675752723:
			return 249;
		case -1671819791:
			return 196;
		case -1667151809:
			return 139;
		case -1664107227:
			return 405;
		case -1648173738:
			return 22;
		case -1646431667:
			return 415;
		case -1633236438:
			return 426;
		case -1596446207:
			return 252;
		case -1584659518:
			return 210;
		case -1582252733:
			return 409;
		case -1565979762:
			return 507;
		case -1564254711:
			return 158;
		case -1557862414:
			return 88;
		case -1557856056:
			return 112;
		case -1548165899:
			return 422;
		case -1538781541:
			return 483;
		case -1526278254:
			return 338;
		case -1520159291:
			return 17;
		case -1512720465:
			return 413;
		case -1501120273:
			return 57;
		case -1486701482:
			return 437;
		case -1483924019:
			return 27;
		case -1482329777:
			return 369;
		case -1479860879:
			return 482;
		case -1466029365:
			return 223;
		case -1461741225:
			return 280;
		case -1426009748:
			return 119;
		case -1425653701:
			return 199;
		case -1417145007:
			return 472;
		case -1409307734:
			return 289;
		case -1408927269:
			return 21;
		case -1405475146:
			return 329;
		case -1396074730:
			return 427;
		case -1393633441:
			return 377;
		case -1383535454:
			return 135;
		case -1381943684:
			return 470;
		case -1377327596:
			return 205;
		case -1370062029:
			return 148;
		case -1355784201:
			return 311;
		case -1340559426:
			return 373;
		case -1333840726:
			return 236;
		case -1318290630:
			return 254;
		case -1316284753:
			return 114;
		case -1302664729:
			return 294;
		case -1299405763:
			return 206;
		case -1276847784:
			return 229;
		case -1238376790:
			return 445;
		case -1235200494:
			return 165;
		case -1233518925:
			return 318;
		case -1220678266:
			return 120;
		case -1211711936:
			return 26;
		case -1205318041:
			return 23;
		case -1202860612:
			return 327;
		case -1198456774:
			return 442;
		case -1190705999:
			return 9;
		case -1179993139:
			return 284;
		case -1171086122:
			return 41;
		case -1164176475:
			return 138;
		case -1152282847:
			return 33;
		case -1143028112:
			return 25;
		case -1117048125:
			return 238;
		case -1088604829:
			return 247;
		case -1077843421:
			return 324;
		case -1061998329:
			return 164;
		case -1061765120:
			return 169;
		case -1048889581:
			return 391;
		case -1045864225:
			return 510;
		case -1036305792:
			return 58;
		case -1032742879:
			return 61;
		case -1025265051:
			return 485;
		case -978287173:
			return 12;
		case -954047483:
			return 395;
		case -948342953:
			return 359;
		case -935212592:
			return 486;
		case -925475803:
			return 484;
		case -916887991:
			return 76;
		case -908082222:
			return 187;
		case -895048976:
			return 374;
		case -890266811:
			return 172;
		case -872824399:
			return 170;
		case -860304527:
			return 186;
		case -850999370:
			return 2;
		case -833577856:
			return 86;
		case -830432609:
			return 492;
		case -825056768:
			return 149;
		case -820146008:
			return 52;
		case -820014425:
			return 439;
		case -818926670:
			return 200;
		case -813365276:
			return 243;
		case -811804990:
			return 293;
		case -807742826:
			return 3;
		case -807680461:
			return 68;
		case -807112425:
			return 180;
		case -803062666:
			return 65;
		case -779264865:
			return 106;
		case -757336127:
			return 372;
		case -742985447:
			return 302;
		case -736212459:
			return 275;
		case -715535005:
			return 362;
		case -713369135:
			return 461;
		case -710247698:
			return 251;
		case -697342513:
			return 242;
		case -695655810:
			return 443;
		case -694047360:
			return 375;
		case -693094356:
			return 89;
		case -692943180:
			return 341;
		case -681593414:
			return 175;
		case -671103079:
			return 504;
		case -670201310:
			return 313;
		case -666548248:
			return 345;
		case -650501093:
			return 509;
		case -646454939:
			return 94;
		case -637873918:
			return 404;
		case -636774257:
			return 146;
		case -625309660:
			return 343;
		case -625171987:
			return 234;
		case -620369863:
			return 403;
		case -619139736:
			return 104;
		case -604891653:
			return 237;
		case -597010176:
			return 487;
		case -582523927:
			return 424;
		case -574426587:
			return 261;
		case -561040434:
			return 400;
		case -558867971:
			return 266;
		case -554271718:
			return 232;
		case -550689301:
			return 283;
		case -544885621:
			return 310;
		case -544096309:
			return 337;
		case -534913305:
			return 174;
		case -532430534:
			return 444;
		case -527348304:
			return 253;
		case -515663690:
			return 330;
		case -505205920:
			return 39;
		case -453449739:
			return 182;
		case -449489613:
			return 140;
		case -445710060:
			return 469;
		case -435161770:
			return 150;
		case -426458298:
			return 59;
		case -423162607:
			return 133;
		case -413943699:
			return 141;
		case -404697685:
			return 308;
		case -402973141:
			return 418;
		case -399703928:
			return 155;
		case -384358266:
			return 295;
		case -381477663:
			return 37;
		case -365550600:
			return 30;
		case -332258016:
			return 382;
		case -331451824:
			return 303;
		case -330340613:
			return 489;
		case -328226663:
			return 323;
		case -324786054:
			return 288;
		case -319093529:
			return 260;
		case -317452243:
			return 128;
		case -314300362:
			return 473;
		case -308211771:
			return 194;
		case -303175962:
			return 431;
		case -302690754:
			return 67;
		case -302574837:
			return 24;
		case -290258665:
			return 317;
		case -286479684:
			return 269;
		case -285172118:
			return 505;
		case -270246276:
			return 490;
		case -266920872:
			return 357;
		case -259827569:
			return 425;
		case -258855820:
			return 464;
		case -248683070:
			return 429;
		case -231638975:
			return 34;
		case -222982511:
			return 204;
		case -221923309:
			return 406;
		case -221398783:
			return 354;
		case -219249641:
			return 474;
		case -218211995:
			return 344;
		case -207368052:
			return 361;
		case -172442174:
			return 385;
		case -170673728:
			return 156;
		case -165538585:
			return 127;
		case -164763388:
			return 376;
		case -164125056:
			return 438;
		case -162152912:
			return 441;
		case -144509608:
			return 113;
		case -134086241:
			return 222;
		case -125979788:
			return 95;
		case -123719783:
			return 151;
		case -121904458:
			return 208;
		case -120359954:
			return 316;
		case -117389654:
			return 93;
		case -115054321:
			return 325;
		case -110297889:
			return 290;
		case -98209688:
			return 55;
		case -94582539:
			return 239;
		case -72799657:
			return 287;
		case -66788599:
			return 19;
		case -58963831:
			return 105;
		case -58291054:
			return 201;
		case -56411631:
			return 342;
		case -54575589:
			return 353;
		case -21372580:
			return 46;
		case -18183703:
			return 466;
		case -8269375:
			return 137;
		case 13460468:
			return 350;
		case 15906262:
			return 321;
		case 16938930:
			return 81;
		case 61425283:
			return 51;
		case 65871884:
			return 54;
		case 70047950:
			return 188;
		case 72162222:
			return 43;
		case 72854145:
			return 1;
		case 85572330:
			return 147;
		case 94814634:
			return 228;
		case 95619635:
			return 408;
		case 98434060:
			return 458;
		case 108841201:
			return 358;
		case 121222228:
			return 476;
		case 121466883:
			return 498;
		case 122725574:
			return 477;
		case 124507607:
			return 480;
		case 127002552:
			return 455;
		case 132239274:
			return 494;
		case 132287504:
			return 184;
		case 137433874:
			return 227;
		case 139790602:
			return 60;
		case 171363131:
			return 47;
		case 176656832:
			return 0;
		case 180573150:
			return 279;
		case 187832713:
			return 282;
		case 195634974:
			return 433;
		case 200640922:
			return 35;
		case 207369059:
			return 64;
		case 209896562:
			return 304;
		case 217189690:
			return 241;
		case 220165734:
			return 134;
		case 228261307:
			return 74;
		case 229393477:
			return 270;
		case 278608719:
			return 399;
		case 281905065:
			return 419;
		case 289706151:
			return 364;
		case 290238735:
			return 250;
		case 291150162:
			return 103;
		case 299577191:
			return 90;
		case 315283201:
			return 240;
		case 315850182:
			return 193;
		case 319124397:
			return 506;
		case 340819214:
			return 84;
		case 388356689:
			return 101;
		case 397857304:
			return 335;
		case 400034151:
			return 71;
		case 403634348:
			return 291;
		case 404260466:
			return 73;
		case 408875702:
			return 80;
		case 411591903:
			return 132;
		case 437096661:
			return 446;
		case 443165194:
			return 332;
		case 446631778:
			return 436;
		case 448165982:
			return 220;
		case 474959407:
			return 255;
		case 477580579:
			return 493;
		case 487107418:
			return 370;
		case 490619049:
			return 163;
		case 500323776:
			return 40;
		case 501194998:
			return 471;
		case 512067206:
			return 452;
		case 525567468:
			return 160;
		case 531203229:
			return 245;
		case 532176461:
			return 203;
		case 533929296:
			return 346;
		case 534386033:
			return 488;
		case 534766068:
			return 349;
		case 542655528:
			return 360;
		case 545240164:
			return 398;
		case 553023190:
			return 78;
		case 561912024:
			return 420;
		case 569547151:
			return 389;
		case 579829077:
			return 178;
		case 597768834:
			return 315;
		case 627421591:
			return 268;
		case 634843927:
			return 66;
		case 643583911:
			return 401;
		case 652625673:
			return 501;
		case 654830082:
			return 371;
		case 676394410:
			return 8;
		case 678897243:
			return 211;
		case 679257961:
			return 126;
		case 685466172:
			return 217;
		case 692218123:
			return 467;
		case 693884302:
			return 177;
		case 703663141:
			return 328;
		case 705436149:
			return 365;
		case 709886296:
			return 414;
		case 720937389:
			return 115;
		case 727456822:
			return 153;
		case 730196087:
			return 157;
		case 737744809:
			return 50;
		case 747937920:
			return 481;
		case 753501669:
			return 367;
		case 761196368:
			return 218;
		case 766757422:
			return 296;
		case 772151702:
			return 28;
		case 779383250:
			return 336;
		case 787526397:
			return 202;
		case 794696385:
			return 14;
		case 812866778:
			return 355;
		case 833697503:
			return 298;
		case 837366581:
			return 118;
		case 847641699:
			return 192;
		case 852724290:
			return 136;
		case 853563984:
			return 49;
		case 856952521:
			return 42;
		case 866755445:
			return 4;
		case 870594813:
			return 173;
		case 881844660:
			return 11;
		case 920901415:
			return 412;
		case 921753284:
			return 272;
		case 951007010:
			return 407;
		case 951777606:
			return 212;
		case 953460136:
			return 159;
		case 960236560:
			return 70;
		case 1004978630:
			return 333;
		case 1005520287:
			return 38;
		case 1019519723:
			return 256;
		case 1025198797:
			return 171;
		case 1046168872:
			return 456;
		case 1057391314:
			return 356;
		case 1059753202:
			return 198;
		case 1061621862:
			return 299;
		case 1073595144:
			return 417;
		case 1080053708:
			return 189;
		case 1086705486:
			return 265;
		case 1092859156:
			return 116;
		case 1098143971:
			return 305;
		case 1130474589:
			return 264;
		case 1132574871:
			return 402;
		case 1134064472:
			return 271;
		case 1138578991:
			return 286;
		case 1141344854:
			return 378;
		case 1150653348:
			return 392;
		case 1156064998:
			return 366;
		case 1157034909:
			return 451;
		case 1165920102:
			return 292;
		case 1166284695:
			return 363;
		case 1176031365:
			return 224;
		case 1176450045:
			return 87;
		case 1185998732:
			return 410;
		case 1188734721:
			return 214;
		case 1219566057:
			return 166;
		case 1234351222:
			return 463;
		case 1249990864:
			return 428;
		case 1264235360:
			return 450;
		case 1267596926:
			return 7;
		case 1267957796:
			return 32;
		case 1292421672:
			return 215;
		case 1296800590:
			return 107;
		case 1297331434:
			return 130;
		case 1300783988:
			return 45;
		case 1305416676:
			return 495;
		case 1314347520:
			return 122;
		case 1328264128:
			return 258;
		case 1330480767:
			return 102;
		case 1335382896:
			return 248;
		case 1338855384:
			return 152;
		case 1344816618:
			return 314;
		case 1344986053:
			return 168;
		case 1349313303:
			return 6;
		case 1354948947:
			return 300;
		case 1357649685:
			return 267;
		case 1358951864:
			return 368;
		case 1360004037:
			return 322;
		case 1365311568:
			return 85;
		case 1366067161:
			return 91;
		case 1402899606:
			return 195;
		case 1406459015:
			return 53;
		case 1410684624:
			return 181;
		case 1415827953:
			return 432;
		case 1425403638:
			return 479;
		case 1427678219:
			return 230;
		case 1437607594:
			return 306;
		case 1438982821:
			return 111;
		case 1441230304:
			return 502;
		case 1447433250:
			return 352;
		case 1448617333:
			return 99;
		case 1454698172:
			return 421;
		case 1456958671:
			return 397;
		case 1467569385:
			return 69;
		case 1469701481:
			return 394;
		case 1508162848:
			return 434;
		case 1522535287:
			return 48;
		case 1524405765:
			return 79;
		case 1534808110:
			return 301;
		case 1549419655:
			return 216;
		case 1566844391:
			return 63;
		case 1571380021:
			return 75;
		case 1578693170:
			return 144;
		case 1593516439:
			return 462;
		case 1618734891:
			return 339;
		case 1621135203:
			return 44;
		case 1623482561:
			return 503;
		case 1636680094:
			return 478;
		case 1647502903:
			return 20;
		case 1665139197:
			return 278;
		case 1674863702:
			return 281;
		case 1675028401:
			return 109;
		case 1685749736:
			return 334;
		case 1688887348:
			return 209;
		case 1699962800:
			return 263;
		case 1701503387:
			return 207;
		case 1707661169:
			return 167;
		case 1723031480:
			return 161;
		case 1731971171:
			return 262;
		case 1750892420:
			return 183;
		case 1756182884:
			return 162;
		case 1759111208:
			return 72;
		case 1769573516:
			return 468;
		case 1773135364:
			return 231;
		case 1777191912:
			return 340;
		case 1783253542:
			return 384;
		case 1784248599:
			return 143;
		case 1786449168:
			return 31;
		case 1791780428:
			return 117;
		case 1792418811:
			return 100;
		case 1796786552:
			return 379;
		case 1817180056:
			return 390;
		case 1819621703:
			return 276;
		case 1824331150:
			return 449;
		case 1852529797:
			return 307;
		case 1863892775:
			return 274;
		case 1874987418:
			return 191;
		case 1888528254:
			return 447;
		case 1889392998:
			return 508;
		case 1890596065:
			return 235;
		case 1899640864:
			return 388;
		case 1909655985:
			return 430;
		case 1914552023:
			return 176;
		case 1927460276:
			return 448;
		case 1935952956:
			return 475;
		case 1937922313:
			return 459;
		case 1945593927:
			return 62;
		case 1955664182:
			return 226;
		case 1964695690:
			return 491;
		case 1971155641:
			return 453;
		case 1974689262:
			return 500;
		case 1978339427:
			return 154;
		case 2011168490:
			return 123;
		case 2011368334:
			return 221;
		case 2016323151:
			return 36;
		case 2030928096:
			return 381;
		case 2033246305:
			return 82;
		case 2045192987:
			return 319;
		case 2045388447:
			return 121;
		case 2050878222:
			return 497;
		case 2057380366:
			return 348;
		case 2071287828:
			return 347;
		case 2080199877:
			return 213;
		case 2082303678:
			return 5;
		case 2091083291:
			return 15;
		case 2137967386:
			return 386;
		case 2143106360:
			return 416;
		case 2143139308:
			return 465;
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

struct<4> func_340()
{
	struct<4> Var0;

	return Var0;
}

int func_341(int iParam0, bool bParam1)
{
	if (func_335(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_333(bParam1), iParam0, 0);
}

