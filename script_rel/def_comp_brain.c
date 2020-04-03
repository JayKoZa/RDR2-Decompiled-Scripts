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
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
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
	var uLocal_102 = 3;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 3;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = -1;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = -1;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	bool bLocal_138 = false;
	bool bLocal_139 = false;
	bool bLocal_140 = false;
	bool bLocal_141 = false;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	uLocal_14 = uScriptParam_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(554))
	{
		func_1(&uLocal_14);
	}
	func_2(&uLocal_14, 0);
	while (!func_3(&uLocal_14, &uScriptParam_0))
	{
		BUILTIN::WAIT(0);
	}
	func_1(&uLocal_14);
}

void func_1(var uParam0)
{
	if (func_4(*uParam0, 2, 1))
	{
		func_5(*uParam0);
	}
	if (func_6(*uParam0, 16, 0))
	{
		func_7(*uParam0, 16, 1);
		((*Global_1360165)[*uParam0 /*1157*/])->f_129 = 0;
		func_8(*uParam0, 0);
		func_9(*uParam0, 4, 0);
		func_10(*uParam0);
		func_11(*uParam0);
		func_12(*uParam0, 37, 1);
	}
	if (bLocal_138)
	{
	}
	func_10(*uParam0);
	func_13(*uParam0);
	func_14(uParam0);
	func_15(uParam0);
	func_12(*uParam0, 65, 0);
	if (func_16(uParam0->f_106))
	{
		func_17(&(uParam0->f_106), 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
	{
		if (func_18(*uParam0, 0))
		{
			func_19(uParam0);
		}
		func_20(*uParam0, 1, 1, 1, 0);
	}
	if (!func_21(*uParam0))
	{
		if (bLocal_141)
		{
			func_22(*uParam0, 0, 1, 1, 0);
		}
	}
	func_23(*uParam0);
	func_24(*uParam0);
	func_25(uParam0, 134217728);
	func_25(uParam0, 536870912);
	func_12(*uParam0, 27, 0);
	(Global_40.f_4942[*uParam0 /*60*/])->f_48 = -15;
	((*Global_1360165)[*uParam0 /*1157*/])->f_11 = 0;
	func_2(uParam0, 0);
	func_26(*uParam0, 22, 0);
	func_12(*uParam0, 24, 0);
	func_12(*uParam0, 4, 0);
	func_12(*uParam0, 26, 0);
	func_12(*uParam0, 1, 0);
	func_12(*uParam0, 2, 0);
	func_28(&(Global_1359489->f_4), func_27(*uParam0));
	((*Global_1360165)[*uParam0 /*1157*/])->f_3 = 0;
	((*Global_1360165)[*uParam0 /*1157*/])->f_128 = 0;
	func_29(*uParam0, 0);
	func_30(*uParam0, 32, 0);
	func_31(uParam0);
	func_32(*uParam0, 387830046);
	func_32(*uParam0, 2060950072);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2(var uParam0, int iParam1)
{
	if (iParam1 == uParam0->f_1)
	{
		return;
	}
	uParam0->f_1 = iParam1;
}

int func_3(var uParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;

	bVar0 = ENTITY::DOES_ENTITY_EXIST(uParam0->f_5);
	bVar1 = func_6(*uParam0, 16, 0);
	bVar2 = func_33(uParam0, &bVar1);
	bLocal_138 = (bVar0 && !ENTITY::IS_ENTITY_DEAD(uParam0->f_5));
	if (!bVar2 && func_34(uParam0))
	{
		return 1;
	}
	if (uParam0->f_1 > 0)
	{
		if (!func_35(*uParam0))
		{
			func_2(uParam0, 0);
		}
	}
	if (uParam0->f_1 > 1)
	{
		bVar3 = Global_1359489->f_10 == *uParam0;
		if (bVar3)
		{
			func_36(uParam0);
			if (bLocal_138)
			{
				bLocal_139 = PED::IS_PED_GROUP_MEMBER(uParam0->f_5, func_37(), 1);
				if (bLocal_139)
				{
					func_38(&(Global_1359489->f_4), func_27(*uParam0));
				}
				else
				{
					func_28(&(Global_1359489->f_4), func_27(*uParam0));
				}
			}
			else
			{
				bLocal_139 = false;
			}
			if (!bLocal_139)
			{
				if (func_4(*uParam0, 2, 1))
				{
					if (bVar2)
					{
						func_12(*uParam0, 2, 1);
					}
					else
					{
						return 1;
					}
				}
			}
			if (func_4(*uParam0, 44, 1) && !SCRIPTS::IS_THREAD_ACTIVE(((*Global_1360165)[*uParam0 /*1157*/])->f_1156, false))
			{
				((*Global_1360165)[*uParam0 /*1157*/])->f_1156 = 0;
				func_12(*uParam0, 44, 1);
			}
			func_39(uParam0);
		}
		if (func_40(uParam0, &bVar0) || ((!bVar2 && bVar3) && func_41(uParam0)))
		{
			return 1;
		}
		func_42(uParam0, &bVar1);
		if (*uParam0 == 20 && iLocal_143 == 6)
		{
			func_43(uParam0);
		}
		if (bVar3)
		{
			uParam0->f_6 = func_44(*uParam0, 0);
			if (PERSCHAR::_0xA8120EBEAF290C7A(uParam0->f_6))
			{
				iVar4 = PERSCHAR::_0x69786495C92A3044(uParam0->f_6);
				if (iVar4 != ((*Global_1360165)[*uParam0 /*1157*/])->f_47)
				{
					((*Global_1360165)[*uParam0 /*1157*/])->f_47 = iVar4;
					StringCopy(&(((*Global_1360165)[*uParam0 /*1157*/])->f_48), PERSCHAR::_0x9C7F95946E304778(uParam0->f_6, ((*Global_1360165)[*uParam0 /*1157*/])->f_47), 64);
					((*Global_1360165)[*uParam0 /*1157*/])->f_56 = 1;
				}
			}
			func_45(uParam0);
			func_46(uParam0, &bVar1);
			if (((*Global_1360165)[*uParam0 /*1157*/])->f_142 != -15)
			{
				if (func_47(((*Global_1360165)[*uParam0 /*1157*/])->f_142))
				{
					((*Global_1360165)[*uParam0 /*1157*/])->f_141 = 0;
					((*Global_1360165)[*uParam0 /*1157*/])->f_142 = -15;
				}
			}
			if (uParam0->f_1 != 6 && uParam0->f_1 != 7)
			{
				func_48(uParam0);
				func_49(uParam0, &bVar1);
			}
			func_50(uParam0);
			func_51(uParam0);
			if (func_4(*uParam0, 13, 1))
			{
				func_52(*uParam0);
				func_12(*uParam0, 13, 0);
			}
			if (func_53(*uParam0, 0, 0))
			{
				func_26(*uParam0, 26, 0);
			}
			else
			{
				func_12(*uParam0, 26, 0);
			}
			if (uParam0->f_102 == 17)
			{
				func_26(*uParam0, 67, 0);
			}
			else
			{
				func_12(*uParam0, 67, 0);
			}
		}
		func_54(uParam0, uParam1);
	}
	func_55(uParam0);
	switch (uParam0->f_1)
	{
		case 0:
			if (!func_56(*uParam0))
			{
				func_1(uParam0);
			}
			if (!func_35(*uParam0))
			{
				func_57(*uParam0);
			}
			if (MISC::IS_BIT_SET(uParam1->f_6, 0))
			{
				PED::_0xED9582B3DA8F02B4(2);
			}
			else if (PED::_0x62DE46F061CAA468() <= 1)
			{
				PED::_0xED9582B3DA8F02B4(1);
			}
			else
			{
				PED::_0xED9582B3DA8F02B4(2);
			}
			if (func_58(*uParam0) != 0)
			{
				func_59(*uParam0, func_58(*uParam0));
			}
			func_52(*uParam0);
			if (!func_60(uParam1->f_3))
			{
				PERSCHAR::_0x59C7AD6FEA2AC449(((*Global_1360165)[*uParam0 /*1157*/])->f_1, uParam1->f_3);
			}
			else
			{
				PERSCHAR::_0xD4B614179BCD0654(((*Global_1360165)[*uParam0 /*1157*/])->f_1);
			}
			uParam0->f_6 = func_44(*uParam0, 0);
			if (PERSCHAR::_0xA8120EBEAF290C7A(uParam0->f_6))
			{
				((*Global_1360165)[*uParam0 /*1157*/])->f_47 = PERSCHAR::_0x69786495C92A3044(uParam0->f_6);
				StringCopy(&(((*Global_1360165)[*uParam0 /*1157*/])->f_48), PERSCHAR::_0x9C7F95946E304778(uParam0->f_6, ((*Global_1360165)[*uParam0 /*1157*/])->f_47), 64);
				((*Global_1360165)[*uParam0 /*1157*/])->f_56 = 1;
			}
			if (*uParam0 != 12)
			{
				PERSCHAR::_0x2DF89CD2ED1D0BDE(func_61(*uParam0), func_62((Global_40.f_4942[*uParam1 /*60*/])->f_3, *uParam0));
				((*Global_1360165)[*uParam0 /*1157*/])->f_63 = (Global_40.f_4942[*uParam1 /*60*/])->f_3;
			}
			if (*uParam0 == 24 || *uParam0 == 25)
			{
				PERSCHAR::_0x2DF89CD2ED1D0BDE(func_61(*uParam0), 41788943);
				((*Global_1360165)[*uParam0 /*1157*/])->f_63 = (Global_40.f_4942[*uParam1 /*60*/])->f_3;
			}
			func_51(uParam0);
			if (MISC::IS_BIT_SET(uParam1->f_6, 1))
			{
				func_26(*uParam0, 44, 0);
				bVar2 = true;
			}
			if (func_63(((*Global_1835011)[0 /*74*/])->f_1, 1) && func_64(*uParam1, -2147483648))
			{
				func_65(*uParam1, -2147483648, 0);
			}
			if (uParam1->f_1 != 0)
			{
				if (func_66(*uParam1, uParam1->f_1))
				{
					func_68(*uParam1, uParam1->f_1, !func_67(Global_1360165[*uParam0 /*1157*/], 0));
				}
			}
			else
			{
				func_68(*uParam1, (Global_40.f_4942[*uParam1 /*60*/])->f_3, !func_67(Global_1360165[*uParam0 /*1157*/], 0));
			}
			iLocal_143 = func_69();
			func_70(&(uParam0->f_76));
			func_70(&(uParam0->f_79));
			func_71(uParam0);
			func_2(uParam0, 1);
		case 1:
			if (!func_67(Global_1360165[*uParam0 /*1157*/], 0))
			{
				if (!PED::_0x5E420FF293EE5472() && func_72(&(uParam0->f_76)) < 5000)
				{
					func_70(&(uParam0->f_79));
					return 0;
				}
				uParam0->f_5 = func_74(*uParam0, MISC::IS_BIT_SET(uParam1->f_6, 2), MISC::IS_BIT_SET(uParam1->f_6, 3), func_73(uParam0, bVar2));
			}
			if (func_67(Global_1360165[*uParam0 /*1157*/], 0) && uParam0->f_5 == PERSCHAR::_0x31C70A716CAE1FEE(((*Global_1360165)[*uParam0 /*1157*/])->f_1))
			{
				if (!PERSCHAR::_0xA8120EBEAF290C7A(((*Global_1360165)[*uParam0 /*1157*/])->f_1))
				{
					if (MISC::IS_BIT_SET(uParam1->f_6, 3))
					{
						if (!MISC::IS_BIT_SET(uParam1->f_6, 4))
						{
							ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[*uParam0 /*1157*/], true);
							MISC::SET_BIT(&(uParam1->f_6), 4);
						}
						return 0;
					}
				}
				else if (MISC::IS_BIT_SET(uParam1->f_6, 4))
				{
					PERSCHAR::_0xD4B614179BCD0654(uParam0->f_6);
					ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[*uParam0 /*1157*/], false);
					MISC::CLEAR_BIT(&(uParam1->f_6), 4);
				}
				(*Global_1360165)[*uParam0 /*1157*/] = uParam0->f_5;
				func_75(uParam0);
				if (MISC::IS_BIT_SET(uParam1->f_6, 0) && func_6(*uParam0, 32768, 1))
				{
					func_26(*uParam0, 40, 0);
				}
				func_2(uParam0, 2);
			}
			break;
		case 2:
			if (bVar1 || func_4(*uParam0, 44, 0))
			{
				func_76(uParam0);
			}
			else if (func_18(*uParam0, 0))
			{
				func_77(uParam0);
			}
			else if (func_78(uParam0))
			{
				func_79(uParam0);
			}
			else
			{
				func_80(uParam0, 0);
			}
			break;
		case 3:
			if (func_4(*uParam0, 27, 1))
			{
				if (func_82(func_81(), (Global_40.f_4942[*uParam0 /*60*/])->f_48))
				{
					func_12(*uParam0, 27, 0);
					(Global_40.f_4942[*uParam0 /*60*/])->f_48 = -15;
				}
			}
			if (func_83(uParam0, 1))
			{
				func_84(uParam0);
			}
			break;
		case 23:
			if (!func_83(uParam0, 0))
			{
				if (!func_85(&(uParam0->f_46)))
				{
					func_70(&(uParam0->f_46));
				}
				else if (func_86(&(uParam0->f_46)) > 30f || func_87(Global_35, 0))
				{
					func_88(&(uParam0->f_46));
					if (PED::IS_PED_GROUP_MEMBER(uParam0->f_5, func_37(), 1))
					{
						func_19(uParam0);
					}
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_5, 1, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_5, 3, false);
					func_89(&(uParam0->f_67), 1);
					if (func_90(uParam0->f_5) || func_93(uParam0->f_5, func_92(func_91()), 1, 0))
					{
						func_80(uParam0, 1);
					}
					else
					{
						func_79(uParam0);
					}
				}
			}
			break;
		case 6:
			if (func_94(0, 0, 1))
			{
				PED::SET_PED_RESET_FLAG(uParam0->f_5, 184, true);
			}
			if (bVar3)
			{
				bVar5 = func_95(uParam0, 536870912);
				if (!func_85(&(uParam0->f_73)))
				{
					func_70(&(uParam0->f_73));
				}
				else if (func_86(&(uParam0->f_73)) > 1f)
				{
					if ((((!func_96() && !bVar5) && !func_4(*uParam0, 63, 0)) && !func_97(1)) && PED::_0x947E43F544B6AB34(uParam0->f_5, PLAYER::PLAYER_ID(), 48, 1200))
					{
						func_98(uParam0, 536870912);
						bVar5 = true;
					}
					func_70(&(uParam0->f_73));
				}
				if (bVar5)
				{
					func_48(uParam0);
				}
			}
			if (!bVar1)
			{
				if (func_4(*uParam0, 44, 0))
				{
					return 0;
				}
				func_99(*uParam0, 16384, 0);
				func_100(uParam0, 1);
				func_12(*uParam0, 44, 0);
				if (bLocal_138)
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2(uParam0->f_5))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_5, true, true);
					}
					uParam0->f_6 = func_44(*uParam0, 0);
					PERSCHAR::_0xE0E65E0D261F7507(uParam0->f_6);
					if (func_4(*uParam0, 30, 1))
					{
						if (func_18(*uParam0, 0))
						{
							func_19(uParam0);
						}
						func_12(*uParam0, 30, 1);
					}
					else
					{
						bLocal_139 = PED::IS_PED_GROUP_MEMBER(uParam0->f_5, func_37(), 1);
					}
					PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 130, false);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 315, false);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 301, false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_5, 1030835986);
					ENTITY::_SET_ENTITY_HEALTH(uParam0->f_5, PED::GET_PED_MAX_HEALTH(uParam0->f_5), 0);
					if (func_101(uParam0))
					{
						func_26(*uParam0, 35, 0);
						func_26(*uParam0, 62, 0);
					}
					if (func_4(*uParam0, 33, 0))
					{
						func_102(uParam0);
					}
					else if (bLocal_139)
					{
						if (func_67(uParam0->f_5, 0))
						{
							PED::SET_PED_KEEP_TASK(uParam0->f_5, false);
						}
						func_77(uParam0);
					}
					else if (func_83(uParam0, 1))
					{
						func_84(uParam0);
					}
					else if (func_4(*uParam0, 35, 0))
					{
						POPULATION::_0xF74E134F40192884(uParam0->f_5, 0);
						func_79(uParam0);
					}
					else if (func_90(uParam0->f_5) || func_93(uParam0->f_5, func_92(func_91()), 1, 0))
					{
						POPULATION::_0xF74E134F40192884(uParam0->f_5, 1);
						func_103(uParam0);
						if (PED::IS_PED_ON_MOUNT(uParam0->f_5))
						{
							TASK::TASK_DISMOUNT_ANIMAL(uParam0->f_5, 0, 0, 0, 0, 0);
						}
						func_104(uParam0);
					}
					else
					{
						POPULATION::_0xF74E134F40192884(uParam0->f_5, 0);
						func_79(uParam0);
					}
				}
			}
			break;
		case 7:
			if (bVar1)
			{
				func_76(uParam0);
				return 0;
			}
			bVar6 = false;
			if (func_85(&(((*Global_1360165)[*uParam0 /*1157*/])->f_130)) && func_105(&(((*Global_1360165)[*uParam0 /*1157*/])->f_130)) > ((*Global_1360165)[*uParam0 /*1157*/])->f_133)
			{
				bVar6 = true;
			}
			else if (func_4(*uParam0, 34, 0) && !TASK::_0x9FF5F9B24E870748(uParam0->f_5))
			{
				bVar6 = true;
			}
			else if (func_4(*uParam0, 68, 0) && func_106(ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false), 3f, 4, 0))
			{
				bVar6 = true;
			}
			if (bVar6)
			{
				func_15(uParam0);
				PED::SET_PED_KEEP_TASK(uParam0->f_5, false);
				func_104(uParam0);
				return 0;
			}
			break;
		case 11:
			if (!func_18(*uParam0, 0))
			{
				func_79(uParam0);
				return 0;
			}
			func_107(uParam0);
			break;
		case 12:
			func_108(uParam0);
			break;
		case 18:
			func_109(uParam0);
			break;
		case 19:
			func_110(uParam0);
			break;
		default:
			func_104(uParam0);
			break;
	}
	return 0;
}

bool func_4(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_56(iParam0))
		{
			return false;
		}
	}
	func_111(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0]), iVar1);
}

void func_5(int iParam0)
{
	int iVar0;
	var uVar1;
	bool bVar2;

	iVar0 = func_112(iParam0);
	uVar1 = func_44(iParam0, 0);
	func_113(iParam0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			PED::_0xF008E0BA1FE1D644(1);
			bVar2 = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
		PERSCHAR::_0x7B204F88F6C3D287(uVar1);
		if (bVar2)
		{
			PED::_0x7D4E70A67A651C71(1);
		}
	}
	PERSCHAR::_0xFCC6DB8DBE709BC8(uVar1);
}

bool func_6(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_56(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

void func_7(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_114(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (&Global_40.f_4942[iParam0 /*60*/] - (Global_40.f_4942[iParam0 /*60*/] && iParam1));
}

void func_8(int iParam0, bool bParam1)
{
	if (!func_56(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_115(&(((*Global_1360165)[iParam0 /*1157*/])->f_12), 1))
		{
			func_9(iParam0, 1, 0);
		}
	}
	func_9(iParam0, 16, bParam1);
}

void func_9(int iParam0, int iParam1, bool bParam2)
{
	if (!func_56(iParam0))
	{
		return;
	}
	func_116(&(((*Global_1360165)[iParam0 /*1157*/])->f_13), iParam1, bParam2);
}

void func_10(int iParam0)
{
	func_9(iParam0, 8, 0);
}

void func_11(int iParam0)
{
	func_26(iParam0, 36, 1);
}

void func_12(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_56(iParam0))
		{
			return;
		}
	}
	func_111(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_13(int iParam0)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return;
	}
	if (func_117(iParam0))
	{
		iVar0 = func_118(iParam0);
		if (MAP::DOES_BLIP_EXIST(iVar0))
		{
			MAP::REMOVE_BLIP(&iVar0);
		}
	}
}

void func_14(var uParam0)
{
	func_119(uParam0);
	func_120(uParam0);
}

void func_15(var uParam0)
{
	func_88(&(((*Global_1360165)[*uParam0 /*1157*/])->f_130));
	((*Global_1360165)[*uParam0 /*1157*/])->f_133 = -1f;
	func_12(*uParam0, 33, 0);
	func_12(*uParam0, 34, 0);
	func_12(*uParam0, 12, 0);
	func_12(*uParam0, 68, 0);
}

bool func_16(int iParam0)
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

void func_17(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_16(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_121(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_122(iVar0);
	*uParam0 = 0;
}

bool func_18(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_112(iParam0);
	if (bParam1)
	{
		if (!func_67(iVar0, 0))
		{
			return false;
		}
	}
	return PED::IS_PED_GROUP_MEMBER(iVar0, func_37(), 1);
}

void func_19(var uParam0)
{
	func_123(*uParam0);
	bLocal_139 = false;
}

void func_20(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(func_112(iParam0)))
	{
		func_12(iParam0, 4, 1);
		func_12(iParam0, 17, 1);
		func_12(iParam0, 1, 1);
		func_12(iParam0, 2, 1);
		return;
	}
	if (!func_114(iParam0))
	{
		return;
	}
	if (func_124(iParam0) && !bParam2)
	{
		return;
	}
	if (func_125(iParam0) && !bParam2)
	{
		return;
	}
	if (iParam0 == Global_1357549->f_1497 && !bParam2)
	{
		return;
	}
	if (((!bParam3 && ENTITY::DOES_ENTITY_EXIST(func_112(iParam0))) && func_126(iParam0) < 5000f) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	func_12(iParam0, 4, 1);
	func_12(iParam0, 17, 1);
	func_12(iParam0, 1, 1);
	func_12(iParam0, 2, 1);
	func_113(iParam0, func_112(iParam0));
	func_127(iParam0, 1, 1, 1, bParam4);
}

int func_21(int iParam0)
{
	if (!func_56(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == 0 || ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == ((*Global_1360165)[iParam0 /*1157*/])->f_128)
	{
		return 0;
	}
	return 1;
}

int func_22(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!func_56(iParam0))
	{
		return 0;
	}
	iVar0 = func_128(iParam0);
	if (func_67(iVar0, 0))
	{
		if (func_67(PED::_0xB676EFDA03DADA52(iVar0, 0), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_21(iParam0)) || func_129(iParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(iVar0) && func_130(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 10000f))
			{
				iVar1 = func_131(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
					}
					func_132(iParam0);
					PERSCHAR::_0x7B204F88F6C3D287(func_133(iParam0, 0));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_133(iParam0, 0));
					func_24(iParam0);
				}
			}
			else
			{
				if (func_6(iParam0, 32768, 1))
				{
					uVar2 = func_133(iParam0, 0);
					PERSCHAR::_0xB65E7F733956CF25(uVar2);
					PERSCHAR::_0xFCC6DB8DBE709BC8(uVar2);
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
		if (func_67(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
		{
			if (func_6(iParam0, 32768, 1))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(((*Global_1360165)[iParam0 /*1157*/])->f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				}
				func_132(iParam0);
				PERSCHAR::_0x7B204F88F6C3D287(func_133(iParam0, 0));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_133(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				func_132(iParam0);
				PED::DELETE_PED(&(((*Global_1360165)[iParam0 /*1157*/])->f_124));
			}
		}
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = 0;
	func_29(iParam0, 0);
	return 1;
}

void func_23(int iParam0)
{
	if (!func_114(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_13 = 2;
	func_12(iParam0, 42, 1);
}

void func_24(int iParam0)
{
	int iVar0;

	if (!func_56(iParam0))
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

void func_25(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_26(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_56(iParam0))
		{
			return;
		}
	}
	func_111(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

int func_27(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

void func_28(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_29(int iParam0, int iParam1)
{
	if (!func_56(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_12 = iParam1;
}

void func_30(int iParam0, int iParam1, bool bParam2)
{
	if (!func_56(iParam0))
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

void func_31(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_123))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_123);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 377, false);
	}
}

void func_32(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	if (!func_56(iParam0))
	{
		return;
	}
	if (!func_134(iParam1))
	{
		return;
	}
	iVar0 = -1;
	bVar1 = false;
	if (func_135(iParam0, iParam1, &iVar0, &bVar1))
	{
		if (bVar1)
		{
			func_136(iParam0, &((Global_40.f_4942[iParam0 /*60*/])->f_8));
		}
		if (iVar0 != -1)
		{
			func_137(iParam0, iVar0);
		}
	}
}

int func_33(var uParam0, bool bParam1)
{
	if (*bParam1 || func_4(*uParam0, 44, 0))
	{
		return 1;
	}
	return 0;
}

int func_34(var uParam0)
{
	if (bLocal_139)
	{
		return 0;
	}
	if (func_4(*uParam0, 1, 1))
	{
		return 1;
	}
	return 0;
}

bool func_35(int iParam0)
{
	if (!func_56(iParam0))
	{
		return false;
	}
	return PERSCHAR::_0x800DF3FC913355F3(func_44(iParam0, 0));
}

void func_36(var uParam0)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false) };
	uParam0->f_11 = BUILTIN::VDIST2(((*Global_1360165)[*uParam0 /*1157*/])->f_135, vVar0) > 2f;
	((*Global_1360165)[*uParam0 /*1157*/])->f_135 = { vVar0 };
	((*Global_1360165)[*uParam0 /*1157*/])->f_134 = BUILTIN::VDIST2(((*Global_1360165)[*uParam0 /*1157*/])->f_135, Global_36);
}

int func_37()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_38(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_39(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iLocal_142 = 0;
	if (PERSCHAR::_0xA8120EBEAF290C7A(uParam0->f_6))
	{
		iVar0 = PERSCHAR::_0x69786495C92A3044(uParam0->f_6);
		iVar1 = PERSCHAR::_0xEC254C2C9B0F08F1(uParam0->f_6, iVar0);
		if ((((iVar1 == 1932006723 || iVar1 == 1130477742) || (*uParam0 == 10 && iVar1 == 194652874)) || (*uParam0 == 19 && iVar1 == 194652874)) || PED::_0x34D6AC1157C8226C(uParam0->f_5, -1609133339))
		{
			iVar2 = func_138(uParam0->f_5, 0, 0, 0);
			if (func_139(iVar2))
			{
				iVar3 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(uParam0->f_5, 0));
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				iVar2 = func_138(uParam0->f_5, 0, 1, 0);
				if (func_139(iVar2))
				{
					iVar3 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(uParam0->f_5, 1));
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					return;
				}
			}
			iLocal_142 = iVar3;
		}
	}
}

int func_40(var uParam0, bool bParam1)
{
	if (!*bParam1 || (ENTITY::IS_ENTITY_DEAD(uParam0->f_5) && !func_125(*uParam0)))
	{
		return 1;
	}
	return 0;
}

int func_41(var uParam0)
{
	float fVar0;
	bool bVar1;

	if (func_140(func_91(), 8) || func_140(func_91(), 2))
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		fVar0 = 40000f;
	}
	else
	{
		fVar0 = 10000f;
	}
	if (func_126(*uParam0) > fVar0)
	{
		if (*uParam0 == Global_1357549->f_1497)
		{
			return 0;
		}
		if (bVar1)
		{
			if (!func_141(uParam0->f_5))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_42(var uParam0, bool bParam1)
{
	int iVar0;

	if (!bLocal_138)
	{
		return;
	}
	func_142(uParam0);
	if (iLocal_142 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_142) && func_143(ENTITY::GET_ENTITY_MODEL(iLocal_142)))
		{
			WEAPON::_0x000FA7A4A8443AF7(iLocal_142);
		}
		else
		{
			iLocal_142 = 0;
		}
	}
	iVar0 = func_128(*uParam0);
	if (func_67(iVar0, 0))
	{
		if (!func_144(*uParam0, 2048))
		{
			ENTITY::_0xC3ABCFBC7D74AFA5(iVar0, 6, 1);
		}
		if (!func_144(*uParam0, 4096))
		{
			PED::SET_PED_RESET_FLAG(iVar0, 91, true);
		}
	}
	if (uParam0->f_1 != 6)
	{
		if (*bParam1)
		{
			func_76(uParam0);
			return;
		}
		if ((uParam0->f_1 != 11 && uParam0->f_1 != 18) && uParam0->f_1 != 23)
		{
			if (bLocal_139)
			{
				func_77(uParam0);
				return;
			}
		}
		if (Global_1359489->f_10 == *uParam0)
		{
			func_145(uParam0);
		}
	}
	else
	{
		if (func_4(*uParam0, 44, 0))
		{
			if (PED::_0x62DE46F061CAA468() <= 1 && !ENTITY::DOES_ENTITY_EXIST(func_128(*uParam0)))
			{
				PED::_0xED9582B3DA8F02B4(1);
			}
			else
			{
				PED::_0xED9582B3DA8F02B4(2);
			}
		}
		func_145(uParam0);
	}
}

void func_43(var uParam0)
{
	float fVar0;

	if (bLocal_138)
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 333, true);
		if (Global_1359489->f_10 == *uParam0)
		{
			if (((*Global_1360165)[*uParam0 /*1157*/])->f_1152 == -1 || ((*Global_1360165)[*uParam0 /*1157*/])->f_1152 == 3)
			{
				fVar0 = func_146();
				if (uParam0->f_121 != fVar0 || !PED::_0x50F124E6EF188B22(uParam0->f_5))
				{
					uParam0->f_121 = fVar0;
					func_147(*uParam0, fVar0);
					PED::_0xE0FE107AB174D64A(uParam0->f_5, 1);
				}
			}
			else if (PED::_0x6FB76442469ABD68(uParam0->f_5) > 0f)
			{
				uParam0->f_121 = (uParam0->f_121 - 0.01f);
				if (uParam0->f_121 > 0f)
				{
					func_147(*uParam0, uParam0->f_121);
				}
				else
				{
					uParam0->f_121 = 0f;
					func_148(*uParam0);
				}
			}
		}
	}
}

int func_44(int iParam0, bool bParam1)
{
	if (!func_114(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!PERSCHAR::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_1))
		{
			func_57(iParam0);
		}
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_1;
}

void func_45(var uParam0)
{
	int iVar0;

	iVar0 = func_149(uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 2:
			if (func_18(*uParam0, 0))
			{
				func_19(uParam0);
			}
			func_150(uParam0);
			break;
		case 16:
			if (!func_151(*uParam0))
			{
				func_100(uParam0, 6);
			}
			func_150(uParam0);
			break;
		case 21:
			uParam0->f_107 = func_152(uParam0);
			func_153(uParam0);
			func_25(uParam0, 4096);
			func_100(uParam0, 2048);
			func_150(uParam0);
			break;
		case 22:
			uParam0->f_107 = -1;
			func_153(uParam0);
			func_25(uParam0, 2048);
			func_100(uParam0, 4096);
			break;
		case 23:
			func_25(uParam0, 2048);
			func_25(uParam0, 4096);
			func_150(uParam0);
			uParam0->f_107 = -1;
			break;
		case 27:
			if (!func_6(*uParam0, 16, 0))
			{
				if (uParam0->f_1 == 3)
				{
					uParam0->f_6 = func_44(*uParam0, 0);
					if (uParam0->f_6 != 0 && MISC::_IS_BASE_A_PERSISTENT_CHARACTER(uParam0->f_6))
					{
						PERSCHAR::_0xD4B614179BCD0654(uParam0->f_6);
					}
					func_104(uParam0);
				}
			}
			func_150(uParam0);
			break;
	}
}

void func_46(var uParam0, bool bParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	var uVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;

	if (func_151(*uParam0))
	{
		return;
	}
	iVar0 = ((*Global_1360165)[*uParam0 /*1157*/])->f_70;
	bLocal_141 = func_67(iVar0, 0);
	if (bLocal_141)
	{
		if (func_4(*uParam0, 38, 1))
		{
			PED::_0x931B241409216C1F(func_112(*uParam0), iVar0, 0);
			PED::_0xED1C764997A86D5A(func_112(*uParam0), iVar0);
			PED::SET_PED_CONFIG_FLAG(iVar0, 367, true);
			func_12(*uParam0, 38, 1);
		}
		fVar1 = 40000f;
		bVar6 = func_154(func_69(), &vVar2, &uVar5);
		if (!func_155(uParam0))
		{
			if (!func_144(*uParam0, 32))
			{
				AITRANSPORT::_0xBA8818212633500A(iVar0, 0, 1);
				func_30(*uParam0, 32, 1);
			}
		}
		else if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
			POPULATION::_0xF74E134F40192884(iVar0, 1);
			if (func_144(*uParam0, 32))
			{
				AITRANSPORT::_0xBA8818212633500A(iVar0, 0, 0);
				func_30(*uParam0, 32, 0);
			}
			TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
			if (((bVar6 && func_156(iVar0, vVar2, 1) > 1200f) && !func_144(*uParam0, 1024)) && !func_21(*uParam0))
			{
				fVar1 = 1200f;
			}
			else if (!TASK::GET_IS_TASK_ACTIVE(iVar0, 7))
			{
				PERSCHAR::_0x631CD2D77FDC0316(func_133(*uParam0, 0));
			}
		}
		if (!func_144(*uParam0, 1024) && func_156(iVar0, vVar2, 1) > fVar1)
		{
			if ((!func_21(*uParam0) && !*bParam1) && !(func_144(*uParam0, 8) || func_144(*uParam0, 512)))
			{
				iVar7 = PED::_0xB676EFDA03DADA52(iVar0, 0);
				if (iVar7 == Global_35)
				{
					TASK::TASK_HORSE_ACTION(iVar0, 2, 0, 0);
				}
				else if (iVar7 != uParam0->f_5)
				{
					if (bVar6)
					{
						if (((!func_157(iVar0, 713668775) && !TASK::GET_IS_TASK_ACTIVE(iVar0, 7)) && !func_157(iVar0, 258748395)) && !func_157(iVar0, 1041577989))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, vVar2, 2.5f, -1, 0.25f, false, 40000f);
						}
					}
				}
			}
		}
		else if ((PED::_0xB676EFDA03DADA52(iVar0, 0) == 0 && !func_21(*uParam0)) && !(func_144(*uParam0, 8) || func_144(*uParam0, 512)))
		{
			if (bVar6)
			{
				if (func_156(iVar0, vVar2, 1) < fVar1)
				{
					if ((!TASK::GET_IS_TASK_ACTIVE(iVar0, 7) && !func_157(iVar0, 258748395)) && !func_157(iVar0, 1041577989))
					{
						PERSCHAR::_0x631CD2D77FDC0316(func_133(*uParam0, 0));
					}
				}
			}
		}
	}
	if (func_158(*uParam0, 0))
	{
		return;
	}
	if (func_159(uParam0, 2))
	{
		if (PED::IS_PED_ON_MOUNT(uParam0->f_5) || func_157(uParam0->f_5, 1868526510))
		{
			func_25(uParam0, 2);
		}
		bVar8 = func_160(*uParam0);
		if (!bVar8 && (uParam0->f_1 != 6 || func_161(2048)))
		{
			func_162(*uParam0);
		}
	}
	else if (((*Global_1360165)[*uParam0 /*1157*/])->f_70.f_13 > 2)
	{
		func_23(*uParam0);
	}
}

bool func_47(int iParam0)
{
	return &Global_1899515 > iParam0;
}

void func_48(var uParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	if (func_95(uParam0, 536870912))
	{
		if (bLocal_138 && func_67(Global_35, 0))
		{
			sVar0 = func_163();
			if (func_164(uParam0->f_5, sVar0, joaat("speech_params_standard"), Global_35, 0, 0, uParam0->f_101, 1))
			{
				func_165(uParam0, 536870912);
			}
			return;
		}
		else
		{
			func_165(uParam0, 536870912);
		}
	}
	if (func_95(uParam0, 1073741824 /* Float: 2f */))
	{
		if (bLocal_138 && func_67(Global_35, 0))
		{
			sVar0 = func_166();
			if (func_164(uParam0->f_5, sVar0, joaat("speech_params_standard"), Global_35, 0, 0, 0, 1))
			{
				func_165(uParam0, 1073741824 /* Float: 2f */);
			}
			return;
		}
		else
		{
			func_165(uParam0, 1073741824 /* Float: 2f */);
		}
	}
	if (*uParam0 == 17 && func_35(*uParam0))
	{
		if (PERSCHAR::_0xA8120EBEAF290C7A(uParam0->f_6))
		{
			iVar1 = PERSCHAR::_0x69786495C92A3044(uParam0->f_6);
			iVar2 = PERSCHAR::_0xEC254C2C9B0F08F1(uParam0->f_6, iVar1);
			if (iVar2 == 1281438538 && PED::_0x34D6AC1157C8226C(uParam0->f_5, 1285815972))
			{
				if (!func_95(uParam0, -2147483648))
				{
					bVar3 = true;
					if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar4, 0, 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar4) && ENTITY::IS_ENTITY_A_PED(iVar4))
						{
							if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4) == uParam0->f_5)
							{
								bVar3 = false;
							}
						}
					}
					if (bVar3)
					{
						if (func_164(uParam0->f_5, "FOOD_READY_REMINDER", joaat("speech_params_shouted_clear"), 0, 1, 0, 0, 1))
						{
							func_98(uParam0, -2147483648);
						}
					}
				}
			}
			else if (func_95(uParam0, -2147483648))
			{
				func_165(uParam0, -2147483648);
			}
		}
	}
}

