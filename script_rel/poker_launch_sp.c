#region Local Var
	int iLocal_0 = 0;
	struct<389> Local_1 = { 0, 0, 0, 0, 0, 6, 0, -1, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0 } ;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 11;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	struct<2155> Local_417 = { 0, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 92, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 92, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 92, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 92, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 92, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 92, -1, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 7, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 1082130432, 0, 0 } ;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = -1;
	var uScriptParam_2 = -1;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = -1;
	var uScriptParam_8 = -1;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(546))
	{
		func_1(Local_417.f_2);
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 32)
		{
			func_2(0);
		}
		else
		{
			func_3(&Local_417, 0, 0);
			func_2(1);
		}
	}
	func_4(&Local_417, &uScriptParam_0);
	while (Local_417.f_2154 == 0)
	{
		if (func_5(&Local_417))
		{
			func_2(0);
		}
		BUILTIN::WAIT(0);
	}
	func_2(0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(int iParam0)
{
	int iVar0;

	if (func_6() != -1)
	{
		return;
	}
	if (!func_7(iParam0, &iVar0))
	{
		return;
	}
	if ((Global_1392915->f_121[iVar0 /*20*/])->f_15 == 1)
	{
	}
	(Global_1392915->f_121[iVar0 /*20*/])->f_15 = 0;
}

void func_2(bool bParam0)
{
	func_8(&Local_417, bParam0);
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_3(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (bParam2)
		{
			func_9(uParam0, uParam0->f_106[iVar0 /*29*/], 0);
		}
		else
		{
			func_10(uParam0, uParam0->f_106[iVar0 /*29*/], 0, 1, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1938)
	{
		func_11(uParam0->f_1938[iVar0 /*29*/]);
		iVar0++;
	}
	if (bParam1)
	{
		func_12(uParam0);
	}
	else
	{
		func_13(uParam0, 0);
	}
}

void func_4(var uParam0, var uParam1)
{
	int iVar0;
	char cVar1[64];

	*uParam0 = { *uParam1 };
	if (func_6() == -1)
	{
		func_1(uParam0->f_2);
	}
	StringCopy(&cVar1, func_14(uParam1->f_1), 64);
	StringConCat(&cVar1, "_BlkVol", 64);
	uParam0->f_20 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(uParam1->f_3, 0f, 0f, 0f, 1.5f, 1.5f, 1.5f, &cVar1);
	StringConCat(&cVar1, "_AmbBlockVol", 64);
	uParam0->f_19 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(uParam1->f_3, 0f, 0f, 0f, 2.5f, 2.5f, 2.5f, &cVar1);
	func_15(uParam1->f_3, 1.5f, 0);
	func_16(uParam1->f_3, 2f, 0);
	uParam0->f_22 = PED::_0x4C39C95AE5DB1329(uParam0->f_20, 0, 15);
	POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_20, 10208, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(uParam0->f_19, 266208, 0, 0, -1, -1, 12);
	if (func_17(uParam0->f_2))
	{
		uParam0->f_21 = VOLUME::_0x0EB78C2B156635B1(-432403087, uParam1->f_3, 0f, 0f, 0f, 4f, 4f, 4f);
		VOLUME::_0xBE551C2CC421185D(uParam0->f_21, 1);
		VOLUME::_0x5B23DFF8E0948BB2(uParam0->f_21, 0);
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_95[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_18(uParam0->f_1938[iVar0 /*29*/], iVar0);
		iVar0++;
	}
	func_19(uParam0);
	uParam0->f_104 = func_20(uParam0);
	PED::_0xED9582B3DA8F02B4(uParam0->f_104);
	func_21(uParam0, 0);
}

bool func_5(var uParam0)
{
	int iVar0;
	bool bVar1;

	uParam0->f_15++;
	uParam0->f_2155 = func_22(uParam0->f_8);
	if (uParam0->f_1 == 2)
	{
		bVar1 = (uParam0->f_2155 || func_23(uParam0->f_1));
	}
	else
	{
		bVar1 = uParam0->f_2155;
	}
	uParam0->f_90 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_3, false);
	uParam0->f_91 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_3, true);
	uParam0->f_2156 = 0;
	uParam0->f_2145 = 0;
	uParam0->f_2146 = (uParam0->f_16 && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == uParam0->f_18);
	uParam0->f_2147 = (func_24(uParam0) || uParam0->f_2146);
	uParam0->f_2144 = CAM::IS_SPHERE_VISIBLE(uParam0->f_3, 2f);
	if (func_17(uParam0->f_2))
	{
		uParam0->f_2145 = uParam0->f_91 < 8f;
	}
	else if (uParam0->f_2146)
	{
		uParam0->f_2145 = uParam0->f_91 < 5f;
	}
	if (func_17(uParam0->f_2))
	{
		uParam0->f_2145 = uParam0->f_90 < 8f;
	}
	else if (uParam0->f_2147)
	{
		uParam0->f_2145 = uParam0->f_90 < 5f;
	}
	uParam0->f_103 = 0;
	if (uParam0->f_10 == 13 && func_25(&(uParam0->f_12)) > 2f)
	{
		func_26(uParam0);
		return func_27(uParam0);
	}
	func_28(uParam0);
	if (uParam0->f_10 >= 3)
	{
		func_29(uParam0);
	}
	uParam0->f_103 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if ((uParam0->f_106[iVar0 /*29*/])->f_1 != 0)
		{
			func_30(uParam0, uParam0->f_106[iVar0 /*29*/]);
		}
		iVar0++;
	}
	func_26(uParam0);
	if (uParam0->f_10 == 7 || uParam0->f_10 == 8)
	{
		if (func_31(uParam0, 0))
		{
			func_32(uParam0->f_1, uParam0->f_3, 1073741824 /* Float: 2f */, 0);
			func_1(uParam0->f_2);
			func_21(uParam0, 9);
		}
	}
	if (func_6() == -1)
	{
		if (!func_33(uParam0) || func_34(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			func_1(uParam0->f_2);
		}
		else
		{
			func_35(uParam0->f_2);
		}
	}
	switch (uParam0->f_10)
	{
		case 0:
			if (func_36(uParam0) == 1)
			{
				func_21(uParam0, 1);
			}
			break;
		case 1:
			if (!func_37(uParam0->f_3, 2f))
			{
				func_21(uParam0, 2);
			}
			break;
		case 2:
			if (func_38(uParam0) == 1)
			{
				iVar0 = 0;
				while (iVar0 < 6)
				{
					func_39(uParam0, iVar0);
					iVar0++;
				}
				func_21(uParam0, 3);
			}
			break;
		case 3:
			if (func_40(uParam0) == 1)
			{
				uParam0->f_17 = GRAPHICS::CREATE_TRACKED_POINT();
				if (GRAPHICS::_0xF2FDDCC8C6BAE1B3(uParam0->f_17))
				{
					GRAPHICS::SET_TRACKED_POINT_INFO(uParam0->f_17, uParam0->f_3, 1.5f);
				}
				uParam0->f_2153 = 0f;
				func_21(uParam0, 4);
			}
			break;
		case 4:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				PED::_0x9851DE7AEC10B4E1(uParam0->f_3, 2f, 1, 0);
				func_21(uParam0, 5);
			}
			else if (uParam0->f_103 > 0)
			{
				if (GRAPHICS::_0xF2FDDCC8C6BAE1B3(uParam0->f_17))
				{
					GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_17);
				}
				uParam0->f_17 = 0;
				func_21(uParam0, 6);
			}
			else if (uParam0->f_2 == 9 && uParam0->f_90 > 70f)
			{
				func_21(uParam0, 5);
			}
			else if (uParam0->f_2 == 30 && uParam0->f_90 > 18f)
			{
				func_21(uParam0, 5);
			}
			else if (uParam0->f_90 > uParam0->f_2152)
			{
				if (GRAPHICS::_0xF2FDDCC8C6BAE1B3(uParam0->f_17))
				{
					if (GRAPHICS::IS_TRACKED_POINT_VISIBLE(uParam0->f_17))
					{
						uParam0->f_2153 = 0f;
					}
				}
				else if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(ENTITY::GET_ENTITY_MODEL(Global_35), uParam0->f_3, true))
				{
					uParam0->f_2153 = 0f;
				}
				uParam0->f_2153 = (uParam0->f_2153 + MISC::GET_FRAME_TIME());
				if (uParam0->f_2153 > 1f)
				{
					func_21(uParam0, 5);
				}
				else if (uParam0->f_16 && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != uParam0->f_18)
				{
					func_21(uParam0, 5);
				}
			}
			break;
		case 5:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				func_41(uParam0, iVar0, 0, iVar0);
				iVar0++;
			}
			if (GRAPHICS::_0xF2FDDCC8C6BAE1B3(uParam0->f_17))
			{
				GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_17);
			}
			uParam0->f_17 = 0;
			func_42(uParam0->f_2);
			func_43(uParam0->f_1, 16);
			func_44(uParam0->f_1, 4194304);
			func_21(uParam0, 6);
			break;
		case 6:
			func_45(uParam0->f_2);
			if (uParam0->f_90 < 7f)
			{
				func_46(uParam0);
				func_21(uParam0, 7);
			}
			else if (uParam0->f_90 < 12f && PED::IS_PED_ON_FOOT(Global_35))
			{
				func_46(uParam0);
				func_21(uParam0, 7);
			}
			break;
		case 7:
			if (func_47(uParam0))
			{
				func_48(uParam0->f_2);
				func_21(uParam0, 8);
			}
			break;
		case 8:
			func_49(uParam0);
			if (bVar1 == 0)
			{
				if (uParam0->f_93 == 0)
				{
					func_21(uParam0, 11);
				}
			}
			break;
		case 10:
			PED::SET_PED_RESET_FLAG(Global_35, 184, true);
			if (!bVar1 || func_50() == 7)
			{
				if (uParam0->f_1 == 2)
				{
					if (func_51(uParam0))
					{
						func_52();
						func_21(uParam0, 8);
					}
				}
				else
				{
					func_53(uParam0);
					if (func_51(uParam0))
					{
						func_52();
						func_21(uParam0, 8);
					}
				}
			}
			break;
		case 11:
			func_21(uParam0, 12);
			break;
		case 12:
			func_13(uParam0, 1);
			func_21(uParam0, 13);
			break;
	}
	func_54(uParam0);
	return func_27(uParam0);
}

int func_6()
{
	return Global_1572887->f_12;
}

bool func_7(int iParam0, int iParam1)
{
	*iParam1 = -1;
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return false;
	}
	*iParam1 = &Global_1899528->f_11[iParam0];
	return *iParam1 != -1;
}

void func_8(var uParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;

	func_55(uParam0);
	func_1(uParam0->f_2);
	if (GRAPHICS::_0xF2FDDCC8C6BAE1B3(uParam0->f_17))
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_17);
	}
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_3)))
	{
		INTERIOR::UNPIN_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_3));
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_20))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_22, false);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_20);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_19))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_19);
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			func_56(uParam0, (uParam0->f_106[iVar0 /*29*/])->f_11, 0);
			func_9(uParam0, uParam0->f_106[iVar0 /*29*/], 1);
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			func_57(uParam0, uParam0->f_106[iVar0 /*29*/]);
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_11(uParam0->f_1938[iVar0 /*29*/]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (&uParam0->f_23[iVar0 /*11*/] == 1)
		{
			if (TASK::_0x841475AC96E794D1((uParam0->f_23[iVar0 /*11*/])->f_10))
			{
				TASK::_0x81948DFE4F5A0283((uParam0->f_23[iVar0 /*11*/])->f_10);
			}
		}
		uParam0->f_23[iVar0 /*11*/] = 0;
		(uParam0->f_23[iVar0 /*11*/])->f_10 = 0;
		iVar0++;
	}
	if (!func_22(uParam0->f_8))
	{
		if (uParam0->f_2150)
		{
			sVar1 = func_58(uParam0);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
			{
				AUDIO::_0x531A78D6BF27014B(sVar1);
				uParam0->f_2150 = 0;
			}
		}
	}
	func_12(uParam0);
	PED::_0x7D4E70A67A651C71(uParam0->f_104);
	func_59(uParam0->f_20);
	func_59(uParam0->f_19);
	func_59(uParam0->f_21);
}

void func_9(var uParam0, var uParam1, bool bParam2)
{
	if (*uParam1 == 0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_11))
	{
		func_60(uParam0, uParam1, 1);
		if (func_61(uParam0->f_2) == uParam1->f_11)
		{
			func_62(uParam0->f_2, 0);
		}
		ANIMSCENE::_0xBC781D24AA11F179(uParam1->f_11);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_11, false);
		PED::SET_PED_CONFIG_FLAG(uParam1->f_11, 26, false);
		PED::_0x949B2F9ED2917F5D(uParam1->f_11, 0);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(uParam1->f_11, 319488);
		if (bParam2)
		{
			func_63(&(uParam1->f_11), 1, 0, 1);
		}
	}
	if (uParam1->f_12 != -1)
	{
		uParam0->f_95[uParam1->f_12] = -1;
		MISC::CLEAR_BIT(&(uParam0->f_93), uParam1->f_12);
	}
	uParam0->f_92 = (uParam0->f_92 - 1);
	uParam1->f_1 = 0;
	uParam1->f_20 = 0;
	uParam1->f_14 = 0;
	uParam1->f_13 = -1;
	uParam1->f_11 = 0;
	*uParam1 = 0;
}

void func_10(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (*uParam1 == 0)
	{
		return;
	}
	if (iParam4 == 0)
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_11))
	{
		if (func_61(uParam0->f_2) == uParam1->f_11)
		{
			func_62(uParam0->f_2, 0);
		}
		PED::SET_PED_CONFIG_FLAG(uParam1->f_11, 26, false);
		PED::_0x949B2F9ED2917F5D(uParam1->f_11, 0);
		ANIMSCENE::_0xBC781D24AA11F179(uParam1->f_11);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_11, false);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(uParam1->f_11, 319488);
		if (PED::IS_PED_A_PLAYER(uParam1->f_11))
		{
			PED::SET_PED_LEG_IK_MODE(uParam1->f_11, 2);
		}
		else
		{
			PED::SET_PED_LEG_IK_MODE(uParam1->f_11, 1);
		}
		if (iParam2 == 0)
		{
			if (bParam5)
			{
				func_63(&(uParam1->f_11), bParam3, 0, 1);
			}
		}
		else
		{
			uParam0->f_105 = (uParam0->f_105 - 1);
			func_64(&(uParam1->f_11));
		}
	}
	if (uParam1->f_12 != -1)
	{
		uParam0->f_95[uParam1->f_12] = -1;
		MISC::CLEAR_BIT(&(uParam0->f_93), uParam1->f_12);
	}
	uParam0->f_92 = (uParam0->f_92 - 1);
	uParam1->f_1 = 0;
	uParam1->f_20 = 0;
	uParam1->f_14 = 0;
	uParam1->f_13 = -1;
	uParam1->f_11 = 0;
	*uParam1 = 0;
}

void func_11(var uParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_1))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1);
	}
	func_18(uParam0, uParam0->f_28);
}

void func_12(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 69)
	{
		if (&uParam0->f_281[iVar0 /*24*/] != 0)
		{
			func_65(uParam0, iVar0);
		}
		iVar0++;
	}
}

void func_13(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 69)
	{
		if (&uParam0->f_281[iVar0 /*24*/] != 0)
		{
			func_66(uParam0, iVar0, bParam1);
		}
		iVar0++;
	}
}

char* func_14(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJACK";
		case 1:
			return "MG_DOMIN";
		case 2:
			return "MG_POKER";
		case 3:
			return "MG_FILLET";
		case 4:
			return "MG_MILKING_COW";
		case 5:
			return "MG_CLEAN_STALLS";
		case 6:
			return "MG_FENCE_BUILDING";
	}
	return "Unknown Minigame";
}

void func_15(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 1;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_16(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;

	iVar0 = 512;
	if (iParam4 & 1 != 0)
	{
		iVar0 |= 524288;
	}
	if (iParam4 & 2 != 0)
	{
		iVar0 |= 1536;
	}
	if (iParam4 & 4 != 0)
	{
		iVar0 |= 2560;
	}
	if (iParam4 & 8 != 0)
	{
		iVar0 |= 4608;
	}
	if (iParam4 & 16 != 0)
	{
		iVar0 |= 8704;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

int func_17(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 9:
		case 11:
		case 17:
		case 20:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_18(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_2 = 0f;
	uParam0->f_1 = -1;
	uParam0->f_3 = 0;
	StringCopy(&(uParam0->f_20), "", 64);
	StringCopy(&(uParam0->f_12), "", 64);
	StringCopy(&(uParam0->f_4), "", 64);
	uParam0->f_28 = iParam1;
}

void func_19(var uParam0)
{
	func_67(uParam0, -55367021, 0);
	switch (func_68())
	{
		case 38:
			iLocal_0 = 0;
			break;
		case 8:
			iLocal_0 = 2;
			break;
		case 105:
			iLocal_0 = 3;
			break;
		case 75:
			iLocal_0 = 4;
			break;
		case 5:
			iLocal_0 = 5;
			break;
		case 76:
			iLocal_0 = 7;
			break;
		case 92:
			iLocal_0 = 8;
			break;
		case 115:
			iLocal_0 = 6;
			break;
		default:
			iLocal_0 = 1;
			break;
	}
	if (func_68() == 75)
	{
		func_69(-1014145132);
	}
	func_70(uParam0);
	if (func_68() == 75)
	{
		func_71(uParam0, 0, 0);
	}
	func_72(&Local_1);
}

int func_20(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!MISC::IS_BIT_SET(uParam0->f_94, iVar0) && !MISC::IS_BIT_SET(uParam0->f_93, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_21(var uParam0, int iParam1)
{
	if (uParam0->f_10 != iParam1)
	{
	}
	uParam0->f_10 = iParam1;
	uParam0->f_11 = 0;
	func_73(&(uParam0->f_12));
}

bool func_22(int iParam0)
{
	int iVar0;

	iVar0 = func_74(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_23(int iParam0)
{
	int iVar0;

	iVar0 = func_75(iParam0, 0);
	return SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iVar0) > 0;
}

int func_24(var uParam0)
{
	if (uParam0->f_2146)
	{
		return 1;
	}
	switch (uParam0->f_2)
	{
		case 2:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 2955.036f, 523.2607f, 41.28577f, 2926.294f, 522.7525f, 56.23881f, 18.5f, false, true, 0);
		case 0:
		case 23:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, -803.2272f, -1319.447f, 42.55078f, -834.1096f, -1319.633f, 50.82779f, 19.75f, false, true, 0);
		case 32:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, -306.259f, 792.0828f, 116.4818f, -312.7949f, 826.4695f, 126.7013f, 19.75f, false, true, 0);
		case 27:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 2644.131f, -1227.63f, 52.23838f, 2622.243f, -1227.719f, 85.54826f, 18f, false, true, 0);
		default:
			break;
	}
	return 0;
}

float func_25(var uParam0)
{
	if (!func_76(uParam0))
	{
		return 0f;
	}
	if (func_77(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_78() - uParam0->f_1);
}

void func_26(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (&uParam0->f_1938[iVar0 /*29*/] == 2)
		{
			func_79(uParam0->f_1938[iVar0 /*29*/], 0);
			Jump @124; //curOff = 42
		}
		else if (&uParam0->f_1938[iVar0 /*29*/] == 5)
		{
			(uParam0->f_1938[iVar0 /*29*/])->f_2 = ANIMSCENE::_0x3FBC3F51BF12DFBF((uParam0->f_1938[iVar0 /*29*/])->f_1);
			Jump @124; //curOff = 87
		}
		else if (&uParam0->f_1938[iVar0 /*29*/] == 3)
		{
			func_80(uParam0, (uParam0->f_1938[iVar0 /*29*/])->f_28, 1);
		}
		iVar0++;
	}
}

int func_27(var uParam0)
{
	int iVar0;
	float fVar1;

	fVar1 = func_81(uParam0->f_1);
	if (uParam0->f_9 != 0f)
	{
		fVar1 = uParam0->f_9;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || Global_1935630->f_22)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			func_1(uParam0->f_2);
			return 1;
		}
		return 0;
	}
	if (Global_1394141->f_1328)
	{
		func_1(uParam0->f_2);
		return 1;
	}
	if (func_82(uParam0->f_1, 262144))
	{
		func_12(uParam0);
		func_3(uParam0, 1, 0);
		return 1;
	}
	if (!func_83(uParam0->f_1))
	{
		func_1(uParam0->f_2);
		return 1;
	}
	if (uParam0->f_7 != -1)
	{
		if (func_84(uParam0->f_7, 4194304))
		{
			func_1(uParam0->f_2);
			return 1;
		}
		if (func_68() != uParam0->f_7)
		{
			func_1(uParam0->f_2);
			return 1;
		}
	}
	if (!func_85(uParam0->f_8) && !func_22(uParam0->f_8))
	{
		func_1(uParam0->f_2);
		return 1;
	}
	if ((uParam0->f_1 == 2 && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(19547436) == 0) || uParam0->f_1 != 2)
	{
		if (uParam0->f_90 > fVar1)
		{
			func_12(uParam0);
			iVar0 = 0;
			while (iVar0 < 6)
			{
				func_9(uParam0, uParam0->f_106[iVar0 /*29*/], 1);
				iVar0++;
			}
			func_1(uParam0->f_2);
			return 1;
		}
	}
	if (!uParam0->f_2155)
	{
		if (func_86())
		{
			if (!func_87(uParam0->f_2))
			{
				if (func_88())
				{
					if (uParam0->f_2 == 0 && SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME() == 1121120602)
					{
						return 0;
					}
					if (uParam0->f_90 < 10f)
					{
						func_3(uParam0, 1, 1);
					}
					return 1;
				}
				else if (func_89(269, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_28(var uParam0)
{
	char* sVar0;

	if ((MISC::GET_FRAME_COUNT() % 25) != 0)
	{
		return;
	}
	if (uParam0->f_90 < 15f)
	{
		if (uParam0->f_2150 == 0)
		{
			sVar0 = func_58(uParam0);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				return;
			}
			AUDIO::_0xD9130842D7226045(sVar0, 1);
			uParam0->f_2150 = 1;
		}
		return;
	}
	if (uParam0->f_90 > 25f)
	{
		if (uParam0->f_2150)
		{
			sVar0 = func_58(uParam0);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				return;
			}
			AUDIO::_0x531A78D6BF27014B(sVar0);
			uParam0->f_2150 = 0;
		}
	}
}

void func_29(var uParam0)
{
	int iVar0;
	float fVar1;

	if (uParam0->f_10 == 13)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 69)
	{
		if (&uParam0->f_281[iVar0 /*24*/] == 5 && (uParam0->f_281[iVar0 /*24*/])->f_22 == 0f)
		{
			Jump @1049; //curOff = 59
		}
		else if (&uParam0->f_281[iVar0 /*24*/] == 1)
		{
			if (MISC::GET_FRAME_COUNT() > (uParam0->f_281[iVar0 /*24*/])->f_2)
			{
				uParam0->f_281[iVar0 /*24*/] = 2;
			}
			Jump @1049; //curOff = 106
		}
		else if (&uParam0->f_281[iVar0 /*24*/] == 2)
		{
			STREAMING::REQUEST_MODEL((uParam0->f_281[iVar0 /*24*/])->f_1, false);
			if (STREAMING::HAS_MODEL_LOADED((uParam0->f_281[iVar0 /*24*/])->f_1))
			{
				if (func_90((uParam0->f_281[iVar0 /*24*/])->f_16))
				{
					(uParam0->f_281[iVar0 /*24*/])->f_16 = { uParam0->f_3 - Vector(0.1f, 0f, 0f) };
				}
				(uParam0->f_281[iVar0 /*24*/])->f_23 = 255f;
				(uParam0->f_281[iVar0 /*24*/])->f_4 = OBJECT::CREATE_OBJECT_NO_OFFSET((uParam0->f_281[iVar0 /*24*/])->f_1, (uParam0->f_281[iVar0 /*24*/])->f_16, false, true, false, false);
				ENTITY::SET_ENTITY_ROTATION((uParam0->f_281[iVar0 /*24*/])->f_4, (uParam0->f_281[iVar0 /*24*/])->f_19, 2, true);
				uParam0->f_281[iVar0 /*24*/] = 5;
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((uParam0->f_281[iVar0 /*24*/])->f_1);
				if ((uParam0->f_281[iVar0 /*24*/])->f_13)
				{
					ENTITY::SET_ENTITY_VISIBLE((uParam0->f_281[iVar0 /*24*/])->f_4, false);
				}
				if (!DECORATOR::DECOR_EXIST_ON((uParam0->f_281[iVar0 /*24*/])->f_4, "MinigameObject"))
				{
					DECORATOR::DECOR_SET_BOOL((uParam0->f_281[iVar0 /*24*/])->f_4, "MinigameObject", true);
				}
			}
			Jump @1049; //curOff = 392
		}
		else if (&uParam0->f_281[iVar0 /*24*/] == 4)
		{
			STREAMING::REQUEST_MODEL((uParam0->f_281[iVar0 /*24*/])->f_1, false);
			if (STREAMING::HAS_MODEL_LOADED((uParam0->f_281[iVar0 /*24*/])->f_1))
			{
				if (ENTITY::DOES_ENTITY_EXIST((uParam0->f_281[iVar0 /*24*/])->f_4))
				{
					(uParam0->f_281[iVar0 /*24*/])->f_16 = { ENTITY::GET_ENTITY_COORDS((uParam0->f_281[iVar0 /*24*/])->f_4, true, false) };
					(uParam0->f_281[iVar0 /*24*/])->f_19 = { ENTITY::GET_ENTITY_ROTATION((uParam0->f_281[iVar0 /*24*/])->f_4, 2) };
					func_91(&((uParam0->f_281[iVar0 /*24*/])->f_4));
				}
				if (func_90((uParam0->f_281[iVar0 /*24*/])->f_16))
				{
					(uParam0->f_281[iVar0 /*24*/])->f_16 = { uParam0->f_3 - Vector(0.1f, 0f, 0f) };
				}
				(uParam0->f_281[iVar0 /*24*/])->f_4 = OBJECT::CREATE_OBJECT_NO_OFFSET((uParam0->f_281[iVar0 /*24*/])->f_1, (uParam0->f_281[iVar0 /*24*/])->f_16, false, true, false, false);
				ENTITY::SET_ENTITY_ROTATION((uParam0->f_281[iVar0 /*24*/])->f_4, (uParam0->f_281[iVar0 /*24*/])->f_19, 2, true);
				uParam0->f_281[iVar0 /*24*/] = 5;
				(uParam0->f_281[iVar0 /*24*/])->f_23 = 255f;
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((uParam0->f_281[iVar0 /*24*/])->f_1);
				if ((uParam0->f_281[iVar0 /*24*/])->f_13)
				{
					ENTITY::SET_ENTITY_VISIBLE((uParam0->f_281[iVar0 /*24*/])->f_4, false);
				}
				if (!DECORATOR::DECOR_EXIST_ON((uParam0->f_281[iVar0 /*24*/])->f_4, "MinigameObject"))
				{
					DECORATOR::DECOR_SET_BOOL((uParam0->f_281[iVar0 /*24*/])->f_4, "MinigameObject", true);
				}
			}
			Jump @1049; //curOff = 770
		}
		else if (&uParam0->f_281[iVar0 /*24*/] == 5 && (uParam0->f_281[iVar0 /*24*/])->f_22 != 0f)
		{
			if (ENTITY::DOES_ENTITY_EXIST((uParam0->f_281[iVar0 /*24*/])->f_4))
			{
				fVar1 = (MISC::GET_FRAME_TIME() / (uParam0->f_281[iVar0 /*24*/])->f_22);
				(uParam0->f_281[iVar0 /*24*/])->f_23 = ((uParam0->f_281[iVar0 /*24*/])->f_23 + (fVar1 * 255f));
				if ((uParam0->f_281[iVar0 /*24*/])->f_23 <= 0f)
				{
					func_65(uParam0, iVar0);
				}
				else if ((uParam0->f_281[iVar0 /*24*/])->f_23 >= 255f)
				{
					(uParam0->f_281[iVar0 /*24*/])->f_23 = 255f;
					ENTITY::RESET_ENTITY_ALPHA((uParam0->f_281[iVar0 /*24*/])->f_4);
					(uParam0->f_281[iVar0 /*24*/])->f_22 = 0f;
				}
				else if ((uParam0->f_281[iVar0 /*24*/])->f_22 < 0f)
				{
					ENTITY::SET_ENTITY_ALPHA((uParam0->f_281[iVar0 /*24*/])->f_4, BUILTIN::FLOOR((uParam0->f_281[iVar0 /*24*/])->f_23), true);
				}
				else
				{
					ENTITY::SET_ENTITY_ALPHA((uParam0->f_281[iVar0 /*24*/])->f_4, BUILTIN::CEIL((uParam0->f_281[iVar0 /*24*/])->f_23), true);
				}
			}
		}
		iVar0++;
	}
}

void func_30(var uParam0, var uParam1)
{
	var uVar0;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;

	uVar0 = 6;
	iVar11 = 0;
	if (uParam1->f_1 == 0)
	{
		return;
	}
	if (uParam1->f_1 > 1)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam1->f_11))
		{
			func_10(uParam0, uParam1, 0, 1, 0, 1);
			return;
		}
		uParam1->f_16 = ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uParam1->f_11, -1);
		PED::SET_PED_RESET_FLAG(uParam1->f_11, 49, true);
	}
	switch (uParam1->f_1)
	{
		case 1:
			STREAMING::REQUEST_MODEL(uParam1->f_2, false);
			if ((STREAMING::HAS_MODEL_LOADED(uParam1->f_2) && MISC::GET_FRAME_COUNT() > uParam1->f_17) && !uParam0->f_2156)
			{
				uParam1->f_11 = func_92(uParam1->f_2, uParam1->f_7, uParam1->f_10, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				ENTITY::SET_ENTITY_HEADING(uParam1->f_11, uParam1->f_10);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam1->f_2);
				uParam1->f_12 = -1;
				func_93(uParam1->f_11, 0);
				iVar8 = -1;
				if ((uParam0->f_1 == 2 || (uParam0->f_1 == 0 && uParam1->f_13 != 4)) || uParam0->f_1 == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_11))
					{
						iVar8 = func_95(uParam0->f_1, func_94(uParam0));
						iVar11 = func_96(uParam1->f_11, uParam0->f_1, uParam0->f_7, iVar8);
					}
				}
				func_97(uParam0, &uVar0, &iVar7);
				if ((uParam0->f_1 == 1 || uParam0->f_1 == 0) || uParam0->f_1 == 2)
				{
					if (func_98(uParam1->f_11, uParam0->f_1, iVar11, &uVar0, iVar7, &iVar9))
					{
						AUDIO::SET_AMBIENT_VOICE_NAME(uParam1->f_11, func_99(iVar9));
					}
					else if (func_100(uParam1->f_11, uParam0->f_1, &uVar0, iVar7, &iVar9))
					{
						AUDIO::SET_AMBIENT_VOICE_NAME(uParam1->f_11, func_99(iVar9));
					}
					else
					{
						iVar9 = 92;
					}
				}
				else if (func_100(uParam1->f_11, uParam0->f_1, &uVar0, iVar7, &iVar9))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(uParam1->f_11, func_99(iVar9));
				}
				else
				{
					iVar9 = 92;
				}
				func_101(uParam0, uParam1, uParam1->f_11, uParam1->f_13, uParam1->f_15, 1, iVar8, iVar9);
				if (uParam1->f_15 && uParam1->f_12 != -1)
				{
					if (TASK::_0x841475AC96E794D1((uParam0->f_23[uParam1->f_12 /*11*/])->f_10))
					{
						TASK::_TASK_USE_SCENARIO_POINT(uParam1->f_11, (uParam0->f_23[uParam1->f_12 /*11*/])->f_10, &((uParam0->f_23[uParam1->f_12 /*11*/])->f_2), 0, 0, 1, 0, 0, -1082130432, 0);
					}
				}
				uParam0->f_2156 = 1;
			}
			break;
		case 3:
			func_102(uParam0, uParam1);
			break;
		case 4:
			if (func_103(uParam0, uParam1) == 1)
			{
				uParam1->f_14 = 0;
				func_104(uParam1, 5);
			}
			break;
		case 5:
			uParam0->f_103++;
			if (!PED::IS_PED_INJURED(uParam1->f_11))
			{
				PED::SET_PED_CAN_LEG_IK(uParam1->f_11, false);
			}
			bVar10 = func_105(uParam1);
			if (uParam1->f_14 && !bVar10)
			{
				func_106(uParam0, uParam1, 0);
			}
			else
			{
				func_107(uParam0, uParam1);
			}
			uParam1->f_14 = bVar10;
			break;
		case 6:
			func_108(uParam0, uParam1);
			break;
		case 7:
			if (!PED::IS_PED_USING_ANY_SCENARIO(uParam1->f_11) || TASK::_0x0C3CB2E600C8977D(uParam1->f_11, 0))
			{
				ANIMSCENE::_0xBC781D24AA11F179(uParam1->f_11);
				func_10(uParam0, uParam1, 0, 1, 0, 1);
			}
			break;
	}
}

bool func_31(var uParam0, int iParam1)
{
	float fVar0;

	fVar0 = 1.5f;
	if (uParam0->f_1 == 2 || uParam0->f_1 == 0)
	{
		fVar0 = 2.5f;
	}
	return func_109(uParam0->f_3, fVar0, iParam1);
}

void func_32(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar4 = 0;
	func_110(&uVar0, vParam1, 0f, 0f, 0f, fParam4, fParam4, fParam4);
	if (!VOLUME::_DOES_VOLUME_EXIST(uVar0))
	{
		return;
	}
	iVar5 = ITEMSET::CREATE_ITEMSET(true);
	if (ITEMSET::IS_ITEMSET_VALID(iVar5))
	{
		iVar2 = ENTITY::_0x886171A12F400B89(uVar0, iVar5, 3);
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			iVar1 = MISC::_0x18013392501CE5DC(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar5));
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (func_111(iParam0, ENTITY::GET_ENTITY_MODEL(iVar1)))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar1))
					{
						if ((func_6() != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1)) || func_6() == -1)
						{
							iVar4++;
							if (iParam5 == 1 && ENTITY::IS_ENTITY_UPRIGHT(iVar1, 90f))
							{
								ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
								ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar1, false);
							}
							else
							{
								ENTITY::FREEZE_ENTITY_POSITION(iVar1, false);
								ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar1, true);
							}
						}
					}
				}
			}
			iVar3++;
		}
		ITEMSET::_0x20A4BF0E09BEE146(iVar5);
		ITEMSET::DESTROY_ITEMSET(iVar5);
	}
	if (iVar4 > 0)
	{
	}
	func_59(uVar0);
}

int func_33(var uParam0)
{
	int iVar0;

	if (uParam0->f_1 == 0)
	{
		return func_112(uParam0, 4);
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_112(uParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_34(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_113(bParam1, bParam2, bParam3);
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

void func_35(int iParam0)
{
	int iVar0;

	if (func_6() != -1)
	{
		return;
	}
	if (!func_7(iParam0, &iVar0))
	{
		return;
	}
	if ((Global_1392915->f_121[iVar0 /*20*/])->f_15 == 0)
	{
		(Global_1392915->f_121[iVar0 /*20*/])->f_15 = 1;
	}
}

int func_36(var uParam0)
{
	switch (uParam0->f_11)
	{
		case 0:
			if (func_17(uParam0->f_2))
			{
				return 1;
			}
			if (func_114())
			{
				return 0;
			}
			if (!INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_3)))
			{
				return 1;
			}
			uParam0->f_18 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_3);
			INTERIOR::PIN_INTERIOR_IN_MEMORY(uParam0->f_18);
			uParam0->f_16 = 1;
			func_115(uParam0);
			break;
		case 1:
			if (INTERIOR::IS_INTERIOR_READY(uParam0->f_18))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_37(vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		return 0;
	}
	vParam0.f_2 = (vParam0.z + 0.9f);
	func_116(&uVar2, vParam0, 0f, 0f, 0f, fParam3, fParam3, 1.8f);
	iVar3 = ENTITY::_0x886171A12F400B89(uVar2, iVar1, 1);
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		iVar0 = MISC::_0x3FFB15534067DCD4(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar1));
		if (ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (PED::_0x79443D56C8DF45EE(iVar0) != Global_35)
			{
				func_59(uVar2);
				ITEMSET::_0x20A4BF0E09BEE146(iVar1);
				ITEMSET::DESTROY_ITEMSET(iVar1);
				return 1;
			}
		}
		iVar4++;
	}
	func_59(uVar2);
	ITEMSET::_0x20A4BF0E09BEE146(iVar1);
	ITEMSET::DESTROY_ITEMSET(iVar1);
	return 0;
}

int func_38(var uParam0)
{
	func_53(uParam0);
	func_32(uParam0->f_1, uParam0->f_3, 3f, 1);
	return 1;
}

void func_39(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	var uVar8;
	int iVar9;

	iVar9 = func_117(uParam0->f_1, uParam0->f_3, uParam0->f_6, iParam1, 1051931443 /* Float: 0.35f */);
	func_118(uParam0->f_1, uParam0->f_3, uParam0->f_6, iParam1, &vVar0, &fVar6);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar9))
	{
		MISC::SET_BIT(&(uParam0->f_94), iParam1);
		return;
	}
	uVar8 = TASK::_0xF533D68FF970D190(vVar0, (uParam0->f_23[iParam1 /*11*/])->f_1, 0.5f, 0, 0);
	if (TASK::_0x841475AC96E794D1(uVar8))
	{
		(uParam0->f_23[iParam1 /*11*/])->f_10 = uVar8;
		uParam0->f_23[iParam1 /*11*/] = 0;
		vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar9, vVar0) };
		fVar7 = (ENTITY::GET_ENTITY_HEADING(iVar9) - fVar6);
		TASK::_0x2056AB38DF06825C(uVar8, vVar3, 0);
		TASK::_0xD3A0DA8F91612C6E(uVar8, fVar7, 0);
		return;
	}
	if (uParam0->f_1 == 2)
	{
		uVar8 = TASK::_0xF533D68FF970D190(vVar0, -2043611403, 0.5f, 0, 0);
		if (TASK::_0x841475AC96E794D1(uVar8))
		{
			(uParam0->f_23[iParam1 /*11*/])->f_10 = uVar8;
			uParam0->f_23[iParam1 /*11*/] = 0;
			vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar9, vVar0) };
			fVar7 = (ENTITY::GET_ENTITY_HEADING(iVar9) - fVar6);
			TASK::_0x2056AB38DF06825C(uVar8, vVar3, 0);
			TASK::_0xD3A0DA8F91612C6E(uVar8, fVar7, 0);
			return;
		}
	}
	if (!TASK::_0x841475AC96E794D1((uParam0->f_23[iParam1 /*11*/])->f_10))
	{
		vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar9, vVar0) };
		fVar7 = (ENTITY::GET_ENTITY_HEADING(iVar9) - fVar6);
		(uParam0->f_23[iParam1 /*11*/])->f_10 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(iVar9, (uParam0->f_23[iParam1 /*11*/])->f_1, vVar3, fVar7, 0, 0, 0);
		uParam0->f_23[iParam1 /*11*/] = 1;
		if (TASK::_0x841475AC96E794D1((uParam0->f_23[iParam1 /*11*/])->f_10))
		{
		}
	}
}

