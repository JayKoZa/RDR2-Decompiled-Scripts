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
	struct<59> Local_13 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 3, 0, 0, 0, 1, 5, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0 } ;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	struct<31> Local_74[32];
	struct<521> Local_1067 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 6, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 255, 255, 255, 0, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0, 0, 0, 0, -1, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 1, 0, 0, 1065353216, 0, 1065353216, 1077936128, 1108082688, 1113325568, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 } ;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = -1;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 255;
	var uLocal_1595 = -1;
	var uLocal_1596 = -1;
	var uLocal_1597 = 3;
	var uLocal_1598 = 1101004800;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 3;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 1;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = -1;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 1;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = -1;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 1;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = -1;
	var uLocal_1627 = 1101004800;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 3;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 1;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = -1;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 1;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = -1;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 1;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = -1;
	var uLocal_1656 = 1101004800;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 3;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 1;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = -1;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 1;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = -1;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 1;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = -1;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	float fLocal_1687 = 0f;
	float fLocal_1688 = 0f;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	char* sLocal_1693 = NULL;
	char* sLocal_1694 = NULL;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_1687 = 1f;
	fLocal_1688 = 1f;
	sLocal_1693 = "FACE_HUMAN@GEN_MALE@PORTRAIT";
	sLocal_1694 = "facials@gen_male@portrait";
	iVar0 = ScriptParam_0;
	func_1(iVar0);
	func_2(ScriptParam_0);
	while (!func_3())
	{
		func_4();
		BUILTIN::WAIT(0);
	}
	func_5();
	func_6();
}

void func_1(int iParam0)
{
	func_7(32, iParam0);
	func_8();
	func_9();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_13, 61, 41);
	func_10(NETWORK::_0xBA24095EA96DFE17(&Local_13), 61, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_74, 993, 42);
	func_11(NETWORK::_0x690806BC83BC8CA2(Local_74[0 /*31*/]), 993, "m_clientData");
	func_12(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_2(struct<5> Param0)
{
	if (Local_13 == 6)
	{
		return;
	}
	func_13(Param0);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_14();
		func_15();
	}
}

int func_3()
{
	if (func_16(0, 0))
	{
		return 1;
	}
	else if (func_17(Local_1067.f_9, 0, 1))
	{
		return 1;
	}
	else if (!func_18())
	{
		return 1;
	}
	else if (!func_19(Local_1067.f_12))
	{
		return 1;
	}
	else if (!func_21(func_20(Local_1067.f_12), Local_1067.f_9))
	{
		return 1;
	}
	else if (Local_1067.f_8 == 6)
	{
		return 1;
	}
	return 0;
}

void func_4()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_22();
	}
	func_23();
}

void func_5()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_24();
		func_25();
	}
	func_26();
	func_27();
}

void func_6()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_7(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_6();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_8()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	iVar1 = MISC::GET_GAME_TIMER();
	iVar2 = NETWORK::NETWORK_GET_TIMEOUT_TIME();
	if (iVar2 < 50000)
	{
		iVar2 = 50000;
	}
	while (iVar0 != 2)
	{
		if (MISC::GET_GAME_TIMER() - iVar1) > (iVar2 - 5000)
		{
		}
		if ((MISC::GET_GAME_TIMER() - iVar1) > 300000)
		{
			func_6();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				case 1:
					func_6();
					break;
				case 2:
					func_6();
					break;
				case 4:
					func_6();
					break;
				case 3:
					func_6();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_6();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_6();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_6();
		}
		if (func_28() == 0)
		{
			if (func_29())
			{
				func_6();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_6();
	}
	return 1;
}

void func_9()
{
	func_30();
}

int func_10(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_11(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_12(bool bParam0)
{
	int iVar0;
	struct<8> Var1;
	int iVar9;

	iVar0 = (MISC::_GET_SYSTEM_TIME() + 180000);
	iVar9 = 0;
	Var1 = { Var1 };
	while (true)
	{
		iVar9++;
		if (bParam0)
		{
			NETWORK::_0x236905C700FDB54D();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				case 1:
					func_6();
					break;
				case 2:
					func_6();
					break;
				case 4:
					func_6();
					break;
				case 3:
					func_6();
					break;
				default:
					break;
			}
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			StringCopy(&Var1, "HOST", 64);
		}
		else
		{
			StringCopy(&Var1, "CLIENT", 64);
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return;
		}
		if (MISC::_GET_SYSTEM_TIME() >= iVar0)
		{
			func_6();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

void func_13(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	struct<12> Var0;
	int iVar17;
	bool bVar18;
	int iVar19;

	Var0.f_10 = 1106247680;
	iVar17 = 255;
	MISC::_COPY_MEMORY(&Local_1067, &uParam0, 5);
	iVar19 = func_31(&bVar18, Local_1067.f_1, Local_1067.f_2);
	if (bVar18 || iVar19 == -1)
	{
		return;
	}
	Local_1067.f_12 = iVar19;
	iVar17 = (Global_1186267->f_231.f_1066[iVar19 /*17*/])->f_5;
	func_32(&Var0, Local_1067.f_1, Local_1067.f_2, Local_1067.f_3, iVar17);
	Local_1067.f_9 = { func_33(Var0.f_5, 8) };
	Local_1067.f_14 = Var0.f_5;
	Local_1067.f_15 = { Var0.f_11 };
	func_34();
	func_35();
}

void func_14()
{
	func_36();
}

void func_15()
{
	func_37();
	func_38();
}

int func_16(bool bParam0, bool bParam1)
{
	int iVar0;

	if (Global_1572887->f_12)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::_0xF2CBC969C4F090C7())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && &Global_1572887 < 39)
		{
		}
		else
		{
			return 1;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
		{
			case 0:
				return 1;
			case 1:
				return 1;
			case 2:
				if (!bParam0)
				{
					return 1;
				}
				break;
			case 4:
				return 1;
			case 3:
				return 1;
			default:
				return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) == 1976253964)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_17(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265331->f_124445.f_134 & 8 != 0)
	{
		Global_1070356->f_26837 = 1;
		return 1;
	}
	if (func_39(*Global_1051163) && !func_21(*Global_1051163, Param0))
	{
		Global_1070356->f_26837 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_40(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_41(iParam3, 255))
	{
		Global_1070356->f_26837 = 4;
		return 1;
	}
	if (Global_262996[&Global_1275573 /*70*/] > 2)
	{
		Global_1070356->f_26837 = 5;
		return 1;
	}
	if (&Global_262155 >= 1)
	{
		Global_1070356->f_26837 = 6;
		return 1;
	}
	if (func_42())
	{
		Global_1070356->f_26837 = 7;
		return 1;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_39(*Global_1051163))
		{
			Global_1070356->f_26837 = 8;
			return 1;
		}
	}
	if (Global_265331->f_124602 != 0 && SCRIPTS::_DOES_THREAD_EXIST(Global_265331->f_124602))
	{
		Global_1070356->f_26837 = 9;
		return 1;
	}
	Global_1070356->f_26837 = 0;
	return 0;
}

int func_18()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

bool func_19(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 71);
}

struct<2> func_20(int iParam0)
{
	return (Global_1198382->f_1[iParam0 /*10*/])->f_4;
}

bool func_21(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

void func_22()
{
	if (Local_13 <= 5)
	{
		func_43();
	}
	switch (Local_13)
	{
		case 0:
			func_44();
			break;
		case 1:
			func_45();
			break;
		case 2:
			func_46();
			break;
		case 3:
			func_47();
			break;
		case 4:
			func_48();
			break;
		case 5:
			func_49();
			break;
	}
}

void func_23()
{
	func_50();
	if (Local_1067.f_8 <= 5)
	{
		func_51();
	}
	switch (Local_1067.f_8)
	{
		case 0:
			func_52();
			break;
		case 1:
			func_53();
			break;
		case 2:
			func_54();
			break;
		case 3:
			func_55();
			break;
		case 4:
			func_56();
			break;
		case 5:
			func_57();
			break;
	}
}

void func_24()
{
	func_58();
}

void func_25()
{
	if (func_59())
	{
		if (VOLUME::_0xF6A8A652A6B186CD(Local_13.f_3.f_1))
		{
			VOLUME::_0xFDFECC6EE4491E11(Local_13.f_3.f_1);
		}
	}
	func_60();
}

void func_26()
{
	func_61();
	func_62();
	func_63();
	func_64();
}

void func_27()
{
	if (Local_1067.f_12 != -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			func_65(Local_1067.f_12, 4);
		}
	}
	func_66();
	if (func_67(32))
	{
		func_68(Local_13.f_6);
	}
	func_69();
}

int func_28()
{
	return Global_1572887->f_13;
}

bool func_29()
{
	return Global_1051202->f_8;
}

void func_30()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			Local_13.f_49.f_1[iVar0] = 255;
			iVar0++;
		}
	}
}

int func_31(var uParam0, int iParam1, int iParam2)
{
	struct<10> Var0;
	struct<15> Var10;
	int iVar25;
	struct<17> Var26;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1;
	Var0.f_9 = 2;
	Var10 = 2;
	Var10.f_1 = -1;
	Var10.f_5 = -1;
	Var10.f_5.f_1 = -1;
	Var10.f_5.f_3 = -1;
	Var10.f_5.f_4 = -1;
	Var10.f_5.f_5 = -1;
	Var10.f_5.f_6 = -1;
	Var10.f_5.f_6.f_1 = -1;
	Var10.f_5.f_9 = 2;
	Var26.f_10 = 1106247680;
	func_32(&Var26, iParam1, iParam2, -1, 255);
	func_70(&Var0, Var26);
	iVar25 = func_71(&Var0);
	if (func_19(iVar25))
	{
		Var10 = { func_72(iVar25) };
		if (Var10 == 2)
		{
			return iVar25;
		}
		else
		{
			*uParam0 = 1;
			return -1;
		}
	}
	return -1;
}

void func_32(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<11> Var0;
	int iVar17;

	Var0.f_10 = 1106247680;
	MISC::_COPY_MEMORY(uParam0, &Var0, 17);
	if (iParam4 == 255)
	{
		iParam4 = PLAYER::PLAYER_ID();
	}
	switch (iParam1)
	{
		case 0:
			*uParam0 = 0;
			uParam0->f_1 = 0;
			uParam0->f_2 = 0;
			break;
		case 1:
			uParam0->f_6 = 1;
			*uParam0 = 10;
			uParam0->f_1 = 4;
			uParam0->f_2 = 7;
			func_73(uParam0, iParam2);
			switch (iParam2)
			{
				case 0:
					uParam0->f_5 = -1808627090;
					uParam0->f_11 = { 2150.374f, 1728.215f, 125.2313f };
					break;
				case 1:
					uParam0->f_5 = -1563711584;
					uParam0->f_11 = { 2179.106f, -25.3714f, 51.3658f };
					break;
				case 2:
					uParam0->f_5 = -717510681;
					uParam0->f_11 = { -1055.963f, -794.308f, 59.2567f };
					break;
				case 3:
					uParam0->f_5 = -2044065371;
					uParam0->f_11 = { -1158.078f, -155.114f, 88.889f };
					break;
				case 4:
					uParam0->f_5 = -1209537248;
					uParam0->f_11 = { -1370.712f, -515.7384f, 125.267f };
					break;
				case 5:
					uParam0->f_5 = 1714342319;
					uParam0->f_11 = { -1029.465f, -492.4087f, 101.0615f };
					break;
				case 6:
					uParam0->f_5 = 1269971654;
					uParam0->f_11 = { -319.5499f, 203.8464f, 62.1121f };
					break;
				case 7:
					uParam0->f_5 = 720927063;
					uParam0->f_11 = { -513.8f, 345.2f, 49.8945f };
					break;
				case 8:
					uParam0->f_5 = 1499128142;
					uParam0->f_11 = { -1234.665f, -1371.778f, 80.796f };
					break;
				case 9:
					uParam0->f_5 = -1539691586;
					uParam0->f_11 = { -1525.164f, 1722.86f, 239.152f };
					break;
			}
			break;
		case 2:
			uParam0->f_6 = 1;
			*uParam0 = 20;
			uParam0->f_1 = 2;
			uParam0->f_2 = 1;
			func_74(uParam0);
			switch (iParam2)
			{
				case 0:
					func_75(uParam0);
					uParam0->f_5 = 277430601;
					uParam0->f_11 = { -1925.343f, -2119.336f, 52.16934f };
					break;
				case 1:
					func_75(uParam0);
					uParam0->f_5 = 1659133778;
					uParam0->f_11 = { 136.298f, 35.34337f, 101.2795f };
					break;
				case 2:
					func_75(uParam0);
					uParam0->f_5 = 1296650927;
					uParam0->f_11 = { -910.7408f, 860.8453f, 134.6651f };
					break;
				case 3:
					func_75(uParam0);
					uParam0->f_5 = 2115437634;
					uParam0->f_11 = { 2788.779f, 1077.284f, 57.99089f };
					break;
				case 4:
					func_75(uParam0);
					uParam0->f_5 = 1098622970;
					uParam0->f_11 = { 1751.914f, -1117.739f, 40.70011f };
					break;
				case 5:
					func_75(uParam0);
					uParam0->f_5 = 393263596;
					uParam0->f_11 = { 1290.432f, -836.7289f, 77.47561f };
					break;
				case 6:
					func_75(uParam0);
					uParam0->f_5 = 189453630;
					uParam0->f_11 = { 308.1141f, 1187.807f, 180.1746f };
					break;
				case 7:
					func_75(uParam0);
					uParam0->f_5 = -98921343;
					uParam0->f_11 = { -1779.538f, -235.3894f, 181.2029f };
					break;
				case 8:
					func_75(uParam0);
					uParam0->f_5 = 6025033;
					uParam0->f_11 = { -1290.399f, -1179.199f, 72.33453f };
					break;
				case 9:
					func_75(uParam0);
					uParam0->f_5 = -1060299979;
					uParam0->f_11 = { -2306.89f, -1546.208f, 152.0187f };
					break;
				case 10:
					func_75(uParam0);
					uParam0->f_5 = 682088681;
					uParam0->f_11 = { -2724.458f, -2521.524f, 64.76124f };
					break;
				case 11:
					func_75(uParam0);
					uParam0->f_5 = 1705841922;
					uParam0->f_11 = { -4461.883f, -3271.474f, 14.54459f };
					break;
				case 12:
					func_75(uParam0);
					uParam0->f_5 = -301205165;
					uParam0->f_11 = { -4631.054f, -2738.483f, -12.13559f };
					break;
				case 13:
					func_75(uParam0);
					uParam0->f_5 = 1906160715;
					uParam0->f_11 = { -5678.259f, -3182.939f, -22.66476f };
					break;
				case 14:
					func_75(uParam0);
					uParam0->f_5 = -1129906020;
					uParam0->f_11 = { -1688.868f, -2272.091f, 44.12061f };
					break;
				case 15:
					func_75(uParam0);
					uParam0->f_5 = 1592980994;
					uParam0->f_11 = { -1621.917f, 1628.208f, 235.9645f };
					break;
				case 16:
					func_75(uParam0);
					uParam0->f_5 = 686459378;
					uParam0->f_11 = { 420.3633f, 2020.91f, 230.4423f };
					break;
				case 17:
					func_75(uParam0);
					uParam0->f_5 = -259262381;
					uParam0->f_11 = { -517.4607f, 510.5349f, 102.2307f };
					break;
				case 18:
					func_75(uParam0);
					uParam0->f_5 = 1289806844;
					uParam0->f_11 = { 1775.601f, 546.3866f, 106.6334f };
					break;
				case 19:
					func_75(uParam0);
					uParam0->f_5 = 347656238;
					uParam0->f_11 = { 1612.415f, -1715.397f, 52.91364f };
					break;
			}
			break;
		case 3:
			uParam0->f_6 = 1;
			*uParam0 = 21;
			uParam0->f_1 = 8;
			uParam0->f_2 = 1;
			func_74(uParam0);
			switch (iParam2)
			{
				case 0:
					func_76(uParam0, 2);
					func_76(uParam0, 3);
					func_76(uParam0, 5);
					uParam0->f_5 = 1454566440;
					uParam0->f_11 = { 2252.035f, 1342.706f, 84.5573f };
					break;
				case 1:
					func_76(uParam0, 2);
					func_76(uParam0, 3);
					func_76(uParam0, 5);
					uParam0->f_5 = 1141360338;
					uParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
					break;
				case 2:
					func_76(uParam0, 0);
					func_76(uParam0, 1);
					func_76(uParam0, 2);
					func_76(uParam0, 3);
					func_76(uParam0, 5);
					uParam0->f_5 = 844768119;
					uParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
					break;
				case 3:
					func_76(uParam0, 0);
					func_76(uParam0, 2);
					func_76(uParam0, 3);
					func_76(uParam0, 4);
					func_76(uParam0, 5);
					func_76(uParam0, 7);
					uParam0->f_5 = -1601993562;
					uParam0->f_11 = { 1130.541f, 575.7938f, 86.66257f };
					break;
				case 4:
					func_76(uParam0, 0);
					func_76(uParam0, 2);
					func_76(uParam0, 3);
					func_76(uParam0, 5);
					func_76(uParam0, 7);
					uParam0->f_5 = -901588956;
					uParam0->f_11 = { -754.3893f, -399.1133f, 40.84306f };
					break;
				case 5:
					func_76(uParam0, 0);
					func_76(uParam0, 2);
					func_76(uParam0, 3);
					func_76(uParam0, 5);
					func_76(uParam0, 7);
					uParam0->f_5 = 2129019244;
					uParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
					break;
				case 6:
					func_76(uParam0, 0);
					func_76(uParam0, 2);
					func_76(uParam0, 4);
					func_76(uParam0, 5);
					func_76(uParam0, 6);
					uParam0->f_5 = 1227099802;
					uParam0->f_11 = { -2085.777f, -161.9067f, 208.0633f };
					break;
				case 7:
					func_76(uParam0, 0);
					func_76(uParam0, 2);
					func_76(uParam0, 4);
					func_76(uParam0, 5);
					func_76(uParam0, 6);
					uParam0->f_5 = -940471213;
					uParam0->f_11 = { -1678.304f, -517.8369f, 140.867f };
					break;
				case 8:
					func_76(uParam0, 0);
					func_76(uParam0, 2);
					func_76(uParam0, 4);
					func_76(uParam0, 5);
					func_76(uParam0, 6);
					uParam0->f_5 = -700569364;
					uParam0->f_11 = { -2624.881f, -339.7662f, 141.8102f };
					break;
				case 9:
					func_76(uParam0, 0);
					func_76(uParam0, 1);
					uParam0->f_5 = 412376369;
					uParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
					break;
				case 10:
					func_76(uParam0, 0);
					func_76(uParam0, 2);
					func_76(uParam0, 5);
					func_76(uParam0, 7);
					uParam0->f_5 = -364052317;
					uParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
					break;
				case 11:
					func_76(uParam0, 0);
					func_76(uParam0, 1);
					uParam0->f_5 = -989186530;
					uParam0->f_11 = { -1069.18f, -1919.616f, 42.3447f };
					break;
				case 12:
					func_76(uParam0, 0);
					func_76(uParam0, 2);
					func_76(uParam0, 3);
					func_76(uParam0, 4);
					func_76(uParam0, 5);
					func_76(uParam0, 6);
					uParam0->f_5 = 333858683;
					uParam0->f_11 = { 1673.672f, 1440.046f, 146.0849f };
					break;
				case 13:
					func_76(uParam0, 0);
					func_76(uParam0, 1);
					uParam0->f_5 = -39511303;
					uParam0->f_11 = { 1562.434f, 1445.237f, 145.2842f };
					break;
				case 14:
					func_76(uParam0, 3);
					func_76(uParam0, 4);
					func_76(uParam0, 5);
					func_76(uParam0, 6);
					uParam0->f_5 = 813662381;
					uParam0->f_11 = { 1244.927f, 1177.251f, 148.8856f };
					break;
				case 15:
					func_76(uParam0, 2);
					func_76(uParam0, 3);
					func_76(uParam0, 5);
					func_76(uParam0, 7);
					uParam0->f_5 = -1114006686;
					uParam0->f_11 = { 1926.703f, -362.3477f, 42.4864f };
					break;
				case 16:
					func_76(uParam0, 0);
					func_76(uParam0, 1);
					func_76(uParam0, 3);
					func_76(uParam0, 5);
					func_76(uParam0, 7);
					uParam0->f_5 = 1049238845;
					uParam0->f_11 = { 2192.489f, -318.3198f, 40.7232f };
					break;
				case 17:
					func_76(uParam0, 0);
					func_76(uParam0, 1);
					func_76(uParam0, 3);
					func_76(uParam0, 5);
					func_76(uParam0, 7);
					uParam0->f_5 = 1363886783;
					uParam0->f_11 = { 2408.447f, -490.4562f, 40.9243f };
					break;
				case 18:
					func_76(uParam0, 0);
					func_76(uParam0, 1);
					func_76(uParam0, 2);
					func_76(uParam0, 3);
					func_76(uParam0, 5);
					uParam0->f_5 = -1215674354;
					uParam0->f_11 = { -3243.502f, -3187.141f, -9.3137f };
					break;
				case 19:
					func_76(uParam0, 0);
					func_76(uParam0, 1);
					uParam0->f_5 = 1902132155;
					uParam0->f_11 = { -1745.01f, -2929.141f, -12.3355f };
					break;
				case 20:
					func_76(uParam0, 0);
					func_76(uParam0, 1);
					func_76(uParam0, 2);
					func_76(uParam0, 3);
					func_76(uParam0, 5);
					uParam0->f_5 = 1661312774;
					uParam0->f_11 = { -1735.07f, -2378.355f, 41.289f };
					break;
			}
			break;
		case 4:
			uParam0->f_6 = 1;
			*uParam0 = 11;
			uParam0->f_1 = 1;
			uParam0->f_2 = 2;
			func_74(uParam0);
			uParam0->f_15 = -2090512547;
			switch (iParam2)
			{
				case 0:
					func_75(uParam0);
					uParam0->f_5 = 1382777618;
					uParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
					break;
				case 1:
					func_75(uParam0);
					uParam0->f_5 = -2000681184;
					uParam0->f_11 = { 1274.578f, -1218.286f, 80.6496f };
					break;
				case 2:
					func_75(uParam0);
					uParam0->f_5 = 886884092;
					uParam0->f_11 = { -954.4733f, -1203.246f, 54.5241f };
					break;
				case 3:
					func_75(uParam0);
					uParam0->f_5 = -1277120723;
					uParam0->f_11 = { -5442.537f, -2904.509f, -0.0668f };
					break;
				case 4:
					func_75(uParam0);
					uParam0->f_5 = 1577436816;
					uParam0->f_11 = { -4438.908f, -2693.073f, -12.033f };
					break;
				case 5:
					func_75(uParam0);
					uParam0->f_5 = -234749781;
					uParam0->f_11 = { -3339.601f, -2869.283f, -6.9507f };
					break;
				case 6:
					func_75(uParam0);
					uParam0->f_5 = -1607623039;
					uParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
					break;
				case 7:
					func_75(uParam0);
					uParam0->f_5 = -1943295936;
					uParam0->f_11 = { 1735.865f, -422.7769f, 47.1349f };
					break;
				case 8:
					func_75(uParam0);
					uParam0->f_5 = -397730168;
					uParam0->f_11 = { 1978.501f, -1902.647f, 41.0487f };
					break;
				case 9:
					func_75(uParam0);
					uParam0->f_5 = -392659534;
					uParam0->f_11 = { 2757.999f, -1078.666f, 45.8905f };
					break;
				case 10:
					func_75(uParam0);
					uParam0->f_5 = 146267878;
					uParam0->f_11 = { -1762.115f, -237.9833f, 181.9701f };
					break;
			}
			break;
		case 12:
			uParam0->f_6 = 1;
			*uParam0 = 15;
			uParam0->f_1 = 3;
			uParam0->f_2 = 1;
			func_74(uParam0);
			switch (iParam2)
			{
				case 0:
					func_75(uParam0);
					uParam0->f_5 = 1247886914;
					uParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
					break;
				case 1:
					func_75(uParam0);
					uParam0->f_5 = 1926100410;
					uParam0->f_11 = { 1428.817f, -1812.995f, 57.37384f };
					break;
				case 2:
					func_75(uParam0);
					uParam0->f_5 = 603340011;
					uParam0->f_11 = { 2578.893f, -852.3694f, 41.3078f };
					break;
				case 3:
					func_75(uParam0);
					uParam0->f_5 = -1253915394;
					uParam0->f_11 = { 2798.119f, 1432.187f, 77.71185f };
					break;
				case 4:
					func_75(uParam0);
					uParam0->f_5 = 1281783573;
					uParam0->f_11 = { 1243.455f, 526.5765f, 87.43867f };
					break;
				case 5:
					func_75(uParam0);
					uParam0->f_5 = -1384936716;
					uParam0->f_11 = { -28.69774f, 1111.23f, 167.9945f };
					break;
				case 6:
					func_75(uParam0);
					uParam0->f_5 = 636669604;
					uParam0->f_11 = { -546.6091f, -298.2057f, 52.56811f };
					break;
				case 7:
					func_75(uParam0);
					uParam0->f_5 = 1410575087;
					uParam0->f_11 = { -1403.688f, 383.7506f, 102.2472f };
					break;
				case 8:
					func_75(uParam0);
					uParam0->f_5 = -736919321;
					uParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
					break;
				case 9:
					func_75(uParam0);
					uParam0->f_5 = 1755496218;
					uParam0->f_11 = { -1459.752f, -1915.602f, 50.93545f };
					break;
				case 10:
					func_75(uParam0);
					uParam0->f_5 = -1810033095;
					uParam0->f_11 = { -2470.018f, -2426.993f, 59.1458f };
					break;
				case 11:
					func_75(uParam0);
					uParam0->f_5 = 99707271;
					uParam0->f_11 = { -3092.935f, -3166.527f, -1.36638f };
					break;
				case 12:
					func_75(uParam0);
					uParam0->f_5 = 2145033839;
					uParam0->f_11 = { -3685.624f, -2769.247f, -15.14988f };
					break;
				case 13:
					func_75(uParam0);
					uParam0->f_5 = -994111457;
					uParam0->f_11 = { -4668.993f, -3706.819f, 12.54352f };
					break;
				case 14:
					func_75(uParam0);
					uParam0->f_5 = 702836385;
					uParam0->f_11 = { -5194.483f, -2883.913f, 2.32447f };
					break;
			}
			break;
		case 6:
			uParam0->f_6 = 1;
			*uParam0 = 16;
			uParam0->f_1 = 2;
			uParam0->f_2 = 8;
			switch (iParam3)
			{
				case 0:
					func_77(uParam0, 0);
					func_77(uParam0, 1);
					func_77(uParam0, 4);
					func_77(uParam0, 5);
					break;
				case 1:
					func_77(uParam0, 2);
					func_77(uParam0, 3);
					func_77(uParam0, 6);
					func_77(uParam0, 7);
					func_78(uParam0, 2);
					break;
			}
			switch (iParam2)
			{
				case 0:
					func_76(uParam0, 0);
					uParam0->f_5 = -88606612;
					uParam0->f_11 = { 498.9236f, 1191.276f, 179.5016f };
					break;
				case 1:
					func_76(uParam0, 1);
					uParam0->f_5 = -1507537085;
					uParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
					break;
				case 2:
					func_76(uParam0, 0);
					uParam0->f_5 = 150331424;
					uParam0->f_11 = { 2271.753f, -440.5277f, 40.82026f };
					break;
				case 3:
					func_76(uParam0, 1);
					uParam0->f_5 = -74168995;
					uParam0->f_11 = { 2000.58f, -499.0656f, 41.0245f };
					break;
				case 4:
					func_76(uParam0, 0);
					uParam0->f_5 = -1303456769;
					uParam0->f_11 = { 2299.81f, -898.4015f, 41.04434f };
					break;
				case 5:
					func_76(uParam0, 1);
					uParam0->f_5 = 2080696176;
					uParam0->f_11 = { 2369.292f, -673.8396f, 41.36789f };
					break;
				case 6:
					func_76(uParam0, 0);
					uParam0->f_5 = -801880493;
					uParam0->f_11 = { 1531.33f, 1578.837f, 147.4066f };
					break;
				case 7:
					func_76(uParam0, 1);
					uParam0->f_5 = -2098877513;
					uParam0->f_11 = { 945.3031f, 1142.541f, 147.4809f };
					break;
				case 8:
					func_76(uParam0, 0);
					uParam0->f_5 = -985131289;
					uParam0->f_11 = { -1126.469f, 815.3829f, 117.6536f };
					break;
				case 9:
					func_76(uParam0, 1);
					uParam0->f_5 = 171385032;
					uParam0->f_11 = { -2063.813f, 935.3212f, 147.0808f };
					break;
				case 10:
					func_76(uParam0, 0);
					uParam0->f_5 = -690365399;
					uParam0->f_11 = { -1589.688f, -1425.319f, 80.34965f };
					break;
				case 11:
					func_76(uParam0, 1);
					uParam0->f_5 = -393773180;
					uParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
					break;
				case 12:
					func_76(uParam0, 0);
					uParam0->f_5 = 1783045643;
					uParam0->f_11 = { -2690.104f, -2892.627f, 64.73759f };
					break;
				case 13:
					func_76(uParam0, 1);
					uParam0->f_5 = -1841828372;
					uParam0->f_11 = { -2914.53f, -2558.967f, 61.66708f };
					break;
				case 14:
					func_76(uParam0, 0);
					uParam0->f_5 = -1926357119;
					uParam0->f_11 = { -4545.762f, -3673.932f, 17.87756f };
					break;
				case 15:
					func_76(uParam0, 1);
					uParam0->f_5 = -1904926193;
					uParam0->f_11 = { -4720.841f, -3357f, 8.61745f };
					break;
			}
			break;
		case 7:
			uParam0->f_6 = 1;
			*uParam0 = 10;
			uParam0->f_1 = 12;
			uParam0->f_2 = 3;
			switch (iParam2)
			{
				case 0:
					func_76(uParam0, 0);
					func_76(uParam0, 1);
					func_76(uParam0, 2);
					func_76(uParam0, 9);
					func_76(uParam0, 10);
					func_76(uParam0, 11);
					func_79(uParam0, iParam3);
					uParam0->f_5 = 666420762;
					uParam0->f_11 = { 468.6932f, 60.0849f, 134.4816f };
					break;
				case 1:
					func_76(uParam0, 1);
					func_76(uParam0, 2);
					func_76(uParam0, 8);
					func_76(uParam0, 9);
					func_76(uParam0, 10);
					func_76(uParam0, 11);
					func_79(uParam0, iParam3);
					uParam0->f_5 = 1145423923;
					uParam0->f_11 = { -408.7124f, 154.0742f, 40.84526f };
					break;
				case 2:
					func_76(uParam0, 1);
					func_76(uParam0, 2);
					func_76(uParam0, 3);
					func_76(uParam0, 4);
					func_76(uParam0, 5);
					func_76(uParam0, 6);
					func_76(uParam0, 9);
					func_76(uParam0, 10);
					func_76(uParam0, 11);
					func_79(uParam0, iParam3);
					uParam0->f_5 = -1176575305;
					uParam0->f_11 = { -1929.655f, -1348.338f, 105.84f };
					break;
				case 3:
					func_76(uParam0, 0);
					func_76(uParam0, 1);
					func_76(uParam0, 2);
					func_76(uParam0, 9);
					func_76(uParam0, 10);
					func_76(uParam0, 11);
					func_79(uParam0, iParam3);
					uParam0->f_5 = -888961792;
					uParam0->f_11 = { -2003.943f, -2158.135f, 54.2301f };
					break;
				case 4:
					func_76(uParam0, 0);
					func_76(uParam0, 1);
					func_76(uParam0, 2);
					func_76(uParam0, 9);
					func_76(uParam0, 10);
					func_76(uParam0, 11);
					func_79(uParam0, iParam3);
					uParam0->f_5 = -1145898130;
					uParam0->f_11 = { -1272.226f, 97.47642f, 70.53004f };
					break;
				case 5:
					func_76(uParam0, 1);
					func_76(uParam0, 2);
					func_76(uParam0, 3);
					func_76(uParam0, 4);
					func_76(uParam0, 7);
					func_76(uParam0, 8);
					func_76(uParam0, 9);
					func_76(uParam0, 10);
					func_76(uParam0, 11);
					func_79(uParam0, iParam3);
					uParam0->f_5 = -264936334;
					uParam0->f_11 = { -2350.861f, -359.485f, 143.7474f };
					break;
				case 6:
					func_76(uParam0, 1);
					func_76(uParam0, 2);
					func_76(uParam0, 3);
					func_76(uParam0, 6);
					func_76(uParam0, 7);
					func_76(uParam0, 9);
					func_76(uParam0, 10);
					func_76(uParam0, 11);
					func_79(uParam0, iParam3);
					uParam0->f_5 = -562839313;
					uParam0->f_11 = { -1736.757f, 306.2781f, 108.1355f };
					break;
				case 7:
					func_76(uParam0, 1);
					func_76(uParam0, 2);
					func_76(uParam0, 4);
					func_76(uParam0, 5);
					func_76(uParam0, 6);
					func_76(uParam0, 9);
					func_76(uParam0, 10);
					func_76(uParam0, 11);
					func_79(uParam0, iParam3);
					uParam0->f_5 = -819926700;
					uParam0->f_11 = { -4964.499f, -3399.889f, 7.97322f };
					break;
				case 8:
					func_76(uParam0, 0);
					func_76(uParam0, 1);
					func_76(uParam0, 2);
					func_76(uParam0, 9);
					func_76(uParam0, 10);
					func_76(uParam0, 11);
					func_79(uParam0, iParam3);
					uParam0->f_5 = -100890882;
					uParam0->f_11 = { -2192.805f, -2778.977f, 69.01174f };
					break;
				case 9:
					func_76(uParam0, 1);
					func_76(uParam0, 2);
					func_76(uParam0, 5);
					func_76(uParam0, 9);
					func_76(uParam0, 10);
					func_76(uParam0, 11);
					func_79(uParam0, iParam3);
					uParam0->f_5 = 373607510;
					uParam0->f_11 = { -4603.166f, -2701.434f, -10.12116f };
					break;
			}
			break;
		case 5:
			uParam0->f_6 = 1;
			*uParam0 = 21;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			func_74(uParam0);
			switch (iParam2)
			{
				case 0:
					func_75(uParam0);
					uParam0->f_5 = -1562903685;
					uParam0->f_11 = { 1452.25f, -1695.116f, 64.9668f };
					break;
				case 1:
					func_75(uParam0);
					uParam0->f_5 = 442262250;
					uParam0->f_11 = { 1163.55f, -324.0086f, 97.10712f };
					break;
				case 2:
					func_75(uParam0);
					uParam0->f_5 = 2113001754;
					uParam0->f_11 = { 2682.104f, 858.447f, 85.90118f };
					break;
				case 3:
					func_75(uParam0);
					uParam0->f_5 = 222101843;
					uParam0->f_11 = { 1311.333f, 1183.934f, 151.5859f };
					break;
				case 4:
					func_75(uParam0);
					uParam0->f_5 = 862535295;
					uParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
					break;
				case 5:
					func_75(uParam0);
					uParam0->f_5 = 267494763;
					uParam0->f_11 = { 109.9411f, 1282.256f, 176.292f };
					break;
				case 6:
					func_75(uParam0);
					uParam0->f_5 = 492498900;
					uParam0->f_11 = { -1450.859f, 1686.266f, 255.2526f };
					break;
				case 7:
					func_75(uParam0);
					uParam0->f_5 = -735417347;
					uParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
					break;
				case 8:
					func_75(uParam0);
					uParam0->f_5 = 2000289900;
					uParam0->f_11 = { -1698.036f, 380.6171f, 106.0826f };
					break;
				case 9:
					func_75(uParam0);
					uParam0->f_5 = 1820563970;
					uParam0->f_11 = { -2016.359f, -909.5917f, 84.91344f };
					break;
				case 10:
					func_75(uParam0);
					uParam0->f_5 = 1501808210;
					uParam0->f_11 = { -1362.091f, -1267.624f, 82.41972f };
					break;
				case 11:
					func_75(uParam0);
					uParam0->f_5 = -1103422576;
					uParam0->f_11 = { -2449.051f, -1457.942f, 148.705f };
					break;
				case 12:
					func_75(uParam0);
					uParam0->f_5 = -375108461;
					uParam0->f_11 = { -1559.339f, -1930.728f, 50.99157f };
					break;
				case 13:
					func_75(uParam0);
					uParam0->f_5 = 1074344160;
					uParam0->f_11 = { -1764.444f, -2717.768f, 62.81413f };
					break;
				case 14:
					func_75(uParam0);
					uParam0->f_5 = 1375567406;
					uParam0->f_11 = { -2190.544f, -2200.288f, 64.42333f };
					break;
				case 15:
					func_75(uParam0);
					uParam0->f_5 = 1695022182;
					uParam0->f_11 = { -2803.26f, -3142.291f, 5.88098f };
					break;
				case 16:
					func_75(uParam0);
					uParam0->f_5 = 1773241795;
					uParam0->f_11 = { -3175.168f, -2402.267f, 22.72451f };
					break;
				case 17:
					func_75(uParam0);
					uParam0->f_5 = 1650499101;
					uParam0->f_11 = { -4220.611f, -2690.138f, 0.65931f };
					break;
				case 18:
					func_75(uParam0);
					uParam0->f_5 = 149116609;
					uParam0->f_11 = { -4372.619f, -3274.055f, 20.26154f };
					break;
				case 19:
					func_75(uParam0);
					uParam0->f_5 = 1486166046;
					uParam0->f_11 = { -5456.922f, -3562.744f, -21.1142f };
					break;
				case 20:
					func_75(uParam0);
					uParam0->f_5 = 58739626;
					uParam0->f_11 = { -5796.222f, -2650.145f, -16.68393f };
					break;
			}
			break;
		case 11:
			uParam0->f_6 = 1;
			*uParam0 = 10;
			uParam0->f_1 = 4;
			uParam0->f_2 = 1;
			func_74(uParam0);
			func_78(uParam0, 2);
			switch (iParam2)
			{
				case 0:
					func_75(uParam0);
					uParam0->f_5 = -1657923088;
					uParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
					break;
				case 1:
					func_75(uParam0);
					uParam0->f_5 = -1268232386;
					uParam0->f_11 = { 1465.514f, -821.0334f, 50.2372f };
					break;
				case 2:
					func_75(uParam0);
					uParam0->f_5 = 1926851120;
					uParam0->f_11 = { -1082.332f, -696.7548f, 70.5432f };
					break;
				case 3:
					func_75(uParam0);
					uParam0->f_5 = -66052340;
					uParam0->f_11 = { -1462.952f, -1929.859f, 48.4187f };
					break;
				case 4:
					func_75(uParam0);
					uParam0->f_5 = 1738334804;
					uParam0->f_11 = { -4988.295f, -3902.346f, -0.03286f };
					break;
				case 5:
					func_75(uParam0);
					uParam0->f_5 = 1009780912;
					uParam0->f_11 = { -2770.473f, -2936.506f, 64.84297f };
					break;
				case 6:
					func_75(uParam0);
					uParam0->f_5 = -1560771476;
					uParam0->f_11 = { -1209.61f, -1812.165f, 61.23543f };
					break;
				case 7:
					func_75(uParam0);
					uParam0->f_5 = 453813335;
					uParam0->f_11 = { -1706.993f, -580.9286f, 149.93f };
					break;
				case 8:
					func_75(uParam0);
					uParam0->f_5 = 786924542;
					uParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
					break;
				case 9:
					func_75(uParam0);
					uParam0->f_5 = 1656593925;
					uParam0->f_11 = { 1778.236f, -1731.359f, 48.27552f };
					break;
			}
			break;
		case 9:
			uParam0->f_6 = 1;
			*uParam0 = 12;
			uParam0->f_1 = 4;
			uParam0->f_2 = 5;
			switch (iParam2)
			{
				case 0:
					func_80(uParam0, iParam3);
					uParam0->f_5 = 1323108111;
					uParam0->f_11 = { -1159.115f, 397.0877f, 60.4953f };
					break;
				case 1:
					func_80(uParam0, iParam3);
					uParam0->f_5 = -1505479200;
					uParam0->f_11 = { -1278.359f, 291.4224f, 76.6652f };
					break;
				case 2:
					func_80(uParam0, iParam3);
					uParam0->f_5 = -1283075997;
					uParam0->f_11 = { -1371.28f, 283.4114f, 86.0114f };
					break;
				case 3:
					func_80(uParam0, iParam3);
					uParam0->f_5 = -2100531475;
					uParam0->f_11 = { -1117.687f, 406.6783f, 55.3681f };
					break;
				case 4:
					func_80(uParam0, iParam3);
					uParam0->f_5 = 269617530;
					uParam0->f_11 = { -1288.323f, 148.5012f, 71.7864f };
					break;
				case 5:
					func_80(uParam0, iParam3);
					uParam0->f_5 = 1592829750;
					uParam0->f_11 = { -1648.447f, -114.858f, 170.0504f };
					break;
				case 6:
					func_80(uParam0, iParam3);
					uParam0->f_5 = 1817985549;
					uParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
					break;
				case 7:
					func_80(uParam0, iParam3);
					uParam0->f_5 = 1945424739;
					uParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
					break;
				case 8:
					func_80(uParam0, iParam3);
					uParam0->f_5 = 1787314318;
					uParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
					break;
				case 9:
					func_80(uParam0, iParam3);
					uParam0->f_5 = 542354442;
					uParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
					break;
				case 10:
					func_80(uParam0, iParam3);
					uParam0->f_5 = 1510776727;
					uParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
					break;
				case 11:
					func_80(uParam0, iParam3);
					uParam0->f_5 = -2017297662;
					uParam0->f_11 = { 817.7247f, 566.3447f, 114.3761f };
					break;
			}
			break;
		case 10:
			uParam0->f_6 = 1;
			*uParam0 = 20;
			uParam0->f_1 = 1;
			uParam0->f_2 = 1;
			func_74(uParam0);
			switch (iParam2)
			{
				case 0:
					func_75(uParam0);
					uParam0->f_5 = -377638420;
					uParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
					break;
				case 1:
					func_75(uParam0);
					uParam0->f_5 = 1308799438;
					uParam0->f_11 = { -1541.353f, -2334.611f, 43.10187f };
					break;
				case 2:
					func_75(uParam0);
					uParam0->f_5 = -1030922940;
					uParam0->f_11 = { -3456.39f, -2262.339f, 0.01624f };
					break;
				case 3:
					func_75(uParam0);
					uParam0->f_5 = 1750043358;
					uParam0->f_11 = { -3703.712f, -3594.224f, 45.18983f };
					break;
				case 4:
					func_75(uParam0);
					uParam0->f_5 = -1330609910;
					uParam0->f_11 = { -1581.551f, -1656.278f, 78.51012f };
					break;
				case 5:
					func_75(uParam0);
					uParam0->f_5 = 223942444;
					uParam0->f_11 = { -1236.292f, -1118.55f, 68.58572f };
					break;
				case 6:
					func_75(uParam0);
					uParam0->f_5 = 1067547121;
					uParam0->f_11 = { -1264.125f, -773.2117f, 91.83559f };
					break;
				case 7:
					func_75(uParam0);
					uParam0->f_5 = -450732096;
					uParam0->f_11 = { -1414.607f, -234.2123f, 99.22668f };
					break;
				case 8:
					func_75(uParam0);
					uParam0->f_5 = -1701940764;
					uParam0->f_11 = { -1721.402f, 553.6f, 112.524f };
					break;
				case 9:
					func_75(uParam0);
					uParam0->f_5 = 1584258975;
					uParam0->f_11 = { -484.7991f, -70.36918f, 42.94242f };
					break;
				case 10:
					func_75(uParam0);
					uParam0->f_5 = -98183174;
					uParam0->f_11 = { -458.5839f, -346.5686f, 80.66556f };
					break;
				case 11:
					func_75(uParam0);
					uParam0->f_5 = -90261849;
					uParam0->f_11 = { 1089.583f, 23.75282f, 88.22131f };
					break;
				case 12:
					func_75(uParam0);
					uParam0->f_5 = 754522971;
					uParam0->f_11 = { 1000.131f, 417.5909f, 107.9082f };
					break;
				case 13:
					func_75(uParam0);
					uParam0->f_5 = 974542513;
					uParam0->f_11 = { 713.7332f, 23.52884f, 152.0797f };
					break;
				case 14:
					func_75(uParam0);
					uParam0->f_5 = -790885273;
					uParam0->f_11 = { 63.77304f, 1023.487f, 201.9749f };
					break;
				case 15:
					func_75(uParam0);
					uParam0->f_5 = -1447045452;
					uParam0->f_11 = { 366.667f, 1408.665f, 175.0605f };
					break;
				case 16:
					func_75(uParam0);
					uParam0->f_5 = -586115209;
					uParam0->f_11 = { 1785.934f, 1522.009f, 155.1442f };
					break;
				case 17:
					func_75(uParam0);
					uParam0->f_5 = 224941020;
					uParam0->f_11 = { 1279.07f, 1164.678f, 149.2508f };
					break;
				case 18:
					func_75(uParam0);
					uParam0->f_5 = -1179654578;
					uParam0->f_11 = { 2106.456f, 207.6169f, 72.68985f };
					break;
				case 19:
					func_75(uParam0);
					uParam0->f_5 = 1247197458;
					uParam0->f_11 = { 2675.549f, 179.9657f, 54.14579f };
					break;
			}
			break;
		case 8:
			uParam0->f_6 = 1;
			*uParam0 = 9;
			uParam0->f_1 = 2;
			uParam0->f_2 = 1;
			func_74(uParam0);
			uParam0->f_10 = 60f;
			switch (iParam2)
			{
				case 0:
					func_75(uParam0);
					uParam0->f_5 = 974582605;
					uParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
					break;
				case 1:
					func_75(uParam0);
					uParam0->f_5 = -964359125;
					uParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
					break;
				case 2:
					func_75(uParam0);
					uParam0->f_5 = -700339292;
					uParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
					break;
				case 3:
					func_75(uParam0);
					uParam0->f_5 = -470300912;
					uParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
					break;
				case 4:
					func_75(uParam0);
					uParam0->f_5 = -241343909;
					uParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
					break;
				case 5:
					func_75(uParam0);
					uParam0->f_5 = 1944053474;
					uParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
					break;
				case 6:
					func_75(uParam0);
					uParam0->f_5 = -2120646059;
					uParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
					break;
				case 7:
					func_75(uParam0);
					uParam0->f_5 = -1656440405;
					uParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
					break;
				case 8:
					func_75(uParam0);
					uParam0->f_5 = -1422404207;
					uParam0->f_11 = { 1012.322f, -394.373f, 90.43443f };
					break;
			}
			break;
		case 13:
			uParam0->f_6 = 1;
			*uParam0 = 1;
			uParam0->f_1 = 6;
			uParam0->f_2 = 1;
			func_74(uParam0);
			func_78(uParam0, 1);
			func_78(uParam0, 4);
			func_78(uParam0, 8);
			func_78(uParam0, 16);
			switch (iParam2)
			{
				case 0:
					func_75(uParam0);
					uParam0->f_5 = -1623035253;
					uParam0->f_11 = { func_82(func_81(iParam4)) };
					break;
			}
			break;
		case 14:
			uParam0->f_6 = 1;
			*uParam0 = 10;
			uParam0->f_1 = 5;
			uParam0->f_2 = 6;
			switch (iParam2)
			{
				case 0:
					func_83(uParam0, iParam3);
					uParam0->f_5 = -1957221189;
					uParam0->f_11 = { -347.4531f, 740.8643f, 116.4549f };
					break;
				case 1:
					func_83(uParam0, iParam3);
					uParam0->f_5 = 871956008;
					uParam0->f_11 = { -360.6497f, 824.0327f, 115.4768f };
					break;
				case 2:
					func_83(uParam0, iParam3);
					uParam0->f_5 = -718829908;
					uParam0->f_11 = { 2957.225f, 524.4706f, 43.66619f };
					break;
				case 3:
					func_83(uParam0, iParam3);
					uParam0->f_5 = -478076065;
					uParam0->f_11 = { 2975.885f, 537.2245f, 42.42131f };
					break;
				case 4:
					func_83(uParam0, iParam3);
					uParam0->f_5 = 158131441;
					uParam0->f_11 = { 1444.633f, -1417.982f, 78.22246f };
					break;
				case 5:
					func_83(uParam0, iParam3);
					uParam0->f_5 = 575051428;
					uParam0->f_11 = { 1394.169f, -1422.854f, 78.97552f };
					break;
				case 6:
					func_83(uParam0, iParam3);
					uParam0->f_5 = -861587350;
					uParam0->f_11 = { 2996.145f, 1351.808f, 42.95977f };
					break;
				case 7:
					func_83(uParam0, iParam3);
					uParam0->f_5 = -616671844;
					uParam0->f_11 = { 2915.743f, 1231.952f, 43.5792f };
					break;
				case 8:
					func_83(uParam0, iParam3);
					uParam0->f_5 = -828875274;
					uParam0->f_11 = { -833.5609f, -1543.917f, 59.6274f };
					break;
				case 9:
					func_83(uParam0, iParam3);
					uParam0->f_5 = -598017669;
					uParam0->f_11 = { -1019.64f, -1138.944f, 56.39161f };
					break;
			}
			break;
		case 15:
			uParam0->f_6 = 1;
			uParam0->f_7 = 1;
			*uParam0 = 12;
			uParam0->f_1 = 2;
			uParam0->f_2 = 1;
			func_74(uParam0);
			switch (iParam2)
			{
				case 0:
					func_75(uParam0);
					uParam0->f_5 = 2136361638;
					uParam0->f_11 = { 2208.668f, -350.9536f, 41.488f };
					break;
				case 1:
					func_75(uParam0);
					uParam0->f_5 = 1948005426;
					uParam0->f_11 = { 1733.923f, -727.6727f, 40.8996f };
					break;
				case 2:
					func_75(uParam0);
					uParam0->f_5 = 462368629;
					uParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
					break;
				case 3:
					func_75(uParam0);
					uParam0->f_5 = -172629291;
					uParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
					break;
				case 4:
					func_75(uParam0);
					uParam0->f_5 = 1063777848;
					uParam0->f_11 = { 646.006f, 1304.928f, 193.4366f };
					break;
				case 5:
					func_75(uParam0);
					uParam0->f_5 = -267241827;
					uParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
					break;
				case 6:
					func_75(uParam0);
					uParam0->f_5 = -1183266453;
					uParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
					break;
				case 7:
					func_75(uParam0);
					uParam0->f_5 = -877826604;
					uParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
					break;
				case 8:
					func_75(uParam0);
					uParam0->f_5 = 1527533302;
					uParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
					break;
				case 9:
					func_75(uParam0);
					uParam0->f_5 = -865586768;
					uParam0->f_11 = { 2566.893f, -71.0977f, 49.3333f };
					break;
				case 10:
					func_75(uParam0);
					uParam0->f_5 = 294379466;
					uParam0->f_11 = { 1389.072f, -2196.696f, 48.3307f };
					break;
				case 11:
					func_75(uParam0);
					uParam0->f_5 = 452588198;
					uParam0->f_11 = { 906.9065f, -987.0414f, 56.96f };
					break;
			}
			break;
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			switch (iParam1)
			{
				case 16:
					uParam0->f_8 = -468635158;
					break;
				case 17:
					uParam0->f_8 = 1112069699;
					break;
				case 18:
					uParam0->f_8 = 661147828;
					break;
				case 19:
					uParam0->f_8 = 899082205;
					break;
				case 20:
					uParam0->f_8 = 987333815;
					break;
				case 21:
					uParam0->f_8 = -315961129;
					break;
				case 22:
					uParam0->f_8 = -139081918;
					break;
				case 23:
					uParam0->f_8 = 1604238189;
					break;
			}
			iVar17 = func_84(iParam1);
			if (iVar17 == -1)
			{
				return;
			}
			if ((iParam1 == 22 || iParam1 == 23) || iParam1 == 21)
			{
				uParam0->f_7 = 1;
			}
			*uParam0 = func_85(iVar17);
			uParam0->f_1 = 0;
			uParam0->f_6 = 2;
			func_78(uParam0, 32);
			if (iParam2 != -1)
			{
				uParam0->f_9 = func_87(func_86(iVar17), iParam2);
				uParam0->f_15 = func_88(func_86(iVar17), iParam2);
				uParam0->f_5 = func_89(iVar17, iParam2);
				uParam0->f_11 = { func_90(iVar17, iParam2) };
			}
			break;
	}
}

struct<2> func_33(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_92(iParam0, &(Global_1070356->f_634), func_91(iParam1));
			break;
		case 3:
			Var0.f_1 = func_92(iParam0, &(Global_1070356->f_634.f_602), func_91(iParam1));
			break;
		case 4:
			Var0.f_1 = func_92(iParam0, &(Global_1070356->f_634.f_2104), func_91(iParam1));
			break;
		case 5:
			Var0.f_1 = func_92(iParam0, &(Global_1070356->f_634.f_12606), func_91(iParam1));
			break;
		case 6:
			Var0.f_1 = func_92(iParam0, &(Global_1070356->f_634.f_12908), func_91(iParam1));
			break;
		case 7:
			Var0.f_1 = func_92(iParam0, &(Global_1070356->f_634.f_15910), func_91(iParam1));
			break;
		case 8:
			Var0.f_1 = func_92(iParam0, &(Global_1070356->f_634.f_15981), func_91(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_93();
	}
	return Var0;
}

void func_34()
{
	func_94();
	func_95();
	func_96();
	func_97();
}

void func_35()
{
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(3);
	func_98(&(Local_1067.f_18.f_12));
	func_99();
	func_100();
	func_102(20636);
	if (!PED::ADD_RELATIONSHIP_GROUP("REL_OREPHT", &(Local_1067.f_18.f_44)))
	{
	}
	else
	{
		func_103(134217728);
	}
}

void func_36()
{
}

void func_37()
{
	int iVar0;

	iVar0 = 3;
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(iVar0);
}

void func_38()
{
	int iVar0;

	iVar0 = 5;
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(iVar0);
}

int func_39(struct<2> Param0)
{
	if (!func_104(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_91(Param0))
	{
		return 0;
	}
	return 1;
}

bool func_40(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1185962->f_1 && iParam0) != 0;
}

bool func_41(int iParam0, int iParam1)
{
	if (!Global_1070356->f_3)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (Global_1185577[iParam1 /*12*/] && iParam0) != 0;
}

int func_42()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_2883584)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (!func_39(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

void func_43()
{
}

void func_44()
{
	int iVar0;
	struct<11> Var1;

	iVar0 = (Global_1186267->f_231.f_1066[Local_1067.f_12 /*17*/])->f_5;
	Var1.f_10 = 1106247680;
	func_32(&Var1, Local_1067.f_1, Local_1067.f_2, Local_1067.f_3, iVar0);
	if (!func_105(&Var1, 1))
	{
		func_106(1);
		return;
	}
	Local_13.f_6 = func_81(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(iVar0)));
	func_107(256);
	if (func_108(Local_13.f_6))
	{
		func_109(5);
		func_106(6);
	}
	else
	{
		func_106(1);
	}
}

void func_45()
{
	struct<17> Var0;
	bool bVar17;

	Var0.f_10 = 1106247680;
	func_32(&Var0, Local_1067.f_1, Local_1067.f_2, -1, 255);
	if (func_105(&Var0, 1))
	{
		func_106(2);
		return;
	}
	if (func_110(Var0, &bVar17))
	{
		MISC::CLEAR_AREA(Local_1067.f_15, Var0.f_10, 2442122);
		func_106(2);
	}
	else if (bVar17)
	{
		func_109(3);
		func_106(6);
	}
	if (!func_111(Local_13.f_3.f_2))
	{
		func_112(&(Local_13.f_3.f_2));
	}
	else if (func_113(Local_13.f_3.f_2) > 45000)
	{
		func_109(4);
		func_106(6);
	}
}

void func_46()
{
	if (func_114(1, 255))
	{
		if (!func_115(1))
		{
			if (func_116())
			{
				func_107(1);
			}
		}
		else
		{
			func_117();
			func_106(3);
		}
	}
}

void func_47()
{
	bool bVar0;

	if (func_114(2, 255))
	{
		if (!func_115(2))
		{
			bVar0 = true;
			if (!func_118())
			{
				bVar0 = false;
			}
			if (!func_119())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_107(2);
			}
		}
		else
		{
			func_120();
			func_106(4);
		}
	}
}

void func_48()
{
	func_121();
	func_122();
	func_123();
	if (func_124() || Local_13.f_2 != 0)
	{
		func_125();
		func_106(5);
	}
}

void func_49()
{
	if (func_114(4, 255))
	{
		if (func_126())
		{
			func_107(4);
			func_106(6);
		}
	}
}

void func_50()
{
	if (!func_115(256))
	{
		return;
	}
	if (func_115(512))
	{
		if (func_67(32) && func_81(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_68(Local_13.f_6);
			func_127(32);
		}
	}
	else if (!func_67(32))
	{
		if (func_81(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_128(Local_13.f_6, 1, 1);
			func_129(32);
		}
	}
	else if (func_81(PLAYER::PLAYER_ID()) != Local_13.f_6)
	{
		func_68(Local_13.f_6);
		func_127(32);
	}
}

void func_51()
{
	func_130();
}

void func_52()
{
	if (Local_13 == 6)
	{
		func_131(6);
	}
	else if (Local_13 > 0)
	{
		func_50();
		func_131(1);
	}
}

void func_53()
{
	if (Local_13 == 6)
	{
		func_131(6);
	}
	else if (Local_13 > 1)
	{
		func_131(2);
	}
}

void func_54()
{
	bool bVar0;
	int iVar1;

	if (!func_114(1, 255))
	{
		bVar0 = true;
		if (!func_132())
		{
			bVar0 = false;
		}
		if (!func_133())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_134(1);
		}
		else
		{
			iVar1 = Global_1901929->f_230.f_63;
			if (!func_111(Local_1067.f_11))
			{
				func_112(&(Local_1067.f_11));
			}
			if (func_113(Local_1067.f_11) >= iVar1)
			{
				func_131(6);
			}
		}
	}
	else if (Local_13 > 2)
	{
		func_135(&(Local_1067.f_11));
		func_136();
		func_131(3);
	}
}

void func_55()
{
	int iVar0;

	if (!func_114(2, 255))
	{
		if (func_137())
		{
			func_134(2);
		}
		else
		{
			iVar0 = Global_1901929->f_230.f_63;
			if (!func_111(Local_1067.f_11))
			{
				func_112(&(Local_1067.f_11));
			}
			if (func_138(Local_1067.f_11) >= iVar0)
			{
				func_131(6);
			}
		}
	}
	else if (Local_13 > 3)
	{
		func_135(&(Local_1067.f_11));
		func_139();
		func_140();
		func_141();
		func_142();
		func_131(4);
	}
}

void func_56()
{
	if (Local_13 >= 5)
	{
		func_143();
		func_131(5);
		return;
	}
	func_144();
	func_145();
	func_146();
	func_147();
	func_148();
	func_149();
}

void func_57()
{
	if (!func_114(4, 255))
	{
		if (func_150())
		{
			func_151();
			func_65(Local_1067.f_12, 4);
			func_134(4);
		}
	}
	else if (Local_13 > 5)
	{
		func_131(6);
	}
}

void func_58()
{
}

bool func_59()
{
	return (func_115(4) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1));
}

void func_60()
{
}

void func_61()
{
	int iVar0;
	int iVar1;

	if (func_59())
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_38[iVar1])))
			{
				iVar0 = NETWORK::NET_TO_PED(&(Local_13.f_38[iVar1]));
				func_152(iVar1);
				EVENT::_0xAD8F2424C6E1E3A8(iVar0);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					PED::_0x39A2FC5AF55A52B1(iVar0, -1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
			}
			iVar1++;
		}
	}
}

void func_62()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_59())
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar2 = 0;
			while (iVar2 < 5)
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar1 /*6*/][iVar2]))
				{
					iVar0 = NETWORK::NET_TO_OBJ(Local_13.f_42[iVar1 /*6*/][iVar2]);
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						if (func_153(iVar2))
						{
							OBJECT::DELETE_OBJECT(&iVar0);
						}
						else
						{
							ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
						}
					}
				}
				iVar2++;
			}
			iVar1++;
		}
	}
}

void func_63()
{
	func_154(&(Local_1067.f_479.f_13));
	if (VOLUME::_DOES_VOLUME_EXIST(Local_1067.f_479.f_11))
	{
		VOLUME::_DELETE_VOLUME(Local_1067.f_479.f_11);
	}
}

void func_64()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_156(func_155(iVar0));
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			MISC::_0xE98D55C5983F2509(iVar1);
		}
		func_157(func_155(iVar0));
		iVar0++;
	}
}

void func_65(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_158(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT((*(*Global_1196005)[iVar0 /*72*/])[iParam0], iParam1);
}

void func_66()
{
	int iVar0;
	bool bVar1;

	if (!func_67(1))
	{
		return;
	}
	if (func_67(4))
	{
		return;
	}
	if (!func_67(2))
	{
		iVar0 = -1;
	}
	else if (!func_67(8))
	{
		iVar0 = 2;
	}
	else if (func_67(16))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else
	{
		iVar0 = 1;
		bVar1 = true;
	}
	func_159(Local_1067.f_9, iVar0, 0);
	func_129(4);
	if (bVar1)
	{
		func_160(Local_1067.f_1, Local_1067.f_2);
	}
}

bool func_67(int iParam0)
{
	return func_161(Local_1067.f_7, iParam0);
}

void func_68(int iParam0)
{
	int iVar0;

	if (!func_162(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	((*Global_1128435)[iVar0 /*83*/])->f_70 = iParam0;
	((*Global_1128435)[iVar0 /*83*/])->f_70.f_2 = 0;
}

void func_69()
{
	int iVar0;

	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (((func_163() && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::GET_PED_SOURCE_OF_DEATH(iVar0)) != PLAYER::PLAYER_PED_ID()) && !func_164(262144))
		{
			func_165(7, Local_1067.f_4);
		}
		if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			if (func_164(262144))
			{
				func_166(0);
			}
		}
	}
	func_167();
	func_168(1);
	func_169();
	func_170();
	func_171();
	if (VOLUME::_DOES_VOLUME_EXIST(Local_1067.f_18.f_252))
	{
		VOLUME::_DELETE_VOLUME(Local_1067.f_18.f_252);
	}
}

void func_70(var uParam0, struct<6> Param1, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_33(Param1.f_5, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_71(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_172(uParam0))
	{
		return -1;
	}
	iVar0 = func_173(uParam0, uParam0->f_9);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar1 == uParam0->f_9)
		{
		}
		else
		{
			iVar0 = func_173(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

struct<15> func_72(int iParam0)
{
	struct<15> Var0;

	Var0 = 2;
	Var0.f_1 = -1;
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_3 = -1;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_6.f_1 = -1;
	Var0.f_5.f_9 = 2;
	if (!func_19(iParam0))
	{
		return Var0;
	}
	return *(Global_1186267->f_231[iParam0 /*15*/]);
}

void func_73(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_174(uParam0);
			break;
		case 1:
			func_174(uParam0);
			break;
		case 2:
			func_174(uParam0);
			break;
		case 3:
			func_175(uParam0);
			break;
		case 4:
			func_174(uParam0);
			break;
		case 5:
			func_174(uParam0);
			break;
		case 6:
			func_175(uParam0);
			break;
		case 7:
			func_175(uParam0);
			break;
		case 8:
			func_175(uParam0);
			break;
		case 9:
			func_174(uParam0);
			break;
		default:
			func_75(uParam0);
			func_74(uParam0);
			break;
	}
}

void func_74(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_2 - 1))
	{
		func_77(uParam0, iVar0);
		iVar0++;
	}
}

void func_75(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1 - 1))
	{
		func_76(uParam0, iVar0);
		iVar0++;
	}
}

void func_76(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_3), iParam1);
}

void func_77(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_4), iParam1);
}

void func_78(var uParam0, int iParam1)
{
	func_176(&(uParam0->f_16), iParam1);
}

void func_79(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_77(uParam0, 0);
			break;
		case 1:
		case 2:
			func_77(uParam0, 1);
			func_77(uParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_77(uParam0, 0);
			func_77(uParam0, 2);
			break;
		case 8:
			func_77(uParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_77(uParam0, 1);
			break;
		default:
			func_74(uParam0);
			break;
	}
}

void func_80(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_177(uParam0);
			break;
		case 1:
			func_178(uParam0);
			break;
		case 2:
			func_179(uParam0);
			break;
		case 3:
			func_180(uParam0);
			break;
		default:
			func_75(uParam0);
			func_74(uParam0);
			break;
	}
}

int func_81(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return ((*Global_1128435)[iVar0 /*83*/])->f_38.f_3;
	}
	return -1;
}

Vector3 func_82(int iParam0)
{
	if (!func_162(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return ((*Global_1125276)[iParam0 /*27*/])->f_20;
}

void func_83(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_181(uParam0);
			break;
		case 1:
		case 2:
			func_182(uParam0);
			break;
		case 3:
		case 4:
			func_183(uParam0);
			break;
		default:
			func_74(uParam0);
			break;
	}
	func_75(uParam0);
}

int func_84(int iParam0)
{
	return &(Global_1245803->f_2073[iParam0]);
}

int func_85(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return ((*Global_1234391)[iParam0 /*5*/])->f_3;
}

int func_86(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1234391[iParam0 /*5*/];
}

var func_87(var uParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_184(&Var1, uParam0) && func_185(&Var1, iParam1))
	{
		func_186(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_88(var uParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_184(&Var1, uParam0) && func_185(&Var1, iParam1))
	{
		func_186(Var1, -1052341598, &iVar0, 0);
	}
	return iVar0;
}

int func_89(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_187(iParam0, iParam1);
	return &(Global_1234391->f_401[iVar0 /*7*/]);
}

Vector3 func_90(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_187(iParam0, iParam1);
	return (Global_1234391->f_401[iVar0 /*7*/])->f_3;
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1070356->f_634.f_601;
		case 3:
			return Global_1070356->f_634.f_2103;
		case 4:
			return Global_1070356->f_634.f_12605;
		case 5:
			return Global_1070356->f_634.f_12907;
		case 6:
			return Global_1070356->f_634.f_15909;
		case 7:
			return Global_1070356->f_634.f_15980;
		case 8:
			return Global_1070356->f_634.f_17182;
		default:
			break;
	}
	return -1;
}

int func_92(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = (iParam2 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (uParam1[iVar2 /*3*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (uParam1[iVar2 /*3*/] < iParam0)
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

struct<2> func_93()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_94()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			(Local_74[iVar1 /*31*/])->f_4.f_2[iVar0] = 9000f;
			iVar0++;
		}
		iVar1++;
	}
}

void func_95()
{
	func_102(28488);
}

void func_96()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	func_189(&(Local_1067.f_377), &(Local_1067.f_377.f_31));
	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	bVar2 = true;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		bVar2 = false;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_13.f_49.f_5[iVar0] = 0;
			Local_13.f_49.f_1[iVar0] = 255;
		}
		if (bVar2)
		{
			(Local_74[iVar1 /*31*/])->f_10.f_13[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_97()
{
}

void func_98(var uParam0)
{
	func_190(uParam0, 0);
	func_191(uParam0, 0);
	func_192(uParam0, 1);
	func_193(uParam0, 1);
	func_194(uParam0, 0);
	func_195(uParam0, 1);
	func_196(uParam0, 1, 1, 1);
}

void func_99()
{
	switch (func_197())
	{
		case 0:
			func_198(0, -1964611878);
			func_199(0, -668350768, -1989345804);
			func_198(1, func_200(997958153 /* GXTEntry: "Riding" */, 1));
			break;
		case 1:
		case 2:
			if (func_201() == 2)
			{
				func_198(0, 1462825054);
				func_199(0, -974314921, 1460279599);
			}
			else
			{
				func_198(0, 1708527016);
				func_199(0, -1128853525, 1691628739);
			}
			func_198(1, joaat("a_c_donkey_01"));
			break;
		case 3:
			if (func_201() == 2)
			{
				func_198(0, 1462825054);
				func_199(0, -974314921, 1460279599);
			}
			else
			{
				func_198(0, -1964611878);
				func_199(0, -668350768, -1989345804);
			}
			func_198(1, func_200(997958153 /* GXTEntry: "Riding" */, 1));
			func_198(2, joaat("a_c_bear_01"));
			func_103(4194304);
			break;
		case 4:
			if (func_201() == 2)
			{
				func_198(0, 1462825054);
				func_199(0, -974314921, 1460279599);
			}
			else
			{
				func_198(0, -1964611878);
				func_199(0, -668350768, -1989345804);
			}
			func_198(1, func_200(997958153 /* GXTEntry: "Riding" */, 1));
			func_198(2, joaat("a_c_buck_01"));
			func_103(8388608);
			break;
		case 5:
			if (func_201() == 2)
			{
				func_198(0, 1462825054);
				func_199(0, -974314921, 1460279599);
			}
			else
			{
				func_198(0, -1964611878);
				func_199(0, -668350768, -1989345804);
			}
			func_198(1, func_200(997958153 /* GXTEntry: "Riding" */, 1));
			func_198(2, joaat("a_c_cougar_01"));
			func_103(16777216);
			break;
		case 6:
			if (func_201() == 2)
			{
				func_198(0, 1462825054);
				func_199(0, -974314921, 1460279599);
			}
			else
			{
				func_198(0, -1964611878);
				func_199(0, -668350768, -1989345804);
			}
			func_198(1, func_200(997958153 /* GXTEntry: "Riding" */, 1));
			func_198(2, joaat("a_c_coyote_01"));
			func_103(33554432);
			break;
		case 7:
			if (func_201() == 2)
			{
				func_198(0, 1462825054);
				func_199(0, -974314921, 1460279599);
			}
			else
			{
				func_198(0, -1964611878);
				func_199(0, -668350768, -1989345804);
			}
			func_198(1, func_200(997958153 /* GXTEntry: "Riding" */, 1));
			func_198(2, joaat("a_c_wolf"));
			func_103(67108864);
			break;
		case 8:
			func_198(0, 1708527016);
			func_199(0, -1128853525, 1691628739);
			func_198(1, func_200(997958153 /* GXTEntry: "Riding" */, 1));
			func_198(2, joaat("a_c_fishlargemouthbass_01_ms"));
			break;
		case 9:
		case 10:
		case 11:
			func_198(0, 1708527016);
			func_199(0, -1128853525, 1691628739);
			func_198(1, func_200(997958153 /* GXTEntry: "Riding" */, 1));
			break;
		default:
			break;
	}
	switch (func_202())
	{
		case 0:
			func_203(0, 469.7219f, 59.7445f, 135.5631f, 76.14f, 1);
			func_203(1, 475.9219f, 54.46168f, 134.986f, 180f, 1);
			break;
		case 1:
			func_203(0, -409.2561f, 154.7292f, 41.8005f, 141.54f, 1);
			func_203(1, -405.0037f, 152.8974f, 41.46089f, -49.67f, 1);
			func_203(2, -416.5092f, 147.6119f, 40f, 0f, 1);
			break;
		case 2:
			func_203(0, -1928.554f, -1348.667f, 105.6326f, 18.99f, 1);
			func_203(1, -1935.187f, -1353.115f, 106.9843f, -51.4f, 1);
			if (func_164(4194304))
			{
				func_203(2, -1934.518f, -1307.44f, 106.2855f, -54.58f, 1);
			}
			else if (func_164(8388608))
			{
				func_203(2, -1934.518f, -1307.44f, 106.2855f, -54.58f, 1);
			}
			else if (func_164(16777216))
			{
				func_203(2, -1934.518f, -1307.44f, 106.2855f, -54.58f, 1);
			}
			else if (func_164(33554432))
			{
				func_203(2, -1934.518f, -1307.44f, 106.2855f, -54.58f, 1);
			}
			else if (func_164(67108864))
			{
				func_203(2, -1934.518f, -1307.44f, 106.2855f, -54.58f, 1);
			}
			break;
		case 3:
			func_203(0, -2003.943f, -2158.135f, 54.2301f, -134.78f, 1);
			func_203(1, -2005.132f, -2146.552f, 56.1274f, -45.27f, 1);
			break;
		case 4:
			func_203(0, -1281.655f, 110.9998f, 70.78191f, -64.75f, 1);
			func_203(1, -1276.128f, 104.356f, 70.63606f, -91.52f, 1);
			break;
		case 5:
			func_203(0, -2350.861f, -359.485f, 143.7474f, 98.86f, 1);
			func_203(1, -2354.687f, -347.2756f, 144.6231f, 91.52f, 1);
			if (func_164(4194304))
			{
				func_203(2, -2383.904f, -370.4672f, 141.1333f, 101.85f, 1);
			}
			else if (func_164(8388608))
			{
				func_203(2, -2383.904f, -370.4672f, 141.1333f, 101.85f, 1);
			}
			else if (func_164(16777216))
			{
				func_203(2, -2383.904f, -370.4672f, 141.1333f, 101.85f, 1);
			}
			else if (func_164(33554432))
			{
				func_203(2, -2383.904f, -370.4672f, 141.1333f, 101.85f, 1);
			}
			else if (func_164(67108864))
			{
				func_203(2, -2383.904f, -370.4672f, 141.1333f, 101.85f, 1);
			}
			else
			{
				func_203(2, -2405.882f, -382.2583f, 133.5046f, 0f, 1);
			}
			break;
		case 6:
			func_203(0, -1736.757f, 306.2781f, 108.1355f, -140.26f, 1);
			func_203(1, -1729.253f, 303.9286f, 107.3634f, -145.75f, 1);
			if (func_164(4194304))
			{
				func_203(2, -1725.758f, 280.9127f, 109.995f, 130.71f, 1);
			}
			else if (func_164(8388608))
			{
				func_203(2, -1725.758f, 280.9127f, 109.995f, 130.71f, 1);
			}
			else if (func_164(16777216))
			{
				func_203(2, -1725.758f, 280.9127f, 109.995f, 130.71f, 1);
			}
			else if (func_164(33554432))
			{
				func_203(2, -1725.758f, 280.9127f, 109.995f, 130.71f, 1);
			}
			else if (func_164(67108864))
			{
				func_203(2, -1725.758f, 280.9127f, 109.995f, 130.71f, 1);
			}
			break;
		case 7:
			func_203(0, -4964.499f, -3399.889f, 7.97322f, -124.92f, 1);
			func_203(1, -4965.817f, -3411.683f, 8.05074f, -162.81f, 1);
			if (func_164(4194304))
			{
				func_203(2, -4936.588f, -3408.675f, 10.46266f, -55.93f, 1);
			}
			else if (func_164(8388608))
			{
				func_203(2, -4936.588f, -3408.675f, 10.46266f, -55.93f, 1);
			}
			else if (func_164(16777216))
			{
				func_203(2, -4936.588f, -3408.675f, 10.46266f, -55.93f, 1);
			}
			else if (func_164(33554432))
			{
				func_203(2, -4936.588f, -3408.675f, 10.46266f, -55.93f, 1);
			}
			else if (func_164(67108864))
			{
				func_203(2, -4936.588f, -3408.675f, 10.46266f, -55.93f, 1);
			}
			break;
		case 8:
			func_203(0, -2192.805f, -2778.977f, 69.01174f, -158.91f, 1);
			func_203(1, -2199.156f, -2782.155f, 68.98679f, -162.81f, 1);
			break;
		case 9:
			func_203(0, -4603.166f, -2701.434f, -10.12116f, 3.38f, 1);
			func_203(1, -4595.557f, -2706.374f, -11.13519f, 5.26f, 1);
			if (func_164(4194304))
			{
				func_203(2, -4602.851f, -2658.896f, -4.431f, -53.91f, 1);
			}
			else if (func_164(8388608))
			{
				func_203(2, -4602.851f, -2658.896f, -4.431f, -53.91f, 1);
			}
			else if (func_164(16777216))
			{
				func_203(2, -4602.851f, -2658.896f, -4.431f, -53.91f, 1);
			}
			else if (func_164(33554432))
			{
				func_203(2, -4602.851f, -2658.896f, -4.431f, -53.91f, 1);
			}
			else if (func_164(67108864))
			{
				func_203(2, -4602.851f, -2658.896f, -4.431f, -53.91f, 1);
			}
			break;
		default:
			break;
	}
}

void func_100()
{
	switch (func_197())
	{
		case 8:
			func_204(0, joaat("w_melee_fishingpole02"));
			func_205(0, 0f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1);
			func_204(2, joaat("p_cs_rag01x"));
			func_205(2, 1f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1);
			func_204(1, 514240557);
			switch (func_202())
			{
				case 1:
					func_205(1, -12.7f, -0.05f, -0.35f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1);
					break;
				case 5:
					func_205(1, -42.54f, -16.39f, -2.75f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1);
					break;
				default:
					func_205(1, 0f, 1f, -1f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1);
					break;
			}
			func_204(3, 391506844);
			func_205(3, -1f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1);
			func_204(4, -294392875);
			func_205(4, -1f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1);
			break;
	}
}

int func_101(int iParam0)
{
	return &(Local_1067.f_271.f_7[iParam0 /*11*/]);
}

void func_102(int iParam0)
{
	Local_1067.f_520.f_2 = iParam0;
	func_206(&(Local_1067.f_520.f_1), 4);
}

void func_103(int iParam0)
{
	func_206(&(Local_1067.f_18.f_10), iParam0);
}

int func_104(int iParam0)
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
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_105(var uParam0, int iParam1)
{
	return func_207(uParam0->f_16, iParam1);
}

void func_106(int iParam0)
{
	if (Local_13 != iParam0)
	{
		Local_13 = iParam0;
	}
}

void func_107(int iParam0)
{
	if (!func_115(iParam0))
	{
		func_206(&(Local_13.f_1), iParam0);
	}
}

bool func_108(int iParam0)
{
	if (!func_162(iParam0))
	{
		return false;
	}
	return (func_208(iParam0) && ((*Global_1125276)[iParam0 /*27*/])->f_18.f_1 != 0);
}

void func_109(int iParam0)
{
	if (Local_13.f_2 != iParam0)
	{
		Local_13.f_2 = iParam0;
	}
}

int func_110(struct<17> Param0, var uParam17)
{
	int iVar0;
	var uVar1;

	if (VOLUME::_0xF6A8A652A6B186CD(Local_13.f_3.f_1))
	{
		return 1;
	}
	if (func_209(Local_1067.f_15))
	{
		*uParam17 = 1;
		return 0;
	}
	if (!VOLUME::_0xA4A4359320345B34(Local_13.f_3))
	{
		if (VOLUME::_0x397769175A7DBB30(Local_1067.f_15, Param0.f_10, 0, 0, 0))
		{
			VOLUME::_0xFA15C9A320E707B0();
			*uParam17 = 1;
			return 0;
		}
		func_210(&uVar1, Param0);
		Local_13.f_3 = VOLUME::_0x183C0B6CFEFFCAE4(&uVar1);
		func_134(128);
	}
	else if (!func_114(128, 255))
	{
		Local_13.f_3.f_1 = func_211(Param0);
		if (VOLUME::_0xF6A8A652A6B186CD(Local_13.f_3.f_1))
		{
			return 1;
		}
		return 0;
	}
	iVar0 = VOLUME::_0xB33A604345F58202(Local_13.f_3);
	switch (iVar0)
	{
		case 3:
			Local_13.f_3.f_1 = VOLUME::_0x351D71B8B72B858B(Local_13.f_3);
			return 1;
		case 4:
			Local_13.f_3 = 0;
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_111(int iParam0)
{
	return iParam0 != 0;
}

void func_112(var uParam0)
{
	*uParam0 = Global_1275573->f_21;
}

int func_113(int iParam0)
{
	return (Global_1275573->f_21 - iParam0) * 1000;
}

bool func_114(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return func_161(&(Local_74[iParam1 /*31*/]), iParam0);
}

bool func_115(int iParam0)
{
	return func_161(Local_13.f_1, iParam0);
}

int func_116()
{
	return 1;
}

void func_117()
{
}

int func_118()
{
	return 1;
}

int func_119()
{
	bool bVar0;

	if (!func_212(&bVar0))
	{
		if (bVar0)
		{
			func_213();
		}
		return 0;
	}
	if (!func_214(&bVar0))
	{
		if (bVar0)
		{
			func_213();
		}
		return 0;
	}
	return 1;
}

void func_120()
{
}

void func_121()
{
	if (!func_115(32) && func_215(32))
	{
		func_107(32);
	}
	if (!func_115(64) && func_215(64))
	{
		func_107(64);
	}
	if (!func_115(16) && func_216(16))
	{
		func_107(16);
	}
	if ((!func_115(2048) && func_215(2048)) && !func_215(4096))
	{
		func_107(2048);
	}
}

void func_122()
{
	bool bVar0;

	if (!bVar0 && func_115(16))
	{
		func_109(1);
		return;
	}
	if (func_115(2048) && !func_215(4096))
	{
		func_109(6);
		return;
	}
}

void func_123()
{
	func_217();
}

int func_124()
{
	if (func_218())
	{
		return 1;
	}
	func_219();
	func_220();
	func_221();
	switch (Local_13.f_7)
	{
		case 0:
			func_222();
			break;
		case 1:
			func_223();
			break;
		case 2:
			func_224();
			break;
		case 3:
			func_225();
			break;
		case 4:
			func_226();
			break;
		case 5:
			func_227();
			break;
		case 6:
			func_228();
			break;
		case 7:
			func_229();
			break;
		case 8:
			func_230();
			break;
		case 9:
			func_231();
			break;
		case 10:
			func_232();
			break;
		case 11:
			func_233();
			break;
		case 12:
			func_234();
			break;
		case 13:
			func_235();
			break;
		case 14:
			func_236();
			break;
		case 15:
			func_237();
			break;
		case 16:
			func_238();
			break;
		case 17:
			func_239();
			break;
		case 18:
			func_240();
			break;
		case 19:
			func_241();
			break;
		case 20:
			func_242();
			break;
		case 21:
			func_243();
			break;
		case 22:
			func_244();
			break;
		case 25:
			func_245();
			break;
		case 23:
			func_246();
			break;
		case 24:
			func_247();
			break;
		case 26:
			func_248();
			break;
		case 27:
			func_249();
			break;
		case 28:
			func_250();
			break;
		case 29:
			func_251();
			break;
		case 30:
			func_252();
			break;
		case 31:
			func_253();
			break;
		case 32:
			func_254();
			break;
		case 33:
			func_255();
			break;
		case 34:
			func_256();
			break;
		case 35:
			func_257();
			break;
		case 36:
			func_258();
			break;
		case 37:
			func_259();
			break;
		case 38:
			func_260();
			break;
		case 39:
			func_261();
			break;
		case 40:
			func_262();
			break;
		case 41:
			func_263();
			break;
		case 42:
			func_264();
			break;
		case 43:
			func_265();
			break;
		case 44:
			func_266();
			break;
		case 45:
			func_267();
			break;
		case 47:
			func_268();
			break;
		case 48:
			func_269();
			break;
		case 49:
			func_270();
			break;
		case 50:
			func_271();
			break;
		case 51:
			func_272();
			break;
		case 52:
			func_273();
			break;
		case 53:
			func_274();
			break;
		case 54:
			func_275();
			break;
		case 55:
			func_276();
			break;
		case 56:
			func_277();
			break;
		case 57:
			func_278();
			break;
		case 58:
			func_279();
			break;
		case 59:
			func_280();
			break;
		case 60:
			func_281();
			break;
		case 61:
			func_282();
			break;
		case 62:
			func_283();
			break;
		case 63:
			func_284();
			break;
		case 64:
			func_285();
			break;
		case 65:
			func_286();
			break;
		case 66:
			func_287();
			break;
		case 67:
			func_288();
			break;
		case 68:
			func_289();
			break;
		case 69:
			func_290();
			break;
		case 70:
			func_291();
			break;
		case 71:
			func_292();
			break;
		case 72:
			func_293();
			break;
		case 73:
			func_294();
			break;
		case 74:
			func_295();
			break;
	}
	switch (Local_13.f_7.f_1)
	{
		case 0:
			func_296();
			break;
		case 1:
			func_297();
			break;
		case 2:
			func_298();
			break;
		case 3:
			func_299();
			break;
		case 4:
			func_300();
			break;
		case 5:
			func_301();
			break;
		case 6:
			func_302();
			break;
		case 7:
			func_303();
			break;
	}
	return 0;
}

void func_125()
{
}

int func_126()
{
	int iVar0;

	iVar0 = func_101(0);
	if (((!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0)) || func_304(iVar0, 518218985)) || func_304(iVar0, 242628503))
	{
		return 1;
	}
	return 0;
}

void func_127(int iParam0)
{
	if (func_67(iParam0))
	{
		func_305(&(Local_1067.f_7), iParam0);
	}
}

int func_128(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_162(iParam0))
	{
		return 0;
	}
	iVar0 = func_306(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	((*Global_1128435)[iVar1 /*83*/])->f_70 = iParam0;
	((*Global_1128435)[iVar1 /*83*/])->f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_176(&(((*Global_1128435)[iVar1 /*83*/])->f_70.f_1), 1);
	}
	else
	{
		func_307(&(((*Global_1128435)[iVar1 /*83*/])->f_70.f_1), 1);
	}
	return 1;
}

void func_129(int iParam0)
{
	if (!func_67(iParam0))
	{
		func_206(&(Local_1067.f_7), iParam0);
	}
}

void func_130()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				func_308(iVar0);
				break;
			case -1315570756:
				func_309(iVar0);
				break;
			default:
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		func_310(iVar0);
		iVar0++;
	}
}

void func_131(int iParam0)
{
	if (Local_1067.f_8 != iParam0)
	{
		Local_1067.f_8 = iParam0;
	}
}

int func_132()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	sVar0 = "OREPHT";
	sVar1 = "OREPAUD";
	switch (Local_1067.f_18.f_11)
	{
		case 0:
			Local_1067.f_18.f_11 = 1;
			break;
		case 1:
			if (HUD::_DOES_TEXT_DATABASE_EXIST(sVar0))
			{
				HUD::_TEXT_DATABASE_REQUEST(sVar0);
				if (HUD::_TEXT_DATABASE_HAS_LOADED(sVar0))
				{
					Local_1067.f_18.f_11 = 2;
				}
				else
				{
					return 0;
				}
			}
			else
			{
				Local_1067.f_18.f_11 = 2;
			}
			if (HUD::_DOES_TEXT_DATABASE_EXIST(sVar1))
			{
				HUD::_TEXT_DATABASE_REQUEST(sVar1);
				if (HUD::_TEXT_DATABASE_HAS_LOADED(sVar1))
				{
					Local_1067.f_18.f_11 = 2;
				}
				else
				{
					return 0;
				}
			}
			else
			{
				Local_1067.f_18.f_11 = 2;
			}
			break;
		case 2:
			iVar4 = 0;
			while (iVar4 <= 11)
			{
				STREAMING::REQUEST_ANIM_DICT(func_311(iVar4));
				if (!STREAMING::HAS_ANIM_DICT_LOADED(func_311(iVar4)))
				{
					return 0;
				}
				else if (iVar4 == 11)
				{
					Local_1067.f_18.f_11 = 3;
				}
				iVar4++;
			}
			break;
		case 3:
			switch (func_197())
			{
				case 8:
					if (func_314(func_312(0), &(Local_1067.f_18.f_244), &(Local_13.f_7.f_26), 64, func_313(0)))
					{
						Local_1067.f_18.f_11 = 6;
					}
					break;
				default:
					Local_1067.f_18.f_11 = 6;
					break;
			}
			break;
		case 5:
			iVar2 = 0;
			while (iVar2 <= 4)
			{
				iVar3 = func_315(iVar2);
				if (iVar3 != 0)
				{
					if (!STREAMING::_0x19A6BE7D9C6884D3(iVar3, 15, 0, 0))
					{
						return 0;
					}
					if (!STREAMING::_0x9427C94D2E4094A4(iVar3, 0))
					{
						return 0;
					}
				}
				iVar2++;
			}
			func_316();
			Local_1067.f_18.f_11 = 6;
			break;
		case 6:
			return 1;
	}
	return 0;
}

bool func_133()
{
	bool bVar0;

	bVar0 = false;
	if (!func_317())
	{
		bVar0 = true;
	}
	if (!func_318())
	{
		bVar0 = true;
	}
	return !bVar0;
}

void func_134(int iParam0)
{
	if (!func_114(iParam0, 255))
	{
		func_206(Local_74[NETWORK::PARTICIPANT_ID_TO_INT() /*31*/], iParam0);
	}
}

void func_135(var uParam0)
{
	*uParam0 = 0;
}

void func_136()
{
}

int func_137()
{
	return 1;
}

int func_138(int iParam0)
{
	return (iParam0 - Global_1275573->f_21) * 1000;
}

void func_139()
{
	if (!func_67(1))
	{
		func_319(Local_1067.f_9);
		func_129(1);
	}
}

void func_140()
{
	func_320();
	func_321();
}

void func_141()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		func_322(&iVar1, 0);
		func_323(iVar1);
		switch (func_197())
		{
			case 0:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				PED::_0x5C3C55EAAD19915F(iVar1, "DEFAULT_SHOCKED");
				if (func_201() == 2)
				{
					func_324(&(Local_1067.f_18.f_52), iVar1, "RE005_FEMALE2", 0);
				}
				else
				{
					func_324(&(Local_1067.f_18.f_52), iVar1, "RE005_MALE2", 0);
				}
				break;
			case 2:
			case 9:
				if (func_201() == 2)
				{
					func_324(&(Local_1067.f_18.f_52), iVar1, "RE005_FEMALE2", 0);
					WEAPON::_GIVE_WEAPON_TO_PED_2(iVar1, joaat("weapon_revolver_cattleman"), 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
				else
				{
					func_324(&(Local_1067.f_18.f_52), iVar1, "RE005_FEMALE3", 0);
					WEAPON::_GIVE_WEAPON_TO_PED_2(iVar1, joaat("weapon_revolver_cattleman"), 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
				break;
			case 1:
			case 10:
			case 11:
				if (func_201() == 2)
				{
					func_324(&(Local_1067.f_18.f_52), iVar1, "RE005_FEMALE2", 0);
				}
				else
				{
					func_324(&(Local_1067.f_18.f_52), iVar1, "RE005_FEMALE3", 0);
				}
				break;
			case 8:
				func_324(&(Local_1067.f_18.f_52), iVar1, "RE005_FEMALE3", 0);
				if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_7.f_26))
					{
						Local_1067.f_18.f_244 = NETWORK::_NET_TO_ANIM_SCENE(Local_13.f_7.f_26);
						if (!ANIMSCENE::_0x25557E324489393C(Local_1067.f_18.f_244))
						{
						}
					}
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_13.f_7.f_26))
				{
					func_325();
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_1067.f_18.f_244, func_326(4), 0f, 0f, func_327(4), 2);
					ANIMSCENE::START_ANIM_SCENE(Local_1067.f_18.f_244);
				}
				break;
			default:
				break;
		}
	}
	iVar2 = func_101(2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !PED::IS_PED_DEAD_OR_DYING(iVar2, true))
	{
		func_328(iVar2);
		func_329(2, 0);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
		{
			switch (func_197())
			{
				case 8:
					PED::_SET_PED_QUALITY(iVar2, 2);
					break;
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					PED::_SET_PED_QUALITY(iVar2, 2);
					if (func_164(134217728))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar2, Local_1067.f_18.f_44);
					}
					iVar0 = func_315(4);
					if (iVar0 != 0)
					{
						TASK::_TASK_START_SCENARIO_IN_PLACE(iVar2, iVar0, 0, 0, 0, -1082130432, 0);
					}
					break;
			}
		}
	}
	iVar3 = func_101(1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !PED::IS_PED_DEAD_OR_DYING(iVar3, true))
	{
		func_330(&iVar3, 0);
		func_331(1, 3f);
	}
}

void func_142()
{
	func_332();
}

void func_143()
{
}

void func_144()
{
	float fVar0;

	if (func_209(Local_1067.f_15))
	{
		return;
	}
	if (func_163())
	{
		return;
	}
	if (func_333(Local_1067.f_1, 600))
	{
		fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), Local_1067.f_15);
		if (fVar0 < 200f)
		{
			func_134(4096);
		}
		else if (fVar0 < 400f)
		{
			func_334(4096);
			func_134(2048);
		}
		else
		{
			func_334(4096);
			func_334(2048);
		}
	}
}

void func_145()
{
	func_335();
	func_336();
	func_337();
	func_338();
	func_339();
	func_340();
}

void func_146()
{
	if (func_341())
	{
		func_134(8);
	}
	else
	{
		func_334(8);
	}
}

void func_147()
{
	func_342(Local_13.f_7);
	func_343(Local_13.f_7.f_1);
	func_344();
	func_345();
	func_346();
	func_347();
	func_348(0, 0);
	func_349();
	func_350();
	func_351();
	switch (Local_1067.f_18)
	{
		case 0:
			func_352();
			break;
		case 1:
			func_353();
			break;
		case 2:
			func_354();
			break;
		case 3:
			func_355();
			break;
		case 4:
			func_356();
			break;
		case 5:
			func_357();
			break;
		case 6:
			func_358();
			break;
		case 7:
			func_359();
			break;
		case 8:
			func_360();
			break;
		case 9:
			func_361();
			break;
		case 10:
			func_362();
			break;
		case 11:
			func_363();
			break;
		case 12:
			func_364();
			break;
		case 13:
			func_365();
			break;
		case 14:
			func_366();
			break;
		case 15:
			func_367();
			break;
		case 16:
			func_368();
			break;
		case 17:
			func_369();
			break;
		case 18:
			func_370();
			break;
		case 19:
			func_371();
			break;
		case 20:
			func_372();
			break;
		case 21:
			func_373();
			break;
		case 22:
			func_374();
			break;
		case 25:
			func_375();
			break;
		case 23:
			func_376();
			break;
		case 24:
			func_377();
			break;
		case 26:
			func_378();
			break;
		case 27:
			func_379();
			break;
		case 28:
			func_380();
			break;
		case 29:
			func_381();
			break;
		case 30:
			func_382();
			break;
		case 31:
			func_383();
			break;
		case 32:
			func_384();
			break;
		case 33:
			func_385();
			break;
		case 35:
			func_386();
			break;
		case 34:
			func_387();
			break;
		case 36:
			func_388();
			break;
		case 37:
			func_389();
			break;
		case 38:
			func_390();
			break;
		case 39:
			func_391();
			break;
		case 40:
			func_392();
			break;
		case 41:
			func_393();
			break;
		case 42:
			func_394();
			break;
		case 43:
			func_395();
			break;
		case 44:
			func_396();
			break;
		case 45:
			func_397();
			break;
		case 47:
			func_398();
			break;
		case 48:
			func_399();
			break;
		case 49:
			func_400();
			break;
		case 50:
			func_401();
			break;
		case 51:
			func_402();
			break;
		case 52:
			func_403();
			break;
		case 53:
			func_404();
			break;
		case 54:
			func_405();
			break;
		case 55:
			func_406();
			break;
		case 56:
			func_407();
			break;
		case 57:
			func_408();
			break;
		case 58:
			func_409();
			break;
		case 59:
			func_410();
			break;
		case 60:
			func_411();
			break;
		case 61:
			func_412();
			break;
		case 62:
			func_413();
			break;
		case 63:
			func_414();
			break;
		case 64:
			func_415();
			break;
		case 65:
			func_416();
			break;
		case 66:
			func_417();
			break;
		case 67:
			func_418();
			break;
		case 68:
			func_419();
			break;
		case 69:
			func_420();
			break;
		case 70:
			func_421();
			break;
		case 71:
			func_422();
			break;
		case 72:
			func_423();
			break;
		case 73:
			func_424();
			break;
		case 74:
			func_425();
			break;
	}
	switch (Local_1067.f_18.f_1)
	{
		case 0:
			func_426();
			break;
		case 1:
			func_427();
			break;
		case 2:
			func_428();
			break;
		case 3:
			func_429();
			break;
		case 4:
			func_430();
			break;
		case 5:
			func_431();
			break;
		case 6:
			func_432();
			break;
		case 7:
			func_433();
			break;
	}
}

void func_148()
{
	if (!func_114(8, 255))
	{
		func_134(16);
	}
	else
	{
		func_334(16);
	}
}

void func_149()
{
	int iVar0;

	Local_1067.f_6 = -1;
	Local_1067.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_1067.f_5 = (Local_1067.f_5 || Local_74[iVar0 /*31*/]) // PointerArith;
			Local_1067.f_6 = (Local_1067.f_6 && Local_74[iVar0 /*31*/]) // PointerArith;
		}
		iVar0++;
	}
}

int func_150()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			if (!func_434(1073741824 /* Float: 2f */, 255))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::GET_PED_SOURCE_OF_DEATH(iVar0));
				iVar2 = PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID());
				iVar3 = PED::GET_MOUNT(PLAYER::PLAYER_PED_ID());
				if ((iVar1 == PLAYER::PLAYER_PED_ID() || (ENTITY::DOES_ENTITY_EXIST(iVar2) && iVar1 == iVar2)) || (ENTITY::DOES_ENTITY_EXIST(iVar3) && iVar1 == iVar3))
				{
					if (!func_164(131072))
					{
						func_166(1);
					}
				}
				else if (!func_164(262144) && func_163())
				{
					func_165(7, Local_1067.f_4);
				}
				func_435(1073741824 /* Float: 2f */);
			}
		}
		else if (func_163())
		{
			func_165(7, Local_1067.f_4);
			func_435(1073741824 /* Float: 2f */);
		}
	}
	else if (func_163())
	{
		func_165(7, Local_1067.f_4);
		func_435(1073741824 /* Float: 2f */);
	}
	func_436();
	func_167();
	func_168(0);
	func_169();
	func_170();
	func_171();
	if (VOLUME::_DOES_VOLUME_EXIST(Local_1067.f_18.f_252))
	{
		VOLUME::_DELETE_VOLUME(Local_1067.f_18.f_252);
	}
	if (ANIMSCENE::_0x25557E324489393C(Local_1067.f_18.f_244))
	{
		if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1067.f_18.f_244))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_1067.f_18.f_244);
		}
	}
	return 1;
}

void func_151()
{
	func_437();
}

void func_152(int iParam0)
{
	if (MAP::DOES_BLIP_EXIST((Local_1067.f_271.f_7[iParam0 /*11*/])->f_1))
	{
		MAP::REMOVE_BLIP(&((Local_1067.f_271.f_7[iParam0 /*11*/])->f_1));
	}
}

bool func_153(int iParam0)
{
	return MISC::IS_BIT_SET(Local_1067.f_325, iParam0);
}

void func_154(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		((*uParam0)[iVar0 /*9*/])->f_7 = 0f;
		((*uParam0)[iVar0 /*9*/])->f_8 = 0f;
		iVar0++;
	}
}

int func_155(int iParam0)
{
	return iParam0;
}

int func_156(int iParam0)
{
	if (func_161(Local_1067.f_520.f_1, 4))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1067.f_520.f_2);
		return StackVal;
	}
	return 0;
}

void func_157(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_438(&((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iVar0 /*8*/])))
		{
			func_439((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iVar0 /*8*/], 1, 1);
		}
		iVar0++;
	}
	func_440(iParam0, 2);
}

bool func_158(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::_0x255A5EF65EDA9167(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET((*Global_1196005)[iParam1 /*72*/][iParam0], iParam2);
}

void func_159(struct<2> Param0, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;

	uVar0 = func_442(func_441(Param0));
	iVar1 = func_443(Param0);
	vVar2.f_1 = iParam3;
	vVar2.x = 0;
	vVar2.f_2 = 0;
	if (func_28() == 0)
	{
		vVar2.x = Global_265331->f_124445.f_70.f_17;
		func_444(Param0, &vVar2);
	}
	STATS::_0xD5910ECF81A2278C(uVar0, iVar1, iParam2, &vVar2);
}

void func_160(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_445(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_446(iVar0);
}

bool func_161(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_162(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return 1;
}

bool func_163()
{
	return (func_115(32) || func_114(32, 255));
}

bool func_164(int iParam0)
{
	return func_161(Local_1067.f_18.f_10, iParam0);
}

void func_165(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_447(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_448(iVar0, iParam0);
}

void func_166(bool bParam0)
{
	if (!func_164(131072))
	{
		if (!func_449(2, 255))
		{
			if (bParam0 || func_164(262144))
			{
				func_450(-1930919582, 0, 0);
				func_103(131072);
				func_451(7, Local_1067.f_4);
			}
		}
	}
}

void func_167()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_197() != 8)
	{
		return;
	}
	iVar0 = func_101(2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (func_452())
			{
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, Local_1067.f_18.f_244) || !ANIMSCENE::_0xB89FCFF19DAFFF28(Local_1067.f_18.f_244, func_453(2)))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1067.f_18.f_244, func_453(2), iVar0);
				}
			}
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar0))
			{
				ENTITY::DETACH_ENTITY(iVar0, true, true);
				PHYSICS::ACTIVATE_PHYSICS(iVar0);
			}
		}
	}
	iVar1 = func_454(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			if (func_452())
			{
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar1, Local_1067.f_18.f_244) || !ANIMSCENE::_0xB89FCFF19DAFFF28(Local_1067.f_18.f_244, func_455(0)))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1067.f_18.f_244, func_455(0), iVar1);
				}
			}
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar1))
			{
				ENTITY::DETACH_ENTITY(iVar1, true, true);
				PHYSICS::ACTIVATE_PHYSICS(iVar1);
			}
		}
	}
	iVar2 = func_454(1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
		{
			if (func_452())
			{
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar2, Local_1067.f_18.f_244) || !ANIMSCENE::_0xB89FCFF19DAFFF28(Local_1067.f_18.f_244, func_455(1)))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1067.f_18.f_244, func_455(1), iVar2);
				}
			}
		}
	}
}

void func_168(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		AUDIO::STOP_PED_SPEAKING(iVar0, false);
		if (func_456(8388608))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 6, false);
			func_457(8388608);
		}
		if (func_456(4194304))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 169, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 340, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 137, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 26, false);
			func_457(4194304);
		}
		if (!PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			iVar1 = func_101(1);
			iVar2 = 6;
			if (func_456(2))
			{
				iVar1 = PED::GET_MOUNT(iVar0);
				iVar2 = 3;
			}
			if (func_458(0))
			{
				iVar2 = 3;
			}
			if (bParam0)
			{
				TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
			}
			if (bParam0 || func_459(iVar0, 518218985, 1, 0))
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true)) && func_460(0, 1) < 70f)
				{
					TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, func_461(0), iVar2, 0, -1f, -1, iVar1);
				}
				else
				{
					TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, func_461(0), iVar2, 0, -1f, -1, 0);
				}
			}
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
	}
	if (func_164(134217728))
	{
		PED::REMOVE_RELATIONSHIP_GROUP(Local_1067.f_18.f_44);
		func_462(134217728);
	}
}

void func_169()
{
	int iVar0;

	iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		AITRANSPORT::_0x67F7CEAC2391E114(iVar0, 0);
	}
}

void func_170()
{
	int iVar0;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (iVar0 != 255)
	{
		if (func_434(8388608, iVar0))
		{
			PLAYER::SET_PLAYER_CONTROL(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()), 1, 0, 0);
			TASK::CLEAR_PED_TASKS(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID())), 1, 0);
			func_463(8388608);
		}
	}
}

void func_171()
{
	if (Local_1067.f_18.f_245 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Local_1067.f_18.f_245);
		Local_1067.f_18.f_245 = 0;
	}
	if (Local_1067.f_18.f_246 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Local_1067.f_18.f_246);
		Local_1067.f_18.f_246 = 0;
	}
	if (Local_1067.f_18.f_247 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Local_1067.f_18.f_247);
		Local_1067.f_18.f_247 = 0;
	}
}

int func_172(var uParam0)
{
	if (func_39(*uParam0))
	{
		return 1;
	}
	if (uParam0->f_2 != 0)
	{
		if (uParam0->f_3 != -1)
		{
			return 1;
		}
		if (uParam0->f_4 != -1)
		{
			return 1;
		}
		if (uParam0->f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_173(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_464(iParam1);
	iVar1 = ((&Global_1186267->f_3[iParam1] + iVar0) - 1);
	if (&Global_1186267->f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_465(iParam1)) - 1);
	}
	bVar2 = func_39(*uParam0);
	bVar3 = (uParam0->f_2 != 0 && uParam0->f_3 != -1);
	bVar4 = (uParam0->f_2 != 0 && uParam0->f_4 != -1);
	bVar5 = (uParam0->f_2 != 0 && uParam0->f_5 != -1);
	iVar6 = iVar0;
	while (iVar6 <= iVar1)
	{
		if (bVar2)
		{
			if (func_21((Global_1186267->f_231[iVar6 /*15*/])->f_5, *uParam0))
			{
				return iVar6;
			}
		}
		if (bVar3)
		{
			if ((Global_1186267->f_231[iVar6 /*15*/])->f_5.f_2 == uParam0->f_2 && (Global_1186267->f_231[iVar6 /*15*/])->f_5.f_3 == uParam0->f_3)
			{
				return iVar6;
			}
		}
		if (bVar4)
		{
			if ((Global_1186267->f_231[iVar6 /*15*/])->f_5.f_2 == uParam0->f_2 && (Global_1186267->f_231[iVar6 /*15*/])->f_5.f_4 == uParam0->f_4)
			{
				return iVar6;
			}
		}
		if (bVar5)
		{
			if ((Global_1186267->f_231[iVar6 /*15*/])->f_5.f_2 == uParam0->f_2 && (Global_1186267->f_231[iVar6 /*15*/])->f_5.f_5 == uParam0->f_5)
			{
				return iVar6;
			}
		}
		iVar6++;
	}
	return -1;
}

void func_174(var uParam0)
{
	func_76(uParam0, 0);
	func_76(uParam0, 1);
	func_76(uParam0, 3);
	func_74(uParam0);
}

void func_175(var uParam0)
{
	func_75(uParam0);
	func_466(uParam0, 0, 3);
}

void func_176(var uParam0, int iParam1)
{
	func_467(uParam0, iParam1);
}

void func_177(var uParam0)
{
	func_76(uParam0, 0);
	func_77(uParam0, 0);
	func_77(uParam0, 1);
	func_77(uParam0, 2);
}

void func_178(var uParam0)
{
	func_76(uParam0, 1);
	func_74(uParam0);
}

void func_179(var uParam0)
{
	func_76(uParam0, 2);
	func_77(uParam0, 3);
}

void func_180(var uParam0)
{
	func_76(uParam0, 3);
	func_77(uParam0, 4);
}

void func_181(var uParam0)
{
	func_77(uParam0, 0);
	func_77(uParam0, 1);
}

void func_182(var uParam0)
{
	func_77(uParam0, 2);
	func_77(uParam0, 3);
}

void func_183(var uParam0)
{
	func_77(uParam0, 4);
	func_77(uParam0, 5);
}

bool func_184(var uParam0, var uParam1)
{
	*uParam0 = Global_1234391->f_8113;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = uParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

bool func_185(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_186(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_187(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (((*Global_1234391)[iParam0 /*5*/])->f_4 + iParam1);
}

int func_188(int iParam0)
{
	return func_101(iParam0);
}

void func_189(var uParam0, var uParam1)
{
	func_98(uParam0);
	func_468(uParam0);
	func_469(uParam0, 1);
	func_470(uParam1);
	func_468(uParam1);
	func_471(uParam1);
	func_472(uParam1, 1);
	func_473(uParam1, 1);
	func_474(uParam0, 2000);
}

void func_190(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_305(&(uParam0->f_1), 16384);
	}
	else
	{
		func_206(&(uParam0->f_1), 16384);
	}
}

void func_191(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_305(&(uParam0->f_1), 2048);
	}
	else
	{
		func_206(&(uParam0->f_1), 2048);
	}
}

void func_192(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_305(&(uParam0->f_1), 256);
	}
	else
	{
		func_206(&(uParam0->f_1), 256);
	}
}

void func_193(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_206(uParam0, 16);
	}
	else
	{
		func_305(uParam0, 67108864);
		func_305(uParam0, 16);
	}
}

void func_194(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_305(&(uParam0->f_1), 128);
	}
	else
	{
		func_206(&(uParam0->f_1), 128);
	}
}

void func_195(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_206(uParam0, 256);
	}
	else
	{
		func_305(uParam0, 256);
	}
}

void func_196(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_206(uParam0, 268435456);
	}
	else
	{
		func_305(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_206(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_305(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_206(uParam0, 536870912);
	}
	else
	{
		func_305(uParam0, 536870912);
	}
}

int func_197()
{
	return func_475();
}

void func_198(int iParam0, int iParam1)
{
	(Local_1067.f_271.f_7[iParam0 /*11*/])->f_3 = iParam1;
}

void func_199(int iParam0, int iParam1, int iParam2)
{
	switch (func_202())
	{
		case 4:
		case 5:
		case 6:
			func_476(iParam0, iParam1);
			break;
		default:
			func_476(iParam0, iParam2);
			break;
	}
}

int func_200(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 997958153: /* GXTEntry: "Riding" */
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(1468170991, 0, -1190799868, iParam1, 0, 0f, 0f, 0f);
		case 918497150: /* GXTEntry: "Draft" */
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(-62570976, 0, -1190799868, iParam1, 0, 0f, 0f, 0f);
		case 356361174: /* GXTEntry: "Race" */
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(-165971473, 0, -1190799868, iParam1, 0, 0f, 0f, 0f);
		case -1771663379: /* GXTEntry: "War" */
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(-2049218219, 0, -1190799868, iParam1, 0, 0f, 0f, 0f);
		case -311956671: /* GXTEntry: "Work" */
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(989061023, 0, -1190799868, iParam1, 0, 0f, 0f, 0f);
		default:
			break;
	}
	return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(1468170991, 0, -1190799868, 1, 0, 0f, 0f, 0f);
}

int func_201()
{
	switch (Local_1067.f_4)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		default:
			break;
	}
	return -1;
}

int func_202()
{
	return Local_1067.f_2;
}

void func_203(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	(Local_1067.f_271.f_7[iParam0 /*11*/])->f_6 = { vParam1 };
	(Local_1067.f_271.f_7[iParam0 /*11*/])->f_5 = fParam4;
	if (bParam5)
	{
		func_206(&((Local_1067.f_271.f_7[iParam0 /*11*/])->f_2), 2);
	}
	else
	{
		func_305(&((Local_1067.f_271.f_7[iParam0 /*11*/])->f_2), 2);
	}
}

void func_204(int iParam0, int iParam1)
{
	func_477(0, iParam0, iParam1);
}

void func_205(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	func_478(0, iParam0, vParam1, fParam4, iParam5);
}

void func_206(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_207(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_208(int iParam0)
{
	int iVar0;

	if (!func_162(iParam0))
	{
		return false;
	}
	iVar0 = func_479(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

int func_209(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_210(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -653740250;
	uParam0->f_7 = Param1.f_5;
}

var func_211(struct<17> Param0)
{
	var uVar0;

	func_210(&uVar0, Param0);
	return VOLUME::_0x77A6E4AD0C496F81(&uVar0);
}

int func_212(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(3))
	{
		*uParam0 = 1;
		return 0;
	}
	bVar0 = false;
	bVar1 = false;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 3)
	{
		if (func_480(iVar2, 4))
		{
		}
		else if (!func_481(iVar2, uParam0, &bVar1))
		{
			if (*uParam0)
			{
				return 0;
			}
			if (bVar1)
			{
				bVar0 = true;
			}
			else
			{
				iVar2++;
			}
			if (bVar0)
			{
				return 0;
			}
			return 1;
		}
	}

void func_213()
{
	func_109(2);
}

int func_214(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	int iVar11;

	iVar0 = 5;
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(iVar0))
	{
		*bParam0 = 1;
		return 0;
	}
	bVar4 = false;
	vVar5 = { 0f, 0f, 0f };
	vVar8 = { Local_1067.f_15 };
	iVar11 = 0;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 5)
		{
			iVar3 = func_482(iVar1, iVar2);
			if (iVar3 != 0 || func_483(iVar2))
			{
				if (MISC::IS_BIT_SET((Local_1067.f_325.f_1[iVar1 /*50*/])->f_2, iVar2))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar1 /*6*/][iVar2]))
				{
					vVar5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar8, 0f, func_484(iVar1, iVar2)) };
					if (func_483(iVar2))
					{
						iVar11 = PED::_0x9641A9A20310F6B8(((Local_1067.f_325.f_1[iVar1 /*50*/])->f_4[iVar2 /*9*/])->f_2, vVar5, 0f, 0f, 0f, 1, 0, 0);
						if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
						{
							*bParam0 = 1;
						}
						else
						{
							(*Local_13.f_42[iVar1 /*6*/])[iVar2] = NETWORK::OBJ_TO_NET(iVar11);
							if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar1 /*6*/][iVar2]))
							{
								*bParam0 = 1;
								return 0;
							}
							ENTITY::_0xA91E6CF94404E8C9(iVar11);
							ENTITY::_0x9587913B9E772D29(iVar11, 0);
						}
					}
					else if (!func_485((*Local_13.f_42[iVar1 /*6*/])[iVar2], iVar3, vVar5, 1, 0))
					{
						*bParam0 = 1;
					}
					else
					{
						iVar11 = NETWORK::NET_TO_OBJ(Local_13.f_42[iVar1 /*6*/][iVar2]);
						if (ENTITY::DOES_ENTITY_EXIST(iVar11))
						{
							ENTITY::_0xA91E6CF94404E8C9(iVar11);
							if (func_486(iVar1, iVar2))
							{
								ENTITY::_0x9587913B9E772D29(iVar11, 0);
							}
						}
					}
					return 0;
				}
				else
				{
					iVar11 = NETWORK::NET_TO_OBJ(Local_13.f_42[iVar1 /*6*/][iVar2]);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
					{
						*bParam0 = 1;
						return 0;
					}
					ENTITY::SET_ENTITY_HEADING(iVar11, func_487(iVar1, iVar2));
					MISC::SET_BIT(&((Local_1067.f_325.f_1[iVar1 /*50*/])->f_2), iVar2);
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	if (bVar4)
	{
		return 0;
	}
	return 1;
}

bool func_215(int iParam0)
{
	return func_161(Local_1067.f_5, iParam0);
}

bool func_216(int iParam0)
{
	return func_161(Local_1067.f_6, iParam0);
}

void func_217()
{
	if (func_488())
	{
		if (!func_489(2))
		{
			if (!func_489(1))
			{
				func_490(1);
				Local_13.f_58 = Local_13.f_58.f_1;
				func_491(4);
			}
		}
	}
	else if (func_492(2))
	{
		if (func_493(2))
		{
			func_491(1);
			Local_13.f_58.f_1 = func_494(Local_1067.f_520.f_8, Local_1067.f_520.f_9, Local_1067.f_520);
		}
	}
}

int func_218()
{
	int iVar0;
	int iVar1;

	if (Local_13.f_7 == 75)
	{
		return 1;
	}
	iVar0 = func_101(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (func_495())
		{
			iVar1 = func_101(2);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
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

void func_219()
{
	if (func_449(1024, 255))
	{
		return;
	}
	if (func_496())
	{
		switch (func_197())
		{
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				if (((!func_456(64) && !func_456(512)) && func_458(2)) && !func_497())
				{
					func_498(512);
					func_499(23);
				}
				if (func_458(0))
				{
					func_500(1, 0, 0);
					func_501();
					func_498(1024);
					func_499(74);
				}
				break;
			case 2:
				if (func_456(2))
				{
					func_498(1024);
				}
				else
				{
					func_500(1, 0, 0);
					func_501();
					func_498(1024);
					func_499(74);
				}
				break;
			default:
				func_500(1, 0, 0);
				func_501();
				func_498(1024);
				func_499(74);
				break;
		}
	}
}

void func_220()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;

	iVar0 = func_101(0);
	fVar5 = 999f;
	fVar6 = 999f;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return;
	}
	bVar8 = false;
	iVar7 = 0;
	while (iVar7 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar7);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
			iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
			if (func_502(2, iVar7))
			{
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !PED::IS_PED_DEAD_OR_DYING(iVar3, true))
			{
				fVar4 = func_503(0, iVar7, 1);
				if (fVar4 != 0f)
				{
					if (fVar4 < fVar5)
					{
						fVar5 = fVar4;
						Local_13.f_7.f_20 = iVar2;
					}
					if ((PED::IS_PED_ON_MOUNT(iVar3) && fVar4 < 50f) && (fVar4 < fVar6 || !NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_23)))
					{
						bVar8 = true;
						fVar6 = fVar4;
						Local_13.f_7.f_23 = iVar2;
					}
				}
			}
		}
		iVar7++;
	}
	if (!bVar8)
	{
		Local_13.f_7.f_23 = 255;
	}
}

void func_221()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;

	iVar1 = 255;
	if (NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_21))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_7.f_21))
		{
			iVar2 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_21);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !PED::IS_PED_DEAD_OR_DYING(iVar2, true))
			{
				iVar4 = joaat("weapon_unarmed");
				if (WEAPON::GET_CURRENT_PED_WEAPON(iVar2, &iVar4, false, 0, false))
				{
					if (iVar4 == joaat("weapon_kit_camera"))
					{
						func_504(16);
						return;
					}
				}
			}
		}
	}
	Local_13.f_7.f_21 = 255;
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar3);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !PED::IS_PED_DEAD_OR_DYING(iVar2, true))
			{
				iVar4 = joaat("weapon_unarmed");
				if (WEAPON::GET_CURRENT_PED_WEAPON(iVar2, &iVar4, false, 0, false))
				{
					if (iVar4 == joaat("weapon_kit_camera"))
					{
						iVar5 = func_101(0);
						fVar6 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar5, true, false), ENTITY::GET_ENTITY_COORDS(iVar2, true, false));
						if (fVar6 < 30f)
						{
							func_504(16);
							Local_13.f_7.f_21 = iVar1;
							return;
						}
					}
				}
			}
		}
		iVar3++;
	}
	func_505(16);
}

void func_222()
{
	if (func_506(0))
	{
		switch (func_197())
		{
			case 8:
				func_499(48);
				break;
			default:
				func_499(1);
				break;
		}
	}
}

void func_223()
{
	if (func_163())
	{
		func_499(2);
		return;
	}
	if (func_507(536870912))
	{
		func_499(71);
		return;
	}
	if (func_508(0, 15f, 0) < 1)
	{
		func_509(0, 65f, 5000, 0, 0, 1, 2, -1, -1, -1, 1, -1);
	}
	else if (func_508(0, 35f, 0) < 2)
	{
		func_509(0, 65f, 10000, 0, 176, 177, 178, 179, -1, -1, 0, -1);
	}
}

void func_224()
{
	var uVar0;

	func_510();
	if (func_456(64))
	{
		func_499(25);
		return;
	}
	uVar0 = func_101(0);
	if ((func_304(uVar0, -875674219) || func_304(uVar0, -1162159953)) || !func_304(uVar0, 993674639))
	{
		func_499(3);
	}
}

void func_225()
{
	int iVar0;
	var uVar1;
	int iVar2;
	vector3 vVar3;

	func_510();
	if (func_511())
	{
		func_504(512);
		func_499(72);
		return;
	}
	if (func_456(64))
	{
		func_499(25);
		return;
	}
	iVar0 = func_101(0);
	if ((func_512(3) || func_512(5)) || func_512(4))
	{
		func_513(&(Local_13.f_7.f_12));
		switch (func_197())
		{
			case 1:
			case 2:
				vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
				iVar2 = func_514(&uVar1, vVar3, 25f, 0, 1);
				if (iVar2 > 0)
				{
					func_499(5);
				}
				else
				{
					func_499(4);
				}
				break;
			default:
				func_499(5);
				break;
		}
	}
}

void func_226()
{
	int iVar0;
	var uVar1;
	int iVar2;
	vector3 vVar3;

	func_510();
	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
		iVar2 = func_514(&uVar1, vVar3, 25f, 0, 1);
		if (iVar2 > 0)
		{
			if (!func_515(1))
			{
				func_516(0, 0, 108, 0);
			}
		}
		else
		{
			func_509(0, 65f, 5000, 0, 104, 105, 106, 107, -1, -1, 1, -1);
		}
		if (func_512(107))
		{
			func_499(9);
		}
		else if (func_512(108))
		{
			func_499(5);
		}
	}
}

void func_227()
{
	int iVar0;
	int iVar1;

	func_510();
	if (func_511())
	{
		func_504(512);
		func_499(72);
		return;
	}
	if (func_456(64))
	{
		func_499(25);
		return;
	}
	iVar0 = func_101(0);
	iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!AUDIO::_0x54B187F111D9C6F8(iVar0, 0))
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false)) < 10f)
			{
				func_513(&(Local_13.f_7.f_12));
				func_499(6);
			}
			else
			{
				func_509(0, 65f, 5000, 0, 3, 7, 8, -1, -1, -1, 0, -1);
			}
		}
	}
}

void func_228()
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	if (func_456(64))
	{
		func_499(25);
		return;
	}
	if (func_511())
	{
		func_504(512);
		func_499(71);
		return;
	}
	if (func_512(9))
	{
		if (Local_13.f_58 != 1)
		{
			func_506(1);
		}
	}
	if (func_507(1))
	{
		if (func_506(0))
		{
			func_499(8);
		}
	}
	else if (func_507(2))
	{
		if (func_506(2))
		{
			iVar4 = func_101(0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar4) && !PED::IS_PED_DEAD_OR_DYING(iVar4, true))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(iVar4, false, false) };
			}
			else
			{
				vVar0 = { Local_1067.f_15 };
			}
			iVar3 = func_517(vVar0, 25f);
			if (func_518(2) > 1)
			{
				func_499(9);
			}
			else if (iVar3 > 2)
			{
				func_504(256);
				func_499(7);
			}
			else if (iVar3 > 1)
			{
				func_504(128);
				func_499(7);
			}
			else
			{
				func_499(9);
			}
		}
	}
}

void func_229()
{
	if (func_456(64))
	{
		func_499(25);
		return;
	}
	if (func_511())
	{
		func_504(512);
		func_499(71);
		return;
	}
	if (func_507(1))
	{
		if (func_506(0))
		{
			func_499(8);
		}
	}
	else if (func_507(4) || func_518(2) > 1)
	{
		if (func_506(0))
		{
			func_499(9);
		}
	}
}

void func_230()
{
	func_513(&(Local_13.f_7.f_12));
	if (func_518(2) > 0)
	{
		return;
	}
	switch (func_197())
	{
		case 0:
			func_499(10);
			break;
		case 1:
		case 2:
			func_499(31);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_499(10);
			break;
		case 9:
		case 10:
		case 11:
			func_499(62);
			break;
		default:
			func_499(31);
			break;
	}
}

void func_231()
{
	if (func_512(35))
	{
		switch (func_197())
		{
			case 0:
				func_499(21);
				break;
			case 1:
			case 2:
				func_499(41);
				break;
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				func_499(21);
				break;
			case 9:
			case 10:
			case 11:
				func_499(68);
				break;
			default:
				func_499(21);
				break;
		}
	}
	func_516(0, 0, 35, 0);
}

void func_232()
{
	if (func_456(64))
	{
		func_499(25);
		return;
	}
	if (func_512(34))
	{
		if (func_519(64))
		{
			func_499(11);
		}
	}
	else if (func_520(Local_13.f_7.f_10, 1500))
	{
		func_516(0, 0, 34, 0);
	}
}

void func_233()
{
	int iVar0;
	vector3 vVar1;

	if (func_456(64))
	{
		func_499(25);
		return;
	}
	iVar0 = func_101(0);
	switch (func_197())
	{
		case 0:
			vVar1 = { func_326(0) };
			break;
		default:
			vVar1 = { func_326(3) };
			break;
	}
	if (BUILTIN::VDIST(vVar1, ENTITY::GET_ENTITY_COORDS(iVar0, false, false)) < 2f)
	{
		if (func_506(3))
		{
			func_499(12);
		}
	}
}

void func_234()
{
	int iVar0;

	if (func_511())
	{
		func_504(512);
		func_499(71);
		return;
	}
	if (func_521() != 3)
	{
		func_506(3);
	}
	if (Local_13.f_7.f_18 > func_522())
	{
		func_498(64);
	}
	iVar0 = func_197();
	if (iVar0 == 0 && func_523())
	{
		func_499(19);
	}
	else if (func_456(64))
	{
		func_499(25);
	}
	else if (func_507(2048))
	{
		if (func_506(0))
		{
			func_504(1);
			func_499(13);
		}
	}
	else if (func_507(8))
	{
		if (func_506(4))
		{
			func_504(2);
			func_499(13);
		}
	}
	else if (func_507(16))
	{
		if (func_506(4))
		{
			Local_13.f_7.f_18++;
			func_504(4);
			func_499(13);
		}
	}
}

void func_235()
{
	if (func_456(64))
	{
		func_499(25);
		return;
	}
	if (func_524(1))
	{
		func_505(1);
		func_499(18);
	}
	else if (func_524(2))
	{
		if (!func_507(8))
		{
			func_505(2);
			func_316();
			func_499(14);
		}
	}
	else if (func_524(4))
	{
		if (!func_507(16))
		{
			func_505(4);
			func_499(16);
		}
	}
}

void func_236()
{
	int iVar0;

	if (func_456(64))
	{
		func_499(25);
		return;
	}
	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_456(268435456))
		{
			func_499(15);
		}
	}
}

void func_237()
{
	int iVar0;
	int iVar1;

	if (func_456(64))
	{
		func_499(25);
		return;
	}
	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_456(268435456))
		{
			if (func_506(3))
			{
				iVar1 = func_525();
				func_526(iVar1);
				func_499(12);
			}
		}
	}
}

void func_238()
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;

	if (func_456(64))
	{
		func_499(25);
		return;
	}
	uVar0 = func_101(0);
	if (func_304(uVar0, -2017877118))
	{
		vVar1 = { func_326(1) };
		vVar4 = { func_326(0) };
		if (func_495())
		{
			vVar1 = { func_461(2) };
			vVar4 = { func_326(3) };
		}
		Local_13.f_7.f_27 = { func_527(vVar1 - vVar4) + vVar1 };
		func_499(17);
	}
}

void func_239()
{
	int iVar0;
	var uVar1;

	iVar0 = func_197();
	uVar1 = func_101(0);
	if (iVar0 == 0 && func_523())
	{
		func_499(19);
	}
	else if (func_456(64))
	{
		func_499(25);
	}
	else if (!func_304(uVar1, -2017877118))
	{
		if (!func_456(536870912))
		{
			if (func_506(3))
			{
				func_499(12);
			}
		}
	}
}

void func_240()
{
	if (func_456(64))
	{
		func_499(25);
		return;
	}
	if (func_456(8192))
	{
		func_499(20);
	}
}

void func_241()
{
	int iVar0;

	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!func_529(func_528(86)))
		{
			if (!func_512(87))
			{
				func_516(0, 0, 87, 0);
			}
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_499(22);
	}
}

void func_242()
{
	if (func_456(64))
	{
		func_499(25);
		return;
	}
	if (func_507(536870912))
	{
		func_499(71);
		return;
	}
	if (func_507(16777216))
	{
		func_499(72);
	}
}

void func_243()
{
	int iVar0;

	if (func_456(64))
	{
		func_499(25);
		return;
	}
	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_520(Local_13.f_7.f_10, 1500))
		{
			func_516(0, 0, 35, 0);
		}
	}
	if (func_512(35))
	{
		func_499(22);
	}
}

void func_244()
{
	int iVar0;

	if (func_456(64))
	{
		func_499(25);
		return;
	}
	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!func_304(iVar0, -2017877118))
		{
			func_499(72);
		}
	}
}

void func_245()
{
	int iVar0;
	int iVar1;

	func_506(0);
	iVar0 = func_101(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_498(512);
		func_499(28);
		return;
	}
	else
	{
		if (func_456(32768) && func_460(0, 2) > func_530())
		{
			if (!func_512(97) && !func_512(98))
			{
				if (!func_524(131072))
				{
					func_504(131072);
					func_500(1, 0, 0);
				}
				func_509(0, 65f, 4000, 0, 97, 98, -1, -1, -1, -1, 1, -1);
			}
		}
		else
		{
			func_509(0, 65f, 4000, 0, 94, 95, 96, -1, -1, -1, 0, -1);
		}
		if (func_304(iVar0, 518218985))
		{
			func_499(30);
			return;
		}
	}
	iVar1 = func_101(2);
	if (((!ENTITY::DOES_ENTITY_EXIST(iVar1) || PED::IS_PED_DEAD_OR_DYING(iVar1, true)) || func_304(iVar1, 518218985)) || func_460(0, 2) > 100f)
	{
		func_498(512);
		func_499(26);
	}
}

void func_246()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_101(2);
	iVar1 = func_101(0);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true)) || func_304(iVar0, 518218985))
	{
		iVar2 = 1;
	}
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar1) || PED::IS_PED_DEAD_OR_DYING(iVar1, true)) || func_304(iVar1, 2121492476))
	{
		iVar3 = 1;
	}
	func_531();
	if (func_520(Local_13.f_7.f_10, 2000))
	{
		func_498(4096);
	}
	if (iVar2 && iVar3)
	{
		func_499(24);
	}
}

void func_247()
{
	if (func_512(99) || func_520(Local_13.f_7.f_10, 10000))
	{
		if (func_520(Local_13.f_7.f_10, 5000))
		{
			func_499(72);
		}
	}
	func_531();
}

void func_248()
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = func_101(0);
	iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_499(28);
	}
	else
	{
		fVar2 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false));
		if (func_520(Local_13.f_7.f_10, 2000))
		{
			if (fVar2 < 8f || func_520(Local_13.f_7.f_10, 10000))
			{
				func_499(27);
			}
		}
	}
}

void func_249()
{
	if (func_512(88))
	{
		func_499(72);
	}
	else
	{
		func_516(0, 0, 88, 0);
	}
}

void func_250()
{
	int iVar0;

	iVar0 = func_101(2);
	if (((!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true)) || func_304(iVar0, 518218985)) || func_304(iVar0, 1120685857))
	{
		func_499(29);
	}
}

void func_251()
{
	int iVar0;

	iVar0 = func_101(2);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true)) || func_508(2, 150f, 0) < 1)
	{
		func_499(75);
	}
}

void func_252()
{
	func_506(0);
	if (func_460(0, 2) < func_530() || !func_456(32768))
	{
		func_509(0, 65f, 4000, 0, 94, 95, 96, -1, -1, -1, 0, -1);
	}
}

void func_253()
{
	int iVar0;

	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_520(Local_13.f_7.f_10, 1500))
		{
			func_516(0, 0, 34, 0);
		}
	}
	if (func_512(34) && func_519(64))
	{
		func_499(32);
	}
}

void func_254()
{
	int iVar0;

	if (func_511())
	{
		func_504(512);
		func_499(71);
		return;
	}
	iVar0 = func_101(0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && PED::IS_PED_ON_MOUNT(iVar0))
	{
		func_499(33);
	}
	if (func_456(1))
	{
	}
	else
	{
		func_499(33);
	}
}

void func_255()
{
	int iVar0;

	if (func_511())
	{
		func_504(512);
		func_499(71);
		return;
	}
	iVar0 = func_101(0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && PED::IS_PED_ON_MOUNT(iVar0))
	{
		func_499(34);
		return;
	}
	if (func_456(1))
	{
		func_499(32);
		return;
	}
	if (func_304(iVar0, 1868526510))
	{
		func_499(34);
	}
}

void func_256()
{
	int iVar0;

	if (func_511())
	{
		func_504(512);
		func_499(71);
		return;
	}
	if (func_456(1))
	{
		func_499(32);
		return;
	}
	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iVar0, true))
		{
			switch (func_197())
			{
				case 1:
					func_513(&(Local_13.f_7.f_12));
					func_499(35);
					break;
				case 2:
					func_499(43);
					break;
			}
			return;
		}
	}
}

void func_257()
{
	int iVar0;

	if (func_511())
	{
		func_504(512);
		func_499(71);
		return;
	}
	if (func_456(1))
	{
		func_499(32);
		return;
	}
	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (PED::IS_PED_ON_MOUNT(iVar0))
		{
			if (func_507(2048))
			{
				if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.1f)
				{
					func_499(36);
				}
				else
				{
					func_499(38);
				}
				return;
			}
		}
		else
		{
			func_499(32);
			return;
		}
	}
}

void func_258()
{
	int iVar0;

	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!PED::IS_PED_ON_MOUNT(iVar0))
		{
			func_499(37);
		}
	}
}

void func_259()
{
	int iVar0;

	iVar0 = func_101(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_499(38);
		return;
	}
	if ((!ENTITY::DOES_ENTITY_EXIST(Local_1067.f_18.f_154) || PED::IS_PED_DEAD_OR_DYING(Local_1067.f_18.f_154, true)) || ((!func_532(Local_1067.f_18.f_154, 1041577989) && !PED::IS_PED_ON_MOUNT(iVar0)) && func_520(Local_13.f_7.f_10, 5000)))
	{
		func_499(38);
		return;
	}
	if (func_520(Local_13.f_7.f_10, 10000))
	{
		func_499(38);
	}
}

void func_260()
{
	func_504(2048);
	func_499(39);
}

void func_261()
{
	if (func_507(536870912))
	{
		func_499(71);
		return;
	}
	if (func_507(16777216))
	{
		func_499(40);
	}
}

void func_262()
{
	int iVar0;

	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!PED::IS_PED_ON_MOUNT(iVar0))
		{
			func_499(72);
		}
	}
}

void func_263()
{
	int iVar0;

	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_520(Local_13.f_7.f_10, 1500))
		{
			func_516(0, 0, 35, 0);
		}
	}
	if (func_512(35))
	{
		func_499(42);
	}
}

void func_264()
{
	func_499(72);
}

void func_265()
{
	int iVar0;

	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_304(iVar0, 518218985))
		{
			func_499(44);
		}
	}
}

void func_266()
{
	int iVar0;

	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!PED::IS_PED_ON_MOUNT(iVar0))
		{
			func_499(45);
		}
	}
}

void func_267()
{
	int iVar0;

	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_304(iVar0, 518218985))
		{
			func_499(47);
		}
	}
}

void func_268()
{
	int iVar0;

	iVar0 = func_101(0);
	if ((func_533(0) || !ENTITY::DOES_ENTITY_EXIST(iVar0)) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_499(75);
		return;
	}
}

void func_269()
{
	if (func_163())
	{
		func_499(49);
	}
}

void func_270()
{
	if (func_534(262144))
	{
		func_499(50);
	}
}

void func_271()
{
	if (func_534(524288))
	{
		func_499(51);
	}
}

void func_272()
{
	if (func_535(1))
	{
		func_499(52);
	}
}

void func_273()
{
	if (func_456(65536) && func_534(1048576))
	{
		func_499(53);
	}
	else if (func_456(131072))
	{
		func_499(58);
	}
}

void func_274()
{
	if (func_511())
	{
		if (func_506(0))
		{
			func_504(512);
			func_499(58);
			return;
		}
	}
	if (func_512(9))
	{
		if (Local_13.f_58 != 1)
		{
			func_506(1);
		}
	}
	if (func_507(1))
	{
		if (func_506(0))
		{
			func_499(54);
		}
	}
	else if (func_507(2))
	{
		if (func_506(0))
		{
			func_499(55);
		}
	}
	else if (func_456(131072))
	{
		func_499(58);
	}
}

void func_275()
{
	func_513(&(Local_13.f_7.f_12));
	if (func_519(64))
	{
		func_499(56);
	}
}

void func_276()
{
	func_499(58);
}

void func_277()
{
	func_499(57);
}

void func_278()
{
	if (func_511())
	{
		if (func_506(0))
		{
			func_504(512);
			func_499(58);
			return;
		}
	}
	if (func_507(2048))
	{
		func_499(58);
	}
}

void func_279()
{
	if (func_535(3))
	{
		func_499(59);
	}
}

void func_280()
{
	int iVar0;
	int iVar1;

	if (func_507(2048))
	{
		iVar0 = func_536();
		if (!func_512(iVar0))
		{
			if (!func_515(1))
			{
				func_516(0, 4, iVar0, 0);
			}
		}
	}
	else if (func_507(2))
	{
		if (!func_512(35))
		{
			if (!func_515(1))
			{
				func_516(0, 0, 35, 0);
			}
		}
	}
	iVar1 = func_101(0);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar1) || PED::IS_PED_DEAD_OR_DYING(iVar1, true)) || !func_452())
	{
		func_504(1024);
		if (func_524(512))
		{
			func_499(71);
		}
		else if (func_497())
		{
			func_499(60);
		}
		else
		{
			func_499(61);
		}
	}
}

void func_281()
{
	if (func_507(536870912))
	{
		func_499(71);
		return;
	}
	if (func_507(16777216))
	{
		func_499(61);
	}
}

void func_282()
{
	func_499(72);
}

void func_283()
{
	if (!func_512(34))
	{
		if (func_520(Local_13.f_7.f_10, 1500))
		{
			func_516(0, 0, 34, 0);
		}
	}
	if (func_512(34) && func_519(64))
	{
		func_499(63);
	}
}

void func_284()
{
	int iVar0;
	int iVar1;

	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!AUDIO::_0x54B187F111D9C6F8(iVar0, 0))
		{
			switch (func_197())
			{
				case 9:
					if (!func_512(131))
					{
						func_516(0, 0, 131, 0);
					}
					break;
				case 10:
					if (!func_512(133))
					{
						func_516(0, 0, 133, 0);
					}
					break;
				case 11:
					if (!func_512(135))
					{
						func_516(0, 0, 135, 0);
					}
					break;
			}
		}
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), func_326(5)) < 5f && ((func_512(131) || func_512(133)) || func_512(135)))
		{
			iVar1 = func_197();
			switch (iVar1)
			{
				case 10:
					func_504(4096);
					break;
				case 11:
					func_504(8192);
					break;
			}
			func_499(64);
		}
	}
}

void func_285()
{
	func_499(65);
}

void func_286()
{
	if (func_511())
	{
		func_504(512);
		func_499(71);
		return;
	}
	if (func_507(2048))
	{
		func_499(66);
	}
}

void func_287()
{
	if (func_497())
	{
		func_505(4096);
		if (func_197() == 11)
		{
			func_499(67);
		}
		else
		{
			func_499(69);
		}
	}
}

void func_288()
{
	int iVar0;

	iVar0 = func_101(0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && !PED::_IS_PED_LASSOED(iVar0)) && !PED::_IS_PED_HOGTIED(iVar0))
	{
		func_505(8192);
		func_504(16384);
		func_499(69);
	}
	if (func_512(173))
	{
		func_505(8192);
	}
}

void func_289()
{
	int iVar0;

	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_520(Local_13.f_7.f_10, 1500))
		{
			func_516(0, 0, 35, 0);
		}
	}
	if (func_512(35))
	{
		func_499(70);
	}
}

void func_290()
{
	if (func_507(536870912))
	{
		func_499(71);
		return;
	}
	if (func_507(16777216))
	{
		func_499(70);
	}
}

void func_291()
{
	func_499(72);
}

void func_292()
{
	if (Local_13.f_58 != 0)
	{
		func_506(0);
	}
	if (((func_512(72) || func_512(73)) || func_512(174)) || func_512(175))
	{
		func_499(72);
	}
}

void func_293()
{
	int iVar0;
	int iVar1;

	if (Local_13.f_58 != 5)
	{
		func_506(5);
	}
	if (func_456(64))
	{
		func_499(25);
		return;
	}
	if (func_460(0, 1) > 70f)
	{
		func_504(-2147483648);
	}
	iVar0 = func_101(0);
	iVar1 = func_101(1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (((!ENTITY::DOES_ENTITY_EXIST(iVar1) || PED::IS_PED_DEAD_OR_DYING(iVar1, true)) || (PED::IS_PED_ON_MOUNT(iVar0) && PED::GET_MOUNT(iVar0) == iVar1)) || func_524(-2147483648))
		{
			func_499(73);
		}
	}
}

void func_294()
{
	int iVar0;

	if (Local_13.f_58 != 5)
	{
		func_506(5);
	}
	if (func_456(64))
	{
		func_499(25);
		return;
	}
	if (func_533(0))
	{
		func_499(75);
		return;
	}
	iVar0 = func_101(0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_ON_MOUNT(iVar0)) && !func_524(-2147483648))
	{
		func_499(72);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && !func_458(0))
	{
		if (func_537(10f, 128, 0))
		{
			func_509(0, 10f, 10000, 0, 101, 102, 103, -1, -1, -1, 0, -1);
		}
		else if (func_538(10f, 2048, 4096))
		{
			if (func_507(512) || func_507(1024))
			{
				func_509(0, 10f, 10000, 0, 25, 26, 27, -1, -1, -1, 0, -1);
			}
			else if (func_507(256))
			{
				func_509(0, 10f, 10000, 0, 28, 29, 30, -1, -1, -1, 0, -1);
			}
		}
		else if (func_538(10f, 8192, 0) || func_538(10f, 128, 0))
		{
			func_509(0, 10f, 10000, 0, 31, 32, 33, -1, -1, -1, 0, -1);
		}
	}
}

void func_295()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (Local_13.f_58 != 5)
	{
		func_506(5);
	}
	iVar0 = func_101(0);
	iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true)) || !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		func_499(75);
	}
	else
	{
		if (func_533(0))
		{
			func_499(75);
			return;
		}
		bVar2 = true;
		if (func_512(79))
		{
			bVar2 = false;
		}
		if (PED::_IS_PED_HOGTIED(iVar0) || PED::_IS_PED_LASSOED(iVar0))
		{
			func_509(0, 65f, 4000, 3, 79, 80, 81, 74, 75, 76, bVar2, -1);
		}
		else if (func_512(79) && !func_512(82))
		{
			func_516(0, 3, 82, 0);
		}
		else if (func_507(1048576))
		{
			func_509(0, 65f, 4000, 3, 77, 74, 75, 76, -1, -1, 1, -1);
		}
		else
		{
			func_509(0, 65f, 4000, 3, 74, 75, 76, -1, -1, -1, bVar2, -1);
		}
	}
}

void func_296()
{
	if (func_507(2048))
	{
		switch (func_197())
		{
			case 1:
				if (func_524(2048))
				{
					func_539(1);
				}
				break;
			case 8:
				if (func_524(1024))
				{
					func_539(1);
				}
				break;
			case 11:
				if (func_524(16384))
				{
					func_539(1);
				}
				break;
			default:
				func_539(1);
				break;
		}
	}
}

void func_297()
{
	if (!func_540() || func_520(Local_13.f_7.f_10, 20000))
	{
		func_539(6);
		return;
	}
	if (func_456(64) || func_458(0))
	{
		func_539(6);
		return;
	}
	if (func_520(Local_13.f_7.f_10, 1000))
	{
		func_539(2);
	}
}

void func_298()
{
	int iVar0;

	if (!func_540() || func_520(Local_13.f_7.f_10, 20000))
	{
		func_539(6);
		return;
	}
	if (func_456(64) || func_458(0))
	{
		func_539(6);
		return;
	}
	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!PED::IS_PED_ON_MOUNT(iVar0) || func_304(iVar0, 501393341))
		{
			func_539(3);
		}
	}
}

void func_299()
{
	int iVar0;
	int iVar1;

	if (!func_540() || func_520(Local_13.f_7.f_10, 20000))
	{
		func_539(6);
		return;
	}
	if (func_456(64) || func_458(0))
	{
		func_539(6);
		return;
	}
	iVar0 = func_536();
	if (!func_512(iVar0))
	{
		if (!func_515(1))
		{
			func_516(0, 4, iVar0, 0);
		}
	}
	iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_13.f_7.f_22);
	if (func_541(0, 2.5f, iVar1, 0))
	{
		func_504(262144);
		func_539(4);
	}
	else if (!func_541(0, 30f, iVar1, 0))
	{
		func_539(6);
	}
}

void func_300()
{
	if (!func_540())
	{
		func_539(6);
		return;
	}
	if (func_456(64) || func_458(0))
	{
		func_539(6);
		return;
	}
	if (func_520(Local_13.f_7.f_13, 9000))
	{
		func_539(7);
		return;
	}
	if (!func_512(71))
	{
		if (!func_515(1))
		{
			func_516(0, 4, 71, 0);
		}
	}
	if (func_512(71) && func_507(4194304))
	{
		if (func_520(Local_13.f_7.f_13, 6000))
		{
			func_504(262144);
			func_539(5);
		}
	}
}

void func_301()
{
	int iVar0;

	if (!func_540() || func_520(Local_13.f_7.f_10, 20000))
	{
		func_539(7);
		return;
	}
	if (func_456(64) || func_458(0))
	{
		func_539(6);
		return;
	}
	if (!func_515(1))
	{
		func_516(0, 4, func_542(), 0);
	}
	iVar0 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_22);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!func_532(iVar0, -1162159953) || ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iVar0, func_311(7), func_543(7)) > 0.9f)
		{
			func_539(7);
		}
	}
}

void func_302()
{
}

void func_303()
{
	func_435(16777216);
}

int func_304(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_305(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_306(int iParam0)
{
	if (!func_162(iParam0))
	{
		return 0;
	}
	if (!func_208(iParam0))
	{
		return 0;
	}
	return ((*Global_1125276)[iParam0 /*27*/])->f_18.f_1;
}

void func_307(var uParam0, int iParam1)
{
	func_544(uParam0, iParam1);
}

void func_308(int iParam0)
{
	struct<11> Var0;
	int iVar15;

	Var0.f_10 = 255;
	SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar15, 4);
	switch (iVar15)
	{
		case 178:
			if (func_545(&Var0, iParam0))
			{
				func_546(&Var0);
			}
			break;
		default:
			break;
	}
}

void func_309(int iParam0)
{
	struct<6> Var0;
	int iVar31;
	int iVar32;
	var uVar33;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 31))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0.f_1))
	{
		return;
	}
	iVar31 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
	if (!PED::IS_PED_A_PLAYER(iVar31))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0))
	{
		return;
	}
	iVar32 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
	if (PED::IS_PED_DEAD_OR_DYING(iVar32, true))
	{
		return;
	}
	uVar33 = Var0.f_5;
}

void func_310(int iParam0)
{
	vector3 vVar0;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 10))
	{
		return;
	}
	if (SCRIPTS::GET_EVENT_AT_INDEX(0, iParam0) != 1387172233)
	{
		return;
	}
	uVar10 = vVar0.x;
	iVar11 = uVar10;
	iVar12 = vVar0.z;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar12))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar12))
	{
		return;
	}
	iVar13 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar12);
	if (ENTITY::IS_ENTITY_DEAD(iVar13) || PED::IS_PED_INJURED(iVar13))
	{
		return;
	}
	if (iVar13 != func_101(1))
	{
		return;
	}
	switch (iVar11)
	{
		case 11:
		case 33:
			func_435(134217728);
			break;
		default:
			return;
	}
}

char* func_311(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "mech_loco_m@generic@reaction@avoid@unarmed@soft@walk_backwards";
		case 1:
			return "script_re@photography";
		case 2:
			return "script_re@photography";
		case 3:
			return "script_re@photography";
		case 4:
			return "script_re@photography";
		case 5:
			return "script_re@photography";
		case 6:
			return "script_re@photography";
		case 7:
			return "script_mp@common@handovers@satchel";
		case 8:
			return "script_mp@common@handovers@satchel";
		case 9:
			return "MECH_LOCO_F@GENERIC@REACTION@HANDSUP@UNARMED@NORMAL";
		case 10:
			return "MECH_LOCO_F@GENERIC@REACTION@HANDSUP@UNARMED@NORMAL";
		case 11:
			return "MECH_LOCO_F@GENERIC@REACTION@HANDSUP@UNARMED@NORMAL";
		default:
			break;
	}
	return "";
}

char* func_312(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@beat@wilderness@photography@fishing@fishing";
		default:
			break;
	}
	return "script@beat@wilderness@photography@fishing@fishing";
}

char* func_313(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_INITIAL";
		case 1:
			return "PBL_CATCH";
		case 2:
			return "PBL_IDLE";
		case 3:
			return "PBL_KEEP";
		default:
			break;
	}
	return "";
}

int func_314(char* sParam0, var uParam1, var uParam2, int iParam3, char* sParam4)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam2))
		{
			if (!ANIMSCENE::_0x25557E324489393C(*uParam1))
			{
				*uParam1 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam0, iParam3, sParam4, true, true);
			}
			if (ANIMSCENE::_0x25557E324489393C(*uParam1))
			{
				if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(*uParam1))
				{
					if (!NETWORK::_NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE(*uParam1))
					{
						return 0;
					}
				}
				if (!ANIMSCENE::_0x477122B8D05E7968(*uParam1, 0, 0))
				{
					if (!ANIMSCENE::_0x59606519FF9D3EC2(*uParam1, 0))
					{
						ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
					}
					return 0;
				}
				else
				{
					*uParam2 = NETWORK::_ANIM_SCENE_TO_NET(*uParam1);
				}
			}
			return 0;
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam2))
	{
		return 0;
	}
	*uParam1 = NETWORK::_NET_TO_ANIM_SCENE(*uParam2);
	if (!ANIMSCENE::_0x25557E324489393C(*uParam1))
	{
		return 0;
	}
	return 1;
}

int func_315(int iParam0)
{
	switch (func_197())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return -1124614608;
				case 1:
					return 2087366558;
				case 2:
					return 1904532698;
				case 3:
					return 1446817251;
				default:
					break;
			}
			break;
		case 3:
			switch (func_201())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1546182539;
						case 1:
							return 2087366558;
						case 2:
							return -1124614608;
						case 3:
							return 1446817251;
						case 4:
							return -1764291535;
						default:
							break;
					}
					break;
				default:
					switch (iParam0)
					{
						case 0:
							return 1546182539;
						case 1:
							return 2087366558;
						case 2:
							return 1904532698;
						case 3:
							return 1446817251;
						case 4:
							return -1764291535;
						default:
							break;
					}
					break;
			}
			break;
		case 4:
			switch (func_201())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1546182539;
						case 1:
							return 2087366558;
						case 2:
							return -1124614608;
						case 3:
							return 1446817251;
						case 4:
							return -1181541851;
						default:
							break;
					}
					break;
				default:
					switch (iParam0)
					{
						case 0:
							return 1546182539;
						case 1:
							return 2087366558;
						case 2:
							return 1904532698;
						case 3:
							return 1446817251;
						case 4:
							return -1181541851;
						default:
							break;
					}
					break;
			}
			break;
		case 5:
			switch (func_201())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1546182539;
						case 1:
							return 2087366558;
						case 2:
							return -1124614608;
						case 3:
							return 1446817251;
						case 4:
							return -1185186518;
						default:
							break;
					}
					break;
				default:
					switch (iParam0)
					{
						case 0:
							return 1546182539;
						case 1:
							return 2087366558;
						case 2:
							return 1904532698;
						case 3:
							return 1446817251;
						case 4:
							return -1185186518;
						default:
							break;
					}
					break;
			}
			break;
		case 6:
			switch (func_201())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1546182539;
						case 1:
							return 2087366558;
						case 2:
							return -1124614608;
						case 3:
							return 1446817251;
						case 4:
							return -457762163;
						default:
							break;
					}
					break;
				default:
					switch (iParam0)
					{
						case 0:
							return 1546182539;
						case 1:
							return 2087366558;
						case 2:
							return 1904532698;
						case 3:
							return 1446817251;
						case 4:
							return -457762163;
						default:
							break;
					}
					break;
			}
			break;
		case 7:
			switch (func_201())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1546182539;
						case 1:
							return 2087366558;
						case 2:
							return -1124614608;
						case 3:
							return 1446817251;
						case 4:
							return 2120307236;
						default:
							break;
					}
					break;
				default:
					switch (iParam0)
					{
						case 0:
							return 1546182539;
						case 1:
							return 2087366558;
						case 2:
							return 1904532698;
						case 3:
							return 1446817251;
						case 4:
							return 2120307236;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
		case 2:
		case 9:
		case 10:
		case 11:
			switch (iParam0)
			{
				case 0:
					return -1124614608;
				default:
					break;
			}
			break;
	}
	return 0;
}

void func_316()
{
	Local_13.f_7.f_19++;
	if (Local_13.f_7.f_19 < 1 || Local_13.f_7.f_19 > 3)
	{
		Local_13.f_7.f_19 = 1;
	}
}

int func_317()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (MISC::IS_BIT_SET(Local_1067.f_271.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = func_547(iVar0);
			if (iVar2 == 0)
			{
				Jump @132; //curOff = 54
			}
			else
			{
				if (!MISC::IS_BIT_SET(Local_1067.f_271.f_4, iVar0))
				{
					STREAMING::REQUEST_MODEL(iVar2, false);
					MISC::SET_BIT(&(Local_1067.f_271.f_4), iVar0);
				}
				if (!STREAMING::HAS_MODEL_LOADED(iVar2))
				{
					bVar1 = true;
					Jump @132; //curOff = 112
				}
				else
				{
					MISC::SET_BIT(&(Local_1067.f_271.f_3), iVar0);
				}
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 0;
	}
	return 1;
}

int func_318()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	bVar2 = false;
	iVar3 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (MISC::IS_BIT_SET((Local_1067.f_325.f_1[iVar0 /*50*/])->f_1, iVar1))
			{
			}
			else
			{
				iVar3 = func_482(iVar0, iVar1);
				if (func_483(iVar1))
				{
					if (((Local_1067.f_325.f_1[iVar0 /*50*/])->f_4[iVar1 /*9*/])->f_3 == 0 || !PED::_0x93FFD92F05EC32FD(((Local_1067.f_325.f_1[iVar0 /*50*/])->f_4[iVar1 /*9*/])->f_3))
					{
						((Local_1067.f_325.f_1[iVar0 /*50*/])->f_4[iVar1 /*9*/])->f_3 = PED::_0x91FE941F9FCFB702(((Local_1067.f_325.f_1[iVar0 /*50*/])->f_4[iVar1 /*9*/])->f_2, 0);
						bVar2 = true;
					}
					else if (!PED::_0xB0B2C6D170B0E8E5(((Local_1067.f_325.f_1[iVar0 /*50*/])->f_4[iVar1 /*9*/])->f_3))
					{
						bVar2 = true;
					}
					else
					{
						MISC::SET_BIT(&((Local_1067.f_325.f_1[iVar0 /*50*/])->f_1), iVar1);
					}
				}
				else if (iVar3 == 0)
				{
					Jump @336; //curOff = 244
				}
				else
				{
					if (!MISC::IS_BIT_SET(&(Local_1067.f_325.f_1[iVar0 /*50*/]), iVar1))
					{
						STREAMING::REQUEST_MODEL(iVar3, false);
						MISC::SET_BIT(Local_1067.f_325.f_1[iVar0 /*50*/], iVar1);
					}
					if (!STREAMING::HAS_MODEL_LOADED(iVar3))
					{
						bVar2 = true;
						Jump @336; //curOff = 310
					}
					else
					{
						MISC::SET_BIT(&((Local_1067.f_325.f_1[iVar0 /*50*/])->f_1), iVar1);
					}
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	if (bVar2)
	{
		return 0;
	}
	return 1;
}

void func_319(struct<2> Param0)
{
	if (func_443(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_443(Param0)))
	{
		STATS::_0x99230691875FC218(func_441(Param0), func_443(Param0), Global_35);
	}
}

void func_320()
{
	int iVar0;
	int iVar1;

	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_548(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_321()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 5)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar1 /*6*/][iVar2]))
			{
				iVar0 = NETWORK::NET_TO_OBJ(Local_13.f_42[iVar1 /*6*/][iVar2]);
				(Local_1067.f_325.f_1[iVar1 /*50*/])->f_4[iVar2 /*9*/] = iVar0;
			}
			else if (0 != func_482(iVar1, iVar2))
			{
			}
			iVar2++;
		}
		iVar1++;
	}
}

void func_322(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
	}
	else
	{
		func_549(&(Local_1067.f_377), *iParam0, iParam1);
	}
}

void func_323(int iParam0)
{
	if (Local_1067.f_18.f_245 == 0)
	{
		Local_1067.f_18.f_245 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(func_550(), iParam0, -1f, 20f, 30f, -1082130432, -1082130432, 1127481344, 0, 0, -1, -1);
	}
}

void func_324(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_551(uParam0, iParam1, sParam2))
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

void func_325()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1067.f_18.f_244, func_453(0), func_101(0), 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1067.f_18.f_244, func_453(2), func_101(2), 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1067.f_18.f_244, func_455(0), func_454(0), 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1067.f_18.f_244, func_455(1), func_454(1), 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1067.f_18.f_244, func_455(2), func_454(2), 0);
}

Vector3 func_326(int iParam0)
{
	switch (func_202())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 463.0012f, 62.19994f, 133.9577f;
				case 1:
					return 459.5367f, 63.82849f, 133.9809f;
				case 6:
					return 473.8049f, 58.08183f, 134.8966f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 4:
					return -413.7405f, 160.7715f, 40.60635f;
				case 6:
					return -405.5906f, 156.8669f, 42.05116f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 3:
					return -1930.864f, -1335.484f, 106.3758f;
				case 6:
					return -1928.29f, -1351.451f, 105.5744f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -2008.653f, -2164.204f, 53.22349f;
				case 1:
					return -2008.814f, -2169.677f, 52.54388f;
				case 6:
					return -2004.192f, -2158.109f, 54.32602f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return -1264.347f, 114.8426f, 70.64063f;
				case 1:
					return -1257.814f, 116.7969f, 70.42671f;
				case 6:
					return -1284.743f, 110.389f, 70.77811f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 3:
					return -2360.554f, -362.1568f, 144.5925f;
				case 4:
					return -2383.904f, -370.4672f, 141.1333f;
				case 6:
					return -2347.193f, -359.7904f, 143.6934f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 3:
					return -1732.791f, 300.1196f, 107.8627f;
				case 6:
					return -1737.243f, 310.5743f, 108.0522f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 3:
					return -4956.618f, -3405.884f, 8.00939f;
				case 6:
					return -4966.197f, -3394.001f, 7.7957f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -2187.949f, -2790.927f, 68.51616f;
				case 1:
					return -2182.352f, -2792.112f, 67.62013f;
				case 6:
					return -2193.045f, -2774.715f, 69.19832f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 3:
					return -4602.944f, -2692.327f, -7.3729f;
				case 6:
					return -4606.675f, -2703.876f, -10.85025f;
				default:
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case 2:
			return func_461(0);
		case 5:
			return func_461(0);
		default:
			break;
	}
	return func_461(0);
}

float func_327(int iParam0)
{
	switch (func_202())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return -108.36f;
				case 2:
					return -108.36f;
				case 5:
					return -108.36f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 2:
					return 44.46f;
				case 5:
					return 44.46f;
				case 4:
					return 145.54f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 3:
					return -38.13f;
				case 2:
					return -157.37f;
				case 5:
					return -157.37f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 6.14f;
				case 2:
					return -63.55f;
				case 5:
					return -63.55f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 105.07f;
				case 2:
					return 91.77f;
				case 5:
					return 105.07f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 3:
					return -80.16f;
				case 2:
					return -92.87f;
				case 5:
					return -92.87f;
				case 4:
					return 117.75f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 3:
					return -50.3f;
				case 2:
					return 119.22f;
				case 5:
					return 119.22f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 3:
					return 88.08f;
				case 2:
					return -2.53f;
				case 5:
					return -2.53f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return 75.17f;
				case 2:
					return 105.53f;
				case 5:
					return 75.17f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 3:
					return 174.62f;
				case 2:
					return 174.62f;
				case 5:
					return 174.62f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

void func_328(int iParam0)
{
	if (Local_1067.f_18.f_246 == 0)
	{
		Local_1067.f_18.f_246 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(func_552(), iParam0, -1f, 25f, 35f, -1082130432, -1082130432, 1127481344, 0, 0, -1, -1);
	}
}

void func_329(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (!func_161((Local_1067.f_520.f_10[iParam0 /*29*/])->f_3, 4))
		{
			func_206(&((Local_1067.f_520.f_10[iParam0 /*29*/])->f_3), 4);
		}
	}
	else if (func_161((Local_1067.f_520.f_10[iParam0 /*29*/])->f_3, 4))
	{
		func_305(&((Local_1067.f_520.f_10[iParam0 /*29*/])->f_3), 4);
	}
}

void func_330(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
	}
	else
	{
		func_553(&(Local_1067.f_377), *iParam0, iParam1);
	}
}

void func_331(int iParam0, float fParam1)
{
	if (fParam1 > 0f)
	{
		Local_1067.f_520.f_10[iParam0 /*29*/] = fParam1;
	}
}

void func_332()
{
}

int func_333(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return 0;
	}
	Var0 = { func_554(iParam0, 2087069356) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return 0;
	}
	if (iVar2 != 0 && (Global_1275573->f_21 - iVar2) < iParam1)
	{
		return 1;
	}
	return 0;
}

void func_334(int iParam0)
{
	if (func_161(&(Local_74[NETWORK::PARTICIPANT_ID_TO_INT() /*31*/]), iParam0))
	{
		func_305(Local_74[NETWORK::PARTICIPANT_ID_TO_INT() /*31*/], iParam0);
	}
}

void func_335()
{
	func_555();
	func_556();
	func_557();
}

void func_336()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
		func_558(iVar0, bVar1, iVar2);
		func_559(iVar0, bVar1, iVar2);
		func_560(iVar0, bVar1, iVar2);
		func_561(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_337()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;

	if (!NETWORK::_0x255A5EF65EDA9167(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return;
	}
	iVar3 = NETWORK::PARTICIPANT_ID_TO_INT();
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Local_1067.f_271.f_41 >= 3)
		{
			Local_1067.f_271.f_41 = 0;
		}
		iVar0 = Local_1067.f_271.f_41;
		Local_1067.f_271.f_41++;
		iVar7 = func_562(iVar0);
		iVar1 = &Local_1067.f_271.f_7[iVar0 /*11*/];
		bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		if (func_480(iVar7, 4))
		{
			func_548(iVar7, iVar3, 1);
			bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		}
		if (bVar4)
		{
			if (&(Local_74[iVar3 /*31*/])->f_4.f_2[iVar0] > -1f)
			{
				(Local_74[iVar3 /*31*/])->f_4.f_2[iVar0] = -1f;
			}
			if (MISC::IS_BIT_SET(Local_1067.f_271.f_5, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_1067.f_271.f_5), iVar0);
				MISC::CLEAR_BIT(&(Local_1067.f_271.f_6), iVar0);
				MISC::CLEAR_BIT(&(Local_1067.f_271.f_42), iVar0);
			}
		}
		if (MISC::IS_BIT_SET(Local_1067.f_271.f_42, iVar0))
		{
			if (bVar4 || !func_563(iVar2, iVar1, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_1067.f_271.f_42), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (func_563(iVar2, iVar1, iVar0))
			{
				MISC::SET_BIT(&(Local_1067.f_271.f_42), iVar0);
			}
		}
		if (!bVar4)
		{
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar1))
			{
				if (!MISC::IS_BIT_SET((Local_74[iVar3 /*31*/])->f_4.f_1, iVar0))
				{
					MISC::SET_BIT(&((Local_74[iVar3 /*31*/])->f_4.f_1), iVar0);
				}
				func_564(Local_1067.f_271.f_43[iVar0 /*3*/]);
			}
		}
		if (MISC::IS_BIT_SET((Local_74[iVar3 /*31*/])->f_4.f_1, iVar0))
		{
			if (bVar4 || (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar1) && (!func_565(Local_1067.f_271.f_43[iVar0 /*3*/]) || func_566(Local_1067.f_271.f_43[iVar0 /*3*/], 0.5f))))
			{
				func_567(Local_1067.f_271.f_43[iVar0 /*3*/]);
				MISC::CLEAR_BIT(&((Local_74[iVar3 /*31*/])->f_4.f_1), iVar0);
			}
		}
		if (func_480(iVar7, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (func_568(iVar7))
						{
							if (!func_481(iVar7, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									func_569(iVar7, 4);
								}
								else if (bVar6)
								{
								}
							}
						}
					}
				}
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1) && !func_480(iVar7, 8))
			{
				if (!func_568(iVar7))
				{
					PED::_0x7043D0681285BA2D(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_1067.f_271.f_42 != 0)
	{
		if (!func_570(1, -1))
		{
			func_571(1);
		}
	}
	else if (func_570(1, -1))
	{
		func_572(1);
	}
}

void func_338()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	var uVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;

	iVar10 = 255;
	iVar15 = NETWORK::PARTICIPANT_ID_TO_INT();
	func_573();
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		(Local_74[iVar15 /*31*/])->f_10.f_8 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	while (iVar12 < 1)
	{
		if (Local_1067.f_377.f_96 >= 3)
		{
			Local_1067.f_377.f_96 = 0;
		}
		iVar1 = Local_1067.f_377.f_96;
		Local_1067.f_377.f_96++;
		iVar12++;
		iVar8 = func_574(iVar1);
		if (!func_575(iVar8))
		{
		}
		else if (func_576(iVar8, &vVar5))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(vVar5.x))
			{
			}
			else
			{
				func_577(iVar8);
				if (func_578(iVar8))
				{
					if (func_579(iVar8))
					{
						if (!func_580(iVar8))
						{
							func_581(iVar8);
						}
					}
					if (func_582(iVar8))
					{
						func_583(iVar8);
					}
				}
				else
				{
					if (func_584(iVar8))
					{
						if (ENTITY::DOES_ENTITY_EXIST(vVar5.x) && !ENTITY::IS_ENTITY_DEAD(vVar5.x))
						{
							PED::SET_PED_RESET_FLAG(vVar5.x, 42, true);
						}
					}
					if (!func_585(iVar8, -1))
					{
						bVar2 = false;
						iVar3 = 0;
						if (func_586(iVar8))
						{
							bVar2 = true;
							iVar3 = 1;
						}
						else if (func_587(iVar8, iVar15))
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else if (func_588(vVar5.x, vVar5.y, &(Local_1067.f_377), &iVar4, 0, vVar5.z))
						{
							bVar2 = true;
						}
						else
						{
							iVar16 = EVENT::_0x796EECFF0C6D39BE(vVar5.x, 1, 1);
							if (iVar16 != 0)
							{
								iVar17 = EVENT::_0x822A001BCEA5BD81(vVar5.x, iVar16, 1, 1);
								if (ENTITY::DOES_ENTITY_EXIST(iVar17) && ENTITY::IS_ENTITY_A_PED(iVar17))
								{
									iVar18 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar17);
									if (PED::IS_PED_A_PLAYER(iVar18))
									{
										switch (iVar16)
										{
											case joaat("event_shot_fired"):
												if (!Local_1067.f_377.f_1 & 256 != 0)
												{
													if (vVar5.z <= IntToFloat(func_589(&(Local_1067.f_377))))
													{
														iVar4 = 256;
														bVar2 = true;
													}
												}
												break;
											case joaat("event_shot_fired_bullet_impact"):
											case joaat("event_shot_fired_whizzed_by"):
												if (!Local_1067.f_377.f_1 & 4 != 0)
												{
													iVar4 = 4;
													bVar2 = true;
												}
												break;
										}
									}
								}
								EVENT::_0x1A5C5D350068A673(vVar5.x, 1);
							}
							if (!Local_1067.f_377.f_1 & 256 != 0)
							{
								if ((Local_74[iVar15 /*31*/])->f_10.f_8 != 0 && NETWORK::GET_TIME_DIFFERENCE((Local_74[iVar15 /*31*/])->f_10.f_8, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
								{
									if (vVar5.z >= 0f && vVar5.z <= IntToFloat(func_589(&(Local_1067.f_377))))
									{
										iVar4 = 256;
										bVar2 = true;
									}
								}
							}
						}
						if (bVar2)
						{
							if (!func_590(iVar8, iVar4, iVar3))
							{
							}
							else
							{
								if (MISC::IS_BIT_SET((Local_74[iVar15 /*31*/])->f_10.f_7, iVar8))
								{
									MISC::CLEAR_BIT(&((Local_74[iVar15 /*31*/])->f_10.f_7), iVar8);
								}
								func_591(iVar8, 1);
								Jump @767; //curOff = 679
								if (func_592(&vVar5, iVar8))
								{
									if (MISC::IS_BIT_SET((Local_74[iVar15 /*31*/])->f_10.f_7, iVar8))
									{
										MISC::CLEAR_BIT(&((Local_74[iVar15 /*31*/])->f_10.f_7), iVar8);
									}
								}
								else if (!MISC::IS_BIT_SET((Local_74[iVar15 /*31*/])->f_10.f_7, iVar8))
								{
									MISC::SET_BIT(&((Local_74[iVar15 /*31*/])->f_10.f_7), iVar8);
								}
								if (func_458(iVar8))
								{
									if (!func_593(iVar8, -1))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vVar5.x))
										{
											if (!func_594(iVar8))
											{
											}
											else
											{
												func_595(iVar8);
												func_596(iVar8);
												Jump @1016; //curOff = 821
												if (func_597(iVar8))
												{
												}
												else if (iVar13 < 2)
												{
													if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vVar5.x))
													{
														iVar14 = 0;
														while (iVar14 < 2)
														{
															if (&Local_1067.f_377.f_98[iVar8] >= 32)
															{
																iVar0 = 0;
																Local_1067.f_377.f_98[iVar8] = 0;
															}
															else
															{
																iVar0 = &Local_1067.f_377.f_98[iVar8];
																Local_1067.f_377.f_98[iVar8] = &Local_1067.f_377.f_98[iVar8] + 1;
															}
															iVar14++;
															if (func_598(iVar0, &uVar11, &iVar10, &uVar9))
															{
																if (!func_599(iVar8, iVar10))
																{
																	if (func_585(iVar8, iVar0))
																	{
																		if (!func_600(iVar8, uVar11, iVar10, uVar9))
																		{
																		}
																		else
																		{
																			func_601(iVar8, iVar10);
																		}
																	}
																}
															}
														}
														iVar13++;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

void func_339()
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	bool bVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;

	fVar0 = func_602();
	if (Local_1067.f_479.f_4)
	{
		return;
	}
	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (func_161((Local_74[iVar1 /*31*/])->f_27, 1))
	{
		Local_1067.f_479.f_4 = 1;
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	fVar3 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar2, true, false), Local_1067.f_15);
	fVar4 = Local_1067.f_479.f_9;
	fVar5 = Local_1067.f_479.f_10;
	if (func_161(Local_1067.f_479.f_12, 2))
	{
		bVar6 = false;
		fVar7 = ENTITY::GET_ENTITY_SPEED(iVar2);
		fVar8 = (fVar0 * (1f / Local_1067.f_479.f_7));
		if (fVar7 > 0f)
		{
			if (func_603(Local_1067.f_15, iVar2))
			{
				bVar6 = true;
			}
		}
		if (bVar6)
		{
			if (Local_1067.f_479.f_6 < 1f)
			{
				Local_1067.f_479.f_6 = (Local_1067.f_479.f_6 + fVar8);
				if (Local_1067.f_479.f_6 > 1f)
				{
					Local_1067.f_479.f_6 = 1f;
				}
			}
		}
		else if (Local_1067.f_479.f_6 > 0f)
		{
			Local_1067.f_479.f_6 = (Local_1067.f_479.f_6 - fVar8);
			if (Local_1067.f_479.f_6 < 0f)
			{
				Local_1067.f_479.f_6 = 0f;
			}
		}
		fVar9 = ((fVar7 * Local_1067.f_479.f_5) * Local_1067.f_479.f_6);
		fVar4 = (fVar4 + fVar9);
		fVar5 = (fVar5 + fVar9);
	}
	if (fVar3 <= fVar4)
	{
		func_206(&((Local_74[iVar1 /*31*/])->f_27), 1);
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(Local_1067.f_479.f_11) && ENTITY::IS_ENTITY_IN_VOLUME(iVar2, Local_1067.f_479.f_11, false, 0))
	{
		func_206(&((Local_74[iVar1 /*31*/])->f_27), 1);
	}
	else if (Local_1067.f_479 > 0)
	{
		iVar10 = 0;
		while (iVar10 < 3)
		{
			func_604(Local_1067.f_479.f_13[iVar10 /*9*/], fVar5, 1082130432 /* Float: 4f */, 0, 0, 0, 0);
			iVar10++;
		}
		if (func_605(&(Local_1067.f_479.f_13), Local_1067.f_479, Local_1067.f_479.f_8))
		{
			func_206(&((Local_74[iVar1 /*31*/])->f_27), 1);
		}
	}
	if (func_161((Local_74[iVar1 /*31*/])->f_27, 1))
	{
		Local_1067.f_479.f_4 = 1;
	}
}

void func_340()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	bVar0 = false;
	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (!func_606(iVar1))
	{
		return;
	}
	func_607();
	if (func_488())
	{
		if (func_608(2, -1) || func_608(1, -1))
		{
			func_609(1);
			func_609(2);
			func_610(2);
			func_610(1);
		}
	}
	else
	{
		bVar2 = false;
		if (func_611() || func_612())
		{
			bVar2 = true;
			if (func_612() || (!func_613(8) && !func_608(4, iVar1)))
			{
				func_614(Local_1067.f_520, Local_13.f_58);
				Local_1067.f_520 = Local_13.f_58;
				iVar3 = 0;
				while (iVar3 < 3)
				{
					func_615(func_155(iVar3), Local_13.f_58);
					iVar3++;
				}
				if (func_616())
				{
					func_617(Local_1067.f_520.f_3.f_1);
				}
				bVar0 = true;
				if (func_611())
				{
					func_618(4);
				}
				else
				{
					func_609(4);
				}
			}
			else if (!func_613(8))
			{
				if (!func_492(4))
				{
				}
				else if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					func_491(8);
				}
			}
			else if (func_489(4))
			{
				if (func_608(4, iVar1))
				{
					func_609(4);
				}
			}
			else if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_490(4);
				func_490(8);
			}
		}
		else if (func_608(4, iVar1))
		{
			func_609(4);
		}
		if (!func_489(1))
		{
			if (func_493(1))
			{
				func_610(1);
			}
			if (func_616())
			{
				iVar4 = Local_1067.f_520.f_3.f_1;
				if (func_619(iVar4))
				{
					if (bVar0)
					{
						func_617(iVar4);
					}
					if (func_161((Local_1067.f_520.f_10[iVar4 /*29*/])->f_3, 16))
					{
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
					}
					iVar6 = NETWORK::PARTICIPANT_ID_TO_INT();
					iVar5 = 0;
					while (iVar5 < 3)
					{
						if (!func_438(&((Local_1067.f_520.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])))
						{
						}
						else
						{
							if (bVar2 || func_161(((Local_1067.f_520.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_1, 8))
							{
								if (func_620(&((Local_1067.f_520.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0))
								{
									func_621(&((Local_1067.f_520.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0, 1, 1);
								}
								func_305(&(((Local_1067.f_520.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_1), 8);
							}
							else if (!func_161(((Local_1067.f_520.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_1, 1))
							{
								if (func_161(((Local_1067.f_520.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_1, 4))
								{
									if (func_622() < ((Local_1067.f_520.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_7)
									{
										if (func_620(&((Local_1067.f_520.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0))
										{
											func_621(&((Local_1067.f_520.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0, 1, 1);
										}
									}
									else if (!func_620(&((Local_1067.f_520.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0))
									{
										func_621(&((Local_1067.f_520.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 1, 1, 1);
									}
								}
								else if (!func_620(&((Local_1067.f_520.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0))
								{
									func_621(&((Local_1067.f_520.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 1, 1, 1);
								}
							}
							if (func_623(&((Local_1067.f_520.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 1))
							{
								if (!func_624(iVar4, iVar5, Local_1067.f_520))
								{
								}
								else
								{
									Local_1067.f_520.f_7 = PLAYER::PLAYER_ID();
									Local_1067.f_520.f_8 = iVar4;
									Local_1067.f_520.f_9 = iVar5;
									(Local_74[iVar6 /*31*/])->f_28.f_1 = iVar4;
									(Local_74[iVar6 /*31*/])->f_28.f_2 = iVar5;
									func_625(iVar4, iVar5);
									func_618(1);
									func_618(2);
									func_626(2);
								}
							}
						}
						iVar5++;
					}
				}
			}
		}
		else
		{
			if (!func_493(2))
			{
				if (!func_493(1))
				{
					func_626(1);
					func_610(2);
				}
			}
			if (!func_608(2, -1))
			{
				if (func_493(2))
				{
					func_625(Local_1067.f_520.f_8, Local_1067.f_520.f_9);
					func_618(2);
				}
			}
		}
	}
}

int func_341()
{
	bool bVar0;

	bVar0 = true;
	if (bVar0 && !UNLOCK::_UNLOCK_IS_UNLOCKED(Local_1067.f_14))
	{
		return 0;
	}
	return 1;
}

void func_342(int iParam0)
{
	if (Local_1067.f_18 != iParam0)
	{
		Local_1067.f_18 = iParam0;
	}
}

void func_343(int iParam0)
{
	if (Local_1067.f_18.f_1 != iParam0)
	{
		Local_1067.f_18.f_1 = iParam0;
	}
}

void func_344()
{
	int iVar0;

	Local_1067.f_18.f_248 = -1;
	Local_1067.f_18.f_249 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_1067.f_18.f_249 = (Local_1067.f_18.f_249 || (Local_74[iVar0 /*31*/])->f_1);
			Local_1067.f_18.f_248 = (Local_1067.f_18.f_248 && (Local_74[iVar0 /*31*/])->f_1);
		}
		iVar0++;
	}
}

void func_345()
{
	int iVar0;

	Local_1067.f_18.f_250 = -1;
	Local_1067.f_18.f_251 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_1067.f_18.f_251 = (Local_1067.f_18.f_251 || (Local_74[iVar0 /*31*/])->f_1.f_1);
			Local_1067.f_18.f_250 = (Local_1067.f_18.f_250 && (Local_74[iVar0 /*31*/])->f_1.f_1);
		}
		iVar0++;
	}
}

void func_346()
{
	int iVar0;
	float fVar1;
	char* sVar2;

	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(PLAYER::INT_TO_PLAYERINDEX(NETWORK::PARTICIPANT_ID_TO_INT())))
	{
		return;
	}
	if (!func_434(64, 255))
	{
		return;
	}
	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	if (iVar0 != 0)
	{
		return;
	}
	fVar1 = BUILTIN::VDIST(Local_1067.f_15, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false));
	if (fVar1 > 50f)
	{
		return;
	}
	if (!func_164(1))
	{
		func_628(func_627(), 10000, 0, 0, 0, 1);
		func_103(1);
		return;
	}
	else if (!func_164(2))
	{
		func_628(func_629(), 10000, 0, 0, 0, 1);
		func_103(2);
		return;
	}
	if (func_524(1048576) && !func_164(4))
	{
		sVar2 = func_630(1048576);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_628(sVar2, 10000, 0, 0, 0, 1);
			func_103(4);
			return;
		}
	}
	else if (func_524(2097152) && !func_164(8))
	{
		sVar2 = func_630(2097152);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_628(sVar2, 10000, 0, 0, 0, 1);
			func_103(8);
			return;
		}
	}
	else if (func_524(4194304) && !func_164(16))
	{
		sVar2 = func_630(4194304);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_628(sVar2, 10000, 0, 0, 0, 1);
			func_103(16);
			return;
		}
	}
	else if (func_524(8388608) && !func_164(32))
	{
		sVar2 = func_630(8388608);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_628(sVar2, 10000, 0, 0, 0, 1);
			func_103(32);
			return;
		}
	}
	else if (func_524(16777216) && !func_164(64))
	{
		sVar2 = func_630(16777216);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_628(sVar2, 10000, 0, 0, 0, 1);
			func_103(64);
			return;
		}
	}
	else if (func_524(33554432) && !func_164(128))
	{
		sVar2 = func_630(33554432);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_628(sVar2, 10000, 0, 0, 0, 1);
			func_103(128);
			return;
		}
	}
	else if (func_524(67108864) && !func_164(256))
	{
		sVar2 = func_630(67108864);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_628(sVar2, 10000, 0, 0, 0, 1);
			func_103(256);
			return;
		}
	}
	else if (func_524(134217728) && !func_164(512))
	{
		sVar2 = func_630(134217728);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_628(sVar2, 10000, 0, 0, 0, 1);
			func_103(512);
			return;
		}
	}
	else if (func_524(268435456) && !func_164(1024))
	{
		sVar2 = func_630(268435456);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_628(sVar2, 10000, 0, 0, 0, 1);
			func_103(1024);
			return;
		}
	}
	else if (func_524(536870912) && !func_164(2048))
	{
		sVar2 = func_630(536870912);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_628(sVar2, 10000, 0, 0, 0, 1);
			func_103(2048);
			return;
		}
	}
	else if (func_524(1073741824 /* Float: 2f */) && !func_164(4096))
	{
		sVar2 = func_630(1073741824 /* Float: 2f */);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_628(sVar2, 10000, 0, 0, 0, 1);
			func_103(4096);
			return;
		}
	}
}

void func_347()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;

	if (!func_495())
	{
		return;
	}
	if ((func_456(64) || func_456(512)) || func_456(256))
	{
		return;
	}
	iVar0 = func_101(0);
	iVar1 = func_101(2);
	iVar2 = PLAYER::GET_PLAYER_PED(func_631(2, 0, 1));
	if ((((((!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0)) || !ENTITY::DOES_ENTITY_EXIST(iVar1)) || ENTITY::IS_ENTITY_DEAD(iVar1)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1)) || !ENTITY::DOES_ENTITY_EXIST(iVar2)) || ENTITY::IS_ENTITY_DEAD(iVar2))
	{
		return;
	}
	if (Local_13.f_7.f_18 > func_522() || func_460(0, 2) < func_530())
	{
		iVar3 = 4;
	}
	else if (Local_13.f_7.f_18 > func_632())
	{
		iVar3 = 3;
	}
	else if (Local_13.f_7.f_18 > func_633())
	{
		iVar3 = 2;
	}
	else if (Local_13.f_7.f_18 > func_634())
	{
		iVar3 = 1;
	}
	iVar4 = func_635(2, 0, 1);
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
	{
		fVar5 = func_636(iVar4, 2, 0);
		if (fVar5 != 0f)
		{
			iVar6 = func_637(fVar5);
			if (iVar6 > iVar3)
			{
				iVar3 = iVar6;
				if (iVar3 == 4)
				{
					func_498(32768);
				}
			}
		}
	}
	switch (Local_1067.f_18.f_2)
	{
		case 0:
			Local_1067.f_18.f_2 = 1;
			break;
		case 1:
			switch (iVar3)
			{
				case 1:
					Local_1067.f_18.f_2 = 2;
					break;
				case 2:
					Local_1067.f_18.f_2 = 3;
					break;
				case 3:
					Local_1067.f_18.f_2 = 4;
					break;
				case 4:
					Local_1067.f_18.f_2 = 5;
					break;
			}
			break;
		case 2:
			switch (iVar3)
			{
				case 2:
					Local_1067.f_18.f_2 = 3;
					break;
				case 3:
					Local_1067.f_18.f_2 = 4;
					break;
				case 4:
					Local_1067.f_18.f_2 = 5;
					break;
			}
			if (func_459(iVar1, -875674219, 1, 0))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar1, iVar0, -1, -1082130432, -1082130432, -1082130432);
			}
			break;
		case 3:
			switch (iVar3)
			{
				case 3:
					Local_1067.f_18.f_2 = 4;
					break;
				case 4:
					Local_1067.f_18.f_2 = 5;
					break;
			}
			if (func_459(iVar1, -1389117756, 1, 0))
			{
				TASK::TASK_COMBAT_ANIMAL_WARN(iVar1, iVar0, 0);
			}
			break;
		case 4:
			switch (iVar3)
			{
				case 4:
					Local_1067.f_18.f_2 = 5;
					break;
			}
			if (func_459(iVar1, -1952598043, 1, 0))
			{
				TASK::TASK_AMBIENT_ANIMAL_STALK(iVar1, iVar0, 0);
			}
			break;
		case 5:
			func_498(64);
			break;
	}
}

void func_348(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		func_206(&((Local_1067.f_520.f_10[iParam0 /*29*/])->f_3), 16);
	}
	else
	{
		func_305(&((Local_1067.f_520.f_10[iParam0 /*29*/])->f_3), 16);
	}
}

void func_349()
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	if (Local_13.f_7.f_21 == 255 || Local_13.f_7.f_21 != PLAYER::PLAYER_ID())
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Local_1067.f_18.f_252))
		{
			VOLUME::_DELETE_VOLUME(Local_1067.f_18.f_252);
		}
		func_463(16384);
		func_463(32768);
		func_463(65536);
		func_463(131072);
		func_463(262144);
		return;
	}
	iVar0 = func_101(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_463(16384);
		func_463(32768);
		func_463(65536);
		func_463(131072);
		func_463(262144);
		return;
	}
	vVar1 = { PED::GET_PED_BONE_COORDS(iVar0, 21030, 0f, 0f, 0f) };
	if (func_638(vVar1, 0.2f, 0.8f, 0.1f, 0.9f))
	{
		func_435(32768);
	}
	else
	{
		func_463(32768);
	}
	if (func_434(32768, 255))
	{
		if (func_639(iVar0))
		{
			func_463(32768);
		}
	}
	iVar4 = func_197();
	iVar5 = func_101(2);
	if (iVar4 == 1)
	{
		iVar5 = PED::GET_MOUNT(iVar0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar5) && !PED::IS_PED_DEAD_OR_DYING(iVar5, true))
	{
		vVar6 = { PED::GET_PED_BONE_COORDS(iVar5, 21030, 0f, 0f, 0f) };
		if (func_638(vVar6, 0.1f, 0.9f, 0.1f, 0.9f))
		{
			func_435(65536);
		}
		else
		{
			func_463(65536);
		}
	}
	else
	{
		func_435(65536);
	}
	if (func_640() || ENTITY::IS_ENTITY_ON_SCREEN(PLAYER::PLAYER_PED_ID()))
	{
		func_435(16384);
	}
	else
	{
		func_463(16384);
	}
	if (func_641())
	{
		iVar9 = 0;
		while (iVar9 < 32)
		{
			if (SCRIPTS::_0x72B2E00C9BAC6789(&(Local_13.f_7.f_7), iVar9))
			{
				if (iVar9 != NETWORK::PARTICIPANT_ID_TO_INT())
				{
					iVar11++;
				}
			}
			if (SCRIPTS::_0x72B2E00C9BAC6789(&(Local_13.f_7.f_6), iVar9))
			{
				iVar12 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar9);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar12))
				{
					iVar13 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar12);
					iVar14 = PLAYER::GET_PLAYER_PED(iVar13);
					if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_DEAD_OR_DYING(iVar14, true))
					{
						vVar1 = { PED::GET_PED_BONE_COORDS(iVar14, 21030, 0f, 0f, 0f) };
						if (func_638(vVar1, 0.2f, 0.8f, 0.1f, 0.9f))
						{
							iVar10++;
						}
					}
				}
			}
			iVar9++;
		}
		if (iVar10 < iVar11 || iVar10 == 0)
		{
			if (iVar11 > 1)
			{
				func_463(131072);
				func_463(262144);
			}
			else
			{
				func_463(131072);
				func_435(262144);
			}
		}
		else
		{
			func_435(131072);
			func_435(262144);
		}
	}
	else
	{
		func_435(131072);
		func_435(262144);
	}
}

void func_350()
{
	int iVar0;
	char[] cVar1[8];

	if (func_434(-2147483648, 255))
	{
		return;
	}
	iVar0 = 180;
	while (Local_1067.f_18.f_150 < iVar0)
	{
		cVar1 = func_528(Local_1067.f_18.f_150);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar1))
		{
			AUDIO::_0xEF51242E35242B47(cVar1);
		}
		Local_1067.f_18.f_150++;
		if (Local_1067.f_18.f_150 > (iVar0 - 1))
		{
			func_435(-2147483648);
		}
	}
}

void func_351()
{
	switch (Local_1067.f_18)
	{
		case 0:
			return;
		case 1:
			return;
		case 48:
			return;
		default:
			break;
	}
	if (func_503(0, -1, 1) < 30f)
	{
		func_642();
	}
}

void func_352()
{
}

void func_353()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;

	iVar0 = func_101(0);
	iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return;
	}
	vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar1, true, false) };
	fVar5 = BUILTIN::VDIST(vVar2, ENTITY::GET_ENTITY_COORDS(iVar0, false, false));
	switch (func_197())
	{
		case 9:
		case 10:
		case 11:
			if (func_502(8, 255))
			{
				func_643(0);
			}
			else
			{
				func_644(1123680256 /* Float: 125f */);
			}
			break;
		default:
			func_644(1123680256 /* Float: 125f */);
			break;
	}
	if (fVar5 < 35f)
	{
		switch (func_197())
		{
			case 9:
			case 10:
			case 11:
				if (func_508(0, 35f, 1) > 1)
				{
					PED::_0x463803429297117C(iVar0, vVar2, 1, 0);
					func_642();
				}
				else
				{
					if (Local_1067.f_18.f_160 == 0)
					{
						func_645(&(Local_1067.f_18.f_160));
					}
					else if ((NETWORK::GET_TIME_DIFFERENCE(Local_1067.f_18.f_160, NETWORK::GET_NETWORK_TIME_ACCURATE()) + Local_1067.f_18.f_162) > 60000)
					{
						func_435(536870912);
					}
					iVar6 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::PARTICIPANT_ID()))
					{
						if (iVar6 == 0)
						{
							if (!func_502(8, 255))
							{
								func_628("NB_PHOTOGRAPHY_H_MORE_FS", 10000, 0, 0, 0, 1);
								func_646(8);
							}
							else if (!func_502(16, 255))
							{
								if (func_512(179) || (NETWORK::GET_TIME_DIFFERENCE(Local_1067.f_18.f_160, NETWORK::GET_NETWORK_TIME_ACCURATE()) + Local_1067.f_18.f_162) > 30000)
								{
									func_628("NB_PHOTOGRAPHY_H_RETURN_FS", 10000, 0, 0, 0, 1);
									func_646(16);
								}
							}
						}
					}
					if (func_508(0, 15f, 0) > 0)
					{
						func_647(100);
					}
				}
				break;
			default:
				PED::_0x463803429297117C(iVar0, vVar2, 1, 0);
				func_642();
				break;
		}
	}
	else
	{
		if (Local_1067.f_18.f_160 != 0)
		{
			Local_1067.f_18.f_162 = (Local_1067.f_18.f_162 + NETWORK::GET_TIME_DIFFERENCE(Local_1067.f_18.f_160, NETWORK::GET_NETWORK_TIME_ACCURATE()));
			Local_1067.f_18.f_160 = 0;
		}
		func_648(8);
		func_648(16);
	}
	func_649();
}

void func_354()
{
	int iVar0;

	func_650();
	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_644(1123680256 /* Float: 125f */);
		func_647(100);
		func_652(func_651());
	}
}

void func_355()
{
	int iVar0;
	int iVar1;
	float fVar2;

	func_644(1123680256 /* Float: 125f */);
	func_650();
	func_647(100);
	func_652(func_651());
	iVar0 = func_101(0);
	iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
	if (PLAYER::PLAYER_PED_ID() != iVar1)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar0, 1))
		{
			fVar2 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false));
			if (fVar2 < 25f)
			{
				if (func_653(7, Local_1067.f_4) || func_654(7, Local_1067.f_4))
				{
					if (!func_512(5))
					{
						if (!func_515(1))
						{
							func_516(0, 0, 5, 0);
						}
					}
				}
				else if (func_655(7, Local_1067.f_4))
				{
					if (!func_512(4))
					{
						if (!func_515(1))
						{
							func_516(0, 0, 4, 0);
						}
					}
				}
				else if (!func_512(3))
				{
					if (!func_515(1))
					{
						func_516(0, 0, 3, 0);
					}
				}
			}
		}
	}
}

void func_356()
{
	func_644(1123680256 /* Float: 125f */);
	func_650();
	func_647(100);
	func_652(-1);
}

void func_357()
{
	int iVar0;
	int iVar1;

	func_644(1123680256 /* Float: 125f */);
	func_650();
	iVar0 = func_101(0);
	iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false)) < 15f)
	{
		func_647(100);
		func_652(func_656());
	}
	else
	{
		func_647(100);
		func_652(func_657());
	}
}

void func_358()
{
	int iVar0;

	func_647(100);
	func_652(-1);
	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_644(1123680256 /* Float: 125f */);
		func_509(0, 65f, 5000, 0, 9, 10, 11, -1, -1, -1, 1, -1);
	}
}

void func_359()
{
	int iVar0;

	func_647(100);
	func_652(-1);
	if ((NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_20) && PLAYER::PLAYER_ID() == Local_13.f_7.f_20) && func_502(2, 255))
	{
		func_435(4);
		return;
	}
	if (func_518(2) > 1)
	{
		return;
	}
	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_644(1123680256 /* Float: 125f */);
		if (func_524(256))
		{
			func_509(0, 65f, 5000, 0, 14, 15, -1, -1, -1, -1, 1, -1);
		}
		else
		{
			func_509(0, 65f, 5000, 0, 12, 13, -1, -1, -1, -1, 1, -1);
		}
	}
}

void func_360()
{
	func_648(2);
}

void func_361()
{
	func_643(0);
	func_648(2);
}

void func_362()
{
	func_435(64);
	func_498(2048);
}

void func_363()
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	func_658();
	func_659();
	iVar0 = func_101(0);
	switch (func_197())
	{
		case 0:
			vVar1 = { func_326(0) };
			fVar4 = func_327(0);
			break;
		default:
			vVar1 = { func_326(3) };
			fVar4 = func_327(3);
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_459(iVar0, 713668775, 1, 0))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, vVar1, 1f, -1, 0.25f, false, fVar4);
		}
	}
}

void func_364()
{
	int iVar0;

	func_660();
	func_457(268435456);
	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_661())
		{
			func_662();
			func_435(2048);
		}
		if (Local_13.f_7.f_10 != 0)
		{
			if (!func_512(16))
			{
				if (!func_515(1))
				{
					if (func_512(16))
					{
						func_513(&(Local_13.f_7.f_10));
					}
					else
					{
						func_516(0, 0, 16, 0);
					}
				}
			}
			else
			{
				func_663();
			}
		}
		else
		{
			func_513(&(Local_13.f_7.f_10));
		}
		func_664(iVar0);
	}
}

void func_365()
{
	func_463(8);
	func_463(16);
}

void func_366()
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_665();
	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_658();
		if (!func_515(1))
		{
			if (func_520(Local_13.f_7.f_9, 1000))
			{
				iVar1 = func_525();
				if (!func_512(iVar1))
				{
					func_516(0, 0, iVar1, 0);
				}
			}
		}
		if (func_304(iVar0, 993674639))
		{
			iVar2 = func_315(func_666());
			if (iVar2 == 0 || (PED::_0x34D6AC1157C8226C(iVar0, iVar2) && TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar0, 0)))
			{
				func_498(268435456);
			}
		}
	}
}

void func_367()
{
	int iVar0;
	int iVar1;

	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_658();
		if (func_304(iVar0, 993674639))
		{
			iVar1 = func_315(func_666());
			if (iVar1 == 0 || (PED::_0x34D6AC1157C8226C(iVar0, iVar1) && TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar0, 0)))
			{
				func_498(268435456);
			}
		}
	}
}

void func_368()
{
	int iVar0;

	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_658();
		if (func_664(iVar0))
		{
			if (func_459(iVar0, -2017877118, 1, 0))
			{
				TASK::TASK_PLAY_ANIM(iVar0, func_311(0), func_543(0), 4f, -4f, -1, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_369()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;

	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!func_456(536870912))
		{
			func_658();
			if (!func_515(1))
			{
				func_509(0, 65f, 5000, 0, 83, 84, 85, -1, -1, -1, 0, -1);
			}
		}
		if (func_197() == 0)
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (func_304(iVar0, -2017877118))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_311(0), func_543(0), 1))
					{
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iVar0, func_311(0), func_543(0)) > 0.5f)
						{
							TASK::STOP_ANIM_TASK(iVar0, func_311(0), func_543(0), -4f);
						}
					}
				}
			}
		}
		if (!func_495())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (func_456(536870912))
				{
					if (Local_1067.f_18.f_161 == 0)
					{
						func_645(&(Local_1067.f_18.f_161));
					}
					if (func_520(Local_1067.f_18.f_161, 200))
					{
						PED::SET_PED_TO_RAGDOLL(iVar0, 2000, 5000, 0, false, false, false);
						vVar1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iVar0) };
						ENTITY::APPLY_FORCE_TO_ENTITY(iVar0, 3, -vVar1 * Vector(0.75f, 0.75f, 0.75f), 0f, 0f, 0f, PED::_0xC5303F460A40D21D(iVar0, 21030), false, false, true, false, true);
					}
				}
				else if (!PED::IS_PED_RAGDOLL(iVar0))
				{
					vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
					vVar7 = { func_326(1) };
					if (vVar4.z < vVar7.z || BUILTIN::VDIST(vVar4, Local_13.f_7.f_27) < (BUILTIN::VDIST(vVar4, vVar7) + 0.25f))
					{
						if (!func_512(86))
						{
							func_516(0, 0, 86, 1);
						}
						func_498(536870912);
					}
				}
			}
		}
	}
}

void func_370()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_667();
	func_668();
	if (!func_495())
	{
		func_498(8192);
	}
	else if (!func_456(8192))
	{
		iVar0 = func_101(2);
		iVar1 = func_101(0);
		iVar2 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (func_669())
				{
					if (func_459(iVar0, 518218985, 1, 0) && !func_304(iVar0, 518218985))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
						{
							TASK::TASK_SMART_FLEE_PED(iVar0, iVar1, 500f, -1, 0, 1077936128, 0);
							func_498(8192);
							func_498(256);
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !PED::IS_PED_DEAD_OR_DYING(iVar2, true))
						{
							TASK::TASK_SMART_FLEE_PED(iVar0, iVar2, 500f, -1, 0, 1077936128, 0);
							func_498(8192);
							func_498(256);
						}
					}
				}
				else if (func_304(iVar0, -1952598043) || func_304(iVar0, -1442466670))
				{
					func_498(8192);
					func_498(256);
				}
				else
				{
					iVar3 = func_315(4);
					if (iVar3 != 0)
					{
						TASK::_TASK_START_SCENARIO_IN_PLACE(iVar0, iVar3, 0, 0, 0, -1082130432, 0);
					}
					func_498(8192);
					func_498(256);
				}
			}
		}
	}
}

void func_371()
{
	int iVar0;

	func_667();
	func_463(64);
	func_166(0);
	iVar0 = func_101(0);
	func_670(iVar0);
}

void func_372()
{
	func_667();
	func_463(64);
	func_671();
}

void func_373()
{
	int iVar0;

	iVar0 = func_101(0);
	func_667();
	func_643(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_459(iVar0, 713668775, 1, 0))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, func_461(0), 1f, -1, 0.25f, false, func_672(0));
		}
	}
}

void func_374()
{
}

void func_375()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	int iVar7;
	int iVar8;

	func_435(64);
	func_463(4096);
	func_673(1123680256 /* Float: 125f */);
	iVar0 = func_101(0);
	iVar1 = func_101(2);
	iVar2 = func_101(1);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && ENTITY::DOES_ENTITY_EXIST(iVar1)) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (func_459(iVar0, 518218985, 1, 0))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, iVar1, 500f, -1, 0, 1077936128, 0);
				}
			}
			else if (func_459(iVar0, 242628503, 1, 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar1, true, false) };
				if (PED::IS_PED_USING_ANY_SCENARIO(iVar0))
				{
					PED::_0xEEED8FAFEC331A70(0, vVar4, 3);
				}
				else
				{
					TASK::TASK_STAND_STILL(0, 750);
					TASK::TASK_REACT(0, iVar1, vVar4, "DEFAULT_SHOCKED", 3f, 0f, 4);
				}
				TASK::TASK_SMART_FLEE_PED(0, iVar1, 500f, -1, 0, 2f, iVar2);
				func_674(iVar0, &iVar3, 0, 0, 1, 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_670(iVar0);
	}
	if (!func_164(268435456))
	{
		if (func_164(134217728))
		{
			func_103(268435456);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, Local_1067.f_18.f_44, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, Local_1067.f_18.f_44, 1609284507);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		if (func_587(2, -1))
		{
			func_498(16384);
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			if (func_459(iVar1, -1442466670, 1, 0))
			{
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iVar1, 100f, 0, 0);
			}
		}
	}
	else
	{
		func_498(128);
	}
	iVar7 = PLAYER::PLAYER_PED_ID();
	iVar8 = PLAYER::INT_TO_PLAYERINDEX(NETWORK::PARTICIPANT_ID_TO_INT());
	if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar8))
	{
		if (!func_164(262144))
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar7, false, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false)) < 30f)
			{
				func_103(262144);
			}
		}
	}
}

void func_376()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;

	iVar0 = func_101(2);
	iVar1 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (func_459(iVar0, 518218985, 1, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, iVar1, 500f, -1, 0, 1077936128, 0);
				}
				else
				{
					vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
					TASK::TASK_SMART_FLEE_COORD(iVar0, vVar2, 500f, -1, false, 1077936128);
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			if (NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_24))
			{
				iVar5 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_24);
				if (ENTITY::DOES_ENTITY_EXIST(iVar5))
				{
					if (func_459(iVar1, 2121492476, 1, 0))
					{
						TASK::TASK_REACT(iVar1, iVar5, 0f, 0f, 0f, "DEFAULT_SHOCKED", 2000f, 1000f, 4);
					}
				}
			}
			else if (func_449(4096, 255))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (func_459(iVar1, 2121492476, 1, 0))
					{
						TASK::TASK_REACT(iVar1, iVar0, 0f, 0f, 0f, "DEFAULT_SHOCKED", 2000f, 1000f, 4);
					}
				}
				else if (func_459(iVar1, 2121492476, 1, 0))
				{
					TASK::TASK_REACT(iVar1, 0, ENTITY::GET_ENTITY_COORDS(iVar1, false, false), "DEFAULT_SHOCKED", 2000f, 1000f, 4);
				}
			}
		}
	}
}

void func_377()
{
	int iVar0;

	if (!func_515(1))
	{
		func_516(0, 0, 99, 0);
	}
	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!func_304(iVar0, 2121492476))
		{
			func_675(-1);
			func_676();
		}
	}
}

void func_378()
{
	int iVar0;
	int iVar1;

	func_498(128);
	func_457(64);
	func_152(2);
	iVar0 = func_101(0);
	iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
	if (func_520(Local_13.f_7.f_10, 2000))
	{
		if (func_449(16384, 255))
		{
			func_677();
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			if (func_459(iVar0, 1227113341, 1, 0))
			{
				TASK::TASK_GO_TO_ENTITY(iVar0, iVar1, -1, 5f, 2f, 2f, 0);
			}
		}
	}
}

void func_379()
{
	int iVar0;

	func_152(2);
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(NETWORK::PARTICIPANT_ID_TO_INT());
	if (func_678(2, iVar0))
	{
		func_677();
	}
}

void func_380()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	func_166(0);
	func_673(1123680256 /* Float: 125f */);
	func_457(64);
	iVar0 = func_101(2);
	iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
		switch (func_197())
		{
			case 3:
			case 5:
				if (func_459(iVar0, 1120685857, 1, 0))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iVar0, vVar2, 100f, 0, 16);
				}
				break;
			default:
				if (func_459(iVar0, 518218985, 1, 0))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, iVar1, 100f, -1, 0, 1077936128, 0);
				}
				break;
		}
	}
}

void func_381()
{
	func_166(0);
	func_673(1123680256 /* Float: 125f */);
}

void func_382()
{
	int iVar0;
	int iVar1;

	func_673(1123680256 /* Float: 125f */);
	func_643(0);
	iVar0 = func_101(0);
	iVar1 = func_101(2);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (func_459(iVar0, 518218985, 1, 0))
			{
				TASK::TASK_SMART_FLEE_PED(iVar0, iVar1, 500f, -1, 0, 1077936128, 0);
			}
		}
	}
}

void func_383()
{
	func_435(64);
}

void func_384()
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;

	func_679(2, 10f, 10f, 1f);
	iVar0 = func_635(0, 0, 1);
	if (iVar0 == NETWORK::PARTICIPANT_ID())
	{
		vVar2 = { func_326(2) };
		iVar5 = func_514(&uVar1, vVar2, 10f, 0, 0);
		if (iVar5 < 1)
		{
			func_498(1);
		}
		else
		{
			func_457(1);
			return;
		}
	}
	else
	{
		func_457(1);
	}
	iVar6 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar6) && !PED::IS_PED_DEAD_OR_DYING(iVar6, true))
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar6, true, false), func_326(2)) > 5f)
		{
			if (func_459(iVar6, 713668775, 1, 0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar6, func_326(2), 1f, -1, 0.25f, false, func_327(2));
			}
		}
		else
		{
			func_680();
			func_681();
		}
		func_509(0, 65f, 5000, 0, 109, 110, 111, -1, -1, -1, 1, 112);
	}
}

void func_385()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;

	func_667();
	iVar0 = func_101(0);
	iVar2 = func_635(0, 0, 1);
	if (iVar2 == NETWORK::PARTICIPANT_ID())
	{
		vVar3 = { func_326(2) };
		iVar6 = func_514(&iVar1, vVar3, 10f, 0, 0);
		if (iVar6 < 1)
		{
			func_498(1);
			return;
		}
		else
		{
			func_457(1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		Local_1067.f_18.f_154 = iVar1;
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_1067.f_18.f_154))
		{
			AITRANSPORT::_0x67F7CEAC2391E114(Local_1067.f_18.f_154, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1067.f_18.f_154) && !PED::IS_PED_DEAD_OR_DYING(Local_1067.f_18.f_154, true))
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Local_1067.f_18.f_154, true, false), func_326(2)) < 20f)
			{
				if (PED::_0xB676EFDA03DADA52(Local_1067.f_18.f_154, 1) == 0)
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_1067.f_18.f_154))
					{
						AITRANSPORT::_0x67F7CEAC2391E114(Local_1067.f_18.f_154, 1);
					}
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						if (func_459(iVar0, 1868526510, 1, 0))
						{
							TASK::TASK_MOUNT_ANIMAL(iVar0, Local_1067.f_18.f_154, -1, -1, 1f, 1, 0, 0);
							return;
						}
					}
				}
				else
				{
					func_680();
					func_681();
					func_509(0, 65f, 5000, 0, 113, 114, 115, -1, -1, -1, 1, 116);
				}
			}
		}
	}
}

void func_386()
{
	int iVar0;
	float fVar1;
	int iVar2;

	func_663();
	func_667();
	if (func_661())
	{
		func_662();
		func_435(2048);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1067.f_18.f_154) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_1067.f_18.f_154)) && PED::IS_PED_DEAD_OR_DYING(Local_1067.f_18.f_154, true))
	{
		func_498(1);
		return;
	}
	func_660();
	iVar0 = func_101(0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		fVar1 = func_682(0, func_326(2));
		iVar2 = PED::GET_MOUNT(iVar0);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && TASK::_0xAC5045AB7F1A34FD(iVar2)) && fVar1 > (10f + 5f))
		{
			func_435(536870912);
		}
		else if (fVar1 > 6f)
		{
			if (func_459(iVar0, 713668775, 1, 0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, func_326(2), 1.5f, -1, 0.5f, false, 40000f);
			}
		}
		else
		{
			func_683(-1);
		}
	}
}

void func_387()
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;

	func_658();
	func_659();
	iVar0 = func_635(0, 0, 1);
	if (iVar0 == NETWORK::PARTICIPANT_ID())
	{
		vVar2 = { func_326(2) };
		iVar5 = func_514(&uVar1, vVar2, (10f + 2f), 0, 0);
		if (iVar5 < 1)
		{
			func_498(1);
			return;
		}
	}
	iVar6 = func_101(0);
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1067.f_18.f_154) && !PED::IS_PED_DEAD_OR_DYING(Local_1067.f_18.f_154, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_1067.f_18.f_154))
	{
		AITRANSPORT::_0x67F7CEAC2391E114(Local_1067.f_18.f_154, 1);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(iVar6) && !PED::IS_PED_DEAD_OR_DYING(iVar6, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar6))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1067.f_18.f_154) && !PED::IS_PED_DEAD_OR_DYING(Local_1067.f_18.f_154, true))
		{
			fVar7 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Local_1067.f_18.f_154, false, false), func_326(2));
			if (fVar7 > 20f)
			{
				func_498(1);
				return;
			}
			iVar8 = PED::_0xB676EFDA03DADA52(Local_1067.f_18.f_154, 1);
			if (iVar8 != 0 && iVar8 != iVar6)
			{
				func_498(1);
				return;
			}
			if (func_459(iVar6, 1868526510, 1, 0))
			{
				TASK::TASK_MOUNT_ANIMAL(iVar6, Local_1067.f_18.f_154, -1, -1, 1f, 1, 0, 0);
			}
		}
		else
		{
			func_498(1);
		}
	}
}

void func_388()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_101(0);
	iVar1 = PED::GET_MOUNT(iVar0);
	iVar2 = PLAYER::PLAYER_ID();
	iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
	if (((((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && ENTITY::DOES_ENTITY_EXIST(iVar1)) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true)) && ENTITY::DOES_ENTITY_EXIST(iVar3)) && !PED::IS_PED_DEAD_OR_DYING(iVar3, true))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			if (func_459(iVar1, 1041577989, 1, 0))
			{
				TASK::TASK_HORSE_ACTION(iVar1, 2, 0, 0);
				func_516(0, 0, 117, 0);
			}
		}
	}
}

void func_389()
{
}

void func_390()
{
}

void func_391()
{
	int iVar0;

	func_463(64);
	if (!func_434(4096, 255))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1067.f_18.f_154) && !PED::IS_PED_DEAD_OR_DYING(Local_1067.f_18.f_154, true))
		{
			iVar0 = PLAYER::PLAYER_PED_ID();
			if (PED::_0xF103823FFE72BB49(Local_1067.f_18.f_154) == iVar0 || (NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_25) && Local_13.f_7.f_25 == PLAYER::PLAYER_ID()))
			{
				func_435(4096);
			}
		}
	}
}

void func_392()
{
	int iVar0;

	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (PED::IS_PED_ON_MOUNT(iVar0))
		{
			if (func_459(iVar0, 501393341, 1, 0))
			{
				TASK::TASK_DISMOUNT_ANIMAL(iVar0, 1, 0, 0, 0, 0);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1067.f_18.f_154))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_1067.f_18.f_154))
		{
			AITRANSPORT::_0x67F7CEAC2391E114(Local_1067.f_18.f_154, 0);
		}
	}
}

void func_393()
{
	int iVar0;

	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_459(iVar0, 713668775, 1, 0))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, func_461(0), 1f, -1, 0.25f, false, func_672(0));
		}
	}
}

void func_394()
{
	int iVar0;

	iVar0 = func_101(0);
	if (func_459(iVar0, 923520851, 1, 0))
	{
		TASK::TASK_WANDER_IN_AREA(iVar0, func_461(0), 5f, 10f, 20f, 0);
	}
}

void func_395()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_498(2);
	func_667();
	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		iVar1 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0);
		if (iVar1 != 1269650476)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, 1269650476);
		}
		if (!PED::GET_PED_CONFIG_FLAG(iVar0, 6, false))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 6, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			func_670(iVar0);
		}
		if (PED::IS_PED_ON_MOUNT(iVar0))
		{
			if (func_459(iVar0, 518218985, 1, 0))
			{
				if (NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_20))
				{
					iVar2 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						TASK::TASK_SMART_FLEE_PED(iVar0, iVar2, 500f, -1, 0, 2f, 0);
					}
					else
					{
						TASK::TASK_SMART_FLEE_COORD(iVar0, func_326(2), 500f, -1, 272, 2f);
					}
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(iVar0, func_326(2), 500f, -1, 272, 2f);
				}
			}
		}
	}
	if (!func_507(33554432))
	{
		iVar3 = func_101(1);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar3) && !PED::IS_PED_DEAD_OR_DYING(iVar3, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar3))
		{
			func_435(33554432);
			PED::SET_PED_CONFIG_FLAG(iVar3, 467, true);
		}
	}
}

void func_396()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;

	func_667();
	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		iVar1 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0);
		if (iVar1 != 1269650476)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, 1269650476);
		}
		if (!PED::GET_PED_CONFIG_FLAG(iVar0, 6, false))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 6, true);
		}
		if (func_459(iVar0, 518218985, 1, 0))
		{
			if (NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_20))
			{
				iVar2 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, iVar2, 500f, -1, 0, 1077936128, 0);
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(iVar0, func_326(2), 500f, -1, 17039632, 1077936128);
				}
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(iVar0, func_326(2), 500f, -1, 17039632, 1077936128);
			}
		}
		iVar3 = PED::GET_MOUNT(iVar0);
		iVar4 = PLAYER::PLAYER_ID();
		iVar5 = PLAYER::GET_PLAYER_PED(iVar4);
		if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !PED::IS_PED_DEAD_OR_DYING(iVar3, true))
		{
			if (!TASK::_0xAC5045AB7F1A34FD(iVar3))
			{
				iVar6 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_13.f_7.f_20);
				fVar7 = 999f;
				if (iVar6 != 255)
				{
					fVar7 = func_503(0, iVar6, 1);
				}
				if (func_458(0) && fVar7 < 25f)
				{
					func_509(0, 65f, 4000, 0, 125, 126, 127, 118, 119, 120, 0, -1);
				}
				else if (func_512(118) && fVar7 < 15f)
				{
					func_509(0, 65f, 4000, 0, 121, 122, 123, 118, 119, 120, 0, -1);
				}
				else
				{
					func_509(0, 65f, 4000, 0, 118, 119, 120, -1, -1, -1, 0, -1);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar5) && !PED::IS_PED_DEAD_OR_DYING(iVar5, true))
			{
				if (TASK::_0xEFC4303DDC6E60D3(iVar5) && TASK::_0xED1F514AF4732258(iVar5) == iVar3)
				{
					TASK::_0xED27560703F37258(iVar5);
				}
				if (PLAYER::_0xF49F14462F0AE27C(iVar4) == iVar3 || Local_13.f_7.f_25 == iVar4)
				{
					if (func_684(iVar5))
					{
						if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, false, false), ENTITY::GET_ENTITY_COORDS(iVar5, false, false)) < 50f)
						{
							func_498(4);
						}
					}
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar3))
				{
					if (func_456(4))
					{
						if (func_459(iVar3, 1041577989, 1, 0))
						{
							TASK::TASK_HORSE_ACTION(iVar3, 2, 0, 0);
							func_516(0, 0, 124, 0);
						}
					}
				}
			}
		}
	}
}

void func_397()
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_685();
	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		iVar1 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0);
		if (iVar1 != 1269650476)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, 1269650476);
		}
		if (!PED::GET_PED_CONFIG_FLAG(iVar0, 6, false))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 6, true);
		}
		if (func_459(iVar0, 518218985, 1, 0))
		{
			if (NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_20))
			{
				iVar2 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, iVar2, 500f, -1, 0, 1077936128, 0);
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(iVar0, func_326(2), 500f, -1, 272, 1077936128);
				}
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(iVar0, func_326(2), 500f, -1, 272, 1077936128);
			}
		}
	}
}

void func_398()
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_685();
	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		iVar1 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0);
		if (iVar1 != 1269650476)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, 1269650476);
		}
		if (!PED::GET_PED_CONFIG_FLAG(iVar0, 6, false))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 6, true);
		}
		if (func_459(iVar0, 518218985, 1, 0))
		{
			if (NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_20))
			{
				iVar2 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, iVar2, 500f, -1, 0, 1077936128, 0);
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(iVar0, func_326(2), 500f, -1, 272, 1077936128);
				}
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(iVar0, func_326(2), 500f, -1, 272, 1077936128);
			}
		}
		if (PED::_IS_PED_HOGTIED(iVar0) || PED::_IS_PED_LASSOED(iVar0))
		{
			func_509(0, 65f, 4000, 3, 79, 80, 81, 74, 75, 76, 1, -1);
		}
		else if (func_512(79) && !func_512(82))
		{
			func_516(0, 3, 82, 0);
		}
		else
		{
			func_509(0, 65f, 4000, 3, 74, 75, 76, -1, -1, -1, !func_512(79), -1);
		}
	}
}

void func_399()
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = func_101(0);
	iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		fVar2 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false));
		func_644(1123680256 /* Float: 125f */);
		if (fVar2 < 35f)
		{
			func_642();
		}
		func_509(0, 65f, 5000, 0, 0, 1, 2, -1, -1, -1, 1, -1);
	}
}

void func_400()
{
	int iVar0;

	func_686(1);
	if (!func_687("BOOL_INITIAL"))
	{
		func_688("BOOL_INITIAL");
	}
	if (func_452())
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(Local_1067.f_18.f_244, "REEL_SLOW", 1))
		{
			func_498(262144);
		}
	}
	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_670(iVar0);
	}
}

void func_401()
{
	if (!func_687("BOOL_REEL_SLOW"))
	{
		func_688("BOOL_REEL_SLOW");
	}
	if (func_452())
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(Local_1067.f_18.f_244, "REEL_FAST", 1))
		{
			func_498(524288);
		}
	}
}

void func_402()
{
	func_516(0, 0, 129, 0);
	if (func_686(1))
	{
		if (func_512(129))
		{
			func_689(1);
		}
	}
}

void func_403()
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = func_101(0);
	iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!func_512(130))
		{
			func_516(0, 0, 130, 0);
		}
		if (!func_449(65536, 255))
		{
			fVar2 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false));
			if (fVar2 < 10f)
			{
				func_498(65536);
			}
		}
	}
	if (func_452())
	{
		if (func_535(2))
		{
			if (!func_449(1048576, 255))
			{
				func_498(1048576);
			}
		}
		else if (ANIMSCENE::_0x8D81E7824B7753F7(Local_1067.f_18.f_244, "Idle", 1))
		{
			if (func_690() > 0.45f)
			{
				if (func_686(2))
				{
					func_689(2);
				}
			}
		}
	}
	if (func_520(Local_13.f_7.f_10, 120000))
	{
		func_498(131072);
	}
}

void func_404()
{
	int iVar0;

	func_647(100);
	func_652(-1);
	if ((func_512(3) || func_512(5)) || func_512(4))
	{
		func_509(0, 65f, 5000, 0, 9, 10, 11, -1, -1, -1, 1, -1);
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
	if (PLAYER::PLAYER_PED_ID() != iVar0)
	{
		return;
	}
	if (func_653(7, Local_1067.f_4) || func_654(7, Local_1067.f_4))
	{
		if (!func_512(5))
		{
			if (!func_515(1))
			{
				func_516(0, 0, 5, 0);
			}
		}
	}
	else if (func_655(7, Local_1067.f_4))
	{
		if (!func_512(4))
		{
			if (!func_515(1))
			{
				func_516(0, 0, 4, 0);
			}
		}
	}
	else if (!func_512(3))
	{
		if (!func_515(1))
		{
			func_516(0, 0, 3, 0);
		}
	}
}

void func_405()
{
	func_435(64);
}

void func_406()
{
	func_643(0);
}

void func_407()
{
}

void func_408()
{
	func_660();
	func_683(-1);
	func_663();
	if (func_661())
	{
		func_662();
		func_435(2048);
	}
}

void func_409()
{
	func_689(3);
}

void func_410()
{
	int iVar0;
	vector3 vVar1;

	if (func_507(2048))
	{
		func_540();
		func_691(1);
		func_692();
	}
	if (func_524(512))
	{
		if (func_434(128, 255))
		{
			if (!func_512(73) && !func_512(72))
			{
				iVar0 = func_101(0);
				vVar1 = { func_461(0) };
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
				{
					vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
				}
				if (func_517(vVar1, 35f) > 1)
				{
					func_516(0, 0, 73, 0);
				}
				else
				{
					func_516(0, 0, 72, 0);
				}
			}
		}
		else if (func_636(NETWORK::PARTICIPANT_ID(), 0, 1) < 35f)
		{
			func_435(128);
		}
	}
	func_693();
}

void func_411()
{
	func_463(64);
}

void func_412()
{
}

void func_413()
{
	func_435(64);
}

void func_414()
{
	int iVar0;

	func_658();
	func_659();
	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), func_326(5)) > 4f)
		{
			if (func_459(iVar0, 713668775, 1, 0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, func_326(5), 1f, -1, 0.25f, false, func_327(5));
			}
		}
	}
}

void func_415()
{
}

void func_416()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;

	if (func_661())
	{
		func_662();
		func_435(2048);
	}
	func_660();
	func_663();
	iVar0 = func_101(0);
	iVar9 = 0;
	switch (func_197())
	{
		case 11:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
			{
				if (!func_449(4194304, 255))
				{
					PED::SET_PED_CONFIG_FLAG(iVar0, 169, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 340, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 137, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 26, true);
					func_498(4194304);
				}
				if (!func_449(2097152, 255))
				{
					AUDIO::STOP_PED_SPEAKING(iVar0, true);
					func_498(2097152);
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					if (!func_456(8388608))
					{
						PED::SET_PED_CONFIG_FLAG(iVar0, 6, true);
						func_498(8388608);
					}
				}
			}
			func_683(-1);
			if (Local_13.f_7.f_14 != 0)
			{
				iVar9 = NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_14, NETWORK::GET_NETWORK_TIME_ACCURATE());
			}
			if ((iVar9 + Local_13.f_7.f_17) > 15000)
			{
				if (NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_20) && Local_13.f_7.f_20 == NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()))
				{
					func_435(67108864);
				}
			}
			break;
		case 9:
			if (func_449(67108864, 255))
			{
				if (func_503(0, -1, 1) > (3f + 1f))
				{
					func_694(&(Local_1067.f_377), 500);
					func_474(&(Local_1067.f_377), 4000);
					func_457(67108864);
				}
			}
			else if (func_503(0, -1, 1) < 3.5f)
			{
				func_694(&(Local_1067.f_377), 8000);
				func_474(&(Local_1067.f_377), 8000);
				func_498(67108864);
			}
			if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)) && !func_456(4194304))
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 26, true);
				func_498(4194304);
			}
			if (WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar1, false, 0, false))
			{
				if (iVar1 == joaat("weapon_unarmed"))
				{
					if (func_459(iVar0, 716706914, 1, 0))
					{
						iVar2 = WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false);
						WEAPON::SET_CURRENT_PED_WEAPON(iVar0, iVar2, false, 0, false, false);
						TASK::TASK_SWAP_WEAPON(iVar0, 1, 1, 0, 0);
					}
				}
				else if (!func_449(33554432, 255))
				{
					if (func_664(iVar0))
					{
						func_498(33554432);
					}
				}
				else if (func_459(iVar0, 1237250926, 1, 0))
				{
					vVar6 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iVar0) };
					func_527(vVar6);
					vVar6 = { vVar6 * Vector(25f, 25f, 25f) };
					vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) + vVar6 };
					vVar3 = { vVar3 + Vector(25f, 0f, 0f) };
					TASK::TASK_AIM_GUN_AT_COORD(iVar0, vVar3, -1, false, true);
				}
			}
			break;
		case 10:
			if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)) && !func_456(4194304))
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 26, true);
				func_498(4194304);
			}
			func_695(Local_13.f_7.f_21, 16777216, 9, 10);
			break;
	}
}

void func_417()
{
	func_694(&(Local_1067.f_377), 500);
	func_474(&(Local_1067.f_377), 1000);
}

void func_418()
{
	int iVar0;

	if (func_512(173) && !func_515(1))
	{
		if (NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_20) && Local_13.f_7.f_20 == NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()))
		{
			func_435(67108864);
		}
	}
	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (PED::_IS_PED_LASSOED(iVar0) || PED::_IS_PED_HOGTIED(iVar0))
		{
			func_509(0, 65f, 5000, 0, 168, 169, 170, 171, 172, 173, 1, -1);
		}
	}
}

void func_419()
{
	int iVar0;

	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_459(iVar0, 713668775, 1, 0))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, func_461(0), 1f, -1, 0.25f, false, func_672(0));
		}
	}
}

void func_420()
{
	int iVar0;

	func_463(64);
	iVar0 = func_101(0);
	if (!func_434(4096, 255) && !func_434(2048, 255))
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false)) < 3f)
		{
			func_435(4096);
		}
	}
}

void func_421()
{
	func_696();
}

void func_422()
{
	int iVar0;
	vector3 vVar1;

	func_463(4096);
	func_463(2048);
	iVar0 = func_101(0);
	vVar1 = { func_461(0) };
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
	}
	if (func_636(NETWORK::PARTICIPANT_ID(), 0, 1) < 35f)
	{
		func_435(128);
	}
	if (func_524(32768))
	{
		func_516(0, 0, 174, 0);
	}
	else if (func_524(65536))
	{
		func_516(0, 0, 175, 0);
	}
	else if (func_517(vVar1, 35f) > 1)
	{
		func_516(0, 0, 73, 0);
	}
	else
	{
		func_516(0, 0, 72, 0);
	}
}

void func_423()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_667();
	func_696();
	func_697();
	func_698();
	func_699();
	func_671();
	iVar0 = func_101(0);
	iVar1 = func_101(1);
	func_643(0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		iVar2 = func_197();
		if (iVar2 == 10)
		{
			if (func_456(16777216) && func_304(iVar0, 242628503))
			{
				func_435(2097152);
				TASK::TASK_PLAY_ANIM(iVar0, func_311(11), func_543(11), 4f, -4f, 2000, 24, 0, 0, 0, 0, 0, 0);
			}
		}
		else if (iVar2 == 9)
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar3, false, 0, false))
			{
				if (iVar3 != joaat("weapon_unarmed"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(iVar0, joaat("weapon_unarmed"), false, 0, false, false);
					TASK::TASK_SWAP_WEAPON(iVar0, 1, 1, 0, 0);
				}
			}
		}
	}
	if (func_459(iVar0, 1868526510, 1, 0) && ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		TASK::TASK_MOUNT_ANIMAL(iVar0, iVar1, -1, -1, 1f, 1033, 0, 0);
	}
}

void func_424()
{
	int iVar0;

	func_696();
	func_697();
	func_698();
	func_699();
	func_671();
	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (func_459(iVar0, -1665583462, 1, 0))
			{
				TASK::_TASK_MOVE_IN_TRAFFIC(iVar0, 1f, 6152, 0);
			}
			if (func_456(8388608))
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 6, false);
				func_457(8388608);
			}
			if (func_456(4194304))
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 169, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 340, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 137, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 26, false);
				func_457(4194304);
			}
		}
	}
}

void func_425()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	func_170();
	func_667();
	func_643(0);
	func_671();
	func_700();
	func_167();
	if (func_524(262144) && !func_585(0, -1))
	{
		func_697();
	}
	if (func_449(2, 255))
	{
		if (func_585(0, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			func_701();
		}
	}
	iVar0 = func_101(0);
	iVar1 = func_101(1);
	iVar2 = func_197();
	bVar3 = true;
	bVar4 = false;
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true)) && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iVar0, true))
		{
			if (TASK::_0xEFC4303DDC6E60D3(PLAYER::PLAYER_PED_ID()) && TASK::_0xED1F514AF4732258(PLAYER::PLAYER_PED_ID()) == iVar1)
			{
				TASK::_0xED27560703F37258(PLAYER::PLAYER_PED_ID());
			}
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (!func_434(2097152, 255))
			{
				switch (iVar2)
				{
					case 10:
						if (func_456(16777216))
						{
							TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
						}
						break;
					case 9:
						if (WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar5, false, 0, false))
						{
							if (iVar5 != joaat("weapon_unarmed"))
							{
								WEAPON::_0xCEF4C65DE502D367(iVar0, 0, 0, 1, 0);
							}
						}
						break;
				}
				func_435(2097152);
			}
			if (!func_449(2097152, 255))
			{
				if (PED::_IS_PED_HOGTIED(iVar0))
				{
					AUDIO::STOP_PED_SPEAKING(iVar0, true);
					func_498(2097152);
				}
			}
			if (func_456(8388608))
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 6, false);
				func_457(8388608);
			}
			if (func_456(4194304))
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 169, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 340, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 137, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 26, false);
				func_457(4194304);
			}
			if (((!ENTITY::DOES_ENTITY_EXIST(iVar1) || PED::IS_PED_DEAD_OR_DYING(iVar1, true)) || PED::GET_MOUNT(iVar0) == iVar1) || BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), ENTITY::GET_ENTITY_COORDS(iVar1, false, false)) > 50f)
			{
				bVar3 = false;
				iVar1 = 0;
			}
			if (iVar2 == 8)
			{
				if (func_452())
				{
					if (!ANIMSCENE::_0xB89FCFF19DAFFF28(Local_1067.f_18.f_244, func_453(0)))
					{
						bVar4 = true;
					}
				}
			}
			if (func_459(iVar0, 242628503, 1, 0) || !func_449(8, 255))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar6);
				if (bVar4)
				{
					TASK::TASK_PLAY_ANIM(0, func_311(11), func_543(11), 4f, -8f, 300, 24, 0, 0, 0, 0, 0, 0);
				}
				if (bVar3)
				{
					TASK::TASK_MOUNT_ANIMAL(0, iVar1, -1, -1, 2f, 8, 0, 0);
				}
				TASK::_TASK_SMART_FLEE_STYLE_COORD(0, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), 3, 0, -1f, -1, iVar1);
				func_674(iVar0, &iVar6, 0, 0, 1, 1);
				func_498(8);
				PED::SET_PED_KEEP_TASK(iVar0, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			}
		}
	}
	iVar7 = func_101(2);
	if (func_495())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar7) && !PED::IS_PED_DEAD_OR_DYING(iVar7, true))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar7))
			{
				if (!func_458(2))
				{
					if (func_459(iVar7, 518218985, 1, 0))
					{
						TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar7, ENTITY::GET_ENTITY_COORDS(iVar7, false, false), 3, 0, -1f, -1, 0);
						PED::SET_PED_KEEP_TASK(iVar7, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar7, false);
					}
				}
			}
		}
	}
}

void func_426()
{
}

void func_427()
{
	func_691(0);
}

void func_428()
{
	int iVar0;

	func_691(0);
	iVar0 = func_101(0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		if (PED::IS_PED_ON_MOUNT(iVar0))
		{
			if (func_459(iVar0, 501393341, 1, 0))
			{
				TASK::TASK_DISMOUNT_ANIMAL(iVar0, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_429()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_691(0);
	iVar0 = func_101(0);
	iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_22);
	if ((((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)) && ENTITY::DOES_ENTITY_EXIST(iVar1)) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		if (!func_304(iVar0, 501393341))
		{
			iVar2 = func_197();
			if (iVar2 == 10)
			{
				if (func_456(16777216) && func_304(iVar0, 242628503))
				{
					func_435(2097152);
					TASK::TASK_PLAY_ANIM(iVar0, func_311(11), func_543(11), 4f, -4f, 2000, 24, 0, 0, 0, 0, 0, 0);
				}
			}
			else if (iVar2 == 9)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar3, false, 0, false))
				{
					if (iVar3 != joaat("weapon_unarmed"))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(iVar0, joaat("weapon_unarmed"), false, 0, false, false);
						TASK::TASK_SWAP_WEAPON(iVar0, 1, 1, 0, 0);
					}
				}
			}
			if (func_459(iVar0, 1227113341, 1, 0))
			{
				TASK::TASK_GO_TO_ENTITY(iVar0, iVar1, -1, (2.5f / 2f), 1f, 2f, 0);
			}
		}
	}
}

void func_430()
{
	int iVar0;
	int iVar1;

	iVar0 = func_101(0);
	iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_22);
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::PARTICIPANT_ID()) && NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()) == Local_13.f_7.f_22)
	{
		func_702(0);
		if (func_692())
		{
			if (func_459(iVar1, -1162159953, 1, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
				{
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iVar1, func_311(7), func_543(7), iVar0, -1, 4f, -2f, 8, 0, 0, 0, -1082130432, 0, 0, -1082130432);
				}
			}
		}
	}
	if ((((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)) && ENTITY::DOES_ENTITY_EXIST(iVar1)) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		if (func_459(iVar0, -1162159953, 1, 0))
		{
			func_435(4194304);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar0, iVar1, 0, -1082130432, -1082130432, -1082130432);
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iVar0, func_311(8), func_543(8), iVar1, -1, 4f, -2f, 8, 0, 0, 0, -1082130432, 0, 0, -1082130432);
		}
	}
}

void func_431()
{
}

void func_432()
{
	if (!func_456(64))
	{
		func_435(536870912);
	}
	func_170();
	func_435(16777216);
}

void func_433()
{
	if (!func_434(268435456, 255))
	{
		if (!func_458(0))
		{
			if (func_434(2048, 255) || func_434(4096, 255))
			{
				func_703(7, Local_1067.f_4);
				func_704(7, Local_1067.f_4);
				func_435(268435456);
			}
		}
	}
	func_170();
	func_435(16777216);
}

bool func_434(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return func_161((Local_74[iParam1 /*31*/])->f_1, iParam0);
}

void func_435(int iParam0)
{
	func_206(&((Local_74[NETWORK::PARTICIPANT_ID_TO_INT() /*31*/])->f_1), iParam0);
}

void func_436()
{
	if (func_456(2))
	{
		if (func_705(0))
		{
			func_706();
		}
	}
}

void func_437()
{
}

bool func_438(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 60)
	{
		return false;
	}
	if (((*Global_1949759)[iParam0 /*23*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3);
}

void func_439(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_438(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_707(*uParam0);
	if (((*Global_1949759)[iVar0 /*23*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_708(iVar0);
	*uParam0 = 0;
}

void func_440(int iParam0, int iParam1)
{
	func_305(&((Local_1067.f_520.f_10[iParam0 /*29*/])->f_3), iParam1);
}

int func_441(var uParam0, var uParam1)
{
	return uParam0;
}

int func_442(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1690863991;
		case 3:
			return 1286170048;
		case 4:
			return -342492333;
		case 5:
			return 1140089012;
		case 8:
			return 634321112;
		case 7:
			return -2079273178;
		case 6:
			return -147846054;
		default:
			break;
	}
	return 0;
}

int func_443(struct<2> Param0)
{
	return func_709(Param0);
}

void func_444(struct<2> Param0, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar2 = -1;
	iVar3 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (iVar3 == 0)
	{
		return;
	}
	switch (func_441(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_711(func_710(Param0));
			iVar5 = func_712(iVar4);
			if (!func_713(iVar5, 0))
			{
				return;
			}
			break;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (&Global_1100950->f_33[iVar1 /*16*/] == iVar3)
		{
			iVar2 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar2 == -1)
	{
		return;
	}
	iVar0 = (Global_1100950->f_33[iVar2 /*16*/])->f_3.f_1;
	if (iVar0 == -1)
	{
		return;
	}
	uParam2->f_2 = Global_1111121[iVar0 /*42*/];
}

int func_445(int iParam0, int iParam1)
{
	int iVar0;
	struct<11> Var1;
	int iVar18;
	int iVar19;

	Var1.f_10 = 1106247680;
	iVar19 = 1;
	while (iVar19 <= 23)
	{
		iVar18 = iVar19;
		if (iVar18 == iParam0)
		{
			return (iVar0 + iParam1);
		}
		else
		{
			func_32(&Var1, iVar18, -1, -1, 255);
			iVar0 = (iVar0 + Var1);
		}
		iVar19++;
	}
	return -1;
}

void func_446(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 3;
	Var0.f_5 = iParam0;
	func_714(&Var0);
}

int func_447(int iParam0, int iParam1)
{
	if (!func_715(iParam0, iParam1))
	{
		return -1;
	}
	return (iParam1 + (8 + func_716(iParam0)));
}

void func_448(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_554(iParam1, 896190569) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(iVar2, iParam0))
	{
		return;
	}
	MISC::CLEAR_BIT(&iVar2, iParam0);
	if (!STATS::STAT_ID_SET_INT(&Var0, iVar2, true))
	{
	}
}

bool func_449(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return func_161((Local_74[iParam1 /*31*/])->f_1.f_1, iParam0);
}

void func_450(int iParam0, bool bParam1, bool bParam2)
{
	struct<7> Var0;
	var uVar7;
	int iVar8;

	if (func_28() != 0)
	{
		return;
	}
	if (func_717())
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (!bParam1)
	{
		if (!&Global_1132968->f_4641.f_2[func_718(iParam0, 1) /*4*/])
		{
			return;
		}
	}
	(Global_1132968->f_4641.f_2[func_718(iParam0, 1) /*4*/])->f_2++;
	if (!bParam2)
	{
		return;
	}
	if (Global_1275573->f_16 != &Global_1275573)
	{
		return;
	}
	Var0.f_5 = -1;
	Var0.f_4 = 0;
	Var0.f_5 = iParam0;
	Var0.f_6 = bParam1;
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 < 32)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1275573->f_154[iVar8])))
		{
		}
		else if (!_NAMESPACE26::_0x9BE7DCB22D32CCBE(Global_1275573->f_15, &(Global_1275573->f_154[iVar8])))
		{
		}
		else if (&Global_1275573->f_154[iVar8] == Global_1275573->f_10)
		{
		}
		else
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar7, &(Global_1275573->f_154[iVar8]));
		}
		iVar8++;
	}
	func_719(&Var0, uVar7);
}

void func_451(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_447(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_720(iVar0, iParam0);
}

int func_452()
{
	if (ANIMSCENE::_0x25557E324489393C(Local_1067.f_18.f_244) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_1067.f_18.f_244, 0))
	{
		return 1;
	}
	return 0;
}

char* func_453(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Female";
		case 2:
			return "Fish";
		default:
			break;
	}
	return "Female";
}

int func_454(int iParam0)
{
	return func_721(0, iParam0);
}

char* func_455(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "POLE";
		case 1:
			return "BOBBER";
		case 2:
			return "RAG";
		default:
			break;
	}
	return "POLE";
}

bool func_456(int iParam0)
{
	return func_161(Local_1067.f_18.f_251, iParam0);
}

void func_457(int iParam0)
{
	func_305(&((Local_74[NETWORK::PARTICIPANT_ID_TO_INT() /*31*/])->f_1.f_1), iParam0);
}

bool func_458(int iParam0)
{
	return MISC::IS_BIT_SET(Local_1067.f_377.f_63, iParam0);
}

int func_459(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam2 && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return 0;
	}
	if (!bParam3 && func_304(iParam0, iParam1))
	{
		return 0;
	}
	if (iParam1 == -1794415470 && PED::IS_PED_BEING_JACKED(iParam0))
	{
		return 0;
	}
	return 1;
}

float func_460(int iParam0, int iParam1)
{
	return BUILTIN::VDIST(func_722(iParam0), func_722(iParam1));
}

Vector3 func_461(int iParam0)
{
	return (Local_1067.f_271.f_7[iParam0 /*11*/])->f_6;
}

void func_462(int iParam0)
{
	func_305(&(Local_1067.f_18.f_10), iParam0);
}

void func_463(int iParam0)
{
	func_305(&((Local_74[NETWORK::PARTICIPANT_ID_TO_INT() /*31*/])->f_1), iParam0);
}

int func_464(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 3;
		case 2:
			return 35;
		case 3:
			return 55;
		default:
			break;
	}
	return 0;
}

int func_465(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			if (&Global_1186267->f_3[iParam0] * 2 <= 32)
			{
				return &Global_1186267->f_3[iParam0] * 2;
			}
			return 32;
		case 2:
			if (&Global_1186267->f_3[iParam0] * 2 <= 20)
			{
				return &Global_1186267->f_3[iParam0] * 2;
			}
			return 20;
		case 3:
			if (&Global_1186267->f_3[iParam0] * 2 <= 16)
			{
				return &Global_1186267->f_3[iParam0] * 2;
			}
			return 16;
		default:
			break;
	}
	return 0;
}

void func_466(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	if (iParam2 < iParam1)
	{
		iParam2 = (uParam0->f_2 - 1);
	}
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		func_77(uParam0, iVar0);
		iVar0++;
	}
}

void func_467(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_468(var uParam0)
{
	func_190(uParam0, 0);
	func_191(uParam0, 0);
	func_192(uParam0, 0);
	func_194(uParam0, 0);
	func_196(uParam0, 1, 1, 1);
}

void func_469(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_305(&(uParam0->f_1), 4);
	}
	else
	{
		func_206(&(uParam0->f_1), 4);
	}
}

void func_470(var uParam0)
{
	func_724(uParam0, (func_723(uParam0) - 6f));
	func_725(uParam0, 1);
}

void func_471(var uParam0)
{
	func_726(uParam0, 1);
	func_727(uParam0, 1);
	func_728(uParam0, 1);
}

void func_472(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_305(&(uParam0->f_1), 131072);
	}
	else
	{
		func_206(&(uParam0->f_1), 131072);
	}
}

void func_473(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_206(uParam0, 4);
	}
	else
	{
		func_305(uParam0, 4);
	}
}

void func_474(var uParam0, int iParam1)
{
	uParam0->f_18 = iParam1;
}

var func_475()
{
	return Local_1067.f_3;
}

void func_476(int iParam0, int iParam1)
{
	(Local_1067.f_271.f_7[iParam0 /*11*/])->f_4 = iParam1;
}

void func_477(int iParam0, int iParam1, int iParam2)
{
	((Local_1067.f_325.f_1[iParam0 /*50*/])->f_4[iParam1 /*9*/])->f_1 = iParam2;
}

void func_478(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6)
{
	((Local_1067.f_325.f_1[iParam0 /*50*/])->f_4[iParam1 /*9*/])->f_5 = { vParam2 };
	((Local_1067.f_325.f_1[iParam0 /*50*/])->f_4[iParam1 /*9*/])->f_4 = fParam5;
	((Local_1067.f_325.f_1[iParam0 /*50*/])->f_4[iParam1 /*9*/])->f_8 = iParam6;
}

int func_479(int iParam0)
{
	if (!func_162(iParam0))
	{
		return 0;
	}
	return (Global_1126368->f_1[iParam0 /*62*/])->f_3;
}

bool func_480(int iParam0, int iParam1)
{
	return func_161((Local_1067.f_271.f_7[iParam0 /*11*/])->f_2, iParam1);
}

int func_481(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;

	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { Local_1067.f_15 };
	iVar7 = 0;
	iVar8 = func_547(iParam0);
	iVar9 = func_729(iParam0);
	*bParam2 = 0;
	if (iVar8 != 0)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_38[iParam0])))
		{
			iVar9 = func_729(iParam0);
			fVar0 = func_672(iParam0);
			if (!func_161((Local_1067.f_271.f_7[iParam0 /*11*/])->f_2, 2))
			{
				vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar4, 0f, func_461(iParam0)) };
			}
			else
			{
				vVar1 = { func_461(iParam0) };
			}
			if (!func_730(Local_13.f_38[iParam0], iVar8, vVar1, fVar0, 1, 0, (iVar9 == 0 || PED::_0x772A1969F649E902(iVar8)), 1, 1))
			{
				*iParam1 = 1;
			}
			else
			{
				iVar7 = NETWORK::NET_TO_PED(&(Local_13.f_38[iParam0]));
				if (ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
					ENTITY::_0xA91E6CF94404E8C9(iVar7);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar7, true);
					PED::SET_PED_CONFIG_FLAG(iVar7, 178, false);
					if (iVar9 != 0)
					{
						PED::_SET_PED_BODY_COMPONENT(iVar7, iVar9);
						PED::_UPDATE_PED_VARIATION(iVar7, func_480(iParam0, 1), 1, 1, 1, 0);
					}
					else if (PED::_0x772A1969F649E902(iVar8))
					{
						if (PED::_0xA0BC8FAED8CFEB3C(iVar7))
						{
						}
						func_731(iVar7, 1);
					}
					*bParam2 = 1;
					return 0;
				}
				else
				{
					*iParam1 = 1;
				}
			}
		}
		else if (PED::_0xA0BC8FAED8CFEB3C(NETWORK::NET_TO_PED(&(Local_13.f_38[iParam0]))))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_482(int iParam0, int iParam1)
{
	return ((Local_1067.f_325.f_1[iParam0 /*50*/])->f_4[iParam1 /*9*/])->f_1;
}

bool func_483(int iParam0)
{
	return MISC::IS_BIT_SET((Local_1067.f_325.f_1[0 /*50*/])->f_3, iParam0);
}

Vector3 func_484(int iParam0, int iParam1)
{
	return ((Local_1067.f_325.f_1[iParam0 /*50*/])->f_4[iParam1 /*9*/])->f_5;
}

int func_485(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return 0;
	}
	if (!func_732(iParam1))
	{
		return 0;
	}
	*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, vParam2, true, bParam5, false, false, true));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam5)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
		}
		return 1;
	}
	return 0;
}

bool func_486(int iParam0, int iParam1)
{
	return ((Local_1067.f_325.f_1[iParam0 /*50*/])->f_4[iParam1 /*9*/])->f_8;
}

var func_487(int iParam0, int iParam1)
{
	return ((Local_1067.f_325.f_1[iParam0 /*50*/])->f_4[iParam1 /*9*/])->f_4;
}

bool func_488()
{
	return func_161(Local_13.f_58.f_2, 1);
}

bool func_489(int iParam0)
{
	return func_161(Local_1067.f_520.f_5, iParam0);
}

void func_490(int iParam0)
{
	func_305(&(Local_13.f_58.f_2), iParam0);
}

void func_491(int iParam0)
{
	func_206(&(Local_13.f_58.f_2), iParam0);
}

bool func_492(int iParam0)
{
	return func_161(Local_1067.f_520.f_6, iParam0);
}

bool func_493(int iParam0)
{
	return func_161(Local_1067.f_520.f_1, iParam0);
}

var func_494(var uParam0, var uParam1, var uParam2)
{
	return uParam2;
}

int func_495()
{
	switch (func_197())
	{
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_496()
{
	return (func_115(64) || func_114(64, 255));
}

bool func_497()
{
	return ((func_507(256) || func_507(512)) || func_507(1024));
}

void func_498(int iParam0)
{
	func_206(&((Local_74[NETWORK::PARTICIPANT_ID_TO_INT() /*31*/])->f_1.f_1), iParam0);
}

void func_499(int iParam0)
{
	if (Local_13.f_7 != iParam0)
	{
		func_513(&(Local_13.f_7.f_10));
		Local_13.f_7 = iParam0;
	}
}

void func_500(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

void func_501()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	iVar0 = func_101(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (PED::IS_PED_USING_ANY_SCENARIO(iVar0))
		{
			iVar1 = func_733(0);
			if (NETWORK::_0x255A5EF65EDA9167(iVar1))
			{
				iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar2, true, false) };
					PED::_0xEEED8FAFEC331A70(iVar0, vVar3, 3);
				}
			}
		}
	}
}

bool func_502(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return func_161((Local_74[iParam1 /*31*/])->f_1.f_2, iParam0);
}

float func_503(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (bParam2)
	{
		if (&(Local_74[iParam1 /*31*/])->f_4.f_2[iParam0] < 0f)
		{
			return 0f;
		}
	}
	return &((Local_74[iParam1 /*31*/])->f_4.f_2[iParam0]);
}

void func_504(int iParam0)
{
	func_206(&(Local_13.f_7.f_30), iParam0);
}

void func_505(int iParam0)
{
	func_305(&(Local_13.f_7.f_30), iParam0);
}

bool func_506(int iParam0)
{
	return func_734(iParam0);
}

bool func_507(int iParam0)
{
	return func_161(Local_1067.f_18.f_249, iParam0);
}

int func_508(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!bParam2 || func_735(iVar0))
			{
				if (func_541(iParam0, fParam1, iVar0, 0))
				{
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_509(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar0 = func_101(iParam0);
	iVar3 = 255;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	switch (iParam3)
	{
		case 0:
			iVar3 = Local_13.f_7.f_20;
			break;
		case 1:
			if (NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_21))
			{
				iVar3 = Local_13.f_7.f_21;
			}
			else
			{
				iVar3 = Local_13.f_7.f_20;
			}
			break;
		case 2:
			iVar3 = func_631(2, 99f, 1);
			break;
		case 3:
			iVar3 = func_737(0, 96684, 99f, 1);
			break;
		case 4:
			iVar3 = Local_13.f_7.f_22;
			break;
		case -1:
		case 5:
			iParam3 = 5;
			iVar1 = iVar0;
			break;
	}
	if (iVar1 == 0)
	{
		if (NETWORK::_0x255A5EF65EDA9167(iVar3))
		{
			iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3);
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
			{
				iVar1 = PLAYER::GET_PLAYER_PED(iVar3);
			}
			else
			{
				iVar1 = iVar0;
			}
		}
		else
		{
			iVar1 = iVar0;
		}
	}
	if (func_515(1))
	{
		return;
	}
	if (Local_13.f_7.f_9 != 0)
	{
		if (!func_524(32) || Local_13.f_7.f_15 < 1)
		{
			func_738(&(Local_13.f_7.f_15), iParam2);
			func_504(32);
			func_513(&(Local_13.f_7.f_9));
		}
		iVar4 = Local_13.f_7.f_15;
		if (bParam10 && !func_512(iParam4))
		{
			iVar4 = 1500;
		}
		if (func_520(Local_13.f_7.f_9, iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3);
			if (iVar5 != 255)
			{
				if (!NETWORK::_0x255A5EF65EDA9167(iVar3) || func_541(0, fParam1, iVar5, 1))
				{
					if (!func_512(iParam4))
					{
						func_516(iParam0, iParam3, iParam4, 0);
					}
					else if (!func_512(iParam5))
					{
						func_516(iParam0, iParam3, iParam5, 0);
					}
					else if (iParam6 != -1 && !func_512(iParam6))
					{
						func_516(iParam0, iParam3, iParam6, 0);
					}
					else if (iParam7 != -1 && !func_512(iParam7))
					{
						func_516(iParam0, iParam3, iParam7, 0);
					}
					else if (iParam8 != -1 && !func_512(iParam8))
					{
						func_516(iParam0, iParam3, iParam8, 0);
					}
					else if (iParam9 != -1 && !func_512(iParam9))
					{
						func_516(iParam0, iParam3, iParam9, 0);
					}
					else if (iParam11 != -1)
					{
						func_739(iParam11);
					}
				}
			}
		}
	}
	else
	{
		func_513(&(Local_13.f_7.f_9));
	}
}

void func_510()
{
	if (Local_13.f_7.f_11 == 0)
	{
		func_513(&(Local_13.f_7.f_11));
		func_738(&(Local_13.f_7.f_16), 12000);
		return;
	}
	if (func_507(524288))
	{
		func_513(&(Local_13.f_7.f_11));
		func_738(&(Local_13.f_7.f_16), 12000);
	}
}

int func_511()
{
	int iVar0;

	if (func_507(536870912))
	{
		return 1;
	}
	if (Local_13.f_7.f_12 == 0)
	{
		func_513(&(Local_13.f_7.f_12));
	}
	if (func_520(Local_13.f_7.f_12, 100000))
	{
		if (!func_520(Local_13.f_7.f_9, 10000))
		{
			return 0;
		}
		iVar0 = func_101(0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			if (AUDIO::_0x54B187F111D9C6F8(iVar0, 1))
			{
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_512(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 - iVar1 * 32);
	return MISC::IS_BIT_SET(&(Local_1067.f_18.f_45[iVar1]), iVar2);
}

void func_513(var uParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
}

int func_514(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;

	iVar3 = func_101(1);
	fVar7 = fParam4;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar5 = ENTITY::_0x59B57C4B06531E1E(vParam1, fParam4, iVar0, 1);
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
		iVar2 = iVar1;
		if (!ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			if (func_740(iVar2))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iVar3) || iVar2 != iVar3)
				{
					if (!bParam5 || PED::_0xB676EFDA03DADA52(iVar2, 0) == 0)
					{
						bVar8 = false;
						if (!bParam6)
						{
							bVar8 = true;
						}
						if (!bVar8)
						{
							iVar9 = func_101(0);
							if (ENTITY::DOES_ENTITY_EXIST(iVar9) && !PED::IS_PED_DEAD_OR_DYING(iVar9, true))
							{
								if (func_741(iVar9, iVar2, 0, fParam4, 0))
								{
									bVar8 = true;
								}
							}
						}
						if (bVar8)
						{
							fVar10 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar2, false, false), vParam1);
							if (fVar10 < 50f && fVar10 < fVar7)
							{
								fVar7 = fVar10;
								*iParam0 = iVar2;
								iVar11 = PED::_0xB676EFDA03DADA52(*iParam0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(iVar11))
								{
									iVar12 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar11);
									if (NETWORK::_0x255A5EF65EDA9167(iVar12))
									{
										Local_13.f_7.f_25 = iVar12;
									}
								}
							}
							iVar6++;
						}
					}
				}
			}
		}
		iVar4++;
	}
	ITEMSET::_0x20A4BF0E09BEE146(iVar0);
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar6;
}

bool func_515(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

void func_516(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<15> Var0;

	Var0 = { func_742(377515857) };
	Var0.f_11 = iParam0;
	Var0.f_12 = iParam1;
	Var0.f_13 = iParam2;
	if (bParam3)
	{
		Var0.f_14 = 1;
	}
	else
	{
		Var0.f_14 = -1;
	}
	func_743(&Var0);
}

int func_517(vector3 vParam0, float fParam3)
{
	var uVar0;
	int iVar1;

	uVar0 = func_744(vParam0, 0f, 0f, 0f, fParam3, fParam3, fParam3, -432403087, 0, 8);
	iVar1 = SCRIPTS::COUNT_PLAYER_BITS(&uVar0);
	return iVar1;
}

int func_518(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_161((Local_74[iVar0 /*31*/])->f_1.f_2, iParam0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_519(int iParam0)
{
	return func_161(Local_1067.f_18.f_248, iParam0);
}

int func_520(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam0 != 0)
	{
		if (NETWORK::GET_TIME_DIFFERENCE(iParam0, iVar0) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_521()
{
	return Local_13.f_58;
}

int func_522()
{
	switch (func_197())
	{
		case 3:
			return 1;
		case 4:
			return 3;
		case 5:
			return 3;
		case 6:
			return 3;
		case 7:
			return 3;
		default:
			break;
	}
	return 4;
}

int func_523()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;

	iVar0 = func_101(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	vVar4 = { func_326(1) };
	fVar7 = (vVar4.z - vVar1.z);
	if (fVar7 > 5f)
	{
		return 1;
	}
	return 0;
}

bool func_524(int iParam0)
{
	return func_161(Local_13.f_7.f_30, iParam0);
}

int func_525()
{
	int iVar0;

	iVar0 = Local_13.f_7.f_19;
	switch (iVar0)
	{
		case 1:
			return 21;
		case 2:
			return 22;
		case 3:
			return 23;
		default:
			break;
	}
	return 21;
}

void func_526(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 - iVar1 * 32);
	MISC::CLEAR_BIT(Local_1067.f_18.f_45[iVar1], iVar2);
}

Vector3 func_527(vector3 vParam0)
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

char* func_528(int iParam0)
{
	switch (func_197())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "OREPHT_CL_IDLE";
				case 1:
					return "OREPHT_CL_IDLE";
				case 2:
					return "OREPHT_CL_IDLE";
				case 3:
					return "OREPHT_CL_CALL1";
				case 4:
					return "OREPHT_CL_CAL1M";
				case 5:
					return "OREPHT_CL_CAL1A";
				case 6:
					return "OREPHT_CL_CAL1R";
				case 7:
					return "OREPHT_CL_CALL2";
				case 8:
					return "OREPHT_CL_CALL2";
				case 9:
					return "OREPHT_CL_OFFR1";
				case 10:
					return "OREPHT_CL_OFFR2";
				case 11:
					return "OREPHT_CL_OFFR3";
				case 16:
					return "OREPHT_CL_TODO";
				case 21:
					return "OREPHT_CL_POSE1";
				case 22:
					return "OREPHT_CL_POSE2";
				case 23:
					return "OREPHT_CL_POSE3";
				case 24:
					return "OREPHT_CL_POSE4";
				case 83:
					return "OREPHT_CL_BACK1";
				case 84:
					return "OREPHT_CL_BACK1";
				case 85:
					return "OREPHT_CL_BACK1";
				case 86:
					return "OREPHT_CL_FALL";
				case 87:
					return "OREPHT_CL_SCRM";
				default:
					break;
			}
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (func_201() == 2)
			{
				switch (iParam0)
				{
					case 0:
						return "OREPHT_DA_IDLE";
					case 1:
						return "OREPHT_DA_IDLE";
					case 2:
						return "OREPHT_DA_IDLE";
					case 3:
						return "OREPHT_DA_CALL1";
					case 4:
						return "OREPHT_DA_CAL1M";
					case 5:
						return "OREPHT_DA_CAL1A";
					case 6:
						return "OREPHT_DA_CAL1R";
					case 7:
						return "OREPHT_DA_CALL2";
					case 8:
						return "OREPHT_DA_CALL2";
					case 9:
						return "OREPHT_DA_OFFR1";
					case 10:
						return "OREPHT_DA_OFFR2";
					case 11:
						return "OREPHT_DA_OFFR3";
					case 16:
						return "OREPHT_DA_TODO";
					case 48:
						return "OREPHT_DA_PHFRM";
					case 49:
						return "OREPHT_DA_PHFRM";
					case 50:
						return "OREPHT_DA_PHFRM";
					case 21:
						return "OREPHT_DH_POSE1";
					case 22:
						return "OREPHT_DH_POSE2";
					case 23:
						return "OREPHT_DH_POSE3";
					case 24:
						return "OREPHT_DH_POSE4";
					case 83:
						return "OREPHT_DA_BACK1";
					case 84:
						return "OREPHT_DA_BACK1";
					case 85:
						return "OREPHT_DA_BACK1";
					case 88:
						return "OREPHT_DA_SAVED";
					case 89:
						return "OREPHT_DA_OFFRB";
					case 90:
						return "OREPHT_DA_OFFRK";
					case 91:
						return "OREPHT_DA_OFFRO";
					case 92:
						return "OREPHT_DA_OFFRC";
					case 93:
						return "OREPHT_DA_OFFRW";
					case 94:
						return "OREPHT_DA_ATTCK";
					case 95:
						return "OREPHT_DA_ATTCK";
					case 96:
						return "OREPHT_DA_ATTCK";
					case 97:
						return "OREPHT_DA_PLCLS";
					case 98:
						return "OREPHT_DA_PLCLS";
					case 99:
						return "OREPHT_DA_PLSCR";
					case 100:
						return "OREPHT_DA_PLSCR";
					case 101:
						return "OREPHT_DA_SVRD1";
					case 102:
						return "OREPHT_DA_SVRD2";
					case 103:
						return "OREPHT_DA_SVRD3";
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						return "OREPHT_AN_IDLE";
					case 1:
						return "OREPHT_AN_IDLE";
					case 2:
						return "OREPHT_AN_IDLE";
					case 3:
						return "OREPHT_AN_CALL1";
					case 4:
						return "OREPHT_AN_CAL1M";
					case 5:
						return "OREPHT_AN_CAL1A";
					case 6:
						return "OREPHT_AN_CAL1R";
					case 7:
						return "OREPHT_AN_CALL2";
					case 8:
						return "OREPHT_AN_CALL2";
					case 9:
						return "OREPHT_AN_OFFR1";
					case 10:
						return "OREPHT_AN_OFFR2";
					case 11:
						return "OREPHT_AN_OFFR3";
					case 16:
						return "OREPHT_AN_TODO";
					case 48:
						return "OREPHT_AN_PHFRM";
					case 49:
						return "OREPHT_AN_PHFRM";
					case 50:
						return "OREPHT_AN_PHFRM";
					case 21:
						return "OREPHT_CL_POSE1";
					case 22:
						return "OREPHT_CL_POSE2";
					case 23:
						return "OREPHT_CL_POSE3";
					case 24:
						return "OREPHT_CL_POSE4";
					case 83:
						return "OREPHT_AN_BACK1";
					case 84:
						return "OREPHT_AN_BACK1";
					case 85:
						return "OREPHT_AN_BACK1";
					case 88:
						return "OREPHT_AN_SAVED";
					case 89:
						return "OREPHT_AN_OFFRB";
					case 90:
						return "OREPHT_AN_OFFRK";
					case 91:
						return "OREPHT_AN_OFFRO";
					case 92:
						return "OREPHT_AN_OFFRC";
					case 93:
						return "OREPHT_AN_OFFRW";
					case 94:
						return "OREPHT_AN_ATTCK";
					case 95:
						return "OREPHT_AN_ATTCK";
					case 96:
						return "OREPHT_AN_ATTCK";
					case 97:
						return "OREPHT_AN_PLCLS";
					case 98:
						return "OREPHT_AN_PLCLS";
					case 99:
						return "OREPHT_AN_PLSCR";
					case 100:
						return "OREPHT_AN_PLSCR";
					case 101:
						return "OREPHT_AN_SVRD1";
					case 102:
						return "OREPHT_AN_SVRD2";
					case 103:
						return "OREPHT_AN_SVRD3";
					default:
						break;
				}
			}
			break;
		case 1:
			if (func_201() == 2)
			{
				switch (iParam0)
				{
					case 0:
						return "OREPHT_DH_IDLE";
					case 1:
						return "OREPHT_DH_IDLE";
					case 2:
						return "OREPHT_DH_IDLE";
					case 9:
						return "OREPHT_DH_OFFR1";
					case 10:
						return "OREPHT_DH_OFFR2";
					case 11:
						return "OREPHT_DH_OFFR3";
					case 21:
						return "OREPHT_DH_POSE1";
					case 22:
						return "OREPHT_DH_POSE2";
					case 23:
						return "OREPHT_DH_POSE3";
					case 24:
						return "OREPHT_DH_POSE4";
					case 104:
						return "OREPHT_DH_WHER1";
					case 105:
						return "OREPHT_DH_WHER2";
					case 106:
						return "OREPHT_DH_WHER3";
					case 107:
						return "OREPHT_DH_NOHR";
					case 108:
						return "OREPHT_DH_YAYHR";
					case 48:
						return "OREPHT_DH_PHFRM";
					case 49:
						return "OREPHT_DH_PHFRM";
					case 50:
						return "OREPHT_DH_PHFRM";
					case 109:
						return "OREPHT_DH_HTCH1";
					case 110:
						return "OREPHT_DH_HTCH2";
					case 111:
						return "OREPHT_DH_HTCH3";
					case 113:
						return "OREPHT_DH_DMNT1";
					case 114:
						return "OREPHT_DH_DMNT2";
					case 115:
						return "OREPHT_DH_DMNT3";
					case 117:
						return "OREPHT_DH_REAR";
					case 77:
						return "OREPHT_DS_AGGDK";
					case 78:
						return "OREPHT_DS_AGGDK";
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						return "OREPHT_HR_IDLE";
					case 1:
						return "OREPHT_HR_IDLE";
					case 2:
						return "OREPHT_HR_IDLE";
					case 9:
						return "OREPHT_HR_OFFR1";
					case 10:
						return "OREPHT_HR_OFFR2";
					case 11:
						return "OREPHT_HR_OFFR3";
					case 12:
						return "OREPHT_FS_OFFR4";
					case 13:
						return "OREPHT_FS_OFFR4";
					case 14:
						return "OREPHT_FS_OFFR5";
					case 15:
						return "OREPHT_FS_OFFR5";
					case 17:
						return "OREPHT_FS_WAIT";
					case 18:
						return "OREPHT_FS_WAIT";
					case 19:
						return "OREPHT_FS_WAIT";
					case 21:
						return "OREPHT_HR_POSE1";
					case 22:
						return "OREPHT_HR_POSE2";
					case 23:
						return "OREPHT_HR_POSE3";
					case 24:
						return "OREPHT_HR_POSE4";
					case 104:
						return "OREPHT_HR_WHER1";
					case 105:
						return "OREPHT_HR_WHER2";
					case 106:
						return "OREPHT_HR_WHER3";
					case 107:
						return "OREPHT_HR_NOHR";
					case 108:
						return "OREPHT_HR_YAYHR";
					case 48:
						return "OREPHT_HR_PHFRM";
					case 49:
						return "OREPHT_HR_PHFRM";
					case 50:
						return "OREPHT_HR_PHFRM";
					case 109:
						return "OREPHT_HR_HTCH1";
					case 110:
						return "OREPHT_HR_HTCH2";
					case 111:
						return "OREPHT_HR_HTCH3";
					case 113:
						return "OREPHT_HR_DMNT1";
					case 114:
						return "OREPHT_HR_DMNT2";
					case 115:
						return "OREPHT_HR_DMNT3";
					case 117:
						return "OREPHT_HR_REAR";
					case 77:
						return "OREPHT_FS_AGGDK";
					case 78:
						return "OREPHT_FS_AGGDK";
					default:
						break;
				}
			}
			break;
		case 2:
			if (func_201() == 2)
			{
				switch (iParam0)
				{
					case 0:
						return "OREPHT_DH_IDLE";
					case 1:
						return "OREPHT_DH_IDLE";
					case 2:
						return "OREPHT_DH_IDLE";
					case 9:
						return "OREPHT_DH_OFFR1";
					case 10:
						return "OREPHT_DH_OFFR2";
					case 11:
						return "OREPHT_DH_OFFR3";
					case 21:
						return "OREPHT_DH_POSE1";
					case 22:
						return "OREPHT_DH_POSE2";
					case 23:
						return "OREPHT_DH_POSE3";
					case 24:
						return "OREPHT_DH_POSE4";
					case 104:
						return "OREPHT_DH_WHER1";
					case 105:
						return "OREPHT_DH_WHER2";
					case 106:
						return "OREPHT_DH_WHER3";
					case 107:
						return "OREPHT_DH_NOHR";
					case 108:
						return "OREPHT_DH_YAYHR";
					case 48:
						return "OREPHT_DH_PHFRM";
					case 49:
						return "OREPHT_DH_PHFRM";
					case 50:
						return "OREPHT_DH_PHFRM";
					case 109:
						return "OREPHT_DH_HTCH1";
					case 110:
						return "OREPHT_DH_HTCH2";
					case 111:
						return "OREPHT_DH_HTCH3";
					case 113:
						return "OREPHT_DH_DMNT1";
					case 114:
						return "OREPHT_DH_DMNT2";
					case 115:
						return "OREPHT_DH_DMNT3";
					case 117:
						return "OREPHT_DH_REAR";
					case 118:
						return "OREPHT_DT_TNT1";
					case 119:
						return "OREPHT_DT_TNT2";
					case 120:
						return "OREPHT_DT_TNT3";
					case 121:
						return "OREPHT_DT_CHS1";
					case 122:
						return "OREPHT_DT_CHS1";
					case 123:
						return "OREPHT_DT_CHS1";
					case 124:
						return "OREPHT_DT_THRN1";
					case 125:
						return "OREPHT_DT_AGATK";
					case 126:
						return "OREPHT_DT_AGATK";
					case 127:
						return "OREPHT_DT_AGATK";
					case 82:
						return "OREPHT_DT_FLEE";
					case 77:
						return "OREPHT_DS_AGGDK";
					case 78:
						return "OREPHT_DS_AGGDK";
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						return "OREPHT_HR_IDLE";
					case 1:
						return "OREPHT_HR_IDLE";
					case 2:
						return "OREPHT_HR_IDLE";
					case 9:
						return "OREPHT_HR_OFFR1";
					case 10:
						return "OREPHT_HR_OFFR2";
					case 11:
						return "OREPHT_HR_OFFR3";
					case 12:
						return "OREPHT_FS_OFFR4";
					case 13:
						return "OREPHT_FS_OFFR4";
					case 14:
						return "OREPHT_FS_OFFR5";
					case 15:
						return "OREPHT_FS_OFFR5";
					case 17:
						return "OREPHT_FS_WAIT";
					case 18:
						return "OREPHT_FS_WAIT";
					case 19:
						return "OREPHT_FS_WAIT";
					case 21:
						return "OREPHT_HR_POSE1";
					case 22:
						return "OREPHT_HR_POSE2";
					case 23:
						return "OREPHT_HR_POSE3";
					case 24:
						return "OREPHT_HR_POSE4";
					case 104:
						return "OREPHT_HR_WHER1";
					case 105:
						return "OREPHT_HR_WHER2";
					case 106:
						return "OREPHT_HR_WHER3";
					case 107:
						return "OREPHT_HR_NOHR";
					case 108:
						return "OREPHT_HR_YAYHR";
					case 109:
						return "OREPHT_HR_HTCH1";
					case 110:
						return "OREPHT_HR_HTCH2";
					case 111:
						return "OREPHT_HR_HTCH3";
					case 113:
						return "OREPHT_HR_DMNT1";
					case 114:
						return "OREPHT_HR_DMNT2";
					case 115:
						return "OREPHT_HR_DMNT3";
					case 117:
						return "OREPHT_HR_REAR";
					case 118:
						return "OREPHT_ST_TNT1";
					case 119:
						return "OREPHT_ST_TNT2";
					case 120:
						return "OREPHT_ST_TNT3";
					case 121:
						return "OREPHT_ST_CHS1";
					case 122:
						return "OREPHT_ST_CHS1";
					case 123:
						return "OREPHT_ST_CHS1";
					case 124:
						return "OREPHT_ST_THRN1";
					case 125:
						return "OREPHT_ST_AGATK";
					case 126:
						return "OREPHT_ST_AGATK";
					case 127:
						return "OREPHT_ST_AGATK";
					case 82:
						return "OREPHT_ST_FLEE";
					case 77:
						return "OREPHT_FS_AGGDK";
					case 78:
						return "OREPHT_FS_AGGDK";
					default:
						break;
				}
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return "OREPHT_FH_IDLE";
				case 1:
					return "OREPHT_FH_IDLE";
				case 2:
					return "OREPHT_FH_IDLE";
				case 128:
					return "OREPHT_FH_REEL";
				case 129:
					return "OREPHT_FH_WHOO";
				case 130:
					return "OREPHT_FH_CATCH";
				case 9:
					return "OREPHT_FH_OFFR1";
				case 10:
					return "OREPHT_FH_OFFR2";
				case 11:
					return "OREPHT_FH_OFFR3";
				case 48:
					return "OREPHT_FH_PHFRM";
				case 49:
					return "OREPHT_FH_PHFRM";
				case 50:
					return "OREPHT_FH_PHFRM";
				default:
					break;
			}
			break;
		case 9:
		case 10:
		case 11:
			switch (iParam0)
			{
				case 0:
					return "OREPHT_GN_IDLE";
				case 1:
					return "OREPHT_GN_IDLE";
				case 2:
					return "OREPHT_GN_IDLE";
				case 9:
					return "OREPHT_GN_OFFR1";
				case 10:
					return "OREPHT_GN_OFFR2";
				case 11:
					return "OREPHT_GN_OFFR3";
				case 131:
					return "OREPHT_GN_TDUP1";
				case 132:
					return "OREPHT_GN_TDUP2";
				case 133:
					return "OREPHT_GN_TDAT1";
				case 134:
					return "OREPHT_GN_TDAT2";
				case 135:
					return "OREPHT_GN_TDHG1";
				case 136:
					return "OREPHT_GN_TDHG2";
				case 137:
					return "OREPHT_GN_GTHR1";
				case 138:
					return "OREPHT_GN_GTHR1";
				case 139:
					return "OREPHT_GN_GTHR1";
				case 140:
					return "OREPHT_GN_GTHR2";
				case 141:
					return "OREPHT_GN_GTHR2";
				case 142:
					return "OREPHT_GN_GTHR2";
				case 144:
					return "OREPHT_GN_NOCAM";
				case 145:
					return "OREPHT_GN_NOCAM";
				case 146:
					return "OREPHT_GN_NOCAM";
				case 147:
					return "OREPHT_GN_PSEUP";
				case 148:
					return "OREPHT_GN_PSEUP";
				case 149:
					return "OREPHT_GN_PSEUP";
				case 150:
					return "OREPHT_GN_PSEAT";
				case 151:
					return "OREPHT_GN_PSEAT";
				case 152:
					return "OREPHT_GN_PSEAT";
				case 154:
					return "OREPHT_GN_PSHOG";
				case 155:
					return "OREPHT_GN_PSHOG";
				case 156:
					return "OREPHT_GN_PSHOG";
				case 158:
					return "OREPHT_GN_PHFR1";
				case 159:
					return "OREPHT_GN_PHFR1";
				case 160:
					return "OREPHT_GN_PHFR1";
				case 161:
					return "OREPHT_GN_PHFR2";
				case 162:
					return "OREPHT_GN_PHFR2";
				case 163:
					return "OREPHT_GN_PHFR2";
				case 165:
					return "OREPHT_GN_HOGCR";
				case 166:
					return "OREPHT_GN_HOGCR";
				case 167:
					return "OREPHT_GN_HOGCR";
				case 168:
					return "OREPHT_GN_HOGCT";
				case 169:
					return "OREPHT_GN_HOGCT";
				case 170:
					return "OREPHT_GN_HOGCT";
				case 171:
					return "OREPHT_GN_HOGRL";
				case 172:
					return "OREPHT_GN_HOGRL";
				case 173:
					return "OREPHT_GN_HOGRL";
				case 174:
					return "OREPHT_GN_NOPED";
				case 175:
					return "OREPHT_GN_NOPSE";
				default:
					break;
			}
			break;
	}
	if (func_201() == 2)
	{
		switch (iParam0)
		{
			case 3:
				return "OREPHT_DA_CALL1";
			case 4:
				return "OREPHT_DA_CAL1M";
			case 5:
				return "OREPHT_DA_CAL1A";
			case 6:
				return "OREPHT_DA_CAL1R";
			case 7:
				return "OREPHT_DA_CALL2";
			case 8:
				return "OREPHT_DA_CALL2";
			case 34:
				return "OREPHT_DS_ACCPT";
			case 35:
				return "OREPHT_DS_DECLN";
			case 12:
				return "OREPHT_DS_OFFR4";
			case 13:
				return "OREPHT_DS_OFFR4";
			case 14:
				return "OREPHT_DS_OFFR5";
			case 15:
				return "OREPHT_DS_OFFR5";
			case 36:
				return "OREPHT_DS_PHCAM";
			case 37:
				return "OREPHT_DS_PHCAM";
			case 38:
				return "OREPHT_DS_PHCAM";
			case 40:
				return "OREPHT_DS_PHFAR";
			case 41:
				return "OREPHT_DS_PHFAR";
			case 42:
				return "OREPHT_DS_PHFAR";
			case 44:
				return "OREPHT_DS_PHFRM";
			case 45:
				return "OREPHT_DS_PHFRM";
			case 46:
				return "OREPHT_DS_PHFRM";
			case 52:
				return "OREPHT_DS_PHCLS";
			case 53:
				return "OREPHT_DS_PHCLS";
			case 54:
				return "OREPHT_DS_PHCLS";
			case 17:
				return "OREPHT_DS_WAIT";
			case 18:
				return "OREPHT_DS_WAIT";
			case 19:
				return "OREPHT_DS_WAIT";
			case 59:
				return "OREPHT_DS_PHWAT";
			case 60:
				return "OREPHT_DS_PHWAT";
			case 61:
				return "OREPHT_DS_PHWAT";
			case 56:
				return "OREPHT_DS_PHRDY";
			case 57:
				return "OREPHT_DS_PHRDY";
			case 58:
				return "OREPHT_DS_PHRDY";
			case 62:
				return "OREPHT_DS_PHNOW";
			case 63:
				return "OREPHT_DS_PHNOW";
			case 64:
				return "OREPHT_DS_PHNOW";
			case 65:
				return "OREPHT_DS_PHBAD";
			case 68:
				return "OREPHT_DS_PHRWB";
			case 66:
				return "OREPHT_DS_PHOK";
			case 69:
				return "OREPHT_DS_PHRWO";
			case 67:
				return "OREPHT_DS_PHGOD";
			case 70:
				return "OREPHT_DS_PHRWG";
			case 71:
				return "OREPHT_DS_FILM";
			case 25:
				return "OREPHT_DS_RIDE1";
			case 26:
				return "OREPHT_DS_RIDE2";
			case 27:
				return "OREPHT_DS_RIDE3";
			case 28:
				return "OREPHT_DS_RIDB1";
			case 29:
				return "OREPHT_DS_RIDB2";
			case 30:
				return "OREPHT_DS_RIDB3";
			case 31:
				return "OREPHT_DS_FAIL1";
			case 32:
				return "OREPHT_DS_FAIL2";
			case 33:
				return "OREPHT_DS_FAIL3";
			case 72:
				return "OREPHT_DS_ANNOY";
			case 73:
				return "OREPHT_DS_ANPOS";
			case 74:
				return "OREPHT_DS_AGGRO";
			case 75:
				return "OREPHT_DS_AGGRO";
			case 76:
				return "OREPHT_DS_AGGRO";
			case 77:
				return "OREPHT_DS_AGGHR";
			case 78:
				return "OREPHT_DS_AGGHR";
			case 79:
				return "OREPHT_DS_HOGTD";
			case 80:
				return "OREPHT_DS_HOGTD";
			case 81:
				return "OREPHT_DS_HOGTD";
			case 82:
				return "OREPHT_DS_HOGUT";
			default:
				break;
		}
	}
	switch (func_197())
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			switch (iParam0)
			{
				case 34:
					return "OREPHT_TS_ACCPT";
				case 35:
					return "OREPHT_TS_DECLN";
				case 12:
					return "OREPHT_TS_OFFR4";
				case 13:
					return "OREPHT_TS_OFFR4";
				case 14:
					return "OREPHT_TS_OFFR5";
				case 15:
					return "OREPHT_TS_OFFR5";
				case 36:
					return "OREPHT_TS_PHCAM";
				case 37:
					return "OREPHT_TS_PHCAM";
				case 38:
					return "OREPHT_TS_PHCAM";
				case 40:
					return "OREPHT_TS_PHFAR";
				case 41:
					return "OREPHT_TS_PHFAR";
				case 42:
					return "OREPHT_TS_PHFAR";
				case 44:
					return "OREPHT_TS_PHFRM";
				case 45:
					return "OREPHT_TS_PHFRM";
				case 46:
					return "OREPHT_TS_PHFRM";
				case 52:
					return "OREPHT_TS_PHCLS";
				case 53:
					return "OREPHT_TS_PHCLS";
				case 54:
					return "OREPHT_TS_PHCLS";
				case 17:
					return "OREPHT_TS_WAIT";
				case 18:
					return "OREPHT_TS_WAIT";
				case 19:
					return "OREPHT_TS_WAIT";
				case 59:
					return "OREPHT_TS_PHWAT";
				case 60:
					return "OREPHT_TS_PHWAT";
				case 61:
					return "OREPHT_TS_PHWAT";
				case 56:
					return "OREPHT_TS_PHRDY";
				case 57:
					return "OREPHT_TS_PHRDY";
				case 58:
					return "OREPHT_TS_PHRDY";
				case 62:
					return "OREPHT_TS_PHNOW";
				case 63:
					return "OREPHT_TS_PHNOW";
				case 64:
					return "OREPHT_TS_PHNOW";
				case 65:
					return "OREPHT_TS_PHBAD";
				case 68:
					return "OREPHT_TS_PHRWB";
				case 66:
					return "OREPHT_TS_PHOK";
				case 69:
					return "OREPHT_TS_PHRWO";
				case 67:
					return "OREPHT_TS_PHGOD";
				case 70:
					return "OREPHT_TS_PHRWG";
				case 71:
					return "OREPHT_TS_FILM";
				case 25:
					return "OREPHT_TS_RIDE1";
				case 26:
					return "OREPHT_TS_RIDE2";
				case 27:
					return "OREPHT_TS_RIDE3";
				case 28:
					return "OREPHT_TS_RIDB1";
				case 29:
					return "OREPHT_TS_RIDB2";
				case 30:
					return "OREPHT_TS_RIDB3";
				case 31:
					return "OREPHT_TS_FAIL1";
				case 32:
					return "OREPHT_TS_FAIL2";
				case 33:
					return "OREPHT_TS_FAIL3";
				case 72:
					return "OREPHT_TS_ANNOY";
				case 73:
					return "OREPHT_TS_ANPOS";
				case 74:
					return "OREPHT_TS_AGGRO";
				case 75:
					return "OREPHT_TS_AGGRO";
				case 76:
					return "OREPHT_TS_AGGRO";
				case 77:
					return "OREPHT_TS_AGGHR";
				case 78:
					return "OREPHT_TS_AGGHR";
				case 79:
					return "OREPHT_TS_HOGTD";
				case 80:
					return "OREPHT_TS_HOGTD";
				case 81:
					return "OREPHT_TS_HOGTD";
				case 82:
					return "OREPHT_TS_HOGUT";
				default:
					break;
			}
			break;
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 11:
			switch (iParam0)
			{
				case 3:
					return "OREPHT_FS_CALL1";
				case 4:
					return "OREPHT_FS_CAL1M";
				case 5:
					return "OREPHT_FS_CAL1A";
				case 6:
					return "OREPHT_FS_CAL1R";
				case 7:
					return "OREPHT_FS_CALL2";
				case 8:
					return "OREPHT_FS_CALL2";
				case 34:
					return "OREPHT_FS_ACCPT";
				case 35:
					return "OREPHT_FS_DECLN";
				case 12:
					return "OREPHT_FS_OFFR4";
				case 13:
					return "OREPHT_FS_OFFR4";
				case 14:
					return "OREPHT_FS_OFFR5";
				case 15:
					return "OREPHT_FS_OFFR5";
				case 36:
					return "OREPHT_FS_PHCAM";
				case 37:
					return "OREPHT_FS_PHCAM";
				case 38:
					return "OREPHT_FS_PHCAM";
				case 40:
					return "OREPHT_FS_PHFAR";
				case 41:
					return "OREPHT_FS_PHFAR";
				case 42:
					return "OREPHT_FS_PHFAR";
				case 44:
					return "OREPHT_FS_PHFRM";
				case 45:
					return "OREPHT_FS_PHFRM";
				case 46:
					return "OREPHT_FS_PHFRM";
				case 52:
					return "OREPHT_FS_PHCLS";
				case 53:
					return "OREPHT_FS_PHCLS";
				case 54:
					return "OREPHT_FS_PHCLS";
				case 17:
					return "OREPHT_FS_WAIT";
				case 18:
					return "OREPHT_FS_WAIT";
				case 19:
					return "OREPHT_FS_WAIT";
				case 59:
					return "OREPHT_FS_PHWAT";
				case 60:
					return "OREPHT_FS_PHWAT";
				case 61:
					return "OREPHT_FS_PHWAT";
				case 56:
					return "OREPHT_FS_PHRDY";
				case 57:
					return "OREPHT_FS_PHRDY";
				case 58:
					return "OREPHT_FS_PHRDY";
				case 62:
					return "OREPHT_FS_PHNOW";
				case 63:
					return "OREPHT_FS_PHNOW";
				case 64:
					return "OREPHT_FS_PHNOW";
				case 65:
					return "OREPHT_FS_PHBAD";
				case 68:
					return "OREPHT_FS_PHRWB";
				case 66:
					return "OREPHT_FS_PHOK";
				case 69:
					return "OREPHT_FS_PHRWO";
				case 67:
					return "OREPHT_FS_PHGOD";
				case 70:
					return "OREPHT_FS_PHRWG";
				case 71:
					return "OREPHT_FS_FILM";
				case 25:
					return "OREPHT_FS_RIDE1";
				case 26:
					return "OREPHT_FS_RIDE2";
				case 27:
					return "OREPHT_FS_RIDE3";
				case 28:
					return "OREPHT_FS_RIDB1";
				case 29:
					return "OREPHT_FS_RIDB2";
				case 30:
					return "OREPHT_FS_RIDB3";
				case 31:
					return "OREPHT_FS_FAIL1";
				case 32:
					return "OREPHT_FS_FAIL2";
				case 33:
					return "OREPHT_FS_FAIL3";
				case 72:
					return "OREPHT_FS_ANNOY";
				case 73:
					return "OREPHT_FS_ANPOS";
				case 74:
					return "OREPHT_FS_AGGRO";
				case 75:
					return "OREPHT_FS_AGGRO";
				case 76:
					return "OREPHT_FS_AGGRO";
				case 77:
					return "OREPHT_FS_AGGHR";
				case 78:
					return "OREPHT_FS_AGGHR";
				case 79:
					return "OREPHT_FS_HOGTD";
				case 80:
					return "OREPHT_FS_HOGTD";
				case 81:
					return "OREPHT_FS_HOGTD";
				case 82:
					return "OREPHT_FS_HOGUT";
				case 176:
					return "PLAYER_LOITERING";
				case 177:
					return "BLOCKED_GENERIC";
				case 178:
					return "INSULT_RESPONSE";
				case 179:
					return "GET_OUT";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_529(char[4] cParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(cParam0) && AUDIO::_0x1ECC76792F661CF5(cParam0))
	{
		return 1;
	}
	return 0;
}

float func_530()
{
	switch (func_197())
	{
		case 3:
			return 10f;
		case 4:
			return 10f;
		case 5:
			return 10f;
		case 6:
			return 10f;
		case 7:
			return 10f;
		default:
			break;
	}
	return 10f;
}

void func_531()
{
	int iVar0;

	if (!NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_24))
	{
		iVar0 = func_733(2);
		if (NETWORK::_0x255A5EF65EDA9167(iVar0))
		{
			Local_13.f_7.f_24 = iVar0;
		}
	}
}

int func_532(int iParam0, int iParam1)
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

int func_533(int iParam0)
{
	int iVar0;

	iVar0 = func_101(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return 1;
	}
	if (func_682(0, func_461(0)) > 100f)
	{
		return 1;
	}
	if (func_508(0, 100f, 0) < 1)
	{
		return 1;
	}
	return 0;
}

bool func_534(int iParam0)
{
	return func_161(Local_1067.f_18.f_250, iParam0);
}

int func_535(int iParam0)
{
	char* sVar0;

	if (!ANIMSCENE::_0x25557E324489393C(Local_1067.f_18.f_244))
	{
		return 0;
	}
	sVar0 = func_313(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return 0;
	}
	return ANIMSCENE::_0x1F0E401031E20146(Local_1067.f_18.f_244, sVar0);
}

int func_536()
{
	if (func_507(512))
	{
		return 66;
	}
	if (func_507(1024))
	{
		return 67;
	}
	return 65;
}

int func_537(float fParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_503(0, iVar0, 1) < fParam0)
			{
				if (func_449(iParam1, iVar0))
				{
					return 1;
				}
				else if (iParam2 != 0 && func_449(iParam2, iVar0))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_538(float fParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_503(0, iVar0, 1) < fParam0)
			{
				if (func_434(iParam1, iVar0))
				{
					return 1;
				}
				else if (iParam2 != 0 && func_434(iParam2, iVar0))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_539(int iParam0)
{
	func_513(&(Local_13.f_7.f_13));
	if (Local_13.f_7.f_1 != iParam0)
	{
		Local_13.f_7.f_1 = iParam0;
	}
}

int func_540()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Local_13.f_7.f_22 != 255)
	{
		iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_22);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
		{
			return 1;
		}
		else
		{
			Local_13.f_7.f_22 = 255;
		}
	}
	if (Local_13.f_7.f_22 == 255)
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)))
			{
				if (func_434(2048, iVar2))
				{
					iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
					if (NETWORK::_0x255A5EF65EDA9167(iVar0))
					{
						iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_22);
						if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
						{
							Local_13.f_7.f_22 = iVar0;
							return 1;
						}
					}
				}
			}
			iVar2++;
		}
	}
	Local_13.f_7.f_22 = 255;
	return 0;
}

bool func_541(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (iParam2 == -1)
	{
		iParam2 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	fVar0 = &(Local_74[iParam2 /*31*/])->f_4.f_2[iParam0];
	if (fVar0 < 0f)
	{
		if (bParam3)
		{
			iVar1 = func_101(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam2));
				if (NETWORK::_0x255A5EF65EDA9167(iVar2))
				{
					fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), func_745(iVar2));
					if (fVar0 < 0f)
					{
						return false;
					}
					(Local_74[iParam2 /*31*/])->f_4.f_2[iParam0] = fVar0;
				}
			}
		}
		return false;
	}
	return fVar0 <= fParam1;
}

int func_542()
{
	if (func_507(512))
	{
		return 69;
	}
	if (func_507(1024))
	{
		return 70;
	}
	return 68;
}

char* func_543(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "move";
		case 1:
			return "FRONT_BKN";
		case 2:
			return "FRONT_BKN";
		case 3:
			return "FRONT_CO";
		case 4:
			return "FRONT_CO";
		case 5:
			return "CALLOVER_N";
		case 6:
			return "CALLOVER_N";
		case 7:
			return "give_recieve_letter_plyr";
		case 8:
			return "give_recieve_letter_mp";
		case 9:
			return "intro";
		case 10:
			return "loop";
		case 11:
			return "outro";
		default:
			break;
	}
	return "";
}

void func_544(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_545(int* iParam0, int iParam1)
{
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam1, iParam0, 15))
	{
		return 0;
	}
	if (iParam0->f_4.f_1 != Local_1067.f_1)
	{
		return 0;
	}
	if (iParam0->f_4 != Local_1067)
	{
		return 0;
	}
	if (iParam0->f_4.f_2 != Local_1067.f_2)
	{
		return 0;
	}
	if (iParam0->f_4.f_3 != Local_1067.f_3)
	{
		return 0;
	}
	return 1;
}

void func_546(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;

	iVar3 = 255;
	bVar7 = false;
	switch (iParam0->f_9)
	{
		case 377515857:
			iVar0 = iParam0->f_11;
			iVar1 = func_101(iVar0);
			if (iParam0->f_12 == -1)
			{
				iVar4 = iVar1;
			}
			else
			{
				iVar6 = iParam0->f_12;
				switch (iVar6)
				{
					case 0:
						iVar3 = Local_13.f_7.f_20;
						break;
					case 1:
						iVar3 = Local_13.f_7.f_21;
						break;
					case 5:
						iVar4 = iVar1;
						break;
				}
				if (iVar4 == 0)
				{
					if (NETWORK::_0x255A5EF65EDA9167(iVar3))
					{
						iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3);
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
						{
							iVar4 = PLAYER::GET_PLAYER_PED(iVar3);
						}
						else
						{
							iVar4 = iVar1;
						}
					}
					else
					{
						iVar4 = iVar1;
					}
				}
			}
			iVar5 = iParam0->f_13;
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
			{
				if (iParam0->f_12 == -1)
				{
				}
				if (iParam0->f_14 != -1)
				{
					bVar7 = true;
				}
				if (func_746(iVar1, iVar4, iVar5, 0, bVar7))
				{
					if (func_747(iVar5))
					{
						func_748(1891783641, iVar1, 1);
					}
					Local_1067.f_18.f_151 = iVar0;
					Local_1067.f_18.f_152 = iVar5;
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						func_505(32);
					}
				}
			}
			break;
	}
}

int func_547(int iParam0)
{
	return (Local_1067.f_271.f_7[iParam0 /*11*/])->f_3;
}

void func_548(int iParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;

	if (!MISC::IS_BIT_SET(Local_1067.f_271.f_5, iParam0))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_38[iParam0])))
		{
			iVar1 = NETWORK::NET_TO_PED(&(Local_13.f_38[iParam0]));
			Local_1067.f_271.f_7[iParam0 /*11*/] = iVar1;
			(Local_74[iParam1 /*31*/])->f_4.f_2[iParam0] = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false));
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				EVENT::_0xBB1E41DD3D3C6250(iVar1, "MpRandomEvent", 1);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					func_749(iVar1, 1f, 0);
				}
				sVar0 = func_750(iParam0);
				if (!MISC::_0x375F5870A7B8BEC1(sVar0))
				{
					func_751(iVar1, sVar0, 1);
				}
				MISC::SET_BIT(&(Local_1067.f_271.f_5), iParam0);
				if (bParam2)
				{
					func_752(iParam0);
				}
			}
		}
	}
}

void func_549(var uParam0, int iParam1, int iParam2)
{
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamA", true);
			break;
		case 1:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamB", true);
			break;
		case 2:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamA", true);
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamB", true);
			break;
		default:
			break;
	}
}

int func_550()
{
	int iVar0;

	iVar0 = func_197();
	switch (iVar0)
	{
		case 3:
			return -1227782948;
		case 4:
			return -1227782948;
		case 5:
			return -1227782948;
		case 6:
			return -1227782948;
		case 7:
			return -1227782948;
		default:
			break;
	}
	return 161068336;
}

bool func_551(var uParam0, int iParam1, char* sParam2)
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

int func_552()
{
	int iVar0;

	iVar0 = func_197();
	switch (iVar0)
	{
		case 3:
			return -1227782948;
		case 4:
			return -1227782948;
		case 5:
			return -1227782948;
		case 6:
			return -1227782948;
		case 7:
			return -1227782948;
		default:
			break;
	}
	return 161068336;
}

void func_553(var uParam0, int iParam1, int iParam2)
{
	if (PED::IS_PED_HUMAN(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamA", true);
			break;
		case 1:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamB", true);
			break;
		case 2:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamA", true);
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamB", true);
			break;
		default:
			break;
	}
}

struct<2> func_554(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;

	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_753(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_754(iParam1, iVar4) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_555()
{
	Local_1067.f_271.f_6 = 0;
	Local_1067.f_271.f_2 = 0;
	Local_1067.f_271.f_1 = -1;
}

void func_556()
{
	int iVar0;

	Local_1067.f_377.f_64 = 0;
	Local_1067.f_377.f_63 = 0;
	Local_1067.f_377.f_66 = 0;
	Local_1067.f_377.f_67 = 0;
	Local_1067.f_377.f_70 = -1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		SCRIPTS::_0xDE544B7EC0C187CC(Local_1067.f_377.f_71[iVar0]);
		SCRIPTS::_0x20F4CB76689ACDBC(Local_1067.f_377.f_79[iVar0]);
		SCRIPTS::_0xDE544B7EC0C187CC(Local_1067.f_377.f_75[iVar0]);
		func_755(iVar0);
		iVar0++;
	}
}

void func_557()
{
	int iVar0;

	Local_1067.f_520.f_5 = 0;
	Local_1067.f_520.f_6 = -1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_756(func_155(iVar0));
		iVar0++;
	}
}

void func_558(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_1067.f_271.f_2 = (Local_1067.f_271.f_2 || (Local_74[iParam0 /*31*/])->f_4);
		Local_1067.f_271.f_1 = (Local_1067.f_271.f_1 && (Local_74[iParam0 /*31*/])->f_4);
		Local_1067.f_271.f_6 = (Local_1067.f_271.f_6 || (Local_74[iParam0 /*31*/])->f_4.f_1);
	}
}

void func_559(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		Local_1067.f_377.f_64 = (Local_1067.f_377.f_64 || (Local_74[iParam0 /*31*/])->f_10.f_1);
		Local_1067.f_377.f_63 = (Local_1067.f_377.f_63 || (Local_74[iParam0 /*31*/])->f_10);
		Local_1067.f_377.f_66 = (Local_1067.f_377.f_66 || (Local_74[iParam0 /*31*/])->f_10.f_3);
		Local_1067.f_377.f_67 = (Local_1067.f_377.f_67 || (Local_74[iParam0 /*31*/])->f_10.f_4);
		Local_1067.f_377.f_68 = (Local_1067.f_377.f_68 || (Local_74[iParam0 /*31*/])->f_10.f_5);
		Local_1067.f_377.f_69 = (Local_1067.f_377.f_69 || (Local_74[iParam0 /*31*/])->f_10.f_6);
		Local_1067.f_377.f_94 = (Local_1067.f_377.f_94 || (Local_74[iParam0 /*31*/])->f_10.f_2);
		Local_1067.f_377.f_70 = (Local_1067.f_377.f_70 && (Local_74[iParam0 /*31*/])->f_10.f_7);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			SCRIPTS::_0xFFDDF802279BE128((Local_74[iParam0 /*31*/])->f_10.f_9[iVar0], Local_1067.f_377.f_71[iVar0], Local_1067.f_377.f_71[iVar0]);
			SCRIPTS::_0xFFDDF802279BE128((Local_74[iParam0 /*31*/])->f_10.f_9[iVar0], Local_1067.f_377.f_71[iVar0], Local_1067.f_377.f_75[iVar0]);
			SCRIPTS::_0xE4ABE20DCE7C7CFE((Local_74[iParam0 /*31*/])->f_10.f_9[iVar0], Local_1067.f_377.f_71[iVar0], Local_1067.f_377.f_79[iVar0]);
			func_757(func_574(iVar0), iParam0);
			iVar0++;
		}
	}
}

void func_560(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1 && iParam2 != iParam0)
	{
		(Local_74[iParam2 /*31*/])->f_27 = ((Local_74[iParam2 /*31*/])->f_27 || (Local_74[iParam0 /*31*/])->f_27);
	}
}

void func_561(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_1067.f_520.f_5 = (Local_1067.f_520.f_5 || (Local_74[iParam0 /*31*/])->f_28);
		Local_1067.f_520.f_6 = (Local_1067.f_520.f_6 && (Local_74[iParam0 /*31*/])->f_28);
		if (!func_493(2))
		{
			if (func_493(1))
			{
				if (func_161((Local_74[iParam0 /*31*/])->f_28, 1))
				{
					Local_1067.f_520.f_7 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0));
					Local_1067.f_520.f_8 = (Local_74[iParam0 /*31*/])->f_28.f_1;
					Local_1067.f_520.f_9 = (Local_74[iParam0 /*31*/])->f_28.f_2;
					func_626(2);
					if (iParam0 != iParam2)
					{
						if (func_161((Local_74[iParam2 /*31*/])->f_28, 1))
						{
							func_305(&((Local_74[iParam2 /*31*/])->f_28), 1);
						}
					}
				}
			}
		}
	}
	if (iParam0 == 31)
	{
		if (!func_161(Local_1067.f_520.f_5, 1))
		{
			Local_1067.f_520.f_7 = 255;
			Local_1067.f_520.f_8 = -1;
			Local_1067.f_520.f_9 = -1;
			func_610(2);
		}
	}
}

int func_562(int iParam0)
{
	return iParam0;
}

int func_563(int iParam0, int iParam1, int iParam2)
{
	float fVar0;

	fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_COORDS(iParam1, true, false));
	(Local_74[NETWORK::PARTICIPANT_ID_TO_INT() /*31*/])->f_4.f_2[iParam2] = fVar0;
	if (fVar0 > (Local_1067.f_271.f_7[iParam2 /*11*/])->f_9)
	{
		return 0;
	}
	return 1;
}

void func_564(var uParam0)
{
	func_758(uParam0, 0f);
}

bool func_565(var uParam0)
{
	return func_759(*uParam0, 1);
}

int func_566(var uParam0, float fParam1)
{
	if (!func_565(uParam0))
	{
		return 0;
	}
	if (func_760(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

void func_567(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_568(int iParam0)
{
	return 1;
}

void func_569(int iParam0, int iParam1)
{
	func_305(&((Local_1067.f_271.f_7[iParam0 /*11*/])->f_2), iParam1);
}

bool func_570(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return func_161((Local_74[iParam1 /*31*/])->f_4, iParam0);
}

void func_571(int iParam0)
{
	func_206(&((Local_74[NETWORK::PARTICIPANT_ID_TO_INT() /*31*/])->f_4), iParam0);
}

void func_572(int iParam0)
{
	func_305(&((Local_74[NETWORK::PARTICIPANT_ID_TO_INT() /*31*/])->f_4), iParam0);
}

void func_573()
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar5 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar6 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar4 = func_574(iVar0);
		if (!func_575(iVar4))
		{
		}
		else if (!func_587(iVar4, iVar5))
		{
			if (func_576(iVar4, &iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, iVar6, 0, 0))
				{
					func_761(iVar4);
					func_762(iVar4);
				}
			}
		}
		iVar0++;
	}
}

int func_574(int iParam0)
{
	return iParam0;
}

bool func_575(int iParam0)
{
	return !MISC::IS_BIT_SET(Local_1067.f_377.f_67, iParam0);
}

int func_576(int iParam0, int iParam1)
{
	if (!MISC::IS_BIT_SET(Local_1067.f_377.f_93, iParam0))
	{
		return 0;
	}
	*iParam1 = &Local_1067.f_377.f_83[iParam0 /*3*/];
	iParam1->f_1 = (Local_1067.f_377.f_83[iParam0 /*3*/])->f_1;
	iParam1->f_2 = (Local_1067.f_377.f_83[iParam0 /*3*/])->f_2;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return 0;
	}
	return 1;
}

void func_577(int iParam0)
{
}

bool func_578(int iParam0)
{
	return MISC::IS_BIT_SET(Local_1067.f_377.f_66, iParam0);
}

bool func_579(int iParam0)
{
	return MISC::IS_BIT_SET((Local_74[NETWORK::PARTICIPANT_ID_TO_INT() /*31*/])->f_10.f_3, iParam0);
}

bool func_580(int iParam0)
{
	return SCRIPTS::_0x179A6F0EE2E79026(Local_1067.f_377.f_75[iParam0]);
}

void func_581(int iParam0)
{
	MISC::CLEAR_BIT(&((Local_74[NETWORK::PARTICIPANT_ID_TO_INT() /*31*/])->f_10.f_3), iParam0);
}

bool func_582(int iParam0)
{
	return SCRIPTS::_0x179A6F0EE2E79026((Local_74[NETWORK::PARTICIPANT_ID_TO_INT() /*31*/])->f_10.f_9[iParam0]);
}

void func_583(int iParam0)
{
	SCRIPTS::_0xDE544B7EC0C187CC((Local_74[NETWORK::PARTICIPANT_ID_TO_INT() /*31*/])->f_10.f_9[iParam0]);
}

bool func_584(int iParam0)
{
	return !MISC::IS_BIT_SET(Local_1067.f_377.f_68, iParam0);
}

bool func_585(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return MISC::IS_BIT_SET((Local_74[iParam1 /*31*/])->f_10, iParam0);
}

int func_586(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_434(67108864, 255))
	{
		return 1;
	}
	if (func_434(134217728, 255))
	{
		func_435(1048576);
		return 1;
	}
	if (func_449(134217728, 255))
	{
		if (func_520(Local_1067.f_18.f_158, 500))
		{
			func_457(134217728);
		}
	}
	iVar0 = func_101(iParam0);
	switch (func_763(iParam0))
	{
		case 0:
			iVar1 = ENTITY::_0xEF2D9ED7CE684F08(iVar0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (iVar1 == PLAYER::PLAYER_PED_ID())
				{
					func_435(67108864);
				}
			}
			if (!func_524(8192))
			{
				if (PED::_0x833F0053340EF413(iVar0))
				{
					vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
					if (Global_1939178->f_40 == 1151374672)
					{
						if (MISC::_IS_PROJECTILE_TYPE_IN_RADIUS(vVar2, 1151374672, 2f, true))
						{
							func_435(67108864);
						}
					}
				}
			}
			break;
		case 1:
			if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && TASK::_0xEFC4303DDC6E60D3(PLAYER::PLAYER_PED_ID())) && TASK::_0xED1F514AF4732258(PLAYER::PLAYER_PED_ID()) == iVar0)
			{
				func_435(134217728);
			}
			break;
	}
	return 0;
}

bool func_587(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return MISC::IS_BIT_SET((Local_74[iParam1 /*31*/])->f_10.f_2, iParam0);
}

int func_588(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_764(uParam2, 1, iVar0);
	}
	if (!Global_1939178->f_6 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_765(iParam0, uParam2))
			{
				*iParam3 = 128;
				func_766(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1939178->f_21)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_767(iParam0, uParam2))
				{
					*iParam3 = 8;
					func_766(iParam0, uParam2, *iParam3);
					return 1;
				}
				else if (func_768(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					func_766(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_769(iParam0, uParam2))
				{
					*iParam3 = 64;
					func_766(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (Global_1939178->f_20 && func_770(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_766(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1939178->f_19)
		{
			if (func_771(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_772(Global_34, iParam0, uParam2))
					{
						*iParam3 = 4;
						func_766(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_773(Global_34, iParam0, uParam2))
					{
						*iParam3 = 256;
						func_766(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1939178->f_23) < 300)
			{
				if (func_774(Global_34, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					func_766(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
			else if (func_774(Global_34, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				func_766(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1939178->f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_775(iParam0, uParam2))
				{
					*iParam3 = 32;
					func_766(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1939178->f_19 || uParam2->f_12 < 20f)
			{
				if (func_776(&iParam0, uParam2))
				{
					*iParam3 = 4096;
					func_766(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (Global_1939178->f_24 || Global_1939178->f_25)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_777(uParam2, 4000))
				{
					if ((func_778(iParam0, Global_1939178->f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_779(uParam2, iParam0)) && func_780(uParam2, iParam0))
					{
						*iParam3 = 2;
						func_766(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_778(iParam0, Global_1939178->f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_779(uParam2, iParam0)) && func_780(uParam2, iParam0))
				{
					*iParam3 = 2;
					func_766(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
			else if (Global_1939178->f_34 == 0)
			{
				if (Global_1939178->f_35 != 0)
				{
					if (func_781(iParam0, Global_1939178->f_35))
					{
						func_782();
						*iParam3 = 2;
						func_766(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_783(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_784() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_782();
						*iParam3 = 2;
						func_766(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
			if (Global_1939178->f_36 != 0)
			{
				if (func_785())
				{
					if (func_781(iParam0, Global_1939178->f_36))
					{
						func_782();
						*iParam3 = 2;
						func_766(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_786(uParam2, iParam0))
			{
				*iParam3 = 1024;
				func_766(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1939178->f_50)
		{
			if (*uParam2 & -2147483648 != 0)
			{
				if (func_787(func_745(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(iParam0, true, false)) <= uParam2->f_30)
				{
					if (func_788(PLAYER::PLAYER_PED_ID(), iParam0, 1060437492 /* Float: 0.707f */) == 0)
					{
						*iParam3 = 1048576;
						func_766(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_28)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_789(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					func_766(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_790(iParam0, uParam2))
					{
						*iParam3 = 8192;
						func_766(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_791(iParam0, uParam2))
				{
					*iParam3 = 32768;
					func_766(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_792(uParam2, 4000))
				{
					if (func_793(&iParam0, uParam2))
					{
						*iParam3 = 512;
						func_766(iParam0, uParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_20)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_794(iParam0, uParam2))
				{
					*iParam3 = 65536;
					uParam2->f_4 = 0;
					func_766(iParam0, uParam2, *iParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_795(uParam2, iParam0))
			{
				*iParam3 = 1;
				func_766(iParam0, uParam2, *iParam3);
				return 1;
			}
		}
	}
	return 0;
}

int func_589(var uParam0)
{
	return uParam0->f_22;
}

int func_590(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!func_163())
	{
		func_642();
	}
	if (func_434(67108864, 255) || func_434(134217728, 255))
	{
		if (!func_496())
		{
			func_796(0);
		}
		return 1;
	}
	switch (func_763(iParam0))
	{
		case 0:
			switch (func_197())
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					if (func_456(64))
					{
						if ((!func_456(128) || Local_1067.f_18.f_158 == 0) || NETWORK::GET_TIME_DIFFERENCE(Local_1067.f_18.f_158, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
						{
							if (func_456(128))
							{
								if (Local_1067.f_18.f_158 == 0)
								{
									Local_1067.f_18.f_158 = NETWORK::GET_NETWORK_TIME_ACCURATE();
								}
							}
							if (!func_797(iParam1, 0, 0, 0, 0))
							{
								return 0;
							}
						}
					}
					else if ((func_456(16) || func_456(32)) || func_449(2048, 255))
					{
						if (Local_1067.f_18.f_158 == 0 || NETWORK::GET_TIME_DIFFERENCE(Local_1067.f_18.f_158, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
						{
							if (Local_1067.f_18.f_158 == 0)
							{
								Local_1067.f_18.f_158 = NETWORK::GET_NETWORK_TIME_ACCURATE();
							}
							if (!func_797(iParam1, 0, 1, 0, 0) || iParam1 == 256)
							{
								return 0;
							}
						}
					}
					break;
				case 10:
					if (iParam1 == 8)
					{
						if (WEAPON::_0xCB690F680A3EA971(PLAYER::PLAYER_PED_ID(), 4))
						{
							func_498(134217728);
						}
						else
						{
							func_457(134217728);
						}
					}
					if (func_524(4096))
					{
						Local_1067.f_18.f_158 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					}
					if ((!func_524(4096) || Local_1067.f_18.f_158 == 0) || NETWORK::GET_TIME_DIFFERENCE(Local_1067.f_18.f_158, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
					{
						if (!func_797(iParam1, 1, 0, 0, 0) && iParam1 != 1024)
						{
							return 0;
						}
					}
					break;
				case 11:
					if (func_524(8192))
					{
						Local_1067.f_18.f_158 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					}
					if ((!func_524(8192) || Local_1067.f_18.f_158 == 0) || NETWORK::GET_TIME_DIFFERENCE(Local_1067.f_18.f_158, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
					{
						if (func_524(8192))
						{
							switch (iParam1)
							{
								case 2:
								case 4:
								case 8:
									if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, false, 0, false))
									{
										if ((iVar0 == joaat("weapon_lasso") || iVar0 == -680302000) || iVar0 == 1151374672)
										{
											return 0;
										}
									}
									break;
							}
						}
						if (!func_797(iParam1, 1, 1, 0, 0) && iParam1 != 1024)
						{
							return 0;
						}
					}
					break;
				case 2:
					if (func_449(2, 255))
					{
						if (iParam1 == 1024)
						{
							return 0;
						}
					}
					break;
			}
			if (iParam1 == 1024)
			{
				func_450(1250422342, 0, 0);
				func_435(1048576);
			}
			break;
		case 2:
			if (func_449(64, 255))
			{
				return 0;
			}
			break;
		case 1:
			if (!func_797(iParam1, 0, 0, 0, 0))
			{
				return 0;
			}
			func_435(1048576);
			break;
	}
	if (!func_496())
	{
		func_796(0);
	}
	return 1;
}

void func_591(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	MISC::SET_BIT(&((Local_74[iVar0 /*31*/])->f_10), iParam0);
	if (bParam1)
	{
		(Local_74[iVar0 /*31*/])->f_10.f_13[iParam0] = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

int func_592(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	if (!func_798(iParam1))
	{
		iVar0 = PLAYER::PLAYER_PED_ID();
		if (uParam0->f_2 <= 25f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) >= 4f)
		{
			if (PED::IS_PED_IN_COVER(iVar0, 0, 0) || PED::IS_PED_GOING_INTO_COVER(iVar0))
			{
			}
			else
			{
				return 1;
			}
		}
	}
	if (func_799(*uParam0, &(Local_1067.f_377.f_31), &uVar1, uParam0->f_2))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), *uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_593(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return MISC::IS_BIT_SET((Local_74[iParam1 /*31*/])->f_10.f_1, iParam0);
}

int func_594(int iParam0)
{
	return 1;
}

void func_595(int iParam0)
{
}

void func_596(int iParam0)
{
	MISC::SET_BIT(&((Local_74[NETWORK::PARTICIPANT_ID_TO_INT() /*31*/])->f_10.f_1), iParam0);
}

bool func_597(int iParam0)
{
	var uVar0;

	SCRIPTS::_0x20F4CB76689ACDBC(&uVar0);
	SCRIPTS::_0x64F765D9A1F8F02C(&uVar0, Local_1067.f_377.f_79[iParam0], &uVar0);
	return !SCRIPTS::_0x179A6F0EE2E79026(&uVar0);
}

int func_598(int iParam0, var uParam1, int iParam2, var uParam3)
{
	*uParam1 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(*uParam1))
	{
		return 0;
	}
	*iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX(*uParam1);
	if (!NETWORK::_0x255A5EF65EDA9167(*iParam2))
	{
		return 0;
	}
	*uParam3 = PLAYER::GET_PLAYER_PED(*iParam2);
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam3))
	{
		return 0;
	}
	return 1;
}

bool func_599(int iParam0, int iParam1)
{
	return SCRIPTS::_0x72B2E00C9BAC6789(Local_1067.f_377.f_71[iParam0], iParam1);
}

int func_600(int iParam0, var uParam1, int iParam2, var uParam3)
{
	return 1;
}

void func_601(int iParam0, int iParam1)
{
	SCRIPTS::_0x31010318BA9897AC((Local_74[NETWORK::PARTICIPANT_ID_TO_INT() /*31*/])->f_10.f_9[iParam0], iParam1);
}

float func_602()
{
	int iVar0;
	float fVar1;

	if (Local_1067.f_479.f_3 == 0)
	{
		Local_1067.f_479.f_3 = MISC::GET_GAME_TIMER();
		return 0.03125f;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	fVar1 = (BUILTIN::TO_FLOAT((iVar0 - Local_1067.f_479.f_3)) * 0.001f);
	Local_1067.f_479.f_3 = iVar0;
	return fVar1;
}

bool func_603(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) };
	return func_800(vVar0, vParam0) > func_800(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

int func_604(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, float fParam6)
{
	float fVar0;
	bool bVar1;

	iParam2 = iParam2;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
	{
		return 0;
	}
	if (bParam5)
	{
		fVar0 = (fParam6 * fParam6);
	}
	else
	{
		fVar0 = BUILTIN::VDIST2(Global_35, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
	}
	switch (*uParam0)
	{
		case 0:
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6) && !PED::_0x5102307CE88798EB(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6)))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
			}
			else if (func_801(uParam0, fVar0, (fParam1 * fParam1), iParam3))
			{
				*uParam0 = 1;
			}
			else
			{
				uParam0->f_8 = 0f;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
			{
				bVar1 = false;
			}
			else if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
			{
				if (fParam4 > 0f)
				{
					bVar1 = PED::_0x164CECC59E70DF86(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6), fParam4);
				}
				else
				{
					bVar1 = PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
				}
			}
			else
			{
				bVar1 = ENTITY::_0xC8CCDB712FBCBA92(uParam0->f_6);
			}
			if (!bVar1)
			{
				uParam0->f_1.f_4 = 1;
			}
			if (bVar1)
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
				{
					*uParam0 = 2;
				}
				else
				{
					if (bParam5 && !ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
					{
						fVar0 = BUILTIN::VDIST2(Global_35, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
					}
					if (func_802(uParam0, fVar0, (fParam1 * fParam1), iParam3))
					{
						*uParam0 = 0;
					}
					else
					{
						*uParam0 = 2;
					}
				}
			}
			else if (uParam0->f_1.f_4)
			{
				uParam0->f_1.f_4 = 0;
				*uParam0 = 0;
				uParam0->f_8 = 0f;
			}
			break;
		case 2:
			*uParam0 = 0;
			break;
	}
	if (uParam0->f_8 != 0f)
	{
		uParam0->f_7 = (func_803() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

int func_605(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar1 = 0;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(((*uParam0)[iVar0 /*9*/])->f_6) && ((*uParam0)[iVar0 /*9*/])->f_7 > 0f) && ENTITY::IS_ENTITY_ON_SCREEN(((*uParam0)[iVar0 /*9*/])->f_6))
		{
			iVar1++;
			fVar2 = (fVar2 + ((*uParam0)[iVar0 /*9*/])->f_7);
		}
		iVar0++;
	}
	if (iParam1 > 1)
	{
		iParam1 = (iParam1 - 1);
	}
	if (iVar1 < iParam1)
	{
		return 0;
	}
	if (fVar2 < fParam2)
	{
		return 0;
	}
	func_154(uParam0);
	return 1;
}

int func_606(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		return 0;
	}
	return 1;
}

void func_607()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_804(0, 0);
	if (iVar0 != Local_1067.f_520.f_3)
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			if (func_616())
			{
				func_805(Local_1067.f_520.f_3.f_1);
				func_157(Local_1067.f_520.f_3.f_1);
			}
			Local_1067.f_520.f_3 = iVar0;
			Local_1067.f_520.f_3.f_1 = -1;
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				iVar2 = 0;
				while (iVar2 < func_155(3))
				{
					if (iVar1 == func_156(iVar2))
					{
						Local_1067.f_520.f_3.f_1 = iVar2;
					}
					else
					{
						iVar2++;
					}
				}
			}
			if (func_616())
			{
				func_806(Local_1067.f_520.f_3.f_1);
				func_617(Local_1067.f_520.f_3.f_1);
			}
		}
		else
		{
			if (func_616())
			{
				func_805(Local_1067.f_520.f_3.f_1);
				func_157(Local_1067.f_520.f_3.f_1);
			}
			Local_1067.f_520.f_3 = iVar0;
			Local_1067.f_520.f_3.f_1 = -1;
		}
	}
}

bool func_608(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return func_161((Local_74[iParam1 /*31*/])->f_28, iParam0);
}

void func_609(int iParam0)
{
	func_305(&((Local_74[NETWORK::PARTICIPANT_ID_TO_INT() /*31*/])->f_28), iParam0);
}

void func_610(int iParam0)
{
	func_305(&(Local_1067.f_520.f_1), iParam0);
}

bool func_611()
{
	return func_161(Local_13.f_58.f_2, 4);
}

int func_612()
{
	if (Local_1067.f_520 != Local_13.f_58)
	{
		return !func_611();
	}
	return 0;
}

bool func_613(int iParam0)
{
	return func_161(Local_13.f_58.f_2, iParam0);
}

void func_614(var uParam0, var uParam1)
{
}

void func_615(int iParam0, var uParam1)
{
	if (iParam0 != 0)
	{
		return;
	}
	switch (func_807(uParam1))
	{
		case 0:
			func_329(iParam0, 0);
			break;
		case 1:
			func_329(iParam0, 1);
			func_808(iParam0, 0, "GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 1, 0, -1, 0);
			func_808(iParam0, 1, "GREET_NEG", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 1, 0, -1, 0);
			break;
		case 2:
			func_329(iParam0, 1);
			if (func_502(2, 255))
			{
				func_808(iParam0, 0, "GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 1, 0, -1, 1);
				func_808(iParam0, 1, "GREET_NEG", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 1, 0, -1, 1);
			}
			else
			{
				func_808(iParam0, 0, "GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 1, 0, -1, 0);
				func_808(iParam0, 1, "GREET_NEG", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 1, 0, -1, 0);
			}
			break;
		case 3:
			func_329(iParam0, 1);
			func_808(iParam0, 0, "NB_PHOTOGRAPHY_ILO_POSE", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 1, 0, -1, 0);
			func_808(iParam0, 1, "NB_PHOTOGRAPHY_ILO_STEP", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 1, 0, -1, 0);
			break;
		case 4:
			func_329(iParam0, 1);
			func_809(iParam0, 0, 0, 1);
			func_809(iParam0, 1, 0, 1);
			break;
		case 5:
			func_329(iParam0, 0);
			func_810(iParam0, 0);
			func_810(iParam0, 1);
			break;
	}
}

int func_616()
{
	if (Local_1067.f_520.f_3.f_1 != -1)
	{
		return 1;
	}
	return 0;
}

void func_617(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_811(iParam0, iVar0, 1);
		iVar0++;
	}
	func_812(iParam0, 2);
}

void func_618(int iParam0)
{
	func_206(&((Local_74[NETWORK::PARTICIPANT_ID_TO_INT() /*31*/])->f_28), iParam0);
}

bool func_619(int iParam0)
{
	return func_161((Local_1067.f_520.f_10[iParam0 /*29*/])->f_3, 1);
}

bool func_620(int iParam0, bool bParam1)
{
	if (bParam1 && !func_438(iParam0))
	{
		return false;
	}
	return !func_813(iParam0, 4);
}

void func_621(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_438(iParam0))
	{
		return;
	}
	iVar0 = func_707(iParam0);
	if (bParam1)
	{
		func_814(iParam0, 4);
		if (bParam3)
		{
			func_815(iVar0, 1);
		}
		func_816(iVar0, 1);
	}
	else
	{
		func_817(iParam0, 4);
		func_816(iVar0, 0);
	}
}

int func_622()
{
	if (func_28() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_623(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_438(iParam0))
	{
		return false;
	}
	iVar0 = func_707(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

int func_624(int iParam0, int iParam1, var uParam2)
{
	return 1;
}

void func_625(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_101(iParam0);
	switch (func_807(func_818()))
	{
		case 1:
			if (func_819() == PLAYER::PLAYER_ID())
			{
				switch (iParam1)
				{
					case 0:
						func_820(0, 1);
						func_435(4096);
						func_435(1);
						func_646(1);
						func_821();
						TASK::_TASK_EMOTE_2(PLAYER::PLAYER_PED_ID(), 0, 0, -822629770, 1, 1, 0, 0);
						break;
					case 1:
						func_820(0, 1);
						func_435(2);
						func_646(2);
						func_435(8192);
						func_821();
						TASK::_TASK_EMOTE_2(PLAYER::PLAYER_PED_ID(), 0, 0, -653113914, 1, 1, 0, 0);
						break;
				}
			}
			break;
		case 2:
			if (func_819() == PLAYER::PLAYER_ID())
			{
				switch (iParam1)
				{
					case 0:
						func_820(0, 1);
						func_435(4096);
						func_435(1);
						func_646(1);
						func_821();
						TASK::_TASK_EMOTE_2(PLAYER::PLAYER_PED_ID(), 0, 0, -822629770, 1, 1, 0, 0);
						break;
					case 1:
						func_820(0, 1);
						func_435(4);
						func_646(2);
						func_435(8192);
						func_821();
						TASK::_TASK_EMOTE_2(PLAYER::PLAYER_PED_ID(), 0, 0, -653113914, 1, 1, 0, 0);
						break;
				}
			}
			break;
		case 3:
			if (func_819() == PLAYER::PLAYER_ID())
			{
				switch (iParam1)
				{
					case 0:
						func_820(0, 1);
						func_435(4096);
						func_435(8);
						func_821();
						TASK::_TASK_EMOTE_2(PLAYER::PLAYER_PED_ID(), 0, 0, -653113914, 1, 1, 0, 0);
						break;
					case 1:
						func_820(0, 1);
						func_435(4096);
						func_103(262144);
						func_435(16);
						func_821();
						func_822(PLAYER::PLAYER_PED_ID(), "SILENT_PLAYER_MOVE_BACK", 291934926, iVar0, 1, 0, 0, 1);
						break;
				}
			}
			break;
	}
}

void func_626(int iParam0)
{
	func_206(&(Local_1067.f_520.f_1), iParam0);
}

char* func_627()
{
	int iVar0;
	int iVar1;

	iVar0 = func_197();
	iVar1 = func_201();
	switch (iVar1)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					return "NB_PHOTOGRAPHY_H_CAMERA_CLIFF";
				case 3:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL";
				case 4:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL";
				case 5:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL";
				case 6:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL";
				case 7:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL";
				default:
					break;
			}
			return "NB_PHOTOGRAPHY_H_CAMERA_CLIFF";
		case 1:
			switch (iVar0)
			{
				case 1:
					return "NB_PHOTOGRAPHY_H_CAMERA_HORSE";
				case 2:
					return "NB_PHOTOGRAPHY_H_CAMERA_HORSE";
				case 8:
					return "NB_PHOTOGRAPHY_H_CAMERA_FISH";
				case 10:
					return "NB_PHOTOGRAPHY_H_CAMERA_GANG";
				case 9:
					return "NB_PHOTOGRAPHY_H_CAMERA_GANG";
				case 11:
					return "NB_PHOTOGRAPHY_H_CAMERA_HOGTIED";
				default:
					break;
			}
			return "NB_PHOTOGRAPHY_H_CAMERA_HORSE";
		case 2:
			switch (iVar0)
			{
				case 3:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL_DS";
				case 4:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL_DS";
				case 5:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL_DS";
				case 6:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL_DS";
				case 7:
					return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL_DS";
				case 1:
					return "NB_PHOTOGRAPHY_H_CAMERA_HORSE_DS";
				case 2:
					return "NB_PHOTOGRAPHY_H_CAMERA_HORSE_DS";
				default:
					break;
			}
			return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL_DS";
	}
	switch (iVar0)
	{
		case 0:
			return "NB_PHOTOGRAPHY_H_CAMERA_CLIFF";
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return "NB_PHOTOGRAPHY_H_CAMERA_ANIMAL";
		case 1:
			return "NB_PHOTOGRAPHY_H_CAMERA_HORSE";
		case 2:
			return "NB_PHOTOGRAPHY_H_CAMERA_HORSE";
		case 8:
			return "NB_PHOTOGRAPHY_H_CAMERA_FISH";
		case 10:
			return "NB_PHOTOGRAPHY_H_CAMERA_GANG";
		case 9:
			return "NB_PHOTOGRAPHY_H_CAMERA_GANG";
		case 11:
			return "NB_PHOTOGRAPHY_H_CAMERA_HOGTIED";
	}
	return "NB_PHOTOGRAPHY_H_CAMERA_CLIFF";
}

var func_628(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_629()
{
	int iVar0;

	iVar0 = func_201();
	switch (iVar0)
	{
		case 0:
			return "NB_PHOTOGRAPHY_H_REWARD_TS";
		case 1:
			return "NB_PHOTOGRAPHY_H_REWARD_FS";
		case 2:
			if (func_495())
			{
				return "NB_PHOTOGRAPHY_H_REWARD_ANIMAL_DS";
			}
			else
			{
				return "NB_PHOTOGRAPHY_H_REWARD_HORSE_DS";
			}
			break;
	}
	return "NB_PHOTOGRAPHY_H_REWARD_TS";
}

char* func_630(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_197();
	iVar1 = func_201();
	iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID());
	switch (iVar1)
	{
		case 0:
			switch (iParam0)
			{
				case 1048576:
					return "NB_PHOTOGRAPHY_H_CAMERA";
				case 2097152:
					return "NB_PHOTOGRAPHY_H_PHOTO";
				case 536870912:
					return "NB_PHOTOGRAPHY_H_TOO_CLOSE";
				case 1073741824:
					return "NB_PHOTOGRAPHY_H_TOO_FAR";
				case 4194304:
					if (func_495())
					{
						return "NB_PHOTOGRAPHY_H_FRAME_ANIMAL_TS";
					}
					else if (iVar0 == 0)
					{
						return "NB_PHOTOGRAPHY_H_FRAME_CLIFF_TS";
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 1048576:
					return "NB_PHOTOGRAPHY_H_CAMERA";
				case 2097152:
					return "NB_PHOTOGRAPHY_H_PHOTO";
				case 8388608:
					return "NB_PHOTOGRAPHY_H_FRAME_GANG_FS";
				case 16777216:
					return "NB_PHOTOGRAPHY_H_HORSE_FS";
				case 33554432:
					return "NB_PHOTOGRAPHY_H_DISMOUNT_FS";
				case 268435456:
					return "NB_PHOTOGRAPHY_H_HOGTIE";
				case 536870912:
					return "NB_PHOTOGRAPHY_H_TOO_CLOSE";
				case 1073741824:
					return "NB_PHOTOGRAPHY_H_TOO_FAR";
				case 4194304:
					if (func_641())
					{
						return "NB_PHOTOGRAPHY_H_FRAME_GANG_FS";
					}
					else if (iVar0 == 8)
					{
						return "NB_PHOTOGRAPHY_H_FRAME_FISH_FS";
					}
					else if (iVar0 == 1 || iVar0 == 2)
					{
						return "NB_PHOTOGRAPHY_H_FRAME_HORSE_FS";
					}
					break;
				case 67108864:
					if ((NETWORK::_0x255A5EF65EDA9167(iVar2) && NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_21)) && iVar2 == Local_13.f_7.f_21)
					{
						return "NB_PHOTOGRAPHY_H_GATHER_CAMERAMAN";
					}
					else
					{
						return "NB_PHOTOGRAPHY_H_GATHER";
					}
					break;
				case 134217728:
					if ((NETWORK::_0x255A5EF65EDA9167(iVar2) && NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_21)) && iVar2 == Local_13.f_7.f_21)
					{
						return "NB_PHOTOGRAPHY_H_GUNS_CAMERAMAN";
					}
					else if (iVar0 == 9)
					{
						return "NB_PHOTOGRAPHY_H_GUNSUP";
					}
					else if (iVar0 == 10)
					{
						return "NB_PHOTOGRAPHY_H_GUNSAIMED";
					}
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 1048576:
					return "NB_PHOTOGRAPHY_H_CAMERA";
				case 2097152:
					return "NB_PHOTOGRAPHY_H_PHOTO";
				case 16777216:
					return "NB_PHOTOGRAPHY_H_HORSE_DS";
				case 33554432:
					return "NB_PHOTOGRAPHY_H_DISMOUNT_DS";
				case 536870912:
					return "NB_PHOTOGRAPHY_H_TOO_CLOSE";
				case 1073741824:
					return "NB_PHOTOGRAPHY_H_TOO_FAR";
				case 4194304:
					if (func_495())
					{
						return "NB_PHOTOGRAPHY_H_FRAME_ANIMAL_DS";
					}
					else if (iVar0 == 1 || iVar0 == 2)
					{
						return "NB_PHOTOGRAPHY_H_FRAME_HORSE_DS";
					}
					break;
			}
			break;
	}
	return "";
}

int func_631(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(Local_1067.f_271.f_7[iParam0 /*11*/])))
		{
			return 255;
		}
	}
	iVar1 = -1;
	bVar2 = fParam1 > 0f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (&(Local_74[iVar0 /*31*/])->f_4.f_2[iParam0] > -1f)
			{
				if (iVar1 == -1 || &(Local_74[iVar0 /*31*/])->f_4.f_2[iParam0] < &(Local_74[iVar1 /*31*/])->f_4.f_2[iParam0])
				{
					if (!bVar2 || &(Local_74[iVar0 /*31*/])->f_4.f_2[iParam0] <= fParam1)
					{
						iVar1 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	if (iVar1 > -1 && iVar1 < 32)
	{
		return NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
	}
	return 255;
}

int func_632()
{
	switch (func_197())
	{
		case 5:
			return 2;
		case 7:
			return 2;
		default:
			break;
	}
	return 99;
}

int func_633()
{
	switch (func_197())
	{
		case 3:
			return 0;
		case 4:
			return 2;
		case 5:
			return 2;
		case 6:
			return 2;
		case 7:
			return 2;
		default:
			break;
	}
	return 4;
}

int func_634()
{
	switch (func_197())
	{
		case 3:
			return 0;
		case 4:
			return 1;
		case 5:
			return 1;
		case 6:
			return 1;
		case 7:
			return 1;
		default:
			break;
	}
	return 4;
}

int func_635(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	iVar0 = func_631(iParam0, fParam1, bParam2);
	if (NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
	}
	return 255;
}

float func_636(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iParam0))
		{
			return 0f;
		}
	}
	return &((Local_74[iParam0 /*31*/])->f_4.f_2[iParam1]);
}

int func_637(float fParam0)
{
	if (fParam0 < func_530())
	{
		return 4;
	}
	if (fParam0 < func_823())
	{
		return 2;
	}
	if (fParam0 < func_824())
	{
		return 1;
	}
	return 0;
}

int func_638(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	bVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_639(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;

	iVar0 = PLAYER::PLAYER_PED_ID();
	vVar1 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	fVar7 = func_825((func_503(0, -1, 1) * 0.95f), 0f, 20f);
	vVar8 = { func_527(vVar4 - vVar1) };
	vVar11 = { vVar1 + vVar8 * Vector(fVar7, fVar7, fVar7) / Vector(2f, 2f, 2f) };
	vVar14 = { func_826(vVar8, 0f, 0f, 1f) };
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_1067.f_18.f_252))
	{
		Local_1067.f_18.f_252 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar11, vVar14, fVar7, 1f, 2f, "PHOTO_CAM_VOL");
	}
	VOLUME::_0x541B8576615C33DE(Local_1067.f_18.f_252, vVar11);
	VOLUME::_0xA07CF1B21B56F041(Local_1067.f_18.f_252, vVar14);
	VOLUME::_0xA46E98BDC407E23D(Local_1067.f_18.f_252, fVar7, 1f, 1.75f);
	if (!func_502(32, 255))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
		func_646(32);
	}
	if (PED::_0x5102307CE88798EB(iParam0))
	{
		if (!PED::_0x164CECC59E70DF86(iParam0, 0.75f))
		{
			return 1;
		}
		if (!PED::IS_TRACKED_PED_VISIBLE(iParam0))
		{
			return 1;
		}
	}
	if (ENTITY::IS_ENTITY_OCCLUDED(iParam0))
	{
		return 1;
	}
	iVar17 = ITEMSET::CREATE_ITEMSET(true);
	iVar18 = ENTITY::_0x886171A12F400B89(Local_1067.f_18.f_252, iVar17, 1);
	iVar21 = func_197();
	iVar19 = 0;
	while (iVar19 < iVar18)
	{
		iVar20 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar19, iVar17));
		if (ENTITY::DOES_ENTITY_EXIST(iVar20))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar20))
			{
				iVar22 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar20);
				if ((!func_640() || iVar22 != iVar0) && iVar22 != iParam0)
				{
					iVar23 = PED::GET_MOUNT(iParam0);
					if (iVar23 == 0 || iVar23 != iVar22)
					{
						if (iVar21 == 8)
						{
							iVar24 = func_101(2);
						}
						if (iVar24 == 0 || iVar24 != iVar22)
						{
							ITEMSET::_0x20A4BF0E09BEE146(iVar17);
							ITEMSET::DESTROY_ITEMSET(iVar17);
							return 1;
						}
					}
				}
			}
		}
		iVar19++;
	}
	ITEMSET::_0x20A4BF0E09BEE146(iVar17);
	ITEMSET::DESTROY_ITEMSET(iVar17);
	return 0;
}

bool func_640()
{
	return &Global_1956184;
}

int func_641()
{
	switch (func_197())
	{
		case 9:
		case 10:
		case 11:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_642()
{
	int iVar0;

	if (!func_114(32, 255))
	{
		func_827(Local_1067.f_1, Local_1067.f_3);
		if (!func_114(1024, 255))
		{
			func_828(Local_1067.f_1);
			func_134(1024);
		}
		iVar0 = func_445(Local_1067.f_1, Local_1067.f_2);
		func_829(iVar0);
		func_830(iVar0);
		func_129(2);
		func_831(Local_1067.f_9);
		func_832(Local_1067.f_1);
		func_134(32);
	}
}

void func_643(int iParam0)
{
	if (!MAP::DOES_BLIP_EXIST(&(Local_1067.f_18.f_3[iParam0 /*2*/])))
	{
		return;
	}
	MAP::REMOVE_BLIP(Local_1067.f_18.f_3[iParam0 /*2*/]);
}

void func_644(float fParam0)
{
	int iVar0;
	float fVar1;

	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), func_461(0));
	if (fVar1 < fParam0)
	{
		func_833(0, 0);
	}
	else
	{
		func_643(0);
	}
}

void func_645(var uParam0)
{
	*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
}

void func_646(int iParam0)
{
	func_206(&((Local_74[NETWORK::PARTICIPANT_ID_TO_INT() /*31*/])->f_1.f_2), iParam0);
}

void func_647(int iParam0)
{
	if (!NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_20))
	{
		return;
	}
	func_834(Local_13.f_7.f_20, iParam0);
}

void func_648(int iParam0)
{
	func_305(&((Local_74[NETWORK::PARTICIPANT_ID_TO_INT() /*31*/])->f_1.f_2), iParam0);
}

void func_649()
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar0 = func_101(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return;
	}
	if (func_459(iVar0, 993674639, 1, 0))
	{
		iVar1 = func_315(0);
		sVar2 = func_835(0);
		if (iVar1 != 0)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
			{
				TASK::_TASK_START_SCENARIO_IN_PLACE(iVar0, iVar1, 0, 0, 0, -1082130432, 0);
			}
			else
			{
				TASK::_TASK_START_SCENARIO_IN_PLACE(iVar0, iVar1, 0, 0, MISC::GET_HASH_KEY(sVar2), -1082130432, 0);
			}
		}
	}
}

void func_650()
{
	if (func_434(524288, 255) && !func_520(Local_13.f_7.f_11, Local_13.f_7.f_16))
	{
		func_463(524288);
	}
}

int func_651()
{
	return 6;
}

void func_652(int iParam0)
{
	if (!NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_20))
	{
		return;
	}
	func_836(Local_13.f_7.f_20, iParam0);
}

int func_653(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_447(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return 0;
	}
	return func_837(iVar0, iParam0);
}

int func_654(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_715(iParam0, iParam1))
	{
		return 0;
	}
	iVar0 = func_838(iParam1);
	return func_837(iVar0, iParam0);
}

int func_655(int iParam0, int iParam1)
{
	if (!func_715(iParam0, iParam1))
	{
		return 0;
	}
	return func_837(iParam1, iParam0);
}

int func_656()
{
	return 2;
}

int func_657()
{
	return 4;
}

void func_658()
{
	if (func_661())
	{
		if ((func_529(func_528(56)) || func_529(func_528(57))) || func_529(func_528(58)))
		{
			return;
		}
		func_500(1, 0, 0);
		if (!func_512(56))
		{
			func_516(0, 0, 56, 0);
		}
		else if (!func_512(57))
		{
			func_516(0, 0, 57, 0);
		}
		else if (!func_512(58))
		{
			func_516(0, 0, 58, 0);
		}
	}
}

void func_659()
{
	if (!func_515(1))
	{
		if (!func_512(59))
		{
			if (func_520(Local_13.f_7.f_9, 5000))
			{
				func_516(0, 0, 59, 0);
			}
		}
	}
}

void func_660()
{
	if (!NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_21))
	{
		func_647(100);
		return;
	}
	func_834(Local_13.f_7.f_21, 100);
}

int func_661()
{
	int iVar0;

	if (func_503(0, -1, 1) > 50f)
	{
		return 0;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iVar0, "camera_takingPic"))
		{
			return DECORATOR::DECOR_GET_BOOL(iVar0, "camera_takingPic");
		}
	}
	return 0;
}

void func_662()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	var uVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;

	iVar0 = func_101(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_435(256);
		return;
	}
	iVar1 = PED::GET_MOUNT(iVar0);
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar19 = 255;
	if (func_639(iVar0))
	{
		iVar8 -= 5;
	}
	else
	{
		iVar8 = (iVar8 + func_839(iVar0));
	}
	if (func_840(iVar0, iVar2, 0))
	{
		iVar8++;
	}
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar2, true, false) };
	if (func_841(vVar4))
	{
		iVar9 = (iVar9 + -1);
	}
	else if (func_842(vVar4))
	{
		iVar9 = (iVar9 + -1);
	}
	else
	{
		iVar9++;
	}
	iVar20 = func_197();
	switch (iVar20)
	{
		case 0:
			vVar4 = { func_326(1) };
			fVar7 = BUILTIN::VDIST(vVar4, ENTITY::GET_ENTITY_COORDS(iVar0, false, false));
			if (fVar7 < 2f)
			{
				iVar10 += 3;
			}
			else if (fVar7 < 4f)
			{
				iVar10 += 2;
			}
			else
			{
				iVar10 = iVar10;
			}
			break;
		case 1:
		case 2:
			iVar11 = (iVar11 + func_839(iVar1));
			if (func_840(iVar1, iVar2, 0))
			{
				iVar11++;
			}
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			iVar3 = func_101(2);
			iVar12 = (iVar12 + func_839(iVar3));
			if (func_840(iVar3, iVar2, 0))
			{
				iVar12++;
			}
			if (Local_13.f_7.f_18 >= func_843())
			{
				iVar12 += 3;
			}
			else if (Local_13.f_7.f_18 >= func_844())
			{
				iVar12 += 2;
			}
			else
			{
				iVar12 = iVar12;
			}
			break;
		case 8:
			iVar3 = func_101(2);
			iVar12 = (iVar12 + func_839(iVar3));
			break;
		case 9:
		case 10:
		case 11:
			uVar15 = func_744(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), 0f, 0f, 0f, 3f, 3f, 3f, -432403087, 0, 8);
			iVar16 = SCRIPTS::COUNT_PLAYER_BITS(&uVar15);
			if (iVar16 == 0)
			{
				iVar13 = -10;
			}
			else
			{
				iVar17 = 0;
				while (iVar17 < 32)
				{
					if (SCRIPTS::_0x72B2E00C9BAC6789(&uVar15, iVar17))
					{
						iVar19 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
						iVar18 = PLAYER::GET_PLAYER_PED(iVar19);
						if (!ENTITY::IS_ENTITY_DEAD(iVar18))
						{
							iVar13 = (iVar13 + func_839(iVar18));
							switch (iVar20)
							{
								case 9:
									if (!WEAPON::_0xCB690F680A3EA971(iVar18, 4) || (!PLAYER::IS_PLAYER_FREE_AIMING(iVar19) && !NETWORK::_0x8E7CE19219669AEB(iVar19)))
									{
									}
									else
									{
										iVar13++;
									}
									break;
								case 10:
									if (!func_449(134217728, iVar17) && (!WEAPON::_0xCB690F680A3EA971(iVar18, 4) || (!PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar19, iVar0, 0) && !PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar19, iVar0))))
									{
									}
									else
									{
										iVar13++;
									}
									break;
								case 11:
									if (PED::_IS_PED_HOGTIED(iVar0))
									{
										iVar13++;
									}
									else
									{
										iVar13 = -10;
									}
									if (func_840(iVar18, iVar2, 0))
									{
										iVar13++;
									}
									break;
							}
						}
					}
					iVar17++;
				}
			}
			break;
	}
	iVar14 = (iVar14 + (((((iVar8 + iVar9) + iVar10) + iVar11) + iVar12) + iVar13));
	iVar21 = 7;
	iVar22 = 4;
	switch (iVar20)
	{
		case 0:
			iVar21 = 7;
			iVar22 = 4;
			break;
		case 1:
		case 2:
			iVar21 = 7;
			iVar22 = 4;
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			iVar21 = 9;
			iVar22 = 6;
			break;
		case 8:
			iVar21 = 6;
			iVar22 = 4;
			break;
		case 9:
		case 10:
		case 11:
			iVar21 = 7;
			iVar22 = 4;
			break;
	}
	if (!func_434(2048, 255))
	{
		if (iVar14 >= iVar21)
		{
			func_435(1024);
			func_463(512);
			func_463(256);
		}
		else if (iVar14 >= iVar22)
		{
			func_435(512);
			func_463(1024);
			func_463(256);
		}
		else
		{
			func_435(256);
			func_463(1024);
			func_463(512);
		}
	}
}

void func_663()
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
	int iVar9;
	vector3 vVar10;
	int iVar13;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar0 = func_197();
	iVar1 = func_101(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		return;
	}
	if (iVar0 == 11)
	{
		if (PED::_IS_PED_LASSOED(iVar1) && !PED::_IS_PED_HOGTIED(iVar1))
		{
			func_509(0, 65f, 5000, 0, 154, 155, 156, -1, -1, -1, 0, 157);
			return;
		}
		iVar2 = ENTITY::_0x61914209C36EFDDB(iVar1);
		switch (iVar2)
		{
			case 4:
			case 5:
			case 7:
			case 8:
				func_509(0, 65f, 5000, 0, 165, 166, 167, -1, -1, -1, 0, -1);
				if (func_512(167))
				{
					if (Local_13.f_7.f_14 == 0)
					{
						func_513(&(Local_13.f_7.f_14));
					}
				}
				return;
			default:
				break;
		}
	}
	if (Local_13.f_7.f_14 != 0)
	{
		Local_13.f_7.f_17 = (Local_13.f_7.f_17 + NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_14, NETWORK::GET_NETWORK_TIME_ACCURATE()));
		Local_13.f_7.f_14 = 0;
	}
	if (func_495())
	{
		if (func_845())
		{
			return;
		}
	}
	Local_13.f_7.f_6 = func_744(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), 0f, 0f, 0f, 3f, 3f, 3f, -432403087, 0, 8);
	iVar3 = SCRIPTS::COUNT_PLAYER_BITS(&(Local_13.f_7.f_6));
	Local_13.f_7.f_7 = func_744(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), 0f, 0f, 0f, 30f, 30f, 30f, -432403087, 0, 8);
	iVar4 = SCRIPTS::COUNT_PLAYER_BITS(&(Local_13.f_7.f_7));
	if (func_641())
	{
		if (iVar3 < 1)
		{
			func_504(32768);
			if (iVar4 > 2)
			{
				func_509(0, 65f, 5000, 1, 140, 141, 142, -1, -1, -1, 0, 143);
				return;
			}
			else
			{
				func_509(0, 65f, 5000, 1, 137, 138, 139, -1, -1, -1, 0, 143);
				return;
			}
		}
	}
	func_505(32768);
	if (iVar0 == 10 || iVar0 == 9)
	{
		bVar6 = false;
		iVar8 = 255;
		iVar5 = 0;
		while (iVar5 < 32)
		{
			if (SCRIPTS::_0x72B2E00C9BAC6789(&(Local_13.f_7.f_6), iVar5))
			{
				iVar8 = PLAYER::INT_TO_PLAYERINDEX(iVar5);
				iVar7 = PLAYER::GET_PLAYER_PED(iVar8);
				if (!ENTITY::IS_ENTITY_DEAD(iVar7) && Local_13.f_7.f_21 != iVar8)
				{
					switch (iVar0)
					{
						case 9:
							if (WEAPON::_0xCB690F680A3EA971(iVar7, 4) && ((PLAYER::IS_PLAYER_FREE_AIMING(iVar8) || NETWORK::_0x8E7CE19219669AEB(iVar8)) || TASK::_0x8785E6E40C7A8819(iVar7)))
							{
								bVar6 = true;
							}
							else
							{
								Jump @687; //curOff = 620
								if (func_449(134217728, iVar5) || (WEAPON::_0xCB690F680A3EA971(iVar7, 4) && (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar8, iVar1, 0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar8, iVar1))))
								{
									bVar6 = true;
								}
								else
								{
									iVar5++;
								}
							}
							if (!bVar6)
							{
								func_504(65536);
								switch (iVar0)
								{
									case 9:
										func_509(0, 65f, 5000, 0, 147, 148, 149, -1, -1, -1, 0, 153);
										break;
									case 10:
										func_509(0, 65f, 5000, 0, 150, 151, 152, -1, -1, -1, 0, 153);
										break;
								}
								return;
							}
							func_670(iVar1);
							func_505(65536);
							if (iVar0 == 11)
							{
								if (!PED::_IS_PED_HOGTIED(iVar1))
								{
									func_509(0, 65f, 5000, 0, 154, 155, 156, -1, -1, -1, 0, 157);
									return;
								}
								func_670(iVar1);
							}
							if (!func_524(16))
							{
								if ((iVar0 == 10 || iVar0 == 9) || iVar0 == 11)
								{
									func_509(0, 65f, 5000, 0, 144, 145, 146, -1, -1, -1, 0, 39);
								}
								else
								{
									func_509(0, 65f, 5000, 0, 36, 37, 38, -1, -1, -1, 0, 39);
								}
								return;
							}
							iVar9 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_21);
							if (iVar9 == 0)
							{
								return;
							}
							vVar10 = { ENTITY::GET_ENTITY_COORDS(iVar9, false, false) };
							if (func_841(vVar10))
							{
								func_509(0, 65f, 5000, 1, 52, 53, 54, -1, -1, -1, 0, 55);
								return;
							}
							else if (func_842(vVar10))
							{
								func_509(0, 65f, 5000, 1, 40, 41, 42, -1, -1, -1, 0, 43);
								return;
							}
							if (!func_507(32768))
							{
								func_509(0, 65f, 5000, 1, 44, 45, 46, -1, -1, -1, 0, 47);
								return;
							}
							if (func_641())
							{
								if (!func_507(262144))
								{
									func_509(0, 65f, 5000, 1, 161, 162, 163, -1, -1, -1, 0, 164);
									return;
								}
								else if (!func_507(131072))
								{
									func_509(0, 65f, 5000, 1, 158, 159, 160, -1, -1, -1, 0, 164);
									return;
								}
							}
							if ((func_495() || iVar0 == 1) || iVar0 == 8)
							{
								if (!func_507(65536))
								{
									iVar13 = 48;
									switch (iVar0)
									{
										case 3:
											iVar13 = 89;
											break;
										case 4:
											iVar13 = 90;
											break;
										case 5:
											iVar13 = 91;
											break;
										case 6:
											iVar13 = 92;
											break;
										case 7:
											iVar13 = 93;
											break;
									}
									func_509(0, 65f, 5000, 1, iVar13, 48, 49, 50, -1, -1, 0, 51);
									return;
								}
							}
							func_509(0, 65f, 5000, 1, 62, 63, 64, 17, 18, 19, 0, 20);
					}
				}
			}
		}
	}

int func_664(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	vVar3 = { func_326(1) };
	vVar6 = { func_326(0) };
	if (func_495())
	{
		vVar3 = { func_461(2) };
		vVar6 = { func_326(3) };
	}
	else if (func_197() == 9)
	{
		vVar3 = { func_326(5) };
		vVar6 = { func_326(6) };
	}
	vVar0 = { func_527(vVar6 - vVar3) * Vector(10f, 10f, 10f) + vVar6 };
	if (!func_846(iParam0, vVar0, 0.95f))
	{
		if (func_459(iParam0, 1464580341, 1, 0))
		{
			TASK::TASK_TURN_PED_TO_FACE_COORD(iParam0, vVar0, -1);
		}
	}
	else
	{
		if (func_197() != 9)
		{
			if (Local_13.f_7.f_19 != -1)
			{
				if (func_459(iParam0, 993674639, 1, 0))
				{
					func_665();
				}
			}
		}
		return 1;
	}
	return 0;
}

void func_665()
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;

	if (Local_13.f_7.f_19 == -1)
	{
		return;
	}
	iVar0 = func_101(0);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	iVar1 = func_666();
	iVar2 = func_315(iVar1);
	sVar3 = func_835(iVar1);
	if (!PED::_0x34D6AC1157C8226C(iVar0, iVar2))
	{
		if (iVar2 != 0)
		{
			PED::_0xA3A9299C4F2ADB98(iVar0);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
			{
				TASK::_TASK_START_SCENARIO_IN_PLACE(iVar0, iVar2, 0, 1, 0, -1082130432, 0);
			}
			else
			{
				TASK::_TASK_START_SCENARIO_IN_PLACE(iVar0, iVar2, 0, 1, MISC::GET_HASH_KEY(sVar3), -1082130432, 0);
			}
		}
	}
}

int func_666()
{
	return Local_13.f_7.f_19;
}

void func_667()
{
	if (MAP::DOES_BLIP_EXIST(Local_1067.f_18.f_153))
	{
		func_847(&(Local_1067.f_18.f_153));
	}
}

void func_668()
{
	if (!NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_22))
	{
		func_647(5000);
		return;
	}
	func_834(Local_13.f_7.f_22, 5000);
}

bool func_669()
{
	float fVar0;

	fVar0 = 0f;
	switch (func_197())
	{
		case 3:
			fVar0 = 0.2f;
			break;
		case 4:
			fVar0 = 0.9f;
			break;
		case 5:
			fVar0 = 0.2f;
			break;
		case 6:
			fVar0 = 0.6f;
			break;
		case 7:
			fVar0 = 0.6f;
			break;
	}
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < fVar0;
}

void func_670(int iParam0)
{
	if (Local_1067.f_18.f_247 == 0)
	{
		Local_1067.f_18.f_247 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(func_848(), iParam0, -1f, 35f, 50f, -1082130432, -1082130432, 1127481344, 0, 0, -1, -1);
	}
}

void func_671()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_495())
	{
		return;
	}
	iVar0 = func_101(2);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	if (func_304(iVar0, 518218985))
	{
		return;
	}
	if (func_304(iVar0, -1442466670) || func_304(iVar0, -1952598043))
	{
		if (func_460(0, 2) < func_530())
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_498(64);
				func_499(25);
			}
		}
		return;
	}
	iVar1 = func_635(2, func_530(), 1);
	if (func_849(iVar1))
	{
		if (!func_164(268435456))
		{
			if (func_164(134217728))
			{
				func_103(268435456);
				iVar2 = func_101(0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, Local_1067.f_18.f_44, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar2));
				}
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, Local_1067.f_18.f_44, 1609284507);
			}
		}
		if (func_459(iVar0, -1442466670, 1, 0))
		{
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iVar0, 100f, 0, 0);
		}
	}
	if (func_458(2))
	{
		if (func_459(iVar0, 518218985, 1, 0))
		{
			iVar3 = func_733(2);
			if (NETWORK::_0x255A5EF65EDA9167(iVar3))
			{
				iVar4 = PLAYER::GET_PLAYER_PED(iVar3);
				if (ENTITY::DOES_ENTITY_EXIST(iVar4) && !PED::IS_PED_DEAD_OR_DYING(iVar4, true))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, iVar4, 500f, -1, 0, 1077936128, 0);
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(iVar0, func_461(2), 500f, -1, false, 1077936128);
				}
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(iVar0, func_461(2), 500f, -1, false, 1077936128);
			}
		}
	}
}

float func_672(int iParam0)
{
	return (Local_1067.f_271.f_7[iParam0 /*11*/])->f_5;
}

void func_673(float fParam0)
{
	float fVar0;

	if (!func_850(2) || func_851(2, 0))
	{
		func_643(2);
		return;
	}
	fVar0 = func_503(2, -1, 1);
	if (fVar0 < fParam0 && fVar0 != 0f)
	{
		if (!func_852(2))
		{
			func_853(2, joaat("BLIP_STYLE_ENEMY"), 580546400, 0, "NB_PHOTOGRAPHY_BLIP_NAME_ANIMAL");
		}
	}
	else
	{
		func_152(2);
	}
}

void func_674(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	TASK::CLOSE_SEQUENCE_TASK(*iParam1);
	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		TASK::CLEAR_SEQUENCE_TASK(iParam1);
	}
}

void func_675(int iParam0)
{
	if (!NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_24))
	{
		func_652(-1);
		return;
	}
	func_836(Local_13.f_7.f_24, iParam0);
}

void func_676()
{
	if (!NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_24))
	{
		func_647(100);
		return;
	}
	func_834(Local_13.f_7.f_24, 100);
}

void func_677()
{
	if (func_524(512))
	{
		return;
	}
	if (!func_164(16384))
	{
		if ((!func_164(32768) && !func_164(65536)) && !func_164(131072))
		{
			func_103(16384);
		}
	}
}

int func_678(int iParam0, int iParam1)
{
	if (NETWORK::_0x255A5EF65EDA9167(iParam1))
	{
		return func_587(iParam0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam1));
	}
	return 0;
}

void func_679(int iParam0, vector3 vParam1)
{
	if (MAP::DOES_BLIP_EXIST(Local_1067.f_18.f_153))
	{
		return;
	}
	Local_1067.f_18.f_153 = MAP::_BLIP_ADD_FOR_AREA(1247852480, func_326(iParam0), vParam1, 0);
	MAP::_0x662D364ABF16DE2F(Local_1067.f_18.f_153, 1679075994);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_1067.f_18.f_153, "NB_PHOTOGRAPHY_BLIP_NAME_OBJ");
}

void func_680()
{
	int iVar0;
	int iVar1;

	if (NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_23))
	{
		func_836(Local_13.f_7.f_23, -1);
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1067.f_18.f_154) || ENTITY::IS_ENTITY_DEAD(Local_1067.f_18.f_154))
	{
		func_652(-1);
		return;
	}
	iVar0 = PED::_0xB676EFDA03DADA52(Local_1067.f_18.f_154, 1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_652(-1);
		return;
	}
	iVar1 = 255;
	if (PED::IS_PED_A_PLAYER(iVar0))
	{
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
	}
	if (!NETWORK::_0x255A5EF65EDA9167(iVar1))
	{
		func_652(-1);
		return;
	}
	func_836(iVar1, -1);
}

void func_681()
{
	if (!NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_23))
	{
		func_647(100);
		return;
	}
	func_834(Local_13.f_7.f_23, 100);
}

float func_682(int iParam0, vector3 vParam1)
{
	return BUILTIN::VDIST(func_722(iParam0), vParam1);
}

void func_683(int iParam0)
{
	if (!NETWORK::_0x255A5EF65EDA9167(Local_13.f_7.f_21))
	{
		func_652(-1);
		return;
	}
	func_836(Local_13.f_7.f_21, iParam0);
}

bool func_684(int iParam0)
{
	return PED::GET_PED_CONFIG_FLAG(iParam0, 161, false);
}

void func_685()
{
	func_706();
}

int func_686(int iParam0)
{
	char* sVar0;

	if (!ANIMSCENE::_0x25557E324489393C(Local_1067.f_18.f_244))
	{
		return 0;
	}
	if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1067.f_18.f_244))
	{
		return 0;
	}
	sVar0 = func_313(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_1067.f_18.f_244, sVar0))
	{
		if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_1067.f_18.f_244, sVar0))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1067.f_18.f_244, sVar0);
		}
		return 0;
	}
	return 1;
}

bool func_687(char* sParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(Local_1067.f_18.f_244))
	{
		return false;
	}
	return ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_1067.f_18.f_244, sParam0);
}

void func_688(char* sParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(Local_1067.f_18.f_244))
	{
		return;
	}
	if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1067.f_18.f_244))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1067.f_18.f_244, sParam0, true, true);
}

void func_689(int iParam0)
{
	char* sVar0;

	if (!ANIMSCENE::_0x25557E324489393C(Local_1067.f_18.f_244))
	{
		return;
	}
	if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1067.f_18.f_244))
	{
		return;
	}
	if (!ANIMSCENE::_0x25557E324489393C(Local_1067.f_18.f_244))
	{
		return;
	}
	sVar0 = func_313(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_1067.f_18.f_244, sVar0))
	{
		if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_1067.f_18.f_244, sVar0))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1067.f_18.f_244, sVar0);
		}
		return;
	}
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1067.f_18.f_244, sVar0, true);
}

float func_690()
{
	if (!ANIMSCENE::_0x25557E324489393C(Local_1067.f_18.f_244))
	{
		return -1f;
	}
	return ANIMSCENE::_0x3FBC3F51BF12DFBF(Local_1067.f_18.f_244);
}

void func_691(bool bParam0)
{
	int iVar0;
	char* sVar1;

	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::PARTICIPANT_ID()))
	{
		return;
	}
	if (NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()) != Local_13.f_7.f_22)
	{
		return;
	}
	if (func_502(4, 255))
	{
		return;
	}
	if (!bParam0)
	{
		if (!func_520(Local_13.f_7.f_13, 2000))
		{
			return;
		}
	}
	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	if (iVar0 != 0)
	{
		return;
	}
	switch (func_201())
	{
		case 0:
			sVar1 = "NB_PHOTOGRAPHY_H_FILM_TS";
			break;
		case 1:
			sVar1 = "NB_PHOTOGRAPHY_H_FILM_FS";
			break;
		case 2:
			sVar1 = "NB_PHOTOGRAPHY_H_FILM_DS";
			break;
	}
	func_628(sVar1, 10000, 0, 0, 0, 1);
	func_646(4);
}

int func_692()
{
	int iVar0;
	int iVar1;

	if ((Local_13.f_7.f_22 == 255 || !NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::PARTICIPANT_ID())) || NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()) != Local_13.f_7.f_22)
	{
		return 0;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_22);
	if (func_520(Local_13.f_7.f_10, 2000))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar1, false, 0, false))
			{
				if (iVar1 != joaat("weapon_unarmed"))
				{
					if (func_459(iVar0, 716706914, 1, 0))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(iVar0, joaat("weapon_unarmed"), false, 0, false, false);
						TASK::TASK_SWAP_WEAPON(iVar0, 1, 0, 0, 0);
					}
				}
				else
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_693()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ANIMSCENE::_0x25557E324489393C(Local_1067.f_18.f_244))
	{
		return;
	}
	iVar0 = func_101(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, -1019754709))
	{
		iVar1 = func_101(2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar1, Local_1067.f_18.f_244))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1067.f_18.f_244, func_453(2), iVar1);
				}
				PED::DELETE_PED(&iVar1);
			}
		}
		iVar2 = func_454(2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
			{
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar2, Local_1067.f_18.f_244))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1067.f_18.f_244, func_455(2), iVar2);
				}
				OBJECT::DELETE_OBJECT(&iVar2);
			}
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, -1066693069))
	{
		iVar3 = func_454(0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar3))
			{
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar3, Local_1067.f_18.f_244))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1067.f_18.f_244, func_455(0), iVar3);
				}
				OBJECT::DELETE_OBJECT(&iVar3);
			}
		}
	}
}

void func_694(var uParam0, int iParam1)
{
	uParam0->f_19 = iParam1;
}

void func_695(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	iVar0 = func_101(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		iParam0 = Local_13.f_7.f_20;
		if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
		{
			return;
		}
	}
	iVar1 = PLAYER::GET_PLAYER_PED(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return;
	}
	bVar2 = false;
	if (!func_304(iVar0, 242628503))
	{
		func_457(iParam1);
		bVar2 = true;
	}
	if ((Local_1067.f_18.f_155 != iParam0 && func_304(iVar0, 242628503)) && TASK::GET_SEQUENCE_PROGRESS(iVar0) > 0)
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		Local_1067.f_18.f_155 = iParam0;
		TASK::OPEN_SEQUENCE_TASK(&iVar3);
		if (!func_456(iParam1))
		{
			func_498(iParam1);
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, func_311(iParam2), func_543(iParam2), PLAYER::GET_PLAYER_PED(Local_1067.f_18.f_155), 2000, 4f, -4f, 24, 0, 0, 0, -1082130432, 0, 0, -1082130432);
		}
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, func_311(iParam3), func_543(iParam3), PLAYER::GET_PLAYER_PED(Local_1067.f_18.f_155), -1, 4f, -2f, 25, 0, 0, 0, -1082130432, 0, 0, -1082130432);
		func_674(iVar0, &iVar3, 0, 0, 1, 1);
	}
}

void func_696()
{
	if (func_524(512))
	{
		return;
	}
	if (!func_164(8192))
	{
		if ((!func_164(32768) && !func_164(65536)) && !func_164(131072))
		{
			if (func_434(2048, 255) || func_434(4096, 255))
			{
				func_450(1872332830, 0, 0);
				func_103(8192);
			}
		}
	}
}

void func_697()
{
	int iVar0;

	if (func_524(512))
	{
		return;
	}
	if (!func_164(524288))
	{
		if ((!func_164(32768) && !func_164(65536)) && !func_164(131072))
		{
			if (func_434(2048, 255) || func_434(4096, 255))
			{
				iVar0 = 1356609994;
				if (func_507(512))
				{
					iVar0 = 783724279;
				}
				else if (func_507(1024))
				{
					iVar0 = -83587753;
				}
				if (func_854(iVar0, 0, 255, 0, 0))
				{
					func_103(524288);
				}
			}
		}
	}
}

void func_698()
{
	if (func_434(2048, 255) || func_434(4096, 255))
	{
		func_855();
	}
}

void func_699()
{
	if (func_434(2048, 255) || func_434(4096, 255))
	{
		func_706();
	}
}

void func_700()
{
	if (func_585(0, -1) || func_587(0, -1))
	{
		func_796(0);
		func_856(7, Local_1067.f_4);
	}
}

void func_701()
{
	if (!func_164(131072))
	{
		if (!func_449(2, 255))
		{
			func_450(-1315007749, 0, 0);
			func_103(65536);
		}
	}
}

void func_702(bool bParam0)
{
	if ((Local_13.f_7.f_22 == 255 || !NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::PARTICIPANT_ID())) || NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()) != Local_13.f_7.f_22)
	{
		return;
	}
	if (bParam0)
	{
		if (func_434(8388608, 255))
		{
			PLAYER::SET_PLAYER_CONTROL(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()), 1, 256, 0);
			func_463(8388608);
		}
	}
	else if (!func_434(8388608, 255))
	{
		PLAYER::SET_PLAYER_CONTROL(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()), 0, 256, 0);
		func_435(8388608);
	}
}

void func_703(int iParam0, int iParam1)
{
	if (!func_715(iParam0, iParam1))
	{
		return;
	}
	func_720(iParam1, iParam0);
}

void func_704(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_715(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_838(iParam1);
	func_448(iVar0, iParam0);
}

bool func_705(int iParam0)
{
	return MISC::IS_BIT_SET(Local_1067.f_377.f_94, iParam0);
}

void func_706()
{
	if (!func_67(8))
	{
		return;
	}
	func_129(16);
}

int func_707(int iParam0)
{
	return iParam0;
}

void func_708(int iParam0)
{
	if (!func_857(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_DELETE(((*Global_1949759)[iParam0 /*23*/])->f_3);
	}
	((*Global_1949759)[iParam0 /*23*/])->f_4 = 0;
	(*Global_1949759)[iParam0 /*23*/] = 1;
	((*Global_1949759)[iParam0 /*23*/])->f_16 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_1 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_6 = { 0f, 0f, 0f };
	((*Global_1949759)[iParam0 /*23*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1949759)[iParam0 /*23*/])->f_9 = 0f;
	((*Global_1949759)[iParam0 /*23*/])->f_10 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_11 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_2 = 1;
	((*Global_1949759)[iParam0 /*23*/])->f_15 = -1f;
}

int func_709(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_858(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_710(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_858(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_711(var uParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_184(&Var1, uParam0))
	{
		iVar0 = ((func_859() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_712(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return ((*Global_1234391)[iParam0 /*5*/])->f_2;
}

int func_713(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1777724963:
		case -1165569262:
		case -260420884:
		case -232478158:
		case 78055447:
		case 850213441:
		case 974227447:
		case 1532822440:
		case 1918154385:
			return 1;
		case joaat("dynamic"):
			return iParam1;
		default:
			break;
	}
	return 0;
}

void func_714(var uParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (&Global_1051202->f_16[15] == 0 || !SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[15])))
	{
		return;
	}
	*uParam0 = 176;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_0x8B61C950A148FFA2(uParam0, 6, 11, &(Global_1051202->f_16[15]));
	func_860(uParam0, uParam0->f_1);
}

int func_715(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > (func_716(iParam0) - 1))
	{
		return 0;
	}
	return 1;
}

int func_716(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 4;
		case 4:
			return 2;
		default:
			break;
	}
	return 8;
}

int func_717()
{
	if (func_28() != 0)
	{
		return 1;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1461907237))
	{
		return 1;
	}
	if (Global_1132968->f_4641.f_1 & 2 != 0)
	{
		return 1;
	}
	if (Global_1132968->f_4641.f_1 & 4 != 0)
	{
		return 1;
	}
	if (!NETWORK::HAS_NETWORK_TIME_STARTED())
	{
		return 1;
	}
	return 0;
}

int func_718(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2076515520:
			return 93;
		case -2062348046:
			return 96;
		case -1983943039:
			return 61;
		case -1967078622:
			return 4;
		case -1935655667:
			return 39;
		case -1930919582:
			return 56;
		case -1930399868:
			return 63;
		case -1924130593:
			return 97;
		case -1898294040:
			return 50;
		case -1854780893:
			return 5;
		case -1783181138:
			return 13;
		case -1777144780:
			return 87;
		case -1679013564:
			return 16;
		case -1648877470:
			return 43;
		case -1634863390:
			return 10;
		case -1598949067:
			return 45;
		case -1575244427:
			return 62;
		case -1494363065:
			return 1;
		case -1408563730:
			return 30;
		case -1399051227:
			return 53;
		case -1393798041:
			return 58;
		case -1376314322:
			return 49;
		case -1330378740:
			return 90;
		case -1315007749:
			return 21;
		case -1296513906:
			return 11;
		case -1258163578:
			return 48;
		case -1215742816:
			return 37;
		case -1152882498:
			return 18;
		case -1098645728:
			return 88;
		case -1034424695:
			return 32;
		case -1030655937:
			return 12;
		case -985005225:
			return 57;
		case -892848695:
			return 69;
		case -789758703:
			return 34;
		case -757633599:
			return 31;
		case -706075066:
			return 17;
		case -682435976:
			return 77;
		case -634665876:
			return 15;
		case -545299531:
			return 44;
		case -514316475:
			return 2;
		case -479797100:
			return 98;
		case -469672732:
			return 65;
		case -379874384:
			return 74;
		case -355092128:
			return 70;
		case -326224139:
			return 95;
		case -210274020:
			return 35;
		case -162385832:
			return 68;
		case -114666387:
			return 51;
		case -86995487:
			return 20;
		case -79139194:
			return 72;
		case -71551190:
			return 91;
		case -32613857:
			return 81;
		case -1:
			return 0;
		case 5611246:
			return 82;
		case 81846499:
			return 23;
		case 120448958:
			return 27;
		case 151445061:
			return 60;
		case 242857368:
			return 42;
		case 300196727:
			return 41;
		case 334700325:
			return 52;
		case 353568324:
			return 64;
		case 385589027:
			return 24;
		case 396837320:
			return 29;
		case 440583097:
			return 47;
		case 449057693:
			return 22;
		case 457103096:
			return 55;
		case 477974086:
			return 6;
		case 478308321:
			return 46;
		case 499656970:
			return 8;
		case 618068466:
			return 7;
		case 630308764:
			return 84;
		case 633501950:
			return 36;
		case 640330073:
			return 89;
		case 905156700:
			return 59;
		case 941437279:
			return 67;
		case 946732137:
			return 71;
		case 1232224440:
			return 78;
		case 1248971179:
			return 92;
		case 1250422342:
			return 14;
		case 1257949393:
			return 3;
		case 1316486837:
			return 26;
		case 1345888212:
			return 28;
		case 1382158532:
			return 73;
		case 1398164246:
			return 85;
		case 1427070667:
			return 76;
		case 1571096148:
			return 54;
		case 1717813521:
			return 66;
		case 1791948823:
			return 9;
		case 1841970554:
			return 33;
		case 1872332830:
			return 94;
		case 1889309476:
			return 79;
		case 1898201469:
			return 40;
		case 1918774327:
			return 80;
		case 1951290581:
			return 25;
		case 1971904853:
			return 38;
		case 2002140369:
			return 86;
		case 2018657739:
			return 75;
		case 2078792148:
			return 83;
		case 2108116481:
			return 19;
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

void func_719(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 181;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 7, 7, &uParam1);
}

void func_720(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_554(iParam1, 896190569) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return;
	}
	if (MISC::IS_BIT_SET(iVar2, iParam0))
	{
		return;
	}
	MISC::SET_BIT(&iVar2, iParam0);
	if (!STATS::STAT_ID_SET_INT(&Var0, iVar2, true))
	{
	}
}

var func_721(int iParam0, int iParam1)
{
	return &((Local_1067.f_325.f_1[iParam0 /*50*/])->f_4[iParam1 /*9*/]);
}

Vector3 func_722(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(&(Local_1067.f_271.f_7[iParam0 /*11*/]), true, false);
}

float func_723(var uParam0)
{
	return uParam0->f_25;
}

void func_724(var uParam0, float fParam1)
{
	uParam0->f_26 = fParam1;
}

void func_725(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_206(uParam0, 1);
	}
	else
	{
		func_305(uParam0, 1);
	}
}

void func_726(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_206(uParam0, 512);
	}
	else
	{
		func_305(uParam0, 512);
	}
}

void func_727(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_206(uParam0, 2);
	}
	else
	{
		func_305(uParam0, 2);
	}
}

void func_728(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_206(uParam0, 8);
	}
	else
	{
		func_305(uParam0, 8);
	}
}

int func_729(int iParam0)
{
	return (Local_1067.f_271.f_7[iParam0 /*11*/])->f_4;
}

int func_730(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;

	if (bParam6)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return 0;
		}
	}
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return 0;
	}
	if (!func_732(iParam1))
	{
		return 0;
	}
	iVar0 = func_861(iParam1, vParam2, fParam5, bParam8, 1, bParam6, bParam7, bParam9);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam9)
		{
			WEAPON::_0x899A04AFCC725D04(iVar0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (bParam10)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
		}
		if (bParam6)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
		}
		return 1;
	}
	return 0;
}

void func_731(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_SET_PED_BODY_COMPONENT(iParam0, 1268180497);
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, 1, 1, 1, 0);
	}
}

bool func_732(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_733(int iParam0)
{
	if (!NETWORK::_0x255A5EF65EDA9167(&(Local_13.f_49.f_1[iParam0])))
	{
	}
	if (&Local_13.f_49.f_5[iParam0] == 0)
	{
		return 255;
	}
	return &(Local_13.f_49.f_1[iParam0]);
}

int func_734(int iParam0)
{
	if (func_488())
	{
		return 0;
	}
	if (func_611())
	{
		return 0;
	}
	Local_13.f_58 = iParam0;
	func_206(&(Local_13.f_58.f_2), 4);
	return 1;
}

int func_735(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1099294->f_16;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return ((*Global_1097610)[iParam0 /*51*/])->f_16;
}

int func_736(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)))
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_DEAD(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0))))
	{
		return 0;
	}
	return func_599(iParam1, NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)));
}

int func_737(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (bParam3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(Local_1067.f_271.f_7[iParam0 /*11*/])))
		{
			return 255;
		}
	}
	iVar1 = -1;
	bVar2 = fParam2 > 0f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (&(Local_74[iVar0 /*31*/])->f_4.f_2[iParam0] > -1f)
			{
				if (iVar1 == -1 || &(Local_74[iVar0 /*31*/])->f_4.f_2[iParam0] < &(Local_74[iVar1 /*31*/])->f_4.f_2[iParam0])
				{
					if (!bVar2 || &(Local_74[iVar0 /*31*/])->f_4.f_2[iParam0] <= fParam2)
					{
						Stack.Push(iVar0);
						Stack.Push(iParam0);
						Call_Loc(iParam1);
						if (StackVal)
						{
							iVar1 = iVar0;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (iVar1 > -1 && iVar1 < 32)
	{
		return NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
	}
	return 255;
}

void func_738(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam1 - 1250);
	iVar1 = iParam1 + 1250;
	*uParam0 = MISC::GET_RANDOM_INT_IN_RANGE(iVar0, iVar1);
}

void func_739(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 39:
			iVar0 = 1048576;
			break;
		case 20:
			iVar0 = 2097152;
			break;
		case 47:
			iVar0 = 4194304;
			break;
		case 51:
			iVar0 = 4194304;
			break;
		case 112:
			iVar0 = 16777216;
			break;
		case 116:
			iVar0 = 33554432;
			break;
		case 143:
			iVar0 = 67108864;
			break;
		case 153:
			iVar0 = 134217728;
			break;
		case 157:
			iVar0 = 268435456;
			break;
		case 164:
			iVar0 = 8388608;
			break;
		case 55:
			iVar0 = 536870912;
			break;
		case 43:
			iVar0 = 1073741824; /* Float: 2f */
			break;
	}
	if (iVar0 != 0)
	{
		func_504(iVar0);
	}
}

int func_740(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_0x772A1969F649E902(iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_741(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_840(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_862(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::_0x9D9473CB82D83A30(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0) == 1;
	}
	return PED::_0x7F9B9791D4CB71F6(iParam0, iParam1, bParam2, 0) == 1;
}

struct<15> func_742(int iParam0)
{
	struct<15> Var0;

	Var0.f_10 = 255;
	MISC::_COPY_MEMORY(&(Var0.f_4), &Local_1067, 5);
	Var0.f_9 = iParam0;
	Var0 = 178;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return Var0;
}

void func_743(var uParam0)
{
	func_864(uParam0, func_863(4, 117));
}

var func_744(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	SCRIPTS::_0xDE544B7EC0C187CC(&uVar0);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return uVar0;
	}
	if (func_865() != 0)
	{
		iVar1 = PLAYER::PLAYER_ID();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar1);
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1275573->f_10;
	iVar6 = Global_1275573->f_15;
	bVar7 = true;
	iVar9 = iParam10;
	if (BUILTIN::VMAG2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case 665633627:
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_866());
				break;
			case -432403087:
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_866());
				break;
			case -1612834106:
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_866());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_867(PLAYER::GET_PLAYER_TEAM(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1275573->f_154[iVar2])))
		{
			iVar10 = &Global_1275573->f_154[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_868(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = PLAYER::GET_PLAYER_PED(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
					{
						bVar3 = true;
					}
					else if (&Global_1275573->f_88[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_869(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && PED::_0xB655DB7582AEC805(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (PLAYER::GET_PLAYER_TEAM(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (_NAMESPACE26::_0x901E0DC25080C8B9(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_870(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!VOLUME::_0xF256A75210C5C0EB(iVar8, ENTITY::GET_ENTITY_COORDS(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		VOLUME::_DELETE_VOLUME(iVar8);
	}
	return uVar0;
}

Vector3 func_745(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

int func_746(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!bParam4 && AUDIO::_0x54B187F111D9C6F8(iParam0, 1))
	{
		return 0;
	}
	if (bParam4)
	{
		func_500(1, 0, 0);
	}
	if (func_871(iParam2))
	{
		if (!func_822(iParam0, func_528(iParam2), -1223286396, iParam1, 1, 0, 0, 1))
		{
			return 0;
		}
	}
	else if (!func_873(&(Local_1067.f_18.f_52), func_872(func_528(iParam2)), 0, -1, 0, 0))
	{
		return 0;
	}
	if (!bParam3)
	{
		func_874(iParam2);
	}
	func_513(&(Local_13.f_7.f_9));
	return 1;
}

int func_747(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1;
		case 0:
			return 1;
		case 1:
			return 1;
		case 2:
			return 1;
		case 128:
			return 1;
		case 129:
			return 1;
		case 130:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_748(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_TRIGGER_SONAR_BLIP_2(iParam0, iParam1);
}

void func_749(int iParam0, float fParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_825(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, iParam2))));
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

var func_750(int iParam0)
{
	return (Local_1067.f_271.f_7[iParam0 /*11*/])->f_10;
}

void func_751(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
			AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
		}
	}
}

void func_752(int iParam0)
{
}

int func_753(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -88129556;
		case 2:
			return 1285278823;
		case 14:
			return 1990184729;
		case 4:
			return 1374143159;
		case 5:
			return 1983508419;
		case 6:
			return -174599426;
		case 7:
			return -1565506973;
		case 8:
			return 1332057400;
		case 9:
			return 725557162;
		case 10:
			return 9860771;
		case 11:
			return -189356331;
		case 12:
			return -1552492203;
		case 13:
			return 1780085540;
		case 3:
			return 1067005312;
		case 15:
			return -765620960;
		default:
			break;
	}
	return 0;
}

struct<2> func_754(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_755(int iParam0)
{
	if (!func_875(func_574(iParam0), Local_1067.f_377.f_83[iParam0 /*3*/]))
	{
		MISC::CLEAR_BIT(&(Local_1067.f_377.f_93), iParam0);
		return;
	}
	MISC::SET_BIT(&(Local_1067.f_377.f_93), iParam0);
}

void func_756(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_156(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (func_876(iParam0, 8))
	{
		if (func_876(iParam0, 1))
		{
			MISC::_0xE98D55C5983F2509(iVar0);
			func_440(iParam0, 1);
		}
		func_157(iParam0);
		func_440(iParam0, 8);
	}
	if (func_876(iParam0, 1))
	{
		bVar1 = false;
		if (!func_877(iParam0))
		{
			bVar1 = true;
		}
		if (!bVar1)
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), func_745(PLAYER::PLAYER_ID())) > &Local_1067.f_520.f_10[iParam0 /*29*/])
			{
				bVar1 = true;
			}
		}
		if (bVar1)
		{
			MISC::_0xE98D55C5983F2509(iVar0);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 315, false);
			}
			func_157(iParam0);
			func_440(iParam0, 1);
		}
		else
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (!PED::GET_PED_CONFIG_FLAG(iVar0, 297, true))
				{
					PED::SET_PED_CONFIG_FLAG(iVar0, 297, true);
				}
				if (!PED::GET_PED_CONFIG_FLAG(iVar0, 315, true))
				{
					PED::SET_PED_CONFIG_FLAG(iVar0, 315, true);
				}
			}
			if (func_878(iParam0))
			{
				if (!func_876(iParam0, 2))
				{
					func_617(iParam0);
				}
			}
			else if (func_876(iParam0, 2))
			{
				func_157(iParam0);
			}
		}
	}
	else if (func_877(iParam0))
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), func_745(PLAYER::PLAYER_ID())) <= &Local_1067.f_520.f_10[iParam0 /*29*/])
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (MISC::_0x870708A6E147A9AD(iVar0, (Local_1067.f_520.f_10[iParam0 /*29*/])->f_1, &(Local_1067.f_520.f_10[iParam0 /*29*/]), 0, (Local_1067.f_520.f_10[iParam0 /*29*/])->f_2, 0, 0, 0, 0, 3))
				{
					if (!MISC::_0x375F5870A7B8BEC1((Local_1067.f_520.f_10[iParam0 /*29*/])->f_1))
					{
						PED::_0xFCA8FB9E15FA80D3(iVar0, MISC::GET_HASH_KEY((Local_1067.f_520.f_10[iParam0 /*29*/])->f_1));
					}
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						PED::SET_PED_CONFIG_FLAG(iVar0, 130, true);
						PED::SET_PED_CONFIG_FLAG(iVar0, 178, false);
						PED::SET_PED_CONFIG_FLAG(iVar0, 297, true);
						PED::SET_PED_CONFIG_FLAG(iVar0, 315, true);
						PED::SET_PED_CONFIG_FLAG(iVar0, 301, false);
					}
					func_812(iParam0, 1);
				}
			}
		}
	}
}

void func_757(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (MISC::IS_BIT_SET((Local_74[iParam1 /*31*/])->f_10, iParam0))
	{
		if (&(Local_74[iParam1 /*31*/])->f_10.f_13[iParam0] == 0)
		{
			return;
		}
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1));
		if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
		{
			return;
		}
		if (NETWORK::_0x255A5EF65EDA9167(&(Local_13.f_49.f_1[iParam0])))
		{
			if (&Local_13.f_49.f_1[iParam0] == iVar0)
			{
				return;
			}
		}
		if (&Local_13.f_49.f_5[iParam0] == 0 || NETWORK::IS_TIME_MORE_THAN(&((Local_74[iParam1 /*31*/])->f_10.f_13[iParam0]), &(Local_13.f_49.f_5[iParam0])))
		{
			Local_13.f_49.f_1[iParam0] = iVar0;
			Local_13.f_49.f_5[iParam0] = &(Local_74[iParam1 /*31*/])->f_10.f_13[iParam0];
		}
	}
}

void func_758(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_803() - fParam1);
	func_879(uParam0, 1);
	func_880(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_759(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_760(var uParam0)
{
	if (!func_565(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_881(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_803() - uParam0->f_1);
}

void func_761(int iParam0)
{
	MISC::SET_BIT(&((Local_74[NETWORK::PARTICIPANT_ID_TO_INT() /*31*/])->f_10.f_2), iParam0);
}

void func_762(int iParam0)
{
	int iVar0;
	int iVar1;

	if (0 == iParam0)
	{
		if (func_524(8192))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, false, 0, false))
			{
				if (iVar0 == joaat("weapon_lasso") || iVar0 == -680302000)
				{
					func_882(iParam0);
					func_883(iParam0);
					iVar1 = func_101(iParam0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iVar1);
					}
				}
			}
		}
	}
}

int func_763(int iParam0)
{
	return iParam0;
}

void func_764(var uParam0, bool bParam1, int iParam2)
{
	func_884(iParam2);
	if (Global_1572887->f_13 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
		{
			return;
		}
		if (Global_1939178->f_6)
		{
			return;
		}
	}
	else
	{
		if (!Global_1275573->f_11)
		{
			return;
		}
		if (Global_1275573->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887->f_13 == -1)
	{
		uParam0->f_13 = Global_1939178->f_38;
	}
	else
	{
		uParam0->f_13 = func_885(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == joaat("weapon_thrown_dynamite"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_34))
						{
							func_206(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_886(1, 1))
						{
							func_206(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_34) && (!func_886(1, 1) || *uParam0 & 8192 != 0))
				{
					func_305(uParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		{
			if (func_887(uParam0))
			{
				uParam0->f_15 = func_784();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_784() - uParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	func_888(uParam0);
}

int func_765(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return 0;
	}
	switch (iVar0)
	{
		case -196899787:
		case 178452260:
		case joaat("event_shocking_dead_body"):
		case 1589923363:
			iVar1 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return 0;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				return 0;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				return 0;
			}
			if (iVar2 == Global_1939178->f_27)
			{
				return 0;
			}
			if (iVar2 == Global_1939178->f_26)
			{
				return 0;
			}
			if (!func_889(iParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_890(iParam0, iVar2) <= func_891(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_766(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_797(iParam2, 1, 1, 1, 0))
	{
		func_206(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_892(uParam1, 1);
	func_893();
}

int func_767(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_894(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_895(uParam1);
			if (func_896(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_897(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_892(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > func_898(uParam1))
						{
							func_892(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_768(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	float fVar1;

	if (iParam1 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	fVar0 = 85f;
	if (func_899(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_895(uParam2);
		if (func_896(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_897(uParam2)
				{
					func_892(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_769(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return 0;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (iVar2 == iVar0)
		{
			return 0;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return 0;
	}
	if (Global_1939178->f_34 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1939178->f_34, 1) == iParam0)
		{
			return 0;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_889(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_897(uParam1)
		{
			fVar3 = func_895(uParam1);
			if (uParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_770(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_900(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_13 != -1)
	{
		if (iParam0 == Global_1275573->f_10)
		{
			if (!Global_1275573->f_11)
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

int func_771(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_784();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_772(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_901(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1939178->f_40) || Global_1939178->f_40 == joaat("weapon_unarmed"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1939178->f_40) && WEAPON::_0xEA522F991E120D45(Global_1939178->f_40))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1939178->f_40) || Global_1939178->f_40 == joaat("weapon_unarmed")) || (WEAPON::IS_WEAPON_VALID(Global_1939178->f_40) && WEAPON::_0x5809DBCA0A37C82B(Global_1939178->f_40)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam1, iVar1) && PED::_0x285D36C5C72B0569(uParam0) <= fVar2)
		{
			if (func_780(uParam2, iParam1))
			{
				func_892(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_773(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_589(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1939178->f_40) && !WEAPON::_0x5809DBCA0A37C82B(Global_1939178->f_40)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_34, &uVar0))
		{
			if (func_780(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_892(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_774(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_902(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_explosion"), vVar0, uParam2->f_23))
				{
					func_892(uParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_fire"), vVar0, uParam2->f_29))
				{
					func_892(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_potential_blast"), vVar0, uParam2->f_23))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_28, &vVar4, 0, 0);
					if (func_903(iParam1, vVar0, vVar4))
					{
						func_892(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_explosion"), vVar0, uParam2->f_23))
				{
					func_892(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_potential_blast"), vVar0, uParam2->f_23))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_28, &vVar7, 0, 0);
					if (func_903(iParam1, vVar0, vVar7))
					{
						func_892(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_775(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1939178->f_33)
	{
		if (!func_889(iParam0, uParam1, &(Global_1939178->f_28[iVar0])) || iParam0 == &Global_1939178->f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_904(&(Global_1939178->f_28[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1939178->f_28[iVar0]), false, false), vVar9);
			if (func_740(&(Global_1939178->f_28[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(&(Global_1939178->f_28[iVar0]), "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(&(Global_1939178->f_28[iVar0]), "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939178->f_28[iVar0]), false, false) };
						*(vVar2[1 /*3*/]) = { vVar9 };
						uParam1->f_10 = iParam0;
						return 1;
					}
				}
			}
			if (func_905(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939178->f_28[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_906(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939178->f_28[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_907(uParam1, iParam0, fVar1, iVar0))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939178->f_28[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_776(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!EVENT::_0x1D1B448D719415AB(*iParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(*iParam0, 0, 0);
	switch (iVar0)
	{
		case joaat("event_shocking_property_damage"):
		case 2044016570:
			iVar1 = EVENT::_0x822A001BCEA5BD81(*iParam0, iVar0, 0, 0);
			iVar2 = EVENT::_0x38497F139981C5C9(*iParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*iParam0, 0);
			return 1;
	}
	return 0;
}

int func_777(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_784();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_778(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1, 1) || DECORATOR::DECOR_EXIST_ON(iParam0, "DamagedByPlayer"))
			{
				return 1;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(iVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PED::GET_MOUNT(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_908(iVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(iParam0) || PED::_0x947E43F544B6AB34(iParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_909(iVar0, iParam0))
	{
		return 1;
	}
	if (PED::_0xD0B7AEB56229D317(PLAYER::PLAYER_PED_ID()) == iParam0)
	{
		if (PED::_0x0E99E3BF11BB6367(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_BEING_JACKED(iParam0))
		{
			if (PED::GET_PEDS_JACKER(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_779(var uParam0, int iParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

int func_780(var uParam0, int iParam1)
{
	if (func_910(uParam0))
	{
		return 1;
	}
	if (PED::_0x29FCE825613FEFCA(iParam1, 400))
	{
		return 1;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return 0;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_34, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_34, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
	{
		return 0;
	}
	if (PED::_GET_LASSOED_ENTITY(Global_34) != 0)
	{
		return 1;
	}
	if (WEAPON::_0x8D50F43298AB9545(Global_34, iParam1))
	{
		return 1;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_781(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_911(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_782()
{
}

int func_783(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_34);
	if (iVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		if (func_912(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_784();
			return 1;
		}
		else if (VEHICLE::_0xA19447D83294E29F(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return 0;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (func_913(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_784();
								return 1;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return 0;
}

int func_784()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_785()
{
	if (Global_1939178->f_36 == 0)
	{
		return 0;
	}
	if (Global_1939178->f_36 == Global_1939178->f_34)
	{
		return 0;
	}
	if (Global_1939178->f_37 <= 0)
	{
		return 0;
	}
	if ((func_784() - Global_1939178->f_37) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_786(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return 0;
	}
	fVar0 = func_891(uParam0);
	if (uParam0->f_12 > func_723(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_914(iParam1);
	iVar1 = func_915(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || PED::_0x9D9473CB82D83A30(iParam1, Global_34, 0) == 1) || PED::_0x9D9473CB82D83A30(iParam1, uParam0->f_14, 0) == 1)
		{
			return 1;
		}
	}
	return 0;
}

float func_787(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_788(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_916(iParam0, vVar0, iParam2);
}

int func_789(int iParam0, int iParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_917(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_790(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (*uParam1 & 67108864 != 0)
	{
		return 1;
	}
	if (Global_1939178->f_18)
	{
		return 1;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_918(iParam0, uParam1, 1))
		{
			return 1;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17)) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_34, true, 0) == 1)
		{
			return 1;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_34);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return 0;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return 0;
	}
	switch (iVar1)
	{
		case -2027383723:
		case -870494873:
		case joaat("event_shocking_seen_car_stolen"):
		case 1201762715:
			if (func_919(uParam1))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_34)
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			return 1;
		case -1601932249:
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17))
				{
					if (!func_920(uParam1, iParam0))
					{
						if (func_913(iVar4, Global_35, 1) < 7f)
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_791(int iParam0, var uParam1)
{
	if (!func_921(0))
	{
		return 0;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_34, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_792(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_784();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_793(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_794(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_784();
	}
	else if (func_784() - uParam1->f_4) > func_922(uParam1)
	{
		return func_923(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

int func_795(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIgnoreDamageChecking"))
	{
		return 0;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (Global_34 == iVar1 || Global_1939178->f_34 == iVar1)
	{
		return 1;
	}
	return 0;
}

void func_796(bool bParam0)
{
	int iVar0;

	if (!func_114(64, 255))
	{
		iVar0 = func_445(Local_1067.f_1, Local_1067.f_2);
		func_829(iVar0);
		if (!func_114(1024, 255))
		{
			func_828(Local_1067.f_1);
			func_134(1024);
		}
		func_830(iVar0);
		if (bParam0)
		{
			func_856(Local_1067.f_1, Local_1067.f_4);
		}
		func_134(64);
	}
}

int func_797(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return 1;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return 0;
}

bool func_798(int iParam0)
{
	return !MISC::IS_BIT_SET(Local_1067.f_377.f_69, iParam0);
}

int func_799(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_5)
	{
		func_764(uParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		uParam1->f_12 = fParam3;
	}
	else
	{
		uParam1->f_12 = BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1939178->f_6 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1939178->f_24 || Global_1939178->f_25)
		{
			if (!uParam1->f_1 & 2 != 0)
			{
				if (func_777(uParam1, 4000))
				{
					if ((func_778(iParam0, Global_1939178->f_35, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_779(uParam1, iParam0)) && func_780(uParam1, iParam0))
					{
						func_782();
						*uParam2 = 2;
						func_766(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!uParam1->f_1 & 2 != 0)
		{
			if (uParam1->f_12 < 4f)
			{
				if (func_777(uParam1, 4000))
				{
					if ((func_778(iParam0, Global_1939178->f_35, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_779(uParam1, iParam0)) && func_780(uParam1, iParam0))
					{
						func_782();
						*uParam2 = 2;
						func_766(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
			else if (Global_1939178->f_35 != 0)
			{
				if (Global_1939178->f_34 == 0)
				{
					if (func_781(iParam0, Global_1939178->f_35))
					{
						func_782();
						*uParam2 = 2;
						func_766(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
			if (Global_1939178->f_36 != 0)
			{
				if (func_785())
				{
					if (func_781(iParam0, Global_1939178->f_36))
					{
						func_782();
						*uParam2 = 2;
						func_766(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (Global_1939178->f_19)
		{
			if (func_771(uParam1, 1065353216 /* Float: 1f */))
			{
				if (!uParam1->f_1 & 4 != 0)
				{
					if (func_772(Global_34, iParam0, uParam1))
					{
						func_782();
						*uParam2 = 4;
						func_766(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
				if (!uParam1->f_1 & 256 != 0)
				{
					if (func_773(Global_34, iParam0, uParam1))
					{
						func_782();
						*uParam2 = 256;
						func_766(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!uParam1->f_1 & 131072 != 0)
		{
			if (func_924(iParam0, uParam1))
			{
				func_782();
				*uParam2 = 131072;
				func_766(iParam0, uParam1, *uParam2);
				return 1;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_925(iParam0, uParam1))
			{
				func_782();
				*uParam2 = 262144;
				func_766(iParam0, uParam1, *uParam2);
				return 1;
			}
		}
	}
	return 0;
}

float func_800(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

int func_801(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (fParam1 > fParam2)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_6))
	{
		return 0;
	}
	return 1;
}

int func_802(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_801(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_803() - 0.02f);
		}
		return 1;
	}
	uParam0->f_8 = 0f;
	return 0;
}

float func_803()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_804(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar0, iParam0, iParam1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					return iVar0;
				}
			}
		}
	}
	return 0;
}

void func_805(var uParam0)
{
}

void func_806(var uParam0)
{
}

int func_807(var uParam0)
{
	return uParam0;
}

void func_808(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_2 = sParam2;
	((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_3 = iParam3;
	((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_6 = iParam4;
	((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_4 = iParam5;
	((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_5 = iParam6;
	((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_7 = iParam7;
	((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_1 = iParam8;
	if (func_878(iParam0))
	{
		func_811(iParam0, iParam1, 1);
	}
}

void func_809(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (MISC::_0x375F5870A7B8BEC1(((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_2))
	{
		return;
	}
	if (!bParam2)
	{
		func_206(&(((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_1), 1);
	}
	else
	{
		func_305(&(((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_1), 1);
	}
	if (bParam3 && func_878(iParam0))
	{
		func_621(&((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/]), bParam2, 1, 1);
	}
}

void func_810(int iParam0, int iParam1)
{
	((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_2 = "";
	((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_3 = 0;
	((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_6 = 0;
	((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_4 = 1;
	((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_5 = 0;
	((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_7 = -1;
	((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_1 = 0;
	if (func_878(iParam0))
	{
		func_439((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/], 1, 1);
	}
}

void func_811(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (MISC::_0x375F5870A7B8BEC1(((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_2))
	{
		return;
	}
	if (bParam2)
	{
		func_439((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/], 1, 1);
	}
	if (((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_3 == 0)
	{
	}
	iVar0 = func_156(iParam0);
	iVar1 = func_926(((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_2, ((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_3, iVar0, ((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_4, ((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_5, 0, 0, ((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_6, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
	iVar2 = func_707(iVar1);
	func_927(iVar1, 18, 0, 1);
	func_927(iVar1, 17, 0, 1);
	HUD::_UIPROMPT_SET_GROUP(((*Global_1949759)[iVar2 /*23*/])->f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iVar0), 0);
	if (func_161(((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_1, 2))
	{
		func_928(iVar1, ((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_2, ((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_7, 1);
	}
	if (!func_161(((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_1, 1))
	{
		if (func_161(((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_1, 4))
		{
			if (func_622() < ((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/])->f_7)
			{
				if (func_620(&((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/]), 0))
				{
					func_621(&((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/]), 0, 1, 1);
				}
			}
			else if (!func_620(&((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/]), 0))
			{
				func_621(&((Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/]), 1, 1, 1);
			}
		}
	}
	else
	{
		func_621(iVar1, 0, 1, 1);
	}
	(Local_1067.f_520.f_10[iParam0 /*29*/])->f_4[iParam1 /*8*/] = iVar1;
}

void func_812(int iParam0, int iParam1)
{
	func_206(&((Local_1067.f_520.f_10[iParam0 /*29*/])->f_3), iParam1);
}

bool func_813(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1) != 0;
}

void func_814(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 - (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1));
}

void func_815(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		if (((*Global_1949759)[iParam0 /*23*/])->f_5 == 5 && !func_813(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, iParam1);
		}
	}
}

void func_816(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1949759)[iParam0 /*23*/])->f_3, iParam1);
	}
}

void func_817(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 || iParam1);
}

var func_818()
{
	return Local_1067.f_520;
}

int func_819()
{
	return Local_1067.f_520.f_7;
}

void func_820(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_155(iVar0);
		func_809(iVar1, 0, bParam0, bParam1);
		func_809(iVar1, 1, bParam0, bParam1);
		func_809(iVar1, 2, bParam0, bParam1);
		iVar0++;
	}
}

void func_821()
{
	func_855();
}

bool func_822(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_929(iParam0, &Var0);
}

float func_823()
{
	switch (func_197())
	{
		case 3:
			return 16f;
		case 4:
			return 16f;
		case 5:
			return 16f;
		case 6:
			return 16f;
		case 7:
			return 16f;
		default:
			break;
	}
	return 16f;
}

float func_824()
{
	switch (func_197())
	{
		case 3:
			return 25f;
		case 4:
			return 25f;
		case 5:
			return 25f;
		case 6:
			return 25f;
		case 7:
			return 25f;
		default:
			break;
	}
	return 25f;
}

float func_825(float fParam0, float fParam1, float fParam2)
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

Vector3 func_826(vector3 vParam0, vector3 vParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	float fVar14;

	vVar0 = { func_527(vParam0) };
	vVar3 = { func_930(func_930(vVar0, func_527(vParam3)), vVar0) };
	fVar6 = MISC::ATAN2(vVar0.y, vVar0.x);
	fVar7 = -MISC::ATAN2(vVar0.z, BUILTIN::SQRT(((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y))));
	vVar8 = { -vVar0.y, vVar0.x, 0f };
	vVar11 = { func_930(vVar8, vVar0) };
	fVar14 = (MISC::ATAN2((func_800(vVar8, vVar3) / BUILTIN::VMAG(vVar8)), (func_800(vVar11, vVar3) / BUILTIN::VMAG(vVar11))) + 180f);
	return fVar14, fVar7, fVar6;
}

void func_827(int iParam0, int iParam1)
{
	struct<11> Var0;
	struct<2> Var17;
	int iVar19;

	Var0.f_10 = 1106247680;
	func_32(&Var0, iParam0, -1, -1, 255);
	Var17 = { func_554(iParam0, 1346578557) };
	if (!STATS::STAT_ID_GET_INT(&Var17, &iVar19))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	MISC::SET_BIT(&iVar19, iParam1);
	if (!func_105(&Var0, 4) && func_931(iVar19) == Var0.f_1)
	{
		iVar19 = 0;
	}
	if (!STATS::STAT_ID_SET_INT(&Var17, iVar19, true))
	{
	}
	((*Global_1244010)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/])->f_36[iParam0] = iVar19;
}

void func_828(int iParam0)
{
	func_932();
	func_933(iParam0);
}

void func_829(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<11> Var2;
	int iVar19;
	struct<2> Var20;
	int iVar22;
	struct<2> Var23;

	if (func_111(Global_1245803[iParam0 /*4*/]))
	{
		return;
	}
	func_934(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 1106247680;
	func_32(&Var2, iVar0, iVar1, -1, 255);
	func_112((*Global_1245803)[iParam0 /*4*/]);
	iVar19 = Var2.f_5;
	if (iVar19 != 0)
	{
		Var20 = { func_935(153786159) };
		STATS::STAT_ID_SET_INT(&Var20, iVar19, true);
		Var20 = { func_935(217123284) };
		STATS::STAT_ID_SET_INT(&Var20, Global_1275573->f_21, true);
	}
	iVar22 = Var2.f_9;
	if (iVar22 != 0)
	{
		Var23 = { func_935(945205875) };
		STATS::STAT_ID_SET_INT(&Var23, iVar22, true);
		Var23 = { func_935(890183498) };
		STATS::STAT_ID_SET_INT(&Var23, Global_1275573->f_21, true);
	}
}

void func_830(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_714(&Var0);
}

void func_831(struct<2> Param0)
{
	struct<32> Var0;

	if (func_443(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_443(Param0)))
	{
	}
	else
	{
		STATS::_0xB2A38826E5886E83(func_443(Param0), Global_265331->f_124445.f_70.f_17);
		if (func_936(Param0, &Var0))
		{
			if (Var0.f_29 == -681494152)
			{
				STATS::_0xF21A5D66874FCEDD(Var0.f_2, 0, joaat("race"));
			}
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_29, 0);
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_30, 0);
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_31, 0);
		}
	}
}

void func_832(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_554(iParam0, -1797584255) };
	STATS::_0x6A0184E904CDF25E(&Var0, 1);
}

void func_833(int iParam0, int iParam1)
{
	if (!func_937(255))
	{
		func_643(iParam0);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(&(Local_1067.f_18.f_3[iParam0 /*2*/])))
	{
		Local_1067.f_18.f_3[iParam0 /*2*/] = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, func_101(0));
		switch (func_197())
		{
			case 0:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				if (func_201() == 2)
				{
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(Local_1067.f_18.f_3[iParam0 /*2*/]), "NB_PHOTOGRAPHY_BLIP_NAME_DS");
				}
				else
				{
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(Local_1067.f_18.f_3[iParam0 /*2*/]), "NB_PHOTOGRAPHY_BLIP_NAME_TS");
				}
				break;
			case 1:
			case 2:
			case 8:
			case 9:
			case 10:
			case 11:
				if (func_201() == 2)
				{
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(Local_1067.f_18.f_3[iParam0 /*2*/]), "NB_PHOTOGRAPHY_BLIP_NAME_DS");
				}
				else
				{
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(Local_1067.f_18.f_3[iParam0 /*2*/]), "NB_PHOTOGRAPHY_BLIP_NAME_FS");
				}
				break;
			default:
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(Local_1067.f_18.f_3[iParam0 /*2*/]), "NB_PHOTOGRAPHY_BLIP_NAME_TS");
				break;
		}
	}
	if (iParam1 != 0)
	{
		MAP::_0x662D364ABF16DE2F(&(Local_1067.f_18.f_3[iParam0 /*2*/]), 942020339);
	}
}

void func_834(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_101(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return;
	}
	if (NETWORK::_0x255A5EF65EDA9167(Local_1067.f_18.f_156))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			return;
		}
		if (Local_1067.f_18.f_156 != iParam0)
		{
			Local_1067.f_18.f_156 = iParam0;
		}
		func_938(&(Local_1067.f_18.f_219), PLAYER::GET_PLAYER_PED(Local_1067.f_18.f_156), 0, iParam1, 2, 1, 2, 1, 0, 0, 0, 0);
		_NAMESPACE29::_0x66F9EB44342BB4C5(iVar1, &(Local_1067.f_18.f_219));
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			return;
		}
		Local_1067.f_18.f_156 = iParam0;
		func_938(&(Local_1067.f_18.f_219), PLAYER::GET_PLAYER_PED(Local_1067.f_18.f_156), 0, iParam1, 2, 1, 2, 1, 0, 0, 0, 0);
		_NAMESPACE29::_0x66F9EB44342BB4C5(iVar1, &(Local_1067.f_18.f_219));
	}
}

char* func_835(int iParam0)
{
	switch (func_197())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "WORLD_HUMAN_WAITING_IMPATIENT_MALE_D";
				case 1:
					return "WORLD_HUMAN_STAND_WAITING_MALE_B";
				case 2:
					return "WORLD_HUMAN_STERNGUY_IDLES_MALE_A";
				case 3:
					return "AMB_CAMP_WORLD_CAMP_FIRE_SIT_GROUND_MALE_A";
				default:
					break;
			}
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			switch (func_201())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return "WORLD_HUMAN_CROUCH_INSPECT_MALE_A_MOONSHINE";
						case 1:
							return "WORLD_HUMAN_STAND_WAITING_FEMALE_A";
						case 2:
							return "WORLD_HUMAN_WAITING_IMPATIENT_FEMALE_A";
						case 3:
							return "WORLD_CAMP_FIRE_SIT_GROUND_FEMALE_A";
						case 4:
							return "";
						default:
							break;
					}
					break;
				default:
					switch (iParam0)
					{
						case 0:
							return "WORLD_HUMAN_CROUCH_INSPECT_MALE_A_MOONSHINE";
						case 1:
							return "WORLD_HUMAN_STAND_WAITING_MALE_B";
						case 2:
							return "WORLD_HUMAN_STERNGUY_IDLES_MALE_A";
						case 3:
							return "AMB_CAMP_WORLD_CAMP_FIRE_SIT_GROUND_MALE_A";
						case 4:
							return "";
						default:
							break;
					}
					break;
			}
			break;
		case 1:
		case 2:
		case 9:
		case 10:
		case 11:
			switch (iParam0)
			{
				case 0:
					return "WORLD_HUMAN_WAITING_IMPATIENT_FEMALE_A";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_836(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = func_101(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
	{
		return;
	}
	if (Local_1067.f_18.f_155 == iParam0 && func_304(iVar1, -875674219))
	{
		return;
	}
	if (NETWORK::_0x255A5EF65EDA9167(Local_1067.f_18.f_155))
	{
		if ((Local_1067.f_18.f_159 == 0 || NETWORK::GET_TIME_DIFFERENCE(Local_1067.f_18.f_159, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 3000) || !func_304(iVar1, -875674219))
		{
			iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				return;
			}
			if (iParam1 != -1)
			{
				if (func_520(Local_13.f_7.f_11, Local_13.f_7.f_16))
				{
					func_435(524288);
					Local_1067.f_18.f_155 = iParam0;
					Local_1067.f_18.f_159 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					iVar2 = func_939(iParam1);
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iVar1, func_311(iParam1), func_543(iParam1), PLAYER::GET_PLAYER_PED(Local_1067.f_18.f_155), -1, 4f, -2f, 8, 0, 0, 0, -1082130432, iVar2, 0, -1082130432);
				}
				else if (Local_1067.f_18.f_155 != iParam0)
				{
					Local_1067.f_18.f_155 = iParam0;
					Local_1067.f_18.f_159 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar1, PLAYER::GET_PLAYER_PED(Local_1067.f_18.f_155), -1, -1082130432, -1082130432, -1082130432);
				}
			}
			else
			{
				Local_1067.f_18.f_155 = iParam0;
				Local_1067.f_18.f_159 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar1, PLAYER::GET_PLAYER_PED(Local_1067.f_18.f_155), -1, -1082130432, -1082130432, -1082130432);
			}
		}
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			return;
		}
		Local_1067.f_18.f_155 = iParam0;
		Local_1067.f_18.f_159 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		if (iParam1 != -1)
		{
			func_435(524288);
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iVar1, func_311(iParam1), func_543(iParam1), PLAYER::GET_PLAYER_PED(Local_1067.f_18.f_155), -1, 4f, -2f, 8, 0, 0, 0, -1082130432, 0, 0, -1082130432);
		}
		else
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar1, PLAYER::GET_PLAYER_PED(Local_1067.f_18.f_155), -1, -1082130432, -1082130432, -1082130432);
		}
	}
}

bool func_837(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_554(iParam1, 896190569) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return false;
	}
	return MISC::IS_BIT_SET(iVar2, iParam0);
}

int func_838(int iParam0)
{
	return iParam0 + 8;
}

int func_839(int iParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	vector3 vVar5;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || PED::IS_PED_DEAD_OR_DYING(iParam0, true))
	{
		return 0;
	}
	iVar0 = 0;
	fVar1 = 0.2f;
	fVar2 = 0.8f;
	fVar3 = 0.1f;
	fVar4 = 0.9f;
	vVar5 = { PED::GET_PED_BONE_COORDS(iParam0, 21030, 0f, 0f, 0f) };
	if (func_638(vVar5, fVar1, fVar2, fVar3, fVar4))
	{
		iVar0++;
	}
	fVar1 = 0.4f;
	fVar2 = 0.6f;
	fVar3 = 0.3f;
	fVar4 = 0.7f;
	if (func_638(vVar5, fVar1, fVar2, fVar3, fVar4))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_840(int iParam0, int iParam1, float fParam2)
{
	return func_846(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

int func_841(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_101(0);
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), vParam0) < 5f)
	{
		return 1;
	}
	return 0;
}

int func_842(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_101(0);
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), vParam0) > 20f)
	{
		return 1;
	}
	return 0;
}

int func_843()
{
	switch (func_197())
	{
		case 3:
			return 1;
		case 4:
			return 3;
		case 5:
			return 2;
		case 6:
			return 3;
		case 7:
			return 2;
		default:
			break;
	}
	return 1;
}

int func_844()
{
	switch (func_197())
	{
		case 3:
			return 0;
		case 4:
			return 2;
		case 5:
			return 1;
		case 6:
			return 2;
		case 7:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_845()
{
	float fVar0;

	fVar0 = 16f;
	switch (func_197())
	{
		case 3:
			fVar0 = 16f;
			break;
		case 4:
			fVar0 = 16f;
			break;
		case 5:
			fVar0 = 16f;
			break;
		case 6:
			fVar0 = 16f;
			break;
		case 7:
			fVar0 = 16f;
			break;
	}
	if (func_940(2, fVar0))
	{
		func_509(0, 65f, 5000, 2, 97, 98, -1, -1, -1, -1, 0, -1);
		return 1;
	}
	return 0;
}

bool func_846(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

void func_847(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

int func_848()
{
	int iVar0;

	iVar0 = func_197();
	switch (iVar0)
	{
		case 0:
			return 697410695;
		case 1:
			return 161068336;
		case 2:
			return 697410695;
		case 3:
			return -1215290486;
		case 4:
			return -1227782948;
		case 5:
			return -1215290486;
		case 6:
			return -1215290486;
		case 7:
			return -1215290486;
		case 8:
			return 161068336;
		case 9:
			return -1130398329;
		case 10:
			return -1130398329;
		case 11:
			return 697410695;
		default:
			break;
	}
	return 161068336;
}

bool func_849(int iParam0)
{
	return func_606(iParam0);
}

bool func_850(int iParam0)
{
	return ENTITY::DOES_ENTITY_EXIST(&(Local_1067.f_271.f_7[iParam0 /*11*/]));
}

int func_851(int iParam0, bool bParam1)
{
	if (!bParam1 || func_850(iParam0))
	{
		return ENTITY::IS_ENTITY_DEAD(&(Local_1067.f_271.f_7[iParam0 /*11*/]));
	}
	return 0;
}

bool func_852(int iParam0)
{
	return MAP::DOES_BLIP_EXIST((Local_1067.f_271.f_7[iParam0 /*11*/])->f_1);
}

void func_853(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	int iVar0;

	func_152(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(&(Local_1067.f_271.f_7[iParam0 /*11*/])))
	{
		return;
	}
	iVar0 = MAP::_BLIP_ADD_FOR_ENTITY(iParam1, &(Local_1067.f_271.f_7[iParam0 /*11*/]));
	if (iParam2 != 0)
	{
		MAP::_0x662D364ABF16DE2F(iVar0, iParam2);
	}
	if (iParam3 != 0)
	{
		MAP::SET_BLIP_SPRITE(iVar0, iParam3, true);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, sParam4);
	}
	(Local_1067.f_271.f_7[iParam0 /*11*/])->f_1 = iVar0;
}

bool func_854(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_941(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

void func_855()
{
	if (!func_67(2))
	{
		return;
	}
	func_129(8);
}

void func_856(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_715(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_838(iParam1);
	func_720(iVar0, iParam0);
}

bool func_857(int iParam0)
{
	return func_813(iParam0, 2);
}

int func_858(struct<2> Param0, var uParam2)
{
	if (!func_39(Param0))
	{
		return 0;
	}
	func_942(uParam2);
	switch (Param0)
	{
		case 2:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634[Param0.f_1 /*3*/], 3);
			return 1;
		case 3:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_602[Param0.f_1 /*3*/], 3);
			return 1;
		case 4:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_2104[Param0.f_1 /*3*/], 3);
			return 1;
		case 5:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_12606[Param0.f_1 /*3*/], 3);
			return 1;
		case 6:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_12908[Param0.f_1 /*3*/], 3);
			return 1;
		case 7:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_15910[Param0.f_1 /*3*/], 3);
			return 1;
		case 8:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_15981[Param0.f_1 /*3*/], 3);
			return 1;
		default:
			break;
	}
	return 0;
}

int func_859()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.x = Global_1234391->f_8113;
	vVar1.f_2 = -1041770777;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar1.f_1), &vVar1))
	{
		iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(vVar1.x, vVar1.y);
	}
	return iVar0;
}

void func_860(var uParam0, var uParam1)
{
}

int func_861(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, 1);
	}
	return iVar0;
}

int func_862(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return 1;
	}
	return 0;
}

var func_863(int iParam0, int iParam1)
{
	return func_744(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_864(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 15, 40, &uParam1);
}

int func_865()
{
	return Global_1051202->f_12;
}

char* func_866()
{
	return "unnamed";
}

int func_867(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		case 0:
			iVar0 = 32;
			break;
		case 1:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 128;
			break;
		case 3:
			iVar0 = 256;
			break;
		case 4:
			iVar0 = 512;
			break;
		case 5:
			iVar0 = 1024;
			break;
		case 6:
			iVar0 = 2048;
			break;
		case 8:
			iVar0 = 4096;
			break;
	}
	return iVar0;
}

int func_868(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_943(35, iParam0);
}

int func_869(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1099294->f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (&Global_1275573->f_22[iParam0])
	{
		return ((*Global_1097610)[iParam0 /*51*/])->f_1;
	}
	return 26;
}

bool func_870(int iParam0)
{
	if (func_944(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 1)
		{
			func_945(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 1;
}

int func_871(int iParam0)
{
	switch (iParam0)
	{
		case 176:
			return 1;
		case 177:
			return 1;
		case 178:
			return 1;
		case 179:
			return 1;
		default:
			break;
	}
	return 0;
}

Vector3 func_872(char* sParam0)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_873(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!AUDIO::_0xD89504D9D7D5057D(&vParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&vParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_946(vParam1, uParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&vParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&vParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&vParam1, iParam5);
		}
	}
	return bVar0;
}

void func_874(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 - iVar1 * 32);
	MISC::SET_BIT(Local_1067.f_18.f_45[iVar1], iVar2);
}

int func_875(int iParam0, var uParam1)
{
	uParam1->f_1 = 0;
	*uParam1 = func_101(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		uParam1->f_2 = func_503(iParam0, -1, 1);
		if (uParam1->f_2 < 0f)
		{
			uParam1->f_2 = 0f;
		}
		return 1;
	}
	return 0;
}

bool func_876(int iParam0, int iParam1)
{
	return func_161((Local_1067.f_520.f_10[iParam0 /*29*/])->f_3, iParam1);
}

bool func_877(int iParam0)
{
	return !func_161((Local_1067.f_520.f_10[iParam0 /*29*/])->f_3, 4);
}

int func_878(int iParam0)
{
	if (Local_1067.f_520.f_3.f_1 == iParam0)
	{
		return 1;
	}
	return 0;
}

void func_879(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_880(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_881(var uParam0)
{
	return func_759(*uParam0, 2);
}

void func_882(int iParam0)
{
	MISC::SET_BIT(&((Local_74[NETWORK::PARTICIPANT_ID_TO_INT() /*31*/])->f_10.f_3), iParam0);
}

void func_883(int iParam0)
{
	MISC::CLEAR_BIT(&((Local_74[NETWORK::PARTICIPANT_ID_TO_INT() /*31*/])->f_10.f_2), iParam0);
}

void func_884(int iParam0)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;

	if (Global_19 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1939178->f_32);
	Global_1939178->f_21 = func_947();
	if (Global_1939178->f_21)
	{
		Global_1939178->f_22 = MISC::GET_GAME_TIMER();
	}
	bVar1 = false;
	if (WEAPON::IS_WEAPON_VALID(Global_1939178->f_38))
	{
		bVar1 = true;
		if (PED::IS_PED_SHOOTING(Global_34))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_34, &uVar2))
			{
			}
			else
			{
				uVar2 = Global_1939178->f_38;
			}
			Global_1939178->f_40 = uVar2;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_948(&(Global_1939178->f_28), &(Global_1939178->f_33));
			Global_1939178->f_32 = iParam0;
			break;
		case 1:
			Global_1939178->f_24 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1939178->f_24)
			{
				if (bVar1 && WEAPON::_0x6E4E1A82081EABED(Global_1939178->f_38))
				{
					Global_1939178->f_24 = PED::_GET_LASSOED_ENTITY(Global_34) != 0;
				}
				if (Global_1939178->f_40 == 1151374672)
				{
					Global_1939178->f_24 = WEAPON::_0x46D42883E873C1D7(Global_34) > 0;
				}
			}
			break;
		case 2:
			bVar3 = WEAPON::IS_WEAPON_VALID(Global_1939178->f_40);
			if (bVar3 && WEAPON::_0x6E4E1A82081EABED(Global_1939178->f_40))
			{
				Global_1939178->f_19 = 0;
			}
			else
			{
				if (bVar3 && WEAPON::_0x5809DBCA0A37C82B(Global_1939178->f_40))
				{
					Global_1939178->f_19 = PED::_0x285D36C5C72B0569(Global_34) <= 3f;
				}
				else
				{
					Global_1939178->f_19 = PED::_0x285D36C5C72B0569(Global_34) <= 1f;
				}
				if (Global_1939178->f_19)
				{
					Global_1939178->f_23 = MISC::GET_FRAME_COUNT();
				}
			}
			break;
		default:
			Global_1939178->f_32 = iParam0 + 1;
			break;
	}
	Global_19 |= 4;
}

var func_885(int iParam0)
{
	return &(Global_1099294->f_372[iParam0 /*3*/]);
}

int func_886(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_949(bParam0, &iVar0, &iVar1))
	{
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::GET_PED_CONFIG_FLAG(iVar0, 6, false))
			{
				return 0;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && PED::GET_PED_CONFIG_FLAG(iVar1, 6, false))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_887(var uParam0)
{
	int iVar0;

	iVar0 = Global_1939178->f_34;
	if (func_28() == -1)
	{
		if (Global_1939178->f_34 == 0)
		{
			iVar0 = func_950(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1939178->f_34) || !&Global_1954472->f_1616[4])
	{
		iVar0 = func_950(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_915(iVar0) == -1)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
	{
		return 0;
	}
	uParam0->f_14 = iVar0;
	return 1;
}

void func_888(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_951(uParam0);
	}
}

int func_889(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam2))
	{
		iVar1 = func_915(iParam2);
	}
	else
	{
		iVar1 = func_914(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_915(iParam0);
	}
	else
	{
		iVar0 = func_914(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_161(*uParam1, 8388608))
	{
		return 1;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam2);
	switch (iVar2)
	{
		case -1976316465:
		case -1505548114:
		case -350651841:
		case -50399569:
		case 106566339:
		case 707888648:
		case 841021282:
			switch (iVar3)
			{
				case -1976316465:
				case -1505548114:
				case -350651841:
				case 841021282:
					return 1;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return 1;
	}
	return 0;
}

float func_890(int iParam0, int iParam1)
{
	return func_911(iParam0, iParam1, 1, 1);
}

float func_891(var uParam0)
{
	return uParam0->f_28;
}

void func_892(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_206(uParam0, 134217728);
	}
	else
	{
		func_305(uParam0, 134217728);
	}
}

void func_893()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_894(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if ((WEAPON::_0x6E4E1A82081EABED(Global_1939178->f_38) || 1151374672 == Global_1939178->f_38) && Global_1939178->f_21)
	{
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return 0;
		}
	}
	if (Global_1939178->f_34 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1939178->f_34, 1) == iParam0)
		{
			return 0;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_911(iVar0, iParam0, 1, 1) <= 4f)
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_0x6AD66548840472E5(func_952(iVar0, 0)))
		{
			if (func_953(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_895(var uParam0)
{
	return uParam0->f_17;
}

int func_896(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_161(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(iParam1, Global_34, -1f, fParam3, -1f, fVar0))
	{
		return 1;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_34, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_897(var uParam0)
{
	return uParam0->f_18;
}

int func_898(var uParam0)
{
	return uParam0->f_19;
}

int func_899(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if (bParam3)
	{
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, 0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_0x6AD66548840472E5(func_952(iVar0, 0)))
		{
			if (func_638(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_900(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1939178->f_12)
	{
		if ((bParam2 || Global_1939178->f_13 > 0) || Global_1939178->f_11 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1939178->f_9 == 1370593166)
	{
		return 0;
	}
	if (Global_1939178->f_14 > 0 || (bParam2 && Global_1939178->f_14 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1939178->f_7)
		{
			if (bParam2 || Global_1939178->f_15 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_901(var uParam0)
{
	return uParam0->f_24;
}

int func_902(var uParam0)
{
	int iVar0;

	switch (uParam0->f_7)
	{
		case 0:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (uParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if (*uParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_903(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_846(iParam0, vParam4, 0.5f))
	{
		if (ENTITY::_0x0C9DBF48C6BA6E4C(iParam0, vParam4, 17))
		{
			return 1;
		}
	}
	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
	{
		return 1;
	}
	return 0;
}

int func_904(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
	{
		if (Global_1939178->f_38 == joaat("weapon_unarmed"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1939178->f_40))
		{
			if (WEAPON::_0x959383DCD42040DA(Global_1939178->f_40) || WEAPON::_0xC4DEC3CA8C365A5D(Global_1939178->f_40))
			{
				return 1;
			}
		}
	}
	if (func_954(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_905(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_955(iParam1))
		{
			return 0;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_906(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_955(iParam1))
		{
			return 0;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_907(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = func_956(uParam0);
	if (func_955(iParam1))
	{
		return 0;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, &(Global_1939178->f_28[iParam3]), 17))
		{
			if (PED::_0x06087579E7AA85A9(iParam1, &(Global_1939178->f_28[iParam3]), -1f, -1f, -1f, -1f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_908(int iParam0, int iParam1)
{
	if (!TASK::_0xEFC4303DDC6E60D3(iParam0))
	{
		return 0;
	}
	*iParam1 = TASK::_0xED1F514AF4732258(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		return 0;
	}
	if (!PED::_0x2D64376CF437363E(*iParam1))
	{
		return 0;
	}
	return 1;
}

int func_909(int iParam0, int iParam1)
{
	if (PED::_GET_LASSOED_ENTITY(iParam0) == iParam1)
	{
		return 1;
	}
	if (WEAPON::_0x8D50F43298AB9545(iParam0, iParam1))
	{
		return 1;
	}
	if (!WEAPON::_0x6E4E1A82081EABED(func_957(iParam0, 1, 0, 0)) && !func_957(iParam0, 1, 0, 0) == 1151374672)
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(iParam0) == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_910(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_911(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_912(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_913(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_913(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_914(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_915(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_916(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_958(vVar3, vVar6);
	if (MISC::ABSF(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_959(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_917(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1939178->f_34 != 0)
	{
		bVar0 = true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_1939178->f_34, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_908(Global_34, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (PED::IS_PED_RAGDOLL(iParam0) || (!bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_911(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_911(iParam0, Global_1939178->f_34, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1939178->f_34, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (PED::IS_PED_RAGDOLL(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_918(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_949(1, &iVar0, &iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17))
				{
					if (!bParam2 || !func_920(uParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17))
			{
				if (!bParam2 || !func_920(uParam1, iVar1))
				{
					if (func_913(iVar1, Global_35, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_919(var uParam0)
{
	return func_161(*uParam0, 131072);
}

int func_920(var uParam0, int iParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iParam1, "bIsCriminal"))
	{
		return 1;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam1, 4, false))
	{
		return 1;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam1);
	switch (iVar0)
	{
		case -1996978098:
		case -1448293989:
		case -350226955:
		case 266218800:
		case 555364152:
		case 1078461828:
		case 1222652248:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_921(int iParam0)
{
	return 0;
}

int func_922(var uParam0)
{
	return uParam0->f_21;
}

int func_923(int iParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_12;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_34, 90f))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Global_34))
		{
			return 1;
		}
	}
	return 0;
}

int func_924(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = func_960(uParam1);
	if (uParam1->f_12 > (fVar0 + 5f))
	{
		return 0;
	}
	if (!PED::_0x5102307CE88798EB(iParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	}
	if (uParam1->f_12 < fVar0 || PED::IS_TRACKED_PED_VISIBLE(iParam0))
	{
		fVar1 = -1f;
		fVar2 = func_961(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5f));
		if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, fVar2, -1f, fVar1) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_34, true, 0) == 1)
		{
			return 1;
		}
		else if (WEAPON::IS_WEAPON_VALID(Global_1939178->f_38))
		{
			if (WEAPON::_0x79407D33328286C6(Global_1939178->f_38) || WEAPON::_0x506F1DE1BFC75304(Global_1939178->f_38))
			{
				if (uParam1->f_12 <= 5f)
				{
					if (func_962())
					{
						if (PED::IS_PED_FACING_PED(Global_34, iParam0, 110f))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_925(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (func_955(iParam0))
	{
		PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.25f);
	}
	if (((PED::_0xD5FE956C70FF370B(Global_34) || PED::IS_PED_IN_COVER(Global_34, 0, 0)) || PED::IS_PED_GOING_INTO_COVER(Global_34)) || *uParam1 & 2097152 != 0)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	if (PED::_0x0EA9EACBA3B01601(Global_34, iParam0, iVar1) && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 4f)
	{
		if (*uParam1 & 512 != 0)
		{
			if (PED::IS_PED_IN_COVER(Global_34, 0, 0) || PED::IS_PED_GOING_INTO_COVER(Global_34))
			{
				return 0;
			}
			if (PED::_0xD5FE956C70FF370B(Global_34) || ((PED::_0xA29FD00D45311EB7(Global_34, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) < 8f) && *uParam1 & 2097152 != 0))
			{
				return 0;
			}
		}
		if (PED::_0xA29FD00D45311EB7(Global_34, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 8f)
		{
		}
		iVar0 = 1;
	}
	return iVar0;
}

int func_926(char* sParam0, int iParam1, int iParam2, int iParam3, var uParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_813(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == ((*Global_1949759)[iVar0 /*23*/])->f_11 && iParam1 == ((*Global_1949759)[iVar0 /*23*/])->f_4)
				{
					if (iParam3 <= Global_1949759[iVar0 /*23*/])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_963(iVar1, iParam1, sParam0, 5, iParam3, uParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

void func_927(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_438(iParam0))
	{
		return;
	}
	iVar0 = func_707(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1949759)[iVar0 /*23*/])->f_3, iParam1, iParam2);
}

void func_928(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_438(iParam0))
	{
		return;
	}
	iVar0 = func_707(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1949759)[iVar0 /*23*/])->f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

var func_929(int iParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, uParam1);
}

Vector3 func_930(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

int func_931(int iParam0)
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

void func_932()
{
	func_112(&(Global_1245803->f_2003));
}

void func_933(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = Global_1275573->f_21;
	Var1 = { func_554(iParam0, 2087069356) };
	if (!STATS::STAT_ID_SET_INT(&Var1, iVar0, true))
	{
	}
}

int func_934(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<11> Var2;

	Var2.f_10 = 1106247680;
	iVar1 = 1;
	while (iVar1 <= 23)
	{
		*iParam1 = iVar1;
		func_32(&Var2, *iParam1, -1, -1, 255);
		iVar0 = (iVar0 + Var2);
		if (iVar0 >= iParam0)
		{
			iVar0 = (iVar0 - Var2);
			*iParam2 = 0;
			while (*iParam2 <= (Var2 - 1))
			{
				if (iVar0 == iParam0)
				{
					return 1;
				}
				iVar0++;
				*iParam2++;
			}
		}
		iVar1++;
	}
	return 0;
}

struct<2> func_935(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

int func_936(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_858(Param0, &vVar0);
	if (func_964(Param0, vVar0.x, uParam2))
	{
		return 1;
	}
	return 0;
}

bool func_937(int iParam0)
{
	return func_114(8, iParam0);
}

void func_938(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (iParam4)
	{
		case 0:
			iVar2 = 1;
			iVar0 = 1;
			iVar3 = 1;
			iVar1 = 1;
			break;
		case 1:
			iVar2 = 2;
			iVar0 = 2;
			iVar3 = 2;
			iVar1 = 2;
			break;
		case 2:
			iVar2 = 3;
			iVar0 = 3;
			iVar3 = 3;
			iVar1 = 3;
			break;
		case 3:
			iVar2 = 4;
			iVar0 = 4;
			iVar3 = 3;
			iVar1 = 3;
			break;
	}
	if (bParam8)
	{
		iVar3 = 0;
	}
	if (bParam9)
	{
		iVar1 = 0;
	}
	uParam0->f_3 = iParam1;
	uParam0->f_7 = iParam3;
	uParam0->f_5 = iParam10;
	uParam0->f_6 = iParam11;
	uParam0->f_8 = iVar0;
	uParam0->f_13 = iParam5;
	uParam0->f_14 = iParam6;
	uParam0->f_15 = iParam6;
	uParam0->f_23 = iVar3;
	uParam0->f_24 = iVar3;
	uParam0->f_16 = iVar1;
	uParam0->f_9 = iParam7;
	uParam0->f_10 = iParam7;
	uParam0->f_11 = iParam7;
	switch (iParam2)
	{
		case 0:
			uParam0->f_4 = 21030;
			uParam0->f_17 = iVar2;
			uParam0->f_18 = iVar2;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			break;
		case 1:
			uParam0->f_4 = 21030;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			uParam0->f_17 = 0;
			uParam0->f_18 = 0;
			break;
	}
}

char* func_939(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RightArmOnly_filter";
		case 2:
			return "RightArmOnly_filter";
		case 3:
			return "RightArmOnly_filter";
		case 4:
			return "RightArmOnly_filter";
		case 5:
			return "LeftArmOnly_filter";
		case 6:
			return "LeftArmOnly_filter";
		default:
			break;
	}
	return "";
}

int func_940(int iParam0, float fParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_541(iParam0, fParam1, iVar0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_941(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		bVar0 = (_NAMESPACE26::_0xD6F6ACF4392187FB(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) && _NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
		bParam7 = bVar0;
	}
	POSSE::_0xC08AFF658B2E51DA(&iVar1);
	if (iVar1 != 0)
	{
		func_965(iParam2, -372840566);
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
	func_966(uParam1, iParam0, Var3);
	return 1;
}

void func_942(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_943(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_967(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_968())
	{
		return func_967(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_967(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_944(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_945(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!&Global_1275573->f_22[iVar0])
	{
		func_969(iParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_970(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

void func_946(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam3[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam3[iVar0 /*4*/]))
			{
				if (!AUDIO::IS_PED_IN_CURRENT_CONVERSATION(&uParam0, uParam3[iVar0 /*4*/], 0))
				{
					AUDIO::ADD_PED_TO_CONVERSATION(&uParam0, uParam3[iVar0 /*4*/], &(((*uParam3)[iVar0 /*4*/])->f_1));
				}
			}
		}
		iVar0++;
	}
}

int func_947()
{
	if (func_971())
	{
		return 0;
	}
	if (Global_1572887->f_13 == -1)
	{
		if (Global_1939178->f_38 == joaat("weapon_lasso"))
		{
			return PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK"));
		}
		return PED::GET_PED_RESET_FLAG(Global_34, 311);
	}
	else
	{
		return &(Global_1954472->f_1616[3]);
	}
	return 0;
}

void func_948(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = PLAYER::PLAYER_ID();
	if (!PLAYER::_0x72AD59F7B7FB6E24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (PLAYER::_0x1A6E84F13C952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0[iVar1]))
			{
			}
			else if (!PED::IS_PED_HUMAN(uParam0[iVar1]) && !(DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

int func_949(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1939178->f_26))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1939178->f_26))
		{
			*iParam1 = Global_1939178->f_26;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1939178->f_27))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1939178->f_27))
		{
			if (PED::_IS_PED_HOGTIED(Global_1939178->f_27) || ENTITY::IS_ENTITY_DEAD(Global_1939178->f_27))
			{
				*iParam2 = Global_1939178->f_27;
				iVar0 = 1;
			}
		}
	}
	if (Global_1939178->f_24 && !PED::IS_PED_INJURED(Global_34))
	{
		iVar1 = PED::_GET_LASSOED_ENTITY(Global_34);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(iVar1))
			{
				*iParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_950(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_INTERACT_LOCKON_DETACH_HORSE")))
		{
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iVar1)))
						{
							iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (uParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1939178->f_6)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_34);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_GET_LASSOED_ENTITY(Global_34);
		}
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_951(var uParam0)
{
	int iVar0;

	if (Global_1939178->f_32 == 0)
	{
		func_305(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1939178->f_33)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1939178->f_28[iVar0])))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(&(Global_1939178->f_28[iVar0])))
				{
					func_206(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

var func_952(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_953(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_638(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_954(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, joaat("weapon_unarmed"), iParam1))
		{
			return 1;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1939178->f_38))
			{
				if (WEAPON::_0x959383DCD42040DA(Global_1939178->f_38) || Global_1939178->f_38 == joaat("weapon_melee_knife"))
				{
					if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, Global_1939178->f_38, iParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_955(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return 0;
	}
	iVar0 = TASK::_0x2D0571BB55879DA2(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (((((((((iVar0 == -1689755873 || iVar0 == 1690225020) || iVar0 == 1774730608) || iVar0 == 309374745) || iVar0 == -363194080) || iVar0 == 640190094) || iVar0 == -1085971095) || iVar0 == 49488831) || iVar0 == 343112864) || iVar0 == -2016812721)
	{
		return 1;
	}
	if (iVar0 == -2016812721 || iVar0 == 1097070152)
	{
		iVar0 = PED::_0xC22AA08A8ADB87D4(iParam0);
		if (iVar0 == 970972795)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

float func_956(var uParam0)
{
	return uParam0->f_27;
}

int func_957(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

float func_958(vector3 vParam0, vector3 vParam3)
{
	float fVar0;

	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = BUILTIN::VMAG(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

bool func_959(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

float func_960(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_723(uParam0);
	}
	if (GRAPHICS::_0x25CA89B2A39DCC69() > 0.833f)
	{
		return func_972(uParam0);
	}
	return func_723(uParam0);
}

float func_961(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_962()
{
	int iVar0;
	int iVar1;

	iVar0 = func_974(func_973());
	iVar1 = func_975(func_973());
	if (iVar0 >= 21)
	{
		return 1;
	}
	else if (iVar0 < 5)
	{
		return 1;
	}
	else if (iVar0 >= 20)
	{
		if (iVar1 >= 20)
		{
			return 1;
		}
	}
	else if (iVar0 < 6)
	{
		if (iVar1 <= 20)
		{
			return 1;
		}
	}
	return 0;
}

void func_963(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	((*Global_1949759)[iParam0 /*23*/])->f_4 = iParam1;
	(*Global_1949759)[iParam0 /*23*/] = iParam4;
	((*Global_1949759)[iParam0 /*23*/])->f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	((*Global_1949759)[iParam0 /*23*/])->f_2 = uParam5;
	((*Global_1949759)[iParam0 /*23*/])->f_6 = { vParam6 };
	((*Global_1949759)[iParam0 /*23*/])->f_9 = fParam9;
	((*Global_1949759)[iParam0 /*23*/])->f_10 = iParam10;
	((*Global_1949759)[iParam0 /*23*/])->f_11 = iParam11;
	((*Global_1949759)[iParam0 /*23*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1949759)[iParam0 /*23*/])->f_5 = iParam12;
	((*Global_1949759)[iParam0 /*23*/])->f_1 = 2;
	((*Global_1949759)[iParam0 /*23*/])->f_17 = -1;
	((*Global_1949759)[iParam0 /*23*/])->f_18 = iParam16;
	((*Global_1949759)[iParam0 /*23*/])->f_19 = iParam15;
	((*Global_1949759)[iParam0 /*23*/])->f_20 = bParam25;
	((*Global_1949759)[iParam0 /*23*/])->f_22 = 0f;
	if (bParam25)
	{
		((*Global_1949759)[iParam0 /*23*/])->f_21 = MISC::GET_GAME_TIMER();
	}
	else
	{
		((*Global_1949759)[iParam0 /*23*/])->f_21 = MISC::_GET_SYSTEM_TIME();
	}
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, uParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 7:
			HUD::_0xA3F2149AA24F3D8E(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 14:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 16:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 15:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	((*Global_1949759)[iParam0 /*23*/])->f_3 = iVar0;
	func_815(iParam0, 1);
	func_816(iParam0, 1);
	func_817(iParam0, 128);
}

int func_964(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_976(iParam0))
	{
		return 0;
	}
	if (func_977(iParam0, uParam1, &uVar0))
	{
		func_978(iParam0, &uVar0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_965(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (RDR_RAGE_STORE_N_SR >= 11)
	{
		return;
	}
}

void func_966(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_979(uParam0))
	{
		return;
	}
	if (Global_1272170->f_1991 < 20)
	{
		Global_1272170->f_1991++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1272170->f_1991.f_1[iVar0 /*24*/]) = { *(Global_1272170->f_1991.f_1[iVar0 + 1 /*24*/]) };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 11;
	Var1.f_7.f_16 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	*(Global_1272170->f_1991.f_1[(Global_1272170->f_1991 - 1) /*24*/]) = { Var1 };
}

bool func_967(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_968()
{
	return Global_1099294->f_339;
}

void func_969(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 0)
	{
		return;
	}
	func_970(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_970(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

int func_971()
{
	switch (Global_1939178->f_38)
	{
		case joaat("weapon_melee_lantern"):
		case joaat("weapon_kit_binoculars"):
		case joaat("weapon_melee_lantern_electric"):
		case joaat("weapon_melee_davy_lantern"):
		case 1652431022: /* GXTEntry: "Refined Binoculars" */
			return 1;
		default:
			break;
	}
	return 0;
}

var func_972(var uParam0)
{
	return uParam0->f_26;
}

int func_973()
{
	return &Global_1902689;
}

int func_974(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_975(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_976(int iParam0)
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
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_977(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_980(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_978(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_981(iParam0, uParam2->f_1);
	uParam1->f_2 = -2140901307;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_2 = iVar0;
	uParam1->f_2 = -2140901307;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_9), uParam1);
	uParam1->f_2 = 1292053410;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_17), uParam1);
	if (*uParam2 == 3)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_982(iVar0);
		}
	}
	else if (*uParam2 == 4)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = iVar0;
		}
	}
	else if (*uParam2 == 5)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_983(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_984(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_985(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_986(iVar0);
	uParam1->f_2 = 1060782978;
	DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_8), uParam1);
	uParam1->f_2 = 162343104;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	uParam1->f_2 = -733480474;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_25), uParam1);
	uParam1->f_2 = 492825771;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_26), uParam1);
	uParam1->f_2 = -839279581;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_27), uParam1);
	uParam1->f_2 = -640941103;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_28), uParam1);
	iVar0 = 0;
	uParam1->f_2 = -2025968302;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_29 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1829781569;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_30 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1999176766;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_31 = iVar0;
}

int func_979(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_980(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("challenge");
			break;
		case -3:
			iVar0 = 1300413597;
			break;
		case 1:
			iVar0 = -1841318328;
			break;
		case -2:
			iVar0 = joaat("gold");
			break;
		case 2:
			iVar0 = -1599460565;
			break;
		case 3:
			iVar0 = 1610555441;
			break;
		case 4:
			iVar0 = 2080488347;
			break;
		case 5:
			iVar0 = 1107336882;
			break;
		case 6:
			iVar0 = -1307562954;
			break;
		case 7:
			iVar0 = 1198585370;
			break;
		case 8:
			iVar0 = 1753821005;
			break;
		case 9:
			iVar0 = joaat("property");
			break;
		case 10:
			iVar0 = 1894568478;
			break;
		case 11:
			iVar0 = joaat("title");
			break;
		case 12:
			iVar0 = joaat("shop");
			break;
		case 13:
			iVar0 = 1252941330;
			break;
		case 14:
			iVar0 = -1930354636;
			break;
		case 15:
			iVar0 = 1332629624;
			break;
		case 16:
			iVar0 = 1746212499;
			break;
		case 17:
			iVar0 = 1859328971;
			break;
		case 18:
			iVar0 = 1151893103;
			break;
		case 19:
			iVar0 = -312924468;
			break;
	}
	return iVar0;
}

int func_981(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_987(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_982(int iParam0)
{
	switch (iParam0)
	{
		case 1336837986:
			return 0;
		case 2124631622:
			return 1;
		case -66250361:
			return 2;
		case 1443764480:
			return 3;
		case -668110249:
			return 4;
		case -1381389849:
			return 5;
		case 536699577:
			return 6;
		case 541147288:
			return 7;
		case 377122918:
			return 8;
		case 1158195437:
			return 9;
		case -1261475678:
			return 10;
		case -621956193:
			return 11;
		case 1081776803:
			return 12;
		case -218697175:
			return 13;
		case -867762478:
			return 14;
		case 602097925:
			return 15;
		case 1724417419:
			return 16;
		case -728200180:
			return 17;
		case 1404415665:
			return 18;
		case 339077182:
			return 20;
		case 650120418:
			return 21;
		case 1695693301:
			return 28;
		case -1809176396:
			return 19;
		case 349772825:
			return 22;
		case 1657045547:
			return 23;
		case -590482787:
			return 24;
		case -1711308722:
			return 25;
		case -409129282:
			return 26;
		case -1790985606:
			return 27;
		default:
			break;
	}
	return -1;
}

int func_983(int iParam0)
{
	switch (iParam0)
	{
		case -747096482:
			return 0;
		case 390152599:
			return 1;
		case 348001928:
			return 2;
		case 687137831:
			return 3;
		case 1221273613:
			return 4;
		case -669486032:
			return 5;
		case -1044132584:
			return 6;
		default:
			break;
	}
	return -1;
}

int func_984(int iParam0)
{
	switch (iParam0)
	{
		case 1697883736:
			return 0;
		case 1927192818:
			return 1;
		case -1363591469:
			return 2;
		case 1635448909:
			return 3;
		case -604494871:
			return 4;
		case -993281498:
			return 5;
		case -1871525158:
			return 6;
		case -596286663:
			return 12;
		case 923956646:
			return 13;
		case 1459450644:
			return 14;
		case -2071675432:
			return 15;
		case -552339597:
			return 7;
		case 2144670272:
			return 9;
		case 996459079:
			return 8;
		case 1996177174:
			return 10;
		case -1702168032:
			return 11;
		default:
			break;
	}
	return -1;
}

int func_985(int iParam0)
{
	switch (iParam0)
	{
		case 2049341823:
			return 0;
		case 1655635003:
			return 1;
		case -435635781:
			return 2;
		case 2006131499:
			return 3;
		case -1641798436:
			return 4;
		case 352400957:
			return 5;
		case 1211286129:
			return 6;
		case 787592898:
			return 7;
		case -568832219:
			return 8;
		case -1103026985:
			return 9;
		default:
			break;
	}
	return 0;
}

int func_986(int iParam0)
{
	switch (iParam0)
	{
		case joaat("null"):
			return -1;
		case joaat("normal"):
			return 0;
		case -640677282:
			return 1;
		case -1950303839:
			return 2;
		case 1322114923:
			return 3;
		case -525004462:
			return 4;
		case 1419735597:
			return 5;
		case 1004744465:
			return 6;
		case joaat("bountyhunter"):
			return 7;
		case 1777227915:
			return 8;
		case 408825843:
			return 9;
		case joaat("hunter"):
			return 10;
		case 64621749:
			return 11;
		case -1346830927:
			return 12;
		case -218234180:
			return 13;
		case 751663875:
			return 14;
		case 1766283257:
			return 15;
		case -269943670:
			return 16;
		case 522313648:
			return 17;
		default:
			break;
	}
	return -1;
}

int func_987(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_988(iParam0, uParam1, &uVar0))
	{
		func_989(&uVar0, iParam0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

bool func_988(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_980(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_989(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	*uParam2 = iParam1;
	uParam0->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam0);
	uParam0->f_2 = -2140901307;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, uParam0))
	{
		uParam2->f_2 = uVar0;
	}
	uParam0->f_2 = -2140901307;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_11), uParam0);
	uParam0->f_2 = 1292053410;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_19), uParam0);
	uParam0->f_2 = 1234058424;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_3), uParam0);
}