void func_49(var uParam0, bool bParam1)
{
	bool bVar0;
	var uVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	vector3 vVar9;
	vector3 vVar12;
	float fVar15;
	struct<4> Var16;
	vector3 vVar20;
	float fVar23;
	vector3 vVar24;
	float fVar27;
	bool bVar28;
	vector3 vVar29;
	vector3 vVar32;
	vector3 vVar35;

	if (*bParam1 || func_167(*uParam0))
	{
		if (!func_161(2048))
		{
			return;
		}
	}
	if (uParam0->f_102 == 1 || uParam0->f_102 == 2)
	{
		return;
	}
	if (uParam0->f_103 != uParam0->f_102 && uParam0->f_103 != 0)
	{
		if (uParam0->f_102 != 25)
		{
			func_168(*uParam0, 0, "received new task");
		}
		func_88(&(uParam0->f_46));
	}
	uParam0->f_103 = uParam0->f_102;
	if (uParam0->f_102 != 9)
	{
		func_25(uParam0, 2);
	}
	switch (uParam0->f_102)
	{
		case 25:
			break;
		case 1:
		case 3:
			if (!PED::IS_PED_IN_COMBAT(uParam0->f_5, 0))
			{
				if (!func_169(uParam0, 1351865802))
				{
					if (TASK::_0xBD70108D01875299(uParam0->f_105) > 0)
					{
						TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(uParam0->f_5, uParam0->f_105, 1, 1, 1);
						func_170(uParam0, 2);
					}
				}
			}
			break;
		case 2:
			if (!PED::IS_PED_IN_COMBAT(uParam0->f_5, 0))
			{
				if (!func_169(uParam0, 1351865802))
				{
					if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(uParam0->f_105))
					{
						if (TASK::_0xBD70108D01875299(uParam0->f_105) > 0)
						{
							TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(uParam0->f_5, uParam0->f_105, 0, 0, 1);
						}
					}
				}
			}
			break;
		case 4:
			if (!func_169(uParam0, 923520851))
			{
				vVar5 = { func_171(func_91(), 1) };
				fVar8 = 0f;
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar5, &fVar8, 0))
				{
					vVar5.f_2 = fVar8;
				}
				TASK::TASK_WANDER_IN_AREA(uParam0->f_5, vVar5, 40f, 1077936128, 1086324736, 0);
			}
			break;
		case 5:
			if (!func_169(uParam0, -875674219))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_5, Global_35, -1, -1082130432, -1082130432, -1082130432);
			}
			break;
		case 6:
			if (!func_169(uParam0, 713668775))
			{
				vVar9 = { func_172(*uParam0) };
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_5, vVar9, 1f, -1, 3f, false, 40000f);
			}
			break;
		case 7:
			if (!func_169(uParam0, 713668775))
			{
				vVar12 = { func_172(*uParam0) };
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_5, vVar12, 2f, -1, 3f, false, 40000f);
			}
			break;
		case 17:
			if (func_173(uParam0->f_5))
			{
				return;
			}
			if (func_4(*uParam0, 35, 1))
			{
				PED::SET_PED_RESET_FLAG(uParam0->f_5, 52, true);
				PED::SET_PED_RESET_FLAG(uParam0->f_5, 201, true);
				PED::SET_PED_RESET_FLAG(uParam0->f_5, 228, true);
			}
			if (func_126(*uParam0) > 10000f || ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_5, func_92(5), true, 0))
			{
				fVar15 = 3f;
			}
			else if (func_126(*uParam0) > 5625f)
			{
				fVar15 = 2f;
			}
			else
			{
				fVar15 = 1f;
			}
			if (fVar15 < 3f)
			{
				if (func_4(*uParam0, 35, 1))
				{
					fVar15 = 3f;
				}
				else if ((func_174(PLAYER::PLAYER_ID(), 1, 0, 1) || PED::IS_PED_IN_COMBAT(Global_35, 0)) || PED::IS_PED_IN_COMBAT(uParam0->f_5, 0))
				{
					fVar15 = 2f;
				}
			}
			bVar0 = PED::IS_PED_ON_MOUNT(uParam0->f_5);
			func_175(&vVar2, &uVar1);
			if (!bVar0 && BUILTIN::VDIST2(((*Global_1360165)[*uParam0 /*1157*/])->f_135, vVar2) > 562500f)
			{
				bVar0 = true;
			}
			if (PED::IS_PED_IN_COMBAT(Global_35, 0) && PED::IS_PED_IN_COMBAT(uParam0->f_5, 0))
			{
				if (!func_169(uParam0, -2117564886))
				{
					TASK::TASK_COMBAT_HATED_TARGETS(uParam0->f_5, -1082130432);
				}
			}
			else if (((!func_169(uParam0, -1665583462) && bVar0) || (!func_169(uParam0, -1672495956) && !bVar0)) || fVar15 != uParam0->f_104)
			{
				uParam0->f_104 = fVar15;
				PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 113, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 230, false);
				if (bVar0)
				{
					TASK::_TASK_MOVE_IN_TRAFFIC_2(uParam0->f_5, vVar2, 1073741824, fVar15, 4096, 0);
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(uParam0->f_5, vVar2, fVar15, -1, (0.25f * 2f), 5242885, Var16, 1193033728);
				}
			}
			break;
		case 18:
			if (!func_169(uParam0, 2106541073))
			{
				vVar20 = { func_171(func_91(), 1) };
				vVar20 = { vVar20 - ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false) };
				vVar20 = { func_176(vVar20) };
				vVar20 = { vVar20 * Vector(50f, 50f, 50f) };
				vVar20 = { vVar20 + ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false) };
				if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar20, &(vVar20.f_2), 0))
				{
					vVar20.f_2 = (vVar20.z + 99f);
					MISC::GET_GROUND_Z_FOR_3D_COORD(vVar20, &(vVar20.f_2), 0);
				}
				TASK::TASK_GO_STRAIGHT_TO_COORD(uParam0->f_5, vVar20, 2f, 20000, 1193033728, 1056964608, 0);
			}
			break;
		case 19:
			if (func_126(*uParam0) > 10000f)
			{
				fVar23 = 3f;
			}
			else if (func_126(*uParam0) > 5625f)
			{
				fVar23 = 2f;
			}
			else
			{
				fVar23 = 1f;
			}
			if (!func_169(uParam0, 713668775) || fVar23 != uParam0->f_104)
			{
				func_175(&vVar2, &uVar1);
				vVar24 = { vVar2 };
				func_177(&vVar24, 50, 10, 0);
				uParam0->f_104 = fVar23;
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_5, vVar24, fVar23, -1, 3f, 37, 40000f);
			}
			break;
		case 9:
			if (func_4(*uParam0, 35, 1))
			{
				if (!PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 414, true))
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 414, true);
				}
				PED::SET_PED_RESET_FLAG(uParam0->f_5, 52, true);
				PED::SET_PED_RESET_FLAG(uParam0->f_5, 201, true);
				PED::SET_PED_RESET_FLAG(uParam0->f_5, 228, true);
			}
			if (func_178(*uParam0) || func_169(uParam0, 1868526510))
			{
				return;
			}
			if (func_151(*uParam0))
			{
				return;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_5, true))
			{
				if (!func_169(uParam0, -828834893))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_5, 0, 0);
				}
				return;
			}
			if (func_126(*uParam0) > 2500f)
			{
				func_179(*uParam0, 1);
			}
			if (func_4(*uParam0, 35, 1))
			{
				fVar27 = 3f;
			}
			else if (((PED::IS_PED_IN_COMBAT(Global_35, 0) || PED::IS_PED_IN_COMBAT(uParam0->f_5, 0)) || func_174(PLAYER::PLAYER_ID(), 1, 0, 1)) || (ENTITY::DOES_ENTITY_EXIST(((*Global_1360165)[*uParam0 /*1157*/])->f_70) && func_180(uParam0->f_5, ((*Global_1360165)[*uParam0 /*1157*/])->f_70) > 15f))
			{
				fVar27 = 2f;
			}
			else
			{
				fVar27 = 1f;
			}
			bVar28 = ENTITY::IS_ENTITY_DEAD(((*Global_1360165)[*uParam0 /*1157*/])->f_70);
			if ((!bVar28 && (func_181(*uParam0, 1120403456 /* Float: 100f */) && !func_182(*uParam0))) || func_161(512))
			{
				func_25(uParam0, 2);
				TASK::CLEAR_PED_TASKS(func_128(*uParam0), 1, 0);
				if (!PED::_0x5102307CE88798EB(uParam0->f_5))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(uParam0->f_5);
				}
				if (!PED::IS_TRACKED_PED_VISIBLE(uParam0->f_5))
				{
					func_183(uParam0, 1, "Out of sight - quick mount horse");
				}
				PED::_0x3088634CF8C819CF(uParam0->f_5);
				if (PED::IS_PED_RAGDOLL(func_128(*uParam0)))
				{
					return;
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_128(*uParam0), true);
				if (func_184(((*Global_1360165)[*uParam0 /*1157*/])->f_70))
				{
					func_98(uParam0, 8);
				}
				TASK::TASK_MOUNT_ANIMAL(uParam0->f_5, func_128(*uParam0), -1, -1, fVar27, 1, 0, 0);
			}
			else if (!bVar28)
			{
				if (!func_157(uParam0->f_5, 1227113341))
				{
					TASK::TASK_GO_TO_ENTITY(uParam0->f_5, ((*Global_1360165)[*uParam0 /*1157*/])->f_70, 20000, 0.5f, fVar27, 2f, 0);
				}
			}
			else
			{
				if (!func_159(uParam0, 2))
				{
					func_100(uParam0, 2);
				}
				if ((func_4(*uParam0, 35, 1) && !func_174(PLAYER::PLAYER_ID(), 1, 0, 1)) || func_4(*uParam0, 62, 1))
				{
					if (!func_157(uParam0->f_5, 518218985))
					{
						TASK::_TASK_FLEE_FROM_PED(uParam0->f_5, Global_35, 0f, 0f, 0f, 200f, 20000, 0, 2f, 0);
					}
				}
				else if (((PED::IS_PED_IN_COMBAT(Global_35, 0) || PED::IS_PED_IN_COMBAT(uParam0->f_5, 0)) || func_174(PLAYER::PLAYER_ID(), 1, 0, 1)) && PED::_0x5407B7288D0478B7(Global_35, 8) > 0)
				{
					if (!func_157(uParam0->f_5, 1120685857))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, false);
						PED::REGISTER_HATED_TARGETS_AROUND_PED(uParam0->f_5, 60f);
						TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(uParam0->f_5, ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false), 60f, 0, 20);
					}
				}
				else if (!func_157(uParam0->f_5, 923520851))
				{
					TASK::TASK_WANDER_IN_AREA(uParam0->f_5, ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false), 15f, 0f, 1f, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, true);
				}
			}
			break;
		case 10:
			if (!func_161(134217728))
			{
				if (!func_85(&(uParam0->f_46)))
				{
					uParam0->f_83 = MISC::GET_RANDOM_INT_IN_RANGE(750, 3000);
					func_89(&(uParam0->f_46), 1);
				}
				if (func_72(&(uParam0->f_46)) > uParam0->f_83)
				{
					if (!func_169(uParam0, 501393341))
					{
						if (func_178(*uParam0))
						{
							if (TASK::IS_PED_STILL(uParam0->f_5))
							{
								TASK::TASK_DISMOUNT_ANIMAL(uParam0->f_5, 1, 0, 0, 0, 0);
								if (func_184(((*Global_1360165)[*uParam0 /*1157*/])->f_70))
								{
									func_185(*uParam0);
									if (!ENTITY::IS_ENTITY_DEAD(((*Global_1360165)[*uParam0 /*1157*/])->f_123))
									{
										func_186(*uParam0, ((*Global_1360165)[*uParam0 /*1157*/])->f_123, 0, 0, 1);
									}
								}
							}
							else if (!func_169(uParam0, -982327190))
							{
								TASK::TASK_STAND_STILL(uParam0->f_5, 1000);
							}
						}
					}
				}
			}
			break;
		case 11:
			if (func_156(uParam0->f_5, uParam0->f_8, 1) > 4f)
			{
				if (!func_169(uParam0, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_5, uParam0->f_8, 1f, -1, 0.25f, false, 40000f);
				}
			}
			else if (!func_169(uParam0, 501393341))
			{
				if (func_178(*uParam0))
				{
					if (TASK::IS_PED_STILL(uParam0->f_5))
					{
						TASK::TASK_DISMOUNT_ANIMAL(uParam0->f_5, 1, 0, 0, 0, 0);
					}
					else if (!func_169(uParam0, -982327190))
					{
						TASK::TASK_STAND_STILL(uParam0->f_5, 1000);
					}
				}
			}
			break;
		case 12:
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_5, PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX()), 0))
				{
					func_187(uParam0);
				}
			}
			break;
		case 16:
			if (!func_169(uParam0, -982327190))
			{
				TASK::TASK_STAND_STILL(uParam0->f_5, -1);
			}
			break;
		case 14:
			if (func_188(*uParam0))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_5, joaat("weapon_unarmed"), true, 0, false, false);
			}
			break;
		case 20:
			if (TASK::_0x841475AC96E794D1(uParam0->f_109))
			{
				if (!PED::_0x9C54041BB66BCF9E(uParam0->f_5, uParam0->f_109))
				{
					vVar29 = { func_189(uParam0->f_108) };
					if (func_156(uParam0->f_5, vVar29, 1) > 9f)
					{
						if (!func_169(uParam0, 713668775))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_5, vVar29, func_190(uParam0->f_107), -1, 0.25f, false, 40000f);
						}
					}
					else
					{
						TASK::_TASK_USE_SCENARIO_POINT(uParam0->f_5, uParam0->f_109, 0, 0, 1, 0, 0, 0, -1082130432, 0);
					}
				}
			}
			break;
		case 21:
			vVar32 = { func_189(uParam0->f_108) };
			if (func_156(uParam0->f_5, vVar32, 1) > 4f)
			{
				if (!func_169(uParam0, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_5, vVar32, 1f, -1, 0.25f, false, 40000f);
				}
			}
			else if (!func_169(uParam0, 1464580341))
			{
				vVar35 = { func_191(uParam0->f_108) };
				TASK::TASK_TURN_PED_TO_FACE_COORD(uParam0->f_5, vVar35, 1000);
			}
			break;
		case 22:
			if (!func_169(uParam0, -2015108952))
			{
				TASK::TASK_GOTO_ENTITY_OFFSET_XY(uParam0->f_5, Global_35, -1, 1f, 1f, 2f, 1f, false);
			}
			break;
		case 23:
			if (!func_169(uParam0, 1695144541))
			{
				if (!VOLUME::_DOES_VOLUME_EXIST(Global_1359489->f_62))
				{
					Global_1359489->f_62 = VOLUME::_CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0f, 0f, 0f, 15f, 15f, 15f);
				}
				TASK::TASK_COMPANION_AMBIENT(uParam0->f_5, Global_1359489->f_62);
			}
			break;
		case 26:
			if (!func_169(uParam0, joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
			{
				TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(uParam0->f_5, Global_35, 0, 0, -1082130432, -1082130432, 8, 0, 0, 1069547520, 1073741824);
			}
			break;
		case 27:
			if (!((bLocal_139 || func_157(uParam0->f_5, 1120685857)) || func_157(uParam0->f_5, 474215631)))
			{
				if (!func_4(*uParam0, 3, 1) || func_192(*uParam0))
				{
					if (func_193())
					{
						func_187(uParam0);
					}
					else if (!func_157(uParam0->f_5, 1120685857))
					{
						TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(uParam0->f_5, ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false), 300f, 0, 20);
					}
				}
				else if (!func_157(uParam0->f_5, 474215631))
				{
					TASK::TASK_COWER(uParam0->f_5, -1, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, true);
				}
			}
			break;
	}
}

void func_50(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	if (func_4(*uParam0, 66, 0))
	{
		func_12(*uParam0, 66, 0);
		uParam0->f_7 = 0;
	}
	switch (uParam0->f_7)
	{
		case 0:
			if (bLocal_140)
			{
				bLocal_140 = false;
			}
			bVar0 = func_4(*uParam0, 25, 0);
			if (func_69() != 0 && func_69() != 4)
			{
				bVar1 = func_4(*uParam0, 65, 0);
				if ((((((((*Global_1360165)[*uParam0 /*1157*/])->f_56 || bVar1) && (Global_40.f_4942[*uParam0 /*60*/])->f_59 == 0) && !bVar0) && !func_4(*uParam0, 28, 0)) && !(func_125(*uParam0) || func_4(*uParam0, 44, 1))) && func_53(*uParam0, 1, 0))
				{
					if ((((((func_194(*uParam0, 0) && uParam0->f_1 != 7) && *uParam0 != Global_1357549->f_1497) && !(func_195(180573150, 1) || func_195(-404697685, 1))) && !func_4(*uParam0, 17, 1)) && !bVar1) && !func_196(uParam0))
					{
						iVar2 = func_197(*uParam0, func_69());
					}
					else
					{
						iVar2 = func_198(*uParam0, func_69(), 1, 1);
					}
					bLocal_140 = true;
					if (func_199(iVar2) && func_66(*uParam0, iVar2))
					{
						if (iVar2 != (Global_40.f_4942[*uParam0 /*60*/])->f_3)
						{
							func_68(*uParam0, iVar2, 0);
						}
					}
				}
			}
			if (func_4(*uParam0, 8, 1) || ((*Global_1360165)[*uParam0 /*1157*/])->f_57)
			{
				if (func_67(uParam0->f_5, 256))
				{
					PED::_0xCC8CA3E88256E58F(uParam0->f_5, 0, 1, 1, 1, 0);
					func_12(*uParam0, 8, 0);
					((*Global_1360165)[*uParam0 /*1157*/])->f_57 = 0;
				}
			}
			if (((*Global_1360165)[*uParam0 /*1157*/])->f_63 != (Global_40.f_4942[*uParam0 /*60*/])->f_3 || bVar0)
			{
				uParam0->f_7 = 3;
			}
			else
			{
				((*Global_1360165)[*uParam0 /*1157*/])->f_56 = 0;
			}
			break;
		case 3:
			bVar0 = (func_4(*uParam0, 25, 0) || func_4(*uParam0, 65, 0));
			if ((bLocal_140 && !bVar0) && ((func_4(*uParam0, 28, 1) || func_125(*uParam0)) || func_4(*uParam0, 44, 1)))
			{
				func_88(&(uParam0->f_70));
				uParam0->f_7 = 0;
				bLocal_140 = false;
				return;
			}
			if (bVar0)
			{
				bVar3 = true;
			}
			if (!bVar3 && CAM::IS_SCREEN_FADED_OUT())
			{
				bVar3 = true;
			}
			if (!bVar3)
			{
				if (!func_200(uParam0->f_5, 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
				{
					iVar4 = func_201(uParam0);
					if (!func_85(&(uParam0->f_70)))
					{
						func_89(&(uParam0->f_70), 0);
					}
					else if (func_72(&(uParam0->f_70)) >= iVar4)
					{
						bVar3 = true;
					}
				}
				else if (func_85(&(uParam0->f_70)))
				{
					func_88(&(uParam0->f_70));
					bVar3 = false;
				}
			}
			if (bVar3 && !PED::_0xA0BC8FAED8CFEB3C(uParam0->f_5))
			{
				bVar3 = false;
			}
			if (bVar3)
			{
				((*Global_1360165)[*uParam0 /*1157*/])->f_63 = (Global_40.f_4942[*uParam0 /*60*/])->f_3;
				if (func_194(*uParam0, 0))
				{
					if (*uParam0 != 18)
					{
						func_202(uParam0->f_5, 0, 0);
						func_26(*uParam0, 8, 0);
					}
					func_100(uParam0, 134217728);
				}
				func_203(*uParam0, uParam0->f_5, ((*Global_1360165)[*uParam0 /*1157*/])->f_63, 0);
				func_204(uParam0);
				func_88(&(uParam0->f_70));
				func_12(*uParam0, 25, 0);
				func_12(*uParam0, 65, 0);
				uParam0->f_7 = 4;
			}
			break;
		case 4:
			((*Global_1360165)[*uParam0 /*1157*/])->f_56 = 0;
			uParam0->f_7 = 0;
			break;
	}
}

void func_51(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;

	iVar0 = PERSCHAR::_0xE4C51A8A3BD1664C(uParam0->f_6);
	func_205(*uParam0, iVar0);
	func_206(*uParam0, iVar0);
	if (((*Global_1360165)[*uParam0 /*1157*/])->f_1152 != -1)
	{
		if (func_207(((*Global_1360165)[*uParam0 /*1157*/])->f_1153))
		{
			if (func_208(func_81(), ((*Global_1360165)[*uParam0 /*1157*/])->f_1153))
			{
				((*Global_1360165)[*uParam0 /*1157*/])->f_1152 = -1;
				((*Global_1360165)[*uParam0 /*1157*/])->f_1153 = -15;
			}
			else if (iVar0 != ((*Global_1360165)[*uParam0 /*1157*/])->f_1152)
			{
				func_209(uParam0, ((*Global_1360165)[*uParam0 /*1157*/])->f_1152, ((*Global_1360165)[*uParam0 /*1157*/])->f_1153, 1);
			}
		}
		else
		{
			((*Global_1360165)[*uParam0 /*1157*/])->f_1152 = -1;
			((*Global_1360165)[*uParam0 /*1157*/])->f_1153 = -15;
		}
		return;
	}
	iVar1 = func_210(*uParam0);
	if ((Global_40.f_4942[*uParam0 /*60*/])->f_42 != -1 || (Global_40.f_4942[*uParam0 /*60*/])->f_44 != -1)
	{
		iVar3 = 0;
		while (iVar3 < 60)
		{
			if ((Global_40.f_4283.f_6[iVar3 /*5*/])->f_4 == iVar1)
			{
				iVar2 = func_211(&(Global_40.f_4283.f_6[iVar3 /*5*/]));
				if (iVar2 == (Global_40.f_4942[*uParam0 /*60*/])->f_42)
				{
					bVar4 = true;
				}
				if (iVar2 == (Global_40.f_4942[*uParam0 /*60*/])->f_44)
				{
					bVar5 = true;
				}
			}
			iVar3++;
		}
	}
	if (bVar4)
	{
		if (func_207((Global_40.f_4942[*uParam0 /*60*/])->f_43))
		{
			if (func_208(func_81(), (Global_40.f_4942[*uParam0 /*60*/])->f_43))
			{
				(Global_40.f_4942[*uParam0 /*60*/])->f_42 = -1;
				(Global_40.f_4942[*uParam0 /*60*/])->f_43 = -15;
			}
			else if (iVar0 != (Global_40.f_4942[*uParam0 /*60*/])->f_42)
			{
				func_209(uParam0, (Global_40.f_4942[*uParam0 /*60*/])->f_42, (Global_40.f_4942[*uParam0 /*60*/])->f_43, 0);
			}
		}
		else
		{
			(Global_40.f_4942[*uParam0 /*60*/])->f_42 = -1;
			(Global_40.f_4942[*uParam0 /*60*/])->f_43 = -15;
		}
		return;
	}
	else if (func_207((Global_40.f_4942[*uParam0 /*60*/])->f_43))
	{
		PERSCHAR::_0xD95D777F828B2BBB(uParam0->f_6);
		(Global_40.f_4942[*uParam0 /*60*/])->f_42 = -1;
		(Global_40.f_4942[*uParam0 /*60*/])->f_43 = -15;
	}
	if (bVar5)
	{
		if (iVar0 != (Global_40.f_4942[*uParam0 /*60*/])->f_44)
		{
			PERSCHAR::_0x8AE4EFA464DAE42D(uParam0->f_6, (Global_40.f_4942[*uParam0 /*60*/])->f_44);
		}
	}
	else
	{
		iVar6 = func_69();
		if ((((iVar0 != 0 && iVar6 != 0) && iVar6 != 6) || (iVar0 != 5 && iVar6 == 0)) || (iVar0 != 6 && iVar6 == 6))
		{
			iVar7 = 0;
			if (*uParam0 != 24 && *uParam0 != 25)
			{
				if (iVar6 == 0)
				{
					iVar7 = 5;
					if (*uParam0 == 10)
					{
						iVar7 = 7;
					}
				}
				else if (iVar6 == 6)
				{
					iVar7 = 6;
				}
			}
			(Global_40.f_4942[*uParam0 /*60*/])->f_44 = iVar7;
			PERSCHAR::_0x8AE4EFA464DAE42D(uParam0->f_6, iVar7);
		}
	}
}

void func_52(int iParam0)
{
	int iVar0;

	iVar0 = func_61(iParam0);
	if (!func_212(iVar0))
	{
		return;
	}
	if (func_4(iParam0, 17, 1))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1360165)[iParam0 /*1157*/])->f_39)))
		{
			PERSCHAR::_0x187D65F3AEC5D679(iVar0, &(((*Global_1360165)[iParam0 /*1157*/])->f_39));
		}
		else
		{
			func_12(iParam0, 17, 0);
		}
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(&((Global_40.f_4942[iParam0 /*60*/])->f_51)))
	{
		PERSCHAR::_0x187D65F3AEC5D679(iVar0, &((Global_40.f_4942[iParam0 /*60*/])->f_51));
	}
}

int func_53(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_56(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		return func_4(iParam0, 26, 1);
	}
	if (bParam2)
	{
		if (!func_67(func_112(iParam0), 0))
		{
			return 0;
		}
	}
	if (!func_213(iParam0, 1, 0))
	{
		return 0;
	}
	if (func_4(iParam0, 44, 1))
	{
		return 0;
	}
	return 1;
}

void func_54(var uParam0, var uParam1)
{
	if (func_4(*uParam0, 40, 0))
	{
		if (bLocal_141)
		{
			if (!func_21(*uParam0))
			{
				PERSCHAR::_0xD4B614179BCD0654(((*Global_1360165)[*uParam0 /*1157*/])->f_126);
			}
			func_29(*uParam0, 0);
			func_12(*uParam0, 40, 0);
		}
		else
		{
			func_214(*uParam0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, MISC::IS_BIT_SET(uParam1->f_6, 3));
		}
	}
}

void func_55(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	bool bVar11;

	if (func_215(65536))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_123))
		{
			func_31(uParam0);
		}
		return;
	}
	if (!bLocal_138)
	{
		return;
	}
	bVar0 = VOLUME::_DOES_VOLUME_EXIST(uParam0->f_123);
	bVar1 = ((uParam0->f_1 == 3 || uParam0->f_1 == 7) || (func_4(*uParam0, 45, 1) && !func_4(*uParam0, 46, 1)));
	bVar2 = PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 344, true);
	bVar3 = PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 56, true);
	bVar4 = PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 57, true);
	bVar5 = PED::_0x84D0BF2B21862059(uParam0->f_5);
	if (bVar1 && !bVar2)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 344, true);
	}
	else if (!bVar1 && bVar2)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 344, false);
	}
	if (bVar1 && !bVar3)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 56, true);
	}
	else if (!bVar1 && bVar3)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 56, false);
	}
	if (bVar1 && !bVar4)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 57, true);
	}
	else if (!bVar1 && bVar4)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 57, false);
	}
	if (bVar0)
	{
		if (bVar1)
		{
			vVar6 = { VOLUME::_0x3E2A25B2416DD67E(uParam0->f_123) };
			bVar9 = vVar6.x < (1.4f - 0.05f);
			bVar10 = (vVar6.y > (0.5f - 0.05f) && vVar6.y < (0.5f + 0.05f));
			bVar11 = PED::IS_PED_ON_MOUNT(Global_35);
			if (bVar9 && bVar11)
			{
				VOLUME::_0xA46E98BDC407E23D(uParam0->f_123, 1.4f, 1.4f, 2f);
			}
			else if (!bVar9 && !bVar11)
			{
				VOLUME::_0xA46E98BDC407E23D(uParam0->f_123, 0.2f, 0.2f, 2f);
			}
			if (bVar10 && !bVar5)
			{
				if (bVar11)
				{
					VOLUME::_0xA46E98BDC407E23D(uParam0->f_123, 1.4f, 1.4f, 2f);
				}
				else
				{
					VOLUME::_0xA46E98BDC407E23D(uParam0->f_123, 0.2f, 0.2f, 2f);
				}
			}
			else if ((!bVar10 && bVar5) && !bVar11)
			{
				VOLUME::_0xA46E98BDC407E23D(uParam0->f_123, 0.2f, 0.5f, 2f);
			}
		}
		else
		{
			func_31(uParam0);
		}
	}
	else if (bVar1)
	{
		uParam0->f_123 = VOLUME::_0x0EB78C2B156635B1(665633627, ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false), 0f, 0f, 0f, 0.2f, 0.2f, 2f);
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_123))
		{
			PED::_0x7C00CFC48A782DC0(uParam0->f_123, uParam0->f_5, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
	}
}

bool func_56(int iParam0)
{
	return iParam0 > -1;
}

void func_57(int iParam0)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return;
	}
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(((*Global_1360165)[iParam0 /*1157*/])->f_1))
	{
		iVar0 = func_61(iParam0);
		if (iVar0 != 0)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(iVar0);
			PERSCHAR::_0xFCC6DB8DBE709BC8(((*Global_1360165)[iParam0 /*1157*/])->f_1);
		}
		else
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = 0;
		}
	}
}

int func_58(int iParam0)
{
	if (!func_56(iParam0))
	{
		return 0;
	}
	return (Global_40.f_4942[iParam0 /*60*/])->f_6;
}

int func_59(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_56(iParam0))
	{
		return 0;
	}
	uVar0 = func_44(iParam0, 0);
	if (PERSCHAR::_0x800DF3FC913355F3(uVar0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_112(iParam0)) && !ENTITY::_0x88AD6CC10D8D35B2(func_112(iParam0)))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(func_112(iParam0), true, true);
		}
		PERSCHAR::_0x7B204F88F6C3D287(uVar0);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_6 != iParam1 || (Global_40.f_4942[iParam0 /*60*/])->f_3 == 0)
	{
		func_68(iParam0, func_198(iParam0, Global_40.f_4283, 1, 1), 1);
	}
	(Global_40.f_4942[iParam0 /*60*/])->f_6 = iParam1;
	PERSCHAR::_0x8BC555034A5A5E8C(func_61(iParam0), (Global_40.f_4942[iParam0 /*60*/])->f_6);
	return 1;
}