int func_40(var uParam0)
{
	switch (uParam0->f_11)
	{
		case 0:
			func_119(uParam0);
			func_115(uParam0);
			break;
		case 1:
			func_119(uParam0);
			if (!func_120(uParam0))
			{
				return 2;
			}
			func_115(uParam0);
			break;
		case 2:
			if (PED::_0x5C16855277819BBF() < uParam0->f_104)
			{
				return 2;
			}
			func_115(uParam0);
			break;
		case 3:
			return 1;
	}
	return 0;
}

int func_41(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_10(uParam0, uParam0->f_106[iParam1 /*29*/], 1, 1, 0, 1);
	if (MISC::IS_BIT_SET(uParam0->f_94, iParam1))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		iParam2 = func_121(uParam0->f_1, uParam0->f_7, -1);
	}
	if (uParam0->f_1 == 0 && iParam1 == 4)
	{
		iParam2 = func_122(uParam0->f_7);
	}
	(uParam0->f_106[iParam1 /*29*/])->f_2 = iParam2;
	func_123(uParam0->f_1, uParam0->f_3, uParam0->f_6, iParam1, 0f, -MISC::GET_RANDOM_FLOAT_IN_RANGE(0.25f, 1.25f), 0f, &((uParam0->f_106[iParam1 /*29*/])->f_7), 0);
	(uParam0->f_106[iParam1 /*29*/])->f_7.f_2 = (uParam0->f_3.f_2 - 0.5f);
	func_124(uParam0->f_1, uParam0->f_6, iParam1, &((uParam0->f_106[iParam1 /*29*/])->f_10));
	(uParam0->f_106[iParam1 /*29*/])->f_13 = iParam1;
	(uParam0->f_106[iParam1 /*29*/])->f_15 = 1;
	(uParam0->f_106[iParam1 /*29*/])->f_12 = iParam1;
	uParam0->f_95[iParam1] = iParam1;
	uParam0->f_105++;
	MISC::SET_BIT(&(uParam0->f_93), iParam1);
	func_104(uParam0->f_106[iParam1 /*29*/], 1);
	if (iParam3 > 0)
	{
		(uParam0->f_106[iParam1 /*29*/])->f_17 = (MISC::GET_FRAME_COUNT() + iParam3);
	}
	return 1;
}

int func_42(int iParam0)
{
	int iVar0;

	if (func_6() != -1)
	{
		return 1;
	}
	if (!func_7(iParam0, &iVar0))
	{
		return 0;
	}
	if (((*Global_1392915)[iVar0 /*12*/])->f_1 == 3 && Global_1900325->f_24 == 0)
	{
		(Global_1392915->f_121[iVar0 /*20*/])->f_15 = 1;
	}
	return (Global_1392915->f_121[iVar0 /*20*/])->f_15;
}

void func_43(int iParam0, int iParam1)
{
	if (func_82(iParam0, iParam1))
	{
	}
	Global_1899528->f_3[iParam0] = (&Global_1899528->f_3[iParam0] - (Global_1899528->f_3[iParam0] && iParam1));
}

void func_44(int iParam0, int iParam1)
{
	if (!func_82(iParam0, iParam1))
	{
	}
	Global_1899528->f_3[iParam0] = (Global_1899528->f_3[iParam0] || iParam1);
}

void func_45(int iParam0)
{
	int iVar0;

	if (func_6() != -1)
	{
		return;
	}
	if (!func_7(iParam0, &iVar0))
	{
		return;
	}
	if ((Global_1392915->f_121[iVar0 /*20*/])->f_16 == 0)
	{
		(Global_1392915->f_121[iVar0 /*20*/])->f_16 = 1;
	}
}

void func_46(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;

	if (Local_1.f_378 != -1)
	{
		func_125(uParam0, Local_1.f_378);
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_106)
	{
		if (func_112(uParam0, iVar1))
		{
			iVar0 = func_126(iVar1);
			func_127(uParam0, iVar1, 0, &vVar5, &vVar2, 0, 1);
			func_129(uParam0, iVar0, func_128(), vVar5, vVar2, iVar1, 1);
			func_130(uParam0, iVar1, (Local_1.f_5[iVar1 /*62*/])->f_59, 1);
		}
		iVar1++;
	}
	func_131(uParam0, 30, 0, 1, 1);
	func_131(uParam0, 31, 0, 2, 1);
}

int func_47(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 69)
	{
		if (&uParam0->f_281[iVar0 /*24*/] != 0 && &uParam0->f_281[iVar0 /*24*/] != 5)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_48(int iParam0)
{
	int iVar0;

	if (func_6() != -1)
	{
		return;
	}
	if (!func_7(iParam0, &iVar0))
	{
		return;
	}
	if ((Global_1392915->f_121[iVar0 /*20*/])->f_16 == 1)
	{
	}
	(Global_1392915->f_121[iVar0 /*20*/])->f_16 = 0;
}

void func_49(var uParam0)
{
	int iVar0;

	if (!func_132(uParam0, Local_1.f_378))
	{
		Local_1.f_378 = (Local_1.f_378 + 1 % 6);
	}
	if (Local_1 < 14)
	{
		if (uParam0->f_2155)
		{
			func_133(&Local_1, 14);
		}
	}
	if (uParam0->f_2151 == 1)
	{
		func_133(&Local_1, 13);
		uParam0->f_2151 = 0;
	}
	if (Local_1 == 14)
	{
		func_134(&Local_1, uParam0);
	}
	if (func_135(uParam0, 5) < 2)
	{
		return;
	}
	if (uParam0->f_2145)
	{
		func_136(uParam0, &Local_1);
	}
	switch (Local_1)
	{
		case 0:
			func_133(&Local_1, 1);
			break;
		case 1:
			if (!func_132(uParam0, Local_1.f_378))
			{
				Local_1.f_378 = (Local_1.f_378 + 1 % 6);
				return;
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				(Local_1.f_5[iVar0 /*62*/])->f_58 = 0;
				if (func_132(uParam0, iVar0))
				{
					func_130(uParam0, iVar0, (Local_1.f_5[iVar0 /*62*/])->f_59, 1);
				}
				iVar0++;
			}
			Local_1.f_385 = func_137(uParam0, Local_1.f_378);
			if (Local_1.f_385 != -1)
			{
				func_138(Local_1.f_5[Local_1.f_385 /*62*/], 5, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), 0);
			}
			func_125(uParam0, Local_1.f_378);
			func_133(&Local_1, 3);
			break;
		case 3:
			if (!func_132(uParam0, Local_1.f_385))
			{
				Local_1.f_385 = func_137(uParam0, Local_1.f_378);
				return;
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_132(uParam0, iVar0) && iVar0 != Local_1.f_385)
				{
					func_138(Local_1.f_5[iVar0 /*62*/], 1, 0, 0);
				}
				iVar0++;
			}
			func_138(Local_1.f_5[Local_1.f_385 /*62*/], 5, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), 0);
			func_133(&Local_1, 4);
			break;
		case 4:
			Local_1.f_384 = func_137(uParam0, Local_1.f_385);
			if (!func_132(uParam0, Local_1.f_384))
			{
				Local_1.f_384 = func_137(uParam0, Local_1.f_385);
				return;
			}
			func_138(Local_1.f_5[Local_1.f_384 /*62*/], 5, MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 3f), 0);
			func_133(&Local_1, 5);
			break;
		case 5:
			if (!func_139(uParam0, Local_1.f_5[Local_1.f_385 /*62*/]))
			{
				return;
			}
			if (!func_139(uParam0, Local_1.f_5[Local_1.f_384 /*62*/]))
			{
				return;
			}
			func_138(Local_1.f_5[Local_1.f_378 /*62*/], 2, 0, 0);
			func_133(&Local_1, 6);
			break;
		case 6:
			if (func_139(uParam0, Local_1.f_5[Local_1.f_378 /*62*/]))
			{
				Local_1.f_387 = func_137(uParam0, Local_1.f_384);
				if (Local_1.f_387 != -1)
				{
					func_133(&Local_1, 7);
				}
			}
			break;
		case 7:
			if (func_140(&Local_1, uParam0))
			{
				func_133(&Local_1, 8);
			}
			break;
		case 8:
			if (func_141(&Local_1, uParam0))
			{
				func_133(&Local_1, 9);
			}
			break;
		case 9:
			if (func_142(&Local_1, uParam0))
			{
				func_133(&Local_1, 10);
			}
			break;
		case 10:
			if (func_143(&Local_1, uParam0))
			{
				func_133(&Local_1, 11);
			}
			break;
		case 11:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_144(uParam0, &Local_1, iVar0))
				{
					if (!func_139(uParam0, Local_1.f_5[iVar0 /*62*/]))
					{
						return;
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_144(uParam0, &Local_1, iVar0))
				{
					func_138(Local_1.f_5[iVar0 /*62*/], 12, 0, 0);
				}
				iVar0++;
			}
			func_133(&Local_1, 12);
			break;
		case 12:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_144(uParam0, &Local_1, iVar0))
				{
					if (!func_139(uParam0, Local_1.f_5[iVar0 /*62*/]))
					{
						return;
					}
				}
				iVar0++;
			}
			func_138(Local_1.f_5[Local_1.f_388 /*62*/], 17, 0, 0);
			func_133(&Local_1, 13);
			break;
		case 13:
			if (func_145(&Local_1, uParam0))
			{
				func_133(&Local_1, 1);
			}
			break;
	}
}

int func_50()
{
	return Global_1899528->f_61;
}

int func_51(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	int iVar8;

	if (func_68() == 75)
	{
		func_146(-1983417035, 1);
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar3 = func_147(uParam0->f_1, iVar0, &uVar5, &uVar6, &iVar7, &iVar8);
		if (!ENTITY::IS_ENTITY_DEAD(iVar3))
		{
			(Local_1.f_5[iVar0 /*62*/])->f_59 = uVar5;
			iVar1 = 0;
			while (iVar1 < 4)
			{
				iVar2 = ((0 + iVar0 * 4) + iVar1);
				iVar4 = func_148(uParam0->f_1, iVar2);
				if (ENTITY::DOES_ENTITY_EXIST(iVar4))
				{
					func_149(uParam0, iVar2, iVar4);
				}
				iVar1++;
			}
			func_71(uParam0, iVar0, 0);
			(Local_1.f_5[iVar0 /*62*/])->f_1 = uVar6;
			func_101(uParam0, uParam0->f_106[iVar0 /*29*/], iVar3, iVar0, 1, 1, iVar7, iVar8);
		}
		iVar0++;
	}
	Local_1.f_378 = func_150();
	iVar4 = func_148(uParam0->f_1, 24);
	if (ENTITY::DOES_ENTITY_EXIST(iVar4))
	{
		func_149(uParam0, 24, iVar4);
	}
	func_125(uParam0, Local_1.f_378);
	func_151();
	return 1;
}

void func_52()
{
	func_151();
	func_152();
	func_153(-1);
	func_154(-1);
}

bool func_53(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	int iVar6;

	bVar2 = false;
	if (func_155() == uParam0->f_1)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (!func_156(uParam0->f_106[iVar0 /*29*/]))
			{
				iVar1 = func_147(uParam0->f_1, iVar0, &uVar3, &uVar4, &iVar5, &iVar6);
				if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !DECORATOR::DECOR_EXIST_ON(iVar1, "DontGrabThisPedForMinigame"))
				{
					if (func_101(uParam0, uParam0->f_106[iVar0 /*29*/], iVar1, iVar0, 1, 0, iVar5, iVar6))
					{
						func_71(uParam0, iVar0, 0);
						bVar2 = true;
					}
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!func_156(uParam0->f_106[iVar0 /*29*/]))
		{
			if (func_157(uParam0->f_1, uParam0->f_3, uParam0->f_6, iVar0, &iVar1, 1, 0))
			{
				if (!DECORATOR::DECOR_EXIST_ON(iVar1, "DontGrabThisPedForMinigame"))
				{
					if (func_101(uParam0, uParam0->f_106[iVar0 /*29*/], iVar1, iVar0, 1, 0, -1, 92))
					{
						func_71(uParam0, iVar0, 0);
						bVar2 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		if (uParam0->f_1 == 0)
		{
			if (func_132(uParam0, 4))
			{
				func_35(uParam0->f_2);
			}
			else
			{
				func_1(uParam0->f_2);
			}
		}
		else
		{
			func_35(uParam0->f_2);
		}
	}
	return bVar2;
}

void func_54(var uParam0)
{
}

void func_55(var uParam0)
{
}

void func_56(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_158(uParam0, iVar0))
		{
			if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam1, (uParam0->f_1938[iVar0 /*29*/])->f_1))
			{
				func_80(uParam0, iVar0, bParam2);
			}
		}
		iVar0++;
	}
}

void func_57(var uParam0, var uParam1)
{
	if (*uParam1 == 1)
	{
		func_10(uParam0, uParam1, 0, 1, 0, 1);
	}
}

char* func_58(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 0:
		case 2:
			return "MGBLK_Sounds";
		case 1:
			return "MGDOM_Sounds";
		default:
			break;
	}
	return "";
}

void func_59(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0))
	{
		VOLUME::_DELETE_VOLUME(uParam0);
	}
}

void func_60(var uParam0, var uParam1, int iParam2)
{
	if (uParam1->f_20 == -1)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_21)))
	{
		return;
	}
	if (iParam2 == 1 && ANIMSCENE::_0x25557E324489393C((uParam0->f_1938[uParam1->f_20 /*29*/])->f_1))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY((uParam0->f_1938[uParam1->f_20 /*29*/])->f_1, &(uParam1->f_21), uParam1->f_11);
	}
	ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_11, false);
	MISC::CLEAR_BIT(&((uParam0->f_1938[uParam1->f_20 /*29*/])->f_3), uParam1->f_13);
	if ((uParam0->f_1938[uParam1->f_20 /*29*/])->f_3 == 0)
	{
		func_159(uParam0->f_1938[uParam1->f_20 /*29*/], 3);
	}
	StringCopy(&(uParam1->f_21), "", 64);
	uParam1->f_20 = -1;
}

int func_61(int iParam0)
{
	int iVar0;

	if (func_6() != -1)
	{
		return 0;
	}
	iVar0 = func_160(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return (Global_1392915->f_121[iVar0 /*20*/])->f_6;
}

void func_62(int iParam0, int iParam1)
{
	int iVar0;

	if (func_6() != -1)
	{
		return;
	}
	iVar0 = func_160(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	(Global_1392915->f_121[iVar0 /*20*/])->f_6 = iParam1;
}

void func_63(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
		if (!bParam3)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
		}
		PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
		if (bParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
}

void func_64(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
	}
	PED::DELETE_PED(iParam0);
}

void func_65(var uParam0, int iParam1)
{
	uParam0->f_281[iParam1 /*24*/] = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_281[iParam1 /*24*/])->f_5)) && (uParam0->f_281[iParam1 /*24*/])->f_3 != -1)
	{
		func_161(uParam0, iParam1, 0);
	}
	(uParam0->f_281[iParam1 /*24*/])->f_23 = 0f;
	(uParam0->f_281[iParam1 /*24*/])->f_22 = 0f;
	StringCopy(&((uParam0->f_281[iParam1 /*24*/])->f_5), "", 64);
	(uParam0->f_281[iParam1 /*24*/])->f_3 = -1;
	(uParam0->f_281[iParam1 /*24*/])->f_14 = 0;
	func_91(&((uParam0->f_281[iParam1 /*24*/])->f_4));
	(uParam0->f_281[iParam1 /*24*/])->f_4 = 0;
}

void func_66(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_281[iParam1 /*24*/] = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_281[iParam1 /*24*/])->f_5)) && (uParam0->f_281[iParam1 /*24*/])->f_3 != -1)
	{
		func_161(uParam0, iParam1, bParam2);
	}
	if (bParam2)
	{
		func_162(uParam0, iParam1);
	}
	StringCopy(&((uParam0->f_281[iParam1 /*24*/])->f_5), "", 64);
	(uParam0->f_281[iParam1 /*24*/])->f_3 = -1;
	(uParam0->f_281[iParam1 /*24*/])->f_23 = 0f;
	if ((uParam0->f_281[iParam1 /*24*/])->f_15)
	{
		if (ENTITY::DOES_ENTITY_EXIST((uParam0->f_281[iParam1 /*24*/])->f_4))
		{
			ANIMSCENE::_0xC1193521E3B9FADD((uParam0->f_281[iParam1 /*24*/])->f_4, 0);
		}
	}
	(uParam0->f_281[iParam1 /*24*/])->f_15 = 0;
	(uParam0->f_281[iParam1 /*24*/])->f_14 = 0;
	func_163(&((uParam0->f_281[iParam1 /*24*/])->f_4), 1, 1);
	(uParam0->f_281[iParam1 /*24*/])->f_4 = 0;
}

void func_67(var uParam0, int iParam1, char* sParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_164(uParam0, iVar0, iParam1, sParam2);
		iVar0++;
	}
}

int func_68()
{
	return Global_1894899->f_2;
}

void func_69(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_165(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::SET_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::SET_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::SET_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
		MISC::SET_BIT(Global_1058888->f_40567[iVar1], iVar2);
	}
	Global_1934765 = 0;
}

void func_70(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	iVar1 = 0;
	iVar4 = 6;
	if (uParam0->f_1 == 0)
	{
		iVar4 = (iVar4 - 1);
	}
	if (uParam0->f_1 == 2)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(3, iVar4);
	}
	else
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, iVar4);
	}
	if ((uParam0->f_1 == 2 && uParam0->f_7 == 75) || (uParam0->f_1 == 1 && uParam0->f_7 == 38))
	{
		MISC::SET_BIT(&iVar0, 0);
		iVar1 = (iVar1 - 1);
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
		while (MISC::IS_BIT_SET(iVar0, iVar3))
		{
			iVar3 = (iVar3 + 1 % iVar4);
		}
		MISC::SET_BIT(&iVar0, iVar3);
		iVar2++;
	}
	uParam0->f_94 = 0;
	iVar2 = 0;
	while (iVar2 < iVar4)
	{
		if (!MISC::IS_BIT_SET(iVar0, iVar2))
		{
			MISC::SET_BIT(&(uParam0->f_94), iVar2);
		}
		iVar2++;
	}
}

void func_71(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MISC::SET_BIT(&(uParam0->f_94), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_94), iParam1);
	}
}

void func_72(int iParam0)
{
	int iVar0;

	func_166(&(iParam0->f_392));
	func_133(iParam0, 0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		(iParam0->f_5[iVar0 /*62*/])->f_5 = iVar0;
		func_138(iParam0->f_5[iVar0 /*62*/], 1, 0, 0);
		func_166(&((iParam0->f_5[iVar0 /*62*/])->f_6));
		(iParam0->f_5[iVar0 /*62*/])->f_30.f_24 = -1;
		func_166(&((iParam0->f_5[iVar0 /*62*/])->f_30));
		iVar0++;
	}
	iParam0->f_380 = 0;
	iParam0->f_381 = 0;
	iParam0->f_382 = 0;
}

void func_73(var uParam0)
{
	func_167(uParam0, 0f);
}

int func_74(int iParam0)
{
	if (!func_168(iParam0))
	{
		return -1;
	}
	return func_169(iParam0);
}

int func_75(int iParam0, int iParam1)
{
	if (iParam1 == 1 && iParam0 == 2)
	{
		return 19547436;
	}
	switch (iParam0)
	{
		case 2:
			return 19547436;
		case 0:
			return 648454729;
		case 1:
			return 639632500;
		case 3:
			return 504839342;
		case 4:
			return 1221273613;
		case 5:
			return 1966390672;
		case 6:
			return -761450110;
		default:
			break;
	}
	return 0;
}

bool func_76(var uParam0)
{
	return func_170(*uParam0, 1);
}

bool func_77(var uParam0)
{
	return func_170(*uParam0, 2);
}

float func_78()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_79(var uParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_4)))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_1))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_1, 1, 0))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_1, 0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_12)))
	{
		return 1;
	}
	if (!ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_1, &(uParam0->f_12)))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_1, &(uParam0->f_12)))
	{
		return 0;
	}
	if (bParam1)
	{
	}
	uParam0->f_2 = 0f;
	func_159(uParam0, 4);
	return 1;
}

void func_80(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam1 < 0 || iParam1 >= 7)
	{
		return;
	}
	if (&uParam0->f_1938[iParam1 /*29*/] > 4)
	{
		iVar0 = 0;
		while (iVar0 < 69)
		{
			if ((uParam0->f_281[iVar0 /*24*/])->f_3 == (uParam0->f_1938[iParam1 /*29*/])->f_1)
			{
				func_161(uParam0, iVar0, bParam2);
			}
			iVar0++;
		}
		ANIMSCENE::_DELETE_ANIM_SCENE((uParam0->f_1938[iParam1 /*29*/])->f_1);
	}
	func_11(uParam0->f_1938[iParam1 /*29*/]);
}

float func_81(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 70f;
		case 2:
			return 45f;
		case 0:
			return 40f;
		case 3:
			return 90f;
		case 5:
			return 90f;
		case 4:
			return 50f;
		case 6:
			return 90f;
		default:
			break;
	}
	return 70f;
}

bool func_82(int iParam0, int iParam1)
{
	return (Global_1899528->f_3[iParam0] && iParam1) != 0;
}

bool func_83(int iParam0)
{
	if (!func_171(iParam0))
	{
		return false;
	}
	return (!func_172() || MISC::IS_BIT_SET(Global_40.f_7854, iParam0));
}

bool func_84(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

int func_85(int iParam0)
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
		iVar0 = func_169(iParam0);
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

bool func_86()
{
	return Global_1898164->f_163;
}

int func_87(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_160(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = func_173(iVar0);
	if (iVar1 == -1)
	{
		return 0;
	}
	return (Global_1392915->f_121[iVar0 /*20*/])->f_19;
}

int func_88()
{
	int iVar0;

	if (func_6() == -1)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (((*Global_1392915)[iVar0 /*12*/])->f_1 != -1)
				{
					if (func_22(((*Global_1392915)[iVar0 /*12*/])->f_4))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		return 0;
	}
	return 0;
}

int func_89(int iParam0, bool bParam1)
{
	if (func_174(iParam0))
	{
		return 1;
	}
	if (!bParam1)
	{
		if (func_175(5000))
		{
			return 1;
		}
	}
	switch (func_176(0))
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

int func_90(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_91(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
	{
		ENTITY::DETACH_ENTITY(*iParam0, true, true);
	}
	OBJECT::DELETE_OBJECT(iParam0);
}

int func_92(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_177(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_93(int iParam0, int iParam1)
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

int func_94(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar2 = 0;
	while (iVar2 < uParam0->f_106)
	{
		if (&uParam0->f_106[iVar2 /*29*/])
		{
			iVar1 = (uParam0->f_106[iVar2 /*29*/])->f_18;
			if (iVar1 != -1)
			{
				MISC::SET_BIT(&iVar0, iVar1);
			}
		}
		iVar2++;
	}
	return iVar0;
}

int func_95(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_178(iParam0);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (!MISC::IS_BIT_SET(iParam1, iVar1))
		{
			return iVar1;
		}
		iVar1 = (iVar1 + 1 % iVar0);
		iVar2++;
	}
	return iVar1;
}

int func_96(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_179(iParam1, iParam2, iParam3);
	PED::_0x1902C4CFCC5BE57C(iParam0, iVar0);
	PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	return iVar0;
}

void func_97(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	*iParam2 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (&uParam0->f_106[iVar0 /*29*/])
		{
			(*uParam1)[*iParam2] = (uParam0->f_106[iVar0 /*29*/])->f_19;
			*iParam2++;
		}
		iVar0++;
	}
}

int func_98(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	var uVar0;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	uVar0 = 3;
	iVar4 = 0;
	if (func_180(iParam0))
	{
		return 0;
	}
	func_181(ENTITY::GET_ENTITY_MODEL(iParam0), iParam1, iParam2, &uVar0, &iVar4);
	if (iVar4 == 0)
	{
		return 0;
	}
	iVar5 = iParam4;
	iVar7 = 0;
	while (iVar7 < iParam4)
	{
		iVar6 = uParam3[iVar7];
		if (!func_182(&uVar0, iVar6))
		{
			iVar5 = (iVar5 - 1);
		}
		else
		{
			iVar8 = 0;
			while (iVar8 < iVar7)
			{
				if (uParam3[iVar8] == iVar6)
				{
					iVar5 = (iVar5 - 1);
				}
				else
				{
					iVar8++;
				}
			}
		}
		iVar7++;
	}
	if (iVar4 > iVar5)
	{
		iVar10 = 0;
		iVar9 = (iVar4 - iVar5);
	}
	else
	{
		iVar10 = -1;
		iVar9 = 0;
		iVar7 = 0;
		while (iVar7 < iParam4)
		{
			iVar6 = uParam3[iVar7];
			if (func_182(&uVar0, iVar6))
			{
				iVar11 = 0;
				iVar8 = 0;
				while (iVar8 < iParam4)
				{
					if (uParam3[iVar8] == iVar6)
					{
						iVar11++;
					}
					iVar8++;
				}
				if (iVar10 == -1 || iVar10 > iVar11)
				{
					iVar10 = iVar11;
					iVar9 = 1;
				}
				else if (iVar10 == iVar11)
				{
					iVar9++;
				}
			}
			iVar7++;
		}
	}
	if (iVar9 == 0)
	{
		return 0;
	}
	iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar9);
	iVar13 = 0;
	iVar6 = 0;
	while (iVar6 < 92)
	{
		if (func_182(&uVar0, iVar6))
		{
			iVar11 = 0;
			iVar7 = 0;
			while (iVar7 < iParam4)
			{
				if (uParam3[iVar7] == iVar6)
				{
					iVar11++;
				}
				iVar7++;
			}
			if (iVar11 == iVar10)
			{
				if (iVar13 == iVar12)
				{
					*iParam5 = iVar6;
					return 1;
				}
				iVar13++;
			}
		}
		iVar6++;
	}
	return 0;
}

char* func_99(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0880_A_M_M_Civ_Poor_Asian_AVOID_04";
		case 1:
			return "0944_A_M_M_Foreman_White_AVOID_04";
		case 2:
			return "0945_A_M_M_Foreman_White_AVOID_05";
		case 3:
			return "0952_A_M_M_Guard_White_AGGRESSIVE_07";
		case 4:
			return "0953_A_M_M_Guard_White_AGGRESSIVE_08";
		case 5:
			return "0954_A_M_M_Guard_White_AGGRESSIVE_09";
		case 6:
			return "0955_A_M_M_Guard_White_AGGRESSIVE_10";
		case 7:
			return "0956_A_M_M_Rancher_White_01";
		case 8:
			return "0957_A_M_M_Rancher_White_02";
		case 9:
			return "0958_A_M_M_Rancher_White_03";
		case 10:
			return "0959_A_M_M_Rancher_White_04";
		case 11:
			return "0960_A_M_M_Rancher_White_05";
		case 12:
			return "0961_A_M_M_Rancher_White_06";
		case 13:
			return "0962_A_M_M_Rancher_White_07";
		case 14:
			return "0966_A_M_M_RoughTravellers_Black_04";
		case 15:
			return "0985_S_M_M_AmbientLawRural_White_08";
		case 16:
			return "0994_S_M_M_DispatchLawRural_White_09";
		case 17:
			return "0882_A_M_M_Civ_Poor_Black_AGGRESSIVE_02";
		case 18:
			return "0989_S_M_M_DispatchLawRural_White_04";
		case 19:
			return "0847_A_F_M_Civ_Black_AVOID_02";
		case 20:
			return "0850_A_F_M_Civ_Hispanic_AVOID_03";
		case 21:
			return "0854_A_F_M_Civ_Poor_Black_AVOID_04";
		case 22:
			return "0858_A_F_M_Civ_Poor_Black_TIMID_04";
		case 23:
			return "0861_A_F_M_Civ_Poor_White_AGGRESSIVE_03";
		case 24:
			return "0868_A_F_M_Civ_Poor_White_AVOID_06";
		case 25:
			return "0876_A_F_M_Civ_White_TIMID_05";
		case 26:
			return "0702_A_M_M_RhdUpperClass_01_WHITE_02";
		case 27:
			return "0785_A_F_M_MiddleSDTownfolk_01_WHITE_01";
		case 28:
			return "0805_A_M_M_SDDockForeman_01_WHITE_01";
		case 29:
			return "0813_G_M_M_UniBraithwaites_01_WHITE_02";
		case 30:
			return "1004_S_M_M_AmbientBlWPolice_White_03";
		case 31:
			return "1011_S_M_M_DispatchPolice_White_07";
		case 32:
			return "0561_A_F_M_Prostitute_Black_05";
		case 33:
			return "0566_A_F_M_Prostitute_White_05";
		case 34:
			return "0792_A_M_M_MiddleSDTownfolk_02_BLACK_01";
		case 35:
			return "0808_S_M_M_Army_01_WHITE_03";
		case 36:
			return "0811_S_M_Y_Army_01_WHITE_03";
		case 37:
			return "0835_S_M_M_GenConductor_01_WHITE_01";
		case 38:
			return "0836_S_M_M_GenConductor_01_WHITE_02";
		case 39:
			return "0844_S_M_M_UniButchers_01_WHITE_03";
		case 40:
			return "0782_A_F_M_LowerSDTownfolk_01_WHITE_01";
		case 41:
			return "0803_A_M_O_SDUpperClass_01_WHITE_02";
		case 42:
			return "1015_A_F_M_MiddleSDTownfolk_04_WHITE_01";
		case 43:
			return "0842_S_M_M_UniButchers_01_WHITE_01";
		case 44:
			return "0843_S_M_M_UniButchers_01_WHITE_02";
		case 45:
			return "0817_A_M_M_VhtThug_01_WHITE_01";
		case 46:
			return "0818_A_M_M_VhtThug_01_WHITE_02";
		case 47:
			return "0819_A_M_M_VhtThug_01_WHITE_03";
		case 48:
			return "0429_A_M_M_StrTownfolk_01_WHITE_01";
		case 49:
			return "0594_A_M_M_Civ_Poor_White_AVOID_14";
		case 50:
			return "0595_A_M_M_Civ_White_AVOID_11";
		case 51:
			return "0644_A_M_M_Civ_Poor_White_AGGRESSIVE_19";
		case 52:
			return "0650_A_M_M_Civ_Poor_White_AGGRESSIVE_20";
		case 53:
			return "0657_A_M_M_Civ_Poor_White_AGGRESSIVE_18";
		case 54:
			return "0913_A_M_M_Civ_Poor_White_AGGRESSIVE_13";
		case 55:
			return "0130_G_M_M_UniCriminals_01_WHITE_01";
		case 56:
			return "0131_G_M_M_UniCriminals_01_WHITE_02";
		case 57:
			return "0132_G_M_M_UniCriminals_01_BLACK_01";
		case 58:
			return "0133_G_M_M_UniCriminals_01_BLACK_02";
		case 59:
			return "0134_G_M_M_UniCriminals_01_HISPANIC_01";
		case 60:
			return "0278_A_F_M_NbxWhore_01_BLACK_01";
		case 61:
			return "0894_A_M_M_Civ_Poor_Black_AVOID_09";
		case 62:
			return "0915_A_M_M_Civ_Poor_White_AGGRESSIVE_15";
		case 63:
			return "1052_G_M_M_UniGrays_01_WHITE_03";
		case 64:
			return "1053_G_M_M_UniGrays_01_WHITE_04";
		case 65:
			return "1056_G_M_M_UniCriminals_01_WHITE_03";
		case 66:
			return "1058_G_M_M_UniCriminals_01_WHITE_05";
		case 67:
			return "1059_G_M_M_UniCriminals_01_WHITE_06";
		case 68:
			return "1060_G_M_M_UniCriminals_01_WHITE_07";
		case 69:
			return "1061_G_M_M_UniCriminals_01_WHITE_08";
		case 70:
			return "1062_G_M_M_UniCriminals_01_WHITE_09";
		case 71:
			return "1063_G_M_M_UniCriminals_01_WHITE_10";
		case 72:
			return "1064_G_M_M_UniCriminals_01_BLACK_03";
		case 73:
			return "1065_G_M_M_UniCriminals_01_BLACK_04";
		case 74:
			return "1086_U_M_M_TumButcher_01";
		case 75:
			return "1093_A_M_M_TumTownfolk_01_WHITE_01";
		case 76:
			return "1094_A_M_M_TumTownfolk_02_BLACK_01";
		case 77:
			return "1097_A_F_M_TumTownfolk_01_WHITE_01";
		case 78:
			return "1098_A_F_M_TumTownfolk_02_BLACK_01";
		case 79:
			return "0135_G_M_M_UniCriminals_01_HISPANIC_02";
		case 80:
			return "0400_U_M_M_RhdGenStoreOwner_01";
		case 81:
			return "0401_U_M_M_RhdGunsmith_01";
		case 82:
			return "0477_U_M_M_ValDoctor_01";
		case 83:
			return "0478_U_M_M_ValGenStoreOwner_01";
		case 84:
			return "0479_U_M_M_ValGunsmith_01";
		case 85:
			return "1085_U_M_M_TumGunsmith_01";
		case 86:
			return "0083_U_M_O_BlWGeneralStoreOwner_01";
		case 87:
			return "0832_S_M_M_TrainStationWorker_01_WHITE_01";
		case 88:
			return "CS_ValAuctionBoss_01";
		case 89:
			return "AS_TOWNDEALER";
		case 90:
			return "JS_TOWNDEALER";
		case 91:
			return "FH_TOWNDEALER";
		case 92:
			return "MAX";
		default:
			break;
	}
	return "unknown";
}

int func_100(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	uVar0 = 3;
	iVar4 = 0;
	func_183(ENTITY::GET_ENTITY_MODEL(iParam0), iParam1, &uVar0, &iVar4);
	if (iVar4 == 0)
	{
		return 0;
	}
	iVar5 = iParam3;
	iVar7 = 0;
	while (iVar7 < iParam3)
	{
		iVar6 = uParam2[iVar7];
		if (!func_182(&uVar0, iVar6))
		{
			iVar5 = (iVar5 - 1);
		}
		else
		{
			iVar8 = 0;
			while (iVar8 < iVar7)
			{
				if (uParam2[iVar8] == iVar6)
				{
					iVar5 = (iVar5 - 1);
				}
				else
				{
					iVar8++;
				}
			}
		}
		iVar7++;
	}
	if (iVar4 > iVar5)
	{
		iVar10 = 0;
		iVar9 = (iVar4 - iVar5);
	}
	else
	{
		iVar10 = -1;
		iVar9 = 0;
		iVar7 = 0;
		while (iVar7 < iParam3)
		{
			iVar6 = uParam2[iVar7];
			if (func_182(&uVar0, iVar6))
			{
				iVar11 = 0;
				iVar8 = 0;
				while (iVar8 < iParam3)
				{
					if (uParam2[iVar8] == iVar6)
					{
						iVar11++;
					}
					iVar8++;
				}
				if (iVar10 == -1 || iVar10 > iVar11)
				{
					iVar10 = iVar11;
					iVar9 = 1;
				}
				else if (iVar10 == iVar11)
				{
					iVar9++;
				}
			}
			iVar7++;
		}
	}
	if (iVar9 == 0)
	{
		return 0;
	}
	iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar9);
	iVar13 = 0;
	iVar6 = 0;
	while (iVar6 < 92)
	{
		if (func_182(&uVar0, iVar6))
		{
			iVar11 = 0;
			iVar7 = 0;
			while (iVar7 < iParam3)
			{
				if (uParam2[iVar7] == iVar6)
				{
					iVar11++;
				}
				iVar7++;
			}
			if (iVar11 == iVar10)
			{
				if (iVar13 == iVar12)
				{
					*iParam4 = iVar6;
					return 1;
				}
				iVar13++;
			}
		}
		iVar6++;
	}
	return 0;
}

int func_101(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		return 0;
	}
	if (iParam5 == 0)
	{
		if (*uParam1 == 1)
		{
			return 1;
		}
	}
	*uParam1 = 1;
	uParam1->f_11 = iParam2;
	uParam1->f_13 = iParam3;
	uParam1->f_14 = 0;
	uParam1->f_18 = iParam6;
	uParam1->f_19 = iParam7;
	uParam1->f_20 = 0;
	if (bParam4)
	{
		uParam1->f_12 = iParam3;
		uParam0->f_95[iParam3] = iParam3;
		MISC::SET_BIT(&(uParam0->f_93), iParam3);
	}
	else
	{
		uParam1->f_12 = -1;
	}
	if (!PED::IS_PED_A_PLAYER(iParam2))
	{
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam2, true))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam2, true, true);
		}
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam2, -225988669);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, true);
	PED::SET_PED_CONFIG_FLAG(iParam2, 453, true);
	PED::SET_PED_CONFIG_FLAG(iParam2, 130, false);
	PED::SET_PED_CONFIG_FLAG(iParam2, 168, true);
	PED::SET_PED_CONFIG_FLAG(iParam2, 458, true);
	PED::SET_PED_CONFIG_FLAG(iParam2, 26, true);
	PED::SET_PED_CONFIG_FLAG(iParam2, 146, false);
	PED::_0xB8DE69D9473B7593(iParam2, 0);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam2, 319488);
	if (uParam0->f_1 == 2)
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam2, "Poker_NPC_Group", 0f);
	}
	if (bParam4)
	{
		func_184(iParam2);
		func_104(uParam1, 4);
	}
	else
	{
		func_104(uParam1, 3);
	}
	uParam0->f_92++;
	return 1;
}

int func_102(var uParam0, var uParam1)
{
	int iVar0;

	switch (uParam1->f_3)
	{
		case 0:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam1->f_11, uParam0->f_3, 1f, 20000, 2f, false, 40000f);
			func_185(uParam1);
			break;
		case 1:
			if (func_186(uParam1->f_11, 713668775))
			{
				func_185(uParam1);
			}
			break;
		case 2:
			if (!func_186(uParam1->f_11, 713668775))
			{
				func_57(uParam0, uParam1);
				return 2;
			}
			if (uParam0->f_2155)
			{
				func_57(uParam0, uParam1);
				return 2;
			}
			if (func_187(uParam1->f_11, uParam0->f_3, 1) > 3f)
			{
				return 0;
			}
			if (uParam0->f_1 == 0 && func_180(uParam1->f_11))
			{
				iVar0 = 4;
				if (!MISC::IS_BIT_SET(uParam0->f_93, iVar0))
				{
					MISC::SET_BIT(&(uParam0->f_93), iVar0);
					uParam0->f_95[iVar0] = uParam1->f_13;
					uParam1->f_12 = iVar0;
					if (!TASK::_0x841475AC96E794D1((uParam0->f_23[uParam1->f_12 /*11*/])->f_10))
					{
						func_57(uParam0, uParam1);
						return 2;
					}
					TASK::_TASK_USE_SCENARIO_POINT(uParam1->f_11, (uParam0->f_23[uParam1->f_12 /*11*/])->f_10, 0, 0, 1, 0, 0, 0, -1082130432, 0);
					func_185(uParam1);
				}
				else
				{
					func_57(uParam0, uParam1);
					return 2;
				}
			}
			if (func_188(uParam0, ENTITY::GET_ENTITY_COORDS(uParam1->f_11, true, false), &iVar0))
			{
				MISC::SET_BIT(&(uParam0->f_93), iVar0);
				uParam0->f_95[iVar0] = uParam1->f_13;
				uParam1->f_12 = iVar0;
				if (!TASK::_0x841475AC96E794D1((uParam0->f_23[uParam1->f_12 /*11*/])->f_10))
				{
					func_57(uParam0, uParam1);
					return 2;
				}
				TASK::_TASK_USE_SCENARIO_POINT(uParam1->f_11, (uParam0->f_23[uParam1->f_12 /*11*/])->f_10, 0, 0, 1, 0, 0, 0, -1082130432, 0);
				func_185(uParam1);
			}
			else
			{
				func_57(uParam0, uParam1);
				return 2;
			}
			break;
		case 3:
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam1->f_11, 0))
			{
				func_185(uParam1);
			}
			break;
		case 4:
			if (func_6() == -1 && uParam0->f_1 == 0)
			{
				if (func_112(uParam0, 4))
				{
					func_35(uParam0->f_2);
				}
				else
				{
					func_1(uParam0->f_2);
				}
			}
			func_184(uParam1->f_11);
			func_189(uParam1);
			func_104(uParam1, 4);
			return 1;
	}
	return 0;
}

