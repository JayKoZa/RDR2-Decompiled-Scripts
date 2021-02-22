void __EntryFunction__()
{
	Global_1048624 = -1;
	Global_1048625 = -1;
	Global_1048646 = -1f;
	Global_1049265 = -1;
	Global_1049266 = { -557.7f, -3610.7f, 80.9f };
	Global_1049272 = { 0f, 0f, 0f };
	Global_1049276 = -1;
	Global_1049279 = -1;
	Global_1051212 = -1;
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