int func_60(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_61(int iParam0)
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

int func_62(int iParam0, int iParam1)
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
			iVar0 = func_216(296923297, iParam1);
			return func_217(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = func_216(1237718549, iParam1);
			return func_217(iVar0);
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

int func_63(int iParam0, bool bParam1)
{
	switch (func_218(iParam0))
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

bool func_64(int iParam0, int iParam1)
{
	return ((Global_40.f_4942[iParam0 /*60*/])->f_5 && iParam1) > 0;
}

void func_65(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!bParam2)
	{
		switch (iParam1)
		{
			case 1:
			case 4096:
			case 16384:
			case 32768:
			case 65536:
			case 131072:
			case 262144:
			case 524288:
			case 1048576:
			case 2097152:
			case 134217728:
			case 1073741824:
				func_219(iParam0);
				func_220(iParam0, 0);
				break;
		}
		func_221(iParam0, iParam1);
		if (func_222(iParam1, &iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
			{
				if (func_223(Global_1360165[iParam0 /*1157*/], iVar0))
				{
					PED::_0xA2F8B3B5FEDFC100(Global_1360165[iParam0 /*1157*/], iVar0);
				}
				PED::_0x1902C4CFCC5BE57C(Global_1360165[iParam0 /*1157*/], PED::_0x30569F348D126A5A(Global_1360165[iParam0 /*1157*/]));
				PED::_0xCC8CA3E88256E58F(Global_1360165[iParam0 /*1157*/], 0, 1, 1, 1, 0);
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
			case 4096:
			case 16384:
			case 32768:
			case 65536:
			case 131072:
			case 262144:
			case 524288:
			case 1048576:
			case 2097152:
			case 134217728:
			case 1073741824:
				func_219(iParam0);
				func_220(iParam0, 1);
				break;
		}
		func_224(iParam0, iParam1);
		func_225(iParam0, Global_1360165[iParam0 /*1157*/], 1);
	}
}

int func_66(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_114(iParam0))
	{
		return 0;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return 1;
	}
	uVar0 = func_226(iParam0, iParam1);
	return uVar0;
}

int func_67(int iParam0, int iParam1)
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
	if (func_227(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_227(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_227(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_227(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_227(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_227(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_227(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_227(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_68(int iParam0, int iParam1, bool bParam2)
{
	if (!func_114(iParam0))
	{
		return;
	}
	if (!func_66(iParam0, iParam1))
	{
		return;
	}
	(Global_40.f_4942[iParam0 /*60*/])->f_3 = iParam1;
	if (bParam2)
	{
		func_26(iParam0, 25, 1);
	}
}

int func_69()
{
	return Global_40.f_4283;
}

void func_70(var uParam0)
{
	func_228(uParam0, 0f);
}

void func_71(var uParam0)
{
	if (func_69() == 8)
	{
		func_229(uParam0, 1);
	}
	else if (func_230() >= 75f)
	{
		func_229(uParam0, 1);
	}
	else if (func_195(-625309660, 1))
	{
		if (func_230() <= 25f)
		{
			switch (*uParam0)
			{
				case 3:
				case 4:
				case 6:
				case 9:
				case 18:
				case 19:
				case 20:
					func_229(uParam0, func_231());
					break;
				default:
					func_229(uParam0, 1);
					break;
			}
		}
		else
		{
			func_229(uParam0, 1);
		}
	}
	else if (func_230() <= 25f)
	{
		func_229(uParam0, 0);
	}
	else
	{
		func_232(uParam0, 1);
		func_232(uParam0, 0);
	}
}

int func_72(var uParam0)
{
	if (!func_85(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_233(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_234() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

int func_73(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 0;
	}
	else if (func_72(&(uParam0->f_79)) > 5000)
	{
		if (CAM::IS_SCREEN_FADED_OUT() && func_72(&(uParam0->f_79)) < 10000)
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_74(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return 0;
	}
	if ((!bParam2 && !Global_1359489->f_12) || (bParam2 && Global_1359489->f_13 < 8))
	{
		if (bParam2 && bParam3)
		{
			if (!TASK::_0xF97F462779B31786(func_235(Global_40.f_4283)))
			{
				return 0;
			}
		}
		if (PERSCHAR::_0xEB98B38CA60742D7(((*Global_1360165)[iParam0 /*1157*/])->f_1))
		{
			PERSCHAR::_0x49A8C2CD97815215(((*Global_1360165)[iParam0 /*1157*/])->f_1);
		}
		iVar0 = PERSCHAR::_0x31C70A716CAE1FEE(((*Global_1360165)[iParam0 /*1157*/])->f_1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			(*Global_1360165)[iParam0 /*1157*/] = iVar0;
			Global_1359489->f_12 = 1;
		}
		else if (bParam2)
		{
			(*Global_1360165)[iParam0 /*1157*/] = PERSCHAR::_0x08FC896D2CB31FCC(((*Global_1360165)[iParam0 /*1157*/])->f_1, bParam1);
			Global_1359489->f_13++;
		}
		else
		{
			(*Global_1360165)[iParam0 /*1157*/] = PERSCHAR::_0x0CADC3A977997472(((*Global_1360165)[iParam0 /*1157*/])->f_1, bParam1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			return 0;
		}
		else
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, false);
			}
			ENTITY::_SET_ENTITY_SOMETHING(Global_1360165[iParam0 /*1157*/], true);
			PERSCHAR::_0xD4B614179BCD0654(((*Global_1360165)[iParam0 /*1157*/])->f_1);
		}
		PERSCHAR::_0x6759BEE6762E140B(((*Global_1360165)[iParam0 /*1157*/])->f_1);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_236(Global_1360165[iParam0 /*1157*/]))
		{
		}
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_75(var uParam0)
{
	bool bVar0;

	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_5))
	{
	}
	else
	{
		if (!func_125(*uParam0))
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(uParam0->f_5))
			{
				PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 171, true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_5, true, true);
			}
			POPULATION::_0xF74E134F40192884(uParam0->f_5, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_5, 1030835986);
			ENTITY::_SET_ENTITY_SOMETHING(uParam0->f_5, true);
		}
		if (*uParam0 != 12)
		{
			func_237(uParam0->f_5, 0);
		}
		else
		{
			func_237(uParam0->f_5, 2);
		}
		if (!func_4(*uParam0, 7, 1))
		{
			if (((((((((((*uParam0 == 14 || *uParam0 == 13) || *uParam0 == 21) || *uParam0 == 16) || *uParam0 == 19) || *uParam0 == 18) || *uParam0 == 17) || *uParam0 == 22) || *uParam0 == 4) || *uParam0 == 20) || *uParam0 == 15) || (*uParam0 == 11 && !func_63(((*Global_1347702)[134 /*49*/])->f_15, 1)))
			{
				func_26(*uParam0, 3, 0);
			}
		}
		if (!func_4(*uParam0, 19, 1))
		{
			func_238(*uParam0, 1056964608 /* Float: 0.5f */, -1, 1061158912 /* Float: 0.75f */);
		}
		func_12(*uParam0, 64, 1);
		switch (*uParam0)
		{
			case 14:
				AUDIO::DISABLE_PED_PAIN_AUDIO(uParam0->f_5, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_5, 17, true);
				break;
			case 11:
				if (!func_63(((*Global_1347702)[66 /*49*/])->f_15, 1))
				{
					PED::_0x24C82EF607105FAA(uParam0->f_5, joaat("avoid"));
				}
				if (!func_63(((*Global_1347702)[134 /*49*/])->f_15, 1) && !func_4(*uParam0, 7, 1))
				{
					WEAPON::_0x899A04AFCC725D04(uParam0->f_5, joaat("loadout_default"));
				}
				else
				{
					WEAPON::_0x899A04AFCC725D04(uParam0->f_5, -1426095133);
				}
				if (func_239(45))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_5, "SADIE_ADLER_ES");
				}
				break;
			case 13:
				if (func_239(45))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_5, "ABIGAIL_ES");
				}
				break;
			case 7:
				if (func_239(45))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_5, "CHARLES_SMITH_ES");
					WEAPON::_0x899A04AFCC725D04(uParam0->f_5, 1916379029);
				}
				break;
			case 4:
				if (func_239(45))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_5, "UNCLE_ES");
				}
				break;
			case 5:
				if (func_240(67))
				{
					AUDIO::_0xD47D47EFBF103FB8(uParam0->f_5, 4);
				}
				else
				{
					AUDIO::_0xD47D47EFBF103FB8(uParam0->f_5, 3);
				}
				break;
			case 10:
				if (!func_240(63))
				{
					PED::_0x24C82EF607105FAA(uParam0->f_5, -1420531594);
					WEAPON::_0x899A04AFCC725D04(uParam0->f_5, joaat("loadout_default"));
				}
				break;
			case 24:
			case 25:
				WEAPON::_0x899A04AFCC725D04(uParam0->f_5, 734484658);
				break;
			case 0:
				PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_5, 116, true);
				break;
			case 12:
				if (func_241())
				{
					PERSCHAR::_0x63AA2B8EB087886A(func_61(12), MISC::GET_HASH_KEY("COMP_RUFUS"));
				}
				else
				{
					PERSCHAR::_0x63AA2B8EB087886A(func_61(12), MISC::GET_HASH_KEY("COMP_CAIN"));
				}
				PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 523, true);
				break;
		}
		bLocal_139 = PED::IS_PED_GROUP_MEMBER(uParam0->f_5, func_37(), 1);
		PED::_0xE9E06EA514A69061(uParam0->f_5, -2012327723);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_5, true);
	}
	if (*uParam0 == 12)
	{
		func_26(*uParam0, 5, 0);
	}
	func_242(*uParam0);
	func_243(*uParam0, ((*Global_1360165)[*uParam0 /*1157*/])->f_138, ((*Global_1360165)[*uParam0 /*1157*/])->f_139, 1);
	if (uParam0->f_1 == 11)
	{
		uParam0->f_99 = MISC::GET_GAME_TIMER();
	}
	if (*uParam0 < 6)
	{
		uParam0->f_15 = 0;
	}
	else if (*uParam0 < 12)
	{
		uParam0->f_15 = 1;
	}
	else if (*uParam0 < 17)
	{
		uParam0->f_15 = 2;
	}
	else
	{
		uParam0->f_15 = 3;
	}
	bVar0 = func_69() == 6;
	func_244(uParam0, bVar0);
	((*Global_1360165)[*uParam0 /*1157*/])->f_134 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false), Global_36);
	func_245(uParam0);
	func_89(&(uParam0->f_12), 0);
	((*Global_1360165)[*uParam0 /*1157*/])->f_70.f_14.f_12 = 1;
	func_12(*uParam0, 22, 0);
	func_12(*uParam0, 65, 0);
	((*Global_1360165)[*uParam0 /*1157*/])->f_70.f_12 = 0;
	PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 343, true);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 515, true);
	func_246(*uParam0, func_4(*uParam0, 60, 1), func_4(*uParam0, 61, 1), 1);
}

void func_76(var uParam0)
{
	if (func_159(uParam0, 65536))
	{
		if (bLocal_139)
		{
			if (!func_161(2048))
			{
				func_247(*uParam0);
			}
		}
	}
	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 414, true))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 414, false);
	}
	func_2(uParam0, 6);
}

void func_77(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, false);
	}
	func_246(*uParam0, 1, 0, 1);
	if (!bLocal_139)
	{
		func_187(uParam0);
	}
	func_2(uParam0, 11);
}

int func_78(var uParam0)
{
	if (Global_1357549->f_1497 == *uParam0)
	{
		return 0;
	}
	if (func_90(uParam0->f_5))
	{
		return 0;
	}
	if (TASK::GET_IS_TASK_ACTIVE(uParam0->f_5, 7))
	{
		return 0;
	}
	if (func_126(*uParam0) > 10000f)
	{
		return 0;
	}
	return 1;
}

void func_79(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, false);
	}
	func_246(*uParam0, 1, 0, 1);
	func_88(&(uParam0->f_34));
	uParam0->f_98 = -1;
	if (func_4(*uParam0, 35, 1) && !func_4(*uParam0, 62, 1))
	{
		func_98(uParam0, 536870912);
		func_248(uParam0);
		func_249(*uParam0, 1);
		if (!PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 414, true))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 414, true);
		}
	}
	func_2(uParam0, 12);
}

void func_80(var uParam0, bool bParam1)
{
	func_11(*uParam0);
	if (bParam1)
	{
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uParam0->f_5, -1))
		{
			func_183(uParam0, 0, "Move to available");
		}
	}
	func_250(*uParam0, 1, 1, 0);
	if (func_4(*uParam0, 64, 1))
	{
		func_26(*uParam0, 52, 1);
		func_26(*uParam0, 51, 1);
		func_12(*uParam0, 64, 1);
	}
	func_251(*uParam0);
	if (bLocal_138)
	{
		TASK::_0xDF94844D474F31E5(uParam0->f_5);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, false);
		PED::SET_PED_KEEP_TASK(uParam0->f_5, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 230, false);
		PED::_0x935CF6E42BAF7F4D(uParam0->f_5);
		PED::_0x58F7DB5BD8FA2288(uParam0->f_5);
	}
	func_246(*uParam0, 1, 1, 1);
	func_252(uParam0, uParam0->f_102 == 17);
	func_170(uParam0, 25);
	func_2(uParam0, 3);
}

int func_81()
{
	return &Global_1899515;
}

bool func_82(int iParam0, int iParam1)
{
	return iParam0 > iParam1;
}

int func_83(var uParam0, bool bParam1)
{
	if (Global_1357549->f_1614 && func_253(*uParam0, 0))
	{
		if (((*Global_1360165)[*uParam0 /*1157*/])->f_134 < 10000f && !func_254(2, 0))
		{
			return 1;
		}
	}
	if (func_255())
	{
		return 0;
	}
	if (func_87(Global_35, 0))
	{
		return 0;
	}
	if ((!Global_1935630->f_24 && PED::_0x5407B7288D0478B7(Global_35, 8) <= 0) || PED::_0x5407B7288D0478B7(Global_35, 268435456) > 0)
	{
		return 0;
	}
	if (PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((func_4(*uParam0, 35, 1) && !func_174(PLAYER::PLAYER_ID(), 0, 0, 1)) || func_4(*uParam0, 62, 1))
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_126(*uParam0) > 900f)
		{
			return 0;
		}
		if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uParam0->f_5, Global_35, 17))
		{
			return 0;
		}
	}
	if (func_85(&(uParam0->f_67)))
	{
		if (func_86(&(uParam0->f_67)) < 10f)
		{
			return 0;
		}
		else
		{
			func_88(&(uParam0->f_67));
		}
	}
	return 1;
}

void func_84(var uParam0)
{
	if (func_93(uParam0->f_5, func_92(func_91()), 1, 0))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_5, 1, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_5, 3, true);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, false);
	PED::_0x8B1E8E35A6E814EA(uParam0->f_5, 2097011006, -1082130432);
	func_246(*uParam0, 1, 0, 1);
	func_98(uParam0, 1073741824 /* Float: 2f */);
	func_170(uParam0, 27);
	func_2(uParam0, 23);
}

bool func_85(var uParam0)
{
	return func_256(*uParam0, 1);
}