int func_103(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	char* sVar7;
	int iVar8;
	int iVar9;

	iVar6 = (0 + uParam1->f_12);
	switch (uParam1->f_3)
	{
		case 0:
			if (Local_1.f_378 == -1)
			{
				Local_1.f_378 = uParam1->f_12;
			}
			if (!PED::IS_PED_MALE(uParam1->f_11))
			{
				(Local_1.f_5[uParam1->f_12 /*62*/])->f_1 = 3;
			}
			else if ((Local_1.f_5[uParam1->f_12 /*62*/])->f_1 == -1)
			{
				if (func_190())
				{
					(Local_1.f_5[uParam1->f_12 /*62*/])->f_1 = 0;
				}
				else
				{
					(Local_1.f_5[uParam1->f_12 /*62*/])->f_1 = 2;
				}
			}
			sVar7 = func_191((Local_1.f_5[uParam1->f_12 /*62*/])->f_1);
			if (func_192(uParam0, iVar6, sVar7, "PBL_NoCardsLoop", 2))
			{
				if ((Local_1.f_5[uParam1->f_12 /*62*/])->f_59 == 0)
				{
					iVar8 = func_160(uParam0->f_2);
					if (iVar8 != -1)
					{
						iVar9 = func_193(2, ((*Global_1392915)[iVar8 /*12*/])->f_10);
					}
					else
					{
						iVar9 = 100;
					}
					iVar9 = (iVar9 + MISC::GET_RANDOM_INT_IN_RANGE((-iVar9 / 5), (iVar9 / 5)));
					(Local_1.f_5[uParam1->f_12 /*62*/])->f_59 = iVar9;
				}
				ANIMSCENE::_0x99B2A2E3655DEAF1(uParam1->f_11, "PokerSeatedNoCards");
				func_185(uParam1);
			}
			break;
		case 1:
			if (func_194(uParam0, iVar6))
			{
				func_195(uParam0, uParam1->f_12, &vVar3);
				func_196(uParam0, uParam1->f_12, &vVar0);
				func_197(uParam0, iVar6, uParam1, "Seat_01");
				if (func_198(uParam0, iVar6, vVar3, vVar0))
				{
					func_185(uParam1);
				}
			}
			break;
		case 2:
			if (func_47(uParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_104(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
	uParam0->f_3 = 0;
	func_73(&(uParam0->f_4));
}

int func_105(var uParam0)
{
	if (!func_156(uParam0))
	{
		return 0;
	}
	if (PED::IS_PED_RAGDOLL(uParam0->f_11))
	{
		return 0;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(uParam0->f_11))
	{
		return 0;
	}
	if (uParam0->f_16)
	{
		return 1;
	}
	if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(uParam0->f_11))
	{
		return 1;
	}
	return 0;
}

int func_106(var uParam0, var uParam1, bool bParam2)
{
	if (!func_199(uParam0, uParam1->f_11))
	{
		return 0;
	}
	if (uParam1->f_1 == 7)
	{
		return 0;
	}
	if (bParam2)
	{
		if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(uParam1->f_11))
		{
		}
	}
	if (ENTITY::_0x083D497D57B7400F(uParam1->f_11))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_11, false);
	}
	if (!uParam0->f_2155)
	{
		DECORATOR::DECOR_SET_BOOL(uParam1->f_11, "DontGrabThisPedForMinigame", true);
	}
	ANIMSCENE::_0xBC781D24AA11F179(uParam1->f_11);
	func_200(uParam0, uParam1->f_12, 1);
	func_201(uParam0, uParam1->f_20, 1);
	if (PED::IS_PED_RAGDOLL(uParam1->f_11))
	{
		func_10(uParam0, uParam1, 0, 1, 0, 1);
	}
	else
	{
		func_104(uParam1, 7);
	}
	return 1;
}

int func_107(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = uParam1->f_12;
	if (uParam0->f_2 == 27)
	{
		if (uParam0->f_2146 == 0 && (Local_1.f_5[iVar0 /*62*/])->f_3 == 0)
		{
			return 1;
		}
	}
	else if (uParam0->f_2 == 30)
	{
		if (uParam0->f_90 > 10f && (Local_1.f_5[iVar0 /*62*/])->f_3 == 0)
		{
			return 1;
		}
	}
	else if (uParam0->f_2147 == 0 && uParam0->f_2146 == 0)
	{
		if ((uParam0->f_90 > 10f || uParam0->f_2144 == 0) && (Local_1.f_5[iVar0 /*62*/])->f_3 == 0)
		{
			return 1;
		}
	}
	(Local_1.f_5[iVar0 /*62*/])->f_2 = ((Local_1.f_5[iVar0 /*62*/])->f_2 + MISC::GET_FRAME_TIME());
	if (!func_112(uParam0, iVar0))
	{
		Local_1.f_5[iVar0 /*62*/] = 0;
	}
	switch (&Local_1.f_5[iVar0 /*62*/])
	{
		case 1:
			func_202(uParam0, uParam1, &Local_1);
			break;
		case 2:
			func_203(uParam0, uParam1, &Local_1);
			break;
		case 5:
			func_204(uParam0, uParam1, &Local_1);
			break;
		case 6:
			func_205(uParam0, uParam1, &Local_1);
			break;
		case 3:
			func_206(uParam0, uParam1, &Local_1);
			break;
		case 4:
			func_207(uParam0, uParam1, &Local_1);
			break;
		case 7:
			if (iVar0 != Local_1.f_378)
			{
				func_208(uParam0, uParam1, &Local_1);
			}
			else
			{
				func_209(uParam0, uParam1, &Local_1);
			}
			break;
		case 8:
			func_210(uParam0, uParam1, &Local_1);
			break;
		case 9:
			func_211(uParam0, uParam1, &Local_1);
			break;
		case 10:
			func_212(uParam0, uParam1, &Local_1);
			break;
		case 12:
			func_213(uParam0, uParam1, &Local_1);
			break;
		case 18:
			func_214(uParam0, uParam1, &Local_1);
			break;
		case 19:
			func_215(uParam0, uParam1, &Local_1);
			break;
		case 11:
			func_216(uParam0, uParam1, &Local_1);
			break;
		case 14:
			func_217(uParam0, uParam1, &Local_1);
			break;
		case 13:
			func_218(uParam0, uParam1, &Local_1);
			break;
		case 16:
			func_219(uParam0, uParam1, &Local_1);
			break;
		case 15:
			func_220(uParam0, uParam1, &Local_1);
			break;
		case 17:
			func_221(uParam0, uParam1, &Local_1);
			break;
		case 20:
			func_222(uParam0, uParam1, &Local_1);
			break;
	}
	return 1;
}

int func_108(var uParam0, var uParam1)
{
	switch (uParam1->f_3)
	{
		case 0:
			TASK::CLEAR_PED_TASKS(uParam1->f_11, 1, 0);
			func_200(uParam0, uParam1->f_12, 0);
			func_223(uParam1->f_11);
			func_185(uParam1);
			break;
		case 1:
			func_57(uParam0, uParam1);
			func_185(uParam1);
			break;
		case 2:
			return 1;
	}
	return 0;
}

int func_109(vector3 vParam0, float fParam3, bool bParam4)
{
	if (bParam4)
	{
		if (MISC::_IS_PROJECTILE_TYPE_IN_RADIUS(vParam0, joaat("weapon_thrown_dynamite"), fParam3, false) || MISC::_IS_PROJECTILE_TYPE_IN_RADIUS(vParam0, joaat("weapon_thrown_molotov"), fParam3, false))
		{
			return 1;
		}
	}
	if ((((((FIRE::IS_EXPLOSION_IN_SPHERE(25, vParam0, fParam3) || FIRE::IS_EXPLOSION_IN_SPHERE(0, vParam0, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(2, vParam0, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(30, vParam0, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(31, vParam0, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(29, vParam0, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(26, vParam0, fParam3))
	{
		return 1;
	}
	return 0;
}

void func_110(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		*uParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_224());
	}
}

int func_111(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case joaat("p_windsorchair03x"):
					return 1;
				case joaat("p_windsorchair01x"):
				case 1609095284:
					return 1;
				case joaat("p_chair24x"):
				case joaat("p_chair22x"):
					return 1;
				default:
					break;
			}
			break;
		case 2:
			if (iParam1 == joaat("p_chair13x"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_chair05x"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_chair06x"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_windsorchair03x"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_chair12x"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_chair14x"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_chair11x"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_chair26x"))
			{
				return 1;
			}
			break;
		case 1:
			if (iParam1 == joaat("p_chair02x"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_stool02x"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_stool03x"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_stoolwinter01x"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_stoolfolding01x"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_chair_barrel04b"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_chairfolding02x"))
			{
				return 1;
			}
			break;
		case 3:
			if (iParam1 == joaat("p_chair06x"))
			{
				return 1;
			}
			if (iParam1 == joaat("s_crateseat03x"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_chair_crate02x"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_stoolfolding01x"))
			{
				return 1;
			}
			if (iParam1 == joaat("p_chairfolding02x"))
			{
				return 1;
			}
			break;
		default:
			return 1;
	}
	return 0;
}

bool func_112(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_106)
	{
		return false;
	}
	if (&uParam0->f_95[iParam1] == -1)
	{
		return false;
	}
	return (uParam0->f_106[&uParam0->f_95[iParam1] /*29*/] && (uParam0->f_106[&uParam0->f_95[iParam1] /*29*/])->f_1 == 5);
}

int func_113(bool bParam0, bool bParam1, bool bParam2)
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

int func_114()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (Global_1572887->f_12 == -1)
		{
			if (&Global_1934765->f_39[iVar0] != &Global_40.f_283[iVar0])
			{
				return 1;
			}
		}
		else if (&Global_1934765->f_39[iVar0] != &Global_1058888->f_40567[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_115(var uParam0)
{
	func_225(uParam0, uParam0->f_11 + 1);
}

void func_116(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_224());
	}
}

int func_117(int iParam0, vector3 vParam1, int iParam4, int iParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;

	iVar3 = ITEMSET::CREATE_ITEMSET(true);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar3))
	{
		return 0;
	}
	func_226(iParam0, vParam1, iParam4, iParam5, &vVar5, 0);
	func_116(&uVar2, vVar5, 0f, 0f, 0f, (fParam6 * 2f), (fParam6 * 2f), 1.2f);
	iVar1 = ENTITY::_0x886171A12F400B89(uVar2, iVar3, 3);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar4 = MISC::_0x18013392501CE5DC(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iVar3));
		if (!ENTITY::IS_ENTITY_DEAD(iVar4))
		{
			if (func_111(iParam0, ENTITY::GET_ENTITY_MODEL(iVar4)))
			{
				if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar4) > 0.95f)
				{
					func_59(uVar2);
					ITEMSET::_0x20A4BF0E09BEE146(iVar3);
					ITEMSET::DESTROY_ITEMSET(iVar3);
					return iVar4;
				}
			}
		}
		iVar0++;
	}
	func_59(uVar2);
	ITEMSET::_0x20A4BF0E09BEE146(iVar3);
	ITEMSET::DESTROY_ITEMSET(iVar3);
	return 0;
}

int func_118(int iParam0, vector3 vParam1, var uParam4, int iParam5, float fParam6, int iParam7)
{
	if (!func_227(iParam0))
	{
		return 0;
	}
	if (!func_228(iParam0, vParam1, uParam4, iParam5, fParam6, iParam7, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		*fParam6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*fParam6, *iParam7, 0f, 0f, -0.5f) };
	}
	else if (iParam0 == 3)
	{
		*fParam6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*fParam6, *iParam7, 0f, 0.05f, -0.5f) };
	}
	return 1;
}

void func_119(var uParam0)
{
}

int func_120(var uParam0)
{
	return 1;
}

int func_121(int iParam0, int iParam1, int iParam2)
{
	int iVar0[4];
	int iVar5;

	iVar5 = 0;
	if (iParam0 == 3)
	{
		return joaat("a_m_m_fivefingerfilletplayers_01");
	}
	else if (iParam0 == 2 || iParam0 == 0)
	{
		return joaat("a_m_m_cardgameplayers_01");
	}
	else if (iParam0 == 1)
	{
		return joaat("a_m_m_dominoesplayers_01");
	}
	switch (iParam1)
	{
		case 76:
			iVar0[0] = joaat("a_m_m_valtownfolk_01");
			iVar0[1] = joaat("a_m_m_valtownfolk_02");
			iVar5 = 2;
			break;
		case 105:
			iVar0[0] = joaat("a_m_m_rhdupperclass_01");
			iVar5 = 1;
			break;
		case 38:
			if (iParam0 == 1)
			{
				iVar0[0] = joaat("a_m_m_blwlaborer_01");
				iVar0[1] = joaat("a_m_m_blwlaborer_02");
				iVar5 = 2;
			}
			else
			{
				iVar0[0] = joaat("a_m_m_blwupperclass_01");
				iVar5 = 1;
			}
			break;
		case 115:
			iVar0[0] = joaat("a_m_m_tumtownfolk_01");
			iVar0[1] = joaat("a_m_m_tumtownfolk_02");
			iVar5 = 2;
			break;
		case 26:
			iVar0[0] = joaat("s_m_m_strlumberjack_01");
			iVar5 = 1;
			break;
		case 5:
			if (iParam0 == 1)
			{
				iVar0[0] = joaat("a_m_m_middlesdtownfolk_01");
				iVar0[1] = joaat("a_m_m_middlesdtownfolk_02");
				iVar0[2] = joaat("a_m_m_middlesdtownfolk_03");
				iVar5 = 3;
			}
			else
			{
				iVar0[0] = joaat("a_m_o_sdupperclass_01");
				iVar0[1] = joaat("a_m_o_sdupperclass_01");
				iVar5 = 2;
			}
			break;
		case 92:
			iVar0[0] = joaat("a_m_m_vhttownfolk_01");
			iVar5 = 1;
			break;
		case 69:
			if (iParam0 == 1)
			{
				iVar0[0] = joaat("a_m_m_emrfarmhand_01");
				iVar5 = 1;
			}
			else
			{
				iVar0[0] = joaat("a_m_m_emrfarmhand_01");
				iVar5 = 1;
			}
			break;
		case 75:
			iVar0[0] = joaat("a_m_m_valtownfolk_01");
			iVar0[1] = joaat("a_m_m_valtownfolk_02");
			iVar0[2] = joaat("s_m_m_valcowpoke_01");
			iVar5 = 3;
			break;
	}
	if (iVar5 == 0)
	{
		return 0;
	}
	else
	{
		if (iParam2 == -1)
		{
			iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
		}
		if (iParam2 < iVar5)
		{
			return &(iVar0[iParam2]);
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_122(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return joaat("s_m_m_rhddealer_01");
		case 5:
			return joaat("s_m_m_sddealer_01");
		case 26:
			return joaat("s_m_m_strdealer_01");
		case 76:
			return joaat("s_m_m_valdealer_01");
		case 92:
			return joaat("s_m_m_vhtdealer_01");
		case 78:
			return joaat("s_m_m_asbdealer_01");
		case 38:
			return joaat("s_m_m_blwdealer_01");
		case 75:
			return joaat("s_m_m_valdealer_01");
		default:
			break;
	}
	return 0;
}

int func_123(int iParam0, vector3 vParam1, float fParam4, int iParam5, vector3 vParam6, var uParam9, int iParam10)
{
	vector3 vVar0;
	float fVar3;

	if (!func_171(iParam0))
	{
		return 0;
	}
	if (!func_228(iParam0, vParam1, fParam4, iParam5, &vVar0, &fVar3, iParam10))
	{
		return 0;
	}
	*uParam9 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar3, vParam6) };
	return 1;
}

int func_124(int iParam0, float fParam1, int iParam2, var uParam3)
{
	float fVar0;

	if (!func_171(iParam0))
	{
		return 0;
	}
	if (!func_229(iParam0, iParam2, &fVar0))
	{
		return 0;
	}
	*uParam3 = (fParam1 + fVar0);
	if (*uParam3 > 360f)
	{
		*uParam3 = (*uParam3 - 360f);
	}
	if (*uParam3 < -360f)
	{
		*uParam3 = (*uParam3 + 360f);
	}
	return 1;
}

void func_125(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	func_230(uParam0, iParam1, 0, &vVar0, &vVar3, 1);
	func_129(uParam0, 24, func_231(24, 0), vVar0, vVar3, 0, 0);
}

int func_126(int iParam0)
{
	return (62 + iParam0);
}

int func_127(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;

	bVar0 = true;
	if (iParam1 == 0)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.038f, -0.0584f, 0.8029f };
			vVar4 = { 0f, -0.0001f, 11.1898f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.1179f, 0.0527f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, 1.4459f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.0351f, 0.1703f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, 19.0115f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.0718f, -0.0886f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, 9.99f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 1)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.0696f, 0.0037f, 0.8029f };
			vVar4 = { 0f, -0.0001f, -48.8102f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.0133f, 0.1285f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, -58.5541f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.1651f, 0.0547f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, -40.9885f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.0408f, -0.1065f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, -50.0101f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 2)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.0316f, 0.0621f, 0.8029f };
			vVar4 = { 0f, -0.0001f, -108.8102f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.1046f, 0.0758f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, -118.5541f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.1299f, -0.1156f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, -100.9885f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.1126f, -0.0179f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, -110.0101f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 3)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.038f, 0.0584f, 0.8029f };
			vVar4 = { 0f, -0.0001f, -168.8103f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.1179f, -0.0527f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, -178.5541f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.0351f, -0.1703f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, -160.9886f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.0718f, 0.0886f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, -170.0101f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 4)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.0696f, -0.0037f, 0.8029f };
			vVar4 = { 0f, -0.0001f, 131.1898f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.0133f, -0.1285f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, 121.446f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.1651f, -0.0547f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, 139.0115f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.0408f, 0.1065f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, 129.9899f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 5)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.0316f, -0.0621f, 0.8029f };
			vVar4 = { 0f, -0.0001f, 71.1897f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.1046f, -0.0758f, 0.8036f };
			vVar4 = { -0.492f, 0.7865f, 61.4459f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.1299f, 0.1156f, 0.8032f };
			vVar4 = { -0.0001f, -0.0002f, 79.0115f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.1126f, 0.0179f, 0.8037f };
			vVar4 = { 0.0004f, 0.002f, 69.9899f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	if (iParam5 < 0 || iParam5 >= 10)
	{
		return 0;
	}
	if (bParam6)
	{
		func_232(uParam0->f_3, uParam0->f_6, vVar1, vVar4, uParam3, uParam4);
	}
	else
	{
		*uParam3 = { vVar1 };
		*uParam4 = { vVar4 };
	}
	uParam3->f_2 = (uParam3->f_2 + (BUILTIN::TO_FLOAT(iParam5) * 0.006f));
	return 1;
}

int func_128()
{
	int iVar0;

	iVar0 = 1590697544;
	if (func_233(&iVar0, iLocal_0))
	{
		return iVar0;
	}
	return iVar0;
}

void func_129(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10)
{
	uParam0->f_281[iParam1 /*24*/] = 2;
	(uParam0->f_281[iParam1 /*24*/])->f_16 = { vParam3 };
	(uParam0->f_281[iParam1 /*24*/])->f_19 = { vParam6 };
	(uParam0->f_281[iParam1 /*24*/])->f_1 = iParam2;
	(uParam0->f_281[iParam1 /*24*/])->f_13 = iParam10;
	if (ENTITY::DOES_ENTITY_EXIST((uParam0->f_281[iParam1 /*24*/])->f_4))
	{
		if (ENTITY::GET_ENTITY_MODEL((uParam0->f_281[iParam1 /*24*/])->f_4) == iParam2)
		{
			if (!func_234((uParam0->f_281[iParam1 /*24*/])->f_16, ENTITY::GET_ENTITY_COORDS((uParam0->f_281[iParam1 /*24*/])->f_4, true, false)))
			{
				ENTITY::SET_ENTITY_COORDS((uParam0->f_281[iParam1 /*24*/])->f_4, (uParam0->f_281[iParam1 /*24*/])->f_16, true, false, false, true);
			}
			ENTITY::SET_ENTITY_ROTATION((uParam0->f_281[iParam1 /*24*/])->f_4, (uParam0->f_281[iParam1 /*24*/])->f_19, 2, true);
			uParam0->f_281[iParam1 /*24*/] = 5;
		}
		else
		{
			uParam0->f_281[iParam1 /*24*/] = 4;
		}
		if ((uParam0->f_281[iParam1 /*24*/])->f_13)
		{
			ENTITY::SET_ENTITY_VISIBLE((uParam0->f_281[iParam1 /*24*/])->f_4, false);
		}
		return;
	}
	if (iParam9 > 0)
	{
		uParam0->f_281[iParam1 /*24*/] = 1;
		(uParam0->f_281[iParam1 /*24*/])->f_2 = (MISC::GET_FRAME_COUNT() + iParam9);
	}
}

void func_130(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	var uVar1[4];
	var uVar6[4];
	var uVar11[4];

	func_235(iParam2, &uVar1, &uVar11);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uVar6[iVar0] = func_236(&(uVar1[iVar0]), &(uVar11[iVar0]), 10);
		func_237(uParam0, iParam1, iVar0, &(uVar1[iVar0]), &(uVar6[iVar0]), 0, bParam3);
		iVar0++;
	}
}

void func_131(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4)
{
	if (iParam2 == 0)
	{
		iParam2 = func_231(iParam1, 0);
	}
	func_129(uParam0, iParam1, iParam2, uParam0->f_3 - Vector(0.1f, 0f, 0f), 0f, 0f, 0f, fParam3, fParam4);
}

bool func_132(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_106)
	{
		return false;
	}
	if (&uParam0->f_95[iParam1] == -1)
	{
		return false;
	}
	return (uParam0->f_106[&uParam0->f_95[iParam1] /*29*/])->f_1 != 0;
}

void func_133(int iParam0, int iParam1)
{
	if (*iParam0 != iParam1)
	{
	}
	*iParam0 = iParam1;
	iParam0->f_4 = 0;
	func_73(&(iParam0->f_1));
}

void func_134(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3[4];
	var uVar8[4];

	switch (iParam0->f_4)
	{
		case 0:
			func_238(Global_1899750, uParam1->f_3 - Vector(2f, 0f, 0f));
			func_153(2);
			func_239(iParam0->f_378);
			func_240(1);
			func_241(iParam0);
			if (func_68() == 75)
			{
				func_242(-1801221395, 0, 0f, 0, 0, 0f, 0, 0);
				func_242(-1983417035, 1, 0f, 0, 0, 0f, 0, 0);
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if ((uParam1->f_106[iVar0 /*29*/])->f_12 != -1)
				{
					func_243(Global_1899750, (uParam1->f_106[iVar0 /*29*/])->f_11, iVar0, 0);
				}
				iVar0++;
			}
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_112(uParam1, iVar0))
				{
					if (!func_139(uParam1, iParam0->f_5[iVar0 /*62*/]))
					{
						return;
					}
					func_130(uParam1, iVar0, (iParam0->f_5[iVar0 /*62*/])->f_59, 1);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, iParam0, iVar0))
				{
					func_138(iParam0->f_5[iVar0 /*62*/], 11, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), 0);
				}
				iVar2 = func_245(iVar0, 0);
				func_246(uParam1, iVar2, -0.25f);
				iVar2 = (62 + iVar0);
				func_246(uParam1, iVar2, -0.25f);
				iVar0++;
			}
			func_241(iParam0);
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_112(uParam1, iVar0))
				{
					if (!func_139(uParam1, iParam0->f_5[iVar0 /*62*/]))
					{
						return;
					}
				}
				iVar0++;
			}
			func_138(iParam0->f_5[iParam0->f_378 /*62*/], 20, 0, 0);
			func_241(iParam0);
			break;
		case 3:
			if (!func_139(uParam1, iParam0->f_5[iParam0->f_378 /*62*/]))
			{
				return;
			}
			if (func_50() == 2)
			{
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if ((uParam1->f_106[iVar0 /*29*/])->f_12 != -1)
					{
						func_247(uParam1->f_1, (uParam1->f_106[iVar0 /*29*/])->f_11, iVar0, (Local_1.f_5[iVar0 /*62*/])->f_59, (Local_1.f_5[iVar0 /*62*/])->f_1, (uParam1->f_106[iVar0 /*29*/])->f_18, (uParam1->f_106[iVar0 /*29*/])->f_19);
					}
					else
					{
						func_247(uParam1->f_1, 0, iVar0, 0, 0, 0, 92);
					}
					func_235((Local_1.f_5[iVar0 /*62*/])->f_59, &uVar8, &uVar3);
					iVar1 = 0;
					while (iVar1 < 4)
					{
						iVar2 = ((0 + iVar0 * 4) + iVar1);
						if (ENTITY::DOES_ENTITY_EXIST((uParam1->f_281[iVar2 /*24*/])->f_4))
						{
							func_248(uParam1->f_1, (uParam1->f_281[iVar2 /*24*/])->f_4, iVar2, &(uVar8[iVar1]), &(uVar3[iVar1]));
							(uParam1->f_281[iVar2 /*24*/])->f_4 = 0;
							func_66(uParam1, iVar2, 0);
						}
						iVar1++;
					}
					iVar0++;
				}
				iVar2 = 24;
				if (ENTITY::DOES_ENTITY_EXIST((uParam1->f_281[iVar2 /*24*/])->f_4))
				{
					func_248(uParam1->f_1, (uParam1->f_281[iVar2 /*24*/])->f_4, iVar2, 0, 0);
					(uParam1->f_281[iVar2 /*24*/])->f_4 = 0;
					func_66(uParam1, iVar2, 0);
				}
				func_240(3);
				func_241(iParam0);
			}
			break;
		case 4:
			func_240(4);
			func_241(iParam0);
			break;
		case 5:
			if (func_50() == 5)
			{
				func_3(uParam1, 1, 0);
				func_21(uParam1, 10);
				func_72(iParam0);
			}
			break;
	}
}

int func_135(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < uParam0->f_106)
	{
		if (uParam0->f_106[iVar1 /*29*/] && (uParam0->f_106[iVar1 /*29*/])->f_1 == iParam1)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_136(var uParam0, var uParam1)
{
	int iVar0;

	uParam1->f_391 = (uParam1->f_391 - MISC::GET_FRAME_TIME());
	if (uParam1->f_391 > 0f)
	{
		return;
	}
	if (*uParam1 < 6)
	{
		return;
	}
	if (*uParam1 >= 14)
	{
		return;
	}
	iVar0 = func_249(uParam0, -1);
	if (iVar0 != -1)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING((uParam0->f_106[iVar0 /*29*/])->f_11))
		{
			return;
		}
		if (func_250(uParam0, (uParam0->f_106[iVar0 /*29*/])->f_11, "POKER_BANTER"))
		{
			uParam1->f_391 = MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 20f);
		}
	}
}

int func_137(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		iParam1 = (iParam1 + 1 % 6);
		if (uParam0->f_106[iParam1 /*29*/] && (uParam0->f_106[iParam1 /*29*/])->f_1 == 5)
		{
			return iParam1;
		}
		iVar0++;
	}
	return -1;
}

void func_138(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 == 0)
	{
	}
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	uParam0->f_4 = iParam2;
	uParam0->f_2 = 0f;
}

bool func_139(var uParam0, var uParam1)
{
	if (!func_112(uParam0, uParam1->f_5))
	{
		return true;
	}
	return ((uParam1->f_3 == 100 || *uParam1 == 1) || *uParam1 == 0);
}

int func_140(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;

	iVar2 = uParam0->f_387;
	switch (uParam0->f_4)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, uParam0, iVar2))
				{
					func_251(uParam0, uParam1, iVar2, fVar1);
					fVar1 = (fVar1 + MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 3f));
				}
				iVar2 = (iVar2 + 1 % 6);
				iVar0++;
			}
			func_241(uParam0);
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, uParam0, iVar0))
				{
					if (!func_139(uParam1, uParam0->f_5[iVar0 /*62*/]))
					{
						return 0;
					}
				}
				iVar0++;
			}
			func_138(uParam0->f_5[uParam0->f_378 /*62*/], 8, 0, 0);
			func_241(uParam0);
			break;
		case 2:
			if (func_139(uParam1, uParam0->f_5[uParam0->f_378 /*62*/]))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_141(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;

	iVar2 = uParam0->f_387;
	switch (uParam0->f_4)
	{
		case 0:
			uParam0->f_389++;
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, uParam0, iVar2))
				{
					func_251(uParam0, uParam1, iVar2, fVar1);
					fVar1 = (fVar1 + MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 3f));
				}
				iVar2 = (iVar2 + 1 % 6);
				iVar0++;
			}
			func_241(uParam0);
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, uParam0, iVar0))
				{
					if (!func_139(uParam1, uParam0->f_5[iVar0 /*62*/]))
					{
						return 0;
					}
				}
				iVar0++;
			}
			func_138(uParam0->f_5[uParam0->f_378 /*62*/], 9, 0, 0);
			func_241(uParam0);
			break;
		case 2:
			if (func_139(uParam1, uParam0->f_5[uParam0->f_378 /*62*/]))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_142(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;

	iVar2 = uParam0->f_387;
	switch (uParam0->f_4)
	{
		case 0:
			uParam0->f_389++;
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, uParam0, iVar2))
				{
					func_251(uParam0, uParam1, iVar2, fVar1);
					fVar1 = (fVar1 + MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 3f));
				}
				iVar2 = (iVar2 + 1 % 6);
				iVar0++;
			}
			func_241(uParam0);
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, uParam0, iVar0))
				{
					if (!func_139(uParam1, uParam0->f_5[iVar0 /*62*/]))
					{
						return 0;
					}
				}
				iVar0++;
			}
			func_138(uParam0->f_5[uParam0->f_378 /*62*/], 10, 0, 0);
			func_241(uParam0);
			break;
		case 2:
			if (func_139(uParam1, uParam0->f_5[uParam0->f_378 /*62*/]))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_143(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;

	iVar2 = uParam0->f_388;
	switch (uParam0->f_4)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, uParam0, iVar2))
				{
					if (iVar2 == uParam0->f_388)
					{
						func_138(uParam0->f_5[iVar2 /*62*/], 15, fVar1, 0);
					}
					else
					{
						func_138(uParam0->f_5[iVar2 /*62*/], 16, fVar1, 0);
					}
					fVar1 = (fVar1 + MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 3f));
				}
				iVar2 = (iVar2 + 1 % 6);
				iVar0++;
			}
			func_241(uParam0);
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (!func_139(uParam1, uParam0->f_5[iVar0 /*62*/]))
				{
					return 0;
				}
				iVar0++;
			}
			func_241(uParam0);
			break;
		case 2:
			return 1;
	}
	return 0;
}

int func_144(var uParam0, var uParam1, int iParam2)
{
	if (!MISC::IS_BIT_SET(uParam1->f_386, iParam2))
	{
		return 0;
	}
	return func_112(uParam0, iParam2);
}

int func_145(var uParam0, var uParam1)
{
	switch (uParam0->f_4)
	{
		case 0:
			if (func_139(uParam1, uParam0->f_5[uParam0->f_378 /*62*/]))
			{
				func_241(uParam0);
			}
			break;
		case 1:
			func_138(uParam0->f_5[uParam0->f_378 /*62*/], 20, 0, 0);
			func_241(uParam0);
			break;
		case 2:
			if (!func_139(uParam1, uParam0->f_5[uParam0->f_378 /*62*/]))
			{
				return 0;
			}
			uParam0->f_379 = uParam0->f_378;
			uParam0->f_378 = func_137(uParam1, uParam0->f_379);
			func_138(uParam0->f_5[uParam0->f_379 /*62*/], 18, 0, 0);
			func_241(uParam0);
			break;
		case 3:
			if (!func_139(uParam1, uParam0->f_5[uParam0->f_379 /*62*/]))
			{
				return 0;
			}
			func_138(uParam0->f_5[uParam0->f_378 /*62*/], 19, 0, 0);
			func_241(uParam0);
			break;
		case 4:
			if (!func_139(uParam1, uParam0->f_5[uParam0->f_378 /*62*/]))
			{
				return 0;
			}
			return 1;
	}
	return 0;
}

void func_146(int iParam0, int iParam1)
{
	func_242(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

int func_147(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (Global_1899528->f_61.f_1 != iParam0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	*uParam2 = &Global_1899528->f_61.f_7[iParam1];
	*uParam3 = &Global_1899528->f_61.f_14[iParam1];
	*uParam4 = &Global_1899528->f_61.f_21[iParam1];
	*uParam5 = &Global_1899528->f_61.f_28[iParam1];
	return &(Global_1899528->f_61.f_134[iParam1]);
}

int func_148(int iParam0, int iParam1)
{
	if (Global_1899528->f_61.f_1 != iParam0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	return &(Global_1899528->f_61.f_101[iParam1]);
}

void func_149(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 69)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST((uParam0->f_281[iParam1 /*24*/])->f_4))
	{
		(uParam0->f_281[iParam1 /*24*/])->f_4 = iParam2;
	}
	if (ENTITY::DOES_ENTITY_EXIST((uParam0->f_281[iParam1 /*24*/])->f_4))
	{
		uParam0->f_281[iParam1 /*24*/] = 5;
		(uParam0->f_281[iParam1 /*24*/])->f_13 = 0;
		(uParam0->f_281[iParam1 /*24*/])->f_1 = ENTITY::GET_ENTITY_MODEL((uParam0->f_281[iParam1 /*24*/])->f_4);
		(uParam0->f_281[iParam1 /*24*/])->f_16 = { ENTITY::GET_ENTITY_COORDS((uParam0->f_281[iParam1 /*24*/])->f_4, true, false) };
		(uParam0->f_281[iParam1 /*24*/])->f_19 = { ENTITY::GET_ENTITY_ROTATION((uParam0->f_281[iParam1 /*24*/])->f_4, 2) };
		(uParam0->f_281[iParam1 /*24*/])->f_23 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA((uParam0->f_281[iParam1 /*24*/])->f_4));
		if (!DECORATOR::DECOR_EXIST_ON((uParam0->f_281[iParam1 /*24*/])->f_4, "MinigameObject"))
		{
			DECORATOR::DECOR_SET_BOOL((uParam0->f_281[iParam1 /*24*/])->f_4, "MinigameObject", true);
		}
	}
}

var func_150()
{
	return Global_1899528->f_61.f_5;
}

void func_151()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1899528->f_61.f_134[iVar0] = 0;
		iVar0++;
	}
}

void func_152()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1899528->f_61.f_101[iVar0] = 0;
		iVar0++;
	}
}

void func_153(int iParam0)
{
	Global_1899528->f_61.f_1 = iParam0;
}

void func_154(int iParam0)
{
	Global_1899528->f_61.f_2 = iParam0;
}

int func_155()
{
	return Global_1899528->f_61.f_1;
}

int func_156(var uParam0)
{
	if (*uParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_11))
	{
		return 0;
	}
	return 1;
}

int func_157(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	float fVar8;

	fVar8 = (0.25f * 2f);
	if (!func_226(iParam0, vParam1, iParam4, iParam5, &vVar0, 1))
	{
		return 0;
	}
	iVar4 = ITEMSET::CREATE_ITEMSET(true);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar4))
	{
		return 0;
	}
	vVar0.f_2 = (vVar0.z + 0.9f);
	func_116(&uVar5, vVar0, 0f, 0f, 0f, fVar8, fVar8, 1.8f);
	iVar6 = ENTITY::_0x886171A12F400B89(uVar5, iVar4, 1);
	iVar7 = 0;
	while (iVar7 < iVar6)
	{
		iVar3 = MISC::_0x3FFB15534067DCD4(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar7, iVar4));
		if (func_252(iParam0, iVar3) || iParam8 == 1)
		{
			if (iParam7 == 0 || (iParam7 == 1 && !PED::IS_PED_A_PLAYER(iVar3)))
			{
				func_59(uVar5);
				ITEMSET::_0x20A4BF0E09BEE146(iVar4);
				ITEMSET::DESTROY_ITEMSET(iVar4);
				*iParam6 = iVar3;
				return 1;
			}
		}
		iVar7++;
	}
	func_59(uVar5);
	ITEMSET::_0x20A4BF0E09BEE146(iVar4);
	ITEMSET::DESTROY_ITEMSET(iVar4);
	return 0;
}

bool func_158(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 7)
	{
		return false;
	}
	return &uParam0->f_1938[iParam1 /*29*/] >= 4;
}

void func_159(var uParam0, int iParam1)
{
	if (iParam1 != *uParam0)
	{
	}
	if (iParam1 == 1 || iParam1 == 4)
	{
		uParam0->f_2 = 0f;
	}
	*uParam0 = iParam1;
}

int func_160(int iParam0)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return -1;
	}
	return &(Global_1899528->f_11[iParam0]);
}

void func_161(var uParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	if (iParam1 < 0 || iParam1 >= 69)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_281[iParam1 /*24*/])->f_5)))
	{
		return;
	}
	if ((uParam0->f_281[iParam1 /*24*/])->f_3 == -1)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST((uParam0->f_281[iParam1 /*24*/])->f_4))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS((uParam0->f_281[iParam1 /*24*/])->f_4, true, false) };
		vVar3 = { ENTITY::GET_ENTITY_ROTATION((uParam0->f_281[iParam1 /*24*/])->f_4, 2) };
		if (ANIMSCENE::_0x25557E324489393C((uParam0->f_281[iParam1 /*24*/])->f_3))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY((uParam0->f_281[iParam1 /*24*/])->f_3, &((uParam0->f_281[iParam1 /*24*/])->f_5), (uParam0->f_281[iParam1 /*24*/])->f_4);
		}
		if ((uParam0->f_281[iParam1 /*24*/])->f_15)
		{
			ANIMSCENE::_0xC1193521E3B9FADD((uParam0->f_281[iParam1 /*24*/])->f_4, 0);
			(uParam0->f_281[iParam1 /*24*/])->f_15 = 0;
		}
		if (bParam2)
		{
			func_162(uParam0, iParam1);
		}
		else if (!ENTITY::IS_ENTITY_ATTACHED((uParam0->f_281[iParam1 /*24*/])->f_4))
		{
			ENTITY::FREEZE_ENTITY_POSITION((uParam0->f_281[iParam1 /*24*/])->f_4, true);
			ENTITY::SET_ENTITY_COORDS((uParam0->f_281[iParam1 /*24*/])->f_4, vVar0, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION((uParam0->f_281[iParam1 /*24*/])->f_4, vVar3, 2, true);
			ENTITY::SET_ENTITY_COLLISION((uParam0->f_281[iParam1 /*24*/])->f_4, false, false);
		}
	}
	(uParam0->f_281[iParam1 /*24*/])->f_3 = -1;
	StringCopy(&((uParam0->f_281[iParam1 /*24*/])->f_5), "", 64);
}

