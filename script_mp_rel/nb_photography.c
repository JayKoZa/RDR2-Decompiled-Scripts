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
	struct<59> Local_13 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 3, 0, 0, 0, 1, 5, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3 } ;
	var uLocal_72 = 0;
	var uLocal_73 = 255;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 255;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 255;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	struct<27> Local_82[32];
	struct<579> Local_947 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 0, 6, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 255, 255, 255, 0, 0, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 1, 0, 0, 1065353216, 0, 1065353216, 1077936128, 1108082688, 1113325568, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3 } ;
	var uLocal_1526 = -1;
	var uLocal_1527 = 0;
	var uLocal_1528 = 1097859072;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 4;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 1;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = -1;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 1;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = -1;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 1;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = -1;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 1;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = -1;
	var uLocal_1565 = -1;
	var uLocal_1566 = 0;
	var uLocal_1567 = 1097859072;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 4;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 1;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = -1;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 1;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = -1;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 1;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = -1;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 1;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = -1;
	var uLocal_1604 = -1;
	var uLocal_1605 = 0;
	var uLocal_1606 = 1097859072;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 4;
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
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 1;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = -1;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 1;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = -1;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = -1;
	float fLocal_1646 = 0f;
	float fLocal_1647 = 0f;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	char* sLocal_1652 = NULL;
	char* sLocal_1653 = NULL;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_1646 = 1f;
	fLocal_1647 = 1f;
	sLocal_1652 = "FACE_HUMAN@GEN_MALE@PORTRAIT";
	sLocal_1653 = "facials@gen_male@portrait";
	iVar0 = iScriptParam_0;
	func_1(iVar0);
	func_2(&iScriptParam_0);
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
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_13, 69, 42);
	func_10(NETWORK::_0xBA24095EA96DFE17(&Local_13), 69, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_82, 865, 43);
	func_11(NETWORK::_0x690806BC83BC8CA2(&(Local_82[0 /*27*/])), 865, "m_clientData");
	func_12(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_2(int iParam0)
{
	if (Local_13 == 6)
	{
		return;
	}
	func_13(iParam0);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_14();
		func_15();
	}
}

bool func_3()
{
	if (func_16(0, 0))
	{
		return true;
	}
	else if (func_17(Local_947.f_9, 0, 1))
	{
		return true;
	}
	else if (!func_18())
	{
		return true;
	}
	else if (!func_19(Local_947.f_12))
	{
		return true;
	}
	else if (!func_21(func_20(Local_947.f_12), Local_947.f_9))
	{
		return true;
	}
	else if (Local_947.f_8 == 6)
	{
		return true;
	}
	return false;
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

void func_13(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<29> Var3;

	iVar0 = 255;
	MISC::_COPY_MEMORY(&Local_947, iParam0, 5);
	iVar2 = func_31(&bVar1, Local_947.f_1, Local_947.f_2);
	if (bVar1 || iVar2 == -1)
	{
		return;
	}
	Local_947.f_12 = iVar2;
	iVar0 = Global_1198046.f_231.f_1066[iVar2 /*17*/].f_5;
	Var3.f_10 = 1106247680;
	Var3.f_15 = 4;
	Var3.f_20 = 4;
	Var3.f_26 = -1;
	Var3.f_28 = 2;
	func_32(&Var3, Local_947.f_1, Local_947.f_2, Local_947.f_3, iVar0);
	Local_947.f_9 = { func_33(Var3.f_5, 8) };
	Local_947.f_14 = Var3.f_5;
	Local_947.f_15 = { Var3.f_11 };
	Local_947.f_18 = Var3.f_7;
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
	func_39();
}

bool func_16(bool bParam0, bool bParam1)
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

bool func_17(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377.f_124517.f_135 & 8 != 0)
	{
		Global_1071686.f_28351 = 1;
		return true;
	}
	if (func_40(Global_1051213) && !func_21(Global_1051213, Param0))
	{
		Global_1071686.f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_41(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_42(iParam3, 255))
	{
		Global_1071686.f_28351 = 4;
		return true;
	}
	if (Global_263042[Global_1296859 /*70*/] > 2)
	{
		Global_1071686.f_28351 = 5;
		return true;
	}
	if (Global_262155 >= 1)
	{
		Global_1071686.f_28351 = 6;
		return true;
	}
	if (func_43())
	{
		Global_1071686.f_28351 = 7;
		return true;
	}
	if (Global_1572887.f_7 & 1 != 0)
	{
		if (!func_40(Global_1051213))
		{
			Global_1071686.f_28351 = 8;
			return true;
		}
	}
	if (Global_265377.f_124675 != 0 && SCRIPTS::_DOES_THREAD_EXIST(Global_265377.f_124675))
	{
		Global_1071686.f_28351 = 9;
		return true;
	}
	Global_1071686.f_28351 = 0;
	return false;
}

bool func_18()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

bool func_19(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 71);
}

struct<2> func_20(int iParam0)
{
	return Global_1210161.f_1[iParam0 /*10*/].f_4;
}

bool func_21(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

void func_22()
{
	if (Local_13 <= 5)
	{
		func_44();
	}
	switch (Local_13)
	{
		case 0:
			func_45();
			break;
		case 1:
			func_46();
			break;
		case 2:
			func_47();
			break;
		case 3:
			func_48();
			break;
		case 4:
			func_49();
			break;
		case 5:
			func_50();
			break;
	}
}

void func_23()
{
	func_51();
	func_52();
	if (Local_947.f_8 <= 5)
	{
		func_53();
	}
	switch (Local_947.f_8)
	{
		case 0:
			func_54();
			break;
		case 1:
			func_55();
			break;
		case 2:
			func_56();
			break;
		case 3:
			func_57();
			break;
		case 4:
			func_58();
			break;
		case 5:
			func_59();
			break;
	}
}

void func_24()
{
	func_60();
}

void func_25()
{
	if (func_61())
	{
		if (VOLUME::_0xF6A8A652A6B186CD(Local_13.f_3.f_1))
		{
			VOLUME::_0xFDFECC6EE4491E11(Local_13.f_3.f_1);
		}
	}
	func_62();
}

void func_26()
{
	func_63();
	func_64();
	func_65();
	func_66();
}

void func_27()
{
	if (Local_947.f_12 != -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			func_67(Local_947.f_12, 4);
		}
	}
	func_68();
	if (func_69(64))
	{
		func_70(Local_13.f_6);
	}
	func_71();
}

int func_28()
{
	return Global_1572887.f_13;
}

bool func_29()
{
	return Global_1051252.f_8;
}

void func_30()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_13.f_49.f_1[iVar0] = 255;
		iVar0++;
	}
}

int func_31(bool bParam0, int iParam1, int iParam2)
{
	struct<10> Var0;
	struct<15> Var10;
	int iVar25;
	struct<29> Var26;

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
	Var26.f_15 = 4;
	Var26.f_20 = 4;
	Var26.f_26 = -1;
	Var26.f_28 = 2;
	func_32(&Var26, iParam1, iParam2, -1, 255);
	func_72(&Var0, Var26.f_5);
	iVar25 = func_73(&Var0);
	if (func_19(iVar25))
	{
		Var10 = { func_74(iVar25) };
		if (Var10 == 2)
		{
			return iVar25;
		}
		else
		{
			*bParam0 = 1;
			return -1;
		}
	}
	return -1;
}

void func_32(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<29> Var0;
	int iVar31;

	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	MISC::_COPY_MEMORY(uParam0, &Var0, 31);
	iVar31 = 0;
	while (iVar31 < 2)
	{
		uParam0->f_28[iVar31] = 0;
		iVar31++;
	}
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
			func_75(uParam0, iParam2);
			break;
		case 2:
			func_76(uParam0, iParam2);
			break;
		case 3:
			func_77(uParam0, iParam2);
			break;
		case 4:
			func_78(uParam0, iParam2);
			break;
		case 12:
			func_79(uParam0, iParam2);
			break;
		case 6:
			func_80(uParam0, iParam2, -1);
			break;
		case 7:
			func_81(uParam0, iParam2, iParam3);
			break;
		case 5:
			func_82(uParam0, iParam2);
			break;
		case 11:
			func_83(uParam0, iParam2);
			break;
		case 9:
			func_84(uParam0, iParam2, iParam3);
			break;
		case 10:
			func_85(uParam0, iParam2);
			break;
		case 8:
			func_86(uParam0, iParam2);
			break;
		case 13:
			func_87(uParam0, iParam2, iParam4);
			break;
		case 14:
			func_88(uParam0, iParam2, iParam3);
			break;
		case 15:
			func_89(uParam0, iParam2);
			break;
		case 16:
			func_90(uParam0, iParam2, iParam3);
			break;
		case 31:
			func_91(uParam0, iParam2);
			break;
		case 21:
			func_92(uParam0, iParam2);
			break;
		case 28:
			func_93(uParam0, iParam2);
			break;
		case 25:
			func_94(uParam0, iParam2);
			break;
		case 24:
			func_95(uParam0, iParam2);
			break;
		case 22:
			func_96(uParam0, iParam2);
			break;
		case 23:
			func_97(uParam0, iParam2);
			break;
		case 29:
			func_98(uParam0, iParam2);
			break;
		case 26:
			func_99(uParam0, iParam2);
			break;
		case 30:
			func_100(uParam0, iParam2);
			break;
		case 27:
			func_101(uParam0, iParam2);
			break;
		case 32:
			func_102(uParam0, iParam2, iParam3);
			break;
		case 33:
			func_103(uParam0, iParam2, iParam3);
			break;
		case 34:
			func_104(uParam0, iParam2);
			break;
		case 17:
			func_105(uParam0, iParam2);
			break;
		case 18:
			func_106(uParam0, iParam2);
			break;
		case 19:
			func_107(uParam0, iParam2);
			break;
		case 20:
			func_108(uParam0, iParam2);
			break;
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			func_109(uParam0, iParam1, iParam2);
			break;
		default:
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
			Var0.f_1 = func_111(iParam0, &(Global_1071686.f_636), func_110(iParam1));
			break;
		case 3:
			Var0.f_1 = func_111(iParam0, &(Global_1071686.f_636.f_602), func_110(iParam1));
			break;
		case 4:
			Var0.f_1 = func_111(iParam0, &(Global_1071686.f_636.f_2104), func_110(iParam1));
			break;
		case 5:
			Var0.f_1 = func_111(iParam0, &(Global_1071686.f_636.f_12606), func_110(iParam1));
			break;
		case 6:
			Var0.f_1 = func_111(iParam0, &(Global_1071686.f_636.f_12908), func_110(iParam1));
			break;
		case 7:
			Var0.f_1 = func_111(iParam0, &(Global_1071686.f_636.f_15910), func_110(iParam1));
			break;
		case 8:
			Var0.f_1 = func_111(iParam0, &(Global_1071686.f_636.f_16512), func_110(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_112();
	}
	return Var0;
}

void func_34()
{
	func_113();
	func_114();
	func_115();
	func_116();
	func_117();
}

void func_35()
{
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(3);
	func_118(&(Local_947.f_19.f_12));
	func_119();
	func_120();
	if (!PED::ADD_RELATIONSHIP_GROUP("REL_OREPHT", &(Local_947.f_19.f_45)))
	{
	}
	else
	{
		func_121(134217728);
	}
}

void func_36()
{
}

void func_37()
{
}

void func_38()
{
}

void func_39()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_122(&(Local_13.f_58.f_10), iVar0, 3);
		iVar0++;
	}
}

bool func_40(struct<2> Param0)
{
	if (!func_123(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_110(Param0))
	{
		return false;
	}
	return true;
}

bool func_41(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return (Global_1197740.f_1 && iParam0) != 0;
}

bool func_42(int iParam0, int iParam1)
{
	if (!Global_1071686.f_3)
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
	return (Global_1197355[iParam1 /*12*/] && iParam0) != 0;
}

bool func_43()
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
	if (!func_40(Global_1051213) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_44()
{
}

void func_45()
{
	int iVar0;
	struct<29> Var1;

	iVar0 = Global_1198046.f_231.f_1066[Local_947.f_12 /*17*/].f_5;
	Var1.f_10 = 1106247680;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	func_32(&Var1, Local_947.f_1, Local_947.f_2, Local_947.f_3, iVar0);
	if (!func_124(&Var1, 1))
	{
		func_125(1);
		return;
	}
	Local_13.f_6 = func_126(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(iVar0)));
	func_127(256);
	if (func_128(Local_13.f_6))
	{
		func_129(5);
		func_125(6);
	}
	else
	{
		func_125(1);
	}
}

void func_46()
{
	struct<31> Var0;
	bool bVar31;

	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_32(&Var0, Local_947.f_1, Local_947.f_2, -1, 255);
	if (func_124(&Var0, 1))
	{
		func_125(2);
		return;
	}
	if (func_130(Var0, &bVar31))
	{
		MISC::CLEAR_AREA(Local_947.f_15, Var0.f_10, 2442122);
		func_125(2);
	}
	else if (bVar31)
	{
		func_129(3);
		func_125(6);
	}
	if (!func_131(Local_13.f_3.f_2))
	{
		func_132(&(Local_13.f_3.f_2));
	}
	else if (func_133(Local_13.f_3.f_2) > 45000)
	{
		func_129(4);
		func_125(6);
	}
}

void func_47()
{
	if (func_134(1, 255))
	{
		if (!func_135(1))
		{
			if (func_136())
			{
				func_127(1);
			}
		}
		else
		{
			func_137();
			func_125(3);
		}
	}
}

void func_48()
{
	bool bVar0;

	if (func_134(2, 255))
	{
		if (!func_135(2))
		{
			bVar0 = true;
			if (!func_138())
			{
				bVar0 = false;
			}
			if (!func_139())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_127(2);
			}
		}
		else
		{
			func_140();
			func_125(4);
		}
	}
}

void func_49()
{
	func_141();
	func_142();
	func_143();
	if (func_144() || Local_13.f_2 != 0)
	{
		func_145();
		func_125(5);
	}
}

void func_50()
{
	if (func_134(4, 255))
	{
		if (func_146())
		{
			func_127(4);
			func_125(6);
		}
	}
}

void func_51()
{
	if (!func_135(256))
	{
		return;
	}
	if (func_135(512))
	{
		if (func_69(64) && func_126(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_70(Local_13.f_6);
			func_147(64);
		}
	}
	else if (!func_69(64))
	{
		if (func_126(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_148(Local_13.f_6, 1, 1);
			func_149(64);
		}
	}
	else if (func_126(PLAYER::PLAYER_ID()) != Local_13.f_6)
	{
		func_70(Local_13.f_6);
		func_147(64);
	}
}

void func_52()
{
	if (!Global_13)
	{
		if (func_134(8192, 255))
		{
			func_150(8192);
		}
	}
	else if (!func_134(8192, 255))
	{
		func_151(8192);
	}
}

void func_53()
{
	func_152();
}

void func_54()
{
	if (Local_13 == 6)
	{
		func_153(6);
	}
	else if (Local_13 > 0)
	{
		func_51();
		func_153(1);
	}
}

void func_55()
{
	if (Local_13 == 6)
	{
		func_153(6);
	}
	else if (Local_13 > 1)
	{
		func_153(2);
	}
}

void func_56()
{
	bool bVar0;
	int iVar1;

	if (!func_134(1, 255))
	{
		bVar0 = true;
		if (!func_154())
		{
			bVar0 = false;
		}
		if (!func_155())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_151(1);
		}
		else
		{
			iVar1 = Global_1901947.f_236.f_68;
			if (!func_131(Local_947.f_11))
			{
				func_132(&(Local_947.f_11));
			}
			if (func_133(Local_947.f_11) >= iVar1)
			{
				func_153(6);
			}
		}
	}
	else if (Local_13 > 2)
	{
		func_156(&(Local_947.f_11));
		func_157();
		func_153(3);
	}
}

void func_57()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_134(2, 255))
	{
		iVar0 = func_158();
		iVar1 = func_159();
		if (iVar0 && iVar1)
		{
			func_151(2);
		}
		else
		{
			iVar2 = Global_1901947.f_236.f_68;
			if (!func_131(Local_947.f_11))
			{
				func_132(&(Local_947.f_11));
			}
			if (func_160(Local_947.f_11) >= iVar2)
			{
				func_153(6);
			}
		}
	}
	else if (Local_13 > 3)
	{
		func_156(&(Local_947.f_11));
		func_161();
		func_162();
		func_163();
		func_164();
		func_153(4);
	}
}

void func_58()
{
	if (Local_13 >= 5)
	{
		func_165();
		func_153(5);
		return;
	}
	func_166();
	func_167();
	func_168();
	func_169();
	func_170();
	func_171();
}

void func_59()
{
	if (!func_134(4, 255))
	{
		if (func_172())
		{
			func_173();
			func_67(Local_947.f_12, 4);
			func_151(4);
		}
	}
	else if (Local_13 > 5)
	{
		func_153(6);
	}
}

void func_60()
{
}

bool func_61()
{
	return (func_135(4) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1));
}

void func_62()
{
}

void func_63()
{
	int iVar0;
	int iVar1;

	if (func_61())
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_38[iVar1]))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_13.f_38[iVar1]);
				func_174(iVar1);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					if (!func_175(iVar1, 16))
					{
						PED::_0x39A2FC5AF55A52B1(iVar0, -1);
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
			}
			iVar1++;
		}
	}
}

void func_64()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_61())
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar2 = 0;
			while (iVar2 < 5)
			{
				if (func_176(iVar1, iVar2))
				{
				}
				else if (func_177(iVar1, iVar2))
				{
					iVar0 = Local_947.f_329[iVar1 /*76*/].f_5[iVar2 /*14*/];
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (func_178(iVar1, iVar2))
						{
							OBJECT::DELETE_OBJECT(&iVar0);
						}
						else
						{
							ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
						}
					}
				}
				else if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar1 /*6*/][iVar2]))
				{
					iVar0 = NETWORK::NET_TO_OBJ(Local_13.f_42[iVar1 /*6*/][iVar2]);
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						if (func_178(iVar1, iVar2))
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

void func_65()
{
	func_179(&(Local_947.f_537.f_13));
	if (VOLUME::_DOES_VOLUME_EXIST(Local_947.f_537.f_11))
	{
		VOLUME::_DELETE_VOLUME(Local_947.f_537.f_11);
	}
}

void func_66()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_181(func_180(iVar0), 1);
		iVar0++;
	}
}

void func_67(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_182(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT(&(Global_1207784[iVar0 /*72*/][iParam0]), iParam1);
}

void func_68()
{
	int iVar0;
	bool bVar1;

	if (!func_69(1))
	{
		return;
	}
	if (func_69(4))
	{
		return;
	}
	if (!func_69(2))
	{
		iVar0 = -1;
	}
	else if (!func_69(8))
	{
		iVar0 = 2;
	}
	else if (func_69(16))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else if (func_69(32))
	{
		iVar0 = 4;
		bVar1 = true;
	}
	else
	{
		iVar0 = 1;
		bVar1 = true;
	}
	func_183(Local_947.f_9, iVar0, 0, 255, 0);
	func_149(4);
	if (bVar1)
	{
		func_184(Local_947.f_1, Local_947.f_2);
		if (!func_69(256))
		{
			if (iVar0 == 1)
			{
				func_185(Local_947.f_18, 1);
			}
			else
			{
				func_185(Local_947.f_18, 0);
			}
			func_149(256);
		}
	}
	else
	{
		func_185(Local_947.f_18, 2);
	}
}

bool func_69(int iParam0)
{
	return func_186(Local_947.f_7, iParam0);
}

void func_70(int iParam0)
{
	int iVar0;

	if (!func_187(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	Global_1134390[iVar0 /*83*/].f_70 = iParam0;
	Global_1134390[iVar0 /*83*/].f_70.f_2 = 0;
}

void func_71()
{
	int iVar0;

	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (((func_189() && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::GET_PED_SOURCE_OF_DEATH(iVar0)) != PLAYER::PLAYER_PED_ID()) && !func_190(262144))
		{
			func_191(7, Local_947.f_4);
		}
		if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			if (func_190(262144))
			{
				func_192(0);
			}
		}
	}
	func_193();
	func_194(1);
	func_195();
	func_196();
	func_197();
	if (VOLUME::_DOES_VOLUME_EXIST(Local_947.f_19.f_254))
	{
		VOLUME::_DELETE_VOLUME(Local_947.f_19.f_254);
	}
	TASK::CLEAR_SEQUENCE_TASK(&(Local_947.f_19.f_164));
}

void func_72(var uParam0, int iParam1)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_33(iParam1, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_73(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_198(uParam0))
	{
		return -1;
	}
	iVar0 = func_199(uParam0, uParam0->f_9);
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
			iVar0 = func_199(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

struct<15> func_74(int iParam0)
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
	return Global_1198046.f_231[iParam0 /*15*/];
}

void func_75(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 7;
	func_200(uParam0, iParam1);
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_ROANOKE_RIDGE_1");
			uParam0->f_11 = { 2150.374f, 1728.215f, 125.2313f };
			break;
		case 1:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_ROANOKE_RIDGE_2");
			uParam0->f_11 = { 2179.106f, -25.3714f, 51.3658f };
			break;
		case 2:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_1");
			uParam0->f_11 = { -1055.963f, -794.308f, 59.2567f };
			break;
		case 3:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_2");
			uParam0->f_11 = { -1158.078f, -155.114f, 88.889f };
			break;
		case 4:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_3");
			uParam0->f_11 = { -1370.712f, -515.7384f, 125.267f };
			break;
		case 5:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_BIG_VALLEY_4");
			uParam0->f_11 = { -1029.465f, -492.4087f, 101.0615f };
			break;
		case 6:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_HEARTLANDS_1");
			uParam0->f_11 = { -319.5499f, 203.8464f, 62.1121f };
			break;
		case 7:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_HEARTLANDS_2");
			uParam0->f_11 = { -513.8f, 345.2f, 49.8945f };
			break;
		case 8:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_GREAT_PLAINS_1");
			uParam0->f_11 = { -1234.665f, -1371.778f, 80.796f };
			break;
		case 9:
			uParam0->f_5 = joaat("BEAT_ANIMAL_ATTACK_GRIZZLIES_WEST_1");
			uParam0->f_11 = { -1525.164f, 1722.86f, 239.152f };
			break;
	}
}

void func_76(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 20;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	func_201(uParam0);
	switch (iParam1)
	{
		case 0:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_MACFARLANES");
			uParam0->f_11 = { -1925.343f, -2119.336f, 52.16934f };
			break;
		case 1:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_HEARTLANDS_1");
			uParam0->f_11 = { 136.298f, 35.34337f, 101.2795f };
			break;
		case 2:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_1");
			uParam0->f_11 = { -910.7408f, 860.8453f, 134.6651f };
			break;
		case 3:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_ROANOKE_1");
			uParam0->f_11 = { 2788.779f, 1077.284f, 57.99089f };
			break;
		case 4:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_BAYOU_1");
			uParam0->f_11 = { 1751.914f, -1117.739f, 40.70011f };
			break;
		case 5:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_SCARLETT_1");
			uParam0->f_11 = { 1290.432f, -836.7289f, 77.47561f };
			break;
		case 6:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_CUMBERLAND_1");
			uParam0->f_11 = { 308.1141f, 1187.807f, 180.1746f };
			break;
		case 7:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_STRAWBERRY_1");
			uParam0->f_11 = { -1779.538f, -235.3894f, 181.2029f };
			break;
		case 8:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_PLAINS_1");
			uParam0->f_11 = { -1290.399f, -1179.199f, 72.33453f };
			break;
		case 9:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_TALL_TREES_1");
			uParam0->f_11 = { -2306.89f, -1546.208f, 152.0187f };
			break;
		case 10:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_HENNIGANS_1");
			uParam0->f_11 = { -2724.458f, -2521.524f, 64.76124f };
			break;
		case 11:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_RIO_1");
			uParam0->f_11 = { -4461.883f, -3271.474f, 14.54459f };
			break;
		case 12:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_CHOLLA_1");
			uParam0->f_11 = { -4631.054f, -2738.483f, -12.13559f };
			break;
		case 13:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GAPTOOTH_1");
			uParam0->f_11 = { -5678.259f, -3182.939f, -22.66476f };
			break;
		case 14:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_THIEVES_1");
			uParam0->f_11 = { -1688.868f, -2272.091f, 44.12061f };
			break;
		case 15:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_2");
			uParam0->f_11 = { -1621.917f, 1628.208f, 235.9645f };
			break;
		case 16:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_GRIZZLIES_3");
			uParam0->f_11 = { 420.3633f, 2020.91f, 230.4423f };
			break;
		case 17:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_VALENTINE_1");
			uParam0->f_11 = { -517.4607f, 510.5349f, 102.2307f };
			break;
		case 18:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_EMERALD_1");
			uParam0->f_11 = { 1775.601f, 546.3866f, 106.6334f };
			break;
		case 19:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_BOLGER_1");
			uParam0->f_11 = { 1612.415f, -1715.397f, 52.91364f };
			break;
	}
}

void func_77(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 21;
	uParam0->f_1 = 8;
	uParam0->f_2 = 1;
	func_201(uParam0);
	switch (iParam1)
	{
		case 0:
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			func_203(uParam0, 5);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_1");
			uParam0->f_11 = { 2252.035f, 1342.706f, 84.5573f };
			break;
		case 1:
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			func_203(uParam0, 5);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_2");
			uParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
			break;
		case 2:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			func_203(uParam0, 5);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_ROANOKE_RIDGE_3");
			uParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
			break;
		case 3:
			func_203(uParam0, 0);
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			func_203(uParam0, 4);
			func_203(uParam0, 5);
			func_203(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_1");
			uParam0->f_11 = { 1130.541f, 575.7938f, 86.66257f };
			break;
		case 4:
			func_203(uParam0, 0);
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			func_203(uParam0, 5);
			func_203(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_2");
			uParam0->f_11 = { -754.3893f, -399.1133f, 40.84306f };
			break;
		case 5:
			func_203(uParam0, 0);
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			func_203(uParam0, 5);
			func_203(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_HEARTLANDS_3");
			uParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
			break;
		case 6:
			func_203(uParam0, 0);
			func_203(uParam0, 2);
			func_203(uParam0, 4);
			func_203(uParam0, 5);
			func_203(uParam0, 6);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_1");
			uParam0->f_11 = { -2085.777f, -161.9067f, 208.0633f };
			break;
		case 7:
			func_203(uParam0, 0);
			func_203(uParam0, 2);
			func_203(uParam0, 4);
			func_203(uParam0, 5);
			func_203(uParam0, 6);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_2");
			uParam0->f_11 = { -1678.304f, -517.8369f, 140.867f };
			break;
		case 8:
			func_203(uParam0, 0);
			func_203(uParam0, 2);
			func_203(uParam0, 4);
			func_203(uParam0, 5);
			func_203(uParam0, 6);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BIG_VALLEY_3");
			uParam0->f_11 = { -2624.881f, -339.7662f, 141.8102f };
			break;
		case 9:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_1");
			uParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
			break;
		case 10:
			func_203(uParam0, 0);
			func_203(uParam0, 2);
			func_203(uParam0, 5);
			func_203(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_2");
			uParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
			break;
		case 11:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GREAT_PLAINS_3");
			uParam0->f_11 = { -1069.18f, -1919.616f, 42.3447f };
			break;
		case 12:
			func_203(uParam0, 0);
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			func_203(uParam0, 4);
			func_203(uParam0, 5);
			func_203(uParam0, 6);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_1");
			uParam0->f_11 = { 1673.672f, 1440.046f, 146.0849f };
			break;
		case 13:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_2");
			uParam0->f_11 = { 1562.434f, 1445.237f, 145.2842f };
			break;
		case 14:
			func_203(uParam0, 3);
			func_203(uParam0, 4);
			func_203(uParam0, 5);
			func_203(uParam0, 6);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_GRIZZLIES_3");
			uParam0->f_11 = { 1244.927f, 1177.251f, 148.8856f };
			break;
		case 15:
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			func_203(uParam0, 5);
			func_203(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_1");
			uParam0->f_11 = { 1926.703f, -362.3477f, 42.4864f };
			break;
		case 16:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			func_203(uParam0, 3);
			func_203(uParam0, 5);
			func_203(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_2");
			uParam0->f_11 = { 2192.489f, -318.3198f, 40.7232f };
			break;
		case 17:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			func_203(uParam0, 3);
			func_203(uParam0, 5);
			func_203(uParam0, 7);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_BLUEWATER_MARSH_3");
			uParam0->f_11 = { 2408.447f, -490.4562f, 40.9243f };
			break;
		case 18:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			func_203(uParam0, 5);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_NEW_AUSTIN_1");
			uParam0->f_11 = { -3243.502f, -3187.141f, -9.3137f };
			break;
		case 19:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_NEW_AUSTIN_2");
			uParam0->f_11 = { -1745.01f, -2929.141f, -12.3355f };
			break;
		case 20:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			func_203(uParam0, 5);
			uParam0->f_5 = joaat("BEAT_EGG_PROTECTOR_NEW_AUSTIN_3");
			uParam0->f_11 = { -1735.07f, -2378.355f, 41.289f };
			break;
	}
}

void func_78(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 2;
	func_201(uParam0);
	uParam0->f_15[0] = joaat("22_TO_4");
	switch (iParam1)
	{
		case 0:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_VALENTINE_1");
			uParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
			break;
		case 1:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_RHODES_1");
			uParam0->f_11 = { 1274.578f, -1218.286f, 80.6496f };
			break;
		case 2:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_BLACKWATER_1");
			uParam0->f_11 = { -954.4733f, -1203.246f, 54.5241f };
			break;
		case 3:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_TUMBLEWEED_1");
			uParam0->f_11 = { -5442.537f, -2904.509f, -0.0668f };
			break;
		case 4:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_ODDFELLOWS_REST_1");
			uParam0->f_11 = { -4438.908f, -2693.073f, -12.033f };
			break;
		case 5:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_COOTS_CHAPEL_1");
			uParam0->f_11 = { -3339.601f, -2869.283f, -6.9507f };
			break;
		case 6:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_RINGNECK_CREEK_1");
			uParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
			break;
		case 7:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_PLEASANCE_1");
			uParam0->f_11 = { 1735.865f, -422.7769f, 47.1349f };
			break;
		case 8:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_SHADY_BELLE_1");
			uParam0->f_11 = { 1978.501f, -1902.647f, 41.0487f };
			break;
		case 9:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_SAINT_DENIS_1");
			uParam0->f_11 = { 2757.999f, -1078.666f, 45.8905f };
			break;
		case 10:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_GRAVEROBBER_OLD_TOMS_BLIND_1");
			uParam0->f_11 = { -1762.115f, -237.9833f, 181.9701f };
			break;
	}
}

void func_79(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 15;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_201(uParam0);
	switch (iParam1)
	{
		case 0:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_VAN_HORN_1");
			uParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
			break;
		case 1:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_BOLGER_1");
			uParam0->f_11 = { 1428.817f, -1812.995f, 57.37384f };
			break;
		case 2:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_BAYOU_1");
			uParam0->f_11 = { 2578.893f, -852.3694f, 41.3078f };
			break;
		case 3:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_ANNESBURG_1");
			uParam0->f_11 = { 2798.119f, 1432.187f, 77.71185f };
			break;
		case 4:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_EMERALD_1");
			uParam0->f_11 = { 1243.455f, 526.5765f, 87.43867f };
			break;
		case 5:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_CUMBERLAND_1");
			uParam0->f_11 = { -28.69774f, 1111.23f, 167.9945f };
			break;
		case 6:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_FLATNECK_1");
			uParam0->f_11 = { -546.6091f, -298.2057f, 52.56811f };
			break;
		case 7:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_WALLACE_1");
			uParam0->f_11 = { -1403.688f, 383.7506f, 102.2472f };
			break;
		case 8:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_STRAWBERRY_1");
			uParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
			break;
		case 9:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_QUAKER_1");
			uParam0->f_11 = { -1459.752f, -1915.602f, 50.93545f };
			break;
		case 10:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_MACFARLENE_1");
			uParam0->f_11 = { -2470.018f, -2426.993f, 59.1458f };
			break;
		case 11:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_DON_JULIO_1");
			uParam0->f_11 = { -3092.935f, -3166.527f, -1.36638f };
			break;
		case 12:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_ARMADILLO_1");
			uParam0->f_11 = { -3685.624f, -2769.247f, -15.14988f };
			break;
		case 13:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_PLAINVIEW_1");
			uParam0->f_11 = { -4668.993f, -3706.819f, 12.54352f };
			break;
		case 14:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_HOBO_DOG_TUMBLEWEED_1");
			uParam0->f_11 = { -5194.483f, -2883.913f, 2.32447f };
			break;
	}
}

void func_80(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 16;
	uParam0->f_1 = 2;
	uParam0->f_2 = 8;
	switch (iParam2)
	{
		case 0:
			func_204(uParam0, 0);
			func_204(uParam0, 1);
			func_204(uParam0, 4);
			func_204(uParam0, 5);
			break;
		case 1:
			func_204(uParam0, 2);
			func_204(uParam0, 3);
			func_204(uParam0, 6);
			func_204(uParam0, 7);
			func_205(uParam0, 2);
			break;
		default:
			func_201(uParam0);
			break;
	}
	switch (iParam1)
	{
		case 0:
			func_203(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_CUMBERLAND_FOREST_1");
			uParam0->f_11 = { 498.9236f, 1191.276f, 179.5016f };
			break;
		case 1:
			func_203(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_CUMBERLAND_FOREST_2");
			uParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
			break;
		case 2:
			func_203(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_BLUEWATER_MARSH_1");
			uParam0->f_11 = { 2271.753f, -440.5277f, 40.82026f };
			break;
		case 3:
			func_203(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_BLUEWATER_MARSH_2");
			uParam0->f_11 = { 2000.58f, -499.0656f, 41.0245f };
			break;
		case 4:
			func_203(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_BAYOU_NWA_1");
			uParam0->f_11 = { 2299.81f, -898.4015f, 41.04434f };
			break;
		case 5:
			func_203(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_BAYOU_NWA_2");
			uParam0->f_11 = { 2369.292f, -673.8396f, 41.36789f };
			break;
		case 6:
			func_203(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_EAST_1");
			uParam0->f_11 = { 1531.33f, 1578.837f, 147.4066f };
			break;
		case 7:
			func_203(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_EAST_2");
			uParam0->f_11 = { 945.3031f, 1142.541f, 147.4809f };
			break;
		case 8:
			func_203(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_WEST_1");
			uParam0->f_11 = { -1126.469f, 815.3829f, 117.6536f };
			break;
		case 9:
			func_203(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GRIZZLIES_WEST_2");
			uParam0->f_11 = { -2063.813f, 935.3212f, 147.0808f };
			break;
		case 10:
			func_203(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GREAT_PLAINS_1");
			uParam0->f_11 = { -1589.688f, -1425.319f, 80.34965f };
			break;
		case 11:
			func_203(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_GREAT_PLAINS_2");
			uParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
			break;
		case 12:
			func_203(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_HENNIGANS_STEAD_1");
			uParam0->f_11 = { -2690.104f, -2892.627f, 64.73759f };
			break;
		case 13:
			func_203(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_HENNIGANS_STEAD_2");
			uParam0->f_11 = { -2914.53f, -2558.967f, 61.66708f };
			break;
		case 14:
			func_203(uParam0, 0);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_RIO_BRAVO_1");
			uParam0->f_11 = { -4545.762f, -3673.932f, 17.87756f };
			break;
		case 15:
			func_203(uParam0, 1);
			uParam0->f_5 = joaat("BEAT_KIDNAPPED_RIO_BRAVO_2");
			uParam0->f_11 = { -4720.841f, -3357f, 8.61745f };
			break;
	}
}

void func_81(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 12;
	uParam0->f_2 = 3;
	switch (iParam1)
	{
		case 0:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			func_203(uParam0, 9);
			func_203(uParam0, 10);
			func_203(uParam0, 11);
			func_206(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HEARTLANDS_CLIFF_1");
			uParam0->f_11 = { 468.6932f, 60.0849f, 134.4816f };
			break;
		case 1:
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			func_203(uParam0, 8);
			func_203(uParam0, 9);
			func_203(uParam0, 10);
			func_203(uParam0, 11);
			func_206(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HEARTLANDS_RIVER_1");
			uParam0->f_11 = { -408.7124f, 154.0742f, 40.84526f };
			break;
		case 2:
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			func_203(uParam0, 4);
			func_203(uParam0, 5);
			func_203(uParam0, 6);
			func_203(uParam0, 9);
			func_203(uParam0, 10);
			func_203(uParam0, 11);
			func_206(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_TALL_TREES_1");
			uParam0->f_11 = { -1929.655f, -1348.338f, 105.84f };
			break;
		case 3:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			func_203(uParam0, 9);
			func_203(uParam0, 10);
			func_203(uParam0, 11);
			func_206(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_TALL_TREES_2");
			uParam0->f_11 = { -2003.943f, -2158.135f, 54.2301f };
			break;
		case 4:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			func_203(uParam0, 9);
			func_203(uParam0, 10);
			func_203(uParam0, 11);
			func_206(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_1");
			uParam0->f_11 = { -1272.226f, 97.47642f, 70.53004f };
			break;
		case 5:
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			func_203(uParam0, 4);
			func_203(uParam0, 7);
			func_203(uParam0, 8);
			func_203(uParam0, 9);
			func_203(uParam0, 10);
			func_203(uParam0, 11);
			func_206(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_2");
			uParam0->f_11 = { -2350.861f, -359.485f, 143.7474f };
			break;
		case 6:
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			func_203(uParam0, 6);
			func_203(uParam0, 7);
			func_203(uParam0, 9);
			func_203(uParam0, 10);
			func_203(uParam0, 11);
			func_206(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_BIG_VALLEY_3");
			uParam0->f_11 = { -1736.757f, 306.2781f, 108.1355f };
			break;
		case 7:
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			func_203(uParam0, 4);
			func_203(uParam0, 5);
			func_203(uParam0, 6);
			func_203(uParam0, 9);
			func_203(uParam0, 10);
			func_203(uParam0, 11);
			func_206(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_RIO_BRAVO_1");
			uParam0->f_11 = { -4964.499f, -3399.889f, 7.97322f };
			break;
		case 8:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			func_203(uParam0, 9);
			func_203(uParam0, 10);
			func_203(uParam0, 11);
			func_206(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_HENNIGANS_STEAD_1");
			uParam0->f_11 = { -2192.805f, -2778.977f, 69.01174f };
			break;
		case 9:
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			func_203(uParam0, 5);
			func_203(uParam0, 9);
			func_203(uParam0, 10);
			func_203(uParam0, 11);
			func_206(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_PHOTOGRAPHY_CHOLLA_SPRINGS_1");
			uParam0->f_11 = { -4603.166f, -2701.434f, -10.12116f };
			break;
	}
}

void func_82(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 21;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_201(uParam0);
	switch (iParam1)
	{
		case 0:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BOLGER_GLADE_1");
			uParam0->f_11 = { 1452.25f, -1695.116f, 64.9668f };
			break;
		case 1:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_ERIS_FIELD_1");
			uParam0->f_11 = { 1163.55f, -324.0086f, 97.10712f };
			break;
		case 2:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_ROANOKE_RIDGE_1");
			uParam0->f_11 = { 2682.104f, 858.447f, 85.90118f };
			break;
		case 3:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MOONSTONE_POND_1");
			uParam0->f_11 = { 1311.333f, 1183.934f, 151.5859f };
			break;
		case 4:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_COTORRA_SPRINGS_1");
			uParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
			break;
		case 5:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_CUMBERLAND_1");
			uParam0->f_11 = { 109.9411f, 1282.256f, 176.292f };
			break;
		case 6:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BEARTOOTH_1");
			uParam0->f_11 = { -1450.859f, 1686.266f, 255.2526f };
			break;
		case 7:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_FLATNECK_1");
			uParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
			break;
		case 8:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_LITTLE_CREEK_1");
			uParam0->f_11 = { -1698.036f, 380.6171f, 106.0826f };
			break;
		case 9:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_UPPER_MONTANA_1");
			uParam0->f_11 = { -2016.359f, -909.5917f, 84.91344f };
			break;
		case 10:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BLACKWATER_1");
			uParam0->f_11 = { -1362.091f, -1267.624f, 82.41972f };
			break;
		case 11:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_AURORA_BASIN_1");
			uParam0->f_11 = { -2449.051f, -1457.942f, 148.705f };
			break;
		case 12:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_GREAT_PLAINS_1");
			uParam0->f_11 = { -1559.339f, -1930.728f, 50.99157f };
			break;
		case 13:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MANTECA_FALLS_1");
			uParam0->f_11 = { -1764.444f, -2717.768f, 62.81413f };
			break;
		case 14:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_MACFARLANES_RANCH_1");
			uParam0->f_11 = { -2190.544f, -2200.288f, 64.42333f };
			break;
		case 15:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_SAN_LUIS_1");
			uParam0->f_11 = { -2803.26f, -3142.291f, 5.88098f };
			break;
		case 16:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_HENNIGANS_STEAD_1");
			uParam0->f_11 = { -3175.168f, -2402.267f, 22.72451f };
			break;
		case 17:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_JORGES_GAP_1");
			uParam0->f_11 = { -4220.611f, -2690.138f, 0.65931f };
			break;
		case 18:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_FORT_MERCER_1");
			uParam0->f_11 = { -4372.619f, -3274.055f, 20.26154f };
			break;
		case 19:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_BENEDICT_POINT_1");
			uParam0->f_11 = { -5456.922f, -3562.744f, -21.1142f };
			break;
		case 20:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_RIVAL_COLLECTOR_GAPTOOTH_RIDGE_1");
			uParam0->f_11 = { -5796.222f, -2650.145f, -16.68393f };
			break;
	}
}

void func_83(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	func_201(uParam0);
	func_205(uParam0, 2);
	switch (iParam1)
	{
		case 0:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_EMERALD_RANCH_1");
			uParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
			break;
		case 1:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_LEMOYNE_1");
			uParam0->f_11 = { 1465.514f, -821.0334f, 50.2372f };
			break;
		case 2:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_RIGGS_STATION_1");
			uParam0->f_11 = { -1082.332f, -696.7548f, 70.5432f };
			break;
		case 3:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_BLACKWATER_1");
			uParam0->f_11 = { -1462.952f, -1929.859f, 48.4187f };
			break;
		case 4:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_RIO_BRAVO_1");
			uParam0->f_11 = { -4988.295f, -3902.346f, -0.03286f };
			break;
		case 5:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_HENNIGANS_1");
			uParam0->f_11 = { -2770.473f, -2936.506f, 64.84297f };
			break;
		case 6:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_GREAT_PLAINS_1");
			uParam0->f_11 = { -1209.61f, -1812.165f, 61.23543f };
			break;
		case 7:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_STRAWBERRY_1");
			uParam0->f_11 = { -1706.993f, -580.9286f, 149.93f };
			break;
		case 8:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_SCARLETT_1");
			uParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
			break;
		case 9:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_RUNAWAY_WAGON_BOLGER_1");
			uParam0->f_11 = { 1778.236f, -1731.359f, 48.27552f };
			break;
	}
}

void func_84(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 12;
	uParam0->f_1 = 4;
	uParam0->f_2 = 5;
	switch (iParam1)
	{
		case 0:
			func_207(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_0");
			uParam0->f_11 = { -1159.115f, 397.0877f, 60.4953f };
			break;
		case 1:
			func_207(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_1");
			uParam0->f_11 = { -1278.359f, 291.4224f, 76.6652f };
			break;
		case 2:
			func_207(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_2");
			uParam0->f_11 = { -1371.28f, 283.4114f, 86.0114f };
			break;
		case 3:
			func_207(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_3");
			uParam0->f_11 = { -1117.687f, 406.6783f, 55.3681f };
			break;
		case 4:
			func_207(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_4");
			uParam0->f_11 = { -1288.323f, 148.5012f, 71.7864f };
			break;
		case 5:
			func_207(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_5");
			uParam0->f_11 = { -1648.447f, -114.858f, 170.0504f };
			break;
		case 6:
			func_207(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_BIG_VALLEY_6");
			uParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
			break;
		case 7:
			func_207(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_0");
			uParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
			break;
		case 8:
			func_207(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_1");
			uParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
			break;
		case 9:
			func_207(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_2");
			uParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
			break;
		case 10:
			func_207(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_3");
			uParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
			break;
		case 11:
			func_207(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_TREASURE_HUNTER_HEARTLANDS_4");
			uParam0->f_11 = { 817.7247f, 566.3447f, 114.3761f };
			break;
	}
}

void func_85(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 20;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_201(uParam0);
	switch (iParam1)
	{
		case 0:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_MACFARLANES_1");
			uParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
			break;
		case 1:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_THEIVES_LANDING_1");
			uParam0->f_11 = { -1541.353f, -2334.611f, 43.10187f };
			break;
		case 2:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_HANGING_ROCK_1");
			uParam0->f_11 = { -3456.39f, -2262.339f, 0.01624f };
			break;
		case 3:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_DEL_LOBO_1");
			uParam0->f_11 = { -3703.712f, -3594.224f, 45.18983f };
			break;
		case 4:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_BEECHERS_1");
			uParam0->f_11 = { -1581.551f, -1656.278f, 78.51012f };
			break;
		case 5:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_BLACKWATER_1");
			uParam0->f_11 = { -1236.292f, -1118.55f, 68.58572f };
			break;
		case 6:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_MONTANA_RIVER_1");
			uParam0->f_11 = { -1264.125f, -773.2117f, 91.83559f };
			break;
		case 7:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_MONTOS_REST_1");
			uParam0->f_11 = { -1414.607f, -234.2123f, 99.22668f };
			break;
		case 8:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_WATSONS_1");
			uParam0->f_11 = { -1721.402f, 553.6f, 112.524f };
			break;
		case 9:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_DAKOTA_RIVER_1");
			uParam0->f_11 = { -484.7991f, -70.36918f, 42.94242f };
			break;
		case 10:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_FLATNECK_1");
			uParam0->f_11 = { -458.5839f, -346.5686f, 80.66556f };
			break;
		case 11:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_EMERALD_RANCH_1");
			uParam0->f_11 = { 1089.583f, 23.75282f, 88.22131f };
			break;
		case 12:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_EMERALD_RANCH_2");
			uParam0->f_11 = { 1000.131f, 417.5909f, 107.9082f };
			break;
		case 13:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_DREAMCATCHER_TREE_1");
			uParam0->f_11 = { 713.7332f, 23.52884f, 152.0797f };
			break;
		case 14:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_CUMBERLAND_1");
			uParam0->f_11 = { 63.77304f, 1023.487f, 201.9749f };
			break;
		case 15:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_FORT_WALLACE_1");
			uParam0->f_11 = { 366.667f, 1408.665f, 175.0605f };
			break;
		case 16:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_OCREAGHS_RUN_1");
			uParam0->f_11 = { 1785.934f, 1522.009f, 155.1442f };
			break;
		case 17:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_MOONSTONE_POND_1");
			uParam0->f_11 = { 1279.07f, 1164.678f, 149.2508f };
			break;
		case 18:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_KAMASA_RIVER_1");
			uParam0->f_11 = { 2106.456f, 207.6169f, 72.68985f };
			break;
		case 19:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_TREE_MAP_VAN_HORN_1");
			uParam0->f_11 = { 2675.549f, 179.9657f, 54.14579f };
			break;
	}
}

void func_86(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 9;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	func_201(uParam0);
	uParam0->f_10 = 60f;
	switch (iParam1)
	{
		case 0:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_1");
			uParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
			break;
		case 1:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_2");
			uParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
			break;
		case 2:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_3");
			uParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
			break;
		case 3:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_4");
			uParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
			break;
		case 4:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_5");
			uParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
			break;
		case 5:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_6");
			uParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
			break;
		case 6:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_7");
			uParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
			break;
		case 7:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_8");
			uParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
			break;
		case 8:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_TIED_UP_PED_SCARLETT_MEADOWS_9");
			uParam0->f_11 = { 1012.322f, -394.373f, 90.43443f };
			break;
	}
}

void func_87(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 1;
	uParam0->f_1 = 6;
	uParam0->f_2 = 1;
	func_201(uParam0);
	func_205(uParam0, 1);
	func_205(uParam0, 4);
	func_205(uParam0, 8);
	func_205(uParam0, 16);
	switch (iParam1)
	{
		case 0:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_WILD_MAN_PLAYER_CAMP_1");
			uParam0->f_11 = { func_208(func_126(iParam2)) };
			break;
	}
}

void func_88(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 5;
	uParam0->f_2 = 6;
	switch (iParam1)
	{
		case 0:
			func_209(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_VALENTINE_1");
			uParam0->f_11 = { -347.4531f, 740.8643f, 116.4549f };
			break;
		case 1:
			func_209(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_VALENTINE_2");
			uParam0->f_11 = { -360.6497f, 824.0327f, 115.4768f };
			break;
		case 2:
			func_209(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_VAN_HORN_1");
			uParam0->f_11 = { 2957.225f, 524.4706f, 43.66619f };
			break;
		case 3:
			func_209(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_VAN_HORN_2");
			uParam0->f_11 = { 2975.885f, 537.2245f, 42.42131f };
			break;
		case 4:
			func_209(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_RHODES_1");
			uParam0->f_11 = { 1444.633f, -1417.982f, 78.22246f };
			break;
		case 5:
			func_209(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_RHODES_2");
			uParam0->f_11 = { 1394.169f, -1422.854f, 78.97552f };
			break;
		case 6:
			func_209(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_ANNESBURG_1");
			uParam0->f_11 = { 2996.145f, 1351.808f, 42.95977f };
			break;
		case 7:
			func_209(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_ANNESBURG_2");
			uParam0->f_11 = { 2915.743f, 1231.952f, 43.5792f };
			break;
		case 8:
			func_209(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_BLACKWATER_1");
			uParam0->f_11 = { -833.5609f, -1543.917f, 59.6274f };
			break;
		case 9:
			func_209(uParam0, iParam2);
			uParam0->f_5 = joaat("BEAT_DUEL_BLACKWATER_2");
			uParam0->f_11 = { -1019.64f, -1138.944f, 56.39161f };
			break;
	}
}

void func_89(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	*uParam0 = 12;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_201(uParam0);
	switch (iParam1)
	{
		case 0:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BAYOU_1");
			uParam0->f_11 = { 2208.668f, -350.9536f, 41.488f };
			break;
		case 1:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BAYOU_2");
			uParam0->f_11 = { 1733.923f, -727.6727f, 40.8996f };
			break;
		case 2:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_BIG_VALLEY_1");
			uParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
			break;
		case 3:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_CUMBERLAND_1");
			uParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
			break;
		case 4:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_CUMBERLAND_2");
			uParam0->f_11 = { 646.006f, 1304.928f, 193.4366f };
			break;
		case 5:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_1");
			uParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
			break;
		case 6:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_2");
			uParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
			break;
		case 7:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_HEARTLANDS_3");
			uParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
			break;
		case 8:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_ROANOKE_1");
			uParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
			break;
		case 9:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_ROANOKE_2");
			uParam0->f_11 = { 2566.893f, -71.0977f, 49.3333f };
			break;
		case 10:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_SCARLETT_MEADOWS_1");
			uParam0->f_11 = { 1389.072f, -2196.696f, 48.3307f };
			break;
		case 11:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_MOONSHINE_CAMP_SCARLETT_MEADOWS_2");
			uParam0->f_11 = { 906.9065f, -987.0414f, 56.96f };
			break;
	}
}

void func_90(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 15;
	uParam0->f_1 = 2;
	uParam0->f_2 = 4;
	func_210(uParam0, iParam2);
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_0");
			uParam0->f_11 = { 2815.91f, -1222.949f, 46.526f };
			break;
		case 1:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_1");
			uParam0->f_11 = { 2602.444f, -1286.57f, 51.2567f };
			break;
		case 2:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_2");
			uParam0->f_11 = { 2661.251f, -1202.6f, 52.2783f };
			break;
		case 3:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_3");
			uParam0->f_11 = { 2750.527f, -1206.293f, 48.3767f };
			break;
		case 4:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_4");
			uParam0->f_11 = { 2530.883f, -1149.375f, 49.0052f };
			break;
		case 5:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_5");
			uParam0->f_11 = { 2714.385f, -1233.121f, 49.172f };
			break;
		case 6:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_6");
			uParam0->f_11 = { 2639.789f, -1417.126f, 45.376f };
			break;
		case 7:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_7");
			uParam0->f_11 = { 2703.266f, -1184.961f, 50.865f };
			break;
		case 8:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_8");
			uParam0->f_11 = { 2781.518f, -1278.669f, 46.429f };
			break;
		case 9:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_9");
			uParam0->f_11 = { 2593.165f, -1207.484f, 52.3112f };
			break;
		case 10:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_10");
			uParam0->f_11 = { 2670.08f, -1113.233f, 49.552f };
			break;
		case 11:
			uParam0->f_5 = joaat("BEAT_BEGGAR_ST_DENIS_11");
			uParam0->f_11 = { 2482.088f, -1465.71f, 45.1902f };
			break;
		case 12:
			uParam0->f_5 = joaat("BEAT_BEGGAR_BLACKWATER_0");
			uParam0->f_11 = { -791.817f, -1311.097f, 42.623f };
			break;
		case 13:
			uParam0->f_5 = joaat("BEAT_BEGGAR_BLACKWATER_1");
			uParam0->f_11 = { -778.963f, -1260.098f, 42.643f };
			break;
		case 14:
			uParam0->f_5 = joaat("BEAT_BEGGAR_BLACKWATER_2");
			uParam0->f_11 = { -843.7784f, -1282.664f, 42.3634f };
			break;
	}
}

void func_91(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 15;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -1084113577;
	if (iParam1 < 5)
	{
		uParam0->f_20[0] = joaat("NIGHT");
		uParam0->f_27 = 18;
	}
	else
	{
		uParam0->f_20[0] = -35871888;
		uParam0->f_27 = 8;
	}
	func_201(uParam0);
	switch (iParam1)
	{
		case 0:
			func_211(uParam0, iParam1);
			uParam0->f_5 = -672003008;
			uParam0->f_11 = { 2153.785f, -1677.743f, 40.5666f };
			break;
		case 1:
			func_211(uParam0, iParam1);
			uParam0->f_5 = -396317411;
			uParam0->f_11 = { 2188.584f, -1595.642f, 40.591f };
			break;
		case 2:
			func_211(uParam0, iParam1);
			uParam0->f_5 = -1239103346;
			uParam0->f_11 = { 2078.438f, -1694.907f, 40.6896f };
			break;
		case 3:
			func_211(uParam0, iParam1);
			uParam0->f_5 = -889851344;
			uParam0->f_11 = { 2066.834f, -1767.304f, 40.1183f };
			break;
		case 4:
			func_211(uParam0, iParam1);
			uParam0->f_5 = -1582784618;
			uParam0->f_11 = { 2131.718f, -1865.66f, 40.0837f };
			break;
		case 5:
			func_211(uParam0, iParam1);
			uParam0->f_5 = 407459900;
			uParam0->f_11 = { 2189.613f, -654.0466f, 40.5628f };
			break;
		case 6:
			func_211(uParam0, iParam1);
			uParam0->f_5 = -1359903346;
			uParam0->f_11 = { 2311.974f, -546.9454f, 40.5628f };
			break;
		case 7:
			func_211(uParam0, iParam1);
			uParam0->f_5 = -1075501195;
			uParam0->f_11 = { 2212.435f, -599.6181f, 40.5628f };
			break;
		case 8:
			func_211(uParam0, iParam1);
			uParam0->f_5 = -761049871;
			uParam0->f_11 = { 2273.341f, -693.9393f, 40.5628f };
			break;
		case 9:
			func_211(uParam0, iParam1);
			uParam0->f_5 = 1397804618;
			uParam0->f_11 = { 2314.659f, -599.6119f, 40.5628f };
			break;
		case 10:
			func_211(uParam0, iParam1);
			uParam0->f_5 = -636095416;
			uParam0->f_11 = { 2773.734f, -612.6971f, 40.6339f };
			break;
		case 11:
			func_211(uParam0, iParam1);
			uParam0->f_5 = -933474091;
			uParam0->f_11 = { 2800.13f, -727.0102f, 40.6116f };
			break;
		case 12:
			func_211(uParam0, iParam1);
			uParam0->f_5 = -1209520147;
			uParam0->f_11 = { 2726.128f, -662.6138f, 40.5283f };
			break;
		case 13:
			func_211(uParam0, iParam1);
			uParam0->f_5 = -1524528544;
			uParam0->f_11 = { 2710.138f, -534.5544f, 40.615f };
			break;
		case 14:
			func_211(uParam0, iParam1);
			uParam0->f_5 = -449082741;
			uParam0->f_11 = { 2728.174f, -468.3862f, 40.7744f };
			break;
	}
}

void func_92(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 13;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 477228254;
	if (iParam1 > 7)
	{
		uParam0->f_27 = 18;
		uParam0->f_20[0] = joaat("NIGHT");
	}
	else
	{
		uParam0->f_27 = 1;
		uParam0->f_20[0] = joaat("DAY");
	}
	switch (iParam1)
	{
		case 0:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -42638554;
			uParam0->f_11 = { -1712f, 644f, 122.8f };
			break;
		case 1:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -330841909;
			uParam0->f_11 = { -2537.1f, 853.9f, 156.5f };
			break;
		case 2:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -637690825;
			uParam0->f_11 = { -2510.7f, 519.2f, 140f };
			break;
		case 3:
			func_212(uParam0, iParam1);
			uParam0->f_5 = 1210841234;
			uParam0->f_11 = { -1919.8f, 751.1f, 150.5f };
			break;
		case 4:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -275624566;
			uParam0->f_11 = { -2023.4f, 662.6884f, 119.8702f };
			break;
		case 5:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -2051147289;
			uParam0->f_11 = { -2435.442f, 828.0525f, 138.9454f };
			break;
		case 6:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -1760846718;
			uParam0->f_11 = { -2487.232f, 414.2487f, 148.2772f };
			break;
		case 7:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -1591562064;
			uParam0->f_11 = { -2579.019f, 342.2418f, 149.5684f };
			break;
		case 8:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -1159724897;
			uParam0->f_11 = { -1377.945f, 265.2666f, 78.222f };
			break;
		case 9:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -114459335;
			uParam0->f_11 = { -1209.213f, 172.2838f, 40.4974f };
			break;
		case 10:
			func_212(uParam0, iParam1);
			uParam0->f_5 = 564350440;
			uParam0->f_11 = { -1091.188f, -37.3214f, 40.5256f };
			break;
		case 11:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -840522068;
			uParam0->f_11 = { -867.4355f, 535.2601f, 57.9307f };
			break;
		case 12:
			func_212(uParam0, iParam1);
			uParam0->f_5 = -2076667055;
			uParam0->f_11 = { -792.3045f, 647.1317f, 88.5497f };
			break;
	}
}

void func_93(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 1796670491;
	if (iParam1 < 5)
	{
		uParam0->f_20[0] = -2117802919;
		uParam0->f_20[1] = -35871888;
		uParam0->f_27 = 0;
	}
	else
	{
		uParam0->f_20[0] = -2117802919;
		uParam0->f_20[1] = -35871888;
		uParam0->f_27 = 18;
	}
	func_201(uParam0);
	switch (iParam1)
	{
		case 0:
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			uParam0->f_5 = -666643000;
			uParam0->f_11 = { -2323.821f, -444.3168f, 143.2396f };
			break;
		case 1:
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			uParam0->f_5 = -930743103;
			uParam0->f_11 = { -2387.781f, -333.0453f, 142.8896f };
			break;
		case 2:
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			uParam0->f_5 = -4199612;
			uParam0->f_11 = { -2622.5f, -342.7303f, 141.5315f };
			break;
		case 3:
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			uParam0->f_5 = -1480377528;
			uParam0->f_11 = { -2760.32f, -77.8632f, 151.8582f };
			break;
		case 4:
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			uParam0->f_5 = -1817640794;
			uParam0->f_11 = { -2273.776f, -473.7863f, 138.3616f };
			break;
		case 5:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			uParam0->f_5 = -915442079;
			uParam0->f_11 = { 2448.226f, 553.928f, 66.09f };
			break;
		case 6:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			uParam0->f_5 = 1928422814;
			uParam0->f_11 = { 2257.893f, 256.7348f, 43.6559f };
			break;
		case 7:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			uParam0->f_5 = 1940620434;
			uParam0->f_11 = { 2324.826f, 895.6353f, 71.6451f };
			break;
		case 8:
			func_203(uParam0, 1);
			uParam0->f_5 = -665538457;
			uParam0->f_11 = { 2383.811f, 1084.155f, 85.9333f };
			break;
		case 9:
			func_203(uParam0, 1);
			uParam0->f_5 = 355243564;
			uParam0->f_11 = { 2398.53f, 773.5043f, 67.0099f };
			break;
	}
}

void func_94(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 326651247;
	func_201(uParam0);
	if (iParam1 > 4)
	{
		uParam0->f_20[0] = joaat("DAY");
		uParam0->f_27 = 18;
	}
	else
	{
		uParam0->f_20[0] = joaat("NIGHT");
		uParam0->f_27 = 9;
	}
	switch (iParam1)
	{
		case 0:
			func_203(uParam0, 0);
			uParam0->f_5 = -1024453831;
			uParam0->f_11 = { -1856.609f, 1802.919f, 234.305f };
			break;
		case 1:
			func_203(uParam0, 0);
			uParam0->f_5 = -652787833;
			uParam0->f_11 = { -1821.152f, 1566.352f, 235.8068f };
			break;
		case 2:
			func_203(uParam0, 0);
			uParam0->f_5 = 230697180;
			uParam0->f_11 = { -2069.577f, 1812.812f, 246.0542f };
			break;
		case 3:
			func_203(uParam0, 0);
			uParam0->f_5 = -543699832;
			uParam0->f_11 = { -1932.007f, 2153.216f, 322.7221f };
			break;
		case 4:
			func_203(uParam0, 0);
			uParam0->f_5 = 894826503;
			uParam0->f_11 = { -1752.347f, 1951.369f, 264.5091f };
			break;
		case 5:
			func_203(uParam0, 1);
			uParam0->f_5 = 1666294228;
			uParam0->f_11 = { 959.16f, 618.9481f, 97.743f };
			break;
		case 6:
			func_203(uParam0, 1);
			uParam0->f_5 = 1426851145;
			uParam0->f_11 = { 996.1093f, 512.002f, 97.3018f };
			break;
		case 7:
			func_203(uParam0, 1);
			uParam0->f_5 = -807339271;
			uParam0->f_11 = { 1215.257f, 557.647f, 87.103f };
			break;
		case 8:
			func_203(uParam0, 1);
			uParam0->f_5 = -1050255868;
			uParam0->f_11 = { 1251.465f, 344.8225f, 92.1045f };
			break;
		case 9:
			func_203(uParam0, 1);
			uParam0->f_5 = -1406848126;
			uParam0->f_11 = { 913.0093f, 113.5476f, 116.3f };
			break;
	}
}

void func_95(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 11;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -1848813677;
	func_201(uParam0);
	if (iParam1 > 5)
	{
		uParam0->f_20[0] = -35871888;
		uParam0->f_27 = 9;
	}
	else
	{
		uParam0->f_20[0] = joaat("DAY");
		uParam0->f_27 = 18;
	}
	switch (iParam1)
	{
		case 0:
			func_203(uParam0, 0);
			uParam0->f_5 = -1741150966;
			uParam0->f_11 = { -1352.639f, -2550.378f, 74.9777f };
			break;
		case 1:
			func_203(uParam0, 0);
			uParam0->f_5 = -796584541;
			uParam0->f_11 = { -1913.631f, -2213.565f, 42.0518f };
			break;
		case 2:
			func_203(uParam0, 0);
			uParam0->f_5 = 80182823;
			uParam0->f_11 = { -1745.884f, -2388.807f, 42.8205f };
			break;
		case 3:
			func_203(uParam0, 1);
			uParam0->f_5 = 1964620432;
			uParam0->f_11 = { -1593.106f, -2351.92f, 43.0229f };
			break;
		case 4:
			func_203(uParam0, 1);
			uParam0->f_5 = 1731665611;
			uParam0->f_11 = { -1800.651f, -1644.944f, 96.7288f };
			break;
		case 5:
			func_203(uParam0, 1);
			uParam0->f_5 = -1728544175;
			uParam0->f_11 = { -1628.216f, -1943.554f, 50.1671f };
			break;
		case 6:
			func_203(uParam0, 2);
			uParam0->f_5 = -1242537170;
			uParam0->f_11 = { 2443.712f, -19.2163f, 43.2151f };
			break;
		case 7:
			func_203(uParam0, 2);
			uParam0->f_5 = 2036591126;
			uParam0->f_11 = { 2715.91f, -128.7452f, 42.0147f };
			break;
		case 8:
			func_203(uParam0, 2);
			uParam0->f_5 = 197299925;
			uParam0->f_11 = { 2363.777f, 13.1458f, 41.3272f };
			break;
		case 9:
			func_203(uParam0, 2);
			uParam0->f_5 = 1291850063;
			uParam0->f_11 = { 2355.338f, -247.3491f, 41.5576f };
			break;
		case 10:
			func_203(uParam0, 2);
			uParam0->f_5 = 1599124976;
			uParam0->f_11 = { 2601.386f, -212.5256f, 43.7812f };
			break;
	}
}

void func_96(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 20;
	uParam0->f_1 = 4;
	uParam0->f_2 = 2;
	uParam0->f_28[0] = 458679075;
	switch (iParam1)
	{
		case 0:
			func_213(uParam0, iParam1);
			uParam0->f_5 = 980541174;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6072.735f, -3593.837f, -4.3615f };
			break;
		case 1:
			func_213(uParam0, iParam1);
			uParam0->f_5 = 1220770713;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6201.49f, -3702.74f, -4.28209f };
			break;
		case 2:
			func_213(uParam0, iParam1);
			uParam0->f_5 = 1322813407;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5571.36f, -3890.84f, -31.2513f };
			break;
		case 3:
			func_213(uParam0, iParam1);
			uParam0->f_5 = 1552098100;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6119.04f, -3793.32f, -32.966f };
			break;
		case 4:
			func_213(uParam0, iParam1);
			uParam0->f_5 = 1916358304;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6009.02f, -3759.14f, -25.1f };
			break;
		case 5:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -1363212564;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5896.217f, -3811.854f, -31.2514f };
			break;
		case 6:
			func_213(uParam0, iParam1);
			uParam0->f_5 = 686685000;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6360.188f, -3401.399f, -14.7027f };
			break;
		case 7:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -1524698208;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6241.614f, -3430.465f, 1.465f };
			break;
		case 8:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -1804348854;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6091.54f, -3398.527f, 17.9157f };
			break;
		case 9:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -2035403073;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -6054.187f, -3594.051f, -4.8637f };
			break;
		case 10:
			func_213(uParam0, iParam1);
			uParam0->f_5 = 728964560;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5609.956f, -3781.126f, -24.15435f };
			break;
		case 11:
			func_213(uParam0, iParam1);
			uParam0->f_5 = 765075998;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5664.643f, -3561.726f, -24.1565f };
			break;
		case 12:
			func_213(uParam0, iParam1);
			uParam0->f_5 = 1070974613;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5811.027f, -3789.534f, -27.8079f };
			break;
		case 13:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -1088797396;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5906.508f, -3520.436f, -24.1555f };
			break;
		case 14:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -740987230;
			uParam0->f_20[0] = -35871888;
			uParam0->f_27 = 1;
			uParam0->f_11 = { -5753.862f, -3302.776f, -24.1569f };
			break;
		case 15:
			func_213(uParam0, iParam1);
			uParam0->f_5 = 2110034336;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -937.2829f, -1900.071f, 50.81326f };
			break;
		case 16:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -783796062;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -1060.57f, -1731.06f, 75.49813f };
			break;
		case 17:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -545106666;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1052.66f, -1784.942f, 62.46124f };
			break;
		case 18:
			func_213(uParam0, iParam1);
			uParam0->f_5 = 379536207;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 16;
			uParam0->f_11 = { -960.0064f, -1661.613f, 67.8736f };
			break;
		case 19:
			func_213(uParam0, iParam1);
			uParam0->f_5 = -992108595;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 2;
			uParam0->f_11 = { -1331.61f, -1892.678f, 60.4174f };
			break;
	}
}

void func_97(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 15;
	uParam0->f_1 = 5;
	uParam0->f_2 = 2;
	uParam0->f_28[0] = 78935770;
	switch (iParam1)
	{
		case 0:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 1750035473;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1486.613f, -2140.134f, 47.13319f };
			break;
		case 1:
			func_214(uParam0, iParam1);
			uParam0->f_5 = -1499633496;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1400.093f, -2166.322f, 47.3376f };
			break;
		case 2:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 2019068959;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1229.798f, -2101.002f, 57.1906f };
			break;
		case 3:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 1010504677;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1036.581f, -2147.274f, 43.912f };
			break;
		case 4:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 1297331734;
			uParam0->f_20[0] = -2117802919;
			uParam0->f_27 = 8;
			uParam0->f_11 = { 1190.843f, -2218.737f, 57.2836f };
			break;
		case 5:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 980309385;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2260.786f, -372.8623f, 40.8656f };
			break;
		case 6:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 1451396569;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 18;
			uParam0->f_11 = { 1632.416f, -616.6262f, 42.8678f };
			break;
		case 7:
			func_214(uParam0, iParam1);
			uParam0->f_5 = -1404978858;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2127.624f, -907.4355f, 40.6492f };
			break;
		case 8:
			func_214(uParam0, iParam1);
			uParam0->f_5 = -1173302028;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2023.697f, -1017.159f, 42.3998f };
			break;
		case 9:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 2143543387;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 18;
			uParam0->f_11 = { 2093.953f, -739.3283f, 41.2796f };
			break;
		case 10:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 1187325752;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2183.54f, -213.3573f, 45.5331f };
			break;
		case 11:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 201273773;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 16;
			uParam0->f_11 = { 2185.672f, -43.506f, 52.2188f };
			break;
		case 12:
			func_214(uParam0, iParam1);
			uParam0->f_5 = 36249089;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 2;
			uParam0->f_11 = { 2447.455f, -55.0326f, 43.6877f };
			break;
		case 13:
			func_214(uParam0, iParam1);
			uParam0->f_5 = -1717449488;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 16;
			uParam0->f_11 = { 1832.42f, -317.352f, 45.708f };
			break;
		case 14:
			func_214(uParam0, iParam1);
			uParam0->f_5 = -2014041707;
			uParam0->f_20[0] = joaat("NIGHT");
			uParam0->f_27 = 2;
			uParam0->f_11 = { 1876.532f, -453.5455f, 43.2695f };
			break;
	}
}

void func_98(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 6;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = 29257535;
	func_201(uParam0);
	if (iParam1 < 5)
	{
		uParam0->f_20[0] = joaat("DAY");
		uParam0->f_20[1] = -2117802919;
		uParam0->f_27 = 0;
	}
	else
	{
		uParam0->f_20[0] = joaat("DAY");
		uParam0->f_20[1] = -35871888;
		uParam0->f_27 = 9;
	}
	switch (iParam1)
	{
		case 0:
			func_203(uParam0, 3);
			func_203(uParam0, 4);
			func_203(uParam0, 5);
			uParam0->f_5 = -813726569;
			uParam0->f_11 = { -2685.817f, -2697.83f, 71.8905f };
			break;
		case 1:
			func_203(uParam0, 3);
			func_203(uParam0, 4);
			func_203(uParam0, 5);
			uParam0->f_5 = -991070207;
			uParam0->f_11 = { -2841.472f, -2845.188f, 86.3463f };
			break;
		case 2:
			func_203(uParam0, 3);
			func_203(uParam0, 4);
			func_203(uParam0, 5);
			uParam0->f_5 = 1385332783;
			uParam0->f_11 = { -3043.896f, -2154.732f, 59.9256f };
			break;
		case 3:
			func_203(uParam0, 3);
			func_203(uParam0, 4);
			func_203(uParam0, 5);
			uParam0->f_5 = 1394180521;
			uParam0->f_11 = { -2653.586f, -2143.511f, 75.962f };
			break;
		case 4:
			func_203(uParam0, 3);
			func_203(uParam0, 4);
			func_203(uParam0, 5);
			uParam0->f_5 = -1581141590;
			uParam0->f_11 = { -3228.791f, -2434.523f, 26.6737f };
			break;
		case 5:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			uParam0->f_5 = 1300807189;
			uParam0->f_11 = { -1177.594f, -748.8547f, 67.811f };
			break;
		case 6:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			uParam0->f_5 = -1226288496;
			uParam0->f_11 = { -1735.686f, -628.3361f, 145.1246f };
			break;
		case 7:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			uParam0->f_5 = -566411244;
			uParam0->f_11 = { -1572.939f, -328.771f, 160.6099f };
			break;
		case 8:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			uParam0->f_5 = 1931184426;
			uParam0->f_11 = { -1463.646f, -481.3466f, 129.9887f };
			break;
		case 9:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			uParam0->f_5 = 432310963;
			uParam0->f_11 = { -1525.983f, -916.2361f, 88.1698f };
			break;
	}
}

void func_99(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 20;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -463663296;
	if (iParam1 < 10)
	{
		uParam0->f_20[0] = -2117802919;
		uParam0->f_20[1] = -35871888;
		uParam0->f_27 = 57;
	}
	else
	{
		uParam0->f_20[0] = -2117802919;
		uParam0->f_20[1] = -35871888;
		uParam0->f_27 = 57;
	}
	switch (iParam1)
	{
		case 0:
			func_215(uParam0, iParam1);
			uParam0->f_5 = 439376203;
			uParam0->f_11 = { 1200.338f, -568.1477f, 67.3878f };
			break;
		case 1:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -862568936;
			uParam0->f_11 = { 1238.102f, -546.7609f, 66.5485f };
			break;
		case 2:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -1361247578;
			uParam0->f_11 = { 1294.011f, -627.1522f, 58.9807f };
			break;
		case 3:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -518330591;
			uParam0->f_11 = { 1330.112f, -709.0779f, 64.7788f };
			break;
		case 4:
			func_215(uParam0, iParam1);
			uParam0->f_5 = 1666706329;
			uParam0->f_11 = { 1174.01f, -520.5736f, 69.0551f };
			break;
		case 5:
			func_215(uParam0, iParam1);
			uParam0->f_5 = 618479763;
			uParam0->f_11 = { 627.306f, -1038.205f, 42.0511f };
			break;
		case 6:
			func_215(uParam0, iParam1);
			uParam0->f_5 = 916579356;
			uParam0->f_11 = { 675.5718f, -1121.435f, 50.7543f };
			break;
		case 7:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -1544831314;
			uParam0->f_11 = { 799.3545f, -1190.935f, 42.9927f };
			break;
		case 8:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -1524645610;
			uParam0->f_11 = { 753.5811f, -983.9583f, 47.8422f };
			break;
		case 9:
			func_215(uParam0, iParam1);
			uParam0->f_5 = 5765001;
			uParam0->f_11 = { 745.8436f, -1119.909f, 55.5229f };
			break;
		case 10:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -147337997;
			uParam0->f_11 = { -963.4839f, 2238.298f, 342.2684f };
			break;
		case 11:
			func_215(uParam0, iParam1);
			uParam0->f_5 = 46195721;
			uParam0->f_11 = { -1100.64f, 2080.921f, 365.7759f };
			break;
		case 12:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -41952889;
			uParam0->f_11 = { -1209.432f, 2421.632f, 309.8767f };
			break;
		case 13:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -280740592;
			uParam0->f_11 = { -1280.937f, 2445.134f, 305.019f };
			break;
		case 14:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -636874084;
			uParam0->f_11 = { -1340.472f, 2298.734f, 308.7317f };
			break;
		case 15:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -1240479072;
			uParam0->f_11 = { -1159.649f, 2341.108f, 323.5332f };
			break;
		case 16:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -1479922155;
			uParam0->f_11 = { -1329.47f, 2266.865f, 309.1315f };
			break;
		case 17:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -1836252261;
			uParam0->f_11 = { -1202.59f, 2191.101f, 333.5445f };
			break;
		case 18:
			func_215(uParam0, iParam1);
			uParam0->f_5 = -2075236578;
			uParam0->f_11 = { -1171.686f, 2299.184f, 323.3623f };
			break;
		case 19:
			func_215(uParam0, iParam1);
			uParam0->f_5 = 1074322888;
			uParam0->f_11 = { -1394.394f, 2394.838f, 308.3089f };
			break;
	}
}

void func_100(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 10;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -2109368060;
	func_201(uParam0);
	if (iParam1 < 5)
	{
		uParam0->f_20[0] = joaat("NIGHT");
		uParam0->f_27 = 18;
	}
	else
	{
		uParam0->f_20[0] = joaat("DAY");
		uParam0->f_27 = 0;
	}
	switch (iParam1)
	{
		case 0:
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			uParam0->f_5 = 1070019252;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 1:
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			uParam0->f_5 = -510012600;
			uParam0->f_11 = { 2808.358f, 2290.307f, 155.8015f };
			break;
		case 2:
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			uParam0->f_5 = -250768090;
			uParam0->f_11 = { 2324.25f, 2143.964f, 211.2929f };
			break;
		case 3:
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			uParam0->f_5 = 1057891329;
			uParam0->f_11 = { 2876.535f, 2181.409f, 156.7777f };
			break;
		case 4:
			func_203(uParam0, 2);
			func_203(uParam0, 3);
			uParam0->f_5 = 863129034;
			uParam0->f_11 = { 2489.669f, 2265.437f, 175.6015f };
			break;
		case 5:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			uParam0->f_5 = -1100103111;
			uParam0->f_11 = { -957.019f, 1550.161f, 237.4414f };
			break;
		case 6:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			uParam0->f_5 = -383805560;
			uParam0->f_11 = { -1023.774f, 1561.614f, 237.4295f };
			break;
		case 7:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			uParam0->f_5 = -233104073;
			uParam0->f_11 = { -986.7993f, 1636.296f, 237.4295f };
			break;
		case 8:
			func_203(uParam0, 1);
			uParam0->f_5 = -604353467;
			uParam0->f_11 = { -874.8361f, 1499.423f, 245.7041f };
			break;
		case 9:
			func_203(uParam0, 1);
			uParam0->f_5 = 1641665016;
			uParam0->f_11 = { -919.2281f, 1482.48f, 245.1043f };
			break;
	}
}

void func_101(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	uParam0->f_7 = 2;
	*uParam0 = 25;
	uParam0->f_1 = 4;
	uParam0->f_2 = 1;
	uParam0->f_28[0] = -646307557;
	if (iParam1 < 10)
	{
		uParam0->f_20[0] = -2117802919;
		uParam0->f_20[1] = joaat("NIGHT");
		uParam0->f_27 = 18;
	}
	else
	{
		uParam0->f_20[0] = joaat("NIGHT");
		uParam0->f_27 = 57;
	}
	switch (iParam1)
	{
		case 0:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -1895828765;
			uParam0->f_11 = { 1649.598f, 1335.141f, 144.8913f };
			break;
		case 1:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 1786489311;
			uParam0->f_11 = { 1711.248f, 1464.318f, 146.3869f };
			break;
		case 2:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 1548029298;
			uParam0->f_11 = { 1569.279f, 1372.517f, 145.0414f };
			break;
		case 3:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -718766281;
			uParam0->f_11 = { 1427.097f, 1701.411f, 197.8922f };
			break;
		case 4:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -1212595111;
			uParam0->f_11 = { 1593.958f, 1646.358f, 143.5214f };
			break;
		case 5:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -1283376151;
			uParam0->f_11 = { 1694.973f, 1740.234f, 188.4962f };
			break;
		case 6:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -1525768444;
			uParam0->f_11 = { 1487.993f, 1066.912f, 182.3846f };
			break;
		case 7:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 249590434;
			uParam0->f_11 = { 1401.922f, 1325.553f, 163.9692f };
			break;
		case 8:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 9885199;
			uParam0->f_11 = { 1812.587f, 1193.924f, 215.9388f };
			break;
		case 9:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 1343123829;
			uParam0->f_11 = { 1940.486f, 1389.066f, 177.8712f };
			break;
		case 10:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -2039750752;
			uParam0->f_11 = { 127.6135f, 1824.788f, 199.2989f };
			break;
		case 11:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -2028740368;
			uParam0->f_11 = { 160.7978f, 1748.951f, 192.5338f };
			break;
		case 12:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 1508771493;
			uParam0->f_11 = { 128.1839f, 1871.354f, 200.8744f };
			break;
		case 13:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 1820404683;
			uParam0->f_11 = { 185.3962f, 1824.202f, 200.2588f };
			break;
		case 14:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 1332736425;
			uParam0->f_11 = { 196.2743f, 1749.555f, 195.3678f };
			break;
		case 15:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 536875722;
			uParam0->f_11 = { 239.17f, 1914.014f, 204.8216f };
			break;
		case 16:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 795259287;
			uParam0->f_11 = { 512.8569f, 1926.074f, 199.1983f };
			break;
		case 17:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 20501824;
			uParam0->f_11 = { 325.2433f, 1902.083f, 200.069f };
			break;
		case 18:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 320272636;
			uParam0->f_11 = { 360.4333f, 1843.854f, 185.1447f };
			break;
		case 19:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 1135434088;
			uParam0->f_11 = { 506.2105f, 1883.957f, 201.9437f };
			break;
		case 20:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 1976647087;
			uParam0->f_11 = { 253.8551f, 1705.438f, 187.3591f };
			break;
		case 21:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -2028969939;
			uParam0->f_11 = { 320.4962f, 1736.16f, 192.2878f };
			break;
		case 22:
			func_216(uParam0, iParam1);
			uParam0->f_5 = 2065778767;
			uParam0->f_11 = { -29.8717f, 1716.412f, 179.3378f };
			break;
		case 23:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -1385354006;
			uParam0->f_11 = { -20.6945f, 1632.488f, 162.0277f };
			break;
		case 24:
			func_216(uParam0, iParam1);
			uParam0->f_5 = -1602546938;
			uParam0->f_11 = { 480.1275f, 2070.224f, 235.143f };
			break;
	}
}

void func_102(var uParam0, int iParam1, int iParam2)
{
	bool bVar0;

	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 3;
	uParam0->f_2 = 2;
	uParam0->f_7 = 2;
	uParam0->f_28[0] = -196458416;
	bVar0 = iParam1 >= 5;
	if (!bVar0)
	{
		uParam0->f_20[0] = joaat("DAY");
		uParam0->f_27 = 1;
	}
	else
	{
		uParam0->f_20[0] = -35871888;
		uParam0->f_27 = 1;
	}
	func_217(uParam0, iParam1, iParam2);
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = -1725684832;
			uParam0->f_11 = { 261.4861f, -558.9222f, 61.15959f };
			break;
		case 1:
			uParam0->f_5 = -1992129571;
			uParam0->f_11 = { 477.293f, -270.4016f, 143.0532f };
			break;
		case 2:
			uParam0->f_5 = 2064181094;
			uParam0->f_11 = { 178.3377f, -192.7462f, 126.5609f };
			break;
		case 3:
			uParam0->f_5 = 1983503816;
			uParam0->f_11 = { -138.1221f, -21.41103f, 95.08842f };
			break;
		case 4:
			uParam0->f_5 = 1603580030;
			uParam0->f_11 = { 788.4693f, -359.1041f, 88.02867f };
			break;
		case 5:
			uParam0->f_5 = 1591141935;
			uParam0->f_11 = { -2105.914f, -1658.808f, 139.2303f };
			break;
		case 6:
			uParam0->f_5 = 1382010177;
			uParam0->f_11 = { -2322.846f, -1606.925f, 147.5517f };
			break;
		case 7:
			uParam0->f_5 = -1315566672;
			uParam0->f_11 = { -2327.094f, -1401.05f, 142.4195f };
			break;
		case 8:
			uParam0->f_5 = 395106204;
			uParam0->f_11 = { -2004.499f, -1326.471f, 115.4162f };
			break;
		case 9:
			uParam0->f_5 = 88814361;
			uParam0->f_11 = { -2532.945f, -1409.852f, 145.3983f };
			break;
	}
}

void func_103(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 3;
	uParam0->f_2 = 2;
	uParam0->f_7 = 2;
	uParam0->f_28[0] = 970130440;
	if (iParam1 < 5)
	{
		uParam0->f_20[0] = -35871888;
		uParam0->f_20[1] = joaat("DAY");
		uParam0->f_27 = 57;
	}
	else
	{
		uParam0->f_20[0] = joaat("DAY");
		uParam0->f_20[1] = -2117802919;
		uParam0->f_27 = 57;
	}
	func_218(uParam0, iParam1, iParam2);
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = -44146172;
			uParam0->f_11 = { -4886.723f, -3659.611f, 23.51921f };
			break;
		case 1:
			uParam0->f_5 = -1882192159;
			uParam0->f_11 = { -3706.045f, -3561.407f, 47.211f };
			break;
		case 2:
			uParam0->f_5 = -1446495535;
			uParam0->f_11 = { -3997.887f, -3743.7f, 39.394f };
			break;
		case 3:
			uParam0->f_5 = -1153835596;
			uParam0->f_11 = { -4533.075f, -3761.288f, 13.8127f };
			break;
		case 4:
			uParam0->f_5 = 345870470;
			uParam0->f_11 = { -4165.463f, -3614.162f, 49.5309f };
			break;
		case 5:
			uParam0->f_5 = -1885586340;
			uParam0->f_11 = { 1612.212f, 2114.094f, 315.281f };
			break;
		case 6:
			uParam0->f_5 = 1366147128;
			uParam0->f_11 = { 1879.319f, 2050.416f, 269.9333f };
			break;
		case 7:
			uParam0->f_5 = 1740369108;
			uParam0->f_11 = { 1522.469f, 2192.855f, 333.81f };
			break;
		case 8:
			uParam0->f_5 = -416486532;
			uParam0->f_11 = { 693.7542f, 2222.729f, 222.769f };
			break;
		case 9:
			uParam0->f_5 = -1184690199;
			uParam0->f_11 = { 756.6907f, 2034.318f, 266.4209f };
			break;
	}
}

void func_104(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	uParam0->f_7 = 2;
	uParam0->f_28[0] = -405566878;
	func_201(uParam0);
	if (iParam1 < 5)
	{
		uParam0->f_27 = 24;
		uParam0->f_20[0] = joaat("6_TO_18");
	}
	else
	{
		uParam0->f_27 = 24;
		uParam0->f_20[0] = joaat("18_TO_0");
		uParam0->f_20[1] = joaat("22_TO_4");
	}
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = -145880949;
			uParam0->f_11 = { 451.6826f, 1053.771f, 197.3474f };
			func_203(uParam0, 0);
			break;
		case 1:
			uParam0->f_5 = 1765108824;
			uParam0->f_11 = { 546.6983f, 939.2978f, 161.589f };
			func_203(uParam0, 0);
			break;
		case 2:
			uParam0->f_5 = 1620892455;
			uParam0->f_11 = { -142.6579f, 1231.128f, 164.5134f };
			func_203(uParam0, 0);
			break;
		case 3:
			uParam0->f_5 = 1380531840;
			uParam0->f_11 = { 411.3364f, 1329.074f, 180.39f };
			func_203(uParam0, 0);
			break;
		case 4:
			uParam0->f_5 = -1542790654;
			uParam0->f_11 = { 473.7581f, 1011.376f, 173.0766f };
			func_203(uParam0, 0);
			break;
		case 5:
			uParam0->f_5 = -1733556405;
			uParam0->f_11 = { -4209.333f, -2677.593f, 5.4303f };
			func_203(uParam0, 1);
			break;
		case 6:
			uParam0->f_5 = -478503693;
			uParam0->f_11 = { -4260.617f, -2412.103f, 23.6335f };
			func_203(uParam0, 1);
			break;
		case 7:
			uParam0->f_5 = -156122271;
			uParam0->f_11 = { -4620.429f, -2660.025f, -5.9085f };
			func_203(uParam0, 1);
			break;
		case 8:
			uParam0->f_5 = 1073468916;
			uParam0->f_11 = { -4371.066f, -3137.245f, -2.59f };
			func_203(uParam0, 1);
			break;
		case 9:
			uParam0->f_5 = -249481152;
			uParam0->f_11 = { -4104.459f, -2061.22f, 4.8147f };
			func_203(uParam0, 1);
			break;
	}
}

void func_105(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 11;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_201(uParam0);
	switch (iParam1)
	{
		case 0:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_BIG_VALLEY_0");
			uParam0->f_11 = { -2586.923f, -264.5349f, 161.6671f };
			break;
		case 1:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_BIG_VALLEY_1");
			uParam0->f_11 = { -2578.181f, 388.9668f, 148.3721f };
			break;
		case 2:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_BIG_VALLEY_2");
			uParam0->f_11 = { -2196.576f, 468.8412f, 119.5676f };
			break;
		case 3:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GREAT_PLAINS_0");
			uParam0->f_11 = { -1637.2f, -1513.234f, 82.6688f };
			break;
		case 4:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GREAT_PLAINS_1");
			uParam0->f_11 = { -825.3087f, -1804.951f, 59.0313f };
			break;
		case 5:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_0");
			uParam0->f_11 = { 1786.915f, 1588.926f, 167.4663f };
			break;
		case 6:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_1");
			uParam0->f_11 = { 1959.894f, 1387.251f, 179.786f };
			break;
		case 7:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_2");
			uParam0->f_11 = { 637.5925f, 2099.455f, 222.0308f };
			break;
		case 8:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_STALKING_HUNTER_GRZ_EAST_3");
			uParam0->f_11 = { 1296.321f, 1161.685f, 150.1379f };
			break;
		case 9:
			func_202(uParam0);
			uParam0->f_5 = 2107537913;
			uParam0->f_11 = { -2100.247f, -1372.887f, 127.7423f };
			break;
		case 10:
			func_202(uParam0);
			uParam0->f_5 = -1477292384;
			uParam0->f_11 = { -2205.016f, -1584.145f, 148.3944f };
			break;
	}
}

void func_106(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 10;
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	func_201(uParam0);
	switch (iParam1)
	{
		case 0:
			func_202(uParam0);
			uParam0->f_5 = -274965770;
			uParam0->f_11 = { -1109.718f, 2104.703f, 361.4368f };
			break;
		case 1:
			func_202(uParam0);
			uParam0->f_5 = 1652259747;
			uParam0->f_11 = { -4300.761f, -3445.602f, 33.26603f };
			break;
		case 2:
			func_202(uParam0);
			uParam0->f_5 = -743720569;
			uParam0->f_11 = { -3895.461f, -2492.511f, -11.57848f };
			break;
		case 3:
			func_202(uParam0);
			uParam0->f_5 = -1200331578;
			uParam0->f_11 = { -2190.508f, -2867.223f, 25.40727f };
			break;
		case 4:
			func_202(uParam0);
			uParam0->f_5 = -1026512984;
			uParam0->f_11 = { -2083.893f, -1412.552f, 131.8581f };
			break;
		case 5:
			func_202(uParam0);
			uParam0->f_5 = -1017773316;
			uParam0->f_11 = { -897.5998f, 535.8544f, 58.2352f };
			break;
		case 6:
			func_202(uParam0);
			uParam0->f_5 = 303940131;
			uParam0->f_11 = { 280.7151f, 263.9585f, 112.8886f };
			break;
		case 7:
			func_202(uParam0);
			uParam0->f_5 = 1273284251;
			uParam0->f_11 = { 1548.084f, 1355.097f, 146.0557f };
			break;
		case 8:
			func_202(uParam0);
			uParam0->f_5 = -950817569;
			uParam0->f_11 = { 2652.989f, 1189.503f, 118.7033f };
			break;
		case 9:
			func_202(uParam0);
			uParam0->f_5 = -910888222;
			uParam0->f_11 = { 1509.102f, -2101.449f, 45.3134f };
			break;
	}
}

void func_107(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 7;
	uParam0->f_1 = 3;
	uParam0->f_2 = 1;
	func_201(uParam0);
	switch (iParam1)
	{
		case 0:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_1");
			uParam0->f_11 = { -1499.397f, -553.9472f, 131.8198f };
			break;
		case 1:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_2");
			uParam0->f_11 = { -1760.55f, 268.6243f, 118.6948f };
			break;
		case 2:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_3");
			uParam0->f_11 = { -2762.128f, -158.0485f, 150.8974f };
			break;
		case 3:
			func_202(uParam0);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_BIG_VALLEY_4");
			uParam0->f_11 = { -719.5702f, -756.9052f, 49.81378f };
			break;
		case 4:
			func_203(uParam0, 0);
			func_203(uParam0, 2);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_SCARLETT_MEADOWS_1");
			uParam0->f_11 = { 951.5258f, -1248.371f, 53.86922f };
			break;
		case 5:
			func_203(uParam0, 0);
			func_203(uParam0, 2);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_SCARLETT_MEADOWS_2");
			uParam0->f_11 = { 1088.291f, -1418.599f, 55.54557f };
			break;
		case 6:
			func_203(uParam0, 0);
			func_203(uParam0, 2);
			uParam0->f_5 = joaat("BEAT_CRASHED_WAGON_SCARLETT_MEADOWS_3");
			uParam0->f_11 = { 1289.693f, -1603.704f, 64.23989f };
			break;
	}
}

void func_108(var uParam0, int iParam1)
{
	uParam0->f_6 = 1;
	*uParam0 = 8;
	uParam0->f_1 = 2;
	uParam0->f_2 = 1;
	switch (iParam1)
	{
		case 0:
			func_219(uParam0, iParam1);
			uParam0->f_5 = -418287183;
			uParam0->f_11 = { -2081.231f, -2774.597f, 77.5683f };
			break;
		case 1:
			func_219(uParam0, iParam1);
			uParam0->f_5 = -1127015115;
			uParam0->f_11 = { -2258.97f, -2879.726f, 25.0912f };
			break;
		case 2:
			func_219(uParam0, iParam1);
			uParam0->f_5 = -1853700459;
			uParam0->f_11 = { -2925.017f, -2769.882f, 95.6414f };
			break;
		case 3:
			func_219(uParam0, iParam1);
			uParam0->f_5 = 529883832;
			uParam0->f_11 = { -2648.38f, -2977.772f, 76.4237f };
			break;
		case 4:
			func_219(uParam0, iParam1);
			uParam0->f_5 = -204230900;
			uParam0->f_11 = { -2323.921f, -2074.845f, 88.1254f };
			break;
		case 5:
			func_219(uParam0, iParam1);
			uParam0->f_5 = -1938530367;
			uParam0->f_11 = { -3455.578f, -2264.7f, 4.7142f };
			break;
		case 6:
			func_219(uParam0, iParam1);
			uParam0->f_5 = 1968802033;
			uParam0->f_11 = { -3581.218f, -3650.89f, -12.8679f };
			break;
		case 7:
			func_219(uParam0, iParam1);
			uParam0->f_5 = -2098551789;
			uParam0->f_11 = { -5254.539f, -4050.37f, -3.6288f };
			break;
	}
}

void func_109(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	switch (iParam1)
	{
		case 35:
			uParam0->f_8 = joaat("HIDEOUT");
			break;
		case 36:
			uParam0->f_8 = joaat("DYNAMIC_AMBUSH");
			break;
		case 37:
			uParam0->f_8 = joaat("DYNAMIC_RESCUE_PED_MULTIPLE");
			break;
		case 38:
			uParam0->f_8 = joaat("DYNAMIC_ESCORT");
			break;
		case 39:
			uParam0->f_8 = joaat("DYNAMIC_CAMPSITE_DEFEND");
			break;
		case 40:
			uParam0->f_8 = joaat("MOONSHINE_DYNAMIC_SABOTAGE");
			break;
		case 41:
			uParam0->f_8 = joaat("MOONSHINE_DYNAMIC_DESTROY");
			break;
		case 42:
			uParam0->f_8 = joaat("MOONSHINE_DYNAMIC_ROADBLOCK");
			break;
		case 43:
			uParam0->f_8 = 362795228;
			break;
	}
	iVar0 = func_220(iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	if ((iParam1 == 41 || iParam1 == 42) || iParam1 == 40)
	{
		uParam0->f_7 = 1;
	}
	else if (iParam1 == 43)
	{
		uParam0->f_7 = 2;
	}
	*uParam0 = func_221(iVar0);
	uParam0->f_1 = 0;
	uParam0->f_6 = 2;
	func_205(uParam0, 32);
	if (iParam2 != -1)
	{
		uParam0->f_9 = func_223(func_222(iVar0), iParam2);
		uParam0->f_15[0] = func_224(func_222(iVar0), iParam2);
		uParam0->f_5 = func_225(iVar0, iParam2);
		uParam0->f_11 = { func_226(iVar0, iParam2) };
	}
}

int func_110(int iParam0)
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

int func_111(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = (iParam2 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if ((*uParam1)[iVar2 /*3*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if ((*uParam1)[iVar2 /*3*/] < iParam0)
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

struct<2> func_112()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_113()
{
	int iVar0;
	int iVar1;

	NETWORK::RESERVE_NETWORK_MISSION_PEDS(3);
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			Local_82[iVar1 /*27*/].f_4.f_2[iVar0] = -1f;
			iVar0++;
		}
		iVar1++;
	}
}

void func_114()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 5)
		{
			if (func_177(iVar1, iVar2))
			{
				Jump @49; //curOff = 37
			}
			else
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(iVar0);
}

void func_115()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_227(&iVar2);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_229(func_180(iVar0), func_228(func_180(iVar0)));
		Local_947.f_578[iVar0 /*39*/] = func_228(func_180(iVar0));
		if (bVar3)
		{
			func_122(&(Local_82[iVar2 /*27*/].f_24.f_1), iVar0, 3);
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 32)
			{
				func_122(&(Local_82[iVar1 /*27*/].f_24.f_1), iVar0, 3);
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_116()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	func_230(&(Local_947.f_406), &(Local_947.f_406.f_32));
	bVar2 = true;
	if (!func_227(&iVar1))
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
			Local_82[iVar1 /*27*/].f_10.f_9[iVar0] = 0;
		}
		iVar0++;
	}
	func_231(&(Local_947.f_406.f_78), 8, -1);
	if (bVar2)
	{
		func_231(&(Local_82[iVar1 /*27*/].f_10), 8, -1);
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 32)
		{
			func_231(&(Local_82[iVar3 /*27*/].f_10), 8, -1);
			iVar3++;
		}
	}
}

void func_117()
{
}

void func_118(var uParam0)
{
	func_232(uParam0, 0);
	func_233(uParam0, 0);
	func_234(uParam0, 1);
	func_235(uParam0, 1);
	func_236(uParam0, 0);
	func_237(uParam0, 1);
	func_238(uParam0, 1, 1, 1);
}

void func_119()
{
	switch (func_239())
	{
		case 0:
			func_240(0, joaat("MP_RE_PHOTOGRAPHY_MALES_01"));
			func_241(0, -668350768, -1989345804);
			func_240(1, func_242(joaat("HORSE_CLASS_RIDING"), 1));
			break;
		case 1:
		case 2:
			if (func_243() == 2)
			{
				func_240(0, joaat("MP_RE_PHOTOGRAPHY_FEMALES_01"));
				func_241(0, -974314921, 1460279599);
			}
			else
			{
				func_240(0, joaat("MP_RE_PHOTOGRAPHY_FEMALES_02"));
				func_241(0, -1128853525, 1691628739);
			}
			func_240(1, joaat("A_C_DONKEY_01"));
			break;
		case 3:
			if (func_243() == 2)
			{
				func_240(0, joaat("MP_RE_PHOTOGRAPHY_FEMALES_01"));
				func_241(0, -974314921, 1460279599);
			}
			else
			{
				func_240(0, joaat("MP_RE_PHOTOGRAPHY_MALES_01"));
				func_241(0, -668350768, -1989345804);
			}
			func_240(1, func_242(joaat("HORSE_CLASS_RIDING"), 1));
			func_240(2, joaat("A_C_BEAR_01"));
			func_121(4194304);
			break;
		case 4:
			if (func_243() == 2)
			{
				func_240(0, joaat("MP_RE_PHOTOGRAPHY_FEMALES_01"));
				func_241(0, -974314921, 1460279599);
			}
			else
			{
				func_240(0, joaat("MP_RE_PHOTOGRAPHY_MALES_01"));
				func_241(0, -668350768, -1989345804);
			}
			func_240(1, func_242(joaat("HORSE_CLASS_RIDING"), 1));
			func_240(2, joaat("A_C_BUCK_01"));
			func_121(8388608);
			break;
		case 5:
			if (func_243() == 2)
			{
				func_240(0, joaat("MP_RE_PHOTOGRAPHY_FEMALES_01"));
				func_241(0, -974314921, 1460279599);
			}
			else
			{
				func_240(0, joaat("MP_RE_PHOTOGRAPHY_MALES_01"));
				func_241(0, -668350768, -1989345804);
			}
			func_240(1, func_242(joaat("HORSE_CLASS_RIDING"), 1));
			func_240(2, joaat("A_C_COUGAR_01"));
			func_121(16777216);
			break;
		case 6:
			if (func_243() == 2)
			{
				func_240(0, joaat("MP_RE_PHOTOGRAPHY_FEMALES_01"));
				func_241(0, -974314921, 1460279599);
			}
			else
			{
				func_240(0, joaat("MP_RE_PHOTOGRAPHY_MALES_01"));
				func_241(0, -668350768, -1989345804);
			}
			func_240(1, func_242(joaat("HORSE_CLASS_RIDING"), 1));
			func_240(2, joaat("A_C_COYOTE_01"));
			func_121(33554432);
			break;
		case 7:
			if (func_243() == 2)
			{
				func_240(0, joaat("MP_RE_PHOTOGRAPHY_FEMALES_01"));
				func_241(0, -974314921, 1460279599);
			}
			else
			{
				func_240(0, joaat("MP_RE_PHOTOGRAPHY_MALES_01"));
				func_241(0, -668350768, -1989345804);
			}
			func_240(1, func_242(joaat("HORSE_CLASS_RIDING"), 1));
			func_240(2, joaat("A_C_WOLF"));
			func_121(67108864);
			break;
		case 8:
			func_240(0, joaat("MP_RE_PHOTOGRAPHY_FEMALES_02"));
			func_241(0, -1128853525, 1691628739);
			func_240(1, func_242(joaat("HORSE_CLASS_RIDING"), 1));
			func_240(2, joaat("A_C_FISHLARGEMOUTHBASS_01_MS"));
			break;
		case 9:
		case 10:
		case 11:
			func_240(0, joaat("MP_RE_PHOTOGRAPHY_FEMALES_02"));
			func_241(0, -1128853525, 1691628739);
			func_240(1, func_242(joaat("HORSE_CLASS_RIDING"), 1));
			break;
		default:
			break;
	}
	switch (func_244())
	{
		case 0:
			func_245(0, 469.7219f, 59.7445f, 135.5631f, 76.14f, 1);
			func_245(1, 475.9219f, 54.46168f, 134.986f, 180f, 1);
			break;
		case 1:
			func_245(0, -409.2561f, 154.7292f, 41.8005f, 141.54f, 1);
			func_245(1, -405.0037f, 152.8974f, 41.46089f, -49.67f, 1);
			func_245(2, -416.5092f, 147.6119f, 40f, 0f, 1);
			break;
		case 2:
			func_245(0, -1928.554f, -1348.667f, 105.6326f, 18.99f, 1);
			func_245(1, -1935.187f, -1353.115f, 106.9843f, -51.4f, 1);
			if (func_190(4194304))
			{
				func_245(2, -1934.518f, -1307.44f, 106.2855f, -54.58f, 1);
			}
			else if (func_190(8388608))
			{
				func_245(2, -1934.518f, -1307.44f, 106.2855f, -54.58f, 1);
			}
			else if (func_190(16777216))
			{
				func_245(2, -1934.518f, -1307.44f, 106.2855f, -54.58f, 1);
			}
			else if (func_190(33554432))
			{
				func_245(2, -1934.518f, -1307.44f, 106.2855f, -54.58f, 1);
			}
			else if (func_190(67108864))
			{
				func_245(2, -1934.518f, -1307.44f, 106.2855f, -54.58f, 1);
			}
			break;
		case 3:
			func_245(0, -2003.943f, -2158.135f, 54.2301f, -134.78f, 1);
			func_245(1, -2005.132f, -2146.552f, 56.1274f, -45.27f, 1);
			break;
		case 4:
			func_245(0, -1281.655f, 110.9998f, 70.78191f, -64.75f, 1);
			func_245(1, -1276.128f, 104.356f, 70.63606f, -91.52f, 1);
			break;
		case 5:
			func_245(0, -2350.861f, -359.485f, 143.7474f, 98.86f, 1);
			func_245(1, -2354.687f, -347.2756f, 144.6231f, 91.52f, 1);
			if (func_190(4194304))
			{
				func_245(2, -2383.904f, -370.4672f, 141.1333f, 101.85f, 1);
			}
			else if (func_190(8388608))
			{
				func_245(2, -2383.904f, -370.4672f, 141.1333f, 101.85f, 1);
			}
			else if (func_190(16777216))
			{
				func_245(2, -2383.904f, -370.4672f, 141.1333f, 101.85f, 1);
			}
			else if (func_190(33554432))
			{
				func_245(2, -2383.904f, -370.4672f, 141.1333f, 101.85f, 1);
			}
			else if (func_190(67108864))
			{
				func_245(2, -2383.904f, -370.4672f, 141.1333f, 101.85f, 1);
			}
			else
			{
				func_245(2, -2405.882f, -382.2583f, 133.5046f, 0f, 1);
			}
			break;
		case 6:
			func_245(0, -1736.757f, 306.2781f, 108.1355f, -140.26f, 1);
			func_245(1, -1729.253f, 303.9286f, 107.3634f, -145.75f, 1);
			if (func_190(4194304))
			{
				func_245(2, -1725.758f, 280.9127f, 109.995f, 130.71f, 1);
			}
			else if (func_190(8388608))
			{
				func_245(2, -1725.758f, 280.9127f, 109.995f, 130.71f, 1);
			}
			else if (func_190(16777216))
			{
				func_245(2, -1725.758f, 280.9127f, 109.995f, 130.71f, 1);
			}
			else if (func_190(33554432))
			{
				func_245(2, -1725.758f, 280.9127f, 109.995f, 130.71f, 1);
			}
			else if (func_190(67108864))
			{
				func_245(2, -1725.758f, 280.9127f, 109.995f, 130.71f, 1);
			}
			break;
		case 7:
			func_245(0, -4964.499f, -3399.889f, 7.97322f, -124.92f, 1);
			func_245(1, -4965.817f, -3411.683f, 8.05074f, -162.81f, 1);
			if (func_190(4194304))
			{
				func_245(2, -4936.588f, -3408.675f, 10.46266f, -55.93f, 1);
			}
			else if (func_190(8388608))
			{
				func_245(2, -4936.588f, -3408.675f, 10.46266f, -55.93f, 1);
			}
			else if (func_190(16777216))
			{
				func_245(2, -4936.588f, -3408.675f, 10.46266f, -55.93f, 1);
			}
			else if (func_190(33554432))
			{
				func_245(2, -4936.588f, -3408.675f, 10.46266f, -55.93f, 1);
			}
			else if (func_190(67108864))
			{
				func_245(2, -4936.588f, -3408.675f, 10.46266f, -55.93f, 1);
			}
			break;
		case 8:
			func_245(0, -2192.805f, -2778.977f, 69.01174f, -158.91f, 1);
			func_245(1, -2199.156f, -2782.155f, 68.98679f, -162.81f, 1);
			break;
		case 9:
			func_245(0, -4603.166f, -2701.434f, -10.12116f, 3.38f, 1);
			func_245(1, -4595.557f, -2706.374f, -11.13519f, 5.26f, 1);
			if (func_190(4194304))
			{
				func_245(2, -4602.851f, -2658.896f, -4.431f, -53.91f, 1);
			}
			else if (func_190(8388608))
			{
				func_245(2, -4602.851f, -2658.896f, -4.431f, -53.91f, 1);
			}
			else if (func_190(16777216))
			{
				func_245(2, -4602.851f, -2658.896f, -4.431f, -53.91f, 1);
			}
			else if (func_190(33554432))
			{
				func_245(2, -4602.851f, -2658.896f, -4.431f, -53.91f, 1);
			}
			else if (func_190(67108864))
			{
				func_245(2, -4602.851f, -2658.896f, -4.431f, -53.91f, 1);
			}
			break;
		default:
			break;
	}
}

void func_120()
{
	switch (func_239())
	{
		case 8:
			func_246(0, joaat("W_MELEE_FISHINGPOLE02"));
			func_247(0, 0f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1, 0);
			func_246(2, joaat("P_CS_RAG01X"));
			func_247(2, 1f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1, 0);
			func_246(1, joaat("P_FISHBOBBER01X"));
			switch (func_244())
			{
				case 1:
					func_247(1, -12.7f, -0.05f, -0.35f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1, 0);
					break;
				case 5:
					func_247(1, -42.54f, -16.39f, -2.75f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1, 0);
					break;
				default:
					func_247(1, 0f, 1f, -1f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1, 0);
					break;
			}
			func_246(3, joaat("P_FISHHOOK02X"));
			func_247(3, -1f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1, 0);
			func_246(4, joaat("P_BAITCHEESE01X"));
			func_247(4, -1f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1, 0);
			break;
	}
}

void func_121(int iParam0)
{
	func_248(&(Local_947.f_19.f_10), iParam0);
}

void func_122(int* iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam2;
	iVar1 = iParam1 * 2;
	if (MISC::IS_BIT_SET(iVar0, 0))
	{
		MISC::SET_BIT(iParam0, iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, iVar1);
	}
	if (MISC::IS_BIT_SET(iVar0, 1))
	{
		MISC::SET_BIT(iParam0, iVar1 + 1);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, iVar1 + 1);
	}
}

bool func_123(int iParam0)
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

bool func_124(var uParam0, int iParam1)
{
	return func_249(uParam0->f_25, iParam1);
}

void func_125(int iParam0)
{
	if (Local_13 != iParam0)
	{
		Local_13 = iParam0;
	}
}

int func_126(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1134390[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

void func_127(int iParam0)
{
	if (!func_135(iParam0))
	{
		func_248(&(Local_13.f_1), iParam0);
	}
}

bool func_128(int iParam0)
{
	if (!func_187(iParam0))
	{
		return false;
	}
	return (func_250(iParam0) && Global_1131196[iParam0 /*27*/].f_18.f_1 != 0);
}

void func_129(int iParam0)
{
	if (Local_13.f_2 != iParam0)
	{
		Local_13.f_2 = iParam0;
	}
}

bool func_130(struct<31> Param0, var uParam31)
{
	int iVar0;
	var uVar1;

	if (VOLUME::_0xF6A8A652A6B186CD(Local_13.f_3.f_1))
	{
		return true;
	}
	if (func_251(Local_947.f_15))
	{
		*uParam31 = 1;
		return false;
	}
	if (!VOLUME::_0xA4A4359320345B34(Local_13.f_3))
	{
		if (VOLUME::_0x397769175A7DBB30(Local_947.f_15, Param0.f_10, 0, 0, 0))
		{
			VOLUME::_0xFA15C9A320E707B0();
			*uParam31 = 1;
			return false;
		}
		func_252(&uVar1, Param0);
		Local_13.f_3 = VOLUME::_0x183C0B6CFEFFCAE4(&uVar1);
		func_151(128);
	}
	else if (!func_134(128, 255))
	{
		Local_13.f_3.f_1 = func_253(Param0);
		if (VOLUME::_0xF6A8A652A6B186CD(Local_13.f_3.f_1))
		{
			return true;
		}
		return false;
	}
	iVar0 = VOLUME::_0xB33A604345F58202(Local_13.f_3);
	switch (iVar0)
	{
		case 3:
			Local_13.f_3.f_1 = VOLUME::_0x351D71B8B72B858B(Local_13.f_3);
			return true;
		case 4:
			Local_13.f_3 = 0;
			return false;
		default:
			break;
	}
	return false;
}

bool func_131(int iParam0)
{
	return iParam0 != 0;
}

void func_132(var uParam0)
{
	*uParam0 = Global_1296859.f_21;
}

int func_133(int iParam0)
{
	return (Global_1296859.f_21 - iParam0) * 1000;
}

bool func_134(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		if (!func_227(&iParam1))
		{
			return false;
		}
	}
	return func_186(Local_82[iParam1 /*27*/], iParam0);
}

bool func_135(int iParam0)
{
	return func_186(Local_13.f_1, iParam0);
}

bool func_136()
{
	return true;
}

void func_137()
{
}

bool func_138()
{
	return true;
}

bool func_139()
{
	bool bVar0;

	if (!func_254(&bVar0))
	{
		if (bVar0)
		{
			func_255();
		}
		return false;
	}
	if (!func_256(&bVar0))
	{
		if (bVar0)
		{
			func_255();
		}
		return false;
	}
	return true;
}

void func_140()
{
}

void func_141()
{
	if (!func_135(32) && func_257(32))
	{
		func_127(32);
	}
	if (!func_135(64) && func_257(64))
	{
		func_127(64);
	}
	if (!func_135(16) && func_258(16))
	{
		func_127(16);
	}
	if ((!func_135(2048) && func_257(2048)) && !func_257(4096))
	{
		func_127(2048);
	}
}

void func_142()
{
	bool bVar0;

	if (!bVar0 && func_135(16))
	{
		func_129(1);
		return;
	}
	if (func_135(2048) && !func_257(4096))
	{
		func_129(6);
		return;
	}
}

void func_143()
{
	func_259();
}

bool func_144()
{
	if (func_260())
	{
		return true;
	}
	func_261();
	func_262();
	func_263();
	switch (Local_13.f_7)
	{
		case 0:
			func_264();
			break;
		case 1:
			func_265();
			break;
		case 2:
			func_266();
			break;
		case 3:
			func_267();
			break;
		case 4:
			func_268();
			break;
		case 5:
			func_269();
			break;
		case 6:
			func_270();
			break;
		case 7:
			func_271();
			break;
		case 8:
			func_272();
			break;
		case 9:
			func_273();
			break;
		case 10:
			func_274();
			break;
		case 11:
			func_275();
			break;
		case 12:
			func_276();
			break;
		case 13:
			func_277();
			break;
		case 14:
			func_278();
			break;
		case 15:
			func_279();
			break;
		case 16:
			func_280();
			break;
		case 17:
			func_281();
			break;
		case 18:
			func_282();
			break;
		case 19:
			func_283();
			break;
		case 20:
			func_284();
			break;
		case 21:
			func_285();
			break;
		case 22:
			func_286();
			break;
		case 25:
			func_287();
			break;
		case 23:
			func_288();
			break;
		case 24:
			func_289();
			break;
		case 26:
			func_290();
			break;
		case 27:
			func_291();
			break;
		case 28:
			func_292();
			break;
		case 29:
			func_293();
			break;
		case 30:
			func_294();
			break;
		case 31:
			func_295();
			break;
		case 32:
			func_296();
			break;
		case 33:
			func_297();
			break;
		case 34:
			func_298();
			break;
		case 35:
			func_299();
			break;
		case 36:
			func_300();
			break;
		case 37:
			func_301();
			break;
		case 38:
			func_302();
			break;
		case 39:
			func_303();
			break;
		case 40:
			func_304();
			break;
		case 41:
			func_305();
			break;
		case 42:
			func_306();
			break;
		case 43:
			func_307();
			break;
		case 44:
			func_308();
			break;
		case 45:
			func_309();
			break;
		case 47:
			func_310();
			break;
		case 48:
			func_311();
			break;
		case 49:
			func_312();
			break;
		case 50:
			func_313();
			break;
		case 51:
			func_314();
			break;
		case 52:
			func_315();
			break;
		case 53:
			func_316();
			break;
		case 54:
			func_317();
			break;
		case 55:
			func_318();
			break;
		case 56:
			func_319();
			break;
		case 57:
			func_320();
			break;
		case 58:
			func_321();
			break;
		case 59:
			func_322();
			break;
		case 60:
			func_323();
			break;
		case 61:
			func_324();
			break;
		case 62:
			func_325();
			break;
		case 63:
			func_326();
			break;
		case 64:
			func_327();
			break;
		case 65:
			func_328();
			break;
		case 66:
			func_329();
			break;
		case 67:
			func_330();
			break;
		case 68:
			func_331();
			break;
		case 69:
			func_332();
			break;
		case 70:
			func_333();
			break;
		case 71:
			func_334();
			break;
		case 72:
			func_335();
			break;
		case 73:
			func_336();
			break;
		case 74:
			func_337();
			break;
	}
	switch (Local_13.f_7.f_1)
	{
		case 0:
			func_338();
			break;
		case 1:
			func_339();
			break;
		case 2:
			func_340();
			break;
		case 3:
			func_341();
			break;
		case 4:
			func_342();
			break;
		case 5:
			func_343();
			break;
		case 6:
			func_344();
			break;
		case 7:
			func_345();
			break;
	}
	return false;
}

void func_145()
{
}

bool func_146()
{
	int iVar0;

	iVar0 = func_188(0);
	if (((!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0)) || func_346(iVar0, 518218985)) || func_346(iVar0, 242628503))
	{
		return true;
	}
	return false;
}

void func_147(int iParam0)
{
	if (func_69(iParam0))
	{
		func_347(&(Local_947.f_7), iParam0);
	}
}

int func_148(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_187(iParam0))
	{
		return 0;
	}
	iVar0 = func_348(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	Global_1134390[iVar1 /*83*/].f_70 = iParam0;
	Global_1134390[iVar1 /*83*/].f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_349(&(Global_1134390[iVar1 /*83*/].f_70.f_1), 1);
	}
	else
	{
		func_350(&(Global_1134390[iVar1 /*83*/].f_70.f_1), 1);
	}
	return 1;
}

void func_149(int iParam0)
{
	if (!func_69(iParam0))
	{
		func_248(&(Local_947.f_7), iParam0);
	}
}

void func_150(int iParam0)
{
	if (func_186(Local_82[NETWORK::PARTICIPANT_ID_TO_INT() /*27*/], iParam0))
	{
		func_347(&(Local_82[NETWORK::PARTICIPANT_ID_TO_INT() /*27*/]), iParam0);
	}
}

void func_151(int iParam0)
{
	if (!func_134(iParam0, 255))
	{
		func_248(&(Local_82[NETWORK::PARTICIPANT_ID_TO_INT() /*27*/]), iParam0);
	}
}

void func_152()
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
				func_351(iVar0);
				break;
			case -1315570756:
				func_352(iVar0);
				break;
			default:
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		func_353(iVar0);
		iVar0++;
	}
}

void func_153(int iParam0)
{
	if (Local_947.f_8 != iParam0)
	{
		Local_947.f_8 = iParam0;
	}
}

bool func_154()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	sVar0 = "OREPHT";
	sVar1 = "OREPAUD";
	switch (Local_947.f_19.f_11)
	{
		case 0:
			Local_947.f_19.f_11 = 1;
			break;
		case 1:
			if (HUD::_DOES_TEXT_DATABASE_EXIST(sVar0))
			{
				HUD::_TEXT_DATABASE_REQUEST(sVar0);
				if (HUD::_TEXT_DATABASE_HAS_LOADED(sVar0))
				{
					Local_947.f_19.f_11 = 2;
				}
				else
				{
					return false;
				}
			}
			else
			{
				Local_947.f_19.f_11 = 2;
			}
			if (HUD::_DOES_TEXT_DATABASE_EXIST(sVar1))
			{
				HUD::_TEXT_DATABASE_REQUEST(sVar1);
				if (HUD::_TEXT_DATABASE_HAS_LOADED(sVar1))
				{
					Local_947.f_19.f_11 = 2;
				}
				else
				{
					return false;
				}
			}
			else
			{
				Local_947.f_19.f_11 = 2;
			}
			break;
		case 2:
			iVar4 = 0;
			while (iVar4 <= 11)
			{
				STREAMING::REQUEST_ANIM_DICT(func_354(iVar4));
				if (!STREAMING::HAS_ANIM_DICT_LOADED(func_354(iVar4)))
				{
					return false;
				}
				else if (iVar4 == 11)
				{
					Local_947.f_19.f_11 = 3;
				}
				iVar4++;
			}
			break;
		case 3:
			switch (func_239())
			{
				case 8:
					if (func_357(func_355(0), &(Local_947.f_19.f_246), &(Local_13.f_7.f_26), 64, func_356(0)))
					{
						Local_947.f_19.f_11 = 6;
					}
					break;
				default:
					Local_947.f_19.f_11 = 6;
					break;
			}
			break;
		case 5:
			iVar2 = 0;
			while (iVar2 <= 4)
			{
				iVar3 = func_358(iVar2);
				if (iVar3 != 0)
				{
					if (!STREAMING::_REQUEST_SCENARIO_TYPE(iVar3, 15, 0, 0))
					{
						return false;
					}
					if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(iVar3, false))
					{
						return false;
					}
				}
				iVar2++;
			}
			func_359();
			Local_947.f_19.f_11 = 6;
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_155()
{
	bool bVar0;

	bVar0 = false;
	if (!func_360())
	{
		bVar0 = true;
	}
	if (!func_361())
	{
		bVar0 = true;
	}
	return !bVar0;
}

void func_156(var uParam0)
{
	*uParam0 = 0;
}

void func_157()
{
}

int func_158()
{
	return 1;
}

int func_159()
{
	bool bVar0;

	if (!func_362())
	{
		if (bVar0)
		{
		}
		return 0;
	}
	return 1;
}

int func_160(int iParam0)
{
	return (iParam0 - Global_1296859.f_21) * 1000;
}

void func_161()
{
	if (!func_69(1))
	{
		func_363(Local_947.f_9);
		func_149(1);
	}
}

void func_162()
{
	func_364();
	func_365();
}

void func_163()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		func_366(&iVar1, 0);
		func_367(iVar1);
		switch (func_239())
		{
			case 0:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				PED::_REQUEST_PED_EMOTIONAL_PRESET(iVar1, "DEFAULT_SHOCKED");
				if (func_243() == 2)
				{
					func_368(&(Local_947.f_19.f_53), iVar1, "RE005_FEMALE2", 0);
				}
				else
				{
					func_368(&(Local_947.f_19.f_53), iVar1, "RE005_MALE2", 0);
				}
				break;
			case 2:
			case 9:
				if (func_243() == 2)
				{
					func_368(&(Local_947.f_19.f_53), iVar1, "RE005_FEMALE2", 0);
					WEAPON::_GIVE_WEAPON_TO_PED_2(iVar1, joaat("WEAPON_REVOLVER_CATTLEMAN"), 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
				else
				{
					func_368(&(Local_947.f_19.f_53), iVar1, "RE005_FEMALE3", 0);
					WEAPON::_GIVE_WEAPON_TO_PED_2(iVar1, joaat("WEAPON_REVOLVER_CATTLEMAN"), 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
				break;
			case 1:
			case 10:
			case 11:
				if (func_243() == 2)
				{
					func_368(&(Local_947.f_19.f_53), iVar1, "RE005_FEMALE2", 0);
				}
				else
				{
					func_368(&(Local_947.f_19.f_53), iVar1, "RE005_FEMALE3", 0);
				}
				break;
			case 8:
				func_368(&(Local_947.f_19.f_53), iVar1, "RE005_FEMALE3", 0);
				if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_7.f_26))
					{
						Local_947.f_19.f_246 = NETWORK::_NET_TO_ANIM_SCENE(Local_13.f_7.f_26);
						if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_947.f_19.f_246))
						{
						}
					}
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_13.f_7.f_26))
				{
					func_369();
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_947.f_19.f_246, func_370(4), 0f, 0f, func_371(4), 2);
					ANIMSCENE::START_ANIM_SCENE(Local_947.f_19.f_246);
				}
				break;
			default:
				break;
		}
	}
	iVar2 = func_188(2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !PED::IS_PED_DEAD_OR_DYING(iVar2, true))
	{
		func_372(iVar2);
		func_373(2, 0);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
		{
			switch (func_239())
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
					if (func_190(134217728))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar2, Local_947.f_19.f_45);
					}
					iVar0 = func_358(4);
					if (iVar0 != 0)
					{
						TASK::_TASK_START_SCENARIO_IN_PLACE(iVar2, iVar0, 0, false, 0, -1f, false);
					}
					break;
			}
		}
	}
	iVar3 = func_188(1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !PED::IS_PED_DEAD_OR_DYING(iVar3, true))
	{
		func_374(&iVar3, 0);
		func_375(1, 3f);
	}
}

void func_164()
{
	func_376();
}

void func_165()
{
}

void func_166()
{
	float fVar0;

	if (func_251(Local_947.f_15))
	{
		return;
	}
	if (func_189())
	{
		return;
	}
	if (func_377(Local_947.f_1, 600))
	{
		fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), Local_947.f_15);
		if (fVar0 < 200f)
		{
			func_151(4096);
		}
		else if (fVar0 < 400f)
		{
			func_150(4096);
			func_151(2048);
		}
		else
		{
			func_150(4096);
			func_150(2048);
		}
	}
}

void func_167()
{
	func_378();
	func_379();
	func_380();
	func_381();
	func_382();
	func_383();
}

void func_168()
{
	if (func_384())
	{
		func_151(8);
	}
	else
	{
		func_150(8);
	}
}

void func_169()
{
	func_385(Local_13.f_7);
	func_386(Local_13.f_7.f_1);
	func_387();
	func_388();
	func_389();
	func_390();
	func_391(0, 0);
	func_392();
	func_393();
	func_394();
	switch (Local_947.f_19)
	{
		case 0:
			func_395();
			break;
		case 1:
			func_396();
			break;
		case 2:
			func_397();
			break;
		case 3:
			func_398();
			break;
		case 4:
			func_399();
			break;
		case 5:
			func_400();
			break;
		case 6:
			func_401();
			break;
		case 7:
			func_402();
			break;
		case 8:
			func_403();
			break;
		case 9:
			func_404();
			break;
		case 10:
			func_405();
			break;
		case 11:
			func_406();
			break;
		case 12:
			func_407();
			break;
		case 13:
			func_408();
			break;
		case 14:
			func_409();
			break;
		case 15:
			func_410();
			break;
		case 16:
			func_411();
			break;
		case 17:
			func_412();
			break;
		case 18:
			func_413();
			break;
		case 19:
			func_414();
			break;
		case 20:
			func_415();
			break;
		case 21:
			func_416();
			break;
		case 22:
			func_417();
			break;
		case 25:
			func_418();
			break;
		case 23:
			func_419();
			break;
		case 24:
			func_420();
			break;
		case 26:
			func_421();
			break;
		case 27:
			func_422();
			break;
		case 28:
			func_423();
			break;
		case 29:
			func_424();
			break;
		case 30:
			func_425();
			break;
		case 31:
			func_426();
			break;
		case 32:
			func_427();
			break;
		case 33:
			func_428();
			break;
		case 35:
			func_429();
			break;
		case 34:
			func_430();
			break;
		case 36:
			func_431();
			break;
		case 37:
			func_432();
			break;
		case 38:
			func_433();
			break;
		case 39:
			func_434();
			break;
		case 40:
			func_435();
			break;
		case 41:
			func_436();
			break;
		case 42:
			func_437();
			break;
		case 43:
			func_438();
			break;
		case 44:
			func_439();
			break;
		case 45:
			func_440();
			break;
		case 47:
			func_441();
			break;
		case 48:
			func_442();
			break;
		case 49:
			func_443();
			break;
		case 50:
			func_444();
			break;
		case 51:
			func_445();
			break;
		case 52:
			func_446();
			break;
		case 53:
			func_447();
			break;
		case 54:
			func_448();
			break;
		case 55:
			func_449();
			break;
		case 56:
			func_450();
			break;
		case 57:
			func_451();
			break;
		case 58:
			func_452();
			break;
		case 59:
			func_453();
			break;
		case 60:
			func_454();
			break;
		case 61:
			func_455();
			break;
		case 62:
			func_456();
			break;
		case 63:
			func_457();
			break;
		case 64:
			func_458();
			break;
		case 65:
			func_459();
			break;
		case 66:
			func_460();
			break;
		case 67:
			func_461();
			break;
		case 68:
			func_462();
			break;
		case 69:
			func_463();
			break;
		case 70:
			func_464();
			break;
		case 71:
			func_465();
			break;
		case 72:
			func_466();
			break;
		case 73:
			func_467();
			break;
		case 74:
			func_468();
			break;
	}
	switch (Local_947.f_19.f_1)
	{
		case 0:
			func_469();
			break;
		case 1:
			func_470();
			break;
		case 2:
			func_471();
			break;
		case 3:
			func_472();
			break;
		case 4:
			func_473();
			break;
		case 5:
			func_474();
			break;
		case 6:
			func_475();
			break;
		case 7:
			func_476();
			break;
	}
}

void func_170()
{
	if (!func_134(8, 255))
	{
		func_151(16);
	}
	else
	{
		func_150(16);
	}
}

void func_171()
{
	int iVar0;

	Local_947.f_6 = -1;
	Local_947.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_947.f_5 = (Local_947.f_5 || Local_82[iVar0 /*27*/]);
			Local_947.f_6 = (Local_947.f_6 && Local_82[iVar0 /*27*/]);
		}
		iVar0++;
	}
}

bool func_172()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			if (!func_477(1073741824 /* Float: 2f */, 255))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::GET_PED_SOURCE_OF_DEATH(iVar0));
				iVar2 = PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::PLAYER_ID());
				iVar3 = PED::GET_MOUNT(PLAYER::PLAYER_PED_ID());
				if ((iVar1 == PLAYER::PLAYER_PED_ID() || (ENTITY::DOES_ENTITY_EXIST(iVar2) && iVar1 == iVar2)) || (ENTITY::DOES_ENTITY_EXIST(iVar3) && iVar1 == iVar3))
				{
					if (!func_190(131072))
					{
						func_192(1);
					}
				}
				else if (!func_190(262144) && func_189())
				{
					func_191(7, Local_947.f_4);
				}
				func_478(1073741824 /* Float: 2f */);
			}
		}
		else if (func_189())
		{
			func_191(7, Local_947.f_4);
			func_478(1073741824 /* Float: 2f */);
		}
	}
	else if (func_189())
	{
		func_191(7, Local_947.f_4);
		func_478(1073741824 /* Float: 2f */);
	}
	func_479();
	func_193();
	func_194(0);
	func_195();
	func_196();
	func_197();
	if (VOLUME::_DOES_VOLUME_EXIST(Local_947.f_19.f_254))
	{
		VOLUME::_DELETE_VOLUME(Local_947.f_19.f_254);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_947.f_19.f_246))
	{
		if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_947.f_19.f_246))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_947.f_19.f_246);
		}
	}
	TASK::CLEAR_SEQUENCE_TASK(&(Local_947.f_19.f_164));
	return true;
}

void func_173()
{
	func_480();
}

void func_174(int iParam0)
{
	if (MAP::DOES_BLIP_EXIST(Local_947.f_274.f_7[iParam0 /*11*/].f_1))
	{
		MAP::REMOVE_BLIP(&(Local_947.f_274.f_7[iParam0 /*11*/].f_1));
	}
}

bool func_175(int iParam0, int iParam1)
{
	return func_186(Local_947.f_274.f_7[iParam0 /*11*/].f_2, iParam1);
}

bool func_176(int iParam0, int iParam1)
{
	return func_186(Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1, 1024);
}

bool func_177(int iParam0, int iParam1)
{
	return func_186(Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1, 8);
}

bool func_178(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_947.f_329[iParam0 /*76*/].f_4, iParam1);
}

void func_179(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(uParam0[iVar0 /*9*/])->f_7 = 0f;
		(uParam0[iVar0 /*9*/])->f_8 = 0f;
		iVar0++;
	}
}

int func_180(int iParam0)
{
	return iParam0;
}

void func_181(int iParam0, bool bParam1)
{
	int iVar0;

	func_481(iParam0, 8);
	if (!func_482(iParam0, 1))
	{
		return;
	}
	iVar0 = func_483(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!MISC::_0xE98D55C5983F2509(iVar0))
		{
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 130, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 297, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 315, false);
		}
	}
	func_484(iParam0, bParam1);
	func_481(iParam0, 1);
}

bool func_182(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1207784[iParam1 /*72*/][iParam0], iParam2);
}

void func_183(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	iVar0 = func_486(func_485(Param0));
	iVar1 = func_487(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_28() == 0)
	{
		Var2 = Global_265377.f_124517.f_71.f_17;
		func_488(Param0, &Var2);
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam4))
	{
		Var2.f_4 = iParam4;
		Var2.f_3 = iParam5;
	}
	else
	{
		Var2.f_4 = 255;
		Var2.f_3 = 0;
	}
	STATS::_0xD5910ECF81A2278C(iVar0, iVar1, iParam2, &Var2);
}

void func_184(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_489(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_490(iVar0);
}

void func_185(int iParam0, int iParam1)
{
	func_132(&(Global_1272030.f_3271[iParam0]));
	switch (iParam1)
	{
		case 0:
			Global_1272030.f_3275[iParam0] = func_491(iParam0);
			break;
		case 1:
			Global_1272030.f_3275[iParam0] = func_492(iParam0);
			break;
		case 2:
			Global_1272030.f_3275[iParam0] = func_493(iParam0);
			break;
	}
}

bool func_186(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_187(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

int func_188(int iParam0)
{
	return Local_947.f_274.f_7[iParam0 /*11*/];
}

bool func_189()
{
	return (func_135(32) || func_134(32, 255));
}

bool func_190(int iParam0)
{
	return func_186(Local_947.f_19.f_10, iParam0);
}

void func_191(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_494(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_495(iVar0, iParam0);
}

void func_192(bool bParam0)
{
	if (!func_190(131072))
	{
		if (!func_496(2, 255))
		{
			if (bParam0 || func_190(262144))
			{
				func_497(joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_MURDER"), 0, 0);
				func_121(131072);
				func_498(7, Local_947.f_4);
			}
		}
	}
}

void func_193()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_239() != 8)
	{
		return;
	}
	iVar0 = func_188(2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (func_499())
			{
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar0, Local_947.f_19.f_246) || !ANIMSCENE::_0xB89FCFF19DAFFF28(Local_947.f_19.f_246, func_500(2)))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_947.f_19.f_246, func_500(2), iVar0);
				}
			}
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar0))
			{
				ENTITY::DETACH_ENTITY(iVar0, true, true);
				PHYSICS::ACTIVATE_PHYSICS(iVar0);
			}
		}
	}
	iVar1 = func_501(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			if (func_499())
			{
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar1, Local_947.f_19.f_246) || !ANIMSCENE::_0xB89FCFF19DAFFF28(Local_947.f_19.f_246, func_502(0)))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_947.f_19.f_246, func_502(0), iVar1);
				}
			}
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar1))
			{
				ENTITY::DETACH_ENTITY(iVar1, true, true);
				PHYSICS::ACTIVATE_PHYSICS(iVar1);
			}
		}
	}
	iVar2 = func_501(1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
		{
			if (func_499())
			{
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar2, Local_947.f_19.f_246) || !ANIMSCENE::_0xB89FCFF19DAFFF28(Local_947.f_19.f_246, func_502(1)))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_947.f_19.f_246, func_502(1), iVar2);
				}
			}
		}
	}
}

void func_194(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		AUDIO::STOP_PED_SPEAKING(iVar0, false);
		if (func_503(8388608))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 6, false);
			func_504(8388608);
		}
		if (func_503(4194304))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 169, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 340, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 137, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 26, false);
			func_504(4194304);
		}
		if (!PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			iVar1 = func_188(1);
			iVar2 = 6;
			if (func_503(2))
			{
				iVar1 = PED::GET_MOUNT(iVar0);
				iVar2 = 3;
			}
			if (func_505(0))
			{
				iVar2 = 3;
			}
			if (bParam0)
			{
				TASK::CLEAR_PED_TASKS(iVar0, true, false);
			}
			if (bParam0 || func_506(iVar0, 518218985, 1, 0))
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true)) && func_507(0, 1) < 70f)
				{
					TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, func_508(0), iVar2, 0, -1f, -1, iVar1);
				}
				else
				{
					TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, func_508(0), iVar2, 0, -1f, -1, 0);
				}
			}
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
	}
	if (func_190(134217728))
	{
		PED::REMOVE_RELATIONSHIP_GROUP(Local_947.f_19.f_45);
		func_509(134217728);
	}
}

void func_195()
{
	int iVar0;

	iVar0 = PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::PLAYER_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		AITRANSPORT::_0x67F7CEAC2391E114(iVar0, 0);
	}
}

void func_196()
{
	int iVar0;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (iVar0 != 255)
	{
		if (func_477(8388608, iVar0))
		{
			PLAYER::SET_PLAYER_CONTROL(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()), true, 0, false);
			TASK::CLEAR_PED_TASKS(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID())), true, false);
			func_510(8388608);
		}
	}
}

void func_197()
{
	if (Local_947.f_19.f_247 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Local_947.f_19.f_247);
		Local_947.f_19.f_247 = 0;
	}
	if (Local_947.f_19.f_248 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Local_947.f_19.f_248);
		Local_947.f_19.f_248 = 0;
	}
	if (Local_947.f_19.f_249 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Local_947.f_19.f_249);
		Local_947.f_19.f_249 = 0;
	}
}

bool func_198(var uParam0)
{
	if (func_40(*uParam0))
	{
		return true;
	}
	if (uParam0->f_2 != 0)
	{
		if (uParam0->f_3 != -1)
		{
			return true;
		}
		if (uParam0->f_4 != -1)
		{
			return true;
		}
		if (uParam0->f_5 != -1)
		{
			return true;
		}
	}
	return false;
}

int func_199(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_511(iParam1);
	iVar1 = ((iVar0 + Global_1198046.f_3[iParam1]) - 1);
	if (Global_1198046.f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_512(iParam1)) - 1);
	}
	bVar2 = func_40(*uParam0);
	bVar3 = (uParam0->f_2 != 0 && uParam0->f_3 != -1);
	bVar4 = (uParam0->f_2 != 0 && uParam0->f_4 != -1);
	bVar5 = (uParam0->f_2 != 0 && uParam0->f_5 != -1);
	iVar6 = iVar0;
	while (iVar6 <= iVar1)
	{
		if (bVar2)
		{
			if (func_21(Global_1198046.f_231[iVar6 /*15*/].f_5, *uParam0))
			{
				return iVar6;
			}
		}
		if (bVar3)
		{
			if (Global_1198046.f_231[iVar6 /*15*/].f_5.f_2 == uParam0->f_2 && Global_1198046.f_231[iVar6 /*15*/].f_5.f_3 == uParam0->f_3)
			{
				return iVar6;
			}
		}
		if (bVar4)
		{
			if (Global_1198046.f_231[iVar6 /*15*/].f_5.f_2 == uParam0->f_2 && Global_1198046.f_231[iVar6 /*15*/].f_5.f_4 == uParam0->f_4)
			{
				return iVar6;
			}
		}
		if (bVar5)
		{
			if (Global_1198046.f_231[iVar6 /*15*/].f_5.f_2 == uParam0->f_2 && Global_1198046.f_231[iVar6 /*15*/].f_5.f_5 == uParam0->f_5)
			{
				return iVar6;
			}
		}
		iVar6++;
	}
	return -1;
}

void func_200(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_513(uParam0);
			break;
		case 1:
			func_513(uParam0);
			break;
		case 2:
			func_513(uParam0);
			break;
		case 3:
			func_514(uParam0);
			break;
		case 4:
			func_513(uParam0);
			break;
		case 5:
			func_513(uParam0);
			break;
		case 6:
			func_514(uParam0);
			break;
		case 7:
			func_514(uParam0);
			break;
		case 8:
			func_514(uParam0);
			break;
		case 9:
			func_513(uParam0);
			break;
		default:
			func_202(uParam0);
			func_201(uParam0);
			break;
	}
}

void func_201(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_2 - 1))
	{
		func_204(uParam0, iVar0);
		iVar0++;
	}
}

void func_202(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_1 - 1))
	{
		func_203(uParam0, iVar0);
		iVar0++;
	}
}

void func_203(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_3), iParam1);
}

void func_204(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_4), iParam1);
}

void func_205(var uParam0, int iParam1)
{
	func_349(&(uParam0->f_25), iParam1);
}

void func_206(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_204(uParam0, 0);
			break;
		case 1:
		case 2:
			func_204(uParam0, 1);
			func_204(uParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_204(uParam0, 0);
			func_204(uParam0, 2);
			break;
		case 8:
			func_204(uParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_204(uParam0, 1);
			break;
		default:
			func_201(uParam0);
			break;
	}
}

void func_207(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_515(uParam0);
			break;
		case 1:
			func_516(uParam0);
			break;
		case 2:
			func_517(uParam0);
			break;
		case 3:
			func_518(uParam0);
			break;
		default:
			func_202(uParam0);
			func_201(uParam0);
			break;
	}
}

Vector3 func_208(int iParam0)
{
	if (!func_187(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return Global_1131196[iParam0 /*27*/].f_20;
}

void func_209(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_519(uParam0);
			break;
		case 1:
		case 2:
			func_520(uParam0);
			break;
		case 3:
		case 4:
			func_521(uParam0);
			break;
		default:
			func_201(uParam0);
			break;
	}
	func_202(uParam0);
}

void func_210(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_204(uParam0, 0);
			func_204(uParam0, 2);
			break;
		case 1:
			func_204(uParam0, 1);
			func_204(uParam0, 3);
			break;
		default:
			func_202(uParam0);
			func_201(uParam0);
			break;
	}
}

void func_211(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_203(uParam0, 2);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_203(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_203(uParam0, 0);
			break;
		default:
			func_203(uParam0, 0);
			break;
	}
	func_201(uParam0);
}

void func_212(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_203(uParam0, 0);
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			func_203(uParam0, 1);
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			func_203(uParam0, 2);
			break;
		default:
			func_202(uParam0);
			break;
	}
	func_201(uParam0);
}

void func_213(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_203(uParam0, 0);
			func_204(uParam0, 1);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_203(uParam0, 1);
			func_204(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_203(uParam0, 2);
			func_204(uParam0, 1);
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_203(uParam0, 3);
			func_204(uParam0, 0);
			break;
	}
}

void func_214(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_203(uParam0, 0);
			func_204(uParam0, 0);
			break;
		case 2:
			func_203(uParam0, 1);
			func_204(uParam0, 0);
			break;
		case 3:
		case 4:
			func_203(uParam0, 2);
			func_204(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_203(uParam0, 3);
			func_204(uParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_203(uParam0, 4);
			func_204(uParam0, 1);
			break;
	}
}

void func_215(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_203(uParam0, 3);
			break;
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
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			break;
		default:
			func_202(uParam0);
			break;
	}
	func_201(uParam0);
}

void func_216(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_203(uParam0, 3);
			break;
		case 10:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 20:
		case 21:
		case 24:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			break;
		case 11:
		case 17:
		case 18:
		case 19:
		case 22:
		case 23:
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			break;
		default:
			func_202(uParam0);
			break;
	}
	func_201(uParam0);
}

void func_217(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_204(uParam0, 0);
			func_203(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_204(uParam0, 1);
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			func_203(uParam0, 2);
			break;
		default:
			func_204(uParam0, 0);
			func_203(uParam0, 0);
			break;
	}
}

void func_218(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_204(uParam0, 0);
			func_203(uParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_204(uParam0, 1);
			func_203(uParam0, 0);
			func_203(uParam0, 1);
			break;
		default:
			func_204(uParam0, 0);
			func_203(uParam0, 0);
			break;
	}
}

void func_219(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_201(uParam0);
			func_202(uParam0);
			break;
		default:
			func_201(uParam0);
			func_202(uParam0);
			break;
	}
}

int func_220(int iParam0)
{
	return Global_1272030.f_3348[iParam0];
}

int func_221(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return Global_1257541[iParam0 /*5*/].f_3;
}

int func_222(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0 /*5*/];
}

var func_223(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_522(&Var1, iParam0) && func_523(&Var1, iParam1))
	{
		func_524(Var1, 1099008783, &uVar0, 0);
	}
	return uVar0;
}

int func_224(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_522(&Var1, iParam0) && func_523(&Var1, iParam1))
	{
		func_524(Var1, -1052341598, &iVar0, 0);
	}
	return iVar0;
}

int func_225(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_525(iParam0, iParam1);
	return Global_1257541.f_451[iVar0 /*7*/];
}

Vector3 func_226(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_525(iParam0, iParam1);
	return Global_1257541.f_451[iVar0 /*7*/].f_3;
}

bool func_227(int iParam0)
{
	*iParam0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (!func_526(*iParam0, 1))
	{
		*iParam0 = 255;
		return false;
	}
	return true;
}

int func_228(int iParam0)
{
	return Local_13.f_58[iParam0 /*3*/];
}

void func_229(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		return;
	}
	if (!func_527(255))
	{
		func_373(iParam0, 0);
		return;
	}
	switch (func_528(iParam1))
	{
		case 0:
			func_373(iParam0, 0);
			break;
		case 1:
			func_373(iParam0, 1);
			func_529(iParam0, 0, "GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 1, 0, -1, 0);
			func_529(iParam0, 1, "GREET_NEG", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 1, 0, -1, 0);
			break;
		case 2:
			func_373(iParam0, 1);
			if (func_530(2, 255))
			{
				func_529(iParam0, 0, "GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 1, 0, -1, 1);
				func_529(iParam0, 1, "GREET_NEG", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 1, 0, -1, 1);
			}
			else
			{
				func_529(iParam0, 0, "GREET_POS", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 1, 0, -1, 0);
				func_529(iParam0, 1, "GREET_NEG", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 1, 0, -1, 0);
			}
			break;
		case 3:
			func_373(iParam0, 1);
			func_529(iParam0, 0, "NB_PHOTOGRAPHY_ILO_POSE", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 1, 0, -1, 0);
			func_529(iParam0, 1, "NB_PHOTOGRAPHY_ILO_STEP", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 1, 0, -1, 0);
			break;
		case 4:
			func_373(iParam0, 1);
			func_531(iParam0, 0, 0, 1);
			func_531(iParam0, 1, 0, 1);
			break;
		case 5:
			func_373(iParam0, 0);
			func_532(iParam0, 0);
			func_532(iParam0, 1);
			break;
	}
}

void func_230(var uParam0, var uParam1)
{
	func_118(uParam0);
	func_533(uParam0);
	func_534(uParam0, 1);
	func_535(uParam1);
	func_533(uParam1);
	func_536(uParam1);
	func_537(uParam1, 1);
	func_538(uParam1, 1);
	func_539(uParam0, 2000);
}

int func_231(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;

	if (!func_540(iParam1, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_541(Var0.f_2, 10);
		iVar5 = iVar4 ^ -1;
		(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] && iVar5);
		if (iParam2 != 0)
		{
			(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] || (BUILTIN::SHIFT_LEFT(iParam2, Var0.f_2) && iVar4));
		}
		return 1;
	}
	iVar4 = func_541(Var0.f_2, (32 - Var0.f_2));
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0] = ((*uParam0)[Var0] && iVar5);
	(*uParam0)[Var0] = ((*uParam0)[Var0] || (BUILTIN::SHIFT_LEFT(iParam2, Var0.f_2) && iVar4));
	iVar4 = func_541(0, Var0.f_3 + 1);
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] && iVar5);
	(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] || (BUILTIN::SHIFT_RIGHT(iParam2, (32 - Var0.f_3)) && iVar4));
	return 1;
}

void func_232(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_347(&(uParam0->f_2), 16384);
	}
	else
	{
		func_248(&(uParam0->f_2), 16384);
	}
}

void func_233(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_347(&(uParam0->f_2), 2048);
	}
	else
	{
		func_248(&(uParam0->f_2), 2048);
	}
}

void func_234(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_347(&(uParam0->f_2), 256);
	}
	else
	{
		func_248(&(uParam0->f_2), 256);
	}
}

void func_235(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_248(uParam0, 16);
	}
	else
	{
		func_347(uParam0, 67108864);
		func_347(uParam0, 16);
	}
}

void func_236(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_347(&(uParam0->f_2), 128);
	}
	else
	{
		func_248(&(uParam0->f_2), 128);
	}
}

void func_237(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_248(uParam0, 256);
	}
	else
	{
		func_347(uParam0, 256);
	}
}

void func_238(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_248(uParam0, 268435456);
	}
	else
	{
		func_347(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_248(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_347(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_248(uParam0, 536870912);
	}
	else
	{
		func_347(uParam0, 536870912);
	}
}

int func_239()
{
	return func_542();
}

void func_240(int iParam0, int iParam1)
{
	Local_947.f_274.f_7[iParam0 /*11*/].f_3 = iParam1;
}

void func_241(int iParam0, int iParam1, int iParam2)
{
	switch (func_244())
	{
		case 4:
		case 5:
		case 6:
			func_543(iParam0, iParam1);
			break;
		default:
			func_543(iParam0, iParam2);
			break;
	}
}

int func_242(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case joaat("HORSE_CLASS_RIDING"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_RIDING"), 0, joaat("SPECIES_HORSE"), bParam1, false, 0f, 0f, 0f);
		case joaat("HORSE_CLASS_DRAFT"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_DRAFT"), 0, joaat("SPECIES_HORSE"), bParam1, false, 0f, 0f, 0f);
		case joaat("HORSE_CLASS_RACE"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_RACE"), 0, joaat("SPECIES_HORSE"), bParam1, false, 0f, 0f, 0f);
		case joaat("HORSE_CLASS_WAR"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_WAR"), 0, joaat("SPECIES_HORSE"), bParam1, false, 0f, 0f, 0f);
		case joaat("HORSE_CLASS_WORK"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_WORK"), 0, joaat("SPECIES_HORSE"), bParam1, false, 0f, 0f, 0f);
		default:
			break;
	}
	return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("HORSE_TYPE_RIDING"), 0, joaat("SPECIES_HORSE"), true, false, 0f, 0f, 0f);
}

int func_243()
{
	switch (Local_947.f_4)
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

int func_244()
{
	return Local_947.f_2;
}

void func_245(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	Local_947.f_274.f_7[iParam0 /*11*/].f_6 = { vParam1 };
	Local_947.f_274.f_7[iParam0 /*11*/].f_5 = fParam4;
	if (bParam5)
	{
		func_248(&(Local_947.f_274.f_7[iParam0 /*11*/].f_2), 2);
	}
	else
	{
		func_347(&(Local_947.f_274.f_7[iParam0 /*11*/].f_2), 2);
	}
}

void func_246(int iParam0, int iParam1)
{
	func_544(0, iParam0, iParam1);
}

void func_247(int iParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	if (bParam6)
	{
		func_545(iParam0);
	}
	func_546(0, iParam0, vParam1, fParam4, iParam5);
}

void func_248(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_249(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_250(int iParam0)
{
	int iVar0;

	if (!func_187(iParam0))
	{
		return false;
	}
	iVar0 = func_547(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

bool func_251(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_252(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -653740250;
	uParam0->f_7 = Param1.f_5;
}

var func_253(struct<31> Param0)
{
	var uVar0;

	func_252(&uVar0, Param0);
	return VOLUME::_0x77A6E4AD0C496F81(&uVar0);
}

bool func_254(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		*uParam0 = 1;
		return false;
	}
	bVar0 = false;
	bVar1 = false;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 3)
	{
		if (func_175(iVar2, 4))
		{
		}
		else
		{
			if (!bVar0)
			{
				if (!func_548(iVar2, uParam0, &bVar1))
				{
					if (*uParam0)
					{
						return false;
					}
					if (bVar1)
					{
						bVar0 = true;
					}
				}
			}
			if (func_549(iVar2))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_38[iVar2]))
				{
					if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_38[iVar2]))
					{
						NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_38[iVar2]);
					}
				}
			}
		}
		iVar2++;
	}
	if (bVar0)
	{
		return false;
	}
	return true;
}

void func_255()
{
	func_129(2);
}

bool func_256(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;
	float fVar14;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	vector3 vVar27;

	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		*bParam0 = 1;
		return false;
	}
	bVar3 = false;
	vVar4 = { 0f, 0f, 0f };
	vVar7 = { 0f, 0f, 0f };
	vVar10 = { Local_947.f_15 };
	iVar13 = 0;
	fVar14 = (1f / 90f);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			iVar2 = func_550(iVar0, iVar1);
			if (func_177(iVar0, iVar1))
			{
			}
			else if (func_176(iVar0, iVar1))
			{
			}
			else if (MISC::IS_BIT_SET(Local_947.f_329[iVar0 /*76*/].f_2, iVar1))
			{
				if (func_551(iVar0, iVar1))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar0 /*6*/][iVar1]))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_42[iVar0 /*6*/][iVar1]))
						{
							NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_42[iVar0 /*6*/][iVar1]);
						}
					}
				}
			}
			else
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar0 /*6*/][iVar1]))
				{
					if (!func_552(iVar0, iVar1))
					{
						vVar7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar10, 0f, func_553(iVar0, iVar1)) };
					}
					else
					{
						vVar7 = { func_553(iVar0, iVar1) };
					}
					if (func_554(iVar0, iVar1))
					{
						if (!func_555(&vVar7, 1, 10, 0, 0))
						{
							bVar3 = true;
						}
						else
						{
							if (func_556(iVar0, iVar1))
							{
								iVar13 = PED::_0x9641A9A20310F6B8(Local_947.f_329[iVar0 /*76*/].f_5[iVar1 /*14*/].f_3, vVar7, 0f, 0f, 0f, 1, 0, 0);
								if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
								{
									*bParam0 = 1;
								}
								else
								{
									Local_13.f_42[iVar0 /*6*/][iVar1] = NETWORK::OBJ_TO_NET(iVar13);
									if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar0 /*6*/][iVar1]))
									{
										*bParam0 = 1;
										return false;
									}
								}
							}
							else if (func_557(iVar0, iVar1))
							{
								iVar13 = WEAPON::_CREATE_WEAPON_OBJECT(Local_947.f_329[iVar0 /*76*/].f_5[iVar1 /*14*/].f_5, Local_947.f_329[iVar0 /*76*/].f_5[iVar1 /*14*/].f_4, func_553(iVar0, iVar1), true, 1f);
								if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
								{
									*bParam0 = 1;
								}
								else
								{
									Local_13.f_42[iVar0 /*6*/][iVar1] = NETWORK::OBJ_TO_NET(iVar13);
									if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar0 /*6*/][iVar1]))
									{
										*bParam0 = 1;
										return false;
									}
									else
									{
										NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_13.f_42[iVar0 /*6*/][iVar1], true);
									}
								}
							}
							else if (iVar2 == 0)
							{
								Jump @1091; //curOff = 577
							}
							else if (!func_558(&(Local_13.f_42[iVar0 /*6*/][iVar1]), iVar2, vVar7, 1, 0))
							{
								*bParam0 = 1;
								return false;
							}
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar0 /*6*/][iVar1]))
							{
								iVar13 = NETWORK::NET_TO_OBJ(Local_13.f_42[iVar0 /*6*/][iVar1]);
								if (func_551(iVar0, iVar1))
								{
									if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar0 /*6*/][iVar1]))
									{
										if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_42[iVar0 /*6*/][iVar1]))
										{
											NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_42[iVar0 /*6*/][iVar1]);
										}
									}
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
								{
									*bParam0 = 1;
									return false;
								}
								MISC::SET_BIT(&(Local_947.f_329[iVar0 /*76*/].f_2), iVar1);
								if (func_559(iVar0, iVar1))
								{
									TASK::_0x78B4567E18B54480(iVar13);
									GRAPHICS::_SET_PICKUP_OBJECT_GLOW_ENABLED(iVar13, true);
								}
								if (func_560(iVar0, iVar1))
								{
									ENTITY::_0xEBDC12861D079ABA(iVar13, 1);
								}
								if (func_561(iVar0, iVar1))
								{
									ENTITY::SET_ENTITY_VISIBLE(iVar13, false);
								}
								else
								{
									ENTITY::_0xA91E6CF94404E8C9(iVar13);
								}
								if (func_554(iVar0, iVar1))
								{
									ENTITY::_0x9587913B9E772D29(iVar13, 0);
								}
								vVar4 = { func_562(iVar0, iVar1) };
								if (!func_251(vVar4))
								{
									if (vVar4.x == 0f && vVar4.y == 0f)
									{
										if (vVar4.z != 0f)
										{
											ENTITY::SET_ENTITY_HEADING(iVar13, vVar4.z);
										}
									}
									else
									{
										ENTITY::SET_ENTITY_ROTATION(iVar13, vVar4, 2, true);
										if (!func_563(iVar0, iVar1, 32))
										{
											MISC::GET_MODEL_DIMENSIONS(iVar2, &vVar15, &vVar18);
											vVar21 = { vVar18 - vVar15 * Vector(0.5f, 0.5f, 0.5f) };
											vVar24 = { Vector(fVar14, fVar14, fVar14) * Vector(0f, MISC::ABSF(func_564(vVar4.x)), MISC::ABSF(func_564(vVar4.y))) };
											vVar27 = { func_565(vVar24) * vVar21 };
											ENTITY::SET_ENTITY_COORDS(iVar13, vVar7 + Vector((((vVar27.x + vVar27.y) + vVar27.z) / 3f), 0f, 0f), true, false, true, true);
										}
									}
								}
								if (func_566(iVar0, iVar1))
								{
									func_567(iVar0, iVar1, 1);
								}
								if (func_568(iVar0, iVar1))
								{
									ENTITY::SET_ENTITY_INVINCIBLE(iVar13, true);
								}
								bVar3 = true;
							}
							else
							{
								iVar1++;
							}
							iVar0++;
							if (bVar3)
							{
								return false;
							}
							return true;
						}
					}
				}
			}
		}
	}
}

bool func_257(int iParam0)
{
	return func_186(Local_947.f_5, iParam0);
}

bool func_258(int iParam0)
{
	return func_186(Local_947.f_6, iParam0);
}

void func_259()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_569(&(Local_13.f_58[iVar0 /*3*/]), func_180(iVar0));
		iVar0++;
	}
}

bool func_260()
{
	int iVar0;
	int iVar1;

	if (Local_13.f_7 == 75)
	{
		return true;
	}
	iVar0 = func_188(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (func_570())
		{
			iVar1 = func_188(2);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_261()
{
	if (func_496(1024, 255))
	{
		return;
	}
	if (func_571())
	{
		switch (func_239())
		{
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				if (((!func_503(64) && !func_503(512)) && func_505(2)) && !func_572())
				{
					func_573(512);
					func_574(23);
				}
				if (func_505(0))
				{
					func_575(1, 0, 0);
					func_576();
					func_573(1024);
					func_574(74);
				}
				break;
			case 2:
				if (func_503(2))
				{
					func_573(1024);
				}
				else
				{
					func_575(1, 0, 0);
					func_576();
					func_573(1024);
					func_574(74);
				}
				break;
			default:
				func_575(1, 0, 0);
				func_576();
				func_573(1024);
				func_574(74);
				break;
		}
	}
}

void func_262()
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

	iVar0 = func_188(0);
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
			if (!func_527(iVar7))
			{
			}
			else if (func_530(2, iVar7))
			{
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !PED::IS_PED_DEAD_OR_DYING(iVar3, true))
			{
				fVar4 = func_577(0, iVar7, 1);
				if (fVar4 != 0f)
				{
					if (fVar4 < fVar5)
					{
						fVar5 = fVar4;
						Local_13.f_7.f_20 = iVar2;
					}
					if ((PED::IS_PED_ON_MOUNT(iVar3) && fVar4 < 50f) && (fVar4 < fVar6 || !NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_23)))
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
	if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20))
	{
	}
	if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_23))
	{
	}
}

void func_263()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;

	iVar1 = 255;
	if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_21))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_7.f_21))
		{
			iVar5 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_13.f_7.f_21);
			if (func_526(iVar5, 1))
			{
				if (func_527(iVar5))
				{
					iVar2 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_21);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !PED::IS_PED_DEAD_OR_DYING(iVar2, true))
					{
						iVar4 = joaat("WEAPON_UNARMED");
						if (WEAPON::GET_CURRENT_PED_WEAPON(iVar2, &iVar4, false, 0, false))
						{
							if (func_578(iVar4))
							{
								func_579(16);
								return;
							}
						}
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
			if (func_527(iVar3))
			{
				iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
				iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !PED::IS_PED_DEAD_OR_DYING(iVar2, true))
				{
					iVar4 = joaat("WEAPON_UNARMED");
					if (WEAPON::GET_CURRENT_PED_WEAPON(iVar2, &iVar4, false, 0, false))
					{
						if (func_578(iVar4))
						{
							iVar6 = func_188(0);
							fVar7 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar6, true, false), ENTITY::GET_ENTITY_COORDS(iVar2, true, false));
							if (fVar7 < 30f)
							{
								func_579(16);
								Local_13.f_7.f_21 = iVar1;
								return;
							}
						}
					}
				}
			}
		}
		iVar3++;
	}
	func_580(16);
}

void func_264()
{
	if (func_581(0, 0))
	{
		switch (func_239())
		{
			case 8:
				func_574(48);
				break;
			default:
				func_574(1);
				break;
		}
	}
}

void func_265()
{
	if (func_189())
	{
		func_574(2);
		return;
	}
	if (func_582(536870912))
	{
		func_574(71);
		return;
	}
	if (func_583(0, 15f, 0, 1) < 1)
	{
		func_584(0, 65f, 5000, 0, 0, 1, 2, -1, -1, -1, 1, -1);
	}
	else if (func_583(0, 35f, 0, 1) < 2)
	{
		func_584(0, 65f, 10000, 0, 176, 177, 178, 179, -1, -1, 0, -1);
	}
}

void func_266()
{
	int iVar0;

	func_585();
	if (func_503(64))
	{
		func_574(25);
		return;
	}
	iVar0 = func_188(0);
	if ((func_346(iVar0, -875674219) || func_346(iVar0, -1162159953)) || !func_346(iVar0, 993674639))
	{
		func_574(3);
	}
}

void func_267()
{
	int iVar0;
	var uVar1;
	int iVar2;
	vector3 vVar3;

	func_585();
	if (func_586())
	{
		func_579(512);
		func_574(72);
		return;
	}
	if (func_503(64))
	{
		func_574(25);
		return;
	}
	iVar0 = func_188(0);
	if ((func_587(3) || func_587(5)) || func_587(4))
	{
		func_588(&(Local_13.f_7.f_12));
		switch (func_239())
		{
			case 1:
			case 2:
				vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
				iVar2 = func_589(&uVar1, vVar3, 25f, 0, 1);
				if (iVar2 > 0)
				{
					func_574(5);
				}
				else
				{
					func_574(4);
				}
				break;
			default:
				func_574(5);
				break;
		}
	}
}

void func_268()
{
	int iVar0;
	var uVar1;
	int iVar2;
	vector3 vVar3;

	func_585();
	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
		iVar2 = func_589(&uVar1, vVar3, 25f, 0, 1);
		if (iVar2 > 0)
		{
			if (!func_590(1))
			{
				func_591(0, 0, 108, 0);
			}
		}
		else
		{
			func_584(0, 65f, 5000, 0, 104, 105, 106, 107, -1, -1, 1, -1);
		}
		if (func_587(107))
		{
			func_574(9);
		}
		else if (func_587(108))
		{
			func_574(5);
		}
	}
}

void func_269()
{
	int iVar0;
	int iVar1;

	func_585();
	if (func_586())
	{
		func_579(512);
		func_574(72);
		return;
	}
	if (func_503(64))
	{
		func_574(25);
		return;
	}
	iVar0 = func_188(0);
	iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!AUDIO::_0x54B187F111D9C6F8(iVar0, 0))
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false)) < 10f)
			{
				func_588(&(Local_13.f_7.f_12));
				func_574(6);
			}
			else
			{
				func_584(0, 65f, 5000, 0, 3, 7, 8, -1, -1, -1, 0, -1);
			}
		}
	}
}

void func_270()
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	if (func_503(64))
	{
		func_574(25);
		return;
	}
	if (func_586())
	{
		func_579(512);
		func_574(71);
		return;
	}
	if (func_587(9))
	{
		if (func_228(0) != 1)
		{
			func_581(0, 1);
		}
	}
	if (func_582(1))
	{
		if (func_581(0, 0))
		{
			func_574(8);
		}
	}
	else if (func_582(2))
	{
		if (func_581(0, 2))
		{
			iVar4 = func_188(0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar4) && !PED::IS_PED_DEAD_OR_DYING(iVar4, true))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(iVar4, false, false) };
			}
			else
			{
				vVar0 = { Local_947.f_15 };
			}
			iVar3 = func_592(vVar0, 25f);
			if (func_593(2) > 1)
			{
				func_574(9);
			}
			else if (iVar3 > 2)
			{
				func_579(256);
				func_574(7);
			}
			else if (iVar3 > 1)
			{
				func_579(128);
				func_574(7);
			}
			else
			{
				func_574(9);
			}
		}
	}
}

void func_271()
{
	if (func_503(64))
	{
		func_574(25);
		return;
	}
	if (func_586())
	{
		func_579(512);
		func_574(71);
		return;
	}
	if (func_582(1))
	{
		if (func_581(0, 0))
		{
			func_574(8);
		}
	}
	else if (func_582(4) || func_593(2) > 1)
	{
		if (func_581(0, 0))
		{
			func_574(9);
		}
	}
}

void func_272()
{
	func_588(&(Local_13.f_7.f_12));
	if (func_593(2) > 0)
	{
		return;
	}
	switch (func_239())
	{
		case 0:
			func_574(10);
			break;
		case 1:
		case 2:
			func_574(31);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_574(10);
			break;
		case 9:
		case 10:
		case 11:
			func_574(62);
			break;
		default:
			func_574(31);
			break;
	}
}

void func_273()
{
	if (func_587(35))
	{
		switch (func_239())
		{
			case 0:
				func_574(21);
				break;
			case 1:
			case 2:
				func_574(41);
				break;
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				func_574(21);
				break;
			case 9:
			case 10:
			case 11:
				func_574(68);
				break;
			default:
				func_574(21);
				break;
		}
	}
	func_591(0, 0, 35, 0);
}

void func_274()
{
	if (func_503(64))
	{
		func_574(25);
		return;
	}
	if (func_587(34))
	{
		if (func_594(64))
		{
			func_574(11);
		}
	}
	else if (func_595(Local_13.f_7.f_10, 1500))
	{
		func_591(0, 0, 34, 0);
	}
}

void func_275()
{
	int iVar0;
	vector3 vVar1;

	if (func_503(64))
	{
		func_574(25);
		return;
	}
	iVar0 = func_188(0);
	switch (func_239())
	{
		case 0:
			vVar1 = { func_370(0) };
			break;
		default:
			vVar1 = { func_370(3) };
			break;
	}
	if (BUILTIN::VDIST(vVar1, ENTITY::GET_ENTITY_COORDS(iVar0, false, false)) < 2f)
	{
		if (func_581(0, 3))
		{
			func_574(12);
		}
	}
}

void func_276()
{
	int iVar0;

	if (func_586())
	{
		func_579(512);
		func_574(71);
		return;
	}
	if (func_228(0) != 3)
	{
		func_581(0, 3);
	}
	if (Local_13.f_7.f_18 > func_596())
	{
		func_573(64);
	}
	iVar0 = func_239();
	if (iVar0 == 0 && func_597())
	{
		func_574(19);
	}
	else if (func_503(64))
	{
		func_574(25);
	}
	else if (func_582(2048))
	{
		if (func_581(0, 0))
		{
			func_579(1);
			func_574(13);
		}
	}
	else if (func_582(8))
	{
		if (func_581(0, 4))
		{
			func_579(2);
			func_574(13);
		}
	}
	else if (func_582(16))
	{
		if (func_581(0, 4))
		{
			Local_13.f_7.f_18++;
			func_579(4);
			func_574(13);
		}
	}
}

void func_277()
{
	if (func_503(64))
	{
		func_574(25);
		return;
	}
	if (func_598(1))
	{
		func_580(1);
		func_574(18);
	}
	else if (func_598(2))
	{
		if (!func_582(8))
		{
			func_580(2);
			func_359();
			func_574(14);
		}
	}
	else if (func_598(4))
	{
		if (!func_582(16))
		{
			func_580(4);
			func_574(16);
		}
	}
}

void func_278()
{
	int iVar0;

	if (func_503(64))
	{
		func_574(25);
		return;
	}
	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_503(268435456))
		{
			func_574(15);
		}
	}
}

void func_279()
{
	int iVar0;
	int iVar1;

	if (func_503(64))
	{
		func_574(25);
		return;
	}
	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_503(268435456))
		{
			if (func_581(0, 3))
			{
				iVar1 = func_599();
				func_600(iVar1);
				func_574(12);
			}
		}
	}
}

void func_280()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	if (func_503(64))
	{
		func_574(25);
		return;
	}
	iVar0 = func_188(0);
	if (func_346(iVar0, -2017877118))
	{
		vVar1 = { func_370(1) };
		vVar4 = { func_370(0) };
		if (func_570())
		{
			vVar1 = { func_508(2) };
			vVar4 = { func_370(3) };
		}
		Local_13.f_7.f_27 = { func_565(vVar1 - vVar4) + vVar1 };
		func_574(17);
	}
}

void func_281()
{
	int iVar0;
	int iVar1;

	iVar0 = func_239();
	iVar1 = func_188(0);
	if (iVar0 == 0 && func_597())
	{
		func_574(19);
	}
	else if (func_503(64))
	{
		func_574(25);
	}
	else if (!func_346(iVar1, -2017877118))
	{
		if (!func_503(536870912))
		{
			if (func_581(0, 3))
			{
				func_574(12);
			}
		}
	}
}

void func_282()
{
	if (func_503(64))
	{
		func_574(25);
		return;
	}
	if (func_503(8192))
	{
		func_574(20);
	}
}

void func_283()
{
	int iVar0;

	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!func_602(func_601(86)))
		{
			if (!func_587(87))
			{
				func_591(0, 0, 87, 0);
			}
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_574(22);
	}
}

void func_284()
{
	if (func_503(64))
	{
		func_574(25);
		return;
	}
	if (func_582(536870912))
	{
		func_574(71);
		return;
	}
	if (func_582(16777216))
	{
		func_574(72);
	}
}

void func_285()
{
	int iVar0;

	if (func_503(64))
	{
		func_574(25);
		return;
	}
	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_595(Local_13.f_7.f_10, 1500))
		{
			func_591(0, 0, 35, 0);
		}
	}
	if (func_587(35))
	{
		func_574(22);
	}
}

void func_286()
{
	int iVar0;

	if (func_503(64))
	{
		func_574(25);
		return;
	}
	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!func_346(iVar0, -2017877118))
		{
			func_574(72);
		}
	}
}

void func_287()
{
	int iVar0;
	int iVar1;

	func_581(0, 0);
	iVar0 = func_188(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_573(512);
		func_574(28);
		return;
	}
	else
	{
		if (func_503(32768) && func_507(0, 2) > func_603())
		{
			if (!func_587(97) && !func_587(98))
			{
				if (!func_598(131072))
				{
					func_579(131072);
					func_575(1, 0, 0);
				}
				func_584(0, 65f, 4000, 0, 97, 98, -1, -1, -1, -1, 1, -1);
			}
		}
		else
		{
			func_584(0, 65f, 4000, 0, 94, 95, 96, -1, -1, -1, 0, -1);
		}
		if (func_346(iVar0, 518218985))
		{
			func_574(30);
			return;
		}
	}
	iVar1 = func_188(2);
	if (((!ENTITY::DOES_ENTITY_EXIST(iVar1) || PED::IS_PED_DEAD_OR_DYING(iVar1, true)) || func_346(iVar1, 518218985)) || func_507(0, 2) > 100f)
	{
		func_573(512);
		func_574(26);
	}
}

void func_288()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_188(2);
	iVar1 = func_188(0);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true)) || func_346(iVar0, 518218985))
	{
		iVar2 = 1;
	}
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar1) || PED::IS_PED_DEAD_OR_DYING(iVar1, true)) || func_346(iVar1, 2121492476))
	{
		iVar3 = 1;
	}
	func_604();
	if (func_595(Local_13.f_7.f_10, 2000))
	{
		func_573(4096);
	}
	if (iVar2 && iVar3)
	{
		func_574(24);
	}
}

void func_289()
{
	if (func_587(99) || func_595(Local_13.f_7.f_10, 10000))
	{
		if (func_595(Local_13.f_7.f_10, 5000))
		{
			func_574(72);
		}
	}
	func_604();
}

void func_290()
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = func_188(0);
	iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_574(28);
	}
	else
	{
		fVar2 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false));
		if (func_595(Local_13.f_7.f_10, 2000))
		{
			if (fVar2 < 8f || func_595(Local_13.f_7.f_10, 10000))
			{
				func_574(27);
			}
		}
	}
}

void func_291()
{
	if (func_587(88))
	{
		func_574(72);
	}
	else
	{
		func_591(0, 0, 88, 0);
	}
}

void func_292()
{
	int iVar0;

	iVar0 = func_188(2);
	if (((!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true)) || func_346(iVar0, 518218985)) || func_346(iVar0, 1120685857))
	{
		func_574(29);
	}
}

void func_293()
{
	int iVar0;

	iVar0 = func_188(2);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true)) || func_583(2, 150f, 0, 1) < 1)
	{
		func_574(75);
	}
}

void func_294()
{
	func_581(0, 0);
	if (func_507(0, 2) < func_603() || !func_503(32768))
	{
		func_584(0, 65f, 4000, 0, 94, 95, 96, -1, -1, -1, 0, -1);
	}
}

void func_295()
{
	int iVar0;

	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_595(Local_13.f_7.f_10, 1500))
		{
			func_591(0, 0, 34, 0);
		}
	}
	if (func_587(34) && func_594(64))
	{
		func_574(32);
	}
}

void func_296()
{
	int iVar0;

	if (func_586())
	{
		func_579(512);
		func_574(71);
		return;
	}
	iVar0 = func_188(0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && PED::IS_PED_ON_MOUNT(iVar0))
	{
		func_574(33);
	}
	if (func_503(1))
	{
	}
	else
	{
		func_574(33);
	}
}

void func_297()
{
	int iVar0;

	if (func_586())
	{
		func_579(512);
		func_574(71);
		return;
	}
	iVar0 = func_188(0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && PED::IS_PED_ON_MOUNT(iVar0))
	{
		func_574(34);
		return;
	}
	if (func_503(1))
	{
		func_574(32);
		return;
	}
	if (func_346(iVar0, 1868526510))
	{
		func_574(34);
	}
}

void func_298()
{
	int iVar0;

	if (func_586())
	{
		func_579(512);
		func_574(71);
		return;
	}
	if (func_503(1))
	{
		func_574(32);
		return;
	}
	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iVar0, true))
		{
			switch (func_239())
			{
				case 1:
					func_588(&(Local_13.f_7.f_12));
					func_574(35);
					break;
				case 2:
					func_574(43);
					break;
			}
			return;
		}
	}
}

void func_299()
{
	int iVar0;

	if (func_586())
	{
		func_579(512);
		func_574(71);
		return;
	}
	if (func_503(1))
	{
		func_574(32);
		return;
	}
	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (PED::IS_PED_ON_MOUNT(iVar0))
		{
			if (func_582(2048))
			{
				if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.1f)
				{
					func_574(36);
				}
				else
				{
					func_574(38);
				}
				return;
			}
		}
		else
		{
			func_574(32);
			return;
		}
	}
}

void func_300()
{
	int iVar0;

	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!PED::IS_PED_ON_MOUNT(iVar0))
		{
			func_574(37);
		}
	}
}

void func_301()
{
	int iVar0;

	iVar0 = func_188(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_574(38);
		return;
	}
	if ((!ENTITY::DOES_ENTITY_EXIST(Local_947.f_19.f_155) || PED::IS_PED_DEAD_OR_DYING(Local_947.f_19.f_155, true)) || ((!func_605(Local_947.f_19.f_155, 1041577989) && !PED::IS_PED_ON_MOUNT(iVar0)) && func_595(Local_13.f_7.f_10, 5000)))
	{
		func_574(38);
		return;
	}
	if (func_595(Local_13.f_7.f_10, 10000))
	{
		func_574(38);
	}
}

void func_302()
{
	func_579(2048);
	func_574(39);
}

void func_303()
{
	if (func_582(536870912))
	{
		func_574(71);
		return;
	}
	if (func_582(16777216))
	{
		func_574(40);
	}
}

void func_304()
{
	int iVar0;

	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!PED::IS_PED_ON_MOUNT(iVar0))
		{
			func_574(72);
		}
	}
}

void func_305()
{
	int iVar0;

	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_595(Local_13.f_7.f_10, 1500))
		{
			func_591(0, 0, 35, 0);
		}
	}
	if (func_587(35))
	{
		func_574(42);
	}
}

void func_306()
{
	func_574(72);
}

void func_307()
{
	int iVar0;

	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_346(iVar0, 518218985))
		{
			func_574(44);
		}
	}
}

void func_308()
{
	int iVar0;

	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!PED::IS_PED_ON_MOUNT(iVar0))
		{
			func_574(45);
		}
	}
}

void func_309()
{
	int iVar0;

	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_346(iVar0, 518218985))
		{
			func_574(47);
		}
	}
}

void func_310()
{
	int iVar0;

	iVar0 = func_188(0);
	if ((func_606(0) || !ENTITY::DOES_ENTITY_EXIST(iVar0)) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_574(75);
		return;
	}
}

void func_311()
{
	if (func_189())
	{
		func_574(49);
	}
}

void func_312()
{
	if (func_607(262144))
	{
		func_574(50);
	}
}

void func_313()
{
	if (func_607(524288))
	{
		func_574(51);
	}
}

void func_314()
{
	if (func_608(1))
	{
		func_574(52);
	}
}

void func_315()
{
	if (func_503(65536) && func_607(1048576))
	{
		func_574(53);
	}
	else if (func_503(131072))
	{
		func_574(58);
	}
}

void func_316()
{
	if (func_586())
	{
		if (func_581(0, 0))
		{
			func_579(512);
			func_574(58);
			return;
		}
	}
	if (func_587(9))
	{
		if (func_228(0) != 1)
		{
			func_581(0, 1);
		}
	}
	if (func_582(1))
	{
		if (func_581(0, 0))
		{
			func_574(54);
		}
	}
	else if (func_582(2))
	{
		if (func_581(0, 0))
		{
			func_574(55);
		}
	}
	else if (func_503(131072))
	{
		func_574(58);
	}
}

void func_317()
{
	func_588(&(Local_13.f_7.f_12));
	if (func_594(64))
	{
		func_574(56);
	}
}

void func_318()
{
	func_574(58);
}

void func_319()
{
	func_574(57);
}

void func_320()
{
	if (func_586())
	{
		if (func_581(0, 0))
		{
			func_579(512);
			func_574(58);
			return;
		}
	}
	if (func_582(2048))
	{
		func_574(58);
	}
}

void func_321()
{
	if (func_608(3))
	{
		func_574(59);
	}
}

void func_322()
{
	int iVar0;
	int iVar1;

	if (func_582(2048))
	{
		iVar0 = func_609();
		if (!func_587(iVar0))
		{
			if (!func_590(1))
			{
				func_591(0, 4, iVar0, 0);
			}
		}
	}
	else if (func_582(2))
	{
		if (!func_587(35))
		{
			if (!func_590(1))
			{
				func_591(0, 0, 35, 0);
			}
		}
	}
	iVar1 = func_188(0);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar1) || PED::IS_PED_DEAD_OR_DYING(iVar1, true)) || !func_499())
	{
		func_579(1024);
		if (func_598(512))
		{
			func_574(71);
		}
		else if (func_572())
		{
			func_574(60);
		}
		else
		{
			func_574(61);
		}
	}
}

void func_323()
{
	if (func_582(536870912))
	{
		func_574(71);
		return;
	}
	if (func_582(16777216))
	{
		func_574(61);
	}
}

void func_324()
{
	func_574(72);
}

void func_325()
{
	if (!func_587(34))
	{
		if (func_595(Local_13.f_7.f_10, 1500))
		{
			func_591(0, 0, 34, 0);
		}
	}
	if (func_587(34) && func_594(64))
	{
		func_574(63);
	}
}

void func_326()
{
	int iVar0;
	int iVar1;

	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!AUDIO::_0x54B187F111D9C6F8(iVar0, 0))
		{
			switch (func_239())
			{
				case 9:
					if (!func_587(131))
					{
						func_591(0, 0, 131, 0);
					}
					break;
				case 10:
					if (!func_587(133))
					{
						func_591(0, 0, 133, 0);
					}
					break;
				case 11:
					if (!func_587(135))
					{
						func_591(0, 0, 135, 0);
					}
					break;
			}
		}
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), func_370(5)) < 5f && ((func_587(131) || func_587(133)) || func_587(135)))
		{
			iVar1 = func_239();
			switch (iVar1)
			{
				case 10:
					func_579(4096);
					break;
				case 11:
					func_579(8192);
					break;
			}
			func_574(64);
		}
	}
}

void func_327()
{
	func_574(65);
}

void func_328()
{
	if (func_586())
	{
		func_579(512);
		func_574(71);
		return;
	}
	if (func_582(2048))
	{
		func_574(66);
	}
}

void func_329()
{
	if (func_572())
	{
		func_580(4096);
		if (func_239() == 11)
		{
			func_574(67);
		}
		else
		{
			func_574(69);
		}
	}
}

void func_330()
{
	int iVar0;

	iVar0 = func_188(0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && !PED::_IS_PED_LASSOED(iVar0)) && !PED::_IS_PED_HOGTIED(iVar0))
	{
		func_580(8192);
		func_579(16384);
		func_574(69);
	}
	if (func_587(173))
	{
		func_580(8192);
	}
}

void func_331()
{
	int iVar0;

	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_595(Local_13.f_7.f_10, 1500))
		{
			func_591(0, 0, 35, 0);
		}
	}
	if (func_587(35))
	{
		func_574(70);
	}
}

void func_332()
{
	if (func_582(536870912))
	{
		func_574(71);
		return;
	}
	if (func_582(16777216))
	{
		func_574(70);
	}
}

void func_333()
{
	func_574(72);
}

void func_334()
{
	if (func_228(0) != 0)
	{
		func_581(0, 0);
	}
	if (((func_587(72) || func_587(73)) || func_587(174)) || func_587(175))
	{
		func_574(72);
	}
}

void func_335()
{
	int iVar0;
	int iVar1;

	if (func_228(0) != 5)
	{
		func_581(0, 5);
	}
	if (func_503(64))
	{
		func_574(25);
		return;
	}
	if (func_507(0, 1) > 70f)
	{
		func_579(-2147483648);
	}
	iVar0 = func_188(0);
	iVar1 = func_188(1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (((!ENTITY::DOES_ENTITY_EXIST(iVar1) || PED::IS_PED_DEAD_OR_DYING(iVar1, true)) || (PED::IS_PED_ON_MOUNT(iVar0) && PED::GET_MOUNT(iVar0) == iVar1)) || func_598(-2147483648))
		{
			func_574(73);
		}
	}
}

void func_336()
{
	int iVar0;

	if (func_228(0) != 5)
	{
		func_581(0, 5);
	}
	if (func_503(64))
	{
		func_574(25);
		return;
	}
	if (func_606(0))
	{
		func_574(75);
		return;
	}
	iVar0 = func_188(0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_ON_MOUNT(iVar0)) && !func_598(-2147483648))
	{
		func_574(72);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && !func_505(0))
	{
		if (func_610(10f, 128, 0))
		{
			func_584(0, 10f, 10000, 0, 101, 102, 103, -1, -1, -1, 0, -1);
		}
		else if (func_611(10f, 2048, 4096))
		{
			if (func_582(512) || func_582(1024))
			{
				func_584(0, 10f, 10000, 0, 25, 26, 27, -1, -1, -1, 0, -1);
			}
			else if (func_582(256))
			{
				func_584(0, 10f, 10000, 0, 28, 29, 30, -1, -1, -1, 0, -1);
			}
		}
		else if (func_611(10f, 8192, 0) || func_611(10f, 128, 0))
		{
			func_584(0, 10f, 10000, 0, 31, 32, 33, -1, -1, -1, 0, -1);
		}
	}
}

void func_337()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (func_228(0) != 5)
	{
		func_581(0, 5);
	}
	iVar0 = func_188(0);
	iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true)) || !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		func_574(75);
	}
	else
	{
		if (func_606(0))
		{
			func_574(75);
			return;
		}
		bVar2 = true;
		if (func_587(79))
		{
			bVar2 = false;
		}
		if (PED::_IS_PED_HOGTIED(iVar0) || PED::_IS_PED_LASSOED(iVar0))
		{
			func_584(0, 65f, 4000, 3, 79, 80, 81, 74, 75, 76, bVar2, -1);
		}
		else if (func_587(79) && !func_587(82))
		{
			func_591(0, 3, 82, 0);
		}
		else if (func_582(1048576))
		{
			func_584(0, 65f, 4000, 3, 77, 74, 75, 76, -1, -1, 1, -1);
		}
		else
		{
			func_584(0, 65f, 4000, 3, 74, 75, 76, -1, -1, -1, bVar2, -1);
		}
	}
}

void func_338()
{
	if (func_582(2048))
	{
		switch (func_239())
		{
			case 1:
				if (func_598(2048))
				{
					func_612(1);
				}
				break;
			case 8:
				if (func_598(1024))
				{
					func_612(1);
				}
				break;
			case 11:
				if (func_598(16384))
				{
					func_612(1);
				}
				break;
			default:
				func_612(1);
				break;
		}
	}
}

void func_339()
{
	if (!func_613() || func_595(Local_13.f_7.f_10, 20000))
	{
		func_612(6);
		return;
	}
	if (func_503(64) || func_505(0))
	{
		func_612(6);
		return;
	}
	if (func_595(Local_13.f_7.f_10, 1000))
	{
		func_612(2);
	}
}

void func_340()
{
	int iVar0;

	if (!func_613() || func_595(Local_13.f_7.f_10, 20000))
	{
		func_612(6);
		return;
	}
	if (func_503(64) || func_505(0))
	{
		func_612(6);
		return;
	}
	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!PED::IS_PED_ON_MOUNT(iVar0) || func_346(iVar0, 501393341))
		{
			func_612(3);
		}
	}
}

void func_341()
{
	int iVar0;
	int iVar1;

	if (!func_613() || func_595(Local_13.f_7.f_10, 20000))
	{
		func_612(6);
		return;
	}
	if (func_503(64) || func_505(0))
	{
		func_612(6);
		return;
	}
	iVar0 = func_609();
	if (!func_587(iVar0))
	{
		if (!func_590(1))
		{
			func_591(0, 4, iVar0, 0);
		}
	}
	iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_13.f_7.f_22);
	if (func_614(0, 2.5f, iVar1, 0))
	{
		func_579(262144);
		func_612(4);
	}
	else if (!func_614(0, 30f, iVar1, 0))
	{
		func_612(6);
	}
}

void func_342()
{
	if (!func_613())
	{
		func_612(6);
		return;
	}
	if (func_503(64) || func_505(0))
	{
		func_612(6);
		return;
	}
	if (func_595(Local_13.f_7.f_13, 9000))
	{
		func_612(7);
		return;
	}
	if (!func_587(71))
	{
		if (!func_590(1))
		{
			func_591(0, 4, 71, 0);
		}
	}
	if (func_587(71) && func_582(4194304))
	{
		if (func_595(Local_13.f_7.f_13, 6000))
		{
			func_579(262144);
			func_612(5);
		}
	}
}

void func_343()
{
	int iVar0;

	if (!func_613() || func_595(Local_13.f_7.f_10, 20000))
	{
		func_612(7);
		return;
	}
	if (func_503(64) || func_505(0))
	{
		func_612(6);
		return;
	}
	if (!func_590(1))
	{
		func_591(0, 4, func_615(), 0);
	}
	iVar0 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_22);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!func_605(iVar0, -1162159953) || ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iVar0, func_354(7), func_616(7)) > 0.9f)
		{
			func_612(7);
		}
	}
}

void func_344()
{
}

void func_345()
{
	func_478(16777216);
}

bool func_346(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_347(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_348(int iParam0)
{
	if (!func_187(iParam0))
	{
		return 0;
	}
	if (!func_250(iParam0))
	{
		return 0;
	}
	return Global_1131196[iParam0 /*27*/].f_18.f_1;
}

void func_349(var uParam0, int iParam1)
{
	func_617(uParam0, iParam1);
}

void func_350(var uParam0, int iParam1)
{
	func_618(uParam0, iParam1);
}

void func_351(int iParam0)
{
	struct<11> Var0;
	int iVar15;

	Var0.f_10 = 255;
	SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar15, 4);
	switch (iVar15)
	{
		case 182:
			if (func_619(&Var0, iParam0))
			{
				func_620(&Var0);
			}
			break;
		default:
			break;
	}
}

void func_352(int iParam0)
{
	struct<6> Var0;
	int iVar32;
	int iVar33;
	var uVar34;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 32))
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
	iVar32 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
	if (!PED::IS_PED_A_PLAYER(iVar32))
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
	iVar33 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
	if (PED::IS_PED_DEAD_OR_DYING(iVar33, true))
	{
		return;
	}
	uVar34 = Var0.f_5;
}

void func_353(int iParam0)
{
	vector3 vVar0;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	if (SCRIPTS::GET_EVENT_AT_INDEX(0, iParam0) != joaat("EVENT_PLAYER_PROMPT_TRIGGERED"))
	{
		return;
	}
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 10))
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
	if (iVar13 != func_188(1))
	{
		return;
	}
	switch (iVar11)
	{
		case 11:
		case 33:
			func_478(134217728);
			break;
		default:
			return;
	}
}

char* func_354(int iParam0)
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

char* func_355(int iParam0)
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

char* func_356(int iParam0)
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

bool func_357(char* sParam0, var uParam1, var uParam2, int iParam3, char* sParam4)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam2))
		{
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
			{
				*uParam1 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam0, iParam3, sParam4, true, true);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
			{
				if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(*uParam1))
				{
					if (!NETWORK::_NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE(*uParam1))
					{
						return false;
					}
				}
				if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam1, true, false))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam1, false) && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam1, false, false))
					{
						ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
					}
					return false;
				}
				else
				{
					*uParam2 = NETWORK::_ANIM_SCENE_TO_NET(*uParam1);
				}
			}
			return false;
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam2))
	{
		return false;
	}
	*uParam1 = NETWORK::_NET_TO_ANIM_SCENE(*uParam2);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		return false;
	}
	return true;
}

int func_358(int iParam0)
{
	switch (func_239())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return joaat("WORLD_HUMAN_WAITING_IMPATIENT");
				case 1:
					return joaat("WORLD_HUMAN_STAND_WAITING");
				case 2:
					return joaat("WORLD_HUMAN_STERNGUY_IDLES");
				case 3:
					return joaat("WORLD_CAMP_FIRE_SIT_GROUND");
				default:
					break;
			}
			break;
		case 3:
			switch (func_243())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return joaat("WORLD_HUMAN_CROUCH_INSPECT");
						case 1:
							return joaat("WORLD_HUMAN_STAND_WAITING");
						case 2:
							return joaat("WORLD_HUMAN_WAITING_IMPATIENT");
						case 3:
							return joaat("WORLD_CAMP_FIRE_SIT_GROUND");
						case 4:
							return joaat("WORLD_ANIMAL_BEAR_EATING_BERRIES");
						default:
							break;
					}
					break;
				default:
					switch (iParam0)
					{
						case 0:
							return joaat("WORLD_HUMAN_CROUCH_INSPECT");
						case 1:
							return joaat("WORLD_HUMAN_STAND_WAITING");
						case 2:
							return joaat("WORLD_HUMAN_STERNGUY_IDLES");
						case 3:
							return joaat("WORLD_CAMP_FIRE_SIT_GROUND");
						case 4:
							return joaat("WORLD_ANIMAL_BEAR_EATING_BERRIES");
						default:
							break;
					}
					break;
			}
			break;
		case 4:
			switch (func_243())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return joaat("WORLD_HUMAN_CROUCH_INSPECT");
						case 1:
							return joaat("WORLD_HUMAN_STAND_WAITING");
						case 2:
							return joaat("WORLD_HUMAN_WAITING_IMPATIENT");
						case 3:
							return joaat("WORLD_CAMP_FIRE_SIT_GROUND");
						case 4:
							return joaat("WORLD_ANIMAL_DEER_GRAZING");
						default:
							break;
					}
					break;
				default:
					switch (iParam0)
					{
						case 0:
							return joaat("WORLD_HUMAN_CROUCH_INSPECT");
						case 1:
							return joaat("WORLD_HUMAN_STAND_WAITING");
						case 2:
							return joaat("WORLD_HUMAN_STERNGUY_IDLES");
						case 3:
							return joaat("WORLD_CAMP_FIRE_SIT_GROUND");
						case 4:
							return joaat("WORLD_ANIMAL_DEER_GRAZING");
						default:
							break;
					}
					break;
			}
			break;
		case 5:
			switch (func_243())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return joaat("WORLD_HUMAN_CROUCH_INSPECT");
						case 1:
							return joaat("WORLD_HUMAN_STAND_WAITING");
						case 2:
							return joaat("WORLD_HUMAN_WAITING_IMPATIENT");
						case 3:
							return joaat("WORLD_CAMP_FIRE_SIT_GROUND");
						case 4:
							return joaat("WORLD_ANIMAL_BIG_CAT_RESTING");
						default:
							break;
					}
					break;
				default:
					switch (iParam0)
					{
						case 0:
							return joaat("WORLD_HUMAN_CROUCH_INSPECT");
						case 1:
							return joaat("WORLD_HUMAN_STAND_WAITING");
						case 2:
							return joaat("WORLD_HUMAN_STERNGUY_IDLES");
						case 3:
							return joaat("WORLD_CAMP_FIRE_SIT_GROUND");
						case 4:
							return joaat("WORLD_ANIMAL_BIG_CAT_RESTING");
						default:
							break;
					}
					break;
			}
			break;
		case 6:
			switch (func_243())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return joaat("WORLD_HUMAN_CROUCH_INSPECT");
						case 1:
							return joaat("WORLD_HUMAN_STAND_WAITING");
						case 2:
							return joaat("WORLD_HUMAN_WAITING_IMPATIENT");
						case 3:
							return joaat("WORLD_CAMP_FIRE_SIT_GROUND");
						case 4:
							return joaat("WORLD_ANIMAL_COYOTE_SNIFFING_GROUND");
						default:
							break;
					}
					break;
				default:
					switch (iParam0)
					{
						case 0:
							return joaat("WORLD_HUMAN_CROUCH_INSPECT");
						case 1:
							return joaat("WORLD_HUMAN_STAND_WAITING");
						case 2:
							return joaat("WORLD_HUMAN_STERNGUY_IDLES");
						case 3:
							return joaat("WORLD_CAMP_FIRE_SIT_GROUND");
						case 4:
							return joaat("WORLD_ANIMAL_COYOTE_SNIFFING_GROUND");
						default:
							break;
					}
					break;
			}
			break;
		case 7:
			switch (func_243())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return joaat("WORLD_HUMAN_CROUCH_INSPECT");
						case 1:
							return joaat("WORLD_HUMAN_STAND_WAITING");
						case 2:
							return joaat("WORLD_HUMAN_WAITING_IMPATIENT");
						case 3:
							return joaat("WORLD_CAMP_FIRE_SIT_GROUND");
						case 4:
							return joaat("WORLD_ANIMAL_WOLF_SNIFFING_GROUND");
						default:
							break;
					}
					break;
				default:
					switch (iParam0)
					{
						case 0:
							return joaat("WORLD_HUMAN_CROUCH_INSPECT");
						case 1:
							return joaat("WORLD_HUMAN_STAND_WAITING");
						case 2:
							return joaat("WORLD_HUMAN_STERNGUY_IDLES");
						case 3:
							return joaat("WORLD_CAMP_FIRE_SIT_GROUND");
						case 4:
							return joaat("WORLD_ANIMAL_WOLF_SNIFFING_GROUND");
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
					return joaat("WORLD_HUMAN_WAITING_IMPATIENT");
				default:
					break;
			}
			break;
	}
	return 0;
}

void func_359()
{
	Local_13.f_7.f_19++;
	if (Local_13.f_7.f_19 < 1 || Local_13.f_7.f_19 > 3)
	{
		Local_13.f_7.f_19 = 1;
	}
}

bool func_360()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (MISC::IS_BIT_SET(Local_947.f_274.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = func_621(iVar0);
			if (iVar2 == 0)
			{
				Jump @132; //curOff = 54
			}
			else
			{
				if (!MISC::IS_BIT_SET(Local_947.f_274.f_4, iVar0))
				{
					STREAMING::REQUEST_MODEL(iVar2, false);
					MISC::SET_BIT(&(Local_947.f_274.f_4), iVar0);
				}
				if (!STREAMING::HAS_MODEL_LOADED(iVar2))
				{
					bVar1 = true;
					Jump @132; //curOff = 112
				}
				else
				{
					MISC::SET_BIT(&(Local_947.f_274.f_3), iVar0);
				}
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		return false;
	}
	return true;
}

bool func_361()
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
			if (MISC::IS_BIT_SET(Local_947.f_329[iVar0 /*76*/].f_1, iVar1))
			{
			}
			else
			{
				iVar3 = func_550(iVar0, iVar1);
				if (func_622(iVar1))
				{
					if (Local_947.f_329[iVar0 /*76*/].f_5[iVar1 /*14*/].f_6 == 0 || !PED::_0x93FFD92F05EC32FD(Local_947.f_329[iVar0 /*76*/].f_5[iVar1 /*14*/].f_6))
					{
						Local_947.f_329[iVar0 /*76*/].f_5[iVar1 /*14*/].f_6 = PED::_0x91FE941F9FCFB702(Local_947.f_329[iVar0 /*76*/].f_5[iVar1 /*14*/].f_3, 0);
						bVar2 = true;
					}
					else if (!PED::_0xB0B2C6D170B0E8E5(Local_947.f_329[iVar0 /*76*/].f_5[iVar1 /*14*/].f_6))
					{
						bVar2 = true;
					}
					else if (!MISC::IS_BIT_SET(Local_947.f_329[iVar0 /*76*/].f_1, iVar1))
					{
						MISC::SET_BIT(&(Local_947.f_329[iVar0 /*76*/].f_1), iVar1);
					}
				}
				else if (func_623(iVar1))
				{
					WEAPON::_0x72D4CB5DB927009C(Local_947.f_329[iVar0 /*76*/].f_5[iVar1 /*14*/].f_5, -1, 0);
					if (!WEAPON::_0xFF07CF465F48B830(Local_947.f_329[iVar0 /*76*/].f_5[iVar1 /*14*/].f_5))
					{
						bVar2 = true;
					}
					else if (!MISC::IS_BIT_SET(Local_947.f_329[iVar0 /*76*/].f_1, iVar1))
					{
						MISC::SET_BIT(&(Local_947.f_329[iVar0 /*76*/].f_1), iVar1);
					}
				}
				else if (iVar3 == 0)
				{
					Jump @468; //curOff = 360
				}
				else
				{
					if (!MISC::IS_BIT_SET(Local_947.f_329[iVar0 /*76*/], iVar1))
					{
						STREAMING::REQUEST_MODEL(iVar3, false);
						MISC::SET_BIT(&(Local_947.f_329[iVar0 /*76*/]), iVar1);
					}
					if (!STREAMING::HAS_MODEL_LOADED(iVar3))
					{
						bVar2 = true;
						Jump @468; //curOff = 422
					}
					else if (!MISC::IS_BIT_SET(Local_947.f_329[iVar0 /*76*/].f_1, iVar1))
					{
						MISC::SET_BIT(&(Local_947.f_329[iVar0 /*76*/].f_1), iVar1);
					}
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	if (bVar2)
	{
		return false;
	}
	return true;
}

bool func_362()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;
	float fVar14;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	vector3 vVar27;

	bVar3 = false;
	vVar4 = { 0f, 0f, 0f };
	vVar7 = { 0f, 0f, 0f };
	vVar10 = { Local_947.f_15 };
	iVar13 = 0;
	fVar14 = (1f / 90f);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			iVar2 = func_550(iVar0, iVar1);
			if (func_176(iVar0, iVar1))
			{
			}
			else if (!func_177(iVar0, iVar1))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (MISC::IS_BIT_SET(Local_947.f_329[iVar0 /*76*/].f_2, iVar1))
					{
						if (func_551(iVar0, iVar1))
						{
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar0 /*6*/][iVar1]))
							{
								if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_42[iVar0 /*6*/][iVar1]))
								{
									NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_42[iVar0 /*6*/][iVar1]);
								}
							}
						}
					}
				}
			}
			else if (MISC::IS_BIT_SET(Local_947.f_329[iVar0 /*76*/].f_2, iVar1))
			{
			}
			else
			{
				if (!func_552(iVar0, iVar1))
				{
					vVar7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar10, 0f, func_553(iVar0, iVar1)) };
				}
				else
				{
					vVar7 = { func_553(iVar0, iVar1) };
				}
				if (func_554(iVar0, iVar1))
				{
					if (!func_555(&vVar7, 1, 10, 0, 0))
					{
						bVar3 = true;
					}
					else
					{
						if (func_556(iVar0, iVar1))
						{
							iVar13 = PED::_0x9641A9A20310F6B8(Local_947.f_329[iVar0 /*76*/].f_5[iVar1 /*14*/].f_3, vVar7, 0f, 0f, 0f, 0, 0, 0);
							if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
							{
								return false;
							}
						}
						else if (func_557(iVar0, iVar1))
						{
							iVar13 = WEAPON::_CREATE_WEAPON_OBJECT(Local_947.f_329[iVar0 /*76*/].f_5[iVar1 /*14*/].f_5, Local_947.f_329[iVar0 /*76*/].f_5[iVar1 /*14*/].f_4, func_553(iVar0, iVar1), true, 1f);
							if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
							{
								return false;
							}
						}
						else if (iVar2 == 0)
						{
							Jump @837; //curOff = 451
						}
						else
						{
							iVar13 = OBJECT::CREATE_OBJECT(iVar2, vVar7, false, true, false, false, true);
							if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
							{
								return false;
							}
						}
						MISC::SET_BIT(&(Local_947.f_329[iVar0 /*76*/].f_2), iVar1);
						if (func_559(iVar0, iVar1))
						{
							TASK::_0x78B4567E18B54480(iVar13);
							GRAPHICS::_SET_PICKUP_OBJECT_GLOW_ENABLED(iVar13, true);
						}
						if (func_560(iVar0, iVar1))
						{
							ENTITY::_0xEBDC12861D079ABA(iVar13, 1);
						}
						if (func_561(iVar0, iVar1))
						{
							ENTITY::SET_ENTITY_VISIBLE(iVar13, false);
						}
						else
						{
							ENTITY::_0xA91E6CF94404E8C9(iVar13);
						}
						if (func_554(iVar0, iVar1))
						{
							ENTITY::_0x9587913B9E772D29(iVar13, 0);
						}
						vVar4 = { func_562(iVar0, iVar1) };
						if (!func_251(vVar4))
						{
							if (vVar4.x == 0f && vVar4.y == 0f)
							{
								if (vVar4.z != 0f)
								{
									ENTITY::SET_ENTITY_HEADING(iVar13, vVar4.z);
								}
							}
							else
							{
								ENTITY::SET_ENTITY_ROTATION(iVar13, vVar4, 2, true);
								if (!func_563(iVar0, iVar1, 32))
								{
									MISC::GET_MODEL_DIMENSIONS(iVar2, &vVar15, &vVar18);
									vVar21 = { vVar18 - vVar15 * Vector(0.5f, 0.5f, 0.5f) };
									vVar24 = { Vector(fVar14, fVar14, fVar14) * Vector(0f, MISC::ABSF(func_564(vVar4.x)), MISC::ABSF(func_564(vVar4.y))) };
									vVar27 = { func_565(vVar24) * vVar21 };
									ENTITY::SET_ENTITY_COORDS(iVar13, vVar7 + Vector((((vVar27.x + vVar27.y) + vVar27.z) / 3f), 0f, 0f), true, false, true, true);
								}
							}
						}
						Local_947.f_329[iVar0 /*76*/].f_5[iVar1 /*14*/] = iVar13;
						if (func_566(iVar0, iVar1))
						{
							func_567(iVar0, iVar1, 1);
						}
						bVar3 = true;
					}
					else
					{
						iVar1++;
					}
					iVar0++;
					if (bVar3)
					{
						return false;
					}
					return true;
				}
			}
		}
	}
}

void func_363(struct<2> Param0)
{
	if (func_487(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_487(Param0)))
	{
		STATS::_0x99230691875FC218(func_485(Param0), func_487(Param0), Global_35);
	}
}

void func_364()
{
	int iVar0;
	int iVar1;

	if (!func_227(&iVar1))
	{
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_624(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_365()
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
			if (func_177(iVar1, iVar2))
			{
			}
			else if (func_176(iVar1, iVar2))
			{
			}
			else if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar1 /*6*/][iVar2]))
			{
				iVar0 = NETWORK::NET_TO_OBJ(Local_13.f_42[iVar1 /*6*/][iVar2]);
				Local_947.f_329[iVar1 /*76*/].f_5[iVar2 /*14*/] = iVar0;
				if (func_551(iVar1, iVar2))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_42[iVar1 /*6*/][iVar2]))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_42[iVar1 /*6*/][iVar2]))
						{
							NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_42[iVar1 /*6*/][iVar2]);
						}
					}
				}
				if (func_559(iVar1, iVar2))
				{
					TASK::_0x78B4567E18B54480(iVar0);
					GRAPHICS::_SET_PICKUP_OBJECT_GLOW_ENABLED(iVar0, true);
				}
			}
			else if (0 != func_550(iVar1, iVar2))
			{
			}
			iVar2++;
		}
		iVar1++;
	}
}

void func_366(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
	}
	else
	{
		func_625(&(Local_947.f_406), *iParam0, iParam1);
	}
}

void func_367(int iParam0)
{
	if (Local_947.f_19.f_247 == 0)
	{
		Local_947.f_19.f_247 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(func_626(), iParam0, -1f, 20f, 30f, -1f, -1f, 180f, false, false, -1, -1);
	}
}

void func_368(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_627(uParam0, iParam1, sParam2))
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

void func_369()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_947.f_19.f_246, func_500(0), func_188(0), 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_947.f_19.f_246, func_500(2), func_188(2), 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_947.f_19.f_246, func_502(0), func_501(0), 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_947.f_19.f_246, func_502(1), func_501(1), 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_947.f_19.f_246, func_502(2), func_501(2), 0);
}

Vector3 func_370(int iParam0)
{
	switch (func_244())
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
			return func_508(0);
		case 5:
			return func_508(0);
		default:
			break;
	}
	return func_508(0);
}

float func_371(int iParam0)
{
	switch (func_244())
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

void func_372(int iParam0)
{
	if (Local_947.f_19.f_248 == 0)
	{
		Local_947.f_19.f_248 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(func_628(), iParam0, -1f, 25f, 35f, -1f, -1f, 180f, false, false, -1, -1);
	}
}

void func_373(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (!func_482(iParam0, 4))
		{
			func_629(iParam0, 4);
		}
	}
	else if (func_482(iParam0, 4))
	{
		func_481(iParam0, 4);
	}
}

void func_374(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
	}
	else
	{
		func_630(&(Local_947.f_406), *iParam0, iParam1);
	}
}

void func_375(int iParam0, float fParam1)
{
	if (fParam1 > 0f)
	{
		Local_947.f_578[iParam0 /*39*/].f_2 = fParam1;
	}
}

void func_376()
{
	int iVar0;
	struct<13> Var1;

	Var1.f_6 = 1065353216;
	Var1.f_7 = 1065353216;
	Var1.f_8 = 1065353216;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (func_632(func_631(iVar0), &Var1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var1))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var1))
				{
				}
				else
				{
					EVENT::_0xBB1E41DD3D3C6250(Var1, "MpRandomEvent", 1);
					func_633(&(Local_947.f_406), Var1);
					func_634(func_631(iVar0));
				}
				iVar0++;
			}
		}
	}
}

bool func_377(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return false;
	}
	Var0 = { func_635(iParam0, joaat("COOLDOWN")) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return false;
	}
	if (iVar2 != 0 && (Global_1296859.f_21 - iVar2) < iParam1)
	{
		return true;
	}
	return false;
}

void func_378()
{
	func_636();
	func_637();
	func_638();
}

void func_379()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
		func_639(iVar0, bVar1, iVar2);
		func_640(iVar0, bVar1, iVar2);
		func_641(iVar0, bVar1, iVar2);
		func_642(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_380()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return;
	}
	if (!func_227(&iVar3))
	{
		return;
	}
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	bVar7 = false;
	bVar8 = false;
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE() != Local_947.f_274.f_54)
	{
		bVar8 = true;
		Local_947.f_274.f_54 = !Local_947.f_274.f_54;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar7 = false;
		if (Local_947.f_274.f_41 >= 3)
		{
			Local_947.f_274.f_41 = 0;
		}
		iVar0 = Local_947.f_274.f_41;
		Local_947.f_274.f_41++;
		iVar9 = func_643(iVar0);
		iVar1 = Local_947.f_274.f_7[iVar0 /*11*/];
		bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		if (func_175(iVar9, 4))
		{
			func_624(iVar9, iVar3, 1);
			bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		}
		if (bVar4)
		{
			if (Local_82[iVar3 /*27*/].f_4.f_2[iVar0] > -1f)
			{
				Local_82[iVar3 /*27*/].f_4.f_2[iVar0] = -1f;
			}
			if (MISC::IS_BIT_SET(Local_947.f_274.f_5, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_947.f_274.f_5), iVar0);
				MISC::CLEAR_BIT(&(Local_947.f_274.f_6), iVar0);
				MISC::CLEAR_BIT(&(Local_947.f_274.f_42), iVar0);
			}
		}
		else
		{
			bVar7 = func_644(iVar2, iVar1, iVar0, iVar3);
		}
		if (MISC::IS_BIT_SET(Local_947.f_274.f_42, iVar0))
		{
			if (bVar4 || !bVar7)
			{
				MISC::CLEAR_BIT(&(Local_947.f_274.f_42), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (bVar7)
			{
				MISC::SET_BIT(&(Local_947.f_274.f_42), iVar0);
			}
		}
		if (!bVar4)
		{
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar1))
			{
				if (!MISC::IS_BIT_SET(Local_82[iVar3 /*27*/].f_4.f_1, iVar0))
				{
					MISC::SET_BIT(&(Local_82[iVar3 /*27*/].f_4.f_1), iVar0);
				}
				func_645(&(Local_947.f_274.f_43[iVar0 /*3*/]));
			}
		}
		if (MISC::IS_BIT_SET(Local_82[iVar3 /*27*/].f_4.f_1, iVar0))
		{
			if (bVar4 || (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar1) && (!func_646(&(Local_947.f_274.f_43[iVar0 /*3*/])) || func_647(&(Local_947.f_274.f_43[iVar0 /*3*/]), 0.5f))))
			{
				func_648(&(Local_947.f_274.f_43[iVar0 /*3*/]));
				MISC::CLEAR_BIT(&(Local_82[iVar3 /*27*/].f_4.f_1), iVar0);
			}
		}
		if ((!bVar4 && bVar8) && func_175(iVar9, 256))
		{
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar1, Local_947.f_274.f_54, false, 256);
		}
		if (func_175(iVar9, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (func_649(iVar9))
						{
							if (!func_548(iVar9, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									func_650(iVar9, 4);
								}
								else if (bVar6)
								{
								}
							}
						}
					}
				}
			}
			else if ((NETWORK::_0xB07D3185E11657A5(iVar1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1)) && !func_175(iVar9, 8))
			{
				if (!func_649(iVar9))
				{
					PED::_0x7043D0681285BA2D(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_947.f_274.f_42 != 0)
	{
		if (!func_651(1, 255))
		{
			func_652(1);
		}
	}
	else if (func_651(1, 255))
	{
		func_653(1);
	}
}

void func_381()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<13> Var5;
	int iVar18;
	var uVar19;
	int iVar20;
	var uVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	bool bVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	int iVar31;
	int iVar32;
	int iVar33;

	Var5.f_6 = 1065353216;
	Var5.f_7 = 1065353216;
	Var5.f_8 = 1065353216;
	Var5.f_9 = 1;
	Var5.f_12 = 8;
	iVar20 = 255;
	if (!func_227(&iVar25))
	{
		return;
	}
	func_654();
	bVar27 = WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar26, true, 0, false);
	bVar28 = (bVar27 && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()));
	if ((bVar27 && bVar28) && WEAPON::_0x705BE297EEBDB95D(iVar26))
	{
		Local_947.f_406.f_64 = 0;
		Local_82[iVar25 /*27*/].f_10.f_4 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	bVar29 = (bVar28 && (iVar26 == joaat("WEAPON_MOONSHINEJUG") || iVar26 == joaat("WEAPON_MOONSHINEJUG_MP")));
	bVar30 = false;
	while (iVar22 < 1)
	{
		if (Local_947.f_406.f_125 >= 3)
		{
			Local_947.f_406.f_125 = 0;
		}
		iVar1 = Local_947.f_406.f_125;
		Local_947.f_406.f_125++;
		iVar22++;
		iVar18 = func_631(iVar1);
		if (!func_655(iVar18))
		{
		}
		else if (func_656(iVar18, &Var5))
		{
			if (func_657(&Var5, iVar18))
			{
				if (func_658(&(Local_82[iVar25 /*27*/].f_10), 8, iVar1))
				{
					func_659(&(Local_82[iVar25 /*27*/].f_10), 8, iVar1);
				}
			}
			else if (!func_658(&(Local_82[iVar25 /*27*/].f_10), 8, iVar1))
			{
				func_660(&(Local_82[iVar25 /*27*/].f_10), 8, iVar1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Var5))
			{
			}
			else
			{
				func_661(iVar18);
				if (func_662(iVar18))
				{
					if (func_663(iVar18))
					{
						if (!func_664(iVar18))
						{
							func_665(iVar18);
						}
					}
					if (func_666(iVar18))
					{
						func_667(iVar18);
					}
				}
				else
				{
					if (func_668(iVar18))
					{
						if ((ENTITY::DOES_ENTITY_EXIST(Var5) && !ENTITY::IS_ENTITY_DEAD(Var5)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
						{
							PED::SET_PED_RESET_FLAG(Var5, 42, true);
						}
					}
					if (!func_669(Var5))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
						{
							func_633(&(Local_947.f_406), Var5);
						}
					}
					if (!func_670(iVar18, 255))
					{
						bVar2 = false;
						iVar3 = 0;
						if (func_671(iVar18))
						{
							bVar2 = true;
							iVar3 = 1;
						}
						else if (func_672(iVar18, iVar25))
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else if (func_673(Var5, Var5.f_1, &(Local_947.f_406), &iVar4, 0, Var5.f_2))
						{
							switch (iVar4)
							{
								case 256:
									if (!MISC::IS_BIT_SET(Local_947.f_406.f_64, iVar18))
									{
										bVar2 = true;
										MISC::SET_BIT(&(Local_947.f_406.f_64), iVar18);
									}
									break;
								case 8:
									if (bVar27)
									{
										if (!WEAPON::_IS_WEAPON_LASSO(iVar26) && !TASK::_0x8785E6E40C7A8819(PLAYER::PLAYER_PED_ID()))
										{
											bVar2 = true;
										}
									}
									break;
								default:
									bVar2 = true;
									break;
							}
						}
						else if ((bVar29 && Var5.f_2 <= 1.25f) && func_674(PLAYER::PLAYER_PED_ID(), Var5, 1060437492 /* Float: 0.707f */) == 0)
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else
						{
							if (!bVar2)
							{
								if (func_675(iVar18, &Var5, iVar25))
								{
									iVar4 = 4;
									bVar2 = true;
									MISC::SET_BIT(&(Local_947.f_406.f_64), iVar18);
								}
							}
							if (!bVar2)
							{
								bVar30 = true;
								if (!func_676(iVar18) || !EVENT::_0x83D43F0FD5276E4D(Var5, 1))
								{
									bVar30 = false;
									if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
									{
										EVENT::_0xBB1E41DD3D3C6250(Var5, "MpRandomEvent", 1);
										func_634(iVar18);
									}
								}
								if (bVar30)
								{
									iVar31 = EVENT::_0x796EECFF0C6D39BE(Var5, 1, 1);
									if (iVar31 != 0)
									{
										iVar32 = EVENT::_0x822A001BCEA5BD81(Var5, iVar31, 1, 1);
										if (ENTITY::DOES_ENTITY_EXIST(iVar32) && ENTITY::IS_ENTITY_A_PED(iVar32))
										{
											iVar33 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar32);
											if (PED::IS_PED_A_PLAYER(iVar33) && iVar33 == PLAYER::PLAYER_PED_ID())
											{
												switch (iVar31)
												{
													case joaat("EVENT_SHOT_FIRED"):
														if (func_677(iVar18, &Var5))
														{
															iVar4 = 256;
															bVar2 = true;
															MISC::SET_BIT(&(Local_947.f_406.f_64), iVar18);
														}
														break;
													case joaat("EVENT_SHOT_FIRED_BULLET_IMPACT"):
													case joaat("EVENT_SHOT_FIRED_WHIZZED_BY"):
														if (!Local_947.f_406.f_2 & 4 != 0)
														{
															iVar4 = 4;
															bVar2 = true;
														}
														break;
												}
											}
										}
										EVENT::_0x1A5C5D350068A673(Var5, 1);
									}
								}
								if (!bVar2)
								{
									if (func_678(iVar18, &Var5, iVar25))
									{
										iVar4 = 256;
										bVar2 = true;
										MISC::SET_BIT(&(Local_947.f_406.f_64), iVar18);
									}
								}
							}
						}
						if (bVar2)
						{
							if (!func_679(iVar18, iVar4, iVar3))
							{
							}
							else
							{
								if (func_658(&(Local_82[iVar25 /*27*/].f_10), 8, iVar1))
								{
									func_659(&(Local_82[iVar25 /*27*/].f_10), 8, iVar1);
								}
								func_680(iVar18, 1);
								if (func_505(iVar18))
								{
									if (!func_681(iVar18, 255))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
										{
											if (!func_682(iVar18))
											{
											}
											else
											{
												func_683(iVar18);
												func_684(iVar18);
												Jump @1396; //curOff = 1201
												if (func_685(iVar18))
												{
												}
												else if (iVar23 < 2)
												{
													if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
													{
														iVar24 = 0;
														while (iVar24 < 2)
														{
															if (Local_947.f_406.f_127[iVar18] >= 32)
															{
																iVar0 = 0;
																Local_947.f_406.f_127[iVar18] = 0;
															}
															else
															{
																iVar0 = Local_947.f_406.f_127[iVar18];
																Local_947.f_406.f_127[iVar18]++;
															}
															iVar24++;
															if (func_686(iVar0, &uVar21, &iVar20, &uVar19))
															{
																if (!func_687(iVar18, iVar20))
																{
																	if (func_670(iVar18, iVar0))
																	{
																		if (!func_688(iVar18, uVar21, iVar20, uVar19))
																		{
																		}
																		else
																		{
																			func_689(iVar18, iVar20);
																		}
																	}
																}
															}
														}
														iVar23++;
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
}

void func_382()
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

	fVar0 = func_690();
	if (Local_947.f_537.f_4)
	{
		return;
	}
	if (!func_227(&iVar1))
	{
		return;
	}
	if (func_186(Local_82[iVar1 /*27*/].f_23, 1))
	{
		Local_947.f_537.f_4 = 1;
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (func_691(iVar2, 0))
	{
		return;
	}
	fVar3 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar2, true, false), Local_947.f_15);
	fVar4 = Local_947.f_537.f_9;
	fVar5 = Local_947.f_537.f_10;
	if (func_186(Local_947.f_537.f_12, 2))
	{
		bVar6 = false;
		fVar7 = ENTITY::GET_ENTITY_SPEED(iVar2);
		fVar8 = (fVar0 * (1f / Local_947.f_537.f_7));
		if (fVar7 > 0f)
		{
			if (func_692(Local_947.f_15, iVar2))
			{
				bVar6 = true;
			}
		}
		if (bVar6)
		{
			if (Local_947.f_537.f_6 < 1f)
			{
				Local_947.f_537.f_6 = (Local_947.f_537.f_6 + fVar8);
				if (Local_947.f_537.f_6 > 1f)
				{
					Local_947.f_537.f_6 = 1f;
				}
			}
		}
		else if (Local_947.f_537.f_6 > 0f)
		{
			Local_947.f_537.f_6 = (Local_947.f_537.f_6 - fVar8);
			if (Local_947.f_537.f_6 < 0f)
			{
				Local_947.f_537.f_6 = 0f;
			}
		}
		fVar9 = ((fVar7 * Local_947.f_537.f_5) * Local_947.f_537.f_6);
		fVar4 = (fVar4 + fVar9);
		fVar5 = (fVar5 + fVar9);
	}
	if (fVar3 <= fVar4)
	{
		func_248(&(Local_82[iVar1 /*27*/].f_23), 1);
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(Local_947.f_537.f_11) && ENTITY::IS_ENTITY_IN_VOLUME(iVar2, Local_947.f_537.f_11, false, 0))
	{
		func_248(&(Local_82[iVar1 /*27*/].f_23), 1);
	}
	else if (Local_947.f_537 > 0)
	{
		iVar10 = 0;
		while (iVar10 < 3)
		{
			func_693(&(Local_947.f_537.f_13[iVar10 /*9*/]), fVar5, 1082130432 /* Float: 4f */, 0, 0, 0, 0, 1);
			iVar10++;
		}
		if (func_694(&(Local_947.f_537.f_13), Local_947.f_537, Local_947.f_537.f_8))
		{
			func_248(&(Local_82[iVar1 /*27*/].f_23), 1);
		}
	}
	if (func_186(Local_82[iVar1 /*27*/].f_23, 1))
	{
		Local_947.f_537.f_4 = 1;
	}
}

void func_383()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_695(&(Local_13.f_58[iVar0 /*3*/]), &(Local_947.f_578[iVar0 /*39*/]), func_180(iVar0));
		iVar0++;
	}
}

bool func_384()
{
	bool bVar0;

	bVar0 = true;
	if (bVar0 && !UNLOCK::_UNLOCK_IS_UNLOCKED(Local_947.f_14))
	{
		return false;
	}
	if (func_696())
	{
		return false;
	}
	if (func_697(PLAYER::GET_PLAYER_INDEX()))
	{
		return false;
	}
	return true;
}

void func_385(int iParam0)
{
	if (Local_947.f_19 != iParam0)
	{
		Local_947.f_19 = iParam0;
	}
}

void func_386(int iParam0)
{
	if (Local_947.f_19.f_1 != iParam0)
	{
		Local_947.f_19.f_1 = iParam0;
	}
}

void func_387()
{
	int iVar0;

	Local_947.f_19.f_250 = -1;
	Local_947.f_19.f_251 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_947.f_19.f_251 = (Local_947.f_19.f_251 || Local_82[iVar0 /*27*/].f_1);
			Local_947.f_19.f_250 = (Local_947.f_19.f_250 && Local_82[iVar0 /*27*/].f_1);
		}
		iVar0++;
	}
}

void func_388()
{
	int iVar0;

	Local_947.f_19.f_252 = -1;
	Local_947.f_19.f_253 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_947.f_19.f_253 = (Local_947.f_19.f_253 || Local_82[iVar0 /*27*/].f_1.f_1);
			Local_947.f_19.f_252 = (Local_947.f_19.f_252 && Local_82[iVar0 /*27*/].f_1.f_1);
		}
		iVar0++;
	}
}

void func_389()
{
	int iVar0;
	float fVar1;
	char* sVar2;

	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(PLAYER::INT_TO_PLAYERINDEX(NETWORK::PARTICIPANT_ID_TO_INT())))
	{
		return;
	}
	if (!func_477(64, 255))
	{
		return;
	}
	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	if (iVar0 != 0)
	{
		return;
	}
	fVar1 = BUILTIN::VDIST(Local_947.f_15, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false));
	if (fVar1 > 50f)
	{
		return;
	}
	if (!func_190(1))
	{
		func_699(func_698(), 10000, 0, 0, 0, 1);
		func_121(1);
		return;
	}
	else if (!func_190(2))
	{
		func_699(func_700(), 10000, 0, 0, 0, 1);
		func_121(2);
		return;
	}
	if (func_598(1048576) && !func_190(4))
	{
		sVar2 = func_701(1048576);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_699(sVar2, 10000, 0, 0, 0, 1);
			func_121(4);
			return;
		}
	}
	else if (func_598(2097152) && !func_190(8))
	{
		sVar2 = func_701(2097152);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_699(sVar2, 10000, 0, 0, 0, 1);
			func_121(8);
			return;
		}
	}
	else if (func_598(4194304) && !func_190(16))
	{
		sVar2 = func_701(4194304);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_699(sVar2, 10000, 0, 0, 0, 1);
			func_121(16);
			return;
		}
	}
	else if (func_598(8388608) && !func_190(32))
	{
		sVar2 = func_701(8388608);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_699(sVar2, 10000, 0, 0, 0, 1);
			func_121(32);
			return;
		}
	}
	else if (func_598(16777216) && !func_190(64))
	{
		sVar2 = func_701(16777216);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_699(sVar2, 10000, 0, 0, 0, 1);
			func_121(64);
			return;
		}
	}
	else if (func_598(33554432) && !func_190(128))
	{
		sVar2 = func_701(33554432);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_699(sVar2, 10000, 0, 0, 0, 1);
			func_121(128);
			return;
		}
	}
	else if (func_598(67108864) && !func_190(256))
	{
		sVar2 = func_701(67108864);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_699(sVar2, 10000, 0, 0, 0, 1);
			func_121(256);
			return;
		}
	}
	else if (func_598(134217728) && !func_190(512))
	{
		sVar2 = func_701(134217728);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_699(sVar2, 10000, 0, 0, 0, 1);
			func_121(512);
			return;
		}
	}
	else if (func_598(268435456) && !func_190(1024))
	{
		sVar2 = func_701(268435456);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_699(sVar2, 10000, 0, 0, 0, 1);
			func_121(1024);
			return;
		}
	}
	else if (func_598(536870912) && !func_190(2048))
	{
		sVar2 = func_701(536870912);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_699(sVar2, 10000, 0, 0, 0, 1);
			func_121(2048);
			return;
		}
	}
	else if (func_598(1073741824 /* Float: 2f */) && !func_190(4096))
	{
		sVar2 = func_701(1073741824 /* Float: 2f */);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_699(sVar2, 10000, 0, 0, 0, 1);
			func_121(4096);
			return;
		}
	}
}

void func_390()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;

	if (!func_570())
	{
		return;
	}
	if ((func_503(64) || func_503(512)) || func_503(256))
	{
		return;
	}
	iVar0 = func_188(0);
	iVar1 = func_188(2);
	iVar2 = PLAYER::GET_PLAYER_PED(func_702(2, 0, 1, 1));
	if ((((((!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0)) || !ENTITY::DOES_ENTITY_EXIST(iVar1)) || ENTITY::IS_ENTITY_DEAD(iVar1)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1)) || !ENTITY::DOES_ENTITY_EXIST(iVar2)) || ENTITY::IS_ENTITY_DEAD(iVar2))
	{
		return;
	}
	if (Local_13.f_7.f_18 > func_596() || func_507(0, 2) < func_603())
	{
		iVar3 = 4;
	}
	else if (Local_13.f_7.f_18 > func_703())
	{
		iVar3 = 3;
	}
	else if (Local_13.f_7.f_18 > func_704())
	{
		iVar3 = 2;
	}
	else if (Local_13.f_7.f_18 > func_705())
	{
		iVar3 = 1;
	}
	iVar4 = func_706(2, 0, 1, 1);
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
	{
		fVar5 = func_707(iVar4, 2, 0);
		if (fVar5 != 0f)
		{
			iVar6 = func_708(fVar5);
			if (iVar6 > iVar3)
			{
				iVar3 = iVar6;
				if (iVar3 == 4)
				{
					func_573(32768);
				}
			}
		}
	}
	switch (Local_947.f_19.f_2)
	{
		case 0:
			Local_947.f_19.f_2 = 1;
			break;
		case 1:
			switch (iVar3)
			{
				case 1:
					Local_947.f_19.f_2 = 2;
					break;
				case 2:
					Local_947.f_19.f_2 = 3;
					break;
				case 3:
					Local_947.f_19.f_2 = 4;
					break;
				case 4:
					Local_947.f_19.f_2 = 5;
					break;
			}
			break;
		case 2:
			switch (iVar3)
			{
				case 2:
					Local_947.f_19.f_2 = 3;
					break;
				case 3:
					Local_947.f_19.f_2 = 4;
					break;
				case 4:
					Local_947.f_19.f_2 = 5;
					break;
			}
			if (func_506(iVar1, -875674219, 1, 0))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar1, iVar0, -1, -1f, -1f, -1f);
			}
			break;
		case 3:
			switch (iVar3)
			{
				case 3:
					Local_947.f_19.f_2 = 4;
					break;
				case 4:
					Local_947.f_19.f_2 = 5;
					break;
			}
			if (func_506(iVar1, -1389117756, 1, 0))
			{
				TASK::TASK_COMBAT_ANIMAL_WARN(iVar1, iVar0, 0);
			}
			break;
		case 4:
			switch (iVar3)
			{
				case 4:
					Local_947.f_19.f_2 = 5;
					break;
			}
			if (func_506(iVar1, -1952598043, 1, 0))
			{
				TASK::TASK_AMBIENT_ANIMAL_STALK(iVar1, iVar0, 0);
			}
			break;
		case 5:
			func_573(64);
			break;
	}
}

void func_391(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		func_629(iParam0, 16);
	}
	else
	{
		func_481(iParam0, 16);
	}
}

void func_392()
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
		if (VOLUME::_DOES_VOLUME_EXIST(Local_947.f_19.f_254))
		{
			VOLUME::_DELETE_VOLUME(Local_947.f_19.f_254);
		}
		func_504(1073741824 /* Float: 2f */);
		func_510(16384);
		func_510(32768);
		func_510(65536);
		func_510(131072);
		func_510(262144);
		return;
	}
	iVar0 = func_188(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_504(1073741824 /* Float: 2f */);
		func_510(16384);
		func_510(32768);
		func_510(65536);
		func_510(131072);
		func_510(262144);
		return;
	}
	if (func_709())
	{
		func_573(1073741824 /* Float: 2f */);
	}
	else if (func_496(1073741824 /* Float: 2f */, 255))
	{
		func_504(1073741824 /* Float: 2f */);
	}
	vVar1 = { PED::GET_PED_BONE_COORDS(iVar0, 21030, 0f, 0f, 0f) };
	if (func_710(vVar1, 0.2f, 0.8f, 0.1f, 0.9f))
	{
		func_478(32768);
	}
	else
	{
		func_510(32768);
	}
	if (func_477(32768, 255))
	{
		if (func_711(iVar0))
		{
			func_510(32768);
		}
	}
	iVar4 = func_239();
	iVar5 = func_188(2);
	if (iVar4 == 1)
	{
		iVar5 = PED::GET_MOUNT(iVar0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar5) && !PED::IS_PED_DEAD_OR_DYING(iVar5, true))
	{
		vVar6 = { PED::GET_PED_BONE_COORDS(iVar5, 21030, 0f, 0f, 0f) };
		if (func_710(vVar6, 0.1f, 0.9f, 0.1f, 0.9f))
		{
			func_478(65536);
		}
		else
		{
			func_510(65536);
		}
	}
	else
	{
		func_478(65536);
	}
	if (func_712() || ENTITY::IS_ENTITY_ON_SCREEN(PLAYER::PLAYER_PED_ID()))
	{
		func_478(16384);
	}
	else
	{
		func_510(16384);
	}
	if (func_713())
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
						if (func_710(vVar1, 0.2f, 0.8f, 0.1f, 0.9f))
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
				func_510(131072);
				func_510(262144);
			}
			else
			{
				func_510(131072);
				func_478(262144);
			}
		}
		else
		{
			func_478(131072);
			func_478(262144);
		}
	}
	else
	{
		func_478(131072);
		func_478(262144);
	}
}

void func_393()
{
	int iVar0;
	char[] cVar1[8];

	if (func_477(-2147483648, 255))
	{
		return;
	}
	iVar0 = 180;
	while (Local_947.f_19.f_151 < iVar0)
	{
		cVar1 = func_601(Local_947.f_19.f_151);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar1))
		{
			AUDIO::_0xEF51242E35242B47(cVar1);
		}
		Local_947.f_19.f_151++;
		if (Local_947.f_19.f_151 > (iVar0 - 1))
		{
			func_478(-2147483648);
		}
	}
}

void func_394()
{
	switch (Local_947.f_19)
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
	if (func_577(0, 255, 1) < 30f)
	{
		func_714();
	}
}

void func_395()
{
}

void func_396()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;

	iVar0 = func_188(0);
	iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return;
	}
	if (!func_527(255))
	{
		func_715(0);
		return;
	}
	vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar1, true, false) };
	fVar5 = BUILTIN::VDIST(vVar2, ENTITY::GET_ENTITY_COORDS(iVar0, false, false));
	switch (func_239())
	{
		case 9:
		case 10:
		case 11:
			if (func_530(8, 255))
			{
				func_715(0);
			}
			else
			{
				func_716(1123680256 /* Float: 125f */);
			}
			break;
		default:
			func_716(1123680256 /* Float: 125f */);
			break;
	}
	if (fVar5 < 35f)
	{
		switch (func_239())
		{
			case 9:
			case 10:
			case 11:
				if (func_583(0, 35f, 1, 1) > 1)
				{
					PED::_0x463803429297117C(iVar0, vVar2, 1, 0);
					func_714();
				}
				else
				{
					if (Local_947.f_19.f_161 == 0)
					{
						func_717(&(Local_947.f_19.f_161));
					}
					else if ((NETWORK::GET_TIME_DIFFERENCE(Local_947.f_19.f_161, NETWORK::GET_NETWORK_TIME_ACCURATE()) + Local_947.f_19.f_163) > 60000)
					{
						func_478(536870912);
					}
					iVar6 = UIFEED::_0xC17F69E1418CD11F(1);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::PARTICIPANT_ID()))
					{
						if (iVar6 == 0)
						{
							if (!func_530(8, 255))
							{
								func_699("NB_PHOTOGRAPHY_H_MORE_FS", 10000, 0, 0, 0, 1);
								func_718(8);
							}
							else if (!func_530(16, 255))
							{
								if (func_587(179) || (NETWORK::GET_TIME_DIFFERENCE(Local_947.f_19.f_161, NETWORK::GET_NETWORK_TIME_ACCURATE()) + Local_947.f_19.f_163) > 30000)
								{
									func_699("NB_PHOTOGRAPHY_H_RETURN_FS", 10000, 0, 0, 0, 1);
									func_718(16);
								}
							}
						}
					}
					if (func_583(0, 15f, 0, 1) > 0)
					{
						func_719(100);
					}
				}
				break;
			default:
				PED::_0x463803429297117C(iVar0, vVar2, 1, 0);
				func_714();
				break;
		}
	}
	else
	{
		if (Local_947.f_19.f_161 != 0)
		{
			Local_947.f_19.f_163 = (Local_947.f_19.f_163 + NETWORK::GET_TIME_DIFFERENCE(Local_947.f_19.f_161, NETWORK::GET_NETWORK_TIME_ACCURATE()));
			Local_947.f_19.f_161 = 0;
		}
		func_720(8);
		func_720(16);
	}
	func_721();
}

void func_397()
{
	int iVar0;

	func_722();
	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_716(1123680256 /* Float: 125f */);
		func_719(100);
		func_724(func_723());
	}
}

void func_398()
{
	int iVar0;
	int iVar1;
	float fVar2;

	func_716(1123680256 /* Float: 125f */);
	func_722();
	func_719(100);
	func_724(func_723());
	iVar0 = func_188(0);
	iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
	if (PLAYER::PLAYER_PED_ID() != iVar1)
	{
		return;
	}
	if (!func_527(255))
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
				if (func_725(7, Local_947.f_4) || func_726(7, Local_947.f_4))
				{
					if (!func_587(5))
					{
						if (!func_590(1))
						{
							func_591(0, 0, 5, 0);
						}
					}
				}
				else if (func_727(7, Local_947.f_4))
				{
					if (!func_587(4))
					{
						if (!func_590(1))
						{
							func_591(0, 0, 4, 0);
						}
					}
				}
				else if (!func_587(3))
				{
					if (!func_590(1))
					{
						func_591(0, 0, 3, 0);
					}
				}
			}
		}
	}
}

void func_399()
{
	func_716(1123680256 /* Float: 125f */);
	func_722();
	func_719(100);
	func_724(-1);
}

void func_400()
{
	int iVar0;
	int iVar1;

	func_716(1123680256 /* Float: 125f */);
	func_722();
	iVar0 = func_188(0);
	iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false)) < 15f)
	{
		func_719(100);
		func_724(func_728());
	}
	else
	{
		func_719(100);
		func_724(func_729());
	}
}

void func_401()
{
	int iVar0;

	func_719(100);
	func_724(-1);
	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_716(1123680256 /* Float: 125f */);
		func_584(0, 65f, 5000, 0, 9, 10, 11, -1, -1, -1, 1, -1);
	}
}

void func_402()
{
	int iVar0;

	func_719(100);
	func_724(-1);
	if ((NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20) && PLAYER::PLAYER_ID() == Local_13.f_7.f_20) && func_530(2, 255))
	{
		func_478(4);
		return;
	}
	if (func_593(2) > 1)
	{
		return;
	}
	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_716(1123680256 /* Float: 125f */);
		if (func_598(256))
		{
			func_584(0, 65f, 5000, 0, 14, 15, -1, -1, -1, -1, 1, -1);
		}
		else
		{
			func_584(0, 65f, 5000, 0, 12, 13, -1, -1, -1, -1, 1, -1);
		}
	}
}

void func_403()
{
	func_720(2);
}

void func_404()
{
	func_715(0);
	func_720(2);
}

void func_405()
{
	func_478(64);
	func_573(2048);
}

void func_406()
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	func_730();
	func_731();
	iVar0 = func_188(0);
	switch (func_239())
	{
		case 0:
			vVar1 = { func_370(0) };
			fVar4 = func_371(0);
			break;
		default:
			vVar1 = { func_370(3) };
			fVar4 = func_371(3);
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_506(iVar0, 713668775, 1, 0))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, vVar1, 1f, -1, 0.25f, 0, fVar4);
		}
	}
}

void func_407()
{
	int iVar0;

	func_732();
	func_504(268435456);
	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_733())
		{
			func_734();
			func_478(2048);
		}
		if (Local_13.f_7.f_10 != 0)
		{
			if (!func_587(16))
			{
				if (!func_590(1))
				{
					if (func_587(16))
					{
						func_588(&(Local_13.f_7.f_10));
					}
					else
					{
						func_591(0, 0, 16, 0);
					}
				}
			}
			else
			{
				func_735();
			}
		}
		else
		{
			func_588(&(Local_13.f_7.f_10));
		}
		func_736(iVar0);
	}
}

void func_408()
{
	func_510(8);
	func_510(16);
}

void func_409()
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_737();
	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_730();
		if (!func_590(1))
		{
			if (func_595(Local_13.f_7.f_9, 1000))
			{
				iVar1 = func_599();
				if (!func_587(iVar1))
				{
					func_591(0, 0, iVar1, 0);
				}
			}
		}
		if (func_346(iVar0, 993674639))
		{
			iVar2 = func_358(func_738());
			if (iVar2 == 0 || (PED::_IS_PED_USING_SCENARIO_HASH(iVar0, iVar2) && TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar0, 0)))
			{
				func_573(268435456);
			}
		}
	}
}

void func_410()
{
	int iVar0;
	int iVar1;

	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_730();
		if (func_346(iVar0, 993674639))
		{
			iVar1 = func_358(func_738());
			if (iVar1 == 0 || (PED::_IS_PED_USING_SCENARIO_HASH(iVar0, iVar1) && TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar0, 0)))
			{
				func_573(268435456);
			}
		}
	}
}

void func_411()
{
	int iVar0;

	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_730();
		if (func_736(iVar0))
		{
			if (func_506(iVar0, -2017877118, 1, 0))
			{
				TASK::TASK_PLAY_ANIM(iVar0, func_354(0), func_616(0), 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
			}
		}
	}
}

void func_412()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;

	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!func_503(536870912))
		{
			func_730();
			if (!func_590(1))
			{
				func_584(0, 65f, 5000, 0, 83, 84, 85, -1, -1, -1, 0, -1);
			}
		}
		if (func_239() == 0)
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (func_346(iVar0, -2017877118))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_354(0), func_616(0), 1))
					{
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iVar0, func_354(0), func_616(0)) > 0.5f)
						{
							TASK::STOP_ANIM_TASK(iVar0, func_354(0), func_616(0), -4f);
						}
					}
				}
			}
		}
		if (!func_570())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (func_503(536870912))
				{
					if (Local_947.f_19.f_162 == 0)
					{
						func_717(&(Local_947.f_19.f_162));
					}
					if (func_595(Local_947.f_19.f_162, 200))
					{
						PED::SET_PED_TO_RAGDOLL(iVar0, 2000, 5000, 0, false, false, false);
						vVar1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iVar0) };
						ENTITY::APPLY_FORCE_TO_ENTITY(iVar0, 3, -vVar1 * Vector(0.75f, 0.75f, 0.75f), 0f, 0f, 0f, PED::_0xC5303F460A40D21D(iVar0, 21030), false, false, true, false, true);
					}
				}
				else if (!PED::IS_PED_RAGDOLL(iVar0))
				{
					vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
					vVar7 = { func_370(1) };
					if (vVar4.z < vVar7.z || BUILTIN::VDIST(vVar4, Local_13.f_7.f_27) < (BUILTIN::VDIST(vVar4, vVar7) + 0.25f))
					{
						if (!func_587(86))
						{
							func_591(0, 0, 86, 1);
						}
						func_573(536870912);
					}
				}
			}
		}
	}
}

void func_413()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_739();
	func_740();
	if (!func_570())
	{
		func_573(8192);
	}
	else if (!func_503(8192))
	{
		iVar0 = func_188(2);
		iVar1 = func_188(0);
		iVar2 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (func_741())
				{
					if (func_506(iVar0, 518218985, 1, 0) && !func_346(iVar0, 518218985))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
						{
							TASK::TASK_SMART_FLEE_PED(iVar0, iVar1, 500f, -1, 0, 1077936128 /* Float: 3f */, 0);
							func_573(8192);
							func_573(256);
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !PED::IS_PED_DEAD_OR_DYING(iVar2, true))
						{
							TASK::TASK_SMART_FLEE_PED(iVar0, iVar2, 500f, -1, 0, 1077936128 /* Float: 3f */, 0);
							func_573(8192);
							func_573(256);
						}
					}
				}
				else if (func_346(iVar0, -1952598043) || func_346(iVar0, -1442466670))
				{
					func_573(8192);
					func_573(256);
				}
				else
				{
					iVar3 = func_358(4);
					if (iVar3 != 0)
					{
						TASK::_TASK_START_SCENARIO_IN_PLACE(iVar0, iVar3, 0, false, 0, -1f, false);
					}
					func_573(8192);
					func_573(256);
				}
			}
		}
	}
}

void func_414()
{
	int iVar0;

	func_739();
	func_510(64);
	func_192(0);
	iVar0 = func_188(0);
	func_742(iVar0);
}

void func_415()
{
	func_739();
	func_510(64);
	func_743();
}

void func_416()
{
	int iVar0;

	iVar0 = func_188(0);
	func_739();
	func_715(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_506(iVar0, 713668775, 1, 0))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, func_508(0), 1f, -1, 0.25f, 0, func_744(0));
		}
	}
}

void func_417()
{
}

void func_418()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;

	func_478(64);
	func_510(4096);
	func_745(1123680256 /* Float: 125f */);
	iVar0 = func_188(0);
	iVar1 = func_188(2);
	iVar2 = func_188(1);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && ENTITY::DOES_ENTITY_EXIST(iVar1)) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		if (PED::IS_PED_ON_MOUNT(iVar0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (func_506(iVar0, 518218985, 1, 0))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, iVar1, 500f, -1, 0, 1077936128 /* Float: 3f */, 0);
				}
			}
		}
		else if (func_506(iVar0, 242628503, 1, 0))
		{
			TASK::CLEAR_SEQUENCE_TASK(&(Local_947.f_19.f_164));
			TASK::_0x23767D80C7EED7C6(&(Local_947.f_19.f_164), -1556253261);
			vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar1, true, false) };
			if (PED::IS_PED_USING_ANY_SCENARIO(iVar0))
			{
				PED::_0xEEED8FAFEC331A70(0, vVar3, 3);
			}
			else
			{
				TASK::TASK_STAND_STILL(0, 750);
				TASK::TASK_REACT(0, iVar1, vVar3, "DEFAULT_SHOCKED", 3f, 0f, 4);
			}
			TASK::TASK_SMART_FLEE_PED(0, iVar1, 500f, -1, 0, 2f, iVar2);
			TASK::CLOSE_SEQUENCE_TASK(Local_947.f_19.f_164);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				TASK::TASK_PERFORM_SEQUENCE(iVar0, Local_947.f_19.f_164);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_742(iVar0);
	}
	if (!func_190(268435456))
	{
		if (func_190(134217728))
		{
			func_121(268435456);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, Local_947.f_19.f_45, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, Local_947.f_19.f_45, joaat("REL_MP_LIKE_ALL_PLAYERS"));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		if (func_672(2, 255))
		{
			func_573(16384);
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			if (func_506(iVar1, -1442466670, 1, 0))
			{
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iVar1, 100f, 0, 0);
			}
		}
	}
	else
	{
		func_573(128);
	}
	iVar6 = PLAYER::PLAYER_PED_ID();
	iVar7 = PLAYER::INT_TO_PLAYERINDEX(NETWORK::PARTICIPANT_ID_TO_INT());
	if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar7))
	{
		if (!func_190(262144))
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar6, false, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false)) < 30f)
			{
				func_121(262144);
			}
		}
	}
}

void func_419()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;

	iVar0 = func_188(2);
	iVar1 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (func_506(iVar0, 518218985, 1, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, iVar1, 500f, -1, 0, 1077936128 /* Float: 3f */, 0);
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
			if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_24))
			{
				iVar5 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_24);
				if (ENTITY::DOES_ENTITY_EXIST(iVar5))
				{
					if (func_506(iVar1, 2121492476, 1, 0))
					{
						TASK::TASK_REACT(iVar1, iVar5, 0f, 0f, 0f, "DEFAULT_SHOCKED", 2000f, 1000f, 4);
					}
				}
			}
			else if (func_496(4096, 255))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (func_506(iVar1, 2121492476, 1, 0))
					{
						TASK::TASK_REACT(iVar1, iVar0, 0f, 0f, 0f, "DEFAULT_SHOCKED", 2000f, 1000f, 4);
					}
				}
				else if (func_506(iVar1, 2121492476, 1, 0))
				{
					TASK::TASK_REACT(iVar1, 0, ENTITY::GET_ENTITY_COORDS(iVar1, false, false), "DEFAULT_SHOCKED", 2000f, 1000f, 4);
				}
			}
		}
	}
}

void func_420()
{
	int iVar0;

	if (!func_590(1))
	{
		func_591(0, 0, 99, 0);
	}
	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!func_346(iVar0, 2121492476))
		{
			func_746(-1);
			func_747();
		}
	}
}

void func_421()
{
	int iVar0;
	int iVar1;

	func_573(128);
	func_504(64);
	func_174(2);
	iVar0 = func_188(0);
	iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
	if (func_595(Local_13.f_7.f_10, 2000))
	{
		if (func_496(16384, 255))
		{
			func_748();
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			if (func_506(iVar0, 1227113341, 1, 0))
			{
				TASK::TASK_GO_TO_ENTITY(iVar0, iVar1, -1, 5f, 2f, 2f, 0);
			}
		}
	}
}

void func_422()
{
	int iVar0;

	func_174(2);
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(NETWORK::PARTICIPANT_ID_TO_INT());
	if (func_749(2, iVar0))
	{
		func_748();
	}
}

void func_423()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	func_192(0);
	func_745(1123680256 /* Float: 125f */);
	func_504(64);
	iVar0 = func_188(2);
	iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
		switch (func_239())
		{
			case 3:
			case 5:
				if (func_506(iVar0, 1120685857, 1, 0))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iVar0, vVar2, 100f, 0, 16);
				}
				break;
			default:
				if (func_506(iVar0, 518218985, 1, 0))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, iVar1, 100f, -1, 0, 1077936128 /* Float: 3f */, 0);
				}
				break;
		}
	}
}

void func_424()
{
	func_192(0);
	func_745(1123680256 /* Float: 125f */);
}

void func_425()
{
	int iVar0;
	int iVar1;

	func_745(1123680256 /* Float: 125f */);
	func_715(0);
	iVar0 = func_188(0);
	iVar1 = func_188(2);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (func_506(iVar0, 518218985, 1, 0))
			{
				TASK::TASK_SMART_FLEE_PED(iVar0, iVar1, 500f, -1, 0, 1077936128 /* Float: 3f */, 0);
			}
		}
	}
}

void func_426()
{
	func_478(64);
}

void func_427()
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;

	func_750(2, 10f, 10f, 1f);
	iVar0 = func_706(0, 0, 1, 1);
	if (iVar0 == NETWORK::PARTICIPANT_ID())
	{
		vVar2 = { func_370(2) };
		iVar5 = func_589(&uVar1, vVar2, 10f, 0, 0);
		if (iVar5 < 1)
		{
			func_573(1);
		}
		else
		{
			func_504(1);
			return;
		}
	}
	else
	{
		func_504(1);
	}
	iVar6 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar6) && !PED::IS_PED_DEAD_OR_DYING(iVar6, true))
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar6, true, false), func_370(2)) > 5f)
		{
			if (func_506(iVar6, 713668775, 1, 0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar6, func_370(2), 1f, -1, 0.25f, 0, func_371(2));
			}
		}
		else
		{
			func_751();
			func_752();
		}
		func_584(0, 65f, 5000, 0, 109, 110, 111, -1, -1, -1, 1, 112);
	}
}

void func_428()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;

	func_739();
	iVar0 = func_188(0);
	iVar2 = func_706(0, 0, 1, 1);
	if (iVar2 == NETWORK::PARTICIPANT_ID())
	{
		vVar3 = { func_370(2) };
		iVar6 = func_589(&iVar1, vVar3, 10f, 0, 0);
		if (iVar6 < 1)
		{
			func_573(1);
			return;
		}
		else
		{
			func_504(1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		Local_947.f_19.f_155 = iVar1;
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_947.f_19.f_155))
		{
			AITRANSPORT::_0x67F7CEAC2391E114(Local_947.f_19.f_155, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_947.f_19.f_155) && !PED::IS_PED_DEAD_OR_DYING(Local_947.f_19.f_155, true))
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Local_947.f_19.f_155, true, false), func_370(2)) < 20f)
			{
				if (PED::_GET_RIDER_OF_MOUNT(Local_947.f_19.f_155, true) == 0)
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_947.f_19.f_155))
					{
						AITRANSPORT::_0x67F7CEAC2391E114(Local_947.f_19.f_155, 1);
					}
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						if (func_506(iVar0, 1868526510, 1, 0))
						{
							TASK::TASK_MOUNT_ANIMAL(iVar0, Local_947.f_19.f_155, -1, -1, 1f, 1, 0, 0);
							return;
						}
					}
				}
				else
				{
					func_751();
					func_752();
					func_584(0, 65f, 5000, 0, 113, 114, 115, -1, -1, -1, 1, 116);
				}
			}
		}
	}
}

void func_429()
{
	int iVar0;
	float fVar1;
	int iVar2;

	func_735();
	func_739();
	if (func_733())
	{
		func_734();
		func_478(2048);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_947.f_19.f_155) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_947.f_19.f_155)) && PED::IS_PED_DEAD_OR_DYING(Local_947.f_19.f_155, true))
	{
		func_573(1);
		return;
	}
	func_732();
	iVar0 = func_188(0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		fVar1 = func_753(0, func_370(2));
		iVar2 = PED::GET_MOUNT(iVar0);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && TASK::_0xAC5045AB7F1A34FD(iVar2)) && fVar1 > (10f + 5f))
		{
			func_478(536870912);
		}
		else if (fVar1 > 6f)
		{
			if (func_506(iVar0, 713668775, 1, 0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, func_370(2), 1.5f, -1, 0.5f, 0, 40000f);
			}
		}
		else
		{
			func_754(-1);
		}
	}
}

void func_430()
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;

	func_730();
	func_731();
	iVar0 = func_706(0, 0, 1, 1);
	if (iVar0 == NETWORK::PARTICIPANT_ID())
	{
		vVar2 = { func_370(2) };
		iVar5 = func_589(&uVar1, vVar2, (10f + 2f), 0, 0);
		if (iVar5 < 1)
		{
			func_573(1);
			return;
		}
	}
	iVar6 = func_188(0);
	if ((ENTITY::DOES_ENTITY_EXIST(Local_947.f_19.f_155) && !PED::IS_PED_DEAD_OR_DYING(Local_947.f_19.f_155, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_947.f_19.f_155))
	{
		AITRANSPORT::_0x67F7CEAC2391E114(Local_947.f_19.f_155, 1);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(iVar6) && !PED::IS_PED_DEAD_OR_DYING(iVar6, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar6))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_947.f_19.f_155) && !PED::IS_PED_DEAD_OR_DYING(Local_947.f_19.f_155, true))
		{
			fVar7 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Local_947.f_19.f_155, false, false), func_370(2));
			if (fVar7 > 20f)
			{
				func_573(1);
				return;
			}
			iVar8 = PED::_GET_RIDER_OF_MOUNT(Local_947.f_19.f_155, true);
			if (iVar8 != 0 && iVar8 != iVar6)
			{
				func_573(1);
				return;
			}
			if (func_506(iVar6, 1868526510, 1, 0))
			{
				TASK::TASK_MOUNT_ANIMAL(iVar6, Local_947.f_19.f_155, -1, -1, 1f, 1, 0, 0);
			}
		}
		else
		{
			func_573(1);
		}
	}
}

void func_431()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_188(0);
	iVar1 = PED::GET_MOUNT(iVar0);
	iVar2 = PLAYER::PLAYER_ID();
	iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
	if (((((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && ENTITY::DOES_ENTITY_EXIST(iVar1)) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true)) && ENTITY::DOES_ENTITY_EXIST(iVar3)) && !PED::IS_PED_DEAD_OR_DYING(iVar3, true))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			if (func_506(iVar1, 1041577989, 1, 0))
			{
				TASK::TASK_HORSE_ACTION(iVar1, 2, 0, 0);
				func_591(0, 0, 117, 0);
			}
		}
	}
}

void func_432()
{
}

void func_433()
{
}

void func_434()
{
	int iVar0;

	func_510(64);
	if (!func_477(4096, 255))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_947.f_19.f_155) && !PED::IS_PED_DEAD_OR_DYING(Local_947.f_19.f_155, true))
		{
			iVar0 = PLAYER::PLAYER_PED_ID();
			if (PED::_0xF103823FFE72BB49(Local_947.f_19.f_155) == iVar0 || (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_25) && Local_13.f_7.f_25 == PLAYER::PLAYER_ID()))
			{
				func_478(4096);
			}
		}
	}
}

void func_435()
{
	int iVar0;

	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (PED::IS_PED_ON_MOUNT(iVar0))
		{
			if (func_506(iVar0, 501393341, 1, 0))
			{
				TASK::TASK_DISMOUNT_ANIMAL(iVar0, 1, 0, 0, 0, 0);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_947.f_19.f_155))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_947.f_19.f_155))
		{
			AITRANSPORT::_0x67F7CEAC2391E114(Local_947.f_19.f_155, 0);
		}
	}
}

void func_436()
{
	int iVar0;

	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_506(iVar0, 713668775, 1, 0))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, func_508(0), 1f, -1, 0.25f, 0, func_744(0));
		}
	}
}

void func_437()
{
	int iVar0;

	iVar0 = func_188(0);
	if (func_506(iVar0, 923520851, 1, 0))
	{
		TASK::TASK_WANDER_IN_AREA(iVar0, func_508(0), 5f, 10f, 20f, 0);
	}
}

void func_438()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_573(2);
	func_739();
	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		iVar1 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0);
		if (iVar1 != joaat("REL_PLAYER_ENEMY"))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, joaat("REL_PLAYER_ENEMY"));
		}
		if (!PED::GET_PED_CONFIG_FLAG(iVar0, 6, false))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 6, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			func_742(iVar0);
		}
		if (PED::IS_PED_ON_MOUNT(iVar0))
		{
			if (func_506(iVar0, 518218985, 1, 0))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20))
				{
					iVar2 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						TASK::TASK_SMART_FLEE_PED(iVar0, iVar2, 500f, -1, 0, 2f, 0);
					}
					else
					{
						TASK::TASK_SMART_FLEE_COORD(iVar0, func_370(2), 500f, -1, 272, 2f);
					}
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(iVar0, func_370(2), 500f, -1, 272, 2f);
				}
			}
		}
	}
	if (!func_582(33554432))
	{
		iVar3 = func_188(1);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar3) && !PED::IS_PED_DEAD_OR_DYING(iVar3, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar3))
		{
			func_478(33554432);
			PED::SET_PED_CONFIG_FLAG(iVar3, 467, true);
		}
	}
}

void func_439()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;

	func_739();
	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		iVar1 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0);
		if (iVar1 != joaat("REL_PLAYER_ENEMY"))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, joaat("REL_PLAYER_ENEMY"));
		}
		if (!PED::GET_PED_CONFIG_FLAG(iVar0, 6, false))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 6, true);
		}
		if (func_506(iVar0, 518218985, 1, 0))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20))
			{
				iVar2 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, iVar2, 500f, -1, 0, 1077936128 /* Float: 3f */, 0);
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(iVar0, func_370(2), 500f, -1, 17039632, 1077936128);
				}
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(iVar0, func_370(2), 500f, -1, 17039632, 1077936128);
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
					fVar7 = func_577(0, iVar6, 1);
				}
				if (func_505(0) && fVar7 < 25f)
				{
					func_584(0, 65f, 4000, 0, 125, 126, 127, 118, 119, 120, 0, -1);
				}
				else if (func_587(118) && fVar7 < 15f)
				{
					func_584(0, 65f, 4000, 0, 121, 122, 123, 118, 119, 120, 0, -1);
				}
				else
				{
					func_584(0, 65f, 4000, 0, 118, 119, 120, -1, -1, -1, 0, -1);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar5) && !PED::IS_PED_DEAD_OR_DYING(iVar5, true))
			{
				if (TASK::_0xEFC4303DDC6E60D3(iVar5) && TASK::_0xED1F514AF4732258(iVar5) == iVar3)
				{
					TASK::_0xED27560703F37258(iVar5);
				}
				if (PLAYER::_GET_MOUNT_OF_PLAYER(iVar4) == iVar3 || Local_13.f_7.f_25 == iVar4)
				{
					if (func_755(iVar5))
					{
						if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, false, false), ENTITY::GET_ENTITY_COORDS(iVar5, false, false)) < 50f)
						{
							func_573(4);
						}
					}
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar3))
				{
					if (func_503(4))
					{
						if (func_506(iVar3, 1041577989, 1, 0))
						{
							TASK::TASK_HORSE_ACTION(iVar3, 2, 0, 0);
							func_591(0, 0, 124, 0);
						}
					}
				}
			}
		}
	}
}

void func_440()
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_756();
	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		iVar1 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0);
		if (iVar1 != joaat("REL_PLAYER_ENEMY"))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, joaat("REL_PLAYER_ENEMY"));
		}
		if (!PED::GET_PED_CONFIG_FLAG(iVar0, 6, false))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 6, true);
		}
		if (func_506(iVar0, 518218985, 1, 0))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20))
			{
				iVar2 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, iVar2, 500f, -1, 0, 1077936128 /* Float: 3f */, 0);
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(iVar0, func_370(2), 500f, -1, 272, 1077936128);
				}
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(iVar0, func_370(2), 500f, -1, 272, 1077936128);
			}
		}
	}
}

void func_441()
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_756();
	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		iVar1 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0);
		if (iVar1 != joaat("REL_PLAYER_ENEMY"))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, joaat("REL_PLAYER_ENEMY"));
		}
		if (!PED::GET_PED_CONFIG_FLAG(iVar0, 6, false))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 6, true);
		}
		if (func_506(iVar0, 518218985, 1, 0))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20))
			{
				iVar2 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, iVar2, 500f, -1, 0, 1077936128 /* Float: 3f */, 0);
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(iVar0, func_370(2), 500f, -1, 272, 1077936128);
				}
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(iVar0, func_370(2), 500f, -1, 272, 1077936128);
			}
		}
		if (PED::_IS_PED_HOGTIED(iVar0) || PED::_IS_PED_LASSOED(iVar0))
		{
			func_584(0, 65f, 4000, 3, 79, 80, 81, 74, 75, 76, 1, -1);
		}
		else if (func_587(79) && !func_587(82))
		{
			func_591(0, 3, 82, 0);
		}
		else
		{
			func_584(0, 65f, 4000, 3, 74, 75, 76, -1, -1, -1, !func_587(79), -1);
		}
	}
}

void func_442()
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = func_188(0);
	iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (!func_527(255))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		fVar2 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false));
		func_716(1123680256 /* Float: 125f */);
		if (fVar2 < 35f)
		{
			func_714();
		}
		func_584(0, 65f, 5000, 0, 0, 1, 2, -1, -1, -1, 1, -1);
	}
}

void func_443()
{
	int iVar0;

	func_757(1);
	if (!func_758("BOOL_INITIAL"))
	{
		func_759("BOOL_INITIAL");
	}
	if (func_499())
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(Local_947.f_19.f_246, "REEL_SLOW", 1))
		{
			func_573(262144);
		}
	}
	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_742(iVar0);
	}
}

void func_444()
{
	if (!func_758("BOOL_REEL_SLOW"))
	{
		func_759("BOOL_REEL_SLOW");
	}
	if (func_499())
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(Local_947.f_19.f_246, "REEL_FAST", 1))
		{
			func_573(524288);
		}
	}
}

void func_445()
{
	func_591(0, 0, 129, 0);
	if (func_757(1))
	{
		if (func_587(129))
		{
			func_760(1);
		}
	}
}

void func_446()
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = func_188(0);
	iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!func_587(130))
		{
			func_591(0, 0, 130, 0);
		}
		if (!func_496(65536, 255))
		{
			if (func_527(255))
			{
				fVar2 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false));
				if (fVar2 < 10f)
				{
					func_573(65536);
				}
			}
		}
	}
	if (func_499())
	{
		if (func_608(2))
		{
			if (!func_496(1048576, 255))
			{
				func_573(1048576);
			}
		}
		else if (ANIMSCENE::_0x8D81E7824B7753F7(Local_947.f_19.f_246, "Idle", 1))
		{
			if (func_761() > 0.45f)
			{
				if (func_757(2))
				{
					func_760(2);
				}
			}
		}
	}
	if (func_595(Local_13.f_7.f_10, 120000))
	{
		func_573(131072);
	}
}

void func_447()
{
	int iVar0;

	func_719(100);
	func_724(-1);
	if ((func_587(3) || func_587(5)) || func_587(4))
	{
		func_584(0, 65f, 5000, 0, 9, 10, 11, -1, -1, -1, 1, -1);
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
	if (PLAYER::PLAYER_PED_ID() != iVar0)
	{
		return;
	}
	if (func_725(7, Local_947.f_4) || func_726(7, Local_947.f_4))
	{
		if (!func_587(5))
		{
			if (!func_590(1))
			{
				func_591(0, 0, 5, 0);
			}
		}
	}
	else if (func_727(7, Local_947.f_4))
	{
		if (!func_587(4))
		{
			if (!func_590(1))
			{
				func_591(0, 0, 4, 0);
			}
		}
	}
	else if (!func_587(3))
	{
		if (!func_590(1))
		{
			func_591(0, 0, 3, 0);
		}
	}
}

void func_448()
{
	func_478(64);
}

void func_449()
{
	func_715(0);
}

void func_450()
{
}

void func_451()
{
	func_732();
	func_754(-1);
	func_735();
	if (func_733())
	{
		func_734();
		func_478(2048);
	}
}

void func_452()
{
	func_760(3);
}

void func_453()
{
	int iVar0;
	vector3 vVar1;

	if (func_582(2048))
	{
		func_613();
		func_762(1);
		func_763();
	}
	if (func_598(512))
	{
		if (func_477(128, 255))
		{
			if (!func_587(73) && !func_587(72))
			{
				iVar0 = func_188(0);
				vVar1 = { func_508(0) };
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
				{
					vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
				}
				if (func_592(vVar1, 35f) > 1)
				{
					func_591(0, 0, 73, 0);
				}
				else
				{
					func_591(0, 0, 72, 0);
				}
			}
		}
		else if (func_707(NETWORK::PARTICIPANT_ID(), 0, 1) < 35f)
		{
			func_478(128);
		}
	}
	func_764();
}

void func_454()
{
	func_510(64);
}

void func_455()
{
}

void func_456()
{
	func_478(64);
}

void func_457()
{
	int iVar0;

	func_730();
	func_731();
	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), func_370(5)) > 4f)
		{
			if (func_506(iVar0, 713668775, 1, 0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, func_370(5), 1f, -1, 0.25f, 0, func_371(5));
			}
		}
	}
}

void func_458()
{
}

void func_459()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;

	if (func_733())
	{
		func_734();
		func_478(2048);
	}
	func_732();
	func_735();
	iVar0 = func_188(0);
	iVar9 = 0;
	switch (func_239())
	{
		case 11:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
			{
				if (!func_496(4194304, 255))
				{
					PED::SET_PED_CONFIG_FLAG(iVar0, 169, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 340, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 137, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 26, true);
					func_573(4194304);
				}
				if (!func_496(2097152, 255))
				{
					AUDIO::STOP_PED_SPEAKING(iVar0, true);
					func_573(2097152);
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					if (!func_503(8388608))
					{
						PED::SET_PED_CONFIG_FLAG(iVar0, 6, true);
						func_573(8388608);
					}
				}
			}
			func_754(-1);
			if (Local_13.f_7.f_14 != 0)
			{
				iVar9 = NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_14, NETWORK::GET_NETWORK_TIME_ACCURATE());
			}
			if ((iVar9 + Local_13.f_7.f_17) > 15000)
			{
				if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20) && Local_13.f_7.f_20 == NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()))
				{
					func_478(67108864);
				}
			}
			break;
		case 9:
			if (func_496(67108864, 255))
			{
				if (func_577(0, 255, 1) > (3f + 1f))
				{
					func_765(&(Local_947.f_406), 500);
					func_539(&(Local_947.f_406), 4000);
					func_504(67108864);
				}
			}
			else if (func_577(0, 255, 1) < 3.5f)
			{
				func_765(&(Local_947.f_406), 8000);
				func_539(&(Local_947.f_406), 8000);
				func_573(67108864);
			}
			if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)) && !func_503(4194304))
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 26, true);
				func_573(4194304);
			}
			if (WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar1, false, 0, false))
			{
				if (iVar1 == joaat("WEAPON_UNARMED"))
				{
					if (func_506(iVar0, 716706914, 1, 0))
					{
						iVar2 = WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false);
						WEAPON::SET_CURRENT_PED_WEAPON(iVar0, iVar2, false, 0, false, false);
						TASK::TASK_SWAP_WEAPON(iVar0, 1, 1, 0, 0);
					}
				}
				else if (!func_496(33554432, 255))
				{
					if (func_736(iVar0))
					{
						func_573(33554432);
					}
				}
				else if (func_506(iVar0, 1237250926, 1, 0))
				{
					vVar6 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iVar0) };
					func_565(vVar6);
					vVar6 = { vVar6 * Vector(25f, 25f, 25f) };
					vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) + vVar6 };
					vVar3 = { vVar3 + Vector(25f, 0f, 0f) };
					TASK::TASK_AIM_GUN_AT_COORD(iVar0, vVar3, -1, false, true);
				}
			}
			break;
		case 10:
			if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)) && !func_503(4194304))
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 26, true);
				func_573(4194304);
			}
			func_766(Local_13.f_7.f_21, 16777216, 9, 10);
			break;
	}
}

void func_460()
{
	func_765(&(Local_947.f_406), 500);
	func_539(&(Local_947.f_406), 1000);
}

void func_461()
{
	int iVar0;

	if (func_587(173) && !func_590(1))
	{
		if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20) && Local_13.f_7.f_20 == NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()))
		{
			func_478(67108864);
		}
	}
	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (PED::_IS_PED_LASSOED(iVar0) || PED::_IS_PED_HOGTIED(iVar0))
		{
			func_584(0, 65f, 5000, 0, 168, 169, 170, 171, 172, 173, 1, -1);
		}
	}
}

void func_462()
{
	int iVar0;

	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (func_506(iVar0, 713668775, 1, 0))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, func_508(0), 1f, -1, 0.25f, 0, func_744(0));
		}
	}
}

void func_463()
{
	int iVar0;

	func_510(64);
	iVar0 = func_188(0);
	if (!func_477(4096, 255) && !func_477(2048, 255))
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false)) < 3f)
		{
			func_478(4096);
		}
	}
}

void func_464()
{
	func_767();
}

void func_465()
{
	int iVar0;
	vector3 vVar1;

	func_510(4096);
	func_510(2048);
	iVar0 = func_188(0);
	vVar1 = { func_508(0) };
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
	}
	if (func_707(NETWORK::PARTICIPANT_ID(), 0, 1) < 35f)
	{
		func_478(128);
	}
	if (func_598(32768))
	{
		func_591(0, 0, 174, 0);
	}
	else if (func_598(65536))
	{
		func_591(0, 0, 175, 0);
	}
	else if (func_592(vVar1, 35f) > 1)
	{
		func_591(0, 0, 73, 0);
	}
	else
	{
		func_591(0, 0, 72, 0);
	}
}

void func_466()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_739();
	func_767();
	func_768();
	func_769();
	func_770();
	func_743();
	iVar0 = func_188(0);
	iVar1 = func_188(1);
	func_715(0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		iVar2 = func_239();
		if (iVar2 == 10)
		{
			if (func_503(16777216) && func_346(iVar0, 242628503))
			{
				func_478(2097152);
				TASK::TASK_PLAY_ANIM(iVar0, func_354(11), func_616(11), 4f, -4f, 2000, 24, 0f, false, 0, false, 0, false);
			}
		}
		else if (iVar2 == 9)
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar3, false, 0, false))
			{
				if (iVar3 != joaat("WEAPON_UNARMED"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(iVar0, joaat("WEAPON_UNARMED"), false, 0, false, false);
					TASK::TASK_SWAP_WEAPON(iVar0, 1, 1, 0, 0);
				}
			}
		}
	}
	if (func_506(iVar0, 1868526510, 1, 0) && ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		TASK::TASK_MOUNT_ANIMAL(iVar0, iVar1, -1, -1, 1f, 1033, 0, 0);
	}
}

void func_467()
{
	int iVar0;

	func_767();
	func_768();
	func_769();
	func_770();
	func_743();
	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (func_506(iVar0, -1665583462, 1, 0))
			{
				TASK::_TASK_MOVE_IN_TRAFFIC(iVar0, 1f, 6152, 0);
			}
			if (func_503(8388608))
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 6, false);
				func_504(8388608);
			}
			if (func_503(4194304))
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 169, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 340, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 137, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 26, false);
				func_504(4194304);
			}
		}
	}
}

void func_468()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	func_196();
	func_739();
	func_715(0);
	func_743();
	func_771();
	func_193();
	if (func_598(262144) && !func_670(0, 255))
	{
		func_768();
	}
	if (func_496(2, 255))
	{
		if (func_670(0, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			func_772();
		}
	}
	iVar0 = func_188(0);
	iVar1 = func_188(1);
	iVar2 = func_239();
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
			if (!func_477(2097152, 255))
			{
				switch (iVar2)
				{
					case 10:
						if (func_503(16777216))
						{
							TASK::CLEAR_PED_TASKS(iVar0, true, false);
						}
						break;
					case 9:
						if (WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar5, false, 0, false))
						{
							if (iVar5 != joaat("WEAPON_UNARMED"))
							{
								WEAPON::_0xCEF4C65DE502D367(iVar0, 0, 0, 1, 0);
							}
						}
						break;
				}
				func_478(2097152);
			}
			if (!func_496(2097152, 255))
			{
				if (PED::_IS_PED_HOGTIED(iVar0))
				{
					AUDIO::STOP_PED_SPEAKING(iVar0, true);
					func_573(2097152);
				}
			}
			if (func_503(8388608))
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 6, false);
				func_504(8388608);
			}
			if (func_503(4194304))
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 169, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 340, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 137, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 26, false);
				func_504(4194304);
			}
			if (((!ENTITY::DOES_ENTITY_EXIST(iVar1) || PED::IS_PED_DEAD_OR_DYING(iVar1, true)) || PED::GET_MOUNT(iVar0) == iVar1) || BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), ENTITY::GET_ENTITY_COORDS(iVar1, false, false)) > 50f)
			{
				bVar3 = false;
				iVar1 = 0;
			}
			if (iVar2 == 8)
			{
				if (func_499())
				{
					if (!ANIMSCENE::_0xB89FCFF19DAFFF28(Local_947.f_19.f_246, func_500(0)))
					{
						bVar4 = true;
					}
				}
			}
		}
		if (func_506(iVar0, 242628503, 1, 0) || !func_496(8, 255))
		{
			TASK::CLEAR_SEQUENCE_TASK(&(Local_947.f_19.f_164));
			TASK::_0x23767D80C7EED7C6(&(Local_947.f_19.f_164), -949818134);
			if (bVar4)
			{
				TASK::TASK_PLAY_ANIM(0, func_354(11), func_616(11), 4f, -8f, 300, 24, 0f, false, 0, false, 0, false);
			}
			if (bVar3)
			{
				TASK::TASK_MOUNT_ANIMAL(0, iVar1, -1, -1, 2f, 8, 0, 0);
			}
			TASK::_TASK_SMART_FLEE_STYLE_COORD(0, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), 3, 0, -1f, -1, iVar1);
			TASK::CLOSE_SEQUENCE_TASK(Local_947.f_19.f_164);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				TASK::TASK_PERFORM_SEQUENCE(iVar0, Local_947.f_19.f_164);
				func_573(8);
				PED::SET_PED_KEEP_TASK(iVar0, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			}
		}
	}
	iVar6 = func_188(2);
	if (func_570())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar6) && !PED::IS_PED_DEAD_OR_DYING(iVar6, true))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar6))
			{
				if (!func_505(2))
				{
					if (func_506(iVar6, 518218985, 1, 0))
					{
						TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar6, ENTITY::GET_ENTITY_COORDS(iVar6, false, false), 3, 0, -1f, -1, 0);
						PED::SET_PED_KEEP_TASK(iVar6, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar6, false);
					}
				}
			}
		}
	}
}

void func_469()
{
}

void func_470()
{
	func_762(0);
}

void func_471()
{
	int iVar0;

	func_762(0);
	iVar0 = func_188(0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		if (PED::IS_PED_ON_MOUNT(iVar0))
		{
			if (func_506(iVar0, 501393341, 1, 0))
			{
				TASK::TASK_DISMOUNT_ANIMAL(iVar0, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_472()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_762(0);
	iVar0 = func_188(0);
	iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_22);
	if ((((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)) && ENTITY::DOES_ENTITY_EXIST(iVar1)) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		if (!func_346(iVar0, 501393341))
		{
			iVar2 = func_239();
			if (iVar2 == 10)
			{
				if (func_503(16777216) && func_346(iVar0, 242628503))
				{
					func_478(2097152);
					TASK::TASK_PLAY_ANIM(iVar0, func_354(11), func_616(11), 4f, -4f, 2000, 24, 0f, false, 0, false, 0, false);
				}
			}
			else if (iVar2 == 9)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar3, false, 0, false))
				{
					if (iVar3 != joaat("WEAPON_UNARMED"))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(iVar0, joaat("WEAPON_UNARMED"), false, 0, false, false);
						TASK::TASK_SWAP_WEAPON(iVar0, 1, 1, 0, 0);
					}
				}
			}
			if (func_506(iVar0, 1227113341, 1, 0))
			{
				TASK::TASK_GO_TO_ENTITY(iVar0, iVar1, -1, (2.5f / 2f), 1f, 2f, 0);
			}
		}
	}
}

void func_473()
{
	int iVar0;
	int iVar1;

	iVar0 = func_188(0);
	iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_22);
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::PARTICIPANT_ID()) && NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()) == Local_13.f_7.f_22)
	{
		func_773(0);
		if (func_763())
		{
			if (func_506(iVar1, -1162159953, 1, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
				{
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iVar1, func_354(7), func_616(7), iVar0, -1, 4f, -2f, 8, 0f, false, false, -1f, 0, 0, -1f);
				}
			}
		}
	}
	if ((((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)) && ENTITY::DOES_ENTITY_EXIST(iVar1)) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		if (func_506(iVar0, -1162159953, 1, 0))
		{
			func_478(4194304);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar0, iVar1, 0, -1f, -1f, -1f);
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iVar0, func_354(8), func_616(8), iVar1, -1, 4f, -2f, 8, 0f, false, false, -1f, 0, 0, -1f);
		}
	}
}

void func_474()
{
}

void func_475()
{
	if (!func_503(64))
	{
		func_478(536870912);
	}
	func_196();
	func_478(16777216);
}

void func_476()
{
	if (!func_477(268435456, 255))
	{
		if (!func_505(0))
		{
			if (func_477(2048, 255) || func_477(4096, 255))
			{
				func_774(7, Local_947.f_4);
				func_775(7, Local_947.f_4);
				func_478(268435456);
			}
		}
	}
	func_196();
	func_478(16777216);
}

bool func_477(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (iParam1 == 255 && !func_227(&iParam1))
	{
		return false;
	}
	return func_186(Local_82[iParam1 /*27*/].f_1, iParam0);
}

void func_478(int iParam0)
{
	int iVar0;

	if (!func_227(&iVar0))
	{
		return;
	}
	func_248(&(Local_82[iVar0 /*27*/].f_1), iParam0);
}

void func_479()
{
	if (func_503(2))
	{
		if (func_776(0))
		{
			func_777(1);
		}
	}
}

void func_480()
{
	int iVar0;
	struct<13> Var1;

	Var1.f_6 = 1065353216;
	Var1.f_7 = 1065353216;
	Var1.f_8 = 1065353216;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (func_632(func_631(iVar0), &Var1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var1))
			{
				EVENT::_0xAD8F2424C6E1E3A8(Var1);
			}
		}
		iVar0++;
	}
}

void func_481(int iParam0, int iParam1)
{
	func_347(&(Local_947.f_578[iParam0 /*39*/].f_5), iParam1);
}

bool func_482(int iParam0, int iParam1)
{
	return func_186(Local_947.f_578[iParam0 /*39*/].f_5, iParam1);
}

int func_483(int iParam0)
{
	return func_188(iParam0);
}

void func_484(int iParam0, bool bParam1)
{
	int iVar0;
	struct<8> Var1;

	Var1.f_4 = 1;
	Var1.f_7 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_778(Local_947.f_578[iParam0 /*39*/].f_6[iVar0 /*8*/]))
		{
			func_779(&(Local_947.f_578[iParam0 /*39*/].f_6[iVar0 /*8*/]), 1, 1);
			if (bParam1)
			{
				MISC::_COPY_MEMORY(&(Local_947.f_578[iParam0 /*39*/].f_6[iVar0 /*8*/]), &Var1, 8);
			}
		}
		iVar0++;
	}
	func_481(iParam0, 2);
}

int func_485(var uParam0, var uParam1)
{
	return uParam0;
}

int func_486(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("UNLOCK_GROUP__MISSION_STORY");
		case 3:
			return joaat("UNLOCK_GROUP__MISSION_PROCEDURAL");
		case 4:
			return joaat("UNLOCK_GROUP__MISSION_FETCH");
		case 5:
			return joaat("UNLOCK_GROUP__MISSION_MINIGAME");
		case 8:
			return 634321112;
		case 7:
			return joaat("UNLOCK_GROUP__MISSION_UGC");
		case 6:
			return joaat("UNLOCK_GROUP__MISSION_FREE_MODE_EVENT");
		default:
			break;
	}
	return 0;
}

int func_487(struct<2> Param0)
{
	return func_780(Param0);
}

void func_488(struct<2> Param0, var uParam2)
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
	iVar3 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (iVar3 == 0)
	{
		return;
	}
	switch (func_485(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_782(func_781(Param0));
			iVar5 = func_783(iVar4);
			if (!func_784(iVar5, 0))
			{
				return;
			}
			break;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (Global_1107216.f_33[iVar1 /*16*/] == iVar3)
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
	iVar0 = Global_1107216.f_33[iVar2 /*16*/].f_3.f_1;
	if (iVar0 == -1)
	{
		return;
	}
	uParam2->f_2 = Global_1116202[iVar0 /*42*/];
}

int func_489(int iParam0, int iParam1)
{
	int iVar0;
	struct<29> Var1;
	int iVar32;
	int iVar33;

	Var1.f_10 = 1106247680;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	iVar33 = 1;
	while (iVar33 <= 43)
	{
		iVar32 = iVar33;
		if (iVar32 == iParam0)
		{
			return (iVar0 + iParam1);
		}
		else
		{
			func_32(&Var1, iVar32, -1, -1, 255);
			iVar0 = (iVar0 + Var1);
		}
		iVar33++;
	}
	return -1;
}

void func_490(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_785(&Var0);
}

var func_491(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1901947.f_236.f_57;
		default:
			break;
	}
	return Global_1901947.f_236.f_53;
}

var func_492(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1901947.f_236.f_59;
		default:
			break;
	}
	return Global_1901947.f_236.f_55;
}

var func_493(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1901947.f_236.f_58;
			return Global_1901947.f_236.f_54;
		}

int func_494(int iParam0, int iParam1)
{
	if (!func_786(iParam0, iParam1))
	{
		return -1;
	}
	return (iParam1 + (8 + func_787(iParam0)));
}

void func_495(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_635(iParam1, joaat("CHARACTER_MEMORY")) };
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

bool func_496(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (iParam1 == 255 && !func_227(&iParam1))
	{
		return false;
	}
	return func_186(Local_82[iParam1 /*27*/].f_1.f_1, iParam0);
}

void func_497(int iParam0, bool bParam1, bool bParam2)
{
	struct<7> Var0;
	var uVar7;
	int iVar8;

	if (func_28() != 0)
	{
		return;
	}
	if (func_788())
	{
		return;
	}
	if (PED::_0x0E2F43516F998269(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (!bParam1)
	{
		if (!Global_1139381.f_3876.f_2[func_789(iParam0, 1) /*4*/])
		{
			return;
		}
	}
	Global_1139381.f_3876.f_2[func_789(iParam0, 1) /*4*/].f_2++;
	if (!bParam2)
	{
		return;
	}
	if (Global_1296859.f_16 != Global_1296859)
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
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1296859.f_154[iVar8]))
		{
		}
		else if (!GANG::_0x9BE7DCB22D32CCBE(Global_1296859.f_15, Global_1296859.f_154[iVar8]))
		{
		}
		else if (Global_1296859.f_154[iVar8] == Global_1296859.f_10)
		{
		}
		else
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar7, Global_1296859.f_154[iVar8]);
		}
		iVar8++;
	}
	func_790(&Var0, uVar7);
}

void func_498(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_494(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_791(iVar0, iParam0);
}

bool func_499()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_947.f_19.f_246) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_947.f_19.f_246, false))
	{
		return true;
	}
	return false;
}

char* func_500(int iParam0)
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

int func_501(int iParam0)
{
	return func_792(0, iParam0);
}

char* func_502(int iParam0)
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

bool func_503(int iParam0)
{
	return func_186(Local_947.f_19.f_253, iParam0);
}

void func_504(int iParam0)
{
	int iVar0;

	if (!func_227(&iVar0))
	{
		return;
	}
	func_347(&(Local_82[iVar0 /*27*/].f_1.f_1), iParam0);
}

bool func_505(int iParam0)
{
	return func_658(&(Local_947.f_406.f_78), 1, iParam0);
}

bool func_506(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (bParam2 && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return false;
	}
	if (!bParam3 && func_346(iParam0, iParam1))
	{
		return false;
	}
	if (iParam1 == -1794415470 && PED::IS_PED_BEING_JACKED(iParam0))
	{
		return false;
	}
	return true;
}

float func_507(int iParam0, int iParam1)
{
	return BUILTIN::VDIST(func_793(iParam0), func_793(iParam1));
}

Vector3 func_508(int iParam0)
{
	return Local_947.f_274.f_7[iParam0 /*11*/].f_6;
}

void func_509(int iParam0)
{
	func_347(&(Local_947.f_19.f_10), iParam0);
}

void func_510(int iParam0)
{
	int iVar0;

	if (!func_227(&iVar0))
	{
		return;
	}
	func_347(&(Local_82[iVar0 /*27*/].f_1), iParam0);
}

int func_511(int iParam0)
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

int func_512(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			if (Global_1198046.f_3[iParam0] * 2 <= 32)
			{
				return Global_1198046.f_3[iParam0] * 2;
			}
			return 32;
		case 2:
			if (Global_1198046.f_3[iParam0] * 2 <= 20)
			{
				return Global_1198046.f_3[iParam0] * 2;
			}
			return 20;
		case 3:
			if (Global_1198046.f_3[iParam0] * 2 <= 16)
			{
				return Global_1198046.f_3[iParam0] * 2;
			}
			return 16;
		default:
			break;
	}
	return 0;
}

void func_513(var uParam0)
{
	func_203(uParam0, 0);
	func_203(uParam0, 1);
	func_203(uParam0, 3);
	func_201(uParam0);
}

void func_514(var uParam0)
{
	func_202(uParam0);
	func_794(uParam0, 0, 3);
}

void func_515(var uParam0)
{
	func_203(uParam0, 0);
	func_204(uParam0, 0);
	func_204(uParam0, 1);
	func_204(uParam0, 2);
}

void func_516(var uParam0)
{
	func_203(uParam0, 1);
	func_201(uParam0);
}

void func_517(var uParam0)
{
	func_203(uParam0, 2);
	func_204(uParam0, 3);
}

void func_518(var uParam0)
{
	func_203(uParam0, 3);
	func_204(uParam0, 4);
}

void func_519(var uParam0)
{
	func_204(uParam0, 0);
	func_204(uParam0, 1);
}

void func_520(var uParam0)
{
	func_204(uParam0, 2);
	func_204(uParam0, 3);
}

void func_521(var uParam0)
{
	func_204(uParam0, 4);
	func_204(uParam0, 5);
}

bool func_522(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541.f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

bool func_523(var uParam0, int iParam1)
{
	uParam0->f_2 = 333456427;
	uParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_524(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_525(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (Global_1257541[iParam0 /*5*/].f_4 + iParam1);
}

bool func_526(int iParam0, bool bParam1)
{
	if (iParam0 > -1 && iParam0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (!bParam1)
		{
			return true;
		}
		return NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0));
	}
	return false;
}

bool func_527(int iParam0)
{
	return func_134(8, iParam0);
}

int func_528(int iParam0)
{
	return iParam0;
}

void func_529(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_2 = sParam2;
	Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_3 = iParam3;
	Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_6 = iParam4;
	Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_4 = iParam5;
	Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_5 = iParam6;
	Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_7 = iParam7;
	Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_1 = iParam8;
	if (func_795(iParam0))
	{
		func_796(iParam0, iParam1, 16);
	}
}

bool func_530(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (iParam1 == 255 && !func_227(&iParam1))
	{
		return false;
	}
	return func_186(Local_82[iParam1 /*27*/].f_1.f_2, iParam0);
}

void func_531(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (MISC::_IS_STRING_SPACE(Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_2))
	{
		return;
	}
	if (!bParam2)
	{
		func_796(iParam0, iParam1, 1);
	}
	else
	{
		func_797(iParam0, iParam1, 1);
	}
	if (bParam3 && func_795(iParam0))
	{
		func_798(Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/], bParam2, 1, 1);
	}
}

void func_532(int iParam0, int iParam1)
{
	Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_2 = "";
	Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_3 = 0;
	Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_6 = 0;
	Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_4 = 1;
	Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_5 = 0;
	Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_7 = -1;
	Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_1 = 0;
	if (func_778(Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/]))
	{
		func_779(&(Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/]), 1, 1);
	}
}

void func_533(var uParam0)
{
	func_232(uParam0, 0);
	func_233(uParam0, 0);
	func_234(uParam0, 0);
	func_236(uParam0, 0);
	func_238(uParam0, 1, 1, 1);
}

void func_534(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_347(&(uParam0->f_2), 4);
	}
	else
	{
		func_248(&(uParam0->f_2), 4);
	}
}

void func_535(var uParam0)
{
	func_800(uParam0, (func_799(uParam0) - 6f));
	func_801(uParam0, 1);
}

void func_536(var uParam0)
{
	func_802(uParam0, 1);
	func_803(uParam0, 1);
	func_804(uParam0, 1);
}

void func_537(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_347(&(uParam0->f_2), 131072);
	}
	else
	{
		func_248(&(uParam0->f_2), 131072);
	}
}

void func_538(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_248(uParam0, 4);
	}
	else
	{
		func_347(uParam0, 4);
	}
}

void func_539(var uParam0, int iParam1)
{
	uParam0->f_19 = iParam1;
}

bool func_540(int iParam0, var uParam1)
{
	int iVar0;

	*uParam1 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iParam0 * 10) * 0.03125f));
	uParam1->f_2 = (iParam0 * 10 % 32);
	iVar0 = (32 - uParam1->f_2);
	if (iVar0 < 10)
	{
		uParam1->f_1 = *uParam1 + 1;
		uParam1->f_3 = (9 - iVar0);
	}
	else
	{
		uParam1->f_1 = *uParam1;
		uParam1->f_3 = uParam1->f_2 + 9;
	}
	return (((*uParam1 > -1 && uParam1->f_1 > -1) && *uParam1 < 3) && uParam1->f_1 < 3);
}

int func_541(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 31);
	iVar0 = BUILTIN::SHIFT_RIGHT(iVar0, (31 - iParam1));
	iVar0 ^= -1;
	iVar0 = BUILTIN::SHIFT_LEFT(iVar0, iParam0);
	return iVar0;
}

var func_542()
{
	return Local_947.f_3;
}

void func_543(int iParam0, int iParam1)
{
	Local_947.f_274.f_7[iParam0 /*11*/].f_4 = iParam1;
}

void func_544(int iParam0, int iParam1, int iParam2)
{
	Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_2 = iParam2;
}

void func_545(int iParam0)
{
	func_805(0, iParam0);
}

void func_546(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6)
{
	Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_7 = { vParam2 };
	Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_10 = { 0f, 0f, fParam5 };
	Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_13 = iParam6;
}

int func_547(int iParam0)
{
	if (!func_187(iParam0))
	{
		return 0;
	}
	return Global_1132288.f_1[iParam0 /*63*/].f_3;
}

bool func_548(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;

	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { Local_947.f_15 };
	iVar7 = 0;
	iVar8 = func_621(iParam0);
	iVar9 = func_806(iParam0);
	*bParam2 = 0;
	if (iVar8 != 0)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_38[iParam0]))
		{
			iVar9 = func_806(iParam0);
			fVar0 = func_744(iParam0);
			if (!func_186(Local_947.f_274.f_7[iParam0 /*11*/].f_2, 2))
			{
				vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar4, 0f, func_508(iParam0)) };
			}
			else
			{
				vVar1 = { func_508(iParam0) };
			}
			if (!func_807(&(Local_13.f_38[iParam0]), iVar8, vVar1, fVar0, 1, 0, (iVar9 == 0 || PED::_IS_THIS_MODEL_A_HORSE(iVar8)), 1, 1))
			{
				*iParam1 = 1;
			}
			else
			{
				iVar7 = NETWORK::NET_TO_PED(Local_13.f_38[iParam0]);
				if (ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
					ENTITY::_0xA91E6CF94404E8C9(iVar7);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar7, true);
					PED::SET_PED_CONFIG_FLAG(iVar7, 178, false);
					if (PED::IS_PED_HUMAN(iVar7))
					{
						WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iVar7, false);
						WEAPON::_0x431240A58484D5D0(iVar7, 0);
						WEAPON::_0x45E57FDD531C9477(iVar7, 0);
					}
					if (iVar9 != 0)
					{
						PED::_SET_PED_BODY_COMPONENT(iVar7, iVar9);
						PED::_UPDATE_PED_VARIATION(iVar7, func_175(iParam0, 1), true, true, true, false);
					}
					else if (PED::_IS_THIS_MODEL_A_HORSE(iVar8))
					{
						if (PED::_0xA0BC8FAED8CFEB3C(iVar7))
						{
						}
						func_808(iVar7, 1);
					}
					if (func_809(iParam0))
					{
						PED::SET_PED_CAN_BE_TARGETTED(iVar7, false);
					}
					if (PED::_IS_THIS_MODEL_A_HORSE(iVar8))
					{
						if (func_810(iParam0))
						{
							if (func_809(iParam0))
							{
							}
						}
						else
						{
							PED::SET_PED_CAN_BE_TARGETTED(iVar7, false);
						}
					}
					if (func_549(iParam0))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_38[iParam0]))
						{
							NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_38[iParam0]);
						}
					}
					*bParam2 = 1;
					return false;
				}
				else
				{
					*iParam1 = 1;
				}
			}
		}
		else if (PED::_0xA0BC8FAED8CFEB3C(NETWORK::NET_TO_PED(Local_13.f_38[iParam0])))
		{
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_549(int iParam0)
{
	return func_175(iParam0, 128);
}

int func_550(int iParam0, int iParam1)
{
	return Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_2;
}

bool func_551(int iParam0, int iParam1)
{
	return func_186(Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1, 64);
}

bool func_552(int iParam0, int iParam1)
{
	return func_186(Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1, 16);
}

Vector3 func_553(int iParam0, int iParam1)
{
	return Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_7;
}

bool func_554(int iParam0, int iParam1)
{
	return Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_13;
}

bool func_555(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_811(*uParam0, 0f, 0f, 0f))
	{
		return true;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar2)
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
	if (bParam4)
	{
		vVar4 = { *uParam0 };
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar3)
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
		return true;
	}
	if (bVar2 && bVar3)
	{
		return false;
	}
	uParam0->f_2 = uVar0;
	return true;
}

bool func_556(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_947.f_329[iParam0 /*76*/].f_3, iParam1);
}

bool func_557(int iParam0, int iParam1)
{
	return func_186(Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1, 1);
}

bool func_558(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return false;
	}
	if (!func_812(iParam1))
	{
		return false;
	}
	*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, vParam2, true, bParam5, false, false, true));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam5)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
		}
		return true;
	}
	return false;
}

bool func_559(int iParam0, int iParam1)
{
	return func_186(Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1, 2);
}

bool func_560(int iParam0, int iParam1)
{
	return func_186(Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1, 4);
}

bool func_561(int iParam0, int iParam1)
{
	return func_186(Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1, 128);
}

Vector3 func_562(int iParam0, int iParam1)
{
	return Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_10;
}

bool func_563(int iParam0, int iParam1, int iParam2)
{
	return func_186(Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1, iParam2);
}

float func_564(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	else if (fParam0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

Vector3 func_565(vector3 vParam0)
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

bool func_566(int iParam0, int iParam1)
{
	return func_186(Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1, 256);
}

void func_567(int iParam0, int iParam1, bool bParam2)
{
	ENTITY::FREEZE_ENTITY_POSITION(Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/], bParam2);
}

bool func_568(int iParam0, int iParam1)
{
	return func_186(Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1, 512);
}

void func_569(var uParam0, int iParam1)
{
	switch (uParam0->f_2)
	{
		case 0:
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_1))
			{
				uParam0->f_2 = 1;
			}
			break;
		case 1:
			if (!func_813(iParam1))
			{
			}
			else
			{
				uParam0->f_2 = 2;
			}
			break;
		case 2:
			if (func_814(iParam1))
			{
			}
			else
			{
				uParam0->f_1 = 255;
				*uParam0 = func_816(iParam1, func_815(Local_13.f_58.f_10, iParam1), func_228(iParam1));
				func_122(&(Local_13.f_58.f_10), iParam1, 3);
				uParam0->f_2 = 0;
			}
			break;
	}
}

bool func_570()
{
	switch (func_239())
	{
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return true;
		default:
			break;
	}
	return false;
}

bool func_571()
{
	return (func_135(64) || func_134(64, 255));
}

bool func_572()
{
	return ((func_582(256) || func_582(512)) || func_582(1024));
}

void func_573(int iParam0)
{
	int iVar0;

	if (!func_227(&iVar0))
	{
		return;
	}
	func_248(&(Local_82[iVar0 /*27*/].f_1.f_1), iParam0);
}

void func_574(int iParam0)
{
	if (Local_13.f_7 != iParam0)
	{
		func_588(&(Local_13.f_7.f_10));
		Local_13.f_7 = iParam0;
	}
}

void func_575(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

void func_576()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	iVar0 = func_188(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (PED::IS_PED_USING_ANY_SCENARIO(iVar0))
		{
			iVar1 = func_817(0);
			if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
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

float func_577(int iParam0, int iParam1, bool bParam2)
{
	if (!func_526(iParam1, 0))
	{
		if (!func_227(&iParam1))
		{
			return 0f;
		}
	}
	if (bParam2)
	{
		if (Local_82[iParam1 /*27*/].f_4.f_2[iParam0] < 0f)
		{
			return 0f;
		}
	}
	return Local_82[iParam1 /*27*/].f_4.f_2[iParam0];
}

bool func_578(int iParam0)
{
	if (iParam0 == joaat("WEAPON_KIT_CAMERA") || iParam0 == joaat("WEAPON_KIT_CAMERA_ADVANCED"))
	{
		return true;
	}
	return false;
}

void func_579(int iParam0)
{
	func_248(&(Local_13.f_7.f_30), iParam0);
}

void func_580(int iParam0)
{
	func_347(&(Local_13.f_7.f_30), iParam0);
}

bool func_581(int iParam0, int iParam1)
{
	return func_818(iParam0, iParam1);
}

bool func_582(int iParam0)
{
	return func_186(Local_947.f_19.f_251, iParam0);
}

int func_583(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!bParam3 || func_527(iVar0))
			{
				if (!bParam2 || func_819(iVar0))
				{
					if (func_614(iParam0, fParam1, iVar0, 0))
					{
						iVar1++;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_584(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11)
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
	iVar0 = func_188(iParam0);
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
			if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_21))
			{
				iVar3 = Local_13.f_7.f_21;
			}
			else
			{
				iVar3 = Local_13.f_7.f_20;
			}
			break;
		case 2:
			iVar3 = func_702(2, 99f, 1, 1);
			break;
		case 3:
			iVar3 = func_821(0, 119101, 99f, 1, 1);
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
		if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar3))
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
	if (func_590(1))
	{
		return;
	}
	if (Local_13.f_7.f_9 != 0)
	{
		if (!func_598(32) || Local_13.f_7.f_15 < 1)
		{
			func_822(&(Local_13.f_7.f_15), iParam2);
			func_579(32);
			func_588(&(Local_13.f_7.f_9));
		}
		iVar4 = Local_13.f_7.f_15;
		if (bParam10 && !func_587(iParam4))
		{
			iVar4 = 1500;
		}
		if (func_595(Local_13.f_7.f_9, iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3);
			if (iVar5 != 255)
			{
				if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar3) || func_614(0, fParam1, iVar5, 1))
				{
					if (!func_587(iParam4))
					{
						func_591(iParam0, iParam3, iParam4, 0);
					}
					else if (!func_587(iParam5))
					{
						func_591(iParam0, iParam3, iParam5, 0);
					}
					else if (iParam6 != -1 && !func_587(iParam6))
					{
						func_591(iParam0, iParam3, iParam6, 0);
					}
					else if (iParam7 != -1 && !func_587(iParam7))
					{
						func_591(iParam0, iParam3, iParam7, 0);
					}
					else if (iParam8 != -1 && !func_587(iParam8))
					{
						func_591(iParam0, iParam3, iParam8, 0);
					}
					else if (iParam9 != -1 && !func_587(iParam9))
					{
						func_591(iParam0, iParam3, iParam9, 0);
					}
					else if (iParam11 != -1)
					{
						func_823(iParam11);
					}
				}
			}
		}
	}
	else
	{
		func_588(&(Local_13.f_7.f_9));
	}
}

void func_585()
{
	if (Local_13.f_7.f_11 == 0)
	{
		func_588(&(Local_13.f_7.f_11));
		func_822(&(Local_13.f_7.f_16), 12000);
		return;
	}
	if (func_582(524288))
	{
		func_588(&(Local_13.f_7.f_11));
		func_822(&(Local_13.f_7.f_16), 12000);
	}
}

bool func_586()
{
	int iVar0;

	if (func_582(536870912))
	{
		return true;
	}
	if (Local_13.f_7.f_12 == 0)
	{
		func_588(&(Local_13.f_7.f_12));
	}
	if (func_595(Local_13.f_7.f_12, 100000))
	{
		if (!func_595(Local_13.f_7.f_9, 10000))
		{
			return false;
		}
		iVar0 = func_188(0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			if (AUDIO::_0x54B187F111D9C6F8(iVar0, 1))
			{
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

bool func_587(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 - iVar1 * 32);
	return MISC::IS_BIT_SET(Local_947.f_19.f_46[iVar1], iVar2);
}

void func_588(var uParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
}

int func_589(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	int iVar13;

	iVar3 = func_188(1);
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
			if (func_824(iVar2))
			{
				iVar8 = PED::_0xE4770DA1B8FF4FD1(iVar2);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar8))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iVar3) || iVar2 != iVar3)
					{
						if (!bParam5 || PED::_GET_RIDER_OF_MOUNT(iVar2, false) == 0)
						{
							bVar9 = false;
							if (!bParam6)
							{
								bVar9 = true;
							}
							if (!bVar9)
							{
								iVar10 = func_188(0);
								if (ENTITY::DOES_ENTITY_EXIST(iVar10) && !PED::IS_PED_DEAD_OR_DYING(iVar10, true))
								{
									if (func_825(iVar10, iVar2, 0, fParam4, 0))
									{
										bVar9 = true;
									}
								}
							}
							if (bVar9)
							{
								fVar11 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar2, false, false), vParam1);
								if (fVar11 < 50f && fVar11 < fVar7)
								{
									fVar7 = fVar11;
									*iParam0 = iVar2;
									iVar12 = PED::_GET_RIDER_OF_MOUNT(*iParam0, true);
									if (ENTITY::DOES_ENTITY_EXIST(iVar12))
									{
										iVar13 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar12);
										if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar13))
										{
											Local_13.f_7.f_25 = iVar13;
										}
									}
								}
								iVar6++;
							}
						}
					}
				}
			}
		}
		iVar4++;
	}
	ITEMSET::_CLEAR_ITEMSET(iVar0);
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar6;
}

bool func_590(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

void func_591(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<15> Var0;

	Var0 = { func_826(377515857) };
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
	func_827(&Var0);
}

int func_592(vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
		{
			if (func_527(iVar0))
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2);
				if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar3))
				{
					iVar4 = PLAYER::GET_PLAYER_PED(iVar3);
					if (ENTITY::DOES_ENTITY_EXIST(iVar4) && !PED::IS_PED_DEAD_OR_DYING(iVar4, true))
					{
						if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar4, true, false), vParam0) < fParam3)
						{
							iVar1++;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_593(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_186(Local_82[iVar0 /*27*/].f_1.f_2, iParam0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_594(int iParam0)
{
	return func_186(Local_947.f_19.f_250, iParam0);
}

bool func_595(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam0 != 0)
	{
		if (NETWORK::GET_TIME_DIFFERENCE(iParam0, iVar0) > iParam1)
		{
			return true;
		}
	}
	return false;
}

int func_596()
{
	switch (func_239())
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

bool func_597()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;

	iVar0 = func_188(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	vVar4 = { func_370(1) };
	fVar7 = (vVar4.z - vVar1.z);
	if (fVar7 > 5f)
	{
		return true;
	}
	return false;
}

bool func_598(int iParam0)
{
	return func_186(Local_13.f_7.f_30, iParam0);
}

int func_599()
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

void func_600(int iParam0)
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
	MISC::CLEAR_BIT(&(Local_947.f_19.f_46[iVar1]), iVar2);
}

char[] func_601(int iParam0)
{
	switch (func_239())
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
			if (func_243() == 2)
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
			if (func_243() == 2)
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
			if (func_243() == 2)
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
	if (func_243() == 2)
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
	switch (func_239())
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

bool func_602(char* sParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(sParam0) && AUDIO::_0x1ECC76792F661CF5(sParam0))
	{
		return true;
	}
	return false;
}

float func_603()
{
	switch (func_239())
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

void func_604()
{
	int iVar0;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_24))
	{
		iVar0 = func_817(2);
		if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
			Local_13.f_7.f_24 = iVar0;
		}
	}
}

bool func_605(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return true;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_606(int iParam0)
{
	int iVar0;

	iVar0 = func_188(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return true;
	}
	if (func_753(0, func_508(0)) > 100f)
	{
		return true;
	}
	if (func_583(0, 100f, 0, 1) < 1)
	{
		return true;
	}
	return false;
}

bool func_607(int iParam0)
{
	return func_186(Local_947.f_19.f_252, iParam0);
}

bool func_608(int iParam0)
{
	char* sVar0;

	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_947.f_19.f_246))
	{
		return false;
	}
	sVar0 = func_356(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return false;
	}
	return ANIMSCENE::_0x1F0E401031E20146(Local_947.f_19.f_246, sVar0);
}

int func_609()
{
	if (func_582(512))
	{
		return 66;
	}
	if (func_582(1024))
	{
		return 67;
	}
	return 65;
}

bool func_610(float fParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_577(0, iVar0, 1) < fParam0)
			{
				if (func_496(iParam1, iVar0))
				{
					return true;
				}
				else if (iParam2 != 0 && func_496(iParam2, iVar0))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_611(float fParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_577(0, iVar0, 1) < fParam0)
			{
				if (func_477(iParam1, iVar0))
				{
					return true;
				}
				else if (iParam2 != 0 && func_477(iParam2, iVar0))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_612(int iParam0)
{
	func_588(&(Local_13.f_7.f_13));
	if (Local_13.f_7.f_1 != iParam0)
	{
		Local_13.f_7.f_1 = iParam0;
	}
}

bool func_613()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (Local_13.f_7.f_22 != 255)
	{
		iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_22);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
		{
			iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_13.f_7.f_22);
			if (func_526(iVar2, 1) && func_527(iVar2))
			{
				return true;
			}
			else
			{
				Local_13.f_7.f_22 = 255;
			}
		}
		else
		{
			Local_13.f_7.f_22 = 255;
		}
	}
	if (Local_13.f_7.f_22 == 255)
	{
		iVar3 = 0;
		while (iVar3 < 32)
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3)))
			{
				if (func_477(2048, iVar3))
				{
					if (func_527(iVar3))
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3));
						if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
						{
							iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_22);
							if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true))
							{
								Local_13.f_7.f_22 = iVar0;
								return true;
							}
						}
					}
				}
			}
			iVar3++;
		}
	}
	Local_13.f_7.f_22 = 255;
	return false;
}

bool func_614(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!func_526(iParam2, 0))
	{
		if (!func_227(&iParam2))
		{
			return false;
		}
	}
	fVar0 = Local_82[iParam2 /*27*/].f_4.f_2[iParam0];
	if (fVar0 <= 0f)
	{
		if (bParam3)
		{
			iVar1 = func_188(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam2));
				if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
				{
					fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), func_828(iVar2));
					if (fVar0 < 0f)
					{
						return false;
					}
					Local_82[iParam2 /*27*/].f_4.f_2[iParam0] = fVar0;
				}
			}
		}
		return false;
	}
	return fVar0 <= fParam1;
}

int func_615()
{
	if (func_582(512))
	{
		return 69;
	}
	if (func_582(1024))
	{
		return 70;
	}
	return 68;
}

char* func_616(int iParam0)
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

void func_617(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_618(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_619(int* iParam0, int iParam1)
{
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam1, iParam0, 15))
	{
		return false;
	}
	if (iParam0->f_4.f_1 != Local_947.f_1)
	{
		return false;
	}
	if (iParam0->f_4 != Local_947)
	{
		return false;
	}
	if (iParam0->f_4.f_2 != Local_947.f_2)
	{
		return false;
	}
	if (iParam0->f_4.f_3 != Local_947.f_3)
	{
		return false;
	}
	return true;
}

void func_620(int iParam0)
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
			iVar1 = func_188(iVar0);
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
					if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar3))
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
				if (func_829(iVar1, iVar4, iVar5, 0, bVar7))
				{
					if (func_830(iVar5))
					{
						func_831(1891783641, iVar1, 1);
					}
					Local_947.f_19.f_152 = iVar0;
					Local_947.f_19.f_153 = iVar5;
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						func_580(32);
					}
				}
			}
			break;
	}
}

int func_621(int iParam0)
{
	return Local_947.f_274.f_7[iParam0 /*11*/].f_3;
}

bool func_622(int iParam0)
{
	return func_556(0, iParam0);
}

bool func_623(int iParam0)
{
	return func_557(0, iParam0);
}

void func_624(int iParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar2 = func_621(iParam0);
	bVar3 = func_526(iParam1, 1);
	if (!MISC::IS_BIT_SET(Local_947.f_274.f_5, iParam0))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_38[iParam0]))
		{
			iVar1 = NETWORK::NET_TO_PED(Local_13.f_38[iParam0]);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				return;
			}
			Local_947.f_274.f_7[iParam0 /*11*/] = iVar1;
			if (bVar3)
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar1) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					Local_82[iParam1 /*27*/].f_4.f_2[iParam0] = -1f;
				}
				else
				{
					Local_82[iParam1 /*27*/].f_4.f_2[iParam0] = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false));
				}
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (func_549(iParam0))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_38[iParam0]))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_38[iParam0]))
						{
							NETWORK::_0x7182EDDA1EE7DB5A(Local_13.f_38[iParam0]);
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					func_832(iVar1, 1f, 0);
					sVar0 = func_833(iParam0);
					if (!MISC::_IS_STRING_SPACE(sVar0))
					{
						func_834(iVar1, sVar0, 1);
					}
				}
				if (func_809(iParam0))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
				}
				if (PED::_IS_THIS_MODEL_A_HORSE(iVar2))
				{
					if (func_810(iParam0))
					{
						if (func_809(iParam0))
						{
						}
					}
					else
					{
						PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
					}
				}
				MISC::SET_BIT(&(Local_947.f_274.f_5), iParam0);
				if (bParam2)
				{
					func_835(iParam0);
				}
			}
		}
	}
}

void func_625(var uParam0, int iParam1, int iParam2)
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

int func_626()
{
	int iVar0;

	iVar0 = func_239();
	switch (iVar0)
	{
		case 3:
			return joaat("EVENT_SHOCKING_BEAT_DISTURBING_NEW");
		case 4:
			return joaat("EVENT_SHOCKING_BEAT_DISTURBING_NEW");
		case 5:
			return joaat("EVENT_SHOCKING_BEAT_DISTURBING_NEW");
		case 6:
			return joaat("EVENT_SHOCKING_BEAT_DISTURBING_NEW");
		case 7:
			return joaat("EVENT_SHOCKING_BEAT_DISTURBING_NEW");
		default:
			break;
	}
	return joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW");
}

bool func_627(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &((uParam0[iVar1 /*4*/])->f_1)))
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
			StringCopy(&((uParam0[uParam0->f_97 /*4*/])->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

int func_628()
{
	int iVar0;

	iVar0 = func_239();
	switch (iVar0)
	{
		case 3:
			return joaat("EVENT_SHOCKING_BEAT_DISTURBING_NEW");
		case 4:
			return joaat("EVENT_SHOCKING_BEAT_DISTURBING_NEW");
		case 5:
			return joaat("EVENT_SHOCKING_BEAT_DISTURBING_NEW");
		case 6:
			return joaat("EVENT_SHOCKING_BEAT_DISTURBING_NEW");
		case 7:
			return joaat("EVENT_SHOCKING_BEAT_DISTURBING_NEW");
		default:
			break;
	}
	return joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW");
}

void func_629(int iParam0, int iParam1)
{
	func_248(&(Local_947.f_578[iParam0 /*39*/].f_5), iParam1);
}

void func_630(var uParam0, int iParam1, int iParam2)
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

int func_631(int iParam0)
{
	return iParam0;
}

bool func_632(int iParam0, var uParam1)
{
	uParam1->f_1 = 0;
	*uParam1 = func_188(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		uParam1->f_2 = func_577(iParam0, 255, 1);
		if (uParam1->f_2 < 0f)
		{
			uParam1->f_2 = 0f;
		}
		return true;
	}
	return false;
}

void func_633(var uParam0, int iParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam1, 168, true);
	EVENT::_0xBB1E41DD3D3C6250(iParam1, "SpAggroDefault", 0);
	DECORATOR::DECOR_SET_BOOL(iParam1, "UsesTracker", true);
}

void func_634(int iParam0)
{
	int iVar0;

	if (!func_227(&iVar0))
	{
		return;
	}
	func_660(&(Local_82[iVar0 /*27*/].f_10), 0, iParam0);
}

struct<2> func_635(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;

	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_836(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_837(iParam1, iVar4) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_636()
{
	Local_947.f_274.f_6 = 0;
	Local_947.f_274.f_2 = 0;
	Local_947.f_274.f_1 = -1;
}

void func_637()
{
	int iVar0;

	func_231(&(Local_947.f_406.f_78), 2, 0);
	func_231(&(Local_947.f_406.f_78), 1, 0);
	func_231(&(Local_947.f_406.f_78), 4, 0);
	func_231(&(Local_947.f_406.f_78), 5, 0);
	func_231(&(Local_947.f_406.f_78), 8, -1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		SCRIPTS::_0xDE544B7EC0C187CC(&(Local_947.f_406.f_66[iVar0]));
		SCRIPTS::_0x20F4CB76689ACDBC(&(Local_947.f_406.f_74[iVar0]));
		SCRIPTS::_0xDE544B7EC0C187CC(&(Local_947.f_406.f_70[iVar0]));
		func_838(iVar0);
		iVar0++;
	}
}

void func_638()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar1 = 0;
	iVar2 = func_839(0, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar2))
	{
		func_840();
	}
	else
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
	}
	bVar3 = false;
	Local_947.f_578.f_118 = 0;
	Local_947.f_578.f_119 = -1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!bVar3 && ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (func_841(func_180(iVar0), iVar1))
			{
				bVar3 = true;
			}
		}
		iVar0++;
	}
	if (!bVar3)
	{
		func_840();
	}
}

void func_639(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_947.f_274.f_2 = (Local_947.f_274.f_2 || Local_82[iParam0 /*27*/].f_4);
		Local_947.f_274.f_1 = (Local_947.f_274.f_1 && Local_82[iParam0 /*27*/].f_4);
		Local_947.f_274.f_6 = (Local_947.f_274.f_6 || Local_82[iParam0 /*27*/].f_4.f_1);
	}
}

void func_640(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		func_842(&(Local_947.f_406.f_78), &(Local_82[iParam0 /*27*/].f_10), 2);
		func_842(&(Local_947.f_406.f_78), &(Local_82[iParam0 /*27*/].f_10), 1);
		func_842(&(Local_947.f_406.f_78), &(Local_82[iParam0 /*27*/].f_10), 4);
		func_842(&(Local_947.f_406.f_78), &(Local_82[iParam0 /*27*/].f_10), 5);
		func_842(&(Local_947.f_406.f_78), &(Local_82[iParam0 /*27*/].f_10), 6);
		func_842(&(Local_947.f_406.f_78), &(Local_82[iParam0 /*27*/].f_10), 7);
		func_842(&(Local_947.f_406.f_78), &(Local_82[iParam0 /*27*/].f_10), 0);
		func_842(&(Local_947.f_406.f_78), &(Local_82[iParam0 /*27*/].f_10), 3);
		func_843(&(Local_947.f_406.f_78), &(Local_82[iParam0 /*27*/].f_10), 8);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			SCRIPTS::_0xFFDDF802279BE128(&(Local_82[iParam0 /*27*/].f_10.f_5[iVar0]), &(Local_947.f_406.f_66[iVar0]), &(Local_947.f_406.f_66[iVar0]));
			SCRIPTS::_0xFFDDF802279BE128(&(Local_82[iParam0 /*27*/].f_10.f_5[iVar0]), &(Local_947.f_406.f_66[iVar0]), &(Local_947.f_406.f_70[iVar0]));
			SCRIPTS::_0xE4ABE20DCE7C7CFE(&(Local_82[iParam0 /*27*/].f_10.f_5[iVar0]), &(Local_947.f_406.f_66[iVar0]), &(Local_947.f_406.f_74[iVar0]));
			func_844(func_631(iVar0), iParam0);
			iVar0++;
		}
	}
}

void func_641(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1 && iParam2 != iParam0)
	{
		Local_82[iParam2 /*27*/].f_23 = (Local_82[iParam2 /*27*/].f_23 || Local_82[iParam0 /*27*/].f_23);
	}
}

void func_642(int iParam0, bool bParam1, int iParam2)
{
	if (!bParam1)
	{
		return;
	}
	Local_947.f_578.f_118 = (Local_947.f_578.f_118 || Local_82[iParam0 /*27*/].f_24.f_2);
	Local_947.f_578.f_119 = (Local_947.f_578.f_119 && Local_82[iParam0 /*27*/].f_24.f_2);
	func_845(iParam0);
}

int func_643(int iParam0)
{
	return iParam0;
}

int func_644(int iParam0, int iParam1, int iParam2, int iParam3)
{
	float fVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	Local_82[iParam3 /*27*/].f_4.f_2[iParam2] = fVar0;
	if (fVar0 > Local_947.f_274.f_7[iParam2 /*11*/].f_9)
	{
		return 0;
	}
	return 1;
}

void func_645(var uParam0)
{
	func_846(uParam0, 0f);
}

bool func_646(var uParam0)
{
	return func_847(*uParam0, 1);
}

bool func_647(var uParam0, float fParam1)
{
	if (!func_646(uParam0))
	{
		return false;
	}
	if (func_848(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_648(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_649(int iParam0)
{
	return true;
}

void func_650(int iParam0, int iParam1)
{
	func_347(&(Local_947.f_274.f_7[iParam0 /*11*/].f_2), iParam1);
}

bool func_651(int iParam0, int iParam1)
{
	if (!func_526(iParam1, 0))
	{
		if (!func_227(&iParam1))
		{
			return false;
		}
	}
	return func_186(Local_82[iParam1 /*27*/].f_4, iParam0);
}

void func_652(int iParam0)
{
	int iVar0;

	if (!func_227(&iVar0))
	{
		return;
	}
	func_248(&(Local_82[iVar0 /*27*/].f_4), iParam0);
}

void func_653(int iParam0)
{
	int iVar0;

	if (!func_227(&iVar0))
	{
		return;
	}
	func_347(&(Local_82[iVar0 /*27*/].f_4), iParam0);
}

void func_654()
{
	int iVar0;
	struct<13> Var1;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;

	Var1.f_6 = 1065353216;
	Var1.f_7 = 1065353216;
	Var1.f_8 = 1065353216;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	if (!func_227(&iVar15))
	{
		return;
	}
	iVar16 = PLAYER::PLAYER_ID();
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar16))
	{
		return;
	}
	iVar17 = PLAYER::GET_PLAYER_PED(iVar16);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar14 = func_631(iVar0);
		if (!func_655(iVar14))
		{
		}
		else if (!func_656(iVar14, &Var1))
		{
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(Var1) && MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Var1, true, false), 4f, true))
			{
				MISC::SET_BIT(&(Local_947.f_406.f_65), iVar14);
			}
			if (func_672(iVar14, iVar15))
			{
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Var1, iVar17, 0, 0))
			{
				func_849(iVar14);
				func_850(iVar14);
			}
		}
		iVar0++;
	}
}

bool func_655(int iParam0)
{
	return !func_658(&(Local_947.f_406.f_78), 5, iParam0);
}

bool func_656(int iParam0, var uParam1)
{
	if (!MISC::IS_BIT_SET(Local_947.f_406.f_122, iParam0))
	{
		return false;
	}
	*uParam1 = Local_947.f_406.f_82[iParam0 /*13*/];
	uParam1->f_1 = Local_947.f_406.f_82[iParam0 /*13*/].f_1;
	uParam1->f_2 = Local_947.f_406.f_82[iParam0 /*13*/].f_2;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return false;
	}
	return true;
}

bool func_657(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	if (!func_851(iParam1))
	{
		iVar0 = PLAYER::PLAYER_PED_ID();
		if (uParam0->f_2 <= 25f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) >= 4f)
		{
			if (PED::IS_PED_IN_COVER(iVar0, false, false) || PED::IS_PED_GOING_INTO_COVER(iVar0))
			{
			}
			else
			{
				return true;
			}
		}
	}
	if (func_852(*uParam0, &(Local_947.f_406.f_32), &uVar1, uParam0->f_2))
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), *uParam0))
	{
		return true;
	}
	return false;
}

bool func_658(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (iParam2 < 0 || iParam2 >= 10)
	{
		return false;
	}
	if (!func_540(iParam1, &Var0))
	{
		return false;
	}
	if (Var0 == Var0.f_1)
	{
		return MISC::IS_BIT_SET((*uParam0)[Var0], (Var0.f_2 + iParam2));
	}
	iVar4 = (32 - Var0.f_2);
	if (iParam2 < iVar4)
	{
		return MISC::IS_BIT_SET((*uParam0)[Var0], (Var0.f_2 + iParam2));
	}
	return MISC::IS_BIT_SET((*uParam0)[Var0.f_1], (Var0.f_3 - (iParam2 - iVar4)));
}

int func_659(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_540(iParam1, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		MISC::CLEAR_BIT(uParam0[Var0], (Var0.f_2 + iParam2));
		return 1;
	}
	iVar4 = (32 - Var0.f_2);
	if (iParam2 < iVar4)
	{
		MISC::CLEAR_BIT(uParam0[Var0], (Var0.f_2 + iParam2));
		return 1;
	}
	MISC::CLEAR_BIT(uParam0[Var0.f_1], (Var0.f_3 - (iParam2 - iVar4)));
	return 1;
}

int func_660(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_540(iParam1, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		MISC::SET_BIT(uParam0[Var0], (Var0.f_2 + iParam2));
		return 1;
	}
	iVar4 = (32 - Var0.f_2);
	if (iParam2 < iVar4)
	{
		MISC::SET_BIT(uParam0[Var0], (Var0.f_2 + iParam2));
		return 1;
	}
	MISC::SET_BIT(uParam0[Var0.f_1], (Var0.f_3 - (iParam2 - iVar4)));
	return 1;
}

void func_661(int iParam0)
{
}

bool func_662(int iParam0)
{
	return func_658(&(Local_947.f_406.f_78), 4, iParam0);
}

bool func_663(int iParam0)
{
	int iVar0;

	if (!func_227(&iVar0))
	{
		return false;
	}
	return func_658(&(Local_82[iVar0 /*27*/].f_10), 4, iParam0);
}

bool func_664(int iParam0)
{
	return SCRIPTS::_0x179A6F0EE2E79026(&(Local_947.f_406.f_70[iParam0]));
}

void func_665(int iParam0)
{
	int iVar0;

	if (!func_227(&iVar0))
	{
		return;
	}
	func_659(&(Local_82[iVar0 /*27*/].f_10), 4, iParam0);
}

bool func_666(int iParam0)
{
	int iVar0;

	if (!func_227(&iVar0))
	{
		return false;
	}
	return SCRIPTS::_0x179A6F0EE2E79026(&(Local_82[iVar0 /*27*/].f_10.f_5[iParam0]));
}

void func_667(int iParam0)
{
	int iVar0;

	if (!func_227(&iVar0))
	{
		return;
	}
	SCRIPTS::_0xDE544B7EC0C187CC(&(Local_82[iVar0 /*27*/].f_10.f_5[iParam0]));
}

bool func_668(int iParam0)
{
	return func_658(&(Local_947.f_406.f_78), 6, iParam0);
}

bool func_669(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!EVENT::_0x83D43F0FD5276E4D(iParam0, 0))
	{
		return false;
	}
	return true;
}

bool func_670(int iParam0, int iParam1)
{
	if (!func_526(iParam1, 0))
	{
		if (!func_227(&iParam1))
		{
			return false;
		}
	}
	return func_658(&(Local_82[iParam1 /*27*/].f_10), 1, iParam0);
}

bool func_671(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (!func_527(255))
	{
		return false;
	}
	if (func_477(67108864, 255))
	{
		return true;
	}
	if (func_477(134217728, 255))
	{
		func_478(1048576);
		return true;
	}
	if (func_496(134217728, 255))
	{
		if (func_595(Local_947.f_19.f_159, 500))
		{
			func_504(134217728);
		}
	}
	iVar0 = func_188(iParam0);
	switch (func_853(iParam0))
	{
		case 0:
			iVar1 = ENTITY::_0xEF2D9ED7CE684F08(iVar0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (iVar1 == PLAYER::PLAYER_PED_ID())
				{
					func_478(67108864);
				}
			}
			if (!func_598(8192))
			{
				if (PED::_GET_LASSOER_OF_PED(iVar0))
				{
					vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
					if (Global_1940258.f_40 == joaat("WEAPON_THROWN_BOLAS"))
					{
						if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vVar2, joaat("WEAPON_THROWN_BOLAS"), 2f, true))
						{
							func_478(67108864);
						}
					}
				}
			}
			break;
		case 1:
			if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true)) && TASK::_0xEFC4303DDC6E60D3(PLAYER::PLAYER_PED_ID())) && TASK::_0xED1F514AF4732258(PLAYER::PLAYER_PED_ID()) == iVar0)
			{
				func_478(134217728);
			}
			break;
	}
	return false;
}

bool func_672(int iParam0, int iParam1)
{
	if (!func_526(iParam1, 0))
	{
		if (!func_227(&iParam1))
		{
			return false;
		}
	}
	if (!func_854(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1)))
	{
		return false;
	}
	return func_658(&(Local_82[iParam1 /*27*/].f_10), 3, iParam0);
}

bool func_673(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_6)
	{
		func_855(uParam2, 1, iVar0);
	}
	if (!Global_1940258.f_6 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_13 = fParam5;
		}
		else
		{
			uParam2->f_13 = BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_2 & 128 != 0)
		{
			if (func_856(iParam0, uParam2))
			{
				*iParam3 = 128;
				func_857(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258.f_21)
		{
			if (!uParam2->f_2 & 8 != 0)
			{
				if (func_858(iParam0, uParam2))
				{
					*iParam3 = 8;
					func_857(iParam0, uParam2, *iParam3);
					return true;
				}
				else if (func_859(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					func_857(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_860(iParam0, uParam2))
				{
					*iParam3 = 64;
					func_857(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940258.f_20 && func_861(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_2 & 524288 == 0))
		{
			if (!uParam2->f_2 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_857(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258.f_19)
		{
			if (func_862(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_2 & 4 != 0)
				{
					if (func_863(Global_34, iParam0, uParam2))
					{
						*iParam3 = 4;
						func_857(iParam0, uParam2, *iParam3);
						return true;
					}
				}
				if (!uParam2->f_2 & 256 != 0)
				{
					if (func_864(Global_34, iParam0, uParam2))
					{
						*iParam3 = 256;
						func_857(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 16 != 0)
		{
			if ((uParam2->f_6 - Global_1940258.f_23) < 300)
			{
				if (func_865(Global_34, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					func_857(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (func_865(Global_34, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				func_857(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940258.f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_866(iParam0, uParam2))
				{
					*iParam3 = 32;
					func_857(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1940258.f_19 || uParam2->f_13 < 20f)
			{
				if (func_867(&iParam0, uParam2))
				{
					*iParam3 = 4096;
					func_857(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940258.f_24 || Global_1940258.f_25)
		{
			if (!uParam2->f_2 & 2 != 0)
			{
				if (func_868(uParam2, 4000))
				{
					if ((func_869(iParam0, Global_1940258.f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_870(uParam2, iParam0)) && func_871(uParam2, iParam0))
					{
						*iParam3 = 2;
						func_857(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 2 != 0)
		{
			if (uParam2->f_13 < 4f)
			{
				if ((func_869(iParam0, Global_1940258.f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_870(uParam2, iParam0)) && func_871(uParam2, iParam0))
				{
					*iParam3 = 2;
					func_857(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (Global_1940258.f_34 == 0)
			{
				if (Global_1940258.f_35 != 0)
				{
					if (func_872(iParam0, Global_1940258.f_35))
					{
						func_873();
						*iParam3 = 2;
						func_857(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (uParam2->f_13 < 10f)
			{
				if (func_874(uParam2, iParam0) || (uParam2->f_10 > 0 && (func_875() - uParam2->f_10) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_873();
						*iParam3 = 2;
						func_857(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1940258.f_36 != 0)
			{
				if (func_876())
				{
					if (func_872(iParam0, Global_1940258.f_36))
					{
						func_873();
						*iParam3 = 2;
						func_857(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 1024 != 0)
		{
			if (func_877(uParam2, iParam0))
			{
				*iParam3 = 1024;
				func_857(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (func_878(uParam2, iParam0))
		{
			*iParam3 = 1048576;
			func_857(iParam0, uParam2, *iParam3);
			return true;
		}
		if (uParam2->f_13 < uParam2->f_29)
		{
			if (!uParam2->f_2 & 2048 != 0)
			{
				if (func_879(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					func_857(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_7 == 2)
				{
					if (func_880(iParam0, uParam2))
					{
						*iParam3 = 8192;
						func_857(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_881(iParam0, uParam2))
				{
					*iParam3 = 32768;
					func_857(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (uParam2->f_13 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_882(uParam2, 4000))
				{
					if (func_883(&iParam0, uParam2))
					{
						*iParam3 = 512;
						func_857(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_13 < uParam2->f_21)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_884(iParam0, uParam2))
				{
					*iParam3 = 65536;
					uParam2->f_5 = 0;
					func_857(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_2 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_885(uParam2, iParam0))
			{
				*iParam3 = 1;
				func_857(iParam0, uParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

int func_674(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_886(iParam0, vVar0, iParam2);
}

bool func_675(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar4;

	if (!func_887(iParam0, iParam1, iParam2, 0))
	{
		return false;
	}
	func_888(&iVar4, iParam1->f_12);
	func_890(Local_947.f_274.f_7[iParam0 /*11*/], &uVar0, iParam1->f_3, func_889(iParam1), iParam1->f_9, iParam1->f_10, iParam1->f_11, 0, 0);
	return func_891(&iVar4, &uVar0);
}

bool func_676(int iParam0)
{
	int iVar0;

	if (!func_227(&iVar0))
	{
		return false;
	}
	return func_658(&(Local_82[iVar0 /*27*/].f_10), 0, iParam0);
}

bool func_677(int iParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(Local_947.f_406.f_64, iParam0))
	{
		return false;
	}
	if (func_186(Local_947.f_406.f_2, 256))
	{
		return false;
	}
	if (iParam1->f_2 < 0f || iParam1->f_2 > IntToFloat(func_892(&(Local_947.f_406))))
	{
		return false;
	}
	return true;
}

bool func_678(int iParam0, int iParam1, int iParam2)
{
	if (!func_677(iParam0, iParam1))
	{
		return false;
	}
	if (Local_82[iParam2 /*27*/].f_10.f_4 != 0 && NETWORK::GET_TIME_DIFFERENCE(Local_82[iParam2 /*27*/].f_10.f_4, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
	{
		return true;
	}
	return false;
}

bool func_679(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!func_189())
	{
		func_714();
	}
	if (func_477(67108864, 255) || func_477(134217728, 255))
	{
		if (!func_571())
		{
			func_893(0);
		}
		return true;
	}
	switch (func_853(iParam0))
	{
		case 0:
			switch (func_239())
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					if (func_503(64))
					{
						if ((!func_503(128) || Local_947.f_19.f_159 == 0) || NETWORK::GET_TIME_DIFFERENCE(Local_947.f_19.f_159, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
						{
							if (func_503(128))
							{
								if (Local_947.f_19.f_159 == 0)
								{
									Local_947.f_19.f_159 = NETWORK::GET_NETWORK_TIME_ACCURATE();
								}
							}
							if (!func_894(iParam1, 0, 0, 0, 0))
							{
								return false;
							}
						}
					}
					else if ((func_503(16) || func_503(32)) || func_496(2048, 255))
					{
						if (Local_947.f_19.f_159 == 0 || NETWORK::GET_TIME_DIFFERENCE(Local_947.f_19.f_159, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
						{
							if (Local_947.f_19.f_159 == 0)
							{
								Local_947.f_19.f_159 = NETWORK::GET_NETWORK_TIME_ACCURATE();
							}
							if (!func_894(iParam1, 0, 1, 0, 0) || iParam1 == 256)
							{
								return false;
							}
						}
					}
					break;
				case 10:
					if (iParam1 == 8)
					{
						if (WEAPON::_0xCB690F680A3EA971(PLAYER::PLAYER_PED_ID(), 4))
						{
							func_573(134217728);
						}
						else
						{
							func_504(134217728);
						}
					}
					if (func_598(4096))
					{
						Local_947.f_19.f_159 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					}
					if ((!func_598(4096) || Local_947.f_19.f_159 == 0) || NETWORK::GET_TIME_DIFFERENCE(Local_947.f_19.f_159, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
					{
						if (!func_894(iParam1, 1, 0, 0, 0) && iParam1 != 1024)
						{
							return false;
						}
					}
					break;
				case 11:
					if (func_598(8192))
					{
						Local_947.f_19.f_159 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					}
					if ((!func_598(8192) || Local_947.f_19.f_159 == 0) || NETWORK::GET_TIME_DIFFERENCE(Local_947.f_19.f_159, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
					{
						if (func_598(8192))
						{
							switch (iParam1)
							{
								case 2:
								case 4:
								case 8:
									if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, false, 0, false))
									{
										if ((iVar0 == joaat("WEAPON_LASSO") || iVar0 == joaat("WEAPON_LASSO_REINFORCED")) || iVar0 == joaat("WEAPON_THROWN_BOLAS"))
										{
											return false;
										}
									}
									break;
							}
						}
						if (!func_894(iParam1, 1, 1, 0, 0) && iParam1 != 1024)
						{
							return false;
						}
					}
					break;
				case 2:
					if (func_496(2, 255))
					{
						if (iParam1 == 1024)
						{
							return false;
						}
					}
					break;
			}
			if (iParam1 == 1024)
			{
				func_497(joaat("PERSONA_HONOR_ACTION__HORSE_THIEF_AI"), 0, 0);
				func_478(1048576);
			}
			break;
		case 2:
			if (func_496(64, 255))
			{
				return false;
			}
			break;
		case 1:
			if (!func_894(iParam1, 0, 0, 0, 0))
			{
				return false;
			}
			func_478(1048576);
			break;
	}
	if (!func_571())
	{
		func_893(0);
	}
	return true;
}

void func_680(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_227(&iVar0))
	{
		return;
	}
	func_660(&(Local_82[iVar0 /*27*/].f_10), 1, iParam0);
	if (bParam1)
	{
		Local_82[iVar0 /*27*/].f_10.f_9[iParam0] = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

bool func_681(int iParam0, int iParam1)
{
	if (!func_526(iParam1, 0))
	{
		if (!func_227(&iParam1))
		{
			return false;
		}
	}
	return func_658(&(Local_82[iParam1 /*27*/].f_10), 2, iParam0);
}

bool func_682(int iParam0)
{
	return true;
}

void func_683(int iParam0)
{
}

void func_684(int iParam0)
{
	int iVar0;

	if (!func_227(&iVar0))
	{
		return;
	}
	func_660(&(Local_82[iVar0 /*27*/].f_10), 2, iParam0);
}

bool func_685(int iParam0)
{
	var uVar0;

	SCRIPTS::_0x20F4CB76689ACDBC(&uVar0);
	SCRIPTS::_0x64F765D9A1F8F02C(&uVar0, &(Local_947.f_406.f_74[iParam0]), &uVar0);
	return !SCRIPTS::_0x179A6F0EE2E79026(&uVar0);
}

bool func_686(int iParam0, var uParam1, int iParam2, var uParam3)
{
	*uParam1 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(*uParam1))
	{
		return false;
	}
	*iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX(*uParam1);
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(*iParam2))
	{
		return false;
	}
	*uParam3 = PLAYER::GET_PLAYER_PED(*iParam2);
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam3))
	{
		return false;
	}
	return true;
}

bool func_687(int iParam0, int iParam1)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return SCRIPTS::_0x72B2E00C9BAC6789(&(Local_947.f_406.f_66[iParam0]), iParam1);
}

bool func_688(int iParam0, var uParam1, int iParam2, var uParam3)
{
	return true;
}

void func_689(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return;
	}
	if (!func_227(&iVar0))
	{
		return;
	}
	SCRIPTS::_0x31010318BA9897AC(&(Local_82[iVar0 /*27*/].f_10.f_5[iParam0]), iParam1);
}

float func_690()
{
	int iVar0;
	float fVar1;

	if (Local_947.f_537.f_3 == 0)
	{
		Local_947.f_537.f_3 = MISC::GET_GAME_TIMER();
		return 0.03125f;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	fVar1 = (BUILTIN::TO_FLOAT((iVar0 - Local_947.f_537.f_3)) * 0.001f);
	Local_947.f_537.f_3 = iVar0;
	return fVar1;
}

bool func_691(int iParam0, bool bParam1)
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
	return true;
}

bool func_692(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) };
	return func_895(vVar0, vParam0) > func_895(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

int func_693(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, float fParam6, bool bParam7)
{
	float fVar0;
	bool bVar1;

	iParam2 = iParam2;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_6) || (bParam7 && ENTITY::IS_ENTITY_DEAD(uParam0->f_6)))
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
			else if (func_896(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
					if (func_897(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_898() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_694(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar1 = 0;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((ENTITY::DOES_ENTITY_EXIST((uParam0[iVar0 /*9*/])->f_6) && (uParam0[iVar0 /*9*/])->f_7 > 0f) && ENTITY::IS_ENTITY_ON_SCREEN((uParam0[iVar0 /*9*/])->f_6))
		{
			iVar1++;
			fVar2 = (fVar2 + (uParam0[iVar0 /*9*/])->f_7);
		}
		iVar0++;
	}
	if (iParam1 > 1)
	{
		iParam1 = (iParam1 - 1);
	}
	if (iVar1 < iParam1)
	{
		return false;
	}
	if (fVar2 < fParam2)
	{
		return false;
	}
	func_179(uParam0);
	return true;
}

void func_695(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	iVar0 = func_483(iParam2);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (func_899(iParam2))
		{
			func_484(iParam2, 0);
		}
		return;
	}
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	if (uParam0->f_2 != uParam1->f_1)
	{
		uParam1->f_1 = uParam0->f_2;
	}
	if (uParam1->f_1 == 0 && *uParam0 != *uParam1)
	{
		func_229(iParam2, *uParam0);
		func_900(*uParam1, *uParam0);
		*uParam1 = *uParam0;
	}
	func_901(iParam2);
	switch (uParam1->f_1)
	{
		case 0:
			if (!func_482(iParam2, 1))
			{
				return;
			}
			if (func_795(iParam2))
			{
				if (!func_899(iParam2))
				{
					func_902(iParam2);
				}
				if (func_482(iParam2, 16))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
				}
				bVar3 = MISC::IS_BIT_SET(Local_82[iVar1 /*27*/].f_24, iParam2);
				iVar2 = 0;
				while (iVar2 < 4)
				{
					if (func_903(iParam2, iVar2, 16))
					{
						func_904(iParam2, iVar2, 1);
					}
					bVar4 = (func_903(iParam2, iVar2, 1) || bVar3);
					bVar5 = func_903(iParam2, iVar2, 8);
					bVar6 = (bVar4 || bVar5);
					if (!bVar6)
					{
						if (func_903(iParam2, iVar2, 4))
						{
							if (func_905() < Local_947.f_578[iParam2 /*39*/].f_6[iVar2 /*8*/].f_7)
							{
								bVar6 = true;
							}
						}
					}
					if (bVar5)
					{
						func_797(iParam2, iVar2, 8);
					}
					if (!func_778(Local_947.f_578[iParam2 /*39*/].f_6[iVar2 /*8*/]))
					{
					}
					else if (func_906(Local_947.f_578[iParam2 /*39*/].f_6[iVar2 /*8*/], 0))
					{
						if (bVar6)
						{
							func_798(Local_947.f_578[iParam2 /*39*/].f_6[iVar2 /*8*/], 0, 1, 1);
						}
						else
						{
							if (!func_227(&iVar1))
							{
							}
							else
							{
								if (func_907(Local_947.f_578[iParam2 /*39*/].f_6[iVar2 /*8*/], 1))
								{
									if (!func_908(iParam2, iVar2, func_228(iParam2)))
									{
										Jump @583; //curOff = 513
									}
									else
									{
										MISC::SET_BIT(&(Local_82[iVar1 /*27*/].f_24), iParam2);
										func_122(&(Local_82[iVar1 /*27*/].f_24.f_1), iParam2, iVar2);
									}
								}
								Jump @583; //curOff = 551
								if (!bVar6)
								{
									func_798(Local_947.f_578[iParam2 /*39*/].f_6[iVar2 /*8*/], 1, 1, 1);
								}
							}
							iVar2++;
							Jump @611; //curOff = 592
							if (func_899(iParam2))
							{
								func_484(iParam2, 0);
							}
							Jump @924; //curOff = 611
							iVar2 = 0;
							while (iVar2 < 4)
							{
								if (!func_778(Local_947.f_578[iParam2 /*39*/].f_6[iVar2 /*8*/]))
								{
								}
								else if (func_906(Local_947.f_578[iParam2 /*39*/].f_6[iVar2 /*8*/], 0))
								{
									func_798(Local_947.f_578[iParam2 /*39*/].f_6[iVar2 /*8*/], 0, 1, 1);
								}
								iVar2++;
							}
							if (!MISC::IS_BIT_SET(Local_82[iVar1 /*27*/].f_24.f_2, iParam2))
							{
								func_909(iParam2, func_815(Local_13.f_58.f_10, iParam2));
								MISC::SET_BIT(&(Local_82[iVar1 /*27*/].f_24.f_2), iParam2);
							}
							Jump @924; //curOff = 760
							iVar2 = 0;
							while (iVar2 < 4)
							{
								if (!func_778(Local_947.f_578[iParam2 /*39*/].f_6[iVar2 /*8*/]))
								{
								}
								else if (func_906(Local_947.f_578[iParam2 /*39*/].f_6[iVar2 /*8*/], 0))
								{
									func_798(Local_947.f_578[iParam2 /*39*/].f_6[iVar2 /*8*/], 0, 1, 1);
								}
								iVar2++;
							}
							if (MISC::IS_BIT_SET(Local_82[iVar1 /*27*/].f_24.f_2, iParam2))
							{
								MISC::CLEAR_BIT(&(Local_82[iVar1 /*27*/].f_24.f_2), iParam2);
								MISC::CLEAR_BIT(&(Local_82[iVar1 /*27*/].f_24), iParam2);
								func_122(&(Local_82[iVar1 /*27*/].f_24.f_1), iParam2, 3);
							}
						}
					}
				}
			}
			default:
				break;
	}
}

bool func_696()
{
	return (Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"));
}

bool func_697(int iParam0)
{
	var uVar0;
	int iVar1;

	if (func_910(iParam0, &uVar0, &iVar1, 1))
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	return false;
}

char* func_698()
{
	int iVar0;
	int iVar1;

	iVar0 = func_239();
	iVar1 = func_243();
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

var func_699(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_700()
{
	int iVar0;

	iVar0 = func_243();
	switch (iVar0)
	{
		case 0:
			return "NB_PHOTOGRAPHY_H_REWARD_TS";
		case 1:
			return "NB_PHOTOGRAPHY_H_REWARD_FS";
		case 2:
			if (func_570())
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

char* func_701(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_239();
	iVar1 = func_243();
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
					if (func_570())
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
					if (func_713())
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
					if ((NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar2) && NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_21)) && iVar2 == Local_13.f_7.f_21)
					{
						return "NB_PHOTOGRAPHY_H_GATHER_CAMERAMAN";
					}
					else
					{
						return "NB_PHOTOGRAPHY_H_GATHER";
					}
					break;
				case 134217728:
					if ((NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar2) && NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_21)) && iVar2 == Local_13.f_7.f_21)
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
					if (func_570())
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

int func_702(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_947.f_274.f_7[iParam0 /*11*/]))
		{
			return 255;
		}
	}
	iVar1 = -1;
	bVar2 = fParam1 > 0f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
		{
		}
		else if (Local_82[iVar0 /*27*/].f_4.f_2[iParam0] <= 0f)
		{
		}
		else if (bParam3 && !func_527(iVar0))
		{
		}
		else if (iVar1 != -1 && Local_82[iVar0 /*27*/].f_4.f_2[iParam0] > Local_82[iVar1 /*27*/].f_4.f_2[iParam0])
		{
		}
		else if (bVar2 && Local_82[iVar0 /*27*/].f_4.f_2[iParam0] > fParam1)
		{
		}
		else
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 > -1 && iVar1 < 32)
	{
		return NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
	}
	return 255;
}

int func_703()
{
	switch (func_239())
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

int func_704()
{
	switch (func_239())
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

int func_705()
{
	switch (func_239())
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

int func_706(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_702(iParam0, fParam1, bParam2, bParam3);
	if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
	}
	return 255;
}

float func_707(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iParam0))
		{
			return 0f;
		}
	}
	return Local_82[iParam0 /*27*/].f_4.f_2[iParam1];
}

int func_708(float fParam0)
{
	if (fParam0 < func_603())
	{
		return 4;
	}
	if (fParam0 < func_911())
	{
		return 2;
	}
	if (fParam0 < func_912())
	{
		return 1;
	}
	return 0;
}

bool func_709()
{
	return func_913(1);
}

bool func_710(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	bVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return true;
		}
	}
	return false;
}

bool func_711(int iParam0)
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
	fVar7 = func_914((func_577(0, 255, 1) * 0.95f), 0f, 20f);
	vVar8 = { func_565(vVar4 - vVar1) };
	vVar11 = { vVar1 + vVar8 * Vector(fVar7, fVar7, fVar7) / Vector(2f, 2f, 2f) };
	vVar14 = { func_915(vVar8, 0f, 0f, 1f) };
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_947.f_19.f_254))
	{
		Local_947.f_19.f_254 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar11, vVar14, fVar7, 1f, 2f, "PHOTO_CAM_VOL");
	}
	VOLUME::_SET_VOLUME_COORDS(Local_947.f_19.f_254, vVar11);
	VOLUME::_SET_VOLUME_ROTATION(Local_947.f_19.f_254, vVar14);
	VOLUME::_SET_VOLUME_SCALE(Local_947.f_19.f_254, fVar7, 1f, 1.75f);
	if (!func_530(32, 255))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
		func_718(32);
	}
	if (PED::_0x5102307CE88798EB(iParam0))
	{
		if (!PED::_0x164CECC59E70DF86(iParam0, 0.75f))
		{
			return true;
		}
		if (!PED::IS_TRACKED_PED_VISIBLE(iParam0))
		{
			return true;
		}
	}
	if (ENTITY::IS_ENTITY_OCCLUDED(iParam0))
	{
		return true;
	}
	iVar17 = ITEMSET::CREATE_ITEMSET(true);
	iVar18 = ENTITY::_0x886171A12F400B89(Local_947.f_19.f_254, iVar17, 1);
	iVar21 = func_239();
	iVar19 = 0;
	while (iVar19 < iVar18)
	{
		iVar20 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar19, iVar17));
		if (ENTITY::DOES_ENTITY_EXIST(iVar20))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar20))
			{
				iVar22 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar20);
				if ((!func_712() || iVar22 != iVar0) && iVar22 != iParam0)
				{
					iVar23 = PED::GET_MOUNT(iParam0);
					if (iVar23 == 0 || iVar23 != iVar22)
					{
						if (iVar21 == 8)
						{
							iVar24 = func_188(2);
						}
						if (iVar24 == 0 || iVar24 != iVar22)
						{
							ITEMSET::_CLEAR_ITEMSET(iVar17);
							ITEMSET::DESTROY_ITEMSET(iVar17);
							return true;
						}
					}
				}
			}
		}
		iVar19++;
	}
	ITEMSET::_CLEAR_ITEMSET(iVar17);
	ITEMSET::DESTROY_ITEMSET(iVar17);
	return false;
}

bool func_712()
{
	return Global_1958006;
}

bool func_713()
{
	switch (func_239())
	{
		case 9:
		case 10:
		case 11:
			return true;
		default:
			break;
	}
	return false;
}

void func_714()
{
	int iVar0;

	if (!func_134(32, 255))
	{
		func_916(Local_947.f_1, Local_947.f_3);
		if (!func_134(1024, 255))
		{
			func_917(Local_947.f_1);
			func_151(1024);
		}
		iVar0 = func_489(Local_947.f_1, Local_947.f_2);
		func_918(iVar0);
		func_919(iVar0);
		func_149(2);
		func_920(Local_947.f_9);
		func_921(Local_947.f_1);
		func_922(Local_947.f_1, Local_947.f_2, Local_947.f_3);
		func_151(32);
	}
}

void func_715(int iParam0)
{
	if (!MAP::DOES_BLIP_EXIST(Local_947.f_19.f_3[iParam0 /*2*/]))
	{
		return;
	}
	MAP::REMOVE_BLIP(&(Local_947.f_19.f_3[iParam0 /*2*/]));
}

void func_716(float fParam0)
{
	int iVar0;
	float fVar1;

	if (!func_527(255))
	{
		func_715(0);
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), func_508(0));
	if (fVar1 < fParam0)
	{
		func_923(0, 0);
	}
	else
	{
		func_715(0);
	}
}

void func_717(var uParam0)
{
	*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
}

void func_718(int iParam0)
{
	int iVar0;

	if (!func_227(&iVar0))
	{
		return;
	}
	func_248(&(Local_82[iVar0 /*27*/].f_1.f_2), iParam0);
}

void func_719(int iParam0)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20))
	{
		return;
	}
	func_924(Local_13.f_7.f_20, iParam0);
}

void func_720(int iParam0)
{
	int iVar0;

	if (!func_227(&iVar0))
	{
		return;
	}
	func_347(&(Local_82[iVar0 /*27*/].f_1.f_2), iParam0);
}

void func_721()
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar0 = func_188(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return;
	}
	if (func_506(iVar0, 993674639, 1, 0))
	{
		iVar1 = func_358(0);
		sVar2 = func_925(0);
		if (iVar1 != 0)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
			{
				TASK::_TASK_START_SCENARIO_IN_PLACE(iVar0, iVar1, 0, false, 0, -1f, false);
			}
			else
			{
				TASK::_TASK_START_SCENARIO_IN_PLACE(iVar0, iVar1, 0, false, MISC::GET_HASH_KEY(sVar2), -1f, false);
			}
		}
	}
}

void func_722()
{
	if (func_477(524288, 255) && !func_595(Local_13.f_7.f_11, Local_13.f_7.f_16))
	{
		func_510(524288);
	}
}

int func_723()
{
	return 6;
}

void func_724(int iParam0)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20))
	{
		return;
	}
	func_926(Local_13.f_7.f_20, iParam0);
}

bool func_725(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_494(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return false;
	}
	return func_927(iVar0, iParam0);
}

bool func_726(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_786(iParam0, iParam1))
	{
		return false;
	}
	iVar0 = func_928(iParam1);
	return func_927(iVar0, iParam0);
}

bool func_727(int iParam0, int iParam1)
{
	if (!func_786(iParam0, iParam1))
	{
		return false;
	}
	return func_927(iParam1, iParam0);
}

int func_728()
{
	return 2;
}

int func_729()
{
	return 4;
}

void func_730()
{
	if (func_733())
	{
		if ((func_602(func_601(56)) || func_602(func_601(57))) || func_602(func_601(58)))
		{
			return;
		}
		func_575(1, 0, 0);
		if (!func_587(56))
		{
			func_591(0, 0, 56, 0);
		}
		else if (!func_587(57))
		{
			func_591(0, 0, 57, 0);
		}
		else if (!func_587(58))
		{
			func_591(0, 0, 58, 0);
		}
	}
}

void func_731()
{
	if (!func_590(1))
	{
		if (!func_587(59))
		{
			if (func_595(Local_13.f_7.f_9, 5000))
			{
				func_591(0, 0, 59, 0);
			}
		}
	}
}

void func_732()
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_21))
	{
		func_719(100);
		return;
	}
	func_924(Local_13.f_7.f_21, 100);
}

bool func_733()
{
	int iVar0;

	if (func_577(0, 255, 1) > 50f)
	{
		return false;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if ((DECORATOR::DECOR_EXIST_ON(iVar0, "camera_takingPic") && DECORATOR::DECOR_GET_BOOL(iVar0, "camera_takingPic")) || func_503(1073741824 /* Float: 2f */))
		{
			return true;
		}
	}
	return false;
}

void func_734()
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

	iVar0 = func_188(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		func_478(256);
		return;
	}
	iVar1 = PED::GET_MOUNT(iVar0);
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar19 = 255;
	if (func_711(iVar0))
	{
		iVar8 -= 5;
	}
	else
	{
		iVar8 = (iVar8 + func_929(iVar0));
	}
	if (func_930(iVar0, iVar2, 0))
	{
		iVar8++;
	}
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar2, true, false) };
	if (func_931(vVar4))
	{
		iVar9 = (iVar9 + -1);
	}
	else if (func_932(vVar4))
	{
		iVar9 = (iVar9 + -1);
	}
	else
	{
		iVar9++;
	}
	iVar20 = func_239();
	switch (iVar20)
	{
		case 0:
			vVar4 = { func_370(1) };
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
			iVar11 = (iVar11 + func_929(iVar1));
			if (func_930(iVar1, iVar2, 0))
			{
				iVar11++;
			}
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			iVar3 = func_188(2);
			iVar12 = (iVar12 + func_929(iVar3));
			if (func_930(iVar3, iVar2, 0))
			{
				iVar12++;
			}
			if (Local_13.f_7.f_18 >= func_933())
			{
				iVar12 += 3;
			}
			else if (Local_13.f_7.f_18 >= func_934())
			{
				iVar12 += 2;
			}
			else
			{
				iVar12 = iVar12;
			}
			break;
		case 8:
			iVar3 = func_188(2);
			iVar12 = (iVar12 + func_929(iVar3));
			break;
		case 9:
		case 10:
		case 11:
			uVar15 = func_935(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), 0f, 0f, 0f, 3f, 3f, 3f, joaat("VOLSPHERE"), 0, 8);
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
							iVar13 = (iVar13 + func_929(iVar18));
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
									if (!func_496(134217728, iVar17) && (!WEAPON::_0xCB690F680A3EA971(iVar18, 4) || (!PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar19, iVar0, false) && !PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar19, iVar0))))
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
									if (func_930(iVar18, iVar2, 0))
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
	if (!func_477(2048, 255))
	{
		if (iVar14 >= iVar21)
		{
			func_478(1024);
			func_510(512);
			func_510(256);
		}
		else if (iVar14 >= iVar22)
		{
			func_478(512);
			func_510(1024);
			func_510(256);
		}
		else
		{
			func_478(256);
			func_510(1024);
			func_510(512);
		}
	}
}

void func_735()
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
	iVar0 = func_239();
	iVar1 = func_188(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		return;
	}
	if (iVar0 == 11)
	{
		if (PED::_IS_PED_LASSOED(iVar1) && !PED::_IS_PED_HOGTIED(iVar1))
		{
			func_584(0, 65f, 5000, 0, 154, 155, 156, -1, -1, -1, 0, 157);
			return;
		}
		iVar2 = ENTITY::_0x61914209C36EFDDB(iVar1);
		switch (iVar2)
		{
			case 4:
			case 5:
			case 7:
			case 8:
				func_584(0, 65f, 5000, 0, 165, 166, 167, -1, -1, -1, 0, -1);
				if (func_587(167))
				{
					if (Local_13.f_7.f_14 == 0)
					{
						func_588(&(Local_13.f_7.f_14));
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
	if (func_570())
	{
		if (func_936())
		{
			return;
		}
	}
	Local_13.f_7.f_6 = func_935(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), 0f, 0f, 0f, 3f, 3f, 3f, joaat("VOLSPHERE"), 0, 8);
	iVar3 = SCRIPTS::COUNT_PLAYER_BITS(&(Local_13.f_7.f_6));
	Local_13.f_7.f_7 = func_935(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), 0f, 0f, 0f, 30f, 30f, 30f, joaat("VOLSPHERE"), 0, 8);
	iVar4 = SCRIPTS::COUNT_PLAYER_BITS(&(Local_13.f_7.f_7));
	if (func_713())
	{
		if (iVar3 < 1)
		{
			func_579(32768);
			if (iVar4 > 2)
			{
				func_584(0, 65f, 5000, 1, 140, 141, 142, -1, -1, -1, 0, 143);
				return;
			}
			else
			{
				func_584(0, 65f, 5000, 1, 137, 138, 139, -1, -1, -1, 0, 143);
				return;
			}
		}
	}
	func_580(32768);
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
								if (func_496(134217728, iVar5) || (WEAPON::_0xCB690F680A3EA971(iVar7, 4) && (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar8, iVar1, false) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar8, iVar1))))
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
								func_579(65536);
								switch (iVar0)
								{
									case 9:
										func_584(0, 65f, 5000, 0, 147, 148, 149, -1, -1, -1, 0, 153);
										break;
									case 10:
										func_584(0, 65f, 5000, 0, 150, 151, 152, -1, -1, -1, 0, 153);
										break;
								}
								return;
							}
							func_742(iVar1);
							func_580(65536);
							if (iVar0 == 11)
							{
								if (!PED::_IS_PED_HOGTIED(iVar1))
								{
									func_584(0, 65f, 5000, 0, 154, 155, 156, -1, -1, -1, 0, 157);
									return;
								}
								func_742(iVar1);
							}
							if (!func_598(16))
							{
								if ((iVar0 == 10 || iVar0 == 9) || iVar0 == 11)
								{
									func_584(0, 65f, 5000, 0, 144, 145, 146, -1, -1, -1, 0, 39);
								}
								else
								{
									func_584(0, 65f, 5000, 0, 36, 37, 38, -1, -1, -1, 0, 39);
								}
								return;
							}
							iVar9 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_21);
							if (iVar9 == 0)
							{
								return;
							}
							vVar10 = { ENTITY::GET_ENTITY_COORDS(iVar9, false, false) };
							if (func_931(vVar10))
							{
								func_584(0, 65f, 5000, 1, 52, 53, 54, -1, -1, -1, 0, 55);
								return;
							}
							else if (func_932(vVar10))
							{
								func_584(0, 65f, 5000, 1, 40, 41, 42, -1, -1, -1, 0, 43);
								return;
							}
							if (!func_582(32768))
							{
								func_584(0, 65f, 5000, 1, 44, 45, 46, -1, -1, -1, 0, 47);
								return;
							}
							if (func_713())
							{
								if (!func_582(262144))
								{
									func_584(0, 65f, 5000, 1, 161, 162, 163, -1, -1, -1, 0, 164);
									return;
								}
								else if (!func_582(131072))
								{
									func_584(0, 65f, 5000, 1, 158, 159, 160, -1, -1, -1, 0, 164);
									return;
								}
							}
							if ((func_570() || iVar0 == 1) || iVar0 == 8)
							{
								if (!func_582(65536))
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
									func_584(0, 65f, 5000, 1, iVar13, 48, 49, 50, -1, -1, 0, 51);
									return;
								}
							}
							func_584(0, 65f, 5000, 1, 62, 63, 64, 17, 18, 19, 0, 20);
							default:
								break;
					}
				}
			}
		}
	}
}

bool func_736(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	vVar3 = { func_370(1) };
	vVar6 = { func_370(0) };
	if (func_570())
	{
		vVar3 = { func_508(2) };
		vVar6 = { func_370(3) };
	}
	else if (func_239() == 9)
	{
		vVar3 = { func_370(5) };
		vVar6 = { func_370(6) };
	}
	vVar0 = { func_565(vVar6 - vVar3) * Vector(10f, 10f, 10f) + vVar6 };
	if (!func_937(iParam0, vVar0, 0.95f))
	{
		if (func_506(iParam0, 1464580341, 1, 0))
		{
			TASK::TASK_TURN_PED_TO_FACE_COORD(iParam0, vVar0, -1);
		}
	}
	else
	{
		if (func_239() != 9)
		{
			if (Local_13.f_7.f_19 != -1)
			{
				if (func_506(iParam0, 993674639, 1, 0))
				{
					func_737();
				}
			}
		}
		return true;
	}
	return false;
}

void func_737()
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;

	if (Local_13.f_7.f_19 == -1)
	{
		return;
	}
	iVar0 = func_188(0);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	iVar1 = func_738();
	iVar2 = func_358(iVar1);
	sVar3 = func_925(iVar1);
	if (!PED::_IS_PED_USING_SCENARIO_HASH(iVar0, iVar2))
	{
		if (iVar2 != 0)
		{
			PED::_0xA3A9299C4F2ADB98(iVar0);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
			{
				TASK::_TASK_START_SCENARIO_IN_PLACE(iVar0, iVar2, 0, true, 0, -1f, false);
			}
			else
			{
				TASK::_TASK_START_SCENARIO_IN_PLACE(iVar0, iVar2, 0, true, MISC::GET_HASH_KEY(sVar3), -1f, false);
			}
		}
	}
}

int func_738()
{
	return Local_13.f_7.f_19;
}

void func_739()
{
	if (MAP::DOES_BLIP_EXIST(Local_947.f_19.f_154))
	{
		func_938(&(Local_947.f_19.f_154));
	}
}

void func_740()
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_22))
	{
		func_719(5000);
		return;
	}
	func_924(Local_13.f_7.f_22, 5000);
}

bool func_741()
{
	float fVar0;

	fVar0 = 0f;
	switch (func_239())
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

void func_742(int iParam0)
{
	if (Local_947.f_19.f_249 == 0)
	{
		Local_947.f_19.f_249 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(func_939(), iParam0, -1f, 35f, 50f, -1f, -1f, 180f, false, false, -1, -1);
	}
}

void func_743()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_570())
	{
		return;
	}
	iVar0 = func_188(2);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	if (func_346(iVar0, 518218985))
	{
		return;
	}
	if (func_346(iVar0, -1442466670) || func_346(iVar0, -1952598043))
	{
		if (func_507(0, 2) < func_603())
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_573(64);
				func_574(25);
			}
		}
		return;
	}
	iVar1 = func_706(2, func_603(), 1, 1);
	if (func_940(iVar1))
	{
		if (!func_190(268435456))
		{
			if (func_190(134217728))
			{
				func_121(268435456);
				iVar2 = func_188(0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, Local_947.f_19.f_45, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar2));
				}
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, Local_947.f_19.f_45, joaat("REL_MP_LIKE_ALL_PLAYERS"));
			}
		}
		if (func_506(iVar0, -1442466670, 1, 0))
		{
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iVar0, 100f, 0, 0);
		}
	}
	if (func_505(2))
	{
		if (func_506(iVar0, 518218985, 1, 0))
		{
			iVar3 = func_817(2);
			if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar3))
			{
				iVar4 = PLAYER::GET_PLAYER_PED(iVar3);
				if (ENTITY::DOES_ENTITY_EXIST(iVar4) && !PED::IS_PED_DEAD_OR_DYING(iVar4, true))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, iVar4, 500f, -1, 0, 1077936128 /* Float: 3f */, 0);
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(iVar0, func_508(2), 500f, -1, false, 1077936128);
				}
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(iVar0, func_508(2), 500f, -1, false, 1077936128);
			}
		}
	}
}

float func_744(int iParam0)
{
	return Local_947.f_274.f_7[iParam0 /*11*/].f_5;
}

void func_745(float fParam0)
{
	float fVar0;

	if (!func_941(2) || func_942(2, 0))
	{
		func_715(2);
		return;
	}
	if (!func_527(255))
	{
		func_715(2);
		return;
	}
	fVar0 = func_577(2, 255, 1);
	if (fVar0 < fParam0 && fVar0 != 0f)
	{
		if (!func_943(2))
		{
			func_944(2, joaat("BLIP_STYLE_ENEMY"), 580546400, 0, "NB_PHOTOGRAPHY_BLIP_NAME_ANIMAL");
		}
	}
	else
	{
		func_174(2);
	}
}

void func_746(int iParam0)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_24))
	{
		func_724(-1);
		return;
	}
	func_926(Local_13.f_7.f_24, iParam0);
}

void func_747()
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_24))
	{
		func_719(100);
		return;
	}
	func_924(Local_13.f_7.f_24, 100);
}

void func_748()
{
	if (func_598(512))
	{
		return;
	}
	if (!func_190(16384))
	{
		if ((!func_190(32768) && !func_190(65536)) && !func_190(131072))
		{
			func_121(16384);
		}
	}
}

bool func_749(int iParam0, int iParam1)
{
	if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return func_672(iParam0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam1));
	}
	return false;
}

void func_750(int iParam0, vector3 vParam1)
{
	if (MAP::DOES_BLIP_EXIST(Local_947.f_19.f_154))
	{
		return;
	}
	if (!func_527(255))
	{
		return;
	}
	Local_947.f_19.f_154 = MAP::_BLIP_ADD_FOR_AREA(1247852480, func_370(iParam0), vParam1, 0);
	MAP::_BLIP_SET_MODIFIER(Local_947.f_19.f_154, 1679075994);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_947.f_19.f_154, "NB_PHOTOGRAPHY_BLIP_NAME_OBJ");
}

void func_751()
{
	int iVar0;
	int iVar1;

	if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_23))
	{
		func_926(Local_13.f_7.f_23, -1);
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_947.f_19.f_155) || ENTITY::IS_ENTITY_DEAD(Local_947.f_19.f_155))
	{
		func_724(-1);
		return;
	}
	iVar0 = PED::_GET_RIDER_OF_MOUNT(Local_947.f_19.f_155, true);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_724(-1);
		return;
	}
	iVar1 = 255;
	if (PED::IS_PED_A_PLAYER(iVar0))
	{
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
	{
		func_724(-1);
		return;
	}
	func_926(iVar1, -1);
}

void func_752()
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_23))
	{
		func_719(100);
		return;
	}
	func_924(Local_13.f_7.f_23, 100);
}

float func_753(int iParam0, vector3 vParam1)
{
	return BUILTIN::VDIST(func_793(iParam0), vParam1);
}

void func_754(int iParam0)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_21))
	{
		func_724(-1);
		return;
	}
	func_926(Local_13.f_7.f_21, iParam0);
}

bool func_755(int iParam0)
{
	return PED::GET_PED_CONFIG_FLAG(iParam0, 161, false);
}

void func_756()
{
	func_777(1);
}

bool func_757(int iParam0)
{
	char* sVar0;

	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_947.f_19.f_246))
	{
		return false;
	}
	if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_947.f_19.f_246))
	{
		return false;
	}
	sVar0 = func_356(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return false;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_947.f_19.f_246, sVar0))
	{
		if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_947.f_19.f_246, sVar0))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_947.f_19.f_246, sVar0);
		}
		return false;
	}
	return true;
}

bool func_758(char* sParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_947.f_19.f_246))
	{
		return false;
	}
	return ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_947.f_19.f_246, sParam0);
}

void func_759(char* sParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_947.f_19.f_246))
	{
		return;
	}
	if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_947.f_19.f_246))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_947.f_19.f_246, sParam0, true, true);
}

void func_760(int iParam0)
{
	char* sVar0;

	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_947.f_19.f_246))
	{
		return;
	}
	if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_947.f_19.f_246))
	{
		return;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_947.f_19.f_246))
	{
		return;
	}
	sVar0 = func_356(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_947.f_19.f_246, sVar0))
	{
		if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_947.f_19.f_246, sVar0))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_947.f_19.f_246, sVar0);
		}
		return;
	}
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_947.f_19.f_246, sVar0, true);
}

float func_761()
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_947.f_19.f_246))
	{
		return -1f;
	}
	return ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_947.f_19.f_246);
}

void func_762(bool bParam0)
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
	if (func_530(4, 255))
	{
		return;
	}
	if (!bParam0)
	{
		if (!func_595(Local_13.f_7.f_13, 2000))
		{
			return;
		}
	}
	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	if (iVar0 != 0)
	{
		return;
	}
	switch (func_243())
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
	func_699(sVar1, 10000, 0, 0, 0, 1);
	func_718(4);
}

bool func_763()
{
	int iVar0;
	int iVar1;

	if ((Local_13.f_7.f_22 == 255 || !NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::PARTICIPANT_ID())) || NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()) != Local_13.f_7.f_22)
	{
		return false;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_22);
	if (func_595(Local_13.f_7.f_10, 2000))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar1, false, 0, false))
			{
				if (iVar1 != joaat("WEAPON_UNARMED"))
				{
					if (func_506(iVar0, 716706914, 1, 0))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(iVar0, joaat("WEAPON_UNARMED"), false, 0, false, false);
						TASK::TASK_SWAP_WEAPON(iVar0, 1, 0, 0, 0);
					}
				}
				else
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_764()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_947.f_19.f_246))
	{
		return;
	}
	iVar0 = func_188(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, -1019754709))
	{
		iVar1 = func_188(2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar1, Local_947.f_19.f_246))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_947.f_19.f_246, func_500(2), iVar1);
				}
				PED::DELETE_PED(&iVar1);
			}
		}
		iVar2 = func_501(2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
			{
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar2, Local_947.f_19.f_246))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_947.f_19.f_246, func_502(2), iVar2);
				}
				OBJECT::DELETE_OBJECT(&iVar2);
			}
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, -1066693069))
	{
		iVar3 = func_501(0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar3))
			{
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iVar3, Local_947.f_19.f_246))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_947.f_19.f_246, func_502(0), iVar3);
				}
				OBJECT::DELETE_OBJECT(&iVar3);
			}
		}
	}
}

void func_765(var uParam0, int iParam1)
{
	uParam0->f_20 = iParam1;
}

void func_766(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;

	iVar0 = func_188(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		iParam0 = Local_13.f_7.f_20;
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
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
	bVar3 = ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_354(iParam3), func_616(iParam3), 1);
	bVar4 = ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_354(iParam2), func_616(iParam2), 1);
	if (!bVar3 && !bVar4)
	{
		func_504(iParam1);
		bVar2 = true;
	}
	if (bVar4)
	{
		bVar2 = true;
	}
	if (Local_947.f_19.f_156 != iParam0 && bVar3)
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		Local_947.f_19.f_156 = iParam0;
		if (bVar3)
		{
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iVar0, func_354(iParam3), func_616(iParam3), PLAYER::GET_PLAYER_PED(Local_947.f_19.f_156), -1, 4f, -2f, 25, 0f, false, false, -1f, 0, 0, -1f);
		}
		else if (bVar4)
		{
			fVar5 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iVar0, func_354(iParam2), func_616(iParam2));
			if (fVar5 > 0.7f)
			{
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iVar0, func_354(iParam3), func_616(iParam3), PLAYER::GET_PLAYER_PED(Local_947.f_19.f_156), -1, 4f, -2f, 25, 0f, false, false, -1f, 0, 0, -1f);
			}
		}
		else
		{
			func_573(iParam1);
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iVar0, func_354(iParam2), func_616(iParam2), PLAYER::GET_PLAYER_PED(Local_947.f_19.f_156), 2000, 4f, -4f, 24, 0f, false, false, -1f, 0, 0, -1f);
		}
	}
}

void func_767()
{
	if (func_598(512))
	{
		return;
	}
	if (!func_190(8192))
	{
		if ((!func_190(32768) && !func_190(65536)) && !func_190(131072))
		{
			if (func_477(2048, 255) || func_477(4096, 255))
			{
				func_497(joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_ASSIST"), 0, 0);
				func_121(8192);
			}
		}
	}
}

void func_768()
{
	int iVar0;

	if (func_598(512))
	{
		return;
	}
	if (!func_190(524288))
	{
		if ((!func_190(32768) && !func_190(65536)) && !func_190(131072))
		{
			if (func_477(2048, 255) || func_477(4096, 255))
			{
				iVar0 = 1356609994;
				if (func_582(512))
				{
					iVar0 = 783724279;
				}
				else if (func_582(1024))
				{
					iVar0 = -83587753;
				}
				if (func_945(iVar0, 0, 255, 0, 0))
				{
					func_121(524288);
				}
			}
		}
	}
}

void func_769()
{
	if (func_477(2048, 255) || func_477(4096, 255))
	{
		func_946();
	}
}

void func_770()
{
	if (func_477(2048, 255) || func_477(4096, 255))
	{
		func_777(1);
	}
}

void func_771()
{
	if (func_670(0, 255) || func_672(0, 255))
	{
		func_893(0);
		func_947(7, Local_947.f_4);
	}
}

void func_772()
{
	if (!func_190(131072))
	{
		if (!func_496(2, 255))
		{
			func_497(joaat("PERSONA_HONOR_ACTION__UNPROVOKED_ANTAGONIZATION"), 0, 0);
			func_121(65536);
		}
	}
}

void func_773(bool bParam0)
{
	if ((Local_13.f_7.f_22 == 255 || !NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::PARTICIPANT_ID())) || NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()) != Local_13.f_7.f_22)
	{
		return;
	}
	if (bParam0)
	{
		if (func_477(8388608, 255))
		{
			PLAYER::SET_PLAYER_CONTROL(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()), true, 256, false);
			func_510(8388608);
		}
	}
	else if (!func_477(8388608, 255))
	{
		PLAYER::SET_PLAYER_CONTROL(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID()), false, 256, false);
		func_478(8388608);
	}
}

void func_774(int iParam0, int iParam1)
{
	if (!func_786(iParam0, iParam1))
	{
		return;
	}
	func_791(iParam1, iParam0);
}

void func_775(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_786(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_928(iParam1);
	func_495(iVar0, iParam0);
}

bool func_776(int iParam0)
{
	return MISC::IS_BIT_SET(Local_947.f_406.f_123, iParam0);
}

void func_777(bool bParam0)
{
	if (!func_69(8))
	{
		return;
	}
	if (bParam0)
	{
		if (!func_69(256))
		{
			func_185(Local_947.f_18, 0);
			func_149(256);
		}
	}
	func_149(16);
}

bool func_778(int iParam0)
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

void func_779(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_778(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_948(*uParam0);
	if (Global_1951255[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_949(iVar0);
	*uParam0 = 0;
}

int func_780(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_950(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_781(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_950(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_782(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_522(&Var1, iParam0))
	{
		iVar0 = ((func_951() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_783(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0 /*5*/].f_2;
}

bool func_784(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("BOUNTY_BOARD"):
		case joaat("GUN_FOR_HIRE"):
		case -697789102:
		case joaat("CAMP_RESUPPLY"):
		case joaat("MOONSHINE_SETUP_GET_SUPPLIES"):
		case joaat("MOONSHINE_MARKETING"):
		case 195932838:
		case joaat("CAMP_SETUP"):
		case joaat("MOONSHINE_SELL"):
		case joaat("MOONSHINE_SETUP_RESCUE_COOK"):
		case joaat("CAMP_SELL"):
			return true;
		case joaat("DYNAMIC"):
			return iParam1;
		default:
			break;
	}
	return false;
}

void func_785(var uParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_1051252.f_16[16] == 0 || !SCRIPTS::_DOES_THREAD_EXIST(Global_1051252.f_16[16]))
	{
		return;
	}
	*uParam0 = 180;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(uParam0, 8, 10, Global_1051252.f_16[16]);
	func_952(uParam0, uParam0->f_1);
}

bool func_786(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > (func_787(iParam0) - 1))
	{
		return false;
	}
	return true;
}

int func_787(int iParam0)
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

bool func_788()
{
	if (func_28() != 0)
	{
		return true;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("FEATURE_HONOR")))
	{
		return true;
	}
	if (Global_1139381.f_3876.f_1 & 2 != 0)
	{
		return true;
	}
	if (Global_1139381.f_3876.f_1 & 4 != 0)
	{
		return true;
	}
	if (!NETWORK::HAS_NETWORK_TIME_STARTED())
	{
		return true;
	}
	return false;
}

int func_789(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2086327823:
			return 64;
		case joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_MERCY_KILL"):
			return 98;
		case joaat("PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_RETURN"):
			return 101;
		case joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_ASSAULT"):
			return 62;
		case joaat("PERSONA_HONOR_ACTION__MURDER_PLAYER"):
			return 4;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_THIRTYFIVE"):
			return 39;
		case joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_MURDER"):
			return 56;
		case joaat("PERSONA_HONOR_ACTION__REVIVE_PLAYER"):
			return 68;
		case joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_DONATE"):
			return 102;
		case joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_KILL"):
			return 50;
		case joaat("PERSONA_HONOR_ACTION__MURDER_RAMPAGE"):
			return 5;
		case joaat("PERSONA_HONOR_ACTION__SLAUGHTER_PETS"):
			return 13;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIFTY"):
			return 92;
		case joaat("PERSONA_HONOR_ACTION__WAGON_THIEF_PLAYER"):
			return 16;
		case joaat("PERSONA_HONOR_ACTION__LOOTING"):
			return 43;
		case joaat("PERSONA_HONOR_ACTION__EXECUTION_PLAYER"):
			return 10;
		case joaat("PERSONA_HONOR_ACTION__ANIMAL_CRUELTY"):
			return 45;
		case joaat("PERSONA_HONOR_ACTION__REVIVE_POSSE"):
			return 67;
		case joaat("PERSONA_HONOR_ACTION__MURDER_BUTCHER"):
			return 1;
		case joaat("PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_NEG"):
			return 30;
		case joaat("PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_KILL"):
			return 53;
		case joaat("PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_MURDER"):
			return 59;
		case joaat("PERSONA_HONOR_ACTION__NB_GRAVEROBBER_KILL"):
			return 49;
		case joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_FEED"):
			return 95;
		case joaat("PERSONA_HONOR_ACTION__UNPROVOKED_ANTAGONIZATION"):
			return 21;
		case joaat("PERSONA_HONOR_ACTION__WATCH_BLEED_OUT"):
			return 11;
		case joaat("PERSONA_HONOR_ACTION__NB_GRAVEROBBER_ACCEPT"):
			return 48;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TWENTYFIVE"):
			return 37;
		case joaat("PERSONA_HONOR_ACTION__MURDER_HORSE_PLAYER"):
			return 18;
		case joaat("PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_SAVE"):
			return 93;
		case joaat("PERSONA_HONOR_ACTION__INTRO_MISSION_NEG"):
			return 32;
		case joaat("PERSONA_HONOR_ACTION__MURDER_HORSE"):
			return 12;
		case joaat("PERSONA_HONOR_ACTION__NB_HOBO_DOG_KILL"):
			return 57;
		case joaat("PERSONA_HONOR_ACTION__RESOURCEFUL"):
			return 74;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TEN"):
			return 34;
		case joaat("PERSONA_HONOR_ACTION__MISSION_OUTLAW"):
			return 31;
		case joaat("PERSONA_HONOR_ACTION__HORSE_THIEF_PLAYER"):
			return 17;
		case joaat("PERSONA_HONOR_ACTION__INTRO_MISSION_POS"):
			return 82;
		case joaat("PERSONA_HONOR_ACTION__WAGON_THIEF_AI"):
			return 15;
		case joaat("PERSONA_HONOR_ACTION__THEFT"):
			return 44;
		case joaat("PERSONA_HONOR_ACTION__MURDER"):
			return 2;
		case joaat("PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_ALIVE"):
			return 105;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE"):
			return 70;
		case joaat("PERSONA_HONOR_ACTION__GFH_LAWFUL_PVP"):
			return 79;
		case joaat("PERSONA_HONOR_ACTION__CLEAR_HIDEOUT"):
			return 75;
		case joaat("PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_ASSIST"):
			return 100;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIFTEEN"):
			return 35;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_PLAYER"):
			return 73;
		case joaat("PERSONA_HONOR_ACTION__NB_KIDNAPPED_KILL"):
			return 51;
		case joaat("PERSONA_HONOR_ACTION__LOOTING_BODIES"):
			return 20;
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE"):
			return 77;
		case joaat("PERSONA_HONOR_ACTION__NB_KIDNAPPED_RESCUE"):
			return 96;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTY"):
			return 86;
		case -29468993:
			return 103;
		case -1:
			return 0;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTYFIVE"):
			return 87;
		case joaat("PERSONA_HONOR_ACTION__IGNORE_MISSION"):
			return 23;
		case joaat("PERSONA_HONOR_ACTION__GFH_CRIMINAL_PVP"):
			return 27;
		case joaat("PERSONA_HONOR_ACTION__NB_RANDOM_EVENT_MURDER"):
			return 61;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIFTY"):
			return 42;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FORTYFIVE"):
			return 41;
		case joaat("PERSONA_HONOR_ACTION__NB_TREASURE_HUNTER_KILL"):
			return 52;
		case joaat("PERSONA_HONOR_ACTION__REVIVE_MULTI"):
			return 69;
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_KILL"):
			return 24;
		case joaat("PERSONA_HONOR_ACTION__HERDING_STEAL"):
			return 29;
		case joaat("PERSONA_HONOR_ACTION__VANDALISM_LOW"):
			return 47;
		case joaat("PERSONA_HONOR_ACTION__GRIEFING"):
			return 22;
		case joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_BLEED_OUT"):
			return 55;
		case joaat("PERSONA_HONOR_ACTION__MURDER_MISSION_PEDS"):
			return 6;
		case joaat("PERSONA_HONOR_ACTION__ARSON"):
			return 46;
		case joaat("PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER_UNARMED"):
			return 8;
		case joaat("PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER"):
			return 7;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_THIRTYFIVE"):
			return 89;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TWENTY"):
			return 36;
		case joaat("PERSONA_HONOR_ACTION__MERCY_KILL"):
			return 94;
		case 669386338:
			return 104;
		case 796310207:
			return 66;
		case joaat("PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_DEAD"):
			return 60;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_FULL"):
			return 72;
		case joaat("PERSONA_HONOR_ACTION__CLEAR_AMBUSH"):
			return 76;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIVE"):
			return 83;
		case joaat("PERSONA_HONOR_ACTION__NB_TIED_UP_RESCUE"):
			return 97;
		case joaat("PERSONA_HONOR_ACTION__HORSE_THIEF_AI"):
			return 14;
		case joaat("PERSONA_HONOR_ACTION__MURDER_CAMP_FOLLOWER"):
			return 3;
		case joaat("PERSONA_HONOR_ACTION__GFH_CRIMINAL"):
			return 26;
		case joaat("PERSONA_HONOR_ACTION__RUSTLING"):
			return 28;
		case joaat("PERSONA_HONOR_ACTION__GFH_LAWFUL"):
			return 78;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FORTY"):
			return 90;
		case joaat("PERSONA_HONOR_ACTION__MISSION_GUNSLINGER"):
			return 81;
		case joaat("PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_LOOT"):
			return 54;
		case 1623086000:
			return 65;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_CLEAN"):
			return 71;
		case 1723535349:
			return 58;
		case joaat("PERSONA_HONOR_ACTION__HOGTIE_PLAYER"):
			return 9;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIVE"):
			return 33;
		case joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_ASSIST"):
			return 99;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TEN"):
			return 84;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FORTY"):
			return 40;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIFTEEN"):
			return 85;
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE_THEN_KILL"):
			return 25;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_THIRTY"):
			return 38;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FORTYFIVE"):
			return 91;
		case joaat("PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_POS"):
			return 80;
		case joaat("PERSONA_HONOR_ACTION__BOUNTY_BRIBE_GUARD"):
			return 63;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_THIRTY"):
			return 88;
		case joaat("PERSONA_HONOR_ACTION__TRAMPLE"):
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

void func_790(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 185;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 7, 7, &uParam1);
}

void func_791(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_635(iParam1, joaat("CHARACTER_MEMORY")) };
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

var func_792(int iParam0, int iParam1)
{
	return Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/];
}

Vector3 func_793(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(Local_947.f_274.f_7[iParam0 /*11*/], true, false);
}

void func_794(var uParam0, int iParam1, int iParam2)
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
		func_204(uParam0, iVar0);
		iVar0++;
	}
}

bool func_795(int iParam0)
{
	if (Local_947.f_578.f_120 == iParam0)
	{
		return true;
	}
	return false;
}

void func_796(int iParam0, int iParam1, int iParam2)
{
	func_248(&(Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_1), iParam2);
}

void func_797(int iParam0, int iParam1, int iParam2)
{
	func_347(&(Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_1), iParam2);
}

void func_798(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_778(iParam0))
	{
		return;
	}
	iVar0 = func_948(iParam0);
	if (bParam1)
	{
		func_953(iParam0, 4);
		if (bParam3)
		{
			func_954(iVar0, 1);
		}
		func_955(iVar0, 1);
	}
	else
	{
		func_956(iParam0, 4);
		func_955(iVar0, 0);
	}
}

float func_799(var uParam0)
{
	return uParam0->f_26;
}

void func_800(var uParam0, float fParam1)
{
	uParam0->f_27 = fParam1;
}

void func_801(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_248(uParam0, 1);
	}
	else
	{
		func_347(uParam0, 1);
	}
}

void func_802(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_248(uParam0, 512);
	}
	else
	{
		func_347(uParam0, 512);
	}
}

void func_803(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_248(uParam0, 2);
	}
	else
	{
		func_347(uParam0, 2);
	}
}

void func_804(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_248(uParam0, 8);
	}
	else
	{
		func_347(uParam0, 8);
	}
}

void func_805(int iParam0, int iParam1)
{
	func_248(&(Local_947.f_329[iParam0 /*76*/].f_5[iParam1 /*14*/].f_1), 16);
}

int func_806(int iParam0)
{
	return Local_947.f_274.f_7[iParam0 /*11*/].f_4;
}

bool func_807(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;

	if (bParam6)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return false;
		}
	}
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return false;
	}
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return false;
	}
	if (!func_812(iParam1))
	{
		return false;
	}
	iVar0 = func_957(iParam1, vParam2, fParam5, bParam8, 1, bParam6, bParam7, bParam9);
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
		return true;
	}
	return false;
}

void func_808(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_SET_PED_BODY_COMPONENT(iParam0, joaat("META_HORSE_SADDLE_ONLY"));
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

bool func_809(int iParam0)
{
	return func_175(iParam0, 32);
}

bool func_810(int iParam0)
{
	return func_175(iParam0, 64);
}

bool func_811(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_812(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_813(int iParam0)
{
	return MISC::IS_BIT_SET(Local_947.f_578.f_119, iParam0);
}

bool func_814(int iParam0)
{
	return MISC::IS_BIT_SET(Local_947.f_578.f_118, iParam0);
}

int func_815(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = iParam1 * 2;
	if (MISC::IS_BIT_SET(iParam0, iVar1))
	{
		MISC::SET_BIT(&iVar0, 0);
	}
	if (MISC::IS_BIT_SET(iParam0, iVar1 + 1))
	{
		MISC::SET_BIT(&iVar0, 1);
	}
	return iVar0;
}

var func_816(int iParam0, int iParam1, var uParam2)
{
	return uParam2;
}

int func_817(int iParam0)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_49.f_1[iParam0]))
	{
	}
	if (Local_13.f_49.f_5[iParam0] == 0)
	{
		return 255;
	}
	return Local_13.f_49.f_1[iParam0];
}

int func_818(int iParam0, int iParam1)
{
	if (func_958(iParam0))
	{
		return 0;
	}
	if (Local_13.f_58[iParam0 /*3*/] == iParam1)
	{
		return 1;
	}
	Local_13.f_58[iParam0 /*3*/] = iParam1;
	return 1;
}

bool func_819(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219.f_16;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return Global_1100469[iParam0 /*53*/].f_16;
}

bool func_820(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)))
	{
		return false;
	}
	if (PLAYER::IS_PLAYER_DEAD(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0))))
	{
		return false;
	}
	return func_687(iParam1, NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)));
}

int func_821(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (bParam3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_947.f_274.f_7[iParam0 /*11*/]))
		{
			return 255;
		}
	}
	iVar1 = -1;
	bVar2 = fParam2 > 0f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
		{
		}
		else if (Local_82[iVar0 /*27*/].f_4.f_2[iParam0] <= 0f)
		{
		}
		else if (bParam4 && !func_527(iVar0))
		{
		}
		else if (iVar1 != -1 && Local_82[iVar0 /*27*/].f_4.f_2[iParam0] > Local_82[iVar1 /*27*/].f_4.f_2[iParam0])
		{
		}
		else if (bVar2 && Local_82[iVar0 /*27*/].f_4.f_2[iParam0] > fParam2)
		{
		}
		else
		{
			Stack.Push(iVar0);
			Stack.Push(iParam0);
			Call_Loc(iParam1);
			if (!StackVal)
			{
			}
			else
			{
				iVar1 = iVar0;
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

void func_822(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam1 - 1250);
	iVar1 = iParam1 + 1250;
	*uParam0 = MISC::GET_RANDOM_INT_IN_RANGE(iVar0, iVar1);
}

void func_823(int iParam0)
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
		func_579(iVar0);
	}
}

bool func_824(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_IS_THIS_MODEL_A_HORSE(iVar0))
	{
		return true;
	}
	return false;
}

bool func_825(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_930(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_959(iParam0, iParam1, fParam3, 1, 1))
	{
		return false;
	}
	if (bParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::_0x9D9473CB82D83A30(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0) == 1;
	}
	return PED::_0x7F9B9791D4CB71F6(iParam0, iParam1, bParam2, false) == 1;
}

struct<15> func_826(int iParam0)
{
	struct<15> Var0;

	Var0.f_10 = 255;
	MISC::_COPY_MEMORY(&(Var0.f_4), &Local_947, 5);
	Var0.f_9 = iParam0;
	Var0 = 182;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return Var0;
}

void func_827(var uParam0)
{
	func_961(uParam0, func_960(4, 117));
}

Vector3 func_828(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

bool func_829(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!bParam4 && AUDIO::_0x54B187F111D9C6F8(iParam0, 1))
	{
		return false;
	}
	if (bParam4)
	{
		func_575(1, 0, 0);
	}
	if (func_962(iParam2))
	{
		if (!func_963(iParam0, func_601(iParam2), -1223286396, iParam1, 1, 0, 0, 1))
		{
			return false;
		}
	}
	else if (!func_965(&(Local_947.f_19.f_53), func_964(func_601(iParam2)), 0, -1, 0, 0))
	{
		return false;
	}
	if (!bParam3)
	{
		func_966(iParam2);
	}
	func_588(&(Local_13.f_7.f_9));
	return true;
}

bool func_830(int iParam0)
{
	if (!func_527(255))
	{
		return false;
	}
	switch (iParam0)
	{
		case 3:
			return true;
		case 0:
			return true;
		case 1:
			return true;
		case 2:
			return true;
		case 128:
			return true;
		case 129:
			return true;
		case 130:
			return true;
		default:
			break;
	}
	return false;
}

void func_831(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_TRIGGER_SONAR_BLIP_2(iParam0, iParam1);
}

void func_832(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_914(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, bParam2))));
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

var func_833(int iParam0)
{
	return Local_947.f_274.f_7[iParam0 /*11*/].f_10;
}

void func_834(int iParam0, char* sParam1, bool bParam2)
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

void func_835(int iParam0)
{
}

int func_836(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("NET_BEAT_ANIMAL_ATTACK");
		case 2:
			return joaat("NET_BEAT_ARROWHEAD_INJURY");
		case 14:
			return joaat("NET_BEAT_DUEL");
		case 4:
			return joaat("NET_BEAT_GRAVEROBBER");
		case 5:
			return joaat("NET_BEAT_RIVAL_COLLECTOR");
		case 6:
			return joaat("NET_BEAT_KIDNAPPED");
		case 7:
			return joaat("NET_BEAT_PHOTOGRAPHY");
		case 8:
			return joaat("NET_BEAT_TIED_UP_PED");
		case 9:
			return joaat("NET_BEAT_TREASURE_HUNTER");
		case 10:
			return joaat("NET_BEAT_TREE_MAP");
		case 11:
			return joaat("NET_BEAT_RUNAWAY_WAGON");
		case 12:
			return joaat("NET_BEAT_HOBO_DOG");
		case 13:
			return joaat("NET_BEAT_WILDMAN");
		case 3:
			return joaat("NET_BEAT_EGG_PROTECTOR");
		case 15:
			return joaat("NET_BEAT_MOONSHINE_CAMP");
		case 16:
			return joaat("NET_BEAT_BEGGAR");
		case 17:
			return joaat("NET_BEAT_STALKING_HUNTER");
		case 18:
			return joaat("NET_BEAT_SLUMPED_HUNTER");
		case 19:
			return joaat("NET_BEAT_CRASHED_WAGON");
		case 20:
			return joaat("NET_BEAT_SUSPENSION_TRAP");
		case 31:
			return joaat("NET_BEAT_LEGENDARY_ANIMAL_ALLIGATOR");
		case 21:
			return joaat("NET_BEAT_LEGENDARY_ANIMAL_BEAR");
		case 28:
			return joaat("NET_BEAT_LEGENDARY_ANIMAL_BEAVER");
		case 25:
			return 1829377792;
		case 24:
			return joaat("NET_BEAT_LEGENDARY_ANIMAL_BOAR");
		case 32:
			return -753359492;
		case 22:
			return joaat("NET_BEAT_LEGENDARY_ANIMAL_COUGAR");
		case 29:
			return joaat("NET_BEAT_LEGENDARY_ANIMAL_COYOTE");
		case 26:
			return joaat("NET_BEAT_LEGENDARY_ANIMAL_FOX");
		case 30:
			return -1373797819;
		case 27:
			return joaat("NET_BEAT_LEGENDARY_ANIMAL_WOLF");
		case 33:
			return -268685349;
		case 34:
			return -2047817190;
		case 23:
			return 257784569;
		default:
			break;
	}
	return 0;
}

struct<2> func_837(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_838(int iParam0)
{
	if (!func_632(func_631(iParam0), &(Local_947.f_406.f_82[iParam0 /*13*/])))
	{
		MISC::CLEAR_BIT(&(Local_947.f_406.f_122), iParam0);
		return;
	}
	MISC::SET_BIT(&(Local_947.f_406.f_122), iParam0);
}

int func_839(int iParam0, int iParam1)
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

void func_840()
{
	if (Local_947.f_578.f_120 < 0)
	{
		return;
	}
	func_484(func_180(Local_947.f_578.f_120), 0);
	Local_947.f_578.f_120 = -1;
	func_967(func_180(Local_947.f_578.f_120));
}

bool func_841(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_483(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (iParam1 == iVar0)
	{
		if (Local_947.f_578.f_120 != iParam0)
		{
			func_840();
			func_902(iParam0);
			Local_947.f_578.f_120 = iParam0;
			func_968(iParam0);
		}
		return true;
	}
	return false;
}

int func_842(var uParam0, var uParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_540(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_541(Var0.f_2, 10);
		(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] || (*uParam1)[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_541(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] || (*uParam1)[Var0]) && iVar4));
	iVar4 = func_541(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = (((*uParam0)[Var0.f_1] && iVar4 ^ -1) || (((*uParam0)[Var0.f_1] || (*uParam1)[Var0.f_1]) && iVar4));
	return 1;
}

int func_843(var uParam0, var uParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_540(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_541(Var0.f_2, 10);
		(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] && (*uParam1)[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_541(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] && (*uParam1)[Var0]) && iVar4));
	iVar4 = func_541(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = (((*uParam0)[Var0.f_1] && iVar4 ^ -1) || (((*uParam0)[Var0.f_1] && (*uParam1)[Var0.f_1]) && iVar4));
	return 1;
}

void func_844(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (func_658(&(Local_82[iParam1 /*27*/].f_10), 1, iParam0))
	{
		if (Local_82[iParam1 /*27*/].f_10.f_9[iParam0] == 0)
		{
			return;
		}
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1));
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
			return;
		}
		if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_49.f_1[iParam0]))
		{
			if (Local_13.f_49.f_1[iParam0] == iVar0)
			{
				return;
			}
		}
		if (Local_13.f_49.f_5[iParam0] == 0 || NETWORK::IS_TIME_MORE_THAN(Local_82[iParam1 /*27*/].f_10.f_9[iParam0], Local_13.f_49.f_5[iParam0]))
		{
			Local_13.f_49.f_1[iParam0] = iVar0;
			Local_13.f_49.f_5[iParam0] = Local_82[iParam1 /*27*/].f_10.f_9[iParam0];
		}
	}
}

void func_845(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar1 = 255;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Local_13.f_58[iVar0 /*3*/].f_2 != 0)
		{
		}
		else if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_58[iVar0 /*3*/].f_1))
		{
		}
		else if (!MISC::IS_BIT_SET(Local_82[iParam0 /*27*/].f_24, iVar0))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0));
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				Jump @155; //curOff = 109
			}
			else
			{
				Local_13.f_58[iVar0 /*3*/].f_1 = iVar1;
				func_122(&(Local_13.f_58.f_10), iVar0, func_815(Local_82[iParam0 /*27*/].f_24.f_1, iVar0));
			}
		}
		iVar0++;
	}
}

void func_846(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_898() - fParam1);
	func_969(uParam0, 1);
	func_970(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_847(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_848(var uParam0)
{
	if (!func_646(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_971(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_898() - uParam0->f_1);
}

void func_849(int iParam0)
{
	int iVar0;

	if (!func_227(&iVar0))
	{
		return;
	}
	func_660(&(Local_82[iVar0 /*27*/].f_10), 3, iParam0);
}

void func_850(int iParam0)
{
	int iVar0;
	int iVar1;

	if (0 == iParam0)
	{
		if (func_598(8192))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, false, 0, false))
			{
				if (iVar0 == joaat("WEAPON_LASSO") || iVar0 == joaat("WEAPON_LASSO_REINFORCED"))
				{
					func_972(iParam0);
					func_973(iParam0);
					iVar1 = func_188(iParam0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iVar1);
					}
				}
			}
		}
	}
}

bool func_851(int iParam0)
{
	return func_658(&(Local_947.f_406.f_78), 7, iParam0);
}

bool func_852(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_6)
	{
		func_855(uParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		uParam1->f_13 = fParam3;
	}
	else
	{
		uParam1->f_13 = BUILTIN::VDIST(Global_35, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1940258.f_6 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1940258.f_24 || Global_1940258.f_25)
		{
			if (!uParam1->f_2 & 2 != 0)
			{
				if (func_868(uParam1, 4000))
				{
					if ((func_869(iParam0, Global_1940258.f_35, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_870(uParam1, iParam0)) && func_871(uParam1, iParam0))
					{
						func_873();
						*uParam2 = 2;
						func_857(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 2 != 0)
		{
			if (uParam1->f_13 < 4f)
			{
				if (func_868(uParam1, 4000))
				{
					if ((func_869(iParam0, Global_1940258.f_35, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_870(uParam1, iParam0)) && func_871(uParam1, iParam0))
					{
						func_873();
						*uParam2 = 2;
						func_857(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			else if (Global_1940258.f_35 != 0)
			{
				if (Global_1940258.f_34 == 0)
				{
					if (func_872(iParam0, Global_1940258.f_35))
					{
						func_873();
						*uParam2 = 2;
						func_857(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			if (Global_1940258.f_36 != 0)
			{
				if (func_876())
				{
					if (func_872(iParam0, Global_1940258.f_36))
					{
						func_873();
						*uParam2 = 2;
						func_857(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (Global_1940258.f_19)
		{
			if (func_862(uParam1, 1065353216 /* Float: 1f */))
			{
				if (!uParam1->f_2 & 4 != 0)
				{
					if (func_863(Global_34, iParam0, uParam1))
					{
						func_873();
						*uParam2 = 4;
						func_857(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (!uParam1->f_2 & 256 != 0)
				{
					if (func_864(Global_34, iParam0, uParam1))
					{
						func_873();
						*uParam2 = 256;
						func_857(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 131072 != 0)
		{
			if (func_974(iParam0, uParam1))
			{
				func_873();
				*uParam2 = 131072;
				func_857(iParam0, uParam1, *uParam2);
				return true;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_975(iParam0, uParam1))
			{
				func_873();
				*uParam2 = 262144;
				func_857(iParam0, uParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

int func_853(int iParam0)
{
	return iParam0;
}

bool func_854(int iParam0)
{
	if (iParam0 == 255)
	{
		return false;
	}
	return NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iParam0);
}

void func_855(var uParam0, bool bParam1, int iParam2)
{
	func_976(iParam2);
	if (Global_1572887.f_13 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
		{
			return;
		}
		if (Global_1940258.f_6)
		{
			return;
		}
	}
	else
	{
		if (!Global_1296859.f_11)
		{
			return;
		}
		if (Global_1296859.f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_11 = 0;
	}
	uParam0->f_6 = iParam2;
	if (Global_1572887.f_13 == -1)
	{
		uParam0->f_14 = Global_1940258.f_38;
	}
	else
	{
		uParam0->f_14 = func_977(0);
	}
	switch (uParam0->f_7)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_14 == joaat("WEAPON_THROWN_DYNAMITE"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_34))
						{
							func_248(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_978(1, 1))
						{
							func_248(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_34) && (!func_978(1, 1) || *uParam0 & 8192 != 0))
				{
					func_347(uParam0, 33554432);
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
	if (!uParam0->f_2 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_15))
		{
			if (func_979(uParam0))
			{
				uParam0->f_16 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else if (uParam0->f_16 != 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(uParam0->f_16, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_15))
				{
					uParam0->f_15 = 0;
					uParam0->f_16 = 0;
				}
			}
		}
	}
	uParam0->f_7++;
	if (uParam0->f_7 >= 4)
	{
		uParam0->f_7 = 0;
		uParam0->f_8++;
		if (uParam0->f_8 > 4)
		{
			uParam0->f_8 = 0;
		}
	}
	func_980(uParam0);
}

bool func_856(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return false;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (iVar0)
	{
		case joaat("EVENT_ACQUAINTANCE_PED_DEAD"):
		case joaat("EVENT_PED_SEEN_DEAD_PED"):
		case joaat("EVENT_SHOCKING_DEAD_BODY"):
		case joaat("EVENT_DEAD_PED_FOUND"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return false;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				return false;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				return false;
			}
			if (iVar2 == Global_1940258.f_27)
			{
				return false;
			}
			if (iVar2 == Global_1940258.f_26)
			{
				return false;
			}
			if (!func_981(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_982(iParam0, iVar2) <= func_983(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_857(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_11 = iParam0;
	}
	if (func_894(iParam2, 1, 1, 1, 0))
	{
		func_248(uParam1, 2048);
	}
	uParam1->f_17 = iParam2;
	func_984(uParam1, 1);
	func_985();
}

bool func_858(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_986(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_13 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_13 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_987(uParam1);
			if (func_988(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_3 == 0)
				{
					uParam1->f_3 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_3);
				iVar3 = func_989(uParam1);
				if (uParam1->f_3 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_984(uParam1, 1);
						return true;
					}
					else if (uParam1->f_13 < 3.5f)
					{
						if (iVar2 > func_990(uParam1))
						{
							func_984(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_859(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	float fVar1;

	if (iParam1 == 0)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	fVar0 = 85f;
	if (func_991(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_13 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_13 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_987(uParam2);
		if (func_988(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_3 == 0)
			{
				uParam2->f_3 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_3 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_3) > func_989(uParam2)
				{
					func_984(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_860(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return false;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (iVar2 == iVar0)
		{
			return false;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return false;
	}
	if (Global_1940258.f_34 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1940258.f_34, true) == iParam0)
		{
			return false;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_981(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_4 == 0)
		{
			uParam1->f_4 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_4) > func_989(uParam1)
		{
			fVar3 = func_987(uParam1);
			if (uParam1->f_13 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_861(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_992(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_13 != -1)
	{
		if (iParam0 == Global_1296859.f_10)
		{
			if (!Global_1296859.f_11)
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

bool func_862(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_875();
	iVar1 = (iVar0 - uParam0->f_9);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_863(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_993(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1940258.f_40) || Global_1940258.f_40 == joaat("WEAPON_UNARMED"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1940258.f_40) && WEAPON::_0xEA522F991E120D45(Global_1940258.f_40))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1940258.f_40) || Global_1940258.f_40 == joaat("WEAPON_UNARMED")) || (WEAPON::IS_WEAPON_VALID(Global_1940258.f_40) && WEAPON::_0x5809DBCA0A37C82B(Global_1940258.f_40)))
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
			if (func_871(uParam2, iParam1))
			{
				func_984(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_864(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_13 < IntToFloat(func_892(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1940258.f_40) && !WEAPON::_0x5809DBCA0A37C82B(Global_1940258.f_40)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_34, &uVar0))
		{
			if (func_871(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_984(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_865(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_994(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_24))
				{
					func_984(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_30))
				{
					func_984(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_29, &vVar4, 0, 0);
					if (func_995(iParam1, vVar0, vVar4))
					{
						func_984(uParam2, 1);
						return true;
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
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_24))
				{
					func_984(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_29, &vVar7, 0, 0);
					if (func_995(iParam1, vVar0, vVar7))
					{
						func_984(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_TOXIC_MOONSHINE_CLOUD"), vVar0, 15f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_TOXIC_MOONSHINE"), vVar0, 15f))
	{
		return true;
	}
	return false;
}

bool func_866(int iParam0, var uParam1)
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
	while (iVar0 < Global_1940258.f_33)
	{
		if (!func_981(iParam0, uParam1, Global_1940258.f_28[iVar0]) || iParam0 == Global_1940258.f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_996(Global_1940258.f_28[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false), vVar9);
			if (func_824(Global_1940258.f_28[iVar0]))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(Global_1940258.f_28[iVar0], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(Global_1940258.f_28[iVar0], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false) };
						vVar2[1 /*3*/] = { vVar9 };
						uParam1->f_11 = iParam0;
						return true;
					}
				}
			}
			if (func_997(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_998(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_999(uParam1, iParam0, fVar1, iVar0))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940258.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_867(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!EVENT::_0x1D1B448D719415AB(*iParam0))
	{
		return false;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(*iParam0, 0, 0);
	switch (iVar0)
	{
		case joaat("EVENT_SHOCKING_PROPERTY_DAMAGE"):
		case joaat("EVENT_SHOCKING_WINDOW_SMASHED"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(*iParam0, iVar0, 0, 0);
			iVar2 = EVENT::_0x38497F139981C5C9(*iParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*iParam0, 0);
			return true;
	}
	return false;
}

bool func_868(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_875();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_869(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_1000(iVar0, &iVar2))
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
	if (func_1001(iVar0, iParam0))
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

int func_870(var uParam0, int iParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", uParam0->f_6))
		{
		}
	}
	else if (uParam0->f_6 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_871(var uParam0, int iParam1)
{
	if (func_1002(uParam0))
	{
		return true;
	}
	if (PED::_0x29FCE825613FEFCA(iParam1, 400))
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return false;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_34, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_34, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
	{
		return false;
	}
	if (PED::_GET_LASSO_TARGET(Global_34) != 0)
	{
		return true;
	}
	if (WEAPON::_0x8D50F43298AB9545(Global_34, iParam1))
	{
		return true;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return true;
	}
	return false;
}

bool func_872(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_1003(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_873()
{
}

bool func_874(var uParam0, int iParam1)
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
		if (func_1004(iVar0, iParam1, vVar1))
		{
			uParam0->f_10 = func_875();
			return true;
		}
		else if (VEHICLE::_0xA19447D83294E29F(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return false;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (func_1005(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_10 = func_875();
								return true;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return false;
}

int func_875()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_876()
{
	if (Global_1940258.f_36 == 0)
	{
		return false;
	}
	if (Global_1940258.f_36 == Global_1940258.f_34)
	{
		return false;
	}
	if (Global_1940258.f_37 <= 0)
	{
		return false;
	}
	if ((func_875() - Global_1940258.f_37) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_877(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_15))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return false;
	}
	fVar0 = func_983(uParam0);
	if (uParam0->f_13 > func_799(uParam0) && uParam0->f_13 > fVar0)
	{
		return false;
	}
	iVar2 = func_1006(iParam1);
	iVar1 = func_1007(uParam0->f_15);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_13 <= fVar0 || PED::_0x9D9473CB82D83A30(iParam1, Global_34, 0) == 1) || PED::_0x9D9473CB82D83A30(iParam1, uParam0->f_15, 0) == 1)
		{
			return true;
		}
	}
	return false;
}

bool func_878(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	float fVar8;

	if (!Global_1940258.f_50)
	{
		return false;
	}
	if (!uParam0->f_1 & 1 != 0)
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (func_674(iVar0, iParam1, 1060437492 /* Float: 0.707f */) != 0)
	{
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar7 = func_1008(vVar1, vVar4);
	fVar8 = MISC::ABSF((vVar1.z - vVar4.z));
	if (fVar8 >= 2f)
	{
		return false;
	}
	if (fVar7 > uParam0->f_31)
	{
		return false;
	}
	return true;
}

int func_879(int iParam0, int iParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (uParam2->f_13 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_1009(iParam0, iParam1, bVar0, bVar2, uParam2->f_13, bVar1);
}

bool func_880(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (*uParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1940258.f_18)
	{
		return true;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_1010(iParam0, uParam1, 1))
		{
			return true;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17)) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_34, true, false) == 1)
		{
			return true;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_34);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true)) || Global_1940258.f_24)
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f))
		{
			return true;
		}
	}
	if (!func_669(iParam0))
	{
		return false;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return false;
	}
	switch (iVar1)
	{
		case joaat("EVENT_SHOCKING_SEEN_PED_ROBBED"):
		case joaat("EVENT_SHOCKING_SEEN_PED_INTIMIDATED"):
		case joaat("EVENT_SHOCKING_SEEN_CAR_STOLEN"):
		case joaat("EVENT_SHOCKING_MOUNT_STOLEN"):
			if (func_1011(uParam1))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_34)
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			return true;
		case joaat("EVENT_SHOCKING_ENTITY_HOGTIED"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17))
				{
					if (!func_1012(uParam1, iParam0))
					{
						if (func_1005(iVar4, Global_35, 1) < 7f)
						{
							return true;
						}
					}
				}
			}
			break;
		case joaat("EVENT_SHOCKING_SEEN_MELEE_ACTION"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (!PED::IS_PED_A_PLAYER(iVar4) || !PED::IS_PED_A_PLAYER(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) || PED::_0x06087579E7AA85A9(iParam0, iVar5, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar5, 17))
				{
					return true;
				}
			}
			EVENT::_0x1A5C5D350068A673(iParam0, 0);
			return false;
	}
	return false;
}

bool func_881(int iParam0, var uParam1)
{
	if (!func_1013(0))
	{
		return false;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_34, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_882(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_875();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_883(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_884(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_5 == 0)
	{
		uParam1->f_5 = func_875();
	}
	else if (func_875() - uParam1->f_5) > func_1014(uParam1)
	{
		return func_1015(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_885(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIgnoreDamageChecking"))
	{
		return false;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (Global_34 == iVar1 || Global_1940258.f_34 == iVar1)
	{
		return true;
	}
	return false;
}

int func_886(int iParam0, vector3 vParam1, float fParam4)
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
	fVar9 = func_1016(vVar3, vVar6);
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
	if (func_1017(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_887(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (func_186(Local_947.f_406.f_2, 4))
	{
		return false;
	}
	if (!MISC::IS_BIT_SET(Local_947.f_406.f_65, iParam0))
	{
		return false;
	}
	MISC::CLEAR_BIT(&(Local_947.f_406.f_65), iParam0);
	if (!bParam3 && Local_82[iParam2 /*27*/].f_10.f_4 == 0)
	{
		return false;
	}
	if (!bParam3 && NETWORK::GET_TIME_DIFFERENCE(Local_82[iParam2 /*27*/].f_10.f_4, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 750)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_OCCLUDED(*iParam1))
	{
		return false;
	}
	if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(PLAYER::PLAYER_PED_ID(), *iParam1, 17))
	{
		return false;
	}
	iVar0 = func_1018(PLAYER::PLAYER_PED_ID(), 0, 1, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0) || !((WEAPON::_0x705BE297EEBDB95D(iVar0) || func_1019(iVar0)) || WEAPON::_IS_WEAPON_THROWABLE(iVar0)))
	{
		return false;
	}
	if (WEAPON::_0x79B1A6E780266DB0(PLAYER::PLAYER_PED_ID()) < iParam1->f_2)
	{
		return false;
	}
	return true;
}

void func_888(int* iParam0, var uParam1)
{
	GRAPHICS::GET_SCREEN_RESOLUTION(iParam0, &(iParam0->f_1));
	*iParam0 = (*iParam0 / 2);
	iParam0->f_1 = (iParam0->f_1 / 2);
	iParam0->f_2 = uParam1;
}

Vector3 func_889(int iParam0)
{
	return iParam0->f_6, iParam0->f_7, iParam0->f_8;
}

int func_890(int iParam0, var uParam1, vector3 vParam2, vector3 vParam5, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	vector3 vVar19;
	vector3 vVar22;
	vector3 vVar25;
	vector3 vVar28;
	vector3 vVar31;
	int iVar34;
	int iVar35;
	vector3 vVar36;
	bool bVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;
	bool bVar43;
	bool bVar44;
	int iVar45;
	int iVar46;

	*uParam1 = 0;
	uParam1->f_1 = 0;
	uParam1->f_2 = 0;
	uParam1->f_3 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return 0;
	}
	MISC::GET_MODEL_DIMENSIONS(iVar0, &vVar1, &vVar4);
	vVar7 = { vVar4 - vVar1 * Vector(0.5f, 0.5f, 0.5f) };
	if (bParam8)
	{
		vVar7.x = ((func_1020(iParam0) * 0.5f) + vParam5.x);
		vVar7.f_1 = ((func_1021(iParam0) * 0.5f) + vParam5.y);
		vVar7.f_2 = ((func_1022(iParam0) * 0.5f) + vParam5.z);
	}
	vVar10 = { func_565(func_1023(CAM::GET_RENDERING_CAM())) };
	vVar13 = { func_1024(vVar10, 0f, 0f, 1f) };
	vVar16 = { func_1024(vVar13, vVar10) };
	vVar19 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) + vParam2 };
	vVar22 = { vVar19 - vVar7 * vVar13 + vVar7 * vVar16 };
	vVar25 = { vVar19 + vVar7 * vVar13 + vVar7 * vVar16 };
	vVar28 = { vVar19 - vVar7 * vVar13 - vVar7 * vVar16 };
	vVar31 = { vVar19 + vVar7 * vVar13 - vVar7 * vVar16 };
	GRAPHICS::GET_SCREEN_RESOLUTION(&iVar34, &iVar35);
	vVar36 = { BUILTIN::TO_FLOAT(iVar34), BUILTIN::TO_FLOAT(iVar35), 0f };
	bVar39 = GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar19, &vVar19, &(vVar19.f_1));
	bVar40 = GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar22, &vVar22, &(vVar22.f_1));
	bVar41 = GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar25, &vVar25, &(vVar25.f_1));
	bVar42 = GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar28, &vVar28, &(vVar28.f_1));
	bVar43 = GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar31, &vVar31, &(vVar31.f_1));
	bVar44 = (((bVar40 || bVar41) || bVar42) || bVar43);
	if (bVar39)
	{
		vVar19 = { vVar19 * vVar36 };
	}
	if (bVar40)
	{
		vVar22 = { vVar22 * vVar36 };
	}
	if (bVar41)
	{
		vVar25 = { vVar25 * vVar36 };
	}
	if (bVar42)
	{
		vVar28 = { vVar28 * vVar36 };
	}
	if (bVar43)
	{
		vVar31 = { vVar31 * vVar36 };
	}
	iVar45 = (iParam9 / 2);
	iVar46 = (iParam10 / 2);
	if (!bVar39 && !bVar44)
	{
		return 0;
	}
	else if (bVar39 && !bVar44)
	{
		*uParam1 = 0;
		uParam1->f_1 = 0;
		uParam1->f_2 = iVar34;
		uParam1->f_3 = iVar35;
	}
	else if (!bVar44)
	{
		return 0;
	}
	else if (bVar40)
	{
		if (!bVar41)
		{
			uParam1->f_2 = (iParam9 + (iVar34 - BUILTIN::FLOOR(vVar22.x)));
		}
		else
		{
			uParam1->f_2 = (iParam9 + BUILTIN::FLOOR((func_1025((!bVar43 || vVar25.x < vVar31.x), vVar25.x, vVar31.x) - vVar22.x)));
		}
		if (uParam1->f_2 < 1)
		{
			uParam1->f_2 = 0;
			return 0;
		}
		if (bVar42)
		{
			uParam1->f_3 = (iParam10 + BUILTIN::FLOOR((func_1025((!bVar43 || vVar28.y > vVar31.y), vVar28.y, vVar31.y) - vVar22.y)));
		}
		else
		{
			uParam1->f_3 = (iParam10 + (iVar35 - BUILTIN::FLOOR(vVar22.y)));
		}
		if (uParam1->f_3 < 1)
		{
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			return 0;
		}
		*uParam1 = (BUILTIN::FLOOR(vVar22.x) - iVar45);
		uParam1->f_1 = (BUILTIN::FLOOR(vVar22.y) - iVar46);
	}
	else if (bVar41)
	{
		if (bVar43)
		{
			uParam1->f_3 = (iParam10 + BUILTIN::FLOOR((func_1025(vVar28.y > vVar31.y, vVar28.y, vVar31.y) - vVar25.y)));
		}
		else
		{
			uParam1->f_3 = (iParam10 + (iVar35 - BUILTIN::FLOOR(vVar25.y)));
		}
		if (uParam1->f_3 < 1)
		{
			uParam1->f_3 = 0;
			return 0;
		}
		uParam1->f_2 = (iParam9 + BUILTIN::FLOOR(func_1025((!bVar43 || vVar25.x > vVar31.x), vVar25.x, vVar31.x)));
		if (uParam1->f_2 < 1)
		{
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			return 0;
		}
		*uParam1 = 0;
		uParam1->f_1 = (BUILTIN::FLOOR(vVar25.y) - iVar46);
	}
	else if (bVar42)
	{
		if (bVar43)
		{
			uParam1->f_2 = (iParam9 + BUILTIN::FLOOR((vVar31.x - vVar28.x)));
			if (uParam1->f_2 < 1)
			{
				uParam1->f_2 = 0;
				return 0;
			}
		}
		else
		{
			uParam1->f_2 = (iParam9 + (iVar34 - BUILTIN::FLOOR(vVar28.x)));
			if (uParam1->f_2 < 1)
			{
				uParam1->f_2 = 0;
				return 0;
			}
		}
		uParam1->f_3 = (iParam10 + BUILTIN::FLOOR(vVar28.y));
		if (uParam1->f_3 < 1)
		{
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			return 0;
		}
		*uParam1 = (BUILTIN::FLOOR(vVar28.x) - iVar45);
		uParam1->f_1 = 0;
	}
	else if (bVar43)
	{
		*uParam1 = 0;
		uParam1->f_1 = 0;
		uParam1->f_2 = (iParam9 + BUILTIN::FLOOR(vVar31.x));
		uParam1->f_3 = (iParam10 + BUILTIN::FLOOR(vVar28.y));
		if (uParam1->f_2 < 1 || uParam1->f_3 < 1)
		{
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_891(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = (uParam1->f_2 / 2);
	iVar1 = (uParam1->f_3 / 2);
	iVar2 = (*uParam1 + iVar0);
	iVar3 = (uParam1->f_1 + iVar1);
	iVar4 = MISC::ABSI((*iParam0 - iVar2));
	iVar5 = MISC::ABSI((iParam0->f_1 - iVar3));
	if (iVar4 > (iVar0 + iParam0->f_2) || iVar5 > (iVar1 + iParam0->f_2))
	{
		return 0;
	}
	if (iVar4 <= iVar0 || iVar5 <= iVar1)
	{
		return 1;
	}
	iVar6 = (iVar4 - iVar0);
	iVar7 = (iVar5 - iVar1);
	iVar6 = (iVar6 * iVar6);
	iVar7 = (iVar7 * iVar7);
	if (iVar6 + iVar7) <= (iParam0->f_2 * iParam0->f_2)
	{
		return 1;
	}
	return 0;
}

int func_892(var uParam0)
{
	return uParam0->f_23;
}

void func_893(bool bParam0)
{
	int iVar0;

	if (!func_134(64, 255))
	{
		iVar0 = func_489(Local_947.f_1, Local_947.f_2);
		func_918(iVar0);
		if (!func_134(1024, 255))
		{
			func_151(1024);
		}
		func_919(iVar0);
		if (bParam0)
		{
			func_947(Local_947.f_1, Local_947.f_4);
		}
		func_151(64);
	}
}

bool func_894(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
			return true;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return false;
}

float func_895(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_896(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (fParam1 > fParam2)
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_6))
	{
		return false;
	}
	return true;
}

bool func_897(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_896(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_898() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

float func_898()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_899(int iParam0)
{
	if (func_482(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_900(var uParam0, var uParam1)
{
}

void func_901(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_483(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!func_1026(iParam0))
	{
		func_181(iParam0, 0);
		return;
	}
	else if (func_482(iParam0, 8))
	{
		func_181(iParam0, 0);
	}
	bVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), func_828(PLAYER::PLAYER_ID())) <= Local_947.f_578[iParam0 /*39*/].f_2;
	if (bVar1 != func_482(iParam0, 1))
	{
		func_181(iParam0, 0);
		if (bVar1)
		{
			if (!MISC::_0x870708A6E147A9AD(iVar0, Local_947.f_578[iParam0 /*39*/].f_3, Local_947.f_578[iParam0 /*39*/].f_2, 0, Local_947.f_578[iParam0 /*39*/].f_4, 0, 0, 0, 0, 3))
			{
			}
			else
			{
				if (func_795(iParam0))
				{
					func_902(iParam0);
				}
				if (!MISC::_IS_STRING_SPACE(Local_947.f_578[iParam0 /*39*/].f_3))
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(iVar0, MISC::GET_HASH_KEY(Local_947.f_578[iParam0 /*39*/].f_3));
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					PED::SET_PED_CONFIG_FLAG(iVar0, 130, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 178, false);
					PED::SET_PED_CONFIG_FLAG(iVar0, 297, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 315, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 301, false);
				}
				func_629(iParam0, 1);
			}
		}
	}
}

void func_902(int iParam0)
{
	int iVar0;

	if (func_899(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_904(iParam0, iVar0, 1);
		iVar0++;
	}
	func_629(iParam0, 2);
}

bool func_903(int iParam0, int iParam1, int iParam2)
{
	return func_186(Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_1, iParam2);
}

void func_904(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam2)
	{
		func_779(&(Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/]), 1, 1);
	}
	if (MISC::_IS_STRING_SPACE(Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_2))
	{
		return;
	}
	if (Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_3 == 0)
	{
	}
	iVar0 = func_483(iParam0);
	iVar1 = func_1027(Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_2, Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_3, iVar0, Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_4, Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_5, 0, 0, Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_6, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
	iVar2 = func_948(iVar1);
	func_1028(iVar1, 18, 0, 1);
	func_1028(iVar1, 17, 0, 1);
	HUD::_UIPROMPT_SET_GROUP(Global_1951255[iVar2 /*23*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iVar0), 0);
	if (func_903(iParam0, iParam1, 2))
	{
		func_1029(iVar1, Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_2, Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_7, 1);
	}
	if (!func_903(iParam0, iParam1, 1))
	{
		if (func_903(iParam0, iParam1, 4))
		{
			if (func_905() < Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/].f_7)
			{
				if (func_906(Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/], 0))
				{
					func_798(Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/], 0, 1, 1);
				}
			}
			else if (!func_906(Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/], 0))
			{
				func_798(Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/], 1, 1, 1);
			}
		}
	}
	else
	{
		func_798(iVar1, 0, 1, 1);
	}
	func_797(iParam0, iParam1, 16);
	Local_947.f_578[iParam0 /*39*/].f_6[iParam1 /*8*/] = iVar1;
}

int func_905()
{
	if (func_28() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_906(int iParam0, bool bParam1)
{
	if (bParam1 && !func_778(iParam0))
	{
		return false;
	}
	return !func_1030(iParam0, 4);
}

bool func_907(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_778(iParam0))
	{
		return false;
	}
	iVar0 = func_948(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(Global_1951255[iVar0 /*23*/].f_3);
}

bool func_908(int iParam0, int iParam1, int iParam2)
{
	return true;
}

void func_909(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_188(iParam0);
	switch (func_528(func_228(iParam0)))
	{
		case 1:
			if (func_1031(iParam0) == PLAYER::PLAYER_ID())
			{
				switch (iParam1)
				{
					case 0:
						func_1032(0, 1);
						func_478(4096);
						func_478(1);
						func_718(1);
						func_1033();
						func_1034(0, 0, joaat("KIT_EMOTE_REACTION_NOD_HEAD_1"), 1, 1, 0, 0);
						break;
					case 1:
						func_1032(0, 1);
						func_478(2);
						func_718(2);
						func_478(8192);
						func_1033();
						func_1034(0, 0, joaat("KIT_EMOTE_REACTION_SHAKEHEAD_1"), 1, 1, 0, 0);
						break;
				}
			}
			break;
		case 2:
			if (func_1031(iParam0) == PLAYER::PLAYER_ID())
			{
				switch (iParam1)
				{
					case 0:
						func_1032(0, 1);
						func_478(4096);
						func_478(1);
						func_718(1);
						func_1033();
						func_1034(0, 0, joaat("KIT_EMOTE_REACTION_NOD_HEAD_1"), 1, 1, 0, 0);
						break;
					case 1:
						func_1032(0, 1);
						func_478(4);
						func_718(2);
						func_478(8192);
						func_1033();
						func_1034(0, 0, joaat("KIT_EMOTE_REACTION_SHAKEHEAD_1"), 1, 1, 0, 0);
						break;
				}
			}
			break;
		case 3:
			if (func_1031(iParam0) == PLAYER::PLAYER_ID())
			{
				switch (iParam1)
				{
					case 0:
						func_1032(0, 1);
						func_478(4096);
						func_478(8);
						func_1033();
						func_1034(0, 0, joaat("KIT_EMOTE_REACTION_SHAKEHEAD_1"), 1, 1, 0, 0);
						break;
					case 1:
						func_1032(0, 1);
						func_478(4096);
						func_121(262144);
						func_478(16);
						func_1033();
						func_963(PLAYER::PLAYER_PED_ID(), "SILENT_PLAYER_MOVE_BACK", 291934926, iVar0, 1, 0, 0, 1);
						break;
				}
			}
			break;
	}
}

bool func_910(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	int iVar0;

	if (bParam3)
	{
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return false;
		}
	}
	iVar0 = iParam0;
	if (Global_1298536[iVar0 /*87*/].f_1 == -1)
	{
		return false;
	}
	*uParam1 = Global_1298536[iVar0 /*87*/].f_1;
	*uParam2 = Global_1298536[iVar0 /*87*/].f_3;
	return true;
}

float func_911()
{
	switch (func_239())
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

float func_912()
{
	switch (func_239())
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

bool func_913(int iParam0)
{
	return func_249(Global_1301321, iParam0);
}

float func_914(float fParam0, float fParam1, float fParam2)
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

Vector3 func_915(vector3 vParam0, vector3 vParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	float fVar14;

	vVar0 = { func_565(vParam0) };
	vVar3 = { func_1024(func_1024(vVar0, func_565(vParam3)), vVar0) };
	fVar6 = MISC::ATAN2(vVar0.y, vVar0.x);
	fVar7 = -MISC::ATAN2(vVar0.z, BUILTIN::SQRT(((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y))));
	vVar8 = { -vVar0.y, vVar0.x, 0f };
	vVar11 = { func_1024(vVar8, vVar0) };
	fVar14 = (MISC::ATAN2((func_895(vVar8, vVar3) / BUILTIN::VMAG(vVar8)), (func_895(vVar11, vVar3) / BUILTIN::VMAG(vVar11))) + 180f);
	return fVar14, fVar7, fVar6;
}

void func_916(int iParam0, int iParam1)
{
	struct<29> Var0;
	struct<2> Var31;
	int iVar33;

	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_32(&Var0, iParam0, -1, -1, 255);
	Var31 = { func_635(iParam0, joaat("VARIATIONS_SEEN")) };
	if (!STATS::STAT_ID_GET_INT(&Var31, &iVar33))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	MISC::SET_BIT(&iVar33, iParam1);
	if (!func_124(&Var0, 4) && func_1035(iVar33) == Var0.f_1)
	{
		iVar33 = 0;
	}
	if (!STATS::STAT_ID_SET_INT(&Var31, iVar33, true))
	{
	}
	Global_1268861[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*99*/].f_56[iParam0] = iVar33;
}

void func_917(int iParam0)
{
	func_1036(iParam0);
}

void func_918(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<29> Var2;
	int iVar33;
	struct<2> Var34;
	int iVar36;
	struct<2> Var37;

	if (func_131(Global_1272030[iParam0 /*4*/]))
	{
		return;
	}
	func_1037(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 1106247680;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	func_32(&Var2, iVar0, iVar1, -1, 255);
	func_132(&(Global_1272030[iParam0 /*4*/]));
	iVar33 = Var2.f_5;
	if (iVar33 != 0)
	{
		Var34 = { func_1038(joaat("MP_FETCH_LAST_ATTEMPTED_DYNAMIC_MISSION_UNLOCK")) };
		STATS::STAT_ID_SET_INT(&Var34, iVar33, true);
		Var34 = { func_1038(joaat("MP_FETCH_LAST_ATTEMPTED_DYNAMIC_MISSION_TIMESTAMP")) };
		STATS::STAT_ID_SET_INT(&Var34, Global_1296859.f_21, true);
	}
	iVar36 = Var2.f_9;
	if (iVar36 != 0)
	{
		Var37 = { func_1038(joaat("MP_FETCH_LAST_ATTEMPTED_COOLDOWN_TAG_ID")) };
		STATS::STAT_ID_SET_INT(&Var37, iVar36, true);
		Var37 = { func_1038(joaat("MP_FETCH_LAST_ATTEMPTED_COOLDOWN_TAG_TIMESTAMP")) };
		STATS::STAT_ID_SET_INT(&Var37, Global_1296859.f_21, true);
	}
}

void func_919(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	func_785(&Var0);
}

void func_920(struct<2> Param0)
{
	struct<32> Var0;

	if (func_487(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_487(Param0)))
	{
	}
	else
	{
		STATS::_0xB2A38826E5886E83(func_487(Param0), Global_265377.f_124517.f_71.f_17);
		if (func_1039(Param0, &Var0))
		{
			if (Var0.f_29 == joaat("RACE_IMPROMPTU"))
			{
				STATS::_0xF21A5D66874FCEDD(Var0.f_2, 0, joaat("RACE"));
			}
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_29, 0);
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_30, 0);
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_31, 0);
		}
	}
}

void func_921(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_635(iParam0, joaat("NUM_TIMES_SEEN")) };
	STATS::_STAT_ID_INCREMENT_INT(&Var0, 1);
}

void func_922(int iParam0, int iParam1, int iParam2)
{
	struct<29> Var0;
	int iVar31;

	Var0.f_10 = 1106247680;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	iVar31 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar31 > -1 && iVar31 < 32)
	{
		func_32(&Var0, iParam0, iParam1, iParam2, 255);
		if (Var0.f_7 < 3 && Var0.f_7 >= 0)
		{
			Global_1268861[iVar31 /*99*/].f_95[Var0.f_7] = 0;
		}
	}
}

void func_923(int iParam0, int iParam1)
{
	if (!func_527(255))
	{
		func_715(iParam0);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Local_947.f_19.f_3[iParam0 /*2*/]))
	{
		Local_947.f_19.f_3[iParam0 /*2*/] = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, func_188(0));
		switch (func_239())
		{
			case 0:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				if (func_243() == 2)
				{
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_947.f_19.f_3[iParam0 /*2*/], "NB_PHOTOGRAPHY_BLIP_NAME_DS");
				}
				else
				{
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_947.f_19.f_3[iParam0 /*2*/], "NB_PHOTOGRAPHY_BLIP_NAME_TS");
				}
				break;
			case 1:
			case 2:
			case 8:
			case 9:
			case 10:
			case 11:
				if (func_243() == 2)
				{
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_947.f_19.f_3[iParam0 /*2*/], "NB_PHOTOGRAPHY_BLIP_NAME_DS");
				}
				else
				{
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_947.f_19.f_3[iParam0 /*2*/], "NB_PHOTOGRAPHY_BLIP_NAME_FS");
				}
				break;
			default:
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_947.f_19.f_3[iParam0 /*2*/], "NB_PHOTOGRAPHY_BLIP_NAME_TS");
				break;
		}
	}
	if (iParam1 != 0)
	{
		MAP::_BLIP_SET_MODIFIER(Local_947.f_19.f_3[iParam0 /*2*/], 942020339);
	}
}

void func_924(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_188(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_947.f_19.f_157))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			return;
		}
		if (Local_947.f_19.f_157 != iParam0)
		{
			Local_947.f_19.f_157 = iParam0;
		}
		func_1040(&(Local_947.f_19.f_221), PLAYER::GET_PLAYER_PED(Local_947.f_19.f_157), 0, iParam1, 2, 1, 2, 1, 0, 0, 0, 0);
		_NAMESPACE29::_0x66F9EB44342BB4C5(iVar1, &(Local_947.f_19.f_221));
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			return;
		}
		Local_947.f_19.f_157 = iParam0;
		func_1040(&(Local_947.f_19.f_221), PLAYER::GET_PLAYER_PED(Local_947.f_19.f_157), 0, iParam1, 2, 1, 2, 1, 0, 0, 0, 0);
		_NAMESPACE29::_0x66F9EB44342BB4C5(iVar1, &(Local_947.f_19.f_221));
	}
}

char* func_925(int iParam0)
{
	switch (func_239())
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
			switch (func_243())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return "WORLD_HUMAN_CROUCH_INSPECT_FEMALE_A";
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
							return "WORLD_HUMAN_CROUCH_INSPECT_MALE_C";
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

void func_926(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = func_188(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
	{
		return;
	}
	if (Local_947.f_19.f_156 == iParam0 && func_346(iVar1, -875674219))
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Local_947.f_19.f_156))
	{
		if ((Local_947.f_19.f_160 == 0 || NETWORK::GET_TIME_DIFFERENCE(Local_947.f_19.f_160, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 3000) || !func_346(iVar1, -875674219))
		{
			iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				return;
			}
			if (iParam1 != -1)
			{
				if (func_595(Local_13.f_7.f_11, Local_13.f_7.f_16))
				{
					func_478(524288);
					Local_947.f_19.f_156 = iParam0;
					Local_947.f_19.f_160 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					sVar2 = func_1041(iParam1);
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iVar1, func_354(iParam1), func_616(iParam1), PLAYER::GET_PLAYER_PED(Local_947.f_19.f_156), -1, 4f, -2f, 8, 0f, false, false, -1f, sVar2, 0, -1f);
				}
				else if (Local_947.f_19.f_156 != iParam0)
				{
					Local_947.f_19.f_156 = iParam0;
					Local_947.f_19.f_160 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar1, PLAYER::GET_PLAYER_PED(Local_947.f_19.f_156), -1, -1f, -1f, -1f);
				}
			}
			else
			{
				Local_947.f_19.f_156 = iParam0;
				Local_947.f_19.f_160 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar1, PLAYER::GET_PLAYER_PED(Local_947.f_19.f_156), -1, -1f, -1f, -1f);
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
		Local_947.f_19.f_156 = iParam0;
		Local_947.f_19.f_160 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		if (iParam1 != -1)
		{
			func_478(524288);
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iVar1, func_354(iParam1), func_616(iParam1), PLAYER::GET_PLAYER_PED(Local_947.f_19.f_156), -1, 4f, -2f, 8, 0f, false, false, -1f, 0, 0, -1f);
		}
		else
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar1, PLAYER::GET_PLAYER_PED(Local_947.f_19.f_156), -1, -1f, -1f, -1f);
		}
	}
}

bool func_927(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_635(iParam1, joaat("CHARACTER_MEMORY")) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return false;
	}
	return MISC::IS_BIT_SET(iVar2, iParam0);
}

int func_928(int iParam0)
{
	return iParam0 + 8;
}

int func_929(int iParam0)
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
	if (func_710(vVar5, fVar1, fVar2, fVar3, fVar4))
	{
		iVar0++;
	}
	fVar1 = 0.4f;
	fVar2 = 0.6f;
	fVar3 = 0.3f;
	fVar4 = 0.7f;
	if (func_710(vVar5, fVar1, fVar2, fVar3, fVar4))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_930(int iParam0, int iParam1, float fParam2)
{
	return func_937(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

bool func_931(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_188(0);
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), vParam0) < 5f)
	{
		return true;
	}
	return false;
}

bool func_932(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_188(0);
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), vParam0) > 20f)
	{
		return true;
	}
	return false;
}

int func_933()
{
	switch (func_239())
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

int func_934()
{
	switch (func_239())
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

var func_935(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_1042() != 0)
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
	iVar5 = Global_1296859.f_10;
	iVar6 = Global_1296859.f_15;
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
			case joaat("VOLCYLINDER"):
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_1043());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_1043());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_1043());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_1044(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1296859.f_154[iVar2]))
		{
			iVar10 = Global_1296859.f_154[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_1045(iVar2))
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
					else if (Global_1296859.f_88[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_1046(iVar2) != 1)
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
					if (GANG::_0x901E0DC25080C8B9(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_1047(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(iVar8, ENTITY::GET_ENTITY_COORDS(iVar11, false, false)))
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

bool func_936()
{
	float fVar0;

	fVar0 = 16f;
	switch (func_239())
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
	if (func_1048(2, fVar0, 1))
	{
		func_584(0, 65f, 5000, 2, 97, 98, -1, -1, -1, -1, 0, -1);
		return true;
	}
	return false;
}

bool func_937(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

void func_938(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

int func_939()
{
	int iVar0;

	iVar0 = func_239();
	switch (iVar0)
	{
		case 0:
			return joaat("EVENT_SHOCKING_BEAT_AMUSING_NEW");
		case 1:
			return joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW");
		case 2:
			return joaat("EVENT_SHOCKING_BEAT_AMUSING_NEW");
		case 3:
			return joaat("EVENT_SHOCKING_BEAT_DANGEROUS_NEW");
		case 4:
			return joaat("EVENT_SHOCKING_BEAT_DISTURBING_NEW");
		case 5:
			return joaat("EVENT_SHOCKING_BEAT_DANGEROUS_NEW");
		case 6:
			return joaat("EVENT_SHOCKING_BEAT_DANGEROUS_NEW");
		case 7:
			return joaat("EVENT_SHOCKING_BEAT_DANGEROUS_NEW");
		case 8:
			return joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW");
		case 9:
			return joaat("EVENT_SHOCKING_BEAT_INTERESTING_NEW");
		case 10:
			return joaat("EVENT_SHOCKING_BEAT_INTERESTING_NEW");
		case 11:
			return joaat("EVENT_SHOCKING_BEAT_AMUSING_NEW");
		default:
			break;
	}
	return joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW");
}

int func_940(int iParam0)
{
	return func_1049(iParam0);
}

bool func_941(int iParam0)
{
	return ENTITY::DOES_ENTITY_EXIST(Local_947.f_274.f_7[iParam0 /*11*/]);
}

bool func_942(int iParam0, bool bParam1)
{
	if (!bParam1 || func_941(iParam0))
	{
		return ENTITY::IS_ENTITY_DEAD(Local_947.f_274.f_7[iParam0 /*11*/]);
	}
	return false;
}

bool func_943(int iParam0)
{
	return MAP::DOES_BLIP_EXIST(Local_947.f_274.f_7[iParam0 /*11*/].f_1);
}

void func_944(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	int iVar0;

	func_174(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_947.f_274.f_7[iParam0 /*11*/]))
	{
		return;
	}
	iVar0 = MAP::_BLIP_ADD_FOR_ENTITY(iParam1, Local_947.f_274.f_7[iParam0 /*11*/]);
	if (iParam2 != 0)
	{
		MAP::_BLIP_SET_MODIFIER(iVar0, iParam2);
	}
	if (iParam3 != 0)
	{
		MAP::SET_BLIP_SPRITE(iVar0, iParam3, true);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, sParam4);
	}
	Local_947.f_274.f_7[iParam0 /*11*/].f_1 = iVar0;
}

int func_945(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_1050(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

void func_946()
{
	if (!func_69(2))
	{
		return;
	}
	func_149(8);
}

void func_947(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_786(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_928(iParam1);
	func_791(iVar0, iParam0);
}

int func_948(int iParam0)
{
	return iParam0;
}

void func_949(int iParam0)
{
	if (!func_1051(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_DELETE(Global_1951255[iParam0 /*23*/].f_3);
	}
	Global_1951255[iParam0 /*23*/].f_4 = 0;
	Global_1951255[iParam0 /*23*/] = 1;
	Global_1951255[iParam0 /*23*/].f_16 = 0;
	Global_1951255[iParam0 /*23*/].f_1 = 0;
	Global_1951255[iParam0 /*23*/].f_6 = { 0f, 0f, 0f };
	Global_1951255[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951255[iParam0 /*23*/].f_9 = 0f;
	Global_1951255[iParam0 /*23*/].f_10 = 0;
	Global_1951255[iParam0 /*23*/].f_11 = 0;
	Global_1951255[iParam0 /*23*/].f_2 = 1;
	Global_1951255[iParam0 /*23*/].f_15 = -1f;
}

bool func_950(struct<2> Param0, var uParam2)
{
	if (!func_40(Param0))
	{
		return false;
	}
	func_1052(uParam2);
	switch (Param0)
	{
		case 2:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636[Param0.f_1 /*3*/]), 3);
			return true;
		case 3:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_602[Param0.f_1 /*3*/]), 3);
			return true;
		case 4:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_2104[Param0.f_1 /*3*/]), 3);
			return true;
		case 5:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_12606[Param0.f_1 /*3*/]), 3);
			return true;
		case 6:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_12908[Param0.f_1 /*3*/]), 3);
			return true;
		case 7:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_15910[Param0.f_1 /*3*/]), 3);
			return true;
		case 8:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_16512[Param0.f_1 /*3*/]), 3);
			return true;
		default:
			break;
	}
	return false;
}

int func_951()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.x = Global_1257541.f_8863;
	vVar1.f_2 = -1041770777;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar1.f_1), &vVar1))
	{
		iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(vVar1.x, vVar1.y);
	}
	return iVar0;
}

void func_952(var uParam0, var uParam1)
{
}

void func_953(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 - (Global_1951255[iParam0 /*23*/].f_1 && iParam1));
}

void func_954(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		if (Global_1951255[iParam0 /*23*/].f_5 == 5 && !func_1030(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_955(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1951255[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_956(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 || iParam1);
}

int func_957(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, true);
	}
	return iVar0;
}

bool func_958(int iParam0)
{
	return Local_13.f_58[iParam0 /*3*/].f_2 > 0;
}

bool func_959(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (bParam4)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
		{
			return true;
		}
	}
	else if (func_1053(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

var func_960(int iParam0, int iParam1)
{
	return func_935(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

void func_961(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 15, 41, &uParam1);
}

bool func_962(int iParam0)
{
	switch (iParam0)
	{
		case 176:
			return true;
		case 177:
			return true;
		case 178:
			return true;
		case 179:
			return true;
		default:
			break;
	}
	return false;
}

bool func_963(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_1054(iParam0, &Var0);
}

Vector3 func_964(char* sParam0)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_965(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_1055(vParam1, uParam0);
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

void func_966(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 - iVar1 * 32);
	MISC::SET_BIT(&(Local_947.f_19.f_46[iVar1]), iVar2);
}

void func_967(int iParam0)
{
}

void func_968(int iParam0)
{
}

void func_969(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_970(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_971(var uParam0)
{
	return func_847(*uParam0, 2);
}

void func_972(int iParam0)
{
	int iVar0;

	if (!func_227(&iVar0))
	{
		return;
	}
	func_660(&(Local_82[iVar0 /*27*/].f_10), 4, iParam0);
}

void func_973(int iParam0)
{
	int iVar0;

	if (!func_227(&iVar0))
	{
		return;
	}
	func_659(&(Local_82[iVar0 /*27*/].f_10), 3, iParam0);
}

bool func_974(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	bool bVar3;

	fVar0 = func_1056(uParam1);
	if (uParam1->f_13 > (fVar0 + 5f))
	{
		return false;
	}
	if (!PED::_0x5102307CE88798EB(iParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	}
	if (uParam1->f_13 < fVar0 || PED::IS_TRACKED_PED_VISIBLE(iParam0))
	{
		fVar1 = -1f;
		fVar2 = func_1057(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5f));
		bVar3 = uParam1->f_1 & 2 != false;
		if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, fVar2, -1f, fVar1) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_34, true, bVar3) == 1)
		{
			return true;
		}
		else if (WEAPON::IS_WEAPON_VALID(Global_1940258.f_38))
		{
			if (WEAPON::_IS_WEAPON_LANTERN(Global_1940258.f_38) || WEAPON::_IS_WEAPON_TORCH(Global_1940258.f_38))
			{
				if (uParam1->f_13 <= 5f)
				{
					if (func_1058())
					{
						if (PED::IS_PED_FACING_PED(Global_34, iParam0, 110f))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17))
							{
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_975(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (func_1059(iParam0))
	{
		PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.25f);
	}
	if (((PED::_GET_PED_CROUCH_MOVEMENT(Global_34) || PED::IS_PED_IN_COVER(Global_34, false, false)) || PED::IS_PED_GOING_INTO_COVER(Global_34)) || *uParam1 & 2097152 != 0)
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
			if (PED::IS_PED_IN_COVER(Global_34, false, false) || PED::IS_PED_GOING_INTO_COVER(Global_34))
			{
				return false;
			}
			if (PED::_GET_PED_CROUCH_MOVEMENT(Global_34) || ((PED::_GET_PED_BLACKBOARD_FLOAT(Global_34, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) < 8f) && *uParam1 & 2097152 != 0))
			{
				return false;
			}
		}
		if (PED::_GET_PED_BLACKBOARD_FLOAT(Global_34, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 8f)
		{
		}
		iVar0 = 1;
	}
	return iVar0;
}

void func_976(int iParam0)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;

	if (Global_19 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1940258.f_32);
	Global_1940258.f_21 = func_1060();
	if (Global_1940258.f_21)
	{
		Global_1940258.f_22 = MISC::GET_GAME_TIMER();
	}
	bVar1 = false;
	if (WEAPON::IS_WEAPON_VALID(Global_1940258.f_38))
	{
		bVar1 = true;
		if (PED::IS_PED_SHOOTING(Global_34))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_34, &uVar2))
			{
			}
			else
			{
				uVar2 = Global_1940258.f_38;
			}
			Global_1940258.f_40 = uVar2;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_1061(&(Global_1940258.f_28), &(Global_1940258.f_33));
			Global_1940258.f_32 = iParam0;
			break;
		case 1:
			Global_1940258.f_24 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1940258.f_24)
			{
				if (bVar1 && WEAPON::_IS_WEAPON_LASSO(Global_1940258.f_38))
				{
					Global_1940258.f_24 = PED::_GET_LASSO_TARGET(Global_34) != 0;
				}
				if (Global_1940258.f_40 == joaat("WEAPON_THROWN_BOLAS"))
				{
					Global_1940258.f_24 = WEAPON::_0x46D42883E873C1D7(Global_34) > 0;
				}
			}
			break;
		case 2:
			bVar3 = WEAPON::IS_WEAPON_VALID(Global_1940258.f_40);
			if (bVar3 && WEAPON::_IS_WEAPON_LASSO(Global_1940258.f_40))
			{
				Global_1940258.f_19 = 0;
			}
			else
			{
				if (bVar3 && WEAPON::_0x5809DBCA0A37C82B(Global_1940258.f_40))
				{
					Global_1940258.f_19 = PED::_0x285D36C5C72B0569(Global_34) <= 3f;
				}
				else
				{
					Global_1940258.f_19 = PED::_0x285D36C5C72B0569(Global_34) <= 1f;
				}
				if (Global_1940258.f_19)
				{
					Global_1940258.f_23 = MISC::GET_FRAME_COUNT();
				}
			}
			break;
		default:
			Global_1940258.f_32 = iParam0 + 1;
			break;
	}
	Global_19 |= 4;
}

var func_977(int iParam0)
{
	return Global_1102219.f_3705[iParam0 /*3*/];
}

bool func_978(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_1062(bParam0, &iVar0, &iVar1))
	{
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::GET_PED_CONFIG_FLAG(iVar0, 6, false))
			{
				return false;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && PED::GET_PED_CONFIG_FLAG(iVar1, 6, false))
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

bool func_979(var uParam0)
{
	int iVar0;

	iVar0 = Global_1940258.f_34;
	if (func_28() == -1)
	{
		if (Global_1940258.f_34 == 0)
		{
			iVar0 = func_1063(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1940258.f_34) || !Global_1956200.f_1716[4])
	{
		iVar0 = func_1063(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_1007(iVar0) == -1)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
	{
		return false;
	}
	uParam0->f_15 = iVar0;
	return true;
}

void func_980(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_1064(uParam0);
	}
}

bool func_981(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam2))
	{
		iVar1 = func_1007(iParam2);
	}
	else
	{
		iVar1 = func_1006(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_1007(iParam0);
	}
	else
	{
		iVar0 = func_1006(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_186(*uParam1, 8388608))
	{
		return true;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam2);
	switch (iVar2)
	{
		case joaat("REL_CIVMALE"):
		case joaat("REL_RE_VICTIM"):
		case joaat("REL_CIVNATIVE"):
		case joaat("REL_PINKERTONS"):
		case joaat("REL_GUAMA_LAW"):
		case joaat("REL_COP"):
		case joaat("REL_CIVFEMALE"):
			switch (iVar3)
			{
				case joaat("REL_CIVMALE"):
				case joaat("REL_RE_VICTIM"):
				case joaat("REL_CIVNATIVE"):
				case joaat("REL_CIVFEMALE"):
					return true;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return true;
	}
	return false;
}

float func_982(int iParam0, int iParam1)
{
	return func_1003(iParam0, iParam1, 1, 1);
}

float func_983(var uParam0)
{
	return uParam0->f_29;
}

void func_984(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_248(uParam0, 134217728);
	}
	else
	{
		func_347(uParam0, 134217728);
	}
}

void func_985()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_986(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	if ((WEAPON::_IS_WEAPON_LASSO(Global_1940258.f_38) || joaat("WEAPON_THROWN_BOLAS") == Global_1940258.f_38) && Global_1940258.f_21)
	{
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return false;
		}
	}
	if (Global_1940258.f_34 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1940258.f_34, true) == iParam0)
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_1003(iVar0, iParam0, 1, 1) <= 4f)
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_1065(iVar0, 0)))
		{
			if (func_1066(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_987(var uParam0)
{
	return uParam0->f_18;
}

bool func_988(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_13 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_186(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(iParam1, Global_34, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_34, 17))
		{
			return true;
		}
	}
	return false;
}

int func_989(var uParam0)
{
	return uParam0->f_19;
}

int func_990(var uParam0)
{
	return uParam0->f_20;
}

bool func_991(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	if (bParam3)
	{
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, false) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_1065(iVar0, 0)))
		{
			if (func_710(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_992(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1940258.f_12)
	{
		if ((bParam2 || Global_1940258.f_13 > 0) || Global_1940258.f_11 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1940258.f_9 == 1370593166)
	{
		return 0;
	}
	if (Global_1940258.f_14 > 0 || (bParam2 && Global_1940258.f_14 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1940258.f_7)
		{
			if (bParam2 || Global_1940258.f_15 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_993(var uParam0)
{
	return uParam0->f_25;
}

int func_994(var uParam0)
{
	int iVar0;

	switch (uParam0->f_8)
	{
		case 0:
			switch (uParam0->f_7)
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
			switch (uParam0->f_7)
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
			switch (uParam0->f_7)
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
			switch (uParam0->f_7)
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
			switch (uParam0->f_7)
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

bool func_995(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_937(iParam0, vParam4, 0.5f))
	{
		if (ENTITY::_0x0C9DBF48C6BA6E4C(iParam0, vParam4, 17))
		{
			return true;
		}
	}
	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
	{
		return true;
	}
	return false;
}

int func_996(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
	{
		if (Global_1940258.f_38 == joaat("WEAPON_UNARMED"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1940258.f_40))
		{
			if (WEAPON::_IS_WEAPON_MELEE(Global_1940258.f_40) || WEAPON::_IS_WEAPON_BOW(Global_1940258.f_40))
			{
				return 1;
			}
		}
	}
	if (func_1067(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_997(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_1059(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_998(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_1059(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_999(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = func_1068(uParam0);
	if (func_1059(iParam1))
	{
		return false;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_1940258.f_28[iParam3], 17))
		{
			if (PED::_0x06087579E7AA85A9(iParam1, Global_1940258.f_28[iParam3], -1f, -1f, -1f, -1f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_1000(int iParam0, int iParam1)
{
	if (!TASK::_0xEFC4303DDC6E60D3(iParam0))
	{
		return false;
	}
	*iParam1 = TASK::_0xED1F514AF4732258(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		return false;
	}
	if (!PED::_0x2D64376CF437363E(*iParam1))
	{
		return false;
	}
	return true;
}

bool func_1001(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (WEAPON::_0x8D50F43298AB9545(iParam0, iParam1))
	{
		return true;
	}
	if (!WEAPON::_IS_WEAPON_LASSO(func_1069(iParam0, 1, 0, 0)) && !func_1069(iParam0, 1, 0, 0) == joaat("WEAPON_THROWN_BOLAS"))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(iParam0) == iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_1002(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_1003(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_1004(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_1005(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_1005(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_1006(int iParam0)
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

int func_1007(int iParam0)
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

float func_1008(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_1009(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1940258.f_34 != 0)
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
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_1940258.f_34, 1, 1))
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
			if (func_1000(Global_34, &iVar1))
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
		fVar2 = func_1003(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_1003(iParam0, Global_1940258.f_34, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1940258.f_34, iParam0))
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

bool func_1010(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_1062(1, &iVar0, &iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17))
				{
					if (!bParam2 || !func_1012(uParam1, iVar0))
					{
						return true;
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
				if (!bParam2 || !func_1012(uParam1, iVar1))
				{
					if (func_1005(iVar1, Global_35, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_1011(var uParam0)
{
	return func_186(*uParam0, 131072);
}

bool func_1012(var uParam0, int iParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iParam1, "bIsCriminal"))
	{
		return true;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam1, 4, false))
	{
		return true;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam1);
	switch (iVar0)
	{
		case joaat("REL_GANG_ODRISCOLL"):
		case joaat("REL_GANG_SKINNER_BROTHERS"):
		case joaat("REL_GUNSLINGERS"):
		case joaat("REL_GANG_CREOLE"):
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
		case joaat("REL_GANG_MURFREE_BROOD"):
		case joaat("REL_CRIMINALS"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_1013(int iParam0)
{
	return false;
}

int func_1014(var uParam0)
{
	return uParam0->f_22;
}

int func_1015(int iParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_5 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_13;
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

float func_1016(vector3 vParam0, vector3 vParam3)
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

bool func_1017(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_1018(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_1019(int iParam0)
{
	return WEAPON::_IS_WEAPON_BOW(iParam0);
}

float func_1020(int iParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	fVar0 = -9999f;
	fVar1 = 9999f;
	vVar2 = { 0f, 0f, 0f };
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 21030, 0f, 0f, 0f) };
	fVar0 = func_1070(vVar2.x, fVar0);
	fVar1 = func_1057(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_1070(vVar2.x, fVar0);
	fVar1 = func_1057(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_1070(vVar2.x, fVar0);
	fVar1 = func_1057(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_1070(vVar2.x, fVar0);
	fVar1 = func_1057(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_1070(vVar2.x, fVar0);
	fVar1 = func_1057(vVar2.x, fVar1);
	return (fVar0 - fVar1);
}

float func_1021(int iParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	fVar0 = -9999f;
	fVar1 = 9999f;
	vVar2 = { 0f, 0f, 0f };
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 21030, 0f, 0f, 0f) };
	fVar0 = func_1070(vVar2.y, fVar0);
	fVar1 = func_1057(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_1070(vVar2.y, fVar0);
	fVar1 = func_1057(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_1070(vVar2.y, fVar0);
	fVar1 = func_1057(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_1070(vVar2.y, fVar0);
	fVar1 = func_1057(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_1070(vVar2.y, fVar0);
	fVar1 = func_1057(vVar2.y, fVar1);
	return (fVar0 - fVar1);
}

float func_1022(int iParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	fVar0 = -9999f;
	fVar1 = 9999f;
	vVar2 = { 0f, 0f, 0f };
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 21030, 0f, 0f, 0f) };
	fVar0 = func_1070(vVar2.z, fVar0);
	fVar1 = func_1057(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_1070(vVar2.z, fVar0);
	fVar1 = func_1057(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_1070(vVar2.z, fVar0);
	fVar1 = func_1057(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_1070(vVar2.z, fVar0);
	fVar1 = func_1057(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_1070(vVar2.z, fVar0);
	fVar1 = func_1057(vVar2.z, fVar1);
	return (fVar0 - fVar1);
}

Vector3 func_1023(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;

	if (!CAM::DOES_CAM_EXIST(iParam0))
	{
		vVar0 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	else
	{
		vVar0 = { CAM::GET_CAM_ROT(iParam0, 2) };
	}
	fVar3 = BUILTIN::SIN(vVar0.z);
	fVar4 = BUILTIN::COS(vVar0.z);
	fVar5 = BUILTIN::SIN(vVar0.x);
	fVar6 = BUILTIN::COS(vVar0.x);
	return func_565((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_1024(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

float func_1025(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_1026(int iParam0)
{
	return !func_482(iParam0, 4);
}

int func_1027(char* sParam0, int iParam1, int iParam2, int iParam3, var uParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
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
		if (func_1030(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == Global_1951255[iVar0 /*23*/].f_11 && iParam1 == Global_1951255[iVar0 /*23*/].f_4)
				{
					if (iParam3 <= Global_1951255[iVar0 /*23*/])
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
				func_1071(iVar1, iParam1, sParam0, 5, iParam3, uParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_1028(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_778(iParam0))
	{
		return;
	}
	iVar0 = func_948(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1951255[iVar0 /*23*/].f_3, iParam1, iParam2);
}

void func_1029(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_778(iParam0))
	{
		return;
	}
	iVar0 = func_948(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1951255[iVar0 /*23*/].f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

bool func_1030(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951255[iParam0 /*23*/].f_1 && iParam1) != 0;
}

int func_1031(int iParam0)
{
	return Local_13.f_58[iParam0 /*3*/].f_1;
}

void func_1032(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_180(iVar0);
		func_531(iVar1, 0, bParam0, bParam1);
		func_531(iVar1, 1, bParam0, bParam1);
		func_531(iVar1, 2, bParam0, bParam1);
		iVar0++;
	}
}

void func_1033()
{
	func_946();
}

void func_1034(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (PED::_IS_PED_CARRYING(iVar0))
	{
		return;
	}
	if (func_1018(iVar0, 0, 1, 0) != joaat("WEAPON_UNARMED"))
	{
		return;
	}
	TASK::_TASK_EMOTE_2(iVar0, iParam0, iParam1, iParam2, bParam3, bParam4, bParam5, bParam6, false);
}

int func_1035(int iParam0)
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

void func_1036(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = Global_1296859.f_21;
	Var1 = { func_635(iParam0, joaat("COOLDOWN")) };
	if (!STATS::STAT_ID_SET_INT(&Var1, iVar0, true))
	{
	}
}

int func_1037(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<29> Var2;

	Var2.f_10 = 1106247680;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	iVar1 = 1;
	while (iVar1 <= 43)
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

struct<2> func_1038(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

bool func_1039(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_950(Param0, &vVar0);
	if (func_1072(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

void func_1040(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11)
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

char* func_1041(int iParam0)
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

int func_1042()
{
	return Global_1051252.f_12;
}

char* func_1043()
{
	return "unnamed";
}

int func_1044(int iParam0)
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

bool func_1045(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_1073(36, iParam0);
}

int func_1046(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219.f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (Global_1296859.f_22[iParam0])
	{
		return Global_1100469[iParam0 /*53*/].f_1;
	}
	return 26;
}

bool func_1047(int iParam0)
{
	if (func_1074(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) != 1)
		{
			func_1075(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) == 1;
}

bool func_1048(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!bParam2 || func_527(iVar0))
			{
				if (func_614(iParam0, fParam1, iVar0, 0))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

int func_1049(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		return 0;
	}
	return 1;
}

int func_1050(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_1076(iParam2, -372840566);
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
	func_1077(uParam1, iParam0, Var3);
	return 1;
}

bool func_1051(int iParam0)
{
	return func_1030(iParam0, 2);
}

void func_1052(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

float func_1053(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_1054(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

void func_1055(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam3)[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam3)[iVar0 /*4*/]))
			{
				if (!AUDIO::IS_PED_IN_CURRENT_CONVERSATION(&uParam0, (*uParam3)[iVar0 /*4*/], 0))
				{
					AUDIO::ADD_PED_TO_CONVERSATION(&uParam0, (*uParam3)[iVar0 /*4*/], &((uParam3[iVar0 /*4*/])->f_1));
				}
			}
		}
		iVar0++;
	}
}

float func_1056(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_799(uParam0);
	}
	if (GRAPHICS::_0x25CA89B2A39DCC69() > 0.833f)
	{
		return func_1078(uParam0);
	}
	return func_799(uParam0);
}

float func_1057(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_1058()
{
	int iVar0;
	int iVar1;

	iVar0 = func_1080(func_1079());
	iVar1 = func_1081(func_1079());
	if (iVar0 >= 21)
	{
		return true;
	}
	else if (iVar0 < 5)
	{
		return true;
	}
	else if (iVar0 >= 20)
	{
		if (iVar1 >= 20)
		{
			return true;
		}
	}
	else if (iVar0 < 6)
	{
		if (iVar1 <= 20)
		{
			return true;
		}
	}
	return false;
}

bool func_1059(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return false;
	}
	iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (((((((((iVar0 == joaat("WORLD_PLAYER_SLEEP_GROUND") || iVar0 == joaat("PROP_PLAYER_SLEEP_A_FRAME_TENT_PLAYER_CAMPS")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_ARM")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_PILLOW")) || iVar0 == joaat("WORLD_ANIMAL_DOG_SLEEPING")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW")) || iVar0 == joaat("PROP_PLAYER_PRPTY_SAVE_GAME")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_LEFT")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_RIGHT")) || iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
	{
		return true;
	}
	if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME") || iVar0 == joaat("WORLD_PLAYER_SLEEP_BEDROLL"))
	{
		iVar0 = PED::_0xC22AA08A8ADB87D4(iParam0);
		if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_MALE_A"))
		{
			return true;
		}
		return false;
	}
	return false;
}

bool func_1060()
{
	if (func_1082())
	{
		return false;
	}
	if (Global_1572887.f_13 == -1)
	{
		if (Global_1940258.f_38 == joaat("WEAPON_LASSO"))
		{
			return PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK"));
		}
		return PED::GET_PED_RESET_FLAG(Global_34, 311);
	}
	else
	{
		return Global_1956200.f_1716[3];
	}
	return false;
}

void func_1061(var uParam0, var uParam1)
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
			if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar1]))
			{
			}
			else if (!PED::IS_PED_HUMAN((*uParam0)[iVar1]) && !(DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "bIgnoreDamageChecking"))
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

bool func_1062(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1940258.f_26))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1940258.f_26))
		{
			*iParam1 = Global_1940258.f_26;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1940258.f_27))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1940258.f_27))
		{
			if (PED::_IS_PED_HOGTIED(Global_1940258.f_27) || ENTITY::IS_ENTITY_DEAD(Global_1940258.f_27))
			{
				*iParam2 = Global_1940258.f_27;
				iVar0 = 1;
			}
		}
	}
	if (Global_1940258.f_24 && !PED::IS_PED_INJURED(Global_34))
	{
		iVar1 = PED::_GET_LASSO_TARGET(Global_34);
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

int func_1063(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_INTERACT_LOCKON_DETACH_HORSE")) && !PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
		{
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar1)))
						{
							iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (uParam0->f_7 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1940258.f_6)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_34);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_GET_LASSO_TARGET(Global_34);
		}
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_1064(var uParam0)
{
	int iVar0;

	if (Global_1940258.f_32 == 0)
	{
		func_347(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1940258.f_33)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1940258.f_28[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1940258.f_28[iVar0]))
				{
					func_248(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_1065(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_1066(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_710(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_1067(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, joaat("WEAPON_UNARMED"), iParam1))
		{
			return true;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1940258.f_38))
			{
				if (WEAPON::_IS_WEAPON_MELEE(Global_1940258.f_38) || Global_1940258.f_38 == joaat("WEAPON_MELEE_KNIFE"))
				{
					if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, Global_1940258.f_38, iParam1))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

float func_1068(var uParam0)
{
	return uParam0->f_28;
}

int func_1069(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("WEAPON_UNARMED");
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

float func_1070(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_1071(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	Global_1951255[iParam0 /*23*/].f_4 = iParam1;
	Global_1951255[iParam0 /*23*/] = iParam4;
	Global_1951255[iParam0 /*23*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1951255[iParam0 /*23*/].f_2 = uParam5;
	Global_1951255[iParam0 /*23*/].f_6 = { vParam6 };
	Global_1951255[iParam0 /*23*/].f_9 = fParam9;
	Global_1951255[iParam0 /*23*/].f_10 = iParam10;
	Global_1951255[iParam0 /*23*/].f_11 = iParam11;
	Global_1951255[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951255[iParam0 /*23*/].f_5 = iParam12;
	Global_1951255[iParam0 /*23*/].f_1 = 2;
	Global_1951255[iParam0 /*23*/].f_17 = -1;
	Global_1951255[iParam0 /*23*/].f_18 = iParam16;
	Global_1951255[iParam0 /*23*/].f_19 = iParam15;
	Global_1951255[iParam0 /*23*/].f_20 = bParam25;
	Global_1951255[iParam0 /*23*/].f_22 = 0f;
	if (bParam25)
	{
		Global_1951255[iParam0 /*23*/].f_21 = MISC::GET_GAME_TIMER();
	}
	else
	{
		Global_1951255[iParam0 /*23*/].f_21 = MISC::_GET_SYSTEM_TIME();
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
	Global_1951255[iParam0 /*23*/].f_3 = iVar0;
	func_954(iParam0, 1);
	func_955(iParam0, 1);
	func_956(iParam0, 128);
}

bool func_1072(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_1083(iParam0))
	{
		return false;
	}
	if (func_1084(iParam0, uParam1, &uVar0))
	{
		func_1085(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_1073(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1086(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 == func_1087())
	{
		return func_1086(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1296859.f_22[iParam1])
	{
		return func_1086(&(Global_1100469[iParam1 /*53*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_1074(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_1075(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_16 != 0 || Global_1572887.f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!Global_1296859.f_22[iVar0])
	{
		func_1088(iParam0);
		return;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_1089(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 1;
}

void func_1076(int iParam0, int iParam1)
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

void func_1077(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_1090(uParam0))
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

var func_1078(var uParam0)
{
	return uParam0->f_27;
}

int func_1079()
{
	return Global_1902818;
}

int func_1080(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_1081(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

bool func_1082()
{
	switch (Global_1940258.f_38)
	{
		case joaat("WEAPON_MELEE_LANTERN"):
		case joaat("WEAPON_KIT_BINOCULARS"):
		case joaat("WEAPON_MELEE_LANTERN_ELECTRIC"):
		case joaat("WEAPON_MELEE_DAVY_LANTERN"):
		case joaat("WEAPON_KIT_BINOCULARS_IMPROVED"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_1083(int iParam0)
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

bool func_1084(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381.f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_1091(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_1085(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_1092(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_1093(iVar0);
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
			uParam2->f_5 = func_1094(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1095(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1096(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_1097(iVar0);
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
	iVar0 = 0;
	uParam1->f_2 = -739728609;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_32 = iVar0;
}

bool func_1086(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_1087()
{
	return Global_1102219.f_3672;
}

void func_1088(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_16 != 0 || Global_1572887.f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] == 0)
	{
		return;
	}
	func_1089(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 0;
}

void func_1089(int iParam0)
{
	if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_1090(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_1091(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("CHALLENGE");
			break;
		case -3:
			iVar0 = 1300413597;
			break;
		case 1:
			iVar0 = joaat("FEATURE");
			break;
		case -2:
			iVar0 = joaat("GOLD");
			break;
		case 2:
			iVar0 = joaat("MISSION_STORY");
			break;
		case 3:
			iVar0 = joaat("MISSION_PROCEDURAL");
			break;
		case 4:
			iVar0 = joaat("MISSION_FETCH");
			break;
		case 5:
			iVar0 = joaat("MISSION_MINIGAME");
			break;
		case 6:
			iVar0 = joaat("MISSION_FREE_MODE_EVENT");
			break;
		case 7:
			iVar0 = joaat("MISSION_UGC");
			break;
		case 8:
			iVar0 = joaat("MISSION_BEAT");
			break;
		case 9:
			iVar0 = joaat("PROPERTY");
			break;
		case 10:
			iVar0 = joaat("RECIPE");
			break;
		case 11:
			iVar0 = joaat("TITLE");
			break;
		case 12:
			iVar0 = joaat("SHOP");
			break;
		case 13:
			iVar0 = joaat("GFH_GIVERS");
			break;
		case 14:
			iVar0 = joaat("GFH_LOCATIONS");
			break;
		case 15:
			iVar0 = 1332629624;
			break;
		case 16:
			iVar0 = 1746212499;
			break;
		case 17:
			iVar0 = joaat("GVO_UNLOCKS");
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

int func_1092(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_1098(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_1093(int iParam0)
{
	switch (iParam0)
	{
		case 1336837986:
			return 0;
		case 2124631622:
			return 1;
		case joaat("ROBBERY_TRAIN"):
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
		case joaat("AMBUSH"):
			return 10;
		case -621956193:
			return 11;
		case joaat("GANG_EVENT_SHOWDOWN"):
			return 12;
		case joaat("GANG_EVENT_IMPROMPTU_RACE"):
			return 13;
		case -867762478:
			return 14;
		case 602097925:
			return 15;
		case joaat("TRAIN_ESCORT"):
			return 16;
		case joaat("IWD_1V1"):
			return 17;
		case joaat("IWD_PVP"):
			return 18;
		case joaat("IWD_PF"):
			return 20;
		case joaat("IWD_PLF"):
			return 21;
		case joaat("IWD_F"):
			return 28;
		case joaat("IWD_INF"):
			return 19;
		case joaat("ASSASSINATION"):
			return 22;
		case joaat("ASSASSINATION_TRACKING"):
			return 23;
		case joaat("ASSASSINATION_PVP_PLAYER"):
			return 24;
		case joaat("ASSASSINATION_PVP_POSSE"):
			return 25;
		case joaat("COACH_HOLDUP_ROBBERY"):
			return 26;
		case joaat("COACH_HOLDUP_KIDNAPPING"):
			return 27;
		case 1518877519:
			return 30;
		default:
			break;
	}
	return -1;
}

int func_1094(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BLACKJACK"):
			return 0;
		case joaat("DOMINOES"):
			return 1;
		case joaat("POKER"):
			return 2;
		case joaat("FILLET"):
			return 3;
		case joaat("MILKING_COW"):
			return 4;
		case joaat("CLEAN_STALLS"):
			return 5;
		case joaat("FENCE_BUILDING"):
			return 6;
		default:
			break;
	}
	return -1;
}

int func_1095(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ARCHERY"):
			return 0;
		case joaat("CHALLENGES"):
			return 1;
		case joaat("DEAD_DROP"):
			return 2;
		case joaat("GOLDEN_HAT"):
			return 3;
		case joaat("HOT_PROPERTY"):
			return 4;
		case joaat("KING_OF_THE_CASTLE"):
			return 5;
		case joaat("KING_OF_THE_RAILS"):
			return 6;
		case joaat("PV_CHALLENGE_HERBALIST"):
			return 15;
		case joaat("PV_CHALLENGE_BIGGEST_FISH"):
			return 16;
		case joaat("PV_CHALLENGE_FLYING_BIRD"):
			return 17;
		case joaat("HUNT_THE_POSSE_LEADER"):
			return 18;
		case joaat("ESCAPED_CONVICTS"):
			return 8;
		case joaat("SUPPLY_TRAIN"):
			return 10;
		case joaat("ROUND_UP"):
			return 9;
		case joaat("WRECKAGE"):
			return 11;
		case joaat("CONDOR_EGG"):
			return 12;
		case -27117790:
			return 13;
		case 1653867545:
			return 14;
		case -142235487:
			return 7;
		default:
			break;
	}
	return -1;
}

int func_1096(int iParam0)
{
	switch (iParam0)
	{
		case joaat("UGC_MAJOR_ID_DBG_VERSUS"):
			return 0;
		case joaat("UGC_MAJOR_ID_DBG_DEATHMATCH"):
			return 1;
		case joaat("UGC_MAJOR_ID_DBG_RACE"):
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
		case joaat("UGC_MAJOR_ID_LBM"):
			return 8;
		case joaat("UGC_MAJOR_ID_MOONSHINE_COOP"):
			return 9;
		case 1039801657:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_1097(int iParam0)
{
	switch (iParam0)
	{
		case joaat("NULL"):
			return -1;
		case joaat("NORMAL"):
			return 0;
		case joaat("INTRO_CHAR"):
			return 1;
		case joaat("INTRO_GENERIC"):
			return 2;
		case 1322114923:
			return 3;
		case joaat("INTRO_FREEMODE"):
			return 4;
		case joaat("INTRO_CLAY2"):
			return 5;
		case joaat("TEAMSTER"):
			return 6;
		case joaat("BOUNTYHUNTER"):
			return 7;
		case joaat("GUNSLINGER"):
			return 8;
		case joaat("OUTLAW"):
			return 9;
		case joaat("HUNTER"):
			return 10;
		case joaat("TRADER"):
			return 11;
		case joaat("COLLECTOR"):
			return 12;
		case joaat("SEASON005"):
			return 13;
		case joaat("VIPSEASON005"):
			return 14;
		case joaat("MOONSHINER"):
			return 15;
		case joaat("SEASON006"):
			return 16;
		case joaat("VIPSEASON006"):
			return 17;
		case 1976336482:
			return 18;
		case -713504854:
			return 19;
		case 753957709:
			return 20;
		case 1054483531:
			return 21;
		case 547199896:
			return 22;
		default:
			break;
	}
	return -1;
}

bool func_1098(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_1099(iParam0, uParam1, &uVar0))
	{
		func_1100(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_1099(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381.f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_1091(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_1100(var uParam0, int iParam1, var uParam2)
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