float func_86(var uParam0)
{
	if (!func_85(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_233(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_257() - uParam0->f_1);
}

int func_87(int iParam0, bool bParam1)
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

void func_88(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_89(var uParam0, bool bParam1)
{
	if (bParam1 || !func_85(uParam0))
	{
		func_70(uParam0);
	}
}

int func_90(int iParam0)
{
	vector3 vVar0;
	float fVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	vVar0 = { func_258(func_69()) };
	fVar3 = func_259();
	if (func_260(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), vVar0, fVar3, 0))
	{
		return 1;
	}
	return 0;
}

int func_91()
{
	return Global_40.f_4283.f_1;
}

int func_92(int iParam0)
{
	if (!func_261(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_3;
}

bool func_93(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

int func_94(int iParam0, bool bParam1, bool bParam2)
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
		if (func_262())
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
		iVar0 = func_263(&(Global_1898164->f_1[0 /*5*/]));
		if (func_264(iVar0) && func_265(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_266(&(Global_1898164->f_1[0 /*5*/])))
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

bool func_95(var uParam0, int iParam1)
{
	return (uParam0->f_3 && iParam1) != 0;
}

bool func_96()
{
	return func_267(32768);
}

bool func_97(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

void func_98(var uParam0, int iParam1)
{
	uParam0->f_3 = (uParam0->f_3 || iParam1);
}

void func_99(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_114(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

void func_100(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_101(var uParam0)
{
	if (func_268() == 105)
	{
		if (*uParam0 == 0 || *uParam0 == 3)
		{
			if (func_270(func_269(17)) || func_271())
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_102(var uParam0)
{
	func_246(*uParam0, 1, 0, 1);
	func_2(uParam0, 7);
}

void func_103(var uParam0)
{
	var uVar0;

	if (iLocal_143 != func_69())
	{
		iLocal_143 = func_69();
		func_272(*uParam0, &uVar0, 60);
	}
}

void func_104(var uParam0)
{
	uParam0->f_98 = -1;
	func_25(uParam0, 8192);
	func_12(*uParam0, 35, 1);
	func_12(*uParam0, 62, 1);
	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 414, true))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 414, false);
	}
	func_2(uParam0, 2);
}

float func_105(var uParam0)
{
	if (!func_85(uParam0))
	{
		return 0f;
	}
	if (func_233(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_257() - uParam0->f_1);
}

int func_106(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	var uVar0;
	int iVar5[4];

	if (func_60(vParam0))
	{
		return 0;
	}
	uVar0 = 4;
	iVar5[0] = 16384;
	iVar5[1] = iParam4;
	return VOLUME::_0x51E52C9687FCDEEC(vParam0, fParam3, &uVar0, &iVar5, iParam5);
}

void func_107(var uParam0)
{
	if (!func_159(uParam0, 2048))
	{
		if (func_273(uParam0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5))
			{
				uParam0->f_107 = func_274(uParam0->f_120);
				func_275(uParam0->f_5, uParam0->f_120);
				func_100(uParam0, 2048);
				func_100(uParam0, 131072);
			}
		}
	}
	if (func_159(uParam0, 2048))
	{
		func_276(uParam0);
	}
	else if (func_159(uParam0, 4096))
	{
		func_277(uParam0);
	}
}

void func_108(var uParam0)
{
	bool bVar0;
	bool bVar1;

	if (!bLocal_138)
	{
		return;
	}
	if (func_278(uParam0) || (!func_178(*uParam0) && func_90(uParam0->f_5)))
	{
		if (func_188(*uParam0))
		{
			func_170(uParam0, 14);
		}
		else if (bLocal_139)
		{
			func_77(uParam0);
		}
		else if (func_178(*uParam0))
		{
			func_170(uParam0, 10);
		}
		else
		{
			POPULATION::_0xF74E134F40192884(uParam0->f_5, 1);
			func_104(uParam0);
		}
	}
	else
	{
		if (func_83(uParam0, 1))
		{
			if (func_4(*uParam0, 3, 1))
			{
				func_26(*uParam0, 35, 0);
				func_26(*uParam0, 62, 0);
			}
			else
			{
				func_84(uParam0);
				return;
			}
		}
		bVar0 = func_4(*uParam0, 35, 1);
		if (!bVar0)
		{
			if (func_279(uParam0))
			{
				func_26(*uParam0, 35, 0);
				func_26(*uParam0, 62, 0);
				bVar0 = true;
			}
		}
		if (!func_157(uParam0->f_5, -1665583462))
		{
			bVar1 = false;
			if (!func_280(uParam0->f_5))
			{
				if (!func_178(*uParam0))
				{
					if (!ENTITY::IS_ENTITY_IN_WATER(uParam0->f_5))
					{
						if (!func_281(uParam0->f_5))
						{
							bVar1 = true;
						}
					}
				}
			}
			if (bVar1)
			{
				if (((func_69() == 4 || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(uParam0->f_5) != 0) || (ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_5, func_92(5), true, 0) && !bLocal_141)) || BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false), func_258(func_69())) < ((func_259() * func_259()) + 25f))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (bVar0)
				{
					if (!func_181(*uParam0, 400f) || func_182(*uParam0))
					{
						bVar1 = false;
					}
				}
			}
			if (!func_157(uParam0->f_5, 713668775) && !func_157(uParam0->f_5, -1665583462))
			{
				if ((!bVar1 || !func_282(uParam0)) || func_4(*uParam0, 6, 1))
				{
					if (func_85(&(uParam0->f_34)))
					{
						func_88(&(uParam0->f_34));
					}
					func_170(uParam0, 17);
					func_247(*uParam0);
				}
				else
				{
					if (!func_85(&(uParam0->f_34)))
					{
						func_89(&(uParam0->f_34), 1);
					}
					if (func_72(&(uParam0->f_34)) < 120000)
					{
						func_170(uParam0, 9);
						func_247(*uParam0);
					}
					else
					{
						func_283(*uParam0);
						func_170(uParam0, 17);
					}
				}
			}
		}
	}
}

void func_109(var uParam0)
{
	bool bVar0;

	if (!PED::IS_PED_ON_FOOT(Global_35))
	{
		return;
	}
	bVar0 = false;
	if (uParam0->f_120 > -1)
	{
		if (func_284(uParam0->f_108))
		{
			bVar0 = true;
		}
		else if (func_285(uParam0->f_5, uParam0->f_120))
		{
			func_286(uParam0->f_108, uParam0->f_120, uParam0->f_5);
		}
	}
	else
	{
		bVar0 = func_284(uParam0->f_108);
	}
	if (bVar0)
	{
		if (func_178(*uParam0))
		{
			if (func_287(uParam0->f_120) == 1)
			{
				func_170(uParam0, 21);
			}
			else
			{
				if (func_60(uParam0->f_8))
				{
					if (func_159(uParam0, 131072))
					{
						uParam0->f_8 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false) };
						func_25(uParam0, 131072);
					}
					else
					{
						uParam0->f_8 = { func_288(uParam0->f_108) };
					}
				}
				func_170(uParam0, 11);
			}
		}
		else
		{
			if (uParam0->f_109 == 0)
			{
				uParam0->f_109 = func_289(uParam0->f_108);
			}
			func_170(uParam0, 20);
		}
	}
	else
	{
		func_170(uParam0, 12);
	}
	if (func_126(*uParam0) > uParam0->f_114)
	{
		func_25(uParam0, 2048);
	}
	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		func_25(uParam0, 2048);
	}
	if (!func_159(uParam0, 2048))
	{
		func_183(uParam0, 0, "Leaving watch mode...");
		func_290(uParam0);
	}
}

void func_110(var uParam0)
{
	if (!PED::IS_PED_ON_FOOT(Global_35))
	{
		return;
	}
	if (func_178(*uParam0))
	{
		func_170(uParam0, 10);
	}
	else
	{
		func_170(uParam0, 2);
	}
	if (!TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(uParam0->f_105) || func_126(*uParam0) > uParam0->f_114)
	{
		func_25(uParam0, 4096);
	}
	if (!func_159(uParam0, 4096))
	{
		func_290(uParam0);
	}
}

int func_111(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_112(int iParam0)
{
	if (!func_56(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_113(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		func_291(iParam1);
	}
}

int func_114(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

bool func_115(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_116(var uParam0, int iParam1, bool bParam2)
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

int func_117(int iParam0)
{
	if (!func_56(iParam0))
	{
		return 0;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1360165)[iParam0 /*1157*/])->f_2))
	{
		return 1;
	}
	return 0;
}

int func_118(int iParam0)
{
	int iVar0;

	if (!func_56(iParam0))
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

void func_119(var uParam0)
{
	uParam0->f_3 = 0;
}

void func_120(var uParam0)
{
	uParam0->f_4 = 0;
}

int func_121(var uParam0)
{
	return uParam0;
}

void func_122(int iParam0)
{
	if (!func_292(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_DELETE(((*Global_1945938)[iParam0 /*18*/])->f_3);
	}
	((*Global_1945938)[iParam0 /*18*/])->f_4 = 0;
	(*Global_1945938)[iParam0 /*18*/] = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = 0f;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_2 = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_15 = -1f;
}

void func_123(int iParam0)
{
	int iVar0;
	struct<15> Var1;

	if (!func_114(iParam0))
	{
		return;
	}
	if (!func_18(iParam0, 0))
	{
	}
	func_247(iParam0);
	Global_1359489->f_15 = func_293(1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == iParam0)
		{
			(*Global_1359489)[iVar0] = -1;
		}
		iVar0++;
	}
	func_294();
	func_12(iParam0, 32, 1);
	if (func_67(Global_1360165[iParam0 /*1157*/], 0))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
		PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[iParam0 /*1157*/], 83, false);
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 152, false);
		Var1 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
		Var1.f_12 = 8;
		Var1.f_3 = Global_1360165[iParam0 /*1157*/];
		Var1.f_7 = func_268();
		Var1.f_8 = 0;
		Var1.f_11 = 10;
		Var1.f_14 = Global_1360165[iParam0 /*1157*/];
		MISC::_0x88BC5F4AEF77FC4E(&Var1, 17);
	}
}

bool func_124(int iParam0)
{
	return func_4(iParam0, 32, 1);
}

bool func_125(int iParam0)
{
	return func_6(iParam0, 16, 1);
}

float func_126(int iParam0)
{
	if (!func_56(iParam0))
	{
		return 0f;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_134;
}

void func_127(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;

	if (!func_114(iParam0))
	{
		return;
	}
	if (func_125(iParam0))
	{
		if (!func_295(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_4(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	uVar0 = func_44(iParam0, 0);
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(uVar0))
	{
		return;
	}
	iVar1 = func_112(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_126(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
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
		func_26(iParam0, 2, 1);
	}
	else
	{
		func_5(iParam0);
		func_26(iParam0, 1, 1);
	}
}

int func_128(int iParam0)
{
	if (!func_114(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(((*Global_1360165)[iParam0 /*1157*/])->f_70))
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70 = 0;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70;
}

bool func_129(int iParam0)
{
	if (!func_56(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

float func_130(int iParam0, int iParam1, bool bParam2)
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
	return func_296(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

int func_131(int iParam0, bool bParam1)
{
	if (!func_56(iParam0))
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
		((*Global_1360165)[iParam0 /*1157*/])->f_127 = func_297(iParam0);
		return ((*Global_1360165)[iParam0 /*1157*/])->f_127;
	}
	return 0;
}

void func_132(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_128(iParam0);
	if (!PED::_0xA911EE21EDF69DAF(iVar0))
	{
		return;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = 0;
	while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar1))
	{
		iVar3 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar1));
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

int func_133(int iParam0, bool bParam1)
{
	if (!func_56(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_126) && bParam1)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_126 = func_298(iParam0);
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_126;
}

bool func_134(int iParam0)
{
	return iParam0 != 0;
}

int func_135(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	*bParam3 = 0;
	*iParam2 = 0;
	if (func_299(iParam0, iParam1))
	{
		*bParam3 = 1;
	}
	if (func_300(iParam0, iParam1, iParam2))
	{
		return 1;
	}
	*iParam2 = -1;
	return *bParam3;
}

void func_136(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_112(iParam0);
	if ((func_67(iVar0, 0) && func_301(iParam0, *uParam1)) && PED::_0x7C8AA850617651D9(iVar0, *uParam1))
	{
		func_302(iParam0, *uParam1);
	}
	if ((!func_67(iVar0, 0) || !func_301(iParam0, *uParam1)) || !PED::_0x7C8AA850617651D9(iVar0, *uParam1))
	{
		func_303(uParam1);
	}
}

void func_137(int iParam0, int iParam1)
{
	int iVar0;

	func_136(iParam0, (Global_40.f_4942[iParam0 /*60*/])->f_11[iParam1 /*3*/]);
	if (func_134(&((Global_40.f_4942[iParam0 /*60*/])->f_11[iParam1 /*3*/])))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < iParam1)
		{
		}
		else if (iVar0 < 9 && func_134(&((Global_40.f_4942[iParam0 /*60*/])->f_11[iVar0 + 1 /*3*/])))
		{
			(Global_40.f_4942[iParam0 /*60*/])->f_11[iVar0 /*3*/] = &(Global_40.f_4942[iParam0 /*60*/])->f_11[iVar0 + 1 /*3*/];
			((Global_40.f_4942[iParam0 /*60*/])->f_11[iVar0 /*3*/])->f_1 = ((Global_40.f_4942[iParam0 /*60*/])->f_11[iVar0 + 1 /*3*/])->f_1;
			((Global_40.f_4942[iParam0 /*60*/])->f_11[iVar0 /*3*/])->f_2 = ((Global_40.f_4942[iParam0 /*60*/])->f_11[iVar0 + 1 /*3*/])->f_2;
			func_305(iParam0, iVar0, func_304(iParam0, iVar0 + 1));
			func_303((Global_40.f_4942[iParam0 /*60*/])->f_11[iVar0 + 1 /*3*/]);
			func_305(iParam0, iVar0 + 1, 0);
		}
		iVar0++;
	}
}

int func_138(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("weapon_unarmed");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

bool func_139(int iParam0)
{
	return func_306(iParam0) == joaat("weapon");
}

bool func_140(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

int func_141(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
	}
	iVar0 = func_91();
	if (func_261(iVar0))
	{
		iVar1 = func_92(iVar0);
		if (VOLUME::_DOES_VOLUME_EXIST(iVar1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam0))
			{
				if (VOLUME::_0xF256A75210C5C0EB(iVar1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_142(var uParam0)
{
	if (uParam0->f_1 != 6 && !func_161(8388608))
	{
		if (PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 503, true))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 503, false);
		}
	}
	if (func_161(8388608) && !PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 503, true))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 503, true);
	}
	if (func_307(-1))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 184, true);
	}
	if (((*Global_1360165)[*uParam0 /*1157*/])->f_1152 == 3)
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 333, true);
	}
	if (func_207(Global_40.f_6563.f_475))
	{
		if (func_308(Global_40.f_6563.f_475, 1))
		{
			Global_40.f_6563.f_475 = -15;
		}
		else
		{
			PED::_0x633F83B301C87994(uParam0->f_5, 131);
		}
	}
	if (uParam0->f_1 == 6 || func_126(*uParam0) < 625f)
	{
		func_309(uParam0);
		func_310(uParam0);
	}
	if (func_144(*uParam0, 32))
	{
		if (!func_159(uParam0, 1073741824 /* Float: 2f */))
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_ENTER")))
			{
				if ((((func_156(((*Global_1360165)[*uParam0 /*1157*/])->f_70, Global_36, 1) < 4f && func_311(Global_35, ((*Global_1360165)[*uParam0 /*1157*/])->f_70, 0)) && func_156(func_312(7), Global_36, 1) > 4f) && PED::_0xB676EFDA03DADA52(((*Global_1360165)[*uParam0 /*1157*/])->f_70, 1) == 0) && !PED::IS_PED_ON_MOUNT(Global_35))
				{
					func_314(40, MISC::GET_HASH_KEY(func_313(*uParam0, 0)), 1);
					func_100(uParam0, 1073741824 /* Float: 2f */);
				}
			}
		}
	}
	if (func_315(*uParam0))
	{
		if (func_316(*uParam0))
		{
			if (!func_157(((*Global_1360165)[*uParam0 /*1157*/])->f_70, 1041577989))
			{
				TASK::TASK_HORSE_ACTION(((*Global_1360165)[*uParam0 /*1157*/])->f_70, 2, 0, 0);
			}
			func_318(38, MISC::GET_HASH_KEY(func_317(*uParam0, 0)), MISC::GET_HASH_KEY(func_313(*uParam0, 0)), 1);
		}
		else if (!func_159(uParam0, 536870912))
		{
			func_318(39, MISC::GET_HASH_KEY(func_317(*uParam0, 0)), MISC::GET_HASH_KEY(func_313(*uParam0, 0)), 1);
			func_100(uParam0, 536870912);
		}
	}
}

int func_143(int iParam0)
{
	switch (iParam0)
	{
		case -2142529325:
		case joaat("w_melee_hatchet04"):
		case joaat("w_repeater_carbine01"):
		case joaat("w_melee_tomahawk02"):
		case -1834001788:
		case -1802018696:
		case joaat("w_melee_hatchet05"):
		case -1592082932:
		case -1591740247:
		case -1536033271:
		case joaat("w_melee_knife17"):
		case joaat("w_melee_hatchet02"):
		case joaat("w_melee_hatchet03"):
		case joaat("w_revolver_schofield01"):
		case joaat("w_melee_lasso01"):
		case joaat("w_shotgun_repeating01"):
		case joaat("w_repeater_winchester01"):
		case joaat("w_melee_tomahawk01"):
		case joaat("w_pistol_mauser01"):
		case joaat("w_revolver_cattleman01"):
		case joaat("w_melee_knife16"):
		case joaat("w_shotgun_semiauto01"):
		case -568397134:
		case joaat("w_melee_knife03"):
		case joaat("w_melee_brokenSword01"):
		case joaat("w_shotgun_pumpaction01"):
		case joaat("w_melee_knife01"):
		case joaat("w_melee_knife02"):
		case -76469242:
		case joaat("w_pistol_volcanic01"):
		case 185650329:
		case joaat("w_pistol_semiauto01"):
		case joaat("w_rifle_boltaction01"):
		case joaat("w_melee_knife18"):
		case joaat("w_revolver_doubleaction06"):
		case 824186723:
		case joaat("w_rifle_carcano01"):
		case 977804853:
		case joaat("w_repeater_pumpaction01"):
		case 1092466526:
		case joaat("w_revolver_schofield03"):
		case joaat("w_revolver_cattleman02"):
		case joaat("w_rifle_rollingblock01"):
		case 1407608723:
		case joaat("w_revolver_schofield04"):
		case 1491733169:
		case joaat("w_melee_hatchet06"):
		case joaat("w_melee_knife05"):
		case joaat("w_repeater_henry01"):
		case joaat("w_revolver_cattleman03"):
		case joaat("w_revolver_doubleaction02"):
		case 1713603249:
		case joaat("w_shotgun_doublebarrel01"):
		case joaat("w_melee_knife14"):
		case joaat("w_melee_hatchet07"):
		case 1970348364:
		case joaat("w_revolver_doubleaction01"):
		case 2055515007:
		case joaat("w_rifle_springfield01"):
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_144(int iParam0, int iParam1)
{
	if (!func_56(iParam0))
	{
		return false;
	}
	return (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 && iParam1) != 0;
}

void func_145(var uParam0)
{
	func_9(*uParam0, 2, bLocal_139);
	func_319(*uParam0);
}

float func_146()
{
	int iVar0;

	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iVar0 < 4 || iVar0 > 19)
	{
		return 0.8f;
	}
	else if (iVar0 > 17)
	{
		return 0.7f;
	}
	else if (iVar0 > 12)
	{
		return 0.5f;
	}
	return 0.3f;
}

void func_147(int iParam0, float fParam1)
{
	int iVar0;

	if (!func_114(iParam0))
	{
		return;
	}
	iVar0 = func_112(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	PED::_0x406CCF555B04FAD3(iVar0, 1, fParam1);
}

void func_148(int iParam0)
{
	int iVar0;

	if (!func_114(iParam0))
	{
		return;
	}
	iVar0 = func_112(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	PED::_0x406CCF555B04FAD3(iVar0, 0, 0f);
}

int func_149(var uParam0)
{
	if (DECORATOR::DECOR_EXIST_ON(uParam0->f_5, "companion_manager_command"))
	{
		return DECORATOR::DECOR_GET_INT(uParam0->f_5, "companion_manager_command");
	}
	return 0;
}

void func_150(var uParam0)
{
	if (DECORATOR::DECOR_EXIST_ON(uParam0->f_5, "companion_manager_command"))
	{
		DECORATOR::DECOR_REMOVE(uParam0->f_5, "companion_manager_command");
	}
}

bool func_151(int iParam0)
{
	return func_4(iParam0, 5, 1);
}

int func_152(var uParam0)
{
	if (DECORATOR::DECOR_EXIST_ON(uParam0->f_5, "companion_manager_watch_mode"))
	{
		return DECORATOR::DECOR_GET_INT(uParam0->f_5, "companion_manager_watch_mode");
	}
	return -1;
}

void func_153(var uParam0)
{
	DECORATOR::DECOR_REMOVE(uParam0->f_5, "companion_manager_watch_mode");
}

int func_154(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 6:
			*uParam1 = { 2368.145f, 1339.411f, 105.2073f };
			*uParam2 = 0f;
			break;
		case 0:
			*uParam1 = { -1347.354f, 2415.999f, 306.1693f };
			*uParam2 = 0f;
			break;
		case 2:
			*uParam1 = { 676.0986f, -1223.26f, 44.8735f };
			*uParam2 = 186f;
			break;
		case 1:
			*uParam1 = { -113.3444f, -16.16381f, 94.90366f };
			*uParam2 = 0f;
			break;
		case 3:
			*uParam1 = { 1855.146f, -1834.112f, 42.1034f };
			*uParam2 = 0f;
			break;
		case 7:
			*uParam1 = { -2591.77f, 465.7827f, 146.256f };
			*uParam2 = 0f;
			break;
		case 8:
			*uParam1 = { -1595.7f, -1414.78f, 83.7f };
			*uParam2 = 0f;
			break;
		case 5:
			*uParam1 = { 2278.67f, -751.0582f, 40.9953f };
			*uParam2 = 0f;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_155(var uParam0)
{
	if (func_144(*uParam0, 1024))
	{
		return 1;
	}
	return 0;
}

float func_156(int iParam0, vector3 vParam1, bool bParam4)
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
	return func_296(vVar0, vParam1);
}

int func_157(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_158(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_112(iParam0);
	if (bParam1)
	{
		if (func_67(iVar0, 0))
		{
			return 0;
		}
	}
	if (PED::GET_PED_CONFIG_FLAG(iVar0, 156, true))
	{
		return 1;
	}
	return 0;
}

bool func_159(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

int func_160(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (!func_56(iParam0))
	{
		return 0;
	}
	if (func_144(iParam0, 128))
	{
		func_283(iParam0);
		func_30(iParam0, 128, 0);
	}
	iVar0 = func_128(iParam0);
	switch (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_13)
	{
		case 2:
			if (func_4(iParam0, 42, 1))
			{
				func_12(iParam0, 42, 1);
				bVar1 = false;
				bVar2 = func_182(iParam0);
				if (func_67(iVar0, 0))
				{
					bVar1 = true;
				}
				if (bVar1)
				{
					if (!bVar2)
					{
						vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
						vVar6 = { ENTITY::GET_ENTITY_COORDS(Global_1360165[iParam0 /*1157*/], true, false) };
						fVar9 = BUILTIN::VDIST2(vVar3, vVar6);
						if (fVar9 < (8f * 8f))
						{
							return 1;
						}
						else if (fVar9 > 2500f)
						{
							((*Global_1360165)[iParam0 /*1157*/])->f_70.f_13 = 6;
						}
						else
						{
							((*Global_1360165)[iParam0 /*1157*/])->f_70.f_13 = 7;
						}
					}
					else if (PED::_0xB676EFDA03DADA52(iVar0, 0) == Global_35)
					{
						if (!func_184(iVar0))
						{
							((*Global_1360165)[iParam0 /*1157*/])->f_123 = iVar0;
						}
						if (ENTITY::DOES_ENTITY_EXIST(func_312(7)))
						{
							func_320(iParam0, func_312(7), 0, 0);
						}
						else
						{
							func_185(iParam0);
							func_26(iParam0, 40, 1);
							((*Global_1360165)[iParam0 /*1157*/])->f_70.f_13 = 4;
						}
					}
					else
					{
						func_26(iParam0, 40, 1);
						((*Global_1360165)[iParam0 /*1157*/])->f_70.f_13 = 4;
					}
				}
				else
				{
					func_26(iParam0, 40, 1);
					((*Global_1360165)[iParam0 /*1157*/])->f_70.f_13 = 4;
				}
			}
			break;
		case 4:
			if (func_67(iVar0, 0))
			{
				func_30(iParam0, 64, 1);
				((*Global_1360165)[iParam0 /*1157*/])->f_70.f_13 = 6;
			}
			else
			{
				iVar0 = func_214(iParam0, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				((*Global_1360165)[iParam0 /*1157*/])->f_70.f_14.f_12 = 1;
				if (func_321(&(((*Global_1360165)[iParam0 /*1157*/])->f_70.f_14), Global_36, ((*Global_1900383)[0 /*45*/])->f_38, 0, 1065353216 /* Float: 1f */))
				{
					ENTITY::SET_ENTITY_COORDS(iVar0, ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_14.f_3.f_3, true, false, true, true);
					ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
					((*Global_1360165)[iParam0 /*1157*/])->f_70.f_13 = 7;
				}
				else if (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_14.f_1)
				{
					((*Global_1360165)[iParam0 /*1157*/])->f_70.f_13 = 2;
				}
			}
			else
			{
				((*Global_1360165)[iParam0 /*1157*/])->f_70.f_13 = 2;
			}
			break;
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
				TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
				if (!func_181(iParam0, 1120403456 /* Float: 100f */))
				{
					TASK::TASK_GO_TO_WHISTLE(iVar0, Global_1360165[iParam0 /*1157*/], 0);
					((*Global_1360165)[iParam0 /*1157*/])->f_70.f_13 = 8;
				}
			}
			else
			{
				((*Global_1360165)[iParam0 /*1157*/])->f_70.f_13 = 2;
			}
			break;
		case 8:
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (func_181(iParam0, 1120403456 /* Float: 100f */))
				{
					TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
					((*Global_1360165)[iParam0 /*1157*/])->f_70.f_13 = 2;
					return 1;
				}
				else if (!func_157(iVar0, 2043986356))
				{
					((*Global_1360165)[iParam0 /*1157*/])->f_70.f_13 = 2;
				}
			}
			else
			{
				((*Global_1360165)[iParam0 /*1157*/])->f_70.f_13 = 2;
			}
			break;
	}
	return 0;
}

bool func_161(int iParam0)
{
	return (Global_1359489->f_16 && iParam0) != 0;
}

void func_162(int iParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;

	if (!func_114(iParam0))
	{
		return;
	}
	if (func_281(func_112(iParam0)))
	{
		return;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_13 == 2 && !func_4(iParam0, 42, 1))
	{
		fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.2f, (0.4f * IntToFloat(func_293(1))));
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((fVar0 + 0.5f), (fVar0 + (1.5f * IntToFloat(func_293(1)))));
		if (!func_157(func_112(iParam0), 242628503))
		{
			func_168(iParam0, 0, "triggering horse whistle");
			TASK::OPEN_SEQUENCE_TASK(&iVar2);
			func_322(0, 869278708, 1971704925);
			TASK::CLOSE_SEQUENCE_TASK(iVar2);
			TASK::_TASK_PERFORM_SEQUENCE_2(func_112(iParam0), iVar2, fVar0, fVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar2);
		}
		func_26(iParam0, 42, 1);
	}
}

char* func_163()
{
	int iVar0;
	char* sVar1;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	switch (iVar0)
	{
		case 0:
			sVar1 = "COMPANION_FIGHT_EARLY_FLEE";
			break;
		case 1:
			sVar1 = "WHATS_YOUR_PROBLEM";
			break;
		case 2:
			sVar1 = "COMPANION_FIGHT_EARLY_REACTION";
			break;
		default:
			sVar1 = "COMPANION_FIGHT_EARLY_CALLOUT";
			break;
	}
	return sVar1;
}

bool func_164(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_323(uParam0, &Var0);
}

void func_165(var uParam0, int iParam1)
{
	uParam0->f_3 = (uParam0->f_3 - (uParam0->f_3 && iParam1));
}

char* func_166()
{
	int iVar0;
	char* sVar1;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	switch (iVar0)
	{
		case 0:
			sVar1 = "ALLY_TAUNT_ENEMY";
			break;
		case 1:
			sVar1 = "GENERIC_CURSE_HIGH";
			break;
		case 2:
			sVar1 = "ALLY_UNDER_FIRE_NEAR";
			break;
		default:
			sVar1 = "GENERIC_CURSE_MED";
			break;
	}
	return sVar1;
}

bool func_167(int iParam0)
{
	return func_4(iParam0, 33, 1);
}

void func_168(int iParam0, bool bParam1, char* sParam2)
{
	int iVar0;

	iVar0 = func_112(iParam0);
	if (!func_114(iParam0) || ENTITY::IS_ENTITY_DEAD(iVar0))
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

int func_169(var uParam0, int iParam1)
{
	if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_5, iParam1, 1) == 1)
	{
		return 1;
	}
	return 0;
}

void func_170(var uParam0, int iParam1)
{
	if (iParam1 == uParam0->f_102)
	{
		return;
	}
	uParam0->f_102 = iParam1;
}

Vector3 func_171(int iParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { 0f, 0f, 0f };
	if (!func_261(iParam0))
	{
		return vVar0;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(((*Global_1888801)[iParam0 /*35*/])->f_3))
	{
		vVar0 = { VOLUME::_0xF70F00013A62F866(((*Global_1888801)[iParam0 /*35*/])->f_3) };
		if (bParam1)
		{
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, 0))
			{
				vVar0.f_2 = uVar3;
			}
		}
	}
	return vVar0;
}

Vector3 func_172(int iParam0)
{
	vector3 vVar0;
	var uVar3;

	func_175(&vVar0, &uVar3);
	return vVar0 + func_324(iParam0);
}

int func_173(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((ANIMSCENE::_0x25557E324489393C(&(Global_43805[iVar0 /*6*/])) && ANIMSCENE::_0xCBFC7725DE6CE2E0(&(Global_43805[iVar0 /*6*/]), 0)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam0, &(Global_43805[iVar0 /*6*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_174(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_325(bParam1, bParam2, bParam3);
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

int func_175(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_91();
	switch (iVar0)
	{
		case 43:
			*uParam0 = { -1340.417f, 2447.74f, 307.6064f };
			*uParam1 = 69.2479f;
			break;
		case 71:
			*uParam0 = { -112.9493f, -14.3514f, 94.8418f };
			*uParam1 = 78.7552f;
			break;
		case 98:
			*uParam0 = { 676.6314f, -1223.84f, 43.8567f };
			*uParam1 = 174.642f;
			break;
		case 9:
			*uParam0 = { 1853.359f, -1835.935f, 42.0656f };
			*uParam1 = 25.3398f;
			break;
		case 4:
			*uParam0 = { 2279.679f, -753.1292f, 40.9928f };
			*uParam1 = 65.2774f;
			break;
		case 79:
			*uParam0 = { 2370.169f, 1336.931f, 105.273f };
			*uParam1 = 302.1729f;
			break;
		case 22:
			*uParam0 = { -2590.198f, 465.025f, 145.1573f };
			*uParam1 = 77.3385f;
			break;
		case 37:
			*uParam0 = { -1644.85f, -1376.873f, 82.9681f };
			*uParam1 = 340.856f;
			break;
		case 58:
			*uParam0 = { func_258(4) };
			*uParam1 = 0f;
			break;
		default:
			return 0;
	}
	return 1;
}

Vector3 func_176(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

int func_177(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_326(*uParam0, 0f, 0f, 0f))
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

int func_178(int iParam0)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return 0;
	}
	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_179(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_114(iParam0))
	{
		return;
	}
	iVar0 = func_128(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]) && ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (bParam1)
			{
				if (func_200(Global_1360165[iParam0 /*1157*/], 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
				{
					return;
				}
				else if (func_200(iVar0, 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
				{
					return;
				}
			}
			if (func_182(iParam0))
			{
				return;
			}
			func_168(iParam0, 0, "force companion onto horse");
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, 0, 1);
			ENTITY::SET_ENTITY_COORDS(iVar0, ENTITY::GET_ENTITY_COORDS(Global_1360165[iParam0 /*1157*/], true, false), true, false, true, true);
			PED::_SET_PED_ON_MOUNT(Global_1360165[iParam0 /*1157*/], iVar0, -1, true);
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
			TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
		}
	}
}

float func_180(int iParam0, int iParam1)
{
	return func_327(iParam0, iParam1, 1, 1);
}

int func_181(int iParam0, float fParam1)
{
	float fVar0;

	if (!func_56(iParam0))
	{
		return 0;
	}
	if (func_67(func_128(iParam0), 0))
	{
		fVar0 = func_130(Global_1360165[iParam0 /*1157*/], func_128(iParam0), 1);
		if (fVar0 < fParam1)
		{
			return 1;
		}
		if (func_328(func_128(iParam0)) && fVar0 < 625f)
		{
			return 1;
		}
	}
	return 0;
}

int func_182(int iParam0)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return 0;
	}
	if (func_67(func_128(iParam0), 0))
	{
		iVar0 = PED::_0xB676EFDA03DADA52(func_128(iParam0), 0);
		if (iVar0 != 0 && iVar0 != Global_1360165[iParam0 /*1157*/])
		{
			return 1;
		}
	}
	return 0;
}

void func_183(var uParam0, bool bParam1, char* sParam2)
{
	uParam0->f_103 = uParam0->f_102;
	func_170(uParam0, 0);
	func_168(*uParam0, bParam1, sParam2);
}

int func_184(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_329(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return 1;
}

void func_185(int iParam0)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return;
	}
	iVar0 = func_128(iParam0);
	if ((func_67(iVar0, 0) && !func_184(iVar0)) && !func_6(iParam0, 32768, 1))
	{
		PED::_0xBCC76708E5677E1D(iVar0, 0);
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70 = 0;
}

int func_186(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	if (!func_56(iParam0))
	{
	}
	bVar0 = false;
	if (func_330(iParam1) == iParam0)
	{
	}
	else
	{
		func_320(iParam0, iParam1, bParam3, 0);
		bVar0 = true;
	}
	if (bParam2)
	{
		if (!func_21(iParam0))
		{
			if (!func_331(iParam0, bParam4, 1, 0, 0, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	if (!bVar0)
	{
		func_332(iParam1, iParam0);
	}
	return 1;
}

void func_187(var uParam0)
{
	func_333(*uParam0, 0);
	bLocal_139 = true;
}

int func_188(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_56(iParam0))
	{
		return 0;
	}
	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar1, true, 0, false))
			{
				if ((iVar1 != 1549070292 && iVar1 != 1030402560) && iVar1 != joaat("weapon_unarmed"))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_189(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return 0f, 0f, 0f;
	}
	if (&Global_1359489->f_63[iParam0 /*24*/] == 0)
	{
		return 0f, 0f, 0f;
	}
	return (Global_1359489->f_63[iParam0 /*24*/])->f_4;
}

float func_190(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 1f;
		case 2:
			return 2f;
	}
	return 1f;
}

Vector3 func_191(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return 0f, 0f, 0f;
	}
	if (&Global_1359489->f_63[iParam0 /*24*/] == 0)
	{
		return 0f, 0f, 0f;
	}
	return (Global_1359489->f_63[iParam0 /*24*/])->f_7;
}

bool func_192(int iParam0)
{
	return ((iParam0 == Global_1357549->f_1497 && Global_1357549->f_1497.f_5 >= 4) && Global_1357549->f_1497.f_5 < 11);
}

bool func_193()
{
	return func_293(1) < 3;
}

bool func_194(int iParam0, bool bParam1)
{
	if (!func_56(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_125(iParam0) || func_4(iParam0, 44, 1))
		{
			return false;
		}
	}
	return MISC::ARE_STRINGS_EQUAL(&(((*Global_1360165)[iParam0 /*1157*/])->f_48), "Sleep");
}

int func_195(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_334(iParam0);
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

int func_196(var uParam0)
{
	switch (*uParam0)
	{
		case 7:
			if (func_63(((*Global_1835011)[43 /*74*/])->f_1, 1) && !func_63(((*Global_1835011)[59 /*74*/])->f_1, 1))
			{
				return 1;
			}
			break;
		case 4:
			if (func_195(-328226663, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_197(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 13:
		case 14:
			if (iParam1 == 7 || iParam1 == 8)
			{
				return -1205468859;
			}
			return -445211559;
		case 0:
		case 1:
		case 2:
		case 7:
		case 8:
		case 9:
		case 10:
		case 15:
		case 16:
		case 17:
		case 19:
		case 20:
		case 21:
		case 22:
			return -445211559;
		case 3:
		case 4:
		case 18:
			return 1744281750;
		case 11:
			return -946772361;
		default:
			break;
	}
	return 0;
}

int func_198(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;

	if (!func_56(iParam0))
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
					if (func_63(((*Global_1835011)[4 /*74*/])->f_1, 1))
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
					if (func_335(iVar0, 9, 11))
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
					if (func_63(((*Global_1347702)[63 /*49*/])->f_15, 1) || func_336(((*Global_1347702)[63 /*49*/])->f_15))
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
					if (func_335(iVar0, 9, 12))
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
					if (!func_63(((*Global_1835011)[14 /*74*/])->f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_6(18, 134217728, 1))
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
					Jump @2241; //curOff = 1410
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					Jump @2241; //curOff = 1456
					if (func_335(iVar0, 9, 11))
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
					Jump @2241; //curOff = 1543
					iVar1[0] = -922193456;
					Jump @2241; //curOff = 1556
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					Jump @2241; //curOff = 1592
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					Jump @2241; //curOff = 1638
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					Jump @2241; //curOff = 1684
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					Jump @2241; //curOff = 1730
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar1[4] = 1744281750;
					iVar7 = 5;
					Jump @2241; //curOff = 1786
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					Jump @2241; //curOff = 1812
					if (func_63(((*Global_1347702)[134 /*49*/])->f_15, 1) || func_336(((*Global_1347702)[134 /*49*/])->f_15))
					{
						iVar1[0] = -2040275819;
						iVar1[1] = 1205492208;
						iVar7 = 2;
					}
					else
					{
						iVar1[0] = -922193456;
					}
					Jump @2241; //curOff = 1889
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					Jump @2241; //curOff = 1935
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					Jump @2241; //curOff = 1961
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					Jump @2241; //curOff = 1997
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					Jump @2241; //curOff = 2023
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					Jump @2241; //curOff = 2049
					iVar1[0] = -922193456;
					Jump @2241; //curOff = 2062
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					Jump @2241; //curOff = 2088
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					Jump @2241; //curOff = 2114
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					Jump @2241; //curOff = 2140
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					Jump @2241; //curOff = 2176
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					Jump @2241; //curOff = 2212
					iVar1[0] = -268604689;
					Jump @2241; //curOff = 2225
					iVar1[0] = -922193456;
					Jump @3416; //curOff = 2241
					switch (iParam0)
					{
						case 2:
							if (func_63(((*Global_1835011)[38 /*74*/])->f_1, 1))
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
					Jump @3416; //curOff = 2315
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
							if (func_335(iVar0, 9, 11))
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
					Jump @3416; //curOff = 3088
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
							if (func_195(747937920, 1) && !func_63(((*Global_1347702)[1 /*49*/])->f_15, 1))
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
					Jump @3416; //curOff = 3251
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
					if (bParam3 && ENTITY::DOES_ENTITY_EXIST(func_112(iParam0)))
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
					if (!func_66(iParam0, iVar8))
					{
						iVar8 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
					}
					return iVar8;
				}

int func_199(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_200(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_337(iParam0, Global_36, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return 1;
		}
	}
	if (fVar0 < fParam1)
	{
		if (PED::_0x5102307CE88798EB(iParam0))
		{
			if (fParam4 > 0f)
			{
				if (PED::_0x164CECC59E70DF86(iParam0, fParam4))
				{
					return 1;
				}
			}
			else if (PED::IS_TRACKED_PED_VISIBLE(iParam0))
			{
				return 1;
			}
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_201(var uParam0)
{
	float fVar0;
	float fVar1;

	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_5, 0) || !uParam0->f_11)
	{
		fVar0 = 12500f;
	}
	else
	{
		fVar0 = 7500f;
	}
	fVar1 = BUILTIN::SQRT(func_337(uParam0->f_5, Global_36, 1));
	fVar0 = (fVar0 / fVar1);
	return BUILTIN::ROUND(fVar0);
}

void func_202(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!PED::_0xFB4891BD7578CDC1(iParam0, -1725579161))
		{
			PED::_0x1902C4CFCC5BE57C(iParam0, 622113465);
			bVar0 = true;
		}
	}
	else if (PED::_0xFB4891BD7578CDC1(iParam0, -1725579161))
	{
		PED::_0xD710A5007C2AC539(iParam0, -1725579161, 1);
		bVar0 = true;
	}
	if (bParam2)
	{
		if (bVar0)
		{
			PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
		}
	}
}

void func_203(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (func_199(iParam2))
		{
			iVar0 = func_62(iParam2, -1);
			if (func_223(iParam1, iVar0))
			{
				if (func_338(iParam1, iVar0))
				{
					if (func_339(iParam1, iVar0))
					{
						PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_340(iParam1);
					}
				}
				else
				{
					PED::_0x1902C4CFCC5BE57C(iParam1, iVar0);
				}
			}
		}
		func_225(iParam0, iParam1, 0);
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
			func_26(iParam0, 66, 0);
		}
	}
}

void func_204(var uParam0)
{
	switch (*uParam0)
	{
		case 7:
			if ((Global_40.f_4942[*uParam0 /*60*/])->f_3 == -1341683964 || (Global_40.f_4942[*uParam0 /*60*/])->f_3 == 1484386316)
			{
				func_65(*uParam0, 8388608, 1);
			}
			break;
		case 14:
			if ((Global_40.f_4942[*uParam0 /*60*/])->f_3 == -1341683964)
			{
				func_65(*uParam0, 16777216, 1);
			}
			else if ((Global_40.f_4942[*uParam0 /*60*/])->f_3 == 1484386316 || (Global_40.f_4942[*uParam0 /*60*/])->f_3 == 1254970547)
			{
				func_65(*uParam0, 16777216, 0);
				func_225(*uParam0, uParam0->f_5, 1);
				PED::_0xA2F8B3B5FEDFC100(Global_1360165[*uParam0 /*1157*/], 622113465);
			}
			break;
		case 4:
			if (func_239(45))
			{
				if (func_195(-328226663, 1))
				{
					func_65(*uParam0, 8192, 1);
				}
				else
				{
					func_65(*uParam0, 8192, 0);
					func_225(*uParam0, uParam0->f_5, 1);
					PED::_0xA2F8B3B5FEDFC100(Global_1360165[*uParam0 /*1157*/], 1544915253);
				}
				if ((Global_40.f_4942[*uParam0 /*60*/])->f_3 == -1341683964 || (Global_40.f_4942[*uParam0 /*60*/])->f_3 == 867156718)
				{
					func_65(*uParam0, 67108864, 1);
				}
				else
				{
					func_65(*uParam0, 67108864, 0);
					func_225(*uParam0, uParam0->f_5, 1);
					PED::_0xA2F8B3B5FEDFC100(Global_1360165[*uParam0 /*1157*/], -271415321);
				}
			}
			break;
	}
}

void func_205(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;

	if (iParam1 == 4 && !(func_195(180573150, 1) || func_195(-404697685, 1)))
	{
		iVar0 = CLOCK::GET_CLOCK_HOURS();
		iVar1 = CLOCK::GET_CLOCK_MINUTES();
		if ((iVar0 >= 22 || iVar0 < 5) || (iVar0 == 5 && iVar1 <= 59))
		{
			iVar2 = func_81();
			if (iVar0 >= 22)
			{
				func_341(&iVar2, 0, 0, 0, 1, 0, 0, 1);
			}
			func_342(&iVar2, 6);
			func_343(&iVar2, 0);
			func_344(iVar2, &uVar3, &iVar4, &iVar5, &uVar6, &uVar7, &uVar8);
			if (iVar4 > 0 || iVar5 > 0)
			{
				func_345(iParam0, 0, iVar4, iVar5, 0, 0, 1);
			}
		}
	}
}

void func_206(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	if (iParam1 == 6 || iParam1 == 5)
	{
		iVar0 = func_69();
		iVar1 = func_346(iParam0);
		bVar2 = false;
		bVar3 = false;
		if (iVar0 != 6 && iParam1 == 6)
		{
			if (iVar1 == 6)
			{
				bVar3 = true;
			}
			bVar2 = true;
		}
		else if (iVar0 != 0 && iParam1 == 5)
		{
			if (iVar1 == 5)
			{
				bVar3 = true;
			}
			bVar2 = true;
		}
		if (bVar2)
		{
			func_345(iParam0, 0, 0, 0, 0, bVar3, 0);
		}
	}
}

bool func_207(int iParam0)
{
	return iParam0 != -15;
}

bool func_208(int iParam0, int iParam1)
{
	if (!func_347(iParam1) || !func_347(iParam0))
	{
		return true;
	}
	return iParam0 >= iParam1;
}

void func_209(var uParam0, var uParam1, int iParam2, int iParam3)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;

	func_348(&Global_1899515, iParam2, &uVar0, &uVar1, &uVar2, &iVar3, &uVar4, &uVar5);
	iVar6 = func_349(iParam2);
	iVar7 = func_350(iParam2);
	if ((iVar6 == func_349(&Global_1899515) && iVar7 == func_350(&Global_1899515)) && iVar3 == 0)
	{
		return;
	}
	PERSCHAR::_0xA4DCB3F0DD7488BD(uParam0->f_6, uParam1, iVar7, iVar6, iVar3);
}

int func_210(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 13;
		case 1:
			return 14;
		case 2:
			return 15;
		case 3:
			return 16;
		case 4:
			return 17;
		case 5:
			return 18;
		case 6:
			return 19;
		case 7:
			return 20;
		case 8:
			return 21;
		case 9:
			return 22;
		case 10:
			return 23;
		case 11:
			return 24;
		case 13:
			return 25;
		case 14:
			return 26;
		case 15:
			return 27;
		case 16:
			return 28;
		case 17:
			return 29;
		case 18:
			return 30;
		case 19:
			return 31;
		case 20:
			return 32;
		case 21:
			return 33;
		case 22:
			return 34;
		case 23:
			return 35;
		default:
			break;
	}
	return -1;
}

int func_211(int iParam0)
{
	switch (iParam0)
	{
		case -2093199573:
		case -1667151809:
		case -1564254711:
		case -1557856056:
		case -1036305792:
		case -916887991:
		case -825056768:
		case -646454939:
		case -308211771:
		case -302690754:
		case -94582539:
		case 291150162:
		case 532176461:
		case 853563984:
		case 951777606:
		case 1297331434:
		case 1335382896:
		case 1365311568:
		case 1427678219:
		case 1707661169:
		case 1914552023:
		case 2011368334:
		case 2045388447:
			return 1;
		case -1804466187:
		case -1719149624:
		case -1675752723:
		case -860304527:
		case -833577856:
		case -807680461:
		case -619139736:
		case -449489613:
		case -435161770:
		case -426458298:
		case -222982511:
		case -144509608:
		case -134086241:
		case -125979788:
		case 315283201:
		case 693884302:
		case 737744809:
		case 953460136:
		case 1314347520:
		case 1344986053:
		case 1402899606:
		case 1773135364:
		case 2080199877:
			return 2;
		case -1981702243:
		case -1671819791:
		case -1466029365:
		case -1377327596:
		case -1316284753:
		case -1061765120:
		case -908082222:
		case -554271718:
		case -413943699:
		case -123719783:
		case -58963831:
		case 61425283:
		case 139790602:
		case 217189690:
		case 290238735:
		case 411591903:
		case 525567468:
		case 553023190:
		case 579829077:
		case 1176450045:
		case 1188734721:
		case 1467569385:
		case 2011168490:
			return 3;
		case -2122981486:
		case -1935893216:
		case -1888506091:
		case -1827461037:
		case -1827211287:
		case -1812183035:
		case -1557862414:
		case -1299405763:
		case -1032742879:
		case -872824399:
		case -820146008:
		case -779264865:
		case -710247698:
		case -697342513:
		case -423162607:
		case 70047950:
		case 720937389:
		case 960236560:
		case 1176031365:
		case 1292421672:
		case 1338855384:
		case 1524405765:
		case 1723031480:
			return 4;
		case -2023813568:
		case -1897704131:
		case -1827011525:
		case -1596446207:
		case -813365276:
		case -807112425:
		case -693094356:
		case -625171987:
		case 220165734:
		case 400034151:
		case 408875702:
		case 727456822:
		case 1025198797:
		case 1059753202:
		case 1080053708:
		case 1092859156:
		case 1296800590:
		case 1406459015:
		case 1549419655:
		case 1621135203:
		case 1701503387:
		case 1756182884:
		case 1784248599:
		case 1945593927:
			return 5;
		case -2063047758:
		case -2038346064:
		case -1728071186:
		case -1425653701:
		case -1383535454:
		case -890266811:
		case -527348304:
		case -121904458:
		case 16938930:
		case 65871884:
		case 299577191:
		case 490619049:
		case 679257961:
		case 685466172:
		case 1300783988:
		case 1410684624:
		case 1448617333:
		case 1566844391:
		case 1578693170:
		case 1759111208:
		case 1791780428:
		case 1890596065:
		case 1955664182:
		case 1978339427:
			return 6;
		case -2098336883:
			return 7;
		default:
			break;
	}
	return 0;
}

bool func_212(int iParam0)
{
	return iParam0 != 0;
}

int func_213(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_56(iParam0))
	{
		return 0;
	}
	if (func_6(iParam0, 32, 1))
	{
		return 0;
	}
	if (!func_6(iParam0, 2, 1))
	{
		return 0;
	}
	if (!func_6(iParam0, 4, 1))
	{
		return 0;
	}
	if (func_4(iParam0, 33, 1))
	{
		return 0;
	}
	if (func_125(iParam0))
	{
		return 0;
	}
	if (func_351(iParam0))
	{
		if (!bParam2)
		{
			return 0;
		}
	}
	if (!bParam1)
	{
		if (Global_1357549->f_1497 == iParam0)
		{
			return 0;
		}
	}
	return 1;
}

int func_214(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	var uVar0;
	int iVar1;

	if (!func_56(iParam0))
	{
		return 0;
	}
	iVar1 = func_352(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, iParam12, bParam13, bParam14, bParam15, bParam6, bParam16);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && PED::_0xA0BC8FAED8CFEB3C(iVar1))
		{
			return iVar1;
		}
	}
	else
	{
		return iVar1;
	}
	return 0;
}

int func_215(int iParam0)
{
	switch (func_353())
	{
		case -1:
			return (Global_1357549->f_1495 && iParam0) != 0;
	}
	return 0;
}

int func_216(int iParam0, int iParam1)
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
		if (func_66(iParam1, iVar1))
		{
			iVar2 = iVar1;
		}
	}
	return iVar2;
}

int func_217(int iParam0)
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

int func_218(int iParam0)
{
	if (!func_266(iParam0))
	{
		return -1;
	}
	return func_354(iParam0);
}