void func_162(var uParam0, int iParam1)
{
	ENTITY::SET_ENTITY_COLLISION((uParam0->f_281[iParam1 /*24*/])->f_4, true, false);
	if (ENTITY::IS_ENTITY_ATTACHED((uParam0->f_281[iParam1 /*24*/])->f_4))
	{
		func_253((uParam0->f_281[iParam1 /*24*/])->f_4, 1, 1);
	}
	ENTITY::FREEZE_ENTITY_POSITION((uParam0->f_281[iParam1 /*24*/])->f_4, false);
	ENTITY::SET_ENTITY_DYNAMIC((uParam0->f_281[iParam1 /*24*/])->f_4, true);
	PHYSICS::ACTIVATE_PHYSICS((uParam0->f_281[iParam1 /*24*/])->f_4);
	ENTITY::SET_ENTITY_HAS_GRAVITY((uParam0->f_281[iParam1 /*24*/])->f_4, true);
}

void func_163(int* iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (bParam1)
	{
		if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
		{
			ENTITY::DETACH_ENTITY(*iParam0, true, true);
		}
	}
	if (bParam2)
	{
		OBJECT::_MARK_OBJECT_FOR_DELETION(*iParam0);
	}
	else
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
	}
}

void func_164(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	(uParam0->f_23[iParam1 /*11*/])->f_1 = iParam2;
	(uParam0->f_23[iParam1 /*11*/])->f_2 = { func_254(sParam3) };
}

int func_165(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case -2066272360:
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case -1861414976:
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case -1610966108:
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case -1455998786:
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case -1340339190:
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case -1296807958:
			return 320;
		case -1283202000:
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case -911126844:
			return 336;
		case -897750037:
			return 334;
		case -895073533:
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case -851626677:
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case -781631220:
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case -734416508:
			return 340;
		case -699277634:
			return 4;
		case -693828600:
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case -524787708:
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case -502473159:
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case -355531636:
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case -108780030:
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case -61411516:
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case 74872959:
			return 348;
		case 93964309:
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case 229371495:
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case 509781469:
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case 582380806:
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case 747514327:
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case 784360470:
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case 885378256:
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case 1159471771:
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case 1166612791:
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case 1238086793:
			return 313;
		case 1250636944:
			return 259;
		case 1302228510:
			return 315;
		case 1306158345:
			return 202;
		case 1321892118:
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case 1549124796:
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case 1703398561:
			return 332;
		case 1703426636:
			return 43;
		case 1708045337:
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case 1744443559:
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case 1932172605:
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case 2113625508:
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
			return 87;
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

void func_166(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		(*uParam0)[iVar0 /*2*/] = -1;
		((*uParam0)[iVar0 /*2*/])->f_1 = -1;
		iVar0++;
	}
	uParam0->f_23 = 0;
}

void func_167(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_78() - fParam1);
	func_255(uParam0, 1);
	func_256(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_168(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_169(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_257(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

bool func_170(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_171(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

int func_172()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

int func_173(int iParam0)
{
	return ((*Global_1392915)[iParam0 /*12*/])->f_1;
}

bool func_174(int iParam0)
{
	return (Global_1935630 && iParam0) != 0;
}

bool func_175(int iParam0)
{
	return (MISC::GET_GAME_TIMER() - iParam0) < &Global_1898438;
}

int func_176(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

void func_177(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_258(iParam1))
		{
			func_259(iParam0, 41788943);
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
			func_260(iParam0, 0, 1);
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
			func_261(iParam0, 0);
			bVar0 = true;
		}
		func_262(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

int func_178(int iParam0)
{
	if (iParam0 == 1)
	{
		return 6;
	}
	else if (iParam0 == 3)
	{
		return 4;
	}
	else if (iParam0 == 2 || iParam0 == 0)
	{
		return 12;
	}
	return 0;
}

int func_179(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		if (iParam2 == -1)
		{
			iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
		}
		switch (iParam1)
		{
			case 69:
				switch (iParam2)
				{
					case 0:
						return -1043092861;
					case 1:
						return -855293722;
					case 2:
						return 1321911407;
					case 3:
						return 1633413521;
					case 4:
						return -216756988;
					case 5:
						return 368759504;
					default:
						break;
				}
				return -1043092861;
			case 5:
				switch (iParam2)
				{
					case 0:
						return 68127406;
					case 1:
						return 912158539;
					case 2:
						return 629329300;
					case 3:
						return 1371088384;
					case 4:
						return 1263868216;
					case 5:
						return 2106064285;
					default:
						break;
				}
				return 68127406;
			case 38:
				switch (iParam2)
				{
					case 0:
						return 316456870;
					case 1:
						return -661468397;
					case 2:
						return -431954321;
					case 3:
						return -1139797490;
					case 4:
						return -875384429;
					case 5:
						return 436555239;
					default:
						break;
				}
				return 316456870;
		}
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == -1)
		{
			iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		}
		switch (iParam1)
		{
			case 76:
				switch (iParam2)
				{
					case 0:
						return -435547108;
					case 1:
						return -128698192;
					case 2:
						return 226255616;
					case 3:
						return -478015708;
					default:
						break;
				}
				return -435547108;
			case 26:
				switch (iParam2)
				{
					case 0:
						return 1752053992;
					case 1:
						return 2013845533;
					case 2:
						return -1950122094;
					case 3:
						return 496214832;
					default:
						break;
				}
				return 1752053992;
			case 92:
				switch (iParam2)
				{
					case 0:
						return 1194574257;
					case 1:
						return 2093821155;
					case 2:
						return -1582008655;
					case 3:
						return -1887776194;
					default:
						break;
				}
				return 1194574257;
		}
	}
	else if (iParam0 == 2 || iParam0 == 0)
	{
		if (iParam2 == -1)
		{
			iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
		}
		switch (iParam1)
		{
			case 5:
				switch (iParam2)
				{
					case 0:
						return 68127406;
					case 1:
						return 912158539;
					case 2:
						return 629329300;
					case 3:
						return 1371088384;
					case 4:
						return 1263868216;
					case 5:
						return 2106064285;
					case 6:
						return 1754977219;
					case 7:
						return -1726696266;
					case 8:
						return -1978394955;
					case 9:
						return -820633060;
					case 10:
						return -44073298;
					case 11:
						return -342303967;
					default:
						break;
				}
				return 68127406;
			case 38:
				switch (iParam2)
				{
					case 0:
						return 316456870;
					case 1:
						return -661468397;
					case 2:
						return -431954321;
					case 3:
						return -1139797490;
					case 4:
						return -875384429;
					case 5:
						return 436555239;
					case 6:
						return 666823002;
					case 7:
						return 4921971;
					case 8:
						return 251738079;
					case 9:
						return 478204342;
					case 10:
						return 777155929;
					case 11:
						return 1841389;
					default:
						break;
				}
				return 316456870;
			case 115:
				switch (iParam2)
				{
					case 0:
						return 2098938291;
					case 1:
						return 1839440580;
					case 2:
						return 680401050;
					case 3:
						return -1892751910;
					case 4:
						return 1174655877;
					case 5:
						return 979024947;
					case 6:
						return -240866616;
					case 7:
						return 1469806260;
					case 8:
						return 317713758;
					case 9:
						return 1934601404;
					case 10:
						return 487194674;
					case 11:
						return -1833636986;
					default:
						break;
				}
				return 2098938291;
			case 76:
				switch (iParam2)
				{
					case 0:
						return -435547108;
					case 1:
						return -128698192;
					case 2:
						return 226255616;
					case 3:
						return -478015708;
					case 4:
						return -194891548;
					case 5:
						return 112776593;
					case 6:
						return 411040031;
					case 7:
						return -1387257155;
					case 8:
						return -1087322498;
					case 9:
						return 2089668521;
					case 10:
						return 1791437852;
					case 11:
						return 1426194578;
					default:
						break;
				}
				return -435547108;
			case 92:
				switch (iParam2)
				{
					case 0:
						return 1194574257;
					case 1:
						return 2093821155;
					case 2:
						return -1582008655;
					case 3:
						return -1887776194;
					case 4:
						return -967360518;
					case 5:
						return -1276208343;
					case 6:
						return -506398995;
					case 7:
						return -815574510;
					case 8:
						return 104710086;
					case 9:
						return -1562249180;
					case 10:
						return -1812506033;
					case 11:
						return -1431009331;
					default:
						break;
				}
				return 1194574257;
			case 105:
				switch (iParam2)
				{
					case 0:
						return -1449777556;
					case 1:
						return 1700437490;
					case 2:
						return -2029723322;
					case 3:
						return 1088279801;
					case 4:
						return 1949514659;
					case 5:
						return 772091720;
					case 6:
						return 1338340040;
					case 7:
						return -321409750;
					case 8:
						return -1233239944;
					case 9:
						return 1051251111;
					case 10:
						return -262949646;
					case 11:
						return -726499920;
					default:
						break;
				}
				return -1449777556;
			case 75:
				switch (iParam2)
				{
					case 0:
						return -1600439903;
					case 1:
						return 1508387900;
					case 2:
						return 1147797824;
					case 3:
						return 1947066503;
					case 4:
						return 1716995354;
					case 5:
						return 401713232;
					case 6:
						return 163056605;
					case 7:
						return 1032745865;
					case 8:
						return 793499396;
					case 9:
						return 883482182;
					case 10:
						return 1123711721;
					case 11:
						return -903083698;
					default:
						break;
				}
				return -1600439903;
		}
	}
	return 0;
}

int func_180(int iParam0)
{
	int iVar0;

	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("s_m_m_blwdealer_01"):
		case joaat("s_m_m_valdealer_01"):
		case joaat("s_m_m_asbdealer_01"):
		case joaat("s_m_m_rhddealer_01"):
		case joaat("s_m_m_vhtdealer_01"):
		case joaat("s_m_m_strdealer_01"):
		case joaat("s_m_m_sddealer_01"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_181(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	if (*uParam3 < ((92 + 31) / 32))
	{
		return 0;
	}
	*iParam4 = 0;
	if (iParam1 == 1 && iParam0 == joaat("a_m_m_dominoesplayers_01"))
	{
		switch (iParam2)
		{
			case -1139797490:
			case -875384429:
			case -661468397:
			case -431954321:
			case 316456870:
			case 436555239:
				func_263(uParam3, 35);
				*iParam4++;
				func_263(uParam3, 36);
				*iParam4++;
				func_263(uParam3, 37);
				*iParam4++;
				func_263(uParam3, 38);
				*iParam4++;
				func_263(uParam3, 39);
				*iParam4++;
				func_263(uParam3, 45);
				*iParam4++;
				func_263(uParam3, 46);
				*iParam4++;
				func_263(uParam3, 47);
				*iParam4++;
				func_263(uParam3, 48);
				*iParam4++;
				func_263(uParam3, 50);
				*iParam4++;
				func_263(uParam3, 51);
				*iParam4++;
				func_263(uParam3, 52);
				*iParam4++;
				func_263(uParam3, 53);
				*iParam4++;
				if (iParam2 == 316456870)
				{
					func_263(uParam3, 63);
					*iParam4++;
					func_263(uParam3, 64);
					*iParam4++;
				}
				func_263(uParam3, 75);
				*iParam4++;
				break;
			case -1043092861:
			case -855293722:
			case -216756988:
			case 368759504:
			case 1321911407:
			case 1633413521:
				func_263(uParam3, 35);
				*iParam4++;
				func_263(uParam3, 36);
				*iParam4++;
				func_263(uParam3, 37);
				*iParam4++;
				func_263(uParam3, 38);
				*iParam4++;
				func_263(uParam3, 45);
				*iParam4++;
				func_263(uParam3, 46);
				*iParam4++;
				func_263(uParam3, 47);
				*iParam4++;
				func_263(uParam3, 48);
				*iParam4++;
				func_263(uParam3, 50);
				*iParam4++;
				func_263(uParam3, 51);
				*iParam4++;
				func_263(uParam3, 52);
				*iParam4++;
				func_263(uParam3, 53);
				*iParam4++;
				func_263(uParam3, 56);
				*iParam4++;
				if (iParam2 == -855293722)
				{
					func_263(uParam3, 63);
					*iParam4++;
					func_263(uParam3, 64);
					*iParam4++;
				}
				func_263(uParam3, 66);
				*iParam4++;
				func_263(uParam3, 67);
				*iParam4++;
				func_263(uParam3, 68);
				*iParam4++;
				func_263(uParam3, 71);
				*iParam4++;
				func_263(uParam3, 75);
				*iParam4++;
				break;
			case 68127406:
			case 629329300:
			case 1371088384:
			case 2106064285:
				func_263(uParam3, 37);
				*iParam4++;
				func_263(uParam3, 38);
				*iParam4++;
				func_263(uParam3, 39);
				*iParam4++;
				func_263(uParam3, 41);
				*iParam4++;
				func_263(uParam3, 50);
				*iParam4++;
				func_263(uParam3, 51);
				*iParam4++;
				func_263(uParam3, 52);
				*iParam4++;
				func_263(uParam3, 53);
				*iParam4++;
				break;
			case 912158539:
			case 1263868216:
				func_263(uParam3, 34);
				*iParam4++;
				func_263(uParam3, 58);
				*iParam4++;
				func_263(uParam3, 61);
				*iParam4++;
				func_263(uParam3, 73);
				*iParam4++;
				func_263(uParam3, 76);
				*iParam4++;
				break;
			default:
				func_263(uParam3, 1);
				*iParam4++;
				func_263(uParam3, 2);
				*iParam4++;
				func_263(uParam3, 3);
				*iParam4++;
				func_263(uParam3, 4);
				*iParam4++;
				func_263(uParam3, 5);
				*iParam4++;
				func_263(uParam3, 6);
				*iParam4++;
				return 0;
		}
	}
	else if (iParam1 == 0 && iParam0 == joaat("a_m_m_cardgameplayers_01"))
	{
		switch (iParam2)
		{
			case -2029723322:
			case -1449777556:
			case -1233239944:
			case -726499920:
			case -321409750:
			case -262949646:
			case 772091720:
			case 1051251111:
			case 1088279801:
			case 1338340040:
			case 1700437490:
			case 1949514659:
				func_263(uParam3, 2);
				*iParam4++;
				func_263(uParam3, 12);
				*iParam4++;
				func_263(uParam3, 16);
				*iParam4++;
				func_263(uParam3, 18);
				*iParam4++;
				func_263(uParam3, 26);
				*iParam4++;
				func_263(uParam3, 37);
				*iParam4++;
				func_263(uParam3, 38);
				*iParam4++;
				func_263(uParam3, 39);
				*iParam4++;
				func_263(uParam3, 48);
				*iParam4++;
				func_263(uParam3, 50);
				*iParam4++;
				break;
			case -1139797490:
			case -875384429:
			case -661468397:
			case -431954321:
			case 1841389:
			case 4921971:
			case 251738079:
			case 316456870:
			case 436555239:
			case 478204342:
			case 666823002:
			case 777155929:
				func_263(uParam3, 1);
				*iParam4++;
				func_263(uParam3, 2);
				*iParam4++;
				func_263(uParam3, 16);
				*iParam4++;
				func_263(uParam3, 18);
				*iParam4++;
				func_263(uParam3, 26);
				*iParam4++;
				func_263(uParam3, 37);
				*iParam4++;
				func_263(uParam3, 38);
				*iParam4++;
				func_263(uParam3, 39);
				*iParam4++;
				func_263(uParam3, 48);
				*iParam4++;
				func_263(uParam3, 50);
				*iParam4++;
				break;
			case -1887776194:
			case -1582008655:
			case -1562249180:
			case -1431009331:
			case -1276208343:
			case -815574510:
			case -506398995:
			case 104710086:
			case 1194574257:
			case 2093821155:
				func_263(uParam3, 3);
				*iParam4++;
				func_263(uParam3, 4);
				*iParam4++;
				func_263(uParam3, 5);
				*iParam4++;
				func_263(uParam3, 6);
				*iParam4++;
				func_263(uParam3, 7);
				*iParam4++;
				func_263(uParam3, 8);
				*iParam4++;
				func_263(uParam3, 9);
				*iParam4++;
				func_263(uParam3, 10);
				*iParam4++;
				func_263(uParam3, 11);
				*iParam4++;
				func_263(uParam3, 12);
				*iParam4++;
				func_263(uParam3, 35);
				*iParam4++;
				func_263(uParam3, 36);
				*iParam4++;
				func_263(uParam3, 45);
				*iParam4++;
				func_263(uParam3, 46);
				*iParam4++;
				func_263(uParam3, 47);
				*iParam4++;
				func_263(uParam3, 51);
				*iParam4++;
				func_263(uParam3, 52);
				*iParam4++;
				func_263(uParam3, 53);
				*iParam4++;
				func_263(uParam3, 56);
				*iParam4++;
				func_263(uParam3, 63);
				*iParam4++;
				func_263(uParam3, 64);
				*iParam4++;
				func_263(uParam3, 66);
				*iParam4++;
				func_263(uParam3, 67);
				*iParam4++;
				func_263(uParam3, 68);
				*iParam4++;
				func_263(uParam3, 71);
				*iParam4++;
				func_263(uParam3, 75);
				*iParam4++;
				break;
			case -1812506033:
			case -967360518:
				func_263(uParam3, 7);
				*iParam4++;
				func_263(uParam3, 8);
				*iParam4++;
				func_263(uParam3, 9);
				*iParam4++;
				func_263(uParam3, 10);
				*iParam4++;
				func_263(uParam3, 11);
				*iParam4++;
				func_263(uParam3, 12);
				*iParam4++;
				func_263(uParam3, 14);
				*iParam4++;
				func_263(uParam3, 17);
				*iParam4++;
				func_263(uParam3, 34);
				*iParam4++;
				func_263(uParam3, 58);
				*iParam4++;
				func_263(uParam3, 73);
				*iParam4++;
				func_263(uParam3, 76);
				*iParam4++;
				break;
			default:
				return 0;
		}
	}
	else if (iParam1 == 2 && iParam0 == joaat("a_m_m_cardgameplayers_01"))
	{
		switch (iParam2)
		{
			case -1387257155:
			case -1087322498:
			case -478015708:
			case -435547108:
			case -194891548:
			case -128698192:
			case 112776593:
			case 226255616:
			case 411040031:
			case 1426194578:
			case 1791437852:
			case 2089668521:
				func_263(uParam3, 1);
				*iParam4++;
				func_263(uParam3, 2);
				*iParam4++;
				func_263(uParam3, 3);
				*iParam4++;
				func_263(uParam3, 4);
				*iParam4++;
				func_263(uParam3, 5);
				*iParam4++;
				func_263(uParam3, 6);
				*iParam4++;
				func_263(uParam3, 7);
				*iParam4++;
				func_263(uParam3, 8);
				*iParam4++;
				func_263(uParam3, 9);
				*iParam4++;
				func_263(uParam3, 10);
				*iParam4++;
				func_263(uParam3, 11);
				*iParam4++;
				func_263(uParam3, 12);
				*iParam4++;
				func_263(uParam3, 16);
				*iParam4++;
				func_263(uParam3, 18);
				*iParam4++;
				func_263(uParam3, 29);
				*iParam4++;
				func_263(uParam3, 35);
				*iParam4++;
				func_263(uParam3, 36);
				*iParam4++;
				func_263(uParam3, 39);
				*iParam4++;
				func_263(uParam3, 45);
				*iParam4++;
				func_263(uParam3, 46);
				*iParam4++;
				func_263(uParam3, 47);
				*iParam4++;
				func_263(uParam3, 48);
				*iParam4++;
				func_263(uParam3, 50);
				*iParam4++;
				func_263(uParam3, 51);
				*iParam4++;
				func_263(uParam3, 52);
				*iParam4++;
				func_263(uParam3, 53);
				*iParam4++;
				func_263(uParam3, 56);
				*iParam4++;
				func_263(uParam3, 63);
				*iParam4++;
				func_263(uParam3, 64);
				*iParam4++;
				func_263(uParam3, 66);
				*iParam4++;
				func_263(uParam3, 67);
				*iParam4++;
				func_263(uParam3, 68);
				*iParam4++;
				func_263(uParam3, 71);
				*iParam4++;
				func_263(uParam3, 75);
				*iParam4++;
				break;
			case -1139797490:
			case -875384429:
			case -661468397:
			case -431954321:
			case 1841389:
			case 4921971:
			case 251738079:
			case 316456870:
			case 436555239:
			case 478204342:
			case 666823002:
			case 777155929:
				func_263(uParam3, 1);
				*iParam4++;
				func_263(uParam3, 2);
				*iParam4++;
				func_263(uParam3, 16);
				*iParam4++;
				func_263(uParam3, 18);
				*iParam4++;
				func_263(uParam3, 26);
				*iParam4++;
				func_263(uParam3, 37);
				*iParam4++;
				func_263(uParam3, 38);
				*iParam4++;
				func_263(uParam3, 39);
				*iParam4++;
				func_263(uParam3, 48);
				*iParam4++;
				func_263(uParam3, 50);
				*iParam4++;
				break;
			case -1978394955:
			case -1726696266:
			case -820633060:
			case -342303967:
			case -44073298:
			case 68127406:
			case 629329300:
			case 912158539:
			case 1263868216:
			case 1371088384:
			case 1754977219:
			case 2106064285:
				func_263(uParam3, 26);
				*iParam4++;
				func_263(uParam3, 28);
				*iParam4++;
				func_263(uParam3, 37);
				*iParam4++;
				func_263(uParam3, 38);
				*iParam4++;
				func_263(uParam3, 41);
				*iParam4++;
				func_263(uParam3, 50);
				*iParam4++;
				break;
			case -1600439903:
			case -903083698:
			case 163056605:
			case 401713232:
			case 793499396:
			case 883482182:
			case 1032745865:
			case 1123711721:
			case 1147797824:
			case 1508387900:
			case 1716995354:
			case 1947066503:
				func_263(uParam3, 1);
				*iParam4++;
				func_263(uParam3, 2);
				*iParam4++;
				func_263(uParam3, 7);
				*iParam4++;
				func_263(uParam3, 8);
				*iParam4++;
				func_263(uParam3, 9);
				*iParam4++;
				func_263(uParam3, 10);
				*iParam4++;
				func_263(uParam3, 11);
				*iParam4++;
				func_263(uParam3, 12);
				*iParam4++;
				func_263(uParam3, 15);
				*iParam4++;
				func_263(uParam3, 16);
				*iParam4++;
				func_263(uParam3, 35);
				*iParam4++;
				func_263(uParam3, 36);
				*iParam4++;
				func_263(uParam3, 39);
				*iParam4++;
				func_263(uParam3, 48);
				*iParam4++;
				func_263(uParam3, 51);
				*iParam4++;
				func_263(uParam3, 52);
				*iParam4++;
				func_263(uParam3, 53);
				*iParam4++;
				func_263(uParam3, 56);
				*iParam4++;
				func_263(uParam3, 63);
				*iParam4++;
				func_263(uParam3, 64);
				*iParam4++;
				func_263(uParam3, 66);
				*iParam4++;
				func_263(uParam3, 67);
				*iParam4++;
				func_263(uParam3, 68);
				*iParam4++;
				func_263(uParam3, 71);
				*iParam4++;
				func_263(uParam3, 75);
				*iParam4++;
				break;
			case -1892751910:
			case -1833636986:
			case 317713758:
			case 680401050:
			case 979024947:
			case 1174655877:
			case 1469806260:
			case 2098938291:
				func_263(uParam3, 1);
				*iParam4++;
				func_263(uParam3, 2);
				*iParam4++;
				func_263(uParam3, 3);
				*iParam4++;
				func_263(uParam3, 4);
				*iParam4++;
				func_263(uParam3, 5);
				*iParam4++;
				func_263(uParam3, 6);
				*iParam4++;
				func_263(uParam3, 7);
				*iParam4++;
				func_263(uParam3, 8);
				*iParam4++;
				func_263(uParam3, 9);
				*iParam4++;
				func_263(uParam3, 10);
				*iParam4++;
				func_263(uParam3, 11);
				*iParam4++;
				func_263(uParam3, 12);
				*iParam4++;
				func_263(uParam3, 16);
				*iParam4++;
				func_263(uParam3, 18);
				*iParam4++;
				func_263(uParam3, 29);
				*iParam4++;
				func_263(uParam3, 35);
				*iParam4++;
				func_263(uParam3, 36);
				*iParam4++;
				func_263(uParam3, 39);
				*iParam4++;
				func_263(uParam3, 45);
				*iParam4++;
				func_263(uParam3, 46);
				*iParam4++;
				func_263(uParam3, 47);
				*iParam4++;
				func_263(uParam3, 48);
				*iParam4++;
				func_263(uParam3, 50);
				*iParam4++;
				func_263(uParam3, 51);
				*iParam4++;
				func_263(uParam3, 52);
				*iParam4++;
				func_263(uParam3, 53);
				*iParam4++;
				func_263(uParam3, 56);
				*iParam4++;
				func_263(uParam3, 63);
				*iParam4++;
				func_263(uParam3, 64);
				*iParam4++;
				func_263(uParam3, 66);
				*iParam4++;
				func_263(uParam3, 67);
				*iParam4++;
				func_263(uParam3, 68);
				*iParam4++;
				func_263(uParam3, 71);
				*iParam4++;
				func_263(uParam3, 75);
				*iParam4++;
				break;
			case -240866616:
			case 487194674:
			case 1839440580:
			case 1934601404:
				func_263(uParam3, 14);
				*iParam4++;
				func_263(uParam3, 17);
				*iParam4++;
				func_263(uParam3, 34);
				*iParam4++;
				func_263(uParam3, 58);
				*iParam4++;
				func_263(uParam3, 73);
				*iParam4++;
				func_263(uParam3, 76);
				*iParam4++;
				break;
			default:
				return 0;
		}
	}
	return 1;
}

bool func_182(var uParam0, int iParam1)
{
	return MISC::_0x8F4F050054005C27(uParam0, iParam1);
}

int func_183(int iParam0, int iParam1, var uParam2, int iParam3)
{
	if (*uParam2 < ((92 + 31) / 32))
	{
		return 0;
	}
	*iParam3 = 0;
	if (iParam1 == 3)
	{
		switch (iParam0)
		{
			case joaat("a_m_m_fivefingerfilletplayers_01"):
				func_263(uParam2, 43);
				*iParam3++;
				func_263(uParam2, 44);
				*iParam3++;
				func_263(uParam2, 54);
				*iParam3++;
				func_263(uParam2, 70);
				*iParam3++;
				break;
			default:
				func_263(uParam2, 43);
				*iParam3++;
				func_263(uParam2, 44);
				*iParam3++;
				func_263(uParam2, 54);
				*iParam3++;
				func_263(uParam2, 70);
				*iParam3++;
				return 0;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("a_m_m_cardgameplayers_01"):
				func_263(uParam2, 1);
				*iParam3++;
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 3);
				*iParam3++;
				func_263(uParam2, 4);
				*iParam3++;
				func_263(uParam2, 5);
				*iParam3++;
				func_263(uParam2, 6);
				*iParam3++;
				func_263(uParam2, 7);
				*iParam3++;
				func_263(uParam2, 8);
				*iParam3++;
				func_263(uParam2, 9);
				*iParam3++;
				func_263(uParam2, 10);
				*iParam3++;
				func_263(uParam2, 11);
				*iParam3++;
				func_263(uParam2, 12);
				*iParam3++;
				func_263(uParam2, 13);
				*iParam3++;
				func_263(uParam2, 14);
				*iParam3++;
				func_263(uParam2, 15);
				*iParam3++;
				func_263(uParam2, 16);
				*iParam3++;
				func_263(uParam2, 17);
				*iParam3++;
				func_263(uParam2, 18);
				*iParam3++;
				func_263(uParam2, 29);
				*iParam3++;
				func_263(uParam2, 30);
				*iParam3++;
				func_263(uParam2, 31);
				*iParam3++;
				func_263(uParam2, 35);
				*iParam3++;
				func_263(uParam2, 36);
				*iParam3++;
				func_263(uParam2, 37);
				*iParam3++;
				func_263(uParam2, 38);
				*iParam3++;
				func_263(uParam2, 39);
				*iParam3++;
				func_263(uParam2, 45);
				*iParam3++;
				func_263(uParam2, 46);
				*iParam3++;
				func_263(uParam2, 47);
				*iParam3++;
				func_263(uParam2, 48);
				*iParam3++;
				func_263(uParam2, 49);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 51);
				*iParam3++;
				func_263(uParam2, 52);
				*iParam3++;
				func_263(uParam2, 53);
				*iParam3++;
				func_263(uParam2, 55);
				*iParam3++;
				func_263(uParam2, 56);
				*iParam3++;
				func_263(uParam2, 58);
				*iParam3++;
				func_263(uParam2, 61);
				*iParam3++;
				func_263(uParam2, 63);
				*iParam3++;
				func_263(uParam2, 64);
				*iParam3++;
				func_263(uParam2, 65);
				*iParam3++;
				func_263(uParam2, 66);
				*iParam3++;
				func_263(uParam2, 67);
				*iParam3++;
				func_263(uParam2, 68);
				*iParam3++;
				func_263(uParam2, 71);
				*iParam3++;
				func_263(uParam2, 73);
				*iParam3++;
				func_263(uParam2, 75);
				*iParam3++;
				func_263(uParam2, 76);
				*iParam3++;
				func_263(uParam2, 82);
				*iParam3++;
				func_263(uParam2, 84);
				*iParam3++;
				func_263(uParam2, 26);
				*iParam3++;
				func_263(uParam2, 28);
				*iParam3++;
				func_263(uParam2, 41);
				*iParam3++;
				break;
			case joaat("a_m_m_valtownfolk_01"):
			case joaat("a_m_m_valtownfolk_02"):
			case joaat("s_m_m_valcowpoke_01"):
				func_263(uParam2, 1);
				*iParam3++;
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 3);
				*iParam3++;
				func_263(uParam2, 4);
				*iParam3++;
				func_263(uParam2, 5);
				*iParam3++;
				func_263(uParam2, 6);
				*iParam3++;
				func_263(uParam2, 7);
				*iParam3++;
				func_263(uParam2, 8);
				*iParam3++;
				func_263(uParam2, 9);
				*iParam3++;
				func_263(uParam2, 10);
				*iParam3++;
				func_263(uParam2, 11);
				*iParam3++;
				func_263(uParam2, 12);
				*iParam3++;
				func_263(uParam2, 13);
				*iParam3++;
				func_263(uParam2, 14);
				*iParam3++;
				func_263(uParam2, 15);
				*iParam3++;
				func_263(uParam2, 16);
				*iParam3++;
				func_263(uParam2, 17);
				*iParam3++;
				func_263(uParam2, 18);
				*iParam3++;
				func_263(uParam2, 29);
				*iParam3++;
				func_263(uParam2, 30);
				*iParam3++;
				func_263(uParam2, 31);
				*iParam3++;
				func_263(uParam2, 35);
				*iParam3++;
				func_263(uParam2, 36);
				*iParam3++;
				func_263(uParam2, 37);
				*iParam3++;
				func_263(uParam2, 38);
				*iParam3++;
				func_263(uParam2, 39);
				*iParam3++;
				func_263(uParam2, 45);
				*iParam3++;
				func_263(uParam2, 46);
				*iParam3++;
				func_263(uParam2, 47);
				*iParam3++;
				func_263(uParam2, 48);
				*iParam3++;
				func_263(uParam2, 49);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 51);
				*iParam3++;
				func_263(uParam2, 52);
				*iParam3++;
				func_263(uParam2, 53);
				*iParam3++;
				func_263(uParam2, 55);
				*iParam3++;
				func_263(uParam2, 56);
				*iParam3++;
				func_263(uParam2, 58);
				*iParam3++;
				func_263(uParam2, 61);
				*iParam3++;
				func_263(uParam2, 63);
				*iParam3++;
				func_263(uParam2, 64);
				*iParam3++;
				func_263(uParam2, 65);
				*iParam3++;
				func_263(uParam2, 66);
				*iParam3++;
				func_263(uParam2, 67);
				*iParam3++;
				func_263(uParam2, 68);
				*iParam3++;
				func_263(uParam2, 71);
				*iParam3++;
				func_263(uParam2, 73);
				*iParam3++;
				func_263(uParam2, 75);
				*iParam3++;
				func_263(uParam2, 76);
				*iParam3++;
				func_263(uParam2, 82);
				*iParam3++;
				func_263(uParam2, 84);
				*iParam3++;
				break;
			case joaat("u_m_m_valgunsmith_01"):
				func_263(uParam2, 84);
				*iParam3++;
				break;
			case joaat("u_m_m_valdoctor_01"):
				func_263(uParam2, 82);
				*iParam3++;
				break;
			case joaat("a_m_m_blwupperclass_01"):
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 12);
				*iParam3++;
				func_263(uParam2, 16);
				*iParam3++;
				func_263(uParam2, 18);
				*iParam3++;
				func_263(uParam2, 26);
				*iParam3++;
				func_263(uParam2, 30);
				*iParam3++;
				func_263(uParam2, 37);
				*iParam3++;
				func_263(uParam2, 39);
				*iParam3++;
				func_263(uParam2, 49);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 75);
				*iParam3++;
				func_263(uParam2, 76);
				*iParam3++;
				break;
			case joaat("a_m_o_blwupperclass_01"):
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 12);
				*iParam3++;
				func_263(uParam2, 16);
				*iParam3++;
				func_263(uParam2, 18);
				*iParam3++;
				func_263(uParam2, 26);
				*iParam3++;
				func_263(uParam2, 39);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 75);
				*iParam3++;
				func_263(uParam2, 76);
				*iParam3++;
				break;
			case joaat("u_m_o_blwgeneralstoreowner_01"):
				func_263(uParam2, 86);
				*iParam3++;
				break;
			case joaat("a_m_m_blwforeman_01"):
				func_263(uParam2, 1);
				*iParam3++;
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 7);
				*iParam3++;
				func_263(uParam2, 8);
				*iParam3++;
				func_263(uParam2, 9);
				*iParam3++;
				func_263(uParam2, 10);
				*iParam3++;
				func_263(uParam2, 11);
				*iParam3++;
				func_263(uParam2, 12);
				*iParam3++;
				func_263(uParam2, 13);
				*iParam3++;
				func_263(uParam2, 14);
				*iParam3++;
				func_263(uParam2, 15);
				*iParam3++;
				func_263(uParam2, 16);
				*iParam3++;
				func_263(uParam2, 17);
				*iParam3++;
				func_263(uParam2, 18);
				*iParam3++;
				func_263(uParam2, 26);
				*iParam3++;
				func_263(uParam2, 30);
				*iParam3++;
				func_263(uParam2, 31);
				*iParam3++;
				func_263(uParam2, 37);
				*iParam3++;
				func_263(uParam2, 38);
				*iParam3++;
				func_263(uParam2, 39);
				*iParam3++;
				func_263(uParam2, 48);
				*iParam3++;
				func_263(uParam2, 49);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 61);
				*iParam3++;
				func_263(uParam2, 75);
				*iParam3++;
				func_263(uParam2, 76);
				*iParam3++;
				break;
			case joaat("a_m_o_sdupperclass_01"):
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 26);
				*iParam3++;
				func_263(uParam2, 28);
				*iParam3++;
				func_263(uParam2, 37);
				*iParam3++;
				func_263(uParam2, 41);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				break;
			case joaat("a_m_m_rhdupperclass_01"):
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 12);
				*iParam3++;
				func_263(uParam2, 16);
				*iParam3++;
				func_263(uParam2, 18);
				*iParam3++;
				func_263(uParam2, 26);
				*iParam3++;
				func_263(uParam2, 28);
				*iParam3++;
				func_263(uParam2, 29);
				*iParam3++;
				func_263(uParam2, 30);
				*iParam3++;
				func_263(uParam2, 31);
				*iParam3++;
				func_263(uParam2, 37);
				*iParam3++;
				func_263(uParam2, 39);
				*iParam3++;
				func_263(uParam2, 49);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 75);
				*iParam3++;
				break;
			case joaat("a_m_m_rhdforeman_01"):
				func_263(uParam2, 1);
				*iParam3++;
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 26);
				*iParam3++;
				func_263(uParam2, 28);
				*iParam3++;
				func_263(uParam2, 29);
				*iParam3++;
				func_263(uParam2, 30);
				*iParam3++;
				func_263(uParam2, 31);
				*iParam3++;
				func_263(uParam2, 37);
				*iParam3++;
				func_263(uParam2, 38);
				*iParam3++;
				func_263(uParam2, 39);
				*iParam3++;
				func_263(uParam2, 49);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 51);
				*iParam3++;
				func_263(uParam2, 52);
				*iParam3++;
				func_263(uParam2, 53);
				*iParam3++;
				func_263(uParam2, 63);
				*iParam3++;
				func_263(uParam2, 64);
				*iParam3++;
				break;
			case joaat("u_m_m_rhdgenstoreowner_01"):
				func_263(uParam2, 80);
				*iParam3++;
				break;
			case joaat("a_m_m_vhtthug_01"):
			case joaat("a_m_m_vhttownfolk_01"):
				func_263(uParam2, 3);
				*iParam3++;
				func_263(uParam2, 4);
				*iParam3++;
				func_263(uParam2, 5);
				*iParam3++;
				func_263(uParam2, 6);
				*iParam3++;
				func_263(uParam2, 14);
				*iParam3++;
				func_263(uParam2, 15);
				*iParam3++;
				func_263(uParam2, 16);
				*iParam3++;
				func_263(uParam2, 17);
				*iParam3++;
				func_263(uParam2, 18);
				*iParam3++;
				func_263(uParam2, 29);
				*iParam3++;
				func_263(uParam2, 30);
				*iParam3++;
				func_263(uParam2, 31);
				*iParam3++;
				func_263(uParam2, 35);
				*iParam3++;
				func_263(uParam2, 36);
				*iParam3++;
				func_263(uParam2, 37);
				*iParam3++;
				func_263(uParam2, 38);
				*iParam3++;
				func_263(uParam2, 45);
				*iParam3++;
				func_263(uParam2, 46);
				*iParam3++;
				func_263(uParam2, 47);
				*iParam3++;
				func_263(uParam2, 48);
				*iParam3++;
				func_263(uParam2, 49);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 51);
				*iParam3++;
				func_263(uParam2, 52);
				*iParam3++;
				func_263(uParam2, 53);
				*iParam3++;
				func_263(uParam2, 55);
				*iParam3++;
				func_263(uParam2, 56);
				*iParam3++;
				func_263(uParam2, 58);
				*iParam3++;
				func_263(uParam2, 61);
				*iParam3++;
				func_263(uParam2, 62);
				*iParam3++;
				func_263(uParam2, 63);
				*iParam3++;
				func_263(uParam2, 64);
				*iParam3++;
				func_263(uParam2, 65);
				*iParam3++;
				func_263(uParam2, 66);
				*iParam3++;
				func_263(uParam2, 67);
				*iParam3++;
				func_263(uParam2, 68);
				*iParam3++;
				func_263(uParam2, 71);
				*iParam3++;
				func_263(uParam2, 73);
				*iParam3++;
				func_263(uParam2, 79);
				*iParam3++;
				break;
			case joaat("a_m_m_blwlaborer_01"):
			case joaat("a_m_m_blwlaborer_02"):
				func_263(uParam2, 1);
				*iParam3++;
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 3);
				*iParam3++;
				func_263(uParam2, 4);
				*iParam3++;
				func_263(uParam2, 5);
				*iParam3++;
				func_263(uParam2, 6);
				*iParam3++;
				func_263(uParam2, 7);
				*iParam3++;
				func_263(uParam2, 8);
				*iParam3++;
				func_263(uParam2, 9);
				*iParam3++;
				func_263(uParam2, 10);
				*iParam3++;
				func_263(uParam2, 11);
				*iParam3++;
				func_263(uParam2, 12);
				*iParam3++;
				func_263(uParam2, 13);
				*iParam3++;
				func_263(uParam2, 14);
				*iParam3++;
				func_263(uParam2, 15);
				*iParam3++;
				func_263(uParam2, 16);
				*iParam3++;
				func_263(uParam2, 17);
				*iParam3++;
				func_263(uParam2, 18);
				*iParam3++;
				func_263(uParam2, 30);
				*iParam3++;
				func_263(uParam2, 31);
				*iParam3++;
				func_263(uParam2, 35);
				*iParam3++;
				func_263(uParam2, 36);
				*iParam3++;
				func_263(uParam2, 37);
				*iParam3++;
				func_263(uParam2, 38);
				*iParam3++;
				func_263(uParam2, 39);
				*iParam3++;
				func_263(uParam2, 45);
				*iParam3++;
				func_263(uParam2, 46);
				*iParam3++;
				func_263(uParam2, 47);
				*iParam3++;
				func_263(uParam2, 48);
				*iParam3++;
				func_263(uParam2, 49);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 51);
				*iParam3++;
				func_263(uParam2, 52);
				*iParam3++;
				func_263(uParam2, 53);
				*iParam3++;
				func_263(uParam2, 61);
				*iParam3++;
				func_263(uParam2, 75);
				*iParam3++;
				func_263(uParam2, 76);
				*iParam3++;
				break;
			case joaat("a_m_m_middlesdtownfolk_03"):
			case joaat("a_m_m_middlesdtownfolk_02"):
			case joaat("a_m_m_middlesdtownfolk_01"):
				func_263(uParam2, 1);
				*iParam3++;
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 26);
				*iParam3++;
				func_263(uParam2, 28);
				*iParam3++;
				func_263(uParam2, 29);
				*iParam3++;
				func_263(uParam2, 30);
				*iParam3++;
				func_263(uParam2, 31);
				*iParam3++;
				func_263(uParam2, 34);
				*iParam3++;
				func_263(uParam2, 37);
				*iParam3++;
				func_263(uParam2, 38);
				*iParam3++;
				func_263(uParam2, 39);
				*iParam3++;
				func_263(uParam2, 41);
				*iParam3++;
				func_263(uParam2, 49);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 51);
				*iParam3++;
				func_263(uParam2, 52);
				*iParam3++;
				func_263(uParam2, 53);
				*iParam3++;
				break;
			case joaat("a_m_m_emrfarmhand_01"):
				func_263(uParam2, 1);
				*iParam3++;
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 3);
				*iParam3++;
				func_263(uParam2, 4);
				*iParam3++;
				func_263(uParam2, 5);
				*iParam3++;
				func_263(uParam2, 6);
				*iParam3++;
				func_263(uParam2, 7);
				*iParam3++;
				func_263(uParam2, 8);
				*iParam3++;
				func_263(uParam2, 9);
				*iParam3++;
				func_263(uParam2, 10);
				*iParam3++;
				func_263(uParam2, 11);
				*iParam3++;
				func_263(uParam2, 12);
				*iParam3++;
				func_263(uParam2, 13);
				*iParam3++;
				func_263(uParam2, 14);
				*iParam3++;
				func_263(uParam2, 15);
				*iParam3++;
				func_263(uParam2, 16);
				*iParam3++;
				func_263(uParam2, 17);
				*iParam3++;
				func_263(uParam2, 18);
				*iParam3++;
				func_263(uParam2, 29);
				*iParam3++;
				func_263(uParam2, 30);
				*iParam3++;
				func_263(uParam2, 31);
				*iParam3++;
				func_263(uParam2, 35);
				*iParam3++;
				func_263(uParam2, 36);
				*iParam3++;
				func_263(uParam2, 37);
				*iParam3++;
				func_263(uParam2, 38);
				*iParam3++;
				func_263(uParam2, 45);
				*iParam3++;
				func_263(uParam2, 46);
				*iParam3++;
				func_263(uParam2, 47);
				*iParam3++;
				func_263(uParam2, 48);
				*iParam3++;
				func_263(uParam2, 49);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 51);
				*iParam3++;
				func_263(uParam2, 52);
				*iParam3++;
				func_263(uParam2, 53);
				*iParam3++;
				func_263(uParam2, 55);
				*iParam3++;
				func_263(uParam2, 56);
				*iParam3++;
				func_263(uParam2, 58);
				*iParam3++;
				func_263(uParam2, 61);
				*iParam3++;
				func_263(uParam2, 65);
				*iParam3++;
				func_263(uParam2, 66);
				*iParam3++;
				func_263(uParam2, 67);
				*iParam3++;
				func_263(uParam2, 68);
				*iParam3++;
				func_263(uParam2, 71);
				*iParam3++;
				func_263(uParam2, 73);
				*iParam3++;
				func_263(uParam2, 75);
				*iParam3++;
				func_263(uParam2, 76);
				*iParam3++;
				break;
			case joaat("a_m_m_tumtownfolk_01"):
			case joaat("a_m_m_tumtownfolk_02"):
				func_263(uParam2, 45);
				*iParam3++;
				func_263(uParam2, 46);
				*iParam3++;
				func_263(uParam2, 47);
				*iParam3++;
				func_263(uParam2, 48);
				*iParam3++;
				func_263(uParam2, 49);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 51);
				*iParam3++;
				func_263(uParam2, 52);
				*iParam3++;
				func_263(uParam2, 53);
				*iParam3++;
				func_263(uParam2, 55);
				*iParam3++;
				func_263(uParam2, 56);
				*iParam3++;
				func_263(uParam2, 58);
				*iParam3++;
				func_263(uParam2, 61);
				*iParam3++;
				func_263(uParam2, 63);
				*iParam3++;
				func_263(uParam2, 64);
				*iParam3++;
				func_263(uParam2, 65);
				*iParam3++;
				func_263(uParam2, 66);
				*iParam3++;
				func_263(uParam2, 67);
				*iParam3++;
				func_263(uParam2, 68);
				*iParam3++;
				func_263(uParam2, 71);
				*iParam3++;
				func_263(uParam2, 73);
				*iParam3++;
				func_263(uParam2, 74);
				*iParam3++;
				func_263(uParam2, 75);
				*iParam3++;
				func_263(uParam2, 76);
				*iParam3++;
				break;
			case joaat("s_m_m_blwdealer_01"):
			case joaat("s_m_m_rhddealer_01"):
				func_263(uParam2, 87);
				*iParam3++;
				func_263(uParam2, 89);
				*iParam3++;
				func_263(uParam2, 90);
				*iParam3++;
				func_263(uParam2, 91);
				*iParam3++;
				break;
			case joaat("s_m_m_vhtdealer_01"):
				func_263(uParam2, 62);
				*iParam3++;
				func_263(uParam2, 79);
				*iParam3++;
				break;
			default:
				func_263(uParam2, 1);
				*iParam3++;
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 3);
				*iParam3++;
				func_263(uParam2, 4);
				*iParam3++;
				func_263(uParam2, 5);
				*iParam3++;
				func_263(uParam2, 6);
				*iParam3++;
				return 0;
		}
	}
	return 1;
}

