void __EntryFunction__()
{
	Global_1048624 = -1;
	Global_1048625 = -1;
	Global_1048646 = -1f;
	Global_1049228 = -1;
	*Global_1049229 = { -557.7f, -3610.7f, 80.9f };
	*Global_1049235 = { 0f, 0f, 0f };
	Global_1049239 = -1;
	Global_1049242 = -1;
	Global_1051162 = -1;
	if (SCRIPTS::_DOES_COMPRESSED_GLOBAL_BLOCK_BUFFER_EXIST(4))
	{
		SCRIPTS::_RESTORE_GLOBAL_BLOCK(4);
	}
	else
	{
		SCRIPTS::_STORE_GLOBAL_BLOCK(4);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