void func_219(int iParam0)
{
	func_221(iParam0, 1);
	func_221(iParam0, 128);
	func_221(iParam0, 256);
	func_221(iParam0, 512);
	func_221(iParam0, 1024);
	func_221(iParam0, 2048);
	func_221(iParam0, 4096);
	func_221(iParam0, 65536);
	func_221(iParam0, 16384);
	func_221(iParam0, 262144);
	func_221(iParam0, 524288);
	func_221(iParam0, 1048576);
	func_221(iParam0, 2097152);
	func_221(iParam0, 32768);
	func_221(iParam0, 131072);
	func_221(iParam0, 134217728);
	func_221(iParam0, 1073741824 /* Float: 2f */);
}

void func_220(int iParam0, bool bParam1)
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

void func_221(int iParam0, int iParam1)
{
	(Global_40.f_4942[iParam0 /*60*/])->f_5 = ((Global_40.f_4942[iParam0 /*60*/])->f_5 - ((Global_40.f_4942[iParam0 /*60*/])->f_5 && iParam1));
}

int func_222(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			*iParam1 = 860729266;
			return 1;
		case 128:
			*iParam1 = 1606325429;
			return 1;
		case 256:
			*iParam1 = 1743550585;
			return 1;
		case 512:
			*iParam1 = 1064646155;
			return 1;
		case 1024:
			*iParam1 = -536694793;
			return 1;
		case 2048:
			*iParam1 = -1304053509;
			return 1;
		case 4096:
			*iParam1 = 879715242;
			return 1;
		case 65536:
			*iParam1 = -972364774;
			return 1;
		case 16384:
			*iParam1 = -1100875244;
			return 1;
		case 262144:
			*iParam1 = 1153596794;
			return 1;
		case 524288:
			*iParam1 = 1016389820;
			return 1;
		case 1048576:
			*iParam1 = -726966617;
			return 1;
		case 2097152:
			*iParam1 = 1365901568;
			return 1;
		case 32768:
			*iParam1 = -1658942149;
			return 1;
		case 131072:
			*iParam1 = -1980913856;
			return 1;
		case 134217728:
			*iParam1 = -1683207356;
			return 1;
		case 1073741824:
			*iParam1 = -1712783565;
			return 1;
	}
	return 0;
}

bool func_223(int iParam0, int iParam1)
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

void func_224(int iParam0, int iParam1)
{
	(Global_40.f_4942[iParam0 /*60*/])->f_5 = ((Global_40.f_4942[iParam0 /*60*/])->f_5 || iParam1);
}

void func_225(int iParam0, int iParam1, bool bParam2)
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
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1 > 0 && func_223(iParam1, 860729266))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 860729266);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 4096 > 0 && func_223(iParam1, 879715242))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 879715242);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 128 > 0 && func_223(iParam1, 1606325429))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1606325429);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 256 > 0 && func_223(iParam1, 1743550585))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1743550585);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 512 > 0 && func_223(iParam1, 1064646155))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1064646155);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1024 > 0 && func_223(iParam1, -536694793))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -536694793);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 2048 > 0 && func_223(iParam1, -1304053509))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1304053509);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & -2147483648 > 0 && func_223(iParam1, 718939204))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 718939204);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 65536 > 0 && func_223(iParam1, -972364774))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -972364774);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 16384 > 0 && func_223(iParam1, -1100875244))
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
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 262144 > 0 && func_223(iParam1, 1153596794))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1153596794);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 524288 > 0 && func_223(iParam1, 1016389820))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1016389820);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1048576 > 0 && func_223(iParam1, -726966617))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -726966617);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 2097152 > 0 && func_223(iParam1, 1365901568))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1365901568);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 32768 > 0 && func_223(iParam1, -1658942149))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1658942149);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 131072 > 0 && func_223(iParam1, -1980913856))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1980913856);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 4194304 > 0 && func_223(iParam1, 491764525))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 491764525);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 8388608 > 0 && func_223(iParam1, -76015264))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -76015264);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 16777216 > 0 && func_223(iParam1, 622113465))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 622113465);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 33554432 > 0 && func_223(iParam1, 781533162))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 781533162);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 67108864 > 0 && func_223(iParam1, -271415321))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -271415321);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 134217728 > 0 && func_223(iParam1, -1683207356))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1683207356);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 268435456 > 0 && func_223(iParam1, -254794762))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -254794762);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 536870912 > 0 && func_223(iParam1, 609066278))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 609066278);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1073741824 > 0 && func_223(iParam1, -1712783565))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, -1712783565);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 8192 > 0 && func_223(iParam1, 1544915253))
	{
		PED::_0x1902C4CFCC5BE57C(iParam1, 1544915253);
	}
	if (bParam2)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_57 = 1;
	}
}

bool func_226(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_56(iParam0))
	{
		return false;
	}
	func_355(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_65[iVar0]), iVar1);
}

bool func_227(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_228(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_257() - fParam1);
	func_356(uParam0, 1);
	func_357(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_229(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_358(*uParam0, 387830046, 0, 0);
		func_359(uParam0, 2);
		func_232(uParam0, 0);
	}
	else
	{
		func_358(*uParam0, 2060950072, 0, 0);
		func_359(uParam0, 1);
		func_232(uParam0, 1);
	}
}

float func_230()
{
	return Global_1357549->f_1900;
}

int func_231()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

void func_232(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_32(*uParam0, 387830046);
		func_360(uParam0, 2);
	}
	else
	{
		func_32(*uParam0, 2060950072);
		func_360(uParam0, 1);
	}
}

bool func_233(var uParam0)
{
	return func_256(*uParam0, 2);
}

int func_234()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_235(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return -1092196885;
		case 6:
			return 837806200;
		case 0:
			return 1670677840;
		case 2:
			return -945092648;
		case 1:
			return -437500449;
		case 4:
			return -1701309802;
		case 3:
			return -1644068043;
		case 7:
			return -1904006265;
		case 8:
			return 1047384062;
		default:
			break;
	}
	return 0;
}

int func_236(int iParam0)
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

int func_237(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 146, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 263, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 168, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 179, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 186, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 265, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 171, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 137, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 229, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 259, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 48, true);
	switch (iParam1)
	{
		case 0:
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
			PED::SET_PED_CONFIG_FLAG(iParam0, 321, true);
			break;
		case 1:
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, 1030835986);
			PED::SET_PED_CONFIG_FLAG(iParam0, 40, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 152, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 154, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 25, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 166, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 87, true);
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, 1030835986);
			EVENT::SET_DECISION_MAKER(iParam0, -969305494);
			break;
	}
	return 1;
}

void func_238(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_114(iParam0))
	{
		iVar1 = func_112(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179, true);
			func_361(iParam0);
		}
	}
	if (func_4(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_112(iParam0), 137, true);
	}
}

int func_239(int iParam0)
{
	if (!func_362(iParam0))
	{
		return 0;
	}
	return func_363(iParam0);
}

int func_240(int iParam0)
{
	if (func_353() != -1)
	{
		return 0;
	}
	if (!func_264(iParam0))
	{
		return 0;
	}
	return func_63(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

int func_241()
{
	if (func_353() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

void func_242(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;

	vVar0 = { (Global_40.f_4942[iParam0 /*60*/])->f_8 };
	if (func_134(vVar0.x))
	{
		iVar3 = vVar0.y;
		if (iVar3 != -15 && func_47(iVar3))
		{
			func_32(iParam0, vVar0.x);
		}
		else if (vVar0.z)
		{
		}
		else if (func_364(iParam0, vVar0.x))
		{
		}
	}
	iVar4 = 0;
	while (iVar4 < 10)
	{
		vVar0 = { *((Global_40.f_4942[iParam0 /*60*/])->f_11[iVar4 /*3*/]) };
		if (func_134(vVar0.x))
		{
			iVar5 = vVar0.y;
			if (iVar5 != -15 && func_47(iVar5))
			{
				func_32(iParam0, vVar0.x);
			}
			else if (vVar0.z)
			{
			}
			else if (func_364(iParam0, vVar0.x))
			{
			}
		}
		iVar4++;
	}
}

void func_243(int iParam0, var uParam1, float fParam2, bool bParam3)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return;
	}
	iVar0 = func_112(iParam0);
	if (!func_67(iVar0, 0))
	{
		return;
	}
	PED::_0x85F500F4E24CA43E(iVar0, uParam1);
	if (bParam3)
	{
		PED::_0x9B9B9FA0EA283E3D(iVar0, uParam1);
	}
	PED::_0xEC60D1D225BC50AA(iVar0, fParam2);
}

void func_244(var uParam0, bool bParam1)
{
	switch (*uParam0)
	{
		case 20:
			MISC::_0x0358B8A41916C613(joaat("karen"), -1203013871, 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("karen"), 45077879, 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("karen"), -1203013871, 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("karen"), 45077879, 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("karen"), 667145698, 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("karen"), 2133893358, 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("karen"), -167493447, 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("karen"), joaat("joe"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("karen"), -551211202, 2, bParam1);
			break;
		case 13:
			MISC::_0x0358B8A41916C613(joaat("abigail"), 667145698, 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("abigail"), -167493447, 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("abigail"), joaat("joe"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("abigail"), -551211202, 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("abigail"), -1203013871, 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("abigail"), joaat("joe"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("abigail"), 667145698, 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("abigail"), -167493447, 1, bParam1);
			break;
		case 7:
			MISC::_0x0358B8A41916C613(-1552727033, 667145698, 2, bParam1);
			MISC::_0x0358B8A41916C613(-1552727033, -167493447, 2, bParam1);
			MISC::_0x0358B8A41916C613(-1552727033, joaat("joe"), 2, bParam1);
			MISC::_0x0358B8A41916C613(-1552727033, -551211202, 2, bParam1);
			MISC::_0x0358B8A41916C613(-1552727033, joaat("joe"), 1, bParam1);
			MISC::_0x0358B8A41916C613(-1552727033, 667145698, 1, bParam1);
			MISC::_0x0358B8A41916C613(-1552727033, -167493447, 1, bParam1);
			break;
		case 0:
			MISC::_0x0358B8A41916C613(2133893358, joaat("abigail"), 2, bParam1);
			MISC::_0x0358B8A41916C613(2133893358, -676452144, 2, bParam1);
			break;
		case 19:
			MISC::_0x0358B8A41916C613(45077879, joaat("karen"), 2, bParam1);
			MISC::_0x0358B8A41916C613(45077879, joaat("karen"), 1, bParam1);
			break;
		case 14:
			MISC::_0x0358B8A41916C613(joaat("jack"), joaat("joe"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("jack"), -167493447, 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("jack"), joaat("joe"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("jack"), -167493447, 1, bParam1);
			break;
		case 2:
			MISC::_0x0358B8A41916C613(-1203013871, joaat("abigail"), 2, bParam1);
			MISC::_0x0358B8A41916C613(-1203013871, -676452144, 2, bParam1);
			MISC::_0x0358B8A41916C613(-1203013871, 1837691326, 2, bParam1);
			MISC::_0x0358B8A41916C613(-1203013871, joaat("jack"), 2, bParam1);
			MISC::_0x0358B8A41916C613(-1203013871, -1552727033, 2, bParam1);
			MISC::_0x0358B8A41916C613(-1203013871, joaat("abigail"), 1, bParam1);
			break;
		case 1:
			MISC::_0x0358B8A41916C613(-676452144, 667145698, 2, bParam1);
			MISC::_0x0358B8A41916C613(-676452144, -167493447, 2, bParam1);
			MISC::_0x0358B8A41916C613(-676452144, joaat("joe"), 2, bParam1);
			MISC::_0x0358B8A41916C613(-676452144, -551211202, 2, bParam1);
			MISC::_0x0358B8A41916C613(-676452144, 2133893358, 2, bParam1);
			MISC::_0x0358B8A41916C613(-676452144, 2133893358, 1, bParam1);
			MISC::_0x0358B8A41916C613(-676452144, 667145698, 1, bParam1);
			MISC::_0x0358B8A41916C613(-676452144, -551211202, 1, bParam1);
			break;
		case 15:
			MISC::_0x0358B8A41916C613(-874566010, -167493447, 2, bParam1);
			MISC::_0x0358B8A41916C613(-874566010, 667145698, 2, bParam1);
			MISC::_0x0358B8A41916C613(-874566010, joaat("joe"), 2, bParam1);
			MISC::_0x0358B8A41916C613(-874566010, -167493447, 1, bParam1);
			MISC::_0x0358B8A41916C613(-874566010, 667145698, 1, bParam1);
			MISC::_0x0358B8A41916C613(-874566010, joaat("joe"), 1, bParam1);
			break;
		case 11:
			MISC::_0x0358B8A41916C613(1837691326, -167493447, 2, bParam1);
			MISC::_0x0358B8A41916C613(1837691326, 667145698, 2, bParam1);
			MISC::_0x0358B8A41916C613(1837691326, joaat("joe"), 2, bParam1);
			MISC::_0x0358B8A41916C613(1837691326, -167493447, 1, bParam1);
			MISC::_0x0358B8A41916C613(1837691326, 667145698, 1, bParam1);
			MISC::_0x0358B8A41916C613(1837691326, joaat("joe"), 1, bParam1);
			MISC::_0x0358B8A41916C613(1837691326, -551211202, 1, bParam1);
			break;
		case 22:
			MISC::_0x0358B8A41916C613(-1147716223, -167493447, 2, bParam1);
			MISC::_0x0358B8A41916C613(-1147716223, 667145698, 2, bParam1);
			MISC::_0x0358B8A41916C613(-1147716223, joaat("joe"), 2, bParam1);
			MISC::_0x0358B8A41916C613(-1147716223, -167493447, 1, bParam1);
			MISC::_0x0358B8A41916C613(-1147716223, 667145698, 1, bParam1);
			MISC::_0x0358B8A41916C613(-1147716223, joaat("joe"), 1, bParam1);
			break;
		case 3:
		case 4:
		case 6:
		case 17:
		case 18:
		case 21:
		case 23:
			break;
	}
}

void func_245(var uParam0)
{
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
}

void func_246(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_114(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_365(iParam0, bParam3);
	}
	else
	{
		func_366(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_249(iParam0, bParam3);
	}
	else
	{
		func_367(iParam0, bParam3);
	}
}

void func_247(int iParam0)
{
	int iVar0;

	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!func_114(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_IN_GROUP(iVar0))
	{
		return;
	}
	if (PED::GET_PED_GROUP_INDEX(iVar0) != PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX()))
	{
		return;
	}
	if (PED::_0x917760CFE7A0E0F1(iVar0))
	{
		COMPANION::_0xD747979C053EFA7A(func_37());
	}
	PED::SET_PED_CONFIG_FLAG(iVar0, 279, false);
	PED::REMOVE_PED_FROM_GROUP(iVar0);
	func_368(iParam0, 0, 0);
}

void func_248(var uParam0)
{
	if (Global_1359489->f_673 == -1)
	{
		Global_1359489->f_673 = MISC::GET_RANDOM_INT_IN_RANGE(1, 9);
	}
	uParam0->f_101 = Global_1359489->f_673;
	Global_1359489->f_673++;
	if (Global_1359489->f_673 > 8)
	{
		Global_1359489->f_673 = 1;
	}
}

void func_249(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return;
	}
	iVar0 = func_112(iParam0);
	func_369(iVar0);
	if (iParam0 == 14)
	{
		func_370(iVar0);
	}
	func_26(iParam0, 61, 1);
	if (bParam1)
	{
		func_371(iParam0);
	}
}

void func_250(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_56(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_12(iParam0, 50, 1);
		func_12(iParam0, 48, 1);
		func_12(iParam0, 49, 1);
		func_12(iParam0, 51, 1);
		func_12(iParam0, 52, 1);
		func_12(iParam0, 54, 1);
		func_12(iParam0, 55, 1);
	}
	else
	{
		func_26(iParam0, 50, 1);
		func_26(iParam0, 48, 1);
		func_26(iParam0, 49, 1);
		func_26(iParam0, 51, 1);
		if (bParam3)
		{
			func_26(iParam0, 54, 1);
		}
		else
		{
			func_12(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_26(iParam0, 52, 1);
			if (bParam3)
			{
				func_26(iParam0, 55, 1);
			}
		}
		else
		{
			func_12(iParam0, 52, 1);
			if (!bParam3)
			{
				func_12(iParam0, 55, 1);
			}
		}
	}
}

void func_251(int iParam0)
{
	func_219(iParam0);
	func_220(iParam0, 0);
}

void func_252(var uParam0, bool bParam1)
{
	if (!TASK::GET_IS_TASK_ACTIVE(uParam0->f_5, 7) && !func_157(uParam0->f_5, 258748395))
	{
		if (bParam1)
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_5, 1, 0);
		}
		PERSCHAR::_0x631CD2D77FDC0316(func_44(*uParam0, 0));
	}
}

int func_253(int iParam0, bool bParam1)
{
	vector3 vVar0;

	if (!func_56(iParam0))
	{
		return 0;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(func_372(iParam0), bParam1, false) };
	return func_373(vVar0, 4);
}

int func_254(int iParam0, bool bParam1)
{
	if (func_374(iParam0))
	{
		return 1;
	}
	if (!bParam1)
	{
		if (func_375(5000))
		{
			return 1;
		}
	}
	switch (func_376(0))
	{
		case 0:
			return 0;
		case 1:
			if (iParam0 & 1 != 0)
			{
				return 1;
			}
			break;
		case 4:
			if (iParam0 & 2 != 0)
			{
				return 1;
			}
			break;
		case 6:
			if (iParam0 & 4 != 0)
			{
				return 1;
			}
			break;
		case 2:
			if (iParam0 & 16 != 0)
			{
				return 1;
			}
			break;
		case 5:
			if (iParam0 & 32 != 0)
			{
				return 1;
			}
			break;
		case 9:
			if (iParam0 & 64 != 0)
			{
				return 1;
			}
			break;
		case 8:
			if (iParam0 & 8 != 0)
			{
				return 1;
			}
			break;
		case 10:
			if (iParam0 & 512 != 0)
			{
				return 1;
			}
			break;
		case 3:
			if (iParam0 & 128 != 0)
			{
				return 1;
			}
			break;
		case 11:
			if (iParam0 & 256 != 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_255()
{
	return Global_1898164->f_163;
}

bool func_256(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_257()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

Vector3 func_258(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1343.699f, 2429.397f, 307.0626f;
		case 1:
			return -123.1805f, -28.8611f, 94.8478f;
		case 2:
			return 667.9077f, -1252.78f, 42.9221f;
		case 3:
			return 1880.807f, -1873.231f, 41.8094f;
		case 4:
			return 1422.625f, -7332.473f, 80.5977f;
		case 5:
			return 2254.96f, -758.12f, 41.75f;
		case 6:
			return 2351.282f, 1362.077f, 104.9752f;
		case 7:
			return -2593.21f, 453.9533f, 145.9973f;
		case 8:
			return func_377();
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_259()
{
	int iVar0;

	iVar0 = func_91();
	switch (iVar0)
	{
		case 79:
			return 50f;
		case 58:
			return 50f;
		case 71:
			return 50f;
		case 43:
			return 50f;
		case 4:
			return 50f;
		case 9:
			return 50f;
		case 22:
			return 120f;
		case 98:
			return 60f;
		case 37:
			return 120f;
	}
	return 25f;
}

bool func_260(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (bParam7)
	{
		return BUILTIN::VDIST2(vParam0, vParam3) <= (fParam6 * fParam6);
	}
	return func_296(vParam0, vParam3) <= (fParam6 * fParam6);
}

bool func_261(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_262()
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

int func_263(int iParam0)
{
	if (!func_266(iParam0))
	{
		return -1;
	}
	return func_379(func_378(iParam0));
}

bool func_264(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_265(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_266(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_267(int iParam0)
{
	switch (func_353())
	{
		case -1:
			return (Global_1357549->f_1494 && iParam0) != 0;
	}
	return 0;
}

int func_268()
{
	return Global_1894899->f_2;
}

int func_269(int iParam0)
{
	return ((*Global_1835011)[iParam0 /*74*/])->f_1;
}

int func_270(int iParam0)
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
		iVar0 = func_354(iParam0);
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

int func_271()
{
	if (Global_1894899->f_187)
	{
		return 1;
	}
	if (func_380(16) && !func_380(21))
	{
		return 1;
	}
	return 0;
}

bool func_272(int iParam0, var uParam1, int iParam2)
{
	struct<5> Var0;
	var uVar5;
	int iVar6;
	var uVar7;
	char cVar8[64];
	char cVar16[64];
	char* sVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	var uVar32;

	Var0 = Global_1357549->f_576;
	uVar5 = func_381(iParam0);
	iVar6 = -1651099034;
	uVar7 = uVar5;
	iVar26 = func_91();
	iVar28 = func_69();
	iVar29 = func_61(iParam0);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		iParam2 = 60;
	}
	iVar30 = *uParam1;
	iVar31 = (iVar30 + iParam2);
	if (iVar31 >= 60)
	{
		iVar31 = 59;
	}
	*uParam1 = iVar30;
	while (*uParam1 <= iVar31)
	{
		if (&Global_40.f_4283.f_6[*uParam1 /*5*/] == 176656832)
		{
			return true;
		}
		uVar32 = func_382(&(Global_40.f_4283.f_6[*uParam1 /*5*/]));
		Global_1357549->f_578 = func_383(&(Global_40.f_4283.f_6[*uParam1 /*5*/]), &uVar32);
		Var0.f_1 = Global_1357549->f_578;
		iVar27 = func_384(&(Global_40.f_4283.f_6[*uParam1 /*5*/]));
		if (iVar27 != iVar28)
		{
		}
		else
		{
			iVar25 = func_385(iVar27);
			if (iVar25 == -1)
			{
				iVar25 = iVar26;
			}
			sVar24 = func_386(iVar25);
			Var0.f_3 = uVar7;
			if (func_387(Var0, iVar6, &cVar8, 0))
			{
				StringCopy(&cVar16, sVar24, 64);
				StringConCat(&cVar16, "/", 64);
				StringConCat(&cVar16, &cVar8, 64);
				(Global_40.f_4942[iParam0 /*60*/])->f_51 = { cVar16 };
				if (!func_4(iParam0, 17, 1))
				{
					PERSCHAR::_0x187D65F3AEC5D679(iVar29, &((Global_40.f_4942[iParam0 /*60*/])->f_51));
				}
				((*Global_1360165)[iParam0 /*1157*/])->f_47 = 0;
				((*Global_1360165)[iParam0 /*1157*/])->f_56 = 1;
				return true;
			}
		}
		*uParam1++;
	}
	return *uParam1 >= 60;
}

int func_273(var uParam0)
{
	int iVar0;

	if (uParam0->f_120 > -1)
	{
		if (func_388(uParam0->f_5, uParam0->f_120))
		{
			if (func_389(&(uParam0->f_115), uParam0->f_5, uParam0->f_120))
			{
				return 1;
			}
		}
		else
		{
			uParam0->f_120 = -1;
		}
	}
	else
	{
		iVar0 = func_390(uParam0->f_5);
		if (iVar0 > -1)
		{
			uParam0->f_120 = iVar0;
			func_391(&(uParam0->f_115));
		}
	}
	return 0;
}

int func_274(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return -1;
	}
	if (!(Global_1359489->f_63.f_242[iParam0 /*18*/])->f_15)
	{
		return -1;
	}
	return &(Global_1359489->f_63.f_242[iParam0 /*18*/]);
}

void func_275(int iParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;

	if (iParam1 < 0 || iParam1 >= 3)
	{
		return;
	}
	if (!(Global_1359489->f_63.f_242[iParam1 /*18*/])->f_15)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!(Global_1359489->f_63.f_242[iParam1 /*18*/])->f_16)
	{
		vVar0 = { (Global_1359489->f_63.f_242[iParam1 /*18*/])->f_2 };
		iVar3 = &Global_1359489->f_63.f_242[iParam1 /*18*/];
		iVar4 = (Global_1359489->f_63.f_242[iParam1 /*18*/])->f_7;
		uVar5 = (Global_1359489->f_63.f_242[iParam1 /*18*/])->f_9;
		iVar6 = (Global_1359489->f_63.f_242[iParam1 /*18*/])->f_12;
		iVar7 = (Global_1359489->f_63.f_242[iParam1 /*18*/])->f_17;
		func_392(iVar3, iVar4, uVar5, 0f, 0f, 0f, vVar0, 1069547520 /* Float: 1.5f */, 1075838976 /* Float: 2.5f */, 1056964608 /* Float: 0.5f */, iVar6, iParam1, 0, iVar7);
		(Global_1359489->f_63.f_242[iParam1 /*18*/])->f_16 = 1;
		(Global_1359489->f_63.f_242[iParam1 /*18*/])->f_8++;
	}
	else
	{
		(Global_1359489->f_63.f_242[iParam1 /*18*/])->f_8++;
	}
}

void func_276(var uParam0)
{
	vector3 vVar0;

	func_393(uParam0);
	func_246(*uParam0, 1, 0, 1);
	if (bLocal_138)
	{
		vVar0 = { func_191(uParam0->f_120) };
		if (!func_60(vVar0))
		{
			TASK::TASK_LOOK_AT_COORD(uParam0->f_5, vVar0, 10000, 0, 51, 0);
		}
	}
	if (func_394(uParam0->f_108))
	{
		uParam0->f_110 = { func_395(uParam0->f_108) };
		func_89(&(uParam0->f_19), 1);
		func_98(uParam0, 32768);
	}
	uParam0->f_114 = func_396(uParam0->f_108);
	uParam0->f_109 = 0;
	uParam0->f_8 = { 0f, 0f, 0f };
	func_2(uParam0, 18);
}

void func_277(var uParam0)
{
	if (bLocal_138)
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, true);
	}
	uParam0->f_105 = -1650437862;
	func_2(uParam0, 19);
}

int func_278(var uParam0)
{
	vector3 vVar0;
	var uVar3;

	func_175(&vVar0, &uVar3);
	if (func_337(uParam0->f_5, vVar0, 1) < 6.5f)
	{
		return 1;
	}
	return 0;
}

int func_279(var uParam0)
{
	vector3 vVar0;

	if (PED::_0x29FCE825613FEFCA(uParam0->f_5, 1000))
	{
		return 1;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false) };
	if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, vVar0, 7.5f))
	{
		return 1;
	}
	if (MISC::IS_BULLET_IN_AREA(vVar0, 3f, true))
	{
		return 1;
	}
	return 0;
}

bool func_280(int iParam0)
{
	return func_397(iParam0, 4);
}

int func_281(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0) != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_282(var uParam0)
{
	vector3 vVar0;
	var uVar3;
	vector3 vVar4;

	if (func_281(uParam0->f_5))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(((*Global_1360165)[*uParam0 /*1157*/])->f_70) || (!func_161(512) && !(func_181(*uParam0, 400f) && !func_182(*uParam0))))
	{
		func_175(&vVar0, &uVar3);
		vVar4 = { vVar0 };
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false), vVar4) < IntToFloat(func_398(func_69())))
		{
			return 0;
		}
	}
	return 1;
}

void func_283(int iParam0)
{
	if (!func_56(iParam0))
	{
		return;
	}
	if (func_144(iParam0, 64))
	{
		func_22(iParam0, 0, 1, 1, 0);
	}
	func_23(iParam0);
}

int func_284(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return 0;
	}
	if (&Global_1359489->f_63[iParam0 /*24*/] == 0)
	{
		return 0;
	}
	return (Global_1359489->f_63[iParam0 /*24*/])->f_15;
}

int func_285(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 3)
	{
		return 0;
	}
	if (!(Global_1359489->f_63.f_242[iParam1 /*18*/])->f_15)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_ON_MOUNT(iParam0))
	{
		if ((Global_1359489->f_63.f_242[iParam1 /*18*/])->f_14 != 0 && (Global_1359489->f_63.f_242[iParam1 /*18*/])->f_14 != 1)
		{
			return 0;
		}
		if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(func_399(iParam0)) <= (Global_1359489->f_63.f_242[iParam1 /*18*/])->f_11)
		{
			return 1;
		}
	}
	else
	{
		if ((Global_1359489->f_63.f_242[iParam1 /*18*/])->f_13 != 0 && (Global_1359489->f_63.f_242[iParam1 /*18*/])->f_13 != 1)
		{
			return 0;
		}
		if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0) <= (Global_1359489->f_63.f_242[iParam1 /*18*/])->f_10)
		{
			return 1;
		}
	}
	return 0;
}

void func_286(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	int iVar7;
	vector3 vVar8;
	vector3 vVar11;

	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (&Global_1359489->f_63[iParam0 /*24*/] == 0)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 3)
	{
		return;
	}
	if (!(Global_1359489->f_63.f_242[iParam1 /*18*/])->f_15)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		return;
	}
	if ((Global_1359489->f_63[iParam0 /*24*/])->f_15 || (Global_1359489->f_63[iParam0 /*24*/])->f_18)
	{
		return;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam2, true, false) };
	vVar3 = { (Global_1359489->f_63[iParam0 /*24*/])->f_7 };
	uVar6 = (Global_1359489->f_63.f_242[iParam1 /*18*/])->f_6;
	iVar7 = (Global_1359489->f_63[iParam0 /*24*/])->f_1;
	vVar8 = { func_400(iParam1, iParam0, vVar0, vVar3, uVar6) };
	vVar11 = { func_176(vVar3 - vVar8) };
	(Global_1359489->f_63[iParam0 /*24*/])->f_4 = { vVar8 };
	(Global_1359489->f_63[iParam0 /*24*/])->f_10 = func_401(MISC::GET_HEADING_FROM_VECTOR_2D(vVar11.x, vVar11.y));
	(Global_1359489->f_63[iParam0 /*24*/])->f_3 = func_402(iVar7);
	(Global_1359489->f_63[iParam0 /*24*/])->f_18 = 1;
}

int func_287(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return -1;
	}
	if (!(Global_1359489->f_63.f_242[iParam0 /*18*/])->f_15)
	{
		return -1;
	}
	return (Global_1359489->f_63.f_242[iParam0 /*18*/])->f_14;
}

Vector3 func_288(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	if (iParam0 < 0 || iParam0 >= 10)
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { func_176((Global_1359489->f_63[iParam0 /*24*/])->f_4 - (Global_1359489->f_63[iParam0 /*24*/])->f_7) };
	vVar3 = { (Global_1359489->f_63[iParam0 /*24*/])->f_4 + Vector(5f, 5f, 5f) * vVar0 };
	fVar6 = 0f;
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar3, &fVar6, 0))
	{
		vVar3.f_2 = fVar6;
	}
	return vVar3;
}

int func_289(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return 0;
	}
	if (&Global_1359489->f_63[iParam0 /*24*/] == 0)
	{
		return 0;
	}
	return (Global_1359489->f_63[iParam0 /*24*/])->f_23;
}

void func_290(var uParam0)
{
	if (uParam0->f_1 == 18 || uParam0->f_1 == 19)
	{
		if (uParam0->f_108 > -1)
		{
			func_403(uParam0->f_108);
		}
		uParam0->f_108 = -1;
		uParam0->f_120 = -1;
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_109 = 0;
		func_25(uParam0, 131072);
		func_165(uParam0, 32768);
	}
	if (bLocal_139)
	{
		func_77(uParam0);
	}
	else if (func_90(uParam0->f_5))
	{
		func_104(uParam0);
	}
	else
	{
		func_79(uParam0);
	}
}

void func_291(int iParam0)
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

bool func_292(int iParam0)
{
	return func_404(iParam0, 2);
}