void func_184(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	DECORATOR::DECOR_SET_BOOL(iParam0, "PedSeatedForMinigame", true);
}

void func_185(var uParam0)
{
	func_264(uParam0, uParam0->f_3 + 1);
}

int func_186(int iParam0, int iParam1)
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

float func_187(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

bool func_188(var uParam0, vector3 vParam1, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;

	fVar2 = -1f;
	*iParam4 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!MISC::IS_BIT_SET(uParam0->f_94, iVar0) && !MISC::IS_BIT_SET(uParam0->f_93, iVar0))
		{
			func_226(uParam0->f_1, uParam0->f_3, uParam0->f_6, iVar0, &vVar3, 0);
			fVar1 = func_265(vParam1, vVar3);
			if (fVar1 < fVar2 || fVar2 == -1f)
			{
				fVar2 = fVar1;
				*iParam4 = iVar0;
			}
		}
		iVar0++;
	}
	return *iParam4 != -1;
}

void func_189(var uParam0)
{
	uParam0->f_3 = 100;
}

int func_190()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

char* func_191(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SCRIPT@MINI_GAME@POKER@PREPOSTGAME_BASE";
		case 3:
			return "SCRIPT@MINI_GAME@POKER@PREPOSTGAME_FEMALE";
		case 2:
			return "SCRIPT@MINI_GAME@POKER@PREPOSTGAME_RELAXED";
		default:
			break;
	}
	return "SCRIPT@MINI_GAME@POKER@PREPOSTGAME_BASE";
}

int func_192(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	if (iParam1 < 0 || iParam1 >= 7)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	func_159(uParam0->f_1938[iParam1 /*29*/], 1);
	if ((uParam0->f_1938[iParam1 /*29*/])->f_1 == -1 || !ANIMSCENE::_0x25557E324489393C((uParam0->f_1938[iParam1 /*29*/])->f_1))
	{
		(uParam0->f_1938[iParam1 /*29*/])->f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam2, iParam4, sParam3, false, true);
		if (!ANIMSCENE::_0x25557E324489393C((uParam0->f_1938[iParam1 /*29*/])->f_1))
		{
			return 0;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
		}
		ANIMSCENE::LOAD_ANIM_SCENE((uParam0->f_1938[iParam1 /*29*/])->f_1);
	}
	StringCopy(&((uParam0->f_1938[iParam1 /*29*/])->f_12), sParam3, 64);
	if (ANIMSCENE::_0x25557E324489393C((uParam0->f_1938[iParam1 /*29*/])->f_1))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
		}
		StringCopy(&((uParam0->f_1938[iParam1 /*29*/])->f_4), sParam2, 64);
		func_159(uParam0->f_1938[iParam1 /*29*/], 2);
		return 1;
	}
	return 0;
}

int func_193(int iParam0, int iParam1)
{
	return (iParam1 / func_266(iParam0, iParam1));
}

bool func_194(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 7)
	{
		return false;
	}
	return &uParam0->f_1938[iParam1 /*29*/] == 4;
}

int func_195(var uParam0, int iParam1, float fParam2)
{
	return func_226(uParam0->f_1, uParam0->f_3, uParam0->f_6, iParam1, fParam2, 0);
}

int func_196(var uParam0, int iParam1, var uParam2)
{
	return func_267(uParam0->f_1, uParam0->f_6, iParam1, uParam2);
}

int func_197(var uParam0, int iParam1, var uParam2, char* sParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(uParam2->f_11))
	{
		return 0;
	}
	if (!func_268(uParam0, iParam1, uParam2->f_11) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uParam2->f_11, -1))
	{
		func_60(uParam0, uParam2, 0);
	}
	if (uParam2->f_1 < 4 || uParam2->f_1 > 5)
	{
		return 0;
	}
	uParam2->f_20 = iParam1;
	StringCopy(&(uParam2->f_21), sParam3, 64);
	MISC::SET_BIT(&((uParam0->f_1938[uParam2->f_20 /*29*/])->f_3), uParam2->f_13);
	if (ANIMSCENE::_GET_ANIM_SCENE_PED((uParam0->f_1938[iParam1 /*29*/])->f_1, sParam3, false) != uParam2->f_11)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY((uParam0->f_1938[iParam1 /*29*/])->f_1, sParam3, uParam2->f_11, 0);
	}
	return 1;
}

int func_198(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5)
{
	int iVar0;

	if (iParam1 < 0 || iParam1 >= 7)
	{
		return 0;
	}
	if (!ANIMSCENE::_0xCBFC7725DE6CE2E0((uParam0->f_1938[iParam1 /*29*/])->f_1, 0))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN((uParam0->f_1938[iParam1 /*29*/])->f_1, vParam2, vParam5, 2);
		ANIMSCENE::START_ANIM_SCENE((uParam0->f_1938[iParam1 /*29*/])->f_1);
		(uParam0->f_1938[iParam1 /*29*/])->f_20 = { (uParam0->f_1938[iParam1 /*29*/])->f_12 };
		StringCopy(&((uParam0->f_1938[iParam1 /*29*/])->f_12), "", 64);
		(uParam0->f_1938[iParam1 /*29*/])->f_2 = 0f;
		iVar0 = 0;
		while (iVar0 < 69)
		{
			if ((uParam0->f_281[iVar0 /*24*/])->f_14 == 1)
			{
				ANIMSCENE::_0xC1193521E3B9FADD((uParam0->f_281[iVar0 /*24*/])->f_4, 1);
				(uParam0->f_281[iVar0 /*24*/])->f_14 = 0;
				(uParam0->f_281[iVar0 /*24*/])->f_15 = 1;
			}
			iVar0++;
		}
		func_159(uParam0->f_1938[iParam1 /*29*/], 5);
		return 1;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_1938[iParam1 /*29*/])->f_12)))
	{
		if (!ANIMSCENE::_0xDF7B5144E25CD3FE((uParam0->f_1938[iParam1 /*29*/])->f_1, &((uParam0->f_1938[iParam1 /*29*/])->f_12)))
		{
			return 0;
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547((uParam0->f_1938[iParam1 /*29*/])->f_1, &((uParam0->f_1938[iParam1 /*29*/])->f_12)))
		{
			return 0;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_1938[iParam1 /*29*/])->f_20)))
		{
			ANIMSCENE::_0xAE6ADA8FE7E84ACC((uParam0->f_1938[iParam1 /*29*/])->f_1, &((uParam0->f_1938[iParam1 /*29*/])->f_20));
		}
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL((uParam0->f_1938[iParam1 /*29*/])->f_1, &((uParam0->f_1938[iParam1 /*29*/])->f_12), true);
		(uParam0->f_1938[iParam1 /*29*/])->f_20 = { (uParam0->f_1938[iParam1 /*29*/])->f_12 };
		StringCopy(&((uParam0->f_1938[iParam1 /*29*/])->f_12), "", 64);
		(uParam0->f_1938[iParam1 /*29*/])->f_2 = 0f;
		iVar0 = 0;
		while (iVar0 < 69)
		{
			if ((uParam0->f_281[iVar0 /*24*/])->f_14 == 1)
			{
				ANIMSCENE::_0xC1193521E3B9FADD((uParam0->f_281[iVar0 /*24*/])->f_4, 1);
				(uParam0->f_281[iVar0 /*24*/])->f_14 = 0;
			}
			iVar0++;
		}
		func_159(uParam0->f_1938[iParam1 /*29*/], 5);
		return 1;
	}
	return 0;
}

int func_199(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (uParam0->f_106[iVar0 /*29*/] && (uParam0->f_106[iVar0 /*29*/])->f_11 == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_200(var uParam0, var uParam1, int iParam2)
{
	if (func_269(uParam0, &Local_1) && iParam2)
	{
		uParam0->f_2151 = 1;
	}
	if (func_68() == 75)
	{
		func_146(-1983417035, 1);
	}
}

void func_201(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 69)
	{
		if ((uParam0->f_281[iVar0 /*24*/])->f_3 == (uParam0->f_1938[iParam1 /*29*/])->f_1)
		{
			func_161(uParam0, iVar0, bParam2);
		}
		iVar0++;
	}
}

void func_202(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	vector3 vVar5;
	char* sVar8;

	iVar0 = uParam1->f_12;
	iVar1 = (0 + iVar0);
	sVar8 = func_191((uParam2->f_5[iVar0 /*62*/])->f_1);
	switch (uParam1->f_3)
	{
		case 0:
			func_270(uParam2->f_5[iVar0 /*62*/], 1);
			break;
		case 1:
			if (func_192(uParam0, iVar1, sVar8, "PBL_NoCardsLoop", 2))
			{
				func_270(uParam2->f_5[iVar0 /*62*/], 1);
			}
			break;
		case 2:
			if (func_194(uParam0, iVar1))
			{
				func_195(uParam0, iVar0, &uVar2);
				func_196(uParam0, iVar0, &vVar5);
				func_197(uParam0, iVar1, uParam1, "Seat_01");
				if (func_198(uParam0, iVar1, uParam0->f_3, vVar5))
				{
					func_271(uParam2->f_5[iVar0 /*62*/], 1);
				}
			}
			break;
	}
}

void func_203(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar4;
	int iVar111;
	vector3 vVar112;
	vector3 vVar115;
	int iVar118;
	int iVar119;
	int iVar120;
	int iVar121;
	char* sVar122;

	uVar4 = 52;
	iVar118 = uParam1->f_12;
	iVar119 = (0 + iVar118);
	iVar120 = 6;
	if (iVar118 < 0 || iVar118 >= 6)
	{
		return;
	}
	sVar122 = func_191((uParam2->f_5[iVar118 /*62*/])->f_1);
	switch ((uParam2->f_5[iVar118 /*62*/])->f_3)
	{
		case 0:
			uParam0->f_2149 = 1;
			func_272(&uVar4);
			func_273(&uVar4);
			func_166(&(uParam2->f_392));
			iVar0 = 0;
			while (iVar0 < 6)
			{
				func_166(&((uParam2->f_5[iVar0 /*62*/])->f_6));
				(uParam2->f_5[iVar0 /*62*/])->f_30.f_24 = -1;
				func_166(&((uParam2->f_5[iVar0 /*62*/])->f_30));
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (func_274(&uVar4, &uVar2))
				{
					func_275(&(uParam2->f_392), &uVar2);
				}
				iVar0++;
			}
			uParam2->f_388 = -1;
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_132(uParam0, iVar0))
				{
					if (func_274(&uVar4, &uVar2))
					{
						func_275(&((uParam2->f_5[iVar0 /*62*/])->f_6), &uVar2);
					}
					if (func_274(&uVar4, &uVar2))
					{
						func_275(&((uParam2->f_5[iVar0 /*62*/])->f_6), &uVar2);
					}
					if (MINIGAME::_0x32A7C216344D623B(&((uParam2->f_5[iVar0 /*62*/])->f_6), &(uParam2->f_392), &((uParam2->f_5[iVar0 /*62*/])->f_30)))
					{
					}
					if (uParam2->f_388 != -1)
					{
						iVar1 = func_276(&((uParam2->f_5[uParam2->f_388 /*62*/])->f_30), &((uParam2->f_5[iVar0 /*62*/])->f_30));
						if (iVar1 == -1)
						{
							uParam2->f_388 = iVar0;
						}
					}
					else
					{
						uParam2->f_388 = iVar0;
					}
					func_130(uParam0, iVar0, (uParam2->f_5[iVar0 /*62*/])->f_59, 1);
				}
				iVar0++;
			}
			if (uParam2->f_388 != -1)
			{
			}
			func_277(uParam0, 0);
			iVar0 = 0;
			while (iVar0 < 7)
			{
				iVar121 = (25 + iVar0);
				func_65(uParam0, iVar121);
				iVar0++;
			}
			func_270(uParam2->f_5[iVar118 /*62*/], 1);
			break;
		case 1:
			func_278(uParam0, uParam2->f_378);
			if (func_192(uParam0, iVar119, sVar122, "PBL_ShuffleA", 2))
			{
				func_270(uParam2->f_5[iVar118 /*62*/], 1);
			}
			break;
		case 2:
			func_125(uParam0, uParam2->f_378);
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_132(uParam0, iVar0))
				{
					if (func_279(&iVar111, *((uParam2->f_5[iVar0 /*62*/])->f_6[0 /*2*/]), iLocal_0, 0))
					{
						iVar121 = (32 + iVar0);
						func_131(uParam0, iVar121, iVar111, 0, 1);
					}
					if (func_279(&iVar111, *((uParam2->f_5[iVar0 /*62*/])->f_6[1 /*2*/]), iLocal_0, 0))
					{
						iVar121 = (38 + iVar0);
						func_131(uParam0, iVar121, iVar111, 0, 1);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (func_279(&iVar111, *(uParam2->f_392[iVar0 /*2*/]), iLocal_0, 0))
				{
					iVar121 = (25 + iVar0);
					func_131(uParam0, iVar121, iVar111, 0, 1);
				}
				iVar0++;
			}
			func_270(uParam2->f_5[iVar118 /*62*/], 1);
			break;
		case 3:
			if (func_194(uParam0, iVar119) && func_47(uParam0))
			{
				func_280(uParam0, iVar119, 24, "Deck", 0);
				func_195(uParam0, uParam1->f_12, &vVar115);
				func_196(uParam0, uParam1->f_12, &vVar112);
				func_197(uParam0, iVar119, uParam1, "Seat_01");
				if (func_198(uParam0, iVar119, vVar115, vVar112))
				{
					func_270(uParam2->f_5[iVar118 /*62*/], 1);
				}
			}
			break;
		case 4:
			if (func_281(uParam0, iVar119) >= 1f)
			{
				func_270(uParam2->f_5[iVar118 /*62*/], 1);
			}
			break;
		case 5:
			if (func_282(uParam0, uParam2))
			{
				func_270(uParam2->f_5[iVar118 /*62*/], 1);
			}
			break;
		case 6:
			if (func_281(uParam0, iVar120) >= 1f || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, 1426724047))
			{
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (func_112(uParam0, iVar0))
					{
						if (iVar0 == iVar118)
						{
							func_138(uParam2->f_5[iVar0 /*62*/], 7, 0, 0);
						}
						else if (!func_22(uParam0->f_8))
						{
							func_138(uParam2->f_5[iVar0 /*62*/], 7, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), 0);
						}
						else
						{
							func_271(uParam2->f_5[iVar0 /*62*/], 1);
						}
						(uParam2->f_5[iVar0 /*62*/])->f_57 = 1;
					}
					else
					{
						(uParam2->f_5[iVar0 /*62*/])->f_57 = 0;
					}
					iVar0++;
				}
			}
			break;
	}
}

void func_204(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar8;
	char* sVar11;

	iVar3 = uParam1->f_12;
	iVar4 = (0 + iVar3);
	if (iVar3 < 0 || iVar3 >= 6)
	{
		return;
	}
	sVar11 = func_191((uParam2->f_5[iVar3 /*62*/])->f_1);
	iVar1 = func_245(iVar3, 0);
	switch ((uParam2->f_5[iVar3 /*62*/])->f_3)
	{
		case 0:
			if ((uParam2->f_5[iVar3 /*62*/])->f_2 > (uParam2->f_5[iVar3 /*62*/])->f_4)
			{
				if (func_192(uParam0, iVar4, sVar11, "PBL_BlindA", 2))
				{
					func_130(uParam0, iVar3, (uParam2->f_5[iVar3 /*62*/])->f_59, 1);
					if (!ENTITY::DOES_ENTITY_EXIST((uParam0->f_281[func_126(iVar3) /*24*/])->f_4))
					{
						func_283(uParam0, iVar3, (uParam2->f_5[iVar3 /*62*/])->f_58, 1);
					}
					func_284(uParam0, iVar3, 0, &vVar5, &vVar8, 0, 1);
					func_65(uParam0, iVar1);
					func_129(uParam0, iVar1, func_128(), vVar5, vVar8, 0, 1);
					func_270(uParam2->f_5[iVar3 /*62*/], 1);
				}
			}
			break;
		case 1:
			if (!func_47(uParam0))
			{
				return;
			}
			if (!func_194(uParam0, iVar4))
			{
				return;
			}
			func_130(uParam0, iVar3, (uParam2->f_5[iVar3 /*62*/])->f_59, 1);
			if (uParam2->f_385 == iVar3)
			{
				iVar0 = 1;
				uParam2->f_389 = iVar0;
			}
			else
			{
				iVar0 = 2;
				uParam2->f_389 = iVar0;
				uParam2->f_390 = iVar0;
			}
			(uParam2->f_5[iVar3 /*62*/])->f_58 = ((uParam2->f_5[iVar3 /*62*/])->f_58 + iVar0);
			(uParam2->f_5[iVar3 /*62*/])->f_59 = ((uParam2->f_5[iVar3 /*62*/])->f_59 - iVar0);
			if ((uParam2->f_5[iVar3 /*62*/])->f_59 < 0)
			{
				(uParam2->f_5[iVar3 /*62*/])->f_59 = 0;
			}
			iVar2 = func_236(0, iVar0, 10);
			iVar2 = func_285(iVar2, 1, 4);
			func_286((uParam0->f_281[iVar1 /*24*/])->f_4, iVar2, 4);
			func_287(uParam0, iVar1, 1);
			func_280(uParam0, iVar4, iVar1, func_288(44), 0);
			func_197(uParam0, iVar4, uParam0->f_106[iVar3 /*29*/], "Seat_01");
			func_195(uParam0, uParam2->f_378, &vVar5);
			func_196(uParam0, uParam2->f_378, &vVar8);
			if (func_198(uParam0, iVar4, uParam0->f_3, vVar8))
			{
				func_289(uParam0, uParam1->f_11);
				func_270(uParam2->f_5[iVar3 /*62*/], 1);
			}
			break;
		case 2:
			if (func_290(uParam0->f_106[iVar3 /*29*/], "ChipsDown"))
			{
				func_270(uParam2->f_5[iVar3 /*62*/], 1);
				return;
			}
			if (!func_291(uParam0, iVar4, "BlindA"))
			{
				func_270(uParam2->f_5[iVar3 /*62*/], 1);
			}
			break;
		case 3:
			if ((uParam2->f_5[iVar3 /*62*/])->f_2 > 0.01f)
			{
				vVar5 = { ENTITY::GET_ENTITY_COORDS((uParam0->f_281[iVar1 /*24*/])->f_4, true, false) };
				vVar8 = { ENTITY::GET_ENTITY_ROTATION((uParam0->f_281[iVar1 /*24*/])->f_4, 2) };
				func_292(uParam0, iVar3, (uParam2->f_5[iVar3 /*62*/])->f_58, vVar5, vVar8, 1);
				func_65(uParam0, iVar1);
				(uParam2->f_5[iVar3 /*62*/])->f_56 = 1;
				func_271(uParam2->f_5[iVar3 /*62*/], 1);
			}
			break;
	}
}

void func_205(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	var uVar1;
	vector3 vVar4;
	int iVar7;
	char* sVar8;

	iVar0 = uParam1->f_12;
	iVar7 = (0 + iVar0);
	if (iVar0 < 0 || iVar0 >= 6)
	{
		return;
	}
	sVar8 = func_191((uParam2->f_5[iVar0 /*62*/])->f_1);
	switch ((uParam2->f_5[iVar0 /*62*/])->f_3)
	{
		case 0:
			if ((uParam2->f_5[iVar0 /*62*/])->f_2 > (uParam2->f_5[iVar0 /*62*/])->f_4)
			{
				if (func_192(uParam0, iVar7, sVar8, "PBL_CheckA", 2))
				{
					func_270(uParam2->f_5[iVar0 /*62*/], 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_280(uParam0, iVar7, (32 + iVar0), func_288(32), 0);
				func_280(uParam0, iVar7, (38 + iVar0), func_288(38), 0);
				func_195(uParam0, uParam2->f_378, &uVar1);
				func_196(uParam0, uParam2->f_378, &vVar4);
				func_197(uParam0, iVar7, uParam1, "Seat_01");
				if (func_198(uParam0, iVar7, uParam0->f_3, vVar4))
				{
					func_270(uParam2->f_5[iVar0 /*62*/], 1);
					func_293(uParam0, uParam1->f_11);
				}
			}
			break;
		case 2:
			if (func_290(uParam1, "ActionDone") || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, 1426724047))
			{
				func_138(uParam2->f_5[iVar0 /*62*/], 1, 0, 0);
				return;
			}
			if (func_281(uParam0, iVar7) > 0.25f)
			{
				func_138(uParam2->f_5[iVar0 /*62*/], 1, 0, 0);
				return;
			}
			if (!func_291(uParam0, iVar7, "HoldCardsLoopA"))
			{
				func_270(uParam2->f_5[iVar0 /*62*/], 1);
			}
			break;
		case 3:
			if (func_291(uParam0, iVar7, "HoldCardsLoopA"))
			{
				func_271(uParam2->f_5[iVar0 /*62*/], 1);
			}
			break;
	}
}

void func_206(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	vector3 vVar9;
	char* sVar12;

	iVar1 = 5;
	iVar4 = uParam1->f_12;
	iVar5 = (0 + iVar4);
	if (iVar4 < 0 || iVar4 >= 6)
	{
		return;
	}
	sVar12 = func_191((uParam2->f_5[iVar4 /*62*/])->f_1);
	iVar2 = func_245(iVar4, (uParam2->f_5[iVar4 /*62*/])->f_61);
	switch ((uParam2->f_5[iVar4 /*62*/])->f_3)
	{
		case 0:
			if ((uParam2->f_5[iVar4 /*62*/])->f_2 > (uParam2->f_5[iVar4 /*62*/])->f_4)
			{
				if (func_192(uParam0, iVar5, sVar12, "PBL_BetA", 2))
				{
					func_130(uParam0, iVar4, (uParam2->f_5[iVar4 /*62*/])->f_59, 1);
					if (!ENTITY::DOES_ENTITY_EXIST((uParam0->f_281[func_126(iVar4) /*24*/])->f_4))
					{
						func_283(uParam0, iVar4, (uParam2->f_5[iVar4 /*62*/])->f_58, 1);
					}
					func_284(uParam0, iVar4, 0, &vVar6, &vVar9, 0, 1);
					func_65(uParam0, iVar2);
					func_129(uParam0, iVar2, func_128(), vVar6, vVar9, 0, 1);
					func_270(uParam2->f_5[iVar4 /*62*/], 1);
				}
			}
			break;
		case 1:
			if (!func_47(uParam0))
			{
				return;
			}
			if (!func_194(uParam0, iVar5))
			{
				return;
			}
			func_130(uParam0, iVar4, (uParam2->f_5[iVar4 /*62*/])->f_59, 1);
			if ((uParam2->f_5[iVar4 /*62*/])->f_59 < iVar1)
			{
				iVar1 = (uParam2->f_5[iVar4 /*62*/])->f_59;
			}
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, iVar1);
			if ((uParam2->f_5[iVar4 /*62*/])->f_58 < uParam2->f_389)
			{
				iVar0 = (uParam2->f_389 - (uParam2->f_5[iVar4 /*62*/])->f_58);
			}
			(uParam2->f_5[iVar4 /*62*/])->f_58 = ((uParam2->f_5[iVar4 /*62*/])->f_58 + iVar0);
			(uParam2->f_5[iVar4 /*62*/])->f_59 = ((uParam2->f_5[iVar4 /*62*/])->f_59 - iVar0);
			iVar3 = func_236(0, iVar0, 10);
			iVar3 = func_285(iVar3, 1, 4);
			func_286((uParam0->f_281[iVar2 /*24*/])->f_4, iVar3, 4);
			func_287(uParam0, iVar2, 1);
			func_280(uParam0, iVar5, iVar2, func_288((44 + (uParam2->f_5[iVar4 /*62*/])->f_61)), 0);
			func_197(uParam0, iVar5, uParam0->f_106[iVar4 /*29*/], "Seat_01");
			func_195(uParam0, uParam2->f_378, &vVar6);
			func_196(uParam0, uParam2->f_378, &vVar9);
			if (func_198(uParam0, iVar5, uParam0->f_3, vVar9))
			{
				func_270(uParam2->f_5[iVar4 /*62*/], 1);
				func_289(uParam0, uParam1->f_11);
			}
			break;
		case 2:
			if (func_290(uParam0->f_106[iVar4 /*29*/], "ChipsDown"))
			{
				func_270(uParam2->f_5[iVar4 /*62*/], 1);
				return;
			}
			if (!func_291(uParam0, iVar5, "BetA"))
			{
				func_270(uParam2->f_5[iVar4 /*62*/], 1);
			}
			break;
		case 3:
			if ((uParam2->f_5[iVar4 /*62*/])->f_2 > 0.01f)
			{
				vVar6 = { ENTITY::GET_ENTITY_COORDS((uParam0->f_281[iVar2 /*24*/])->f_4, true, false) };
				vVar9 = { ENTITY::GET_ENTITY_ROTATION((uParam0->f_281[iVar2 /*24*/])->f_4, 2) };
				func_292(uParam0, iVar4, (uParam2->f_5[iVar4 /*62*/])->f_58, vVar6, vVar9, 1);
				func_65(uParam0, iVar2);
				(uParam2->f_5[iVar4 /*62*/])->f_56 = 1;
				func_271(uParam2->f_5[iVar4 /*62*/], 1);
			}
			break;
	}
}

void func_207(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	vector3 vVar9;
	char* sVar12;

	iVar1 = 5;
	iVar4 = uParam1->f_12;
	iVar5 = (0 + iVar4);
	if (iVar4 < 0 || iVar4 >= 6)
	{
		return;
	}
	sVar12 = func_191((uParam2->f_5[iVar4 /*62*/])->f_1);
	iVar2 = func_245(iVar4, (uParam2->f_5[iVar4 /*62*/])->f_61);
	switch ((uParam2->f_5[iVar4 /*62*/])->f_3)
	{
		case 0:
			if ((uParam2->f_5[iVar4 /*62*/])->f_2 > (uParam2->f_5[iVar4 /*62*/])->f_4)
			{
				if (func_192(uParam0, iVar5, sVar12, "PBL_BetA", 2))
				{
					func_130(uParam0, iVar4, (uParam2->f_5[iVar4 /*62*/])->f_59, 1);
					if (!ENTITY::DOES_ENTITY_EXIST((uParam0->f_281[func_126(iVar4) /*24*/])->f_4))
					{
						func_283(uParam0, iVar4, (uParam2->f_5[iVar4 /*62*/])->f_58, 1);
					}
					func_284(uParam0, iVar4, 0, &vVar6, &vVar9, 0, 1);
					func_65(uParam0, iVar2);
					func_129(uParam0, iVar2, func_128(), vVar6, vVar9, 0, 1);
					func_270(uParam2->f_5[iVar4 /*62*/], 1);
				}
			}
			break;
		case 1:
			if (!func_47(uParam0))
			{
				return;
			}
			if (!func_194(uParam0, iVar5))
			{
				return;
			}
			func_130(uParam0, iVar4, (uParam2->f_5[iVar4 /*62*/])->f_59, 1);
			if ((uParam2->f_5[iVar4 /*62*/])->f_59 < iVar1)
			{
				iVar1 = (uParam2->f_5[iVar4 /*62*/])->f_59;
			}
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, iVar1);
			if ((uParam2->f_5[iVar4 /*62*/])->f_58 < uParam2->f_389)
			{
				iVar0 = (uParam2->f_389 - (uParam2->f_5[iVar4 /*62*/])->f_58);
			}
			(uParam2->f_5[iVar4 /*62*/])->f_58 = ((uParam2->f_5[iVar4 /*62*/])->f_58 + iVar0);
			(uParam2->f_5[iVar4 /*62*/])->f_59 = ((uParam2->f_5[iVar4 /*62*/])->f_59 - iVar0);
			iVar3 = func_236(0, iVar0, 10);
			iVar3 = func_285(iVar3, 1, 4);
			func_286((uParam0->f_281[iVar2 /*24*/])->f_4, iVar3, 4);
			func_287(uParam0, iVar2, 1);
			func_280(uParam0, iVar5, iVar2, func_288((44 + (uParam2->f_5[iVar4 /*62*/])->f_61)), 0);
			func_197(uParam0, iVar5, uParam0->f_106[iVar4 /*29*/], "Seat_01");
			func_195(uParam0, uParam2->f_378, &vVar6);
			func_196(uParam0, uParam2->f_378, &vVar9);
			if (func_198(uParam0, iVar5, uParam0->f_3, vVar9))
			{
				func_270(uParam2->f_5[iVar4 /*62*/], 1);
				func_294(uParam0, uParam1->f_11);
			}
			break;
		case 2:
			if (func_290(uParam0->f_106[iVar4 /*29*/], "ChipsDown"))
			{
				func_270(uParam2->f_5[iVar4 /*62*/], 1);
				return;
			}
			if (!func_291(uParam0, iVar5, "BetA"))
			{
				func_270(uParam2->f_5[iVar4 /*62*/], 1);
			}
			break;
		case 3:
			if ((uParam2->f_5[iVar4 /*62*/])->f_2 > 0.01f)
			{
				vVar6 = { ENTITY::GET_ENTITY_COORDS((uParam0->f_281[iVar2 /*24*/])->f_4, true, false) };
				vVar9 = { ENTITY::GET_ENTITY_ROTATION((uParam0->f_281[iVar2 /*24*/])->f_4, 2) };
				func_292(uParam0, iVar4, (uParam2->f_5[iVar4 /*62*/])->f_58, vVar6, vVar9, 1);
				func_65(uParam0, iVar2);
				(uParam2->f_5[iVar4 /*62*/])->f_56 = 1;
				func_271(uParam2->f_5[iVar4 /*62*/], 1);
			}
			break;
	}
}

