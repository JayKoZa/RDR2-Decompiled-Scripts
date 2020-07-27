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
	struct<7> Local_13 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(515))
	{
		func_1(&Local_13, 10);
	}
	else
	{
		func_1(&Local_13, 0);
	}
	Local_13.f_1 = ScriptParam_0.f_2;
	Local_13.f_6 = ScriptParam_0.f_4;
	Local_13.f_3 = ScriptParam_0;
	Local_13.f_4 = ScriptParam_0.f_3;
	while (func_2(&Local_13))
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	uParam0->f_5 = MISC::GET_GAME_TIMER();
}

int func_2(var uParam0)
{
	func_3(uParam0);
	switch (*uParam0)
	{
		case 0:
			func_4(uParam0);
			break;
		case 1:
			if (func_5(uParam0->f_5, 4000))
			{
				func_1(uParam0, 9);
			}
			else
			{
				func_6(uParam0);
				Jump @886; //curOff = 126
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 37, 1);
				if (func_5(uParam0->f_5, 4000))
				{
					func_1(uParam0, 9);
				}
				else
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
					{
						func_7(uParam0->f_3);
						func_1(uParam0, 9);
					}
					Jump @886; //curOff = 207
					PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 37, 1);
					if (func_5(uParam0->f_5, 4000))
					{
						func_1(uParam0, 9);
					}
					else
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
						{
							func_8(uParam0->f_3);
							func_1(uParam0, 9);
						}
						Jump @886; //curOff = 288
						PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 37, 1);
						if (func_5(uParam0->f_5, 4000))
						{
							func_1(uParam0, 9);
						}
						else
						{
							if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
							{
								func_9(uParam0->f_3, uParam0->f_1, &(uParam0->f_6));
								func_1(uParam0, 9);
							}
							Jump @886; //curOff = 378
							if (func_5(uParam0->f_5, 4000))
							{
								func_1(uParam0, 9);
							}
							else
							{
								if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
								{
									if (func_10(uParam0->f_1) == 81053684 || func_11(uParam0->f_1, -1348134986))
									{
										func_12(uParam0->f_3, uParam0->f_1);
									}
									else
									{
										func_13(uParam0->f_3, uParam0->f_1);
									}
									func_1(uParam0, 9);
								}
								Jump @886; //curOff = 503
								if (func_5(uParam0->f_5, 4000))
								{
									func_1(uParam0, 9);
								}
								else
								{
									if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
									{
										if (func_10(uParam0->f_1) == 81053684 || func_11(uParam0->f_1, -1348134986))
										{
											func_14(uParam0->f_3, uParam0->f_1);
										}
										else
										{
											func_13(uParam0->f_3, uParam0->f_1);
										}
										func_1(uParam0, 9);
									}
									Jump @886; //curOff = 628
									if (func_5(uParam0->f_5, 4000))
									{
										func_1(uParam0, 9);
									}
									else
									{
										if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
										{
											func_9(uParam0->f_3, uParam0->f_2, &(uParam0->f_6));
											uParam0->f_5 = func_15();
											func_1(uParam0, 8);
										}
										Jump @886; //curOff = 715
										if (func_5(uParam0->f_5, 4000))
										{
											func_1(uParam0, 9);
										}
										else if (TASK::_0xEC7E480FF8BD0BED(uParam0->f_3) && !uParam0->f_4)
										{
											if (!ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 108107462))
											{
											}
											else
											{
												Jump @886; //curOff = 784
												if (func_16())
												{
												}
												else if (func_17())
												{
													func_18();
												}
												else
												{
													if (Global_34 == uParam0->f_3)
													{
														Global_1951141->f_3253 = 0;
													}
													func_19(uParam0->f_1, 0);
													func_1(uParam0, 9);
													Jump @886; //curOff = 847
													if (Global_34 == uParam0->f_3)
													{
														Global_1951141->f_3253 = 0;
													}
													func_1(uParam0, 10);
													Jump @886; //curOff = 876
													return 0;
												}
											}
											return 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}

void func_3(var uParam0)
{
	if (func_20(uParam0) == 10)
	{
		return;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		if (Global_34 == uParam0->f_3)
		{
			uParam0->f_4 = 1;
			return;
		}
		else
		{
			uParam0->f_4 = 1;
			return;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		func_1(uParam0, 10);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
	{
		if (Global_34 == uParam0->f_3)
		{
			func_1(uParam0, 9);
			return;
		}
		else
		{
			func_1(uParam0, 10);
			return;
		}
	}
}

void func_4(var uParam0)
{
	if (PED::IS_PED_A_PLAYER(uParam0->f_3))
	{
		if (Global_34 == uParam0->f_3)
		{
			if (Global_1951141->f_3253)
			{
				func_1(uParam0, 10);
			}
			else
			{
				Global_1951141->f_3253 = 1;
				func_1(uParam0, 1);
			}
		}
		else
		{
			func_1(uParam0, 1);
		}
	}
	else
	{
		func_1(uParam0, 10);
	}
}

int func_5(int iParam0, int iParam1)
{
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - iParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_6(var uParam0)
{
	int iVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;

	if (!func_21(uParam0->f_1))
	{
		func_1(uParam0, 10);
		return;
	}
	bVar2 = false;
	bVar3 = true;
	if (func_22(&iVar0))
	{
		if (uParam0->f_1 == iVar0)
		{
			bVar2 = true;
			bVar3 = true;
		}
		else
		{
			uParam0->f_2 = iVar0;
			bVar3 = false;
		}
	}
	iVar4 = func_10(uParam0->f_1);
	bVar5 = func_23(&uVar1);
	if (bVar3)
	{
		iVar6 = func_24(uParam0->f_1);
		if (iVar6 != -358215195 && func_25(uParam0->f_6, 1))
		{
			func_1(uParam0, 6);
		}
		else if (bVar2)
		{
			if (bVar5)
			{
				if (iVar4 == 81053684 || func_11(uParam0->f_1, -1348134986))
				{
					func_1(uParam0, 4);
				}
				else
				{
					func_1(uParam0, 6);
				}
			}
			else
			{
				func_1(uParam0, 5);
			}
		}
		else if ((iVar4 == 81053684 || func_11(uParam0->f_1, -1348134986)) && func_25(uParam0->f_6, 2))
		{
			func_1(uParam0, 2);
			func_26(&(uParam0->f_6), 2);
		}
		else
		{
			func_1(uParam0, 3);
		}
	}
	else
	{
		func_1(uParam0, 7);
	}
}

void func_7(int iParam0)
{
	int iVar0;

	if (!func_23(&iVar0))
	{
		return;
	}
	PED::_0x2208438012482A1A(iParam0, false, false);
	PED::_0xC494C76A34266E82(iParam0, 13);
	func_27(iVar0, 2);
	func_28(22, 0, 0, 0, 0);
}

void func_8(int iParam0)
{
	int iVar0;
	var uVar1;

	if (!func_22(&iVar0))
	{
		return;
	}
	if (func_23(&uVar1))
	{
		return;
	}
	PED::_0x2208438012482A1A(iParam0, false, false);
	PED::_0xC494C76A34266E82(iParam0, 0);
	if (EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(1925708505, iParam0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 1127481344, 0, 0, -1, -1) > 0)
	{
	}
	func_27(iVar0, 1);
	func_28(22, 0, 0, 0, 0);
}

int func_9(int iParam0, int iParam1, var uParam2)
{
	if (!func_21(iParam1))
	{
		return 0;
	}
	if (!func_29(iParam1))
	{
		return 0;
	}
	PED::_0x2208438012482A1A(iParam0, false, false);
	PED::_0xC494C76A34266E82(iParam0, 13);
	func_26(uParam2, 1);
	func_27(iParam1, 8);
	func_28(22, 0, 0, 0, 0);
	return 1;
}

int func_10(int iParam0)
{
	struct<2> Var0;

	if (!func_30(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_11(int iParam0, int iParam1)
{
	if (!func_30(iParam0, 0))
	{
		return func_32(func_31(iParam0), iParam1);
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

void func_12(int iParam0, int iParam1)
{
	if (func_10(iParam1) != 81053684 && !func_11(iParam1, -1348134986))
	{
		return;
	}
	PED::_0x2208438012482A1A(iParam0, false, false);
	func_27(iParam1, 2);
	func_28(22, 0, 0, 0, 0);
}

void func_13(int iParam0, int iParam1)
{
	if (func_10(iParam1) != -525676072)
	{
		return;
	}
	PED::_0x2208438012482A1A(iParam0, false, false);
	PED::_0xC494C76A34266E82(iParam0, 0);
	if (EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(1925708505, iParam0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 1127481344, 0, 0, -1, -1) > 0)
	{
	}
	func_27(iParam1, 1);
	func_28(22, 0, 0, 0, 0);
}

void func_14(int iParam0, int iParam1)
{
	if (func_10(iParam1) != 81053684 && !func_11(iParam1, -1348134986))
	{
		return;
	}
	PED::_0x2208438012482A1A(iParam0, false, false);
	PED::_0xC494C76A34266E82(iParam0, 0);
	if (EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(1925708505, iParam0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 1127481344, 0, 0, -1, -1) > 0)
	{
	}
	func_27(iParam1, 1);
	func_28(22, 0, 0, 0, 0);
}

int func_15()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_16()
{
	int iVar0;

	iVar0 = &Global_1951141->f_593[8];
	iVar0 = (&Global_1951141->f_593[10] + iVar0);
	iVar0 = (&Global_1951141->f_593[1] + iVar0);
	iVar0 = (&Global_1951141->f_593[2] + iVar0);
	iVar0 = (&Global_1951141->f_593[5] + iVar0);
	iVar0 = (&Global_1951141->f_593[25] + iVar0);
	iVar0 = (&Global_1951141->f_593[22] + iVar0);
	iVar0 = (&Global_1951141->f_593[18] + iVar0);
	iVar0 = (&Global_1951141->f_593[19] + iVar0);
	return iVar0 > 0;
}

int func_17()
{
	int iVar0;

	iVar0 = 0;
	if (func_33(81053684, &iVar0))
	{
		return 1;
	}
	if (func_33(-525676072, &iVar0))
	{
		return 1;
	}
	return 0;
}

void func_18()
{
	if (!func_17())
	{
		return;
	}
	func_34();
}

int func_19(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_29(iParam0);
	if (func_11(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_23(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_35();
			}
			else
			{
				iVar0 = func_36();
			}
		}
		else if (bVar1)
		{
			iVar0 = func_37();
		}
		else
		{
			iVar0 = func_38();
		}
	}
	else if (func_22(&iVar2))
	{
		if (func_11(iVar2, -1303648999))
		{
			iVar0 = func_35();
		}
		else
		{
			iVar0 = func_36();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_37();
	}
	else
	{
		iVar0 = func_38();
	}
	if (iVar0 != 0)
	{
		Global_1951141->f_3251 = MISC::GET_GAME_TIMER();
		TASK::_TASK_ITEM_INTERACTION(Global_34, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

int func_20(var uParam0)
{
	return *uParam0;
}

bool func_21(int iParam0)
{
	return func_39(iParam0);
}

int func_22(int iParam0)
{
	if (func_33(81053684, iParam0))
	{
		return 1;
	}
	if (func_33(-525676072, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_23(int iParam0)
{
	if (-1829635046 == func_40(81053684))
	{
		if (func_22(iParam0))
		{
			return 1;
		}
	}
	else if (func_33(-525676072, iParam0))
	{
		if (func_22(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_24(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_41(iParam0, 1, 0) };
	return func_42(Var0.f_4);
}

bool func_25(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_26(var uParam0, int iParam1)
{
	func_43(uParam0, iParam1);
}

void func_27(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	iVar1 = func_24(iParam0);
	iVar2 = func_44(iVar1, 1);
	if (iVar2 == 39)
	{
		return;
	}
	if (func_45(iParam0) && func_46(iParam0))
	{
		iParam1 |= 64;
	}
	if (((iVar1 == 1108822547 && func_47(32768)) || &Global_1951141->f_1657.f_1[iVar2 /*3*/] != &Global_1951141->f_81[iVar2 /*12*/]) && iParam0 != &Global_1951141->f_1657.f_1[iVar2 /*3*/])
	{
		if (func_45(&(Global_1951141->f_1657.f_1[iVar2 /*3*/])) && func_46(&(Global_1951141->f_1657.f_1[iVar2 /*3*/])))
		{
			iParam1 |= 32;
		}
		if ((Global_1951141->f_81[iVar2 /*12*/])->f_1 > 1)
		{
			iParam1 |= 16;
		}
		iVar3 = 0;
		switch (func_10(iParam0))
		{
			case 81053684:
				if (func_33(-525676072, &uVar0))
				{
					iVar3 = func_44(func_48(-525676072), 1);
					if (iVar3 == 39)
					{
					}
					else
					{
						Global_1951141->f_2548[iVar3 /*2*/] = &Global_1951141->f_81[iVar3 /*12*/];
						Jump @465; //curOff = 294
						if (func_47(32768))
						{
							func_50(func_49(iVar2, 1));
						}
						if (func_33(81053684, &uVar4))
						{
							iVar3 = func_44(func_48(81053684), 1);
							if (iVar3 == 39)
							{
							}
							else
							{
								Global_1951141->f_2548[iVar3 /*2*/] = &Global_1951141->f_81[iVar3 /*12*/];
								Jump @465; //curOff = 380
								if (!func_11(iParam0, -1348134986))
								{
								}
								else
								{
									if (func_33(-525676072, &uVar0))
									{
										iVar3 = func_44(func_48(-525676072), 1);
										if (iVar3 == 39)
										{
										}
										else
										{
											Global_1951141->f_2548[iVar3 /*2*/] = &Global_1951141->f_81[iVar3 /*12*/];
										}
										Global_1951141->f_2548[iVar2 /*2*/] = iParam0;
										func_51(iVar1, iParam1, 6);
									}
								}
							}
						}
					}
				}
		}
	}

void func_28(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_52(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_53(Var0);
}

int func_29(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_22(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_30(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_31(int iParam0)
{
	return iParam0;
}

int func_32(int iParam0, int iParam1)
{
	if (!func_54(iParam0, 2))
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

int func_33(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_44(func_48(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1951141->f_1657.f_1[iVar1 /*3*/] != 0 && &Global_1951141->f_1657.f_1[iVar1 /*3*/] != &Global_1951141->f_81[iVar1 /*12*/])
	{
		iVar0 = &Global_1951141->f_1657.f_1[iVar1 /*3*/];
		if (func_10(iVar0) == iParam0 || (iParam0 == 81053684 && func_11(iVar0, -1348134986)))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	*iParam1 = 0;
	return 0;
}

void func_34()
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	if (func_33(81053684, &iVar1))
	{
		if (func_39(iVar1))
		{
			func_55(81053684);
			bVar0 = true;
		}
	}
	if (func_33(-525676072, &iVar1))
	{
		if (func_39(iVar1))
		{
			func_55(-525676072);
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		PED::_0xC494C76A34266E82(Global_34, 13);
	}
}

int func_35()
{
	int iVar0;

	iVar0 = 1549701178;
	switch (func_56())
	{
		case 0:
			iVar0 = 1549701178;
			break;
		case 3:
			iVar0 = 949387044;
			break;
		case 1:
			iVar0 = -22529868;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_36()
{
	int iVar0;

	iVar0 = 614608656;
	switch (func_56())
	{
		case 0:
			iVar0 = 614608656;
			break;
		case 3:
			iVar0 = -1290316291;
			break;
		case 1:
			iVar0 = 1918034163;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_37()
{
	int iVar0;

	iVar0 = -1832677570;
	switch (func_56())
	{
		case 0:
			iVar0 = -1832677570;
			break;
		case 3:
			iVar0 = -362314920;
			break;
		case 1:
			iVar0 = -1336137422;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_38()
{
	int iVar0;

	iVar0 = 1623252156;
	switch (func_56())
	{
		case 0:
			iVar0 = 1623252156;
			break;
		case 3:
			iVar0 = -1469902924;
			break;
		case 1:
			iVar0 = 170763280;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_39(int iParam0)
{
	int iVar0;

	iVar0 = func_10(iParam0);
	if ((iVar0 == 81053684 || iVar0 == -525676072) || func_11(iParam0, -1348134986))
	{
		return 1;
	}
	return 0;
}

int func_40(int iParam0)
{
	int iVar0;

	iVar0 = func_44(func_48(iParam0), 1);
	if (iVar0 != 39)
	{
		return (Global_1951141->f_1657.f_1[iVar0 /*3*/])->f_1;
	}
	return 0;
}

struct<5> func_41(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_57(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_58(iParam0);
	switch (iVar5)
	{
		case joaat("clothing"):
			Var0 = { func_59(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			break;
		case joaat("weapon"):
			Var0 = { func_60(bParam1) };
			if (iParam2 && func_61(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_62(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_62(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_63(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_64(bParam1) };
			switch (func_10(iParam0))
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
			if (func_65(iParam0, -1823706425))
			{
				Var0 = { func_59(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_65(iParam0, -1483207246))
			{
				Var0 = { func_59(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1911121386))
			{
				Var0 = { func_59(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_65(iParam0, -1653629781))
			{
				Var0 = { func_59(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_66(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_65(iParam0, -1653629781))
			{
				Var0 = { func_59(1384535894, Var0, 1784584921, bParam1) };
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

int func_42(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1951141->f_81[iVar0 /*12*/])->f_9 == iParam0)
		{
			return func_49(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_43(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_44(int iParam0, int iParam1)
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
		case 735520874:
			return 5;
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

int func_45(int iParam0)
{
	switch (func_10(iParam0))
	{
		case -2061583405:
			return 1;
		case -1719060085:
			return 1;
		case -999503751:
			return 1;
		case -525676072:
			return 1;
		case 81053684:
			return 1;
		case -413129408:
			return 1;
		default:
			break;
	}
	if (func_11(iParam0, -1348134986))
	{
		return 1;
	}
	return 0;
}

int func_46(int iParam0)
{
	var uVar0;

	return func_67(iParam0, &uVar0);
}

bool func_47(int iParam0)
{
	return (Global_1951141 && iParam0) != 0;
}

int func_48(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_42(iVar0);
}

int func_49(int iParam0, int iParam1)
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
			return 735520874;
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

void func_50(int iParam0)
{
	func_68(iParam0, 8, 6);
}

void func_51(int iParam0, int iParam1, int iParam2)
{
	(Global_1951141->f_2548[func_44(iParam0, 1) /*2*/])->f_1 = ((Global_1951141->f_2548[func_44(iParam0, 1) /*2*/])->f_1 || iParam1);
}

void func_52(int iParam0)
{
	Global_1951141 = (Global_1951141 || iParam0);
}

void func_53(struct<4> Param0)
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
			if (Global_1951141->f_916 >= 25)
			{
				return;
			}
			if (func_69(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1951141->f_916)
				{
					iVar1 = ((Global_1951141->f_921 + iVar0) % 25);
					if ((&Global_1951141->f_734[iVar1 /*4*/] == Param0 && (Global_1951141->f_734[iVar1 /*4*/])->f_1 == Param0.f_1) && (Global_1951141->f_734[iVar1 /*4*/])->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_70(Param0);
			*(Global_1951141->f_734[Global_1951141->f_922 /*4*/]) = { Param0 };
			Global_1951141->f_916++;
			Global_1951141->f_922 = (Global_1951141->f_922 + 1 % 25);
			func_52(8);
			break;
		case 23:
		case 24:
		case 25:
			if (Global_1951141->f_917 >= 25)
			{
				return;
			}
			if (func_69(Param0))
			{
				return;
			}
			func_70(Param0);
			*(Global_1951141->f_633[Global_1951141->f_917 /*4*/]) = { Param0 };
			Global_1951141->f_917++;
			func_52(8);
			break;
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 36:
		case 37:
		case 38:
			if (Global_1951141->f_918 >= 20)
			{
				return;
			}
			if (func_69(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1951141->f_918)
				{
					iVar1 = ((Global_1951141->f_919 + iVar0) % 20);
					if ((&Global_1951141->f_835[iVar1 /*4*/] == Param0 && (Global_1951141->f_835[iVar1 /*4*/])->f_1 == Param0.f_1) && (Global_1951141->f_835[iVar1 /*4*/])->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_70(Param0);
			*(Global_1951141->f_835[Global_1951141->f_920 /*4*/]) = { Param0 };
			Global_1951141->f_918++;
			Global_1951141->f_920 = (Global_1951141->f_920 + 1 % 20);
			func_52(8);
			break;
			break;
	}
}

int func_54(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

void func_55(int iParam0)
{
	int iVar0;

	iVar0 = func_44(func_48(iParam0), 1);
	if (iVar0 == 39)
	{
		return;
	}
	func_27(&(Global_1951141->f_81[iVar0 /*12*/]), 8);
	func_28(22, 0, 0, 0, 0);
}

int func_56()
{
	int iVar0;
	int iVar1;

	if (PED::_IS_PED_CARRYING(Global_34))
	{
		return 1;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_34, &iVar0, true, 0, false))
	{
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_34, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == joaat("weapon_unarmed"))
	{
		if (iVar0 == joaat("weapon_unarmed"))
		{
			return 1;
		}
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0)) && !func_71(iVar0)) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_34, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_34, false) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0)))
		{
			return 3;
		}
		else if (WEAPON::_IS_WEAPON_BINOCULARS(iVar0))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_71(iVar0)) || WEAPON::_IS_WEAPON_LASSO(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == joaat("weapon_unarmed"))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

struct<4> func_57(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_72(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1272170))
			{
				*Global_1272170 = { func_59(joaat("character"), func_73(), -1591664384, bParam0) };
			}
			return *Global_1272170;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_12)))
			{
				Global_1272170->f_12 = { func_59(joaat("character"), func_73(), -1591664384, 0) };
			}
			return Global_1272170->f_12;
		}
	}
	return func_59(joaat("character"), func_73(), -1591664384, bParam0);
}

int func_58(int iParam0)
{
	vector3 vVar0;

	if (!func_30(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_59(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_30(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_72(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_60(bool bParam0)
{
	int iVar0;

	iVar0 = func_72(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_4)))
		{
			Global_1272170->f_4 = { func_59(923904168, func_57(bParam0), -740156546, bParam0) };
		}
		return Global_1272170->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_16)))
		{
			Global_1272170->f_16 = { func_59(923904168, func_57(bParam0), -740156546, 0) };
		}
		return Global_1272170->f_16;
	}
	return func_59(923904168, func_57(bParam0), -740156546, 0);
}

int func_61(int iParam0, bool bParam1)
{
	if (func_10(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_74();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_62(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_75(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

int func_63(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_76(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_64(bool bParam0)
{
	int iVar0;

	iVar0 = func_72(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_8)))
		{
			Global_1272170->f_8 = { func_59(271701509, func_57(bParam0), 12999093, 0) };
		}
		return Global_1272170->f_8;
	}
	return func_59(271701509, func_57(bParam0), 12999093, 0);
}

int func_65(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_10(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_77(iParam0, iParam1, iVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_66(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_78(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_67(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1951141->f_3109.f_25)
	{
		if (iParam0 == &Global_1951141->f_3109[*uParam1])
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

void func_68(int iParam0, int iParam1, int iParam2)
{
	(Global_1951141->f_81[func_44(iParam0, 1) /*12*/])->f_11 = ((Global_1951141->f_81[func_44(iParam0, 1) /*12*/])->f_11 - ((Global_1951141->f_81[func_44(iParam0, 1) /*12*/])->f_11 && iParam1));
}

bool func_69(int iParam0)
{
	return &Global_1951141->f_593[iParam0] > 0;
}

void func_70(int iParam0)
{
	Global_1951141->f_593[iParam0] = &Global_1951141->f_593[iParam0] + 1;
}

bool func_71(int iParam0)
{
	return WEAPON::_IS_WEAPON_BOW(iParam0);
}

int func_72(bool bParam0)
{
	if (func_79() == -1)
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

struct<4> func_73()
{
	struct<4> Var0;

	return Var0;
}

bool func_74()
{
	return (func_80(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, 0, 0) > 0 && func_81(func_59(889965687 /* GXTEntry: "Wardrobe" */, func_57(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_75(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_30(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_82(iParam0, joaat("default")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_59(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_72(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_72(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_76(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_72(0);
	*uParam1 = { func_59(iParam0, func_60(0), iParam3, 0) };
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

int func_77(int iParam0, int iParam1, int iParam2)
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

int func_78(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_72(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_79()
{
	return Global_1572887->f_13;
}

int func_80(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_83(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_72(bParam1), iParam0, iParam3);
}

int func_81(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_84(&uParam0, iParam4, bParam5, iParam6);
}

int func_82(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

bool func_83(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_84(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_85(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_85(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_72(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return 0;
	}
	if (!func_78(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