int func_293(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_405(Global_1359489->f_4);
	}
	PED::GET_GROUP_SIZE(func_37(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_37(), iVar3);
		if (func_406(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_294()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = func_407(iVar0);
		iVar2 = func_407(iVar0 + 1);
		if (!func_114(iVar1))
		{
			if (func_114(iVar2))
			{
				(*Global_1359489)[iVar0] = iVar2;
				(*Global_1359489)[iVar0 + 1] = -1;
			}
		}
		iVar0++;
	}
}

bool func_295(int iParam0)
{
	if (!func_114(iParam0))
	{
		return false;
	}
	if (!func_125(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

float func_296(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_297(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!func_56(iParam0))
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
	if (!func_56(iParam0))
	{
		if (iVar0 != 0)
		{
			(Global_1357549->f_1675[iVar1 /*5*/])->f_1 = iParam0;
			((*Global_1360165)[iParam0 /*1157*/])->f_126 = (Global_1357549->f_1675[iVar1 /*5*/])->f_4;
		}
	}
	return iVar0;
}

int func_298(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_56(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_126))
	{
		iVar0 = func_131(iParam0, 1);
		iVar1 = PERSCHAR::_0xA00DF706C60173D1(iVar0);
		if ((Global_40.f_4942[iParam0 /*60*/])->f_7 != 0 && iVar1 != (Global_40.f_4942[iParam0 /*60*/])->f_7)
		{
			PERSCHAR::_0x8BC555034A5A5E8C(iVar0, (Global_40.f_4942[iParam0 /*60*/])->f_7);
		}
		((*Global_1360165)[iParam0 /*1157*/])->f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(iVar0);
		PERSCHAR::_0xFCC6DB8DBE709BC8(((*Global_1360165)[iParam0 /*1157*/])->f_126);
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_126;
}

bool func_299(int iParam0, int iParam1)
{
	return (Global_40.f_4942[iParam0 /*60*/])->f_8 == iParam1;
}

int func_300(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 0;
	while (*iParam2 < 10)
	{
		if (&(Global_40.f_4942[iParam0 /*60*/])->f_11[*iParam2 /*3*/] == iParam1)
		{
			return 1;
		}
		*iParam2++;
	}
	*iParam2 = -1;
	return 0;
}

int func_301(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return 0;
	}
	if (func_299(iParam0, iParam1))
	{
		return func_408(iParam0);
	}
	iVar0 = -1;
	if (func_300(iParam0, iParam1, &iVar0))
	{
		return func_304(iParam0, iVar0);
	}
	return 0;
}

void func_302(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_112(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		PED::_0x2B4CE170DE09F346(iVar0, iParam1);
	}
	func_409(iParam0, iParam1, 0);
}

void func_303(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
	uParam0->f_2 = 0;
}

bool func_304(int iParam0, int iParam1)
{
	if ((!func_56(iParam0) || iParam1 < 0) || iParam1 >= 10)
	{
		return false;
	}
	return MISC::IS_BIT_SET(((*Global_1360165)[iParam0 /*1157*/])->f_1155, iParam1);
}

void func_305(int iParam0, int iParam1, bool bParam2)
{
	if ((!func_56(iParam0) || iParam1 < 0) || iParam1 >= 10)
	{
		return;
	}
	if (bParam2)
	{
		if (!MISC::IS_BIT_SET(((*Global_1360165)[iParam0 /*1157*/])->f_1155, iParam1))
		{
			MISC::SET_BIT(&(((*Global_1360165)[iParam0 /*1157*/])->f_1155), iParam1);
		}
	}
	else if (MISC::IS_BIT_SET(((*Global_1360165)[iParam0 /*1157*/])->f_1155, iParam1))
	{
		MISC::CLEAR_BIT(&(((*Global_1360165)[iParam0 /*1157*/])->f_1155), iParam1);
	}
}

int func_306(int iParam0)
{
	vector3 vVar0;

	if (!func_410(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_307(int iParam0)
{
	if (Global_1327590->f_19744 == -1)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		if (func_411(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_308(int iParam0, bool bParam1)
{
	return func_412(func_81(), iParam0, bParam1);
}

void func_309(var uParam0)
{
	if (func_161(128))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 62, true);
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 63, true);
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 49, true);
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 184, true);
	}
	if (func_4(*uParam0, 50, 0))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 62, true);
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 63, true);
	}
	if (func_4(*uParam0, 48, 0))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 184, true);
	}
	if ((func_255() || func_4(*uParam0, 49, 0)) || func_413() == 0)
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 49, true);
	}
	if (func_161(4194304))
	{
		PED::_0xEC60D1D225BC50AA(uParam0->f_5, 0f);
		func_26(*uParam0, 59, 1);
	}
	else if (func_4(*uParam0, 59, 1))
	{
		PED::_0xEC60D1D225BC50AA(uParam0->f_5, ((*Global_1360165)[*uParam0 /*1157*/])->f_139);
		func_12(*uParam0, 59, 1);
	}
	if (func_4(*uParam0, 56, 0))
	{
		if (func_85(&(Global_1359489->f_40)) && func_86(&(Global_1359489->f_40)) < 120f)
		{
			PED::SET_PED_RESET_FLAG(uParam0->f_5, 184, true);
		}
		else
		{
			func_12(*uParam0, 56, 1);
		}
	}
	if (func_4(*uParam0, 57, 0))
	{
		if (func_85(&(Global_1359489->f_43)) && func_86(&(Global_1359489->f_43)) < 10f)
		{
			PED::SET_PED_RESET_FLAG(uParam0->f_5, 184, true);
		}
		else
		{
			func_12(*uParam0, 57, 1);
		}
	}
}

void func_310(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;

	if (PED::_0x947E43F544B6AB34(uParam0->f_5, PLAYER::PLAYER_ID(), 34, 60000))
	{
		PED::_0xEBD49472BCCF7642(uParam0->f_5, PLAYER::PLAYER_ID());
		PED::_0x19173C3F15367B54(uParam0->f_5, PLAYER::PLAYER_ID(), 60000);
		PED::_0x5708EDD71B50C008(uParam0->f_5, PLAYER::PLAYER_ID(), 60000);
	}
	bVar0 = func_4(*uParam0, 53, 0);
	bVar1 = func_4(*uParam0, 52, 0);
	bVar2 = func_4(*uParam0, 55, 0);
	bVar3 = func_4(*uParam0, 51, 0);
	bVar4 = func_161(64);
	bVar5 = func_161(1024);
	bVar6 = func_4(*uParam0, 54, 0);
	bVar7 = ((*uParam0 == 16 && func_67(func_112(0), 0)) && func_130(uParam0->f_5, func_112(0), 1) < 64f);
	bVar8 = PED::_0x34D6AC1157C8226C(uParam0->f_5, 1455795772);
	bVar9 = false;
	if (func_4(*uParam0, 58, 0))
	{
		if (func_85(&(Global_1359489->f_46)) && func_86(&(Global_1359489->f_46)) < 600f)
		{
			bVar9 = true;
		}
		else
		{
			func_12(*uParam0, 58, 1);
			func_88(&(Global_1359489->f_46));
		}
	}
	if (bVar8)
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 184, true);
		if (!bVar0)
		{
			func_26(*uParam0, 53, 1);
			bVar0 = true;
		}
	}
	if (bVar0 && !bVar8)
	{
		func_12(*uParam0, 53, 1);
		bVar0 = false;
	}
	if (bVar1 || bVar0)
	{
		if (bVar2)
		{
			PED::SET_PED_RESET_FLAG(uParam0->f_5, 53, true);
		}
		else if (!PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 413, true))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 413, true);
		}
	}
	if ((!bVar1 && !bVar0) && PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 413, true))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 413, false);
	}
	if (bVar5 && !PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 331, true))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 331, true);
	}
	if (((((bVar3 || bVar4) || bVar9) || bVar5) || bVar7) || bVar0)
	{
		if (bVar6)
		{
			PED::SET_PED_RESET_FLAG(uParam0->f_5, 185, true);
		}
		else if (!PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 330, true))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 330, true);
		}
	}
	if ((((((!bVar3 && !bVar4) && !bVar9) && !bVar5) && !bVar7) && !bVar0) && PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 330, true))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 330, false);
	}
	if (!bVar5 && PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 331, true))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 331, false);
	}
}

bool func_311(int iParam0, int iParam1, int iParam2)
{
	return func_414(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), iParam2);
}

int func_312(int iParam0)
{
	iParam0 = func_415(iParam0);
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

char* func_313(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "COMP_DUTCH";
		case 1:
			return "COMP_JOHN";
		case 2:
			return "COMP_JAVIER";
		case 3:
			return "COMP_BILL";
		case 4:
			return "COMP_UNCLE";
		case 5:
			return "COMP_HOSEA";
		case 6:
			return "COMP_MICAH";
		case 7:
			return "COMP_CHARLES";
		case 8:
			return "COMP_SEAN";
		case 9:
			return "COMP_LENNY";
		case 10:
			return "COMP_KIERAN";
		case 23:
			return "COMP_TRELAWNY";
		case 17:
			return "COMP_PEARSON";
		case 18:
			return "COMP_STRAUSS";
		case 13:
			return "COMP_ABIGAIL";
		case 14:
			return "COMP_JACK";
		case 16:
			return "COMP_MOLLY_OSHEA";
		case 19:
			return "COMP_SUSAN_GRIMSHAW";
		case 15:
			return "COMP_MARY_BETH";
		case 20:
			return "COMP_KAREN";
		case 22:
			return "COMP_TILLY";
		case 11:
			return "COMP_SADIE";
		case 24:
			return "COMP_CLEET";
		case 25:
			return "COMP_JOE";
		case 26:
			return "COMP_EAGLE_FLIES";
		case 12:
			if ((func_63(((*Global_1835011)[59 /*74*/])->f_1, 1) || func_63(((*Global_1347702)[1 /*49*/])->f_15, 1)) || func_336(((*Global_1347702)[1 /*49*/])->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_195(403634348, 1))
			{
				return "COMP_CAIN";
			}
			return "COMP_DOG";
		case 21:
			if (bParam1)
			{
				return "COMP_SWANSON_S";
			}
			else
			{
				return "COMP_SWANSON";
			}
			break;
	}
	return "";
}

void func_314(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_416(iParam0, &iVar0, &iVar1);
	if (!func_417(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_418(iParam0, 1024))
	{
		return;
	}
	func_419(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

int func_315(int iParam0)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return 0;
	}
	if (func_67(func_128(iParam0), 0))
	{
		iVar0 = PED::_0xB676EFDA03DADA52(func_128(iParam0), 0);
		if (iVar0 == Global_35)
		{
			return 1;
		}
	}
	return 0;
}

int func_316(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return !func_420(1);
		case 6:
			return !func_420(2);
		case 7:
			return !func_420(4);
		default:
			break;
	}
	return 0;
}

char* func_317(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 3:
			return "HORSE_NAME_GANG_BILL";
		case 7:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_CHARLES_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_CHARLES";
			}
			break;
		case 0:
			return "HORSE_NAME_GANG_DUTCH";
		case 5:
			return "HORSE_NAME_GANG_HOSEA";
		case 2:
			return "HORSE_NAME_GANG_JAVIER";
		case 1:
			return "HORSE_NAME_GANG_JOHN";
		case 20:
			return "HORSE_NAME_GANG_KAREN";
		case 9:
			return "HORSE_NAME_GANG_LENNY";
		case 6:
			return "HORSE_NAME_GANG_MICAH";
		case 10:
			return "HORSE_NAME_GANG_KIERAN";
		case 11:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_SADIE_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_SADIE";
			}
			break;
		case 8:
			return "HORSE_NAME_GANG_SEAN";
		case 23:
			return "HORSE_NAME_GANG_TRELAWNEY";
		case 4:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_UNCLE_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_UNCLE";
			}
			break;
		default:
			break;
	}
	return "";
}

void func_318(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_416(iParam0, &iVar0, &iVar1);
	if (!func_417(iParam0, iVar0, iVar1, bParam3))
	{
		return;
	}
	if (!func_418(iParam0, 1024))
	{
		return;
	}
	func_419(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[1 /*2*/] = iParam2;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[1 /*2*/])->f_1 = 2;
}

void func_319(int iParam0)
{
	if (!func_56(iParam0))
	{
		return;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_12 != ((*Global_1360165)[iParam0 /*1157*/])->f_13 || func_4(iParam0, 36, 1))
	{
		func_12(iParam0, 36, 1);
		((*Global_1360165)[iParam0 /*1157*/])->f_12 = ((*Global_1360165)[iParam0 /*1157*/])->f_13;
		func_421(iParam0, &(((*Global_1360165)[iParam0 /*1157*/])->f_2));
	}
}

int func_320(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	if (!func_114(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (bParam2)
	{
		func_26(iParam0, 43, 1);
	}
	iVar0 = func_128(iParam0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && iVar0 != iParam1) && PED::_0xF103823FFE72BB49(iVar0) == func_112(iParam0))
	{
		PED::_0xBCC76708E5677E1D(iVar0, 0);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
	}
	iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != func_112(iParam0))
	{
		return 0;
	}
	iVar2 = PED::_0xF103823FFE72BB49(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		iVar3 = func_422(iVar2);
		if (func_114(iVar3))
		{
			if (iVar3 != iParam0)
			{
				return 0;
			}
		}
		else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar2))
		{
			return 0;
		}
		else if (PED::_IS_MOUNT_SEAT_FREE(iParam1, -1))
		{
			PED::_0xBCC76708E5677E1D(iParam1, 0);
		}
		else
		{
			return 0;
		}
	}
	bVar4 = func_67(func_112(iParam0), 0);
	if (bParam3 || bVar4)
	{
		if (bVar4)
		{
			PED::_0x931B241409216C1F(func_112(iParam0), iParam1, 0);
			PED::_0xED1C764997A86D5A(func_112(iParam0), iParam1);
		}
	}
	else
	{
		func_26(iParam0, 38, 1);
	}
	func_332(iParam1, iParam0);
	((*Global_1360165)[iParam0 /*1157*/])->f_70 = iParam1;
	((*Global_1360165)[iParam0 /*1157*/])->f_124 = 0;
	return 1;
}

int func_321(var uParam0, vector3 vParam1, vector3 vParam4, int iParam7, float fParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	float fVar7;
	vector3 vVar8;
	bool bVar11;
	var uVar12;

	iVar6 = 12;
	if (func_60(vParam4))
	{
		vVar8 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
		fVar7 = vVar8.z;
	}
	else
	{
		fVar7 = func_423(vParam4, vParam1, 1);
	}
	fVar7 = (fVar7 + ((BUILTIN::TO_FLOAT(uParam0->f_2) * 10f) * func_424((uParam0->f_2 % 2) == 0, 1f, -1f)));
	vVar0 = { vParam1 + Vector(0f, -BUILTIN::COS(fVar7), BUILTIN::SIN(fVar7)) * FtoV(((80f + 40f) * 0.5f)) * Vector(fParam8, fParam8, fParam8) };
	if (uParam0->f_2 > 3)
	{
		iVar6 = 13;
	}
	switch (func_425(uParam0))
	{
		case 0:
			func_426(uParam0, 0f, 0f, 0f);
			uParam0->f_3.f_2 = 0;
			uParam0->f_3 = 0;
			uParam0->f_1 = 0;
			uParam0->f_13 = 0;
			uParam0->f_14 = 0;
			func_427(uParam0, 1);
			break;
		case 1:
			if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(vVar0, &vVar3, 1, 3f, 0f))
			{
				if (func_428(vVar3, vParam1, 0, 0))
				{
					func_426(uParam0, vVar3);
					if (uParam0->f_12)
					{
						func_427(uParam0, 3);
					}
					else
					{
						func_427(uParam0, 4);
					}
				}
				else
				{
					func_427(uParam0, 2);
				}
			}
			else
			{
				func_427(uParam0, 2);
			}
			break;
		case 2:
			bVar11 = false;
			if (func_429(vVar0, &(uParam0->f_3), &bVar11, iVar6, 0, 1127481344 /* Float: 180f */, 1101004800 /* Float: 20f */, -1138501878 /* Float: -0.01f */, -1138501878 /* Float: -0.01f */, 0))
			{
				if (func_428(func_430(uParam0), vParam1, 1, 1))
				{
					if (uParam0->f_12)
					{
						func_427(uParam0, 3);
					}
					else
					{
						func_427(uParam0, 4);
					}
				}
				else
				{
					func_427(uParam0, 5);
				}
			}
			else if (bVar11)
			{
				func_427(uParam0, 5);
			}
			break;
		case 3:
			if (uParam0->f_13 == 0)
			{
				uParam0->f_13 = PATHFIND::_0x348F211CA2404039(iParam7, func_430(uParam0), vParam1, 23);
				if (uParam0->f_13 == -1)
				{
					uParam0->f_14++;
					uParam0->f_13 = 0;
					if (uParam0->f_14 >= 50)
					{
						func_427(uParam0, 5);
					}
				}
			}
			else
			{
				switch (PATHFIND::_0x3A0F82F6EE2291C8(uParam0->f_13))
				{
					case 2:
						break;
					case 0:
						PATHFIND::_0x661BB1E1FF77742D(uParam0->f_13);
						func_427(uParam0, 5);
						break;
					case 1:
						uVar12 = PATHFIND::_0xF61CFEDEAB627BFA(uParam0->f_13);
						if (func_431(uVar12, 2) && iVar6 != 13)
						{
							func_427(uParam0, 5);
						}
						else
						{
							func_427(uParam0, 4);
						}
						PATHFIND::_0x661BB1E1FF77742D(uParam0->f_13);
						break;
				}
			}
			break;
		case 4:
			uParam0->f_2 = 0;
			func_177(&(uParam0->f_3.f_3), 1, 1, 0);
			func_427(uParam0, 0);
			return 1;
		case 5:
			uParam0->f_2++;
			if (uParam0->f_2 > 12)
			{
				uParam0->f_2 = 0;
				uParam0->f_1 = 1;
			}
			else
			{
				uParam0->f_1 = 0;
			}
			func_427(uParam0, 0);
			break;
	}
	return 0;
}

void func_322(int iParam0, int iParam1, int iParam2)
{
	TASK::TASK_WHISTLE_ANIM(iParam0, iParam1, iParam2);
}

var func_323(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

Vector3 func_324(int iParam0)
{
	vector3 vVar0[3];
	int iVar10;

	*(vVar0[0 /*3*/]) = { 0f, 0f, 0f };
	*(vVar0[1 /*3*/]) = { 0f, -4.5f, 0f };
	*(vVar0[2 /*3*/]) = { 3.5f, 2.5f, 0f };
	iVar10 = 0;
	while (iVar10 < func_293(1))
	{
		if (Global_1359489[iVar10] == iParam0)
		{
			return *(vVar0[iVar10 /*3*/]);
		}
		iVar10++;
	}
	return 0f, 0f, 0f;
}

int func_325(bool bParam0, bool bParam1, bool bParam2)
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

bool func_326(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

float func_327(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_328(int iParam0)
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

int func_329(int iParam0)
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

int func_330(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	if (func_67(iParam0, 0))
	{
		iVar1 = PED::_0xF103823FFE72BB49(iParam0);
		iVar0 = func_422(iVar1);
	}
	return iVar0;
}

int func_331(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	vector3 vVar1;

	if (!func_56(iParam0))
	{
		return 0;
	}
	iVar0 = func_128(iParam0);
	if (func_67(((*Global_1360165)[iParam0 /*1157*/])->f_70, 0))
	{
		if (!func_21(iParam0))
		{
			if (bParam2)
			{
				if (!func_432(iParam0, iVar0, 1))
				{
					return 0;
				}
			}
			else if (!func_433(iParam0, iVar0))
			{
				return 0;
			}
			if ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 != SCRIPTS::GET_ID_OF_THIS_THREAD()
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
				}
				POPULATION::_0xF74E134F40192884(iVar0, 0);
				func_26(iParam0, 39, 1);
				func_30(iParam0, 8, 1);
				func_30(iParam0, 64, 0);
				func_434(iParam0, 0, 0, 1);
				((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			}
			vVar1.x = iParam3;
			vVar1.f_1 = iParam4;
			vVar1.f_2 = iParam5;
			if (!func_60(vVar1) && bParam7)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, -1))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(iVar0))
					{
						if (PED::IS_PED_USING_ANY_SCENARIO(iVar0))
						{
							TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
						}
						else
						{
							ENTITY::DETACH_ENTITY(iVar0, true, true);
						}
					}
					func_435(iVar0, vVar1, iParam6, 2, 1073741824 /* Float: 2f */);
					return 1;
				}
				else
				{
					if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar0, 0) && !TASK::_0x0C3CB2E600C8977D(iVar0, 1))
					{
						TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
					}
					return 0;
				}
			}
			return 1;
		}
		else if (bParam1)
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
			func_26(iParam0, 39, 1);
			func_30(iParam0, 8, 1);
			func_30(iParam0, 64, 0);
			func_434(iParam0, 0, 0, 1);
			((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return 1;
		}
	}
	return 0;
}

void func_332(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_BOOL(iParam0, "HorseCompanion", true);
	func_437(iParam0, func_436(iParam1));
	if (func_144(iParam1, 8))
	{
		POPULATION::_0xF74E134F40192884(iParam0, 2);
		PED::SET_PED_CONFIG_FLAG(iParam0, 412, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 412, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_112(iParam1)))
	{
		PED::_0x931B241409216C1F(func_112(iParam1), iParam0, 0);
		PED::_0xED1C764997A86D5A(func_112(iParam1), iParam0);
		PED::SET_PED_CONFIG_FLAG(iParam0, 367, true);
	}
	else
	{
		func_26(iParam1, 38, 1);
	}
	PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0, -1856989775);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, -1856989775);
	if (Global_40.f_4283 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 172, true);
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 324, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 331, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 471, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 442, true);
	if (func_144(iParam1, 4096))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 1, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 54, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 121, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 302, false);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 1, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 54, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 121, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 302, true);
	}
	PED::_0xAE6004120C18DF97(iParam0, 2, 0);
	PED::_0xAE6004120C18DF97(iParam0, 3, 0);
	func_434(iParam1, func_144(iParam1, 8192), func_144(iParam1, 16384), 1);
}

int func_333(int iParam0, bool bParam1)
{
	int iVar0;
	struct<15> Var1;

	if (!func_114(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]))
	{
		return 0;
	}
	if (func_18(iParam0, 0))
	{
		func_438(iParam0, 1);
		return 1;
	}
	if (!func_193())
	{
		return 0;
	}
	if (bParam1)
	{
		func_168(iParam0, 0, "Adding to Group");
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == -1)
		{
			(*Global_1359489)[iVar0] = iParam0;
		}
		else
		{
			iVar0++;
		}
	}
	func_438(iParam0, 1);
	Global_1359489->f_15 = func_293(1);
	func_26(iParam0, 32, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], -1247684992);
	PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[iParam0 /*1157*/], 83, true);
	PED::_0x9238A3D970BBB0A9(Global_1360165[iParam0 /*1157*/], -1972074710);
	PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 152, true);
	if (COMPANION::_0xB7E0590C86E1711F(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX())) != 234527101)
	{
		COMPANION::_0x0DE02DA3C0F66955(func_112(iParam0), COMPANION::_0xB7E0590C86E1711F(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX())));
		COMPANION::_0x61BDA07407754A5C(func_112(iParam0), Global_1391438->f_414.f_37);
	}
	PED::_0x89E59DBD15E21177(func_37(), 0);
	func_439(iParam0);
	Var1 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
	Var1.f_12 = 3;
	Var1.f_3 = Global_1360165[iParam0 /*1157*/];
	Var1.f_7 = func_268();
	Var1.f_8 = 0;
	Var1.f_11 = 10;
	Var1.f_14 = Global_1360165[iParam0 /*1157*/];
	MISC::_0x88BC5F4AEF77FC4E(&Var1, 17);
	return 1;
}

bool func_334(int iParam0)
{
	int iVar0;
	int iVar1;

	func_440(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(Global_1357549->f_1866[iVar0]), iVar1);
}

int func_335(int iParam0, int iParam1, int iParam2)
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