void func_208(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	char* sVar8;

	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar8 = func_191((uParam2->f_5[iVar6 /*62*/])->f_1);
	switch ((uParam2->f_5[iVar6 /*62*/])->f_3)
	{
		case 0:
			if ((uParam2->f_5[iVar6 /*62*/])->f_2 > (uParam2->f_5[iVar6 /*62*/])->f_4)
			{
				if (func_192(uParam0, iVar7, sVar8, "PBL_PickupCards", 2))
				{
					func_270(uParam2->f_5[iVar6 /*62*/], 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_280(uParam0, iVar7, (32 + iVar6), func_288(32), 0);
				func_280(uParam0, iVar7, (38 + iVar6), func_288(38), 0);
				func_197(uParam0, iVar7, uParam1, "Seat_01");
				func_195(uParam0, uParam1->f_12, &vVar3);
				func_196(uParam0, uParam1->f_12, &vVar0);
				if (func_198(uParam0, iVar7, vVar3, vVar0))
				{
					func_270(uParam2->f_5[iVar6 /*62*/], 1);
				}
			}
			break;
		case 2:
			if (func_291(uParam0, iVar7, "PickupCards"))
			{
				func_270(uParam2->f_5[iVar6 /*62*/], 1);
			}
			break;
		case 3:
			if (!func_291(uParam0, iVar7, "PickupCards") || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, 1426724047))
			{
				func_271(uParam2->f_5[iVar6 /*62*/], 1);
			}
			break;
	}
}

void func_209(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	char* sVar8;

	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar8 = func_191((uParam2->f_5[iVar6 /*62*/])->f_1);
	switch ((uParam2->f_5[iVar6 /*62*/])->f_3)
	{
		case 0:
			if ((uParam2->f_5[iVar6 /*62*/])->f_2 > (uParam2->f_5[iVar6 /*62*/])->f_4)
			{
				if (func_192(uParam0, iVar7, sVar8, "PBL_PickupCardsDealer", 2))
				{
					func_270(uParam2->f_5[iVar6 /*62*/], 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_280(uParam0, iVar7, (32 + iVar6), func_288(32), 0);
				func_280(uParam0, iVar7, (38 + iVar6), func_288(38), 0);
				func_197(uParam0, iVar7, uParam1, "Seat_01");
				func_195(uParam0, uParam1->f_12, &vVar3);
				func_196(uParam0, uParam1->f_12, &vVar0);
				if (func_198(uParam0, iVar7, vVar3, vVar0))
				{
					func_270(uParam2->f_5[iVar6 /*62*/], 1);
				}
			}
			break;
		case 2:
			if (func_291(uParam0, iVar7, "PickupCardsDealer"))
			{
				func_270(uParam2->f_5[iVar6 /*62*/], 1);
			}
			break;
		case 3:
			if (func_291(uParam0, iVar7, "HoldCardsLoopA") || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, 1426724047))
			{
				func_271(uParam2->f_5[iVar6 /*62*/], 1);
			}
			break;
	}
}

void func_210(var uParam0, var uParam1, var uParam2)
{
	var uVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	char* sVar11;

	iVar9 = uParam1->f_12;
	iVar10 = (0 + iVar9);
	if (iVar9 < 0 || iVar9 >= 6)
	{
		return;
	}
	sVar11 = func_191((uParam2->f_5[iVar9 /*62*/])->f_1);
	switch ((uParam2->f_5[iVar9 /*62*/])->f_3)
	{
		case 0:
			if ((uParam2->f_5[iVar9 /*62*/])->f_2 > (uParam2->f_5[iVar9 /*62*/])->f_4)
			{
				if (func_192(uParam0, iVar10, sVar11, "PBL_Flop", 2))
				{
					iVar6 = 0;
					while (iVar6 < 3)
					{
						iVar7 = (25 + iVar6);
						if (func_279(&iVar8, *(uParam2->f_392[iVar6 /*2*/]), iLocal_0, 0))
						{
							func_131(uParam0, iVar7, iVar8, 0, 1);
						}
						iVar6++;
					}
					func_270(uParam2->f_5[iVar9 /*62*/], 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar10) && func_47(uParam0))
			{
				iVar6 = 0;
				while (iVar6 < 3)
				{
					iVar7 = (25 + iVar6);
					func_280(uParam0, iVar10, iVar7, func_288(iVar7), 0);
					iVar6++;
				}
				iVar7 = 24;
				func_280(uParam0, iVar10, iVar7, func_288(iVar7), 0);
				func_197(uParam0, iVar10, uParam0->f_106[iVar9 /*29*/], "Seat_01");
				func_195(uParam0, uParam1->f_12, &uVar0);
				func_196(uParam0, uParam1->f_12, &vVar3);
				if (func_198(uParam0, iVar10, uParam0->f_3, vVar3))
				{
					func_270(uParam2->f_5[iVar9 /*62*/], 1);
					if (func_190())
					{
						func_295(uParam0, uParam1->f_11);
					}
				}
			}
			break;
		case 2:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, 1426724047))
			{
				uParam2->f_380 = 1;
				func_138(uParam2->f_5[iVar9 /*62*/], 1, 0, 0);
				return;
			}
			if (func_290(uParam1, "ActionDone"))
			{
				uParam2->f_380 = 1;
				func_271(uParam2->f_5[iVar9 /*62*/], 1);
				return;
			}
			if (!func_291(uParam0, iVar10, "HoldCardsLoopA"))
			{
				func_270(uParam2->f_5[iVar9 /*62*/], 1);
			}
			break;
		case 3:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, 1426724047))
			{
				uParam2->f_380 = 1;
				func_138(uParam2->f_5[iVar9 /*62*/], 1, 0, 0);
				return;
			}
			if (func_291(uParam0, iVar10, "HoldCardsLoopA"))
			{
				uParam2->f_380 = 1;
				func_271(uParam2->f_5[iVar9 /*62*/], 1);
			}
			break;
	}
}

void func_211(var uParam0, var uParam1, var uParam2)
{
	var uVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	char* sVar10;

	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar10 = func_191((uParam2->f_5[iVar6 /*62*/])->f_1);
	switch ((uParam2->f_5[iVar6 /*62*/])->f_3)
	{
		case 0:
			if ((uParam2->f_5[iVar6 /*62*/])->f_2 > (uParam2->f_5[iVar6 /*62*/])->f_4)
			{
				if (func_192(uParam0, iVar7, sVar10, "PBL_Turn", 2))
				{
					iVar8 = 28;
					if (func_279(&iVar9, *(uParam2->f_392[3 /*2*/]), iLocal_0, 0))
					{
						func_131(uParam0, iVar8, iVar9, 0, 1);
					}
					func_270(uParam2->f_5[iVar6 /*62*/], 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7) && func_47(uParam0))
			{
				iVar8 = 28;
				func_280(uParam0, iVar7, iVar8, func_288(iVar8), 0);
				iVar8 = 24;
				func_280(uParam0, iVar7, iVar8, func_288(iVar8), 0);
				func_197(uParam0, iVar7, uParam0->f_106[iVar6 /*29*/], "Seat_01");
				func_195(uParam0, uParam1->f_12, &uVar0);
				func_196(uParam0, uParam1->f_12, &vVar3);
				if (func_198(uParam0, iVar7, uParam0->f_3, vVar3))
				{
					func_270(uParam2->f_5[iVar6 /*62*/], 1);
					if (func_190())
					{
						func_295(uParam0, uParam1->f_11);
					}
				}
			}
			break;
		case 2:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, 1426724047))
			{
				uParam2->f_381 = 1;
				func_138(uParam2->f_5[iVar6 /*62*/], 1, 0, 0);
				return;
			}
			if (func_290(uParam1, "ActionDone"))
			{
				uParam2->f_381 = 1;
				func_271(uParam2->f_5[iVar6 /*62*/], 1);
				return;
			}
			if (!func_291(uParam0, iVar7, "HoldCardsLoopA"))
			{
				func_270(uParam2->f_5[iVar6 /*62*/], 1);
			}
			break;
		case 3:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, 1426724047))
			{
				uParam2->f_381 = 1;
				func_138(uParam2->f_5[iVar6 /*62*/], 1, 0, 0);
				return;
			}
			if (func_291(uParam0, iVar7, "HoldCardsLoopA"))
			{
				uParam2->f_381 = 1;
				func_271(uParam2->f_5[iVar6 /*62*/], 1);
			}
			break;
	}
}

void func_212(var uParam0, var uParam1, var uParam2)
{
	var uVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	char* sVar10;

	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar10 = func_191((uParam2->f_5[iVar6 /*62*/])->f_1);
	switch ((uParam2->f_5[iVar6 /*62*/])->f_3)
	{
		case 0:
			if ((uParam2->f_5[iVar6 /*62*/])->f_2 > (uParam2->f_5[iVar6 /*62*/])->f_4)
			{
				if (func_192(uParam0, iVar7, sVar10, "PBL_River", 2))
				{
					iVar8 = 29;
					if (func_279(&iVar9, *(uParam2->f_392[4 /*2*/]), iLocal_0, 0))
					{
						func_131(uParam0, iVar8, iVar9, 0, 1);
					}
					func_270(uParam2->f_5[iVar6 /*62*/], 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7) && func_47(uParam0))
			{
				iVar8 = 29;
				func_280(uParam0, iVar7, iVar8, func_288(iVar8), 0);
				iVar8 = 24;
				func_280(uParam0, iVar7, iVar8, func_288(iVar8), 0);
				func_197(uParam0, iVar7, uParam0->f_106[iVar6 /*29*/], "Seat_01");
				func_195(uParam0, uParam1->f_12, &uVar0);
				func_196(uParam0, uParam1->f_12, &vVar3);
				if (func_198(uParam0, iVar7, uParam0->f_3, vVar3))
				{
					func_270(uParam2->f_5[iVar6 /*62*/], 1);
					if (func_190())
					{
						func_295(uParam0, uParam1->f_11);
					}
				}
			}
			break;
		case 2:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, 1426724047))
			{
				uParam2->f_382 = 1;
				func_271(uParam2->f_5[iVar6 /*62*/], 1);
				return;
			}
			if (func_290(uParam1, "ActionDone"))
			{
				uParam2->f_382 = 1;
				func_271(uParam2->f_5[iVar6 /*62*/], 1);
				return;
			}
			if (!func_291(uParam0, iVar7, "HoldCardsLoopA"))
			{
				func_270(uParam2->f_5[iVar6 /*62*/], 1);
			}
			break;
		case 3:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, 1426724047))
			{
				uParam2->f_382 = 1;
				func_271(uParam2->f_5[iVar6 /*62*/], 1);
				return;
			}
			if (func_291(uParam0, iVar7, "HoldCardsLoopA"))
			{
				uParam2->f_382 = 1;
				func_271(uParam2->f_5[iVar6 /*62*/], 1);
			}
			break;
	}
}

void func_213(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;

	iVar7 = uParam1->f_12;
	iVar8 = (0 + iVar7);
	if (iVar7 < 0 || iVar7 >= 6)
	{
		return;
	}
	switch ((uParam2->f_5[iVar7 /*62*/])->f_3)
	{
		case 0:
			if ((uParam2->f_5[iVar7 /*62*/])->f_2 > (uParam2->f_5[iVar7 /*62*/])->f_4)
			{
				(uParam2->f_5[iVar7 /*62*/])->f_57 = 0;
				if (func_296(uParam0, uParam2->f_378, iVar7))
				{
					func_270(uParam2->f_5[iVar7 /*62*/], 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar8))
			{
				func_280(uParam0, iVar8, (32 + iVar7), func_288(32), 0);
				func_280(uParam0, iVar8, (38 + iVar7), func_288(38), 0);
				func_197(uParam0, iVar8, uParam0->f_106[iVar7 /*29*/], "Seat_01");
				func_195(uParam0, uParam1->f_12, &vVar1);
				func_196(uParam0, uParam1->f_12, &vVar4);
				if (func_198(uParam0, iVar8, uParam0->f_3, vVar4))
				{
					func_270(uParam2->f_5[iVar7 /*62*/], 1);
				}
			}
			break;
		case 2:
			if (!func_291(uParam0, iVar8, "NoCardsLoopA"))
			{
				func_270(uParam2->f_5[iVar7 /*62*/], 1);
			}
			break;
		case 3:
			if (func_291(uParam0, iVar8, "NoCardsLoopA") || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, 1426724047))
			{
				iVar0 = (32 + iVar7);
				vVar1 = { ENTITY::GET_ENTITY_COORDS((uParam0->f_281[iVar0 /*24*/])->f_4, true, false) };
				vVar4 = { ENTITY::GET_ENTITY_ROTATION((uParam0->f_281[iVar0 /*24*/])->f_4, 2) };
				func_129(uParam0, 30, func_231(30, 0), vVar1, vVar4, 0, 0);
				iVar0 = (38 + iVar7);
				vVar1 = { ENTITY::GET_ENTITY_COORDS((uParam0->f_281[iVar0 /*24*/])->f_4, true, false) };
				vVar4 = { ENTITY::GET_ENTITY_ROTATION((uParam0->f_281[iVar0 /*24*/])->f_4, 2) };
				func_129(uParam0, 31, func_231(31, 0), vVar1, vVar4, 0, 0);
				func_270(uParam2->f_5[iVar7 /*62*/], 1);
			}
			break;
		case 4:
			if (func_47(uParam0))
			{
				(uParam2->f_5[iVar7 /*62*/])->f_57 = 0;
				func_65(uParam0, (32 + iVar7));
				func_65(uParam0, (38 + iVar7));
				func_138(uParam2->f_5[iVar7 /*62*/], 1, 0, 0);
			}
			break;
	}
}

void func_214(var uParam0, var uParam1, var uParam2)
{
	var uVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;

	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	switch ((uParam2->f_5[iVar6 /*62*/])->f_3)
	{
		case 0:
			if ((uParam2->f_5[iVar6 /*62*/])->f_2 > (uParam2->f_5[iVar6 /*62*/])->f_4)
			{
				if (func_297(uParam0, iVar6, uParam2->f_378))
				{
					func_270(uParam2->f_5[iVar6 /*62*/], 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_280(uParam0, iVar7, 24, func_288(24), 0);
				func_197(uParam0, iVar7, uParam0->f_106[iVar6 /*29*/], "Seat_01");
				func_195(uParam0, uParam1->f_12, &uVar0);
				func_196(uParam0, uParam1->f_12, &vVar3);
				if (func_198(uParam0, iVar7, uParam0->f_3, vVar3))
				{
					func_270(uParam2->f_5[iVar6 /*62*/], 1);
				}
			}
			break;
		case 2:
			if (func_291(uParam0, iVar7, "NoCardsLoopA"))
			{
				func_138(uParam2->f_5[iVar6 /*62*/], 1, 0, 0);
			}
			break;
	}
}

void func_215(var uParam0, var uParam1, var uParam2)
{
	var uVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	char* sVar8;

	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar8 = func_191((uParam2->f_5[iVar6 /*62*/])->f_1);
	switch ((uParam2->f_5[iVar6 /*62*/])->f_3)
	{
		case 0:
			if ((uParam2->f_5[iVar6 /*62*/])->f_2 > (uParam2->f_5[iVar6 /*62*/])->f_4)
			{
				if (func_192(uParam0, iVar7, sVar8, "PBL_RecieveDeck", 2))
				{
					func_270(uParam2->f_5[iVar6 /*62*/], 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_280(uParam0, iVar7, 24, func_288(24), 0);
				func_197(uParam0, iVar7, uParam0->f_106[iVar6 /*29*/], "Seat_01");
				func_195(uParam0, uParam1->f_12, &uVar0);
				func_196(uParam0, uParam1->f_12, &vVar3);
				if (func_198(uParam0, iVar7, uParam0->f_3, vVar3))
				{
					func_270(uParam2->f_5[iVar6 /*62*/], 1);
				}
			}
			break;
		case 2:
			if ((func_291(uParam0, iVar7, "NoCardsLoopA") || func_291(uParam0, iVar7, "RecieveDeckExit")) || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, 1426724047))
			{
				if (func_190())
				{
					func_298(uParam0, uParam1->f_11);
				}
				func_138(uParam2->f_5[iVar6 /*62*/], 1, 0, 0);
			}
			break;
	}
}

void func_216(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar7 = uParam1->f_12;
	iVar8 = (0 + iVar7);
	if (iVar7 < 0 || iVar7 >= 6)
	{
		return;
	}
	switch ((uParam2->f_5[iVar7 /*62*/])->f_3)
	{
		case 0:
			(uParam2->f_5[iVar7 /*62*/])->f_57 = 0;
			if ((uParam2->f_5[iVar7 /*62*/])->f_2 > (uParam2->f_5[iVar7 /*62*/])->f_4)
			{
				if (func_299(uParam0, uParam2->f_378, iVar7))
				{
					func_270(uParam2->f_5[iVar7 /*62*/], 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar8))
			{
				func_280(uParam0, iVar8, (32 + iVar7), func_288(32), 0);
				func_280(uParam0, iVar8, (38 + iVar7), func_288(38), 0);
				func_197(uParam0, iVar8, uParam0->f_106[iVar7 /*29*/], "Seat_01");
				func_195(uParam0, uParam1->f_12, &vVar0);
				func_196(uParam0, uParam1->f_12, &vVar3);
				if (func_198(uParam0, iVar8, vVar0, vVar3))
				{
					func_270(uParam2->f_5[iVar7 /*62*/], 1);
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) == 2)
					{
						func_300(uParam0, uParam1->f_11);
					}
				}
			}
			break;
		case 2:
			if (!func_291(uParam0, iVar8, "NoCardsLoopA"))
			{
				func_270(uParam2->f_5[iVar7 /*62*/], 1);
			}
			break;
		case 3:
			if (func_291(uParam0, iVar8, "NoCardsLoopA") || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, 1426724047))
			{
				iVar6 = (32 + iVar7);
				vVar0 = { ENTITY::GET_ENTITY_COORDS((uParam0->f_281[iVar6 /*24*/])->f_4, true, false) };
				vVar3 = { ENTITY::GET_ENTITY_ROTATION((uParam0->f_281[iVar6 /*24*/])->f_4, 2) };
				func_129(uParam0, 30, func_231(30, 0), vVar0, vVar3, 0, 0);
				iVar6 = (38 + iVar7);
				vVar0 = { ENTITY::GET_ENTITY_COORDS((uParam0->f_281[iVar6 /*24*/])->f_4, true, false) };
				vVar3 = { ENTITY::GET_ENTITY_ROTATION((uParam0->f_281[iVar6 /*24*/])->f_4, 2) };
				func_129(uParam0, 31, func_231(31, 0), vVar0, vVar3, 0, 0);
				func_270(uParam2->f_5[iVar7 /*62*/], 1);
			}
			break;
		case 4:
			if (func_47(uParam0))
			{
				(uParam2->f_5[iVar7 /*62*/])->f_57 = 0;
				MISC::CLEAR_BIT(&(uParam2->f_386), iVar7);
				func_65(uParam0, (32 + iVar7));
				func_65(uParam0, (38 + iVar7));
				func_138(uParam2->f_5[iVar7 /*62*/], 1, 0, 0);
			}
			break;
	}
}

void func_217(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	char* sVar8;

	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar8 = func_191((uParam2->f_5[iVar6 /*62*/])->f_1);
	switch ((uParam2->f_5[iVar6 /*62*/])->f_3)
	{
		case 0:
			if ((uParam2->f_5[iVar6 /*62*/])->f_2 > (uParam2->f_5[iVar6 /*62*/])->f_4)
			{
				if (func_192(uParam0, iVar7, sVar8, "PBL_Express_LossA", 2))
				{
					func_270(uParam2->f_5[iVar6 /*62*/], 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_197(uParam0, iVar7, uParam1, "Seat_01");
				func_195(uParam0, uParam1->f_12, &vVar3);
				func_196(uParam0, uParam1->f_12, &vVar0);
				if (func_198(uParam0, iVar7, vVar3, vVar0))
				{
					func_270(uParam2->f_5[iVar6 /*62*/], 1);
				}
			}
			break;
		case 2:
			if (func_291(uParam0, iVar7, "NoCardsLoopA") || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, 1426724047))
			{
				func_138(uParam2->f_5[iVar6 /*62*/], 1, 0, 0);
			}
			break;
	}
}

void func_218(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	char* sVar8;

	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar8 = func_191((uParam2->f_5[iVar6 /*62*/])->f_1);
	switch ((uParam2->f_5[iVar6 /*62*/])->f_3)
	{
		case 0:
			if ((uParam2->f_5[iVar6 /*62*/])->f_2 > (uParam2->f_5[iVar6 /*62*/])->f_4)
			{
				if (func_192(uParam0, iVar7, sVar8, "PBL_Express_WinA", 2))
				{
					func_270(uParam2->f_5[iVar6 /*62*/], 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_197(uParam0, iVar7, uParam1, "Seat_01");
				func_195(uParam0, uParam1->f_12, &vVar3);
				func_196(uParam0, uParam1->f_12, &vVar0);
				if (func_198(uParam0, iVar7, vVar3, vVar0))
				{
					func_270(uParam2->f_5[iVar6 /*62*/], 1);
				}
			}
			break;
		case 2:
			if (func_291(uParam0, iVar7, "NoCardsLoopA") || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, 1426724047))
			{
				func_138(uParam2->f_5[iVar6 /*62*/], 1, 0, 0);
			}
			break;
	}
}

void func_219(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	char* sVar8;

	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar8 = func_191((uParam2->f_5[iVar6 /*62*/])->f_1);
	switch ((uParam2->f_5[iVar6 /*62*/])->f_3)
	{
		case 0:
			if ((uParam2->f_5[iVar6 /*62*/])->f_2 > (uParam2->f_5[iVar6 /*62*/])->f_4)
			{
				if (func_192(uParam0, iVar7, sVar8, "PBL_RevealLoss", 2))
				{
					func_270(uParam2->f_5[iVar6 /*62*/], 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_280(uParam0, iVar7, (32 + iVar6), func_288(32), 0);
				func_280(uParam0, iVar7, (38 + iVar6), func_288(38), 0);
				func_197(uParam0, iVar7, uParam1, "Seat_01");
				func_195(uParam0, uParam1->f_12, &vVar3);
				func_196(uParam0, uParam1->f_12, &vVar0);
				if (func_198(uParam0, iVar7, vVar3, vVar0))
				{
					func_270(uParam2->f_5[iVar6 /*62*/], 1);
					if (func_190())
					{
						func_301(uParam0, uParam1->f_11);
					}
				}
			}
			break;
		case 2:
			if (func_291(uParam0, iVar7, "NoCardsLoopA") || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, 1426724047))
			{
				func_138(uParam2->f_5[iVar6 /*62*/], 1, 0, 0);
			}
			break;
	}
}

void func_220(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	char* sVar8;

	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar8 = func_191((uParam2->f_5[iVar6 /*62*/])->f_1);
	switch ((uParam2->f_5[iVar6 /*62*/])->f_3)
	{
		case 0:
			if ((uParam2->f_5[iVar6 /*62*/])->f_2 > (uParam2->f_5[iVar6 /*62*/])->f_4)
			{
				if (func_192(uParam0, iVar7, sVar8, "PBL_RevealWin", 2))
				{
					func_270(uParam2->f_5[iVar6 /*62*/], 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_280(uParam0, iVar7, (32 + iVar6), func_288(32), 0);
				func_280(uParam0, iVar7, (38 + iVar6), func_288(38), 0);
				func_197(uParam0, iVar7, uParam1, "Seat_01");
				func_195(uParam0, uParam1->f_12, &vVar3);
				func_196(uParam0, uParam1->f_12, &vVar0);
				if (func_198(uParam0, iVar7, vVar3, vVar0))
				{
					func_270(uParam2->f_5[iVar6 /*62*/], 1);
				}
			}
			break;
		case 2:
			if (func_291(uParam0, iVar7, "NoCardsLoopA") || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, 1426724047))
			{
				func_138(uParam2->f_5[iVar6 /*62*/], 1, 0, 0);
			}
			break;
	}
}

void func_221(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;

	iVar2 = uParam1->f_12;
	iVar9 = (0 + iVar2);
	switch ((uParam2->f_5[iVar2 /*62*/])->f_3)
	{
		case 0:
			uParam2->f_388 = iVar2;
			if ((uParam2->f_5[iVar2 /*62*/])->f_2 < (uParam2->f_5[iVar2 /*62*/])->f_4)
			{
				return;
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar1 = (62 + iVar0);
				func_65(uParam0, iVar1);
				if (func_132(uParam0, iVar0))
				{
					func_127(uParam0, iVar0, 0, &vVar3, &vVar6, 0, 1);
					func_302(uParam0, iVar1, func_128(), vVar3, vVar6);
					func_283(uParam0, iVar0, (uParam2->f_5[iVar2 /*62*/])->f_58, 1);
				}
				iVar0++;
			}
			if (func_303(uParam0, iVar2))
			{
				func_270(uParam2->f_5[iVar2 /*62*/], 1);
			}
			break;
		case 1:
			if (func_304(uParam0, uParam2))
			{
				func_270(uParam2->f_5[iVar2 /*62*/], 1);
			}
			break;
		case 2:
			if (func_291(uParam0, iVar9, "TakePotA"))
			{
				func_305(uParam0, uParam1->f_11);
				func_270(uParam2->f_5[iVar2 /*62*/], 1);
			}
			break;
		case 3:
			if (func_291(uParam0, iVar9, "NoCardsLoopA") || func_281(uParam0, iVar9) > 0.5f)
			{
				iVar0 = 0;
				while (iVar0 < 6)
				{
					iVar1 = func_245(iVar0, 0);
					func_246(uParam0, iVar1, -0.5f);
					iVar1 = (62 + iVar0);
					func_246(uParam0, iVar1, -0.5f);
					(uParam2->f_5[iVar0 /*62*/])->f_58 = 0;
					iVar0++;
				}
				func_138(uParam2->f_5[iVar2 /*62*/], 1, 0, 0);
			}
			break;
	}
}

void func_222(var uParam0, var uParam1, var uParam2)
{
	var uVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	char* sVar10;

	iVar8 = uParam1->f_12;
	iVar9 = (0 + iVar8);
	if (iVar8 < 0 || iVar8 >= 6)
	{
		return;
	}
	sVar10 = func_191((uParam2->f_5[iVar8 /*62*/])->f_1);
	switch ((uParam2->f_5[iVar8 /*62*/])->f_3)
	{
		case 0:
			if (uParam0->f_2149 == 0)
			{
				func_138(uParam2->f_5[iVar8 /*62*/], 1, 0, 0);
				return;
			}
			if ((uParam2->f_5[iVar8 /*62*/])->f_2 > (uParam2->f_5[iVar8 /*62*/])->f_4)
			{
				if (func_192(uParam0, iVar9, sVar10, "PBL_Cleanup", 2))
				{
					func_270(uParam2->f_5[iVar8 /*62*/], 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar9))
			{
				if (Local_1.f_380)
				{
					iVar6 = 0;
					while (iVar6 < 3)
					{
						iVar7 = (25 + iVar6);
						func_280(uParam0, iVar9, iVar7, func_288(iVar7), 0);
						iVar6++;
					}
				}
				else
				{
					iVar6 = 0;
					while (iVar6 < 3)
					{
						iVar7 = (25 + iVar6);
						func_287(uParam0, iVar7, 0);
						iVar6++;
					}
				}
				if (Local_1.f_381)
				{
					iVar7 = 28;
					func_280(uParam0, iVar9, iVar7, func_288(iVar7), 0);
				}
				else
				{
					iVar7 = 28;
					func_287(uParam0, iVar7, 0);
				}
				if (Local_1.f_382)
				{
					iVar7 = 29;
					func_280(uParam0, iVar9, iVar7, func_288(iVar7), 0);
				}
				else
				{
					iVar7 = 29;
					func_287(uParam0, iVar7, 0);
				}
				iVar7 = 30;
				func_280(uParam0, iVar9, iVar7, func_288(iVar7), 0);
				iVar7 = 31;
				func_280(uParam0, iVar9, iVar7, func_288(iVar7), 0);
				if ((uParam2->f_5[iVar8 /*62*/])->f_57 == 1)
				{
					func_280(uParam0, iVar9, (32 + iVar8), func_288(32), 0);
					func_280(uParam0, iVar9, (38 + iVar8), func_288(38), 0);
				}
				func_197(uParam0, iVar9, uParam1, "Seat_01");
				func_195(uParam0, uParam1->f_12, &uVar0);
				func_196(uParam0, uParam1->f_12, &vVar3);
				if (func_198(uParam0, iVar9, uParam0->f_3, vVar3))
				{
					func_270(uParam2->f_5[iVar8 /*62*/], 1);
				}
			}
			break;
		case 2:
			if (!func_291(uParam0, iVar9, "NoCardsLoopA"))
			{
				func_270(uParam2->f_5[iVar8 /*62*/], 1);
			}
			break;
		case 3:
			if (func_291(uParam0, iVar9, "NoCardsLoopA") || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, 1426724047))
			{
				iVar6 = 0;
				while (iVar6 < 7)
				{
					iVar7 = (25 + iVar6);
					func_65(uParam0, iVar7);
					iVar6++;
				}
				iVar6 = 0;
				while (iVar6 < 6)
				{
					iVar7 = (32 + iVar6);
					func_65(uParam0, iVar7);
					iVar7 = (38 + iVar6);
					func_65(uParam0, iVar7);
					iVar6++;
				}
				func_125(uParam0, iVar8);
				uParam2->f_380 = 0;
				uParam2->f_381 = 0;
				uParam2->f_382 = 0;
				uParam0->f_2149 = 0;
				func_138(uParam2->f_5[iVar8 /*62*/], 1, 0, 0);
			}
			break;
	}
}

void func_223(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	DECORATOR::DECOR_REMOVE(iParam0, "PedSeatedForMinigame");
}

char* func_224()
{
	return "unnamed";
}

void func_225(var uParam0, var uParam1)
{
	uParam0->f_11 = uParam1;
	func_73(&(uParam0->f_12));
}

int func_226(int iParam0, vector3 vParam1, float fParam4, int iParam5, var uParam6, int iParam7)
{
	vector3 vVar0;
	var uVar3;

	if (!func_171(iParam0))
	{
		return 0;
	}
	if (!func_306(iParam0, iParam5, &vVar0))
	{
		return 0;
	}
	*uParam6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, vVar0) };
	if (iParam7 == 1)
	{
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam6 + Vector(0.1f, 0f, 0f), &uVar3, 0))
		{
			uParam6->f_2 = uVar3;
		}
	}
	return 1;
}

int func_227(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_228(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	vector3 vVar0;
	float fVar3;
	var uVar4;

	if (!func_171(iParam0))
	{
		return 0;
	}
	if (!func_306(iParam0, iParam5, &vVar0))
	{
		return 0;
	}
	*iParam6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, vVar0) };
	if (iParam8 == 1)
	{
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(*iParam6 + Vector(0.1f, 0f, 0f), &uVar4, 0))
		{
			iParam6->f_2 = uVar4;
		}
	}
	if (!func_229(iParam0, iParam5, &fVar3))
	{
		return 0;
	}
	*iParam7 = (fParam4 + fVar3);
	if (*iParam7 > 360f)
	{
		*iParam7 = (*iParam7 - 360f);
	}
	if (*iParam7 < -360f)
	{
		*iParam7 = (*iParam7 + 360f);
	}
	return 1;
}

int func_229(int iParam0, int iParam1, float fParam2)
{
	switch (iParam0)
	{
		case 2:
			if (iParam1 < 0 || iParam1 >= 6)
			{
				return 0;
			}
			switch (iParam1)
			{
				case 0:
					*fParam2 = 180f;
					return 1;
				case 1:
					*fParam2 = 120f;
					return 1;
				case 2:
					*fParam2 = 60f;
					return 1;
				case 3:
					*fParam2 = 0f;
					return 1;
				case 4:
					*fParam2 = -60f;
					return 1;
				case 5:
					*fParam2 = -120f;
					return 1;
				default:
					break;
			}
			return 1;
		case 0:
			switch (iParam1)
			{
				case 0:
					*fParam2 = (-112.4086f + 180f);
					return 1;
				case 1:
					*fParam2 = (-157.4087f + 180f);
					return 1;
				case 2:
					*fParam2 = (157.5913f + 180f);
					return 1;
				case 3:
					*fParam2 = (112.5913f + 180f);
					return 1;
				case 4:
					*fParam2 = 180f;
					return 1;
				default:
					break;
			}
			return 0;
		case 1:
			switch (iParam1)
			{
				case 0:
					*fParam2 = 180f;
					return 1;
				case 1:
					*fParam2 = 0f;
					return 1;
				case 2:
					*fParam2 = 90f;
					return 1;
				case 3:
					*fParam2 = 270f;
					return 1;
				default:
					break;
			}
			return 0;
		case 3:
			switch (iParam1)
			{
				case 0:
					*fParam2 = 90f;
					return 1;
				case 1:
					*fParam2 = 270f;
					return 1;
				default:
					break;
			}
			return 0;
		default:
			break;
	}
	return 1;
}

int func_230(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;

	bVar0 = true;
	if (iParam2 == 0)
	{
		if (iParam1 == 0)
		{
			vVar1 = { 0.2855f, 0.6374f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, 164.3123f };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { 0.6947f, 0.0714f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, 104.3123f };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { 0.4092f, -0.5659f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, 44.3123f };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { -0.2855f, -0.6374f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, -15.6877f };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { -0.6947f, -0.0714f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, -75.6877f };
		}
		else if (iParam1 == 5)
		{
			vVar1 = { -0.4092f, 0.5659f, 0.8006f };
			vVar4 = { 0.0247f, -0.0879f, -135.6877f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 0)
	{
		vVar1 = { -0.0088f, 0.3252f, 0.8015f };
		vVar4 = { 0f, 0f, 100.3871f };
	}
	else if (iParam1 == 1)
	{
		vVar1 = { 0.2772f, 0.1702f, 0.8015f };
		vVar4 = { 0f, 0f, 40.3871f };
	}
	else if (iParam1 == 2)
	{
		vVar1 = { 0.286f, -0.155f, 0.8015f };
		vVar4 = { 0f, 0f, -19.6129f };
	}
	else if (iParam1 == 3)
	{
		vVar1 = { 0.0088f, -0.3252f, 0.8015f };
		vVar4 = { 0f, 0f, -79.6129f };
	}
	else if (iParam1 == 4)
	{
		vVar1 = { -0.2772f, -0.1702f, 0.8015f };
		vVar4 = { 0f, 0f, -139.6129f };
	}
	else if (iParam1 == 5)
	{
		vVar1 = { -0.286f, 0.155f, 0.8015f };
		vVar4 = { 0f, 0f, 160.3871f };
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	else if (bParam5)
	{
		func_232(uParam0->f_3, uParam0->f_6, vVar1, vVar4, uParam3, uParam4);
	}
	else
	{
		*uParam3 = { vVar1 };
		*uParam4 = { vVar4 };
	}
	return 1;
}

int func_231(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	struct<2> Var3;

	iVar0 = iParam0;
	Var3 = 14;
	Var3.f_1 = 2;
	func_279(&uVar2, Var3, iLocal_0, 0);
	switch (iVar0)
	{
		case 24:
			if (func_307(&uVar1, iLocal_0))
			{
				return uVar1;
			}
			return 1647372804;
		case 68:
			return func_128();
		case 25:
			Var3 = 11;
			Var3.f_1 = 0;
			if (func_279(&uVar1, Var3, iLocal_0, 0))
			{
				return uVar1;
			}
			return uVar2;
		case 26:
			Var3 = 8;
			Var3.f_1 = 2;
			if (func_279(&uVar1, Var3, iLocal_0, 0))
			{
				return uVar1;
			}
			return uVar2;
		case 27:
			Var3 = 3;
			Var3.f_1 = 1;
			if (func_279(&uVar1, Var3, iLocal_0, 0))
			{
				return uVar1;
			}
			return uVar2;
		case 28:
			Var3 = 4;
			Var3.f_1 = 0;
			if (func_279(&uVar1, Var3, iLocal_0, 0))
			{
				return uVar1;
			}
			return uVar2;
		case 29:
			Var3 = 9;
			Var3.f_1 = 3;
			if (func_279(&uVar1, Var3, iLocal_0, 0))
			{
				return uVar1;
			}
			return uVar2;
		case 30:
			return uVar2;
		case 31:
			return uVar2;
		case 32:
			return uVar2;
		case 38:
			return uVar2;
		case 33:
			return uVar2;
		case 39:
			return uVar2;
		case 34:
			return uVar2;
		case 40:
			return uVar2;
		case 35:
			return uVar2;
		case 41:
			return uVar2;
		case 36:
			return uVar2;
		case 42:
			return uVar2;
		case 37:
			return uVar2;
		case 43:
			return uVar2;
		default:
			break;
	}
	return func_128();
}

void func_232(vector3 vParam0, float fParam3, vector3 vParam4, vector3 vParam7, var uParam10, var uParam11)
{
	vector3 vVar0;

	vVar0.x = ((vParam4.x * BUILTIN::COS(fParam3)) - (vParam4.y * BUILTIN::SIN(fParam3)));
	vVar0.f_1 = ((vParam4.x * BUILTIN::SIN(fParam3)) + (vParam4.y * BUILTIN::COS(fParam3)));
	vVar0.f_2 = vParam4.z;
	*uParam10 = { vVar0 + vParam0 };
	*uParam11 = vParam7.x;
	uParam11->f_1 = vParam7.y;
	uParam11->f_2 = (vParam7.z + fParam3);
}

int func_233(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*iParam0 = -1587988328;
			return 1;
		case 1:
			*iParam0 = -1993750510;
			return 1;
		case 2:
			*iParam0 = 1069538232;
			return 1;
		case 3:
			*iParam0 = 1590697544;
			return 1;
		case 4:
			*iParam0 = 335130626;
			return 1;
		case 5:
			*iParam0 = 855344262;
			return 1;
		case 6:
			*iParam0 = -1884742536;
			return 1;
		case 7:
			*iParam0 = -1499241424;
			return 1;
		case 8:
			*iParam0 = -1499241424;
			return 1;
		default:
			break;
	}
	return 0;
	return 0;
}

bool func_234(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_235(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		iVar0 = 0;
		iVar1 = 0;
		iVar3 = iVar2 + 1;
		if (iVar2 == 0)
		{
		}
		else
		{
			if (iVar3 == 6)
			{
				iVar0 = 4;
				iVar1 = 0;
			}
			if (iVar0 == 0)
			{
				if (iParam0 <= func_308(iVar2) * 4)
				{
					iVar0 = 4;
					iVar1 = 0;
				}
				else if (iParam0 <= (func_308(iVar2) * 3 + func_308(iVar3) * 1))
				{
					iVar0 = 3;
					iVar1 = 1;
				}
				else if (iParam0 <= (func_308(iVar2) * 2 + func_308(iVar3) * 2))
				{
					iVar0 = 2;
					iVar1 = 2;
				}
				else if (iParam0 <= (func_308(iVar2) * 1 + func_308(iVar3) * 3))
				{
					iVar0 = 1;
					iVar1 = 3;
				}
			}
			if (iVar0 > 0)
			{
			}
			else
			{
				iVar2++;
			}
			iVar4 = 0;
			while (iVar4 < 4)
			{
				if (iVar4 < iVar0)
				{
					(*uParam1)[iVar4] = iVar2;
				}
				else
				{
					(*uParam1)[iVar4] = iVar3;
				}
				iVar4++;
			}
			iVar5 = func_309(iParam0, (iVar0 * func_308(iVar2)));
			iVar4 = 0;
			while (iVar4 < 4)
			{
				if (iVar4 < iVar0)
				{
					(*uParam2)[iVar4] = (iVar5 / iVar0);
					if (iVar4 < (iVar5 % iVar0))
					{
						(*uParam2)[iVar4] = uParam2[iVar4] + 1;
					}
				}
				iVar4++;
			}
			iVar5 = (iParam0 - iVar5);
			iVar4 = 0;
			while (iVar4 < 4)
			{
				if (iVar4 >= iVar0)
				{
					(*uParam2)[iVar4] = (iVar5 / iVar1);
					if (iVar4 - iVar0) < (iVar5 % iVar1)
					{
						(*uParam2)[iVar4] = uParam2[iVar4] + 1;
					}
				}
				iVar4++;
			}
		}
	}

int func_236(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;

	fVar0 = (BUILTIN::TO_FLOAT(func_308(iParam0)) / BUILTIN::TO_FLOAT(10));
	iVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iParam1) / fVar0));
	if (iParam2 != -1 && iVar1 > iParam2)
	{
		iVar1 = iParam2;
	}
	return iVar1;
}

