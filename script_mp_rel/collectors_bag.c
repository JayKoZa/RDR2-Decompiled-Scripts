void __EntryFunction__()
{
	int iVar0;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	if (!UIAPPS::_IS_APP_ACTIVE(-76766502))
	{
		iVar0 = UIAPPS::_LAUNCH_APP_BY_HASH(-76766502);
		if (iVar0 != 0)
		{
			func_1();
		}
	}
	while (!func_2())
	{
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	UIAPPS::_CLOSE_APP_BY_HASH(-76766502);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2()
{
	if (func_3(1, 1))
	{
		return 1;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		return 1;
	}
	if (!UIAPPS::_IS_APP_ACTIVE(-76766502))
	{
		return 1;
	}
	return 0;
}

int func_3(bool bParam0, bool bParam1)
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