bool func_336(int iParam0)
{
	int iVar0;

	iVar0 = func_218(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

float func_337(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_338(int iParam0, int iParam1)
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

int func_339(int iParam0, int iParam1)
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
	if (!func_223(iParam0, iVar0))
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

void func_340(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_341(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_441(*iParam0);
	iVar1 = func_442(*iParam0);
	iVar2 = func_443(*iParam0);
	iVar3 = func_350(*iParam0);
	iVar4 = func_349(*iParam0);
	iVar5 = func_444(*iParam0);
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
	iVar6 = func_445(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_445(iVar1, iVar0);
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
	func_446(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_342(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_343(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_344(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6)
{
	func_348(func_81(), iParam0, uParam1, iParam2, iParam3, iParam4, uParam5, uParam6);
}

void func_345(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	int iVar1;

	if (!func_56(iParam0))
	{
		return;
	}
	bVar0 = ((iParam2 > 0 || iParam3 > 0) || iParam4 > 0);
	if (iParam2 < 0)
	{
		iParam2 = 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = 0;
	}
	if (iParam4 < 0)
	{
		iParam4 = 0;
	}
	iVar1 = func_81();
	if (bVar0)
	{
		func_341(&iVar1, 0, iParam2, iParam3, iParam4, 0, 0, 0);
		if (!func_347(iVar1))
		{
			return;
		}
	}
	if (bParam6)
	{
		if (bVar0)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1152 = iParam1;
			((*Global_1360165)[iParam0 /*1157*/])->f_1153 = iVar1;
		}
		return;
	}
	if (bVar0)
	{
		(Global_40.f_4942[iParam0 /*60*/])->f_42 = iParam1;
		(Global_40.f_4942[iParam0 /*60*/])->f_43 = iVar1;
	}
	else
	{
		(Global_40.f_4942[iParam0 /*60*/])->f_44 = iParam1;
		if (bParam5)
		{
			(Global_40.f_4942[iParam0 /*60*/])->f_42 = -1;
			(Global_40.f_4942[iParam0 /*60*/])->f_43 = -15;
		}
	}
}

int func_346(int iParam0)
{
	if (!func_56(iParam0))
	{
		return -1;
	}
	return (Global_40.f_4942[iParam0 /*60*/])->f_42;
}

int func_347(int iParam0)
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
	iVar0 = func_444(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_349(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_350(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_441(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_442(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_443(iParam0);
	if (iVar5 < 1 || iVar5 > func_445(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_348(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_412(iParam0, iParam1, 1))
	{
		iVar0 = func_442(iParam1);
		iVar1 = func_441(iParam0);
		iVar2 = (func_441(iParam0) - func_441(iParam1));
		iVar3 = (func_442(iParam0) - func_442(iParam1));
		iVar4 = (func_443(iParam0) - func_443(iParam1));
		iVar5 = (func_350(iParam0) - func_350(iParam1));
		iVar6 = (func_349(iParam0) - func_349(iParam1));
		iVar7 = (func_444(iParam0) - func_444(iParam1));
	}
	else
	{
		iVar0 = func_442(iParam0);
		iVar1 = func_441(iParam1);
		iVar2 = (func_441(iParam1) - func_441(iParam0));
		iVar3 = (func_442(iParam1) - func_442(iParam0));
		iVar4 = (func_443(iParam1) - func_443(iParam0));
		iVar5 = (func_350(iParam1) - func_350(iParam0));
		iVar6 = (func_349(iParam1) - func_349(iParam0));
		iVar7 = (func_444(iParam1) - func_444(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_445(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = BUILTIN::ROUND(func_447(BUILTIN::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

int func_349(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_350(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_351(int iParam0)
{
	if ((Global_40.f_4942[iParam0 /*60*/])->f_59 != 0)
	{
		return 1;
	}
	return 0;
}

int func_352(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17)
{
	int iVar0;

	if (!func_56(iParam1))
	{
		return 0;
	}
	iVar0 = func_128(iParam1);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || !func_67(iVar0, 0)) || (bParam3 && !func_129(iParam1)))
	{
		if (bParam2)
		{
			if (func_131(iParam1, 1) != 0)
			{
				iVar0 = func_448(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, iParam12, bParam7, bParam15, bParam16, bParam17);
			}
			else
			{
				*uParam0 = 1;
				return 0;
			}
		}
		else
		{
			*uParam0 = 1;
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && func_67(iVar0, 0))
	{
		*uParam0 = 2;
		((*Global_1360165)[iParam1 /*1157*/])->f_70.f_2 = 0;
		func_449(iParam1, iVar0);
		func_434(iParam1, bParam13, bParam14, 1);
		return iVar0;
	}
	else
	{
		*uParam0 = 0;
		return 0;
	}
	return 0;
}

int func_353()
{
	return Global_1572887->f_12;
}

int func_354(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_450(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_355(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_451(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_356(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_357(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_358(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_114(iParam0))
	{
		return 0;
	}
	func_452(iParam0);
	iVar0 = -1;
	if (!func_453(iParam0, iParam1, &iVar0, 1, iParam2, iParam3))
	{
		return 0;
	}
	if (!func_364(iParam0, iParam1))
	{
	}
	return 1;
}

void func_359(var uParam0, int iParam1)
{
	uParam0->f_4 = (uParam0->f_4 || iParam1);
}

void func_360(var uParam0, int iParam1)
{
	uParam0->f_4 = (uParam0->f_4 - (uParam0->f_4 && iParam1));
}

void func_361(int iParam0)
{
	if (func_114(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_112(iParam0)))
		{
			func_99(iParam0, 67108864, 1);
			func_12(iParam0, 19, 1);
		}
	}
}

int func_362(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_363(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

int func_364(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!func_56(iParam0))
	{
		return 0;
	}
	if (func_454(iParam0, iParam1))
	{
		return 0;
	}
	iVar0 = func_112(iParam0);
	if (!func_67(iVar0, 0))
	{
		return 0;
	}
	iVar1 = -1;
	if (!func_135(iParam0, iParam1, &iVar1, &uVar2))
	{
		return 0;
	}
	if (func_301(iParam0, iParam1))
	{
	}
	if (!func_455(iParam0, 512, 0))
	{
		func_456(iParam0, 512, 0, -1);
	}
	if (PED::_0x1E017404784AA6A3(iVar0, iParam1))
	{
		func_409(iParam0, iParam1, 1);
		return 1;
	}
	return 0;
}

void func_365(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return;
	}
	iVar0 = func_112(iParam0);
	func_457(iVar0);
	func_26(iParam0, 60, 1);
	if (bParam1)
	{
		func_458(iParam0);
	}
}

void func_366(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return;
	}
	iVar0 = func_112(iParam0);
	func_459(iVar0);
	func_12(iParam0, 60, 1);
	if (bParam1)
	{
		func_460(iParam0);
	}
}

void func_367(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return;
	}
	iVar0 = func_112(iParam0);
	func_461(iVar0);
	func_12(iParam0, 61, 1);
	if (bParam1)
	{
		func_462(iParam0);
	}
}

void func_368(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_114(iParam0))
	{
		return;
	}
	if (!func_463(iParam0))
	{
		return;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (bParam1 && ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		return;
	}
	iVar0 = func_112(iParam0);
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(iParam2, 155, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
	}
	else
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
	}
	PED::SET_PED_CONFIG_FLAG(iVar0, 152, bParam1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 154, bParam1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 156, bParam1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 25, bParam1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 87, bParam1);
	if (bParam1)
	{
		COMPANION::_0xD428C3F92FC3F6F8(iVar0, func_464(iParam0));
		PED::_0x9238A3D970BBB0A9(iVar0, -1972074710);
		PED::_0x9238A3D970BBB0A9(Global_35, -1972074710);
	}
	else
	{
		PED::_0x9A4AC116CC1EEE14(iVar0);
		if (!func_465())
		{
			PED::_0x9A4AC116CC1EEE14(Global_35);
		}
	}
}

void func_369(int iParam0)
{
	if (func_87(iParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(iParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8229);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, false);
}

void func_370(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (func_125(14))
	{
		return;
	}
	if (Global_40.f_4283 != 7 && Global_40.f_4283 != 8)
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(&(Global_1357549->f_3[4])))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(iParam0, &(Global_1357549->f_3[4]), true, 0))
	{
		return;
	}
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 909522);
}

void func_371(int iParam0)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return;
	}
	if (func_131(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_128(iParam0);
	func_369(iVar0);
	func_30(iParam0, 16384, 1);
}

int func_372(int iParam0)
{
	if (func_114(iParam0))
	{
		return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

int func_373(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (((*Global_1888801)[iVar0 /*35*/])->f_20 == iParam3)
		{
			if (VOLUME::_DOES_VOLUME_EXIST(((*Global_1888801)[iVar0 /*35*/])->f_3))
			{
				if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iVar0 /*35*/])->f_3, vParam0))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_374(int iParam0)
{
	return (Global_1935630 && iParam0) != 0;
}

bool func_375(int iParam0)
{
	return (MISC::GET_GAME_TIMER() - iParam0) < &Global_1898438;
}

int func_376(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

Vector3 func_377()
{
	if (func_380(70))
	{
		return -1634.252f, -1358.577f, 83.9077f;
	}
	if (func_380(73))
	{
		return -1665.419f, -1346.258f, 84.11175f;
	}
	return -1641.1f, -1359.979f, 83.4932f;
}

int func_378(int iParam0)
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

int func_379(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_380(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_63(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

int func_381(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 862380358;
		case 1:
			return -624571557;
		case 2:
			return -2106670311;
		case 3:
			return 354018569;
		case 4:
			return -1613499260;
		case 5:
			return -1232184757;
		case 6:
			return -1312036548;
		case 7:
			return 1476138396;
		case 8:
			return 2069287816;
		case 9:
			return -1432916295;
		case 10:
			return -1845132692;
		case 11:
			return 2078646898;
		case 13:
			return 1246854539;
		case 14:
			return 1564353385;
		case 15:
			return 605985418;
		case 16:
			return -1867760364;
		case 17:
			return 1707260254;
		case 18:
			return 1254472765;
		case 19:
			return -283892864;
		case 20:
			return -323279751;
		case 21:
			return -645637806;
		case 22:
			return -429731387;
		case 23:
			return 1605814104;
		case 24:
			return -435322148;
		case 25:
			return -1950029483;
		case 26:
			return 1271180667;
		case 12:
			return 399100316;
	}
	return -1;
}

int func_382(var uParam0)
{
	struct<5> Var0;
	int iVar5;

	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = uParam0;
	if (func_466(Var0, 2065727156, &iVar5, 0))
	{
		return func_468(func_467(iVar5));
	}
	return 0;
}

int func_383(var uParam0, var uParam1)
{
	struct<4> Var0;

	Var0 = Global_1357549->f_576;
	if (*uParam1 != 0)
	{
		Var0.f_1 = *uParam1;
	}
	else
	{
		Var0.f_1 = Global_1357549->f_577;
	}
	Var0.f_2 = 1032438694;
	Var0.f_3 = uParam0;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		return Var0.f_1;
	}
	return 0;
}

int func_384(var uParam0)
{
	struct<5> Var0;
	int iVar5;

	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = uParam0;
	if (func_466(Var0, 2065727156, &iVar5, 0))
	{
		return func_467(iVar5);
	}
	return -1;
}

int func_385(int iParam0)
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

char* func_386(int iParam0)
{
	if (!func_261(iParam0))
	{
		return "Wilderness";
	}
	switch (iParam0)
	{
		case 0:
			return "CrawdadWillies";
		case 1:
			return "MacombsEnd";
		case 2:
			return "MerkinsWaller";
		case 3:
			return "Lagras";
		case 4:
			return "Lakay";
		case 5:
			return "SaintDenis";
		case 6:
			return "OrangePlantation";
		case 7:
			return "SerialKiller";
		case 8:
			return "Serendipity";
		case 9:
			return "ShadyBelle";
		case 10:
			return "SiltwaterStrand";
		case 11:
			return "AppleseedTimberCo";
		case 12:
			return "BerylsDream";
		case 13:
			return "BigValleyTrapper";
		case 14:
			return "DakotaRiverTrapper";
		case 15:
			return "FortRiggsHoldingCamp";
		case 16:
			return "HangingDogRanch";
		case 17:
			return "LoneMuleStead";
		case 18:
			return "MissingHusband";
		case 19:
			return "MontoRest";
		case 20:
			return "OwanjilaDam";
		case 21:
			return "PaintedSky";
		case 22:
			return "PronghornRanch";
		case 23:
			return "RiggsStation";
		case 24:
			return "BigvalleyShack";
		case 25:
			return "ShepherdsRise";
		case 26:
			return "Strawberry";
		case 27:
			return "ValleyView";
		case 28:
			return "WallaceStation";
		case 29:
			return "WatsonsCabin";
		case 30:
			return "Canebreak Manor";
		case 31:
			return "Copperhead";
		case 32:
			return "SisikaPenitentiary";
		case 33:
			return "BacchuBridge";
		case 34:
			return "DinoLady";
		case 35:
			return "OldFortWallace";
		case 36:
			return "SixPointCabin";
		case 37:
			return "BeechersHope";
		case 38:
			return "Blackwater";
		case 39:
			return "QuakersCove";
		case 40:
			return "AdlerRanch";
		case 41:
			return "DeadRival";
		case 50:
			return "CalumetRavine";
		case 51:
			return "CivilWarBride";
		case 42:
			return "ChezPorter";
		case 52:
			return "Cohutta";
		case 43:
			return "Colter";
		case 44:
			return "FrozenExplorer";
		case 53:
			return "GunFight";
		case 45:
			return "MillesaniClaim";
		case 46:
			return "MountainMan";
		case 47:
			return "StarvingChildren";
		case 48:
			return "TempestRim";
		case 54:
			return "TheLoft";
		case 55:
			return "Veteran";
		case 56:
			return "Wapiti";
		case 49:
			return "WinterMiningTown";
		case 57:
			return "AguasDulces";
		case 58:
			return "GuarmaCamp";
		case 59:
			return "CincoTorres";
		case 60:
			return "LaCapilla";
		case 61:
			return "Manicato";
		case 62:
			return "Abandoned Mill";
		case 64:
			return "CarmodyDell";
		case 65:
			return "CornwallKerosene";
		case 66:
			return "CropFarm";
		case 67:
			return "CumberlandFalls";
		case 68:
			return "DownsRanch";
		case 69:
			return "EmeraldRanch";
		case 70:
			return "GrangersHoggery";
		case 71:
			return "HorseshoeOverlook";
		case 72:
			return "LarnedSod";
		case 73:
			return "LoonyCult";
		case 74:
			return "LuckysCabin";
		case 75:
			return "SwansonsStation";
		case 76:
			return "Valentine";
		case 77:
			return "AberdeenPigFarm";
		case 78:
			return "Annesburg";
		case 63:
			return "BeechersC";
		case 79:
			return "BeaverHollow";
		case 80:
			return "BlackBalsamRise";
		case 81:
			return "BrandywineDrop";
		case 82:
			return "ButcherCreek";
		case 83:
			return "Doverhill";
		case 84:
			return "HappyFamily";
		case 85:
			return "Isolationist";
		case 86:
			return "MacLeansHouse";
		case 87:
			return "MossyFlats";
		case 88:
			return "RoanokeValley";
		case 89:
			return "RockySeven";
		case 90:
			return "RoanokeTrapper";
		case 91:
			return "VanHornMansion";
		case 92:
			return "VanHornTradingPost";
		case 93:
			return "BraithewaiteManor";
		case 94:
			return "BulgerGlade";
		case 95:
			return "CaligaHall";
		case 96:
			return "CatfishJacksons";
		case 97:
			return "ClemensCove";
		case 98:
			return "ClemensPoint";
		case 99:
			return "CompsonsStead";
		case 100:
			return "Dairy Farm";
		case 101:
			return "ScarletMeadowsHorseShop";
		case 102:
			return "LonniesShack";
		case 103:
			return "LoveTriangle";
		case 104:
			return "Radleys Pasture";
		case 105:
			return "Rhodes";
		case 106:
			return "SlavePen";
		case 107:
			return "AuroraBasinShack";
		case 108:
			return "DeadSettler";
		case 109:
			return "Cochinay";
		case 110:
			return "ManzanitaPost";
		case 111:
			return "PacificUnionRailroad";
		case 112:
			return "TannersReach";
		case 113:
			return "TallTreesTrapper";
		case 126:
			return "MacFarlanesRanch";
		case 127:
			return "ThievesLanding";
		case 120:
			return "Armadillo";
		case 121:
			return "CootsChapel";
		case 122:
			return "DonJulioHouse";
		case 124:
			return "RidgewoodFarm";
		case 123:
			return "RileysCharge";
		case 125:
			return "TwinRocks";
		case 114:
			return "Gaptooth Breach";
		case 115:
			return "Tumbleweed";
		case 116:
			return "Rathskeller Fork";
		case 129:
			return "SolomonsFolly";
		case 117:
			return "BenedictPoint";
		case 118:
			return "FortMercer";
		case 119:
			return "Plainview";
		case 128:
			return "CentralUnionRRCamp";
		default:
			break;
	}
	return "Wilderness";
}

int func_387(vector3 vParam0, int iParam3, var uParam4, int iParam5, char[4] cParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_STRING(cParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_388(int iParam0, int iParam1)
{
	vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
		return func_469(vVar0, iParam1);
	}
	return 0;
}

int func_389(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 3)
	{
		return 0;
	}
	if (!(Global_1359489->f_63.f_242[iParam2 /*18*/])->f_15)
	{
		return 0;
	}
	if (func_470(uParam0, iParam1, (Global_1359489->f_63.f_242[iParam2 /*18*/])->f_2))
	{
		return 1;
	}
	return 0;
}

int func_390(int iParam0)
{
	vector3 vVar0;
	int iVar3;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if ((Global_1359489->f_63.f_242[iVar3 /*18*/])->f_15)
		{
			if ((Global_1359489->f_63.f_242[iVar3 /*18*/])->f_8 < (Global_1359489->f_63.f_242[iVar3 /*18*/])->f_7)
			{
				if ((Global_1359489->f_63.f_242[iVar3 /*18*/])->f_14 != 3)
				{
					if (func_469(vVar0, iVar3))
					{
						return iVar3;
					}
				}
			}
		}
		iVar3++;
	}
	return -1;
}

void func_391(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_392(int iParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, int iParam15)
{
	vector3 vVar0[3];
	vector3 vVar10[3];
	int iVar20;
	int iVar21;
	int iVar22;
	char cVar23[32];
	int iVar27;

	if (iParam0 <= -1)
	{
		return;
	}
	if (bParam14)
	{
		iVar20 = func_471(iParam0, iParam1);
		func_472(&vVar0, &vVar10, iVar20, vParam3, vParam6, iParam9, iParam10, iParam11);
	}
	iVar21 = iParam2;
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&cVar23, "", 32);
		iVar27 = 0;
		if (iVar21 > 0)
		{
			StringCopy(&cVar23, func_473(iParam0, 3), 32);
			iVar21 = (iVar21 - 1);
			iVar27 = 1;
		}
		func_474(iParam0, func_402(iParam0), iVar27, bParam14, &cVar23, *(vVar0[iVar22 /*3*/]), *(vVar10[iVar22 /*3*/]), vParam6, iVar22, 0, -1082130432 /* Float: -1f */, iParam12, iParam13, iParam15);
		iVar22++;
	}
}

int func_393(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (PED::GET_PED_AS_GROUP_MEMBER(func_37(), iVar1) == uParam0->f_5)
			{
				uParam0->f_108 = iVar1;
				return 1;
			}
			iVar1++;
		}
	}
	return 0;
}

int func_394(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 10)
	{
		return 0;
	}
	if (&Global_1359489->f_63[iParam0 /*24*/] == 0)
	{
		return 0;
	}
	return (Global_1359489->f_63[iParam0 /*24*/])->f_16;
}

struct<4> func_395(int iParam0)
{
	char cVar0[32];
	char cVar4[32];

	if (iParam0 < 0 || iParam0 > 10)
	{
		StringCopy(&cVar0, "ERR", 32);
		return cVar0;
	}
	if (&Global_1359489->f_63[iParam0 /*24*/] == 0)
	{
		StringCopy(&cVar4, "ERR", 32);
		return cVar4;
	}
	return (Global_1359489->f_63[iParam0 /*24*/])->f_19;
}

float func_396(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return 0f;
	}
	if (&Global_1359489->f_63[iParam0 /*24*/] == 0)
	{
		return 0f;
	}
	return (Global_1359489->f_63[iParam0 /*24*/])->f_13;
}

bool func_397(int iParam0, int iParam1)
{
	if (iParam1 == 7)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(&(Global_1357549->f_3[iParam1])))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, &(Global_1357549->f_3[iParam1]), true, 0);
}

int func_398(int iParam0)
{
	int iVar0;

	iVar0 = 250;
	switch (iParam0)
	{
		case 0:
			iVar0 = 100;
			break;
		case 1:
			iVar0 = 150;
			break;
		case 2:
			iVar0 = 150;
			break;
		case 3:
			iVar0 = 200;
			break;
		case 5:
			iVar0 = 100;
			break;
		case 6:
			iVar0 = 100;
			break;
		case 7:
			iVar0 = 200;
			break;
		case 8:
			iVar0 = 200;
			break;
	}
	return (iVar0 * iVar0);
}

int func_399(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return PED::GET_MOUNT(iParam0);
	}
	return 0;
}

Vector3 func_400(int iParam0, int iParam1, vector3 vParam2, vector3 vParam5, float fParam8)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	var uVar8;
	int iVar9;
	float fVar10;

	fVar0 = BUILTIN::VDIST(vParam2, vParam5);
	vVar1 = { vParam2 };
	vVar4 = { vParam2 - vParam5 };
	vVar4.f_2 = 0f;
	vVar4 = { func_176(vVar4) };
	if (fVar0 > fParam8)
	{
		vVar1 = { vParam5 + Vector(fParam8, fParam8, fParam8) * vVar4 };
	}
	fVar7 = 1f;
	uVar8 = func_475((fVar7 / fParam8));
	iVar9 = 0;
	while (iVar9 < 5)
	{
		fVar10 = (fParam8 * func_401(func_476(iParam0, iParam1, vParam5, vVar4)));
		if (fVar10 < fVar7)
		{
			vVar1 = { func_477(vParam5, vVar1, uVar8) };
		}
		else
		{
			return vVar1;
		}
		iVar9++;
	}
	return vVar1;
}

float func_401(float fParam0)
{
	return (fParam0 * 0.01745329f);
}

var func_402(int iParam0)
{
	int iVar0;
	int iVar1[10];

	switch (iParam0)
	{
		case 0:
			iVar0 = 3;
			iVar1[0] = 830847823;
			iVar1[1] = -22664287;
			iVar1[2] = 2087366558;
			break;
		case 1:
			iVar0 = 3;
			iVar1[0] = -22664287;
			iVar1[1] = -1124614608;
			iVar1[2] = 830847823;
			break;
		case 2:
			iVar0 = 2;
			iVar1[0] = 2087366558;
			iVar1[1] = -1982207864;
			break;
		default:
			break;
	}
	return &(iVar1[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0)]);
}

void func_403(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	Global_1359489->f_63[iParam0 /*24*/] = 4;
}

bool func_404(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

int func_405(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_478(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_406(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_353() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0 /*1157*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam0 == iVar1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_407(int iParam0)
{
	if (!func_56(iParam0))
	{
		return -1;
	}
	if (iParam0 >= func_293(1))
	{
		return -1;
	}
	if (iParam0 >= 3 || iParam0 < 0)
	{
		return -1;
	}
	return Global_1359489[iParam0];
}

int func_408(int iParam0)
{
	if (!func_56(iParam0))
	{
		return 0;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_1154;
}

void func_409(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return;
	}
	if (func_299(iParam0, iParam1))
	{
		func_479(iParam0, bParam2);
		return;
	}
	iVar0 = -1;
	if (func_300(iParam0, iParam1, &iVar0))
	{
		func_305(iParam0, iVar0, bParam2);
	}
}

int func_410(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_411(int iParam0)
{
	if (Global_1327590->f_19744 == -1)
	{
		return false;
	}
	return Global_1327590->f_19744 == iParam0;
}

bool func_412(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_347(iParam1) || !func_347(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_413()
{
	switch (func_353())
	{
		case -1:
			return Global_40.f_4283;
	}
	return -1;
}

bool func_414(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_415(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_416(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_417(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_480(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_481(iParam0))
	{
		return 0;
	}
	if (func_482(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_418(iParam0, 1)) || func_483(32768))
	{
		if (!func_418(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_484())
	{
		return 0;
	}
	return 1;
}

bool func_418(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

void func_419(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_420(int iParam0)
{
	return (Global_1391410 && iParam0) != 0;
}

void func_421(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!func_56(iParam0))
	{
		return;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_12 == 0 || func_115(&(((*Global_1360165)[iParam0 /*1157*/])->f_12), 1))
	{
		if (MAP::DOES_BLIP_EXIST(*uParam1))
		{
			func_13(iParam0);
		}
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = func_115(&(((*Global_1360165)[iParam0 /*1157*/])->f_12), 512);
	if (func_115(&(((*Global_1360165)[iParam0 /*1157*/])->f_12), 128))
	{
		iVar0 = 942020339;
	}
	else if (func_115(&(((*Global_1360165)[iParam0 /*1157*/])->f_12), 8))
	{
		iVar0 = -546708623;
	}
	if (func_115(&(((*Global_1360165)[iParam0 /*1157*/])->f_12), 256))
	{
		iVar1 = func_485(-1739349092);
	}
	if (!MAP::DOES_BLIP_EXIST(*uParam1))
	{
		*uParam1 = MAP::_BLIP_ADD_FOR_ENTITY(422991367, func_112(iParam0));
	}
	if (MAP::DOES_BLIP_EXIST(*uParam1))
	{
		if (iVar0 != 0)
		{
			MAP::_0x662D364ABF16DE2F(*uParam1, iVar0);
			if (iVar0 == -546708623)
			{
				MAP::_0x662D364ABF16DE2F(*uParam1, 231194138);
			}
		}
		else
		{
			MAP::_SET_BLIP_FLASH_STYLE(*uParam1, iVar0);
		}
		if (bVar2 && !func_94(0, 0, 1))
		{
			MAP::_0xEDD964B7984AC291(*uParam1, -1944754404);
			if (func_115(&(((*Global_1360165)[iParam0 /*1157*/])->f_12), 1024))
			{
				MAP::_0x662D364ABF16DE2F(*uParam1, -46775694);
			}
			if (func_115(&(((*Global_1360165)[iParam0 /*1157*/])->f_12), 2048))
			{
				MAP::_0x662D364ABF16DE2F(*uParam1, 724623647);
			}
		}
		if (iVar1 != 0)
		{
			MAP::SET_BLIP_SPRITE(*uParam1, iVar1, true);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1360165)[iParam0 /*1157*/])->f_14)) && func_115(&(((*Global_1360165)[iParam0 /*1157*/])->f_12), 8))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, &(((*Global_1360165)[iParam0 /*1157*/])->f_14));
		}
		else
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, func_313(iParam0, 0));
		}
	}
}

int func_422(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	if (!func_406(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0 /*1157*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam0 == iVar1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

float func_423(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

float func_424(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_425(var uParam0)
{
	return *uParam0;
}

void func_426(var uParam0, vector3 vParam1)
{
	uParam0->f_3.f_3 = { vParam1 };
}

void func_427(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_428(vector3 vParam0, vector3 vParam3, bool bParam6, bool bParam7)
{
	bool bVar0;
	var uVar1;
	float fVar2;

	bVar0 = CAM::IS_SPHERE_VISIBLE(vParam0, 5f);
	if (bParam6)
	{
		if (func_486(vParam0 + Vector(0.2f, 0f, 0f)))
		{
			return 0;
		}
	}
	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vParam0 + Vector(1f, 0f, 0f), &uVar1, 0))
	{
		return 0;
	}
	if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, 7f))
	{
		return 0;
	}
	if (bVar0)
	{
	}
	else
	{
		if (bParam7)
		{
			if (vParam0.z > (vParam3.z + 10f))
			{
				return 0;
			}
		}
		fVar2 = BUILTIN::VDIST(vParam0, vParam3);
		if (fVar2 > 40f && fVar2 < 80f)
		{
			return 1;
		}
	}
	return 0;
}

int func_429(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, int iParam8, float fParam9, int iParam10, float fParam11)
{
	int iVar0;

	switch (*iParam3)
	{
		case 0:
			if (iParam3->f_2 > 4)
			{
				*bParam4 = 1;
				return 0;
			}
			iParam3->f_1 = TASK::_0x74F0209674864CBD();
			func_487(&(iParam3->f_1), iParam3->f_2, vParam0, iParam5, iParam7, iParam8, fParam9, iParam10, fParam11);
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
			}
			else
			{
				func_488(&(iParam3->f_1), iParam5);
				if (!func_60(iParam3->f_6))
				{
					TASK::_0xCE4E669400E5F8AA(iParam3->f_1, func_176(iParam3->f_6));
				}
				TASK::_0x2B8AF29A78024BD3(iParam3->f_1);
			}
			*iParam3 = 3;
			break;
		case 3:
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
				iVar0 = 4;
			}
			else
			{
				iVar0 = TASK::_0x0365000D8BF86531(&(iParam3->f_1));
			}
			switch (iVar0)
			{
				case 4:
					if (bParam6 && iParam3->f_2 < 4)
					{
						iParam3->f_2++;
						*iParam3 = 0;
					}
					else
					{
						*bParam4 = 1;
					}
					break;
				case 3:
					iParam3->f_3 = { TASK::_0x865732725536EE39(&(iParam3->f_1)) };
					*iParam3 = 4;
					if (!bParam6)
					{
						return 1;
					}
					break;
			}
			break;
		case 4:
			return 1;
	}
	return 0;
}

Vector3 func_430(var uParam0)
{
	return uParam0->f_3.f_3;
}

bool func_431(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_432(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return 0;
	}
	if (func_144(iParam0, 256))
	{
		return 1;
	}
	iVar0 = 0;
	if (bParam2)
	{
		iVar0 = 256;
	}
	if (!func_67(iParam1, iVar0))
	{
		return 0;
	}
	PED::_0x1902C4CFCC5BE57C(iParam1, func_489(iParam0));
	PED::_0xCC8CA3E88256E58F(iParam1, 0, 1, 1, 1, 0);
	func_30(iParam0, 256, 1);
	return 1;
}

int func_433(int iParam0, int iParam1)
{
	if (!func_56(iParam0))
	{
		return 0;
	}
	if (!func_144(iParam0, 256))
	{
		return 1;
	}
	if (!func_67(iParam1, 256))
	{
		return 0;
	}
	PED::_0xA2F8B3B5FEDFC100(iParam1, func_489(iParam0));
	PED::_0xCC8CA3E88256E58F(iParam1, 0, 1, 1, 1, 0);
	func_30(iParam0, 256, 0);
	return 1;
}

void func_434(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_114(iParam0))
	{
		return;
	}
	if (func_131(iParam0, 1) == 0)
	{
		return;
	}
	if (bParam3)
	{
		func_490(func_128(iParam0), 1f, 0);
	}
	if (bParam1)
	{
		func_458(iParam0);
	}
	else
	{
		func_460(iParam0);
	}
	if (bParam2)
	{
		func_371(iParam0);
	}
	else
	{
		func_462(iParam0);
	}
}

void func_435(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_491(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_492(iParam0))
	{
		if (func_328(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (func_227(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_435(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_435(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_227(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 0, 1);
		}
	}
	if (func_227(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, 1, func_227(iParam5, 32), 1);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, 1, func_227(iParam5, 32), 1);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (func_227(iParam5, 129))
	{
		if (func_227(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_227(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, 1, func_227(iParam5, 32), 1);
	}
	if (bVar4)
	{
		if (!func_227(iParam5, 16))
		{
			PED::_0x7DE9692C6F64CFE8(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), uVar3, 0, 0);
		}
		if (func_492(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_227(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, 1, 0);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_227(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

int func_436(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 5:
		case 6:
		case 8:
		case 10:
		case 23:
			return 1;
		case 4:
		case 9:
		case 20:
			return 2;
		case 7:
			if (func_239(45))
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
		case 11:
			if (func_239(45))
			{
				return 2;
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_437(int iParam0, int iParam1)
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

void func_438(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!func_114(iParam0))
	{
		return;
	}
	iVar1 = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
	if (PED::IS_PED_GROUP_MEMBER(iVar0, iVar1, 0))
	{
		return;
	}
	COMPANION::_0xCBD9EC60495C728C(func_37());
	PED::SET_PED_CONFIG_FLAG(iVar0, 279, true);
	PED::SET_PED_AS_GROUP_MEMBER(iVar0, iVar1);
	if (bParam1)
	{
		func_368(iParam0, 1, Global_35);
	}
}

void func_439(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_114(iParam0))
	{
		iVar0 = 0;
		iVar1 = 0;
		switch (iParam0)
		{
			case 2:
				func_493(&iVar0, 1);
				break;
			case 14:
				func_493(&iVar0, 8);
				func_493(&iVar1, 4);
				func_493(&iVar1, 5);
				func_493(&iVar1, 0);
				break;
			case 13:
			case 15:
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
				func_493(&iVar0, 8);
				func_493(&iVar0, 5);
				func_493(&iVar1, 4);
				func_493(&iVar1, 0);
				break;
		}
		COMPANION::_0xDEB369F6AD168C58(func_112(iParam0), iVar0);
		COMPANION::_0x1740E3DEE0AE4D27(func_112(iParam0), iVar1);
	}
}

int func_440(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_494(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_441(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_495(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_442(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_443(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_444(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_445(int iParam0, int iParam1)
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

void func_446(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_496(iParam0, iParam6);
	func_497(iParam0, iParam5);
	func_498(iParam0, iParam4);
	func_342(iParam0, iParam3);
	func_343(iParam0, iParam2);
	func_499(iParam0, iParam1);
}

float func_447(float fParam0, float fParam1, float fParam2)
{
	float fVar0;

	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(BUILTIN::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_448(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	char* sVar12;

	if (!func_56(iParam0))
	{
		return 0;
	}
	vVar0 = { iParam3, iParam4, iParam5 };
	uVar3 = func_133(iParam0, 1);
	switch (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_12)
	{
		case 0:
			((*Global_1360165)[iParam0 /*1157*/])->f_124 = PERSCHAR::_0x31C70A716CAE1FEE(uVar3);
			((*Global_1360165)[iParam0 /*1157*/])->f_125 = 0;
			if (func_67(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
			{
				func_29(iParam0, 3);
			}
			else
			{
				if (!func_500(iParam0) && func_501(iParam0, &uVar4))
				{
					PERSCHAR::_0x187D65F3AEC5D679(func_131(iParam0, 1), &uVar4);
				}
				func_30(iParam0, 256, 0);
				func_29(iParam0, 1);
			}
			break;
		case 1:
			if (!Global_1359489->f_12)
			{
				if (!PERSCHAR::_0xA8120EBEAF290C7A(uVar3))
				{
					return func_502();
				}
				if (bParam2 && !func_60(vVar0))
				{
					PERSCHAR::_0x59C7AD6FEA2AC449(uVar3, vVar0);
				}
				else if (bParam2)
				{
					PERSCHAR::_0xD4B614179BCD0654(uVar3);
				}
				if (!func_503(iParam0, vVar0, iParam6, bParam10))
				{
					return func_502();
				}
				if (func_67(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
				{
					if (PERSCHAR::_0x31C70A716CAE1FEE(uVar3) != ((*Global_1360165)[iParam0 /*1157*/])->f_124)
					{
					}
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(((*Global_1360165)[iParam0 /*1157*/])->f_124, true))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
					}
					ENTITY::FREEZE_ENTITY_POSITION(((*Global_1360165)[iParam0 /*1157*/])->f_124, true);
					ENTITY::SET_ENTITY_INVINCIBLE(((*Global_1360165)[iParam0 /*1157*/])->f_124, true);
					func_29(iParam0, 2);
				}
			}
			break;
		case 2:
			if (!func_67(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
			{
				func_29(iParam0, 1);
				return func_502();
			}
			if (!bParam9 || PED::_0xA0BC8FAED8CFEB3C(((*Global_1360165)[iParam0 /*1157*/])->f_124))
			{
				func_29(iParam0, 3);
			}
			break;
		case 3:
			if (!func_67(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
			{
				func_29(iParam0, 1);
				return func_502();
			}
			if (bParam7)
			{
				if (!func_432(iParam0, ((*Global_1360165)[iParam0 /*1157*/])->f_124, 1))
				{
					return func_502();
				}
			}
			if ((bParam2 && !func_60(vVar0)) && !func_504(vVar0, ENTITY::GET_ENTITY_COORDS(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, false), 1056964608 /* Float: 0.5f */, 1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(((*Global_1360165)[iParam0 /*1157*/])->f_124))
				{
					ENTITY::DETACH_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				}
				func_435(((*Global_1360165)[iParam0 /*1157*/])->f_124, vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
			}
			if (bParam1)
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(((*Global_1360165)[iParam0 /*1157*/])->f_124))
				{
					if (func_4(iParam0, 39, 1))
					{
					}
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				}
				func_26(iParam0, 39, 1);
				func_30(iParam0, 8, 1);
				func_30(iParam0, 64, 0);
				((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			}
			ENTITY::FREEZE_ENTITY_POSITION(((*Global_1360165)[iParam0 /*1157*/])->f_124, false);
			ENTITY::SET_ENTITY_INVINCIBLE(((*Global_1360165)[iParam0 /*1157*/])->f_124, false);
			func_332(((*Global_1360165)[iParam0 /*1157*/])->f_124, iParam0);
			if (bParam8)
			{
				POPULATION::_0xF74E134F40192884(((*Global_1360165)[iParam0 /*1157*/])->f_124, 1);
			}
			sVar12 = func_317(iParam0, func_241());
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar12))
			{
				PERSCHAR::_0x63AA2B8EB087886A(func_131(iParam0, 1), MISC::GET_HASH_KEY(sVar12));
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_70 = ((*Global_1360165)[iParam0 /*1157*/])->f_124;
			((*Global_1360165)[iParam0 /*1157*/])->f_124 = 0;
			func_12(iParam0, 40, 0);
			func_30(iParam0, 32, 0);
			func_29(iParam0, 0);
			return ((*Global_1360165)[iParam0 /*1157*/])->f_70;
	}
	return func_502();
}

void func_449(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case 0:
		case 6:
			iVar0 = 0;
			break;
		case 3:
			iVar1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_POINTS(iParam1, 16);
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::ROUND((IntToFloat(iVar1) * 0.4f)), BUILTIN::ROUND((IntToFloat(iVar1) * 0.75f)));
			break;
		default:
			iVar1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_POINTS(iParam1, 16);
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::ROUND((IntToFloat(iVar1) * 0.1f)), BUILTIN::ROUND((IntToFloat(iVar1) * 0.4f)));
			break;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iParam1, 16, iVar0);
}

int func_450(int iParam0)
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

int func_451(int iParam0, int iParam1)
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

void func_452(int iParam0)
{
	int iVar0;

	if (!func_114(iParam0))
	{
		return;
	}
	func_505(iParam0, 0, &((Global_40.f_4942[iParam0 /*60*/])->f_8));
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_505(iParam0, 0, (Global_40.f_4942[iParam0 /*60*/])->f_11[iVar0 /*3*/]);
		iVar0++;
	}
}

int func_453(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam3)
	{
		if (func_300(iParam0, iParam1, iParam2))
		{
			if (iParam4 > 0 || iParam5 > 0)
			{
				iVar0 = func_81();
				func_341(&iVar0, 0, iParam4, iParam5, 0, 0, 0, 1);
				((Global_40.f_4942[iParam0 /*60*/])->f_11[*iParam2 /*3*/])->f_1 = iVar0;
			}
			else
			{
				((Global_40.f_4942[iParam0 /*60*/])->f_11[*iParam2 /*3*/])->f_1 = -15;
			}
			return 1;
		}
	}
	*iParam2 = 0;
	*iParam2 = 0;
	while (*iParam2 < 10)
	{
		if (!func_134(&((Global_40.f_4942[iParam0 /*60*/])->f_11[*iParam2 /*3*/])))
		{
			iVar1 = -15;
			if (iParam4 > 0 || iParam5 > 0)
			{
				iVar1 = func_81();
				func_341(&iVar1, 0, iParam4, iParam5, 0, 0, 0, 1);
			}
			(Global_40.f_4942[iParam0 /*60*/])->f_11[*iParam2 /*3*/] = iParam1;
			((Global_40.f_4942[iParam0 /*60*/])->f_11[*iParam2 /*3*/])->f_1 = iVar1;
			((Global_40.f_4942[iParam0 /*60*/])->f_11[*iParam2 /*3*/])->f_2 = 0;
			return 1;
		}
		*iParam2++;
	}
	func_137(iParam0, 0);
	*iParam2 = 9;
	iVar2 = -15;
	if (iParam4 > 0 || iParam5 > 0)
	{
		iVar2 = func_81();
		func_341(&iVar2, 0, iParam4, iParam5, 0, 0, 0, 1);
	}
	(Global_40.f_4942[iParam0 /*60*/])->f_11[*iParam2 /*3*/] = iParam1;
	((Global_40.f_4942[iParam0 /*60*/])->f_11[*iParam2 /*3*/])->f_1 = iVar2;
	((Global_40.f_4942[iParam0 /*60*/])->f_11[*iParam2 /*3*/])->f_2 = 0;
	return 1;
}

int func_454(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	if (!func_56(iParam0))
	{
		return 0;
	}
	if (!func_135(iParam0, iParam1, &iVar0, &bVar1))
	{
		return 0;
	}
	if (bVar1)
	{
		return (Global_40.f_4942[iParam0 /*60*/])->f_8.f_2;
	}
	return ((Global_40.f_4942[iParam0 /*60*/])->f_11[iVar0 /*3*/])->f_2;
}

int func_455(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return 0;
	}
	if (!func_506(iParam0))
	{
		return 0;
	}
	if (func_507(iParam0, -2147483648))
	{
		return 1;
	}
	if (func_507(iParam0, 1073741824 /* Float: 2f */))
	{
		return 1;
	}
	iVar0 = func_508(iParam1);
	if (iVar0 < ((*Global_1360165)[iParam0 /*1157*/])->f_22)
	{
		return 1;
	}
	if (iVar0 == ((*Global_1360165)[iParam0 /*1157*/])->f_22)
	{
		if (bParam2)
		{
			return 1;
		}
		if (!func_507(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_456(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_114(iParam0))
	{
		return 0;
	}
	if (!bParam2)
	{
		if (func_455(iParam0, iParam1, 0))
		{
			return 0;
		}
	}
	if (iParam3 == -1)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_140 = (((*Global_1360165)[iParam0 /*1157*/])->f_140 || iParam1);
	}
	else
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_141 = (((*Global_1360165)[iParam0 /*1157*/])->f_141 || iParam1);
		((*Global_1360165)[iParam0 /*1157*/])->f_142 = &Global_1899515;
		func_341(&(((*Global_1360165)[iParam0 /*1157*/])->f_142), 0, 0, iParam3, 0, 0, 0, 0);
	}
	return 1;
}

void func_457(int iParam0)
{
	if (func_87(iParam0, 0))
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

void func_458(int iParam0)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return;
	}
	if (func_131(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_128(iParam0);
	func_457(iVar0);
	func_30(iParam0, 8192, 1);
}

void func_459(int iParam0)
{
	if (func_87(iParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 179, false);
	ENTITY::SET_ENTITY_PROOFS(iParam0, 0, false);
}

void func_460(int iParam0)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return;
	}
	if (func_131(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_128(iParam0);
	func_459(iVar0);
	func_30(iParam0, 8192, 0);
}

void func_461(int iParam0)
{
	if (func_87(iParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(iParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 1);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, true);
}

void func_462(int iParam0)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return;
	}
	if (func_131(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_128(iParam0);
	func_461(iVar0);
	func_30(iParam0, 16384, 0);
}

int func_463(int iParam0)
{
	if (func_114(iParam0))
	{
		if (func_67(Global_1360165[iParam0 /*1157*/], 0))
		{
			return 1;
		}
	}
	return 0;
}

char* func_464(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DUTCH";
		case 3:
			return "BILL";
		case 1:
			return "JOHN";
		case 2:
			return "JAVIER";
		case 4:
			return "UNCLE";
		case 5:
			return "HOSEA";
		case 6:
			return "MICAH";
		case 7:
			return "CHARLES";
		case 8:
			return "SEAN";
		case 9:
			return "LENNY";
		case 13:
			return "ABIGAIL";
		case 10:
			return "KIERAN";
		case 14:
			return "JACK";
		case 15:
			return "MARYBETH";
		case 16:
			return "MOLLY";
		case 17:
			return "PEARSON";
		case 18:
			return "STRAUSS";
		case 19:
			return "GRIMSHAW";
		case 20:
			return "KAREN";
		case 21:
			return "SWANSON";
		case 22:
			return "TILLY";
		case 23:
			return "TRELAWNY";
		case 11:
			return "SADIE";
		case 24:
			return "CLEET";
		case 25:
			return "JOE";
		case 26:
			return "EAGLEFLIES";
		case 12:
			return "DOG";
		default:
			break;
	}
	return "Companion unknown";
}

bool func_465()
{
	if (func_353() != -1)
	{
		return false;
	}
	return func_293(1) > 0;
}

int func_466(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	uVar0 = *iParam6;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_467(int iParam0)
{
	switch (iParam0)
	{
		case -2045110373:
			return 5;
		case 2092390181:
			return 6;
		case 695356898:
			return 0;
		case 2093317438:
			return 2;
		case -145951480:
			return 4;
		case -432333475:
			return 1;
		case -1327067584:
			return 3;
		case -1192044061:
			return 7;
		case 1206762561:
			return 8;
		default:
			break;
	}
	return -1;
}

int func_468(int iParam0)
{
	struct<4> Var0;

	Var0 = Global_1357549->f_576;
	Var0.f_2 = 29309381;
	Var0.f_3 = func_509(iParam0);
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		return Var0.f_1;
	}
	return 0;
}

int func_469(vector3 vParam0, int iParam3)
{
	if (iParam3 < 0 || iParam3 >= 3)
	{
		return 0;
	}
	if (!(Global_1359489->f_63.f_242[iParam3 /*18*/])->f_15)
	{
		return 0;
	}
	if (BUILTIN::VDIST2(vParam0, (Global_1359489->f_63.f_242[iParam3 /*18*/])->f_2) < (Global_1359489->f_63.f_242[iParam3 /*18*/])->f_5)
	{
		return 1;
	}
	return 0;
}

int func_470(var uParam0, int iParam1, vector3 vParam2)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	vVar0 = { func_510(iParam1) };
	return func_511(uParam0, vVar0, vParam2, 0);
}

int func_471(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			if (iParam1 == 1)
			{
				return 0;
			}
			else if (iParam1 == 2)
			{
				return 1;
			}
			else if (iParam1 == 3)
			{
				return 2;
			}
			break;
		case 2:
			return 0;
	}
	return -1;
}

void func_472(var uParam0, var uParam1, int iParam2, vector3 vParam3, vector3 vParam6, float fParam9, float fParam10, float fParam11)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	fVar0 = (fParam9 / 2f);
	fVar1 = (fParam10 / 2f);
	switch (iParam2)
	{
		case 0:
			vVar5 = { func_176(vParam6 - vParam3) };
			vVar8 = { func_512(vVar5, 0f, 0f, 1f) };
			*((*uParam0)[0 /*3*/]) = { vParam3 + func_513(0f, 0f, 0f, fParam11, 0.1f) };
			*((*uParam0)[1 /*3*/]) = { vParam3 + vVar8 * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam9, fParam10)) + func_513(0f, 0f, 0f, fParam11, 0.1f) };
			*((*uParam0)[2 /*3*/]) = { vParam3 - vVar8 * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam9, fParam10)) + func_513(0f, 0f, 0f, fParam11, 0.1f) };
			*((*uParam1)[0 /*3*/]) = { vVar5 };
			*((*uParam1)[1 /*3*/]) = { vVar5 };
			*((*uParam1)[2 /*3*/]) = { vVar5 };
			break;
		case 1:
			vVar2 = { func_514() };
			*((*uParam1)[0 /*3*/]) = { func_176(vVar2) };
			*((*uParam1)[1 /*3*/]) = { -*((*uParam1)[0 /*3*/]) };
			*((*uParam0)[0 /*3*/]) = { vParam3 - *((*uParam1)[0 /*3*/]) * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar0, fVar1)) + func_513(0f, 0f, 0f, fParam11, 0.1f) };
			*((*uParam0)[1 /*3*/]) = { vParam3 - *((*uParam1)[1 /*3*/]) * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar0, fVar1)) + func_513(0f, 0f, 0f, fParam11, 0.1f) };
			break;
		case 2:
			vVar2 = { func_514() };
			*((*uParam1)[0 /*3*/]) = { func_176(vVar2) };
			func_515(&vVar2, &(vVar2.f_1), 120f);
			*((*uParam1)[1 /*3*/]) = { func_176(vVar2) };
			func_515(&vVar2, &(vVar2.f_1), 120f);
			*((*uParam1)[2 /*3*/]) = { func_176(vVar2) };
			*((*uParam0)[0 /*3*/]) = { vParam3 - *((*uParam1)[0 /*3*/]) * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar0, fVar1)) + func_513(0f, 0f, 0f, fParam11, 0.1f) };
			*((*uParam0)[1 /*3*/]) = { vParam3 - *((*uParam1)[1 /*3*/]) * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar0, fVar1)) + func_513(0f, 0f, 0f, fParam11, 0.1f) };
			*((*uParam0)[2 /*3*/]) = { vParam3 - *((*uParam1)[2 /*3*/]) * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar0, fVar1)) + func_513(0f, 0f, 0f, fParam11, 0.1f) };
			break;
	}
}