void func_237(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;

	iVar6 = func_310(iParam1, iParam2);
	if (iVar6 >= uParam0->f_281)
	{
		return;
	}
	func_284(uParam0, iParam1, iParam2, &vVar0, &vVar3, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST((uParam0->f_281[iVar6 /*24*/])->f_4))
	{
		ENTITY::SET_ENTITY_COORDS((uParam0->f_281[iVar6 /*24*/])->f_4, vVar0, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION((uParam0->f_281[iVar6 /*24*/])->f_4, vVar3, 2, true);
		func_311((uParam0->f_281[iVar6 /*24*/])->f_4, iParam4, iParam5);
		func_312((uParam0->f_281[iVar6 /*24*/])->f_4, iParam3);
		ENTITY::SET_ENTITY_VISIBLE((uParam0->f_281[iVar6 /*24*/])->f_4, bParam6);
	}
	else
	{
		func_302(uParam0, iVar6, func_128(), vVar0, vVar3);
		func_311((uParam0->f_281[iVar6 /*24*/])->f_4, iParam4, iParam5);
		func_312((uParam0->f_281[iVar6 /*24*/])->f_4, iParam3);
	}
}

void func_238(var uParam0, vector3 vParam1)
{
	uParam0->f_11 = { vParam1 };
}

void func_239(var uParam0)
{
	Global_1899528->f_61.f_5 = uParam0;
}

void func_240(int iParam0)
{
	Global_1899528->f_61 = iParam0;
}

void func_241(int iParam0)
{
	func_313(iParam0, iParam0->f_4 + 1);
}

void func_242(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_314(iParam0, 0, 0);
	if (func_315(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_316(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_317(iParam0, 1);
			}
			else
			{
				func_318(iParam0, 1);
			}
		}
		else
		{
			func_319(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_320())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

int func_243(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (&uParam0->f_14[iParam2] == iParam1 && iParam3 == 0)
	{
		if (MISC::IS_BIT_SET(uParam0->f_22, iParam2))
		{
			return 1;
		}
	}
	uParam0->f_14[iParam2] = iParam1;
	MISC::SET_BIT(&(uParam0->f_22), iParam2);
	MISC::CLEAR_BIT(&(uParam0->f_23), iParam2);
	return 1;
}

int func_244(var uParam0, int iParam1, int iParam2)
{
	if (!MISC::IS_BIT_SET(iParam1->f_386, iParam2))
	{
		return 0;
	}
	if (!(iParam1->f_5[iParam2 /*62*/])->f_57)
	{
		return 0;
	}
	return func_112(uParam0, iParam2);
}

int func_245(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return (44 + iParam0);
		case 1:
			return (50 + iParam0);
		case 2:
			return (56 + iParam0);
		default:
			break;
	}
	return (44 + iParam0);
}

void func_246(var uParam0, int iParam1, float fParam2)
{
	if (iParam1 < 0 || iParam1 >= 69)
	{
		return;
	}
	if (&uParam0->f_281[iParam1 /*24*/] != 5)
	{
		(uParam0->f_281[iParam1 /*24*/])->f_22 = 0f;
	}
	else
	{
		(uParam0->f_281[iParam1 /*24*/])->f_22 = fParam2;
	}
}

void func_247(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	Global_1899528->f_61.f_1 = uParam0;
	if (iParam2 < 6)
	{
		Global_1899528->f_61.f_134[iParam2] = iParam1;
		Global_1899528->f_61.f_7[iParam2] = iParam3;
		Global_1899528->f_61.f_14[iParam2] = iParam4;
		Global_1899528->f_61.f_21[iParam2] = iParam5;
		Global_1899528->f_61.f_28[iParam2] = iParam6;
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
	}
}

void func_248(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_1899528->f_61.f_1 = uParam0;
	if (iParam2 < 32)
	{
		Global_1899528->f_61.f_101[iParam2] = iParam1;
		Global_1899528->f_61.f_35[iParam2] = iParam3;
		Global_1899528->f_61.f_68[iParam2] = iParam4;
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
	}
}

int func_249(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
		if (iVar1 != iParam1)
		{
			if (uParam0->f_106[iVar1 /*29*/] && (uParam0->f_106[iVar1 /*29*/])->f_1 == 5)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_250(var uParam0, var uParam1, char* sParam2)
{
	if (uParam0->f_2145 == 0)
	{
		return 0;
	}
	return func_321(uParam1, sParam2, joaat("speech_params_add_blip"), 0, 1, 0, 0, 1);
}

var func_251(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	if (iParam2 == uParam0->f_388)
	{
		func_138(uParam0->f_5[iParam2 /*62*/], 3, iParam3, 0);
		(uParam0->f_5[iParam2 /*62*/])->f_55 = 3;
		return (uParam0->f_5[iParam2 /*62*/])->f_55;
	}
	switch (iVar2)
	{
		case 0:
			func_138(uParam0->f_5[iParam2 /*62*/], 3, iParam3, 0);
			(uParam0->f_5[iParam2 /*62*/])->f_55 = 3;
			return (uParam0->f_5[iParam2 /*62*/])->f_55;
		case 1:
			func_138(uParam0->f_5[iParam2 /*62*/], 6, iParam3, 0);
			(uParam0->f_5[iParam2 /*62*/])->f_55 = 0;
			return (uParam0->f_5[iParam2 /*62*/])->f_55;
		case 2:
			func_138(uParam0->f_5[iParam2 /*62*/], 4, iParam3, 0);
			(uParam0->f_5[iParam2 /*62*/])->f_55 = 2;
			return (uParam0->f_5[iParam2 /*62*/])->f_55;
		case 3:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, uParam0, iVar0) && iVar0 != iParam2)
				{
					if (&uParam0->f_5[iVar0 /*62*/] != 12 && &uParam0->f_5[iVar0 /*62*/] != 11)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
			if (iVar1 >= 2 && iParam2 != uParam0->f_378)
			{
				func_138(uParam0->f_5[iParam2 /*62*/], 11, iParam3, 0);
				(uParam0->f_5[iParam2 /*62*/])->f_55 = 4;
				return (uParam0->f_5[iParam2 /*62*/])->f_55;
			}
			break;
	}
	func_138(uParam0->f_5[iParam2 /*62*/], 6, iParam3, 0);
	(uParam0->f_5[iParam2 /*62*/])->f_55 = 0;
	return (uParam0->f_5[iParam2 /*62*/])->f_55;
}

int func_252(int iParam0, int iParam1)
{
	int iVar0;
	char cVar1[64];

	if (func_322(iParam1))
	{
		return 0;
	}
	if (func_323(iParam1))
	{
		return 1;
	}
	if (iParam0 == 2)
	{
		if (!PED::IS_PED_MALE(iParam1))
		{
			return 0;
		}
		if (PED::_0xBD0E4F52F6D95242(iParam1))
		{
			return 0;
		}
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam1, 0))
		{
			if (PED::_0x34D6AC1157C8226C(iParam1, -55367021))
			{
				return 1;
			}
			if (PED::_0x34D6AC1157C8226C(iParam1, -2043611403))
			{
				return 1;
			}
			if (PED::_0x34D6AC1157C8226C(iParam1, joaat("prop_human_seat_chair")))
			{
				return 1;
			}
		}
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam1, -1))
		{
			return 1;
		}
		if (func_324(iParam1))
		{
			return 1;
		}
		if (((!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam1, "mini_games@poker_mg@base", "no_cards_idle_a", 1) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam1, "mini_games@poker_mg@base", "no_cards_idle_b", 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam1, "mini_games@poker_mg@base", "no_cards_idle_c", 1)) && !(TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iParam1) && TASK::_0xCACC2F9D994504B7(iParam1) == 319699045))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if (PED::_0xBD0E4F52F6D95242(iParam1))
		{
			return 0;
		}
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam1, 0))
		{
			if (PED::_0x34D6AC1157C8226C(iParam1, -402120378))
			{
				return 1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			StringCopy(&cVar1, "mini_games@dominoes@enter_exit@player_0", 64);
			StringIntConCat(&cVar1, iVar0, 64);
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam1, &cVar1, "player_00_idle", 1))
			{
				return 1;
			}
			StringCopy(&cVar1, "mini_games@dominoes@game@player_0", 64);
			StringIntConCat(&cVar1, iVar0, 64);
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam1, &cVar1, "player_00_idle", 1))
			{
				return 1;
			}
			iVar0++;
		}
		if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iParam1))
		{
			return TASK::_0xCACC2F9D994504B7(iParam1) == -672963996;
		}
		return func_324(iParam1);
	}
	else if (iParam0 == 0)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam1, 0))
		{
			if (PED::_0x34D6AC1157C8226C(iParam1, -1473436841))
			{
				return 1;
			}
		}
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam1, -1))
		{
			return 1;
		}
		return func_324(iParam1);
	}
	return 1;
}

void func_253(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			ENTITY::DETACH_ENTITY(iParam0, bParam1, bParam2);
		}
	}
}

struct<8> func_254(char* sParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

void func_255(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_256(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_257(int iParam0)
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

int func_258(int iParam0)
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

void func_259(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_325(iParam0, iParam1))
		{
			if (func_326(iParam0, iParam1))
			{
				if (func_327(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_328(iParam0);
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

void func_260(int iParam0, int iParam1, bool bParam2)
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

void func_261(int iParam0, bool bParam1)
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

void func_262(int iParam0, int iParam1)
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

void func_263(var uParam0, int iParam1)
{
	MISC::_0xE84AAC1B22A73E99(uParam0, iParam1);
}

void func_264(var uParam0, var uParam1)
{
	uParam0->f_3 = uParam1;
	func_73(&(uParam0->f_4));
}

float func_265(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_266(int iParam0, int iParam1)
{
	int iVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;

	switch (iParam0)
	{
		case 0:
			iVar0[0] = 1;
			iVar0[1] = 5;
			iVar0[2] = 10;
			iVar0[3] = 50;
			iVar0[4] = 100;
			iVar0[5] = 500;
			iVar11 = 6;
			iVar12 = 100;
			break;
		case 2:
		default:
			iVar0[0] = 1;
			iVar0[1] = 2;
			iVar0[2] = 5;
			iVar0[3] = 10;
			iVar0[4] = 20;
			iVar0[5] = 50;
			iVar0[6] = 100;
			iVar0[7] = 200;
			iVar0[8] = 500;
			iVar11 = 9;
			iVar12 = 100;
			break;
	}
	iVar13 = (iVar11 - 1);
	while (iVar13 >= 0)
	{
		if ((iParam1 / &iVar0[iVar13]) >= iVar12 && (iParam1 % &iVar0[iVar13]) == 0)
		{
		}
		else
		{
			iVar13 = (iVar13 - 1);
		}
	}
	if (iVar13 < 0)
	{
		iVar13 = 0;
	}
	uVar14 = &iVar0[iVar13];
	return uVar14;
}

int func_267(int iParam0, float fParam1, int iParam2, var uParam3)
{
	float fVar0;
	float fVar1;

	if (!func_171(iParam0))
	{
		return 0;
	}
	if (!func_229(iParam0, iParam2, &fVar0))
	{
		return 0;
	}
	fVar1 = (fParam1 + fVar0);
	if (fVar1 > 360f)
	{
		fVar1 = (fVar1 - 360f);
	}
	if (fVar1 < -360f)
	{
		fVar1 = (fVar1 + 360f);
	}
	*uParam3 = { 0f, 0f, fVar1 };
	return 1;
}

int func_268(var uParam0, int iParam1, int iParam2)
{
	if (&uParam0->f_1938[iParam1 /*29*/] > 4)
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam2))
		{
			return 0;
		}
		return ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam2, (uParam0->f_1938[iParam1 /*29*/])->f_1);
	}
	return 0;
}

bool func_269(var uParam0, var uParam1)
{
	if (!uParam0->f_2149)
	{
		return false;
	}
	return (*uParam1 >= 3 && *uParam1 <= 13);
}

void func_270(var uParam0, int iParam1)
{
	uParam0->f_3++;
	uParam0->f_2 = 0f;
	if (iParam1 == 0)
	{
	}
}

void func_271(var uParam0, int iParam1)
{
	uParam0->f_3 = 100;
	uParam0->f_2 = 0f;
	if (iParam1 == 0)
	{
	}
}

void func_272(var uParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar4 = 0;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		iVar3 = 0;
		while (iVar3 < 15)
		{
			if (iVar3 >= 2)
			{
				Var0.f_1 = iVar2;
				Var0 = iVar3;
				*((*uParam0)[iVar4 /*2*/]) = { Var0 };
				iVar4++;
			}
			iVar3++;
		}
		iVar2++;
	}
	uParam0->f_105 = 0;
	uParam0->f_106 = iVar4;
}

void func_273(var uParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar4 = 0;
	while (iVar4 < 5)
	{
		iVar2 = 0;
		while (iVar2 < uParam0->f_106)
		{
			iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam0->f_106);
			Var0 = { *((*uParam0)[iVar2 /*2*/]) };
			*((*uParam0)[iVar2 /*2*/]) = { *((*uParam0)[iVar3 /*2*/]) };
			*((*uParam0)[iVar3 /*2*/]) = { Var0 };
			iVar2++;
		}
		iVar4++;
	}
}

int func_274(var uParam0, var uParam1)
{
	if (uParam0->f_105 >= uParam0->f_106)
	{
		return 0;
	}
	*uParam1 = { *((*uParam0)[uParam0->f_105 /*2*/]) };
	uParam0->f_105++;
	return 1;
}

int func_275(var uParam0, var uParam1)
{
	if (func_329(uParam0, *uParam1))
	{
		return 0;
	}
	if (uParam0->f_23 == 11)
	{
		return 0;
	}
	*((*uParam0)[uParam0->f_23 /*2*/]) = { *uParam1 };
	uParam0->f_23++;
	return 1;
}

int func_276(var uParam0, var uParam1)
{
	int iVar0;

	if (uParam0->f_24 == uParam1->f_24)
	{
		iVar0 = 0;
		while (iVar0 < func_309(5, func_309(uParam0->f_23, uParam1->f_23)))
		{
			if (uParam0[iVar0 /*2*/] > uParam1[iVar0 /*2*/])
			{
				return 1;
			}
			else if (uParam0[iVar0 /*2*/] < uParam1[iVar0 /*2*/])
			{
				return -1;
			}
			iVar0++;
		}
		return 0;
	}
	if (uParam0->f_24 > uParam1->f_24)
	{
		return 1;
	}
	if (uParam0->f_24 < uParam1->f_24)
	{
		return -1;
	}
	return 0;
}

void func_277(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 69)
	{
		func_161(uParam0, iVar0, bParam1);
		iVar0++;
	}
}

int func_278(var uParam0, int iParam1)
{
	struct<4> Var0;

	Var0 = { func_330(uParam0, iParam1) };
	return func_192(uParam0, 6, "SCRIPT@MINI_GAME@POKER@PREPOSTGAME_DEAL", &Var0, 2);
}

int func_279(int iParam0, struct<2> Param1, int iParam3, bool bParam4)
{
	switch (iParam3)
	{
		case 0:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = 1909758928;
							return 1;
						case 3:
							*iParam0 = 1162468676;
							return 1;
						case 4:
							*iParam0 = -1354372995;
							return 1;
						case 5:
							*iParam0 = 127662037;
							return 1;
						case 6:
							*iParam0 = -858857622;
							return 1;
						case 7:
							*iParam0 = -2062492572;
							return 1;
						case 8:
							*iParam0 = -542504583;
							return 1;
						case 9:
							*iParam0 = -1827263623;
							return 1;
						case 10:
							*iParam0 = -674570242;
							return 1;
						case 11:
							*iParam0 = 828828635;
							return 1;
						case 12:
							*iParam0 = 1774527635;
							return 1;
						case 13:
							*iParam0 = -880550872;
							return 1;
						case 14:
							*iParam0 = 1118659955;
							return 1;
						default:
							break;
					}
					break;
				case 1:
					switch (Param1)
					{
						case 2:
							*iParam0 = 1377685326;
							return 1;
						case 3:
							*iParam0 = 2122521996;
							return 1;
						case 4:
							*iParam0 = -905735271;
							return 1;
						case 5:
							*iParam0 = -2041734073;
							return 1;
						case 6:
							*iParam0 = 1336229167;
							return 1;
						case 7:
							*iParam0 = -142928476;
							return 1;
						case 8:
							*iParam0 = 1949899020;
							return 1;
						case 9:
							*iParam0 = -1016355603;
							return 1;
						case 10:
							*iParam0 = -2060997082;
							return 1;
						case 11:
							*iParam0 = 679836386;
							return 1;
						case 12:
							*iParam0 = 205850401;
							return 1;
						case 13:
							*iParam0 = -9762481;
							return 1;
						case 14:
							*iParam0 = -1889013498;
							return 1;
						default:
							break;
					}
					break;
				case 0:
					switch (Param1)
					{
						case 2:
							*iParam0 = 490528894;
							return 1;
						case 3:
							*iParam0 = 1857377268;
							return 1;
						case 4:
							*iParam0 = 306779471;
							return 1;
						case 5:
							*iParam0 = -265576506;
							return 1;
						case 6:
							*iParam0 = 1764499352;
							return 1;
						case 7:
							*iParam0 = 343197067;
							return 1;
						case 8:
							*iParam0 = 611917374;
							return 1;
						case 9:
							*iParam0 = 1319922984;
							return 1;
						case 10:
							*iParam0 = 1496774356;
							return 1;
						case 11:
							*iParam0 = 241847248;
							return 1;
						case 12:
							*iParam0 = 1715260480;
							return 1;
						case 13:
							*iParam0 = -972291366;
							return 1;
						case 14:
							*iParam0 = -983269631;
							return 1;
						default:
							break;
					}
					break;
				case 2:
					switch (Param1)
					{
						case 2:
							*iParam0 = 890959011;
							return 1;
						case 3:
							*iParam0 = -1889927490;
							return 1;
						case 4:
							*iParam0 = 231465939;
							return 1;
						case 5:
							*iParam0 = 551112092;
							return 1;
						case 6:
							*iParam0 = -1081501637;
							return 1;
						case 7:
							*iParam0 = -1816049069;
							return 1;
						case 8:
							*iParam0 = 888381965;
							return 1;
						case 9:
							*iParam0 = -804165125;
							return 1;
						case 10:
							*iParam0 = -741495176;
							return 1;
						case 11:
							*iParam0 = -1801783288;
							return 1;
						case 12:
							*iParam0 = -2006996000;
							return 1;
						case 13:
							*iParam0 = -1114933352;
							return 1;
						case 14:
							*iParam0 = 1487250557;
							return 1;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (Param1.f_1)
			{
				case 3:
					switch (Param1)
					{
						case 2:
							*iParam0 = 2003217523;
							return 1;
						case 3:
							*iParam0 = -399697037;
							return 1;
						case 4:
							*iParam0 = -1518699789;
							return 1;
						case 5:
							*iParam0 = -997552329;
							return 1;
						case 6:
							*iParam0 = 1652001878;
							return 1;
						case 7:
							*iParam0 = 186320325;
							return 1;
						case 8:
							*iParam0 = -1326803989;
							return 1;
						case 9:
							*iParam0 = 737551253;
							return 1;
						case 10:
							*iParam0 = 668030318;
							return 1;
						case 11:
							*iParam0 = 859105085;
							return 1;
						case 12:
							*iParam0 = -594986572;
							return 1;
						case 13:
							*iParam0 = -1754685568;
							return 1;
							*iParam0 = 570384605;
							return 1;
							Jump @2103; //curOff = 1365
							switch (Param1)
							{
								case 2:
									*iParam0 = 496728947;
									return 1;
								case 3:
									*iParam0 = 1921848184;
									return 1;
								case 4:
									*iParam0 = -546878645;
									return 1;
								case 5:
									*iParam0 = -821118254;
									return 1;
								case 6:
									*iParam0 = -361944149;
									return 1;
								case 7:
									*iParam0 = -1874474629;
									return 1;
								case 8:
									*iParam0 = -318877148;
									return 1;
								case 9:
									*iParam0 = 932665613;
									return 1;
								case 10:
									*iParam0 = -2038176093;
									return 1;
								case 11:
									*iParam0 = -667785661;
									return 1;
								case 12:
									*iParam0 = 208099752;
									return 1;
								case 13:
									*iParam0 = -581256491;
									return 1;
								case 14:
									*iParam0 = 894832080;
									return 1;
								default:
									break;
							}
							Jump @2103; //curOff = 1610
							switch (Param1)
							{
								case 2:
									*iParam0 = 1051290148;
									return 1;
								case 3:
									*iParam0 = -1005545109;
									return 1;
								case 4:
									*iParam0 = 1821478065;
									return 1;
								case 5:
									*iParam0 = 540188127;
									return 1;
								case 6:
									*iParam0 = -1480085904;
									return 1;
								case 7:
									*iParam0 = 825496160;
									return 1;
								case 8:
									*iParam0 = -628192245;
									return 1;
								case 9:
									*iParam0 = -215756895;
									return 1;
								case 10:
									*iParam0 = 793896324;
									return 1;
								case 11:
									*iParam0 = 1121466671;
									return 1;
								case 12:
									*iParam0 = 1834923532;
									return 1;
								case 13:
									*iParam0 = -1282408094;
									return 1;
								case 14:
									*iParam0 = 383127860;
									return 1;
								default:
									break;
							}
							Jump @2103; //curOff = 1855
							switch (Param1)
							{
								case 2:
									*iParam0 = 684527193;
									return 1;
								case 3:
									*iParam0 = -263420923;
									return 1;
								case 4:
									*iParam0 = -249784185;
									return 1;
								case 5:
									*iParam0 = 1143187053;
									return 1;
								case 6:
									*iParam0 = 827657438;
									return 1;
								case 7:
									*iParam0 = -1102425647;
									return 1;
								case 8:
									*iParam0 = 853839925;
									return 1;
								case 9:
									*iParam0 = -1261345136;
									return 1;
								case 10:
									*iParam0 = -1516404361;
									return 1;
								case 11:
									*iParam0 = 1432174202;
									return 1;
								case 12:
									*iParam0 = 1131319157;
									return 1;
								case 13:
									*iParam0 = 186094910;
									return 1;
								case 14:
									*iParam0 = -1567460112;
									return 1;
								default:
									break;
							}
							Jump @9231; //curOff = 2103
							switch (Param1.f_1)
							{
								case 3:
									switch (Param1)
									{
										case 2:
											*iParam0 = joaat("p_crd_2_c01x_gk");
											return 1;
										case 3:
											*iParam0 = -1306858058;
											return 1;
										case 4:
											*iParam0 = -1611982353;
											return 1;
										case 5:
											*iParam0 = 739756370;
											return 1;
										case 6:
											*iParam0 = 1801166233;
											return 1;
										case 7:
											*iParam0 = -644313522;
											return 1;
										case 8:
											*iParam0 = -832951172;
											return 1;
										case 9:
											*iParam0 = 1988315838;
											return 1;
										case 10:
											*iParam0 = -1001399461;
											return 1;
										case 11:
											*iParam0 = 583972710;
											return 1;
										case 12:
											*iParam0 = 854868500;
											return 1;
										case 13:
											*iParam0 = 629055820;
											return 1;
										case 14:
											*iParam0 = -833244723;
											return 1;
										default:
											break;
									}
									break;
								case 1:
									switch (Param1)
									{
										case 2:
											*iParam0 = 1280053851;
											return 1;
										case 3:
											*iParam0 = -633466200;
											return 1;
										case 4:
											*iParam0 = -1836575021;
											return 1;
										case 5:
											*iParam0 = -1110186928;
											return 1;
										case 6:
											*iParam0 = 1672340679;
											return 1;
										case 7:
											*iParam0 = 2003108760;
											return 1;
										case 8:
											*iParam0 = 1877192539;
											return 1;
										case 9:
											*iParam0 = -1703049832;
											return 1;
										case 10:
											*iParam0 = -1497400706;
											return 1;
										case 11:
											*iParam0 = 1971631392;
											return 1;
										case 12:
											*iParam0 = -2127206140;
											return 1;
										case 13:
											*iParam0 = -2048927458;
											return 1;
										case 14:
											*iParam0 = 1630107168;
											return 1;
										default:
											break;
									}
									break;
								case 0:
									switch (Param1)
									{
										case 2:
											*iParam0 = -949698496;
											return 1;
										case 3:
											*iParam0 = 355316014;
											return 1;
										case 4:
											*iParam0 = 1604154240;
											return 1;
										case 5:
											*iParam0 = -1789343904;
											return 1;
										case 6:
											*iParam0 = -50867196;
											return 1;
										case 7:
											*iParam0 = -1012504675;
											return 1;
										case 8:
											*iParam0 = -159578860;
											return 1;
										case 9:
											*iParam0 = 1097950533;
											return 1;
										case 10:
											*iParam0 = -1819094497;
											return 1;
										case 11:
											*iParam0 = 763417437;
											return 1;
										case 12:
											*iParam0 = -1643922980;
											return 1;
										case 13:
											*iParam0 = 1726242611;
											return 1;
										case 14:
											*iParam0 = -982898598;
											return 1;
										default:
											break;
									}
									break;
								case 2:
									switch (Param1)
									{
										case 2:
											*iParam0 = -597281244;
											return 1;
										case 3:
											*iParam0 = 1859837183;
											return 1;
										case 4:
											*iParam0 = -717777272;
											return 1;
										case 5:
											*iParam0 = -384065410;
											return 1;
										case 6:
											*iParam0 = -426226845;
											return 1;
										case 7:
											*iParam0 = -1560133449;
											return 1;
										case 8:
											*iParam0 = -1724719987;
											return 1;
										case 9:
											*iParam0 = -1506573666;
											return 1;
										case 10:
											*iParam0 = -833467841;
											return 1;
										case 11:
											*iParam0 = 1913040302;
											return 1;
										case 12:
											*iParam0 = -970236810;
											return 1;
										case 13:
											*iParam0 = 990091302;
											return 1;
										case 14:
											*iParam0 = 918658043;
											return 1;
										default:
											break;
									}
									break;
							}
							Jump @9231; //curOff = 3120
							switch (Param1.f_1)
							{
								case 3:
									switch (Param1)
									{
										case 2:
											*iParam0 = -403301546;
											return 1;
										case 3:
											*iParam0 = 1871423067;
											return 1;
										case 4:
											*iParam0 = 1337869136;
											return 1;
										case 5:
											*iParam0 = -1544981815;
											return 1;
										case 6:
											*iParam0 = 1935838007;
											return 1;
										case 7:
											*iParam0 = 1362450780;
											return 1;
										case 8:
											*iParam0 = -311392807;
											return 1;
										case 9:
											*iParam0 = 1979302072;
											return 1;
										case 10:
											*iParam0 = 527759776;
											return 1;
										case 11:
											*iParam0 = 972511286;
											return 1;
										case 12:
											*iParam0 = 866723984;
											return 1;
										case 13:
											*iParam0 = -1501906712;
											return 1;
										case 14:
											*iParam0 = 1657044585;
											return 1;
										default:
											break;
									}
									break;
								case 1:
									switch (Param1)
									{
										case 2:
											*iParam0 = 696549872;
											return 1;
										case 3:
											*iParam0 = 1029329299;
											return 1;
										case 4:
											*iParam0 = -204176389;
											return 1;
										case 5:
											*iParam0 = -605490871;
											return 1;
										case 6:
											*iParam0 = -752686013;
											return 1;
										case 7:
											*iParam0 = -2098928623;
											return 1;
										case 8:
											*iParam0 = 673396831;
											return 1;
										case 9:
											*iParam0 = 61996838;
											return 1;
										case 10:
											*iParam0 = 707385061;
											return 1;
										case 11:
											*iParam0 = -1336887993;
											return 1;
										case 12:
											*iParam0 = 1986014158;
											return 1;
										case 13:
											*iParam0 = -1279519199;
											return 1;
										case 14:
											*iParam0 = -404939929;
											return 1;
										default:
											break;
									}
									break;
								case 0:
									switch (Param1)
									{
										case 2:
											*iParam0 = 1766621235;
											return 1;
										case 3:
											*iParam0 = 639465642;
											return 1;
										case 4:
											*iParam0 = 538279577;
											return 1;
										case 5:
											*iParam0 = 1589664504;
											return 1;
										case 6:
											*iParam0 = 1277241365;
											return 1;
										case 7:
											*iParam0 = 464078840;
											return 1;
										case 8:
											*iParam0 = 1382365335;
											return 1;
										case 9:
											*iParam0 = -1642414969;
											return 1;
										case 10:
											*iParam0 = 51231304;
											return 1;
										case 11:
											*iParam0 = 1283399627;
											return 1;
										case 12:
											*iParam0 = 1832068833;
											return 1;
										case 13:
											*iParam0 = -1516046037;
											return 1;
										case 14:
											*iParam0 = 663524178;
											return 1;
										default:
											break;
									}
									break;
								case 2:
									switch (Param1)
									{
										case 2:
											*iParam0 = -305746106;
											return 1;
										case 3:
											*iParam0 = -208088591;
											return 1;
										case 4:
											*iParam0 = 1937181298;
											return 1;
										case 5:
											*iParam0 = 707745297;
											return 1;
										case 6:
											*iParam0 = -318896190;
											return 1;
										case 7:
											*iParam0 = -954744024;
											return 1;
										case 8:
											*iParam0 = 930365499;
											return 1;
										case 9:
											*iParam0 = -1247282198;
											return 1;
										case 10:
											*iParam0 = 1370939361;
											return 1;
										case 11:
											*iParam0 = -753399062;
											return 1;
										case 12:
											*iParam0 = -977688234;
											return 1;
										case 13:
											*iParam0 = -1596094065;
											return 1;
										case 14:
											*iParam0 = -373053921;
											return 1;
										default:
											break;
									}
									break;
							}
							Jump @9231; //curOff = 4137
							switch (Param1.f_1)
							{
								case 3:
									switch (Param1)
									{
										case 2:
											*iParam0 = 1387954345;
											return 1;
										case 3:
											*iParam0 = -1354962655;
											return 1;
										case 4:
											*iParam0 = -804464549;
											return 1;
										case 5:
											*iParam0 = 1348814278;
											return 1;
										case 6:
											*iParam0 = 657062187;
											return 1;
										case 7:
											*iParam0 = 1510162208;
											return 1;
										case 8:
											*iParam0 = 2009701297;
											return 1;
										case 9:
											*iParam0 = 1853223245;
											return 1;
										case 10:
											*iParam0 = -1775176139;
											return 1;
										case 11:
											*iParam0 = 617703278;
											return 1;
										case 12:
											*iParam0 = -1298938137;
											return 1;
										case 13:
											*iParam0 = -1941521224;
											return 1;
										case 14:
											*iParam0 = -1676024061;
											return 1;
										default:
											break;
									}
									break;
								case 1:
									switch (Param1)
									{
										case 2:
											*iParam0 = 391724922;
											return 1;
										case 3:
											*iParam0 = 671459626;
											return 1;
										case 4:
											*iParam0 = -1487277617;
											return 1;
										case 5:
											*iParam0 = -907221559;
											return 1;
										case 6:
											*iParam0 = -2131404875;
											return 1;
										case 7:
											*iParam0 = 1136582530;
											return 1;
										case 8:
											*iParam0 = -2120550211;
											return 1;
										case 9:
											*iParam0 = -281297502;
											return 1;
										case 10:
											*iParam0 = 892072825;
											return 1;
										case 11:
											*iParam0 = 1611660243;
											return 1;
										case 12:
											*iParam0 = -1248904689;
											return 1;
										case 13:
											*iParam0 = -2000963135;
											return 1;
										case 14:
											*iParam0 = -328923850;
											return 1;
										default:
											break;
									}
									break;
								case 0:
									switch (Param1)
									{
										case 2:
											*iParam0 = 2037189536;
											return 1;
										case 3:
											*iParam0 = -2045530267;
											return 1;
										case 4:
											*iParam0 = 2045295050;
											return 1;
										case 5:
											*iParam0 = 1726116464;
											return 1;
										case 6:
											*iParam0 = 136818655;
											return 1;
										case 7:
											*iParam0 = 657382278;
											return 1;
										case 8:
											*iParam0 = 1404937476;
											return 1;
										case 9:
											*iParam0 = -1888826317;
											return 1;
										case 10:
											*iParam0 = 681653557;
											return 1;
										case 11:
											*iParam0 = -721735422;
											return 1;
										case 12:
											*iParam0 = 965390753;
											return 1;
										case 13:
											*iParam0 = 72733444;
											return 1;
										case 14:
											*iParam0 = 2080330127;
											return 1;
										default:
											break;
									}
									break;
								case 2:
									switch (Param1)
									{
										case 2:
											*iParam0 = -446539351;
											return 1;
										case 3:
											*iParam0 = -1722641930;
											return 1;
										case 4:
											*iParam0 = 243348692;
											return 1;
										case 5:
											*iParam0 = -2096430697;
											return 1;
										case 6:
											*iParam0 = 1941234074;
											return 1;
										case 7:
											*iParam0 = 990323913;
											return 1;
										case 8:
											*iParam0 = -1593509009;
											return 1;
										case 9:
											*iParam0 = -1941079438;
											return 1;
										case 10:
											*iParam0 = 948933843;
											return 1;
										case 11:
											*iParam0 = -1393933166;
											return 1;
										case 12:
											*iParam0 = 1865479666;
											return 1;
										case 13:
											*iParam0 = 1475987833;
											return 1;
										case 14:
											*iParam0 = 1464992706;
											return 1;
										default:
											break;
									}
									break;
							}
							Jump @9231; //curOff = 5154
							switch (Param1.f_1)
							{
								case 3:
									switch (Param1)
									{
										case 2:
											*iParam0 = 940287542;
											return 1;
										case 3:
											*iParam0 = 790418313;
											return 1;
										case 4:
											*iParam0 = -2116754376;
											return 1;
										case 5:
											*iParam0 = 1317169409;
											return 1;
										case 6:
											*iParam0 = 1033660954;
											return 1;
										case 7:
											*iParam0 = 124978929;
											return 1;
										case 8:
											*iParam0 = -725520485;
											return 1;
										case 9:
											*iParam0 = -1172744195;
											return 1;
										case 10:
											*iParam0 = 1815096273;
											return 1;
										case 11:
											*iParam0 = 1304006097;
											return 1;
										case 12:
											*iParam0 = -1300766016;
											return 1;
										case 13:
											*iParam0 = -250573840;
											return 1;
										case 14:
											*iParam0 = -1824431250;
											return 1;
										default:
											break;
									}
									break;
								case 1:
									switch (Param1)
									{
										case 2:
											*iParam0 = 80437487;
											return 1;
										case 3:
											*iParam0 = -11479234;
											return 1;
										case 4:
											*iParam0 = 1490589553;
											return 1;
										case 5:
											*iParam0 = -1110583329;
											return 1;
										case 6:
											*iParam0 = -1753679949;
											return 1;
										case 7:
											*iParam0 = 1137688840;
											return 1;
										case 8:
											*iParam0 = -1710863708;
											return 1;
										case 9:
											*iParam0 = 2130883601;
											return 1;
										case 10:
											*iParam0 = -1779427821;
											return 1;
										case 11:
											*iParam0 = -48560774;
											return 1;
										case 12:
											*iParam0 = -1378832890;
											return 1;
										case 13:
											*iParam0 = -1337061193;
											return 1;
										case 14:
											*iParam0 = -962473954;
											return 1;
										default:
											break;
									}
									break;
								case 0:
									switch (Param1)
									{
										case 2:
											*iParam0 = -140928778;
											return 1;
										case 3:
											*iParam0 = 1767974563;
											return 1;
										case 4:
											*iParam0 = 701349000;
											return 1;
										case 5:
											*iParam0 = -2012550923;
											return 1;
										case 6:
											*iParam0 = -802659006;
											return 1;
										case 7:
											*iParam0 = 1535788576;
											return 1;
										case 8:
											*iParam0 = -539132616;
											return 1;
										case 9:
											*iParam0 = -355413556;
											return 1;
										case 10:
											*iParam0 = 125575728;
											return 1;
										case 11:
											*iParam0 = 1392136522;
											return 1;
										case 12:
											*iParam0 = -1089443358;
											return 1;
										case 13:
											*iParam0 = 1496031634;
											return 1;
										case 14:
											*iParam0 = -1494400830;
											return 1;
										default:
											break;
									}
									break;
								case 2:
									switch (Param1)
									{
										case 2:
											*iParam0 = 877243702;
											return 1;
										case 3:
											*iParam0 = -30406831;
											return 1;
										case 4:
											*iParam0 = 1507721315;
											return 1;
										case 5:
											*iParam0 = 220923946;
											return 1;
										case 6:
											*iParam0 = 386780259;
											return 1;
										case 7:
											*iParam0 = 679225015;
											return 1;
										case 8:
											*iParam0 = -130832693;
											return 1;
										case 9:
											*iParam0 = -1857759931;
											return 1;
										case 10:
											*iParam0 = -1549381684;
											return 1;
										case 11:
											*iParam0 = -1306599616;
											return 1;
										case 12:
											*iParam0 = -1317905551;
											return 1;
										case 13:
											*iParam0 = -1489968742;
											return 1;
										case 14:
											*iParam0 = 274824986;
											return 1;
										default:
											break;
									}
									break;
							}
							Jump @9231; //curOff = 6171
							switch (Param1.f_1)
							{
								case 3:
									switch (Param1)
									{
										case 2:
											*iParam0 = 345349862;
											return 1;
										case 3:
											*iParam0 = 233738904;
											return 1;
										case 4:
											*iParam0 = 1509393818;
											return 1;
										case 5:
											*iParam0 = 60813080;
											return 1;
										case 6:
											*iParam0 = -1588867364;
											return 1;
										case 7:
											*iParam0 = -741971058;
											return 1;
										case 8:
											*iParam0 = -1901598027;
											return 1;
										case 9:
											*iParam0 = 216857924;
											return 1;
										case 10:
											*iParam0 = -1696859616;
											return 1;
										case 11:
											*iParam0 = 1250297936;
											return 1;
										case 12:
											*iParam0 = -1324063231;
											return 1;
										case 13:
											*iParam0 = 1618412160;
											return 1;
										case 14:
											*iParam0 = -628673108;
											return 1;
										default:
											break;
									}
									break;
								case 1:
									switch (Param1)
									{
										case 2:
											*iParam0 = -1336484459;
											return 1;
										case 3:
											*iParam0 = 776262968;
											return 1;
										case 4:
											*iParam0 = 1952745955;
											return 1;
										case 5:
											*iParam0 = -1067714914;
											return 1;
										case 6:
											*iParam0 = 251115602;
											return 1;
										case 7:
											*iParam0 = 1575451247;
											return 1;
										case 8:
											*iParam0 = -746735956;
											return 1;
										case 9:
											*iParam0 = 326673134;
											return 1;
										case 10:
											*iParam0 = 1872027280;
											return 1;
										case 11:
											*iParam0 = -1718732108;
											return 1;
										case 12:
											*iParam0 = -1092024524;
											return 1;
										case 13:
											*iParam0 = 2071887039;
											return 1;
										case 14:
											*iParam0 = -1106339162;
											return 1;
										default:
											break;
									}
									break;
								case 0:
									switch (Param1)
									{
										case 2:
											*iParam0 = 1066627194;
											return 1;
										case 3:
											*iParam0 = -799997502;
											return 1;
										case 4:
											*iParam0 = 398382432;
											return 1;
										case 5:
											*iParam0 = -766490354;
											return 1;
										case 6:
											*iParam0 = 834493370;
											return 1;
										case 7:
											*iParam0 = -627280631;
											return 1;
										case 8:
											*iParam0 = -1689944957;
											return 1;
										case 9:
											*iParam0 = -1081837586;
											return 1;
										case 10:
											*iParam0 = 1994269490;
											return 1;
										case 11:
											*iParam0 = 98506870;
											return 1;
										case 12:
											*iParam0 = 828661392;
											return 1;
										case 13:
											*iParam0 = -1902382615;
											return 1;
										case 14:
											*iParam0 = -1749931149;
											return 1;
										default:
											break;
									}
									break;
								case 2:
									switch (Param1)
									{
										case 2:
											*iParam0 = -1612375921;
											return 1;
										case 3:
											*iParam0 = -464036502;
											return 1;
										case 4:
											*iParam0 = -1734626244;
											return 1;
										case 5:
											*iParam0 = 1432065580;
											return 1;
										case 6:
											*iParam0 = -269373164;
											return 1;
										case 7:
											*iParam0 = -1462036161;
											return 1;
										case 8:
											*iParam0 = 9214594;
											return 1;
										case 9:
											*iParam0 = -449150372;
											return 1;
										case 10:
											*iParam0 = -676777548;
											return 1;
										case 11:
											*iParam0 = 2045572790;
											return 1;
										case 12:
											*iParam0 = 247170975;
											return 1;
										case 13:
											*iParam0 = 2011504438;
											return 1;
										case 14:
											*iParam0 = 1380910900;
											return 1;
										default:
											break;
									}
									break;
							}
							Jump @9231; //curOff = 7187
							switch (Param1.f_1)
							{
								case 3:
									switch (Param1)
									{
										case 2:
											*iParam0 = -1327784484;
											return 1;
										case 3:
											*iParam0 = -1496419081;
											return 1;
										case 4:
											*iParam0 = 769946245;
											return 1;
										case 5:
											*iParam0 = -744715350;
											return 1;
										case 6:
											*iParam0 = -1578164439;
											return 1;
										case 7:
											*iParam0 = 124531649;
											return 1;
										case 8:
											*iParam0 = 28598465;
											return 1;
										case 9:
											*iParam0 = 1620556079;
											return 1;
										case 10:
											*iParam0 = 1251463005;
											return 1;
										case 11:
											*iParam0 = -602401997;
											return 1;
										case 12:
											*iParam0 = -363611516;
											return 1;
										case 13:
											*iParam0 = -1631692560;
											return 1;
										case 14:
											*iParam0 = -771839452;
											return 1;
										default:
											break;
									}
									break;
								case 1:
									switch (Param1)
									{
										case 2:
											*iParam0 = 729415757;
											return 1;
										case 3:
											*iParam0 = 946889695;
											return 1;
										case 4:
											*iParam0 = 1738209787;
											return 1;
										case 5:
											*iParam0 = 609774326;
											return 1;
										case 6:
											*iParam0 = -814389520;
											return 1;
										case 7:
											*iParam0 = -1586099842;
											return 1;
										case 8:
											*iParam0 = 1273393517;
											return 1;
										case 9:
											*iParam0 = -1140616583;
											return 1;
										case 10:
											*iParam0 = 675667608;
											return 1;
										case 11:
											*iParam0 = -359677198;
											return 1;
										case 12:
											*iParam0 = 1703181487;
											return 1;
										case 13:
											*iParam0 = -1127742830;
											return 1;
										case 14:
											*iParam0 = -1294625031;
											return 1;
										default:
											break;
									}
									break;
								case 0:
									switch (Param1)
									{
										case 2:
											*iParam0 = -238808491;
											return 1;
										case 3:
											*iParam0 = -610087366;
											return 1;
										case 4:
											*iParam0 = -2113376606;
											return 1;
										case 5:
											*iParam0 = -1658822997;
											return 1;
										case 6:
											*iParam0 = 458077008;
											return 1;
										case 7:
											*iParam0 = -1479991672;
											return 1;
										case 8:
											*iParam0 = -974205616;
											return 1;
										case 9:
											*iParam0 = -1915480358;
											return 1;
										case 10:
											*iParam0 = -1427302413;
											return 1;
										case 11:
											*iParam0 = 1297056981;
											return 1;
										case 12:
											*iParam0 = -1238217619;
											return 1;
										case 13:
											*iParam0 = 1844773640;
											return 1;
										case 14:
											*iParam0 = 1541545551;
											return 1;
										default:
											break;
									}
									break;
								case 2:
									switch (Param1)
									{
										case 2:
											*iParam0 = 461545493;
											return 1;
										case 3:
											*iParam0 = 760481963;
											return 1;
										case 4:
											*iParam0 = -1747528191;
											return 1;
										case 5:
											*iParam0 = 1706339276;
											return 1;
										case 6:
											*iParam0 = -787395957;
											return 1;
										case 7:
											*iParam0 = 1254414564;
											return 1;
										case 8:
											*iParam0 = -973839534;
											return 1;
										case 9:
											*iParam0 = 964732302;
											return 1;
										case 10:
											*iParam0 = 1965573369;
											return 1;
										case 11:
											*iParam0 = 1273174558;
											return 1;
										case 12:
											*iParam0 = -1366850746;
											return 1;
										case 13:
											*iParam0 = 640816886;
											return 1;
										case 14:
											*iParam0 = 1582547899;
											return 1;
										default:
											break;
									}
									break;
							}
							Jump @9231; //curOff = 8204
							switch (Param1.f_1)
							{
								case 3:
									switch (Param1)
									{
										case 2:
											*iParam0 = -1806179115;
											return 1;
										case 3:
											*iParam0 = 1395346866;
											return 1;
										case 4:
											*iParam0 = -109213256;
											return 1;
										case 5:
											*iParam0 = -1416742002;
											return 1;
										case 6:
											*iParam0 = -1615357250;
											return 1;
										case 7:
											*iParam0 = -486577432;
											return 1;
										case 8:
											*iParam0 = 1488031426;
											return 1;
										case 9:
											*iParam0 = -1158386201;
											return 1;
										case 10:
											*iParam0 = -685512585;
											return 1;
										case 11:
											*iParam0 = -545482240;
											return 1;
										case 12:
											*iParam0 = 1170207075;
											return 1;
										case 13:
											*iParam0 = 829062722;
											return 1;
										case 14:
											*iParam0 = 913568525;
											return 1;
										default:
											break;
									}
									break;
								case 1:
									switch (Param1)
									{
										case 2:
											*iParam0 = 1372376306;
											return 1;
										case 3:
											*iParam0 = -1994390239;
											return 1;
										case 4:
											*iParam0 = 1200601581;
											return 1;
										case 5:
											*iParam0 = -1632804958;
											return 1;
										case 6:
											*iParam0 = -470085637;
											return 1;
										case 7:
											*iParam0 = -53460943;
											return 1;
										case 8:
											*iParam0 = 793294898;
											return 1;
										case 9:
											*iParam0 = -525444146;
											return 1;
										case 10:
											*iParam0 = 1136760211;
											return 1;
										case 11:
											*iParam0 = -418497553;
											return 1;
										case 12:
											*iParam0 = -2106116472;
											return 1;
										case 13:
											*iParam0 = 677599687;
											return 1;
										case 14:
											*iParam0 = 150094641;
											return 1;
										default:
											break;
									}
									break;
								case 0:
									switch (Param1)
									{
										case 2:
											*iParam0 = 372300590;
											return 1;
										case 3:
											*iParam0 = -1894075093;
											return 1;
										case 4:
											*iParam0 = -807400872;
											return 1;
										case 5:
											*iParam0 = 850233799;
											return 1;
										case 6:
											*iParam0 = 1063877511;
											return 1;
										case 7:
											*iParam0 = -1378538896;
											return 1;
										case 8:
											*iParam0 = -125455747;
											return 1;
										case 9:
											*iParam0 = -111972905;
											return 1;
										case 10:
											*iParam0 = 861776066;
											return 1;
										case 11:
											*iParam0 = 1904627018;
											return 1;
										case 12:
											*iParam0 = -1833532042;
											return 1;
										case 13:
											*iParam0 = -1778822384;
											return 1;
										case 14:
											*iParam0 = 1868940630;
											return 1;
										default:
											break;
									}
									break;
								case 2:
									switch (Param1)
									{
										case 2:
											*iParam0 = 1059972971;
											return 1;
										case 3:
											*iParam0 = 1245102704;
											return 1;
										case 4:
											*iParam0 = 857443476;
											return 1;
										case 5:
											*iParam0 = -1967131166;
											return 1;
										case 6:
											*iParam0 = 2056035715;
											return 1;
										case 7:
											*iParam0 = 692065755;
											return 1;
										case 8:
											*iParam0 = 962251301;
											return 1;
										case 9:
											*iParam0 = 487320741;
											return 1;
										case 10:
											*iParam0 = 1501334946;
											return 1;
										case 11:
											*iParam0 = 820339735;
											return 1;
										case 12:
											*iParam0 = 285984845;
											return 1;
										case 13:
											*iParam0 = 1972352444;
											return 1;
										case 14:
											*iParam0 = 1101400672;
											return 1;
										default:
											break;
									}
									break;
							}
							Jump @9231; //curOff = 9221
							return 0;
							switch (iParam3)
							{
								case 0:
									*iParam0 = -1360732541;
									return 0;
								case 1:
									*iParam0 = 319638501;
									return 0;
								case 2:
									*iParam0 = -97213200;
									return 0;
								case 3:
									*iParam0 = 1884526773;
									return 0;
								case 4:
									*iParam0 = -1797228166;
									return 0;
								case 5:
									*iParam0 = -1385386118;
									return 0;
								case 6:
									*iParam0 = -2065276132;
									return 0;
								case 7:
									*iParam0 = -273401568;
									return 0;
								case 8:
									*iParam0 = 188870715;
									return 0;
								default:
									break;
							}
							return 0;
							if (bParam4)
							{
							}
							return 0;
						}

void func_280(var uParam0, int iParam1, int iParam2, char* sParam3, bool bParam4)
{
	struct<4> Var0;

	if (iParam2 < 0 || iParam2 >= 69)
	{
		return;
	}
	if (&uParam0->f_1938[iParam1 /*29*/] < 4)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST((uParam0->f_281[iParam2 /*24*/])->f_4))
	{
		return;
	}
	if ((uParam0->f_281[iParam2 /*24*/])->f_3 != -1 && (uParam0->f_281[iParam2 /*24*/])->f_3 != (uParam0->f_1938[iParam1 /*29*/])->f_1)
	{
		func_161(uParam0, iParam2, 0);
	}
	(uParam0->f_281[iParam2 /*24*/])->f_3 = (uParam0->f_1938[iParam1 /*29*/])->f_1;
	StringCopy(&((uParam0->f_281[iParam2 /*24*/])->f_5), sParam3, 64);
	ENTITY::SET_ENTITY_COLLISION((uParam0->f_281[iParam2 /*24*/])->f_4, false, false);
	if (!ENTITY::IS_ENTITY_ATTACHED((uParam0->f_281[iParam2 /*24*/])->f_4))
	{
		ENTITY::FREEZE_ENTITY_POSITION((uParam0->f_281[iParam2 /*24*/])->f_4, true);
	}
	if (bParam4)
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX((uParam0->f_1938[iParam1 /*29*/])->f_1, sParam3, &Var0, false, 0, 2))
		{
			ENTITY::SET_ENTITY_COORDS((uParam0->f_281[iParam2 /*24*/])->f_4, Var0, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION((uParam0->f_281[iParam2 /*24*/])->f_4, Var0.f_3, 2, true);
		}
	}
	(uParam0->f_281[iParam2 /*24*/])->f_14 = 1;
	ANIMSCENE::SET_ANIM_SCENE_ENTITY((uParam0->f_1938[iParam1 /*29*/])->f_1, sParam3, (uParam0->f_281[iParam2 /*24*/])->f_4, 0);
	ENTITY::SET_ENTITY_VISIBLE((uParam0->f_281[iParam2 /*24*/])->f_4, true);
}

float func_281(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 7)
	{
		return 0f;
	}
	if (&uParam0->f_1938[iParam1 /*29*/] == 5)
	{
		return (uParam0->f_1938[iParam1 /*29*/])->f_2;
	}
	if (&uParam0->f_1938[iParam1 /*29*/] == 6)
	{
		return 1f;
	}
	return 0f;
}

int func_282(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;

	iVar0 = 6;
	if (!func_194(uParam0, iVar0))
	{
		return 0;
	}
	if (!func_132(uParam0, uParam1->f_378))
	{
		uParam1->f_378 = (uParam1->f_378 + 1 % 6);
		return 0;
	}
	iVar9 = (uParam1->f_378 + 1 % 6);
	if (!func_47(uParam0))
	{
		return 0;
	}
	uParam1->f_386 = 0;
	uParam1->f_391 = MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 10f);
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_132(uParam0, iVar9))
		{
			sVar2 = func_288((32 + iVar1));
			func_280(uParam0, iVar0, (32 + iVar9), sVar2, 0);
			sVar2 = func_288((38 + iVar1));
			func_280(uParam0, iVar0, (38 + iVar9), sVar2, 0);
			func_130(uParam0, iVar9, (uParam1->f_5[iVar9 /*62*/])->f_59, 1);
			MISC::SET_BIT(&(uParam1->f_386), iVar9);
			(uParam1->f_5[iVar9 /*62*/])->f_57 = 0;
		}
		else
		{
			(uParam1->f_5[iVar9 /*62*/])->f_57 = 0;
		}
		iVar9 = (iVar9 + 1 % 6);
		iVar1++;
	}
	sVar2 = func_288(24);
	func_280(uParam0, iVar0, 24, sVar2, 0);
	func_197(uParam0, iVar0, uParam0->f_106[uParam1->f_378 /*29*/], "Plr");
	func_195(uParam0, uParam1->f_378, &vVar3);
	func_196(uParam0, uParam1->f_378, &vVar6);
	return func_198(uParam0, iVar0, vVar3, vVar6);
}

void func_283(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_331(iParam2);
	func_332(uParam0, iParam1, iVar0, func_309(iParam2, 4), 0, bParam3);
}

int func_284(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;

	bVar0 = true;
	if (iParam1 == 0)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.2469f, 0.657f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.2508f, 0.605f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.2875f, 0.6661f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.3201f, 0.623f, 0.804f };
			vVar4 = { 0f, 0f, 0f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 1)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.4455f, 0.5423f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.3985f, 0.5197f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.4331f, 0.582f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.3795f, 0.5888f, 0.804f };
			vVar4 = { 0f, 0f, -60f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 2)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.6924f, -0.1147f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.6493f, -0.0852f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.7206f, -0.084f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.6996f, -0.0343f, 0.804f };
			vVar4 = { 0f, 0f, -120f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 3)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.2469f, -0.657f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.2508f, -0.605f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.2875f, -0.6661f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.3201f, -0.623f, 0.804f };
			vVar4 = { 0f, 0f, -180f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 4)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.4455f, -0.5423f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.3985f, -0.5197f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.4331f, -0.582f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.3795f, -0.5888f, 0.804f };
			vVar4 = { 0f, 0f, 120f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 5)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.6924f, 0.1147f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.6493f, 0.0852f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.7206f, 0.084f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.6996f, 0.0343f, 0.804f };
			vVar4 = { 0f, 0f, 60f };
		}
		else
		{
			bVar0 = false;
		}
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	if (iParam5 < 0 || iParam5 >= 10)
	{
		return 0;
	}
	if (bParam6)
	{
		func_232(uParam0->f_3, uParam0->f_6, vVar1, vVar4, uParam3, uParam4);
	}
	else
	{
		*uParam3 = { vVar1 };
		*uParam4 = { vVar4 };
	}
	uParam3->f_2 = (uParam3->f_2 + (BUILTIN::TO_FLOAT(iParam5) * 0.006f));
	return 1;
}

int func_285(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_286(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_331(iParam1);
	func_311(iParam0, func_309(iParam1, iParam2), 0);
	func_312(iParam0, iVar0);
}

void func_287(var uParam0, int iParam1, bool bParam2)
{
	ENTITY::SET_ENTITY_VISIBLE((uParam0->f_281[iParam1 /*24*/])->f_4, bParam2);
}

char* func_288(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	switch (iVar0)
	{
		case 24:
			return "Deck";
		case 25:
			return "Board_Card_01";
		case 26:
			return "Board_Card_02";
		case 27:
			return "Board_Card_03";
		case 28:
			return "Board_Card_04";
		case 29:
			return "Board_Card_05";
		case 30:
			return "Board_Card_06";
		case 31:
			return "Board_Card_07";
		case 68:
			return "Chips_Prop";
		case 32:
			return "Seat_01_Card_01";
		case 38:
			return "Seat_01_Card_02";
		case 33:
			return "Seat_02_Card_01";
		case 39:
			return "Seat_02_Card_02";
		case 34:
			return "Seat_03_Card_01";
		case 40:
			return "Seat_03_Card_02";
		case 35:
			return "Seat_04_Card_01";
		case 41:
			return "Seat_04_Card_02";
		case 36:
			return "Seat_05_Card_01";
		case 42:
			return "Seat_05_Card_02";
		case 37:
			return "Seat_06_Card_01";
		case 43:
			return "Seat_06_Card_02";
		case 44:
			return "Seat_01_Chips_A";
		case 50:
			return "Seat_01_Chips_B";
		case 56:
			return "Seat_01_Chips_C";
		case 45:
			return "Seat_02_Chips_A";
		case 51:
			return "Seat_02_Chips_B";
		case 57:
			return "Seat_02_Chips_C";
		case 46:
			return "Seat_03_Chips_A";
		case 52:
			return "Seat_03_Chips_B";
		case 58:
			return "Seat_03_Chips_C";
		case 47:
			return "Seat_04_Chips_A";
		case 53:
			return "Seat_04_Chips_B";
		case 59:
			return "Seat_04_Chips_C";
		case 48:
			return "Seat_05_Chips_A";
		case 54:
			return "Seat_05_Chips_B";
		case 60:
			return "Seat_05_Chips_C";
		case 49:
			return "Seat_06_Chips_A";
		case 55:
			return "Seat_06_Chips_B";
		case 61:
			return "Seat_06_Chips_C";
		case 0:
			return "Seat_01_Stack_01";
		case 1:
			return "Seat_01_Stack_02";
		case 2:
			return "Seat_01_Stack_03";
		case 3:
			return "Seat_01_Stack_04";
		case 4:
			return "Seat_02_Stack_01";
		case 5:
			return "Seat_02_Stack_02";
		case 6:
			return "Seat_02_Stack_03";
		case 7:
			return "Seat_02_Stack_04";
		case 8:
			return "Seat_03_Stack_01";
		case 9:
			return "Seat_03_Stack_02";
		case 10:
			return "Seat_03_Stack_03";
		case 11:
			return "Seat_03_Stack_04";
		case 12:
			return "Seat_04_Stack_01";
		case 13:
			return "Seat_04_Stack_02";
		case 14:
			return "Seat_04_Stack_03";
		case 15:
			return "Seat_04_Stack_04";
		case 16:
			return "Seat_05_Stack_01";
		case 17:
			return "Seat_05_Stack_02";
		case 18:
			return "Seat_05_Stack_03";
		case 19:
			return "Seat_05_Stack_04";
		case 20:
			return "Seat_06_Stack_01";
		case 21:
			return "Seat_06_Stack_02";
		case 22:
			return "Seat_06_Stack_03";
		case 23:
			return "Seat_06_Stack_04";
		case 62:
			return "Seat_01_BetStack_A";
		case 63:
			return "Seat_02_BetStack_A";
		case 64:
			return "Seat_03_BetStack_A";
		case 65:
			return "Seat_04_BetStack_A";
		case 66:
			return "Seat_05_BetStack_A";
		case 67:
			return "Seat_06_BetStack_A";
		default:
			break;
	}
	return "";
}

int func_289(var uParam0, var uParam1)
{
	if (func_190())
	{
		return func_250(uParam0, uParam1, "MINIGAME_YES");
	}
	return func_250(uParam0, uParam1, "MINIGAME_PLACE_BID");
}

bool func_290(var uParam0, char* sParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_11))
	{
		return false;
	}
	return ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_11, MISC::GET_HASH_KEY(sParam1));
}

int func_291(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 < 0 || iParam1 >= 7)
	{
		return 0;
	}
	if (&uParam0->f_1938[iParam1 /*29*/] == 5)
	{
		return ANIMSCENE::_0x8D81E7824B7753F7((uParam0->f_1938[iParam1 /*29*/])->f_1, sParam2, 1);
	}
	return 0;
}

void func_292(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9)
{
	int iVar0;

	iVar0 = func_331(iParam2);
	func_333(uParam0, iParam1, iVar0, vParam3, vParam6, func_309(iParam2, 4), 0, iParam9);
}

int func_293(var uParam0, var uParam1)
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			return func_250(uParam0, uParam1, "POKER_CALL");
		case 1:
			return func_250(uParam0, uParam1, "MINIGAME_YES");
		case 2:
			return func_250(uParam0, uParam1, "VOCAL_FX_RESPOND");
		default:
			break;
	}
	return 0;
}

int func_294(var uParam0, var uParam1)
{
	if (func_190())
	{
		return func_250(uParam0, uParam1, "MINIGAME_RAISE");
	}
	return func_250(uParam0, uParam1, "MINIGAME_PLACE_BID");
}

int func_295(var uParam0, var uParam1)
{
	return func_250(uParam0, uParam1, "MINIGAME_VOCALFX_DELIBERATING");
}

int func_296(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;

	iVar1 = (0 + iParam2);
	iVar2 = (iParam1 - iParam2);
	if (iVar2 < 0)
	{
		iVar2 += 6;
	}
	if (iVar2 >= 6)
	{
		iVar2 = (iVar2 - 6);
	}
	sVar0 = func_191((Local_1.f_5[iParam2 /*62*/])->f_1);
	switch (iVar2 + 1)
	{
		case 1:
			return func_192(uParam0, iVar1, sVar0, "PBL_ReturnTo01", 2);
		case 2:
			return func_192(uParam0, iVar1, sVar0, "PBL_ReturnTo02", 2);
		case 3:
			return func_192(uParam0, iVar1, sVar0, "PBL_ReturnTo03", 2);
		case 4:
			return func_192(uParam0, iVar1, sVar0, "PBL_ReturnTo04", 2);
		case 5:
			return func_192(uParam0, iVar1, sVar0, "PBL_ReturnTo05", 2);
		case 6:
			return func_192(uParam0, iVar1, sVar0, "PBL_ReturnTo06", 2);
		default:
			break;
	}
	return 0;
}

int func_297(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;

	iVar1 = (0 + iParam1);
	iVar2 = (iParam2 - iParam1);
	if (iVar2 < 0)
	{
		iVar2 += 6;
	}
	if (iVar2 >= 6)
	{
		iVar2 = (iVar2 - 6);
	}
	sVar0 = func_191((Local_1.f_5[iParam1 /*62*/])->f_1);
	switch (iVar2 + 1)
	{
		case 2:
			return func_192(uParam0, iVar1, sVar0, "PBL_PassDeckTo02", 2);
		case 3:
			return func_192(uParam0, iVar1, sVar0, "PBL_PassDeckTo03", 2);
		case 4:
			return func_192(uParam0, iVar1, sVar0, "PBL_PassDeckTo04", 2);
		case 5:
			return func_192(uParam0, iVar1, sVar0, "PBL_PassDeckTo05", 2);
		case 6:
			return func_192(uParam0, iVar1, sVar0, "PBL_PassDeckTo06", 2);
		default:
			break;
	}
	return 0;
}

int func_298(var uParam0, var uParam1)
{
	return func_250(uParam0, uParam1, "GENERIC_THANKS");
}

int func_299(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;

	iVar1 = (0 + iParam2);
	iVar2 = (iParam1 - iParam2);
	if (iVar2 < 0)
	{
		iVar2 += 6;
	}
	if (iVar2 >= 6)
	{
		iVar2 = (iVar2 - 6);
	}
	sVar0 = func_191((Local_1.f_5[iParam2 /*62*/])->f_1);
	switch (iVar2 + 1)
	{
		case 1:
			return func_192(uParam0, iVar1, sVar0, "PBL_FoldTo01", 2);
		case 2:
			return func_192(uParam0, iVar1, sVar0, "PBL_FoldTo02", 2);
		case 3:
			return func_192(uParam0, iVar1, sVar0, "PBL_FoldTo03", 2);
		case 4:
			return func_192(uParam0, iVar1, sVar0, "PBL_FoldTo04", 2);
		case 5:
			return func_192(uParam0, iVar1, sVar0, "PBL_FoldTo05", 2);
		case 6:
			return func_192(uParam0, iVar1, sVar0, "PBL_FoldTo06", 2);
		default:
			break;
	}
	return 0;
}

int func_300(var uParam0, var uParam1)
{
	if (func_190())
	{
		return func_250(uParam0, uParam1, "POKER_FOLD");
	}
	return func_250(uParam0, uParam1, "MINIGAME_NO");
}

int func_301(var uParam0, var uParam1)
{
	return func_250(uParam0, uParam1, "MINIGAME_VOCALFX_LOSS_SMALL");
}

void func_302(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6)
{
	uParam0->f_281[iParam1 /*24*/] = 5;
	(uParam0->f_281[iParam1 /*24*/])->f_16 = { vParam3 };
	(uParam0->f_281[iParam1 /*24*/])->f_19 = { vParam6 };
	(uParam0->f_281[iParam1 /*24*/])->f_1 = iParam2;
	if (ENTITY::DOES_ENTITY_EXIST((uParam0->f_281[iParam1 /*24*/])->f_4) && ENTITY::GET_ENTITY_MODEL((uParam0->f_281[iParam1 /*24*/])->f_4) == iParam2)
	{
		ENTITY::SET_ENTITY_COORDS((uParam0->f_281[iParam1 /*24*/])->f_4, (uParam0->f_281[iParam1 /*24*/])->f_16, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION((uParam0->f_281[iParam1 /*24*/])->f_4, (uParam0->f_281[iParam1 /*24*/])->f_19, 2, true);
		uParam0->f_281[iParam1 /*24*/] = 5;
		return;
	}
	STREAMING::REQUEST_MODEL(iParam2, false);
	while (!STREAMING::HAS_MODEL_LOADED((uParam0->f_281[iParam1 /*24*/])->f_1))
	{
		BUILTIN::WAIT(0);
	}
	(uParam0->f_281[iParam1 /*24*/])->f_4 = OBJECT::CREATE_OBJECT((uParam0->f_281[iParam1 /*24*/])->f_1, (uParam0->f_281[iParam1 /*24*/])->f_16, false, true, false, false, true);
	ENTITY::SET_ENTITY_COORDS((uParam0->f_281[iParam1 /*24*/])->f_4, (uParam0->f_281[iParam1 /*24*/])->f_16, true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION((uParam0->f_281[iParam1 /*24*/])->f_4, (uParam0->f_281[iParam1 /*24*/])->f_19, 2, true);
	uParam0->f_281[iParam1 /*24*/] = 5;
	(uParam0->f_281[iParam1 /*24*/])->f_23 = 255f;
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((uParam0->f_281[iParam1 /*24*/])->f_1);
	ENTITY::SET_ENTITY_COLLISION((uParam0->f_281[iParam1 /*24*/])->f_4, false, false);
	ENTITY::FREEZE_ENTITY_POSITION((uParam0->f_281[iParam1 /*24*/])->f_4, true);
}

bool func_303(var uParam0, int iParam1)
{
	int iVar0;
	char* sVar1;

	iVar0 = (0 + iParam1);
	sVar1 = func_191((Local_1.f_5[iParam1 /*62*/])->f_1);
	return func_192(uParam0, iVar0, sVar1, "PBL_TakePotA", 2);
}

int func_304(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	vector3 vVar4;
	vector3 vVar7;
	int iVar10;

	iVar2 = uParam1->f_388;
	iVar10 = (0 + uParam1->f_388);
	if (!func_47(uParam0))
	{
		return 0;
	}
	if (!func_194(uParam0, iVar10))
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_132(uParam0, iVar2))
		{
			iVar0 = func_126(iVar2);
			sVar3 = func_288((44 + iVar1));
			func_280(uParam0, iVar10, iVar0, sVar3, 0);
		}
		iVar2 = (iVar2 + 1 % 6);
		iVar1++;
	}
	sVar3 = func_334(0);
	func_197(uParam0, iVar10, uParam0->f_106[uParam1->f_388 /*29*/], sVar3);
	func_195(uParam0, uParam1->f_388, &vVar4);
	func_196(uParam0, uParam1->f_388, &vVar7);
	return func_198(uParam0, iVar10, vVar4, vVar7);
}

int func_305(var uParam0, var uParam1)
{
	return func_250(uParam0, uParam1, "MINIGAME_VOCALFX_WIN_SMALL");
}

int func_306(int iParam0, int iParam1, var uParam2)
{
	float fVar0;

	switch (iParam0)
	{
		case 2:
			if (iParam1 < 0 || iParam1 >= 6)
			{
				return 0;
			}
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 0.008654f, 1.171513f, 0.4999996f };
					return 1;
				case 1:
					*uParam2 = { 1.018887f, 0.5782621f, 0.4999996f };
					return 1;
				case 2:
					*uParam2 = { 1.010233f, -0.5932513f, 0.4999996f };
					return 1;
				case 3:
					*uParam2 = { -0.008654f, -1.171513f, 0.4999996f };
					return 1;
				case 4:
					*uParam2 = { -1.018887f, -0.5782621f, 0.4999996f };
					return 1;
				case 5:
					*uParam2 = { -1.010233f, 0.5932513f, 0.4999996f };
					return 1;
				default:
					break;
			}
			return 1;
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { Vector(50f, -7.9116f, 112.5219f) / Vector(100f, 100f, 100f) };
					return 1;
				case 1:
					*uParam2 = { Vector(50f, -73.55062f, 45.94575f) / Vector(100f, 100f, 100f) };
					return 1;
				case 2:
					*uParam2 = { Vector(50f, -72.85871f, -47.61618f) / Vector(100f, 100f, 100f) };
					return 1;
				case 3:
					*uParam2 = { Vector(50f, -6.31211f, -113.1842f) / Vector(100f, 100f, 100f) };
					return 1;
				case 4:
					*uParam2 = { Vector(50f, 82.1513f, 0.8654f) / Vector(100f, 100f, 100f) };
					return 1;
				default:
					break;
			}
			return 0;
		case 1:
			fVar0 = 0.98f;
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 0f, 0.66f, fVar0 };
					return 1;
				case 1:
					*uParam2 = { 0f, -0.66f, fVar0 };
					return 1;
				case 2:
					*uParam2 = { 0.66f, 0f, fVar0 };
					return 1;
				case 3:
					*uParam2 = { -0.66f, 0f, fVar0 };
					return 1;
				default:
					break;
			}
			return 0;
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1f, 0f, 0f };
					return 1;
				case 1:
					*uParam2 = { 1f, 0f, 0f };
					return 1;
				default:
					break;
			}
			return 1;
		default:
			break;
	}
	return 1;
}

int func_307(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 470485448;
			return 1;
		case 1:
			*uParam0 = -291109262;
			return 1;
		case 2:
			*uParam0 = 210029681;
			return 1;
		case 3:
			*uParam0 = 2037482211;
			return 1;
		case 4:
			*uParam0 = 877666613;
			return 1;
		case 5:
			*uParam0 = -1127201651;
			return 1;
		case 6:
			*uParam0 = 1941338030;
			return 1;
		case 7:
			*uParam0 = 181651164;
			return 1;
		case 8:
			*uParam0 = -1328475408;
			return 1;
		default:
			break;
	}
	return 0;
	return 0;
}

int func_308(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 30;
		case 2:
			return 75;
		case 3:
			return 175;
		case 4:
			return 625;
		case 5:
			return 1000;
		default:
			break;
	}
	return 30;
}

int func_309(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_310(int iParam0, int iParam1)
{
	return ((0 + (4 * iParam0)) + iParam1);
}

void func_311(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (iVar1 >= iParam2 && iVar1 < (iParam2 + iParam1))
		{
			fVar0 = 0f;
		}
		else
		{
			fVar0 = 1f;
		}
		switch (iVar1)
		{
			case 0:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip01_Ctrl", fVar0);
				break;
			case 1:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip02_Ctrl", fVar0);
				break;
			case 2:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip03_Ctrl", fVar0);
				break;
			case 3:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip04_Ctrl", fVar0);
				break;
			case 4:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip05_Ctrl", fVar0);
				break;
			case 5:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip06_Ctrl", fVar0);
				break;
			case 6:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip07_Ctrl", fVar0);
				break;
			case 7:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip08_Ctrl", fVar0);
				break;
			case 8:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip09_Ctrl", fVar0);
				break;
			case 9:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip10_Ctrl", fVar0);
				break;
		}
		iVar1++;
	}
}

void func_312(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 3);
			break;
		case 1:
			OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 18);
			break;
		case 2:
			OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 21);
			break;
		case 3:
			OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 24);
			break;
		case 4:
			OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 27);
			break;
		case 5:
			OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iParam0, 15);
			break;
		default:
			break;
	}
}

void func_313(int iParam0, var uParam1)
{
	iParam0->f_4 = uParam1;
	func_73(&(iParam0->f_1));
}

int func_314(int iParam0, bool bParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051081->f_15[0]))) && bParam1)
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
		else
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051081->f_15[0]))) && bParam1)
	{
		if (!OBJECT::_0xB5DED7B65C604FDF(iParam0))
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
	}
	if (bParam2)
	{
		OBJECT::_0x1F1FABFE9B2A1254(iParam0, 1);
	}
	return iParam0;
}

int func_315(int iParam0)
{
	if (func_335(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return 0;
}

void func_316(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_315(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam1, iParam3);
	}
}

void func_317(int iParam0, bool bParam1)
{
	if (func_315(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_318(int iParam0, bool bParam1)
{
	if (func_315(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_319(int iParam0, bool bParam1)
{
	if (func_315(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

int func_320()
{
	return 1;
}

var func_321(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_336(uParam0, &Var0);
}

int func_322(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 1;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_ON_MOUNT(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		return 1;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam0, true))
	{
		return 1;
	}
	if (PED::_0xB086C8C0F5701D14(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_COMBAT(iParam0, 0))
	{
		return 1;
	}
	if (PED::_0x9682F850056C9ADE(iParam0) || PED::_0x3AA24CCC0D451379(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_SHOOTING(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_FLEEING(iParam0))
	{
		return 1;
	}
	if (!ENTITY::IS_ENTITY_UPRIGHT(iParam0, 90f) || ENTITY::IS_ENTITY_UPSIDEDOWN(iParam0))
	{
		return 1;
	}
	if (PED::_0x3E592D0486DEC0F6(iParam0) || PED::IS_PED_FALLING(iParam0))
	{
		return 1;
	}
	if (TASK::IS_PED_GETTING_UP(iParam0) || PED::IS_PED_GETTING_INTO_A_VEHICLE(iParam0))
	{
		return 1;
	}
	if (PED::_0xA911EE21EDF69DAF(iParam0))
	{
		return 1;
	}
	if (PED::_0x0E99E3BF11BB6367(iParam0) || PED::_0x3BDFCF25B58B0415(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_COVER(iParam0, 0, 0))
	{
		return 1;
	}
	if (PED::IS_PED_DIVING(iParam0))
	{
		return 1;
	}
	if (PED::_0xC48A9EB0D499B3E5(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_CLIMBING(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_323(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "PedSeatedForMinigame"))
	{
		return DECORATOR::DECOR_GET_BOOL(iParam0, "PedSeatedForMinigame");
	}
	return 0;
}

int func_324(int iParam0)
{
	vector3 vVar0[3];
	vector3 vVar10;
	float fVar13;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
	{
		return 1;
	}
	if (!TASK::IS_PED_STILL(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_UPRIGHT(iParam0, 90f))
	{
		return 0;
	}
	if (PED::_0xD5FE956C70FF370B(iParam0))
	{
		return 0;
	}
	if (PED::GET_PED_STEALTH_MOVEMENT(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_JUMPING(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_RAGDOLL(iParam0))
	{
		return 0;
	}
	vVar10 = { PED::GET_PED_BONE_COORDS(iParam0, 56200, 0f, 0f, 0f) };
	*(vVar0[2 /*3*/]) = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	if ((vVar10.z - (vVar0[2 /*3*/])->f_2) > 0.7f)
	{
		return 0;
	}
	*(vVar0[0 /*3*/]) = { PED::GET_PED_BONE_COORDS(iParam0, 65478, 0f, 0f, 0f) };
	*(vVar0[1 /*3*/]) = { PED::GET_PED_BONE_COORDS(iParam0, 55120, 0f, 0f, 0f) };
	fVar13 = func_337(*(vVar0[2 /*3*/]) - *(vVar0[1 /*3*/]), *(vVar0[1 /*3*/]) - *(vVar0[0 /*3*/]));
	if (fVar13 < -0.173648f && fVar13 > 0.173648f)
	{
		return 0;
	}
	*(vVar0[0 /*3*/]) = { PED::GET_PED_BONE_COORDS(iParam0, 6884, 0f, 0f, 0f) };
	*(vVar0[1 /*3*/]) = { PED::GET_PED_BONE_COORDS(iParam0, 43312, 0f, 0f, 0f) };
	*(vVar0[2 /*3*/]) = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar13 = func_337(*(vVar0[2 /*3*/]) - *(vVar0[1 /*3*/]), *(vVar0[1 /*3*/]) - *(vVar0[0 /*3*/]));
	if (fVar13 < -0.173648f && fVar13 > 0.173648f)
	{
		return 0;
	}
	return 1;
}

bool func_325(int iParam0, int iParam1)
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

int func_326(int iParam0, int iParam1)
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

int func_327(int iParam0, int iParam1)
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
	if (!func_325(iParam0, iVar0))
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

void func_328(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

int func_329(var uParam0, struct<2> Param1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_23)
	{
		if (uParam0[iVar0 /*2*/] == Param1 && ((*uParam0)[iVar0 /*2*/])->f_1 == Param1.f_1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

struct<4> func_330(var uParam0, int iParam1)
{
	int iVar0;
	char cVar1[32];
	int iVar5;

	StringCopy(&cVar1, "PBL_", 32);
	iVar5 = (iParam1 + 1 % 6);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_132(uParam0, iVar5))
		{
			StringIntConCat(&cVar1, iVar0 + 1, 32);
		}
		iVar5 = (iVar5 + 1 % 6);
		iVar0++;
	}
	return cVar1;
}

int func_331(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 <= func_308(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return (6 - 1);
}

void func_332(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;

	iVar6 = func_126(iParam1);
	if (iVar6 >= uParam0->f_281)
	{
		return;
	}
	func_127(uParam0, iParam1, 0, &vVar0, &vVar3, 0, 1);
	func_302(uParam0, iVar6, func_128(), vVar0, vVar3);
	func_311((uParam0->f_281[iVar6 /*24*/])->f_4, iParam3, iParam4);
	func_312((uParam0->f_281[iVar6 /*24*/])->f_4, iParam2);
	ENTITY::SET_ENTITY_VISIBLE((uParam0->f_281[iVar6 /*24*/])->f_4, bParam5);
}

void func_333(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, bool bParam11)
{
	int iVar0;

	iVar0 = func_126(iParam1);
	if (iVar0 >= uParam0->f_281)
	{
		return;
	}
	func_302(uParam0, iVar0, func_128(), vParam3, vParam6);
	func_311((uParam0->f_281[iVar0 /*24*/])->f_4, iParam9, iParam10);
	func_312((uParam0->f_281[iVar0 /*24*/])->f_4, iParam2);
	ENTITY::SET_ENTITY_VISIBLE((uParam0->f_281[iVar0 /*24*/])->f_4, bParam11);
}

char* func_334(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
			return "Seat_01";
		case 1:
			return "Seat_02";
		case 2:
			return "Seat_03";
		case 3:
			return "Seat_04";
		case 4:
			return "Seat_05";
		case 5:
			return "Seat_06";
		case 6:
			return "Plr";
		default:
			break;
	}
	return "";
}

bool func_335(int iParam0)
{
	return iParam0 != 0;
}

var func_336(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

float func_337(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