var func_473(int iParam0, int iParam1)
{
	int iVar0;
	char* sVar1[5];

	switch (iParam0)
	{
		case 0:
			iVar0 = 2;
			sVar1[0] = "INDIFF1";
			sVar1[1] = "INDIFF2";
			break;
		case 1:
			iVar0 = 1;
			if (iParam1 > 1)
			{
				sVar1[0] = "WAIT1";
			}
			else
			{
				sVar1[0] = "WAIT2";
			}
			break;
		case 2:
			iVar0 = 2;
			sVar1[0] = "SHOCK1";
			sVar1[1] = "SHOCK2";
			break;
		default:
			break;
	}
	return &(sVar1[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0)]);
}

void func_474(int iParam0, var uParam1, int iParam2, bool bParam3, char* sParam4, vector3 vParam5, struct<2> Param8, int iParam10, vector3 vParam11, int iParam14, int iParam15, int iParam16, float fParam17, int iParam18, int iParam19)
{
	struct<24> Var0;

	if (Global_1359489->f_63.f_241 >= 10)
	{
		return;
	}
	if (bParam3)
	{
		Var0.f_10 = func_401(MISC::GET_HEADING_FROM_VECTOR_2D(Param8, Param8.f_1));
		Var0 = 1;
	}
	else
	{
		Var0.f_23 = 0;
		Var0.f_10 = 0f;
		Var0 = 2;
	}
	Var0.f_3 = uParam1;
	Var0.f_4 = { vParam5 };
	Var0.f_7 = { vParam11 };
	Var0.f_11 = iParam15;
	Var0.f_12 = iParam16;
	Var0.f_13 = (fParam17 * fParam17);
	Var0.f_1 = iParam0;
	Var0.f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Var0.f_14 = iParam18;
	Var0.f_15 = bParam3;
	Var0.f_16 = iParam2;
	StringCopy(&(Var0.f_19), sParam4, 32);
	Var0.f_17 = iParam19;
	*(Global_1359489->f_63[iParam14 /*24*/]) = { Var0 };
	if ((Global_1359489->f_63[iParam14 /*24*/])->f_15)
	{
		func_516(Global_1359489->f_63[iParam14 /*24*/]);
	}
}

float func_475(float fParam0)
{
	return (fParam0 * 57.29578f);
}

float func_476(int iParam0, int iParam1, vector3 vParam2, struct<2> Param5, var uParam7)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;

	fVar0 = 999999f;
	iVar1 = 0;
	while (iVar1 < Global_1359489->f_63.f_241)
	{
		if (((Global_1359489->f_63[iVar1 /*24*/])->f_14 == iParam0 && ((Global_1359489->f_63[iVar1 /*24*/])->f_15 || (Global_1359489->f_63[iVar1 /*24*/])->f_18)) && iVar1 != iParam1)
		{
			vVar2 = { func_176((Global_1359489->f_63[iVar1 /*24*/])->f_4 - vParam2) };
			fVar5 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Param5, Param5.f_1, vVar2.x, vVar2.y);
			if (fVar5 < fVar0)
			{
				fVar0 = fVar5;
			}
		}
		iVar1++;
	}
	return fVar0;
}

Vector3 func_477(vector3 vParam0, vector3 vParam3, float fParam6)
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;

	uVar0 = vParam0.z;
	vVar1 = { vParam3 - vParam0 };
	vVar4 = { ((vVar1.x * BUILTIN::COS(fParam6)) - (vVar1.y * BUILTIN::SIN(fParam6))), ((vVar1.x * BUILTIN::SIN(fParam6)) + (vVar1.y * BUILTIN::COS(fParam6))), 0f };
	vVar4 = { vVar4 + vParam0 };
	vVar4.f_2 = uVar0;
	return vVar4;
}

void func_478(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_479(int iParam0, bool bParam1)
{
	if (!func_56(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_1154 = bParam1;
}

bool func_480(int iParam0, int iParam1)
{
	if (func_353() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_481(int iParam0)
{
	if (func_353() != -1)
	{
		if (func_418(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_418(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_482(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_418(iParam0, 65536) && !func_418(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_418(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_418(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_483(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_484()
{
	return Global_1905944->f_5694;
}

int func_485(int iParam0)
{
	switch (iParam0)
	{
		case 1784895540:
			return 500148876 /* GXTEntry: "Hunting Ground" */;
		case 654481153:
			return -1575595762 /* GXTEntry: "Fishing" */;
		case -2036347356:
			return 1243830185 /* GXTEntry: "Poker" */;
		case -1341684320:
			return 1243830185 /* GXTEntry: "Poker" */;
		case -1567081107:
			return -1650465405 /* GXTEntry: "Dominoes" */;
		case -919476462:
			return -729441538;
		case -1670940721:
			return 623155783;
		case 754620122:
			return 423351566 /* GXTEntry: "Herd" */;
		case -1739349092:
			return -1606321000 /* GXTEntry: "Caravan Camp" */;
		case -1511391406:
			return 1974815632 /* GXTEntry: "Five Finger Fillet" */;
		case 565221344:
			return 444204045 /* GXTEntry: "Home Robbery" */;
		default:
			break;
	}
	return 0;
}

int func_486(vector3 vParam0)
{
	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
	{
		if (!INTERIOR::_ARE_COORDS_COLLIDING_WITH_EXTERIOR(vParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_487(var uParam0, int iParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, float fParam8, float fParam9, float fParam10)
{
	if (!func_60(vParam2))
	{
		TASK::_0x2064B33F6E6B92D4(*uParam0, vParam2);
	}
	TASK::_0x9B6A58FDB0024F12(*uParam0, iParam7);
	switch (iParam5)
	{
		case 27:
			TASK::_0xB8E3486D107F4194(*uParam0, 90f);
			TASK::_0x827A58CED9D4D5B4(*uParam0, 180f);
			break;
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
			break;
		default:
			TASK::_0x827A58CED9D4D5B4(*uParam0, fParam6);
			if (fParam10 != 0f)
			{
				TASK::_0xB8E3486D107F4194(*uParam0, fParam10);
			}
			break;
	}
	switch (iParam5)
	{
		case 0:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 11:
		case 14:
		case 15:
		case 16:
		case 18:
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
			TASK::_0xE9225354FB7437A7(*uParam0, 1);
			break;
	}
	switch (iParam5)
	{
		case 12:
		case 13:
			TASK::_0xFF8AFCA532B500D4(*uParam0, 16384);
			break;
	}
	switch (iParam5)
	{
		case 2:
		case 3:
			TASK::_0xFF8AFCA532B500D4(*uParam0, 5);
			break;
	}
	switch (iParam5)
	{
		case 35:
		case 43:
			TASK::_0x764DB5A48390FBAD(*uParam0, 1);
			break;
	}
	if (fParam8 == -0.01f)
	{
		switch (iParam5)
		{
			case 12:
			case 13:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, ((80f - 40f) / 2f));
				TASK::_0xB79817DB31FF72B9(*uParam0, 0f);
				break;
			case 4:
				TASK::_0x954451EA2D2120FB(*uParam0, 0.5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 2.5f);
				break;
			case 5:
				TASK::_0x954451EA2D2120FB(*uParam0, 3f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 6f);
				break;
			case 6:
				TASK::_0x954451EA2D2120FB(*uParam0, 5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 7:
				TASK::_0x954451EA2D2120FB(*uParam0, 2f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 8:
				TASK::_0x954451EA2D2120FB(*uParam0, 5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 9:
				TASK::_0x954451EA2D2120FB(*uParam0, 12f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 18f);
				break;
			case 10:
				TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 65f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 0:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 55f);
				break;
			case 11:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 15f);
				break;
			case 15:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 40f);
				break;
			case 14:
				TASK::_0x954451EA2D2120FB(*uParam0, 50f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
			case 16:
				TASK::_0x954451EA2D2120FB(*uParam0, 60f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 30:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 150f);
				break;
			case 2:
				TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 25f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 150f);
				break;
			case 18:
				TASK::_0x954451EA2D2120FB(*uParam0, 1f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 20f);
				break;
			case 20:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 21:
				TASK::_0x954451EA2D2120FB(*uParam0, 80f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 22:
				TASK::_0x954451EA2D2120FB(*uParam0, 70f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 23:
			case 24:
			case 25:
				TASK::_0x954451EA2D2120FB(*uParam0, 2f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 26:
				TASK::_0x954451EA2D2120FB(*uParam0, 50f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
			case 27:
				TASK::_0x954451EA2D2120FB(*uParam0, 3f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 6f);
				break;
			case 28:
				TASK::_0x954451EA2D2120FB(*uParam0, 40f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 50f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 45f);
				break;
			case 29:
				TASK::_0x954451EA2D2120FB(*uParam0, 15f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 25f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 20f);
				break;
			case 31:
				TASK::_0x954451EA2D2120FB(*uParam0, 80f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 140f);
				break;
			case 32:
				TASK::_0x954451EA2D2120FB(*uParam0, 40f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 125f);
				break;
			case 33:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 34:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 35:
				TASK::_0x954451EA2D2120FB(*uParam0, 60f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
			case 36:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_517(10f, 40f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_517(30f, 60f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 37:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_517(40f, 80f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_517(50f, 90f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 38:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_517(30f, 60f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_517(50f, 80f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 39:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_517(0f, 10f, 1f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_517(5f, 15f, 1f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 3f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 3f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 40:
				TASK::_0x2EB977293923C723(*uParam0, 40f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_517(60f, 120f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_517(100f, 130f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 20f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 41:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_517(10f, 35f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_517(25f, 50f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 2f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 42:
			case 44:
			case 45:
				TASK::_0x2EB977293923C723(*uParam0, 40f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_517(50f, 80f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_517(75f, 95f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 43:
				TASK::_0x2EB977293923C723(*uParam0, func_517(95f, 90f, 80f, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, func_517(95f, 90f, 80f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_517(125f, 115f, 100f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			default:
				if (iParam1 == 0)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 1f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 5f);
				}
				else if (iParam1 == 1)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 5f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 15f);
				}
				else if (iParam1 == 2)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 15f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 35f);
				}
				else
				{
					iParam1 = 3;
					TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
					TASK::_0xB79817DB31FF72B9(*uParam0, 65f);
					TASK::_0x954451EA2D2120FB(*uParam0, 35f);
					if (iParam5 != 19)
					{
						TASK::_0x0F4F6C4CE471259D(*uParam0, 160f);
					}
					else
					{
						TASK::_0x0F4F6C4CE471259D(*uParam0, 65f);
					}
				}
				break;
		}
	}
	else
	{
		TASK::_0x954451EA2D2120FB(*uParam0, fParam8);
		TASK::_0x0F4F6C4CE471259D(*uParam0, fParam9);
	}
}

void func_488(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 64, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 1:
		case 19:
		case 20:
		case 45:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 2:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 73, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 1);
			break;
		case 3:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 34, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 73, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 1);
			break;
		case 4:
		case 5:
		case 6:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 7:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 8:
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 9:
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 10:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 34, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 12:
		case 13:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			TASK::_0xBC3F847AE2C3DC65(*uParam0, 25f);
			TASK::_0x450080DDEDB91258(*uParam0, 25f);
			break;
		case 11:
		case 30:
			TASK::_0x19BC99C678FBA139(*uParam0, 77, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 15:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
		case 14:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 46:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 9, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			break;
		case 16:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 5, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 17:
			TASK::_0x2EB977293923C723(*uParam0, 40f);
			TASK::_0x764DB5A48390FBAD(*uParam0, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 18:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 21:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
		case 22:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 23:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 4, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 24:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 25:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 26:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 27:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 74, 0);
			break;
		case 28:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 77, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 29:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 12, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 31:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 64, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			break;
		case 32:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			break;
		case 33:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 3, 0);
			break;
		case 34:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 35:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 1, 0);
			break;
		case 41:
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			break;
		case 42:
			TASK::_0x19BC99C678FBA139(*uParam0, 2, 1);
		case 44:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 43:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 5, 0);
			break;
		case 47:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 28, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
	}
}

int func_489(int iParam0)
{
	return 1268180497;
}

void func_490(int iParam0, float fParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_518(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, iParam2))));
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

int func_491(var uParam0)
{
	return uParam0;
}

bool func_492(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_0x772A1969F649E902(iVar0);
}

void func_493(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(1, iVar0));
}

int func_494(int iParam0, int iParam1)
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

int func_495(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_496(int iParam0, int iParam1)
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

void func_497(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_498(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_442(*iParam0);
	iVar1 = func_441(*iParam0);
	if (iParam1 < 1 || iParam1 > func_445(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_499(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_500(int iParam0)
{
	if (!func_56(iParam0))
	{
		return 0;
	}
	switch (((*Global_1360165)[iParam0 /*1157*/])->f_127)
	{
		case -784953535:
		case -543937540:
		case -233385727:
		case 893704044:
		case 1132950513:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_501(int iParam0, char* sParam1)
{
	switch (Global_40.f_4283)
	{
		case 0:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "colter/col_default_horse_bill", 64);
					return 1;
				case 7:
					StringCopy(sParam1, "colter/col_default_horse_charles", 64);
					return 1;
				case 0:
					StringCopy(sParam1, "colter/col_default_horse_dutch", 64);
					return 1;
				case 5:
					StringCopy(sParam1, "colter/col_default_horse_hosea", 64);
					return 1;
				case 2:
					StringCopy(sParam1, "colter/col_default_horse_javier", 64);
					return 1;
				case 1:
					StringCopy(sParam1, "colter/col_default_horse_john", 64);
					return 1;
				case 9:
					StringCopy(sParam1, "colter/col_default_horse_lenny", 64);
					return 1;
				case 6:
					StringCopy(sParam1, "colter/col_default_horse_micah", 64);
					return 1;
				default:
					break;
			}
			StringCopy(sParam1, "colter/col_default_horses1", 64);
			return 1;
		case 1:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_bill", 64);
					return 1;
				case 7:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_charles", 64);
					return 1;
				case 0:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_dutch", 64);
					return 1;
				case 5:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_hosea", 64);
					return 1;
				case 2:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_javier", 64);
					return 1;
				case 1:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_john", 64);
					return 1;
				case 10:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horses1", 64);
					return 1;
				case 9:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_lenny", 64);
					return 1;
				case 6:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_micah", 64);
					return 1;
				case 11:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_sadie", 64);
					return 1;
				case 8:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_sean", 64);
					return 1;
				case 4:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_uncle", 64);
					return 1;
				default:
					break;
			}
			StringCopy(sParam1, "horseshoeOverlook/hso_default_horses1", 64);
			return 1;
		case 2:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_bill", 64);
					return 1;
				case 7:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_charles", 64);
					return 1;
				case 0:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_dutch", 64);
					return 1;
				case 5:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_hosea", 64);
					return 1;
				case 2:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_javier", 64);
					return 1;
				case 1:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_john", 64);
					return 1;
				case 10:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_kieran", 64);
					return 1;
				case 9:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_lenny", 64);
					return 1;
				case 6:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_micah", 64);
					return 1;
				case 11:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_sadie", 64);
					return 1;
				case 8:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_sean", 64);
					return 1;
				case 4:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_uncle", 64);
					return 1;
				default:
					break;
			}
			StringCopy(sParam1, "clemensPoint/clm_default_horses1", 64);
			return 1;
		case 3:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_bill", 64);
					return 1;
				case 7:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_charles", 64);
					return 1;
				case 0:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_dutch", 64);
					return 1;
				case 5:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_hosea", 64);
					return 1;
				case 2:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_javier", 64);
					return 1;
				case 1:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_john", 64);
					return 1;
				case 10:
					StringCopy(sParam1, "shadyBelle/shb_default_horses1", 64);
					return 1;
				case 9:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_lenny", 64);
					return 1;
				case 6:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_micah", 64);
					return 1;
				case 11:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_sadie", 64);
					return 1;
				case 4:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_uncle", 64);
					return 1;
				default:
					break;
			}
			StringCopy(sParam1, "shadyBelle/shb_default_horses1", 64);
			return 1;
		case 5:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "lakay/lak_default_horse_bill", 64);
					return 1;
				case 7:
					StringCopy(sParam1, "lakay/lak_default_horse_charles", 64);
					return 1;
				case 0:
					StringCopy(sParam1, "lakay/lak_default_horse_dutch", 64);
					return 1;
				case 2:
					StringCopy(sParam1, "lakay/lak_default_horse_javier", 64);
					return 1;
				case 1:
					StringCopy(sParam1, "lakay/lak_default_horse_john", 64);
					return 1;
				case 6:
					StringCopy(sParam1, "lakay/lak_default_horse_micah", 64);
					return 1;
				case 11:
					StringCopy(sParam1, "lakay/lak_default_horse_sadie", 64);
					return 1;
				case 4:
					StringCopy(sParam1, "lakay/lak_default_horses1", 64);
					return 1;
				default:
					break;
			}
			StringCopy(sParam1, "lakay/lak_default_horses1", 64);
			return 1;
		case 6:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_bill", 64);
					return 1;
				case 7:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_charles", 64);
					return 1;
				case 0:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_dutch", 64);
					return 1;
				case 2:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_javier", 64);
					return 1;
				case 1:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_john", 64);
					return 1;
				case 6:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_micah", 64);
					return 1;
				case 11:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_sadie", 64);
					return 1;
				case 4:
					StringCopy(sParam1, "beaverHollow/bvh_default_horses1", 64);
					return 1;
				default:
					break;
			}
			StringCopy(sParam1, "beaverHollow/bvh_default_horses1", 64);
			return 1;
		case 8:
			StringCopy(sParam1, "beechersHope/bch_default_horses", 64);
			return 1;
	}
	return 0;
}

int func_502()
{
	return -1;
}

int func_503(int iParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	int iVar0;

	if (!func_56(iParam0))
	{
		return 0;
	}
	if ((!bParam5 && !Global_1359489->f_12) || (bParam5 && Global_1359489->f_13 < 8))
	{
		if (((*Global_1360165)[iParam0 /*1157*/])->f_125 <= 300)
		{
			if (PERSCHAR::_0xEB98B38CA60742D7(((*Global_1360165)[iParam0 /*1157*/])->f_126))
			{
				PERSCHAR::_0x49A8C2CD97815215(((*Global_1360165)[iParam0 /*1157*/])->f_126);
			}
			if (bParam5)
			{
				((*Global_1360165)[iParam0 /*1157*/])->f_124 = PERSCHAR::_0x08FC896D2CB31FCC(((*Global_1360165)[iParam0 /*1157*/])->f_126, false);
				Global_1359489->f_13++;
			}
			else
			{
				((*Global_1360165)[iParam0 /*1157*/])->f_124 = PERSCHAR::_0x0CADC3A977997472(((*Global_1360165)[iParam0 /*1157*/])->f_126, false);
			}
			PERSCHAR::_0x6759BEE6762E140B(((*Global_1360165)[iParam0 /*1157*/])->f_126);
			((*Global_1360165)[iParam0 /*1157*/])->f_125++;
		}
		else
		{
			iVar0 = PERSCHAR::_0xA00DF706C60173D1(func_131(iParam0, 1));
			STREAMING::REQUEST_MODEL(iVar0, false);
			if (STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				((*Global_1360165)[iParam0 /*1157*/])->f_124 = func_519(iVar0, vParam1, iParam4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				PERSCHAR::_0x7B204F88F6C3D287(((*Global_1360165)[iParam0 /*1157*/])->f_126);
			}
		}
		if (!func_67(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
		{
			return 0;
		}
		Global_1359489->f_12 = 1;
		func_30(iParam0, 256, 0);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_504(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_505(int iParam0, bool bParam1, var uParam2)
{
	if (!func_134(*uParam2))
	{
		uParam2->f_1 = -15;
		return;
	}
	if (!func_520(iParam0, *uParam2, bParam1))
	{
		if (!uParam2->f_2)
		{
			if (func_521(iParam0, *uParam2, bParam1))
			{
			}
		}
	}
	if (uParam2->f_1 == -15 || (uParam2->f_1 != -15 && !func_47(uParam2->f_1)))
	{
		return;
	}
	func_522(iParam0, *uParam2, bParam1);
}

int func_506(int iParam0)
{
	if (!func_56(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_140 != 0 || ((*Global_1360165)[iParam0 /*1157*/])->f_141 != 0)
	{
		return 1;
	}
	return 0;
}

int func_507(int iParam0, int iParam1)
{
	if (!func_56(iParam0))
	{
		return 0;
	}
	if ((((*Global_1360165)[iParam0 /*1157*/])->f_140 && iParam1) != 0)
	{
		return 1;
	}
	if ((((*Global_1360165)[iParam0 /*1157*/])->f_141 && iParam1) != 0)
	{
		return 1;
	}
	return 0;
}

int func_508(int iParam0)
{
	switch (iParam0)
	{
		case -2147483648:
		case 2048:
		case 8192:
			return 5;
		case 1:
		case 16:
		case 32:
		case 1024:
		case 4096:
			return 4;
		case 2:
		case 64:
			return 3;
		case 4:
		case 8:
		case 128:
			return 2;
		case 512:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_509(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 695356898;
		case 1:
			return -432333475;
		case 2:
			return 2093317438;
		case 3:
			return -1327067584;
		case 4:
			return -145951480;
		case 5:
			return -2045110373;
		case 6:
			return 2092390181;
		case 7:
			return -1192044061;
		case 8:
			return 1206762561;
		default:
			break;
	}
	return 991030100;
}

Vector3 func_510(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	int iVar10;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			vVar0 = { PED::GET_PED_BONE_COORDS(iVar9, 21030, 0f, 0f, 0f) };
			vVar0.f_2 = (vVar0.z + 0.25f);
		}
		else
		{
			iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
			MISC::GET_MODEL_DIMENSIONS(iVar10, &vVar3, &vVar6);
			vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar3) };
			vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar6) };
			vVar0.x = ((vVar3.x + vVar6.x) / 2f);
			vVar0.f_1 = ((vVar3.y + vVar6.y) / 2f);
			vVar0.f_2 = func_523(vVar3.z, vVar6.z, 0.75f);
		}
	}
	if (func_60(vVar0))
	{
	}
	return vVar0;
}

int func_511(var uParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	var uVar0;
	var uVar3;
	var uVar6;

	uParam0->f_4 = 0;
	switch (*uParam0)
	{
		case 0:
			func_391(uParam0);
			uParam0->f_1 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, vParam4, 83, iParam7, 7);
			SHAPETEST::_0x04AA59CA40571C2E(uParam0->f_1, 15);
			*uParam0 = 1;
			break;
		case 1:
			if (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_1, &(uParam0->f_2), &uVar0, &uVar3, &uVar6) == 2)
			{
				if (uParam0->f_2 == 0)
				{
					*uParam0 = 3;
					return 1;
				}
				else
				{
					uParam0->f_4 = 1;
					*uParam0 = 0;
					return 0;
				}
			}
			else if (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_1, &(uParam0->f_2), &uVar0, &uVar3, &uVar6) == 0)
			{
				*uParam0 = 3;
			}
			break;
		case 3:
			*uParam0 = 0;
			break;
	}
	return 0;
}

Vector3 func_512(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

Vector3 func_513(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_524(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3)) };
	vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3);
	return vParam0 + vVar0;
}

Vector3 func_514()
{
	vector3 vVar0;

	vVar0 = { 1f, 0f, 0f };
	func_515(&vVar0, &(vVar0.f_1), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
	return vVar0;
}

void func_515(var uParam0, var uParam1, float fParam2)
{
	float fVar0;
	float fVar1;

	fVar0 = *uParam0;
	fVar1 = *uParam1;
	*uParam0 = ((fVar0 * BUILTIN::COS(fParam2)) - (fVar1 * BUILTIN::SIN(fParam2)));
	*uParam1 = ((fVar0 * BUILTIN::SIN(fParam2)) + (fVar1 * BUILTIN::COS(fParam2)));
}

int func_516(var uParam0)
{
	if (TASK::_0x841475AC96E794D1(uParam0->f_23))
	{
		if (TASK::_0x5BA659955369B0E2(uParam0->f_23) != func_502())
		{
			return 0;
		}
		else
		{
			TASK::_0x81948DFE4F5A0283(uParam0->f_23);
		}
	}
	if (func_177(&(uParam0->f_4), 50, 10, 0))
	{
		if (uParam0->f_3 != 0)
		{
			uParam0->f_23 = func_525(uParam0->f_3, uParam0->f_4, func_475(uParam0->f_10), uParam0->f_11, uParam0->f_12, 0);
		}
		TASK::_0xE69FDA40AAC3EFC0(uParam0->f_23, 0);
		uParam0->f_15 = 1;
		return 1;
	}
	return 0;
}

float func_517(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = fParam0;
	fVar0 = (fVar0 + (fParam2 * IntToFloat(iParam3)));
	if (fVar0 > fParam1)
	{
		fVar0 = fParam1;
	}
	return fVar0;
}

float func_518(float fParam0, float fParam1, float fParam2)
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

int func_519(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_526(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_520(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_527(iParam1);
	}
	return func_301(iParam0, iParam1);
}

bool func_521(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_528(iParam1);
	}
	return func_364(iParam0, iParam1);
}

void func_522(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_529(iParam1);
	}
	else
	{
		func_32(iParam0, iParam1);
	}
}

float func_523(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

Vector3 func_524(vector3 vParam0, float fParam3)
{
	float fVar0;

	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

var func_525(var uParam0, vector3 vParam1, var uParam4, int iParam5, var uParam6, int iParam7)
{
	return TASK::CREATE_SCENARIO_POINT(uParam0, vParam1, uParam4, iParam5, uParam6, iParam7);
}

void func_526(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_530(iParam1))
		{
			func_531(iParam0, 41788943);
		}
		else if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(iParam0, 1);
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
			func_532(iParam0, 0, 1);
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
			func_533(iParam0, 0);
			bVar0 = true;
		}
		func_437(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

int func_527(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	if (func_534(iParam0, &iVar0))
	{
		return func_535(iVar0);
	}
	return 0;
}

int func_528(int iParam0)
{
	int iVar0;

	if (func_536(iParam0))
	{
		return 0;
	}
	if (!func_67(Global_35, 0))
	{
		return 0;
	}
	iVar0 = -1;
	if (!func_534(iParam0, &iVar0))
	{
		return 0;
	}
	if (func_527(iParam0))
	{
	}
	if (PED::_0x1E017404784AA6A3(Global_35, iParam0))
	{
		func_537(iParam0, 1);
		return 1;
	}
	return 0;
}

void func_529(int iParam0)
{
	int iVar0;

	if (!func_134(iParam0))
	{
		return;
	}
	iVar0 = -1;
	if (func_534(iParam0, &iVar0))
	{
		func_538(iVar0);
	}
}

int func_530(int iParam0)
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

void func_531(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_223(iParam0, iParam1))
		{
			if (func_338(iParam0, iParam1))
			{
				if (func_339(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_340(iParam0);
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

void func_532(int iParam0, int iParam1, bool bParam2)
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

void func_533(int iParam0, bool bParam1)
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

int func_534(int iParam0, int iParam1)
{
	*iParam1 = 0;
	while (*iParam1 < 15)
	{
		if (&Global_40.f_4237[*iParam1 /*3*/] == iParam0)
		{
			return 1;
		}
		*iParam1++;
	}
	*iParam1 = -1;
	return 0;
}

bool func_535(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return MISC::IS_BIT_SET(&Global_1347701, iParam0);
}

int func_536(int iParam0)
{
	int iVar0;

	if (!func_534(iParam0, &iVar0))
	{
		return 0;
	}
	return (Global_40.f_4237[iVar0 /*3*/])->f_2;
}

void func_537(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -1;
	if (func_534(iParam0, &iVar0))
	{
		func_539(iVar0, bParam1);
	}
}

void func_538(int iParam0)
{
	int iVar0;

	func_540(Global_40.f_4237[iParam0 /*3*/]);
	if (func_134(&(Global_40.f_4237[iParam0 /*3*/])))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (iVar0 < iParam0)
		{
		}
		else if (iVar0 < 14 && func_134(&(Global_40.f_4237[iVar0 + 1 /*3*/])))
		{
			Global_40.f_4237[iVar0 /*3*/] = &Global_40.f_4237[iVar0 + 1 /*3*/];
			(Global_40.f_4237[iVar0 /*3*/])->f_1 = (Global_40.f_4237[iVar0 + 1 /*3*/])->f_1;
			(Global_40.f_4237[iVar0 /*3*/])->f_2 = (Global_40.f_4237[iVar0 + 1 /*3*/])->f_2;
			func_539(iVar0, func_535(iVar0 + 1));
			func_303(Global_40.f_4237[iVar0 + 1 /*3*/]);
			func_539(iVar0 + 1, 0);
		}
		iVar0++;
	}
}

void func_539(int iParam0, bool bParam1)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return;
	}
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(&Global_1347701, iParam0))
		{
			MISC::SET_BIT(Global_1347701, iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(&Global_1347701, iParam0))
	{
		MISC::CLEAR_BIT(Global_1347701, iParam0);
	}
}

void func_540(var uParam0)
{
	if ((func_67(Global_35, 0) && func_527(*uParam0)) && PED::_0x7C8AA850617651D9(Global_35, *uParam0))
	{
		func_541(*uParam0);
	}
	if ((!func_67(Global_35, 0) || !func_527(*uParam0)) || !PED::_0x7C8AA850617651D9(Global_35, *uParam0))
	{
		func_303(uParam0);
	}
}

void func_541(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		PED::_0x2B4CE170DE09F346(Global_35, iParam0);
	}
	func_537(iParam0, 0);
}

