#region Local Var
	struct<18> Local_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_18 = 255;
	var uLocal_19 = 255;
	var uLocal_20 = 255;
	var uLocal_21 = 255;
	var uLocal_22 = 255;
	var uLocal_23 = 255;
	var uLocal_24 = 255;
	var uLocal_25 = 255;
	var uLocal_26 = 255;
	var uLocal_27 = 255;
	var uLocal_28 = 255;
	var uLocal_29 = 255;
	var uLocal_30 = 255;
	var uLocal_31 = 255;
	var uLocal_32 = 255;
	var uLocal_33 = 255;
	var uLocal_34 = 255;
	var uLocal_35 = 255;
	var uLocal_36 = 255;
	var uLocal_37 = 255;
	var uLocal_38 = 255;
	var uLocal_39 = 255;
	var uLocal_40 = 255;
	var uLocal_41 = 255;
	var uLocal_42 = 255;
	var uLocal_43 = 255;
	var uLocal_44 = 255;
	var uLocal_45 = 255;
	var uLocal_46 = 255;
	var uLocal_47 = 255;
	var uLocal_48 = 255;
	var uLocal_49 = 255;
	struct<6> Local_50[32];
	struct<1442> Local_243 = { -1, -1, 0, 0, 0, 255, 0, -1, -1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 404851220, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 1224195223, 1825312110, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 7;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = -1;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	float fLocal_1703 = 0f;
	float fLocal_1704 = 0f;
	var uLocal_1705 = 0;
	struct<348> Local_1706 = { 255, 0, 3, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0 } ;
	struct<14> Local_2054[32];
	struct<854> Local_2503 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0, 0, 12, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, -1, 0, 0, 100, 100, 100 } ;
	var uLocal_3357 = 0;
	var uLocal_3358 = 0;
	var uLocal_3359 = 0;
	struct<8> ScriptParam_0 = { -1, -1, 0, 0, 0, 255, 0, -1 } ;
	var uScriptParam_8 = -1;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_1703 = 1f;
	fLocal_1704 = 1f;
	iVar0 = ScriptParam_0;
	func_1(iVar0);
	func_2(&ScriptParam_0);
	while (!func_3(ScriptParam_0.f_7))
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
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_0, 50, 53);
	func_9(NETWORK::_0xBA24095EA96DFE17(&Local_0), 50, "m_baseHostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_50, 193, 54);
	func_10(NETWORK::_0x690806BC83BC8CA2(Local_50[0 /*6*/]), 193, "m_baseClientData");
	func_11();
	func_12(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_2(int iParam0)
{
	func_13(iParam0);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_14();
	}
}

int func_3(struct<2> Param0)
{
	if (func_15(0, 0))
	{
		return 1;
	}
	else if (func_16(Param0, 0, 128))
	{
		return 1;
	}
	else if (!func_17())
	{
		return 1;
	}
	else if (func_18(Local_243, 64))
	{
		return 1;
	}
	else if (Local_243.f_10 == 9)
	{
		return 1;
	}
	return 0;
}

void func_4()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_19();
	}
	func_20();
}

void func_5()
{
	NETWORK::_0x236905C700FDB54D();
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
	{
		func_21();
	}
	func_22();
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
		if (func_23() == 0)
		{
			if (func_24())
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

int func_9(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_10(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_11()
{
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_1706, 348, 51);
	func_9(NETWORK::_0xBA24095EA96DFE17(&Local_1706), 348, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_2054, 449, 52);
	func_10(NETWORK::_0x690806BC83BC8CA2(Local_2054[0 /*14*/]), 449, "m_clientData");
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
	struct<5> Var0;
	struct<5> Var5;
	int iVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	vector3 vVar19;
	vector3 vVar22;

	Local_243 = { *iParam0 };
	Local_243.f_1332 = NETWORK::PARTICIPANT_ID_TO_INT();
	Local_243.f_1336 = MISC::GET_GAME_TIMER();
	Local_243.f_1268 = func_25(iParam0->f_1) + 1000;
	Local_243.f_1269 = func_26(iParam0->f_1, iParam0->f_2, iParam0->f_3) + 1000;
	Local_243.f_1338 = { func_27(iParam0->f_1, iParam0->f_3) };
	Local_243.f_1346 = { func_28(iParam0->f_1, iParam0->f_3) };
	Local_243.f_1293 = func_29(iParam0->f_1, iParam0->f_2);
	Local_243.f_1294 = func_30(iParam0->f_1, iParam0->f_2);
	Local_243.f_1295 = func_31(iParam0->f_1, iParam0->f_2);
	Local_243.f_1399 = { func_32(iParam0->f_1, iParam0->f_2) };
	func_34(func_33(iParam0->f_1, iParam0->f_2));
	func_35(1619021308);
	if (func_36(&Var0, iParam0->f_1))
	{
		Var5 = { Var0 };
		if (func_37(&Var5) && func_38(&Var5, iParam0->f_3))
		{
			Local_243.f_1273 = 1;
			func_39(Var5, 1189568052, &(Local_243.f_1273), 0);
			Local_243.f_1275 = 2;
			func_39(Var5, -1755025897, &(Local_243.f_1275), 0);
			Local_243.f_1274 = 2;
			func_39(Var5, 948567928, &(Local_243.f_1274), 0);
			Local_243.f_1276 = 28;
			func_39(Var5, -823479386, &(Local_243.f_1276), 1);
			Local_243.f_1387 = joaat("standard");
			func_40(Var5, -467067774, &iVar10, 1);
			func_41(iVar10);
			func_42(Var5, -13272314, &bVar11, 0);
			if (bVar11)
			{
				func_43(134217728);
			}
		}
		Var5 = { Var0 };
		if (((func_44(&Var5) && func_45(&Var5, Local_243.f_2)) && func_37(&Var5)) && func_38(&Var5, iParam0->f_3))
		{
			if (Local_243.f_9 != -785841056)
			{
				func_40(Var5, 511429636, &iVar12, 0);
				iVar13 = iVar12;
				if (iVar13 != 0)
				{
					MISC::_0xBE83CAE8ED77A94F(iVar12);
				}
				iVar14 = -1;
				func_39(Var5, -1102158142, &iVar14, 0);
				if (iVar14 >= 0 && iVar14 < 24)
				{
					NETWORK::_NETWORK_CLOCK_TIME_OVERRIDE(iVar14, 0, 0, 0, false);
				}
			}
		}
	}
	if (func_46(iParam0->f_1, iParam0->f_3, &iVar15))
	{
		iVar16 = func_48(func_47(-1892463704, iVar15));
		iVar17 = func_48(func_47(1374282888, iVar15));
		Local_243.f_1277 = (iVar16 + iVar17);
	}
	iVar18 = func_49(iParam0->f_1);
	if (iVar18 != 0)
	{
		if (func_50(iVar18, &(Local_243.f_1391), 600, -1, 0, 0))
		{
			func_51();
		}
	}
	func_52();
	func_53();
	func_54();
	if (Local_243.f_9 != -785841056)
	{
		func_55(9999.9f);
		GRAPHICS::_0x5199405EABFBD7F0(func_56());
		GRAPHICS::_0x5199405EABFBD7F0(func_57());
		GRAPHICS::_0x5199405EABFBD7F0(func_58());
		Local_243.f_1417 = GRAPHICS::_0x842CCC9491FFCD9B(func_59());
		GRAPHICS::_0xF3E039322BFBD4D8(Local_243.f_1417);
		func_60(&(Local_243.f_1421), 1, 0);
		Local_243.f_1421.f_2 = -1812916243;
		func_61(&(Local_243.f_1421), 0);
		if (func_62(255))
		{
			CAM::DO_SCREEN_FADE_OUT(0);
			func_63(1);
		}
		AUDIO::SET_AUDIO_FLAG("MusicIgnoreDeathArrest", true);
		AUDIO::START_AUDIO_SCENE("rdro_ambient_ped_intensity_zero_scene");
	}
	else if (_NAMESPACE26::_0x9BE7DCB22D32CCBE(iParam0->f_6, PLAYER::PLAYER_ID()))
	{
		func_43(131072);
	}
	func_64();
	if (func_65(131072))
	{
		vVar19 = { func_66(iParam0->f_1, iParam0->f_2) };
		vVar22 = { func_67(iParam0->f_1, iParam0->f_2) };
		if (func_68(vVar19))
		{
		}
		else
		{
			func_69(vVar19, vVar22);
		}
		func_70(1);
	}
	if (Local_243.f_9 != -785841056)
	{
		func_71();
	}
}

void func_14()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Local_0.f_17[iVar0] = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		iVar0++;
	}
	func_72();
}

int func_15(bool bParam0, bool bParam1)
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

int func_16(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265331->f_124445.f_134 & 8 != 0)
	{
		Global_1070356->f_26837 = 1;
		return 1;
	}
	if (func_73(*Global_1051163) && !func_74(*Global_1051163, Param0))
	{
		Global_1070356->f_26837 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_75(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_76(iParam3, 255))
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
	if (func_77())
	{
		Global_1070356->f_26837 = 7;
		return 1;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_73(*Global_1051163))
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

int func_17()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

bool func_18(int iParam0, int iParam1)
{
	return func_78((Global_1185132->f_66[iParam0 /*20*/])->f_6, iParam1);
}

void func_19()
{
	switch (Local_0)
	{
		case 0:
			func_79();
			break;
		case 1:
			func_80();
			break;
		case 3:
			func_81();
			break;
		case 4:
			func_82();
			break;
		case 5:
			func_83();
			break;
		case 6:
			func_84();
			break;
		case 7:
			func_85();
			break;
		case 8:
			func_86();
			break;
	}
}

void func_20()
{
	func_87();
	func_53();
	func_88();
	func_89();
	func_54();
	func_90();
	func_91();
	func_92();
	func_93();
	switch (Local_243.f_10)
	{
		case 0:
			func_94();
			break;
		case 1:
			func_95();
			break;
		case 2:
			func_96();
			break;
		case 3:
			func_97();
			break;
		case 4:
			func_98();
			break;
		case 5:
			func_99();
			break;
		case 6:
			func_100();
			break;
		case 7:
			func_101();
			break;
		case 8:
			func_102();
			break;
	}
}

void func_21()
{
	if (Local_0 > 5)
	{
		NETWORK::_0x78335E12DB0BF961(664);
	}
	func_103();
}

void func_22()
{
	bool bVar0;

	func_104();
	func_105(1);
	func_106();
	func_107();
	func_108();
	func_109();
	func_110();
	func_112(func_111(Local_243.f_1));
	func_113(1);
	func_61(&(Local_243.f_1421), 0);
	if (DATAFILE::_0x7907969497EA92F5(Local_243.f_1391))
	{
		DATAFILE::_DATAFILE_UNLOAD(Local_243.f_1391);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_243.f_1392))
	{
		VOLUME::_DELETE_VOLUME(Local_243.f_1392);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_243.f_1393))
	{
		VOLUME::_DELETE_VOLUME(Local_243.f_1393);
	}
	if (func_114())
	{
		STREAMING::REMOVE_PTFX_ASSET();
	}
	GRAPHICS::_0x37D7BDBA89F13959(func_56());
	GRAPHICS::_0x37D7BDBA89F13959(func_57());
	GRAPHICS::_0x37D7BDBA89F13959(func_58());
	if (Local_243.f_9 != -785841056)
	{
		func_115(Local_243.f_1337);
		MISC::CLEAR_OVERRIDE_WEATHER();
		NETWORK::_0x65F040D91001ED4B(0);
		func_116();
		HUD::_DISPLAY_HUD_COMPONENT(690901814);
		func_117(&(Local_243.f_1421));
		if (GRAPHICS::_0xEEF83A759AE06A27(Local_243.f_1417) && !func_118())
		{
			GRAPHICS::_0x71845905BCCDE781(Local_243.f_1417);
			GRAPHICS::_0xEDA5CBECF56E1386(Local_243.f_1417);
			GRAPHICS::_0x38D9D50F2085E9B3(Local_243.f_1417);
		}
		if (CAM::DOES_CAM_EXIST(Local_243.f_1415))
		{
			CAM::DESTROY_CAM(Local_243.f_1415, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_243.f_1416))
		{
			PED::DELETE_PED(&(Local_243.f_1416));
		}
		AUDIO::_0x2E399EAFBEEA74D5();
	}
	AUDIO::_0x531A78D6BF27014B(func_119());
	AUDIO::_0x9D746964E0CF2C5F(func_120(), func_121());
	AUDIO::_0x9D746964E0CF2C5F(func_122(), func_123());
	func_124();
	func_125();
	func_126(1, 1);
	func_127(0);
	if (func_65(131072))
	{
		func_70(0);
		func_128();
	}
	if (Local_243.f_9 == -785841056)
	{
		if (func_130(func_129(Local_243.f_1)))
		{
			func_131(Local_243.f_1, Local_243.f_2);
			func_132(func_129(Local_243.f_1));
			func_133();
		}
	}
	else
	{
		AUDIO::SET_AUDIO_FLAG("MusicIgnoreDeathArrest", false);
		AUDIO::STOP_AUDIO_SCENE("rdro_ambient_ped_intensity_zero_scene");
	}
	if (func_134(4096) || func_134(8192))
	{
		bVar0 = func_134(8192);
		func_135(Local_243, Local_243.f_1, Local_243.f_7, bVar0);
	}
	else if (func_134(16384))
	{
		func_136(Local_243, Local_243.f_1, Local_243.f_7);
	}
	else
	{
		func_137(Local_243, Local_243.f_7, 0);
	}
	func_138();
	func_139(Local_243.f_9, Local_243.f_4);
}

int func_23()
{
	return Global_1572887->f_13;
}

bool func_24()
{
	return Global_1051202->f_8;
}

int func_25(int iParam0)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 120000;
	if (func_36(&Var1, iParam0))
	{
		func_39(Var1, -463492762, &iVar0, 0);
	}
	return iVar0;
}

int func_26(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 300000;
	if ((((func_36(&Var1, iParam0) && func_44(&Var1)) && func_45(&Var1, uParam1)) && func_37(&Var1)) && func_38(&Var1, uParam2))
	{
		func_39(Var1, 1576411076, &iVar0, 0);
	}
	return iVar0;
}

struct<8> func_27(int iParam0, var uParam1)
{
	struct<8> Var0;
	struct<5> Var8;

	if (((func_36(&Var8, iParam0) && func_37(&Var8)) && func_38(&Var8, uParam1)) && func_140(&Var8))
	{
		func_141(Var8, 37194763, &Var0, 1);
	}
	return Var0;
}

struct<8> func_28(int iParam0, var uParam1)
{
	struct<8> Var0;
	struct<5> Var8;

	if (((func_36(&Var8, iParam0) && func_37(&Var8)) && func_38(&Var8, uParam1)) && func_140(&Var8))
	{
		func_141(Var8, -1771940760, &Var0, 0);
	}
	return Var0;
}

float func_29(int iParam0, var uParam1)
{
	float fVar0;
	struct<5> Var1;

	fVar0 = 200f;
	if ((func_36(&Var1, iParam0) && func_44(&Var1)) && func_45(&Var1, uParam1))
	{
		func_142(Var1, 1168414437, &fVar0, 0);
	}
	return fVar0;
}

float func_30(int iParam0, var uParam1)
{
	var uVar0;
	struct<5> Var1;

	uVar0 = func_29(iParam0, uParam1);
	if ((func_36(&Var1, iParam0) && func_44(&Var1)) && func_45(&Var1, uParam1))
	{
		func_142(Var1, -1393462640, &uVar0, 0);
	}
	return uVar0;
}

float func_31(int iParam0, var uParam1)
{
	float fVar0;
	struct<5> Var1;

	fVar0 = -1f;
	if ((func_36(&Var1, iParam0) && func_44(&Var1)) && func_45(&Var1, uParam1))
	{
		func_142(Var1, 2005647695, &fVar0, 0);
	}
	if (fVar0 < 0f)
	{
		fVar0 = (func_30(iParam0, uParam1) + 200f);
	}
	return fVar0;
}

Vector3 func_32(int iParam0, var uParam1)
{
	vector3 vVar0;
	struct<5> Var3;

	if ((func_36(&Var3, iParam0) && func_44(&Var3)) && func_45(&Var3, uParam1))
	{
		func_143(Var3, 221135615, &vVar0, 0);
	}
	return vVar0;
}

Vector3 func_33(int iParam0, var uParam1)
{
	vector3 vVar0;
	struct<5> Var3;

	if ((func_36(&Var3, iParam0) && func_44(&Var3)) && func_45(&Var3, uParam1))
	{
		func_143(Var3, 2060397848, &vVar0, 0);
	}
	return vVar0;
}

void func_34(vector3 vParam0)
{
	if (!func_144(Local_243.f_1396, vParam0))
	{
		Local_243.f_1396 = { vParam0 };
	}
}

int func_35(int iParam0)
{
	if (Local_243.f_1384 != iParam0)
	{
		Local_243.f_1384 = iParam0;
		return 1;
	}
	return 0;
}

bool func_36(var uParam0, int iParam1)
{
	if (!DATAFILE::_0x7907969497EA92F5(Global_1185132->f_443))
	{
		return false;
	}
	*uParam0 = Global_1185132->f_443;
	uParam0->f_2 = -1093317127;
	uParam0->f_3 = func_145(iParam1);
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_37(var uParam0)
{
	uParam0->f_2 = -310067910;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_38(var uParam0, var uParam1)
{
	uParam0->f_2 = -1739269194;
	uParam0->f_3 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_39(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_INT(iParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_40(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

void func_41(int iParam0)
{
	if (Local_243.f_1387 != iParam0)
	{
		Local_243.f_1387 = iParam0;
	}
}

int func_42(vector3 vParam0, int iParam3, var uParam4, int iParam5, bool bParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_BOOL(bParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

void func_43(int iParam0)
{
	func_146(&(Local_243.f_1334), iParam0);
}

bool func_44(var uParam0)
{
	*uParam0 = Global_1185132->f_443;
	uParam0->f_2 = -1782115362;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_45(var uParam0, var uParam1)
{
	uParam0->f_2 = 454625570;
	uParam0->f_3 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_46(int iParam0, var uParam1, int iParam2)
{
	struct<5> Var0;
	var uVar5;

	if ((func_36(&Var0, iParam0) && func_37(&Var0)) && func_38(&Var0, uParam1))
	{
		if (func_40(Var0, 915697271, &uVar5, 1))
		{
			*iParam2 = uVar5;
			return 1;
		}
	}
	return 0;
}

struct<2> func_47(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

int func_48(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

int func_49(int iParam0)
{
	var uVar0;
	struct<5> Var1;

	if (func_36(&Var1, iParam0))
	{
		func_40(Var1, 733859289, &uVar0, 0);
	}
	return uVar0;
}

int func_50(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	if (iParam2 < 1)
	{
		iParam2 = 10;
	}
	bVar1 = false;
	*uParam1 = DATAFILE::_0xD97D8D905F1562F2(iParam0);
	while ((!DATAFILE::_0x603AC35FD4602C76(*uParam1) && iVar0 < iParam2) && !bVar1)
	{
		if (Global_1572887->f_13 != -1)
		{
			bVar1 = func_15(bParam4, bParam5);
		}
		iVar0++;
		BUILTIN::WAIT(0);
	}
	if (Global_1572887->f_13 != -1)
	{
		bVar1 = func_15(bParam4, bParam5);
	}
	if (bVar1)
	{
		func_6();
	}
	if (iVar0 >= iParam2)
	{
		iVar0 = 0;
		return 0;
	}
	iVar0 = 0;
	return 1;
}

void func_51()
{
	Local_2503.f_37 = Local_243.f_1391;
	if (DATAFILE::_0x603AC35FD4602C76(Local_2503.f_37))
	{
	}
	func_147(&(Local_2503.f_37));
	if (!func_148())
	{
	}
	func_149();
	func_150();
	func_151();
}

void func_52()
{
	struct<2> Var0;

	if (func_18(Local_243, 256))
	{
		func_152(0, Local_243.f_1332);
		return;
	}
	else if (func_18(Local_243, 512) && !func_153())
	{
		func_152(0, Local_243.f_1332);
		func_154(&(Local_243.f_1383), 8);
	}
	else if (func_155(&Local_243))
	{
		func_152(0, Local_243.f_1332);
		func_154(&(Local_243.f_1383), 3);
	}
	else
	{
		Var0 = { func_156() };
		if (func_73(Var0))
		{
			if (!func_74(Var0, Local_243.f_7))
			{
				func_152(0, Local_243.f_1332);
				if (func_154(&(Local_243.f_1383), 1))
				{
				}
			}
			else
			{
				func_152(2, Local_243.f_1332);
				func_154(&(Local_243.f_1383), 0);
			}
		}
		else
		{
			func_152(1, Local_243.f_1332);
			func_154(&(Local_243.f_1383), 0);
		}
	}
}

void func_53()
{
	if (func_157(Local_243.f_1332))
	{
		if (!func_134(256))
		{
			if (Local_243.f_9 != -785841056)
			{
				func_158(-2121539959, 0);
			}
			else
			{
				func_158(-1256206172, 0);
			}
			func_43(256);
		}
	}
	else
	{
		func_104();
	}
}

void func_54()
{
	struct<35> Var0;
	struct<12> Var58;

	if (!func_157(Local_243.f_1332))
	{
		return;
	}
	if (func_159())
	{
		return;
	}
	Var0.f_13 = -1;
	Var0.f_13.f_1 = -1;
	Var0.f_16.f_3 = 1;
	Var0.f_21 = 1;
	Var0.f_22 = 1;
	Var0.f_22.f_1 = -1082130432;
	Var0.f_22.f_2 = 1;
	Var0.f_25 = -1;
	Var0.f_25.f_1 = -1;
	Var0.f_25.f_2 = -1;
	Var0.f_25.f_3 = -1;
	Var0.f_25.f_4 = -1;
	Var0.f_25.f_5 = -1;
	Var0.f_25.f_6 = -1;
	Var0.f_25.f_7 = -1;
	Var0.f_25.f_8 = -1;
	Var0.f_34 = 4;
	Var0.f_34.f_1.f_1 = -1;
	Var0.f_34.f_1.f_3.f_1 = -1;
	Var0.f_34.f_1.f_3.f_3.f_1 = -1;
	Var0.f_34.f_1.f_3.f_3.f_3.f_1 = -1;
	if (Local_243.f_9 == -785841056)
	{
		func_43(512);
	}
	else if (!func_134(512))
	{
		Var58.f_1 = -1;
		Var58.f_3 = -1082130432;
		Var58.f_4 = 2;
		Var58.f_5 = -1082130432;
		Var58.f_7 = -1082130432;
		Var58.f_9 = -1082130432;
		Var58.f_11 = -1082130432;
		if (!func_160(&(Local_243.f_1310)))
		{
			Var58.f_6 = 0;
			Var58.f_4 = 2;
			Var58.f_2 = 2;
			Var58 = 0;
			Var58.f_10 = 2;
			Var58.f_8 = 0;
			func_161(&Var0, Var58, 3);
		}
		func_162(&Var0, -2121539959, 0, 0);
		func_163(&Var0, 1);
		func_164(&Var0, 1);
		func_165(&Var0, 1);
		func_166(&Var0, Local_243.f_7, 1, 1);
		func_167();
	}
}

void func_55(float fParam0)
{
	if (Global_1070356->f_21175 != fParam0)
	{
		if (fParam0 >= 0f)
		{
			Global_1070356->f_21175 = fParam0;
		}
	}
}

char* func_56()
{
	return "MP_FreeRoamCountdown";
}

char* func_57()
{
	return "MP_MatchEndPulseWinner";
}

char* func_58()
{
	return "MP_MatchEndPulseLoser";
}

char* func_59()
{
	return "MP_Trans_SceneToPhoto";
}

void func_60(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-434015292);
	}
	else if (bParam2)
	{
		*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(1781462046);
	}
	else
	{
		*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-242590942);
	}
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "transitionData");
}

void func_61(var uParam0, bool bParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_3))
	{
		uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "transitionData");
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_11))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_11, bParam1);
	}
	else
	{
		uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_3, "showTransitionScreen", bParam1);
	}
}

bool func_62(int iParam0)
{
	return func_168(1, iParam0);
}

void func_63(bool bParam0)
{
	if (!bParam0)
	{
		func_169(17);
	}
	else
	{
		func_170(17);
	}
}

void func_64()
{
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(1);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(36);
	HUD::_TEXT_DATABASE_REQUEST("FMEWK");
	func_171(0);
	func_35(joaat("timer"));
	func_172(8192);
	func_43(1073741824 /* Float: 2f */);
	Local_243.f_1420 = 0;
	func_172(131072);
	func_43(64);
	func_43(65536);
	func_172(65536);
	func_43(128);
}

bool func_65(int iParam0)
{
	return func_78(Local_243.f_1335, iParam0);
}

Vector3 func_66(int iParam0, var uParam1)
{
	vector3 vVar0;
	struct<5> Var3;

	if ((func_36(&Var3, iParam0) && func_44(&Var3)) && func_45(&Var3, uParam1))
	{
		func_143(Var3, -135059083, &vVar0, 0);
	}
	return vVar0;
}

Vector3 func_67(int iParam0, var uParam1)
{
	vector3 vVar0;
	struct<5> Var3;

	if ((func_36(&Var3, iParam0) && func_44(&Var3)) && func_45(&Var3, uParam1))
	{
		func_143(Var3, -1922656805, &vVar0, 0);
	}
	return vVar0;
}

int func_68(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_69(vector3 vParam0, vector3 vParam3)
{
	bool bVar0;

	bVar0 = false;
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1099294->f_26.f_21))
	{
		bVar0 = true;
	}
	else if (!func_144(ENTITY::GET_ENTITY_COORDS(Global_1099294->f_26.f_21, false, false), vParam0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		Global_1099294->f_26.f_25 = { vParam0 };
		Global_1099294->f_26.f_31 = { vParam3 };
		Global_1099294->f_26.f_22 = 1;
		STREAMING::REQUEST_MODEL(joaat("a_c_owl_01"), false);
	}
}

void func_70(bool bParam0)
{
	if (bParam0)
	{
		func_173(4096);
	}
	else
	{
		func_174(4096);
	}
}

void func_71()
{
	int iVar0;

	if (Local_243.f_1295 <= 0f)
	{
		return;
	}
	Local_243.f_1394 = VOLUME::_CREATE_VOLUME_SPHERE(Local_243.f_1396, 0f, 0f, 0f, Local_243.f_1295, Local_243.f_1295, Local_243.f_1295);
	if (VOLUME::_DOES_VOLUME_EXIST(Local_243.f_1394))
	{
		iVar0 = func_175();
		POPULATION::_0x2161278C6322F740(iVar0, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(Local_243.f_1394, iVar0, 0, 0, -1, -1, 0);
		POPULATION::_0x18262CAFEBB5FBE1(Local_243.f_1394, iVar0, 0, 0, -1, -1, 0);
		PATHFIND::_0xB03944057FD735BA(Local_243.f_1394, 4, 0);
	}
}

void func_72()
{
	func_176(15f);
	func_177(&(Local_1706.f_316), &(Local_1706.f_319), &(Local_1706.f_322), -1);
}

int func_73(struct<2> Param0)
{
	if (!func_178(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_179(Param0))
	{
		return 0;
	}
	return 1;
}

bool func_74(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_75(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1185962->f_1 && iParam0) != 0;
}

bool func_76(int iParam0, int iParam1)
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

int func_77()
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
	if (!func_73(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_78(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_79()
{
	if (func_180(2, Local_243.f_1332))
	{
		if (!func_181(2))
		{
			if (func_182())
			{
				func_183(2);
			}
		}
		else
		{
			func_184();
			func_185(1);
		}
	}
}

void func_80()
{
	if (!func_181(4))
	{
		if (func_186())
		{
			func_183(4);
		}
	}
	else if (func_187(4))
	{
		func_188(&(Local_0.f_1), 0);
		func_185(3);
	}
}

void func_81()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_189();
	if (func_160(&(Local_0.f_1)))
	{
		iVar0 = func_190(&(Local_0.f_1));
		iVar1 = (Local_243.f_1268 - iVar0);
		if (func_68(Local_243.f_1399))
		{
			iVar2 = func_191();
		}
		else
		{
			iVar2 = BUILTIN::CEIL((IntToFloat(func_191()) * 0.5f));
		}
		if (iVar1 <= iVar2)
		{
			func_185(4);
		}
		else if (Local_243.f_9 != -785841056 && iVar1 >= 16000)
		{
			iVar3 = func_192(2);
			if (iVar3 >= Local_243.f_1276 && func_187(8))
			{
				func_193(&(Local_0.f_1), (Local_243.f_1268 - 16000));
			}
		}
	}
}

void func_82()
{
	int iVar0;
	int iVar1;

	iVar0 = func_190(&(Local_0.f_1));
	iVar1 = (Local_243.f_1268 - iVar0);
	if (!func_181(16))
	{
		if (iVar1 <= func_194())
		{
			if (func_195())
			{
				func_183(16);
			}
		}
	}
	else if (iVar1 <= 1000)
	{
		func_196();
		func_197(1, Local_243.f_1275);
		func_198(1);
		func_199();
		if (Local_0.f_12 != 0)
		{
			func_200();
			func_185(6);
		}
		else
		{
			Local_0.f_16 = func_192(2);
			func_201(0);
			func_183(2048);
			func_185(5);
		}
	}
}

void func_83()
{
	func_202();
	func_201(1);
	func_197(0, -1);
	func_198(0);
	if ((func_203() || func_204() > Local_243.f_1269) || Local_0.f_12 != 0)
	{
		func_200();
	}
}

void func_84()
{
	if (func_187(32))
	{
		if (!func_160(&(Local_0.f_7)))
		{
			func_205(&(Local_0.f_7));
		}
		else if (func_190(&(Local_0.f_7)) > 500)
		{
			func_206();
			func_185(7);
		}
	}
}

void func_85()
{
	func_185(8);
}

void func_86()
{
	if (func_207())
	{
		func_185(9);
	}
}

void func_87()
{
	if (!func_65(262144))
	{
		if (ENTITY::IS_ENTITY_DEAD(Global_34))
		{
			if (func_208())
			{
				HUD::CLEAR_ALL_HELP_MESSAGES();
			}
			func_172(262144);
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		func_209(262144);
	}
}

void func_88()
{
	(Global_1185132->f_66[Local_243 /*20*/])->f_2 = Local_243.f_10 >= 3;
	(Global_1185132->f_66[Local_243 /*20*/])->f_1 = &Local_50[Local_243.f_1332 /*6*/];
	if (&Local_50[Local_243.f_1332 /*6*/] != 2)
	{
		return;
	}
	if (func_210())
	{
		func_211();
	}
	else if (func_212())
	{
		func_213(1);
	}
}

void func_89()
{
	(Global_1185132->f_66[Local_243 /*20*/])->f_2 = Local_243.f_10 >= 3;
	(Global_1185132->f_66[Local_243 /*20*/])->f_1 = &Local_50[Local_243.f_1332 /*6*/];
	if (&Local_50[Local_243.f_1332 /*6*/] != 2)
	{
		return;
	}
	switch (Local_243.f_1)
	{
		case 15:
			func_215(func_214(), Local_243.f_7, 1, 0);
			break;
	}
}

void func_90()
{
	if (func_157(Local_243.f_1332) && func_134(134217728))
	{
		func_216(0);
	}
}

void func_91()
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
				func_217(iVar0);
				break;
			case 1741908893:
				func_218(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_92()
{
	int iVar0;

	if (Local_243.f_1419 == -1)
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (&Local_0.f_17[iVar0] == PLAYER::PLAYER_ID())
			{
				Local_243.f_1419 = iVar0;
			}
			iVar0++;
		}
	}
}

void func_93()
{
}

void func_94()
{
	bool bVar0;

	if (Local_0 >= 6)
	{
		func_219();
		func_220(6);
		return;
	}
	func_221();
	if (!func_180(2, Local_243.f_1332))
	{
		bVar0 = true;
		if (!func_222(func_111(Local_243.f_1)))
		{
			bVar0 = false;
		}
		if (func_114())
		{
			STREAMING::REQUEST_PTFX_ASSET();
			if (!STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				bVar0 = false;
			}
		}
		if ((!AUDIO::_0xD9130842D7226045(func_119(), 0) || !AUDIO::_0xE368E8422C860BA7(func_120(), func_121(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_122(), func_123(), -2))
		{
			bVar0 = false;
		}
		if (Local_243.f_9 != -785841056)
		{
			if (!func_225(&(Local_243.f_1337), func_223(PED::IS_PED_MALE(Global_34)), func_224()))
			{
				bVar0 = false;
			}
			if (!func_226(&(Local_243.f_1421)))
			{
				bVar0 = false;
			}
		}
		if (!func_227())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_228(2, Local_243.f_1332);
		}
		else if (Local_243.f_1336 == -1 || (MISC::GET_GAME_TIMER() - Local_243.f_1336) > Global_1901929->f_295.f_177)
		{
			if (Local_243.f_1336 == -1)
			{
			}
			func_228(2, Local_243.f_1332);
		}
	}
	else if (Local_0 > 0)
	{
		if (Local_243.f_9 != -785841056)
		{
			func_113(0);
		}
		StringCopy(&(Local_243.f_13.f_950), MISC::_CREATE_VAR_STRING(2, &(Local_243.f_1338)), 64);
		func_52();
		func_220(1);
	}
}

void func_95()
{
	if (Local_0 >= 6)
	{
		func_219();
		func_220(6);
		return;
	}
	func_221();
	if (!func_180(4, Local_243.f_1332))
	{
		if (func_229())
		{
			func_228(4, Local_243.f_1332);
		}
	}
	else if (Local_0 > 1)
	{
		func_230();
		if (Local_243.f_9 == -785841056)
		{
			func_220(3);
		}
		else
		{
			func_220(2);
		}
	}
}

void func_96()
{
	if (Local_0 >= 6)
	{
		func_219();
		func_220(6);
		return;
	}
	func_231();
	func_232();
	if (!func_134(2097152))
	{
		if (func_134(1))
		{
			if (func_233() || func_234())
			{
				if (func_62(255))
				{
					return;
				}
				func_235();
			}
			else if (func_62(255) || CAM::IS_SCREEN_FADED_OUT())
			{
				if (!func_160(&(Local_243.f_1319)))
				{
					func_205(&(Local_243.f_1319));
				}
				else if (func_190(&(Local_243.f_1319)) > 30000)
				{
					func_235();
				}
			}
		}
	}
	else if (!func_62(255))
	{
		if (!func_236(67108864))
		{
			func_237(67108864);
		}
		func_238(1);
		AUDIO::_0x2E399EAFBEEA74D5();
		func_239(0, 1, 0, 0, 0, 0, 0, 0, 0);
		func_228(8, Local_243.f_1332);
		func_220(3);
	}
}

void func_97()
{
	if (Local_0 >= 6)
	{
		func_219();
		func_220(6);
		return;
	}
	func_231();
	func_240();
	func_232();
	func_241();
	func_242();
	func_243();
	if (Local_0 > 3)
	{
		func_244();
		func_245();
		func_220(4);
	}
}

void func_98()
{
	int iVar0;
	int iVar1;

	if (Local_0 >= 6)
	{
		func_219();
		func_246(Local_243, 2);
		func_220(6);
		return;
	}
	func_231();
	func_240();
	func_232();
	func_243();
	if (!func_180(16, Local_243.f_1332))
	{
		iVar0 = func_190(&(Local_0.f_1));
		iVar1 = (Local_243.f_1268 - iVar0);
		if (iVar1 <= func_194())
		{
			if (func_247())
			{
				func_228(16, Local_243.f_1332);
			}
		}
	}
	else if (Local_0 > 4)
	{
		func_248();
		func_249();
		func_250();
		func_52();
		func_251();
		func_252(&(Local_243.f_1005), 1);
		func_253();
		func_254();
		func_255();
		func_246(Local_243, 2);
		func_220(5);
	}
}

void func_99()
{
	if (Local_0 >= 8)
	{
		func_220(8);
		return;
	}
	func_256();
	if (Local_0 > 5)
	{
		func_219();
		return;
	}
	else if (func_134(8192))
	{
		func_219();
		func_220(6);
		return;
	}
	func_231();
	func_240();
	func_257();
	func_258();
	func_250();
	func_259();
	func_260();
	if (!func_261())
	{
		func_262();
	}
	func_263();
	func_264();
	func_265();
}

void func_100()
{
	NETWORK::_0x236905C700FDB54D();
	if (!func_266())
	{
		func_267();
	}
	func_268();
	func_269();
	func_270();
	if (!func_157(Local_243.f_1332))
	{
		func_220(8);
		return;
	}
	if (!func_180(32, Local_243.f_1332))
	{
		func_228(32, Local_243.f_1332);
	}
	else if (Local_0 > 6 || func_134(8192))
	{
		if (!func_134(268435456))
		{
			func_271(Local_0.f_10);
			if (func_157(Local_243.f_1332))
			{
				if (!MISC::IS_BIT_SET(Local_243.f_13.f_11.f_158, 0))
				{
					func_272(&(Local_243.f_13));
					func_273(&(Local_243.f_13));
					func_276(func_274(), func_275(), Local_243.f_11, Local_243.f_12, 30000);
				}
				func_277();
				func_278();
			}
		}
		else if (!func_134(536870912))
		{
			if (Local_243.f_1282 >= Local_243.f_1281)
			{
				func_43(536870912);
			}
			else if (!func_160(&(Local_243.f_1313)))
			{
				func_188(&(Local_243.f_1313), 0);
			}
			else if (func_190(&(Local_243.f_1313)) > 500)
			{
				func_43(536870912);
			}
		}
		else
		{
			func_279();
			func_220(7);
		}
	}
}

void func_101()
{
	var uVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	var uVar10;
	char cVar11[64];
	char cVar19[64];
	int iVar27;
	var uVar28;
	bool bVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;

	NETWORK::_0x236905C700FDB54D();
	func_270();
	func_280();
	if (!func_157(Local_243.f_1332))
	{
		func_126(1, 1);
		func_220(8);
		return;
	}
	func_268();
	func_281();
	if (func_282())
	{
		if (func_283())
		{
			if (!func_284())
			{
				Local_243.f_1384 = 1310067901;
			}
		}
		else if (func_65(8192))
		{
			Local_243.f_1384 = joaat("leaderboard");
		}
		else
		{
			Local_243.f_1384 = 0;
		}
		func_276(func_274(), func_275(), Local_243.f_11, Local_243.f_12, 30000);
	}
	else if (func_283())
	{
		Local_243.f_1384 = 1310067901;
		func_276(0, func_275(), 0, 0, 30000);
	}
	else
	{
		func_285();
	}
	if (!func_65(32))
	{
		if (func_286())
		{
			func_287(&(Local_243.f_1005));
			uVar0 = func_288();
			if (func_134(4096))
			{
				GRAPHICS::_0x3A9A281FF71249E9(func_57(), uVar0);
			}
			else
			{
				GRAPHICS::_0x3A9A281FF71249E9(func_58(), uVar0);
			}
			if (!func_283() || Local_243.f_9 == -785841056)
			{
				func_252(&(Local_243.f_1005), 1);
			}
			func_172(32);
		}
	}
	else if (!func_65(64))
	{
		func_289();
		if (Local_243.f_9 == -785841056)
		{
			if (!func_290(Local_243.f_1287))
			{
				func_291();
				iVar1 = 6000;
				if (Local_0.f_12 != 0 || !func_292(Local_243.f_1384))
				{
					iVar1 = 1000;
				}
				if (!func_160(&(Local_243.f_1316)))
				{
					func_205(&(Local_243.f_1316));
				}
				else if (func_190(&(Local_243.f_1316)) > iVar1)
				{
					if (func_293())
					{
						return;
					}
					func_285();
					func_172(64);
					func_220(8);
				}
			}
		}
		else if (((!func_290(Local_243.f_1287) && !func_294()) && !func_295()) && !func_296())
		{
			if (UIAPPS::_IS_ANY_APP_RUNNING())
			{
				if (!func_160(&(Local_243.f_1322)))
				{
					func_205(&(Local_243.f_1322));
				}
				else if (func_190(&(Local_243.f_1322)) > 10000)
				{
					func_297();
					func_298(&(Local_243.f_1322));
				}
			}
			else
			{
				func_291();
				if (!func_160(&(Local_243.f_1316)))
				{
					func_205(&(Local_243.f_1316));
				}
				else if (func_190(&(Local_243.f_1316)) > 1000 && !func_290(Local_243.f_1289))
				{
					func_127(0);
					func_172(64);
				}
			}
		}
		else
		{
			if (func_160(&(Local_243.f_1316)))
			{
				func_298(&(Local_243.f_1316));
			}
			if (func_160(&(Local_243.f_1322)))
			{
				func_298(&(Local_243.f_1322));
			}
		}
	}
	else if (!func_65(128))
	{
		func_289();
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT() && !func_62(255))
			{
				CAM::DO_SCREEN_FADE_OUT(250);
				AUDIO::_0x9B1FC259187C97C0("winners_pose");
			}
		}
		else if (func_289() && func_299())
		{
			GRAPHICS::ANIMPOSTFX_STOP(func_57());
			GRAPHICS::ANIMPOSTFX_STOP(func_58());
			if (ENTITY::DOES_ENTITY_EXIST(Global_34) && !ENTITY::IS_ENTITY_DEAD(Global_34))
			{
				if (PED::_0x3AA24CCC0D451379(Global_34))
				{
					TASK::_0x79559BAD83CCD038(Global_34, 3, 0, 0, 0, 1090519040);
				}
				if (PED::_0x0E99E3BF11BB6367(Global_34))
				{
					iVar2 = PED::_0xD0B7AEB56229D317(Global_34);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2)) && PED::IS_PED_A_PLAYER(iVar2))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256, 0);
						PED::_0x789DABD18E9024DB(Global_34, 32768, 1);
						TASK::CLEAR_PED_TASKS(Global_34, 1, 0);
					}
				}
				if (PED::_0x3BDFCF25B58B0415(Global_34))
				{
					PED::_0x789DABD18E9024DB(Global_34, 4096, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_243.f_1416))
				{
					vVar3 = { ENTITY::GET_ENTITY_COORDS(Local_243.f_1416, true, false) };
					if (!func_68(vVar3))
					{
						vVar6 = { func_300(vVar3, 10f, 0.25f) };
						ENTITY::SET_ENTITY_COORDS(Global_34, vVar6, true, false, true, true);
					}
				}
			}
			if (Local_0.f_12 != 0 || !ENTITY::DOES_ENTITY_EXIST(Local_243.f_1416))
			{
				func_220(8);
				return;
			}
			func_301();
			func_302();
			func_172(128);
		}
	}
	else if (!func_65(512))
	{
		func_302();
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			if (!CAM::IS_SCREEN_FADING_IN())
			{
				if (CAM::DOES_CAM_EXIST(Local_243.f_1415) && !CAM::IS_CAM_ACTIVE(Local_243.f_1415))
				{
					CAM::SET_CAM_ACTIVE(Local_243.f_1415, true);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_243.f_1416) && !ENTITY::IS_ENTITY_DEAD(Local_243.f_1416))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_243.f_1416, true);
				}
				func_303();
				HUD::_HIDE_HUD_COMPONENT(690901814);
				CAM::DO_SCREEN_FADE_IN(250);
			}
		}
		else
		{
			func_298(&(Local_243.f_1316));
			Local_243.f_1418 = 1500;
			if (!func_304())
			{
				if (Local_0.f_10 != 255)
				{
					iVar9 = func_305();
					Local_243.f_1418 = func_306(iVar9);
					uVar10 = func_307(iVar9);
					func_308(Local_243.f_1416, iVar9, 2, 0, 0, uVar10);
				}
			}
			func_172(512);
		}
	}
	else if (!func_65(1024))
	{
		func_302();
		if (!func_160(&(Local_243.f_1316)))
		{
			StringCopy(&cVar11, func_309(), 64);
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar11))
			{
				StringCopy(&cVar11, MISC::_CREATE_VAR_STRING(2, "FME_SHARD_OUTRO_TITLE_WINNER"), 64);
			}
			StringCopy(&cVar19, func_310(), 64);
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar19))
			{
				cVar19 = { Local_243.f_1406 };
			}
			if (func_134(8192) || func_65(524288))
			{
				func_315(&(Local_243.f_1421), &cVar19, func_311(), func_312(), func_314(func_313(&(Local_243.f_13), 0)), "", "", Local_243.f_1414);
			}
			else if (Local_0.f_10 == 255)
			{
				if (MISC::IS_STRING_NULL_OR_EMPTY(func_316()))
				{
					func_315(&(Local_243.f_1421), "", "", MISC::_CREATE_VAR_STRING(2, "FME_SHARD_OUTRO_PRIMARY_EXPIRED"), "", "", "", joaat("COLOR_PURE_WHITE"));
				}
				else
				{
					func_315(&(Local_243.f_1421), "", "", func_316(), "", "", "", joaat("COLOR_PURE_WHITE"));
				}
			}
			else if (Local_0.f_10 == PLAYER::PLAYER_ID())
			{
				func_315(&(Local_243.f_1421), &cVar11, &cVar19, func_314(func_313(&(Local_243.f_13), 0)), "", "", "", Local_243.f_1414);
			}
			else
			{
				func_315(&(Local_243.f_1421), &cVar11, &cVar19, func_317(Local_243.f_1406, Local_243.f_1414, func_313(&(Local_243.f_13), 0)), "", "", "", Local_243.f_1414);
			}
			func_205(&(Local_243.f_1316));
		}
		else
		{
			iVar27 = Local_243.f_1418;
			func_318(&iVar27);
			if (func_319() || (iVar27 > 0 && func_190(&(Local_243.f_1316)) > iVar27))
			{
				AUDIO::_0x9B1FC259187C97C0("photograph");
				GRAPHICS::_0x9B8D5D4CB8AF58B3(Local_243.f_1417);
				GRAPHICS::_0xE75CDDEBF618C8FF(Local_243.f_1417);
				func_172(1024);
			}
		}
	}
	else if (!func_65(2048))
	{
		func_302();
		if (GRAPHICS::_0x9AB192A9EF980EED(Local_243.f_1417, 2, 0, &uVar28))
		{
			bVar29 = true;
		}
		if (bVar29 || func_190(&(Local_243.f_1316)) > 4000)
		{
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
			AUDIO::PLAY_SOUND_FRONTEND(func_122(), func_123(), true, 0);
			func_61(&(Local_243.f_1421), 1);
			func_205(&(Local_243.f_1316));
			func_172(2048);
		}
	}
	else if (!func_65(4096))
	{
		func_302();
		if (func_320(&(Local_243.f_1421)) || func_190(&(Local_243.f_1316)) > 8000)
		{
			func_205(&(Local_243.f_1316));
			func_172(4096);
		}
	}
	else if (!func_65(8192))
	{
		func_302();
		if (func_190(&(Local_243.f_1316)) > 5000)
		{
			if (!func_321())
			{
				func_117(&(Local_243.f_1421));
			}
			func_35(func_322());
			func_298(&(Local_243.f_1316));
			func_172(8192);
		}
	}
	else if (!func_65(16384))
	{
		func_302();
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_243.f_13.f_11))
		{
			if (Local_243.f_1283 > 0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(Local_243.f_13.f_11, "info_value_07", func_323(Local_243.f_1283));
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Local_243.f_13.f_11, "info_value_07", true);
				Local_243.f_1283 = 0;
			}
			if (Local_243.f_1285 > 0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(Local_243.f_13.f_11, "info_visible_08", func_323(Local_243.f_1285));
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Local_243.f_13.f_11, "info_visible_08", true);
				Local_243.f_1285 = 0;
			}
			if (Local_243.f_1284 > 0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(Local_243.f_13.f_11, "info_visible_06", func_323(Local_243.f_1284));
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Local_243.f_13.f_11, "info_visible_06", true);
				Local_243.f_1284 = 0;
			}
			if (Local_243.f_1286 > 0)
			{
				Local_243.f_1286 = 0;
			}
		}
		if (!func_160(&(Local_243.f_1316)))
		{
			func_205(&(Local_243.f_1316));
		}
		else if (func_190(&(Local_243.f_1316)) > 2000)
		{
			iVar30 = 0;
			iVar31 = 0;
			iVar32 = 0;
			iVar33 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
			if ((!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar33) || _NAMESPACE26::_0x149A2751AB66AC02(iVar33) <= 1) || !_NAMESPACE26::_0x93A91A351A07360E(iVar33))
			{
				iVar30 = 1;
				if (func_180(512, Local_243.f_1332))
				{
					iVar31++;
				}
				if (func_180(1024, Local_243.f_1332))
				{
					iVar32++;
				}
			}
			else
			{
				iVar36 = 0;
				iVar36 = 0;
				while (iVar36 <= 31)
				{
					iVar34 = PLAYER::INT_TO_PLAYERINDEX(iVar36);
					if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar34) && _NAMESPACE26::_0x9BE7DCB22D32CCBE(iVar33, iVar34)) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar34))
					{
						iVar35 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar34);
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar35))
						{
							iVar30++;
							if (func_180(512, iVar35))
							{
								iVar31++;
							}
							if (func_180(1024, iVar35))
							{
								iVar32++;
							}
							if ((_NAMESPACE26::_0x424B17A7DC5C90BC(iVar34) && iVar34 != PLAYER::PLAYER_ID()) && func_180(1024, iVar35))
							{
								iVar31 = 7;
							}
						}
					}
					iVar36++;
				}
			}
			if (iVar31 > iVar30)
			{
				iVar31 = iVar30;
			}
			if (iVar32 > iVar30)
			{
				iVar32 = iVar30;
			}
			if (!func_324(Local_243.f_1297))
			{
				if (iVar30 > 1)
				{
					Local_243.f_1297 = func_325(MISC::_CREATE_VAR_STRING(2, "FME_PROMPT_RETURN_TO_FREE_ROAM_POSSE", iVar31, iVar30), joaat("INPUT_GAME_MENU_ACCEPT"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				}
				else
				{
					Local_243.f_1297 = func_325("FME_PROMPT_RETURN_TO_FREE_ROAM", joaat("INPUT_GAME_MENU_ACCEPT"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				}
			}
			if (func_324(Local_243.f_1297))
			{
				if (iVar30 > 1)
				{
					func_326(Local_243.f_1297, MISC::_CREATE_VAR_STRING(2, "FME_PROMPT_RETURN_TO_FREE_ROAM_POSSE", iVar31, iVar30), 1);
				}
				else
				{
					func_326(Local_243.f_1297, "FME_PROMPT_RETURN_TO_FREE_ROAM", 1);
				}
				if (!func_180(512, Local_243.f_1332))
				{
					if (func_327(Local_243.f_1297, 1))
					{
						func_228(512, Local_243.f_1332);
						func_328(Local_243.f_1297, 0, 1, 1);
					}
				}
			}
			if (!func_180(1024, Local_243.f_1332))
			{
				if (iVar31 >= iVar30 || func_190(&(Local_243.f_1316)) > 62000)
				{
					func_228(1024, Local_243.f_1332);
				}
			}
			else if (iVar32 >= iVar30)
			{
				func_329(&(Local_243.f_1297), 1, 1);
				func_298(&(Local_243.f_1316));
				func_172(16384);
			}
		}
	}
	else if (!func_65(32768))
	{
		if (func_321())
		{
			func_117(&(Local_243.f_1421));
		}
		func_302();
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				AUDIO::_0x9B1FC259187C97C0("fade_to_black");
				CAM::DO_SCREEN_FADE_OUT(250);
			}
		}
		else
		{
			func_172(32768);
			func_220(8);
		}
	}
}

void func_102()
{
	NETWORK::_0x236905C700FDB54D();
	if (func_330())
	{
		func_220(9);
	}
}

void func_103()
{
}

void func_104()
{
	if (func_134(256))
	{
		func_331(0);
		func_332(256);
	}
}

void func_105(bool bParam0)
{
	if (func_134(512))
	{
		if (Local_243.f_9 == -785841056)
		{
		}
		func_333(1, bParam0);
		func_332(512);
	}
}

void func_106()
{
	func_334(4);
	func_334(16);
}

void func_107()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_335(iVar0);
		iVar0++;
	}
	if (func_180(16384, Local_243.f_1332))
	{
		if (func_336())
		{
			func_337();
			func_338(16384, Local_243.f_1332);
		}
	}
	if (func_180(8192, Local_243.f_1332))
	{
		if (!func_339(Global_1275573->f_15))
		{
			func_340(1, 0, 0);
			func_338(8192, Local_243.f_1332);
		}
	}
}

void func_108()
{
	if (func_134(1))
	{
		func_341();
		func_342(0);
		func_332(1);
	}
}

void func_109()
{
	if (func_134(1024))
	{
		func_343(1);
		func_332(1024);
	}
}

void func_110()
{
	if (func_134(2048))
	{
		if (Local_243.f_9 == -785841056)
		{
			func_344(0);
		}
		else
		{
			func_345(1);
			LAW::_0x710448D44A64C213(1);
			LAW::_0xC805EB785824F712(1);
		}
		func_332(2048);
	}
}

struct<8> func_111(int iParam0)
{
	struct<8> Var0;
	struct<5> Var8;

	if (func_36(&Var8, iParam0) && func_140(&Var8))
	{
		func_141(Var8, -874721119, &Var0, 1);
	}
	return Var0;
}

void func_112(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	if (HUD::_TEXT_DATABASE_HAS_LOADED(func_346()))
	{
		HUD::_TEXT_DATABASE_DELETE(func_346());
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0) && HUD::_TEXT_DATABASE_HAS_LOADED(&uParam0))
	{
		HUD::_TEXT_DATABASE_DELETE(&uParam0);
	}
}

void func_113(bool bParam0)
{
	Global_1939067->f_15 = !bParam0;
}

int func_114()
{
	return 0;
}

void func_115(int iParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(iParam0))
	{
		return;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(iParam0, 1, 0))
	{
		return;
	}
	ANIMSCENE::_DELETE_ANIM_SCENE(iParam0);
}

void func_116()
{
	if (Global_1070356->f_21175 >= 0f)
	{
		Global_1070356->f_21175 = -1f;
	}
}

void func_117(var uParam0)
{
	var uVar0;

	if (UISTATEMACHINE::_UISTATEMACHINE_EXISTS(*uParam0))
	{
		uVar0 = *uParam0;
		UISTATEMACHINE::_UISTATEMACHINE_DESTROY_AND_CLEAR(&uVar0);
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(uParam0);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_3))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_3);
	}
}

bool func_118()
{
	return Global_1070356->f_27136.f_62.f_42 != 0;
}

char* func_119()
{
	return "RDRO_Out_Of_Bounds_Sounds";
}

char* func_120()
{
	return "Toast_On";
}

char* func_121()
{
	return "HUD_Toast_Soundset";
}

char* func_122()
{
	return "photograph";
}

char* func_123()
{
	return "rdro_gamemode_transition_sounds";
}

void func_124()
{
	if (!func_180(65536, Local_243.f_1332))
	{
		return;
	}
	if (!func_180(32768, Local_243.f_1332))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (func_347(Local_243.f_1437, Local_243.f_1441))
	{
		func_338(32768, Local_243.f_1332);
	}
}

void func_125()
{
	if (Local_0.f_10 == PLAYER::PLAYER_ID())
	{
		func_348(803, 1);
	}
	func_171(1);
	HUD::_TEXT_DATABASE_DELETE("FMEWK");
}

void func_126(bool bParam0, bool bParam1)
{
	func_253();
	if (bParam0)
	{
		func_285();
	}
	if (bParam1)
	{
		func_349();
		func_350();
	}
	func_351();
	func_352();
	func_353();
	func_354();
	func_355();
	func_254();
	func_356();
}

void func_127(bool bParam0)
{
	if (bParam0)
	{
		if ((func_65(131072) && func_357() == 4) && !func_357() == 10)
		{
			func_358(10);
		}
	}
	else if ((func_65(131072) && func_357() == 4) || func_357() == 10)
	{
		if (!func_357() == 0)
		{
			func_359(0, 0, 0, 1);
		}
	}
}

void func_128()
{
	Global_1099294->f_26.f_25 = { 0f, 0f, 0f };
	Global_1099294->f_26.f_31 = { 0f, 0f, 0f };
	Global_1099294->f_26.f_24 = 1;
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 7;
		case 12:
			return 10;
		case 13:
			return 8;
		case 14:
			return 9;
		default:
			break;
	}
	return -1;
}

bool func_130(int iParam0)
{
	return Global_1102099->f_935.f_27 == iParam0;
}

void func_131(int iParam0, int iParam1)
{
	if (iParam0 != -1 && (Global_1185132->f_1[iParam0 /*4*/])->f_2 != iParam1)
	{
		(Global_1185132->f_1[iParam0 /*4*/])->f_2 = iParam1;
	}
}

void func_132(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 11)
	{
		Global_1102099->f_935.f_5[iParam0] = Global_1275573->f_21;
	}
}

void func_133()
{
	if (Global_1102099->f_935.f_27 != -1)
	{
		Global_1102099->f_935.f_27 = -1;
	}
}

bool func_134(int iParam0)
{
	return func_78(Local_243.f_1334, iParam0);
}

int func_135(int iParam0, var uParam1, struct<2> Param2, bool bParam4)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_73(Param2))
	{
		return 0;
	}
	if (!func_360(Param2) && !func_361(Param2))
	{
		return 0;
	}
	if (bParam4)
	{
		func_362(Param2, 0, 4, 0);
	}
	else
	{
		func_362(Param2, 0, 0, 0);
	}
	func_363(iParam0, Param2);
	if (func_18(iParam0, 64))
	{
		return 1;
	}
	func_246(iParam0, 128);
	func_246(iParam0, 64);
	return 1;
}

int func_136(int iParam0, var uParam1, struct<2> Param2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_73(Param2))
	{
		return 0;
	}
	if (!func_360(Param2) && !func_361(Param2))
	{
		return 0;
	}
	func_362(Param2, 0, 1, 0);
	func_363(iParam0, Param2);
	if (func_18(iParam0, 64))
	{
		return 0;
	}
	func_246(iParam0, 256);
	func_246(iParam0, 64);
	return 1;
}

int func_137(int iParam0, struct<2> Param1, bool bParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_73(Param1))
	{
		return 0;
	}
	if (!func_360(Param1) && !func_361(Param1))
	{
		return 0;
	}
	if (bParam3 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
		if (_NAMESPACE26::_0x0F99F6436528A089(iVar0) && _NAMESPACE26::_0x149A2751AB66AC02(iVar0) > 1)
		{
			func_364(1);
		}
	}
	if (func_18(iParam0, 32))
	{
		func_362(Param1, 0, 2, 0);
	}
	else
	{
		func_362(Param1, 0, -1, 0);
	}
	func_363(iParam0, Param1);
	if (func_18(iParam0, 64))
	{
		return 0;
	}
	func_246(iParam0, 64);
	return 1;
}

void func_138()
{
	func_365(2048);
}

int func_139(int iParam0, int iParam1)
{
	if (iParam0 == -785841056)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return 0;
	}
	DECORATOR::DECOR_SET_INT(Global_34, "iFmeLastEventPlayed", iParam1);
	return 1;
}

bool func_140(var uParam0)
{
	uParam0->f_2 = 1701407264;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_141(vector3 vParam0, int iParam3, var uParam4, int iParam5, char[4] cParam6, bool bParam7)
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

int func_142(vector3 vParam0, int iParam3, var uParam4, int iParam5, float fParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_FLOAT(fParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_143(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_VECTOR(uParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_144(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_145(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1697883736;
		case 1:
			return 1927192818;
		case 2:
			return -1363591469;
		case 3:
			return 1635448909;
		case 4:
			return -604494871;
		case 5:
			return -993281498;
		case 6:
			return -1871525158;
		case 12:
			return -596286663;
		case 13:
			return 923956646;
		case 14:
			return 1459450644;
		case 15:
			return -2071675432;
		case 7:
			return -552339597;
		case 9:
			return 2144670272;
		case 8:
			return 996459079;
		case 10:
			return 1996177174;
		case 11:
			return -1702168032;
		default:
			break;
	}
	return 0;
}

void func_146(var uParam0, int iParam1)
{
	func_366(uParam0, iParam1);
}

void func_147(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 47)
	{
		func_368(uParam0, func_367(iVar0, 1));
		iVar0++;
	}
}

int func_148()
{
	struct<5> Var0;

	if (!DATAFILE::_0x603AC35FD4602C76(Local_2503.f_37))
	{
		return 0;
	}
	Var0 = Local_2503.f_37;
	Var0.f_2 = -692671154;
	Var0.f_3 = Local_243.f_2;
	Var0.f_4 = joaat("standard");
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
	}
	if (!func_143(Var0, 2057649523, &(Local_2503.f_38), 0))
	{
	}
	return 1;
}

void func_149()
{
	int iVar0;

	Local_2503.f_818 = func_369(685218342);
	iVar0 = 0;
	while (iVar0 <= (Local_2503.f_818 - 1))
	{
		Local_2503.f_753[iVar0 /*2*/] = iVar0;
		STREAMING::REQUEST_MODEL(func_370(Local_2503.f_753[iVar0 /*2*/]), false);
		iVar0++;
	}
}

void func_150()
{
	int iVar0;

	Local_2503.f_819 = func_369(-565871549);
	iVar0 = 0;
	while (iVar0 <= (Local_2503.f_819 - 1))
	{
		Local_2503.f_808[iVar0] = iVar0;
		PROPSET::_REQUEST_PROPSET(func_371(Local_2503.f_808[iVar0]));
		iVar0++;
	}
}

void func_151()
{
	int iVar0;

	Local_2503.f_816 = func_369(-1890596655);
	iVar0 = 0;
	while (iVar0 <= (Local_2503.f_816 - 1))
	{
		Local_2503.f_715[iVar0 /*3*/] = iVar0;
		STREAMING::REQUEST_MODEL(func_372(Local_2503.f_715[iVar0 /*3*/]), false);
		iVar0++;
	}
}

void func_152(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (&Local_50[iParam1 /*6*/] != iParam0)
	{
		if (iParam0 == 0 && &Local_50[iParam1 /*6*/] == 2)
		{
			func_137(Local_243, Local_243.f_7, 1);
		}
		Local_50[iParam1 /*6*/] = iParam0;
	}
}

bool func_153()
{
	return Global_1572887->f_106.f_75 != 1;
}

int func_154(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		return 1;
	}
	return 0;
}

int func_155(int iParam0)
{
	return 0;
}

struct<2> func_156()
{
	if (Global_1184439->f_129 <= 0)
	{
		return func_373(0);
	}
	if (Global_1184439->f_130 < 0 || Global_1184439->f_131 == 0)
	{
		return func_373(0);
	}
	return ((*Global_1184439)[Global_1184439->f_130 /*4*/])->f_1;
}

bool func_157(int iParam0)
{
	return &Local_50[iParam0 /*6*/] == 2;
}

int func_158(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar4 = 0;
	if (iParam0 == 0)
	{
		return 0;
	}
	if (Global_1132968->f_4641.f_676 == iParam0)
	{
		return 1;
	}
	Global_1132968->f_4641.f_671.f_1 = 0;
	Global_1132968->f_4641.f_671.f_2 = 1613014828;
	Global_1132968->f_4641.f_671.f_3 = iParam0;
	Global_1132968->f_4641.f_671.f_4 = 0;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar0, &(Global_1132968->f_4641.f_671)))
	{
		return 0;
	}
	Global_1132968->f_4641.f_676 = iParam0;
	iVar4 = 0;
	while (iVar4 < 99)
	{
		iVar2 = func_374(iVar4, 1);
		if (iVar2 == -1)
		{
		}
		else
		{
			iVar1 = iVar2;
			if (iVar1 == 0)
			{
			}
			else
			{
				Global_1132968->f_4641.f_671.f_4 = iVar1;
				Global_1132968->f_4641.f_671.f_2 = -239316549;
				if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar0, &(Global_1132968->f_4641.f_671)))
				{
					bVar3 = true;
				}
				else
				{
					bVar3 = false;
				}
				func_375(iVar2, bVar3, bParam1);
				if (!bVar3)
				{
				}
				else
				{
					Global_1132968->f_4641.f_671.f_2 = 1242520881;
					if (DATAFILE::_DATAFILE_GET_BOOL(&bVar3, &(Global_1132968->f_4641.f_671)))
					{
					}
					else
					{
						bVar3 = true;
					}
					(Global_1132968->f_4641.f_2[func_376(iVar2, 1) /*4*/])->f_1 = bVar3;
				}
			}
		}
		iVar4++;
	}
	return 1;
}

int func_159()
{
	if (func_134(512))
	{
		return 0;
	}
	if (((Local_243.f_9 == -785841056 && Local_243.f_1 == 13) && func_296()) && !func_134(512))
	{
		func_377();
		return 1;
	}
	if (Local_243.f_9 == -785841056 && func_378(Global_34))
	{
		func_379(&(Local_243.f_1270), 1);
		return 1;
	}
	if ((Local_243.f_9 == -785841056 && func_380(&(Local_243.f_1270))) && func_381(&(Local_243.f_1270)) < 2f)
	{
		return 1;
	}
	return 0;
}

bool func_160(var uParam0)
{
	return func_382(*uParam0, 1);
}

void func_161(var uParam0, struct<12> Param1, int iParam13)
{
	Global_1954472->f_1465.f_117.f_12 = iParam13;
	func_383(&(Global_1954472->f_1465.f_117), Param1, Param1.f_1);
	func_384(&(Global_1954472->f_1465.f_117), Param1.f_2, Param1.f_3);
	func_385(&(Global_1954472->f_1465.f_117), Param1.f_4, Param1.f_5);
	func_386(&(Global_1954472->f_1465.f_117), Param1.f_6, Param1.f_7);
	func_387(&(Global_1954472->f_1465.f_117), Param1.f_8, Param1.f_9);
	func_388(&(Global_1954472->f_1465.f_117), Param1.f_10, Param1.f_11);
	uParam0->f_8 = 1;
	func_389(uParam0);
}

void func_162(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_10 = 1;
	uParam0->f_54 = iParam1;
	uParam0->f_54.f_1 = iParam2;
	uParam0->f_54.f_2 = iParam3;
}

void func_163(var uParam0, bool bParam1)
{
	if (!bParam1 && (uParam0->f_5 || func_390(2)))
	{
		return;
	}
	uParam0->f_7 = bParam1;
	if (!bParam1)
	{
		return;
	}
	func_389(uParam0);
}

void func_164(var uParam0, int iParam1)
{
	uParam0->f_11 = 1;
	uParam0->f_57 = iParam1;
}

void func_165(var uParam0, int iParam1)
{
	uParam0->f_2 = 1;
	uParam0->f_21 = iParam1;
}

void func_166(var uParam0, struct<2> Param1, bool bParam3, int iParam4)
{
	if (bParam3)
	{
		func_391(uParam0, Param1, iParam4);
		func_169(111);
	}
	else
	{
		Global_1132968->f_5583 = { *uParam0 };
		Global_1132968->f_5583.f_13 = { Param1 };
		func_170(111);
	}
}

void func_167()
{
	bool bVar0;

	bVar0 = false;
	if (func_392(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 1, 0, 0) > 0)
	{
		bVar0 = true;
	}
	INVENTORY::_0x644CCB76A76CFBD6(1, 1, 1, 1, 1, 1);
	if (bVar0)
	{
		func_393(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 1, 752097756);
		WEAPON::_0x83B8D50EB9446BBA(Global_34, 1);
	}
	if (Local_243.f_1 == 12)
	{
		if (!func_393(201475512, 1, 752097756))
		{
		}
	}
	func_43(512);
	func_394();
}

int func_168(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_395(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_396())
	{
		return func_395(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_395(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_169(int iParam0)
{
	if (func_397(&(Global_1099294->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_170(int iParam0)
{
	if (func_398(&(Global_1099294->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_171(bool bParam0)
{
	if (!bParam0)
	{
		func_399(&(Global_1276326->f_32), 1);
	}
	else
	{
		func_400(&(Global_1276326->f_32), 1);
	}
}

void func_172(int iParam0)
{
	func_146(&(Local_243.f_1335), iParam0);
}

void func_173(int iParam0)
{
	if (func_401(iParam0))
	{
		return;
	}
	Global_1099294->f_26.f_9 = (Global_1099294->f_26.f_9 || iParam0);
}

void func_174(int iParam0)
{
	if (!func_402(iParam0))
	{
		return;
	}
	Global_1099294->f_26.f_9 = (Global_1099294->f_26.f_9 - (Global_1099294->f_26.f_9 && iParam0));
}

int func_175()
{
	return 10208;
}

void func_176(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar2);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0) && &Local_50[iVar2 /*6*/] >= 2)
		{
			iVar1++;
		}
		iVar2++;
	}
	switch (iVar1)
	{
		case 0:
			break;
		case 1:
		case 2:
			Local_1706.f_6 = 25f;
			break;
		case 3:
		case 4:
			Local_1706.f_6 = 20f;
			break;
		case 5:
		case 6:
		case 7:
		case 8:
			Local_1706.f_6 = 15f;
			break;
		default:
			Local_1706.f_6 = 10f;
			break;
	}
	if (func_403(1404758079) < 2)
	{
		Local_1706.f_6 = (Local_1706.f_6 * 0.5f);
	}
	if ((Local_2503.f_853 + Local_2503.f_851) < 10)
	{
		Local_1706.f_6 = (Local_1706.f_6 * 0.5f);
	}
	if (fParam0 > 0f)
	{
		Local_1706.f_6 = fParam0;
	}
}

void func_177(var uParam0, var uParam1, var uParam2, int iParam3)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	if (!DATAFILE::_0x603AC35FD4602C76(Local_2503.f_37))
	{
	}
	if (!func_404(&Var0))
	{
	}
	Var0.f_2 = 2019912578;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
	}
	iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
	Var0.f_2 = -1639163394;
	if (iParam3 == -1)
	{
		Var0.f_3 = iVar6;
	}
	else
	{
		Var0.f_3 = iParam3;
	}
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
	}
	if (!func_143(Var0, 425959891, uParam0, 0))
	{
	}
	if (!func_143(Var0, 256247696, uParam1, 0))
	{
	}
	if (!func_143(Var0, 89029101, uParam2, 0))
	{
	}
}

int func_178(int iParam0)
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

int func_179(int iParam0)
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

bool func_180(int iParam0, int iParam1)
{
	return func_78((Local_50[iParam1 /*6*/])->f_1, iParam0);
}

bool func_181(int iParam0)
{
	return func_78(Local_0.f_13, iParam0);
}

int func_182()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Local_2503.f_819 - 1))
	{
		if (!PROPSET::_HAS_PROPSET_LOADED(func_371(Local_2503.f_808[iVar0])))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_183(int iParam0)
{
	func_146(&(Local_0.f_13), iParam0);
}

void func_184()
{
}

void func_185(int iParam0)
{
	Local_0 = iParam0;
}

int func_186()
{
	int iVar0;

	iVar0 = 1;
	if (!func_405())
	{
		iVar0 = 0;
	}
	if (!func_406())
	{
		iVar0 = 0;
	}
	if (!func_407())
	{
		iVar0 = 0;
	}
	if (!func_408())
	{
		iVar0 = 0;
	}
	if (!func_409())
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_187(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !func_78((Local_50[iVar0 /*6*/])->f_1, iParam0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_188(var uParam0, bool bParam1)
{
	if (bParam1 || !func_160(uParam0))
	{
		func_205(uParam0);
	}
}

void func_189()
{
	func_410();
}

int func_190(var uParam0)
{
	if (!func_160(uParam0))
	{
		return 0;
	}
	if (func_411(uParam0))
	{
		return uParam0->f_2;
	}
	return func_412(uParam0->f_1);
}

int func_191()
{
	return 5000;
}

int func_192(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar2);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0) && &Local_50[iVar2 /*6*/] >= iParam0)
		{
			iVar1++;
		}
		iVar2++;
	}
	return iVar1;
}

void func_193(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_413(uParam0, 1);
	func_414(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_194()
{
	return 3000;
}

int func_195()
{
	int iVar0;

	iVar0 = 1;
	if (!func_415())
	{
		iVar0 = 0;
	}
	if (!func_410())
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_196()
{
	if (!func_160(&(Local_0.f_4)))
	{
		func_188(&(Local_0.f_4), 0);
	}
}

void func_197(bool bParam0, int iParam1)
{
	if (!bParam0 && !func_416(2, 30))
	{
		return;
	}
	func_418(func_417(iParam1));
}

void func_198(bool bParam0)
{
	int iVar0;

	if (!bParam0 && !func_416(2, 60))
	{
		return;
	}
	Local_0.f_14++;
	iVar0 = func_192(2);
	Local_0.f_15 = (Local_0.f_15 + iVar0);
}

void func_199()
{
	func_205(&(Local_1706.f_13));
}

void func_200()
{
	func_198(1);
	func_419();
	func_185(6);
}

void func_201(bool bParam0)
{
	int iVar0;

	if (!func_181(64))
	{
		if (Local_243.f_1387 == joaat("standard") && (Local_243.f_9 == joaat("standard") || Local_243.f_9 == joaat("themed")))
		{
			iVar0 = func_420(2);
			if (iVar0 <= 1)
			{
				func_183(64);
				if (bParam0)
				{
					func_183(128);
				}
			}
		}
		else if ((Local_243.f_1387 == 1839318411 && Local_243.f_9 == joaat("standard")) && Local_243.f_3 == 1455184052)
		{
			func_183(64);
			if (bParam0)
			{
				func_183(128);
			}
		}
	}
}

void func_202()
{
	if (Local_243.f_9 == 1038512660 || Local_243.f_9 == -785841056)
	{
		return;
	}
	if (Local_243.f_13.f_11.f_2 == 0)
	{
		return;
	}
	if (func_313(&(Local_243.f_13), 0) > 0f && NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_243.f_13.f_210[0 /*23*/])->f_14))
	{
		func_421((Local_243.f_13.f_210[0 /*23*/])->f_14);
	}
}

int func_203()
{
	int iVar0;
	int iVar1;

	func_422();
	iVar0 = func_423(2);
	iVar1 = func_192(2);
	if (func_424() || iVar0 == iVar1)
	{
		return 1;
	}
	func_425();
	func_426();
	func_427();
	return 0;
}

int func_204()
{
	if (!func_160(&(Local_0.f_4)))
	{
		return 0;
	}
	return func_190(&(Local_0.f_4));
}

void func_205(var uParam0)
{
	func_193(uParam0, 0);
}

void func_206()
{
	bool bVar0;

	if (Local_243.f_9 == 1038512660)
	{
		func_428(&bVar0);
		if (bVar0)
		{
			func_183(256);
		}
	}
	else if (Local_243.f_9 == -785841056)
	{
		if (Local_0.f_12 != 1 && Local_0.f_12 != 4)
		{
			func_429();
			func_418(0);
		}
	}
	else
	{
		func_429();
		if (func_181(2048))
		{
			func_418(0);
		}
	}
}

int func_207()
{
	return 1;
}

bool func_208()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) <= 4);
}

void func_209(int iParam0)
{
	func_430(&(Local_243.f_1335), iParam0);
}

int func_210()
{
	switch (Local_243.f_1)
	{
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 1:
			return func_431();
		default:
			break;
	}
	return 0;
}

void func_211()
{
	Global_1132968->f_6289.f_22 = MISC::GET_FRAME_COUNT();
}

int func_212()
{
	switch (Local_243.f_1)
	{
		case 11:
			return 1;
		case 7:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_213(int iParam0)
{
	if (!func_432(Global_1132968->f_6289.f_97, iParam0))
	{
		func_146(&(Global_1132968->f_6289.f_97), iParam0);
	}
}

int func_214()
{
	return Global_1102099->f_34.f_772;
}

void func_215(int iParam0, struct<2> Param1, bool bParam3, bool bParam4)
{
	int iVar0;

	if (bParam3)
	{
		if (!func_73(Param1))
		{
			return;
		}
		if (func_433(Param1, 1))
		{
			return;
		}
		if (func_434(Param1))
		{
			return;
		}
	}
	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	func_435(iVar0);
	if (Global_1102099->f_34.f_353[iVar0 /*6*/] && (Global_1102099->f_34.f_353[iVar0 /*6*/])->f_5 == -1)
	{
		return;
	}
	if (!func_361(Param1) || !bParam3)
	{
		Global_1102099->f_34.f_353[iVar0 /*6*/] = 1;
		(Global_1102099->f_34.f_353[iVar0 /*6*/])->f_1 = iParam0;
		(Global_1102099->f_34.f_353[iVar0 /*6*/])->f_5 = 5;
		(Global_1102099->f_34.f_353[iVar0 /*6*/])->f_4 = Global_1275573->f_21;
		if (bParam4)
		{
			((*Global_1266476)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*98*/])->f_97 = 1;
		}
		if (bParam3)
		{
			(Global_1102099->f_34.f_353[iVar0 /*6*/])->f_2 = { Param1 };
		}
		*(Global_1102099->f_34.f_546[iVar0 /*7*/]) = { func_436(iParam0) };
	}
	else
	{
		Global_1102099->f_34.f_353[iVar0 /*6*/] = 1;
		(Global_1102099->f_34.f_353[iVar0 /*6*/])->f_1 = iParam0;
		(Global_1102099->f_34.f_353[iVar0 /*6*/])->f_2 = { Param1 };
		(Global_1102099->f_34.f_353[iVar0 /*6*/])->f_5 = -1;
		(Global_1102099->f_34.f_353[iVar0 /*6*/])->f_4 = Global_1275573->f_21;
		*(Global_1102099->f_34.f_546[iVar0 /*7*/]) = { func_436(iParam0) };
		if (bParam4)
		{
			((*Global_1266476)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*98*/])->f_97 = 1;
		}
	}
	if ((Global_1102099->f_34[iVar0 /*11*/])->f_6)
	{
		func_437(iVar0);
	}
}

void func_216(bool bParam0)
{
	if (bParam0)
	{
		Global_1903929->f_485[1] = 1;
	}
	Global_1903929->f_485[0] = 1;
	MISC::SET_BIT(&(Global_1956131->f_1), 0);
}

void func_217(int iParam0)
{
	int iVar0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar0, 4))
	{
		return;
	}
	switch (iVar0)
	{
		case 56:
			func_438(iParam0);
			break;
		case 3:
			func_439(iParam0);
			break;
	}
}

void func_218(int iParam0)
{
	struct<10> Var0;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 12))
	{
		return;
	}
	iVar12 = Var0.f_5;
	if (Var0.f_4 == -1)
	{
		return;
	}
	if ((iVar12 == -116590068 && func_440(&(Local_243.f_1362))) && func_441(&(Local_243.f_1362), &Var0))
	{
		func_442(&(Local_243.f_1362));
		Local_243.f_1282++;
		Local_243.f_1283 = (Local_243.f_1283 + Var0.f_8);
		Local_243.f_1285 = (Local_243.f_1285 + Var0.f_6);
		if (Var0.f_8 > 0)
		{
			if (func_46(Local_243.f_1, Local_243.f_3, &iVar13))
			{
				func_443(func_47(-1901704681, iVar13), Var0.f_8);
			}
		}
	}
	if ((iVar12 == -2069558689 && func_440(&(Local_243.f_1366))) && func_441(&(Local_243.f_1366), &Var0))
	{
		func_442(&(Local_243.f_1366));
		Local_243.f_1282++;
		Local_243.f_1283 = (Local_243.f_1283 + Var0.f_8);
		Local_243.f_1285 = (Local_243.f_1285 + Var0.f_6);
		if (Var0.f_8 > 0)
		{
			if (func_46(Local_243.f_1, Local_243.f_3, &iVar14))
			{
				func_443(func_47(-1901704681, iVar14), Var0.f_8);
			}
		}
	}
	if ((iVar12 == 1172622856 && func_440(&(Local_243.f_1370))) && func_441(&(Local_243.f_1370), &Var0))
	{
		func_442(&(Local_243.f_1370));
		Local_243.f_1282++;
		Local_243.f_1283 = (Local_243.f_1283 + Var0.f_8);
		Local_243.f_1285 = (Local_243.f_1285 + Var0.f_6);
		if (Var0.f_8 > 0)
		{
			if (func_46(Local_243.f_1, Local_243.f_3, &iVar15))
			{
				func_443(func_47(-1901704681, iVar15), Var0.f_8);
			}
		}
	}
	if ((((((iVar12 == -309190573 || iVar12 == 1440367028) || iVar12 == -697003817) || iVar12 == -252981337) || iVar12 == -926779719) || iVar12 == 1387750829) || ((iVar12 == 1519614621 && func_440(&(Local_243.f_1374))) && func_441(&(Local_243.f_1374), &Var0)))
	{
		func_442(&(Local_243.f_1374));
		Local_243.f_1282++;
	}
	if (((iVar12 != 0 && iVar12 == Local_243.f_1382) && func_440(&(Local_243.f_1378))) && func_441(&(Local_243.f_1378), &Var0))
	{
		func_442(&(Local_243.f_1378));
		Local_243.f_1282++;
		Local_243.f_1284 = (Local_243.f_1284 + Var0.f_9);
		if (Var0.f_9 > 0)
		{
			if (func_46(Local_243.f_1, Local_243.f_3, &iVar16))
			{
				func_443(func_47(1532301684, iVar16), Var0.f_9);
			}
		}
	}
}

void func_219()
{
	func_444();
	func_445();
	func_220(Local_0);
}

void func_220(int iParam0)
{
	Local_243.f_10 = iParam0;
}

void func_221()
{
	if (!func_416(1, 30))
	{
		return;
	}
	func_52();
}

int func_222(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;

	iVar0 = 1;
	HUD::_TEXT_DATABASE_REQUEST(func_346());
	if (!HUD::_TEXT_DATABASE_HAS_LOADED(func_346()))
	{
		iVar0 = 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0))
	{
		HUD::_TEXT_DATABASE_REQUEST(&uParam0);
		if (!HUD::_TEXT_DATABASE_HAS_LOADED(&uParam0))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

char* func_223(bool bParam0)
{
	if (!bParam0)
	{
		return "script@mp@endflow@endcelebration@FME@Female";
	}
	return "script@mp@endflow@endcelebration@FME@Male";
}

char* func_224()
{
	return "LIVE";
}

int func_225(var uParam0, char* sParam1, char* sParam2)
{
	if (ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		if (ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0))
		{
			return 1;
		}
	}
	else
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, 0, sParam2, false, true);
		return 0;
	}
	if (!ANIMSCENE::_0x59606519FF9D3EC2(*uParam0, 1) && !ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
	}
	return 0;
}

int func_226(var uParam0)
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0))
	{
		return 0;
	}
	UISTATEMACHINE::_UIFLOWBLOCK_ENTER(*uParam0, uParam0->f_1);
	if (!UISTATEMACHINE::_UISTATEMACHINE_EXISTS(*uParam0))
	{
		UISTATEMACHINE::_UISTATEMACHINE_CREATE(*uParam0, *uParam0);
	}
	return 1;
}

int func_227()
{
	int iVar0;

	if (!HUD::_TEXT_DATABASE_HAS_LOADED("FMEWK"))
	{
		return 0;
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(0) < 1)
	{
		return 0;
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(0) < 36)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_2503.f_818 - 1))
	{
		if (!STREAMING::HAS_MODEL_LOADED(func_370(Local_2503.f_753[iVar0 /*2*/])))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_2503.f_819 - 1))
	{
		if (!PROPSET::_HAS_PROPSET_LOADED(func_371(Local_2503.f_808[iVar0])))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_228(int iParam0, int iParam1)
{
	func_146(&((Local_50[iParam1 /*6*/])->f_1), iParam0);
}

int func_229()
{
	int iVar0;

	iVar0 = 1;
	if (!func_446())
	{
		iVar0 = 0;
	}
	if (!func_447())
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_230()
{
	Local_2503.f_835 = NETWORK::NET_TO_PED(Local_1706.f_346);
	Local_1706.f_16 = -1;
}

void func_231()
{
	func_221();
	func_448();
	func_449();
	func_450();
	func_451();
	func_452();
	func_453();
	func_270();
	func_454();
	if (Local_243.f_9 != -785841056)
	{
		func_455();
		func_456();
	}
	else
	{
		func_457();
	}
	func_458();
}

void func_232()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	struct<8> Var5;
	struct<8> Var13;
	struct<8> Var21;
	struct<8> Var29;
	char cVar37[64];

	NETWORK::_0x236905C700FDB54D();
	if (!func_157(Local_243.f_1332))
	{
		bVar0 = true;
		if (Local_243.f_9 == -785841056 && &Local_50[Local_243.f_1332 /*6*/] == 1)
		{
			bVar0 = false;
		}
		func_126(1, bVar0);
		return;
	}
	if (func_160(&(Local_0.f_1)))
	{
		iVar1 = func_190(&(Local_0.f_1));
		iVar2 = (Local_243.f_1268 - iVar1);
		iVar3 = (iVar2 / 1000);
		if (iVar3 < 21)
		{
			func_245();
		}
		if (func_459())
		{
			func_460(&(Local_243.f_1005), iVar2, 0, -1, 0);
			if (iVar3 < 4)
			{
				if (!func_65(16))
				{
					func_172(16);
					GRAPHICS::ANIMPOSTFX_PLAY(func_56());
					func_461(&(Local_243.f_1260));
				}
				if (iVar3 < 1)
				{
					iVar3 = 1;
				}
			}
		}
	}
	if (!func_290(Local_243.f_1288))
	{
		func_462(0, "", -1, 0);
	}
	if (((func_65(16) || !func_463(255)) || !ENTITY::DOES_ENTITY_EXIST(Global_34)) || ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		func_462(0, "", -1, 0);
	}
	else if (((func_68(Local_243.f_1396) || (func_68(Local_243.f_1399) && func_464(Global_35, Local_243.f_1396) <= Local_243.f_1293)) || (!func_68(Local_243.f_1399) && func_464(Global_35, Local_243.f_1399) <= Local_243.f_1293)) || !func_465(Local_243.f_1))
	{
		if (Local_243.f_1266 != 4)
		{
			if (Local_243.f_9 == -785841056)
			{
				sVar4 = func_466();
				if (MISC::IS_STRING_NULL_OR_EMPTY(sVar4))
				{
					func_462(4, MISC::_CREATE_VAR_STRING(10, "FME_OBJECTIVE_WAIT_POSSE_VERSUS", &(Local_243.f_1338)), -1, 0);
				}
				else
				{
					func_462(4, sVar4, -1, 0);
				}
			}
			else
			{
				Var5 = { Local_243.f_1346 };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var5))
				{
					Var5 = { Local_243.f_1338 };
				}
				if (func_65(1048576))
				{
					func_462(4, MISC::_CREATE_VAR_STRING(2, "FME_OBJECTIVE_WAIT_ST"), -1, 0);
				}
				else if (Local_243.f_1 == 1)
				{
					func_462(4, MISC::_CREATE_VAR_STRING(10, "FME_OBJECTIVE_WAIT_CHALLENGES", &Var5), -1, 0);
				}
				else
				{
					func_462(4, MISC::_CREATE_VAR_STRING(10, "FME_OBJECTIVE_WAIT", &Var5), -1, 0);
				}
			}
		}
	}
	else if ((func_134(131072) && !func_134(1048576)) && func_324(Local_243.f_1296))
	{
		if (Local_243.f_1266 != 2)
		{
			func_462(2, MISC::_CREATE_VAR_STRING(10, "FME_OBJECTIVE_FAST_TRAVEL_POSSE_VERSUS", &(Local_243.f_1338)), 7500, 0);
			func_43(1048576);
		}
	}
	else if (Local_243.f_1266 != 3)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_467()))
		{
			func_462(3, func_467(), -1, 0);
		}
		else if (Local_243.f_9 == -785841056)
		{
			func_462(3, "FME_OBJECTIVE_ENTER_AREA_POSSE_VERSUS", -1, 0);
		}
		else
		{
			func_462(3, "FME_OBJECTIVE_ENTER_AREA", -1, 0);
		}
	}
	if (!MAP::DOES_BLIP_EXIST(Local_243.f_1325))
	{
		if (!func_68(Local_243.f_1396) && func_465(Local_243.f_1))
		{
			func_468(&(Local_243.f_1325));
		}
	}
	if (!func_459())
	{
		return;
	}
	if (!func_134(2))
	{
		if (((((func_48(func_469(415667248)) >= func_470() || Local_243.f_9 != joaat("standard")) || Local_243.f_9 != joaat("themed")) || func_471()) || !_NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))) || _NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) < 2)
		{
			func_43(2);
		}
		else if (func_472(Local_243.f_1289))
		{
			Var13 = { Local_243.f_1346 };
			if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
			{
				Var13 = { Local_243.f_1338 };
			}
			Local_243.f_1289 = func_473(MISC::_CREATE_VAR_STRING(10, "FME_HELP_SCORE", &Var13));
			func_443(func_469(415667248), 1);
			func_43(2);
		}
	}
	else if (!func_134(4))
	{
		if (Local_243.f_1277 >= func_470())
		{
			func_43(4);
		}
		else if (func_472(Local_243.f_1289))
		{
			Var21 = { func_474(Local_243.f_1, Local_243.f_3) };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var21))
			{
				Local_243.f_1289 = func_473(&Var21);
			}
			func_43(4);
		}
	}
	else if (!func_134(8))
	{
		if (Local_243.f_1277 >= func_470())
		{
			func_43(8);
		}
		else if (func_472(Local_243.f_1289))
		{
			Var29 = { func_475(Local_243.f_1, Local_243.f_3) };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var29))
			{
				Local_243.f_1289 = func_473(&Var29);
			}
			func_43(8);
		}
	}
	else if (!func_134(16))
	{
		if (func_134(8388608) && func_472(Local_243.f_1289))
		{
			StringCopy(&cVar37, func_476(), 64);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar37))
			{
				Local_243.f_1289 = func_473(&cVar37);
			}
			func_43(16);
		}
	}
}

int func_233()
{
	if (Global_1070356->f_27136.f_62.f_42 >= 9)
	{
		return 1;
	}
	return 0;
}

int func_234()
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = (iVar0 - Global_1070356->f_27136.f_105);
	if (iVar1 < Global_1901929->f_1.f_36)
	{
		return 0;
	}
	return 1;
}

void func_235()
{
	vector3 vVar0;
	var uVar3;
	int iVar4;

	func_477(1, 0, 0);
	func_63(0);
	func_43(2097152);
	func_478(&vVar0, &uVar3, &iVar4);
	if (!func_68(vVar0) && !iVar4 == -1)
	{
		if ((!func_134(134217728) && !func_479(Local_243.f_1, Local_243.f_3)) && func_480(Local_243.f_1, Local_243.f_3))
		{
			func_481(1, 0);
		}
		func_482(vVar0, uVar3, 1);
	}
	else
	{
		func_483(1, 1);
	}
}

bool func_236(int iParam0)
{
	return (Global_1572887->f_106.f_15 && iParam0) != 0;
}

void func_237(int iParam0)
{
	func_484(&(Global_1572887->f_106.f_15), iParam0);
}

void func_238(bool bParam0)
{
	if (Global_1070356->f_27244.f_1 != SCRIPTS::GET_ID_OF_THIS_THREAD() && !bParam0)
	{
		return;
	}
	if (Global_1070356->f_27244.f_1 == 0)
	{
		return;
	}
	func_484(&(Global_1070356->f_27244.f_2), 2);
}

void func_239(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	if (bParam0)
	{
		Global_1070356->f_27136.f_62.f_28 = 1;
		Global_1070356->f_27136.f_62.f_29 = iParam3;
		Global_1070356->f_27136.f_62.f_26 = iParam6;
		Global_1070356->f_27136.f_62.f_27 = iParam8;
		if (bParam7)
		{
			MISC::SET_BIT(&(Global_1070356->f_27136.f_62.f_8), 18);
		}
	}
	else
	{
		Global_1070356->f_27136.f_62.f_30 = 1;
		Global_1070356->f_27136.f_62.f_33 = !bParam1;
		Global_1070356->f_27136.f_62.f_31 = iParam2;
		Global_1070356->f_27136.f_62.f_32 = iParam4;
		Global_1070356->f_27136.f_62.f_35 = iParam5;
		if (MISC::IS_BIT_SET(Global_1070356->f_27136.f_62.f_8, 18))
		{
			MISC::CLEAR_BIT(&(Global_1070356->f_27136.f_62.f_8), 18);
		}
	}
}

void func_240()
{
	float fVar0;
	float fVar1;

	if (Local_243.f_9 != -785841056 || !func_465(Local_243.f_1))
	{
		return;
	}
	if ((!func_157(Local_243.f_1332) || !func_134(131072)) || func_68(Local_243.f_1396))
	{
		func_485();
		return;
	}
	if ((((!ENTITY::DOES_ENTITY_EXIST(Global_34) || ENTITY::IS_ENTITY_DEAD(Global_34)) || PED::_0xB655DB7582AEC805(Global_34)) || func_486()) || Global_1915180->f_20142)
	{
		func_485();
		return;
	}
	fVar0 = func_464(Global_35, Local_243.f_1396);
	fVar1 = (Local_243.f_1294 + 35f);
	if (Local_243.f_10 > 3)
	{
		if (func_134(262144) || (Local_243.f_1293 > 0f && fVar0 <= fVar1))
		{
			func_332(131072);
			func_485();
			return;
		}
	}
	if (fVar0 < fVar1)
	{
		func_485();
		return;
	}
	if (!func_324(Local_243.f_1296) && !PED::_IS_PED_CARRYING(Global_34))
	{
		Local_243.f_1296 = func_487("FM_FAST_TRAVEL", joaat("INPUT_CONTEXT_Y"), Global_34, 2, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
		if (!func_134(524288))
		{
			func_43(524288);
		}
	}
	if (func_324(Local_243.f_1296))
	{
		if (PED::_IS_PED_CARRYING(Global_34))
		{
			if (func_488(Local_243.f_1296, 0))
			{
				func_329(&(Local_243.f_1296), 0, 1);
			}
		}
		else
		{
			if (!func_488(Local_243.f_1296, 0))
			{
				func_328(Local_243.f_1296, 1, 1, 1);
			}
			if (func_489(Local_243.f_1296, 0))
			{
				func_483(1, 1);
				func_43(262144);
			}
		}
		if (Local_243.f_1266 == 2 && func_490(Local_243.f_1288))
		{
			func_491(Local_243.f_1296, 0, 1);
		}
		else
		{
			func_491(Local_243.f_1296, 1, 1);
		}
	}
}

void func_241()
{
	int iVar0;
	char[] cVar1[8];
	vector3 vVar2;

	if (!func_157(Local_243.f_1332))
	{
		return;
	}
	if (Local_243.f_9 != joaat("standard") && Local_243.f_9 != joaat("themed"))
	{
		return;
	}
	if (func_68(Local_243.f_1399))
	{
		return;
	}
	if (!func_492() > 0f)
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Local_243.f_1327))
	{
		Local_243.f_1327 = MAP::_BLIP_ADD_FOR_RADIUS(-188007767, Local_243.f_1399, func_492());
	}
	else
	{
		MAP::SET_BLIP_COORDS(Local_243.f_1327, Local_243.f_1399);
	}
	if (func_160(&(Local_243.f_1307)) && func_190(&(Local_243.f_1307)) > 1500)
	{
		if ((((!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(Local_243.f_1260) && !UISTATEMACHINE::_UISTATEMACHINE_EXISTS(190275865)) && !DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_243.f_1260.f_2)) && !DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_243.f_1260.f_1)) && !GRAPHICS::ANIMPOSTFX_IS_RUNNING(func_493()))
		{
			func_298(&(Local_243.f_1307));
		}
	}
	if ((((!ENTITY::DOES_ENTITY_EXIST(Global_34) || ENTITY::IS_ENTITY_DEAD(Global_34)) || func_62(255)) || func_290(Local_243.f_1287)) || func_160(&(Local_243.f_1307)))
	{
		func_334(4);
		func_494();
		func_253();
		return;
	}
	if (func_495())
	{
		func_496(4);
		if (!func_160(&(Local_243.f_1304)))
		{
			AUDIO::PLAY_SOUND_FRONTEND("OOB_start", func_119(), true, 0);
			func_462(5, "FME_OBJECTIVE_ABANDON_LOBBY_WARNING", -1, 0);
			func_205(&(Local_243.f_1304));
		}
		else
		{
			iVar0 = func_191();
			cVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT((iVar0 - func_190(&(Local_243.f_1304)))) * 0.001f));
			if (cVar1 < 0)
			{
				cVar1 = 0;
			}
			vVar2 = { Local_243.f_1399 };
			vVar2.f_2 = (vVar2.z + 10f);
			func_497(&(Local_243.f_1260), cVar1, vVar2, func_492(), 1, 0, 0, 1);
			if (func_190(&(Local_243.f_1304)) > iVar0)
			{
				func_498();
				func_499(Global_34, 0, 0);
				if (ENTITY::IS_ENTITY_DEAD(Global_34))
				{
					AUDIO::PLAY_SOUND_FRONTEND("OOB_death", func_119(), true, 0);
					func_334(4);
					func_494();
					func_253();
				}
			}
		}
	}
	else
	{
		if (Local_243.f_1266 == 5)
		{
			func_205(&(Local_243.f_1307));
			AUDIO::PLAY_SOUND_FRONTEND("OOB_return", func_119(), true, 0);
		}
		func_244();
	}
}

void func_242()
{
	int iVar0;
	struct<4> Var1;
	struct<4> Var5;

	if (func_180(65536, Local_243.f_1332))
	{
		return;
	}
	iVar0 = func_500();
	if (iVar0 == 0)
	{
		return;
	}
	if (iVar0 == joaat("weapon_fishingrod"))
	{
		return;
	}
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (!WEAPON::_0xF29A186ED428B552(Global_34, iVar0))
	{
		return;
	}
	WEAPON::_0x6929E22158E52265(Global_34, 0, &Var1);
	WEAPON::_0x6929E22158E52265(Global_34, 1, &Var5);
	if (func_347(Var1, Var5))
	{
		func_228(65536, Local_243.f_1332);
	}
}

void func_243()
{
	if ((!func_501(128) && !func_290(Local_243.f_1287)) && !func_290(Local_243.f_1291))
	{
		Local_243.f_1291 = func_502(MISC::_CREATE_VAR_STRING(2, "FME_CE_SHARD_COMDIS"), joaat("COLOR_WHITE"));
		if (func_503(Local_243.f_1291))
		{
			func_504(128);
		}
	}
}

void func_244()
{
	if (func_68(Local_243.f_1399))
	{
		return;
	}
	if (Local_243.f_1266 == 5)
	{
		if (func_290(Local_243.f_1289))
		{
			_NAMESPACE71::_0x2F901291EF177B02(Local_243.f_1289, 0);
		}
		func_462(0, "", -1, 0);
	}
	func_334(4);
	func_494();
	func_253();
}

void func_245()
{
	if (Local_243.f_9 == -785841056)
	{
		return;
	}
	if (func_134(8192))
	{
		return;
	}
	if (!func_134(4194304))
	{
		NETWORK::_0xE546BDA1B3E288EE(512);
		func_43(4194304);
	}
}

void func_246(int iParam0, int iParam1)
{
	func_146(&((Global_1185132->f_66[iParam0 /*20*/])->f_6), iParam1);
}

int func_247()
{
	int iVar0;

	iVar0 = 1;
	return iVar0;
}

void func_248()
{
	Local_243.f_1279 = func_48(func_505(-190907223));
}

void func_249()
{
	Local_243.f_1280 = func_48(func_505(-1048906573));
}

int func_250()
{
	if (Local_243.f_1387 == joaat("standard") && func_181(64))
	{
		func_41(-1477057661);
		func_52();
		func_251();
		return 1;
	}
	return 0;
}

void func_251()
{
	switch (Local_243.f_1387)
	{
		case joaat("standard"):
		case -669315698:
			func_506(0);
			break;
		case 142723591:
		case 1229355466:
			func_507();
			break;
		case -1893775542:
		case -1869754940:
			func_508();
			break;
		case -1477057661:
		case -1323241207:
			func_506(1);
			break;
		case -1130541276:
		case 1839318411:
			func_509(1);
			break;
	}
}

void func_252(var uParam0, bool bParam1)
{
	struct<14> Var0;

	if (uParam0->f_2 > 0)
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(12, 1, 0);
		if (bParam1)
		{
			func_287(uParam0);
			func_510();
		}
		func_511(uParam0);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_6);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_5);
		HUD::_0xF1E6979C0B779985(&(uParam0->f_4));
		uParam0->f_9 = 0;
		func_512(0);
		func_513(0);
		_NAMESPACE71::_0xDD1232B332CBB9E7(2, 1, 0);
		Var0.f_11 = -1;
		Var0.f_12 = -1;
		Var0.f_13 = -1;
		MISC::_COPY_MEMORY(uParam0, &Var0, 15);
	}
}

void func_253()
{
	func_514(&(Local_243.f_1260), 1);
}

void func_254()
{
	if (MAP::DOES_BLIP_EXIST(Local_243.f_1325))
	{
		MAP::REMOVE_BLIP(&(Local_243.f_1325));
	}
	if (MAP::DOES_BLIP_EXIST(Local_243.f_1326))
	{
		MAP::REMOVE_BLIP(&(Local_243.f_1326));
	}
	if (MAP::DOES_BLIP_EXIST(Local_243.f_1327))
	{
		MAP::REMOVE_BLIP(&(Local_243.f_1327));
	}
}

void func_255()
{
	int iVar0;

	func_515();
	iVar0 = 0;
	while (iVar0 <= (Local_2503.f_816 - 1))
	{
		(Local_2503.f_715[iVar0 /*3*/])->f_1 = NETWORK::NET_TO_VEH(&(Local_1706.f_327[iVar0]));
		iVar0++;
	}
	func_515();
	func_516();
	func_517(&(Local_2503.f_5));
	func_518(&(Local_2503.f_5), 1);
	func_519(&(Local_2503.f_5), 1);
}

void func_256()
{
	int iVar0;

	iVar0 = Local_243.f_1269;
	if (func_160(&(Local_0.f_4)))
	{
		iVar0 = (iVar0 - func_190(&(Local_0.f_4)));
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 < 15000)
	{
		PED::SET_PED_RESET_FLAG(Global_34, 134, true);
	}
	Local_243.f_1267 = iVar0;
}

void func_257()
{
	bool bVar0;
	struct<8> Var1;
	bool bVar9;
	char cVar10[64];
	bool bVar18;
	char cVar19[64];
	int iVar27;
	int iVar28;
	struct<8> Var29;
	bool bVar37;
	bool bVar38;
	bool bVar39;
	int iVar40;

	func_281();
	if (!func_157(Local_243.f_1332))
	{
		bVar0 = true;
		if (Local_243.f_9 == -785841056 && &Local_50[Local_243.f_1332 /*6*/] == 1)
		{
			bVar0 = false;
		}
		func_126(1, bVar0);
		return;
	}
	if (!func_65(2))
	{
		if (func_520())
		{
			func_276(func_274(), func_275(), 0, 0, 30000);
		}
		Var1 = { func_521() };
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
			StringCopy(&Var1, func_522(Local_243.f_1338), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(func_523()))
		{
			cVar10 = { func_524(Local_243.f_1, Local_243.f_3) };
		}
		else
		{
			bVar9 = true;
		}
		if (func_181(64))
		{
			iVar27 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
			if (_NAMESPACE26::_0x0F99F6436528A089(iVar27) && _NAMESPACE26::_0x149A2751AB66AC02(iVar27) > 1)
			{
				StringCopy(&cVar19, "FME_SHARD_PRIMARY_POSSE_DISBANDED", 64);
				func_172(8);
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(func_525()))
		{
			bVar18 = true;
		}
		if (bVar9 || bVar18)
		{
			if (bVar9 && bVar18)
			{
				Local_243.f_1287 = func_528(&Var1, func_523(), func_525(), func_526(), func_527());
			}
			else if (bVar9)
			{
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar19))
				{
					Local_243.f_1287 = func_529(&Var1, func_523(), func_526(), func_527());
				}
				else
				{
					Local_243.f_1287 = func_528(&Var1, func_523(), &cVar19, func_526(), func_527());
				}
			}
			else if (bVar18)
			{
				Local_243.f_1287 = func_528(&Var1, &cVar10, func_525(), func_526(), func_527());
			}
		}
		else if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar19))
		{
			Local_243.f_1287 = func_529(&Var1, &cVar10, func_526(), func_527());
		}
		else
		{
			Local_243.f_1287 = func_528(&Var1, &cVar10, &cVar19, func_526(), func_527());
		}
		func_172(2);
	}
	else if (!func_65(4))
	{
		if (func_520())
		{
			func_276(func_274(), func_275(), 0, 0, 30000);
		}
		if (!func_290(Local_243.f_1287))
		{
			func_172(4);
		}
	}
	else
	{
		func_276(func_274(), func_275(), 0, 0, 30000);
		if (((Local_243.f_1005.f_2 != 2 || Local_243.f_1005.f_1 != 2) || !UISTATEMACHINE::_UISTATEMACHINE_EXISTS(1546991729)) || !DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_243.f_13.f_11.f_2))
		{
			return;
		}
		if (!func_65(8) && func_181(64))
		{
			if (!func_290(Local_243.f_1287) && func_472(Local_243.f_1289))
			{
				iVar28 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
				if (_NAMESPACE26::_0x0F99F6436528A089(iVar28) && _NAMESPACE26::_0x149A2751AB66AC02(iVar28) > 1)
				{
					Var29 = { func_521() };
					if (MISC::IS_STRING_NULL_OR_EMPTY(&Var29))
					{
						Var29 = { Local_243.f_1338 };
					}
					Local_243.f_1287 = func_529(&Var29, "FME_SHARD_PRIMARY_POSSE_DISBANDED", 0, 0);
				}
				func_172(8);
			}
		}
		else if (!func_134(32))
		{
			bVar37 = true;
			bVar38 = false;
			func_530(Local_243.f_1325, &bVar37, &bVar38);
			if (Local_243.f_1277 >= func_470() && !bVar38)
			{
				func_43(32);
			}
			else if (!func_290(Local_243.f_1287) && func_472(Local_243.f_1289))
			{
				if (bVar37)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(func_530(Local_243.f_1325, &bVar37, &bVar38)))
					{
						Local_243.f_1289 = func_473(func_530(Local_243.f_1325, &bVar37, &bVar38));
					}
					func_43(32);
				}
			}
		}
		else if (!func_134(128))
		{
			if ((func_48(func_469(-470974965)) >= 5 || !func_292(Local_243.f_1384)) || !func_531())
			{
				func_43(64);
				func_43(128);
			}
			else if (!func_290(Local_243.f_1287) && func_472(Local_243.f_1289))
			{
				if (!func_134(64))
				{
					Local_243.f_1289 = func_473("FME_HELP_SCOREBOARD_1");
					func_43(64);
				}
				else
				{
					Local_243.f_1289 = func_473("FME_HELP_SCOREBOARD_2");
					func_443(func_469(-470974965), 1);
					func_43(128);
				}
			}
		}
		else if (!func_134(65536))
		{
			if (func_48(func_469(1769987584)) >= func_470())
			{
				func_43(65536);
			}
			else if ((((func_282() && func_531()) && !func_290(Local_243.f_1287)) && func_472(Local_243.f_1289)) && (Local_50[Local_243.f_1332 /*6*/])->f_2 > 0f)
			{
				bVar39 = false;
				if (func_275() & 1024 == 1024)
				{
					bVar39 = true;
				}
				if (func_532(bVar39, 1, &iVar40))
				{
					if (!func_160(&(Local_243.f_1301)))
					{
						func_205(&(Local_243.f_1301));
					}
					else if (func_190(&(Local_243.f_1301)) >= 2000)
					{
						Local_243.f_1289 = func_473(MISC::_CREATE_VAR_STRING(10, "FME_HELP_SCORE_DRAW", func_534(PLAYER::GET_PLAYER_NAME(iVar40), func_533(iVar40, 1, -1, 0))));
						func_443(func_469(1769987584), 1);
						func_43(65536);
					}
				}
				else if (func_160(&(Local_243.f_1301)))
				{
					func_298(&(Local_243.f_1301));
				}
			}
		}
	}
}

void func_258()
{
	if (Local_243.f_9 == -785841056)
	{
		return;
	}
	if (func_157(Local_243.f_1332))
	{
		func_496(16);
	}
	else
	{
		func_334(16);
	}
}

void func_259()
{
	if (func_157(Local_243.f_1332))
	{
		func_535();
	}
}

void func_260()
{
	int iVar0;
	char[] cVar1[8];
	vector3 vVar2;

	if (!func_157(Local_243.f_1332))
	{
		return;
	}
	if (Local_243.f_9 != joaat("standard") && Local_243.f_9 != joaat("themed"))
	{
		return;
	}
	if (func_357() == 4)
	{
		return;
	}
	if (func_68(Local_243.f_1396))
	{
		return;
	}
	if (!func_536())
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Local_243.f_1327))
	{
		Local_243.f_1327 = func_537();
	}
	else
	{
		MAP::SET_BLIP_COORDS(Local_243.f_1327, Local_243.f_1396);
	}
	if (func_160(&(Local_243.f_1307)) && func_190(&(Local_243.f_1307)) > 1500)
	{
		if ((((!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(Local_243.f_1260) && !UISTATEMACHINE::_UISTATEMACHINE_EXISTS(190275865)) && !DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_243.f_1260.f_2)) && !DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_243.f_1260.f_1)) && !GRAPHICS::ANIMPOSTFX_IS_RUNNING(func_493()))
		{
			func_298(&(Local_243.f_1307));
		}
	}
	if ((((!ENTITY::DOES_ENTITY_EXIST(Global_34) || ENTITY::IS_ENTITY_DEAD(Global_34)) || func_62(255)) || func_290(Local_243.f_1287)) || func_160(&(Local_243.f_1307)))
	{
		func_334(4);
		func_494();
		func_253();
		return;
	}
	if (func_538())
	{
		func_496(4);
		if (!MAP::DOES_BLIP_EXIST(Local_243.f_1326))
		{
			Local_243.f_1326 = MAP::_BLIP_ADD_FOR_COORD(408396114, Local_243.f_1396);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_243.f_1326, "FME_OBJECTIVE_ABANDON_BLIP_NAME");
			MAP::_0x662D364ABF16DE2F(Local_243.f_1326, 231194138);
		}
		else
		{
			MAP::SET_BLIP_COORDS(Local_243.f_1326, Local_243.f_1396);
		}
		if (!func_160(&(Local_243.f_1304)))
		{
			AUDIO::PLAY_SOUND_FRONTEND("OOB_start", func_119(), true, 0);
			func_462(5, "FME_OBJECTIVE_ABANDON_WARNING", -1, 0);
			func_205(&(Local_243.f_1304));
		}
		else
		{
			iVar0 = func_539();
			cVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT((iVar0 - func_190(&(Local_243.f_1304)))) * 0.001f));
			if (cVar1 < 0)
			{
				cVar1 = 0;
			}
			vVar2 = { Local_243.f_1396 };
			vVar2.f_2 = (vVar2.z + 10f);
			func_497(&(Local_243.f_1260), cVar1, vVar2, Local_243.f_1294, 1, 0, 0, 1);
			if (func_190(&(Local_243.f_1304)) > iVar0)
			{
				func_498();
				func_499(Global_34, 0, 0);
				if (ENTITY::IS_ENTITY_DEAD(Global_34))
				{
					AUDIO::PLAY_SOUND_FRONTEND("OOB_death", func_119(), true, 0);
					func_334(4);
					func_494();
					func_253();
				}
			}
		}
	}
	else
	{
		if (Local_243.f_1266 == 5)
		{
			func_205(&(Local_243.f_1307));
			AUDIO::PLAY_SOUND_FRONTEND("OOB_return", func_119(), true, 0);
			if (func_290(Local_243.f_1289))
			{
				_NAMESPACE71::_0x2F901291EF177B02(Local_243.f_1289, 0);
			}
			func_462(0, "", -1, 0);
		}
		if (MAP::DOES_BLIP_EXIST(Local_243.f_1326))
		{
			MAP::REMOVE_BLIP(&(Local_243.f_1326));
		}
		func_334(4);
		func_494();
		func_253();
	}
}

int func_261()
{
	return 0;
}

void func_262()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = func_48(func_505(-190907223));
	iVar0 = (iVar0 - Local_243.f_1279);
	if (iVar0 != (Local_50[Local_243.f_1332 /*6*/])->f_3)
	{
		(Local_50[Local_243.f_1332 /*6*/])->f_3 = iVar0;
	}
	iVar1 = func_48(func_505(-1048906573));
	iVar1 = (iVar1 - Local_243.f_1280);
	if (iVar1 != (Local_50[Local_243.f_1332 /*6*/])->f_4)
	{
		(Local_50[Local_243.f_1332 /*6*/])->f_4 = iVar1;
	}
	iVar10 = 0;
	iVar10 = 0;
	while (iVar10 <= 8)
	{
		fVar2 = 0f;
		fVar3 = 0f;
		fVar4 = 0f;
		fVar5 = -1f;
		fVar6 = -1f;
		iVar9 = Local_243.f_1389;
		iVar7 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar9);
		iVar8 = 255;
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar7))
		{
			fVar2 = (Local_50[iVar9 /*6*/])->f_2;
			fVar3 = BUILTIN::TO_FLOAT((Local_50[iVar9 /*6*/])->f_3);
			fVar4 = BUILTIN::TO_FLOAT((Local_50[iVar9 /*6*/])->f_4);
			iVar8 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar7);
			fVar5 = BUILTIN::TO_FLOAT((Local_50[iVar9 /*6*/])->f_5);
			fVar6 = BUILTIN::TO_FLOAT(NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar8));
		}
		func_540(&(Local_243.f_13), fVar2, iVar8, Local_243.f_971[iVar9], !func_157(iVar9), fVar3, fVar4, 0, fVar5, fVar6);
		Local_243.f_1389++;
		if (Local_243.f_1389 >= 32)
		{
			Local_243.f_1389 = 0;
		}
		iVar10++;
	}
	func_541(&(Local_243.f_13));
}

void func_263()
{
	char* sVar0;
	int iVar1;

	if ((Local_243.f_9 == 1038512660 || Local_243.f_9 == -785841056) || !func_542())
	{
		return;
	}
	if (Local_0.f_11 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_0.f_11))
	{
		if (Local_0.f_11 != Local_243.f_1004)
		{
			if (Local_243.f_1004 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_243.f_1004))
			{
				func_543(Local_243.f_1004);
			}
			if (Local_243.f_1004 == 255)
			{
			}
			Local_243.f_1004 = Local_0.f_11;
			if ((func_157(Local_243.f_1332) && !func_290(Local_243.f_1287)) && !func_65(2097152))
			{
				if (Local_243.f_1004 == PLAYER::PLAYER_ID())
				{
					iVar1 = joaat("COLOR_WHITE");
					sVar0 = "FME_GAME_UPDATE_NEW_LEADER_SELF";
				}
				else
				{
					iVar1 = func_533(Local_243.f_1004, 1, -1, 0);
					sVar0 = MISC::_CREATE_VAR_STRING(10, "FME_GAME_UPDATE_NEW_LEADER", func_534(PLAYER::GET_PLAYER_NAME(Local_243.f_1004), iVar1));
				}
				Local_243.f_1291 = func_502(sVar0, iVar1);
			}
		}
		if (Local_243.f_1004 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_243.f_1004))
		{
			func_544(Local_243.f_1004, joaat("trophy"));
		}
	}
}

void func_264()
{
	if (func_160(&(Local_243.f_1310)) && func_190(&(Local_243.f_1310)) > 120000)
	{
		func_298(&(Local_243.f_1310));
		func_105(0);
		func_54();
	}
}

void func_265()
{
	if ((!func_545(NETWORK::PARTICIPANT_ID_TO_INT(), 64) && !ENTITY::DOES_ENTITY_EXIST(Local_2503.f_2)) && Local_2503.f_3 == 574926209)
	{
		func_546(521036731, 0);
		func_547(64);
	}
	if (!func_501(64) && func_548("MC_DELIVERING", 1, 0))
	{
		func_504(64);
	}
	func_549();
	func_550();
	func_551();
	func_552();
	func_553();
	func_554();
	Local_2503.f_3 = ENTITY::GET_ENTITY_MODEL(func_555(PLAYER::PLAYER_PED_ID(), 4));
}

int func_266()
{
	return 0;
}

void func_267()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 <= 31)
	{
		fVar0 = 0f;
		fVar1 = 0f;
		fVar2 = 0f;
		fVar3 = -1f;
		fVar4 = -1f;
		iVar5 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar7);
		iVar6 = 255;
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar5))
		{
			fVar0 = (Local_50[iVar7 /*6*/])->f_2;
			fVar1 = BUILTIN::TO_FLOAT((Local_50[iVar7 /*6*/])->f_3);
			fVar2 = BUILTIN::TO_FLOAT((Local_50[iVar7 /*6*/])->f_4);
			iVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar5);
			fVar3 = BUILTIN::TO_FLOAT((Local_50[iVar7 /*6*/])->f_5);
			fVar4 = fVar1;
		}
		func_540(&(Local_243.f_13), fVar0, iVar6, Local_243.f_971[iVar7], !func_157(iVar7), fVar1, fVar2, 0, fVar3, fVar4);
		iVar7++;
	}
	func_541(&(Local_243.f_13));
}

void func_268()
{
	if (Local_243.f_9 == -785841056)
	{
		return;
	}
	_NAMESPACE79::_0x1C38C3577901AF1F();
	func_556();
}

void func_269()
{
	if (!func_157(Local_243.f_1332))
	{
		func_126(1, 1);
		return;
	}
	func_281();
	func_276(func_274(), func_275(), Local_243.f_11, Local_243.f_12, 30000);
}

void func_270()
{
	if (!func_557(2, -1))
	{
		return;
	}
	if ((func_357() != 4 && func_357() != 10) && func_357() != 0)
	{
		return;
	}
	func_558();
}

int func_271(int iParam0)
{
	if (iParam0 == 255)
	{
		return 0;
	}
	else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	StringCopy(&(Local_243.f_1406), func_559(iParam0), 64);
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		Local_243.f_1414 = joaat("COLOR_PURE_WHITE");
	}
	else
	{
		Local_243.f_1414 = func_533(iParam0, 1, -1, 0);
	}
	return 1;
}

void func_272(var uParam0)
{
	uParam0->f_947 = 1;
}

void func_273(var uParam0)
{
	uParam0->f_948 = 1;
}

int func_274()
{
	return func_560();
}

int func_275()
{
	return 32769;
}

void func_276(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	Local_243.f_11 = iParam2;
	Local_243.f_12 = iParam3;
	iVar0 = 551037070;
	iVar1 = joaat("COLOR_PURE_WHITE");
	iVar2 = joaat("COLOR_RED");
	iVar3 = joaat("COLOR_PURE_WHITE");
	if (Local_243.f_1387 == joaat("standard"))
	{
		iVar0 = joaat("COLOR_PURE_WHITE");
		iVar1 = joaat("COLOR_BLACK");
		iVar2 = joaat("COLOR_RED");
		iVar3 = joaat("COLOR_BLACK");
		if (!MISC::IS_BIT_SET(Local_243.f_13.f_11.f_159, 16))
		{
			MISC::SET_BIT(&(Local_243.f_13.f_11.f_159), 16);
		}
	}
	else if (func_561())
	{
		iVar2 = 551037070;
		iVar3 = joaat("COLOR_BLACK");
		iVar0 = joaat("COLOR_WHITE");
		iVar1 = joaat("COLOR_BLACK");
		if (!MISC::IS_BIT_SET(Local_243.f_13.f_11.f_159, 16))
		{
			MISC::SET_BIT(&(Local_243.f_13.f_11.f_159), 16);
		}
	}
	else if (func_562())
	{
		iVar2 = 551037070;
	}
	if (Local_243.f_1 == 7)
	{
		iVar0 = joaat("COLOR_PURE_WHITE");
		iVar1 = joaat("COLOR_BLACK");
		iVar2 = joaat("COLOR_RED");
		iVar3 = joaat("COLOR_BLACK");
		if (!MISC::IS_BIT_SET(Local_243.f_13.f_11.f_159, 16))
		{
			MISC::SET_BIT(&(Local_243.f_13.f_11.f_159), 16);
		}
	}
	else if (Local_243.f_1 == 6 || Local_243.f_1 == 5)
	{
		if ((func_313(&(Local_243.f_13), 0) > 0f && (Local_243.f_13.f_210[0 /*23*/])->f_14 != 255) && NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_243.f_13.f_210[0 /*23*/])->f_14))
		{
			if (Local_243.f_13.f_210[0 /*23*/])->f_14 == PLAYER::PLAYER_ID()
			{
				if ((((func_313(&(Local_243.f_13), 1) > 0f && (Local_243.f_13.f_210[1 /*23*/])->f_14 != 255) && NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_243.f_13.f_210[1 /*23*/])->f_14)) && _NAMESPACE26::_0x81FB74C83C2ED69F((Local_243.f_13.f_210[1 /*23*/])->f_14)) && !func_563((Local_243.f_13.f_210[1 /*23*/])->f_14, 1))
				{
					iVar2 = 551037070;
				}
			}
			else if (_NAMESPACE26::_0x81FB74C83C2ED69F((Local_243.f_13.f_210[0 /*23*/])->f_14) && !func_563((Local_243.f_13.f_210[0 /*23*/])->f_14, 1))
			{
				iVar2 = 551037070;
			}
		}
	}
	uVar4 = 1;
	switch (Local_243.f_1384)
	{
		case joaat("timer"):
			func_460(&(Local_243.f_1005), iParam0, 0, iParam4, func_564());
			break;
		case 1310067901:
			func_565(&(Local_243.f_1005), &(Local_243.f_13), &uVar4, iParam1, 1);
			break;
		case joaat("leaderboard"):
			func_565(&(Local_243.f_1005), &(Local_243.f_13), &uVar4, iParam1 | 256, 1);
			break;
		case -2065086408:
			func_566(&(Local_243.f_1005), &(Local_243.f_13), &uVar4, iParam0, 0, iParam4, func_564(), iParam1 | 2048, iVar0, iVar2, iVar1, iVar3, 1);
			break;
		case 1619021308:
			func_567(&(Local_243.f_1005), &(Local_243.f_13), &uVar4, iParam0, 0, iParam4, func_564(), iParam1, iVar0, iVar2, iVar1, iVar3, 1);
			break;
		case 524681:
			func_568(&(Local_243.f_1005), &(Local_243.f_1020), iParam0, 0, iParam4, func_564(), Local_243.f_1259, 0, 0, 0, 0);
			break;
		case -1828147615:
			func_569(&(Local_243.f_1005), &(Local_243.f_1020), &(Local_243.f_13), &uVar4, iParam0, 0, iParam4, func_564(), 404851220, 0, iParam1, iVar0, iVar2, iVar1, iVar3, 1);
			break;
		case 227643027:
			func_570(&(Local_243.f_1005), &(Local_243.f_1020), &(Local_243.f_13), iParam0, &uVar4, 0, iParam4, func_564(), 404851220, 0, 0, 1, 0, iParam1, 1, 551037070, joaat("COLOR_RED"), joaat("COLOR_PURE_WHITE"), joaat("COLOR_PURE_WHITE"));
			break;
		case 1086838518:
			func_565(&(Local_243.f_1005), &(Local_243.f_13), &uVar4, iParam1, 1);
			func_568(&(Local_243.f_1005), &(Local_243.f_1020), iParam0, 0, iParam4, func_564(), Local_243.f_1259, 0, 0, 0, 0);
			break;
	}
}

void func_277()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	float fVar7;
	bool bVar8;
	struct<5> Var9;
	vector3 vVar14;

	if (Local_243.f_9 == -785841056)
	{
		return;
	}
	iVar0 = Local_0.f_10;
	if (func_181(256))
	{
		iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
		if (_NAMESPACE26::_0x0F99F6436528A089(iVar1))
		{
			iVar2 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar1);
			if (iVar2 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
			{
				iVar0 = iVar2;
			}
		}
		else
		{
			iVar0 = PLAYER::PLAYER_ID();
		}
	}
	if (iVar0 == 255)
	{
		iVar0 = PLAYER::PLAYER_ID();
	}
	if (iVar0 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		iVar3 = PLAYER::GET_PLAYER_PED(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar3, false, false) };
			fVar7 = 0f;
			bVar8 = true;
			if (!func_571(&vVar4, &fVar7, &bVar8))
			{
				if (((func_36(&Var9, Local_243.f_1) && func_44(&Var9)) && func_45(&Var9, Local_243.f_2)) && func_572(&Var9))
				{
					func_143(Var9, 2060397848, &vVar4, 1);
					func_142(Var9, -185561597, &fVar7, 1);
				}
			}
			Local_243.f_1402 = { vVar4 };
			Local_243.f_1416 = PED::CLONE_PED(iVar3, 0f, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(Local_243.f_1416))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_243.f_1416))
				{
					PED::RESURRECT_PED(Local_243.f_1416);
				}
				else
				{
					ENTITY::_SET_ENTITY_HEALTH(Local_243.f_1416, 100, 0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_243.f_1416, true);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_243.f_1416, 0, 1);
				ENTITY::SET_ENTITY_COORDS(Local_243.f_1416, vVar4, true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Local_243.f_1416, fVar7);
				if (bVar8)
				{
					ENTITY::_0x9587913B9E772D29(Local_243.f_1416, 1);
				}
				ENTITY::FREEZE_ENTITY_POSITION(Local_243.f_1416, true);
				ENTITY::SET_ENTITY_COLLISION(Local_243.f_1416, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_243.f_1416, true);
				ENTITY::SET_ENTITY_VISIBLE(Local_243.f_1416, false);
				PED::CLEAR_PED_DECORATIONS(Local_243.f_1416);
				PED::_0x2208438012482A1A(Local_243.f_1416, true, true);
				if (func_573())
				{
					Local_243.f_1415 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
					if (CAM::DOES_CAM_EXIST(Local_243.f_1415))
					{
						vVar14 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(Local_243.f_1416, true, false), ENTITY::GET_ENTITY_HEADING(Local_243.f_1416), 0.3f, 2f, 0.3f) };
						CAM::SET_CAM_COORD(Local_243.f_1415, vVar14);
						CAM::POINT_CAM_AT_ENTITY(Local_243.f_1415, Local_243.f_1416, 0.3f, 0f, 0.3f, true);
						CAM::SET_CAM_FOV(Local_243.f_1415, 35f);
						ENTITY::SET_ENTITY_HEADING(Local_243.f_1416, func_574(vVar4, vVar14, 1));
					}
				}
			}
		}
	}
}

void func_278()
{
	if (func_134(268435456))
	{
		return;
	}
	if (Local_0.f_12 == 0)
	{
		func_575();
		if (Local_243.f_9 == 1038512660)
		{
			if (func_181(256))
			{
				func_43(4096);
			}
			else
			{
				func_43(16384);
			}
		}
		else if (Local_243.f_9 == -785841056)
		{
			if (func_134(32768))
			{
				func_43(4096);
			}
			else
			{
				func_43(16384);
			}
		}
		else if (Local_0.f_10 == PLAYER::PLAYER_ID() || func_134(8192))
		{
			func_43(4096);
		}
		else
		{
			if ((Local_50[Local_243.f_1332 /*6*/])->f_2 <= 0f)
			{
				func_576((func_192(2) - 1));
			}
			func_43(16384);
		}
		if (func_134(4096) || func_134(8192))
		{
			func_577(Local_243.f_1, Local_243.f_3, Local_243.f_1333);
		}
		else if (func_134(16384))
		{
			func_578(Local_243.f_1, Local_243.f_3, Local_243.f_1333);
		}
		func_579();
	}
	if (Local_0.f_12 == 4)
	{
		func_43(16384);
	}
	func_43(268435456);
}

void func_279()
{
}

void func_280()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if ((Local_1706.f_51[iVar0 /*22*/])->f_21 > 0)
		{
			iVar1 = 0;
			while (iVar1 <= ((Local_1706.f_51[iVar0 /*22*/])->f_21 - 1))
			{
				if ((NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&((Local_1706.f_51[iVar0 /*22*/])->f_1[iVar1 /*6*/])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&((Local_1706.f_51[iVar0 /*22*/])->f_1[iVar1 /*6*/]))) && ENTITY::IS_ENTITY_VISIBLE(&((Local_2503.f_42[iVar0 /*56*/])->f_1[iVar1 /*17*/])))
				{
					ENTITY::SET_ENTITY_VISIBLE(&((Local_2503.f_42[iVar0 /*56*/])->f_1[iVar1 /*17*/]), false);
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_281()
{
	if ((func_157(Local_243.f_1332) && func_292(Local_243.f_1384)) && Local_0.f_12 == 0)
	{
		if (!func_18(Local_243, 4096))
		{
			func_246(Local_243, 4096);
		}
		if (!func_580())
		{
			func_246(Local_243, 16384);
		}
	}
	else
	{
		if (func_18(Local_243, 4096))
		{
			func_581(Local_243, 4096);
		}
		if (func_18(Local_243, 16384))
		{
			func_581(Local_243, 16384);
		}
	}
}

bool func_282()
{
	return func_18(Local_243, 4096);
}

int func_283()
{
	switch (Local_243.f_1)
	{
		case 7:
		case 12:
		case 13:
		case 14:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_284()
{
	return 0;
}

void func_285()
{
	func_582(&(Local_243.f_1020), 1, 0);
	func_583(&(Local_243.f_13));
	func_252(&(Local_243.f_1005), 1);
}

int func_286()
{
	struct<8> Var0;
	char cVar8[64];
	struct<8> Var16;
	char cVar24[64];
	bool bVar32;
	struct<8> Var33;
	char cVar41[64];

	if (func_62(255))
	{
		return 0;
	}
	_NAMESPACE71::_0xDD1232B332CBB9E7(11, 1, 0);
	if (func_584())
	{
		return 1;
	}
	Var0 = { func_521() };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { Local_243.f_1346 };
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
		{
			Var0 = { Local_243.f_1338 };
		}
	}
	if (Local_0.f_12 != 0)
	{
		StringCopy(&cVar8, func_585(), 64);
		if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar8))
		{
			if (Local_243.f_9 == -785841056)
			{
				StringCopy(&cVar8, "FME_SHARD_OUTRO_TITLE_OVER_POSSE_VERSUS", 64);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_316()))
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar8))
			{
				Local_243.f_1287 = func_529(MISC::_CREATE_VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_OVER", &Var0), func_316(), func_586(), func_587());
			}
			else
			{
				Local_243.f_1287 = func_529(&cVar8, func_316(), func_586(), func_587());
			}
		}
		else if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar8))
		{
			Local_243.f_1287 = func_529(MISC::_CREATE_VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_OVER", &Var0), func_588(Local_0.f_12), func_586(), func_587());
		}
		else
		{
			Local_243.f_1287 = func_529(&cVar8, func_588(Local_0.f_12), func_586(), func_587());
		}
	}
	else if (Local_243.f_9 != -785841056)
	{
		Local_243.f_1287 = func_589(MISC::_CREATE_VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_OVER", &Var0), func_586(), func_587());
	}
	else if (func_134(4096))
	{
		Var16 = { func_590() };
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var16))
		{
			StringCopy(&Var16, "FME_SHARD_OUTRO_TITLE_WINNER", 64);
		}
		StringCopy(&cVar24, func_591(), 64);
		if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar24))
		{
			Local_243.f_1287 = func_529(&Var16, func_314(func_313(&(Local_243.f_13), 0)), func_586(), func_587());
		}
		else
		{
			Local_243.f_1287 = func_528(&Var16, func_314(func_313(&(Local_243.f_13), 0)), &cVar24, func_586(), func_587());
		}
	}
	else
	{
		bVar32 = false;
		Var33 = { func_592() };
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var33))
		{
			if (!func_180(4096, Local_243.f_1332) && Local_243.f_1333 >= 0)
			{
				bVar32 = true;
			}
			else if (Local_243.f_9 == -785841056)
			{
				StringCopy(&Var33, func_585(), 64);
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var33))
				{
					StringCopy(&Var33, "FME_SHARD_OUTRO_TITLE_OVER_POSSE_VERSUS", 64);
				}
			}
			else
			{
				StringCopy(&Var33, "FME_SHARD_OUTRO_TITLE_OVER", 64);
			}
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(func_317(Local_243.f_1406, Local_243.f_1414, func_313(&(Local_243.f_13), 0))))
		{
			if (bVar32)
			{
				Local_243.f_1287 = func_589(MISC::_CREATE_VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_PLACED", func_593(Local_243.f_1333)), func_586(), func_587());
			}
			else
			{
				Local_243.f_1287 = func_589(&Var33, func_586(), func_587());
			}
		}
		else
		{
			StringCopy(&cVar41, func_591(), 64);
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar41))
			{
				if (bVar32)
				{
					Local_243.f_1287 = func_529(MISC::_CREATE_VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_PLACED", func_593(Local_243.f_1333)), func_317(Local_243.f_1406, Local_243.f_1414, func_313(&(Local_243.f_13), 0)), func_586(), func_587());
				}
				else
				{
					Local_243.f_1287 = func_529(&Var33, func_317(Local_243.f_1406, Local_243.f_1414, func_313(&(Local_243.f_13), 0)), func_586(), func_587());
				}
			}
			else if (bVar32)
			{
				Local_243.f_1287 = func_528(MISC::_CREATE_VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_PLACED", func_593(Local_243.f_1333)), func_317(Local_243.f_1406, Local_243.f_1414, func_313(&(Local_243.f_13), 0)), &cVar41, func_586(), func_587());
			}
			else
			{
				Local_243.f_1287 = func_528(&Var33, func_317(Local_243.f_1406, Local_243.f_1414, func_313(&(Local_243.f_13), 0)), &cVar41, func_586(), func_587());
			}
		}
	}
	return 1;
}

void func_287(var uParam0)
{
	if (uParam0->f_11 >= 0)
	{
		if (!AUDIO::_0x84848E1C0FC67DBB(uParam0->f_11))
		{
			AUDIO::_0x3210BCB36AF7621B(uParam0->f_11);
		}
		AUDIO::RELEASE_SOUND_ID(uParam0->f_11);
		uParam0->f_11 = -1;
	}
}

int func_288()
{
	return 7000;
}

bool func_289()
{
	vector3 vVar0;
	bool bVar3;

	if (Local_243.f_9 == -785841056)
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_243.f_1416))
	{
		return true;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_243.f_1416, true, false) };
	if (func_68(vVar0))
	{
		return true;
	}
	if (func_62(255))
	{
		return false;
	}
	if (!STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x387AD749E3B69B70(vVar0, func_594(Local_243.f_1415), 60f, 0);
		return false;
	}
	bVar3 = true;
	if (!STREAMING::_0x0909F71B5C070797())
	{
		bVar3 = false;
	}
	STREAMING::_0xA8432A14D4DC2101(vVar0);
	if (!STREAMING::_0xDA8B2EAF29E872E2(vVar0))
	{
		bVar3 = false;
	}
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar0);
	if (!ENTITY::_0x6BFBDC46139C45AB(vVar0))
	{
		bVar3 = false;
	}
	if (!bVar3)
	{
		return false;
	}
	if (!func_595())
	{
		bVar3 = false;
	}
	return bVar3;
}

bool func_290(int iParam0)
{
	int iVar0;

	iVar0 = 6;
	if (func_503(iParam0))
	{
		iVar0 = _NAMESPACE71::_0x59FA676177DBE4C9(iParam0);
	}
	return iVar0 != 6;
}

void func_291()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if ((((!func_65(65536) && Local_243.f_9 == -785841056) && func_282()) && func_531()) && func_472(Local_243.f_1289))
	{
		bVar0 = false;
		if (func_275() & 1024 == 1024)
		{
			bVar0 = true;
		}
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 <= (Local_243.f_1333 - 1))
		{
			iVar1 = (Local_243.f_13.f_210[iVar2 /*23*/])->f_14;
			if (func_596(iVar1, bVar0, 0))
			{
				Local_243.f_1289 = func_473("FME_HELP_SCORE_SURPASS");
				func_172(65536);
			}
			else
			{
				iVar2++;
			}
		}
	}
}

int func_292(int iParam0)
{
	switch (iParam0)
	{
		case joaat("timer"):
			return 0;
		default:
			break;
	}
	return 1;
}

int func_293()
{
	return 0;
}

bool func_294()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

bool func_295()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(7);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) <= 4);
}

bool func_296()
{
	return (func_597() && func_598());
}

void func_297()
{
	if (!UIAPPS::_IS_ANY_APP_RUNNING())
	{
		return;
	}
	UIAPPS::_CLOSE_ALL_APPS();
}

void func_298(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

int func_299()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 1;
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			iVar2 = PLAYER::_0xF49F14462F0AE27C(iVar1);
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && ENTITY::IS_ENTITY_VISIBLE(iVar2)) && func_599(iVar2, Local_243.f_1402, 1) < 10f)
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar2, false);
				iVar0 = 0;
			}
		}
		iVar3++;
	}
	return iVar0;
}

Vector3 func_300(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_600(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3)) };
	vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3);
	return vParam0 + vVar0;
}

void func_301()
{
	return;
}

void func_302()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			if (iVar0 == PLAYER::PLAYER_ID())
			{
				NETWORK::SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(false);
			}
			else
			{
				NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(iVar0, false);
			}
		}
		iVar1++;
	}
}

void func_303()
{
	if (!ANIMSCENE::_0x25557E324489393C(Local_243.f_1337))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_243.f_1416))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_243.f_1337, ENTITY::GET_ENTITY_COORDS(Local_243.f_1416, true, false), ENTITY::GET_ENTITY_ROTATION(Local_243.f_1416, 2), 2);
	ANIMSCENE::START_ANIM_SCENE(Local_243.f_1337);
}

int func_304()
{
	return 0;
}

int func_305()
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
	{
		case 0:
			return -1639456476 /* GXTEntry: "Shoot \'Em Up" */;
		case 1:
			return -2106738342 /* GXTEntry: "Spit" */;
		case 2:
			return 425751659 /* GXTEntry: "Thumbs Up" */;
		case 3:
			return -339257980 /* GXTEntry: "Wave" */;
		case 4:
			return -822629770 /* GXTEntry: "Nod Head" */;
		case 5:
			return -653113914 /* GXTEntry: "Shake Head" */;
		case 6:
			return 354512356 /* GXTEntry: "Damn You" */;
		case 7:
			return -166523388 /* GXTEntry: "What\'s The Smell?" */;
		default:
			break;
	}
	return 425751659 /* GXTEntry: "Thumbs Up" */;
}

int func_306(int iParam0)
{
	switch (iParam0)
	{
		case -1639456476: /* GXTEntry: "Shoot \'Em Up" */
			return 1500;
		case -2106738342: /* GXTEntry: "Spit" */
			return 1800;
		case 425751659: /* GXTEntry: "Thumbs Up" */
			return 1500;
		case -339257980: /* GXTEntry: "Wave" */
			return 1500;
		case -822629770: /* GXTEntry: "Nod Head" */
			return 1800;
		case -653113914: /* GXTEntry: "Shake Head" */
			return 1800;
		case 354512356: /* GXTEntry: "Damn You" */
			return 1400;
		case -166523388: /* GXTEntry: "What\'s The Smell?" */
			return 1800;
		default:
			break;
	}
	return 1500;
}

int func_307(int iParam0)
{
	switch (iParam0)
	{
		case -2106738342: /* GXTEntry: "Spit" */
		case -1639456476: /* GXTEntry: "Shoot \'Em Up" */
		case -402959: /* GXTEntry: "Hell Yeah" */
		case 486225122: /* GXTEntry: "Point" */
		case 1927505461: /* GXTEntry: "Blow Kiss" */
			return 1;
		case -339257980: /* GXTEntry: "Wave" */
		case 425751659: /* GXTEntry: "Thumbs Up" */
			return 3;
		case -822629770: /* GXTEntry: "Nod Head" */
		case -653113914: /* GXTEntry: "Shake Head" */
		case -110352861: /* GXTEntry: "I\'m Hit" */
		case 445839715: /* GXTEntry: "Yeehaw" */
		case 803206066: /* GXTEntry: "Point and Laugh" */
			return 0;
		case -166523388: /* GXTEntry: "What\'s The Smell?" */
		case -23808358:
		case 354512356: /* GXTEntry: "Damn You" */
		case 1533402397: /* GXTEntry: "Bring It On" */
			return 2;
		default:
			break;
	}
	return -1;
}

void func_308(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	if (!func_601(iParam1))
	{
		return;
	}
	TASK::_TASK_EMOTE(iParam0, uParam5, iParam2, iParam1, iParam3, iParam4, 0, 0);
}

char* func_309()
{
	return "";
}

char* func_310()
{
	return "";
}

char* func_311()
{
	return "";
}

char* func_312()
{
	return "";
}

float func_313(var uParam0, int iParam1)
{
	return (uParam0->f_210[iParam1 /*23*/])->f_5;
}

char* func_314(float fParam0)
{
	char* sVar0;

	sVar0 = func_602(-1513842258 /* GXTEntry: "Condor Egg" */, 816454899, 1, 0);
	return MISC::_CREATE_VAR_STRING(2, "FME_CE_SHARD_OUTRO_PRIMARY_WON", sVar0);
}

void func_315(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_3))
	{
		uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "transitionData");
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_4))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_4, sParam1);
	}
	else
	{
		uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "gamerTag", sParam1);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_5))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_5, sParam2);
	}
	else
	{
		uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "teamName", sParam2);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_12))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_12, iParam7);
	}
	else
	{
		uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3, "teamNameColor", iParam7);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_6[0])))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&(uParam0->f_6[0]), sParam3);
	}
	else
	{
		uParam0->f_6[0] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info0", sParam3);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_6[1])))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&(uParam0->f_6[1]), sParam4);
	}
	else
	{
		uParam0->f_6[1] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info1", sParam4);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_6[2])))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&(uParam0->f_6[2]), sParam5);
	}
	else
	{
		uParam0->f_6[2] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info2", sParam5);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_6[3])))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&(uParam0->f_6[3]), sParam6);
	}
	else
	{
		uParam0->f_6[3] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info3", sParam6);
	}
}

char* func_316()
{
	return MISC::_CREATE_VAR_STRING(2, "FME_CE_SHARD_OUTRO_PRIMARY_EXPIRED");
}

char* func_317(var uParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9)
{
	return MISC::_CREATE_VAR_STRING(2, "FME_CE_SHARD_OUTRO_PRIMARY_FAILED");
}

void func_318(int iParam0)
{
}

int func_319()
{
	return 0;
}

int func_320(var uParam0)
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(uParam0->f_15, 0))
	{
		return 1;
	}
	if (!UISTATEMACHINE::_0xF7C180F57F85D0B8(*uParam0))
	{
		func_226(uParam0);
		return 0;
	}
	UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(*uParam0, uParam0->f_2);
	MISC::SET_BIT(&(uParam0->f_15), 0);
	return 1;
}

int func_321()
{
	return 0;
}

int func_322()
{
	return joaat("leaderboard");
}

char* func_323(int iParam0)
{
	return MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(iParam0), 0);
}

bool func_324(int iParam0)
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

int func_325(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_603(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_604(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_326(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_324(iParam0))
	{
		return;
	}
	iVar0 = func_605(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1949759)[iVar0 /*23*/])->f_3, sParam1);
}

bool func_327(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_324(iParam0))
	{
		return false;
	}
	iVar0 = func_605(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

void func_328(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_324(iParam0))
	{
		return;
	}
	iVar0 = func_605(iParam0);
	if (bParam1)
	{
		func_606(iParam0, 4);
		if (bParam3)
		{
			func_607(iVar0, 1);
		}
		func_608(iVar0, 1);
	}
	else
	{
		func_609(iParam0, 4);
		func_608(iVar0, 0);
	}
}

void func_329(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_324(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_605(*uParam0);
	if (((*Global_1949759)[iVar0 /*23*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_610(iVar0);
	*uParam0 = 0;
}

int func_330()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= (Local_2503.f_818 - 1))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&((Local_2503.f_753[iVar0 /*2*/])->f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if ((Local_1706.f_51[iVar0 /*22*/])->f_21 > 0)
		{
			iVar1 = 0;
			while (iVar1 <= ((Local_1706.f_51[iVar0 /*22*/])->f_21 - 1))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&((Local_1706.f_51[iVar0 /*22*/])->f_1[iVar1 /*6*/])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&((Local_1706.f_51[iVar0 /*22*/])->f_1[iVar1 /*6*/])))
				{
					func_611((Local_1706.f_51[iVar0 /*22*/])->f_1[iVar1 /*6*/]);
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_1706.f_346) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_1706.f_346))
	{
		func_611(&(Local_1706.f_346));
	}
	func_612();
	return 1;
}

int func_331(bool bParam0)
{
	if (!func_158(joaat("freemode"), bParam0))
	{
		return 0;
	}
	return 1;
}

void func_332(int iParam0)
{
	func_430(&(Local_243.f_1334), iParam0);
}

void func_333(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_613(&(Global_1132968->f_5525), bParam1);
		func_169(113);
	}
	else
	{
		func_170(113);
	}
}

void func_334(int iParam0)
{
	if (func_614(&Global_1903002, iParam0))
	{
		func_615(Global_1903002, iParam0);
	}
}

void func_335(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	func_616(iVar0, iParam0);
	func_617(iVar0, iParam0);
}

bool func_336()
{
	return func_618(256);
}

void func_337()
{
	if (func_618(256))
	{
		func_619(256);
	}
}

void func_338(int iParam0, int iParam1)
{
	func_430(&((Local_50[iParam1 /*6*/])->f_1), iParam0);
}

int func_339(int iParam0)
{
	int iVar0;

	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iParam0))
	{
		return 0;
	}
	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 0;
	}
	if (func_620(iVar0, 0, 1))
	{
		return 0;
	}
	if (func_621(iVar0, 32))
	{
		return 1;
	}
	return 0;
}

void func_340(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;

	if (func_336())
	{
		return;
	}
	if (iParam0 == 1)
	{
		if (!func_621(PLAYER::PLAYER_ID(), 32))
		{
			func_622(32);
			if (iParam2 == 0)
			{
				sVar0 = MISC::_CREATE_VAR_STRING(2, "NG_PP_FF_ON");
				func_623(sVar0, -2, 0, 0, 0, 1);
			}
			if (iParam1 == 1)
			{
				func_624(iParam0, _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
			}
		}
	}
	else if (func_621(PLAYER::PLAYER_ID(), 32))
	{
		func_625(32);
		if (iParam2 == 0)
		{
			sVar0 = MISC::_CREATE_VAR_STRING(2, "NG_PP_FF_OFF");
			func_623(sVar0, -2, 0, 0, 0, 1);
		}
		if (iParam1 == 1)
		{
			func_624(iParam0, _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
		}
	}
}

void func_341()
{
	func_169(88);
}

void func_342(bool bParam0)
{
	if (bParam0)
	{
		func_170(48);
	}
	else
	{
		func_169(48);
	}
}

void func_343(bool bParam0)
{
	if (bParam0)
	{
		func_170(105);
		if (!Global_1275573->f_12)
		{
			func_626(16);
		}
	}
	else
	{
		func_169(105);
		if (!Global_1275573->f_12)
		{
			func_626(16);
		}
	}
}

void func_344(bool bParam0)
{
	if (bParam0)
	{
	}
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(15, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(6, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(1, bParam0);
}

void func_345(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_627(Global_1939178, 8388608);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_628(Global_1939178, 8388608);
	}
	MISC::ENABLE_DISPATCH_SERVICE(15, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(6, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(7, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(9, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(10, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(11, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(12, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(13, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(14, bParam0);
}

char* func_346()
{
	return "FMUI";
}

int func_347(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	bool bVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		bVar0 = true;
	}
	if (INVENTORY::_0xB881CA836CC4B6D4(&uParam4))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		WEAPON::_0xEC1F85DA51D3D6C4(PLAYER::PLAYER_PED_ID(), &uParam0, &uParam4);
		return 1;
	}
	return 0;
}

void func_348(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_629(iParam0, &iVar0, &iVar1);
	if (!func_630(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_631(iVar0, iVar1);
}

void func_349()
{
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_243.f_1405))
	{
		func_632(Local_243.f_1405);
	}
}

void func_350()
{
	if (func_290(Local_243.f_1291))
	{
		_NAMESPACE71::_0x2F901291EF177B02(Local_243.f_1291, 0);
	}
}

void func_351()
{
	func_329(&(Local_243.f_1296), 1, 1);
	func_329(&(Local_243.f_1297), 1, 1);
}

void func_352()
{
	if (func_290(Local_243.f_1289))
	{
		_NAMESPACE71::_0x2F901291EF177B02(Local_243.f_1289, 0);
	}
}

void func_353()
{
	if (func_290(Local_243.f_1287))
	{
		_NAMESPACE71::_0x2F901291EF177B02(Local_243.f_1287, 0);
	}
}

void func_354()
{
	if (func_290(Local_243.f_1288))
	{
		_NAMESPACE71::_0x2F901291EF177B02(Local_243.f_1288, 0);
	}
	Local_243.f_1288 = 0;
	Local_243.f_1266 = 0;
}

void func_355()
{
	if (func_290(Local_243.f_1290))
	{
		_NAMESPACE71::_0x2F901291EF177B02(Local_243.f_1290, 0);
	}
}

void func_356()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_543(iVar0);
		iVar0++;
	}
}

int func_357()
{
	return Global_1099294->f_26.f_12;
}

void func_358(int iParam0)
{
	Global_1099294->f_26.f_12 = iParam0;
}

void func_359(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_358(iParam0);
	if (!func_633(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_634(128) && !func_635(18))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_636() == 4)
	{
		func_169(17);
	}
	func_173(1024);
}

bool func_360(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_637(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

bool func_361(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_637(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_362(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (!func_73(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_361(Param0) && !func_360(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_638(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_637(Param0) == 3)
		{
			func_639(1, -1706799532);
		}
		else if (func_637(Param0) == 4)
		{
			func_639(0, -1706799532);
		}
	}
	if (func_637(Param0) == 3 || (func_637(Param0) == 1 && STATS::_0x01F4D242765C6B24(func_638(Param0))))
	{
		if (iParam3 != -1)
		{
			func_640(Param0, iParam3, iParam4);
		}
		else
		{
			func_640(Param0, 2, iParam4);
		}
	}
	func_641(Param0, 0);
	if (func_74(func_373(0), Param0))
	{
		func_345(1);
		func_642(0);
		func_643(0);
		func_644(1);
	}
	func_645(Param0);
	Global_1051202->f_44.f_1 = 1;
	iVar0 = func_646(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		MISC::_0x1096603B519C905F("");
	}
}

void func_363(int iParam0, struct<2> Param1)
{
	struct<2> Var0;

	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	func_647(Param1, &Var0);
	func_648(0);
	func_649(1);
	if (func_650((Global_1185132->f_66[iParam0 /*20*/])->f_3) == -785841056)
	{
		SCRIPTS::_0x50B72A754EE64A71(784116709);
		STATS::_0xE5A680A5D8B1F687(0);
	}
	else
	{
		SCRIPTS::_0x50B72A754EE64A71(1638906956);
	}
}

void func_364(int iParam0)
{
	int iVar0;
	int iVar1;

	POSSE::_0xC08AFF658B2E51DA(&iVar0);
	if (iVar0 != 0)
	{
		func_484(&(Global_1182289->f_3), 32);
		func_484(&(Global_1182289->f_4), 12);
		Global_1182289->f_496 = iVar0;
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()) && _NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			func_484(&(Global_1182289->f_4), 2);
		}
		POSSE::_0xC08BFF658B2E51DA(0);
		Global_1182289->f_5[5] = 0;
		func_484(Global_1182289->f_5[5], 1);
	}
	Global_1182289->f_5[3] = 0;
	func_484(Global_1182289->f_5[3], 1);
	iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar1))
	{
		func_484(Global_1182289->f_5[3], 6);
		return;
	}
	if (!_NAMESPACE26::_0x0F99F6436528A089(iVar1))
	{
		func_484(Global_1182289->f_5[3], 6);
		return;
	}
	_NAMESPACE26::_0x0A04A07BC3074EDB(iParam0);
}

void func_365(int iParam0)
{
	func_146(&(Global_1070356->f_27136.f_19.f_1), iParam0);
}

void func_366(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_367(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1695952109;
		case 1:
			return -692671154;
		case 2:
			return 2057649523;
		case 3:
			return 1248369828;
		case 4:
			return 1268095596;
		case 5:
			return -538315284;
		case 6:
			return 1218921439;
		case 7:
			return -1191553031;
		case 8:
			return 1687465887;
		case 9:
			return 1381829424;
		case 10:
			return -348163890;
		case 11:
			return -1538366747;
		case 12:
			return 1979614790;
		case 13:
			return -1833360518;
		case 14:
			return 425959891;
		case 15:
			return 256247696;
		case 16:
			return 413811142;
		case 17:
			return -1515541953;
		case 18:
			return -1774701585;
		case 19:
			return 89029101;
		case 20:
			return -43053691;
		case 21:
			return 2066571170;
		case 22:
			return -1890596655;
		case 23:
			return 2025794970;
		case 24:
			return 685218342;
		case 25:
			return 733276510;
		case 26:
			return -565871549;
		case 27:
			return 1497039912;
		case 28:
			return 796262628;
		case 29:
			return -1084127701;
		case 30:
			return -14916973;
		case 31:
			return -1851356988;
		case 32:
			return -335517339;
		case 33:
			return 612244624;
		case 34:
			return 2019912578;
		case 35:
			return -1639163394;
		case 36:
			return 1763905867;
		case 37:
			return 810522312;
		case 38:
			return -570563579;
		case 39:
			return 137865554;
		case 40:
			return 766008034;
		case 41:
			return -531292328;
		case 42:
			return 536703056;
		case 43:
			return -1848254013;
		case 44:
			return -767930282;
		case 45:
			return 1310428614;
		case 46:
			return -355516948;
		case 47:
			return -1198443210;
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

int func_368(var uParam0, int iParam1)
{
	if (DATAFILE::_DATAFILE_REGISTER_QUERY(*uParam0, iParam1, func_651(iParam1)))
	{
	}
	return 1;
}

int func_369(int iParam0)
{
	vector3 vVar0;
	int iVar5;

	if (func_404(&vVar0))
	{
		vVar0.f_2 = iParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar0.f_1), &vVar0))
		{
			iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(vVar0.x, vVar0.y);
		}
	}
	return iVar5;
}

int func_370(var uParam0)
{
	return func_652(*uParam0, 733276510);
}

int func_371(var uParam0)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_404(&Var0))
	{
		Var0.f_2 = 1497039912;
		Var0.f_3 = *uParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			func_40(Var0, -1833360518, &iVar5, 0);
		}
	}
	return iVar5;
}

int func_372(var uParam0)
{
	return func_652(*uParam0, 2025794970);
}

struct<2> func_373(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

int func_374(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -1494363065;
		case 2:
			return -514316475;
		case 3:
			return 1257949393;
		case 4:
			return -1967078622;
		case 5:
			return -1854780893;
		case 6:
			return 477974086;
		case 7:
			return 618068466;
		case 8:
			return 499656970;
		case 9:
			return 1791948823;
		case 10:
			return -1634863390;
		case 11:
			return -1296513906;
		case 12:
			return -1030655937;
		case 13:
			return -1783181138;
		case 14:
			return 1250422342;
		case 15:
			return -634665876;
		case 16:
			return -1679013564;
		case 17:
			return -706075066;
		case 18:
			return -1152882498;
		case 19:
			return 2108116481;
		case 20:
			return -86995487;
		case 21:
			return -1315007749;
		case 22:
			return 449057693;
		case 23:
			return 81846499;
		case 24:
			return 385589027;
		case 25:
			return 1951290581;
		case 26:
			return 1316486837;
		case 27:
			return 120448958;
		case 28:
			return 1345888212;
		case 29:
			return 396837320;
		case 30:
			return -1408563730;
		case 31:
			return -757633599;
		case 32:
			return -1034424695;
		case 33:
			return 1841970554;
		case 34:
			return -789758703;
		case 35:
			return -210274020;
		case 36:
			return 633501950;
		case 37:
			return -1215742816;
		case 38:
			return 1971904853;
		case 39:
			return -1935655667;
		case 40:
			return 1898201469;
		case 41:
			return 300196727;
		case 42:
			return 242857368;
		case 43:
			return -1648877470;
		case 44:
			return -545299531;
		case 45:
			return -1598949067;
		case 46:
			return 478308321;
		case 47:
			return 440583097;
		case 48:
			return -1258163578;
		case 49:
			return -1376314322;
		case 50:
			return -1898294040;
		case 51:
			return -114666387;
		case 52:
			return 334700325;
		case 53:
			return -1399051227;
		case 54:
			return 1571096148;
		case 55:
			return 457103096;
		case 56:
			return -1930919582;
		case 57:
			return -985005225;
		case 58:
			return -1393798041;
		case 59:
			return 905156700;
		case 60:
			return 151445061;
		case 61:
			return -1983943039;
		case 62:
			return -1575244427;
		case 63:
			return -1930399868;
		case 64:
			return 353568324;
		case 65:
			return -469672732;
		case 66:
			return 1717813521;
		case 67:
			return 941437279;
		case 68:
			return -162385832;
		case 69:
			return -892848695;
		case 70:
			return -355092128;
		case 71:
			return 946732137;
		case 72:
			return -79139194;
		case 73:
			return 1382158532;
		case 74:
			return -379874384;
		case 75:
			return 2018657739;
		case 76:
			return 1427070667;
		case 77:
			return -682435976;
		case 78:
			return 1232224440;
		case 79:
			return 1889309476;
		case 80:
			return 1918774327;
		case 81:
			return -32613857;
		case 82:
			return 5611246;
		case 83:
			return 2078792148;
		case 84:
			return 630308764;
		case 85:
			return 1398164246;
		case 86:
			return 2002140369;
		case 87:
			return -1777144780;
		case 88:
			return -1098645728;
		case 89:
			return 640330073;
		case 90:
			return -1330378740;
		case 91:
			return -71551190;
		case 92:
			return 1248971179;
		case 93:
			return -2076515520;
		case 94:
			return 1872332830;
		case 95:
			return -326224139;
		case 96:
			return -2062348046;
		case 97:
			return -1924130593;
		case 98:
			return -479797100;
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

void func_375(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (&Global_1132968->f_4641.f_2[func_376(iParam0, 1) /*4*/] == bParam1)
	{
		return;
	}
	if (bParam2)
	{
		func_653(iParam0);
	}
	Global_1132968->f_4641.f_2[func_376(iParam0, 1) /*4*/] = bParam1;
}

int func_376(int iParam0, int iParam1)
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

int func_377()
{
	if (func_296())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_34) && !ENTITY::IS_ENTITY_DEAD(Global_34))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			if (func_654())
			{
				func_655();
				func_656();
				func_657();
			}
			else if (func_658(Global_34, 0, 0, 0) == joaat("weapon_fishingrod"))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				WEAPON::_0x94A3C1B804D291EC(Global_34, 0, 0, 0, 0);
			}
			return 0;
		}
	}
	return 1;
}

int func_378(int iParam0)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 0, &uVar0, 1, 1) != 0)
	{
		return 1;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 2, &uVar0, 1, 1) != 0)
	{
		return 1;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 1, &uVar0, 1, 1) != 0)
	{
		return 1;
	}
	if (PED::_0x758F081DB204DDDE(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_379(var uParam0, bool bParam1)
{
	if (bParam1 || !func_380(uParam0))
	{
		func_659(uParam0);
	}
}

bool func_380(var uParam0)
{
	return func_382(*uParam0, 1);
}

float func_381(var uParam0)
{
	if (!func_380(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_660(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_661() - uParam0->f_1);
}

bool func_382(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_383(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = uParam1;
	uParam0->f_1 = uParam2;
}

void func_384(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_2 = uParam1;
	uParam0->f_3 = uParam2;
}

void func_385(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_4 = uParam1;
	uParam0->f_5 = uParam2;
}

void func_386(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_6 = uParam1;
	uParam0->f_7 = uParam2;
}

void func_387(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_8 = uParam1;
	uParam0->f_9 = uParam2;
}

void func_388(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_10 = uParam1;
	uParam0->f_11 = uParam2;
}

void func_389(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	uParam0->f_3 = 1;
}

bool func_390(int iParam0)
{
	return func_395(&(Global_1954472->f_1465), iParam0, 1);
}

void func_391(var uParam0, struct<2> Param1, bool bParam3)
{
	int iVar0;
	struct<4> Var1;
	struct<2> Var5;

	func_662(uParam0, 84);
	if (!func_663(uParam0) && !bParam3)
	{
		return;
	}
	if (!func_73(Param1))
	{
		return;
	}
	iVar0 = Param1;
	if ((iVar0 != 7 && iVar0 != 2) && iVar0 != 6)
	{
		return;
	}
	if ((((((((((((((((SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("FM_Mission_Controller")) <= 0 && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("FM_Race_Controller")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("FM_Deathmatch_Controller")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("mp_intro")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_archery")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_challenges")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_condor_egg")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_dead_drop")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_escaped_convicts")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_golden_hat")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_hot_property")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_king_of_the_castle")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_king_of_the_rails")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_round_up")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_supply_train")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_treasure_hunt")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_wreckage")) <= 0)
	{
		return;
	}
	if (Global_1132968->f_5525)
	{
		func_613(&(Global_1132968->f_5525), 1);
	}
	func_664(&(Global_1132968->f_5525));
	func_665(uParam0);
	func_666();
	func_667(0);
	Global_1132968->f_5525 = { *uParam0 };
	Global_1132968->f_5525.f_13 = { Param1 };
	Global_1132968->f_5525 = 1;
	if (INVENTORY::_0xB881CA836CC4B6D4(Global_17172.f_54.f_61[0 /*4*/]))
	{
		Var1 = { func_668(0, 1, 0, -1) };
	}
	func_672(&(Global_1132968->f_5525), func_669(&Var1, 0), func_670(&Var1, 0), -882137232, func_671(&Var1, 0));
	if (uParam0->f_10)
	{
		if (func_158(uParam0->f_54, uParam0->f_54.f_1))
		{
		}
		if (uParam0->f_54.f_2)
		{
			func_673();
		}
	}
	if (bParam3)
	{
		if (func_674(0) != 3)
		{
			func_675(1, uParam0->f_57);
		}
	}
	if (uParam0->f_1 && !uParam0->f_16.f_2)
	{
		Var5.f_1 = 0;
		if (uParam0->f_9)
		{
			Global_1132968->f_5525.f_51 = { uParam0->f_51 };
			Var5.f_1 = uParam0->f_51.f_1;
		}
		Var5 = uParam0->f_16.f_1;
		func_676(&Var5);
		if (!func_168(111, 255))
		{
			func_677();
		}
	}
	if (uParam0->f_3)
	{
		func_678(uParam0);
		func_679();
		func_680(0);
	}
	if (uParam0->f_6)
	{
		func_680(3);
	}
	if (uParam0->f_4)
	{
		func_680(1);
		func_681(uParam0->f_25, uParam0->f_25.f_1, uParam0->f_25.f_2);
		func_682(uParam0->f_25.f_3, 1);
		func_683(uParam0->f_25.f_4, 1);
		func_684(uParam0->f_25.f_5, 1);
	}
	else if (bParam3)
	{
		func_685();
	}
	if (uParam0->f_5)
	{
		func_680(2);
		func_686(0, uParam0->f_25.f_6, 1);
		func_686(2, uParam0->f_25.f_7, 1);
		func_686(1, uParam0->f_25.f_8, 1);
	}
	if (uParam0->f_7)
	{
		func_680(4);
	}
	if (uParam0->f_12)
	{
		func_680(5);
		func_687(&(uParam0->f_34[0 /*3*/]), (uParam0->f_34[0 /*3*/])->f_1, 0);
		func_687(&(uParam0->f_34[1 /*3*/]), (uParam0->f_34[1 /*3*/])->f_1, 1);
		func_687(&(uParam0->f_34[2 /*3*/]), (uParam0->f_34[2 /*3*/])->f_1, 2);
		func_687(&(uParam0->f_34[3 /*3*/]), (uParam0->f_34[3 /*3*/])->f_1, 3);
		func_688();
	}
	if (uParam0->f_8)
	{
		func_680(6);
		func_689(Global_1954472->f_1465.f_117);
	}
	else if (uParam0->f_4)
	{
		func_689(Global_1954472->f_1449);
	}
	else if (bParam3)
	{
		func_689(Global_1954472->f_1449);
	}
}

int func_392(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_690(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_674(bParam1), iParam0, iParam3);
}

int func_393(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_691(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_692(iParam0, joaat("default"));
	if (iVar0 != 0)
	{
		return func_693(iParam0, iParam1, iParam2);
	}
	Var1 = { func_694(iParam0, 0, 1) };
	Var6 = { func_695(iParam0, Var1, Var1.f_4, 0) };
	return func_696(iParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

void func_394()
{
	func_170(115);
}

bool func_395(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_396()
{
	return Global_1099294->f_339;
}

bool func_397(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
	MISC::CLEAR_BIT((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_398(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
	MISC::SET_BIT((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

void func_399(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_400(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_401(int iParam0)
{
	return (Global_1099294->f_26.f_9 && iParam0) == iParam0;
}

bool func_402(int iParam0)
{
	return (Global_1099294->f_26.f_9 && iParam0) != 0;
}

int func_403(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (func_697(Local_1706.f_51[iVar0 /*22*/], 1) && &Local_2503.f_42[iVar0 /*56*/] == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_404(var uParam0)
{
	*uParam0 = Local_2503.f_37;
	uParam0->f_2 = 1695952109;
	uParam0->f_3 = Local_243.f_2;
	return (DATAFILE::_0x603AC35FD4602C76(Local_2503.f_37) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

int func_405()
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_1706.f_325))
	{
		return 1;
	}
	if (!func_699(&(Local_1706.f_325), 574926209, func_698(), 1, 0))
	{
		return 0;
	}
	ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_1706.f_325), func_698(), true, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_1706.f_325), func_700(), 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_1706.f_325), true);
	TASK::TASK_CARRIABLE(NETWORK::NET_TO_OBJ(Local_1706.f_325), 1185502896, 0, 0, 512);
	ENTITY::_0x18FF3110CF47115D(NETWORK::NET_TO_OBJ(Local_1706.f_325), 33, 1);
	return 1;
}

int func_406()
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_1706.f_326))
	{
		return 1;
	}
	if (!func_699(&(Local_1706.f_326), -1904939264, func_698(), 1, 0))
	{
		return 0;
	}
	ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_1706.f_326), func_698() + func_701(), true, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_1706.f_326), func_700(), 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_1706.f_326), true);
	return 1;
}

int func_407()
{
	int iVar0;
	int iVar1;

	if (!func_702(joaat("a_c_vulture_01")))
	{
		return 0;
	}
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_1706.f_342[iVar1])))
		{
			iVar0 = 0;
			if (func_704(Local_1706.f_342[iVar1], joaat("a_c_vulture_01"), func_703(iVar1), 0f, 1, 0, 1, 1, 1))
			{
				TASK::TASK_FLYING_CIRCLE(NETWORK::NET_TO_PED(&(Local_1706.f_342[iVar1])), 2f, func_703(iVar1) + Vector(40f, 0f, 0f), 0f, 7f);
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_408()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= (Local_2503.f_816 - 1))
	{
		if (!func_705(iVar1))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

int func_409()
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_1706.f_346))
	{
		return 1;
	}
	if (!func_702(joaat("a_c_californiacondor_01")))
	{
		return 0;
	}
	if (!func_704(&(Local_1706.f_346), joaat("a_c_californiacondor_01"), func_698() + Vector(70f, 0f, 0f), 0f, 1, 0, 1, 1, 1))
	{
		return 0;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_1706.f_346), true);
	TASK::TASK_FLYING_CIRCLE(NETWORK::NET_TO_PED(Local_1706.f_346), 1.5f, func_698() + Vector(40f, 0f, 0f), 0f, 250f);
	return 1;
}

int func_410()
{
	switch (Local_243.f_1)
	{
		case 10:
			switch (Local_243.f_2)
			{
				case 893024815:
					if (!func_706(0, joaat("guard"), 0))
					{
						return 0;
					}
					if (!func_706(1, joaat("guard"), 1))
					{
						return 0;
					}
					if (!func_706(2, -1553326850, 0))
					{
						return 0;
					}
					if (!func_706(3, joaat("defensive"), 0))
					{
						return 0;
					}
					if (!func_706(4, joaat("defensive"), 1))
					{
						return 0;
					}
					if (!func_706(5, 200161421, 0))
					{
						return 0;
					}
					break;
				case -348618743:
					if (!func_706(0, joaat("guard"), 0))
					{
						return 0;
					}
					if (!func_706(1, -1553326850, 0))
					{
						return 0;
					}
					if (!func_706(2, joaat("defensive"), 0))
					{
						return 0;
					}
					if (!func_706(3, 200161421, 0))
					{
						return 0;
					}
					break;
				case -1837356407:
					if (!func_706(0, joaat("guard"), 0))
					{
						return 0;
					}
					if (!func_706(1, -1553326850, 0))
					{
						return 0;
					}
					if (!func_706(2, -1553326850, 1))
					{
						return 0;
					}
					if (!func_706(3, joaat("defensive"), 0))
					{
						return 0;
					}
					if (!func_706(4, joaat("defensive"), 1))
					{
						return 0;
					}
					if (!func_706(5, 200161421, 0))
					{
						return 0;
					}
					break;
				default:
					break;
			}
			break;
		case 11:
			if (!func_706(0, -931055996, 0))
			{
				return 0;
			}
			if (!func_706(1, -931055996, 1))
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_411(var uParam0)
{
	return func_382(*uParam0, 2);
}

int func_412(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

void func_413(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_414(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_415()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= (Local_2503.f_819 - 1))
	{
		if (!func_707(iVar1))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

int func_416(int iParam0, int iParam1)
{
	Local_243.f_1328[iParam0] = &Local_243.f_1328[iParam0] + 1;
	if (&Local_243.f_1328[iParam0] >= iParam1)
	{
		Local_243.f_1328[iParam0] = 0;
		return 1;
	}
	return 0;
}

int func_417(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Local_243.f_9 == -785841056)
	{
		iVar0 = Local_243.f_6;
		if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar0))
		{
			return 1;
		}
		iVar1 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			return 1;
		}
	}
	iVar2 = func_192(2);
	if (iVar2 < Local_243.f_1274)
	{
		return 3;
	}
	if (iParam0 > 0 && iVar2 < iParam0)
	{
		return 3;
	}
	if (Local_243.f_1273 > 1 && func_420(2) < Local_243.f_1273)
	{
		return 2;
	}
	return 0;
}

void func_418(int iParam0)
{
	if (Local_0.f_12 != iParam0)
	{
		Local_0.f_12 = iParam0;
	}
}

void func_419()
{
}

int func_420(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar4);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2) && &Local_50[iVar4 /*6*/] >= iParam0)
		{
			iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
			{
				iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(iVar3);
				if (((!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar1) || !_NAMESPACE26::_0x0F99F6436528A089(iVar1)) || _NAMESPACE26::_0x149A2751AB66AC02(iVar1) <= 1) || _NAMESPACE26::_0x424B17A7DC5C90BC(iVar3))
				{
					iVar0++;
				}
			}
		}
		iVar4++;
	}
	return iVar0;
}

void func_421(int iParam0)
{
	if (Local_0.f_11 != iParam0)
	{
		Local_0.f_11 = iParam0;
	}
}

void func_422()
{
	Local_2503++;
	if (Local_2503 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		Local_2503 = 0;
	}
}

int func_423(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar2);
		if (((NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0) && &Local_50[iVar2 /*6*/] >= iParam0) && (Local_50[iVar2 /*6*/])->f_4 >= 1) && (Local_50[iVar2 /*6*/])->f_4 >= Local_243.f_1420)
		{
			iVar1++;
		}
		iVar2++;
	}
	return iVar1;
}

int func_424()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && func_545(iVar0, 64))
		{
			Local_1706 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_425()
{
	if (Local_1706.f_347 != 6 && ENTITY::IS_ENTITY_DEAD(Local_2503.f_835))
	{
		func_708(6);
		return;
	}
	switch (Local_1706.f_347)
	{
		case 0:
			func_708(1);
			break;
		case 1:
			if (Local_243.f_1267 < 300000)
			{
				func_708(2);
			}
			break;
		case 2:
			if (Local_243.f_1267 < 180000)
			{
				func_708(3);
			}
			break;
		case 3:
			if (Local_243.f_1267 < 60000)
			{
				func_708(4);
			}
			break;
		case 4:
			if (Local_243.f_1267 < 30000)
			{
				func_708(5);
			}
			break;
		case 5:
			if (ENTITY::GET_ENTITY_SPEED(Local_2503.f_835) < 0.25f)
			{
				func_708(6);
			}
			break;
	}
}

void func_426()
{
	int iVar0;

	func_709();
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (func_710(Local_1706.f_51[iVar0 /*22*/], Local_2503.f_42[iVar0 /*56*/]))
		{
			func_711(Local_1706.f_51[iVar0 /*22*/], Local_2503.f_42[iVar0 /*56*/]);
			if ((func_697(Local_1706.f_51[iVar0 /*22*/], 32) && !func_712(32)) && &Local_2503.f_42[iVar0 /*56*/] != -1553326850)
			{
				func_713(iVar0);
			}
		}
		iVar0++;
	}
}

void func_427()
{
	int iVar0;

	if (func_714(&(Local_1706.f_13)) < Local_1706.f_6)
	{
		return;
	}
	if (func_204() < 30000)
	{
		return;
	}
	if (func_715() == -1)
	{
		return;
	}
	func_176(0);
	iVar0 = func_716();
	if (iVar0 == 0)
	{
		return;
	}
	func_717(iVar0, -1);
	func_205(&(Local_1706.f_13));
	func_205(&(Local_1706.f_10));
}

void func_428(bool bParam0)
{
	*bParam0 = 0;
}

void func_429()
{
	func_718(Local_1706);
}

void func_430(var uParam0, int iParam1)
{
	func_719(uParam0, iParam1);
}

int func_431()
{
	return 0;
}

bool func_432(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

bool func_433(struct<2> Param0, bool bParam2)
{
	int iVar0;

	iVar0 = func_637(Param0);
	return (iVar0 == 5 || (iVar0 == 6 && bParam2));
}

bool func_434(struct<2> Param0)
{
	return func_637(Param0) == 7;
}

void func_435(int iParam0)
{
	if (!NETWORK::_0x255A5EF65EDA9167((Global_1102099->f_34.f_353[iParam0 /*6*/])->f_1))
	{
		return;
	}
	if (!&Global_1102099->f_34.f_353[iParam0 /*6*/])
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE((Global_1102099->f_34.f_353[iParam0 /*6*/])->f_1))
	{
		func_720(iParam0);
		return;
	}
	if ((Global_1102099->f_34.f_353[iParam0 /*6*/])->f_5 != -1)
	{
		if ((Global_1275573->f_21 - (Global_1102099->f_34.f_353[iParam0 /*6*/])->f_4) > (Global_1102099->f_34.f_353[iParam0 /*6*/])->f_5)
		{
			func_720(iParam0);
		}
		return;
	}
	if (func_361((Global_1102099->f_34.f_353[iParam0 /*6*/])->f_2))
	{
		return;
	}
	if (!func_73((Global_1102099->f_34.f_353[iParam0 /*6*/])->f_2))
	{
		func_720(iParam0);
		return;
	}
	if (!func_361((Global_1102099->f_34.f_353[iParam0 /*6*/])->f_2))
	{
		func_720(iParam0);
		return;
	}
	if (NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Global_1102099->f_34.f_546[iParam0 /*7*/]) != (Global_1102099->f_34.f_353[iParam0 /*6*/])->f_1)
	{
		func_720(iParam0);
		return;
	}
}

struct<7> func_436(int iParam0)
{
	struct<7> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

void func_437(int iParam0)
{
	int iVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (&Global_1102099->f_34.f_353[iParam0 /*6*/])
	{
		func_435(iParam0);
	}
	if (!(Global_1102099->f_34[iParam0 /*11*/])->f_6)
	{
		return;
	}
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		func_721(iParam0);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		func_721(iParam0);
		return;
	}
	if (NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Global_1102099->f_34.f_546[iParam0 /*7*/]) != iVar0)
	{
		func_721(iParam0);
		return;
	}
	if (_NAMESPACE26::_0x81FB74C83C2ED69F(iVar0))
	{
		func_722(iVar0, 0);
		return;
	}
	if (func_723(iParam0))
	{
		func_722(iVar0, 0);
		return;
	}
	if (((*Global_1266476)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*98*/])->f_97)
	{
		func_722(iVar0, 0);
		return;
	}
	if (NETWORK::GET_TIME_DIFFERENCE((Global_1102099->f_34[iParam0 /*11*/])->f_7, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 600000)
	{
		func_722(iVar0, 0);
		return;
	}
}

void func_438(int iParam0)
{
	struct<10> Var0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 10))
	{
		return;
	}
	if (Var0.f_4 != Local_243)
	{
		return;
	}
	switch (Var0.f_5)
	{
		case 1:
			func_724(Var0.f_6, Var0.f_9);
			break;
	}
}

void func_439(int iParam0)
{
	struct<5> Var0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 6))
	{
		return;
	}
	if (Var0.f_1 == PLAYER::PLAYER_ID())
	{
		switch (Var0.f_4)
		{
			case 5:
				if (Local_243.f_9 != -785841056)
				{
					func_725();
				}
				break;
		}
	}
}

int func_440(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_441(var uParam0, var uParam1)
{
	if (((*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1) && uParam0->f_2 == uParam1->f_2) && uParam0->f_3 == uParam1->f_3)
	{
		return 1;
	}
	return 0;
}

void func_442(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_443(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

void func_444()
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::_0xB16223CB7DA965F0(iVar0))
	{
		PLAYER::_0xAE637BB8EF017875(iVar0, 1);
	}
	if (PLAYER::_0x45AB66D02B601FA7(iVar0))
	{
		PLAYER::_0x64FF4BF9AF59E139(iVar0, 1);
	}
	if (Local_243.f_9 != -785841056)
	{
		if (func_486())
		{
			func_726();
		}
		if (func_727())
		{
			func_728();
		}
		if (UIAPPS::_IS_APP_RUNNING(joaat("abilities")) || UIAPPS::_IS_APP_ACTIVE(joaat("abilities")))
		{
			UIAPPS::_CLOSE_APP_BY_HASH_IMMEDIATE(joaat("abilities"));
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			HUD::SET_FRONTEND_ACTIVE(false);
		}
		if ((ENTITY::DOES_ENTITY_EXIST(Global_34) && !ENTITY::IS_ENTITY_DEAD(Global_34)) && PED::_0xB655DB7582AEC805(Global_34))
		{
			func_499(Global_34, 0, 0);
		}
	}
	func_245();
	func_106();
	func_108();
	func_126(0, 1);
	func_127(1);
	func_268();
	func_246(Local_243, 4);
}

void func_445()
{
	func_548("MP_OWC_END", 1, 0);
}

int func_446()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= (Local_2503.f_818 - 1))
	{
		if (!func_729(Local_2503.f_753[iVar1 /*2*/]))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

int func_447()
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	iVar0 = 1;
	iVar4 = 0;
	while (iVar4 <= 2)
	{
		if (!TASK::_DOES_SCENARIO_POINT_EXIST(&(Local_2503.f_831[iVar4])))
		{
			iVar0 = 0;
			vVar1 = { func_703(iVar4) };
			Local_2503.f_831[iVar4] = TASK::CREATE_SCENARIO_POINT(428946548, vVar1, 0, 0, 0, 0);
		}
		iVar4++;
	}
	return iVar0;
}

void func_448()
{
	int iVar0;
	int iVar1;

	if (Local_243.f_9 != -785841056)
	{
		return;
	}
	if (&Local_50[Local_243.f_1332 /*6*/] != 1)
	{
		func_349();
		return;
	}
	if ((_NAMESPACE26::_0xD6F6ACF4392187FB(Local_243.f_6) && _NAMESPACE26::_0x9BE7DCB22D32CCBE(Local_243.f_6, PLAYER::PLAYER_ID())) && !func_730())
	{
		if (func_731(Local_243, Local_243.f_7, Local_243.f_3))
		{
			func_732(1);
			func_349();
		}
		return;
	}
	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar0) || (_NAMESPACE26::_0x149A2751AB66AC02(iVar0) == 1 && !func_733()))
	{
		return;
	}
	if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		if (((!func_65(1) && func_734(Local_243)) && !func_735()) && func_472(Local_243.f_1289))
		{
			Local_243.f_1405 = func_736(Local_243, Local_243.f_1, Local_243.f_3, Local_243.f_7);
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_243.f_1405))
			{
				if (func_737())
				{
					Local_243.f_1289 = func_473("FME_HELP_RULES_POSSE_VERSUS");
				}
				func_738(Local_243, Local_243.f_7);
				func_172(1);
			}
		}
	}
	else
	{
		iVar1 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar0);
		if (((iVar1 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1)) && func_739(Local_243, 64, iVar1)) && func_731(Local_243, Local_243.f_7, Local_243.f_3))
		{
			if (func_740(0))
			{
				func_742(func_741(), 0);
			}
			func_732(1);
			func_349();
		}
	}
}

void func_449()
{
	float fVar0;

	if (!func_157(Local_243.f_1332))
	{
		return;
	}
	if (!func_68(Local_243.f_1396))
	{
		if (!ENTITY::_0x6BFBDC46139C45AB(Local_243.f_1396))
		{
			STREAMING::REQUEST_COLLISION_AT_COORD(Local_243.f_1396);
		}
		fVar0 = Local_243.f_1294;
		if (fVar0 > 512f)
		{
			fVar0 = (512f - 1f);
		}
		PATHFIND::_0xCF213A5FC3ABFC08(Local_243.f_1396, Local_243.f_1396.f_1, fVar0);
	}
}

void func_450()
{
	if (func_157(Local_243.f_1332) && (Local_243.f_1387 == -1477057661 || !func_743()))
	{
		func_744();
	}
	else
	{
		func_109();
	}
}

void func_451()
{
	if (func_157(Local_243.f_1332))
	{
		func_745();
	}
	else
	{
		func_110();
	}
}

void func_452()
{
	var uVar0;
	var uVar30;
	vector3 vVar39;
	float fVar42;
	var uVar43;
	var uVar44;
	vector3 vVar45;
	var uVar48;
	int iVar49;

	if (!func_157(Local_243.f_1332) || !func_746(Local_243))
	{
		func_108();
		return;
	}
	else
	{
		func_747();
	}
	if ((func_134(1) && func_748(255)) && func_749(255))
	{
		vVar39 = { Local_243.f_1396 };
		if (func_68(vVar39))
		{
			vVar39 = { Global_35 };
		}
		if (Local_243.f_10 < 4)
		{
			func_478(&vVar45, &uVar48, &iVar49);
			if ((func_134(1073741824 /* Float: 2f */) && !func_68(vVar45)) && !iVar49 == -1)
			{
				if ((!func_134(134217728) && !func_479(Local_243.f_1, Local_243.f_3)) && func_480(Local_243.f_1, Local_243.f_3))
				{
					func_481(1, 0);
				}
				func_750(vVar45, uVar48, 0f, 0f, 0f, 0);
				return;
			}
			else
			{
				fVar42 = Local_243.f_1293;
				func_751(&uVar43, &uVar44, fVar42);
			}
		}
		else
		{
			fVar42 = Local_243.f_1294;
			func_752(Local_243.f_1, Local_243.f_2, &uVar43, &uVar44, fVar42);
		}
		fVar42 = (fVar42 - 20f);
		if (func_753())
		{
			return;
		}
		func_754(Local_243.f_1, Local_243.f_3, vVar39, uVar43, uVar44, fVar42, &uVar0, &uVar30);
		func_755(fVar42, &uVar0, &uVar30);
		func_756(&uVar0, &(Local_243.f_1392), &(Local_243.f_1393));
		func_757(&uVar0, &uVar30);
	}
}

void func_453()
{
	switch (Local_243.f_1387)
	{
		case joaat("standard"):
		case -669315698:
			func_758(0);
			break;
		case -1477057661:
		case -1323241207:
			func_759();
			func_758(1);
			break;
		case -1130541276:
		case 1839318411:
			func_760(1);
			break;
		case 142723591:
		case 1229355466:
			func_761();
			break;
		case -1893775542:
		case -1869754940:
			func_762();
			break;
	}
}

void func_454()
{
}

void func_455()
{
	int iVar0;

	iVar0 = func_175();
	POPULATION::_0xF45E46DEECF7DF6E(iVar0, 0, 0, -1, -1);
	if (iVar0 & 2016 == 2016)
	{
		PED::_0xC0258742B034DFAF(0f);
		PED::_0xDB48E99F8E064E56(0f);
	}
	if (iVar0 & 8192 == 8192)
	{
		PED::_0xBA0980B5C0A11924(0f);
		PED::_0x28CB6391ACEDD9DB(0f);
	}
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
}

void func_456()
{
	if (!func_157(Local_243.f_1332))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_34) && !ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		WEAPON::_0x78030C7867D8B9B6(Global_34, 0);
		WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(Global_34, false);
	}
}

void func_457()
{
	if (!func_157(Local_243.f_1332))
	{
		return;
	}
	if (Local_243.f_1390 < 0)
	{
		Local_243.f_1390 = 0;
		func_763(20f);
		return;
	}
	func_764(Local_243.f_1390, 10f);
	Local_243.f_1390++;
	if (Local_243.f_1390 >= 32)
	{
		Local_243.f_1390 = 0;
	}
}

void func_458()
{
}

int func_459()
{
	return 1;
}

void func_460(var uParam0, int iParam1, bool bParam2, int iParam3, char* sParam4)
{
	bool bVar0;

	if ((func_765(uParam0, &bVar0) && func_766(uParam0)) && func_767(uParam0, -1700692449, &bVar0))
	{
		func_768(uParam0, iParam1, bParam2, iParam3, sParam4);
	}
	if (bVar0)
	{
		func_252(uParam0, 1);
	}
}

void func_461(var uParam0)
{
	if (uParam0->f_5 < 0)
	{
		uParam0->f_5 = AUDIO::GET_SOUND_ID();
		AUDIO::_0xCE5D0FFE83939AF1(uParam0->f_5, func_769(), func_770(), 1);
	}
}

int func_462(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (Local_243.f_1288 == 0 || !func_290(Local_243.f_1288))
	{
		func_354();
	}
	if (iParam0 >= 5 && (func_290(Local_243.f_1287) && !bParam3))
	{
		func_354();
		return 0;
	}
	if (Local_243.f_1266 == 5 && iParam0 >= 5)
	{
		return 0;
	}
	if (Local_243.f_1266 != iParam0 || iParam0 == 1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			func_354();
		}
		else
		{
			Local_243.f_1288 = func_771(sParam1, iParam2, 0, 0, 1);
		}
		Local_243.f_1266 = iParam0;
		return 1;
	}
	return 0;
}

bool func_463(int iParam0)
{
	return !func_62(iParam0);
}

float func_464(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_465(int iParam0)
{
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
			return 0;
		default:
			break;
	}
	return 1;
}

char* func_466()
{
	return "";
}

char* func_467()
{
	return "";
}

void func_468(var uParam0)
{
	*uParam0 = MAP::_BLIP_ADD_FOR_RADIUS(-47499173, Local_243.f_1399, Local_243.f_1293);
	MAP::_0x662D364ABF16DE2F(*uParam0, 453264060);
	MAP::SET_BLIP_SPRITE(*uParam0, -570710357, true);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, &(Local_243.f_1338));
}

struct<2> func_469(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

int func_470()
{
	return 2147483647;
}

int func_471()
{
	return 1;
}

int func_472(int iParam0)
{
	if (func_294())
	{
		return 0;
	}
	else if (func_290(iParam0))
	{
		return 0;
	}
	else if (func_290(Local_243.f_1287))
	{
		return 0;
	}
	else if (func_62(255))
	{
		return 0;
	}
	else if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	return 1;
}

int func_473(char* sParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return 0;
	}
	return func_772(sParam0, 10000, 0, 0, 0, 1);
}

struct<8> func_474(int iParam0, var uParam1)
{
	struct<8> Var0;
	struct<5> Var8;

	if (((func_36(&Var8, iParam0) && func_37(&Var8)) && func_38(&Var8, uParam1)) && func_140(&Var8))
	{
		func_141(Var8, 1777884256, &Var0, 0);
	}
	return Var0;
}

struct<8> func_475(int iParam0, var uParam1)
{
	struct<8> Var0;
	struct<5> Var8;

	if (((func_36(&Var8, iParam0) && func_37(&Var8)) && func_38(&Var8, uParam1)) && func_140(&Var8))
	{
		func_141(Var8, -1996633489, &Var0, 0);
	}
	return Var0;
}

char* func_476()
{
	return "";
}

void func_477(bool bParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	if (func_773())
	{
		if (func_774(255))
		{
			if (!func_168(38, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_775(Global_1893575->f_2) && func_776(Global_1893575->f_2))
		{
			func_777(Global_1893575->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1893575->f_7 = iParam1;
				func_778(16);
			}
		}
		else if (func_775(Global_1893575->f_2) && !func_779(Global_1893575->f_2, 2))
		{
			bParam0 = true;
		}
	}
	if (bParam0)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
		}
		Global_1893575->f_7 = 0;
		func_780(16);
		func_781(bParam2);
		if (bVar0)
		{
			func_780(1);
		}
	}
}

void func_478(var uParam0, var uParam1, int iParam2)
{
	*uParam0 = { 0f, 0f, 0f };
	*uParam1 = 0f;
	*iParam2 = -1;
	*iParam2 = func_782(Local_243.f_1, Local_243.f_2);
	if (*iParam2 == -1)
	{
	}
	else if (*iParam2 > Local_243.f_1276)
	{
	}
	else if (*iParam2 < (Local_243.f_1276 - 1))
	{
	}
	if (!*iParam2 == -1)
	{
		*uParam0 = { func_783(Local_243.f_1, Local_243.f_2, Local_243.f_1419) };
		*uParam1 = func_784(Local_243.f_1, Local_243.f_2, Local_243.f_1419);
	}
}

int func_479(int iParam0, var uParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (((func_36(&Var1, iParam0) && func_37(&Var1)) && func_38(&Var1, uParam1)) && func_785(&Var1))
	{
		func_42(Var1, 1509074216, &iVar0, 0);
	}
	return iVar0;
}

int func_480(int iParam0, var uParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (((func_36(&Var1, iParam0) && func_37(&Var1)) && func_38(&Var1, uParam1)) && func_785(&Var1))
	{
		func_42(Var1, 2121037717, &iVar0, 0);
	}
	return iVar0;
}

void func_481(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_170(65);
		if (bParam1)
		{
			func_170(68);
		}
	}
	else
	{
		func_169(65);
		func_169(68);
	}
}

void func_482(vector3 vParam0, var uParam3, bool bParam4)
{
	if (func_786(vParam0, uParam3))
	{
		func_483(1, bParam4);
	}
}

void func_483(bool bParam0, bool bParam1)
{
	if (func_787(255) == 4)
	{
		return;
	}
	if (func_68(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_169(0);
	}
	else
	{
		if (bParam1)
		{
			func_359(0, 0, 0, 1);
		}
		func_170(0);
		func_788(&(Global_1099294->f_516));
		Global_1099294->f_516 = 0f;
		Global_1099294->f_516.f_5 = 1;
		Global_1099294->f_516.f_16 = 0;
		Global_1099294->f_516.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1099294->f_516.f_17.f_3 = { 0f, 0f, 0f };
		Global_1099294->f_516.f_17 = { Global_1901929->f_44.f_1, Global_1901929->f_44.f_1, Global_1901929->f_44.f_1 };
		Global_1099294->f_516.f_17.f_9 = -432403087;
		func_789(&(Global_1099294->f_555));
		Global_1099294->f_555.f_6 = { Global_1099294->f_516.f_17.f_6 };
		Global_1099294->f_555 = Global_1099294->f_516;
		Global_1099294->f_555.f_5 = 1;
		if (bParam1)
		{
			Global_1099294->f_26.f_18 = 0;
			Global_1099294->f_26.f_19 = 0;
		}
	}
	func_790(Global_1099294->f_516, 36);
	func_791(Global_1099294->f_555, 36);
}

void func_484(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_485()
{
	func_329(&(Local_243.f_1296), 1, 1);
}

bool func_486()
{
	return Global_1896726->f_382;
}

int func_487(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_603(iVar0, 2))
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
				func_604(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

bool func_488(int iParam0, bool bParam1)
{
	if (bParam1 && !func_324(iParam0))
	{
		return false;
	}
	return !func_603(iParam0, 4);
}

bool func_489(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_324(iParam0))
	{
		return false;
	}
	iVar0 = func_605(iParam0);
	if (HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		if (((*Global_1949759)[iVar0 /*23*/])->f_20)
		{
			iVar1 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = MISC::_GET_SYSTEM_TIME();
		}
		uVar2 = HUD::_0x81801291806DBC50(((*Global_1949759)[iVar0 /*23*/])->f_3);
		if (!HUD::_UIPROMPT_IS_ACTIVE(((*Global_1949759)[iVar0 /*23*/])->f_3))
		{
			iVar3 = (iVar1 - ((*Global_1949759)[iVar0 /*23*/])->f_21);
			iVar4 = BUILTIN::FLOOR((IntToFloat(((*Global_1949759)[iVar0 /*23*/])->f_18) * (1f - ((*Global_1949759)[iVar0 /*23*/])->f_22)));
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			((*Global_1949759)[iVar0 /*23*/])->f_21 = iVar1;
			((*Global_1949759)[iVar0 /*23*/])->f_22 = uVar2;
		}
	}
	if (HUD::_0xCD072523791DDC1B(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1949759)[iVar0 /*23*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

int func_490(int iParam0)
{
	int iVar0;

	if (func_503(iParam0))
	{
		iVar0 = _NAMESPACE71::_0x59FA676177DBE4C9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return 0;
}

void func_491(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_324(iParam0))
	{
		return;
	}
	iVar0 = func_605(iParam0);
	func_607(iVar0, iParam1);
}

float func_492()
{
	return Local_243.f_1293;
}

char* func_493()
{
	return "MP_OutofAreaDirectional";
}

void func_494()
{
	if (func_160(&(Local_243.f_1304)))
	{
		func_298(&(Local_243.f_1304));
	}
}

int func_495()
{
	float fVar0;

	fVar0 = func_464(Global_35, Local_243.f_1399);
	if (fVar0 >= Local_243.f_1293)
	{
		return 1;
	}
	return 0;
}

void func_496(int iParam0)
{
	if (!func_614(&Global_1903002, iParam0))
	{
		func_484(Global_1903002, iParam0);
	}
}

int func_497(var uParam0, char* sParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	bool bVar0;
	int iVar1;

	if (func_792(uParam0, sParam1, &bVar0, bParam6, vParam2, fParam5, 0))
	{
		func_793(uParam0, sParam1, bParam7, bParam8, bParam9);
		iVar1 = 1;
	}
	else
	{
		iVar1 = 0;
	}
	if (bVar0)
	{
		func_514(uParam0, 1);
	}
	return iVar1;
}

void func_498()
{
	if (!func_794(64))
	{
		func_795(64);
	}
}

void func_499(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243, true);
		}
		if (Global_34 == iParam0)
		{
		}
		ENTITY::_SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

int func_500()
{
	return 0;
}

bool func_501(int iParam0)
{
	return func_78(Local_2503.f_850, iParam0);
}

var func_502(char* sParam0, int iParam1)
{
	return func_796(sParam0, iParam1, -2, 0, 0, 0, 1);
}

bool func_503(int iParam0)
{
	return iParam0 != 0;
}

void func_504(int iParam0)
{
	func_146(&(Local_2503.f_850), iParam0);
}

struct<2> func_505(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_506(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_797(bParam0, iVar0);
		iVar0++;
	}
}

void func_507()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_798(iVar0);
		iVar0++;
	}
}

void func_508()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_799(iVar0);
		iVar0++;
	}
}

void func_509(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_800(iVar0, bParam0);
		iVar0++;
	}
}

void func_510()
{
	AUDIO::_0x9D746964E0CF2C5F(func_564(), func_801());
	AUDIO::_0x9D746964E0CF2C5F(func_802(), func_801());
	AUDIO::_0x9D746964E0CF2C5F(func_803(), func_801());
	AUDIO::_0x9D746964E0CF2C5F(func_804(), func_801());
	AUDIO::_0x9D746964E0CF2C5F(func_769(), func_770());
	AUDIO::_0x9D746964E0CF2C5F(func_805(), func_806());
}

void func_511(var uParam0)
{
	if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_3))
	{
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&(uParam0->f_3));
	}
	if (UISTATEMACHINE::_UISTATEMACHINE_EXISTS(1546991729))
	{
		UISTATEMACHINE::_UISTATEMACHINE_DESTROY(1546991729);
	}
}

void func_512(int iParam0)
{
	if (Global_1903004->f_1 != iParam0)
	{
		Global_1903004->f_1 = iParam0;
	}
}

void func_513(int iParam0)
{
	Global_1903004 = iParam0;
}

void func_514(var uParam0, bool bParam1)
{
	if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0))
	{
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(uParam0);
	}
	if (UISTATEMACHINE::_UISTATEMACHINE_EXISTS(190275865))
	{
		UISTATEMACHINE::_UISTATEMACHINE_DESTROY(190275865);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_2);
		uParam0->f_2 = 0;
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_3))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_3, false);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_3);
		uParam0->f_3 = 0;
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_1))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_1);
		uParam0->f_1 = 0;
	}
	if (uParam0->f_4 >= 0)
	{
		if (!AUDIO::_0x84848E1C0FC67DBB(uParam0->f_4))
		{
			AUDIO::_0x3210BCB36AF7621B(uParam0->f_4);
		}
		AUDIO::RELEASE_SOUND_ID(uParam0->f_4);
		uParam0->f_4 = -1;
	}
	if (uParam0->f_5 >= 0)
	{
		if (!AUDIO::_0x84848E1C0FC67DBB(uParam0->f_5))
		{
			AUDIO::_0x3210BCB36AF7621B(uParam0->f_5);
		}
		AUDIO::RELEASE_SOUND_ID(uParam0->f_5);
		uParam0->f_5 = -1;
	}
	if (bParam1)
	{
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(func_493()))
		{
			GRAPHICS::_0xC5CB91D65852ED7E(func_493());
			HUD::_DISPLAY_HUD_COMPONENT(-2124237476);
			GRAPHICS::_0x981C7D863980FA51();
		}
	}
}

void func_515()
{
	switch (Local_243.f_1)
	{
		case 10:
			switch (Local_243.f_2)
			{
				case 893024815:
					func_807(0, joaat("guard"));
					func_807(1, joaat("guard"));
					func_807(2, -1553326850);
					func_807(3, joaat("defensive"));
					func_807(4, joaat("defensive"));
					func_807(5, 200161421);
					break;
				case -348618743:
					func_807(0, joaat("guard"));
					func_807(1, -1553326850);
					func_807(2, joaat("defensive"));
					func_807(3, 200161421);
					break;
				case -1837356407:
					func_807(0, joaat("guard"));
					func_807(1, -1553326850);
					func_807(2, -1553326850);
					func_807(3, joaat("defensive"));
					func_807(4, joaat("defensive"));
					func_807(5, 200161421);
					break;
				default:
					break;
			}
			break;
		case 11:
			func_807(0, -931055996);
			func_807(1, -931055996);
			break;
	}
}

void func_516()
{
	Local_2503.f_2 = NETWORK::NET_TO_OBJ(Local_1706.f_325);
	func_808(Local_2503.f_2, 0, 1);
}

void func_517(var uParam0)
{
	func_809(uParam0, 0);
	func_810(uParam0, 0);
	func_519(uParam0, 0);
	func_811(uParam0, 0);
	func_812(uParam0, 1, 1, 1);
}

void func_518(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_615(&(uParam0->f_1), 8);
	}
	else
	{
		func_484(&(uParam0->f_1), 8);
	}
}

void func_519(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_615(&(uParam0->f_1), 256);
	}
	else
	{
		func_484(&(uParam0->f_1), 256);
	}
}

int func_520()
{
	switch (Local_243.f_1)
	{
		case 7:
		case 12:
		case 13:
		case 14:
			return 1;
		default:
			break;
	}
	return 0;
}

struct<8> func_521()
{
	struct<8> Var0;

	return Var0;
}

char* func_522(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_523()
{
	char* sVar0;

	sVar0 = func_602(-1513842258 /* GXTEntry: "Condor Egg" */, 816454899, 1, 0);
	return MISC::_CREATE_VAR_STRING(2, "FME_CE_SHARD_OBJECTIVE", sVar0);
}

struct<8> func_524(int iParam0, var uParam1)
{
	char cVar0[64];
	struct<5> Var8;

	StringCopy(&cVar0, "", 64);
	if (((func_36(&Var8, iParam0) && func_37(&Var8)) && func_38(&Var8, uParam1)) && func_140(&Var8))
	{
		func_141(Var8, 1220434501, &cVar0, 0);
	}
	return cVar0;
}

char* func_525()
{
	return "";
}

int func_526()
{
	return func_813();
}

int func_527()
{
	return func_814();
}

var func_528(char* sParam0, char[4] cParam1, char[4] cParam2, int iParam3, int iParam4)
{
	return func_815(sParam0, cParam1, cParam2, func_288(), iParam4, iParam3, 0, 1, 1, 1);
}

var func_529(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	return func_816(sParam0, sParam1, func_288(), iParam3, iParam2, 0, 1, 1);
}

char* func_530(var uParam0, bool bParam1, bool bParam2)
{
	*bParam1 = 1;
	*bParam2 = 0;
	return "";
}

int func_531()
{
	if (func_275() & 64 == 64)
	{
		return 0;
	}
	return 1;
}

int func_532(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		*iParam2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (func_596(*iParam2, bParam0, bParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_533(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		if (iParam2 == -1)
		{
			return joaat("COLOR_GREYDARK");
		}
		else
		{
			return 636925055;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 636925055;
	}
	iVar2 = iParam0;
	if (func_361(func_373(0)) && func_646(func_373(0)) == 7)
	{
		bVar0 = true;
		iVar3 = 11;
		iVar4 = (iVar3 / 32);
		iVar5 = (iVar3 - iVar4 * 32);
		bVar1 = MISC::IS_BIT_SET(&(Global_3145858->f_6[iVar4]), iVar5);
	}
	if ((Global_1070356->f_19683.f_1[iVar2 /*8*/])->f_5 != 0)
	{
		return (Global_1070356->f_19683.f_1[iVar2 /*8*/])->f_5;
	}
	if (bParam3 && (Global_1070356->f_19683.f_1[iVar2 /*8*/])->f_6 != 0)
	{
		return (Global_1070356->f_19683.f_1[iVar2 /*8*/])->f_6;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (bVar0 && bVar1)
		{
			iVar6 = func_817(iParam0);
			if (iVar6 == -1031763995 && NETWORK::_NETWORK_IS_PLAYER_IN_SPECTATOR_MODE(iParam0))
			{
				return joaat("COLOR_WHITE");
			}
			else
			{
				return iVar6;
			}
		}
		else
		{
			return func_818(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_78((Global_1070356->f_19683.f_1[iVar2 /*8*/])->f_7, 1024))
	{
		return -508184943;
	}
	iVar7 = func_819(iParam0, 1);
	if (!bVar0)
	{
		if (func_820(iParam0, bParam1))
		{
			return func_818(iParam0);
		}
		else if (func_821(iParam0, bParam1))
		{
			if (func_563(iParam0, bParam1))
			{
				return 1891514641;
			}
			else
			{
				if (iVar7 > 5)
				{
					return -437407570;
				}
				else if (iVar7 > 3)
				{
					return -437407570;
				}
				else if (iVar7 > 1)
				{
					return 1201428499;
				}
				return 63157909;
			}
		}
	}
	else if (bVar1)
	{
		return func_817(iParam0);
	}
	else if (func_820(iParam0, bParam1))
	{
		if (PLAYER::PLAYER_ID() == iParam0)
		{
			return joaat("COLOR_WHITE");
		}
		else if (func_823(func_822(func_373(0)), 1) == 395262693)
		{
			return func_818(iParam0);
		}
		else
		{
			return func_818(iParam0);
		}
	}
	else if (func_821(iParam0, bParam1))
	{
		return 1891514641;
	}
	return 830499243;
}

char* func_534(char* sParam0, int iParam1)
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_824(MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

void func_535()
{
	Global_1939231->f_1433.f_7962 = 0;
	Global_1939231->f_1433.f_7963 = MISC::GET_GAME_TIMER() + 1000;
}

bool func_536()
{
	return Local_243.f_1294 > 0f;
}

var func_537()
{
	return MAP::_BLIP_ADD_FOR_RADIUS(-188007767, Local_243.f_1396, Local_243.f_1294);
}

int func_538()
{
	float fVar0;

	fVar0 = func_464(Global_35, Local_243.f_1396);
	if (fVar0 >= Local_243.f_1294)
	{
		return 1;
	}
	return 0;
}

int func_539()
{
	return 10000;
}

int func_540(var uParam0, float fParam1, int iParam2, var uParam3, bool bParam4, float fParam5, float fParam6, int iParam7, float fParam8, float fParam9)
{
	int iVar0;
	int iVar1;

	if ((*uParam3 >= 0 && *uParam3 < 32) && (uParam0->f_210[*uParam3 /*23*/])->f_14 != 255)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE((uParam0->f_210[*uParam3 /*23*/])->f_14) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT((uParam0->f_210[*uParam3 /*23*/])->f_14))
		{
			func_825(uParam0, *uParam3);
		}
	}
	if (iParam2 == 255)
	{
		return 0;
	}
	iVar0 = *uParam3;
	if (((iVar0 < 0 || (uParam0->f_210[iVar0 /*23*/])->f_14 != iParam2) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE((uParam0->f_210[iVar0 /*23*/])->f_14)) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT((uParam0->f_210[iVar0 /*23*/])->f_14))
	{
		iVar0 = -1;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if ((uParam0->f_210[iVar1 /*23*/])->f_14 != 255)
			{
				if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE((uParam0->f_210[iVar1 /*23*/])->f_14) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT((uParam0->f_210[iVar1 /*23*/])->f_14))
				{
					func_273(uParam0);
					func_825(uParam0, iVar1);
				}
			}
			if ((uParam0->f_210[iVar1 /*23*/])->f_14 == iParam2)
			{
				func_273(uParam0);
				iVar0 = iVar1;
				Jump @336; //curOff = 286
			}
			else if ((uParam0->f_210[iVar1 /*23*/])->f_14 == 255 && iVar0 == -1)
			{
				func_273(uParam0);
				iVar0 = iVar1;
			}
			iVar1++;
		}
	}
	if (iVar0 >= 0)
	{
		if (bParam4)
		{
			func_273(uParam0);
			func_825(uParam0, iVar0);
			*uParam3 = 0;
		}
		else
		{
			if (((uParam0->f_210[iVar0 /*23*/])->f_5 != fParam1 || (uParam0->f_210[iVar0 /*23*/])->f_1 != fParam5) || (uParam0->f_210[iVar0 /*23*/])->f_2 != fParam6)
			{
				func_272(uParam0);
			}
			(uParam0->f_210[iVar0 /*23*/])->f_14 = iParam2;
			(uParam0->f_210[iVar0 /*23*/])->f_5 = fParam1;
			(uParam0->f_210[iVar0 /*23*/])->f_1 = fParam5;
			(uParam0->f_210[iVar0 /*23*/])->f_2 = fParam6;
			(uParam0->f_210[iVar0 /*23*/])->f_3 = fParam8;
			(uParam0->f_210[iVar0 /*23*/])->f_4 = fParam9;
			uParam0->f_210[iVar0 /*23*/] = iParam7;
			*uParam3 = iVar0;
		}
	}
	return 1;
}

void func_541(var uParam0)
{
	NETWORK::_0x7E300B5B86AB1D1A(&(uParam0->f_210), uParam0->f_210, 23, 5, 2, 1, 3, 2, 0, 4, 2, 0, 0, 0, 0);
}

int func_542()
{
	return 1;
}

void func_543(int iParam0)
{
	if ((Global_1070356->f_20209[iParam0 /*18*/])->f_5 != 0)
	{
		(Global_1070356->f_20209[iParam0 /*18*/])->f_5 = 0;
		func_826(iParam0);
	}
}

void func_544(int iParam0, int iParam1)
{
	if ((Global_1070356->f_20209[iParam0 /*18*/])->f_5 != iParam1)
	{
		(Global_1070356->f_20209[iParam0 /*18*/])->f_5 = iParam1;
		func_826(iParam0);
	}
}

bool func_545(int iParam0, int iParam1)
{
	return func_78(&(Local_2054[iParam0 /*14*/]), iParam1);
}

int func_546(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_827(&Var4, 1356624740);
	return func_828(iParam0, &Var4, &uVar0, iParam1);
}

void func_547(int iParam0)
{
	func_146(Local_2054[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/], iParam0);
}

int func_548(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;

	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	if (((iVar0 == Global_1070356->f_21185.f_1 || Global_1070356->f_21185.f_1 == 0) || iParam1 > Global_1070356->f_21185) || iParam1 == 4)
	{
		if (bParam2)
		{
			uVar1 = -1;
			MISC::_COPY_MEMORY(&(Global_1070356->f_21185), &uVar1, 2);
		}
		else
		{
			Global_1070356->f_21185.f_1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			Global_1070356->f_21185 = iParam1;
		}
		if (AUDIO::TRIGGER_MUSIC_EVENT(sParam0))
		{
		}
		return 1;
	}
	return 0;
}

void func_549()
{
	bool bVar0;

	bVar0 = Local_2503.f_836 != Local_1706.f_347;
	Local_2503.f_836 = Local_1706.f_347;
	func_829(bVar0);
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_1706.f_346))
	{
		return;
	}
	switch (Local_1706.f_347)
	{
		case 0:
			break;
		case 1:
			if (bVar0)
			{
				TASK::TASK_FLYING_CIRCLE(Local_2503.f_835, 1.5f, func_698() + Vector(40f, 0f, 0f), 0f, 100f);
			}
			break;
		case 2:
			if (bVar0)
			{
				TASK::TASK_FLYING_CIRCLE(Local_2503.f_835, 1.5f, func_698() + Vector(40f, 0f, 0f), 0f, 75f);
			}
			break;
		case 3:
			if (bVar0)
			{
				TASK::TASK_FLYING_CIRCLE(Local_2503.f_835, 1.5f, func_698() + Vector(40f, 0f, 0f), 0f, 50f);
			}
			break;
		case 4:
			if (bVar0)
			{
				TASK::TASK_FLYING_CIRCLE(Local_2503.f_835, 1.5f, func_698() + Vector(40f, 0f, 0f), 0f, 20f);
			}
			break;
		case 5:
			if (bVar0)
			{
				TASK::TASK_FLY_TO_COORD(Local_2503.f_835, 1f, func_698(), 1, 0);
			}
			break;
		case 6:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_1706.f_346))
			{
				func_611(&(Local_1706.f_346));
			}
			break;
	}
}

void func_550()
{
	bool bVar0;

	func_830(&(Local_2503.f_837), ENTITY::GET_ENTITY_COORDS(Local_2503.f_2, true, false), 1, 1, 1);
	if (func_831(Global_34, Local_2503.f_2, 7f, 1))
	{
		func_832(&(Local_2503.f_4));
	}
	if ((MISC::GET_FRAME_COUNT() % 5) != 0)
	{
		return;
	}
	bVar0 = ((Global_1939178->f_38 == 1652431022 && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()) || func_833());
	func_834(Local_2503.f_2, bVar0, 1);
}

void func_551()
{
	if (func_157(Local_243.f_1332))
	{
		if (!func_501(2) && func_472(Local_243.f_1289))
		{
			Local_243.f_1289 = func_473("FME_CE_HELP_START");
			func_504(2);
		}
		func_462(7, "FME_CE_OBJ_FIND_EGG", -1, 0);
	}
}

void func_552()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (Local_2503.f_846 == 0)
	{
		return;
	}
	if (Local_2503.f_847 == -1 || Local_2503.f_848 == -1)
	{
		return;
	}
	bVar0 = true;
	bVar1 = false;
	iVar2 = 291934926;
	iVar3 = 0;
	switch (Local_2503.f_846)
	{
		case 2:
			break;
	}
	if (func_835(Local_2503.f_846, Local_2503.f_847, Local_2503.f_848, bVar0, bVar1, iVar2, iVar3))
	{
		Local_2503.f_846 = 0;
		Local_2503.f_847 = -1;
		Local_2503.f_848 = -1;
	}
}

void func_553()
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
				func_836(iVar0);
				break;
			case 141007368:
				func_837(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_554()
{
	int iVar0;

	func_838();
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (func_710(Local_1706.f_51[iVar0 /*22*/], Local_2503.f_42[iVar0 /*56*/]))
		{
			func_839(Local_1706.f_51[iVar0 /*22*/], Local_2503.f_42[iVar0 /*56*/]);
		}
		iVar0++;
	}
}

int func_555(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 0);
	if (iVar4 != 0)
	{
		return uVar0;
	}
	return 0;
}

void func_556()
{
	if (Local_243.f_9 == -785841056)
	{
		return;
	}
	func_840();
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), true);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MAP"), true);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 28, 1);
	PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::GET_PLAYER_INDEX());
	if (func_841() && func_842())
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_34) && !ENTITY::IS_ENTITY_DEAD(Global_34)) && TASK::_0x038B1F1674F0E242(Global_34))
		{
			TASK::CLEAR_PED_TASKS(Global_34, 1, 0);
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256, 0);
	}
}

int func_557(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Local_243.f_1332;
	}
	if ((((func_65(131072) && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1))) && &Local_50[iParam1 /*6*/] >= iParam0) && (Local_50[iParam1 /*6*/])->f_4 >= 1) && (Local_50[iParam1 /*6*/])->f_4 >= Local_243.f_1420)
	{
		return 1;
	}
	return 0;
}

void func_558()
{
}

char* func_559(int iParam0)
{
	int iVar0;

	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return "";
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return "";
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return "";
	}
	return func_843(iVar0);
}

var func_560()
{
	return Local_243.f_1267;
}

int func_561()
{
	switch (Local_243.f_1387)
	{
		case -1893775542:
		case -1323241207:
		case -1130541276:
		case -669315698:
		case 142723591:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_562()
{
	switch (Local_243.f_1387)
	{
		case -1869754940:
		case 1229355466:
		case 1839318411:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_563(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 0;
	}
	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26835), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26836), iVar0))
		{
			return 0;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26834), iVar0))
		{
			return 1;
		}
	}
	if (func_844(iParam0))
	{
		return 0;
	}
	if (func_845(iParam0))
	{
		return 0;
	}
	if (func_846(iParam0))
	{
		return 1;
	}
	return func_847(iParam0);
}

char* func_564()
{
	return "Match_End_Timer";
}

void func_565(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	bool bVar0;

	iParam3 |= 8;
	if (func_765(uParam0, &bVar0) && func_848(uParam0, uParam1, iParam3, 551037070, joaat("COLOR_RED"), joaat("COLOR_WHITE"), joaat("COLOR_WHITE"), iParam4))
	{
		func_849(uParam1, uParam2, iParam3 | 8, 551037070, joaat("COLOR_RED"), joaat("COLOR_PURE_WHITE"), joaat("COLOR_PURE_WHITE"), iParam4);
	}
	if (bVar0)
	{
		func_583(uParam1);
		func_252(uParam0, 1);
	}
}

void func_566(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	bool bVar0;

	if (((func_765(uParam0, &bVar0) && func_766(uParam0)) && func_848(uParam0, uParam1, iParam7 | 8, 551037070, joaat("COLOR_RED"), joaat("COLOR_PURE_WHITE"), joaat("COLOR_PURE_WHITE"), iParam12)) && func_767(uParam0, -1700692449, &bVar0))
	{
		func_768(uParam0, iParam3, bParam4, iParam5, sParam6);
		func_849(uParam1, uParam2, iParam7 | 8, iParam8, iParam9, iParam10, iParam11, iParam12);
	}
	if (bVar0)
	{
		func_583(uParam1);
		func_252(uParam0, 1);
	}
}

void func_567(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	bool bVar0;

	if (((func_765(uParam0, &bVar0) && func_766(uParam0)) && func_848(uParam0, uParam1, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12)) && func_767(uParam0, 1133052843, &bVar0))
	{
		func_768(uParam0, iParam3, bParam4, iParam5, sParam6);
		func_849(uParam1, uParam2, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12);
	}
	if (bVar0)
	{
		func_583(uParam1);
		func_252(uParam0, 1);
	}
}

void func_568(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;

	if (((func_765(uParam0, &bVar0) && func_766(uParam0)) && func_850(uParam0, uParam1, iParam7)) && func_767(uParam0, -213385216, &bVar0))
	{
		func_768(uParam0, iParam2, bParam3, iParam4, sParam5);
		func_851(uParam1, iParam6, iParam7, bParam8, bParam9, bParam10);
	}
	if (bVar0)
	{
		func_582(uParam1, 0, 0);
		func_252(uParam0, 1);
	}
}

void func_569(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	bool bVar0;

	if ((((func_765(uParam0, &bVar0) && func_766(uParam0)) && func_850(uParam0, uParam1, iParam9)) && func_848(uParam0, uParam2, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15)) && func_767(uParam0, 1133052843, &bVar0))
	{
		func_768(uParam0, iParam4, bParam5, iParam6, sParam7);
		func_851(uParam1, iParam8, iParam9, 0, 0, 0);
		func_849(uParam2, uParam3, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15);
	}
	if (bVar0)
	{
		func_583(uParam2);
		func_582(uParam1, 0, 0);
		func_252(uParam0, 1);
	}
}

void func_570(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18)
{
	bool bVar0;

	if ((((func_765(uParam0, &bVar0) && func_766(uParam0)) && func_850(uParam0, uParam1, iParam9)) && func_848(uParam0, uParam2, iParam13 | 8, 551037070, joaat("COLOR_RED"), joaat("COLOR_PURE_WHITE"), joaat("COLOR_PURE_WHITE"), iParam14)) && func_767(uParam0, 774310187, &bVar0))
	{
		func_768(uParam0, iParam3, bParam5, iParam6, sParam7);
		func_851(uParam1, iParam8, iParam9, bParam10, bParam11, bParam12);
		func_849(uParam2, uParam4, iParam13 | 8, iParam15, iParam16, iParam17, iParam18, iParam14);
	}
	if (bVar0)
	{
		func_582(uParam1, 0, 0);
		func_252(uParam0, 1);
		func_583(uParam2);
	}
}

int func_571(var uParam0, float fParam1, bool bParam2)
{
	return 0;
}

bool func_572(var uParam0)
{
	uParam0->f_2 = -171261332;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_573()
{
	return 1;
}

float func_574(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

void func_575()
{
	if (Local_1706 == PLAYER::PLAYER_ID())
	{
		func_576(0);
	}
	else
	{
		func_576(&(Local_243.f_971[Local_243.f_1332]));
	}
}

void func_576(int iParam0)
{
	if (iParam0 == -1)
	{
		func_228(4096, Local_243.f_1332);
		iParam0 = (func_192(2) - 1);
	}
	Local_243.f_1333 = iParam0;
}

void func_577(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_650(iParam0);
	if (iVar0 == -785841056)
	{
		func_443(func_47(-1892463704, -785841056), 1);
		if (iParam2 == 0)
		{
			func_443(func_505(1114562171), 1);
		}
	}
	else
	{
		func_443(func_47(-1892463704, -1666944573), 1);
		if (iParam2 >= 0 && iParam2 < 3)
		{
			func_443(func_505(1379845528), 1);
		}
	}
	if (func_46(iParam0, uParam1, &iVar1))
	{
		func_443(func_47(-1892463704, iVar1), 1);
		if (iParam2 >= 0 && iParam2 < 3)
		{
			func_443(func_47(-365215928, iVar1), 1);
		}
	}
}

void func_578(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_650(iParam0);
	if (iVar0 == -785841056)
	{
		func_443(func_47(1374282888, -785841056), 1);
		if (iParam2 == 0)
		{
			func_443(func_505(1114562171), 1);
		}
	}
	else
	{
		func_443(func_47(1374282888, -1666944573), 1);
		if (iParam2 >= 0 && iParam2 < 3)
		{
			func_443(func_505(1379845528), 1);
		}
	}
	if (func_46(iParam0, uParam1, &iVar1))
	{
		func_443(func_47(1374282888, iVar1), 1);
		if (iParam2 >= 0 && iParam2 < 3)
		{
			func_443(func_47(-365215928, iVar1), 1);
		}
	}
}

int func_579()
{
	struct<2> Var0;
	struct<2> Var13;
	struct<2> Var26;
	int iVar39;
	struct<2> Var40;

	if (!func_852())
	{
		return 1;
	}
	if (Local_243.f_9 != -785841056 && !func_134(8192))
	{
		if (Local_243.f_1 != 8)
		{
			Var0.f_1 = 11;
			func_853(&Var0, Local_243.f_1333);
			func_854(&Var0);
			func_855(&Var0, Local_0.f_4);
			func_856(&Var0);
			func_857(-116590068, &(Local_243.f_1362), &Var0, 0, 255, 0, 0);
			Local_243.f_1281++;
			Var13.f_1 = 11;
			func_859(&Var13, func_858());
			func_853(&Var13, Local_243.f_1333);
			func_854(&Var13);
			func_855(&Var13, Local_0.f_4);
			func_856(&Var13);
			func_857(-2069558689, &(Local_243.f_1366), &Var13, 0, 255, 0, 0);
			Local_243.f_1281++;
			Var26.f_1 = 11;
			func_854(&Var26);
			func_860(&Var26, Local_0.f_4);
			func_861(&Var26);
			func_862(&Var26, Local_243.f_1333);
			func_863(&Var26);
			func_856(&Var26);
			func_857(1172622856, &(Local_243.f_1370), &Var26, 0, 255, 0, 0);
			Local_243.f_1281++;
		}
		iVar39 = func_864(Local_0.f_4);
		Var40.f_1 = 11;
		func_856(&Var40);
		if (iVar39 != 0)
		{
			func_857(iVar39, &(Local_243.f_1378), &Var40, 0, 255, 0, 0);
			Local_243.f_1382 = iVar39;
			Local_243.f_1281++;
		}
	}
	func_865();
	return 1;
}

int func_580()
{
	return 1;
}

void func_581(int iParam0, int iParam1)
{
	func_430(&((Global_1185132->f_66[iParam0 /*20*/])->f_6), iParam1);
}

void func_582(var uParam0, bool bParam1, bool bParam2)
{
	struct<30> Var0;
	var uVar34;
	var uVar35;
	var uVar36;
	var uVar37;
	var uVar38;
	var uVar39;
	int iVar40;

	if ((uParam0[0 /*34*/] != 0 || bParam2) || (((*uParam0)[0 /*34*/])->f_23 != -1 && bParam1))
	{
		Var0.f_27 = -1;
		Var0.f_28 = -1;
		Var0.f_29 = -1082130432;
		iVar40 = 0;
		while (iVar40 <= 6)
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_1);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_2);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_3);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_4);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_5);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_6);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_10);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_11);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_12);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_13);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_14);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_15);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_20);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_21);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_22);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_16);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_17);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_18);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_19);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0[iVar40 /*34*/]);
			if (!bParam1)
			{
				uVar34 = ((*uParam0)[iVar40 /*34*/])->f_23;
				uVar35 = ((*uParam0)[iVar40 /*34*/])->f_25;
				uVar36 = ((*uParam0)[iVar40 /*34*/])->f_26;
				uVar37 = ((*uParam0)[iVar40 /*34*/])->f_27;
				uVar38 = ((*uParam0)[iVar40 /*34*/])->f_28;
				uVar39 = ((*uParam0)[iVar40 /*34*/])->f_29;
			}
			MISC::_COPY_MEMORY((*uParam0)[iVar40 /*34*/], &Var0, 34);
			if (!bParam1)
			{
				((*uParam0)[iVar40 /*34*/])->f_23 = uVar34;
				((*uParam0)[iVar40 /*34*/])->f_25 = uVar35;
				((*uParam0)[iVar40 /*34*/])->f_26 = uVar36;
				((*uParam0)[iVar40 /*34*/])->f_27 = uVar37;
				((*uParam0)[iVar40 /*34*/])->f_28 = uVar38;
				((*uParam0)[iVar40 /*34*/])->f_29 = uVar39;
			}
			iVar40++;
		}
	}
}

void func_583(var uParam0)
{
	struct<199> Var0;
	struct<15> Var199;
	int iVar222;

	if (uParam0->f_11.f_2 != 0)
	{
		func_866(&(uParam0->f_11));
		func_867(uParam0);
		func_868(&(uParam0->f_11), 1);
		Global_1939067->f_107 = 0;
		Var0.f_3 = 8;
		Var0.f_12 = 32;
		Var0.f_45 = 32;
		Var0.f_45.f_1 = 2;
		Var0.f_45.f_1.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_143 = 5;
		Var0.f_161 = -1;
		Var0.f_162 = 32;
		Var199.f_1 = -1082130432;
		Var199.f_2 = -1082130432;
		Var199.f_3 = -1082130432;
		Var199.f_4 = -1082130432;
		Var199.f_5 = -1082130432;
		Var199.f_14 = 255;
		uParam0->f_11 = { Var0 };
		iVar222 = 0;
		while (iVar222 <= 31)
		{
			MISC::_COPY_MEMORY(uParam0->f_210[iVar222 /*23*/], &Var199, 23);
			iVar222++;
		}
		uParam0->f_948 = 0;
	}
}

int func_584()
{
	struct<8> Var0;
	int iVar8;
	char* sVar9;

	Var0 = { func_521() };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { Local_243.f_1346 };
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
		{
			Var0 = { Local_243.f_1338 };
		}
	}
	iVar8 = Local_1706;
	if (PLAYER::PLAYER_ID() == iVar8)
	{
		sVar9 = func_602(-1513842258 /* GXTEntry: "Condor Egg" */, 816454899, 1, 0);
		Local_243.f_1287 = func_529(MISC::_CREATE_VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_OVER", &Var0), MISC::_CREATE_VAR_STRING(2, "FME_CE_SHARD_OUTRO_PRIMARY_WON", sVar9), func_586(), func_587());
	}
	else
	{
		Local_243.f_1287 = func_529(MISC::_CREATE_VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_OVER", &Var0), MISC::_CREATE_VAR_STRING(10, "FME_CE_SHARD_FOUEGG", func_534(func_559(iVar8), joaat("COLOR_PURE_WHITE"))), func_586(), func_587());
	}
	return 1;
}

char* func_585()
{
	return "";
}

int func_586()
{
	return func_869();
}

int func_587()
{
	return func_870();
}

char* func_588(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "FME_SHARD_OUTRO_PRIMARY_INVALID_GANG";
		case 2:
			return "FME_SHARD_OUTRO_PRIMARY_EXPIRED_GANGS";
		case 3:
			return "FME_SHARD_OUTRO_PRIMARY_EXPIRED_PLAYERS";
		default:
			break;
	}
	return "FME_SHARD_OUTRO_PRIMARY_EXPIRED";
}

var func_589(char* sParam0, int iParam1, int iParam2)
{
	return func_871(sParam0, func_288(), iParam2, iParam1, 0, 1);
}

struct<8> func_590()
{
	struct<8> Var0;

	return Var0;
}

char* func_591()
{
	return "";
}

struct<8> func_592()
{
	struct<8> Var0;

	return Var0;
}

char* func_593(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "FM_PLACE_1";
		case 1:
			return "FM_PLACE_2";
		case 2:
			return "FM_PLACE_3";
		case 3:
			return "FM_PLACE_4";
		case 4:
			return "FM_PLACE_5";
		case 5:
			return "FM_PLACE_6";
		case 6:
			return "FM_PLACE_7";
		case 7:
			return "FM_PLACE_8";
		case 8:
			return "FM_PLACE_9";
		case 9:
			return "FM_PLACE_10";
		case 10:
			return "FM_PLACE_11";
		case 11:
			return "FM_PLACE_12";
		case 12:
			return "FM_PLACE_13";
		case 13:
			return "FM_PLACE_14";
		case 14:
			return "FM_PLACE_15";
		case 15:
			return "FM_PLACE_16";
		case 16:
			return "FM_PLACE_17";
		case 17:
			return "FM_PLACE_18";
		case 18:
			return "FM_PLACE_19";
		case 19:
			return "FM_PLACE_20";
		case 20:
			return "FM_PLACE_21";
		case 21:
			return "FM_PLACE_22";
		case 22:
			return "FM_PLACE_23";
		case 23:
			return "FM_PLACE_24";
		case 24:
			return "FM_PLACE_25";
		case 25:
			return "FM_PLACE_26";
		case 26:
			return "FM_PLACE_27";
		case 27:
			return "FM_PLACE_28";
		case 28:
			return "FM_PLACE_29";
		case 29:
			return "FM_PLACE_30";
		case 30:
			return "FM_PLACE_31";
		case 31:
			return "FM_PLACE_32";
		default:
			break;
	}
	return "";
}

Vector3 func_594(int iParam0)
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
	return func_872((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

int func_595()
{
	return 1;
}

int func_596(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (((iParam0 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iParam0)) && iParam0 != PLAYER::PLAYER_ID())
	{
		iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0);
		if (iVar0 >= 0 && iVar0 < 32)
		{
			if (bParam1)
			{
				if ((Local_50[Local_243.f_1332 /*6*/])->f_2 == (Local_50[iVar0 /*6*/])->f_2 && (!bParam2 || (Local_50[Local_243.f_1332 /*6*/])->f_5 > (Local_50[iVar0 /*6*/])->f_5))
				{
					return 1;
				}
			}
			else if (BUILTIN::FLOOR((Local_50[Local_243.f_1332 /*6*/])->f_2) == BUILTIN::FLOOR((Local_50[iVar0 /*6*/])->f_2) && (!bParam2 || (Local_50[Local_243.f_1332 /*6*/])->f_5 > (Local_50[iVar0 /*6*/])->f_5))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_597()
{
	return Global_1939178->f_38 == joaat("weapon_fishingrod");
}

int func_598()
{
	if (SCRIPTS::IS_THREAD_ACTIVE(&Global_1902942, false))
	{
		return 1;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-506425016) > 0)
	{
		return 1;
	}
	if (func_23() == 0 && NETWORK::_0x1B89BC43B6E69107(-506425016, -1, 1, 0))
	{
		return 1;
	}
	return 0;
}

float func_599(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

Vector3 func_600(vector3 vParam0, float fParam3)
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

int func_601(int iParam0)
{
	switch (func_873(iParam0))
	{
		case -2101244071:
		case -1070622585:
		case -1057349201:
		case -569548732:
		case 874188557:
			return 1;
	}
	return 0;
}

int func_602(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[10];
	int iVar21;
	int iVar22;

	if (!func_874(iParam0, iParam1, &Var0, &iVar21, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar22 = 0;
	while (iVar22 < iVar21)
	{
		if (&Var0[iVar22 /*2*/] == 2084597891)
		{
			return (Var0[iVar22 /*2*/])->f_1;
		}
		else if (&Var0[iVar22 /*2*/] == 0)
		{
		}
		else
		{
			iVar22++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

bool func_603(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1) != 0;
}

void func_604(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	((*Global_1949759)[iParam0 /*23*/])->f_4 = iParam1;
	(*Global_1949759)[iParam0 /*23*/] = iParam4;
	((*Global_1949759)[iParam0 /*23*/])->f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	((*Global_1949759)[iParam0 /*23*/])->f_2 = iParam5;
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
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
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
	func_607(iParam0, 1);
	func_608(iParam0, 1);
	func_609(iParam0, 128);
}

int func_605(int iParam0)
{
	return iParam0;
}

void func_606(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 - (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1));
}

void func_607(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		if (((*Global_1949759)[iParam0 /*23*/])->f_5 == 5 && !func_603(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, iParam1);
		}
	}
}

void func_608(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1949759)[iParam0 /*23*/])->f_3, iParam1);
	}
}

void func_609(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 || iParam1);
}

void func_610(int iParam0)
{
	if (!func_875(iParam0))
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

void func_611(var uParam0)
{
	int iVar0;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		if (DECORATOR::DECOR_EXIST_ON(iVar0, "MC_EntityID"))
		{
			DECORATOR::_DECOR_REMOVE_ALL(iVar0);
		}
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

void func_612()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_2503.f_2) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_2503.f_2))
	{
		func_611(&(Local_1706.f_325));
	}
	func_876(Local_2503.f_2);
}

void func_613(var uParam0, bool bParam1)
{
	int iVar0;

	if (!func_663(uParam0))
	{
		return;
	}
	iVar0 = Global_1275573->f_8;
	func_877();
	func_667(0);
	if (uParam0->f_1)
	{
		func_878(iVar0, 1);
	}
	if (uParam0->f_10)
	{
		if (func_331(uParam0->f_54.f_1))
		{
		}
		if (uParam0->f_54.f_2)
		{
			func_673();
		}
	}
	if (uParam0->f_12)
	{
		func_879();
	}
	if (uParam0->f_8)
	{
		func_880(PLAYER::_0xDF66A37936D5F3D9(PLAYER::PLAYER_ID()));
		func_689(func_881());
	}
	else if (uParam0->f_4)
	{
		func_882();
		func_880(PLAYER::_0xDF66A37936D5F3D9(PLAYER::PLAYER_ID()));
		func_689(Global_1954472->f_1449);
	}
	if (uParam0->f_3)
	{
		func_883();
	}
	if (bParam1)
	{
		func_675(0, 0);
		func_884();
	}
	func_664(&(Global_1132968->f_5525));
}

bool func_614(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_615(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_616(int iParam0, int iParam1)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Local_243.f_1386), iParam1))
	{
		func_885(iParam0);
		if (Local_243.f_9 != -785841056)
		{
			func_886(iParam1, 0);
		}
		SCRIPTS::_0xD426E2E3288469D6(&(Local_243.f_1386), iParam1);
	}
}

void func_617(int iParam0, int iParam1)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Local_243.f_1385), iParam1))
	{
		func_887(iParam0);
		func_888(iParam0);
		func_889(iParam0);
		if (Local_243.f_9 != -785841056)
		{
			func_886(iParam1, 0);
		}
		SCRIPTS::_0xD426E2E3288469D6(&(Local_243.f_1385), iParam1);
	}
	if (func_134(33554432))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && iParam0 == PLAYER::PLAYER_ID())
		{
			func_337();
			func_332(33554432);
			if (func_134(67108864))
			{
				func_340(1, 0, 1);
				func_332(67108864);
			}
		}
	}
}

bool func_618(int iParam0)
{
	return func_614(Global_1182289->f_3, iParam0);
}

void func_619(int iParam0)
{
	func_615(&(Global_1182289->f_3), iParam0);
}

bool func_620(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!Global_1132968->f_6289)
	{
		return false;
	}
	if (iParam0 == &Global_1275573->f_154[&Global_1275573])
	{
		return ((Global_17172.f_2619.f_2 == 2 || (bParam1 && Global_17172.f_2619.f_2 == 1)) || (bParam2 && Global_17172.f_2619.f_2 == 3));
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return false;
	}
	return ((((*Global_1097610)[iVar0 /*51*/])->f_48 == 2 || (bParam1 && ((*Global_1097610)[iVar0 /*51*/])->f_48 == 1)) || (bParam2 && ((*Global_1097610)[iVar0 /*51*/])->f_48 == 3));
}

int func_621(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return func_78((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_7, iParam1);
}

void func_622(int iParam0)
{
	if (!func_78((Global_1070356->f_19683.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/])->f_7, iParam0))
	{
		func_146(&((Global_1070356->f_19683.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/])->f_7), iParam0);
	}
}

var func_623(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar17;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar17 = _NAMESPACE71::_SHOW_SIMPLE_RIGHT_TEXT(&Var0, &Var13, iParam5);
	return uVar17;
}

void func_624(int iParam0, int iParam1)
{
	struct<7> Var0[7];
	int iVar50;
	int iVar51;
	struct<11> Var52;
	struct<7> Var63;
	int iVar70;

	iVar50 = _NAMESPACE26::_0xD1BF325C8252A982(iParam1, &Var0);
	Var63 = { func_890() };
	iVar70 = 0;
	while (iVar70 <= (iVar50 - 1))
	{
		if ((func_891(*(Var0[iVar70 /*7*/])) && !NETWORK::NETWORK_ARE_HANDLES_THE_SAME(Var0[iVar70 /*7*/], &Var63)) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(Var0[iVar70 /*7*/]))
		{
			iVar51 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Var0[iVar70 /*7*/]);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar51))
			{
				Var52.f_4 = 7;
				Var52.f_5 = iParam1;
				Var52.f_10 = iParam0;
				func_892(&Var52, iVar51);
			}
		}
		iVar70++;
	}
}

void func_625(int iParam0)
{
	if (func_78((Global_1070356->f_19683.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/])->f_7, iParam0))
	{
		func_430(&((Global_1070356->f_19683.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/])->f_7), iParam0);
	}
}

int func_626(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 21)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		return 1;
	}
	if (MISC::_0x8F4F050054005C27(&(Global_1140484->f_1998), iParam0))
	{
		return 1;
	}
	if (Global_1140484->f_1997 >= 21)
	{
		return 0;
	}
	Global_1140484->f_1975[Global_1140484->f_1997] = iParam0;
	Global_1140484->f_1997++;
	return 1;
}

void func_627(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_628(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_629(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_630(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 30)
	{
		return 0;
	}
	if (func_893(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_894(iParam0))
	{
		return 0;
	}
	if (func_895(iParam0))
	{
		return 0;
	}
	if ((Global_1900718->f_67 && !func_896(iParam0, 1)) || func_897(32768))
	{
		if (!func_896(iParam0, 262144) || !Global_1904613->f_8198)
		{
			return 0;
		}
	}
	if (!func_898())
	{
		return 0;
	}
	return 1;
}

void func_631(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904613[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1904613)[iParam0] = uVar0;
}

void func_632(int iParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0))
	{
		return;
	}
	DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Global_1939231->f_242.f_5, iParam0);
	func_899(iParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0);
	func_900((Global_1939231->f_242.f_1186 - 1));
}

bool func_633(int iParam0)
{
	return (Global_1099294->f_26.f_7 && iParam0) != 0;
}

bool func_634(int iParam0)
{
	return (Global_1099294->f_26.f_9 && iParam0) != 0;
}

bool func_635(int iParam0)
{
	return (Global_1099294->f_4[Global_1100047[iParam0 /*2*/]] && ((*Global_1100047)[iParam0 /*2*/])->f_1) == ((*Global_1100047)[iParam0 /*2*/])->f_1;
}

int func_636()
{
	if (&Global_1099294 <= 5)
	{
		return &Global_1099294;
	}
	if (&Global_1099294 <= 22)
	{
		return 4;
	}
	if (&Global_1099294 <= 25)
	{
		return 3;
	}
	return 26;
}

int func_637(struct<2> Param0)
{
	int iVar0;

	if (!func_73(Param0))
	{
		return -1;
	}
	iVar0 = func_901(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1070356->f_17817.f_1[iVar0 /*3*/])->f_2;
}

int func_638(struct<2> Param0)
{
	return func_902(Param0);
}

int func_639(bool bParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1099294->f_16)
	{
		return 0;
	}
	if (!func_903())
	{
		return 0;
	}
	if (!func_17())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_904(&Global_0, 8);
	}
	func_904(&Global_0, 1);
	return 1;
}

void func_640(struct<2> Param0, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;

	uVar0 = func_905(func_646(Param0));
	iVar1 = func_638(Param0);
	vVar2.f_1 = iParam3;
	vVar2.x = 0;
	vVar2.f_2 = 0;
	if (func_23() == 0)
	{
		vVar2.x = Global_265331->f_124445.f_70.f_17;
		func_906(Param0, &vVar2);
	}
	STATS::_0xD5910ECF81A2278C(uVar0, iVar1, iParam2, &vVar2);
}

void func_641(struct<2> Param0, int iParam2)
{
	if (!func_73(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_907(Param0);
	}
	else
	{
		func_908(Param0, iParam2);
	}
	func_909();
}

void func_642(bool bParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];

	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_910(iVar0, 1);
		if ((iVar1 == -173287735 || iVar1 == -715363719) || iVar1 == 1972833301)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_911(cVar2);
			}
			else
			{
				func_912();
			}
			LAW::_0xF611DE44AEB36A1D(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_643(bool bParam0)
{
	if (!bParam0 && func_913(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(752193127, bParam0, 0);
	return 1;
}

void func_644(int iParam0)
{
	Global_1900718 = (Global_1900718 || iParam0);
}

int func_645(struct<2> Param0)
{
	return func_915(func_914(Param0));
}

int func_646(var uParam0, var uParam1)
{
	return uParam0;
}

int func_647(struct<2> Param0, var uParam2)
{
	int iVar0;

	iVar0 = func_916(Param0);
	if (func_916(Param0) < 0)
	{
		return 0;
	}
	func_917(iVar0, uParam2);
	return 1;
}

void func_648(bool bParam0)
{
	int iVar0;

	if (Global_1900670->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_23() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1900670->f_2 == 4 && Global_1900670->f_12 != Global_1900670->f_13) && !bParam0)
	{
		Global_1900670->f_1 = Global_1900670->f_2;
		Global_1900670->f_12 = Global_1900670->f_13;
		func_918(iVar0, Global_1900670->f_12);
	}
	else
	{
		Global_1900670->f_1 = 0;
		Global_1900670->f_7 = iVar0;
		Global_1900670->f_8 = func_919();
		Global_1900670->f_9 = func_920(Global_1893575->f_2);
		Global_1900670->f_11 = func_921(Global_1896610->f_41);
		if (Global_1900670->f_9 != -1 && Global_1900670->f_9 != 0)
		{
			func_922(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_9);
		}
		else if (Global_1900670->f_11 != -1)
		{
			func_922(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_11);
		}
		else
		{
			func_922(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_9);
		}
	}
	Global_1900670->f_2 = 0;
}

void func_649(int iParam0)
{
	if (Global_1182289->f_440 != 2)
	{
		return;
	}
	if (Global_1182289->f_440.f_1 == 0)
	{
		return;
	}
	Global_1182289->f_440.f_1 = 0;
	POSSE::_0xC684FF658B2E55DA(iParam0);
}

int func_650(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return &(Global_1185132->f_1[iParam0 /*4*/]);
}

char* func_651(int iParam0)
{
	switch (iParam0)
	{
		case 1695952109:
			return "EventData/location(id=%x)";
		case -692671154:
			return "EventData/location(id=%x)/variation(id=%x)/tuningData";
		case 2057649523:
			return ":vWreckageLocation";
		case 1248369828:
			return "EventData/wave_data/wave(type=%x)/peds";
		case 1268095596:
			return "ped(%i)";
		case -538315284:
			return "EventData/location(id=%x)/SpawnPositions/wave(type=%x)";
		case 1218921439:
			return "spawnposition(%i)";
		case -1191553031:
			return ":pos1";
		case 1687465887:
			return ":pos2";
		case 1381829424:
			return ":pos3";
		case -348163890:
			return ":head1";
		case -1538366747:
			return ":head2";
		case 1979614790:
			return ":head3";
		case -1833360518:
			return ":model";
		case 425959891:
			return ":pos";
		case 256247696:
			return ":rotation";
		case 413811142:
			return ":role";
		case -1515541953:
			return ":scenario";
		case -1774701585:
			return ":point";
		case 89029101:
			return ":offset";
		case -43053691:
			return "scenario_points";
		case 2066571170:
			return "scenario_points/scenario_point(%i)";
		case -1890596655:
			return "vehicle_data";
		case 2025794970:
			return "vehicle_data/vehicle(%i)";
		case 685218342:
			return "prop_data";
		case 733276510:
			return "prop_data/prop(%i)";
		case -565871549:
			return "propset_data";
		case 1497039912:
			return "propset_data/propset(%i)";
		case 796262628:
			return "LootLocations";
		case -1084127701:
			return "LootLocations/lootlocation(%i)";
		case -14916973:
			return "ChestLocations";
		case -1851356988:
			return "ChestLocations/chestlocation(%i)";
		case -335517339:
			return "DirtMoundLocations";
		case 612244624:
			return "DirtMoundLocations/dirtmoundlocation(%i)";
		case 2019912578:
			return "EggLocations";
		case -1639163394:
			return "egglocation(%i)";
		case 1763905867:
			return "EventData/reward_groups";
		case 810522312:
			return "EventData/chest_data";
		case -570563579:
			return "chests";
		case 137865554:
			return "chest(rewardtype=%x)";
		case 766008034:
			return "reward_group(type=%x)";
		case -531292328:
			return "reward_group(%i)";
		case 536703056:
			return "reward(%i)";
		case -1848254013:
			return ":random";
		case -767930282:
			return ":type";
		case 1310428614:
			return ":value";
		case -355516948:
			return ":loot_type";
		case -1198443210:
			return ":loot_value";
		default:
			break;
	}
	return "";
}

int func_652(var uParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	iVar5 = 0;
	if (func_404(&Var0))
	{
		Var0.f_2 = iParam1;
		Var0.f_3 = uParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			iVar6 = 0;
			func_40(Var0, -1833360518, &iVar6, 0);
			iVar5 = iVar6;
		}
	}
	return iVar5;
}

void func_653(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_923(Global_1132968->f_4641.f_2[func_376(iParam0, 1) /*4*/]);
}

int func_654()
{
	if ((Global_1902942->f_35 == 1 && Global_1902942->f_5 >= 2) && Global_1902942->f_5 != 9)
	{
		return 1;
	}
	return 0;
}

void func_655()
{
	if (func_924())
	{
		func_925(8);
	}
}

void func_656()
{
	if (func_926())
	{
		func_925(16);
	}
}

void func_657()
{
	if (func_927())
	{
		func_925(32);
	}
}

int func_658(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_659(var uParam0)
{
	func_928(uParam0, 0f);
}

bool func_660(var uParam0)
{
	return func_382(*uParam0, 2);
}

float func_661()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_662(var uParam0, int iParam1)
{
	if (uParam0->f_1)
	{
		func_929(&(uParam0->f_16), 84);
	}
}

int func_663(var uParam0)
{
	if (uParam0->f_1)
	{
		return 1;
	}
	else if (uParam0->f_10)
	{
		return 1;
	}
	else if (uParam0->f_9)
	{
		return 1;
	}
	else if (uParam0->f_4)
	{
		return 1;
	}
	else if (uParam0->f_5)
	{
		return 1;
	}
	else if (uParam0->f_3)
	{
		return 1;
	}
	else if (uParam0->f_8)
	{
		return 1;
	}
	else if (uParam0->f_6)
	{
		return 1;
	}
	else if (uParam0->f_7)
	{
		return 1;
	}
	else if (uParam0->f_11)
	{
		return 1;
	}
	else if (uParam0->f_2)
	{
		return 1;
	}
	else if (uParam0->f_12)
	{
		return 1;
	}
	return 0;
}

void func_664(var uParam0)
{
	func_930(uParam0);
	func_931(&(uParam0->f_16));
	func_932(&(uParam0->f_21));
	func_933(&(uParam0->f_22));
	func_934(&(uParam0->f_25));
	func_935(&(uParam0->f_47));
	func_936(&(uParam0->f_51));
	func_937(&(uParam0->f_54));
	func_938(&(uParam0->f_57));
}

void func_665(var uParam0)
{
	if (uParam0->f_5 && !uParam0->f_7)
	{
		func_163(uParam0, 1);
	}
}

void func_666()
{
	func_939();
	func_940();
	func_880(PLAYER::_0xDF66A37936D5F3D9(PLAYER::PLAYER_ID()));
}

void func_667(bool bParam0)
{
	int iVar0;

	if (!bParam0 && Global_1954472->f_1331.f_108)
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (ATTRIBUTE::_IS_ATTRIBUTE_OVERPOWERED(iVar0, 0))
	{
		Global_1954472->f_1331.f_108.f_1 = ATTRIBUTE::_0x4C9F782180712742(iVar0, 0);
	}
	else
	{
		Global_1954472->f_1331.f_108.f_1 = 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_OVERPOWERED(iVar0, 1))
	{
		Global_1954472->f_1331.f_108.f_3 = ATTRIBUTE::_0x4C9F782180712742(iVar0, 1);
	}
	else
	{
		Global_1954472->f_1331.f_108.f_3 = 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_OVERPOWERED(iVar0, 2))
	{
		Global_1954472->f_1331.f_108.f_2 = ATTRIBUTE::_0x4C9F782180712742(iVar0, 2);
	}
	else
	{
		Global_1954472->f_1331.f_108.f_2 = 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(iVar0, 0))
	{
		Global_1954472->f_1331.f_108.f_4 = ATTRIBUTE::_0xB429F58803D285B1(iVar0, 0);
	}
	else
	{
		Global_1954472->f_1331.f_108.f_4 = 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(iVar0, 1))
	{
		Global_1954472->f_1331.f_108.f_6 = ATTRIBUTE::_0xB429F58803D285B1(iVar0, 1);
	}
	else
	{
		Global_1954472->f_1331.f_108.f_6 = 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(iVar0, 2))
	{
		Global_1954472->f_1331.f_108.f_5 = ATTRIBUTE::_0xB429F58803D285B1(iVar0, 2);
	}
	else
	{
		Global_1954472->f_1331.f_108.f_5 = 0f;
	}
	Global_1954472->f_1331.f_108 = 1;
}

struct<4> func_668(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar33;
	int iVar34;
	struct<4> Var35;

	Var0.f_9 = -1591664384;
	if (!func_941(&Var0, bParam0))
	{
	}
	if (!bParam2)
	{
		Var29 = { func_942() };
		if (func_943() && INVENTORY::_0xB881CA836CC4B6D4(&Var29))
		{
			Var0 = { Var29 };
		}
		else if (!INVENTORY::_0x4C543D5DFCD2DAFD(&Var29, &Var0))
		{
			func_944(&Var0, 0);
		}
	}
	if (iParam3 == -1)
	{
		iParam3 = func_945(PLAYER::PLAYER_ID());
	}
	bVar33 = func_946(75);
	if (bVar33)
	{
		iParam3 = 3;
	}
	iVar34 = func_947(iParam3, 0);
	if (iVar34 != 3)
	{
		if (INVENTORY::_0xB881CA836CC4B6D4(Global_17172.f_54.f_61[iVar34 /*4*/]))
		{
			Var0 = { *(Global_17172.f_54.f_61[iVar34 /*4*/]) };
		}
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		if (!bParam1)
		{
			return func_948();
		}
		if (!func_949(&Var0, 0))
		{
			Var35 = { func_950(bParam0) };
		}
		else
		{
			Var35 = { Var0 };
		}
		return Var35;
	}
	return Var0;
}

var func_669(var uParam0, int iParam1)
{
	func_951(uParam0, iParam1, 0, 0);
	return Global_1903929->f_11;
}

var func_670(var uParam0, int iParam1)
{
	func_951(uParam0, iParam1, 0, 0);
	return Global_1903929->f_22;
}

int func_671(var uParam0, int iParam1)
{
	var uVar0;

	if (!func_951(uParam0, iParam1, 0, 0))
	{
	}
	if (!func_952(Global_1903929))
	{
		return 0;
	}
	uVar0 = func_953(Global_1903929->f_11, Global_1903929->f_27);
	return uVar0;
}

void func_672(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4)
{
	uParam0->f_47 = uParam1;
	uParam0->f_47.f_1 = uParam2;
	uParam0->f_47.f_2 = iParam3;
	uParam0->f_47.f_3 = uParam4;
}

void func_673()
{
	func_954(&(Global_1132968->f_4641.f_445));
}

int func_674(bool bParam0)
{
	if (func_23() == -1)
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

void func_675(int iParam0, int iParam1)
{
	INVENTORY::_0xA6AA9F56BC6CFF58(iParam0, iParam1);
	func_955(&(Global_1272170->f_12));
	func_955(&(Global_1272170->f_16));
}

int func_676(var uParam0)
{
	var uVar0;

	if (!func_956(32))
	{
		func_957(&(Global_1951141->f_2228));
		func_958(32);
	}
	if (uParam0->f_1 == 0)
	{
		if (!func_959(*uParam0))
		{
			if (func_956(32))
			{
				func_878(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1);
			}
			return 0;
		}
		func_960(&(Global_1951141->f_2228));
		if (!func_961(&(Global_1951141->f_1538), *uParam0, &uVar0, 0, 1, 0, 0, 0))
		{
			if (func_956(32))
			{
				func_878(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1);
			}
			return 0;
		}
		func_962(&(Global_1951141->f_1538));
	}
	func_963(33, Global_1132968->f_5509.f_4, 0, 0, 0);
	Global_1132968->f_5509.f_4 = *uParam0;
	Global_1132968->f_5509 = uParam0->f_1;
	func_963(30, 0, 0, 0, 0);
	func_963(27, 0, 0, 0, 0);
	func_963(32, Global_1132968->f_5509.f_4, 0, 0, 0);
	return 1;
}

void func_677()
{
	func_170(117);
}

void func_678(var uParam0)
{
	if (uParam0->f_4)
	{
		if (uParam0->f_25 == -1)
		{
			uParam0->f_25 = func_964(0, 0);
		}
		else if (uParam0->f_25 < 1)
		{
			uParam0->f_25 = 1;
		}
		else if (uParam0->f_25 > 10)
		{
			uParam0->f_25 = 10;
		}
		if (uParam0->f_25.f_1 == -1)
		{
			uParam0->f_25.f_1 = func_964(2, 0);
		}
		else if (uParam0->f_25.f_1 < 1)
		{
			uParam0->f_25.f_1 = 1;
		}
		else if (uParam0->f_25.f_1 > 10)
		{
			uParam0->f_25.f_1 = 10;
		}
		if (uParam0->f_25.f_2 == -1)
		{
			uParam0->f_25.f_2 = func_964(1, 0);
		}
		else if (uParam0->f_25.f_2 < 1)
		{
			uParam0->f_25.f_2 = 1;
		}
		else if (uParam0->f_25.f_2 > 10)
		{
			uParam0->f_25.f_2 = 10;
		}
		if (uParam0->f_25.f_3 == -1)
		{
			uParam0->f_25.f_3 = func_965(0);
		}
		else if (uParam0->f_25.f_3 < 1)
		{
			uParam0->f_25.f_3 = 1;
		}
		else if (uParam0->f_25.f_3 > 200)
		{
			uParam0->f_25.f_3 = 200;
		}
		if (uParam0->f_25.f_4 == -1)
		{
			uParam0->f_25.f_4 = func_966(0);
		}
		else if (uParam0->f_25.f_4 < 1)
		{
			uParam0->f_25.f_4 = 1;
		}
		else if (uParam0->f_25.f_4 > 200)
		{
			uParam0->f_25.f_4 = 200;
		}
		if (uParam0->f_25.f_5 == -1)
		{
			uParam0->f_25.f_5 = func_967(0);
		}
		else if (uParam0->f_25.f_5 < 1)
		{
			uParam0->f_25.f_5 = 1;
		}
		else if (uParam0->f_25.f_5 > 200)
		{
			uParam0->f_25.f_5 = 200;
		}
	}
	if (uParam0->f_5)
	{
		if (uParam0->f_25.f_6 == -1)
		{
		}
		else if (uParam0->f_25.f_6 > 18000)
		{
			uParam0->f_25.f_6 = 18000;
		}
		if (uParam0->f_25.f_7 == -1)
		{
		}
		else if (uParam0->f_25.f_7 > 18000)
		{
			uParam0->f_25.f_7 = 18000;
		}
		if (uParam0->f_25.f_8 == -1)
		{
		}
		else if (uParam0->f_25.f_8 > 18000)
		{
			uParam0->f_25.f_8 = 18000;
		}
	}
}

void func_679()
{
	func_968();
}

int func_680(int iParam0)
{
	if (func_398(&(Global_1954472->f_1465), iParam0, 1))
	{
		return 1;
	}
	return 0;
}

void func_681(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	func_969(0, iParam0);
	func_969(2, iParam1);
	func_969(1, iParam2);
	iVar0 = func_970(iParam0);
	func_971(0, iVar0);
	iVar0 = func_970(iParam1);
	func_971(2, iVar0);
	iVar0 = func_970(iParam2);
	func_971(1, iVar0);
}

void func_682(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_972(1);
	}
	if (iParam0 < 1)
	{
		iParam0 = Global_1954472->f_1446;
	}
	else if (iParam0 > 200)
	{
		iParam0 = Global_1954472->f_1446;
	}
	switch (iParam1)
	{
		case 0:
			Global_1954472->f_1446 = iParam0;
			break;
		case 1:
			Global_1954472->f_1465.f_136 = iParam0;
			break;
	}
}

void func_683(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_972(1);
	}
	if (iParam0 < 1)
	{
		iParam0 = Global_1954472->f_1446.f_1;
	}
	else if (iParam0 > 200)
	{
		iParam0 = Global_1954472->f_1446.f_1;
	}
	switch (iParam1)
	{
		case 0:
			Global_1954472->f_1446.f_1 = iParam0;
			break;
		case 1:
			Global_1954472->f_1465.f_136.f_1 = iParam0;
			break;
	}
}

void func_684(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_972(1);
	}
	if (iParam0 < 1)
	{
		iParam0 = Global_1954472->f_1446.f_2;
	}
	else if (iParam0 > 200)
	{
		iParam0 = Global_1954472->f_1446.f_2;
	}
	switch (iParam1)
	{
		case 0:
			Global_1954472->f_1446.f_2 = iParam0;
			break;
		case 1:
			Global_1954472->f_1465.f_136.f_2 = iParam0;
			break;
	}
}

void func_685()
{
	float fVar0;

	func_969(0, func_964(0, 0));
	func_969(2, func_964(2, 0));
	func_969(1, func_964(1, 0));
	fVar0 = func_973(0, 0);
	func_971(0, BUILTIN::FLOOR(fVar0));
	fVar0 = func_973(2, 0);
	func_971(2, BUILTIN::FLOOR(fVar0));
	fVar0 = func_973(1, 0);
	func_971(1, BUILTIN::FLOOR(fVar0));
}

void func_686(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_972(2);
	}
	switch (iParam0)
	{
		case 0:
			if (iParam2 == 0)
			{
				Global_1954472->f_1331.f_81 = uParam1;
			}
			else
			{
				Global_1954472->f_1465.f_2.f_81 = uParam1;
			}
			break;
		case 2:
			if (iParam2 == 0)
			{
				Global_1954472->f_1331.f_83 = uParam1;
			}
			else
			{
				Global_1954472->f_1465.f_2.f_83 = uParam1;
			}
			break;
		case 1:
			if (iParam2 == 0)
			{
				Global_1954472->f_1331.f_82 = uParam1;
			}
			else
			{
				Global_1954472->f_1465.f_2.f_82 = uParam1;
			}
			break;
		default:
			break;
	}
}

void func_687(int iParam0, var uParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	if (!func_974(iParam0, iParam2))
	{
		return;
	}
	vVar0.x = iParam0;
	vVar0.f_1 = uParam1;
	*(Global_1132968->f_5525.f_34[iParam2 /*3*/]) = { vVar0 };
}

void func_688()
{
	func_975();
	func_976();
}

void func_689(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_PED_ID();
	func_977();
	func_978();
	func_979(&uParam0, iVar0);
	func_980(&uParam0, iVar0);
	func_981(&uParam0, iVar0);
	func_982(&uParam0);
	func_983();
	func_984(1);
}

bool func_690(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_691(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_692(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

int func_693(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_691(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_692(iParam0, joaat("default"));
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_694(iParam0, 0, 0) };
	if (func_985(iParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_986(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_674(0), &uVar6, &Var1, iParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

struct<5> func_694(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_987(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_988(iParam0);
	switch (iVar5)
	{
		case joaat("clothing"):
			Var0 = { func_695(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			break;
		case joaat("weapon"):
			Var0 = { func_989(bParam1) };
			if (bParam2 && func_990(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_991(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_991(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_992(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_993(bParam1) };
			switch (func_873(iParam0))
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
			Jump @892; //curOff = 410
			if (func_994(iParam0, -1823706425))
			{
				Var0 = { func_695(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_994(iParam0, -1483207246))
			{
				Var0 = { func_695(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1911121386))
			{
				Var0 = { func_695(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_994(iParam0, -1653629781))
			{
				Var0 = { func_695(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			Jump @892; //curOff = 654
			if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -833319691))
			{
				Var28.f_9 = -1591664384;
				if (!func_995(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_994(iParam0, -1653629781))
			{
				Var0 = { func_695(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("character"));
				if (Var0.f_4 == 0)
				{
				}
			}
			return Var0;
		}

struct<4> func_695(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_691(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_674(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_696(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_691(iParam0, 0))
	{
		return 0;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_985(iParam0, uParam2, iParam3, bParam5, 0, -1, 0))
	{
		return 0;
	}
	if (!func_986(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_674(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

bool func_697(var uParam0, int iParam1)
{
	return func_78(uParam0->f_20, iParam1);
}

Vector3 func_698()
{
	return Local_1706.f_316;
}

int func_699(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return 0;
	}
	if (!func_702(iParam1))
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

Vector3 func_700()
{
	return Local_1706.f_319;
}

Vector3 func_701()
{
	return Local_1706.f_322;
}

bool func_702(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

Vector3 func_703(int iParam0)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	switch (Local_243.f_2)
	{
		case -348618743:
			switch (iParam0)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return -6041.97f, -3537.536f, -4.6068f;
						case 1:
							return -6100.441f, -3525.772f, 5.1807f;
						case 2:
							return -6069.9f, -3454.741f, 12.2916f;
						default:
							break;
					}
					break;
				case 1:
					switch (iVar0)
					{
						case 0:
							return -6020.848f, -3768.271f, -26.119f;
						case 1:
							return -6204.641f, -3830.656f, -26.4589f;
						case 2:
							return -6352.181f, -3733.388f, -23.9431f;
						default:
							break;
					}
					break;
				case 2:
					switch (iVar0)
					{
						case 0:
							return -6246.348f, -3682.845f, 9.1211f;
						case 1:
							return -6123.118f, -3653.438f, 17.4948f;
						case 2:
							return -6156.325f, -3476.611f, 31.6582f;
						default:
							break;
					}
					break;
			}
			break;
		case 1706859953:
			switch (iParam0)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return -1928.31f, -1647.538f, 117.6614f;
						case 1:
							return -1958.225f, -1792.649f, 120.7689f;
						case 2:
							return -1936.479f, -1839.569f, 116.5473f;
						default:
							break;
					}
					break;
				case 1:
					switch (iVar0)
					{
						case 0:
							return -2272.769f, -1964.496f, 102.1049f;
						case 1:
							return -2288.559f, -1912.634f, 106.4639f;
						case 2:
							return -2263.624f, -1652.642f, 143.1282f;
						default:
							break;
					}
					break;
				case 2:
					switch (iVar0)
					{
						case 0:
							return -2024.205f, -1665.178f, 133.1946f;
						case 1:
							return -1960.695f, -1968.046f, 92.5306f;
						case 2:
							return -2083.111f, -1511.441f, 136.1538f;
						default:
							break;
					}
					break;
			}
			break;
		case 1921384287:
			switch (iParam0)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return 2413.239f, 1757.95f, 105.3729f;
						case 1:
							return 2340.631f, 1814.913f, 122.7684f;
						case 2:
							return 2393.745f, 1613.783f, 92.5807f;
						default:
							break;
					}
					break;
				case 1:
					switch (iVar0)
					{
						case 0:
							return 2532.781f, 1518.423f, 85.5812f;
						case 1:
							return 2563.399f, 1661.195f, 95.4974f;
						case 2:
							return 2693.529f, 1819.483f, 103.665f;
						default:
							break;
					}
					break;
				case 2:
					switch (iVar0)
					{
						case 0:
							return 2750.177f, 1768.915f, 148.5721f;
						case 1:
							return 2761.225f, 1853.416f, 140.7395f;
						case 2:
							return 2769.496f, 1884.319f, 160.0032f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_704(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
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
	if (!func_702(iParam1))
	{
		return 0;
	}
	iVar0 = func_996(iParam1, vParam2, fParam5, iParam8, 1, bParam6, bParam7, bParam9);
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

int func_705(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_1706.f_327[iParam0])))
	{
		return 1;
	}
	vVar0 = { *(Local_2503.f_715[iParam0 /*3*/]) };
	vVar3 = { func_997(&vVar0) };
	uVar6 = vVar3.z;
	if (!func_999(Local_1706.f_327[iParam0], func_372(&vVar0), func_998(&vVar0), uVar6, 1, 0, 0, 0))
	{
		return 0;
	}
	ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_VEH(&(Local_1706.f_327[iParam0])), func_998(&vVar0), true, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_VEH(&(Local_1706.f_327[iParam0])), func_997(&vVar0), 2, true);
	if (func_1000(&vVar0) != 0)
	{
		(Local_2503.f_715[iParam0 /*3*/])->f_2 = PROPSET::_CREATE_PROPSET_3(func_1000(&vVar0), 0f, 0f, 0f, NETWORK::NET_TO_VEH(&(Local_1706.f_327[iParam0])), 0f, false, 1, true);
	}
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_VEH(&(Local_1706.f_327[iParam0])), 1);
	return 1;
}

int func_706(int iParam0, int iParam1, int iParam2)
{
	if (func_697(Local_1706.f_51[iParam0 /*22*/], 2))
	{
		return 1;
	}
	if ((Local_2503.f_42[iParam0 /*56*/])->f_55 == -1)
	{
		(Local_2503.f_42[iParam0 /*56*/])->f_55 = iParam0;
	}
	if (!func_1001(NETWORK::PARTICIPANT_ID_TO_INT(), Local_2503.f_42[iParam0 /*56*/], 1))
	{
		if (func_1002(Local_1706.f_51[iParam0 /*22*/], Local_2503.f_42[iParam0 /*56*/], iParam1))
		{
			func_1003((Local_2054[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/])->f_1[iParam0], 1);
		}
		else
		{
			return 0;
		}
	}
	if (func_1004(Local_1706.f_51[iParam0 /*22*/], Local_2503.f_42[iParam0 /*56*/], iParam1, iParam2))
	{
		func_1005(Local_1706.f_51[iParam0 /*22*/], 2);
		func_1005(Local_1706.f_51[iParam0 /*22*/], 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_707(int iParam0)
{
	var uVar0;
	vector3 vVar1;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_1706.f_334[iParam0])))
	{
		return 1;
	}
	uVar0 = &Local_2503.f_808[iParam0];
	vVar1 = { func_1006(&uVar0) };
	if (!func_1007(Local_1706.f_334[iParam0], func_371(&uVar0), func_1006(&uVar0), vVar1.z, 1, 1, 1150681088 /* Float: 1200f */))
	{
		return 0;
	}
	return 1;
}

void func_708(int iParam0)
{
	if (Local_1706.f_347 == iParam0)
	{
		return;
	}
	Local_1706.f_347 = iParam0;
}

void func_709()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	struct<22> Var5;

	if (func_712(16))
	{
		if (Local_1706.f_8 == -1)
		{
			func_1008();
			return;
		}
		if (func_1009(&(Local_1706.f_10), 7500))
		{
			Local_1706.f_6 = 5f;
			func_1008();
			return;
		}
		if (!func_697(Local_1706.f_51[Local_1706.f_8 /*22*/], 2))
		{
			bVar1 = true;
			iVar0 = 0;
			while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !func_545(iVar0, 8))
				{
					bVar1 = false;
				}
				iVar0++;
			}
			if (bVar1)
			{
				if (Local_1706.f_16 == -1)
				{
					iVar2 = func_1010(Local_1706.f_51[Local_1706.f_8 /*22*/], Local_2503.f_42[Local_1706.f_8 /*56*/]);
					if (iVar2 != -1)
					{
						Local_1706.f_16 = iVar2;
					}
				}
				else if (func_1004(Local_1706.f_51[Local_1706.f_8 /*22*/], Local_2503.f_42[Local_1706.f_8 /*56*/], 0, -1))
				{
					Local_1706.f_2[2] = &Local_1706.f_2[1];
					Local_1706.f_2[1] = &Local_1706.f_2[0];
					Local_1706.f_2[0] = (&Local_2503.f_42[Local_1706.f_8 /*56*/] + Local_1706.f_16);
					func_1005(Local_1706.f_51[Local_1706.f_8 /*22*/], 2);
				}
			}
		}
		else
		{
			bVar3 = true;
			iVar0 = 0;
			while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !func_545(iVar0, 16))
				{
					bVar3 = false;
				}
				iVar0++;
			}
			if (bVar3)
			{
				func_1005(Local_1706.f_51[Local_1706.f_8 /*22*/], 1);
				func_1008();
			}
		}
	}
	if (func_712(32))
	{
		if (Local_1706.f_17 == -1)
		{
			func_1011();
			return;
		}
		if (func_697(Local_1706.f_51[Local_1706.f_17 /*22*/], 1))
		{
			bVar4 = true;
			iVar0 = 0;
			while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !func_545(iVar0, 32))
				{
					bVar4 = false;
				}
				iVar0++;
			}
			if (bVar4)
			{
				Var5.f_1 = 3;
				*(Local_1706.f_51[Local_1706.f_17 /*22*/]) = { Var5 };
				func_1011();
			}
		}
	}
}

bool func_710(var uParam0, var uParam1)
{
	return (func_697(uParam0, 1) && uParam1->f_55 != -1);
}

void func_711(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;

	if (!func_697(uParam0, 4) && func_1001(Local_2503, uParam1, 4))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_21 - 1))
		{
			func_1012(uParam0->f_1[iVar0 /*6*/], 4);
			iVar0++;
		}
		func_1005(uParam0, 4);
	}
	if (!func_697(uParam0, 32))
	{
		bVar1 = true;
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_21 - 1))
		{
			if (!func_1013(uParam0->f_1[iVar0 /*6*/], 512))
			{
				bVar1 = false;
			}
			iVar0++;
		}
		if (bVar1)
		{
			func_1005(uParam0, 32);
		}
	}
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_21 - 1))
	{
		func_1014(uParam0->f_1[iVar0 /*6*/], uParam1->f_1[iVar0 /*17*/]);
		if (!func_697(uParam0, 16) && func_1013(uParam0->f_1[iVar0 /*6*/], 32))
		{
			func_1005(uParam0, 16);
		}
		if (!func_1013(uParam0->f_1[iVar0 /*6*/], 32) && func_697(uParam0, 16))
		{
			func_1012(uParam0->f_1[iVar0 /*6*/], 32);
		}
		iVar0++;
	}
}

bool func_712(int iParam0)
{
	return func_78(Local_1706.f_1, iParam0);
}

int func_713(int iParam0)
{
	int iVar0;

	if (func_712(32))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_545(iVar0, 32))
			{
				return 0;
			}
		}
		iVar0++;
	}
	func_1015(32);
	Local_1706.f_17 = iParam0;
	return 1;
}

float func_714(var uParam0)
{
	if (!func_160(uParam0))
	{
		return 0f;
	}
	return (BUILTIN::TO_FLOAT(func_190(uParam0)) * 0.001f);
}

int func_715()
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (!func_697(Local_1706.f_51[iVar0 /*22*/], 1))
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	return iVar1;
}

int func_716()
{
	float fVar0[9];
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	float fVar15;
	int iVar16;
	float fVar17;
	float fVar18;

	iVar11 = 0;
	while (iVar11 < 9)
	{
		iVar12 = func_1016(iVar11);
		if (iVar12 == 0)
		{
		}
		else if (!func_1017(iVar12))
		{
		}
		else
		{
			iVar13 = func_1018(iVar12);
			iVar14 = func_403(iVar12);
			fVar0[iVar11] = BUILTIN::TO_FLOAT((iVar13 - iVar14));
			if (iVar12 == -1346830927 || iVar12 == -66644432)
			{
				if (func_403(-1346830927) == 0 && func_403(-66644432) == 0)
				{
					fVar0[iVar11] = (&fVar0[iVar11] * 5f);
				}
			}
			else if (iVar12 == 1404758079 && func_403(1404758079) < 2)
			{
				fVar0[iVar11] = (&fVar0[iVar11] * 2f);
			}
			iVar10 = (iVar10 + BUILTIN::FLOOR(&(fVar0[iVar11])));
		}
		iVar11++;
	}
	if (iVar10 == 0)
	{
		return 0;
	}
	iVar11 = 0;
	while (iVar11 < 9)
	{
		fVar0[iVar11] = (&fVar0[iVar11] / BUILTIN::TO_FLOAT(iVar10));
		iVar11++;
	}
	fVar15 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	iVar16 = 0;
	fVar17 = 0f;
	iVar11 = 0;
	while (iVar11 < 9)
	{
		if (&fVar0[iVar11] == 0f)
		{
		}
		else
		{
			fVar18 = (fVar17 + &fVar0[iVar11]);
			if (fVar15 >= fVar17 && fVar15 <= fVar18)
			{
				iVar16 = func_1016(iVar11);
				if (iVar16 != 0)
				{
				}
				else
				{
					fVar17 = fVar18;
					iVar11++;
				}
				return iVar16;
			}
		}
	}

int func_717(int iParam0, int iParam1)
{
	int iVar0;

	if (func_712(16))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_545(iVar0, 8) || func_545(iVar0, 16))
			{
				return 0;
			}
		}
		iVar0++;
	}
	func_1015(16);
	Local_1706.f_7 = iParam0;
	Local_1706.f_8 = func_715();
	Local_1706.f_16 = iParam1;
	if (Local_1706.f_8 < 0)
	{
		func_1008();
		return 0;
	}
	return 1;
}

int func_718(int iParam0)
{
	if (iParam0 == 255)
	{
		return 0;
	}
	else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	Local_0.f_10 = iParam0;
	return 1;
}

void func_719(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_720(int iParam0)
{
	struct<6> Var0;

	Var0.f_1 = 255;
	Var0.f_2 = -1;
	Var0.f_2.f_1 = -1;
	Var0.f_5 = -1;
	*(Global_1102099->f_34.f_353[iParam0 /*6*/]) = { Var0 };
	((*Global_1266476)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*98*/])->f_97 = 0;
}

void func_721(int iParam0)
{
	struct<11> Var0;
	vector3 vVar11;

	SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_26832), iParam0);
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_26836), iParam0);
	(Global_1102099->f_34[iParam0 /*11*/])->f_6 = 0;
	Var0 = 4;
	*(Global_1102099->f_34[iParam0 /*11*/]) = { Var0 };
	func_1019(iParam0);
	vVar11 = 255;
	*((*(*Global_1266476)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*98*/])[iParam0 /*3*/]) = { vVar11 };
	if ((!func_1020() || !func_1021()) || Global_1572887->f_6)
	{
		func_623(MISC::_CREATE_VAR_STRING(2, "PARLEY_TICKER_END_DC"), -2, 0, 0, 0, 1);
	}
	if (!func_1022(&((Global_1102099->f_34[iParam0 /*11*/])->f_8), 256))
	{
		if (func_1023(Global_1102099->f_34.f_774) < 2 || Global_1102099->f_34.f_778 != 255)
		{
			func_1024(&(Global_1102099->f_34.f_773), 64);
		}
		else
		{
			func_1024(&(Global_1102099->f_34.f_773), 32);
		}
		Global_1102099->f_34.f_774 = Global_1275573->f_21;
	}
}

void func_722(int iParam0, bool bParam1)
{
	int iVar0;
	struct<11> Var1;
	vector3 vVar12;
	var uVar15;
	struct<6> Var16;

	if (!NETWORK::_0x255A5EF65EDA9167(iParam0) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	if (!(Global_1102099->f_34[iVar0 /*11*/])->f_6)
	{
		return;
	}
	func_1025(iParam0);
	func_887(iParam0);
	func_888(iParam0);
	func_1026(&((Global_1102099->f_34[iVar0 /*11*/])->f_8), 2);
	func_1019(iVar0);
	if (NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Global_1102099->f_34.f_546[iVar0 /*7*/]) == iParam0 && !func_1022(&((Global_1102099->f_34[iVar0 /*11*/])->f_8), 256))
	{
		if (func_1023(Global_1102099->f_34.f_774) < 2 || Global_1102099->f_34.f_778 != 255)
		{
			func_1024(&(Global_1102099->f_34.f_773), 64);
		}
		else
		{
			func_1024(&(Global_1102099->f_34.f_773), 32);
			Global_1102099->f_34.f_778 = iParam0;
		}
		Global_1102099->f_34.f_774 = Global_1275573->f_21;
		func_623(MISC::_CREATE_VAR_STRING(10, "PARLEY_TICKER_END", func_534(PLAYER::GET_PLAYER_NAME(iParam0), func_533(iParam0, 1, -1, 0))), -2, 0, 0, 0, 1);
	}
	Var1 = 4;
	*(Global_1102099->f_34[iVar0 /*11*/]) = { Var1 };
	vVar12 = 255;
	*((*(*Global_1266476)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*98*/])[iVar0 /*3*/]) = { vVar12 };
	if (!bParam1)
	{
		return;
	}
	SCRIPTS::_0x31010318BA9897AC(&uVar15, iVar0);
	Var16.f_5 = PLAYER::PLAYER_ID();
	Var16.f_4 = 5;
	func_1027(&Var16, &uVar15);
}

bool func_723(int iParam0)
{
	if (((*Global_1266476)[iParam0 /*98*/])->f_97)
	{
		return ((*Global_1266476)[iParam0 /*98*/])->f_97;
	}
	return &(Global_1102099->f_34.f_353[iParam0 /*6*/]);
}

int func_724(vector3 vParam0, float fParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;

	if (!func_157(Local_243.f_1332))
	{
		return 0;
	}
	if (!func_114())
	{
		return 0;
	}
	func_1028(-276653911, &fVar0, &fVar1, &fVar2);
	GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_COLOUR(fVar0, fVar1, fVar2);
	if (GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_fme_smoke_puff_tint", vParam0, 0f, 0f, 0f, fParam3, false, false, false))
	{
		return 1;
	}
	return 0;
}

void func_725()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	struct<14> Var6;
	struct<14> Var20;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	func_1029();
	iVar1 = INVENTORY::_0x80D78BDC9D88EF07(INVENTORY::_0x13D234A2A3F66E63(Global_34), "ALL WEAPONS", -1591664384, &iVar0);
	if (iVar1 < 0 || iVar0 <= 0)
	{
		INVENTORY::_0x42A2F33A1942E865(iVar1);
		return;
	}
	if (func_1030(&iVar2, &iVar3))
	{
		func_1031(iVar2, iVar3, 0);
	}
	bVar4 = false;
	iVar5 = func_500();
	Var6.f_9 = -1591664384;
	Var20.f_9 = -1591664384;
	iVar37 = -1;
	iVar38 = -1;
	iVar39 = -1;
	iVar40 = -1;
	iVar41 = -1;
	iVar42 = -1;
	iVar43 = -1;
	iVar34 = 0;
	while (iVar34 <= (iVar0 - 1))
	{
		Var6 = { Var20 };
		if (INVENTORY::_0x82FA24C3D3FCD9B7(iVar1, iVar34, &Var6))
		{
			if (iVar5 != 0 && Var6.f_4 == iVar5)
			{
				bVar4 = true;
			}
			if (WEAPON::_0x705BE297EEBDB95D(Var6.f_4) && WEAPON::_0xF29A186ED428B552(Global_34, Var6.f_4))
			{
				if (WEAPON::_0xC212F1D05A8232BB(Var6.f_4))
				{
					iVar37 = func_1032(1681219929 /* GXTEntry: "Revolver Cartridges - Regular" */, 0, 0, 0);
					iVar37 = (iVar37 + func_1032(1232099469 /* GXTEntry: "Revolver Cartridges - Express" */, 0, 0, 0));
					iVar37 = (iVar37 + func_1032(78180283 /* GXTEntry: "Revolver Cartridges - Explosive" */, 0, 0, 0));
					iVar37 = (iVar37 + func_1032(-2084181920 /* GXTEntry: "Revolver Cartridges - High Velocity" */, 0, 0, 0));
					iVar37 = (iVar37 + func_1032(1243983880 /* GXTEntry: "Revolver Cartridges - Split Point" */, 0, 0, 0));
					iVar35 = (iVar35 + iVar37);
				}
				else if (WEAPON::_0xDDC64F5E31EEDAB6(Var6.f_4))
				{
					iVar38 = func_1032(joaat("ammo_pistol"), 0, 0, 0);
					iVar38 = (iVar38 + func_1032(836939099 /* GXTEntry: "Pistol Cartridges - Express" */, 0, 0, 0));
					iVar38 = (iVar38 + func_1032(1185302722 /* GXTEntry: "Pistol Cartridges - Explosive" */, 0, 0, 0));
					iVar38 = (iVar38 + func_1032(-1411815376 /* GXTEntry: "Pistol Cartridges - High Velocity" */, 0, 0, 0));
					iVar38 = (iVar38 + func_1032(236338048 /* GXTEntry: "Pistol Cartridges - Split Point" */, 0, 0, 0));
					iVar35 = (iVar35 + iVar38);
				}
				else if (WEAPON::_0xDDB2578E95EF7138(Var6.f_4))
				{
					iVar39 = func_1032(-1330115686 /* GXTEntry: "Repeater Cartridges - Regular" */, 0, 0, 0);
					iVar39 = (iVar39 + func_1032(-578347576 /* GXTEntry: "Repeater Cartridges - Express" */, 0, 0, 0));
					iVar39 = (iVar39 + func_1032(-1668585578 /* GXTEntry: "Repeater Cartridges - Explosive" */, 0, 0, 0));
					iVar39 = (iVar39 + func_1032(231465488 /* GXTEntry: "Repeater Cartridges - High Velocity" */, 0, 0, 0));
					iVar39 = (iVar39 + func_1032(1148521608 /* GXTEntry: "Repeater Cartridges - Split Point" */, 0, 0, 0));
					iVar36 = (iVar36 + iVar39);
				}
				else if (Var6.f_4 == joaat("weapon_rifle_varmint"))
				{
					iVar40 = func_1032(2113196069, 0, 0, 0);
					iVar36 = (iVar36 + iVar40);
				}
				else if (WEAPON::_0x0A82317B7EBFC420(Var6.f_4) || WEAPON::_0x6AD66548840472E5(Var6.f_4))
				{
					iVar41 = func_1032(joaat("ammo_rifle"), 0, 0, 0);
					iVar41 = (iVar41 + func_1032(1654725195 /* GXTEntry: "Rifle Cartridges - Express" */, 0, 0, 0));
					iVar41 = (iVar41 + func_1032(1838310467 /* GXTEntry: "Rifle Cartridges - Explosive" */, 0, 0, 0));
					iVar41 = (iVar41 + func_1032(1858824185 /* GXTEntry: "Rifle Cartridges - High Velocity" */, 0, 0, 0));
					iVar41 = (iVar41 + func_1032(200254898 /* GXTEntry: "Rifle Cartridges - Split Point" */, 0, 0, 0));
					iVar36 = (iVar36 + iVar41);
				}
				else if (WEAPON::_0xC75386174ECE95D5(Var6.f_4))
				{
					iVar42 = func_1032(joaat("ammo_shotgun"), 0, 0, 0);
					iVar42 = (iVar42 + func_1032(-1077205471 /* GXTEntry: "Shotgun Shells - Buckshot Incendiary" */, 0, 0, 0));
					iVar42 = (iVar42 + func_1032(314966081 /* GXTEntry: "Shotgun - Slug" */, 0, 0, 0));
					iVar42 = (iVar42 + func_1032(588559146 /* GXTEntry: "Shotgun Slugs - Explosive" */, 0, 0, 0));
					if (Var6.f_4 == joaat("weapon_shotgun_sawedoff"))
					{
						iVar35 = (iVar35 + iVar42);
					}
					else
					{
						iVar36 = (iVar36 + iVar42);
					}
				}
				else if (func_1033(Var6.f_4))
				{
					iVar43 = func_1032(954660191 /* GXTEntry: "Arrows" */, 0, 0, 0);
					iVar43 = (iVar43 + func_1032(-1040876935 /* GXTEntry: "Arrow - Dynamite" */, 0, 0, 0));
					iVar43 = (iVar43 + func_1032(296901449 /* GXTEntry: "Arrow - Fire" */, 0, 0, 0));
					iVar43 = (iVar43 + func_1032(-1841822177 /* GXTEntry: "Arrow - Improved" */, 0, 0, 0));
					iVar43 = (iVar43 + func_1032(126245522 /* GXTEntry: "Arrow - Poison" */, 0, 0, 0));
					iVar43 = (iVar43 + func_1032(1657716792 /* GXTEntry: "Arrow - Tracking" */, 0, 0, 0));
					iVar36 = (iVar36 + iVar43);
				}
			}
		}
		iVar34++;
	}
	if (iVar37 >= 0)
	{
		iVar44 = 30;
		if (iVar35 < iVar44)
		{
			func_1031(1681219929 /* GXTEntry: "Revolver Cartridges - Regular" */, (iVar44 - iVar35), 0);
			iVar35 = iVar44;
		}
	}
	if (iVar38 >= 0)
	{
		iVar44 = 20;
		if (iVar35 < iVar44)
		{
			func_1031(joaat("ammo_pistol"), (iVar44 - iVar35), 0);
			iVar35 = iVar44;
		}
	}
	if (iVar39 >= 0)
	{
		iVar44 = 20;
		if (iVar36 < iVar44)
		{
			func_1031(-1330115686 /* GXTEntry: "Repeater Cartridges - Regular" */, (iVar44 - iVar36), 0);
			iVar36 = iVar44;
		}
	}
	if (iVar41 >= 0)
	{
		iVar44 = 10;
		if (iVar36 < iVar44)
		{
			func_1031(joaat("ammo_rifle"), (iVar44 - iVar36), 0);
			iVar36 = iVar44;
		}
	}
	if (iVar40 >= 0)
	{
		iVar44 = 10;
		if (iVar36 < iVar44)
		{
			func_1031(2113196069, (iVar44 - iVar36), 0);
			iVar36 = iVar44;
		}
	}
	if (iVar42 >= 0)
	{
		iVar44 = 6;
		if (!WEAPON::_0xF29A186ED428B552(Global_34, joaat("weapon_shotgun_sawedoff")))
		{
			if (iVar36 < iVar44)
			{
				func_1031(joaat("ammo_shotgun"), (iVar44 - iVar36), 0);
				iVar36 = iVar44;
			}
		}
		else if (iVar35 < iVar44)
		{
			func_1031(joaat("ammo_shotgun"), (iVar44 - iVar35), 0);
			iVar35 = iVar44;
		}
	}
	if (iVar43 >= 0)
	{
		iVar44 = 5;
		if (iVar36 < iVar44)
		{
			func_1031(954660191 /* GXTEntry: "Arrows" */, (iVar44 - iVar36), 0);
			iVar36 = iVar44;
		}
	}
	INVENTORY::_0x42A2F33A1942E865(iVar1);
	if (iVar5 != 0)
	{
		if (!bVar4 || !WEAPON::_0xF29A186ED428B552(Global_34, iVar5))
		{
			if (func_1034(iVar5) && !func_134(8388608))
			{
				func_43(8388608);
			}
		}
	}
}

void func_726()
{
	func_1035(0);
}

bool func_727()
{
	return Global_1939231->f_1;
}

void func_728()
{
	Global_1939231->f_12 = 1;
}

int func_729(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return 1;
	}
	uParam0->f_1 = OBJECT::CREATE_OBJECT(func_370(uParam0), func_1036(uParam0), false, false, false, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return 0;
	}
	ENTITY::SET_ENTITY_COORDS(uParam0->f_1, func_1036(uParam0), true, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(uParam0->f_1, func_1037(uParam0), 2, true);
	if (func_1038(uParam0))
	{
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam0->f_1, true);
		ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_1, false);
		FIRE::ADD_EXPLOSION(func_1036(uParam0), 26, 1f, 0, 1, 0f);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_1, true);
	}
	return 1;
}

bool func_730()
{
	return (Global_1275565->f_2.f_1 == 2 || Global_1275565->f_2.f_1 == 1);
}

int func_731(int iParam0, struct<2> Param1, var uParam3)
{
	struct<2> Var0;

	if (func_16(Param1, 0, 128))
	{
		return 0;
	}
	func_738(iParam0, Param1);
	if (iParam0 == -1)
	{
		return 0;
	}
	if ((Global_1185132->f_66[iParam0 /*20*/])->f_3 == -1)
	{
		return 0;
	}
	if (func_18(iParam0, 32))
	{
		return 1;
	}
	if (!func_73(Param1))
	{
		return 0;
	}
	else if (!func_360(Param1))
	{
		return 0;
	}
	else if (func_361(Param1))
	{
		return 0;
	}
	Var0 = { func_156() };
	if (func_73(Var0) && !func_74(Var0, Param1))
	{
		return 0;
	}
	func_1039(Param1, 1, 1, 1);
	func_1040(Param1, 1, 0, -1);
	func_1041(2);
	func_1042((Global_1185132->f_66[iParam0 /*20*/])->f_3, uParam3);
	func_246(iParam0, 32);
	func_1043(7);
	if (func_650((Global_1185132->f_66[iParam0 /*20*/])->f_3) != -785841056)
	{
		func_1044();
		SCRIPTS::_0x7D654266025E921B(1638906956);
	}
	else
	{
		SCRIPTS::_0x7D654266025E921B(784116709);
		STATS::_0xE5A680A5D8B1F687(1);
	}
	return 1;
}

void func_732(bool bParam0)
{
	if (Local_243.f_9 == -785841056 && !func_130(func_129(Local_243.f_1)))
	{
		func_1045(func_129(Local_243.f_1));
		if (bParam0)
		{
			func_1046(func_129(Local_243.f_1), Local_243.f_7, -1);
		}
	}
}

int func_733()
{
	switch (Local_243.f_1)
	{
		case 15:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_734(int iParam0)
{
	return 1;
}

bool func_735()
{
	return func_490(_NAMESPACE71::_0xC17F69E1418CD11F(6));
}

int func_736(int iParam0, int iParam1, var uParam2, struct<2> Param3)
{
	struct<53> Var0;
	struct<8> Var53;
	int iVar61;

	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = joaat("COLOR_WHITE");
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_18 = joaat("COLOR_WHITE");
	Var0.f_19 = joaat("COLOR_WHITE");
	Var0.f_23 = 300;
	Var0.f_31.f_8 = joaat("COLOR_WHITE");
	Var0.f_31.f_11 = joaat("COLOR_WHITE");
	Var0.f_31.f_12 = 8000;
	Var0.f_31.f_13 = 1511356879;
	Var0.f_31.f_15 = 1433015236;
	Var0.f_31.f_21 = 1;
	Var53 = { func_27(iParam1, uParam2) };
	Var0.f_20 = func_1047(iParam1);
	Var0.f_21 = func_1048(iParam1);
	Var0.f_24 = 6;
	Var0.f_25 = func_902(Param3);
	Var0.f_23 = 180;
	if (func_650(iParam1) != -785841056)
	{
		Var0.f_31.f_2 = MISC::_CREATE_VAR_STRING(10, "FME_TOAST_OPT_IN_TITLE", &Var53);
		Var0.f_16 = MISC::_CREATE_VAR_STRING(2, &Var53);
		Var0.f_17 = MISC::_CREATE_VAR_STRING(2, "FME_PI_MENU_BODY");
		Var0.f_2 = -276653911;
		Var0.f_19 = -276653911;
	}
	else
	{
		iVar61 = (Global_1184573->f_1[iParam0 /*26*/])->f_7;
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar61))
		{
			return 0;
		}
		Var0.f_31.f_2 = MISC::_CREATE_VAR_STRING(10, "FME_TOAST_OPT_IN_TITLE_POSSE_VERSUS", &Var53);
		Var0.f_16 = MISC::_CREATE_VAR_STRING(10, "FME_PI_MENU_TITLE_POSSE_VERSUS", PLAYER::GET_PLAYER_NAME(iVar61));
		Var0.f_17 = MISC::_CREATE_VAR_STRING(2, &Var53);
	}
	Var0.f_31.f_3 = MISC::_CREATE_VAR_STRING(2, "NM_TI_VIEW_INVITE_FREE_MODE_EVENT");
	Var0.f_31.f_6 = func_1047(iParam1);
	Var0.f_31.f_7 = func_1048(iParam1);
	Var0.f_31.f_17 = func_121();
	Var0.f_31.f_18 = func_120();
	Var0.f_22 = 1;
	return func_1049(Var0);
}

int func_737()
{
	switch (Local_243.f_1)
	{
		case 15:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_738(int iParam0, struct<2> Param1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (func_18(iParam0, 16))
	{
		return 1;
	}
	if (!func_73(Param1))
	{
		return 0;
	}
	else if (func_360(Param1))
	{
		return 0;
	}
	else if (func_361(Param1))
	{
		return 0;
	}
	func_1050(Param1);
	func_246(iParam0, 16);
	return 1;
}

bool func_739(int iParam0, int iParam1, int iParam2)
{
	return func_78((*Global_1184801)[iParam2 /*10*/][iParam0], iParam1);
}

bool func_740(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915180->f_20136;
	}
	return (Global_1915180->f_20136 || Global_1915180->f_21989.f_1);
}

int func_741()
{
	return Global_1915180->f_19742;
}

void func_742(int iParam0, bool bParam1)
{
	if (!func_1051(iParam0))
	{
		return;
	}
	if ((bParam1 && func_1052(iParam0, 512)) || (!bParam1 && !func_1052(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_1053(iParam0, 512);
	}
	else
	{
		func_1054(iParam0, 512);
	}
	if (func_1055(iParam0))
	{
		INVENTORY::_0x9B4E793B1CB6550A();
	}
}

int func_743()
{
	return 1;
}

void func_744()
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_34) && PED::_0x7A4E00364B5D727B(Global_34))
		{
			func_332(1024);
		}
		if (!func_134(1024))
		{
			func_343(0);
			func_43(1024);
		}
	}
}

void func_745()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && func_157(iVar0))
		{
			func_1056(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)));
		}
		iVar0++;
	}
	if (!func_134(2048))
	{
		if (Local_243.f_9 == -785841056)
		{
			func_344(1);
		}
		else
		{
			func_345(0);
			LAW::_0x710448D44A64C213(0);
			LAW::_0xC805EB785824F712(0);
		}
		func_43(2048);
	}
}

int func_746(int iParam0)
{
	return 1;
}

void func_747()
{
	if (!func_134(1))
	{
		func_43(1);
	}
	if (!func_748(255))
	{
		func_342(1);
	}
}

bool func_748(int iParam0)
{
	return func_168(48, iParam0);
}

bool func_749(int iParam0)
{
	return func_168(47, iParam0);
}

int func_750(vector3 vParam0, float fParam3, vector3 vParam4, int iParam7)
{
	if (func_749(255))
	{
		func_1057(&(Global_1099294->f_546));
		Global_1099294->f_546.f_6 = { vParam0 };
		if (ENTITY::DOES_ENTITY_EXIST(iParam7))
		{
			Global_1099294->f_546.f_4 = iParam7;
			Global_1099294->f_546.f_5 = 3;
		}
		else if (!func_68(vParam4))
		{
			Global_1099294->f_546.f_1 = { vParam4 };
			Global_1099294->f_546.f_5 = 2;
		}
		else
		{
			Global_1099294->f_546 = fParam3;
			Global_1099294->f_546.f_5 = 1;
		}
		func_1058(Global_1099294->f_546, 36);
		func_170(4);
		func_169(47);
		return 1;
	}
	return 0;
}

int func_751(var uParam0, var uParam1, float fParam2)
{
	*uParam0 = 1f;
	*uParam1 = fParam2;
	if (*uParam1 <= *uParam0)
	{
		*uParam1 = 200f;
	}
	else if (*uParam1 > 200f)
	{
		*uParam1 = 200f;
	}
	return 1;
}

int func_752(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	struct<5> Var0;

	*uParam2 = 1f;
	*uParam3 = fParam4;
	if (((func_36(&Var0, iParam0) && func_44(&Var0)) && func_45(&Var0, uParam1)) && func_785(&Var0))
	{
		func_142(Var0, -1963437248, uParam2, 0);
		func_142(Var0, -415053522, uParam3, 0);
	}
	if (*uParam3 <= *uParam2)
	{
		*uParam3 = 200f;
	}
	else if (*uParam3 > 200f)
	{
		*uParam3 = 200f;
	}
	return 1;
}

int func_753()
{
	if (func_65(131072) && Local_243.f_10 >= 4)
	{
		if ((Local_50[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/])->f_4 > Local_243.f_1420)
		{
			if (!func_357() == 4)
			{
				func_358(4);
				return 1;
			}
		}
	}
	return 0;
}

void func_754(int iParam0, var uParam1, vector3 vParam2, float fParam5, float fParam6, float fParam7, var uParam8, var uParam9)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	vector3 vVar9;
	var uVar12;
	int iVar13;

	vVar0 = { vParam2 };
	if (fParam7 > fParam6)
	{
		fVar3 = (fParam7 - fParam6);
		iVar5 = 32;
		iVar13 = 0;
		iVar13 = 0;
		while (iVar13 <= 20)
		{
			vVar6 = { func_1059(vParam2, fVar3, 0f) };
			if (func_1060(&vVar6, 9999.9f))
			{
				uVar12 = func_1061(vParam2, 0f, 0f, 0f, fParam6, fParam6, fParam6, -432403087, 1, 8);
				iVar4 = SCRIPTS::COUNT_PLAYER_BITS(&uVar12);
				if (iVar4 < iVar5)
				{
					iVar5 = iVar4;
					vVar9 = { vVar6 };
				}
			}
			iVar13++;
		}
		if (!func_68(vVar9))
		{
			vParam2 = { vVar9 };
		}
	}
	uParam8->f_5 = 2;
	uParam8->f_1 = { vVar0 };
	uParam8->f_17.f_6 = { vParam2 };
	uParam8->f_17 = { fParam6, fParam6, fParam6 };
	if (fParam6 > 15f)
	{
		uParam8->f_17 = { fParam6, fParam6, 15f };
	}
	uParam8->f_17.f_9 = -432403087;
	uParam8->f_6.f_6 = { vParam2 };
	uParam8->f_6 = { fParam5, fParam5, fParam5 };
	if (fParam5 > 15f)
	{
		uParam8->f_6 = { fParam5, fParam5, 15f };
	}
	uParam8->f_6.f_9 = -432403087;
	uParam8->f_16 = 1;
	uParam9->f_5 = 2;
	uParam9->f_1 = { vVar0 };
	uParam9->f_6 = { vParam2 };
	NETWORK::_0xEB6027FD1B4600D5(9, 1, 2f);
	NETWORK::_0xEB6027FD1B4600D5(7, 1, 2f);
	NETWORK::_0xEB6027FD1B4600D5(15, 0, 0.75f);
	NETWORK::_0xEB6027FD1B4600D5(13, 0, 0.75f);
	NETWORK::_0xEB6027FD1B4600D5(19, 1, 0.05f);
	NETWORK::_0x44D59EC597BBF348(1, 0);
	NETWORK::_0x44D59EC597BBF348(2, 1);
	NETWORK::_0x44D59EC597BBF348(3, 0);
	func_1062(1);
	if (((!func_134(134217728) && !func_557(2, -1)) && !func_479(iParam0, uParam1)) && func_480(iParam0, uParam1))
	{
		func_481(1, 0);
	}
}

void func_755(float fParam0, var uParam1, var uParam2)
{
}

void func_756(var uParam0, var uParam1, var uParam2)
{
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam2))
	{
		VOLUME::_DELETE_VOLUME(*uParam2);
	}
	if (!func_68(uParam0->f_17))
	{
		*uParam2 = VOLUME::_CREATE_VOLUME_SPHERE(uParam0->f_17.f_6, 0f, 0f, 0f, uParam0->f_17);
		NETWORK::_0x405DDEFB1F531B18(*uParam2, 1, 0, 0);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
	{
		VOLUME::_DELETE_VOLUME(*uParam1);
	}
	if (!func_68(uParam0->f_6))
	{
		*uParam1 = VOLUME::_CREATE_VOLUME_SPHERE(uParam0->f_6.f_6, 0f, 0f, 0f, uParam0->f_6);
		NETWORK::_0x405DDEFB1F531B18(*uParam1, 0, 0, 0);
	}
	NETWORK::_0x59577799F6AE2F34(1f);
}

void func_757(var uParam0, var uParam1)
{
	func_1063(*uParam0, *uParam1, 0, 0, 1);
}

void func_758(bool bParam0)
{
	func_797(bParam0, Local_243.f_1388);
	Local_243.f_1388++;
	if (Local_243.f_1388 >= 32)
	{
		Local_243.f_1388 = 0;
	}
}

void func_759()
{
	func_484(&(Global_1070356->f_21187.f_3), 4);
}

void func_760(bool bParam0)
{
	func_1064();
	func_800(Local_243.f_1388, bParam0);
	Local_243.f_1388++;
	if (Local_243.f_1388 >= 32)
	{
		Local_243.f_1388 = 0;
	}
}

void func_761()
{
	func_1064();
	func_798(Local_243.f_1388);
	Local_243.f_1388++;
	if (Local_243.f_1388 >= 32)
	{
		Local_243.f_1388 = 0;
	}
}

void func_762()
{
	func_1064();
	func_799(Local_243.f_1388);
	Local_243.f_1388++;
	if (Local_243.f_1388 >= 32)
	{
		Local_243.f_1388 = 0;
	}
}

void func_763(float fParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && iVar0 != PLAYER::PLAYER_ID()) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
		{
			NETWORK::_0x5A91BCEF74944E93(iVar0, fParam0);
		}
		iVar1++;
	}
}

void func_764(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && iVar0 != PLAYER::PLAYER_ID()) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
		if (func_157(iVar1))
		{
			NETWORK::_0x5A91BCEF74944E93(iVar0, fParam1);
		}
	}
}

int func_765(var uParam0, bool bParam1)
{
	if (!func_1065())
	{
		*bParam1 = 1;
		return 0;
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (func_1066())
			{
				uParam0->f_3 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-119209833);
				func_513(1);
				func_1067(uParam0, 1);
			}
			return 0;
		case 1:
			if (!func_1068())
			{
				return 0;
			}
			func_1067(uParam0, 2);
			break;
	}
	Global_1939067->f_107 = 1;
	return 1;
}

int func_766(var uParam0)
{
	if (uParam0->f_5 == 0)
	{
		uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "centralInfoDatastore");
		func_1069(uParam0->f_5, &(uParam0->f_6), 0);
		func_1069(uParam0->f_5, &(uParam0->f_7), 1);
		func_1069(uParam0->f_5, &(uParam0->f_8), 37);
		func_1070(uParam0->f_8, 1);
		return 0;
	}
	return 1;
}

int func_767(var uParam0, int iParam1, bool bParam2)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_3))
			{
				func_1071(uParam0, 1);
			}
			break;
		case 1:
			*uParam0 = iParam1;
			if (*uParam0 != 0)
			{
				UISTATEMACHINE::_UIFLOWBLOCK_ENTER(uParam0->f_3, *uParam0);
				UISTATEMACHINE::_UISTATEMACHINE_CREATE(1546991729, uParam0->f_3);
			}
			func_1071(uParam0, 2);
			break;
		case 2:
			if (iParam1 != *uParam0)
			{
				func_1071(uParam0, 3);
				return 0;
			}
			return 1;
		case 3:
			if (UISTATEMACHINE::_UISTATEMACHINE_EXISTS(1546991729) && UISTATEMACHINE::_0xF7C180F57F85D0B8(1546991729))
			{
				UISTATEMACHINE::_0x6B9FE4F0BA521A19(1546991729, 0);
				func_1071(uParam0, 4);
			}
			else
			{
				func_1071(uParam0, 0);
			}
			break;
		case 4:
			if (!UISTATEMACHINE::_0x11E73195E735B25B(1546991729))
			{
				*bParam2 = 1;
				func_1071(uParam0, 0);
			}
			break;
	}
	return 0;
}

void func_768(var uParam0, int iParam1, bool bParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	bool bVar1;

	sVar0 = func_1072(iParam1, bParam2, 3, 0, 0, 0);
	if (uParam0->f_13 != iParam1)
	{
		func_1073(uParam0->f_6, sVar0);
	}
	bVar1 = iParam1 <= iParam3;
	if (uParam0->f_14 != bVar1)
	{
		func_1070(uParam0->f_7, bVar1);
		uParam0->f_14 = bVar1;
	}
	func_1074(uParam0, iParam1, sParam4);
	func_1075(uParam0, iParam1);
	uParam0->f_13 = iParam1;
}

char* func_769()
{
	return "321_Countdown";
}

char* func_770()
{
	return "HUD_MP_FREE_MODE";
}

var func_771(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
	return func_1076(sParam0, iParam1, iParam2, iParam3, 0, iParam4);
}

var func_772(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_773()
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return Global_1070356->f_4;
}

bool func_774(int iParam0)
{
	return func_168(26, iParam0);
}

bool func_775(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_776(int iParam0)
{
	if (!func_775(iParam0))
	{
		return 0;
	}
	return func_779(iParam0, 8);
}

void func_777(int iParam0, int iParam1)
{
	if (!func_775(iParam0))
	{
		return;
	}
	((*Global_1887327)[iParam0 /*36*/])->f_20 = iParam1;
}

void func_778(int iParam0)
{
	Global_1893575 = (Global_1893575 || iParam0);
}

bool func_779(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		return (Global_7887[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1070356->f_17941[iParam0 /*11*/] && iParam1) != 0;
}

void func_780(int iParam0)
{
	Global_1893575 = (&Global_1893575 - (Global_1893575 && iParam0));
}

bool func_781(bool bParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_779(iVar1, 1))
		{
			if (SCRIPTS::DOES_SCRIPT_EXIST(&(((*Global_1887327)[iVar1 /*36*/])->f_27)))
			{
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(((*Global_1887327)[iVar1 /*36*/])->f_27));
			}
		}
		if (((*Global_1887327)[iVar1 /*36*/])->f_10 != 0)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1887327)[iVar1 /*36*/])->f_10, false))
			{
				if (func_23() == -1)
				{
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(((*Global_1887327)[iVar1 /*36*/])->f_10, 523);
				}
				else if (!SCRIPTS::_0x30BED53646C86D11(((*Global_1887327)[iVar1 /*36*/])->f_10))
				{
					SCRIPTS::_0x7DE4643157AD646C(((*Global_1887327)[iVar1 /*36*/])->f_10);
				}
			}
			else if (func_779(iVar1, 2))
			{
				if (func_23() == -1)
				{
					PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(((*Global_1887327)[iVar1 /*36*/])->f_27), 523);
				}
				else
				{
					SCRIPTS::_0x7423F7835770F619(MISC::GET_HASH_KEY(&(((*Global_1887327)[iVar1 /*36*/])->f_27)));
				}
			}
			if (!SCRIPTS::_DOES_THREAD_EXIST(((*Global_1887327)[iVar1 /*36*/])->f_10))
			{
				((*Global_1887327)[iVar1 /*36*/])->f_10 = 0;
				func_1077(iVar1, 11);
			}
			else
			{
				bVar0 = true;
			}
		}
		else if (bParam0)
		{
			if (func_779(iVar1, 1))
			{
				func_1077(iVar1, 1);
			}
		}
		iVar1++;
	}
	return !bVar0;
}

int func_782(int iParam0, var uParam1)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (((func_36(&Var1, iParam0) && func_44(&Var1)) && func_45(&Var1, uParam1)) && func_1078(&Var1))
	{
		iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var1, Var1.f_1);
	}
	return iVar0;
}

Vector3 func_783(int iParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	struct<5> Var3;

	vVar0 = { 0f, 0f, 0f };
	if (((func_36(&Var3, iParam0) && func_44(&Var3)) && func_45(&Var3, uParam1)) && func_1078(&Var3))
	{
		if (func_1079(&Var3, uParam2))
		{
			if (func_143(Var3, 2060397848, &vVar0, 1))
			{
			}
		}
	}
	return vVar0;
}

var func_784(int iParam0, var uParam1, var uParam2)
{
	var uVar0;
	struct<5> Var1;

	if (((func_36(&Var1, iParam0) && func_44(&Var1)) && func_45(&Var1, uParam1)) && func_1078(&Var1))
	{
		if (func_1079(&Var1, uParam2))
		{
			if (func_142(Var1, -185561597, &uVar0, 1))
			{
			}
		}
	}
	return uVar0;
}

bool func_785(var uParam0)
{
	uParam0->f_2 = 670816652;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_786(vector3 vParam0, var uParam3)
{
	if (func_68(vParam0))
	{
		return 0;
	}
	if (func_787(255) == 4)
	{
		return 0;
	}
	if (func_168(4, 255))
	{
	}
	func_170(4);
	func_1057(&(Global_1099294->f_546));
	Global_1099294->f_546.f_6 = { vParam0 };
	Global_1099294->f_546 = uParam3;
	Global_1099294->f_546.f_5 = 1;
	Global_1099294->f_26.f_18 = 0;
	Global_1099294->f_26.f_19 = 0;
	func_1058(Global_1099294->f_546, 36);
	return 1;
}

int func_787(int iParam0)
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

void func_788(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_789(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_790(struct<29> Param0, var uParam29, int iParam30)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Param0.f_4))
			{
			}
			break;
	}
	if (Param0.f_16)
	{
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Param0.f_27) && Param0.f_28)
	{
	}
}

void func_791(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

int func_792(var uParam0, char* sParam1, bool bParam2, bool bParam3, vector3 vParam4, float fParam7, int iParam8)
{
	int iVar0;

	if (!func_1065() || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		*bParam2 = 1;
		return 0;
	}
	if (uParam0->f_1 == 0)
	{
		uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "MPCountdown");
		uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Timer", MISC::_CREATE_VAR_STRING(2, "FME_COUNTDOWN", sParam1));
		uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_1, "showTimer", true);
		if ((bParam3 && !func_68(vParam4)) && fParam7 > 0f)
		{
			GRAPHICS::ANIMPOSTFX_PLAY(func_493());
			HUD::_HIDE_HUD_COMPONENT(-2124237476);
			fParam7 = func_1080(fParam7, 0f, 1000f);
			if (iParam8 == 0 || !VOLUME::_DOES_VOLUME_EXIST(iParam8))
			{
				iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam4, 0f, 0f, 0f, fParam7, fParam7, fParam7);
				GRAPHICS::_0x735762E8D7573E42(1, iVar0, 5f);
				VOLUME::_DELETE_VOLUME(iVar0);
			}
			else
			{
				GRAPHICS::_0x735762E8D7573E42(1, iParam8, 5f);
			}
		}
	}
	return 1;
}

void func_793(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2))
	{
		if (bParam2 && iParam1 < 1)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, MISC::_CREATE_VAR_STRING(2, "GEIRON_RACE_GO"));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, MISC::_CREATE_VAR_STRING(2, "FME_COUNTDOWN", iParam1));
		}
		if (bParam3)
		{
			if (uParam0->f_5 < 0)
			{
				if (uParam0->f_4 >= 0)
				{
					if (!AUDIO::_0x84848E1C0FC67DBB(uParam0->f_4))
					{
						AUDIO::_0x3210BCB36AF7621B(uParam0->f_4);
					}
					AUDIO::RELEASE_SOUND_ID(uParam0->f_4);
					uParam0->f_4 = -1;
				}
				func_461(uParam0);
			}
		}
		else if (bParam4)
		{
			if (uParam0->f_4 < 0)
			{
				uParam0->f_4 = AUDIO::GET_SOUND_ID();
				AUDIO::_0xCE5D0FFE83939AF1(uParam0->f_4, func_804(), func_801(), 1);
				AUDIO::_0x503703EC1781B7D6(uParam0->f_4, "Time", BUILTIN::TO_FLOAT(iParam1));
			}
		}
	}
}

bool func_794(int iParam0)
{
	return (Global_1099294->f_197 && iParam0) != 0;
}

void func_795(int iParam0)
{
	if (!func_794(iParam0))
	{
		Global_1099294->f_197 = (Global_1099294->f_197 || iParam0);
	}
}

var func_796(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<4> Var0;
	vector3 vVar13;
	var uVar16;

	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = iParam1;
	uVar16 = _NAMESPACE71::_0x8D1249BD28791878(&Var0, &vVar13, iParam6);
	return uVar16;
}

void func_797(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_157(Local_243.f_1332))
	{
		func_335(iParam1);
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam1);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && iVar0 != PLAYER::PLAYER_ID())
	{
		if (Local_243.f_9 != -785841056 || ((NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0) && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0))) && func_157(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0))))
		{
			if (!bParam0)
			{
				if (_NAMESPACE26::_0x81FB74C83C2ED69F(iVar0))
				{
					func_616(iVar0, iParam1);
				}
				else
				{
					func_1081(iVar0, iParam1);
				}
			}
			else
			{
				func_1081(iVar0, iParam1);
			}
		}
		else
		{
			func_616(iVar0, iParam1);
		}
	}
	else
	{
		func_616(iVar0, iParam1);
	}
}

void func_798(int iParam0)
{
	int iVar0;

	if (!func_157(Local_243.f_1332))
	{
		func_335(iParam0);
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && iVar0 != PLAYER::PLAYER_ID())
	{
		if (Local_243.f_9 != -785841056 || ((NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0) && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0))) && func_157(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0))))
		{
			if (_NAMESPACE26::_0x81FB74C83C2ED69F(iVar0))
			{
				func_617(iVar0, iParam0);
				if (!func_180(8192, Local_243.f_1332))
				{
					if (func_339(Global_1275573->f_15))
					{
						func_340(0, 0, 0);
						func_228(8192, Local_243.f_1332);
					}
				}
				if (!func_180(16384, Local_243.f_1332))
				{
					if (!func_336())
					{
						func_1082();
						func_228(16384, Local_243.f_1332);
					}
				}
			}
			else
			{
				func_1083(iVar0, iParam0);
			}
		}
		else
		{
			func_617(iVar0, iParam0);
		}
	}
	else
	{
		func_617(iVar0, iParam0);
	}
}

void func_799(int iParam0)
{
	int iVar0;

	if (!func_157(Local_243.f_1332))
	{
		func_335(iParam0);
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && iVar0 != PLAYER::PLAYER_ID())
	{
		if (Local_243.f_9 != -785841056 || ((NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0) && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0))) && func_157(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0))))
		{
			if (_NAMESPACE26::_0x81FB74C83C2ED69F(iVar0))
			{
				func_617(iVar0, iParam0);
				if (!func_180(8192, Local_243.f_1332))
				{
					if (func_339(Global_1275573->f_15))
					{
						func_340(0, 0, 0);
						func_228(8192, Local_243.f_1332);
					}
				}
				if (!func_180(16384, Local_243.f_1332))
				{
					if (!func_336())
					{
						func_1082();
						func_228(16384, Local_243.f_1332);
					}
				}
			}
			else
			{
				func_1084(iVar0, iParam0);
			}
		}
		else
		{
			func_617(iVar0, iParam0);
		}
	}
	else
	{
		func_617(iVar0, iParam0);
	}
}

void func_800(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_157(Local_243.f_1332))
	{
		func_335(iParam0);
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && iVar0 != PLAYER::PLAYER_ID())
	{
		if (Local_243.f_9 != -785841056 || ((NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0) && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0))) && func_157(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0))))
		{
			if (_NAMESPACE26::_0x81FB74C83C2ED69F(iVar0))
			{
				func_617(iVar0, iParam0);
				if (!func_180(8192, Local_243.f_1332))
				{
					if (func_339(Global_1275573->f_15))
					{
						func_340(0, 0, 0);
						func_228(8192, Local_243.f_1332);
					}
				}
				if (!func_180(16384, Local_243.f_1332))
				{
					if (!func_336())
					{
						func_1082();
						func_228(16384, Local_243.f_1332);
					}
				}
			}
			else
			{
				func_1085(iVar0, iParam0, bParam1);
			}
		}
		else
		{
			func_617(iVar0, iParam0);
		}
	}
	else
	{
		func_617(iVar0, iParam0);
	}
}

char* func_801()
{
	return "RDRO_Countdown_Sounds";
}

char* func_802()
{
	return "Round_End_Timer";
}

char* func_803()
{
	return "10S";
}

char* func_804()
{
	return "Out_Of_Bounds";
}

char* func_805()
{
	return "target_spawn";
}

char* func_806()
{
	return "MP005_OBHELT_sounds";
}

void func_807(int iParam0, int iParam1)
{
	int iVar0;

	func_1002(Local_1706.f_51[iParam0 /*22*/], Local_2503.f_42[iParam0 /*56*/], iParam1);
	(Local_2503.f_42[iParam0 /*56*/])->f_55 = iParam0;
	iVar0 = 0;
	while (iVar0 <= ((Local_1706.f_51[iParam0 /*22*/])->f_21 - 1))
	{
		((Local_2503.f_42[iParam0 /*56*/])->f_1[iVar0 /*17*/])->f_15 = iParam0;
		((Local_2503.f_42[iParam0 /*56*/])->f_1[iVar0 /*17*/])->f_16 = iVar0;
		(Local_2503.f_42[iParam0 /*56*/])->f_1[iVar0 /*17*/] = NETWORK::NET_TO_PED(&((Local_1706.f_51[iParam0 /*22*/])->f_1[iVar0 /*6*/]));
		((Local_2503.f_42[iParam0 /*56*/])->f_1[iVar0 /*17*/])->f_5 = { ENTITY::GET_ENTITY_COORDS(&((Local_2503.f_42[iParam0 /*56*/])->f_1[iVar0 /*17*/]), true, false) };
		((Local_2503.f_42[iParam0 /*56*/])->f_1[iVar0 /*17*/])->f_8 = ENTITY::GET_ENTITY_HEADING(&((Local_2503.f_42[iParam0 /*56*/])->f_1[iVar0 /*17*/]));
		iVar0++;
	}
}

void func_808(int iParam0, bool bParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), iParam0, 0);
		PLAYER::_0x6ECFC621A168424C(iParam0, iParam0, 0);
		if (bParam1)
		{
			PLAYER::_0x907B16B3834C69E2(iParam0, 500f);
		}
		else
		{
			PLAYER::_0x907B16B3834C69E2(iParam0, 100f);
		}
		if (bParam2)
		{
			MAP::_0x7563CBCA99253D1A(iParam0, 187984275);
		}
	}
}

void func_809(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_615(&(uParam0->f_1), 16384);
	}
	else
	{
		func_484(&(uParam0->f_1), 16384);
	}
}

void func_810(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_615(&(uParam0->f_1), 2048);
	}
	else
	{
		func_484(&(uParam0->f_1), 2048);
	}
}

void func_811(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_615(&(uParam0->f_1), 128);
	}
	else
	{
		func_484(&(uParam0->f_1), 128);
	}
}

void func_812(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_484(uParam0, 268435456);
	}
	else
	{
		func_615(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_484(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_615(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_484(uParam0, 536870912);
	}
	else
	{
		func_615(uParam0, 536870912);
	}
}

char* func_813()
{
	return "match_start";
}

char* func_814()
{
	return "rdro_gamemode_generic_sounds";
}

var func_815(char* sParam0, char[4] cParam1, char[4] cParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	struct<4> Var0;
	struct<4> Var13;
	var uVar20;

	Var0 = -2;
	Var0 = uParam3;
	Var0.f_1 = iParam4;
	Var0.f_2 = iParam5;
	Var0.f_3 = iParam6;
	Var13.f_1 = sParam0;
	Var13.f_2 = cParam1;
	Var13.f_3 = cParam2;
	uVar20 = _NAMESPACE71::_0x02BCC0FE9EBA3529(&Var0, &Var13, iParam7, iParam8, iParam9);
	return uVar20;
}

var func_816(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<4> Var0;
	vector3 vVar13;
	var uVar20;

	Var0 = -2;
	Var0 = uParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	uVar20 = _NAMESPACE71::_0xA6F4216AB10EB08E(&Var0, &vVar13, iParam6, iParam7);
	return uVar20;
}

int func_817(int iParam0)
{
	switch (PLAYER::GET_PLAYER_TEAM(iParam0))
	{
		case 0:
			return -275684858;
		case 1:
			return -1561147190;
		case 2:
			return -736318691;
		case 3:
			return 158864851;
		case 4:
			return 923463928;
		case 5:
			return -317694716;
		case 6:
			return 461388259;
		case 7:
			return 1811916478;
		case 8:
			return 1713937168;
		default:
			break;
	}
	return -1031763995;
}

int func_818(int iParam0)
{
	if (_NAMESPACE26::_0x901E0DC25080C8B9(iParam0) != Global_1275573->f_15 && !func_77())
	{
		return 636925055;
	}
	return -963477619;
}

int func_819(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = BUILTIN::FLOOR(func_1086(iParam0, bParam1));
	if (bParam1)
	{
		iVar3 = iParam0;
		if (iVar3 < 0 || iVar3 >= 32)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = BUILTIN::FLOOR(((*Global_1097610)[iVar3 /*51*/])->f_18);
		}
		if (iVar2 > iVar0)
		{
			iVar1 = iVar2;
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
	if (iVar1 < Global_1901929->f_673.f_31)
	{
		return 0;
	}
	if (iVar1 < Global_1901929->f_673.f_32)
	{
		return 1;
	}
	if (iVar1 < Global_1901929->f_673.f_33)
	{
		return 2;
	}
	if (iVar1 < Global_1901929->f_673.f_34)
	{
		return 3;
	}
	if (iVar1 < Global_1901929->f_673.f_35)
	{
		return 4;
	}
	if (iVar1 < Global_1901929->f_673.f_36)
	{
		return 5;
	}
	return 6;
}

int func_820(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == 255)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == Global_1275573->f_10)
	{
		return 1;
	}
	iVar0 = iParam0;
	if (!&Global_1275573->f_22[iVar0])
	{
		return 0;
	}
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26836), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26834), iVar0))
		{
			return 0;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26835), iVar0))
		{
			return 1;
		}
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iVar0))
	{
		return 1;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26831), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26833), iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_TEAM(Global_1275573->f_10);
	iVar2 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((iVar1 != -1 && iVar2 != -1) && iVar1 == iVar2)
	{
		return 1;
	}
	else if (_NAMESPACE26::_0x81FB74C83C2ED69F(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_821(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return false;
	}
	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return true;
	}
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26835), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26836), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26834), iVar0))
		{
			return true;
		}
	}
	if (func_845(iParam0))
	{
		return true;
	}
	return !func_820(iParam0, 0);
}

int func_822(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_1087(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_823(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -504335712;
		case 1:
			return 395262693;
		case 2:
			return -933924539;
		case 3:
			return 371211549;
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

char* func_824(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_825(var uParam0, int iParam1)
{
	(uParam0->f_210[iParam1 /*23*/])->f_14 = 255;
	(uParam0->f_210[iParam1 /*23*/])->f_5 = -1f;
	(uParam0->f_210[iParam1 /*23*/])->f_1 = -1f;
	(uParam0->f_210[iParam1 /*23*/])->f_2 = -1f;
}

void func_826(int iParam0)
{
	if (!func_1088(iParam0))
	{
		SCRIPTS::_0x31010318BA9897AC(&(Global_1070356->f_19683.f_260), iParam0);
	}
}

void func_827(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (&uParam0->f_1[iVar1] == iParam1)
		{
			return;
		}
		switch (iParam1)
		{
			case 291123060:
			case 617531372:
				if (&uParam0->f_1[iVar1] == 617531372 || &uParam0->f_1[iVar1] == 291123060)
				{
					bVar0 = true;
				}
				break;
			case 1356624740:
			case 1884295263:
				if (&uParam0->f_1[iVar1] == 1356624740 || &uParam0->f_1[iVar1] == 1884295263)
				{
					bVar0 = true;
				}
				break;
			case -1850666435:
			case 1551239286:
			case 1937393363:
				if ((&uParam0->f_1[iVar1] == 1551239286 || &uParam0->f_1[iVar1] == -1850666435) || &uParam0->f_1[iVar1] == 1937393363)
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			uParam0->f_1[iVar1] = iParam1;
			return;
		}
		iVar1++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_828(int iParam0, var uParam1, var uParam2, int iParam3)
{
	var uVar0;
	struct<14> Var1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_1089(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1090(uParam2, iParam0, Var1);
	return 1;
}

void func_829(bool bParam0)
{
	if (((bParam0 && Local_1706.f_347 != 0) && Local_1706.f_347 != 1) && Local_1706.f_347 != 6)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::_TRIGGER_SONAR_BLIP_2(-342321975, Local_2503.f_835);
	}
}

void func_830(var uParam0, vector3 vParam1, bool bParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (!func_1091(-1733092640 /* GXTEntry: "Collector\'s Bag" */, 1))
	{
		return;
	}
	if (func_740(0))
	{
		return;
	}
	if (func_1092())
	{
		return;
	}
	if (&Global_1048576)
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		return;
	}
	if (TASK::_0xEC7E480FF8BD0BED(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		return;
	}
	if (!bParam4 && uParam0->f_1 == 0)
	{
		return;
	}
	if (!func_68(*Global_1201104) && MISC::GET_DISTANCE_BETWEEN_COORDS(*Global_1201104, vParam1, true) <= 5f)
	{
		bVar0 = true;
	}
	if (bVar0 && uParam0->f_1 == 0)
	{
		return;
	}
	fVar1 = func_599(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), vParam1, 1);
	fVar2 = 10f;
	fVar2 = (fVar2 * (1f + func_1093()));
	switch (uParam0->f_1)
	{
		case 0:
			if (fVar1 < fVar2)
			{
				if (bParam5)
				{
					if (AUDIO::_0xD9130842D7226045("RDRO_Collectible_Sounds_Travelling_Saleswoman", 0))
					{
						uParam0->f_5 = AUDIO::GET_SOUND_ID();
						if (func_1094(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1, 0) != -862059856)
						{
							AUDIO::_0xDCF5BA95BBF0FABA(uParam0->f_5, "collectible_lure", vParam1, "RDRO_Collectible_Sounds_Travelling_Saleswoman", 0, 0, iParam6);
						}
						func_1095(uParam0, 1);
					}
				}
				else
				{
					func_1095(uParam0, 1);
				}
			}
			break;
		case 1:
			iVar3 = BUILTIN::FLOOR((500f * ((fVar2 - fVar1) / fVar2)));
			iVar4 = BUILTIN::FLOOR((256f * ((fVar2 - fVar1) / fVar2)));
			if (iVar3 > 9999)
			{
				iVar3 = 9999;
			}
			PAD::SET_PAD_SHAKE(0, iVar3, iVar4);
			func_659(&(uParam0->f_2));
			func_1095(uParam0, 2);
			break;
		case 2:
			if ((fVar1 >= (fVar2 + 5f) || !bParam4) || bVar0)
			{
				if (bParam5)
				{
					func_1096(uParam0);
				}
				func_1095(uParam0, 0);
			}
			else if (func_381(&(uParam0->f_2)) >= 2f)
			{
				func_1095(uParam0, 1);
			}
			break;
	}
}

int func_831(int iParam0, int iParam1, float fParam2, bool bParam3)
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

void func_832(var uParam0)
{
	if (AUDIO::_0xD9130842D7226045("RDRO_Collectible_Sounds_Travelling_Saleswoman", 0))
	{
		if (HUD::_0x1BE19185B8AFE299(joaat("INPUT_LOOT3")))
		{
			if (!*uParam0)
			{
				AUDIO::PLAY_SOUND_FRONTEND("collectible_found", "RDRO_Collectible_Sounds_Travelling_Saleswoman", true, 0);
				*uParam0 = 1;
			}
		}
		else if (*uParam0)
		{
			*uParam0 = 0;
		}
	}
}

bool func_833()
{
	return (Global_1140484->f_18706[50 /*195*/])->f_194;
}

void func_834(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (bParam2)
		{
			PLAYER::_0x907B16B3834C69E2(iParam0, 200f);
		}
		else
		{
			PLAYER::_0x907B16B3834C69E2(iParam0, 500f);
		}
	}
	else
	{
		PLAYER::_0x907B16B3834C69E2(iParam0, 100f);
	}
}

int func_835(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	var uVar0;

	if (bParam3 && func_1097(Local_2503.f_42[iParam1 /*56*/], iParam0))
	{
		return 0;
	}
	uVar0 = &(Local_2503.f_42[iParam1 /*56*/])->f_1[iParam2 /*17*/];
	if (!bParam4)
	{
		if (func_1098(Local_1706.f_51[iParam1 /*22*/], Local_2503.f_42[iParam1 /*56*/]))
		{
			return 0;
		}
	}
	if (func_1100(uVar0, func_1099(iParam0), iParam5, 0, 1, 0, iParam6, 1))
	{
		func_146(&(Local_2503.f_849), iParam0);
		func_146(&((Local_2503.f_42[iParam1 /*56*/])->f_54), iParam0);
		return 1;
	}
	return 0;
}

void func_836(int iParam0)
{
	struct<10> Var0;

	Var0.f_9 = 255;
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 10))
	{
		return;
	}
	if (Var0 != 55)
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 1:
			func_1101(Var0);
			break;
		case 2:
			func_1102(Var0);
			break;
		case 3:
			func_1103(Var0);
			break;
		case 4:
			func_1104(Var0);
			break;
		case 5:
			func_1105(Var0);
			break;
	}
}

void func_837(int iParam0)
{
	struct<6> Var0;
	struct<8> Var9;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 9))
	{
		return;
	}
	Var9.f_7.f_2.f_1 = 10;
	if (!func_1106(&Var0, &Var9))
	{
		return;
	}
	if (Var0.f_5 == ENTITY::GET_ENTITY_MODEL(Local_2503.f_2))
	{
		func_547(64);
	}
}

void func_838()
{
	int iVar0;
	struct<56> Var1;

	if (func_712(16))
	{
		if (!func_545(NETWORK::PARTICIPANT_ID_TO_INT(), 8) && func_1002(Local_1706.f_51[Local_1706.f_8 /*22*/], Local_2503.f_42[Local_1706.f_8 /*56*/], Local_1706.f_7))
		{
			func_547(8);
		}
		if (!func_545(NETWORK::PARTICIPANT_ID_TO_INT(), 16) && func_697(Local_1706.f_51[Local_1706.f_8 /*22*/], 2))
		{
			if ((Local_1706.f_51[Local_1706.f_8 /*22*/])->f_21 == 0)
			{
			}
			(Local_2503.f_42[Local_1706.f_8 /*56*/])->f_55 = Local_1706.f_8;
			iVar0 = 0;
			while (iVar0 <= ((Local_1706.f_51[Local_1706.f_8 /*22*/])->f_21 - 1))
			{
				((Local_2503.f_42[Local_1706.f_8 /*56*/])->f_1[iVar0 /*17*/])->f_15 = Local_1706.f_8;
				((Local_2503.f_42[Local_1706.f_8 /*56*/])->f_1[iVar0 /*17*/])->f_16 = iVar0;
				(Local_2503.f_42[Local_1706.f_8 /*56*/])->f_1[iVar0 /*17*/] = NETWORK::NET_TO_PED(&((Local_1706.f_51[Local_1706.f_8 /*22*/])->f_1[iVar0 /*6*/]));
				((Local_2503.f_42[Local_1706.f_8 /*56*/])->f_1[iVar0 /*17*/])->f_5 = { ENTITY::GET_ENTITY_COORDS(&((Local_2503.f_42[Local_1706.f_8 /*56*/])->f_1[iVar0 /*17*/]), true, false) };
				((Local_2503.f_42[Local_1706.f_8 /*56*/])->f_1[iVar0 /*17*/])->f_8 = ENTITY::GET_ENTITY_HEADING(&((Local_2503.f_42[Local_1706.f_8 /*56*/])->f_1[iVar0 /*17*/]));
				iVar0++;
			}
			func_547(16);
		}
	}
	else if (func_545(NETWORK::PARTICIPANT_ID_TO_INT(), 8) || func_545(NETWORK::PARTICIPANT_ID_TO_INT(), 16))
	{
		func_1107(8);
		func_1107(16);
	}
	if (func_712(32))
	{
		if (!func_545(NETWORK::PARTICIPANT_ID_TO_INT(), 32))
		{
			iVar0 = 0;
			while (iVar0 <= ((Local_1706.f_51[Local_1706.f_17 /*22*/])->f_21 - 1))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(&((Local_2503.f_42[Local_1706.f_17 /*56*/])->f_1[iVar0 /*17*/])))
				{
					if (!func_1108((Local_2503.f_42[Local_1706.f_17 /*56*/])->f_1[iVar0 /*17*/], 512))
					{
						func_1109((Local_1706.f_51[Local_1706.f_17 /*22*/])->f_1[iVar0 /*6*/], (Local_2503.f_42[Local_1706.f_17 /*56*/])->f_1[iVar0 /*17*/]);
					}
					func_611((Local_1706.f_51[Local_1706.f_17 /*22*/])->f_1[iVar0 /*6*/]);
				}
				iVar0++;
			}
			Var1.f_1 = 3;
			Var1.f_1.f_1.f_15 = -1;
			Var1.f_1.f_1.f_16 = -1;
			Var1.f_1.f_1.f_17.f_15 = -1;
			Var1.f_1.f_1.f_17.f_16 = -1;
			Var1.f_1.f_1.f_17.f_17.f_15 = -1;
			Var1.f_1.f_1.f_17.f_17.f_16 = -1;
			Var1.f_55 = -1;
			*(Local_2503.f_42[Local_1706.f_17 /*56*/]) = { Var1 };
			func_547(32);
		}
	}
	else if (func_545(NETWORK::PARTICIPANT_ID_TO_INT(), 32))
	{
		func_1107(32);
	}
}

void func_839(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_21 - 1))
	{
		func_1110(uParam0->f_1[iVar0 /*6*/], uParam1->f_1[iVar0 /*17*/]);
		iVar0++;
	}
}

void func_840()
{
	if (MISC::IS_BIT_SET(&Global_1956187, 4))
	{
	}
	else
	{
		MISC::SET_BIT(Global_1956187, 0);
	}
}

int func_841()
{
	if (func_296())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_34) && !ENTITY::IS_ENTITY_DEAD(Global_34))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			if (func_654())
			{
				func_655();
				func_656();
				func_657();
			}
			else if (func_658(Global_34, 0, 0, 0) == joaat("weapon_fishingrod"))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				WEAPON::_0x94A3C1B804D291EC(Global_34, 0, 0, 0, 0);
			}
			return 0;
		}
	}
	return 1;
}

int func_842()
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_34) && !ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		if (func_658(Global_34, 0, 0, 1) == joaat("weapon_kit_camera"))
		{
			func_1111(0);
		}
		else if (WEAPON::_0xC853230E76A152DF(func_658(Global_34, 0, 0, 1)))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("weapon_unarmed"), false, 0, false, false);
		}
	}
	return 1;
}

char* func_843(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_168(39, iParam0))
		{
			return HUD::_0xD8402B858F4DDD88(&(Global_1099294->f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1099294->f_12)));
		}
		else
		{
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return "";
	}
	sVar0 = "";
	if (!&Global_1275573->f_22[iParam0])
	{
		return sVar0;
	}
	if (func_168(39, iParam0))
	{
		return HUD::_0xD8402B858F4DDD88(&(((*Global_1097610)[iParam0 /*51*/])->f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(((*Global_1097610)[iParam0 /*51*/])->f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(&(Global_1275573->f_154[iParam0]));
}

int func_844(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_845(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26833), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_846(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26831), iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_847(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		func_1112(iParam0);
		return false;
	}
	if (func_846(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 2)
		{
			func_1113(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (NETWORK::_0x862C5040F4888741(Global_1275573->f_10, iParam0) || NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 2);
}

int func_848(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;

	if (uParam1->f_11.f_2 == 0)
	{
		uParam1->f_949 = MISC::_SHOULD_USE_METRIC_WEIGHT();
		if (!func_614(iParam2, 8))
		{
			bVar0 = func_614(iParam2, 128);
			func_1114(uParam0, uParam1, iParam2, bVar0, iParam3, iParam4, iParam5, iParam6);
		}
		if (!func_614(iParam2, 4))
		{
			func_1115(uParam1, iParam2, iParam7);
		}
	}
	return 1;
}

void func_849(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12[8];
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;

	bVar0 = func_614(iParam2, 8);
	bVar1 = func_614(iParam2, 128);
	bVar2 = func_614(iParam2, 1024);
	bVar3 = func_614(iParam2, 4096);
	bVar4 = func_614(iParam2, 8192);
	bVar5 = func_614(iParam2, 256);
	bVar6 = iParam7 > 1;
	iVar21 = 0;
	while (iVar21 < 8)
	{
		iVar12[iVar21] = iVar21;
		iVar21++;
	}
	iVar22 = PLAYER::PLAYER_ID();
	if (bVar3)
	{
		if (uParam0->f_949 != MISC::_SHOULD_USE_METRIC_WEIGHT())
		{
			func_272(uParam0);
			func_273(uParam0);
			uParam0->f_949 = MISC::_SHOULD_USE_METRIC_WEIGHT();
		}
	}
	else if (bVar4)
	{
		if (uParam0->f_949 != MISC::_SHOULD_USE_METRIC_MEASUREMENTS_2())
		{
			func_272(uParam0);
			func_273(uParam0);
			uParam0->f_949 = MISC::_SHOULD_USE_METRIC_MEASUREMENTS_2();
		}
	}
	if (uParam0->f_948 || uParam0->f_947)
	{
		iVar11 = 0;
		while (iVar11 <= 31)
		{
			if ((uParam0->f_210[iVar11 /*23*/])->f_14 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE((uParam0->f_210[iVar11 /*23*/])->f_14))
			{
				if (bVar6)
				{
					iVar9 = &uParam0->f_210[iVar11 /*23*/];
					if (iVar9 == PLAYER::GET_PLAYER_TEAM(iVar22))
					{
						fVar7 = uParam1[iVar9];
					}
					else if (uParam1[iVar9] > fVar8)
					{
						fVar8 = uParam1[iVar9];
					}
				}
				else if (uParam0->f_210[iVar11 /*23*/])->f_14 == PLAYER::PLAYER_ID()
				{
					fVar7 = (uParam0->f_210[iVar11 /*23*/])->f_5;
				}
				else if (!bVar10)
				{
					fVar8 = (uParam0->f_210[iVar11 /*23*/])->f_5;
					bVar10 = true;
				}
				StringCopy(&((uParam0->f_210[iVar11 /*23*/])->f_14.f_1), PLAYER::GET_PLAYER_NAME((uParam0->f_210[iVar11 /*23*/])->f_14), 64);
			}
			iVar11++;
		}
		if (!bVar0)
		{
			func_1116(uParam0, iParam2, fVar7, fVar8, bVar1, bVar2, bVar3, iParam3, iParam4, iParam5, iParam6, uParam0->f_948);
		}
		if (uParam0->f_947)
		{
			iVar24 = 0;
			while (iVar24 <= 31)
			{
				if (uParam0->f_210[iVar24 /*23*/])->f_14 == PLAYER::PLAYER_ID()
				{
					iVar23 = iVar24;
				}
				else
				{
					iVar24++;
				}
			}
			func_1117(&(uParam0->f_11), &(uParam0->f_210), PLAYER::GET_PLAYER_TEAM(iVar22), bVar6, &iVar12, 0, iVar23);
			uParam0->f_947 = 0;
		}
	}
	if (bVar5)
	{
		MISC::SET_BIT(&(uParam0->f_11.f_158), 18);
	}
	if (!func_614(iParam2, 4))
	{
		func_1118(&(uParam0->f_11), &(uParam0->f_210), &iVar22, uParam0->f_948, &iVar12, bVar6, 0, 0);
		uParam0->f_948 = 0;
	}
}

int func_850(var uParam0, var uParam1, int iParam2)
{
	if (((*uParam1)[0 /*34*/])->f_21 == 0)
	{
		func_1119(uParam0, uParam1, 0, "meter0", iParam2);
		func_1119(uParam0, uParam1, 1, "meter1", iParam2);
		func_1119(uParam0, uParam1, 2, "meter2", iParam2);
		func_1119(uParam0, uParam1, 3, "meter3", iParam2);
		func_1119(uParam0, uParam1, 4, "meter4", iParam2);
		func_1119(uParam0, uParam1, 5, "meter5", iParam2);
		func_1119(uParam0, uParam1, 6, "meter6", iParam2);
		return 0;
	}
	return 1;
}

void func_851(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	int iVar7;

	func_1120(iParam1, &uVar1, &iVar2, &uVar3, &uVar4, &iVar5, &uVar6, &iVar7);
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		func_1121(uParam0, iVar0, uVar1, iVar2, uVar3, uVar4, iVar5, uVar6, iVar7, iParam2, bParam3, bParam4, bParam5);
		iVar0++;
	}
}

int func_852()
{
	return 1;
}

int func_853(int iParam0, int iParam1)
{
	int iVar0;

	if (func_471())
	{
		if (iParam1 == 0)
		{
			iVar0 = -1455480431;
		}
		else
		{
			iVar0 = -1109114584;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				iVar0 = 655389023;
				break;
			case 1:
				iVar0 = 1019649227;
				break;
			case 2:
				iVar0 = 1260992912;
				break;
			case 3:
				iVar0 = -536255662;
				break;
			case 4:
				iVar0 = -1127015194;
				break;
			case 5:
				iVar0 = 57485849;
				break;
			case 6:
				iVar0 = -774781213;
				break;
			case 7:
				iVar0 = -1840855094;
				break;
			case 8:
				iVar0 = -1619762651;
				break;
			case 9:
				iVar0 = -275856840;
				break;
			case 10:
				iVar0 = 215350470;
				break;
			case 11:
				iVar0 = -620553951;
				break;
			case 12:
				iVar0 = -328156164;
				break;
			case 13:
				iVar0 = -1231466418;
				break;
			case 14:
				iVar0 = -431706200;
				break;
			case 15:
				iVar0 = -1333836770;
				break;
			case 16:
				iVar0 = -1047402941;
				break;
			case 17:
				iVar0 = -1882979672;
				break;
			case 18:
				iVar0 = -1387053626;
				break;
			case 19:
				iVar0 = -126757306;
				break;
			case 20:
				iVar0 = 112423625;
				break;
			case 21:
				iVar0 = -586342531;
				break;
			case 22:
				iVar0 = -318128266;
				break;
			case 23:
				iVar0 = 993582035;
				break;
			case 24:
				iVar0 = 1031725151;
				break;
			case 25:
				iVar0 = 333745451;
				break;
			case 26:
				iVar0 = 1127607177;
				break;
			case 27:
				iVar0 = 293013516;
				break;
			case 28:
				iVar0 = 601533651;
				break;
			case 29:
				iVar0 = 675034810;
				break;
			case 30:
				iVar0 = -75703208;
				break;
			case 31:
				iVar0 = -1516162910;
				break;
			default:
				return 0;
		}
	}
	if (iVar0 != 0)
	{
		func_1122(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_854(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (_NAMESPACE26::_0xD6F6ACF4392187FB(iVar1) && _NAMESPACE26::_0x149A2751AB66AC02(iVar1) >= 2)
	{
		iVar0 = -849580004;
	}
	else
	{
		iVar0 = -1481994377;
	}
	if (iVar0 != 0)
	{
		func_1122(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_855(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_160(&uParam1))
	{
		iVar2 = func_190(&uParam1);
		iVar1 = BUILTIN::FLOOR(func_1080(((BUILTIN::TO_FLOAT(iVar2) / 1000f) / 60f), 0f, 30f));
	}
	switch (iVar1)
	{
		case 0:
			iVar0 = -1872051906;
			break;
		case 1:
			iVar0 = -1500385908;
			break;
		case 2:
			iVar0 = 1941932008;
			break;
		case 3:
			iVar0 = -2122898601;
			break;
		case 4:
			iVar0 = 1281472813;
			break;
		case 5:
			iVar0 = 1646781625;
			break;
		case 6:
			iVar0 = 714864034;
			break;
		case 7:
			iVar0 = 947753317;
			break;
		case 8:
			iVar0 = 122171131;
			break;
		case 9:
			iVar0 = 351980128;
			break;
		case 10:
			iVar0 = -1855497387;
			break;
		case 11:
			iVar0 = 2006853571;
			break;
		case 12:
			iVar0 = 745345378;
			break;
		case 13:
			iVar0 = -1556611338;
			break;
		case 14:
			iVar0 = 600768562;
			break;
		case 15:
			iVar0 = -1685459034;
			break;
		case 16:
			iVar0 = 1352522191;
			break;
		case 17:
			iVar0 = 911910217;
			break;
		case 18:
			iVar0 = -483131655;
			break;
		case 19:
			iVar0 = -789489036;
			break;
		case 20:
			iVar0 = -748172699;
			break;
		case 21:
			iVar0 = 103067614;
			break;
		case 22:
			iVar0 = -281116142;
			break;
		case 23:
			iVar0 = 562587301;
			break;
		case 24:
			iVar0 = 1303756567;
			break;
		case 25:
			iVar0 = 928027213;
			break;
		case 26:
			iVar0 = 1747874824;
			break;
		case 27:
			iVar0 = 1407470452;
			break;
		case 28:
			iVar0 = 1706094329;
			break;
		case 29:
			iVar0 = 1339147067;
			break;
		case 30:
			iVar0 = -1631493579;
			break;
		default:
			return 0;
	}
	if (iVar0 != 0)
	{
		func_1122(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_856(int iParam0)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;

	if ((func_36(&Var1, Local_243.f_1) && func_37(&Var1)) && func_38(&Var1, Local_243.f_3))
	{
		if (func_40(Var1, -75980337, &iVar6, 0))
		{
			iVar0 = iVar6;
		}
	}
	if (iVar0 != 0)
	{
		func_1122(iParam0, iVar0);
		return 1;
	}
	else if (Local_243.f_9 != -785841056)
	{
	}
	return 0;
}

bool func_857(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<2> Var0;

	Var0.f_1 = 10;
	return func_1123(iParam0, uParam1, iParam2, &Var0, iParam3, iParam4, iParam5, bParam6);
}

int func_858()
{
	int iVar0;

	if (Local_0.f_14 == 0)
	{
		return func_192(2);
	}
	iVar0 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(Local_0.f_15) / BUILTIN::TO_FLOAT(Local_0.f_14)));
	if (iVar0 < 2)
	{
		iVar0 = 2;
	}
	else if (iVar0 > 32)
	{
		iVar0 = 32;
	}
	return iVar0;
}

int func_859(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
			iVar0 = -531721699;
			break;
		case 3:
			iVar0 = -205801225;
			break;
		case 4:
			iVar0 = 82926434;
			break;
		case 5:
			iVar0 = -1518330831;
			break;
		case 6:
			iVar0 = -1825441899;
			break;
		case 7:
			iVar0 = -2114300634;
			break;
		case 8:
			iVar0 = 1874374819;
			break;
		case 9:
			iVar0 = -562721249;
			break;
		case 10:
			iVar0 = -393525148;
			break;
		case 11:
			iVar0 = -799991824;
			break;
		case 12:
			iVar0 = -1968206678;
			break;
		case 13:
			iVar0 = -124786579;
			break;
		case 14:
			iVar0 = -1489812047;
			break;
		case 15:
			iVar0 = -1796759270;
			break;
		case 16:
			iVar0 = 1936350748;
			break;
		case 17:
			iVar0 = 1461200248;
			break;
		case 18:
			iVar0 = 267982647;
			break;
		case 19:
			iVar0 = 2106487396;
			break;
		case 20:
			iVar0 = 1385930779;
			break;
		case 21:
			iVar0 = 1364762005;
			break;
		case 22:
			iVar0 = -1236703371;
			break;
		case 23:
			iVar0 = -1526020872;
			break;
		case 24:
			iVar0 = -1713000786;
			break;
		case 25:
			iVar0 = -2019554781;
			break;
		case 26:
			iVar0 = -847604265;
			break;
		case 27:
			iVar0 = -81759966;
			break;
		case 28:
			iVar0 = -790684508;
			break;
		case 29:
			iVar0 = -22677455;
			break;
		case 30:
			iVar0 = 949545730;
			break;
		case 31:
			iVar0 = 720785341;
			break;
		case 32:
			iVar0 = 519387067;
			break;
		default:
			return 0;
	}
	if (iVar0 != 0)
	{
		func_1122(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_860(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_160(&uParam1))
	{
		iVar2 = func_190(&uParam1);
		iVar1 = BUILTIN::FLOOR(func_1080(((BUILTIN::TO_FLOAT(iVar2) / 1000f) / 60f), 0f, 30f));
	}
	switch (iVar1)
	{
		case 0:
			iVar0 = 358499753;
			break;
		case 1:
			iVar0 = 1552831472;
			break;
		case 2:
			iVar0 = -120419182;
			break;
		case 3:
			iVar0 = 913639430;
			break;
		case 4:
			iVar0 = 1152853130;
			break;
		case 5:
			iVar0 = 191312355;
			break;
		case 6:
			iVar0 = 1765469585;
			break;
		case 7:
			iVar0 = 769947357;
			break;
		case 8:
			iVar0 = -73297320;
			break;
		case 9:
			iVar0 = -765444138;
			break;
		case 10:
			iVar0 = -509454489;
			break;
		case 11:
			iVar0 = -720355773;
			break;
		case 12:
			iVar0 = -1018389828;
			break;
		case 13:
			iVar0 = -146537754;
			break;
		case 14:
			iVar0 = 686548533;
			break;
		case 15:
			iVar0 = 1576456266;
			break;
		case 16:
			iVar0 = 197667822;
			break;
		case 17:
			iVar0 = 1117395345;
			break;
		case 18:
			iVar0 = 1953955146;
			break;
		case 19:
			iVar0 = -1457494368;
			break;
		case 20:
			iVar0 = 864221171;
			break;
		case 21:
			iVar0 = -1985403838;
			break;
		case 22:
			iVar0 = -1746157369;
			break;
		case 23:
			iVar0 = 1846570253;
			break;
		case 24:
			iVar0 = 2086930872;
			break;
		case 25:
			iVar0 = -567915205;
			break;
		case 26:
			iVar0 = -328996426;
			break;
		case 27:
			iVar0 = -1299089902;
			break;
		case 28:
			iVar0 = -1056697609;
			break;
		case 29:
			iVar0 = 658366309;
			break;
		case 30:
			iVar0 = 825941725;
			break;
		default:
			return 0;
	}
	if (iVar0 != 0)
	{
		func_1122(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_861(int iParam0)
{
	int iVar0;

	if (func_471())
	{
		iVar0 = -1633060422;
	}
	else
	{
		iVar0 = -794388871;
	}
	if (iVar0 != 0)
	{
		func_1122(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_862(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 0)
	{
		iVar0 = 2035179919;
	}
	else
	{
		iVar0 = 815649725;
	}
	if (iVar0 != 0)
	{
		func_1122(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_863(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar1))
	{
		iVar0 = 1549099924;
	}
	else
	{
		iVar2 = _NAMESPACE26::_0x149A2751AB66AC02(iVar1);
		switch (iVar2)
		{
			case 1:
				iVar0 = 1549099924;
				break;
			case 2:
				iVar0 = -173468095;
				break;
			case 3:
				iVar0 = 133642973;
				break;
			case 4:
				iVar0 = -1086838432;
				break;
			case 5:
				iVar0 = 290147717;
				break;
			case 6:
				iVar0 = -624566149;
				break;
			case 7:
				iVar0 = -1392573202;
				break;
			default:
				return 0;
		}
	}
	if (iVar0 != 0)
	{
		func_1122(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_864(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_160(&uParam0))
	{
		iVar1 = func_190(&uParam0);
		iVar0 = BUILTIN::FLOOR(func_1080(((BUILTIN::TO_FLOAT(iVar1) / 1000f) / 60f), 0f, 30f));
	}
	iVar2 = 0;
	if (iVar0 < 3)
	{
		iVar2 = 0;
	}
	else if (iVar0 < 6)
	{
		iVar2 = -2125467258;
	}
	else if (iVar0 < 9)
	{
		iVar2 = -663248944;
	}
	else if (iVar0 < 12)
	{
		iVar2 = -613374526;
	}
	else if (iVar0 < 15)
	{
		iVar2 = 1035797597;
	}
	else if (iVar0 < 20)
	{
		iVar2 = -1335170629;
	}
	else if (iVar0 < 25)
	{
		iVar2 = 1620069667;
	}
	else if (iVar0 < 30)
	{
		iVar2 = -209226873;
	}
	else
	{
		iVar2 = 110270613;
	}
	return iVar2;
}

int func_865()
{
	int iVar0;
	struct<2> Var1;
	int iVar14;
	int iVar15;

	Var1.f_1 = 11;
	func_853(&Var1, Local_243.f_1333);
	func_854(&Var1);
	func_855(&Var1, Local_0.f_4);
	func_856(&Var1);
	iVar14 = Local_0.f_10;
	if (PLAYER::PLAYER_ID() == iVar14)
	{
		iVar0 = -697003817;
	}
	else
	{
		iVar0 = -252981337;
	}
	if (func_857(iVar0, &(Local_243.f_1374), &Var1, 0, 255, 0, 0))
	{
		Local_243.f_1281++;
		iVar15 = 1;
	}
	return iVar15;
}

void func_866(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar0]), "Position", "");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar0]), "Gamertag", "");
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_143[iVar0]), "GamertagColor", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar0]), "StatPriority", "");
		iVar0++;
	}
}

void func_867(var uParam0)
{
	int iVar0;
	var uVar1;

	if (uParam0[0 /*5*/] != 0)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0[iVar0 /*5*/]);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar0 /*5*/])->f_1);
			iVar0++;
		}
		uVar1 = 2;
		MISC::_COPY_MEMORY(uParam0, &uVar1, 11);
	}
}

void func_868(var uParam0, bool bParam1)
{
	int iVar0;

	UIAPPS::_CLOSE_APP_BY_HASH(joaat("leaderboards"));
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(*uParam0);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_142))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_142);
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_143[iVar0])))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(&(uParam0->f_143[iVar0]));
		}
		iVar0++;
	}
	AUDIO::_0x531A78D6BF27014B("MP_Leaderboard_Sounds");
	if (!bParam1)
	{
		func_1124(&(uParam0->f_162));
	}
	func_512(0);
}

char* func_869()
{
	return "match_end";
}

char* func_870()
{
	return "RDRO_Adversary_Sounds";
}

var func_871(char* sParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar20;

	Var0 = -2;
	Var0 = uParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar20 = _NAMESPACE71::_0x860DDFE97CC94DF0(&Var0, &Var13, iParam5);
	return uVar20;
}

Vector3 func_872(vector3 vParam0)
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

int func_873(int iParam0)
{
	struct<2> Var0;

	if (!func_691(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_874(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<5> Var0;
	int iVar25;

	*iParam3 = 0;
	if (!func_691(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_SELL_PRICE(iParam0, iParam1, &Var0))
	{
		return 0;
	}
	if (!bParam5)
	{
	}
	*iParam3 = Var0.f_3;
	if (*uParam2 < Var0.f_3)
	{
		return 0;
	}
	iVar25 = 0;
	while (iVar25 < Var0.f_3)
	{
		if (!bParam5)
		{
		}
		*((*uParam2)[iVar25 /*2*/]) = { *(Var0.f_4[iVar25 /*2*/]) };
		iVar25++;
	}
	if (bParam4)
	{
		func_1125(iParam0, iParam1, uParam2, *iParam3);
	}
	return 1;
}

bool func_875(int iParam0)
{
	return func_603(iParam0, 2);
}

void func_876(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), iParam0);
		PLAYER::_0xDC5E09D012D759C4(iParam0, iParam0, 0);
	}
}

void func_877()
{
	if (!func_168(128, 255))
	{
		return;
	}
}

void func_878(int iParam0, bool bParam1)
{
	if (!func_956(32))
	{
		return;
	}
	func_963(33, Global_1132968->f_5509.f_4, 0, 0, 0);
	func_1126(32);
	func_1127();
	Global_1132968->f_5509.f_4 = 0;
	Global_1132968->f_5509 = 0;
	func_962(&(Global_1951141->f_2228));
	func_960(&(Global_1951141->f_2228));
	func_1128(4);
	if (bParam1)
	{
		func_1129(iParam0, 1, 1);
	}
	func_963(27, 0, 2, 0, 0);
}

void func_879()
{
	func_1130();
	func_1131();
}

void func_880(float fParam0)
{
	Global_1954472->f_1461.f_3 = fParam0;
}

struct<12> func_881()
{
	struct<12> Var0;
	int iVar12;
	int iVar13;

	Var0.f_1 = -1;
	Var0.f_3 = -1082130432;
	Var0.f_4 = 2;
	Var0.f_5 = -1082130432;
	Var0.f_7 = -1082130432;
	Var0.f_9 = -1082130432;
	Var0.f_11 = -1082130432;
	iVar12 = PLAYER::PLAYER_PED_ID();
	iVar13 = PLAYER::PLAYER_ID();
	switch (Global_1954472->f_1465.f_117.f_12)
	{
		case 0:
			Var0 = 0;
			Var0.f_8 = 0;
			Var0.f_4 = 2;
			Var0.f_2 = 0;
			Var0.f_10 = 0;
			Var0.f_6 = 0;
			break;
		case 1:
			Var0 = 0;
			Var0.f_8 = 0;
			Var0.f_4 = 2;
			Var0.f_2 = 1;
			Var0.f_10 = 1;
			Var0.f_6 = 1;
			break;
		case 2:
			Var0 = 3;
			Var0.f_1 = Global_1954472->f_1465.f_117.f_13;
			Var0.f_8 = 3;
			Var0.f_9 = Global_1954472->f_1465.f_117.f_15;
			Var0.f_4 = 3;
			Var0.f_5 = Global_1954472->f_1465.f_117.f_14;
			Var0.f_2 = 3;
			Var0.f_3 = Global_1954472->f_1465.f_117.f_16;
			Var0.f_10 = 3;
			Var0.f_11 = Global_1954472->f_1465.f_117.f_17;
			Var0.f_6 = 3;
			Var0.f_7 = Global_1954472->f_1465.f_117.f_18;
			break;
		case 3:
			Var0 = 3;
			Var0.f_1 = ENTITY::GET_ENTITY_HEALTH(iVar12);
			Var0.f_8 = 3;
			Var0.f_9 = PED::_0x775A1CA7893AA8B5(iVar12);
			Var0.f_4 = 3;
			Var0.f_5 = PLAYER::_0xA81D24AE0AF99A5E(iVar13);
			Var0.f_2 = 3;
			Var0.f_3 = func_1132(0, 2);
			Var0.f_10 = 3;
			Var0.f_11 = func_1132(1, 2);
			Var0.f_6 = 3;
			Var0.f_7 = func_1132(2, 2);
			break;
	}
	return Var0;
}

void func_882()
{
	var uVar0;
	var uVar1;
	float fVar2;
	float fVar3;
	var uVar4;

	uVar0 = func_1133(joaat("dist"), joaat("sprinting"));
	Global_1954472->f_1331.f_74.f_2 = uVar0;
	uVar1 = func_1133(joaat("time"), 1449106310);
	Global_1954472->f_1331.f_74.f_3 = uVar1;
	fVar2 = func_1133(845057552, -458184788);
	fVar3 = func_1133(845057552, joaat("canoe"));
	Global_1954472->f_1331.f_74.f_1 = (fVar2 + fVar3);
	uVar4 = func_1134(-1645702932);
	Global_1954472->f_1331.f_74.f_5 = uVar4;
}

void func_883()
{
	MISC::_0xD2D74F89DF844A50(&(Global_1954472->f_1465));
}

void func_884()
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return;
	}
	WEAPON::_0xC395355843BE134B(Global_34);
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_34, &iVar0, false, 0, true))
	{
		if (((iVar0 == joaat("weapon_fishingrod") || WEAPON::_0xC853230E76A152DF(iVar0)) || iVar0 == joaat("weapon_kit_camera")) || iVar0 == 191707516)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("weapon_unarmed"), true, 0, false, false);
		}
	}
}

void func_885(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26831), iParam0))
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_26831), iParam0);
		if (func_847(iParam0))
		{
			func_1112(iParam0);
		}
	}
}

void func_886(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_19946.f_259), iParam0))
		{
			SCRIPTS::_0x31010318BA9897AC(&(Global_1070356->f_19946.f_259), iParam0);
		}
	}
	else if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_19946.f_259), iParam0))
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_19946.f_259), iParam0);
		func_826(iParam0);
	}
}

void func_887(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_26832), iParam0);
		if (func_1135(iParam0))
		{
			func_1112(iParam0);
		}
	}
}

void func_888(int iParam0)
{
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_26836), iParam0);
}

void func_889(int iParam0)
{
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_26834), iParam0);
}

struct<7> func_890()
{
	struct<7> Var0;

	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0);
	return Var0;
}

bool func_891(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0);
}

void func_892(var uParam0, int iParam1)
{
	var uVar0;

	*uParam0 = 22;
	uParam0->f_1 = PLAYER::GET_PLAYER_INDEX();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_0x31010318BA9897AC(&uVar0, iParam1);
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 11, 5, &uVar0);
}

bool func_893(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(&(Global_17172.f_2563[iParam0]), iParam1);
}

int func_894(int iParam0)
{
	if (func_896(iParam0, 4))
	{
		return 0;
	}
	return 1;
}

int func_895(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if ((Global_1904613->f_31[iParam0 /*9*/])->f_2 & 98304 == 0)
	{
		return 0;
	}
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	while (iVar0 < Global_39.f_3327)
	{
		if ((Global_39.f_3327[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if ((Global_1904613->f_31[iParam0 /*9*/])->f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if ((Global_1904613->f_31[iParam0 /*9*/])->f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (&Global_39.f_3327[iVar0 /*3*/] - iVar1);
			if ((Global_39.f_3327[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && (Global_1904613->f_31[iParam0 /*9*/])->f_2 & 32768 != 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_896(int iParam0, int iParam1)
{
	return ((Global_1904613->f_31[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_897(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_898()
{
	if (!func_17())
	{
		return 0;
	}
	return Global_1904613->f_8196;
}

void func_899(int iParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_1136(91));
	if (func_503(iVar0))
	{
		_NAMESPACE71::_0x2F901291EF177B02(iVar0, 1);
	}
}

void func_900(int iParam0)
{
	Global_1939231->f_242.f_1186 = iParam0;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_242.f_6, MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(Global_1939231->f_242.f_1186), 0));
}

int func_901(struct<2> Param0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;

	if (Global_1070356->f_17817 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_1087(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1070356->f_17817 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_1087(*(Global_1070356->f_17817.f_1[iVar8 /*3*/]), &vVar3);
		if (vVar3.x > vVar0.x)
		{
			iVar7 = (iVar8 - 1);
		}
		else if (vVar3.x < vVar0.x)
		{
			iVar6 = iVar8 + 1;
		}
		else
		{
			return iVar8;
		}
	}
	return -1;
}

int func_902(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_1087(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

bool func_903()
{
	return !Global_1572887->f_9;
}

void func_904(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_905(int iParam0)
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

void func_906(struct<2> Param0, var uParam2)
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
	switch (func_646(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_1137(func_822(Param0));
			iVar5 = func_1138(iVar4);
			if (!func_1139(iVar5, 0))
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

int func_907(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_901(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1140(iVar0);
}

int func_908(struct<2> Param0, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;

	if (Global_1070356->f_17817 >= 32)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_1087(Param0, &vVar0))
	{
		return -1;
	}
	vVar6 = -1;
	vVar6.f_1 = -1;
	vVar6 = { Param0 };
	vVar6.f_2 = iParam2;
	if (Global_1070356->f_17817 == 0)
	{
		*(Global_1070356->f_17817.f_1[Global_1070356->f_17817 /*3*/]) = { vVar6 };
		Global_1070356->f_17817++;
		return 0;
	}
	iVar9 = 0;
	while (iVar9 < Global_1070356->f_17817)
	{
		func_1087(*(Global_1070356->f_17817.f_1[iVar9 /*3*/]), &vVar3);
		if (vVar0.x == vVar3.x)
		{
			*(Global_1070356->f_17817.f_1[iVar9 /*3*/]) = { vVar6 };
			return iVar9;
		}
		else if (vVar0.x > vVar3.x)
		{
			iVar9++;
		}
		else if (vVar0.x < vVar3.x)
		{
			func_1141(iVar9);
			*(Global_1070356->f_17817.f_1[iVar9 /*3*/]) = { vVar6 };
			return iVar9;
		}
	}
	if (Global_1070356->f_17817 < 31)
	{
		iVar9 = Global_1070356->f_17817;
		*(Global_1070356->f_17817.f_1[iVar9 /*3*/]) = { vVar6 };
		Global_1070356->f_17817++;
		if (Global_1070356->f_17817 > 32)
		{
			Global_1070356->f_17817 = 32;
		}
		return iVar9;
	}
	return -1;
}

void func_909()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1070356->f_17817)
	{
		if (func_1087(*(Global_1070356->f_17817.f_1[iVar0 /*3*/]), &vVar1))
		{
		}
		iVar0++;
	}
}

int func_910(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1746095559 /* GXTEntry: "Arson" */;
		case 1:
			return 195938434 /* GXTEntry: "Assault" */;
		case 2:
			return 416962030 /* GXTEntry: "Animal Cruelty" */;
		case 3:
			return 1314857970 /* GXTEntry: "Disturbing the Peace" */;
		case 4:
			return -999071359 /* GXTEntry: "Animal Cruelty" */;
		case 5:
			return -683250308 /* GXTEntry: "Assault" */;
		case 6:
			return -857617219 /* GXTEntry: "Animal Cruelty" */;
		case 7:
			return 1780145725 /* GXTEntry: "Bank Robbery" */;
		case 8:
			return -1521715232 /* GXTEntry: "Trespassing" */;
		case 9:
			return -1560342203 /* GXTEntry: "Cheating" */;
		case 10:
			return 1343354387 /* GXTEntry: "Disturbing the Peace" */;
		case 11:
			return 1052408375 /* GXTEntry: "Disturbing the Peace" */;
		case 12:
			return -1759599185 /* GXTEntry: "Grave Robbery" */;
		case 13:
			return joaat("crime_hassle");
		case 14:
			return -16106300 /* GXTEntry: "Unarmed Assault" */;
		case 15:
			return 105387183 /* GXTEntry: "Unarmed Assault" */;
		case 16:
			return -2095449173 /* GXTEntry: "Intimidation" */;
		case 17:
			return -2097683294 /* GXTEntry: "Horse Theft" */;
		case 18:
			return 1805131596 /* GXTEntry: "Vehicle Theft" */;
		case 19:
			return 314693001 /* GXTEntry: "Jail Break" */;
		case 20:
			return -1728509733 /* GXTEntry: "Kidnapping" */;
		case 21:
			return -42817558 /* GXTEntry: "Kidnapping" */;
		case 22:
			return 1458462042 /* GXTEntry: "Assault" */;
		case 23:
			return 481893872 /* GXTEntry: "Disturbing the Peace" */;
		case 24:
			return 1714017012 /* GXTEntry: "Disturbing the Peace" */;
		case 25:
			return 1437412331 /* GXTEntry: "Looting" */;
		case 26:
			return -493957506 /* GXTEntry: "Murder" */;
		case 27:
			return 1224055398 /* GXTEntry: "Animal Cruelty" */;
		case 28:
			return -953803399 /* GXTEntry: "Animal Cruelty" */;
		case 29:
			return 2006449383 /* GXTEntry: "Murder" */;
		case 30:
			return -1788230330 /* GXTEntry: "Animal Cruelty" */;
		case 31:
			return 1396375613 /* GXTEntry: "Vandalism" */;
		case 32:
			return joaat("crime_resist_arrest");
		case 33:
			return -1547772340 /* GXTEntry: "Robbery" */;
		case 34:
			return -59535775 /* GXTEntry: "Robbery" */;
		case 35:
			return -1701536647 /* GXTEntry: "Theft" */;
		case 36:
			return 1923998736 /* GXTEntry: "Theft" */;
		case 37:
			return -1103472584 /* GXTEntry: "Horse Theft" */;
		case 38:
			return -2051405571 /* GXTEntry: "Rustling" */;
		case 39:
			return 1135209633 /* GXTEntry: "Vehicle Theft" */;
		case 40:
			return -1810065318 /* GXTEntry: "Disturbing the Peace" */;
		case 41:
			return 2140177766;
		case 42:
			return 1685924442 /* GXTEntry: "Train Robbery" */;
		case 43:
			return 1171995096 /* GXTEntry: "Murder" */;
		case 44:
			return -267442581 /* GXTEntry: "Murder" */;
		case 45:
			return -1361146315 /* GXTEntry: "Trespassing" */;
		case 46:
			return 1352191066 /* GXTEntry: "Unarmed Assault" */;
		case 47:
			return -2130852007 /* GXTEntry: "Vandalism" */;
		case 48:
			return -102241052 /* GXTEntry: "Vandalism" */;
		case 49:
			return 1420320220 /* GXTEntry: "Vandalism" */;
		case 50:
			return -1715130379 /* GXTEntry: "Felony" */;
		case 51:
			return -661550833 /* GXTEntry: "Misdemeanor" */;
		case 52:
			return -1358475411 /* GXTEntry: "Accomplice" */;
		case 53:
			return -1848598303;
		case 54:
			return -173287735 /* GXTEntry: "Murder" */;
		case 55:
			return -715363719 /* GXTEntry: "Animal Cruelty" */;
		case 56:
			return -1117123933 /* GXTEntry: "Disturbing the Peace" */;
		case 57:
			return 1972833301 /* GXTEntry: "Murder" */;
		case 58:
			return 0;
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

void func_911(char[12] cParam0)
{
	Global_1938085->f_75.f_67 = { cParam0 };
}

void func_912()
{
	StringCopy(&(Global_1938085->f_75.f_67), "", 24);
}

bool func_913(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1142(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_1143(iVar1))
	{
		if (Global_1070356->f_17915.f_24 && !func_1144(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(&(Global_1070356->f_17915[iVar1]), iVar2) || MISC::IS_BIT_SET(&(Global_39.f_106[iVar1]), iVar2));
	}
	return MISC::IS_BIT_SET(&(Global_39.f_106[iVar1]), iVar2);
}

int func_914(struct<2> Param0)
{
	int iVar0;

	if (!func_73(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_74(*(Global_1900718->f_1[iVar0 /*2*/]), Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_915(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1900718->f_66 == 0)
	{
		return 0;
	}
	if (Global_1900718->f_66 == 1)
	{
		Global_1900718->f_66 = 0;
		func_1145(Global_1900718->f_1[0 /*2*/]);
		return 1;
	}
	func_1145(Global_1900718->f_1[iParam0 /*2*/]);
	Global_1900718->f_66 = (Global_1900718->f_66 - 1);
	func_1146(iParam0, Global_1900718->f_66);
	return 1;
}

int func_916(struct<2> Param0)
{
	int iVar0;

	if (Global_1184439->f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1184439->f_129)
	{
		if (func_74(((*Global_1184439)[iVar0 /*4*/])->f_1, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_917(int iParam0, var uParam1)
{
	func_1147(uParam1, iParam0);
	if (Global_1184439->f_129 > 0)
	{
		if (Global_1184439->f_130 == iParam0)
		{
			func_1148(0);
		}
	}
	func_1149();
}

void func_918(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_919()
{
	float fVar0;

	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_920(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 30:
			return 27;
		case 52:
			return 28;
		case 31:
			return 29;
		case 32:
			return 30;
		case 33:
			return 31;
		case 127:
			return 32;
		case 131:
			return 33;
		case 132:
			return 34;
		case 35:
			return 35;
		case 88:
			return 40;
		case 37:
			return 42;
		case 38:
			return 43;
		case 94:
			return 44;
		case 121:
			return 46;
		case 39:
			return 47;
		case 40:
			return 48;
		case 41:
			return 49;
		case 42:
			return 50;
		case 53:
			return 51;
		case 44:
			return 52;
		case 55:
			return 53;
		case 45:
			return 54;
		case 47:
			return 57;
		case 51:
			return 61;
		case 60:
			return 63;
		case 62:
			return 64;
		case 63:
			return 65;
		case 64:
			return 66;
		case 65:
			return 67;
		case 66:
			return 68;
		case 134:
			return 69;
		case 135:
			return 70;
		case 67:
			return 71;
		case 82:
			return 72;
		case 69:
			return 73;
		case 70:
			return 74;
		case 72:
			return 76;
		case 73:
			return 78;
		case 74:
			return 79;
		case 75:
			return 80;
		case 76:
			return 81;
		case 77:
			return 82;
		case 80:
			return 84;
		case 81:
			return 85;
		case 123:
			return 86;
		case 83:
			return 87;
		case 84:
			return 88;
		case 85:
			return 90;
		case 86:
			return 91;
		case 87:
			return 92;
		case 92:
			return 96;
		case 93:
			return 97;
		case 98:
			return 99;
		case 99:
			return 100;
		case 100:
			return 101;
		case 101:
			return 102;
		case 102:
			return 103;
		case 103:
			return 104;
		case 104:
			return 105;
		case 105:
			return 106;
		case 106:
			return 107;
		case 110:
			return 114;
		case 111:
			return 115;
		case 113:
			return 118;
		case 115:
			return 119;
		case 116:
			return 120;
		case 117:
			return 121;
		case 118:
			return 122;
		case 137:
			return 123;
		default:
			break;
	}
	return 0;
}

int func_921(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 170;
		case 1:
			return 171;
		case 2:
			return 172;
		case 3:
			return 173;
		case 4:
			return 174;
		case 5:
			return 175;
		case 6:
			return 175;
		case 7:
			return 175;
		case 8:
			return 176;
		case 9:
			return 177;
		case 10:
			return 178;
		case 11:
			return 179;
		case 12:
			return 180;
		case 13:
			return 181;
		case 14:
			return 182;
		case 15:
			return 183;
		case 16:
			return 184;
		default:
			break;
	}
	return -1;
}

void func_922(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_923(var uParam0)
{
	struct<4> Var0;

	Var0 = 1;
	Var0.f_1 = 1;
	*uParam0 = { Var0 };
}

bool func_924()
{
	return Global_1902942->f_5 == 6;
}

void func_925(int iParam0)
{
	if (!func_1150(iParam0))
	{
		func_146(&(Global_1902942->f_2), iParam0);
	}
}

bool func_926()
{
	return Global_1902942->f_5 == 7;
}

bool func_927()
{
	return Global_1902942->f_5 == 12;
}

void func_928(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_661() - fParam1);
	func_413(uParam0, 1);
	func_414(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_929(var uParam0, int iParam1)
{
}

void func_930(var uParam0)
{
	struct<16> Var0;

	Var0.f_13 = -1;
	Var0.f_13.f_1 = -1;
	*uParam0 = { Var0 };
}

void func_931(var uParam0)
{
	struct<5> Var0;

	Var0.f_3 = 1;
	*uParam0 = { Var0 };
}

void func_932(var uParam0)
{
	var uVar0;

	uVar0 = 1;
	*uParam0 = uVar0;
}

void func_933(var uParam0)
{
	vector3 vVar0;

	vVar0 = 1;
	vVar0.f_1 = -1082130432;
	vVar0.f_2 = 1;
	*uParam0 = { vVar0 };
}

void func_934(var uParam0)
{
	struct<9> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_2 = -1;
	Var0.f_1 = -1;
	Var0 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	*uParam0 = { Var0 };
}

void func_935(var uParam0)
{
	struct<4> Var0;

	*uParam0 = { Var0 };
}

void func_936(var uParam0)
{
	vector3 vVar0;

	*uParam0 = { vVar0 };
}

void func_937(var uParam0)
{
	vector3 vVar0;

	*uParam0 = { vVar0 };
}

void func_938(var uParam0)
{
	var uVar0;

	*uParam0 = uVar0;
}

void func_939()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1954472->f_1465.f_117.f_13 = BUILTIN::FLOOR(PLAYER::_0x0317C947D062854E(iVar0));
	Global_1954472->f_1465.f_117.f_14 = PLAYER::_0xDF66A37936D5F3D9(iVar0);
	Global_1954472->f_1465.f_117.f_15 = PLAYER::_0x0FF421E467373FCF(iVar0);
}

void func_940()
{
	Global_1954472->f_1465.f_117.f_16 = func_1132(0, 2);
	Global_1954472->f_1465.f_117.f_17 = func_1132(1, 2);
	Global_1954472->f_1465.f_117.f_18 = func_1132(2, 2);
}

int func_941(var uParam0, bool bParam1)
{
	struct<29> Var0;
	struct<14> Var29;
	int iVar43;
	int iVar44;
	struct<10> Var45;
	int iVar59;

	Var0.f_9 = -1591664384;
	Var29 = { func_1151(0, -1591664384, -1591664384, -1591664384, -1675500494, 0, 0) };
	if (func_1152(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_1153(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_1154(&Var45, &Var0, 0))
				{
					if (func_1155(&(Var0.f_24), 16))
					{
						*uParam0 = { Var0 };
						func_1156(iVar43);
						return 1;
					}
				}
			}
			iVar59++;
		}
		func_1156(iVar43);
	}
	return 0;
}

struct<4> func_942()
{
	return Global_1270530->f_11.f_348;
}

bool func_943()
{
	return Global_1270530->f_11.f_356 > Global_1275573->f_21;
}

void func_944(var uParam0, bool bParam1)
{
	Global_1270530->f_11.f_348 = { *uParam0 };
	if (bParam1)
	{
		Global_1270530->f_11.f_356 = Global_1275573->f_21 + 10;
	}
}

int func_945(int iParam0)
{
	var uVar0;
	bool bVar1;

	uVar0 = func_1157(iParam0);
	bVar1 = func_16(func_1158(), 0, 0);
	if (!bVar1)
	{
		return 3;
	}
	return uVar0;
}

bool func_946(int iParam0)
{
	return func_1159(&(Global_3145858->f_6), iParam0);
}

int func_947(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			case 1:
				return 1;
			case 2:
				return 2;
			case 3:
				return 3;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 4;
			case 1:
				return 5;
			case 2:
				return 6;
			case 3:
				return 7;
			default:
				break;
		}
	}
	return -1;
}

struct<4> func_948()
{
	struct<4> Var0;

	return Var0;
}

int func_949(var uParam0, bool bParam1)
{
	struct<29> Var0;
	struct<14> Var29;
	int iVar43;
	int iVar44;
	struct<10> Var45;
	int iVar59;

	Var0.f_9 = -1591664384;
	Var29 = { func_1151(0, -1591664384, -1591664384, -1591664384, -1675500494, 0, 0) };
	if (func_1152(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_1153(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_1154(&Var45, &Var0, 0))
				{
					if (func_1155(&(Var0.f_24), 32))
					{
						*uParam0 = { Var0 };
						func_1156(iVar43);
						return 1;
					}
				}
			}
			iVar59++;
		}
		func_1156(iVar43);
	}
	return 0;
}

struct<4> func_950(bool bParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar16;

	Var2.f_9 = -1591664384;
	if (!func_1160("ALL HORSES", &iVar0, &iVar1, -1591664384, bParam0))
	{
		return Var2;
	}
	iVar16 = 0;
	while (iVar16 < iVar1)
	{
		if (!func_1153(&Var2, iVar16, iVar0, iVar1))
		{
		}
		else if (INVENTORY::_0xB881CA836CC4B6D4(&Var2))
		{
		}
		else
		{
			iVar16++;
		}
	}
	func_1156(iVar0);
	return Var2;
}

int func_951(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	func_1161(Global_1903929);
	switch (iParam1)
	{
		case 0:
		case 1:
			if (!func_1162(uParam0, Global_1903929, &(Global_1903929->f_71), bParam3))
			{
				return 0;
			}
			break;
		case 2:
			if (!func_1163(uParam0, Global_1903929, &(Global_1903929->f_100), bParam3))
			{
				return 0;
			}
			break;
	}
	if (bParam2)
	{
		func_1164(Global_1903929);
	}
	return 1;
}

int func_952(var uParam0)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (uParam0->f_10 == -1)
	{
		return 0;
	}
	return 1;
}

int func_953(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		uVar1 = iVar0 + 1;
		iVar2 = func_1165(iParam0, uVar1);
		if (iParam1 < iVar2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4;
}

void func_954(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1166((*uParam0)[iVar0 /*7*/]);
		iVar0++;
	}
}

void func_955(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

bool func_956(int iParam0)
{
	return (Global_1951141 && iParam0) != 0;
}

void func_957(var uParam0)
{
	int iVar0;

	*uParam0 = Global_1951141->f_1657;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(uParam0->f_1[iVar0 /*3*/]) = { *(Global_1951141->f_1657.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

void func_958(int iParam0)
{
	Global_1951141 = (Global_1951141 || iParam0);
}

bool func_959(var uParam0)
{
	struct<4> Var0;

	Var0 = func_1167(0);
	Var0.f_1 = uParam0;
	Var0.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	return DATAFILE::_0xED4413CEE1BF142C(&Var0);
}

void func_960(var uParam0)
{
	int iVar0;

	Global_1951141->f_1538 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1951141->f_1538.f_1[iVar0 /*3*/]) = { *(uParam0->f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

int func_961(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;
	int iVar11;

	iVar11 = 0;
	Var4 = func_1167(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		return 0;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var4, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 2049745650);
	*uParam2 = bVar2;
	if (!bVar2 && !bParam3)
	{
		func_1169(uParam0, func_1168(iVar0), 1, 1, bParam7);
	}
	if (bVar2 && DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, -1212855483))
	{
		iVar11 = func_1168(iVar0);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_1170(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, joaat("component")))
			{
			}
			else
			{
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bVar2 && iVar11 != 0)
				{
					func_1171(iVar3, 16, 6);
				}
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1441384))
					{
						(uParam0->f_1[iVar1 /*3*/])->f_1 = joaat("base");
					}
					else
					{
						Jump @361; //curOff = 296
						if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1194786549))
						{
							if (func_1172(iVar3) && func_1173(&(uParam0->f_1[iVar1 /*3*/]), iVar3, &iVar0))
							{
								(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
							}
						}
						else
						{
							(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
						}
					}
					if (bVar2 && iVar11 != 0)
					{
						func_1175(uParam0, iVar11, func_1174(iParam1) != 0);
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return 1;
				}
			}
		}
	}

void func_962(var uParam0)
{
	int iVar0;

	Global_1951141->f_1657 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1951141->f_1657.f_1[iVar0 /*3*/]) = { *(uParam0->f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

void func_963(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_958(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1176(Var0);
}

int func_964(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 2)
	{
		iParam1 = func_972(1);
	}
	switch (iParam1)
	{
		case 0:
			iVar0 = &Global_1954472->f_1331.f_50[iParam0];
			break;
		case 1:
			iVar0 = &Global_1954472->f_1465.f_2.f_50[iParam0];
			break;
	}
	return iVar0 + 4;
}

int func_965(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_972(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954472->f_1446;
		case 1:
			return Global_1954472->f_1465.f_136;
		default:
			break;
	}
	return -1;
}

int func_966(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_972(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954472->f_1446.f_1;
		case 1:
			return Global_1954472->f_1465.f_136.f_1;
		default:
			break;
	}
	return -1;
}

int func_967(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_972(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954472->f_1446.f_2;
		case 1:
			return Global_1954472->f_1465.f_136.f_2;
		default:
			break;
	}
	return -1;
}

void func_968()
{
	MISC::_COPY_MEMORY(&(Global_1954472->f_1465.f_2), &(Global_1954472->f_1331), 115);
	Global_1954472->f_1465.f_2.f_6[0 /*3*/] = func_1132(0, 0);
	(Global_1954472->f_1465.f_2.f_6[0 /*3*/])->f_2 = 0;
	(Global_1954472->f_1465.f_2.f_6[0 /*3*/])->f_1 = -15;
	Global_1954472->f_1465.f_2.f_6[1 /*3*/] = func_1132(1, 0);
	(Global_1954472->f_1465.f_2.f_6[1 /*3*/])->f_2 = 0;
	(Global_1954472->f_1465.f_2.f_6[1 /*3*/])->f_1 = -15;
	Global_1954472->f_1465.f_2.f_6[2 /*3*/] = func_1132(2, 0);
	(Global_1954472->f_1465.f_2.f_6[2 /*3*/])->f_2 = 0;
	(Global_1954472->f_1465.f_2.f_6[2 /*3*/])->f_1 = -15;
}

void func_969(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (INVENTORY::_0x13D234A2A3F66E63(Global_1275573->f_8) != 3)
	{
		return;
	}
	iVar0 = func_1177(iParam0);
	iVar1 = func_1178(iVar0, func_987(0), -1311702610, 0, 0, 0);
	iVar2 = (iParam1 - iVar1);
	iVar3 = MISC::ABSI(iVar2);
	if (iVar2 > 0)
	{
		func_393(iVar0, iVar3, 752097756);
	}
	else
	{
		func_1179(iVar0, iVar3, -142743235, 0, 0);
	}
}

int func_970(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 100;
		case 2:
			return 300;
		case 3:
			return 700;
		case 4:
			return 1500;
		case 5:
			return 3100;
		default:
			break;
	}
	return 100;
}

void func_971(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (INVENTORY::_0x13D234A2A3F66E63(Global_1275573->f_8) != 3)
	{
		return;
	}
	iVar0 = func_1180(iParam0);
	iVar1 = func_1178(iVar0, func_987(0), joaat("SLOTID_PROGRESSION"), 0, 0, 0);
	iVar2 = (iParam1 - iVar1);
	iVar3 = MISC::ABSI(iVar2);
	if (iVar2 > 0)
	{
		func_393(iVar0, iVar3, 752097756);
	}
	else
	{
		func_1179(iVar0, iVar3, -142743235, 0, 0);
	}
	func_1181(iParam0, BUILTIN::TO_FLOAT(iParam1), 1);
}

int func_972(int iParam0)
{
	return func_1182(func_390(iParam0));
}

float func_973(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_972(1);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1954472->f_1331.f_26[iParam0]);
		case 1:
			return &(Global_1954472->f_1465.f_2.f_26[iParam0]);
		default:
			break;
	}
	return -1f;
}

bool func_974(int iParam0, int iParam1)
{
	return func_1184(func_1183(iParam0), iParam1);
}

void func_975()
{
	func_1185(0);
	func_1185(1);
	func_1185(2);
	func_1185(3);
}

void func_976()
{
	func_1186(0);
	func_1186(1);
	func_1186(2);
	func_1186(3);
}

void func_977()
{
	if (func_1187(2))
	{
		func_1188(0);
	}
	else
	{
		func_1188(1);
	}
	func_1189(1);
	PLAYER::_0x7146CF430965927C(15, true);
	PLAYER::_0x7146CF430965927C(16, true);
}

void func_978()
{
	float fVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 23)
	{
		fVar0 = func_973(iVar1, 2);
		func_1181(iVar1, fVar0, 2);
		iVar1++;
	}
}

void func_979(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = func_965(2);
	iVar2 = iVar0;
	iVar3 = -1;
	PED::_0x7FF72DE061DF55E2(iParam1, 0, BUILTIN::TO_FLOAT(iVar0));
	if (func_23() == 0)
	{
		iVar1 = BUILTIN::ROUND(PED::_0x89BFDF6D53145545(iParam1));
		iVar2 = (iVar2 + iVar1);
	}
	ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, iVar2);
	iVar4 = *uParam0;
	switch (iVar4)
	{
		case 0:
			iVar3 = ENTITY::GET_ENTITY_MAX_HEALTH(iParam1, 1);
			func_1190(iVar3, 0);
			break;
		case 3:
			iVar3 = uParam0->f_1;
			if (iVar3 > 0)
			{
				func_1190(iVar3, 0);
			}
			else
			{
				iVar3 = ENTITY::GET_ENTITY_MAX_HEALTH(iParam1, 1);
				func_1190(iVar3, 0);
			}
			break;
		case 1:
			break;
		case 2:
			break;
	}
}

void func_980(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;

	iVar0 = func_967(2);
	fVar1 = -1f;
	PED::_0x7FF72DE061DF55E2(iParam1, 1, BUILTIN::TO_FLOAT(iVar0));
	iVar2 = uParam0->f_8;
	switch (iVar2)
	{
		case 2:
			break;
		case 0:
			fVar1 = PED::_GET_PED_MAX_STAMINA(iParam1);
			func_1191(fVar1, 0);
			break;
		case 1:
			fVar1 = 0f;
			func_1191(fVar1, 0);
			break;
		case 3:
			fVar1 = uParam0->f_9;
			if (fVar1 >= 0f)
			{
				func_1191(fVar1, 0);
			}
			else
			{
				fVar1 = PED::_GET_PED_MAX_STAMINA(iParam1);
				func_1191(fVar1, 0);
			}
			break;
	}
}

void func_981(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = func_966(2);
	fVar2 = -1f;
	PED::_0x7FF72DE061DF55E2(iParam1, 2, BUILTIN::TO_FLOAT(iVar1));
	iVar3 = uParam0->f_4;
	switch (iVar3)
	{
		case 2:
			func_1193(func_1192());
			break;
		case 0:
			fVar2 = PLAYER::_0x029884FB65821B07(iVar0);
			func_1193(fVar2);
			break;
		case 1:
			fVar2 = 0f;
			func_1193(fVar2);
			break;
		case 3:
			fVar2 = uParam0->f_5;
			if (fVar2 >= 0f)
			{
				func_1193(fVar2);
			}
			else
			{
				fVar2 = PLAYER::_0x029884FB65821B07(iVar0);
				func_1193(fVar2);
			}
			break;
	}
	func_880(0f);
}

void func_982(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 23)
	{
		if (func_1194(iVar1))
		{
			iVar2 = func_1195(iVar1);
			fVar0 = func_1196(uParam0, iVar2);
			func_1197(iVar2, fVar0);
		}
		iVar1++;
	}
	func_1198();
}

void func_983()
{
	if (Global_1954472->f_1331.f_108.f_1 != 0f)
	{
		func_1199(0, Global_1954472->f_1331.f_108.f_1, 0, 0);
		Global_1954472->f_1331.f_108.f_1 = 0f;
	}
	if (Global_1954472->f_1331.f_108.f_3 != 0f)
	{
		func_1199(1, Global_1954472->f_1331.f_108.f_3, 0, 0);
		Global_1954472->f_1331.f_108.f_3 = 0f;
	}
	if (Global_1954472->f_1331.f_108.f_2 != 0f)
	{
		func_1199(2, Global_1954472->f_1331.f_108.f_2, 0, 0);
		Global_1954472->f_1331.f_108.f_2 = 0f;
	}
	if (Global_1954472->f_1331.f_108.f_4 != 0f)
	{
		func_1199(19, Global_1954472->f_1331.f_108.f_4, 0, 0);
		Global_1954472->f_1331.f_108.f_4 = 0f;
	}
	if (Global_1954472->f_1331.f_108.f_6 != 0f)
	{
		func_1199(18, Global_1954472->f_1331.f_108.f_6, 0, 0);
		Global_1954472->f_1331.f_108.f_6 = 0f;
	}
	if (Global_1954472->f_1331.f_108.f_5 != 0f)
	{
		func_1199(20, Global_1954472->f_1331.f_108.f_5, 0, 0);
		Global_1954472->f_1331.f_108.f_5 = 0f;
	}
	func_1200();
}

void func_984(int iParam0)
{
	Global_1954472->f_1331.f_3 = iParam0;
}

int func_985(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_1201(&iParam0);
	if (!func_691(iParam0, 0) && !func_1203(func_1202(iParam0), 2))
	{
		return 0;
	}
	if (!bParam3 && func_692(iParam0, joaat("default")) == 0)
	{
		bParam3 = true;
	}
	if (func_1204(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		Var0 = { func_989(0) };
		Var4.f_9 = -1591664384;
		if (!func_991(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
		{
			return 0;
		}
		else if (func_992(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
		{
			return 0;
		}
		if (func_990(iParam0, 1))
		{
			if (!func_991(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
			{
				return 0;
			}
			else if (func_992(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
			{
				return 0;
			}
		}
		return 1;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_1205(iParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return 0;
	}
	else if (iVar26 == 0)
	{
		return 1;
	}
	iVar27 = func_1178(iParam0, *uParam1, uParam1->f_4, bParam4, bParam3, iParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return 1;
	}
	return 0;
}

int func_986(bool bParam0)
{
	if (func_23() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_674(bParam0));
}

struct<4> func_987(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_674(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1272170))
			{
				*Global_1272170 = { func_695(joaat("character"), func_948(), -1591664384, bParam0) };
			}
			return *Global_1272170;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_12)))
			{
				Global_1272170->f_12 = { func_695(joaat("character"), func_948(), -1591664384, 0) };
			}
			return Global_1272170->f_12;
		}
	}
	return func_695(joaat("character"), func_948(), -1591664384, bParam0);
}

int func_988(int iParam0)
{
	vector3 vVar0;

	if (!func_691(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_989(bool bParam0)
{
	int iVar0;

	iVar0 = func_674(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_4)))
		{
			Global_1272170->f_4 = { func_695(923904168, func_987(bParam0), -740156546, bParam0) };
		}
		return Global_1272170->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_16)))
		{
			Global_1272170->f_16 = { func_695(923904168, func_987(bParam0), -740156546, 0) };
		}
		return Global_1272170->f_16;
	}
	return func_695(923904168, func_987(bParam0), -740156546, 0);
}

int func_990(int iParam0, bool bParam1)
{
	if (func_873(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_1206();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_991(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_1178(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

int func_992(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_1207(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_993(bool bParam0)
{
	int iVar0;

	iVar0 = func_674(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_8)))
		{
			Global_1272170->f_8 = { func_695(271701509, func_987(bParam0), 12999093, 0) };
		}
		return Global_1272170->f_8;
	}
	return func_695(271701509, func_987(bParam0), 12999093, 0);
}

int func_994(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_873(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_1208(iParam0, iParam1, iVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_995(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_1209(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_996(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, 1);
	}
	return iVar0;
}

Vector3 func_997(var uParam0)
{
	return func_1210(*uParam0, 2025794970);
}

Vector3 func_998(var uParam0)
{
	return func_1211(*uParam0, 2025794970);
}

int func_999(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (bParam6)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return 0;
		}
	}
	if (!func_702(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return 0;
	}
	if (func_1212(iParam1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(VEHICLE::_0xC239DBD9A57D2A71(1054492269, vParam2, 1, 0, 1, 1));
	}
	else if (func_1213(iParam1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(VEHICLE::_0xC239DBD9A57D2A71(-950361972, vParam2, 1, 0, 1, 1));
	}
	else if (bParam8 != 0 && VEHICLE::_0xB9D5BDDA88E1BB66(iParam1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(VEHICLE::_CREATE_VEHICLE_2(iParam1, vParam2, fParam5, true, bParam6, bParam7, bParam8, bParam9));
	}
	else
	{
		*uParam0 = NETWORK::VEH_TO_NET(VEHICLE::CREATE_VEHICLE(iParam1, vParam2, fParam5, true, bParam6, bParam7, bParam9));
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam6)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
		}
		return 1;
	}
	return 0;
}

int func_1000(var uParam0)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_404(&Var0))
	{
		Var0.f_2 = 2025794970;
		Var0.f_3 = *uParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			func_40(Var0, 1310428614, &iVar5, 0);
		}
	}
	return iVar5;
}

int func_1001(int iParam0, var uParam1, int iParam2)
{
	if (uParam1->f_55 == -1)
	{
		return 0;
	}
	return func_78(&((Local_2054[iParam0 /*14*/])->f_1[uParam1->f_55]), iParam2);
}

int func_1002(var uParam0, var uParam1, int iParam2)
{
	struct<4> Var0;
	int iVar5;
	struct<5> Var6;
	struct<17> Var11;
	int iVar28;

	if (!DATAFILE::_0x603AC35FD4602C76(Local_2503.f_37))
	{
		return 0;
	}
	Var0 = Local_2503.f_37;
	Var0.f_2 = 1248369828;
	Var0.f_3 = iParam2;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
	}
	iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	Var11.f_15 = -1;
	Var11.f_16 = -1;
	iVar28 = 0;
	while (iVar28 <= (iVar5 - 1))
	{
		Var0.f_2 = 1268095596;
		Var0.f_3 = iVar28;
		MISC::_COPY_MEMORY(&Var6, &Var0, 5);
		if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var6.f_1), &Var6))
		{
		}
		else
		{
			*(uParam1->f_1[iVar28 /*17*/]) = { Var11 };
			(uParam1->f_1[iVar28 /*17*/])->f_4 = func_1214(Var6);
			(uParam1->f_1[iVar28 /*17*/])->f_10 = func_1215(Var6);
			(uParam1->f_1[iVar28 /*17*/])->f_9 = func_1216(Var6);
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (func_1217(Var6))
				{
					func_1012(uParam0->f_1[iVar28 /*6*/], 256);
				}
				func_1012(uParam0->f_1[iVar28 /*6*/], 1);
			}
		}
		iVar28++;
	}
	*uParam1 = iParam2;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		uParam0->f_21 = iVar5;
	}
	return 1;
}

void func_1003(var uParam0, int iParam1)
{
	func_146(uParam0, iParam1);
}

int func_1004(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	int iVar5;

	iVar0 = 1;
	iVar5 = 0;
	while (iVar5 <= (uParam0->f_21 - 1))
	{
		if (!func_1218(uParam0->f_1[iVar5 /*6*/]))
		{
			return 0;
		}
		if (!func_1013(uParam0->f_1[iVar5 /*6*/], 2))
		{
			func_1219(&vVar1, &uVar4, uParam1, uParam0->f_1[iVar5 /*6*/], uParam1->f_1[iVar5 /*17*/], iVar5, iParam2, iParam3);
			if (!func_1220(uParam0->f_1[iVar5 /*6*/], uParam1->f_1[iVar5 /*17*/], vVar1, uVar4))
			{
				iVar0 = 0;
			}
			else
			{
				return 0;
			}
		}
		iVar5++;
	}
	return iVar0;
}

void func_1005(var uParam0, int iParam1)
{
	func_146(&(uParam0->f_20), iParam1);
}

Vector3 func_1006(var uParam0)
{
	return func_1211(*uParam0, 1497039912);
}

int func_1007(var uParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, bool bParam7, float fParam8)
{
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return 0;
	}
	if (!func_1221(iParam1))
	{
		return 0;
	}
	*uParam0 = NETWORK::_0x74F99EF7EF503398(PROPSET::_CREATE_PROPSET(iParam1, vParam2, iParam6, fParam5, fParam8, true, true));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam7)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
		}
		return 1;
	}
	return 0;
}

void func_1008()
{
	func_1222(16);
	Local_1706.f_7 = 0;
	Local_1706.f_8 = -1;
	Local_1706.f_16 = -1;
}

int func_1009(var uParam0, int iParam1)
{
	if (func_1223(uParam0, iParam1))
	{
		func_298(uParam0);
		return 1;
	}
	return 0;
}

int func_1010(var uParam0, var uParam1)
{
	struct<5> Var0;
	int iVar5;
	struct<5> Var6;
	vector3 vVar11;
	int iVar14;
	int iVar15;
	int iVar16;
	vector3 vVar17;
	vector3 vVar20;

	Var0 = Local_2503.f_37;
	Var0.f_2 = -538315284;
	Var0.f_3 = Local_243.f_2;
	Var0.f_4 = *uParam1;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
	}
	iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	iVar14 = func_1224();
	if (iVar14 == 255)
	{
		return -1;
	}
	iVar15 = 0;
	while (iVar15 <= iVar5)
	{
		if (iVar15 == 0)
		{
			iVar16 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
		}
		else
		{
			iVar16 = (iVar15 - 1);
		}
		Var0.f_2 = 1218921439;
		Var0.f_3 = iVar16;
		MISC::_COPY_MEMORY(&Var6, &Var0, 5);
		if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var6.f_1), &Var6))
		{
		}
		else
		{
			if (!func_143(Var6, -1191553031, &vVar11, 0))
			{
			}
			vVar17 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar14), true, false) };
			vVar20 = { ENTITY::GET_ENTITY_COORDS(func_1225(vVar11), true, false) };
			if (func_1226(uParam1, vVar11, vVar17, vVar20, iVar5, iVar16))
			{
				Local_1706.f_18[iVar14] = &Local_1706.f_18[iVar14] + 1;
				return iVar16;
			}
		}
		iVar15++;
	}
	return -1;
}

void func_1011()
{
	func_1222(32);
	Local_1706.f_17 = -1;
}

void func_1012(var uParam0, int iParam1)
{
	func_146(&(uParam0->f_2), iParam1);
}

bool func_1013(var uParam0, int iParam1)
{
	return func_78(uParam0->f_2, iParam1);
}

void func_1014(var uParam0, var uParam1)
{
	if (!func_1013(uParam0, 512))
	{
		if ((ENTITY::IS_ENTITY_DEAD(*uParam1) || uParam0->f_1 == 10) || uParam1->f_10 == joaat("horse"))
		{
			func_1227(uParam0, 10);
			func_1012(uParam0, 512);
		}
	}
	switch (uParam1->f_10)
	{
		case joaat("search"):
			func_1228(uParam0, uParam1);
			break;
		case joaat("guard"):
			func_1229(uParam0, uParam1);
			break;
		case joaat("bandit"):
			func_1230(uParam0, uParam1);
			break;
		case joaat("defensive"):
			func_1231(uParam0, uParam1);
			break;
		case -1346830927:
			func_1232(uParam0, uParam1);
			break;
		case -862695229:
			func_1233(uParam0, uParam1);
			break;
	}
}

void func_1015(int iParam0)
{
	func_146(&(Local_1706.f_1), iParam0);
}

int func_1016(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 9)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			return -931055996;
		case 1:
			return -1347265301;
		case 2:
			return 1404758079;
		case 3:
			return -1553326850;
		case 4:
			return joaat("guard");
		case 5:
			return 200161421;
		case 6:
			return joaat("defensive");
		case 7:
			return -1346830927;
		case 8:
			return -66644432;
	}
	return 0;
}

int func_1017(int iParam0)
{
	switch (iParam0)
	{
		case -1347265301:
		case -1346830927:
		case -66644432:
		case 200161421:
		case 1404758079:
			return 1;
		case joaat("defensive"):
		case -1553326850:
		case -931055996:
		case joaat("guard"):
			return 0;
	}
	return 0;
}

int func_1018(int iParam0)
{
	switch (iParam0)
	{
		case 1404758079:
			return 10;
		case -1346830927:
			return 1;
		case joaat("defensive"):
			return 5;
		case joaat("guard"):
			return 5;
		case -931055996:
			return 3;
		case -1347265301:
			if (Local_243.f_1 == 10)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case 200161421:
			if (Local_243.f_1 == 11)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case -1553326850:
			return 1;
		case -66644432:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_1019(int iParam0)
{
	if ((Global_1070356->f_19946[iParam0 /*8*/])->f_5 != 0)
	{
		if (MAP::DOES_BLIP_EXIST(&(Global_1070356->f_19946[iParam0 /*8*/])))
		{
			MAP::_SET_BLIP_FLASH_STYLE(&(Global_1070356->f_19946[iParam0 /*8*/]), (Global_1070356->f_19946[iParam0 /*8*/])->f_5);
		}
		(Global_1070356->f_19946[iParam0 /*8*/])->f_5 = 0;
		func_826(iParam0);
	}
}

bool func_1020()
{
	return func_614(Global_1572887->f_7, 1);
}

bool func_1021()
{
	return (Global_1572887->f_106.f_75 >= 13 && Global_1572887->f_106.f_75 < 20);
}

bool func_1022(var uParam0, int iParam1)
{
	return func_78(*uParam0, iParam1);
}

int func_1023(int iParam0)
{
	return (Global_1275573->f_21 - iParam0);
}

void func_1024(var uParam0, int iParam1)
{
	if (func_1022(uParam0, iParam1))
	{
		return;
	}
	func_146(uParam0, iParam1);
}

void func_1025(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	(Global_1102099->f_34[iVar0 /*11*/])->f_10 = 0;
}

void func_1026(var uParam0, int iParam1)
{
	func_430(uParam0, iParam1);
}

void func_1027(var uParam0, var uParam1)
{
	*uParam0 = 28;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 9, 18, uParam1);
}

void func_1028(int iParam0, float fParam1, float fParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;

	HUD::_GET_COLOR_FROM_NAME(iParam0, &iVar0, &iVar1, &iVar2, &uVar3);
	fVar4 = 255f;
	*fParam1 = (BUILTIN::TO_FLOAT(iVar0) / fVar4);
	*fParam2 = (BUILTIN::TO_FLOAT(iVar1) / fVar4);
	*fParam3 = (BUILTIN::TO_FLOAT(iVar2) / fVar4);
}

void func_1029()
{
	if (func_180(32768, Local_243.f_1332))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return;
	}
	WEAPON::_0xB7E52A058B07C7E2(PLAYER::PLAYER_PED_ID(), &(Local_243.f_1437), &(Local_243.f_1441));
	if (INVENTORY::_0xB881CA836CC4B6D4(&(Local_243.f_1437)))
	{
	}
	if (INVENTORY::_0xB881CA836CC4B6D4(&(Local_243.f_1441)))
	{
	}
	func_228(32768, Local_243.f_1332);
}

int func_1030(int iParam0, int iParam1)
{
	return 0;
}

int func_1031(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 < 0)
	{
		return 0;
	}
	iVar0 = func_1032(iParam0, 0, 0, 0);
	if (iVar0 >= iParam1)
	{
		return 0;
	}
	iVar1 = (iParam1 - iVar0);
	return func_1234(iParam0, iVar1, bParam2, 0, 0, 752097756, 0, 0, 0, 0);
}

int func_1032(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_691(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_988(iParam0);
	if (iVar1 == joaat("ammo") || (bParam1 && iVar1 == joaat("weapon")))
	{
		iVar2 = func_1235(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("weapon"))
	{
		return func_1236(iParam0, 0);
	}
	if (func_692(iParam0, joaat("default")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_674(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_1237(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_674(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

bool func_1033(int iParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(iParam0);
}

int func_1034(int iParam0)
{
	bool bVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	bVar0 = true;
	if (func_1238(iParam0))
	{
		bVar0 = false;
	}
	WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, iParam0, 0, bVar0, false, 0, true, 0.5f, 1f, 752097756, false, 0f, false);
	return 1;
}

void func_1035(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1896726->f_382)
		{
			Global_1896726->f_382 = bParam0;
		}
	}
	else if (Global_1896726->f_382)
	{
		Global_1896726->f_382 = bParam0;
	}
}

Vector3 func_1036(var uParam0)
{
	return func_1211(*uParam0, 733276510);
}

Vector3 func_1037(var uParam0)
{
	return func_1210(*uParam0, 733276510);
}

int func_1038(var uParam0)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_404(&Var0))
	{
		Var0.f_2 = 733276510;
		Var0.f_3 = *uParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			if (!func_42(Var0, 1310428614, &iVar5, 0))
			{
				iVar5 = 0;
			}
		}
	}
	return iVar5;
}

void func_1039(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<18> Var1;

	if (!func_73(Param0))
	{
		return;
	}
	if (!func_360(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_1239(Param0);
	}
	if (!func_73(func_373(0)))
	{
		func_641(Param0, 3);
		func_345(bParam3);
		func_642(!bParam4);
		func_1240(Param0, -1);
		if (bParam2 && !func_897(2))
		{
			func_904(&Global_0, 1024);
		}
		func_644(1);
	}
	else
	{
		func_1240(Param0, -1);
		func_641(Param0, 4);
		func_1241(Param0, 0);
	}
	Global_1051202->f_44.f_1 = 1;
	iVar0 = func_646(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_1242(Param0, &Var1))
		{
			MISC::_0x1096603B519C905F(&(Var1.f_17));
		}
	}
}

int func_1040(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	struct<4> Var0;

	if (func_916(Param0) >= 0)
	{
		return 0;
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1 = { Param0 };
	Var0 = func_902(Param0);
	Var0.f_3 = iParam3;
	func_1243(&Var0, bParam2, iParam4);
	return 1;
}

void func_1041(int iParam0)
{
	if (Global_1182289->f_440 != 2)
	{
		return;
	}
	if (Global_1182289->f_440.f_1 != 0)
	{
		return;
	}
	Global_1182289->f_440.f_1 = iParam0;
	POSSE::_0xC584FF658B2E55DA(iParam0);
}

void func_1042(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_650(iParam0);
	if (iVar0 == -785841056)
	{
		func_443(func_47(joaat("attempts"), -785841056), 1);
	}
	else
	{
		func_443(func_47(joaat("attempts"), -1666944573), 1);
	}
	if (func_46(iParam0, uParam1, &iVar1))
	{
		func_443(func_47(joaat("attempts"), iVar1), 1);
	}
}

void func_1043(int iParam0)
{
	int iVar0;
	var uVar1;

	if ((Global_1900670->f_1 == 2 || Global_1900670->f_1 == 5) || Global_1900670->f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_23() != -1)
	{
		iVar0 = 1;
	}
	uVar1 = func_920(Global_1893575->f_2);
	Global_1900670->f_1 = 3;
	Global_1900670->f_2 = 0;
	Global_1900670->f_7 = iVar0;
	Global_1900670->f_8 = iParam0;
	Global_1900670->f_9 = uVar1;
	if (Global_1900670->f_9 != -1 && Global_1900670->f_9 != 0)
	{
		func_922(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_9);
	}
	else if (Global_1900670->f_11 != -1)
	{
		func_922(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_11);
	}
}

void func_1044()
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		if (func_1244(1048576, PLAYER::PLAYER_ID()) || Global_1275565->f_2.f_1 == 2)
		{
			func_1245();
		}
	}
	if (LAW::_GET_WANTED_INTENSITY_FOR_PLAYER(Global_1275573->f_10) > 0)
	{
		if (func_1246())
		{
			func_1247();
		}
		func_1248();
	}
}

void func_1045(int iParam0)
{
	if (Global_1102099->f_935.f_27 != iParam0)
	{
		Global_1102099->f_935.f_27 = iParam0;
	}
}

int func_1046(int iParam0, struct<2> Param1, int iParam3)
{
	switch (iParam0)
	{
		case 4:
		case 5:
		case 6:
		case 7:
			break;
		default:
			return 0;
	}
	func_1249(iParam0, Param1, iParam3);
	return 1;
}

int func_1047(int iParam0)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = -50383753;
	if (func_36(&Var1, iParam0) && func_140(&Var1))
	{
		func_40(Var1, -1641329203, &iVar0, 0);
	}
	return iVar0;
}

var func_1048(int iParam0)
{
	var uVar0;
	struct<5> Var1;

	if (func_36(&Var1, iParam0) && func_140(&Var1))
	{
		func_40(Var1, -1268019774, &uVar0, 0);
	}
	return uVar0;
}

var func_1049(struct<32> Param0, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[64];
	char cVar11[64];

	iVar0 = func_1250();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = (iVar1 + Param0.f_23);
	MISC::_INT_TO_STRING(iVar1, "%i", &cVar11);
	Global_1939231->f_242.f_1188++;
	StringCopy(&cVar3, "Invite_Root_", 64);
	StringConCat(&cVar3, &cVar11, 64);
	StringConCat(&cVar3, "_", 64);
	StringIntConCat(&cVar3, Global_1939231->f_242.f_1188, 64);
	func_1251(Global_1939231->f_242.f_14[iVar0 /*39*/], Global_1939231->f_242.f_4, cVar3, Param0);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_35 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_1136(84), Global_1939231->f_242.f_1188);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_37 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_1136(85), true);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_38 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_1136(86), false);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_33 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_1136(74), Param0.f_30);
	if (Param0.f_30)
	{
		(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_32 = DATABINDING::_DATABINDING_ADD_DATA_STRING(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_1136(72), Param0.f_29);
		(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_31 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_1136(75), Param0.f_28);
	}
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_26 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_1136(87), Param0.f_24);
	iVar15 = 0;
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_34 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), 707094655, iVar15);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_27 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_1136(50), Param0.f_25);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_28 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_1136(51), Param0.f_25.f_1);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_29 = DATABINDING::_DATABINDING_ADD_DATA_GANG_ID(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_1136(88), Param0.f_25.f_2);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_25 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_1136(89), iVar2);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_24 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_1136(90), Param0.f_22);
	func_900(Global_1939231->f_242.f_1186 + 1);
	if (Global_1939231->f_242.f_1188 == 2147483647)
	{
		Global_1939231->f_242.f_1188 = 0;
	}
	if (func_1252(Param0.f_24))
	{
		Param0.f_31 = 5;
		Param0.f_31.f_1 = 1;
		Param0.f_31.f_13 = 778915895;
		Param0.f_31.f_14 = &Global_1939231->f_242.f_14[iVar0 /*39*/];
		iVar16 = func_1253(&(Param0.f_31));
		(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_36 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_1136(91), iVar16);
	}
	iVar17 = func_1254();
	if (iVar17 == 0 || Param0.f_22 == iVar17)
	{
		Global_1939231->f_242.f_1187++;
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1939231->f_242.f_5, 0, "pm_invite_item", &(Global_1939231->f_242.f_14[iVar0 /*39*/]));
	}
	return &(Global_1939231->f_242.f_14[iVar0 /*39*/]);
}

int func_1050(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (&Global_1900788 == 15)
	{
		return -1;
	}
	if (!func_1255(Param0))
	{
		return -1;
	}
	iVar1 = func_1256(Param0);
	if (iVar1 >= 0)
	{
		func_1257(Param0, 1);
		return iVar1;
	}
	else
	{
		iVar0 = &Global_1900788;
		*((*Global_1900789)[iVar0 /*2*/]) = { Param0 };
		*((*Global_1900820)[iVar0 /*2*/]) = { Var2 };
		func_1257(Param0, 1);
		Global_1900788 = &Global_1900788 + 1;
		if (&Global_1900788 > 15)
		{
			Global_1900788 = 15;
		}
		return iVar0;
	}
	return -1;
}

bool func_1051(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 39);
}

int func_1052(int iParam0, int iParam1)
{
	if (!func_1051(iParam0))
	{
		return 0;
	}
	if (func_23() == -1)
	{
		return ((Global_1915180->f_3[iParam0 /*447*/])->f_6 && iParam1) != 0;
	}
	else
	{
		return ((Global_1051388->f_69[iParam0 /*76*/])->f_1 && iParam1) != 0;
	}
	return 0;
}

void func_1053(int iParam0, int iParam1)
{
	if (!func_1051(iParam0))
	{
		return;
	}
	if (func_23() == -1)
	{
		(Global_1915180->f_3[iParam0 /*447*/])->f_6 = ((Global_1915180->f_3[iParam0 /*447*/])->f_6 || iParam1);
	}
	else
	{
		(Global_1051388->f_69[iParam0 /*76*/])->f_1 = ((Global_1051388->f_69[iParam0 /*76*/])->f_1 || iParam1);
	}
}

void func_1054(int iParam0, int iParam1)
{
	if (!func_1051(iParam0))
	{
		return;
	}
	if (func_23() == -1)
	{
		(Global_1915180->f_3[iParam0 /*447*/])->f_6 = ((Global_1915180->f_3[iParam0 /*447*/])->f_6 - ((Global_1915180->f_3[iParam0 /*447*/])->f_6 && iParam1));
	}
	else
	{
		(Global_1051388->f_69[iParam0 /*76*/])->f_1 = ((Global_1051388->f_69[iParam0 /*76*/])->f_1 - ((Global_1051388->f_69[iParam0 /*76*/])->f_1 && iParam1));
	}
}

int func_1055(int iParam0)
{
	if (func_1258())
	{
		if (Global_1915180->f_19742 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

void func_1056(int iParam0)
{
	PED::SET_PED_RESET_FLAG(PLAYER::GET_PLAYER_PED(iParam0), 354, true);
	(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_4 = MISC::GET_FRAME_COUNT();
}

void func_1057(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_1058(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

Vector3 func_1059(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	int iVar5;

	fVar3 = (fParam3 * fParam3);
	iVar5 = 0;
	while (iVar5 < 10)
	{
		vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3), MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3), 0f };
		if (((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) <= fVar3)
		{
			fVar4 = (fParam4 / 2f);
			vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar4, fVar4);
			return vParam0 + vVar0;
		}
		iVar5++;
	}
	return func_300(vParam0, fParam3, fParam4);
}

int func_1060(var uParam0, float fParam1)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + fParam1);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, 0))
	{
		uParam0->f_2 = uVar3;
		return 1;
	}
	return 0;
}

var func_1061(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_1259() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_1260());
				break;
			case -432403087:
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_1260());
				break;
			case -1612834106:
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_1260());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_1261(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_1262(iVar2))
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
				if (iVar9 & 8192 != 0 && func_787(iVar2) != 1)
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
					if (!func_1135(iVar10))
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

void func_1062(bool bParam0)
{
	if (bParam0)
	{
		func_170(63);
	}
	else
	{
		func_169(63);
	}
}

int func_1063(struct<30> Param0, struct<9> Param30, int iParam39, int iParam40, int iParam41)
{
	if (func_749(255))
	{
		if ((Param0.f_17.f_9 != -1612834106 && Param0.f_17.f_9 != -432403087) && Param0.f_17.f_9 != 665633627)
		{
			Param0.f_17.f_9 = -432403087;
		}
		if (Param0.f_16)
		{
			if ((Param0.f_6.f_9 != -1612834106 && Param0.f_6.f_9 != -432403087) && Param0.f_6.f_9 != 665633627)
			{
				Param0.f_6.f_9 = -432403087;
			}
		}
		func_788(&(Global_1099294->f_516));
		Global_1099294->f_516 = { Param0 };
		func_789(&(Global_1099294->f_555));
		Global_1099294->f_555 = { Param30 };
		Global_1099294->f_586 = iParam39;
		Global_1099294->f_587 = iParam40;
		Global_1099294->f_588 = iParam41;
		func_790(Global_1099294->f_516, 36);
		func_791(Global_1099294->f_555, 36);
		func_169(47);
		return 1;
	}
	return 0;
}

void func_1064()
{
	func_484(&(Global_1070356->f_21187.f_3), 128);
}

int func_1065()
{
	return 1;
}

bool func_1066()
{
	return (!&Global_1903004 && MISC::ABSI((MISC::GET_FRAME_COUNT() - Global_1903004->f_2)) >= 5);
}

void func_1067(var uParam0, int iParam1)
{
	if (uParam0->f_2 != iParam1)
	{
		uParam0->f_2 = iParam1;
	}
}

int func_1068()
{
	int iVar0;

	iVar0 = 1;
	if ((((((!AUDIO::_0xE368E8422C860BA7(func_564(), func_801(), -2) || !AUDIO::_0xE368E8422C860BA7(func_802(), func_801(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_803(), func_801(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_1263(), func_801(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_804(), func_801(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_769(), func_770(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_805(), func_806(), -2))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_1069(var uParam0, var uParam1, int iParam2)
{
	switch (func_1264(iParam2))
	{
		case 0:
			func_1265(uParam0, uParam1, iParam2, 0);
			break;
		case 1:
			func_1266(uParam0, uParam1, iParam2, 0);
			break;
		case 2:
			func_1267(uParam0, uParam1, iParam2, -1);
			break;
		case 3:
			func_1268(uParam0, uParam1, iParam2, -1082130432 /* Float: -1f */);
			break;
		case 4:
			func_1269(uParam0, uParam1, iParam2, 0, 0);
			break;
		default:
			break;
	}
}

void func_1070(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0, bParam1);
}

void func_1071(var uParam0, int iParam1)
{
	if (uParam0->f_1 != iParam1)
	{
		uParam0->f_1 = iParam1;
	}
}

char* func_1072(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	char cVar0[32];
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char cVar8[32];

	StringCopy(&cVar0, "", 32);
	if (bParam3)
	{
		if (iParam0 != 0)
		{
			StringConCat(&cVar0, "+", 32);
			iParam0 = (iParam0 * -1);
		}
		else
		{
			return "";
		}
	}
	fVar4 = (IntToFloat(iParam0) / 1000f);
	if (bParam5)
	{
		iVar5 = BUILTIN::CEIL(fVar4);
	}
	else
	{
		iVar5 = BUILTIN::FLOOR(fVar4);
	}
	iVar6 = func_1270((iVar5 / 60), 0, 180);
	iVar7 = func_1270((iVar5 % 60), 0, 60);
	if (iVar6 <= 9)
	{
		StringConCat(&cVar0, "0", 32);
	}
	StringIntConCat(&cVar0, iVar6, 32);
	if (iVar7 <= 9)
	{
		StringConCat(&cVar0, ":0", 32);
	}
	else
	{
		StringConCat(&cVar0, ":", 32);
	}
	StringIntConCat(&cVar0, iVar7, 32);
	if (bParam1)
	{
		StringConCat(&cVar0, ".", 32);
		iVar9 = (iParam0 % 1000);
		if (iVar9 < 10)
		{
			StringConCat(&cVar8, "00", 8);
		}
		else if (iVar9 < 100)
		{
			StringConCat(&cVar8, "0", 8);
		}
		StringIntConCat(&cVar8, iVar9, 8);
		if (iParam2 > 3 || iParam2 < 1)
		{
			iParam2 = 3;
		}
		iVar10 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar8);
		if (iParam2 > iVar10)
		{
			iParam2 = iVar10;
		}
		StringCopy(&cVar8, HUD::_0xD8402B858F4DDD88(&cVar8, iParam2), 8);
		StringConCat(&cVar0, &cVar8, 32);
	}
	if (!bParam4)
	{
		StringConCat(&cVar0, " ", 32);
	}
	return HUD::_0xD8402B858F4DDD88(&cVar0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
}

void func_1073(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0, sParam1);
}

void func_1074(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 <= 11000)
	{
		if ((uParam0->f_13 > iParam1 && uParam0->f_13 > 11000) && uParam0->f_11 < 0)
		{
			uParam0->f_11 = AUDIO::GET_SOUND_ID();
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2) || MISC::ARE_STRINGS_EQUAL(sParam2, func_803()))
			{
				AUDIO::_0xCE5D0FFE83939AF1(uParam0->f_11, func_803(), func_801(), 1);
			}
			else
			{
				AUDIO::_0xCE5D0FFE83939AF1(uParam0->f_11, sParam2, func_801(), 1);
				AUDIO::_0x9821B68CD3E05F2B("Time", 11f, sParam2, func_801());
			}
		}
	}
	else
	{
		func_287(uParam0);
	}
}

void func_1075(var uParam0, int iParam1)
{
	if (iParam1 <= 0 && uParam0->f_12 < 0)
	{
		uParam0->f_12 = AUDIO::GET_SOUND_ID();
		AUDIO::_0xCE5D0FFE83939AF1(uParam0->f_12, func_1263(), func_801(), 1);
	}
}

var func_1076(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	uVar15 = _NAMESPACE71::_SHOW_OBJECTIVE(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_1077(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_7887[iParam0 /*11*/] = (&Global_7887[iParam0 /*11*/] - (Global_7887[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1070356->f_17941[iParam0 /*11*/] = (&Global_1070356->f_17941[iParam0 /*11*/] - (Global_1070356->f_17941[iParam0 /*11*/] && iParam1));
}

bool func_1078(var uParam0)
{
	uParam0->f_2 = 1648302374;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_1079(var uParam0, var uParam1)
{
	uParam0->f_2 = 1950557689;
	uParam0->f_3 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

float func_1080(float fParam0, float fParam1, float fParam2)
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

void func_1081(int iParam0, int iParam1)
{
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Local_243.f_1386), iParam1))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			func_1271(iParam0);
			if (Local_243.f_9 != -785841056)
			{
				func_886(iParam1, 1);
			}
			SCRIPTS::_0x31010318BA9897AC(&(Local_243.f_1386), iParam1);
		}
	}
}

void func_1082()
{
	if (!func_618(256))
	{
		func_1272(256);
	}
}

void func_1083(int iParam0, int iParam1)
{
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Local_243.f_1385), iParam1))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			func_1273(iParam0);
			if (Local_243.f_9 != -785841056)
			{
				func_886(iParam1, 1);
			}
			SCRIPTS::_0x31010318BA9897AC(&(Local_243.f_1385), iParam1);
		}
	}
	if (!func_134(33554432))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && iParam0 == PLAYER::PLAYER_ID())
		{
			if (func_339(_NAMESPACE26::_0x901E0DC25080C8B9(iParam0)))
			{
				func_340(0, 0, 1);
				func_43(67108864);
			}
			func_1082();
			func_43(33554432);
		}
	}
}

void func_1084(int iParam0, int iParam1)
{
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Local_243.f_1385), iParam1))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			func_1273(iParam0);
			if (!_NAMESPACE26::_0x81FB74C83C2ED69F(iParam0))
			{
				func_1274(iParam0);
			}
			if (Local_243.f_9 != -785841056)
			{
				func_886(iParam1, 1);
			}
			SCRIPTS::_0x31010318BA9897AC(&(Local_243.f_1385), iParam1);
		}
	}
	if (!func_134(33554432))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && iParam0 == PLAYER::PLAYER_ID())
		{
			if (func_339(_NAMESPACE26::_0x901E0DC25080C8B9(iParam0)))
			{
				func_340(0, 0, 1);
				func_43(67108864);
			}
			func_1082();
			func_43(33554432);
		}
	}
}

void func_1085(int iParam0, int iParam1, bool bParam2)
{
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Local_243.f_1385), iParam1))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			func_1273(iParam0);
			if (bParam2)
			{
				if ((func_181(64) || !_NAMESPACE26::_0x81FB74C83C2ED69F(iParam0)) || Local_243.f_1387 == -1477057661)
				{
					func_1275(iParam0);
				}
			}
			else if (!_NAMESPACE26::_0x81FB74C83C2ED69F(iParam0))
			{
				func_1274(iParam0);
			}
			if (Local_243.f_9 != -785841056)
			{
				func_886(iParam1, 1);
			}
			SCRIPTS::_0x31010318BA9897AC(&(Local_243.f_1385), iParam1);
		}
	}
	if (!func_134(33554432))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && iParam0 == PLAYER::PLAYER_ID())
		{
			if (func_339(_NAMESPACE26::_0x901E0DC25080C8B9(iParam0)))
			{
				func_340(0, 0, 1);
				func_43(67108864);
			}
			func_1082();
			func_43(33554432);
		}
	}
}

float func_1086(int iParam0, bool bParam1)
{
	int iVar0;

	if (!Global_1132968->f_6289)
	{
		return 0f;
	}
	if (iParam0 == &Global_1275573->f_154[&Global_1275573])
	{
		return Global_17172.f_2619;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0f;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0f;
	}
	if ((_NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(iParam0)) > 1 && bParam1) && ((*Global_1097610)[iVar0 /*51*/])->f_18 >= ((*Global_1097610)[iVar0 /*51*/])->f_45)
	{
		return ((*Global_1097610)[iVar0 /*51*/])->f_18;
	}
	return ((*Global_1097610)[iVar0 /*51*/])->f_45;
}

int func_1087(struct<2> Param0, var uParam2)
{
	if (!func_73(Param0))
	{
		return 0;
	}
	func_1276(uParam2);
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

bool func_1088(int iParam0)
{
	return SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_19683.f_260), iParam0);
}

void func_1089(var uParam0)
{
	func_827(uParam0, 143479330);
	if (func_1277() == 2026485318)
	{
		func_827(uParam0, 617531372);
	}
	else
	{
		func_827(uParam0, 291123060);
	}
}

void func_1090(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_440(uParam0))
	{
		return;
	}
	if (Global_1272170->f_2518 < 20)
	{
		Global_1272170->f_2518++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1272170->f_2518.f_1[iVar0 /*21*/]) = { *(Global_1272170->f_2518.f_1[iVar0 + 1 /*21*/]) };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1272170->f_2518.f_1[(Global_1272170->f_2518 - 1) /*21*/]) = { Var1 };
}

bool func_1091(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_691(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_988(iParam0);
	switch (iVar0)
	{
		case joaat("weapon"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, 0))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("ammo"):
			if (!func_1278(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("clothing"):
			if (func_1279(iParam0))
			{
				return true;
			}
			break;
	}
	return func_1032(iParam0, 0, 0, 0) >= iParam1;
}

bool func_1092()
{
	return func_1280() != -1;
}

float func_1093()
{
	return (Global_1140484->f_2001[82 /*192*/])->f_188;
}

int func_1094(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

void func_1095(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_1096(var uParam0)
{
	if (uParam0->f_5 != -1)
	{
		AUDIO::_0x0F2A2175734926D8("collectible_lure", "RDRO_Collectible_Sounds_Travelling_Saleswoman");
		AUDIO::RELEASE_SOUND_ID(uParam0->f_5);
		PAD::STOP_PAD_SHAKE(0);
		uParam0->f_5 = -1;
	}
	AUDIO::_0x531A78D6BF27014B("RDRO_Collectible_Sounds_Travelling_Saleswoman");
}

bool func_1097(var uParam0, int iParam1)
{
	return func_78(uParam0->f_54, iParam1);
}

int func_1098(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_21 - 1))
	{
		if (AUDIO::IS_ANY_SPEECH_PLAYING(&(uParam1->f_1[iVar0 /*17*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

char* func_1099(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "WHAT_IS_THAT";
		case 2:
			return "HEADS_UP_NEUTRAL";
		case 4:
			return "WARNING";
		case 8:
			return "KEEP_GOING";
		case 16:
			return "FINAL_WARNING";
		case 32:
			return "GREET_GENERAL_STRANGER";
		case 64:
			return "HEADS_UP_CONFRONT";
		default:
			break;
	}
	return "";
}

bool func_1100(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = uParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_1281(uParam0, &Var0);
}

void func_1101(struct<10> Param0)
{
	int iVar0;

	((Local_2503.f_42[Param0.f_6 /*56*/])->f_1[Param0.f_7 /*17*/])->f_2 = PLAYER::GET_PLAYER_PED(Param0.f_1);
	func_1282((Local_2503.f_42[Param0.f_6 /*56*/])->f_1[Param0.f_7 /*17*/], 8);
	func_1282((Local_2503.f_42[Param0.f_6 /*56*/])->f_1[Param0.f_7 /*17*/], 16);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_1012((Local_1706.f_51[Param0.f_6 /*22*/])->f_1[Param0.f_7 /*6*/], 8);
		func_1005(Local_1706.f_51[Param0.f_6 /*22*/], 8);
	}
	iVar0 = 0;
	while (iVar0 <= ((Local_1706.f_51[Param0.f_6 /*22*/])->f_21 - 1))
	{
		if (iVar0 == Param0.f_7 || ((Local_2503.f_42[Param0.f_6 /*56*/])->f_1[iVar0 /*17*/])->f_10 != joaat("guard"))
		{
		}
		else
		{
			if (Param0.f_9 != 255)
			{
				((Local_2503.f_42[Param0.f_6 /*56*/])->f_1[iVar0 /*17*/])->f_2 = PLAYER::GET_PLAYER_PED(Param0.f_9);
			}
			func_1282((Local_2503.f_42[Param0.f_6 /*56*/])->f_1[iVar0 /*17*/], 16);
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_1012((Local_1706.f_51[Param0.f_6 /*22*/])->f_1[iVar0 /*6*/], 16);
			}
		}
		iVar0++;
	}
}

void func_1102(struct<7> Param0, var uParam7, var uParam8, var uParam9)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= ((Local_1706.f_51[Param0.f_6 /*22*/])->f_21 - 1))
	{
		func_1283((Local_2503.f_42[Param0.f_6 /*56*/])->f_1[iVar0 /*17*/], 16);
		func_1283((Local_2503.f_42[Param0.f_6 /*56*/])->f_1[iVar0 /*17*/], 8);
		func_205(&(((Local_2503.f_42[Param0.f_6 /*56*/])->f_1[iVar0 /*17*/])->f_12));
		((Local_2503.f_42[Param0.f_6 /*56*/])->f_1[iVar0 /*17*/])->f_2 = 0;
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1284((Local_1706.f_51[Param0.f_6 /*22*/])->f_1[iVar0 /*6*/], 16);
			func_1284((Local_1706.f_51[Param0.f_6 /*22*/])->f_1[iVar0 /*6*/], 8);
			func_1285(Local_1706.f_51[Param0.f_6 /*22*/], 8);
			func_1227((Local_1706.f_51[Param0.f_6 /*22*/])->f_1[iVar0 /*6*/], 6);
		}
		iVar0++;
	}
}

void func_1103(struct<10> Param0)
{
	int iVar0;

	Local_2503.f_36 = Param0.f_8;
	iVar0 = 0;
	while (iVar0 <= ((Local_1706.f_51[Param0.f_6 /*22*/])->f_21 - 1))
	{
		func_1282((Local_2503.f_42[Param0.f_6 /*56*/])->f_1[iVar0 /*17*/], 32);
		if (Param0.f_9 != 255)
		{
			((Local_2503.f_42[Param0.f_6 /*56*/])->f_1[iVar0 /*17*/])->f_2 = PLAYER::GET_PLAYER_PED(Param0.f_9);
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1012((Local_1706.f_51[Param0.f_6 /*22*/])->f_1[iVar0 /*6*/], 32);
			func_1005(Local_1706.f_51[Param0.f_6 /*22*/], 16);
		}
		iVar0++;
	}
}

void func_1104(struct<9> Param0, var uParam9)
{
	Local_2503.f_847 = Param0.f_6;
	Local_2503.f_848 = Param0.f_7;
	Local_2503.f_846 = Param0.f_8;
}

void func_1105(struct<8> Param0, var uParam8, var uParam9)
{
	((Local_2503.f_42[Param0.f_6 /*56*/])->f_1[Param0.f_7 /*17*/])->f_2 = PLAYER::GET_PLAYER_PED(Param0.f_1);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_1227((Local_1706.f_51[Param0.f_6 /*22*/])->f_1[Param0.f_7 /*6*/], 3);
	}
}

int func_1106(var uParam0, var uParam1)
{
	int iVar0;

	if (!func_440(uParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272170->f_2518)
	{
		if (func_441(Global_1272170->f_2518.f_1[iVar0 /*21*/], uParam0))
		{
			*uParam1 = { *(Global_1272170->f_2518.f_1[iVar0 /*21*/]) };
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1107(int iParam0)
{
	func_430(Local_2054[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/], iParam0);
}

bool func_1108(var uParam0, int iParam1)
{
	return func_78(uParam0->f_3, iParam1);
}

void func_1109(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_1286(uParam0, uParam1);
	if (iVar0 != 0)
	{
		if (!ENTITY::_0x8C03CD6B5E0E85E8(*uParam1, iVar0))
		{
		}
	}
}

void func_1110(var uParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	struct<10> Var2;
	bool bVar12;
	int iVar13;

	if ((NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*uParam1) && !func_1287(*uParam1, Local_243.f_1396, (Local_243.f_1294 + 50f), 1, 1)) && !func_1288(ENTITY::GET_ENTITY_COORDS(*uParam1, true, false), 1f, 1120403456 /* Float: 100f */))
	{
		func_499(*uParam1, 0, 0);
	}
	if ((((NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*uParam1) && uParam1->f_10 == joaat("bandit")) && func_714(&(uParam0->f_3)) > 15f) && !func_831(*uParam1, func_1289(*uParam1), 150f, 1)) && !func_1288(ENTITY::GET_ENTITY_COORDS(*uParam1, true, false), 1f, 200f))
	{
		func_499(*uParam1, 0, 0);
	}
	if (uParam1->f_10 == joaat("horse"))
	{
		return;
	}
	if (!func_1108(uParam1, 512) && ENTITY::IS_ENTITY_DEAD(*uParam1))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*uParam1))
		{
			func_1109(uParam0, uParam1);
		}
		func_1282(uParam1, 512);
	}
	bVar0 = false;
	if (uParam1->f_10 == joaat("bandit") || uParam1->f_10 == joaat("defensive"))
	{
		func_1290(&(Local_2503.f_5), 1);
		bVar0 = true;
	}
	else
	{
		func_1290(&(Local_2503.f_5), 0);
	}
	if (((!func_1108(uParam1, 4) && (MISC::GET_FRAME_COUNT() % 3) == 0) && NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(PLAYER::PLAYER_ID(), ENTITY::GET_ENTITY_COORDS(*uParam1, true, false), 2f, 50f)) && !ENTITY::IS_ENTITY_OCCLUDED(*uParam1))
	{
		func_1003((Local_2054[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/])->f_1[uParam1->f_15], 4);
		func_1282(uParam1, 4);
	}
	if (!func_1108(uParam1, 32))
	{
		bVar1 = false;
		if (bVar0 && func_1291(*uParam1, PLAYER::PLAYER_PED_ID(), 1109393408 /* Float: 40f */))
		{
			bVar1 = true;
			Local_2503.f_36 = 131072;
		}
		if (func_1292(*uParam1, 0, &(Local_2503.f_5), &(Local_2503.f_36), 0, 0))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			func_1282(uParam1, 32);
			Var2.f_9 = 255;
			Var2.f_5 = func_1293(0, 8);
			Var2.f_6 = uParam1->f_15;
			Var2.f_7 = uParam1->f_16;
			Var2.f_8 = Local_2503.f_36;
			Var2.f_9 = PLAYER::PLAYER_ID();
			func_1294(Var2, 3);
		}
	}
	if (((func_1108(uParam1, 32) && uParam0->f_1 < 8) && !func_1295(*uParam1, 780511057)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*uParam1))
	{
		bVar12 = false;
		switch (Local_2503.f_36)
		{
			case 4:
			case 256:
				bVar12 = true;
				break;
		}
		iVar13 = uParam1->f_2;
		if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
		{
			iVar13 = func_1289(*uParam1);
		}
		if (PED::IS_PED_USING_ANY_SCENARIO(*uParam1))
		{
			PED::_0x802092B07E3B1EEA(*uParam1, ENTITY::GET_ENTITY_COORDS(func_1289(*uParam1), true, false), 3);
		}
		if (bVar12 && !PED::IS_PED_USING_ANY_SCENARIO(*uParam1))
		{
			TASK::OPEN_SEQUENCE_TASK(&(Local_2503.f_41));
			TASK::TASK_COMBAT_PED(0, iVar13, 16384, 0);
			func_1296(*uParam1, &(Local_2503.f_41), 0f, 1.5f, 1, 1);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&(Local_2503.f_41));
			TASK::TASK_COMBAT_PED(0, iVar13, 0, 0);
			func_1296(*uParam1, &(Local_2503.f_41), 0f, 1.5f, 1, 1);
		}
	}
	if ((!ENTITY::IS_ENTITY_DEAD(*uParam1) && uParam1->f_10 != -1346830927) && uParam1->f_10 != joaat("horse"))
	{
		if (!func_1108(uParam1, 64))
		{
			if (func_1013(uParam0, 32) && func_831(PLAYER::PLAYER_PED_ID(), *uParam1, 75f, 1))
			{
				uParam1->f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), *uParam1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam1->f_1, func_1297(uParam1));
				func_1282(uParam1, 64);
				func_1282(uParam1, 128);
				if (!func_501(32))
				{
					func_504(32);
				}
			}
			else if (func_1013(uParam0, 4) && func_831(PLAYER::PLAYER_PED_ID(), *uParam1, 50f, 1))
			{
				uParam1->f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), *uParam1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam1->f_1, func_1297(uParam1));
				MAP::_0x662D364ABF16DE2F(uParam1->f_1, -662251075);
				func_1282(uParam1, 64);
			}
		}
		else
		{
			if (!func_1108(uParam1, 128) && func_1013(uParam0, 32))
			{
				MAP::_SET_BLIP_FLASH_STYLE(uParam1->f_1, -662251075);
				func_1282(uParam1, 128);
			}
			if (!func_831(PLAYER::PLAYER_PED_ID(), *uParam1, 100f, 1))
			{
				MAP::REMOVE_BLIP(&(uParam1->f_1));
				func_1283(uParam1, 64);
				func_1283(uParam1, 128);
			}
		}
	}
	else if (MAP::DOES_BLIP_EXIST(uParam1->f_1))
	{
		MAP::REMOVE_BLIP(&(uParam1->f_1));
	}
	switch (uParam1->f_10)
	{
		case joaat("search"):
			func_1298(uParam0, uParam1);
			break;
		case joaat("guard"):
			func_1299(uParam0, uParam1);
			break;
		case joaat("bandit"):
			func_1300(uParam0, uParam1);
			break;
		case joaat("defensive"):
			func_1301(uParam0, uParam1);
			break;
		case -1346830927:
			func_1302(uParam0, uParam1);
			break;
		case -862695229:
			func_1303(uParam0, uParam1);
			break;
	}
	uParam1->f_11 = uParam0->f_1;
}

void func_1111(bool bParam0)
{
	if (func_1304())
	{
		Global_1956186 = 1;
	}
	if (func_1305(-92416669))
	{
	}
	if (bParam0 && Global_1939178->f_38 == joaat("weapon_kit_camera"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("weapon_unarmed"), true, 0, false, false);
		Global_1939178->f_38 = joaat("weapon_unarmed");
	}
}

void func_1112(int iParam0)
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
	func_1306(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_1113(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	struct<8> Var6;

	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (func_1307(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] != 2)
	{
		if (!&Global_1275573->f_22[iVar0])
		{
			func_1112(iParam0);
			return;
		}
		NETWORK::_0x51951DE06C0D1C40(iParam0, 2);
		Global_1070356->f_19683.f_1[iVar0 /*8*/] = 2;
		iVar1 = 1;
	}
	if (iParam2 && iVar1)
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (iVar2 != &Global_1275573 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
			{
				if (_NAMESPACE26::_0x81FB74C83C2ED69F(iVar3))
				{
					if (bParam3)
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar4, iVar2);
						bVar5 = true;
					}
				}
				else if (_NAMESPACE26::_0x3F59FE6F37869576(iVar3, iParam0))
				{
					if (bParam4)
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar4, iVar2);
						bVar5 = true;
					}
					if (iVar2 != iVar0)
					{
						func_1113(iVar3, iParam1, 0, 1, 0, 0);
					}
				}
			}
			iVar2++;
		}
		if (bVar5)
		{
			Var6.f_6 = 255;
			Var6.f_4 = 1;
			Var6.f_6 = iParam0;
			Var6.f_7 = iParam1;
			func_1308(&Var6, uVar4);
		}
	}
}

int func_1114(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	var uVar0;
	bool bVar1;
	bool bVar2;

	if (uParam1[0 /*5*/] == 0)
	{
		uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5, "score");
		func_1266(uVar0, (*uParam1)[0 /*5*/], 2, "0");
		func_1266(uVar0, (*uParam1)[1 /*5*/], 8, "0");
		bVar1 = !func_614(iParam2, 16);
		bVar2 = !func_614(iParam2, 32);
		func_1269(uVar0, &(((*uParam1)[0 /*5*/])->f_3), 5, bVar1, 0);
		func_1265(uVar0, &(((*uParam1)[0 /*5*/])->f_1), 3, iParam4);
		func_1265(uVar0, &(((*uParam1)[0 /*5*/])->f_2), 4, iParam6);
		func_1269(uVar0, &(((*uParam1)[1 /*5*/])->f_3), 11, bVar2, 0);
		func_1265(uVar0, &(((*uParam1)[1 /*5*/])->f_1), 9, iParam5);
		func_1265(uVar0, &(((*uParam1)[1 /*5*/])->f_2), 10, iParam7);
	}
	return 1;
}

int func_1115(var uParam0, int iParam1, int iParam2)
{
	if (func_614(iParam1, 262144))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_160), 6);
	}
	else if (func_614(iParam1, 65536))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_160), 3);
	}
	else if (func_614(iParam1, 131072))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_160), 4);
		MISC::SET_BIT(&(uParam0->f_11.f_159), 18);
	}
	else if (func_614(iParam1, 1048576))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_160), 8);
	}
	else
	{
		MISC::SET_BIT(&(uParam0->f_11.f_159), 6);
	}
	if (func_614(iParam1, 64))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_159), 0);
	}
	if (func_614(iParam1, 2048))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_159), 7);
	}
	if (func_614(iParam1, 1024))
	{
		uParam0->f_11.f_151 = 2;
		MISC::SET_BIT(&(uParam0->f_11.f_159), 31);
	}
	if (func_614(iParam1, 4096))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_159), 9);
	}
	if (func_614(iParam1, 16384))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_159), 17);
		MISC::SET_BIT(&(uParam0->f_11.f_159), 18);
	}
	if (func_614(iParam1, 8192))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_159), 10);
		MISC::SET_BIT(&(uParam0->f_11.f_159), 17);
		MISC::SET_BIT(&(uParam0->f_11.f_159), 18);
	}
	if (func_614(iParam1, 32768))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_159), 22);
		MISC::SET_BIT(&(uParam0->f_11.f_159), 23);
	}
	if (func_614(iParam1, 524288))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_160), 7);
	}
	if (func_614(iParam1, 2097152))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_159), 17);
		MISC::SET_BIT(&(uParam0->f_11.f_160), 9);
	}
	func_1309(&(uParam0->f_11));
	func_273(uParam0);
	if (iParam2 > 1)
	{
		uParam0->f_11.f_150 = iParam2;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_950)))
	{
		func_1310(&(uParam0->f_11), &(uParam0->f_950));
	}
	return 1;
}

void func_1116(var uParam0, int iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	char cVar0[32];
	char cVar4[32];
	char cVar8[32];
	var uVar12;
	char cVar16[32];
	char cVar20[32];
	char cVar24[32];
	var uVar28;
	bool bVar32;
	bool bVar33;

	if (((*uParam0)[0 /*5*/])->f_4 != fParam2 || bParam11)
	{
		if (bParam6)
		{
			StringCopy(&cVar0, func_1311(fParam2), 32);
			func_1073(uParam0[0 /*5*/], &cVar0);
		}
		else if (bParam4)
		{
			StringCopy(&cVar4, func_1312(fParam2), 32);
			func_1073(uParam0[0 /*5*/], &cVar4);
		}
		else if (bParam5)
		{
			StringCopy(&cVar8, MISC::_0x2B6846401D68E563(fParam2, 2), 32);
			func_1073(uParam0[0 /*5*/], &cVar8);
		}
		else
		{
			MISC::_INT_TO_STRING(BUILTIN::FLOOR(fParam2), "%i", &uVar12);
			func_1073(uParam0[0 /*5*/], &uVar12);
		}
		((*uParam0)[0 /*5*/])->f_4 = fParam2;
	}
	if (((*uParam0)[1 /*5*/])->f_4 != fParam3 || bParam11)
	{
		if (bParam6)
		{
			StringCopy(&cVar16, func_1311(fParam3), 32);
			func_1073(uParam0[1 /*5*/], &cVar16);
		}
		else if (bParam4)
		{
			StringCopy(&cVar20, func_1312(fParam3), 32);
			func_1073(uParam0[1 /*5*/], &cVar20);
		}
		else if (bParam5)
		{
			StringCopy(&cVar24, MISC::_0x2B6846401D68E563(fParam3, 2), 32);
			func_1073(uParam0[1 /*5*/], &cVar24);
		}
		else
		{
			MISC::_INT_TO_STRING(BUILTIN::FLOOR(fParam3), "%i", &uVar28);
			func_1073(uParam0[1 /*5*/], &uVar28);
		}
		((*uParam0)[1 /*5*/])->f_4 = fParam3;
	}
	bVar32 = !func_614(iParam1, 16);
	bVar33 = !func_614(iParam1, 32);
	func_1313(((*uParam0)[0 /*5*/])->f_1, iParam7);
	func_1313(((*uParam0)[0 /*5*/])->f_2, iParam9);
	func_1070(((*uParam0)[0 /*5*/])->f_3, bVar32);
	func_1313(((*uParam0)[1 /*5*/])->f_1, iParam8);
	func_1313(((*uParam0)[1 /*5*/])->f_2, iParam10);
	func_1070(((*uParam0)[1 /*5*/])->f_3, bVar33);
}

void func_1117(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	func_1314(uParam0, uParam1, iParam4, bParam3, 0, bParam5, 0, iParam6, iParam2);
	func_1315(uParam0, uParam1, bParam3, iParam2, iParam4, MISC::IS_BIT_SET(uParam0->f_159, 5), iParam6);
}

void func_1118(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	iVar0 = -1;
	if (!MISC::IS_BIT_SET(uParam0->f_159, 1))
	{
		iVar2 = PLAYER::GET_PLAYER_TEAM(*iParam2);
		iVar3 = func_1316();
		bVar4 = func_1317();
		bVar5 = func_1318();
		bVar6 = MISC::IS_BIT_SET(uParam0->f_158, 18);
		if (uParam0->f_152 != Global_1939067->f_108)
		{
			if (uParam0->f_152)
			{
				bVar1 = true;
			}
			uParam0->f_152 = Global_1939067->f_108;
			bParam3 = true;
		}
		func_1319(uParam0, uParam1, iParam2, &iVar0, iVar2);
		if (!MISC::IS_BIT_SET(uParam0->f_158, 1))
		{
			if (!bVar5 && !bParam7)
			{
				if ((iVar3 != -1 || bVar4) || bVar6)
				{
					if (!MISC::IS_BIT_SET(uParam0->f_158, 0))
					{
						func_1309(uParam0);
						func_1320(uParam0, uParam1, iParam4, 0, 1, bParam5, iVar2, -1, bParam6, 0, iVar0);
						MISC::SET_BIT(&(uParam0->f_158), 0);
					}
					else
					{
						func_1117(uParam0, uParam1, iVar2, bParam5, iParam4, bParam6, iVar0);
					}
					MISC::CLEAR_BIT(&(uParam0->f_158), 13);
					MISC::SET_BIT(&(uParam0->f_158), 1);
				}
			}
		}
		else if ((((iVar3 == -1 && !bVar4) && !bVar6) || bVar5) || bParam7)
		{
			if (!bVar1)
			{
				MISC::SET_BIT(&(uParam0->f_158), 13);
			}
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
			PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_LR"), true);
			PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_UD"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_GUN_LR"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_GUN_UD"), true);
			PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_HORSE_GUN_LR"), true);
			PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_HORSE_GUN_UD"), true);
			MISC::CLEAR_BIT(&(uParam0->f_158), 1);
			if (bVar5)
			{
				Global_1939067->f_5 = 0;
			}
		}
		else
		{
			if (!Global_1939067->f_108)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), false);
				PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_UD"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_GUN_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_GUN_UD"), false);
				PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_HORSE_GUN_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_HORSE_GUN_UD"), false);
			}
			if (bParam3)
			{
				func_1117(uParam0, uParam1, iVar2, bParam5, iParam4, bParam6, iVar0);
			}
			else if (!Global_1939067->f_108)
			{
				func_1321(uParam0, uParam1);
				func_1322(uParam0, uParam1, 0);
			}
		}
		if (!Global_1939067->f_108)
		{
			if ((MISC::IS_BIT_SET(uParam0->f_158, 1) || MISC::IS_BIT_SET(uParam0->f_158, 13)) || uParam0->f_198 < 2)
			{
				func_1323(uParam0, 1);
			}
			func_1324(uParam0);
		}
	}
}

void func_1119(var uParam0, var uParam1, int iParam2, char* sParam3, int iParam4)
{
	if (iParam4 == 0)
	{
		iParam4 = joaat("COLOR_PURE_WHITE");
	}
	(*uParam1)[iParam2 /*34*/] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5, sParam3);
	func_1265(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_4), 21, 0);
	func_1265(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_5), 20, 0);
	func_1265(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_7), 23, 0);
	func_1265(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_8), 22, 0);
	func_1265(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_9), 24, 0);
	func_1265(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_2), 18, iParam4);
	func_1069(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_1), 17);
	func_1069(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_3), 19);
	func_1069(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_6), 25);
	func_1069(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_10), 26);
	func_1069(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_11), 27);
	func_1069(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_20), 16);
	func_1069(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_21), 14);
	func_1069(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_22), 15);
	func_1069(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_12), 29);
	func_1069(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_13), 28);
	func_1069(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_14), 30);
	func_1069(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_15), 31);
	func_1069(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_16), 32);
	func_1069(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_17), 33);
	func_1069(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_18), 34);
	func_1069(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_19), 35);
}

void func_1120(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	switch (iParam0)
	{
		case joaat("attack"):
			*uParam1 = func_1325();
			*uParam2 = func_1325();
			*uParam3 = func_1325();
			*uParam4 = func_1325();
			*uParam5 = func_1326();
			*uParam6 = func_1325();
			*uParam7 = func_1325();
			break;
		case 404851220:
			*uParam1 = func_1327();
			*uParam2 = func_1327();
			*uParam3 = func_1325();
			*uParam4 = func_1326();
			*uParam5 = func_1326();
			*uParam6 = func_1325();
			*uParam7 = func_1325();
			break;
		case joaat("defend"):
			*uParam1 = func_1326();
			*uParam2 = func_1327();
			*uParam3 = func_1325();
			*uParam4 = func_1326();
			*uParam5 = func_1326();
			*uParam6 = func_1325();
			*uParam7 = func_1325();
			break;
		case joaat("COLLECT"):
			*uParam1 = func_1325();
			*uParam2 = func_1325();
			*uParam3 = func_1326();
			*uParam4 = func_1325();
			*uParam5 = func_1326();
			*uParam6 = func_1325();
			*uParam7 = func_1325();
			break;
	}
}

void func_1121(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	char* sVar8;
	int iVar9;
	float fVar10;
	char[] cVar11[8];

	bVar3 = true;
	bVar4 = true;
	iVar5 = ((*uParam0)[iParam1 /*34*/])->f_25;
	iVar6 = ((*uParam0)[iParam1 /*34*/])->f_26;
	iVar9 = ((*uParam0)[iParam1 /*34*/])->f_23;
	if (bParam10)
	{
		iVar9 = 0;
	}
	switch (iVar9)
	{
		case -1:
		case 0:
			bVar3 = false;
			break;
		case 5:
			iVar0 = iParam5;
			iVar2 = iParam5;
			break;
		case 6:
			iVar0 = iParam7;
			iVar2 = iParam7;
			break;
		case 7:
			bVar4 = false;
			iVar0 = func_1327();
			iVar2 = iParam6;
			iVar1 = iParam6;
			sVar7 = "scoretimer_textures";
			sVar8 = "SCORETIMER_GENERIC_TICK";
			break;
		case 8:
			bVar4 = false;
			iVar0 = func_1327();
			iVar2 = iParam8;
			iVar1 = iParam8;
			sVar7 = "scoretimer_textures";
			sVar8 = "SCORETIMER_GENERIC_TICK";
			break;
		case 2:
			bVar4 = false;
			iVar0 = func_1327();
			iVar2 = func_1327();
			iVar1 = iParam3;
			sVar7 = "scoretimer_textures";
			sVar8 = "SCORETIMER_GENERIC_CROSS";
			break;
		case 3:
			bVar4 = false;
			iVar0 = iParam2;
			iVar2 = iParam2;
			break;
		case 9:
			iVar0 = func_1325();
			iVar2 = func_1325();
			break;
		case 4:
			iVar0 = iParam4;
			break;
		default:
			iVar0 = iParam2;
			iVar2 = iParam2;
			break;
	}
	func_1070(((*uParam0)[iParam1 /*34*/])->f_21, bVar3);
	if (bVar3)
	{
		func_1328(uParam0, iParam1);
		func_1070(((*uParam0)[iParam1 /*34*/])->f_11, bVar4);
		fVar10 = ((*uParam0)[iParam1 /*34*/])->f_29;
		if (((*uParam0)[iParam1 /*34*/])->f_28 > 1)
		{
			fVar10 = (BUILTIN::TO_FLOAT(((*uParam0)[iParam1 /*34*/])->f_27) / BUILTIN::TO_FLOAT(((*uParam0)[iParam1 /*34*/])->f_28));
			if (bParam11 && !func_1329(((*uParam0)[iParam1 /*34*/])->f_23))
			{
				iVar5 = 0;
				iVar6 = 0;
				StringIntConCat(&cVar11, ((*uParam0)[iParam1 /*34*/])->f_27, 8);
				if (bParam12)
				{
					StringConCat(&cVar11, "/", 8);
					StringIntConCat(&cVar11, ((*uParam0)[iParam1 /*34*/])->f_28, 8);
				}
			}
			func_1073(((*uParam0)[iParam1 /*34*/])->f_20, &cVar11);
		}
		else
		{
			func_1073(((*uParam0)[iParam1 /*34*/])->f_20, "");
		}
		if (fVar10 >= 0f)
		{
			if (iParam9 == 0)
			{
				func_1313(((*uParam0)[iParam1 /*34*/])->f_2, iVar2);
			}
			func_1330(((*uParam0)[iParam1 /*34*/])->f_1, fVar10);
			func_1070(((*uParam0)[iParam1 /*34*/])->f_10, 0);
			func_1070(((*uParam0)[iParam1 /*34*/])->f_3, 1);
		}
		else
		{
			func_1070(((*uParam0)[iParam1 /*34*/])->f_10, 1);
			func_1070(((*uParam0)[iParam1 /*34*/])->f_3, 0);
		}
		if (iVar6 != 0)
		{
			func_1313(((*uParam0)[iParam1 /*34*/])->f_6, iVar0);
			func_1313(((*uParam0)[iParam1 /*34*/])->f_4, iVar5);
			func_1313(((*uParam0)[iParam1 /*34*/])->f_5, iVar6);
		}
		if (!MISC::IS_STRING_NULL(sVar8))
		{
			func_1313(((*uParam0)[iParam1 /*34*/])->f_14, iVar1);
			func_1073(((*uParam0)[iParam1 /*34*/])->f_12, sVar7);
			func_1073(((*uParam0)[iParam1 /*34*/])->f_13, sVar8);
			func_1070(((*uParam0)[iParam1 /*34*/])->f_15, 1);
		}
		else
		{
			func_1070(((*uParam0)[iParam1 /*34*/])->f_15, 0);
		}
		func_1070(((*uParam0)[iParam1 /*34*/])->f_16, ((*uParam0)[iParam1 /*34*/])->f_30);
	}
}

void func_1122(int iParam0, int iParam1)
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

int func_1123(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_1122(iParam2, -372840566);
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
	func_1331(uParam1, iParam0, Var3);
	return 1;
}

void func_1124(var uParam0)
{
	int iVar0;

	uParam0->f_33 = 0;
	uParam0->f_34 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		(*uParam0)[iVar0] = 255;
		iVar0++;
	}
}

void func_1125(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	struct<2> Var21[10];

	if (*uParam2 < 10)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_PRICE_MODIFIERS(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		Var21[iVar0 /*2*/] = uParam2[iVar0 /*2*/];
		(Var21[iVar0 /*2*/])->f_1 = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (&Var21[iVar0 /*2*/] == Var19)
							{
								(Var21[iVar0 /*2*/])->f_1 = ((Var21[iVar0 /*2*/])->f_1 + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if ((Var21[iVar0 /*2*/])->f_1 != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = BUILTIN::FLOOR((IntToFloat(((*uParam2)[iVar0 /*2*/])->f_1) * ((Var21[iVar0 /*2*/])->f_1 / 1f)));
		}
		iVar0++;
	}
}

void func_1126(int iParam0)
{
	Global_1951141 = (&Global_1951141 - (Global_1951141 && iParam0));
}

void func_1127()
{
	Global_1951141->f_3235 = 0;
	Global_1951141->f_3235.f_1 = 0;
	Global_1951141->f_3235.f_8 = 0;
	Global_1951141->f_3235.f_2 = 0;
	Global_1951141->f_3235.f_3[0] = 0;
	Global_1951141->f_3235.f_3[1] = 0;
	Global_1951141->f_3235.f_3[2] = 0;
	Global_1951141->f_3235.f_3[3] = 0;
	Global_1951141->f_3235.f_9 = 0;
	Global_1951141->f_3235.f_10 = 0;
	Global_1951141->f_3235.f_11 = 0;
	if (Global_1951141->f_3235.f_12)
	{
		PED::_0x13E7320C762F0477(Global_1951141->f_3235.f_13);
	}
	Global_1951141->f_3235.f_12 = 0;
	func_1126(32768);
	func_1332(1108822547, 8, 6);
}

void func_1128(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1333(iVar0, iParam0))
		{
			func_1334(iVar0, iParam0, 6);
		}
		iVar0++;
	}
}

void func_1129(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 2;
	}
	if (bParam2 && Global_1951141->f_2706 != 0)
	{
		func_1335(Global_1951141->f_2706);
		func_1336(0);
		Global_1951141->f_2706 = 0;
	}
	if (func_956(32768))
	{
		func_1337(1108822547);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		iParam0 = 0;
		func_1338(&(Global_1951141->f_1657.f_1[1 /*3*/]), -1811760631, &(Global_1951141->f_1055), &(Global_1951141->f_1055.f_9), 1);
		func_1338(&(Global_1951141->f_1657.f_1[4 /*3*/]), -2118203104, &(Global_1951141->f_1055), &(Global_1951141->f_1055.f_9), 1);
		func_963(2, 0, iVar0, 0, 0);
		func_963(4, 0, 0, 0, 0);
		func_963(5, 0, 0, 0, 0);
	}
	else
	{
		iVar0 |= 1;
		func_963(2, 0, iVar0, iParam0, 0);
	}
	func_1339();
}

void func_1130()
{
	func_1340(0);
	func_1340(1);
	func_1340(2);
	func_1340(3);
}

void func_1131()
{
	func_1341(0);
	func_1341(1);
	func_1341(2);
	func_1341(3);
}

float func_1132(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_972(2);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1954472->f_1331.f_6[iParam0 /*3*/]);
		case 1:
			return &(Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/]);
		default:
			break;
	}
	return -1f;
}

float func_1133(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_47(iParam0, iParam1) };
	STATS::STAT_ID_GET_FLOAT(&Var1, &uVar0);
	return uVar0;
}

var func_1134(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_505(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

bool func_1135(int iParam0)
{
	if (func_844(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 1)
		{
			func_1342(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 1;
}

char* func_1136(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "dynamic_list_item_enabled";
		case 1:
			return "dynamic_list_item_visible";
		case 2:
			return "dynamic_list_item_main_color";
		case 3:
			return "dynamic_list_item_secondary_color";
		case 4:
			return "dynamic_list_item_tertiary_color";
		case 5:
			return "dynamic_list_item_main_img_texture_dic";
		case 6:
			return "dynamic_list_item_main_img_texture";
		case 7:
			return "dynamic_list_item_main_img_visible";
		case 8:
			return "dynamic_list_item_main_img_enabled";
		case 9:
			return "dynamic_list_item_status_icon_texture_dic";
		case 10:
			return "dynamic_list_item_status_icon_texture";
		case 11:
			return "dynamic_list_item_status_icon_visible";
		case 12:
			return "dynamic_list_item_deco_texture_dic";
		case 13:
			return "dynamic_list_item_deco__texture";
		case 14:
			return "dynamic_list_item_deco_visible";
		case 15:
			return "dynamic_list_item_raw_text_entry";
		case 16:
			return "dynamic_list_item_text_label_entry";
		case 17:
			return "dynamic_list_item_secondary_raw_text_entry";
		case 18:
			return "dynamic_list_item_secondary_text_label_entry";
		case 19:
			return "dynamic_list_item_secondary_text_visible";
		case 20:
			return "dynamic_list_item_secondary_text_enabled";
		case 21:
			return "dynamic_list_item_end_img_texture_dic";
		case 22:
			return "dynamic_list_item_end_img_texture";
		case 23:
			return "dynamic_list_item_end_img_visible";
		case 24:
			return "dynamic_list_item_corner_end_img_texture_dic";
		case 25:
			return "dynamic_list_item_corner_end_img_texture";
		case 26:
			return "dynamic_list_item_corner_end_img_visible";
		case 27:
			return "dynamic_list_item_entry_player_index";
		case 28:
			return "dynamic_list_item_entry_friend_index";
		case 29:
			return "dynamic_list_item_player_gamer_handle";
		case 30:
			return "dynamic_list_item_option_stepper_visible";
		case 31:
			return "dynamic_list_item_option_stepper_text_enabled";
		case 32:
			return "dynamic_list_item_option_stepper_items";
		case 33:
			return "dynamic_list_item_option_stepper_current_hash";
		case 34:
			return "dynamic_list_item_option_stepper_current_index";
		case 35:
			return "dynamic_list_item_option_stepper_max_index";
		case 36:
			return "dynamic_list_item_left_chevron_enabled";
		case 37:
			return "dynamic_list_item_right_chevron_enabled";
		case 38:
			return "dynamic_list_item_option_stepper_index_change_ui_event_hash";
		case 39:
			return "dynamic_list_item_main_fill_maximum";
		case 40:
			return "dynamic_list_item_main_fill_value";
		case 41:
			return "dynamic_list_item_extra_text_field_entry_one_raw_text";
		case 42:
			return "dynamic_list_item_extra_text_field_entry_two_raw_text";
		case 43:
			return "dynamic_list_item_extra_text_field_entry_three_raw_text";
		case 44:
			return "dynamic_list_item_extra_text_field_entry_one_visibility";
		case 45:
			return "dynamic_list_item_extra_text_field_entry_two_visibility";
		case 46:
			return "dynamic_list_item_extra_text_field_entry_three_visibility";
		case 47:
			return "dynamic_list_item_extra_img_texture_one_dic";
		case 48:
			return "dynamic_list_item_extra_img_one_texture";
		case 49:
			return "dynamic_list_item_extra_img_one_visible";
		case 50:
			return "dynamic_list_item_extra_int_field_one_value";
		case 51:
			return "dynamic_list_item_extra_int_field_two_value";
		case 52:
			return "dynamic_list_item_extra_vector_field_one_value";
		case 53:
			return "dynamic_list_item_extra_bool_field_one_value";
		case 54:
			return "dynamic_list_item_link";
		case 55:
			return "dynamic_list_item_event_channel_hash";
		case 56:
			return "dynamic_list_item_focus_hash";
		case 57:
			return "dynamic_list_item_select_hash";
		case 58:
			return "dynamic_list_item_prompt_text";
		case 59:
			return "dynamic_list_item_prompt_enabled";
		case 60:
			return "dynamic_list_item_prompt_visible";
		case 64:
			return "dynamic_list_item_prompt_option_text";
		case 65:
			return "dynamic_list_item_prompt_option_enabled";
		case 66:
			return "dynamic_list_item_prompt_option_visible";
		case 67:
			return "dynamic_list_item_prompt_option_select_hash";
		case 68:
			return "dynamic_list_item_prompt_toggle_text";
		case 69:
			return "dynamic_list_item_prompt_toggle_enabled";
		case 70:
			return "dynamic_list_item_prompt_toggle_visible";
		case 71:
			return "dynamic_list_item_prompt_toggle_select_hash";
		case 72:
			return "dynamic_list_item_prompt_r3_text";
		case 73:
			return "dynamic_list_item_prompt_r3_enabled";
		case 74:
			return "dynamic_list_item_prompt_r3_visible";
		case 75:
			return "dynamic_list_item_select_r3_select_hash";
		case 76:
			return "dynamic_list_item_prompt_dpad_left_right_text";
		case 77:
			return "dynamic_list_item_prompt_dpad_left_right_enabled";
		case 78:
			return "dynamic_list_item_prompt_dpad_left_right_visible";
		case 79:
			return "dynamic_list_item_select_dpad_left_right_select_hash";
		case 80:
			return "mount_collection_index";
		case 81:
			return "dynamic_list_item_rename_prompt_enabled";
		case 82:
			return "dynamic_list_item_rename_prompt_visible";
		case 83:
			return "dynamic_list_item_stats_info_toggle_prompt_text";
		case 84:
			return "invite_unique_id";
		case 85:
			return "invite_tracked";
		case 86:
			return "invite_processed";
		case 87:
			return "invite_script_type";
		case 88:
			return "invite_gang_id";
		case 89:
			return "invite_expiration_time";
		case 90:
			return "invite_filter_type";
		case 91:
			return "invite_feed_message_id";
		case 92:
			return "invite_all_enabled";
		case 93:
			return "invite_all_visible";
		default:
			break;
	}
	return "null";
}

int func_1137(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_1343(&Var1, iParam0))
	{
		iVar0 = ((func_1344() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_1138(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return ((*Global_1234391)[iParam0 /*5*/])->f_2;
}

int func_1139(int iParam0, int iParam1)
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

int func_1140(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = iParam0;
	while (iVar0 < Global_1070356->f_17817)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1070356->f_17817.f_1[iVar0 /*3*/]) = { *(Global_1070356->f_17817.f_1[iVar0 + 1 /*3*/]) };
		}
		iVar0++;
	}
	vVar1 = -1;
	vVar1.f_1 = -1;
	if (Global_1070356->f_17817 < 32)
	{
		*(Global_1070356->f_17817.f_1[Global_1070356->f_17817 /*3*/]) = { vVar1 };
	}
	Global_1070356->f_17817 = (Global_1070356->f_17817 - 1);
	if (Global_1070356->f_17817 < 0)
	{
		Global_1070356->f_17817 = 0;
	}
	return 1;
}

int func_1141(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = (Global_1070356->f_17817 - 1);
	vVar1 = -1;
	vVar1.f_1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1070356->f_17817.f_1[iVar0 + 1 /*3*/]) = { *(Global_1070356->f_17817.f_1[iVar0 /*3*/]) };
		}
		iVar0 = (iVar0 - 1);
	}
	*(Global_1070356->f_17817.f_1[iParam0 /*3*/]) = { vVar1 };
	Global_1070356->f_17817++;
	if (Global_1070356->f_17817 > 32)
	{
		Global_1070356->f_17817 = 32;
	}
	return 1;
}

int func_1142(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2142074819:
			return 522;
		case -2141419899:
			return 405;
		case -2106445152:
			return 277;
		case -2106214197:
			return 102;
		case -2101264851:
			return 192;
		case -2100409704:
			return 471;
		case -2073072369:
			return 57;
		case -2069570138:
			return 25;
		case -2066272360:
			return 395;
		case -2058120606:
			return 194;
		case -2056579774:
			return 465;
		case -2043909922:
			return 339;
		case -2038424081:
			return 49;
		case -2034257789:
			return 90;
		case -2022369555:
			return 251;
		case -2021582629:
			return 110;
		case -2020023971:
			return 263;
		case -1957523409:
			return 205;
		case -1952856164:
			return 163;
		case -1949204933:
			return 261;
		case -1943367752:
			return 388;
		case -1943021821:
			return 336;
		case -1939389836:
			return 417;
		case -1932919229:
			return 429;
		case -1925798111:
			return 41;
		case -1914141706:
			return 440;
		case -1906892166:
			return 404;
		case -1882707460:
			return 464;
		case -1861414976:
			return 381;
		case -1852605133:
			return 10;
		case -1848799275:
			return 410;
		case -1847672446:
			return 312;
		case -1842033327:
			return 505;
		case -1840704908:
			return 274;
		case -1838712533:
			return 26;
		case -1838352012:
			return 55;
		case -1835851517:
			return 54;
		case -1831552326:
			return 121;
		case -1827602683:
			return 447;
		case -1825294305:
			return 252;
		case -1824738758:
			return 262;
		case -1818850842:
			return 239;
		case -1808329564:
			return 412;
		case -1799960545:
			return 243;
		case -1764522338:
			return 308;
		case -1763509974:
			return 139;
		case -1753769127:
			return 399;
		case -1749433374:
			return 480;
		case -1749043433:
			return 525;
		case -1741667789:
			return 62;
		case -1738165526:
			return 3;
		case -1719055206:
			return 520;
		case -1718674470:
			return 23;
		case -1717960576:
			return 59;
		case -1711895055:
			return 13;
		case -1706438978:
			return 220;
		case -1705799799:
			return 422;
		case -1700452710:
			return 317;
		case -1684974589:
			return 467;
		case -1674179981:
			return 53;
		case -1673998598:
			return 528;
		case -1666278201:
			return 33;
		case -1664435783:
			return 487;
		case -1624627591:
			return 439;
		case -1612662716:
			return 198;
		case -1610966108:
			return 355;
		case -1608141409:
			return 539;
		case -1585840296:
			return 337;
		case -1582926490:
			return 144;
		case -1579419919:
			return 145;
		case -1578292898:
			return 435;
		case -1573753524:
			return 504;
		case -1558439474:
			return 286;
		case -1556041029:
			return 411;
		case -1547280108:
			return 519;
		case -1532284567:
			return 114;
		case -1530132748:
			return 296;
		case -1524512402:
			return 206;
		case -1523910291:
			return 153;
		case -1502194556:
			return 524;
		case -1462313959:
			return 463;
		case -1455998786:
			return 371;
		case -1447311849:
			return 321;
		case -1445041595:
			return 529;
		case -1442844448:
			return 466;
		case -1436021162:
			return 170;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1422877860:
			return 473;
		case -1419919497:
			return 22;
		case -1414537028:
			return 71;
		case -1405998267:
			return 103;
		case -1395855864:
			return 479;
		case -1387772214:
			return 408;
		case -1378911044:
			return 476;
		case -1369678628:
			return 488;
		case -1344601768:
			return 348;
		case -1341750998:
			return 477;
		case -1340339190:
			return 363;
		case -1339871203:
			return 533;
		case -1329135070:
			return 138;
		case -1319875891:
			return 438;
		case -1311865656:
			return 37;
		case -1296807958:
			return 353;
		case -1290997627:
			return 462;
		case -1287894233:
			return 427;
		case -1283202000:
			return 354;
		case -1282804314:
			return 255;
		case -1278074582:
			return 169;
		case -1271608261:
			return 96;
		case -1262828457:
			return 424;
		case -1257057567:
			return 21;
		case -1241340344:
			return 285;
		case -1236261996:
			return 222;
		case -1232809834:
			return 111;
		case -1230112817:
			return 168;
		case -1223121209:
			return 124;
		case -1215445344:
			return 129;
		case -1209597203:
			return 366;
		case -1206122982:
			return 154;
		case -1187950766:
			return 45;
		case -1181950077:
			return 401;
		case -1179948750:
			return 134;
		case -1170496998:
			return 46;
		case -1164215952:
			return 221;
		case -1161687045:
			return 392;
		case -1151084372:
			return 122;
		case -1145519186:
			return 98;
		case -1145153057:
			return 340;
		case -1124061431:
			return 229;
		case -1123615607:
			return 29;
		case -1120447016:
			return 444;
		case -1095341658:
			return 409;
		case -1080627546:
			return 314;
		case -1077783786:
			return 191;
		case -1063147448:
			return 149;
		case -1062490780:
			return 77;
		case -1060078174:
			return 226;
		case -1056767524:
			return 174;
		case -1053549743:
			return 56;
		case -1042021329:
			return 383;
		case -1029225159:
			return 104;
		case -1023919011:
			return 432;
		case -1014145132:
			return 273;
		case -1004266677:
			return 461;
		case -978957786:
			return 237;
		case -959357075:
			return 36;
		case -950054349:
			return 150;
		case -947815572:
			return 400;
		case -941648233:
			return 512;
		case -939420910:
			return 44;
		case -931337253:
			return 425;
		case -925071604:
			return 542;
		case -919512195:
			return 40;
		case -911126844:
			return 369;
		case -897750037:
			return 367;
		case -895307590:
			return 501;
		case -895073533:
			return 394;
		case -889906510:
			return 390;
		case -888632790:
			return 506;
		case -879507474:
			return 223;
		case -868076593:
			return 82;
		case -857964358:
			return 81;
		case -853383233:
			return 63;
		case -852602679:
			return 433;
		case -851626677:
			return 372;
		case -839820438:
			return 420;
		case -828139293:
			return 246;
		case -812641169:
			return 535;
		case -811637947:
			return 232;
		case -800891377:
			return 494;
		case -797689456:
			return 515;
		case -796902762:
			return 86;
		case -792853067:
			return 240;
		case -789397228:
			return 248;
		case -785605431:
			return 236;
		case -781631220:
			return 328;
		case -764163380:
			return 215;
		case -748969569:
			return 76;
		case -741351766:
			return 58;
		case -736853952:
			return 302;
		case -734416508:
			return 373;
		case -729679654:
			return 531;
		case -699277634:
			return 4;
		case -693828600:
			return 356;
		case -683458244:
			return 78;
		case -677920206:
			return 459;
		case -666014935:
			return 155;
		case -664512648:
			return 65;
		case -664252410:
			return 188;
		case -644722288:
			return 247;
		case -640663440:
			return 320;
		case -639037538:
			return 183;
		case -635323621:
			return 513;
		case -632127260:
			return 343;
		case -630295963:
			return 495;
		case -628542779:
			return 69;
		case -622554983:
			return 306;
		case -618620429:
			return 185;
		case -604603161:
			return 472;
		case -591815673:
			return 384;
		case -583127403:
			return 507;
		case -574190021:
			return 493;
		case -554519756:
			return 536;
		case -545450213:
			return 313;
		case -538889627:
			return 173;
		case -538880323:
			return 172;
		case -534215902:
			return 128;
		case -524787708:
			return 380;
		case -524145696:
			return 115;
		case -523522517:
			return 300;
		case -515561750:
			return 225;
		case -510945576:
			return 338;
		case -503955743:
			return 235;
		case -502473159:
			return 326;
		case -502324015:
			return 8;
		case -500245243:
			return 516;
		case -492731190:
			return 419;
		case -491981251:
			return 184;
		case -489737721:
			return 402;
		case -468693731:
			return 109;
		case -464836488:
			return 254;
		case -460024530:
			return 350;
		case -448554447:
			return 532;
		case -441204543:
			return 534;
		case -434590080:
			return 212;
		case -414883443:
			return 460;
		case -404698347:
			return 202;
		case -397760715:
			return 141;
		case -396624371:
			return 374;
		case -389056691:
			return 257;
		case -381925743:
			return 508;
		case -371827125:
			return 389;
		case -364475655:
			return 430;
		case -360036154:
			return 304;
		case -356975260:
			return 101;
		case -355531636:
			return 370;
		case -350863510:
			return 160;
		case -349064220:
			return 298;
		case -334729750:
			return 67;
		case -333135263:
			return 334;
		case -330120947:
			return 333;
		case -329176208:
			return 492;
		case -311373772:
			return 540;
		case -306246697:
			return 311;
		case -299522880:
			return 319;
		case -297483764:
			return 434;
		case -279765076:
			return 346;
		case -270094635:
			return 253;
		case -261141318:
			return 30;
		case -259123672:
			return 231;
		case -254562075:
			return 130;
		case -243260793:
			return 418;
		case -238080464:
			return 119;
		case -233743613:
			return 258;
		case -226366310:
			return 523;
		case -223469678:
			return 201;
		case -220282381:
			return 137;
		case -211583122:
			return 517;
		case -209894800:
			return 345;
		case -207792846:
			return 483;
		case -191424539:
			return 147;
		case -182889087:
			return 175;
		case -154581735:
			return 294;
		case -150493654:
			return 95;
		case -129643890:
			return 11;
		case -110352060:
			return 431;
		case -108780030:
			return 351;
		case -108307814:
			return 28;
		case -102827640:
			return 403;
		case -101740709:
			return 499;
		case -99303535:
			return 165;
		case -90486812:
			return 491;
		case -89829333:
			return 423;
		case -86199844:
			return 143;
		case -80522843:
			return 152;
		case -76237062:
			return 309;
		case -75928821:
			return 509;
		case -75024673:
			return 244;
		case -74031276:
			return 441;
		case -70727482:
			return 453;
		case -63926460:
			return 87;
		case -61411516:
			return 358;
		case -38135693:
			return 468;
		case -35658630:
			return 24;
		case -25901845:
			return 275;
		case -9438024:
			return 127;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 151;
		case 8924991:
			return 282;
		case 16844748:
			return 406;
		case 26054262:
			return 323;
		case 26245360:
			return 224;
		case 38162571:
			return 72;
		case 52706132:
			return 230;
		case 54073871:
			return 74;
		case 61537448:
			return 541;
		case 64896505:
			return 391;
		case 74872959:
			return 331;
		case 84709454:
			return 454;
		case 93964309:
			return 396;
		case 94263042:
			return 276;
		case 106479759:
			return 99;
		case 141950038:
			return 112;
		case 148595040:
			return 530;
		case 153152452:
			return 84;
		case 168171957:
			return 181;
		case 171499483:
			return 268;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 228;
		case 210001842:
			return 60;
		case 215903338:
			return 490;
		case 224551212:
			return 140;
		case 227918160:
			return 180;
		case 229371495:
			return 327;
		case 235928616:
			return 271;
		case 237155783:
			return 518;
		case 249726958:
			return 162;
		case 269047710:
			return 52;
		case 273461605:
			return 79;
		case 280705402:
			return 93;
		case 282809459:
			return 117;
		case 299694527:
			return 260;
		case 300221584:
			return 136;
		case 302205488:
			return 322;
		case 311708813:
			return 195;
		case 320943355:
			return 131;
		case 321629486:
			return 510;
		case 330026330:
			return 64;
		case 345808947:
			return 272;
		case 356365161:
			return 47;
		case 371850993:
			return 266;
		case 373691918:
			return 186;
		case 374115931:
			return 88;
		case 404823609:
			return 485;
		case 405586984:
			return 34;
		case 407136781:
			return 171;
		case 409602249:
			return 278;
		case 417081698:
			return 17;
		case 417525590:
			return 288;
		case 420709909:
			return 42;
		case 424920933:
			return 545;
		case 426191476:
			return 15;
		case 434558613:
			return 196;
		case 439465264:
			return 106;
		case 440043364:
			return 31;
		case 442317566:
			return 287;
		case 449774763:
			return 214;
		case 459290420:
			return 316;
		case 468797819:
			return 342;
		case 469053995:
			return 218;
		case 473295046:
			return 2;
		case 476714362:
			return 219;
		case 478884033:
			return 146;
		case 479419429:
			return 290;
		case 509781469:
			return 378;
		case 514932331:
			return 233;
		case 522677506:
			return 264;
		case 526003171:
			return 393;
		case 527226204:
			return 157;
		case 544152906:
			return 113;
		case 559573222:
			return 238;
		case 560154875:
			return 456;
		case 565812320:
			return 448;
		case 582380806:
			return 359;
		case 588987611:
			return 177;
		case 589380360:
			return 341;
		case 618699440:
			return 75;
		case 619839857:
			return 376;
		case 630808005:
			return 126;
		case 640520536:
			return 470;
		case 642824856:
			return 482;
		case 651395116:
			return 279;
		case 664571177:
			return 297;
		case 665676602:
			return 281;
		case 673606600:
			return 500;
		case 689024866:
			return 132;
		case 689930684:
			return 204;
		case 704802028:
			return 176;
		case 715735881:
			return 484;
		case 723021499:
			return 250;
		case 730069127:
			return 475;
		case 747514327:
			return 382;
		case 753127042:
			return 48;
		case 757752139:
			return 107;
		case 784360470:
			return 362;
		case 791041526:
			return 18;
		case 799106423:
			return 455;
		case 803929300:
			return 469;
		case 804063423:
			return 503;
		case 817925178:
			return 227;
		case 826868753:
			return 474;
		case 831940854:
			return 407;
		case 846837291:
			return 451;
		case 865557632:
			return 537;
		case 868326136:
			return 270;
		case 883901517:
			return 385;
		case 885203519:
			return 315;
		case 885378256:
			return 379;
		case 885777893:
			return 375;
		case 896725436:
			return 511;
		case 929582877:
			return 368;
		case 931649776:
			return 211;
		case 932909855:
			return 283;
		case 943561238:
			return 416;
		case 945612176:
			return 234;
		case 965467037:
			return 344;
		case 965986934:
			return 19;
		case 976539083:
			return 295;
		case 982765715:
			return 443;
		case 1010885152:
			return 7;
		case 1015669983:
			return 120;
		case 1028084603:
			return 446;
		case 1032791043:
			return 502;
		case 1050128548:
			return 269;
		case 1064154891:
			return 108;
		case 1074873669:
			return 142;
		case 1112996351:
			return 538;
		case 1126565489:
			return 486;
		case 1140218954:
			return 27;
		case 1151197909:
			return 242;
		case 1153686207:
			return 452;
		case 1157309080:
			return 514;
		case 1159471771:
			return 361;
		case 1160698568:
			return 133;
		case 1164928979:
			return 156;
		case 1166612791:
			return 330;
		case 1167397384:
			return 292;
		case 1177464213:
			return 38;
		case 1186594126:
			return 217;
		case 1193080109:
			return 182;
		case 1195508693:
			return 543;
		case 1203043430:
			return 259;
		case 1205826474:
			return 83;
		case 1207048789:
			return 167;
		case 1213993593:
			return 158;
		case 1221801385:
			return 310;
		case 1232840551:
			return 481;
		case 1238086793:
			return 347;
		case 1248935549:
			return 415;
		case 1250636944:
			return 245;
		case 1279586666:
			return 449;
		case 1280406542:
			return 442;
		case 1287917122:
			return 387;
		case 1302228510:
			return 349;
		case 1306158345:
			return 199;
		case 1321892118:
			return 357;
		case 1325325699:
			return 421;
		case 1341699707:
			return 526;
		case 1350371763:
			return 20;
		case 1350391819:
			return 73;
		case 1352699670:
			return 256;
		case 1358491857:
			return 249;
		case 1360745816:
			return 80;
		case 1362354162:
			return 497;
		case 1376646519:
			return 210;
		case 1399676951:
			return 207;
		case 1410198831:
			return 209;
		case 1421300489:
			return 414;
		case 1433244935:
			return 164;
		case 1441416901:
			return 208;
		case 1453909576:
			return 123;
		case 1466547629:
			return 118;
		case 1478132521:
			return 303;
		case 1480425906:
			return 450;
		case 1485195808:
			return 50;
		case 1485494263:
			return 100;
		case 1488286867:
			return 280;
		case 1488453464:
			return 318;
		case 1494062795:
			return 426;
		case 1497516462:
			return 5;
		case 1500064347:
			return 70;
		case 1509509592:
			return 35;
		case 1512816328:
			return 166;
		case 1517904467:
			return 203;
		case 1517951665:
			return 436;
		case 1521272922:
			return 458;
		case 1522511407:
			return 265;
		case 1549124796:
			return 325;
		case 1557082963:
			return 161;
		case 1561093093:
			return 386;
		case 1582370975:
			return 332;
		case 1583012985:
			return 289;
		case 1591451572:
			return 301;
		case 1601722481:
			return 521;
		case 1607768502:
			return 9;
		case 1609506757:
			return 105;
		case 1626481264:
			return 116;
		case 1643531967:
			return 125;
		case 1649996811:
			return 179;
		case 1660024373:
			return 148;
		case 1665756137:
			return 91;
		case 1666964801:
			return 527;
		case 1691618738:
			return 66;
		case 1698972798:
			return 352;
		case 1703398561:
			return 365;
		case 1703426636:
			return 43;
		case 1708045337:
			return 329;
		case 1713221411:
			return 135;
		case 1743048395:
			return 213;
		case 1744443559:
			return 377;
		case 1766284049:
			return 92;
		case 1774060092:
			return 544;
		case 1776302352:
			return 299;
		case 1788424349:
			return 445;
		case 1812677765:
			return 398;
		case 1822001510:
			return 197;
		case 1846061697:
			return 97;
		case 1850082804:
			return 193;
		case 1866434585:
			return 413;
		case 1867912207:
			return 68;
		case 1881028477:
			return 364;
		case 1884271742:
			return 51;
		case 1891256113:
			return 437;
		case 1908151693:
			return 335;
		case 1926308480:
			return 94;
		case 1932172605:
			return 360;
		case 1944170089:
			return 159;
		case 1947931439:
			return 216;
		case 1952610440:
			return 200;
		case 1954026328:
			return 307;
		case 1982676972:
			return 89;
		case 2008888900:
			return 178;
		case 2013720626:
			return 489;
		case 2016141805:
			return 6;
		case 2019386373:
			return 187;
		case 2024121624:
			return 190;
		case 2024383613:
			return 305;
		case 2024769126:
			return 293;
		case 2037589949:
			return 61;
		case 2048790450:
			return 498;
		case 2051822093:
			return 284;
		case 2068208444:
			return 428;
		case 2068253437:
			return 478;
		case 2077022393:
			return 291;
		case 2079292950:
			return 457;
		case 2080210939:
			return 267;
		case 2091701359:
			return 39;
		case 2103908624:
			return 397;
		case 2109952320:
			return 189;
		case 2113625508:
			return 324;
		case 2127412005:
			return 496;
		case 2127577956:
			return 241;
		case 2136753624:
			return 85;
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

int func_1143(int iParam0)
{
	int iVar0;

	iVar0 = func_1345(iParam0);
	if (iVar0 < 337)
	{
		return 0;
	}
	return 1;
}

int func_1144(int iParam0)
{
	if (iParam0 == 1932172605)
	{
		return 1;
	}
	return 0;
}

void func_1145(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_1146(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_1346((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1346(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_73(*(Global_1900718->f_1[0 /*2*/])))
	{
		func_641(*(Global_1900718->f_1[0 /*2*/]), 3);
	}
}

void func_1147(var uParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;

	if (Global_1184439->f_129 <= 0)
	{
		Global_1184439->f_129 = 0;
		return;
	}
	if (iParam1 >= Global_1184439->f_129)
	{
		iParam1 = 0;
	}
	if (iParam1 >= 32)
	{
		iParam1 = (Global_1184439->f_129 - 1);
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	if (Global_1184439->f_129 == 1)
	{
		*uParam0 = { *((*Global_1184439)[0 /*4*/]) };
		*((*Global_1184439)[0 /*4*/]) = { Var0 };
		Global_1184439->f_129 = 0;
		return;
	}
	*uParam0 = { *((*Global_1184439)[iParam1 /*4*/]) };
	Global_1184439->f_129 = (Global_1184439->f_129 - 1);
	iVar4 = (Global_1184439->f_129 - 1);
	iVar5 = iParam1;
	while (iVar5 <= iVar4)
	{
		*((*Global_1184439)[iVar5 /*4*/]) = { *((*Global_1184439)[iVar5 + 1 /*4*/]) };
		*((*Global_1184439)[iVar5 + 1 /*4*/]) = { Var0 };
		iVar5++;
	}
}

void func_1148(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1184439->f_129)
	{
		return;
	}
	Global_1184439->f_130 = iParam0;
	Global_1184439->f_131 = Global_1184439[iParam0 /*4*/];
}

void func_1149()
{
	if (Global_1184439->f_131 == 0)
	{
		return;
	}
	Global_1184439->f_130 = func_1347(Global_1184439->f_131);
	if (Global_1184439->f_130 < 0)
	{
		Global_1184439->f_131 = 0;
	}
}

bool func_1150(int iParam0)
{
	return func_78(Global_1902942->f_2, iParam0);
}

struct<14> func_1151(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
	}
	return Var0;
}

int func_1152(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_674(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_1153(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return 0;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		return 0;
	}
	return 1;
}

int func_1154(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	iVar0 = func_674(bParam2);
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam0, uParam1, 29, 1))
	{
		return 0;
	}
	return 1;
}

bool func_1155(var uParam0, int iParam1)
{
	return func_78(*uParam0, iParam1);
}

int func_1156(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_0x42A2F33A1942E865(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_1157(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!&Global_1048577)
	{
		return 3;
	}
	iVar0 = ((*Global_262996)[iParam0 /*70*/])->f_1.f_21.f_2;
	iVar1 = func_1348(iVar0);
	uVar2 = func_1349(iVar0, iVar1);
	return uVar2;
}

struct<2> func_1158()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

bool func_1159(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_1160(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_674(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_1161(var uParam0)
{
	int iVar0;

	func_955(uParam0);
	uParam0->f_4 = 0;
	uParam0->f_5 = { func_948() };
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	StringCopy(&(uParam0->f_12), "", 64);
	uParam0->f_20 = 0;
	uParam0->f_22 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_23[iVar0] = 0f;
		iVar0++;
	}
	uParam0->f_27 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 13)
	{
		uParam0->f_28[iVar0] = 0;
		iVar0++;
	}
}

int func_1162(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!func_1154(uParam0, uParam2, bParam3))
	{
		return 0;
	}
	if (!func_1350(uParam1, uParam2))
	{
		return 0;
	}
	return 1;
}

int func_1163(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!func_1351(uParam0, uParam2, bParam3))
	{
		return 0;
	}
	if (!func_1352(uParam1, uParam2))
	{
		return 0;
	}
	return 1;
}

void func_1164(var uParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;

	if (!func_1353(uParam0->f_10))
	{
		return;
	}
	func_1354(uParam0, 8);
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return;
	}
	iVar0 = func_674(0);
	iVar3 = 0;
	while (iVar3 < 13)
	{
		uVar1 = func_1355(iVar3, 1);
		if (!INVENTORY::_0x6862E4D93F64CF01(iVar0, uParam0, uVar1, &uVar2))
		{
		}
		else
		{
			uParam0->f_28[iVar3] = uVar2;
		}
		iVar3++;
	}
}

int func_1165(int iParam0, var uParam1)
{
	var uVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		iParam0 = 1074477367;
	}
	uVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iParam0, 7, uParam1);
	return uVar0;
}

void func_1166(var uParam0)
{
	struct<7> Var0;

	*uParam0 = { Var0 };
}

int func_1167(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_1277();
	}
	if (iParam0 == 2026485318)
	{
		return -1806335803;
	}
	else if (iParam0 == 24043185)
	{
		return -971050805;
	}
	return 0;
}

int func_1168(int iParam0)
{
	switch (iParam0)
	{
		case 708211766:
			return 1;
		case -1815871154:
			return 2;
		case 1053922635:
			return 4;
		case -1248203249:
			return 8;
		case -1275860049:
			return 16;
		case -473313046:
			return 32;
		case 1009605579:
			return 64;
		case -92538845:
			return 256;
		case 350097565:
			return 512;
		case 346761890:
			return 1024;
		case -915377750:
			return 2048;
		case -1283403230:
			return 4096;
		case 1024778115:
			return 8192;
		case 75507907:
			return 16384;
		case -1678578495:
			return 32768;
		case -1925540957:
			return 65536;
		case -1932005642:
			return 131072;
		case -803648582:
			return 128;
		case 351949263:
			return 262144;
		case -597281578:
			return 524288;
		case 465720259:
			return 1048576;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 2160;
		case -141044514:
			return 8304;
		case 884232794:
			return 16496;
		case 836721350:
			return 40960;
		case -1062102573:
			return 65601;
		case -884591393:
			return 96;
		case -1886898087:
			return 32880;
		case -1629261761:
			return 2049;
		case -366477279:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_1169(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1356(uParam0->f_1[iVar0 /*3*/], 2))
		{
			if (func_1357(iVar0, iParam1))
			{
				vVar4 = { func_1358(iVar0, -1) };
				if (((!bParam4 && vVar4.x != &Global_1951141->f_81[iVar0 /*12*/]) && vVar4.x != 0) && (&uParam0->f_1[iVar0 /*3*/] != vVar4.x || (uParam0->f_1[iVar0 /*3*/])->f_1 != vVar4.y))
				{
					*(uParam0->f_1[iVar0 /*3*/]) = { vVar4 };
				}
				if (func_1333(iVar0, 4))
				{
					func_1334(iVar0, 4, 6);
				}
			}
			else
			{
				if (bParam3)
				{
					func_1359(iVar0, 4, 6);
				}
				Jump @205; //curOff = 171
				if (bParam2)
				{
					vVar1.x = &Global_1951141->f_81[iVar0 /*12*/];
					*(uParam0->f_1[iVar0 /*3*/]) = { vVar1 };
				}
			}
			iVar0++;
		}
	}

int func_1170(int iParam0, int iParam1)
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

void func_1171(int iParam0, int iParam1, int iParam2)
{
	(Global_1951141->f_81[func_1170(iParam0, 1) /*12*/])->f_11 = ((Global_1951141->f_81[func_1170(iParam0, 1) /*12*/])->f_11 || iParam1);
}

int func_1172(int iParam0)
{
	int iVar0;
	var uVar1;

	Global_1951141->f_1040.f_2 = 0;
	iVar0 = 1226838104;
	func_1360(&(Global_1951141->f_1040), iVar0, -367421157, 1409451727, 1, iParam0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1951141->f_1040));
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar1, &(Global_1951141->f_1040), 1409451727))
	{
		return 0;
	}
	return 1;
}

int func_1173(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("base");
	return 1;
}

int func_1174(int iParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_691(iParam0, 0))
	{
		return 0;
	}
	iVar6 = ITEMDATABASE::_0x8870895BA5ED9385(iParam0, 761377030, &uVar0);
	if (iVar6 > 0)
	{
		return &(uVar0[0]);
	}
	return 0;
}

void func_1175(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_1361(&(uParam0->f_1[34 /*3*/]), -166674229))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (&(Global_1951141->f_81[iVar0 /*12*/])->f_3[0] == joaat("MISSING") || &uParam0->f_1[iVar0 /*3*/] == 0)
		{
		}
		else if (!bParam2 && func_1174(&(uParam0->f_1[iVar0 /*3*/])) != 0)
		{
		}
		else if (!func_1357(iVar0, iParam1))
		{
		}
		else if (func_1333(iVar0, 16))
		{
			func_1334(iVar0, 16, 6);
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
			(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
		}
		iVar0++;
	}
}

void func_1176(struct<4> Param0)
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
			if (func_1362(Param0))
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
			func_1363(Param0);
			*(Global_1951141->f_734[Global_1951141->f_922 /*4*/]) = { Param0 };
			Global_1951141->f_916++;
			Global_1951141->f_922 = (Global_1951141->f_922 + 1 % 25);
			func_958(8);
			break;
		case 23:
		case 24:
		case 25:
			if (Global_1951141->f_917 >= 25)
			{
				return;
			}
			if (func_1362(Param0))
			{
				return;
			}
			func_1363(Param0);
			*(Global_1951141->f_633[Global_1951141->f_917 /*4*/]) = { Param0 };
			Global_1951141->f_917++;
			func_958(8);
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
			if (func_1362(Param0))
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
			func_1363(Param0);
			*(Global_1951141->f_835[Global_1951141->f_920 /*4*/]) = { Param0 };
			Global_1951141->f_918++;
			Global_1951141->f_920 = (Global_1951141->f_920 + 1 % 20);
			func_958(8);
			break;
			break;
	}
}

int func_1177(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1845241476;
		case 1:
			return 1654063339;
		case 2:
			return 1623931083;
		default:
			break;
	}
	return -1845241476;
}

int func_1178(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_691(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_692(iParam0, joaat("default")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_695(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_674(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_674(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_1179(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_691(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_692(iParam0, joaat("default"));
	if (iVar0 != 0)
	{
		return func_1364(iParam0, iParam1, iParam2, iParam3, bParam4);
	}
	Var1 = { func_694(iParam0, bParam4, 0) };
	Var6 = { func_695(iParam0, Var1, Var1.f_4, bParam4) };
	return func_1365(iParam0, &Var6, &Var1, iParam1, iParam2, iParam3, bParam4);
}

int func_1180(int iParam0)
{
	if (!func_1366(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			return 121671270;
		case 2:
			return 1242891102;
		case 1:
			return -1791399933;
		default:
			break;
	}
	return 0;
}

int func_1181(int iParam0, float fParam1, int iParam2)
{
	if (!func_1367(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_972(2);
	}
	func_1368(iParam0, fParam1, iParam2);
	if (!ENTITY::IS_ENTITY_DEAD(Global_1275573->f_8))
	{
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_1275573->f_8, iParam0, BUILTIN::FLOOR(fParam1));
	}
	return 1;
}

int func_1182(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_1183(int iParam0)
{
	if (!func_1369(iParam0))
	{
		return 0;
	}
	return (Global_1132968->f_11.f_1556[func_1370(iParam0, 1) /*46*/])->f_1;
}

int func_1184(int iParam0, int iParam1)
{
	if (iParam0 == joaat("deadeye"))
	{
		return func_1371(iParam1);
	}
	else
	{
		return !func_1371(iParam1);
	}
	return 0;
}

void func_1185(int iParam0)
{
	struct<34> Var0;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_1373(func_1372(iParam0, 1), &Var0, 2, -1);
	func_1374(Var0, iParam0, 0);
}

void func_1186(int iParam0)
{
	struct<34> Var0;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_1375(&(Global_1132968->f_5525.f_34[iParam0 /*3*/]), &Var0, 0, -1);
	func_1376(Var0, iParam0, 0);
}

bool func_1187(int iParam0)
{
	return func_395(&(Global_1954472->f_1653), iParam0, 1);
}

void func_1188(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		if (func_1187(2))
		{
			func_1377(2);
		}
		if (PLAYER::_0x6614F9039BD31931(iVar0, 34, 0))
		{
			PLAYER::_0x0751D461F06E41CE(iVar0, 34, 0, 0);
		}
	}
	else
	{
		if (!func_1187(2))
		{
			func_1378(2);
		}
		if (!PLAYER::_0x6614F9039BD31931(iVar0, 34, 0))
		{
			PLAYER::_0x0751D461F06E41CE(iVar0, 34, 0, 1);
		}
	}
	PLAYER::_0xA63FCAD3A6FEC6D2(iVar0, bParam0);
	PLAYER::_0x7146CF430965927C(27, bParam0);
}

void func_1189(bool bParam0)
{
	if (bParam0)
	{
		if (func_1187(1))
		{
			func_1377(1);
		}
	}
	else if (!func_1187(1))
	{
		func_1378(1);
	}
}

void func_1190(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1275573->f_8;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	ENTITY::_SET_ENTITY_HEALTH(iParam1, iParam0, 0);
}

void func_1191(float fParam0, int iParam1)
{
	float fVar0;

	if (fParam0 < 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1275573->f_8;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	fVar0 = (fParam0 - PED::_0x775A1CA7893AA8B5(iParam1));
	PED::_0xC3D4B754C0E86B9E(iParam1, fVar0);
}

float func_1192()
{
	return Global_1954472->f_1461.f_3;
}

void func_1193(float fParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (PLAYER::_0xB16223CB7DA965F0(iVar0))
	{
		return;
	}
	if (fParam0 < 0f)
	{
		return;
	}
	fVar2 = (fParam0 - PLAYER::_0xDF66A37936D5F3D9(iVar0));
	func_1379(fVar2, 0, 1);
}

bool func_1194(int iParam0)
{
	return func_1366(iParam0);
}

int func_1195(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

float func_1196(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;

	iVar1 = func_1380(uParam0, iParam1);
	switch (iVar1)
	{
		case 0:
			fVar0 = func_1132(iParam1, 2);
			if (iParam1 == 0 && fVar0 < 50f)
			{
				fVar0 = 50f;
			}
			else if (fVar0 < 10f)
			{
				fVar0 = 10f;
			}
			return fVar0;
		case 1:
			fVar0 = func_1132(iParam1, 2);
			if (fVar0 < 10f)
			{
				fVar0 = 10f;
			}
			return fVar0;
		case 2:
			return BUILTIN::TO_FLOAT(100);
		case 3:
			return func_1381(uParam0, iParam1);
	}
	return -1f;
}

void func_1197(int iParam0, float fParam1)
{
	func_1382(iParam0, fParam1);
	func_1383(iParam0, fParam1, 0, 0, 1, 2);
}

void func_1198()
{
	func_1384();
	func_1385();
	func_1386();
	func_1387();
}

int func_1199(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	return func_1388(iParam0, fParam1, bParam2, iParam3);
}

void func_1200()
{
	Global_1954472->f_1331.f_108 = 0;
	Global_1954472->f_1331.f_108.f_1 = 0f;
	Global_1954472->f_1331.f_108.f_3 = 0f;
	Global_1954472->f_1331.f_108.f_2 = 0f;
	Global_1954472->f_1331.f_108.f_4 = 0f;
	Global_1954472->f_1331.f_108.f_6 = 0f;
	Global_1954472->f_1331.f_108.f_5 = 0f;
}

int func_1201(int iParam0)
{
	if (!func_691(*iParam0, 0))
	{
		return 0;
	}
	if (!func_1389(*iParam0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case -1073808995: /* GXTEntry: "Live Crickets" */
			*iParam0 = -1753819339; /* GXTEntry: "Cricket Bait" */
			break;
		case 1903483453: /* GXTEntry: "Live Worms" */
			*iParam0 = -1527293029; /* GXTEntry: "Worm Bait" */
			break;
		case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
			*iParam0 = 206762213; /* GXTEntry: "Cocaine Gum" */
			break;
		case 998010398: /* GXTEntry: "Opened Chewing Tobacco" */
			*iParam0 = -324053813; /* GXTEntry: "Chewing Tobacco" */
			break;
		case -1424823393: /* GXTEntry: "Opened Cigarettes" */
			*iParam0 = -885810591; /* GXTEntry: "Premium Cigarettes" */
			break;
		default:
			return 0;
	}
	return 1;
}

int func_1202(int iParam0)
{
	return iParam0;
}

int func_1203(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

bool func_1204(int iParam0)
{
	return func_988(iParam0) == joaat("weapon");
}

int func_1205(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_691(iParam0, 0) && !func_1203(func_1202(iParam0), 2))
	{
		return 0;
	}
	if (func_988(iParam0) == 26423971)
	{
		return -1;
	}
	if (!bParam2 && func_692(iParam0, joaat("default")) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_674(bParam3), iParam0);
}

bool func_1206()
{
	return (func_392(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, 0, 0) > 0 && func_1390(func_695(889965687 /* GXTEntry: "Wardrobe" */, func_987(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_1207(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_674(0);
	*uParam1 = { func_695(iParam0, func_989(0), iParam3, 0) };
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

int func_1208(int iParam0, int iParam1, int iParam2)
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

int func_1209(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_674(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

Vector3 func_1210(var uParam0, int iParam1)
{
	struct<5> Var0;
	vector3 vVar5;

	vVar5 = { -1f, 0f, 0f };
	if (func_404(&Var0))
	{
		Var0.f_2 = iParam1;
		Var0.f_3 = uParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			func_143(Var0, 256247696, &vVar5, 0);
		}
	}
	return vVar5;
}

Vector3 func_1211(var uParam0, int iParam1)
{
	struct<5> Var0;
	vector3 vVar5;

	vVar5 = { 0f, 0f, 0f };
	if (func_404(&Var0))
	{
		Var0.f_2 = iParam1;
		Var0.f_3 = uParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			func_143(Var0, 425959891, &vVar5, 0);
		}
	}
	return vVar5;
}

int func_1212(int iParam0)
{
	if ((iParam0 == joaat("handcart") || iParam0 == 1054492269) || iParam0 == -1772735705)
	{
		return 1;
	}
	return 0;
}

bool func_1213(int iParam0)
{
	return iParam0 == -1005911451;
}

int func_1214(struct<5> Param0)
{
	int iVar0;

	iVar0 = 0;
	func_40(Param0, -1833360518, &iVar0, 0);
	return iVar0;
}

int func_1215(struct<5> Param0)
{
	int iVar0;

	iVar0 = 0;
	func_40(Param0, 413811142, &iVar0, 0);
	return iVar0;
}

int func_1216(struct<5> Param0)
{
	int iVar0;

	iVar0 = 0;
	func_40(Param0, -1515541953, &iVar0, 0);
	return iVar0;
}

bool func_1217(struct<5> Param0)
{
	var uVar0;

	func_42(Param0, -1774701585, &uVar0, 0);
	return uVar0;
}

bool func_1218(var uParam0)
{
	return func_1013(uParam0, 1);
}

void func_1219(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7)
{
	struct<5> Var0;

	*uParam0 = { 0f, 0f, 0f };
	*uParam1 = 0f;
	Var0 = Local_2503.f_37;
	Var0.f_2 = -538315284;
	Var0.f_3 = Local_243.f_2;
	if (iParam6 == 0)
	{
		Var0.f_4 = *uParam2;
	}
	else
	{
		Var0.f_4 = iParam6;
	}
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
	}
	Var0.f_2 = 1218921439;
	if (iParam7 == -1)
	{
		Var0.f_3 = Local_1706.f_16;
	}
	else
	{
		Var0.f_3 = iParam7;
	}
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
	}
	if ((iParam5 % 3) == 0)
	{
		if (!func_143(Var0, -1191553031, uParam0, 0))
		{
		}
		if (!func_142(Var0, -348163890, uParam1, 0))
		{
		}
	}
	else if ((iParam5 % 3) == 1)
	{
		if (!func_143(Var0, 1687465887, uParam0, 0))
		{
			if (!func_143(Var0, -1191553031, uParam0, 0))
			{
			}
		}
		if (!func_142(Var0, -1538366747, uParam1, 0))
		{
			if (!func_142(Var0, -348163890, uParam1, 0))
			{
			}
		}
	}
	else
	{
		if (!func_143(Var0, 1381829424, uParam0, 0))
		{
			if (!func_143(Var0, -1191553031, uParam0, 0))
			{
			}
		}
		if (!func_142(Var0, 1979614790, uParam1, 0))
		{
			if (!func_142(Var0, -348163890, uParam1, 0))
			{
			}
		}
	}
}

int func_1220(var uParam0, var uParam1, vector3 vParam2, float fParam5)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		return 1;
	}
	if (!func_704(uParam0, uParam1->f_4, vParam2, fParam5, 1, 0, 1, 1, 1))
	{
		return 0;
	}
	uParam1->f_5 = { vParam2 };
	uParam1->f_8 = fParam5;
	*uParam1 = NETWORK::NET_TO_PED(*uParam0);
	func_1391(uParam0, uParam1);
	return 1;
}

bool func_1221(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	PROPSET::_REQUEST_PROPSET(iParam0);
	return PROPSET::_HAS_PROPSET_LOADED(iParam0);
}

void func_1222(int iParam0)
{
	func_430(&(Local_1706.f_1), iParam0);
}

int func_1223(var uParam0, int iParam1)
{
	if (!func_160(uParam0))
	{
		return 0;
	}
	if (func_190(uParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_1224()
{
	int iVar0;
	float fVar1[32];
	float fVar34[32];
	float fVar67;
	float fVar68;
	float fVar69;
	float fVar70;
	float fVar71;

	fVar67 = 0f;
	fVar68 = 0f;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !func_1392(iVar0))
		{
			fVar1[iVar0] = BUILTIN::TO_FLOAT(&(Local_1706.f_18[iVar0]));
			fVar1[iVar0] = (&fVar1[iVar0] * &fVar1[iVar0]);
			fVar67 = (fVar67 + &fVar1[iVar0]);
		}
		iVar0++;
	}
	if (fVar67 == 0f)
	{
		fVar67 = 1f;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !func_1392(iVar0))
		{
			fVar34[iVar0] = (fVar67 - &fVar1[iVar0]);
			if (&fVar34[iVar0] == 0f)
			{
				fVar34[iVar0] = (&fVar34[iVar0] + 0.5f);
			}
			fVar68 = (fVar68 + &fVar34[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !func_1392(iVar0))
		{
			fVar34[iVar0] = (&fVar34[iVar0] / fVar68);
		}
		iVar0++;
	}
	fVar69 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	fVar70 = 0f;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !func_1392(iVar0))
		{
			if (&fVar34[iVar0] == 0f)
			{
			}
			else
			{
				fVar71 = (fVar70 + &fVar34[iVar0]);
				if (fVar69 >= fVar70 && fVar69 <= fVar71)
				{
					return PLAYER::INT_TO_PLAYERINDEX(iVar0);
				}
				fVar70 = fVar71;
			}
		}
		iVar0++;
	}
	return 255;
}

int func_1225(vector3 vParam0)
{
	return PLAYER::GET_PLAYER_PED(func_1393(vParam0, 1203982208 /* Float: 99999f */, 0, 0, 0));
}

int func_1226(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;

	if (iParam10 <= 1)
	{
		return 1;
	}
	if (!func_1395(vParam1, vParam4, func_1394(*uParam0), 1))
	{
		return 0;
	}
	if (func_1395(vParam1, vParam7, func_1396(*uParam0), 1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if ((Local_1706.f_51[iVar0 /*22*/])->f_21 > 0)
		{
			iVar1 = 0;
			while (iVar1 <= ((Local_1706.f_51[iVar0 /*22*/])->f_21 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(&((Local_2503.f_42[iVar0 /*56*/])->f_1[iVar1 /*17*/])) && func_1287(&((Local_2503.f_42[iVar0 /*56*/])->f_1[iVar1 /*17*/]), vParam1, 20f, 0, 1))
				{
					return 0;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(PLAYER::INT_TO_PLAYERINDEX(iVar0), vParam1, 2f, 100f))
		{
			return 0;
		}
		iVar0++;
	}
	if (iParam10 < 4)
	{
		return 1;
	}
	if (((*uParam0 + iParam11) == &Local_1706.f_2[0] || (*uParam0 + iParam11) == &Local_1706.f_2[1]) || (*uParam0 + iParam11) == &Local_1706.f_2[2])
	{
		return 0;
	}
	if (*uParam0 == -1347265301)
	{
		if (func_204() < 180000)
		{
		}
		else if (func_204() < 300000)
		{
			if (!func_1395(vParam1, Local_1706.f_316, 400f, 1))
			{
				return 0;
			}
		}
		else if (func_204() < 420000)
		{
			if (!func_1395(vParam1, Local_1706.f_316, 200f, 1))
			{
				return 0;
			}
		}
		else if (!func_1395(vParam1, Local_1706.f_316, 100f, 1))
		{
			return 0;
		}
	}
	return 1;
}

void func_1227(var uParam0, int iParam1)
{
	if (uParam0->f_1 == iParam1)
	{
		return;
	}
	uParam0->f_1 = iParam1;
	func_205(&(uParam0->f_3));
}

void func_1228(var uParam0, var uParam1)
{
	struct<10> Var0;

	if (uParam0->f_1 < 8 && func_1013(uParam0, 32))
	{
		if (func_1397(uParam1->f_10))
		{
			func_1227(uParam0, 9);
		}
		else
		{
			func_1227(uParam0, 8);
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
			if (func_1398(uParam0, uParam1, 0) || func_1399(&(uParam0->f_3), 5000))
			{
				func_1227(uParam0, 1);
			}
			break;
		case 1:
			func_1227(uParam0, 2);
			break;
		case 2:
			if ((Local_1706.f_51[uParam1->f_15 /*22*/])->f_21 > 1)
			{
				return;
			}
			if (func_1400(uParam1) && func_831(func_1289(*uParam1), *uParam1, 15f, 1))
			{
				if (!func_1108(uParam1, 32))
				{
					Var0.f_9 = 255;
					Var0.f_5 = func_1293(0, 8);
					Var0.f_6 = uParam1->f_15;
					Var0.f_7 = uParam1->f_16;
					Var0.f_8 = Local_2503.f_36;
					func_1294(Var0, 3);
				}
				func_1227(uParam0, 8);
			}
			else if (func_190(&(uParam0->f_3)) > 12000 || !func_1097(Local_2503.f_42[uParam1->f_15 /*56*/], 32))
			{
				if (func_831(func_1289(*uParam1), *uParam1, 15f, 1))
				{
					if (func_1097(Local_2503.f_42[uParam1->f_15 /*56*/], 64))
					{
						func_1227(uParam0, 4);
					}
					else
					{
						func_1227(uParam0, 3);
					}
				}
				else if (func_1097(Local_2503.f_42[uParam1->f_15 /*56*/], 32))
				{
					func_1227(uParam0, 0);
				}
			}
			break;
		case 3:
			if (func_190(&(uParam0->f_3)) > 1000)
			{
				func_1227(uParam0, 2);
			}
			break;
		case 4:
			if (func_190(&(uParam0->f_3)) > 12000)
			{
				func_1227(uParam0, 2);
			}
			break;
		case 8:
			break;
		case 10:
			break;
	}
}

void func_1229(var uParam0, var uParam1)
{
	struct<10> Var0;
	int iVar10;

	if (uParam0->f_1 < 8 && func_1013(uParam0, 32))
	{
		if (func_1397(uParam1->f_10))
		{
			func_1227(uParam0, 9);
		}
		else
		{
			func_1227(uParam0, 8);
		}
	}
	Var0.f_9 = 255;
	switch (uParam0->f_1)
	{
		case 0:
			if (func_1398(uParam0, uParam1, 1) || func_1399(&(uParam0->f_3), 5000))
			{
				func_1227(uParam0, 1);
			}
			break;
		case 1:
			if (func_1013(uParam0, 4))
			{
				func_1227(uParam0, 2);
			}
			if (func_1108(uParam1, 16))
			{
				func_1227(uParam0, 4);
			}
			break;
		case 2:
			if (!func_1013(uParam0, 16))
			{
				iVar10 = 0;
				while (iVar10 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar10)) && func_1291(*uParam1, PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(iVar10)), 15f))
					{
						if ((!func_160(&(uParam1->f_12)) || func_190(&(uParam1->f_12)) > 5000) || func_831(*uParam1, PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(iVar10)), 8f, 1))
						{
							func_1012(uParam0, 16);
							func_1005(Local_1706.f_51[uParam1->f_15 /*22*/], 8);
							Var0.f_5 = func_1293(0, 8);
							Var0.f_6 = uParam1->f_15;
							Var0.f_7 = uParam1->f_16;
							Var0.f_9 = PLAYER::INT_TO_PLAYERINDEX(iVar10);
							func_1294(Var0, 1);
						}
					}
					iVar10++;
				}
			}
			else
			{
				func_1227(uParam0, 3);
			}
			break;
		case 3:
			if (func_1400(uParam1))
			{
				if (!func_1108(uParam1, 32))
				{
					Var0.f_5 = func_1293(0, 8);
					Var0.f_6 = uParam1->f_15;
					Var0.f_7 = uParam1->f_16;
					Var0.f_8 = Local_2503.f_36;
					func_1294(Var0, 3);
				}
				func_1227(uParam0, 8);
			}
			else if (func_190(&(uParam0->f_3)) > 2000)
			{
				func_1227(uParam0, 4);
			}
			break;
		case 4:
			if (func_190(&(uParam0->f_3)) > 2000 && func_831(*uParam1, uParam1->f_2, 3f, 1))
			{
				if (func_1400(uParam1))
				{
					func_1227(uParam0, 8);
				}
				else
				{
					func_1227(uParam0, 5);
				}
			}
			else if (!func_831(*uParam1, uParam1->f_2, 30f, 1))
			{
				if (func_1108(uParam1, 8))
				{
					func_1401(8, uParam1);
				}
				func_1227(uParam0, 6);
			}
			else if (func_190(&(uParam0->f_3)) > 8000 && func_1108(uParam1, 8))
			{
				if (!func_1402(uParam1->f_2, *uParam1))
				{
					if (func_1400(uParam1))
					{
						func_1227(uParam0, 8);
					}
					else
					{
						func_1227(uParam0, 7);
					}
				}
				else if (func_1108(uParam1, 8))
				{
					func_1401(8, uParam1);
				}
			}
			break;
		case 5:
			if (!func_831(*uParam1, uParam1->f_2, 30f, 1) || (func_190(&(uParam0->f_3)) > 3000 && !func_1295(*uParam1, joaat("SCRIPT_TASK_CONFRONT"))))
			{
				func_1227(uParam0, 4);
			}
			else if (!func_1287(*uParam1, uParam1->f_5, 10f, 1, 1) || func_190(&(uParam0->f_3)) > 10000)
			{
				func_1227(uParam0, 7);
			}
			break;
		case 6:
			if (func_1013(uParam0, 16))
			{
				Var0.f_5 = func_1293(0, 8);
				Var0.f_6 = uParam1->f_15;
				Var0.f_7 = uParam1->f_16;
				func_1294(Var0, 2);
			}
			if (func_1398(uParam0, uParam1, 0))
			{
				func_1227(uParam0, 2);
			}
			break;
		case 7:
			if (func_190(&(uParam0->f_3)) > 6000 && !func_1402(uParam1->f_2, *uParam1))
			{
				if (!func_1108(uParam1, 32))
				{
					Var0.f_5 = func_1293(0, 8);
					Var0.f_6 = uParam1->f_15;
					Var0.f_7 = uParam1->f_16;
					Var0.f_8 = Local_2503.f_36;
					func_1294(Var0, 3);
				}
				func_1227(uParam0, 8);
			}
			else if (!func_831(*uParam1, uParam1->f_2, 30f, 1))
			{
				func_1227(uParam0, 6);
			}
			break;
		case 8:
			break;
		case 9:
			if ((MISC::GET_FRAME_COUNT() % 30) == 0 && !func_831(*uParam1, func_1289(*uParam1), 100f, 1))
			{
				func_1227(uParam0, 10);
			}
			break;
		case 10:
			break;
	}
}

void func_1230(var uParam0, var uParam1)
{
	if (uParam0->f_1 < 8 && func_1013(uParam0, 32))
	{
		if (func_1397(uParam1->f_10))
		{
			func_1227(uParam0, 9);
		}
		else
		{
			func_1227(uParam0, 8);
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
			if (func_1295(*uParam1, 1056466932) || func_1399(&(uParam0->f_3), 5000))
			{
				func_1227(uParam0, 1);
			}
			break;
		case 1:
			func_1227(uParam0, 2);
			break;
		case 2:
			break;
		case 10:
			break;
	}
}

void func_1231(var uParam0, var uParam1)
{
	if (uParam0->f_1 < 8 && func_1013(uParam0, 32))
	{
		if (func_1397(uParam1->f_10))
		{
			func_1227(uParam0, 9);
		}
		else
		{
			func_1227(uParam0, 8);
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
			if (func_1398(uParam0, uParam1, 1) || func_1399(&(uParam0->f_3), 5000))
			{
				func_1227(uParam0, 1);
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 10:
			break;
	}
}

void func_1232(var uParam0, var uParam1)
{
	if (uParam0->f_1 < 8 && func_1013(uParam0, 32))
	{
		if (func_1397(uParam1->f_10))
		{
			func_1227(uParam0, 9);
		}
		else
		{
			func_1227(uParam0, 8);
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
			if (func_1403(*uParam1, &((Local_2503.f_42[uParam1->f_15 /*56*/])->f_1[1 /*17*/]), 0))
			{
				func_1227(uParam0, 1);
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 10:
			break;
	}
}

void func_1233(var uParam0, var uParam1)
{
	if (uParam0->f_1 < 8 && func_1013(uParam0, 32))
	{
		if (func_1397(uParam1->f_10))
		{
			func_1227(uParam0, 9);
		}
		else
		{
			func_1227(uParam0, 8);
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
			func_1227(uParam0, 1);
			break;
		case 1:
			if (func_1295(*uParam1, 780511057))
			{
				func_1227(uParam0, 2);
			}
			break;
		case 2:
			break;
		case 10:
			break;
	}
}

int func_1234(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	struct<13> Var6;
	int iVar29;
	struct<2> Var30;
	bool bVar32;

	if (!func_691(iParam0, 0))
	{
		return 0;
	}
	if (!func_1404(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_1405(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_1406(iParam0, bParam2);
	iVar2 = 0;
	if (func_988(iParam0) == joaat("clothing"))
	{
		if (!func_1361(iParam0, 866047851) && !func_1361(iParam0, -1979000645))
		{
			bVar3 = true;
		}
	}
	if (func_1407(iParam0, 8388608) && !func_1408(27))
	{
		func_1409(27);
	}
	func_1410(iParam0);
	if (!bVar3)
	{
		if (func_1361(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			iVar1 = func_1412(func_1411(iParam0, 1), 0);
			if (WEAPON::IS_WEAPON_VALID(iVar1))
			{
				if (func_23() == -1)
				{
					func_1413(iVar1);
				}
				if (func_986(0) && func_1414(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_1415(iParam0, iVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_393(iParam0, iVar0, iParam5);
				}
			}
		}
		else if (func_988(iParam0) == joaat("weapon"))
		{
			if (!func_1416(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_988(iParam0) == joaat("ammo") && func_690(iParam0))
		{
			if (!func_1417(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_1361(iParam0, 866047851))
		{
		}
		else if (func_1361(iParam0, 2000026003))
		{
		}
		else if (func_1361(iParam0, -103750053))
		{
			func_443(func_469(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_443(func_47(-717883113, 2091222383), iVar0);
		}
		else if (func_1361(iParam0, -121341956) && !func_1361(iParam0, 606799272))
		{
			if (iParam0 != 191707516)
			{
				func_348(534, 0);
			}
			if (func_1361(iParam0, -2017733358) || func_1361(iParam0, -1369131378))
			{
			}
		}
		else if (func_1361(iParam0, -136654233))
		{
			if (func_1361(iParam0, -1021472396))
			{
			}
		}
		else if (func_1361(iParam0, -1466706512) && func_1361(iParam0, 1147021565))
		{
			func_348(517, 0);
		}
		else if (func_1361(iParam0, 1147021565) && func_1361(iParam0, -524514947))
		{
		}
		else if (func_1361(iParam0, 554195525))
		{
		}
		else if (func_1361(iParam0, 589988438))
		{
			if (func_1418())
			{
				func_1419(1339418451, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_1361(iParam0, 787083290) && func_1361(iParam0, 949916894))
		{
			func_1420(iParam0);
		}
		else if (func_1361(iParam0, -1718133314))
		{
			func_1421(iParam0);
		}
		else if (func_1361(iParam0, -1738650224))
		{
			func_1422(iParam0);
		}
		else if (func_1361(iParam0, -1112814642) && func_1361(iParam0, 949916894))
		{
			func_1423(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1939067->f_21 = 0;
		}
		else if (func_1361(iParam0, 1841149704))
		{
			func_1424();
		}
		else if (func_1361(iParam0, -1979000645))
		{
		}
		else if (func_1361(iParam0, 606799272))
		{
		}
		else if (func_1361(iParam0, -1112814642) && func_1361(iParam0, -1697809989))
		{
		}
		else if (func_1361(iParam0, -2017733358) || func_1361(iParam0, -1369131378))
		{
		}
		else if (func_1361(iParam0, -1921346699))
		{
			return 0;
		}
		else if (func_1361(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868: /* GXTEntry: "Special Lake Lure" */
					if (!func_1091(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1))
					{
						func_1234(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438: /* GXTEntry: "Special River Lure" */
					if (!func_1091(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1))
					{
						func_1234(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217: /* GXTEntry: "Special Swamp Lure" */
					if (!func_1091(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1))
					{
						func_1234(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653: /* GXTEntry: "Lake Lure" */
					if (!func_1091(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1))
					{
						func_1234(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425: /* GXTEntry: "River Lure" */
					if (!func_1091(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1))
					{
						func_1234(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104: /* GXTEntry: "Swamp Lure" */
					if (!func_1091(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1))
					{
						func_1234(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_1361(iParam0, -839724752) && func_1407(iParam0, 4))
		{
		}
		else if (func_1361(iParam0, 1399091007))
		{
			func_1425(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		switch (iParam0)
		{
			case 990323211: /* GXTEntry: "Bundle of Arrows" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1930309310;
				break;
			case 1143540373: /* GXTEntry: "Poison Throwing Knives" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1372580021;
				break;
			case -1073808995: /* GXTEntry: "Live Crickets" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1557306571;
				break;
			case 1903483453: /* GXTEntry: "Live Worms" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 306085243;
				break;
			case 224572565: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case -13395913: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case 1859340712: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1614861441: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1336735809: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case -1109613870: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case 637788839: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case -1161163727: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case 648503798: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -1434556002: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -843069275: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case 1356680930: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case 1127253961: /* GXTEntry: "Reward" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1531214887;
				break;
			case joaat("weapon_kit_binoculars"):
			case 1652431022: /* GXTEntry: "Refined Binoculars" */
				break;
			case -102111672: /* GXTEntry: "Map" */
				bParam2 = true;
				bVar4 = true;
				break;
			case -21093309: /* GXTEntry: "Aged Pirate Rum" */
				func_1427(271, func_1426(-21093309 /* GXTEntry: "Aged Pirate Rum" */), 0);
				break;
			case 204375141: /* GXTEntry: "Ginseng Elixir" */
				func_1427(269, func_1426(204375141 /* GXTEntry: "Ginseng Elixir" */), 0);
				break;
			case -417963070: /* GXTEntry: "Valerian Root" */
				func_1427(270, func_1426(-417963070 /* GXTEntry: "Valerian Root" */), 0);
				break;
			case -1080874779: /* GXTEntry: "Special Health Cure" */
			case -755485480: /* GXTEntry: "Potent Health Cure" */
			case 230530039: /* GXTEntry: "Health Cure" */
			case 299161628: /* GXTEntry: "Moonshine" */
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_1428(683, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1067476102: /* GXTEntry: "Potent Bitters" */
			case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
			case 206762213: /* GXTEntry: "Cocaine Gum" */
			case 1566032147: /* GXTEntry: "Special Bitters" */
			case 1973952589: /* GXTEntry: "Bitters" */
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_1428(683, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case -653299524: /* GXTEntry: "Snake Oil" */
			case -486559882: /* GXTEntry: "Potent Snake Oil" */
			case -324053813: /* GXTEntry: "Chewing Tobacco" */
			case -223790555: /* GXTEntry: "Special Snake Oil" */
			case 998010398: /* GXTEntry: "Opened Chewing Tobacco" */
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_1428(683, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1976480343: /* GXTEntry: "Special Miracle Tonic" */
			case -953313786: /* GXTEntry: "Miracle Tonic" */
			case 730856618: /* GXTEntry: "Potent Miracle Tonic" */
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_1428(683, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case -2034071102: /* GXTEntry: "Lamb Heart" */
			case -1939600995: /* GXTEntry: "Prime Rib" */
			case -1760041550: /* GXTEntry: "High Quality Beef Stew" */
			case -1708424762: /* GXTEntry: "Regional Beef Stew" */
			case -1598782722: /* GXTEntry: "Consomme" */
			case -1505924449: /* GXTEntry: "Fried Catfish" */
			case -1403873319: /* GXTEntry: "Prairie Chicken" */
			case -1335566375: /* GXTEntry: "Lamb Fry" */
			case -1192685521: /* GXTEntry: "Oyster Stew" */
			case 144810727: /* GXTEntry: "Turtle Soup" */
			case 567164682: /* GXTEntry: "Oatmeal" */
			case 1174625611: /* GXTEntry: "Corned Beef Hash" */
			case 1955751248: /* GXTEntry: "Roast Beef" */
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_1428(684, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039: /* GXTEntry: "High Quality Beef and Eggs Stew" */
			case -399865011: /* GXTEntry: "Regional Beef and Eggs Stew" */
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_1428(684, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case 80178851: /* GXTEntry: "Hair Tonic" */
				func_348(524, 0);
				break;
			case 1613651027: /* GXTEntry: "Hair Pomade" */
				func_348(527, 0);
				break;
			case -885810591: /* GXTEntry: "Premium Cigarettes" */
				break;
			case -601932535: /* GXTEntry: "Ground Coffee" */
				if (func_1408(1))
				{
					func_348(520, 0);
				}
				break;
			case -898386032: /* GXTEntry: "Gun Oil" */
				func_348(519, 0);
				break;
			case -2035110427: /* GXTEntry: "Mortar and Pestle" */
				if (func_23() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case 1510719693: /* GXTEntry: "Coffee Percolator" */
				func_348(532, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar5 = iParam0;
		func_1429(&iVar5);
		if (!func_393(iVar5, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_986(0))
		{
			return 1;
		}
		if (func_988(iParam0) == joaat("clothing"))
		{
			func_1430(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_986(0) && !func_1431())
		{
			Var6.f_1 = 10;
			Var6.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_34, 0, 0, iVar2, &Var6, 0);
			iVar29 = 0;
			while (iVar29 < Var6)
			{
				func_1234(&(Var6.f_1[iVar29]), &(Var6.f_12[iVar29]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar29++;
			}
		}
		else
		{
			func_546(iVar2, 0);
		}
	}
	Var30 = { func_1432(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var30))
	{
		STATS::_0x6A0184E904CDF25E(&Var30, iVar0);
	}
	func_1433(iParam0);
	if (fParam6 > 0f)
	{
		if (func_1361(iParam0, -839724752))
		{
			func_1434(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 1248274121;
		func_1435(iParam0, iVar0, 0, bVar32, 0, 0, 0);
	}
	return 1;
}

int func_1235(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_691(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_988(iParam0);
	if (iVar0 == joaat("weapon") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == joaat("ammo") && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_1361(iParam0, 1399091007))
	{
		func_1436(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1236(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_1151(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_1437(&Var0, func_989(0));
	}
	if (!func_1152(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1156(iVar14);
	return uVar15;
}

struct<4> func_1237(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_694(iParam0, bParam1, 0) };
	return func_695(iParam0, Var0, Var0.f_4, bParam1);
}

int func_1238(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_fishingrod"):
		case joaat("weapon_kit_camera"):
		case -351498939:
		case -135813381:
		case 1030402560: /* GXTEntry: "Melee Object 2" */
		case 1549070292: /* GXTEntry: "Melee Object 1" */
			return 1;
		default:
			break;
	}
	return 0;
}

void func_1239(struct<2> Param0)
{
	struct<32> Var0;

	if (func_638(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_638(Param0)))
	{
	}
	else
	{
		STATS::_0xB2A38826E5886E83(func_638(Param0), Global_265331->f_124445.f_70.f_17);
		if (func_1242(Param0, &Var0))
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

int func_1240(struct<2> Param0, int iParam2)
{
	int iVar0;

	iVar0 = func_914(Param0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1900718->f_66 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1900718->f_66;
	func_1438(Param0, iVar0);
	Global_1900718->f_66++;
	if (iParam2 < 0 || iParam2 >= Global_1900718->f_66)
	{
		return iVar0;
	}
	func_1146(iVar0, iParam2);
	return iParam2;
}

int func_1241(struct<2> Param0, int iParam2)
{
	int iVar0;

	if (!func_73(Param0))
	{
		return 0;
	}
	iVar0 = func_914(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_1439(Param0, func_373(0), iParam2))
	{
		func_641(func_373(0), 3);
		func_641(func_373(iVar0), 4);
		return 0;
	}
	func_1146(iVar0, 0);
	func_641(func_373(0), 3);
	func_641(func_373(1), 4);
	return 1;
}

int func_1242(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_1087(Param0, &vVar0);
	if (func_1440(Param0, vVar0.x, uParam2))
	{
		return 1;
	}
	return 0;
}

void func_1243(var uParam0, bool bParam1, int iParam2)
{
	func_1441(uParam0, iParam2);
	if (Global_1184439->f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}
	if (bParam1)
	{
		func_1148(func_916(uParam0->f_1));
	}
	else
	{
		func_1149();
	}
}

bool func_1244(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1099294->f_3 && iParam0) != 0;
	}
	return (((*Global_1097610)[iParam1 /*51*/])->f_3 && iParam0) != 0;
}

void func_1245()
{
	int iVar0;

	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(Global_1275573->f_10))
	{
		return;
	}
	iVar0 = func_1442();
	if (iVar0 > 0)
	{
		func_1443(-1228177771, iVar0, 0);
	}
}

bool func_1246()
{
	return (func_1444(Global_1275573->f_10, 1, 0, 1) && func_1445() > 0);
}

void func_1247()
{
	int iVar0;

	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(Global_1275573->f_10))
	{
		return;
	}
	iVar0 = func_1445();
	if (iVar0 > 0)
	{
		func_1446(iVar0, 0, -142743235, 0);
	}
}

void func_1248()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	LAW::_0x062B4A4A3396351D(iVar0);
	func_1447();
}

void func_1249(int iParam0, struct<2> Param1, int iParam3)
{
	int iVar0;

	if (func_73((Global_1103073->f_193[&Global_1275573 /*8*/])->f_2.f_1))
	{
		return;
	}
	if ((Global_1103073->f_193[&Global_1275573 /*8*/])->f_2 != -1 && (Global_1103073->f_193[&Global_1275573 /*8*/])->f_2 != iParam0)
	{
		return;
	}
	(Global_1103073->f_193[&Global_1275573 /*8*/])->f_2 = iParam0;
	(Global_1103073->f_193[&Global_1275573 /*8*/])->f_2.f_1 = { Param1 };
	if (iParam3 != -1)
	{
		(Global_1103073->f_193[&Global_1275573 /*8*/])->f_2.f_3 = iParam3;
	}
	iVar0 = func_1448(Global_1275573->f_10);
	if (iVar0 != 6 && iVar0 != 8)
	{
		func_1449(6);
	}
}

int func_1250()
{
	int iVar0;
	int iVar1;
	struct<39> Var2;
	int iVar41;

	iVar1 = Global_1275573->f_21;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Var2 = { *(Global_1939231->f_242.f_14[iVar0 /*39*/]) };
		iVar41 = DATABINDING::_DATABINDING_READ_DATA_INT(Var2.f_25);
		if (iVar41 < iVar1)
		{
			if (func_1450(Var2))
			{
				func_632(Var2);
			}
			return iVar0;
		}
		iVar0++;
	}
	return func_1451();
}

void func_1251(var uParam0, var uParam1, char[32] cParam2, struct<22> Param10)
{
	func_1452(uParam0, uParam1, cParam2, Param10);
	uParam0->f_18 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_1136(15), Param10.f_16);
	uParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_1136(17), Param10.f_17);
	uParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1136(3), Param10.f_18);
	uParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1136(4), Param10.f_19);
	uParam0->f_22 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1136(5), Param10.f_20);
	uParam0->f_23 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1136(6), Param10.f_21);
}

int func_1252(var uParam0)
{
	return 1;
}

int func_1253(var uParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
	{
		return 0;
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
	{
		return 0;
	}
	else if (uParam0->f_6 == 0)
	{
		return 0;
	}
	else if (uParam0->f_7 == 0)
	{
		return 0;
	}
	if (uParam0->f_13 == 778915895)
	{
		if (Global_1896726->f_384)
		{
			uParam0->f_4 = MISC::_CREATE_VAR_STRING(2, "NM_TI_VIEW_INVITE");
		}
		else
		{
			uParam0->f_4 = MISC::_CREATE_VAR_STRING(2, "NM_TI_ACCEPT_INVITE");
		}
	}
	if (*uParam0 == 5)
	{
		return func_1454(func_1453(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_1453(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 6)
	{
		return func_1455(func_1453(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_1453(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 1)
	{
		return func_1456(func_1453(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_1453(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 3)
	{
		return func_1457(func_1453(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_1453(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 2)
	{
		return func_1458(func_1453(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_1453(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_8, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 4)
	{
		return func_1459(func_1453(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_1453(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_5, uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 0)
	{
		return func_1460(func_1453(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_1453(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	return 0;
}

int func_1254()
{
	return Global_1939231->f_242.f_1185;
}

bool func_1255(struct<2> Param0)
{
	return func_637(Param0) == 0;
}

int func_1256(struct<2> Param0)
{
	int iVar0;

	if (&Global_1900788 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1900788 - 1))
	{
		if (func_74(*((*Global_1900789)[iVar0 /*2*/]), Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1257(struct<2> Param0, bool bParam2)
{
	if (!func_73(Param0))
	{
		return;
	}
	if (!func_1255(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_1461(Param0);
	}
	func_641(Param0, 1);
	bParam2 = bParam2;
}

bool func_1258()
{
	return (Global_1915180->f_20135 || Global_1915180->f_21989.f_1);
}

int func_1259()
{
	return Global_1051202->f_12;
}

char* func_1260()
{
	return "unnamed";
}

int func_1261(int iParam0)
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

int func_1262(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_168(35, iParam0);
}

char* func_1263()
{
	return "countdown_final_thud";
}

int func_1264(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 4;
		case 2:
			return 1;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 4;
		case 6:
			return 4;
		case 7:
			return 3;
		case 8:
			return 1;
		case 9:
			return 0;
		case 10:
			return 0;
		case 11:
			return 4;
		case 12:
			return 4;
		case 13:
			return 3;
		case 16:
			return 1;
		case 14:
			return 4;
		case 15:
			return 4;
		case 17:
			return 3;
		case 18:
			return 0;
		case 19:
			return 4;
		case 20:
			return 1;
		case 21:
			return 1;
		case 22:
			return 0;
		case 23:
			return 0;
		case 24:
			return 0;
		case 25:
			return 0;
		case 26:
			return 4;
		case 27:
			return 4;
		case 28:
			return 1;
		case 29:
			return 1;
		case 30:
			return 0;
		case 31:
			return 4;
		case 32:
			return 4;
		case 33:
			return 4;
		case 34:
			return 4;
		case 35:
			return 4;
		case 36:
			return 1;
		case 37:
			return 4;
		default:
			break;
	}
	return -1;
}

void func_1265(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		iParam3 = func_1462(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0, func_1463(iParam2), iParam3);
}

void func_1266(var uParam0, var uParam1, int iParam2, char* sParam3)
{
	if (MISC::IS_STRING_NULL(sParam3))
	{
		sParam3 = func_1464(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0, func_1463(iParam2), sParam3);
}

void func_1267(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 == -1)
	{
		iParam3 = func_1465(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0, func_1463(iParam2), iParam3);
}

void func_1268(var uParam0, var uParam1, int iParam2, float fParam3)
{
	if (fParam3 == -1f)
	{
		fParam3 = func_1466(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_FLOAT(uParam0, func_1463(iParam2), fParam3);
}

void func_1269(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!bParam4)
	{
		bParam3 = func_1467(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0, func_1463(iParam2), bParam3);
}

int func_1270(int iParam0, int iParam1, int iParam2)
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

void func_1271(int iParam0)
{
	SCRIPTS::_0x31010318BA9897AC(&(Global_1070356->f_26831), iParam0);
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_26832), iParam0);
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_26833), iParam0);
	if (!func_847(iParam0))
	{
		func_1113(iParam0, 5, 1, 1, 0, 0);
	}
}

void func_1272(int iParam0)
{
	func_484(&(Global_1182289->f_3), iParam0);
}

void func_1273(int iParam0)
{
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_26831), iParam0);
	SCRIPTS::_0x31010318BA9897AC(&(Global_1070356->f_26832), iParam0);
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_26833), iParam0);
	if (!func_1135(iParam0))
	{
		func_1342(iParam0);
	}
}

void func_1274(int iParam0)
{
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_26835), iParam0);
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_26834), iParam0);
	SCRIPTS::_0x31010318BA9897AC(&(Global_1070356->f_26836), iParam0);
}

void func_1275(int iParam0)
{
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_26835), iParam0);
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_26836), iParam0);
	SCRIPTS::_0x31010318BA9897AC(&(Global_1070356->f_26834), iParam0);
}

void func_1276(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_1277()
{
	return Global_1951141->f_1;
}

int func_1278(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_691(iParam0, 0))
	{
		return 0;
	}
	if (Global_1939178->f_6)
	{
		return 0;
	}
	iVar0 = func_1235(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1160("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1153(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_1468(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_1156(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_1156(iVar1);
	}
	return 0;
}

bool func_1279(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_691(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_873(iParam0);
	switch (iVar0)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1216664798:
		case 1341188928:
			break;
		default:
			return false;
	}
	iVar1 = func_1469(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_1470(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_1471(iParam0);
	iVar2 = func_1470(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17172.f_54.f_644.f_1353.f_5[iVar2 /*17*/];
}

int func_1280()
{
	return Global_1132549->f_137;
}

var func_1281(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

void func_1282(var uParam0, int iParam1)
{
	func_146(&(uParam0->f_3), iParam1);
}

void func_1283(var uParam0, int iParam1)
{
	func_430(&(uParam0->f_3), iParam1);
}

void func_1284(var uParam0, int iParam1)
{
	func_430(&(uParam0->f_2), iParam1);
}

void func_1285(var uParam0, int iParam1)
{
	func_430(&(uParam0->f_20), iParam1);
}

int func_1286(var uParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (uParam1->f_10 == joaat("horse"))
	{
		return 0;
	}
	fVar0 = func_464(ENTITY::GET_ENTITY_COORDS(*uParam1, false, false), Local_243.f_1396);
	fVar1 = (fVar0 / Local_243.f_1294);
	if (fVar1 < 10f)
	{
		fVar1 = 10f;
	}
	if (fVar1 > 75f)
	{
		fVar2 = 10f;
	}
	else if (fVar1 > 50f)
	{
		fVar2 = 7.5f;
	}
	else if (fVar1 > 25f)
	{
		fVar2 = 5f;
	}
	else
	{
		fVar2 = 2.5f;
	}
	switch (uParam1->f_10)
	{
		case joaat("defensive"):
		case joaat("guard"):
			fVar2 = (fVar2 * 1.5f);
			break;
		case -198742249:
		case joaat("search"):
			fVar2 = (fVar2 * 2f);
			break;
		case -1346830927:
		case -862695229:
			fVar2 = (fVar2 * 100f);
			break;
	}
	if (func_190(&(Local_0.f_4)) < 120000)
	{
		fVar2 = (fVar2 * 2f);
	}
	iVar3 = BUILTIN::ROUND(fVar2);
	iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar4 > iVar3)
	{
		return 0;
	}
	iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	iVar5 = BUILTIN::ROUND(fVar1);
	if (iVar4 < iVar5)
	{
		iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		if (iVar4 < 18)
		{
			return 412730885;
		}
		else if (iVar4 < 36)
		{
			return -2138801252;
		}
		else if (iVar4 < 54)
		{
			return -441558663;
		}
		else if (iVar4 < 66)
		{
			iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			switch (iVar4)
			{
				case 0:
					return 1135560775 /* GXTEntry: "Irish Whiskey" */;
				case 1:
					return 1603716279 /* GXTEntry: "Old Tom Gin" */;
				default:
					break;
			}
		}
		else if (iVar4 < 78)
		{
			iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			switch (iVar4)
			{
				case 0:
					return -250719930 /* GXTEntry: "Agate Arrowhead" */;
				case 1:
					return -1604348319 /* GXTEntry: "Obsidian Arrowhead" */;
				default:
					break;
			}
		}
		else if (iVar4 < 90)
		{
			iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar4)
			{
				case 0:
					return 1496994240 /* GXTEntry: "1700 New Yorke Token" */;
				case 1:
					return -753018368 /* GXTEntry: "1792 Liberty Quarter" */;
				case 2:
					return -1323673307 /* GXTEntry: "1797 Gold Eagle" */;
				default:
					break;
			}
		}
		else
		{
			return 838297948;
		}
	}
	else
	{
		iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		if (iVar4 < 18)
		{
			return 649725417;
		}
		else if (iVar4 < 36)
		{
			return -1408109627;
		}
		else if (iVar4 < 54)
		{
			return 2056981800;
		}
		else if (iVar4 < 66)
		{
			return 412730885;
		}
		else if (iVar4 < 78)
		{
			return -2138801252;
		}
		else if (iVar4 < 90)
		{
			return -441558663;
		}
		else
		{
			iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			switch (iVar4)
			{
				case 0:
					return -1927508981;
				case 1:
					return 322031464;
				default:
					break;
			}
		}
	}
	return 0;
}

int func_1287(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_1472(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

int func_1288(vector3 vParam0, float fParam3, float fParam4)
{
	int iVar0;
	int iVar1;

	if (func_1287(Global_34, vParam0, fParam4, 1, 1) && CAM::IS_SPHERE_VISIBLE(vParam0, fParam3))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1) && NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1), vParam0, fParam3, fParam4))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1289(int iParam0)
{
	return PLAYER::GET_PLAYER_PED(func_1473(iParam0));
}

void func_1290(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_615(&(uParam0->f_1), 131072);
	}
	else
	{
		func_484(&(uParam0->f_1), 131072);
	}
}

int func_1291(int iParam0, int iParam1, float fParam2)
{
	if (!PED::_0x06087579E7AA85A9(iParam0, iParam1, -1f, fParam2, -1f, fParam2))
	{
		return 0;
	}
	if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iParam1, 17))
	{
		return 0;
	}
	return 1;
}

int func_1292(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_1474(uParam2, 1, iVar0);
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
			if (func_1475(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_1476(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1939178->f_21)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_1477(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_1476(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_1478(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_1476(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_1479(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_1476(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1939178->f_20 && func_1444(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_1476(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1939178->f_19)
		{
			if (func_1480(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_1481(Global_34, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_1476(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_1482(Global_34, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_1476(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1939178->f_23) < 300)
			{
				if (func_1483(Global_34, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_1476(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_1483(Global_34, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_1476(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1939178->f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_1484(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_1476(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1939178->f_19 || uParam2->f_12 < 20f)
			{
				if (func_1485(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_1476(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1939178->f_24 || Global_1939178->f_25)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_1486(uParam2, 4000))
				{
					if ((func_1487(iParam0, Global_1939178->f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_1488(uParam2, iParam0)) && func_1489(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_1476(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_1487(iParam0, Global_1939178->f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_1488(uParam2, iParam0)) && func_1489(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_1476(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (Global_1939178->f_34 == 0)
			{
				if (Global_1939178->f_35 != 0)
				{
					if (func_1490(iParam0, Global_1939178->f_35))
					{
						func_1491();
						*uParam3 = 2;
						func_1476(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_1492(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_1493() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_1491();
						*uParam3 = 2;
						func_1476(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1939178->f_36 != 0)
			{
				if (func_1494())
				{
					if (func_1490(iParam0, Global_1939178->f_36))
					{
						func_1491();
						*uParam3 = 2;
						func_1476(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_1495(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_1476(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1939178->f_50)
		{
			if (*uParam2 & -2147483648 != 0)
			{
				if (func_464(func_1496(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(iParam0, true, false)) <= uParam2->f_30)
				{
					if (func_1497(PLAYER::PLAYER_PED_ID(), iParam0, 1060437492 /* Float: 0.707f */) == 0)
					{
						*uParam3 = 1048576;
						func_1476(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_28)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_1498(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_1476(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_1499(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_1476(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_1500(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_1476(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_1501(uParam2, 4000))
				{
					if (func_1502(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_1476(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_20)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_1503(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_1476(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_1504(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_1476(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

var func_1293(int iParam0, int iParam1)
{
	return func_1061(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_1294(struct<6> Param0, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&(Param0.f_5)))
	{
		return;
	}
	Param0 = 55;
	Param0.f_1 = PLAYER::PLAYER_ID();
	Param0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Param0.f_4 = iParam10;
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 10, 50, &(Param0.f_5));
}

int func_1295(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(uParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_1296(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

char* func_1297(var uParam0)
{
	switch (uParam0->f_10)
	{
		case joaat("defensive"):
		case -862695229:
		case joaat("guard"):
		case -198742249:
		case joaat("search"):
		case joaat("bandit"):
			return "FME_BANDIT";
		default:
			break;
	}
	return "";
}

void func_1298(var uParam0, var uParam1)
{
	bool bVar0;

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
	{
		return;
	}
	bVar0 = uParam0->f_1 != uParam1->f_11;
	switch (uParam0->f_1)
	{
		case 0:
			func_1398(uParam0, uParam1, 0);
			break;
		case 1:
			WEAPON::_0x94A3C1B804D291EC(*uParam1, 1, 0, 1, 1);
			WEAPON::SET_CURRENT_PED_WEAPON(*uParam1, joaat("weapon_unarmed"), false, 0, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(*uParam1, joaat("weapon_unarmed"), false, 1, false, false);
			func_1398(uParam0, uParam1, 0);
			break;
		case 2:
			if (bVar0)
			{
				TASK::_0x541E5B41DCA45828(*uParam1, 2, 0);
			}
			break;
		case 3:
			if (bVar0)
			{
				func_1505(uParam1);
				TASK::_0xE7FA07624574B79A(*uParam1, func_1289(*uParam1), 1, 1, -1f, 1, 0, 1, 0);
			}
			break;
		case 4:
			if (bVar0)
			{
				func_1505(uParam1);
				if (PED::IS_PED_USING_ANY_SCENARIO(*uParam1))
				{
					PED::_0x463803429297117C(*uParam1, ENTITY::GET_ENTITY_COORDS(func_1289(*uParam1), true, false), 1, 0);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(*uParam1, WEAPON::GET_BEST_PED_WEAPON(*uParam1, false, false), false, 0, false, false);
				TASK::TASK_AIM_GUN_AT_ENTITY(*uParam1, func_1289(*uParam1), -1, 0, 1);
			}
			break;
		case 8:
			if (bVar0)
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(*uParam1))
				{
					PED::_0x463803429297117C(*uParam1, ENTITY::GET_ENTITY_COORDS(func_1289(*uParam1), true, false), 1, 0);
				}
			}
			if (!func_1295(*uParam1, -2117564886) && func_190(&(uParam0->f_3)) > 3000)
			{
				TASK::TASK_COMBAT_HATED_TARGETS(*uParam1, -1082130432);
			}
			break;
		case 9:
			if (bVar0)
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(*uParam1))
				{
					PED::_0xEEED8FAFEC331A70(*uParam1, ENTITY::GET_ENTITY_COORDS(func_1289(*uParam1), true, false), 1);
				}
				TASK::_TASK_SMART_FLEE_STYLE_PED(*uParam1, uParam1->f_2, 3, 0, -1082130432, -1, 0);
			}
			break;
		case 10:
			break;
	}
}

void func_1299(var uParam0, var uParam1)
{
	struct<10> Var0;
	bool bVar10;
	struct<10> Var11;

	if (((((uParam0->f_1 >= 2 && uParam0->f_1 <= 7) && (MISC::GET_FRAME_COUNT() % 30) == 0) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_2)) && PLAYER::PLAYER_PED_ID() != uParam1->f_2) && (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), ENTITY::GET_ENTITY_COORDS(*uParam1, true, false)) + 1f) < BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(uParam1->f_2, true, false), ENTITY::GET_ENTITY_COORDS(*uParam1, true, false)))
	{
		Var0.f_9 = 255;
		Var0.f_5 = func_1293(0, 8);
		Var0.f_6 = uParam1->f_15;
		Var0.f_7 = uParam1->f_16;
		func_1294(Var0, 5);
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
	{
		return;
	}
	bVar10 = uParam0->f_1 != uParam1->f_11;
	switch (uParam0->f_1)
	{
		case 0:
			func_1398(uParam0, uParam1, 1);
			break;
		case 1:
			func_1398(uParam0, uParam1, 1);
			break;
		case 2:
			break;
		case 3:
			if (bVar10)
			{
				if (func_1108(uParam1, 8))
				{
					func_1506(uParam1);
				}
				TASK::TASK_LOOK_AT_ENTITY(*uParam1, uParam1->f_2, 10000, 0, 51, 0);
			}
			break;
		case 4:
			if (bVar10)
			{
				if (func_1108(uParam1, 8))
				{
					func_1506(uParam1);
				}
				if (PED::IS_PED_USING_ANY_SCENARIO(*uParam1))
				{
					PED::_0xF1C03A5352243A30(*uParam1);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(*uParam1, WEAPON::GET_BEST_PED_WEAPON(*uParam1, false, false), true, 0, false, false);
				if (!func_831(*uParam1, uParam1->f_2, 20f, 1))
				{
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(*uParam1, uParam1->f_2, uParam1->f_2, 1f, 0, 13f, 15f, 1, 0, joaat("firing_pattern_burst_fire"), 0);
				}
				else
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(*uParam1, uParam1->f_2, -1, 1, 1);
				}
			}
			break;
		case 5:
			if (bVar10)
			{
				if (func_1108(uParam1, 8))
				{
					func_1506(uParam1);
				}
				if (func_1094(*uParam1, 0, 1, 0) != joaat("weapon_unarmed"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(*uParam1, joaat("weapon_unarmed"), false, 0, false, false);
				}
			}
			if (!func_1295(*uParam1, joaat("SCRIPT_TASK_CONFRONT")) && func_1094(*uParam1, 0, 1, 0) == joaat("weapon_unarmed"))
			{
				TASK::TASK_CONFRONT(*uParam1, uParam1->f_2, 2);
			}
			break;
		case 6:
			func_1398(uParam0, uParam1, 0);
			break;
		case 7:
			if (bVar10)
			{
				if (func_1108(uParam1, 8))
				{
					func_1506(uParam1);
				}
				TASK::TASK_SHOOT_AT_COORD(*uParam1, ENTITY::GET_ENTITY_COORDS(uParam1->f_2, true, false) + Vector(1.5f, 0f, 0f), 2000, 1566631136, 0);
			}
			if (!func_1295(*uParam1, -653332088) && !func_1295(*uParam1, 1630799643))
			{
				TASK::TASK_AIM_GUN_AT_ENTITY(*uParam1, uParam1->f_2, -1, 1, 1);
			}
			break;
		case 8:
			if (bVar10)
			{
				if (!func_1108(uParam1, 32))
				{
					Var11.f_9 = 255;
					Var11.f_5 = func_1293(0, 8);
					Var11.f_6 = uParam1->f_15;
					Var11.f_7 = uParam1->f_16;
					Var11.f_8 = Local_2503.f_36;
					func_1294(Var11, 3);
				}
			}
			if (!func_1295(*uParam1, -2117564886) && func_190(&(uParam0->f_3)) > 3000)
			{
				TASK::TASK_COMBAT_HATED_TARGETS(*uParam1, -1082130432);
			}
			break;
		case 9:
			if (bVar10)
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(*uParam1))
				{
					PED::_0xEEED8FAFEC331A70(*uParam1, ENTITY::GET_ENTITY_COORDS(func_1289(*uParam1), true, false), 1);
				}
				TASK::_TASK_SMART_FLEE_STYLE_PED(*uParam1, func_1289(*uParam1), 3, 0, -1082130432, -1, 0);
			}
			break;
		case 10:
			break;
	}
}

void func_1300(var uParam0, var uParam1)
{
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
	{
		return;
	}
	switch (uParam0->f_1)
	{
		case 0:
			if (!func_1295(*uParam1, 1056466932))
			{
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(*uParam1, func_1289(*uParam1), 0f, 0f, 0f, 2f, -1, 1036831949, 1, 1, 0, 0, 1);
			}
			break;
		case 1:
			break;
		case 2:
			if (!func_1295(*uParam1, 1056466932) || (MISC::GET_FRAME_COUNT() % 150) == 0)
			{
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(*uParam1, func_1289(*uParam1), 0f, 0f, 0f, 2f, -1, 1036831949, 1, 1, 0, 0, 1);
			}
			break;
		case 8:
			if (!func_1295(*uParam1, -2117564886) && func_190(&(uParam0->f_3)) > 3000)
			{
				TASK::TASK_COMBAT_HATED_TARGETS(*uParam1, -1082130432);
			}
			break;
		case 10:
			break;
	}
}

void func_1301(var uParam0, var uParam1)
{
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
	{
		return;
	}
	switch (uParam0->f_1)
	{
		case 0:
			if (!func_1295(*uParam1, 1056466932))
			{
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(*uParam1, func_1289(*uParam1), 0f, 0f, 0f, 2f, -1, 1036831949, 1, 1, 0, 0, 1);
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 8:
			if (!func_1295(*uParam1, -2117564886) && func_190(&(uParam0->f_3)) > 3000)
			{
				TASK::TASK_COMBAT_HATED_TARGETS(*uParam1, -1082130432);
			}
			break;
		case 10:
			break;
	}
}

void func_1302(var uParam0, var uParam1)
{
	bool bVar0;

	if (((Local_243.f_1 != 11 && uParam0->f_1 <= 2) && !func_831(Global_34, *uParam1, 30f, 1)) && (MISC::GET_FRAME_COUNT() % 600) == 0)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::_TRIGGER_SONAR_BLIP_2(-342321975, *uParam1);
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
	{
		return;
	}
	bVar0 = uParam0->f_1 != uParam1->f_11;
	switch (uParam0->f_1)
	{
		case 0:
			if (!func_1403(*uParam1, &((Local_2503.f_42[uParam1->f_15 /*56*/])->f_1[1 /*17*/]), 0) && !func_1295(*uParam1, 1868526510))
			{
				TASK::TASK_MOUNT_ANIMAL(*uParam1, &((Local_2503.f_42[uParam1->f_15 /*56*/])->f_1[1 /*17*/]), 1000, -1, 1073741824, 1, 0, 0);
			}
			break;
		case 1:
			if (!func_1295(*uParam1, -1665583462))
			{
				TASK::_TASK_MOVE_IN_TRAFFIC(*uParam1, -1082130432, 0, 0);
			}
			break;
		case 2:
			break;
		case 8:
			if (!func_1295(*uParam1, -2117564886) && func_190(&(uParam0->f_3)) > 3000)
			{
				TASK::TASK_COMBAT_HATED_TARGETS(*uParam1, -1082130432);
			}
			break;
		case 9:
			if (bVar0)
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(*uParam1))
				{
					PED::_0xEEED8FAFEC331A70(*uParam1, ENTITY::GET_ENTITY_COORDS(func_1289(*uParam1), true, false), 1);
				}
				TASK::_TASK_SMART_FLEE_STYLE_PED(*uParam1, uParam1->f_2, 3, 0, -1082130432, -1, 0);
			}
			break;
		case 10:
			break;
	}
}

void func_1303(var uParam0, var uParam1)
{
	if (((Local_243.f_1 != 11 && uParam0->f_1 <= 2) && !func_831(Global_34, *uParam1, 30f, 1)) && (MISC::GET_FRAME_COUNT() % 600) == 300)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::_TRIGGER_SONAR_BLIP_2(-342321975, *uParam1);
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
	{
		return;
	}
	switch (uParam0->f_1)
	{
		case 0:
			break;
		case 1:
			if (!func_1295(*uParam1, 780511057))
			{
				PED::SET_PED_ACCURACY(*uParam1, 0);
				if (uParam1->f_16 == 0)
				{
					TASK::TASK_COMBAT_PED(*uParam1, &((Local_2503.f_42[uParam1->f_15 /*56*/])->f_1[1 /*17*/]), 0, 0);
				}
				else
				{
					TASK::TASK_COMBAT_PED(*uParam1, &((Local_2503.f_42[uParam1->f_15 /*56*/])->f_1[0 /*17*/]), 0, 0);
				}
			}
			break;
		case 2:
			if (!func_1295(*uParam1, 780511057))
			{
				PED::SET_PED_ACCURACY(*uParam1, 0);
				if (uParam1->f_16 == 0)
				{
					TASK::TASK_COMBAT_PED(*uParam1, &((Local_2503.f_42[uParam1->f_15 /*56*/])->f_1[1 /*17*/]), 0, 0);
				}
				else
				{
					TASK::TASK_COMBAT_PED(*uParam1, &((Local_2503.f_42[uParam1->f_15 /*56*/])->f_1[0 /*17*/]), 0, 0);
				}
			}
			break;
		case 8:
			if (!func_1295(*uParam1, -2117564886) && func_190(&(uParam0->f_3)) > 3000)
			{
				TASK::TASK_COMBAT_HATED_TARGETS(*uParam1, -1082130432);
			}
			break;
		case 10:
			break;
	}
}

int func_1304()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-92416669) > 0)
	{
		return 1;
	}
	return 0;
}

int func_1305(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1938417->f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(((*Global_1938417)[iVar0 /*16*/])->f_10)))
		{
			func_1507(iVar0);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1306(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

int func_1307(int iParam0, int iParam1, int iParam2)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 < iParam1)
	{
		if (iParam2 != 0)
		{
			(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = iParam2;
		}
		else
		{
			(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = Global_1275573->f_21;
		}
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = iParam1;
		return 1;
	}
	else if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 == iParam1)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = Global_1275573->f_21;
		return 1;
	}
	return 0;
}

void func_1308(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 179;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 2, &uParam1);
	func_1508(*uParam0);
}

void func_1309(var uParam0)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, "Title");
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(*uParam0, "LeaderboardList");
	uParam0->f_142 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(*uParam0, "LeaderboardList");
}

void func_1310(var uParam0, char* sParam1)
{
	if (!MISC::IS_BIT_SET(uParam0->f_158, 7))
	{
		MISC::SET_BIT(&(uParam0->f_158), 7);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Heading", sParam1);
	}
}

char* func_1311(char* sParam0)
{
	return MISC::_CREATE_VAR_STRING(6, "FM_WEIGHT", sParam0);
}

char* func_1312(float fParam0)
{
	return MISC::_CREATE_VAR_STRING(2, "FM_PERCENT", BUILTIN::FLOOR((fParam0 * 100f)));
}

void func_1313(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0, iParam1);
}

void func_1314(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	float fVar14;

	if (Global_1939067->f_108)
	{
		func_1509(uParam0, uParam1, iParam2, iParam7, iParam8);
	}
	else
	{
		func_1321(uParam0, uParam1);
		iVar7 = PLAYER::PLAYER_ID();
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!func_1510(&(((*uParam1)[iVar0 /*23*/])->f_14)))
			{
			}
			else
			{
				iVar1++;
				func_1511(uParam0, uParam1, iVar0, bParam4);
				if (bParam3)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "Position", func_1512(uParam1, iVar0));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "Position", iVar1);
				}
				bVar8 = iVar7 == ((*uParam1)[iVar0 /*23*/])->f_14;
				iVar9 = func_1513(uParam0, uParam1, iVar0, iVar7, bVar8);
				if (!bParam6)
				{
					if (!bParam4)
					{
						func_1514(uParam0, uParam1, iVar0, bParam3, iVar9);
					}
				}
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Gamertag", &(((*uParam1)[iVar0 /*23*/])->f_14.f_1));
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "GamertagColor", iVar9);
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "CrewTag", func_1515());
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Rank", func_1516(((*uParam1)[iVar0 /*23*/])->f_14));
				if (!bParam4)
				{
					if (func_1517())
					{
						if (func_1518(((*uParam1)[iVar0 /*23*/])->f_14))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "Spectating", true);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "ShowRank", false);
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "Spectating", false);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "ShowRank", true);
						}
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "Spectating", false);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "ShowRank", true);
					}
				}
				if (bParam4)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat0", func_1519(((*uParam1)[iVar0 /*23*/])->f_11));
				}
				else if (bParam5)
				{
					if (func_1520(uParam0->f_159))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat1", MISC::_0x2B6846401D68E563(((*uParam1)[iVar0 /*23*/])->f_8, 0));
					}
					else if (func_1521(uParam0->f_159))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat2", MISC::_0x2B6846401D68E563(((*uParam1)[iVar0 /*23*/])->f_8, 0));
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat0", MISC::_0x2B6846401D68E563(((*uParam1)[iVar0 /*23*/])->f_8, 0));
					}
				}
				if (MISC::IS_BIT_SET(uParam0->f_159, 3))
				{
					iVar10 = 0;
					if (MISC::IS_BIT_SET(uParam0->f_159, 0))
					{
						iVar2 = BUILTIN::ROUND(func_1522((*uParam1)[iVar0 /*23*/], uParam0->f_159));
						iVar10 = "Stat2";
					}
					else
					{
						iVar2 = BUILTIN::ROUND(func_1523((*uParam1)[iVar0 /*23*/], uParam0->f_159));
						iVar10 = "Stat1";
					}
					sVar5 = " ";
					if (func_1524(iVar2))
					{
						iVar11 = uParam0->f_159;
						if (((*uParam1)[iVar0 /*23*/])->f_1 == 8.94E+07f)
						{
							MISC::CLEAR_BIT(&iVar11, 12);
						}
						sVar5 = func_1525(iVar2, iVar11, 0);
					}
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), iVar10, sVar5);
				}
				else if (!MISC::IS_BIT_SET(uParam0->f_159, 0) && !MISC::IS_BIT_SET(uParam0->f_159, 17))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_159, 18))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat1", MISC::_0x2B6846401D68E563(func_1523((*uParam1)[iVar0 /*23*/], uParam0->f_159), func_1526(uParam0, 1)));
					}
				}
				if (MISC::IS_BIT_SET(uParam0->f_159, 4))
				{
					iVar12 = 0;
					sVar6 = " ";
					if (MISC::IS_BIT_SET(uParam0->f_159, 0))
					{
						iVar12 = "Stat3";
						iVar3 = BUILTIN::ROUND(func_1527((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160));
					}
					else
					{
						iVar12 = "Stat2";
						iVar3 = BUILTIN::ROUND(func_1522((*uParam1)[iVar0 /*23*/], uParam0->f_159));
					}
					if (func_1524(iVar3))
					{
						sVar6 = func_1072(iVar3, 1, 2, 0, 0, 0);
					}
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), iVar12, sVar6);
				}
				else if (MISC::IS_BIT_SET(uParam0->f_159, 15))
				{
					iVar13 = 0;
					if (MISC::IS_BIT_SET(uParam0->f_159, 0))
					{
						iVar13 = "Stat3";
						fVar14 = func_1527((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160);
					}
					else
					{
						iVar13 = "Stat2";
						fVar14 = func_1522((*uParam1)[iVar0 /*23*/], uParam0->f_159);
					}
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), iVar13, MISC::_0x2B6846401D68E563(fVar14, 0));
				}
				else if ((!MISC::IS_BIT_SET(uParam0->f_159, 3) && !func_1521(uParam0->f_159)) && !func_1528(uParam0->f_159))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat2", MISC::_0x2B6846401D68E563(func_1522((*uParam1)[iVar0 /*23*/], uParam0->f_159), func_1526(uParam0, 2)));
				}
				if (!MISC::IS_BIT_SET(uParam0->f_159, 3))
				{
					if (MISC::IS_BIT_SET(uParam0->f_160, 0))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", "-");
					}
					else if (MISC::IS_BIT_SET(uParam0->f_159, 9))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", func_1311(func_1527((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160)));
					}
					else if (MISC::IS_BIT_SET(uParam0->f_159, 10))
					{
						fVar4 = func_1527((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160);
						if (fVar4 >= 0f)
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", func_1072(BUILTIN::FLOOR(fVar4), 1, 2, 0, 0, 0));
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", MISC::_CREATE_VAR_STRING(2, "FM_POSSE_RACE_LEADERBOARD_DNF"));
						}
					}
					else if (MISC::IS_BIT_SET(uParam0->f_159, 21))
					{
						iVar2 = BUILTIN::ROUND(func_1527((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160));
						sVar5 = " ";
						sVar5 = func_1525(iVar2, uParam0->f_159, 0);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", sVar5);
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", MISC::_0x2B6846401D68E563(func_1527((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160), func_1526(uParam0, 3)));
					}
				}
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "isHighlighted", bVar8);
				if (bVar8)
				{
				}
				if (bParam4 && ((*uParam1)[iVar0 /*23*/])->f_13)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Blip", "BLIP_MVP");
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "BlipColor", -1777836132);
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "BlipColor", iVar9);
				}
			}
			iVar0++;
		}
		uParam0->f_149 = iVar1;
	}
}

void func_1315(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4[8];
	int iVar13;
	int iVar14;
	bool bVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;

	iVar13 = 0;
	iVar14 = 32;
	bVar16 = MISC::IS_BIT_SET(uParam0->f_159, 6);
	if (Global_1939067->f_108)
	{
		iVar3 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_142);
		if (MISC::IS_BIT_SET(uParam0->f_159, 28) && uParam0->f_150 > 0)
		{
			iVar14 = uParam0->f_150;
			func_1529(iParam4, &uVar4, uParam0->f_150, bVar16);
			func_1530(uParam0, iParam6, &uVar4, &iVar13, &iVar14);
			iVar1 = 0;
			while (iVar1 <= (iVar14 - 1))
			{
				iVar17 = &uVar4[iVar1];
				if (iVar1 == 0 || iVar1 >= iVar13)
				{
					if ((iVar17 < 8 && iVar17 != -1) && iVar0 < 5)
					{
						func_1531(uParam0->f_2, &(uParam0->f_143[iVar0]), "MiniListItem", iVar3, iVar0);
						iVar0++;
					}
				}
				iVar1++;
			}
		}
		else
		{
			func_1532(uParam1, iParam6, &iVar13, &iVar14);
			iVar2 = 0;
			while (iVar2 <= iVar14)
			{
				if (iVar0 == 0 || iVar2 >= iVar13)
				{
					if (func_1510(&(((*uParam1)[iVar2 /*23*/])->f_14)) && iVar0 < 5)
					{
						func_1531(uParam0->f_2, &(uParam0->f_143[iVar0]), "MiniListItem", iVar3, iVar0);
						iVar0++;
					}
				}
				iVar2++;
			}
		}
		iVar3 = (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_142) - 1);
		if (iVar0 <= iVar3)
		{
			iVar18 = iVar3;
			while (iVar18 >= iVar0)
			{
				DATABINDING::_0x6318FB3BE37E11B3(uParam0->f_142, iVar18);
				iVar18 = (iVar18 + -1);
			}
		}
		return;
	}
	iVar3 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_2);
	if (bParam2 && uParam0->f_150 > 0)
	{
		func_1529(iParam4, &uVar4, uParam0->f_150, bVar16);
		func_1533(uParam0, uParam1, iParam3, uParam0->f_150, bParam5);
		if (!bVar15)
		{
			iVar1 = 0;
			while (iVar1 <= (uParam0->f_150 - 1))
			{
				iVar19 = &uVar4[iVar1];
				if (iVar19 < 8 && iVar19 > -1)
				{
					func_1531(uParam0->f_2, &(uParam0->f_3[iVar19]), "LeaderboardHeader", iVar3, iVar0);
					iVar0++;
					iVar2 = 0;
					while (iVar2 <= 31)
					{
						if (iVar19 == uParam1[iVar2 /*23*/] && func_1510(&(((*uParam1)[iVar2 /*23*/])->f_14)))
						{
							func_1531(uParam0->f_2, &(uParam0->f_12[iVar2]), "LeaderboardListItem", iVar3, iVar0);
							iVar0++;
						}
						iVar2++;
					}
				}
				iVar1++;
			}
		}
	}
	else
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			if (func_1510(&(((*uParam1)[iVar2 /*23*/])->f_14)))
			{
				func_1531(uParam0->f_2, &(uParam0->f_12[iVar2]), "LeaderboardListItem", iVar3, iVar0);
				iVar0++;
			}
			iVar2++;
		}
	}
	if (uParam0->f_149 > 0 || iVar0 > 0)
	{
		if (iVar0 < 3)
		{
			iVar20 = iVar0;
			while (iVar20 <= 3)
			{
				func_1531(uParam0->f_2, &(uParam0->f_12[iVar20]), "LeaderboardListItemBlank", iVar3, iVar0);
				iVar0++;
				iVar20++;
			}
		}
	}
	iVar3 = (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_2) - 1);
	if (iVar0 <= iVar3)
	{
		iVar21 = iVar3;
		while (iVar21 >= iVar0)
		{
			DATABINDING::_0x6318FB3BE37E11B3(uParam0->f_2, iVar21);
			iVar21 = (iVar21 + -1);
		}
	}
}

int func_1316()
{
	if (Global_1939067->f_20)
	{
		if (Global_1939067->f_5 == 1)
		{
			return 1;
		}
		if (Global_1939067->f_5 == 2)
		{
			return 2;
		}
	}
	return -1;
}

bool func_1317()
{
	if (Global_1099294->f_26.f_117.f_4 && !func_1517())
	{
		Global_1099294->f_26.f_117.f_4 = 0;
	}
	return Global_1099294->f_26.f_117.f_4;
}

bool func_1318()
{
	return (func_794(2) && func_1534());
}

void func_1319(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (!MISC::IS_BIT_SET(uParam0->f_158, 17))
	{
		if (MISC::IS_BIT_SET(uParam0->f_159, 22))
		{
			Global_1939067->f_109 = 1;
		}
		else
		{
			Global_1939067->f_109 = 0;
		}
		MISC::SET_BIT(&(uParam0->f_158), 17);
	}
	if (Global_1939067->f_108)
	{
		if (MISC::IS_BIT_SET(uParam0->f_159, 28))
		{
			iVar0 = 0;
			while (iVar0 <= (uParam0->f_150 - 1))
			{
				if (iVar0 == iParam4)
				{
					*iParam3 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (((*uParam1)[iVar0 /*23*/])->f_14 == *iParam2)
				{
					*iParam3 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

void func_1320(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10)
{
	func_1535(uParam0, uParam1, iParam2, iParam7, bParam4, bParam3, bParam5, bParam8, bParam9, iParam10, iParam6);
	func_1315(uParam0, uParam1, bParam5, iParam6, iParam2, MISC::IS_BIT_SET(uParam0->f_159, 5), iParam10);
}

void func_1321(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (((*uParam1)[iVar0 /*23*/])->f_14 == 255)
		{
		}
		else if (func_1510(&(((*uParam1)[iVar0 /*23*/])->f_14)))
		{
			func_1536(uParam0, &(((*uParam1)[iVar0 /*23*/])->f_14), iVar0, 1);
		}
		iVar0++;
	}
}

void func_1322(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (((*uParam1)[iVar0 /*23*/])->f_14 == 255)
		{
		}
		else
		{
			func_1511(uParam0, uParam1, iVar0, bParam2);
		}
		iVar0++;
	}
}

void func_1323(var uParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_1537(16);
	switch (uParam0->f_198)
	{
		case 0:
			func_512(1);
			func_1538(&(uParam0->f_198), 1);
			break;
		case 1:
			AUDIO::_0xD9130842D7226045("MP_Leaderboard_Sounds", 1);
			func_1538(&(uParam0->f_198), 2);
			break;
		case 2:
			iVar1 = UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(joaat("leaderboards"), func_1539(bParam1));
			if (iVar1 == 0)
			{
				func_1538(&(uParam0->f_198), 3);
			}
			else if (UIAPPS::_IS_APP_RUNNING(joaat("leaderboards")))
			{
				func_1538(&(uParam0->f_198), 3);
			}
			break;
		case 3:
			if (UIAPPS::_IS_APP_RUNNING(joaat("leaderboards")))
			{
				if (!bVar0)
				{
					AUDIO::PLAY_SOUND_FRONTEND("Leaderboard_Show", "MP_Leaderboard_Sounds", true, 0);
				}
				UIAPPS::_REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("leaderboards"), func_1540());
				func_1538(&(uParam0->f_198), 4);
			}
			else if (func_1541())
			{
				func_1538(&(uParam0->f_198), 2);
			}
			break;
		case 4:
			if (MISC::IS_BIT_SET(uParam0->f_158, 13))
			{
				if (UIAPPS::_IS_APP_RUNNING(joaat("leaderboards")))
				{
					if (!bVar0)
					{
						AUDIO::PLAY_SOUND_FRONTEND("Leaderboard_Hide", "MP_Leaderboard_Sounds", true, 0);
					}
					UIAPPS::_CLOSE_APP_BY_HASH(joaat("leaderboards"));
					func_1538(&(uParam0->f_198), 5);
				}
			}
			break;
		case 5:
			if (bParam1)
			{
				MISC::CLEAR_BIT(&(uParam0->f_158), 13);
				func_1538(&(uParam0->f_198), 1);
			}
			else
			{
				func_1538(&(uParam0->f_198), 6);
			}
			break;
		case 6:
			func_868(uParam0, bParam1);
			break;
	}
}

void func_1324(var uParam0)
{
	func_1542(&(uParam0->f_162));
	if ((MISC::IS_BIT_SET(uParam0->f_158, 14) || MISC::IS_BIT_SET(uParam0->f_158, 15)) || MISC::IS_BIT_SET(uParam0->f_158, 16))
	{
		return;
	}
	func_1543(&(uParam0->f_162), 0);
	MISC::SET_BIT(&(uParam0->f_158), 14);
}

int func_1325()
{
	return 1937193856;
}

int func_1326()
{
	return -1640778959;
}

int func_1327()
{
	return -1428663542;
}

void func_1328(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_160(&(((*uParam0)[iParam1 /*34*/])->f_31));
	iVar1 = ((*uParam0)[iParam1 /*34*/])->f_24;
	if (iVar1 != 0)
	{
		if (!bVar0)
		{
			func_188(&(((*uParam0)[iParam1 /*34*/])->f_31), 0);
		}
	}
	else if (bVar0)
	{
		if (func_190(&(((*uParam0)[iParam1 /*34*/])->f_31)) < 1500)
		{
			return;
		}
		func_298(&(((*uParam0)[iParam1 /*34*/])->f_31));
	}
	func_1070(((*uParam0)[iParam1 /*34*/])->f_17, iVar1 == 1);
	func_1070(((*uParam0)[iParam1 /*34*/])->f_18, iVar1 == 2);
	func_1070(((*uParam0)[iParam1 /*34*/])->f_19, iVar1 == 3);
}

int func_1329(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 7:
		case 8:
			return 1;
	}
	return 0;
}

void func_1330(var uParam0, float fParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(uParam0, fParam1);
}

void func_1331(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_440(uParam0))
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

void func_1332(int iParam0, int iParam1, int iParam2)
{
	(Global_1951141->f_81[func_1170(iParam0, 1) /*12*/])->f_11 = ((Global_1951141->f_81[func_1170(iParam0, 1) /*12*/])->f_11 - ((Global_1951141->f_81[func_1170(iParam0, 1) /*12*/])->f_11 && iParam1));
}

bool func_1333(int iParam0, int iParam1)
{
	return ((Global_1951141->f_81[iParam0 /*12*/])->f_11 && iParam1) != 0;
}

void func_1334(int iParam0, int iParam1, int iParam2)
{
	(Global_1951141->f_81[iParam0 /*12*/])->f_11 = ((Global_1951141->f_81[iParam0 /*12*/])->f_11 - ((Global_1951141->f_81[iParam0 /*12*/])->f_11 && iParam1));
}

int func_1335(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (Global_1951141->f_2706.f_1 <= 0)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		Global_1951141->f_2706.f_2 = 0;
		Global_1951141->f_2706.f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			*(Global_1951141->f_2706.f_43[iVar0 /*2*/]) = { Var2 };
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 39)
		{
			Global_1951141->f_2706.f_3[iVar1] = 0;
			iVar1++;
		}
		return 1;
	}
	iVar0 = func_1544(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	Global_1951141->f_2706.f_2 = (Global_1951141->f_2706.f_2 - (Global_1951141->f_2706.f_2 && (Global_1951141->f_2706.f_43[iVar0 /*2*/])->f_1));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (func_1545(iVar1, (Global_1951141->f_2706.f_43[iVar0 /*2*/])->f_1))
		{
			func_1546(iVar1, (Global_1951141->f_2706.f_43[iVar0 /*2*/])->f_1);
		}
		iVar1++;
	}
	Global_1951141->f_2706.f_1 = (Global_1951141->f_2706.f_1 - 1);
	*(Global_1951141->f_2706.f_43[iVar0 /*2*/]) = { *(Global_1951141->f_2706.f_43[Global_1951141->f_2706.f_1 /*2*/]) };
	(Global_1951141->f_2706.f_43[Global_1951141->f_2706.f_1 /*2*/])->f_1 = 0;
	Global_1951141->f_2706.f_43[Global_1951141->f_2706.f_1 /*2*/] = 0;
	return 1;
}

bool func_1336(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_1547(iVar0, 1);
		if (!func_1548(iVar2, 2))
		{
		}
		else if (&Global_1951141->f_2706.f_3[iVar0] != 0)
		{
		}
		else
		{
			if (bParam0 && func_1549(iVar0) == -1)
			{
				func_1550(iVar0, 0);
				func_1551(Global_1951141->f_2760.f_2[(Global_1951141->f_2760 - 1) /*2*/], 2, 6);
			}
			func_1332(iVar2, 3, 6);
			Global_1951141->f_2627[iVar0 /*2*/] = 0;
			(Global_1951141->f_2627[iVar0 /*2*/])->f_1 = 0;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 > 0;
}

void func_1337(int iParam0)
{
	func_1171(iParam0, 8, 6);
}

int func_1338(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<15> Var3;
	struct<18> Var21;

	if (func_1552(&(Global_1951141->f_1055), 2))
	{
		return 0;
	}
	if (iParam1 == -2118203104)
	{
		iVar0 = func_1553(iParam0);
	}
	else if (iParam1 == -1811760631)
	{
		iVar0 = func_1554(iParam0);
	}
	else
	{
		return 0;
	}
	iVar1 = func_1555(uParam3, iParam1);
	bVar2 = func_1469(iVar0) != false;
	if (iVar1 == -1 && bVar2)
	{
		return 0;
	}
	if (bVar2)
	{
		if (bParam4)
		{
			func_1556(uParam2, uParam3, iParam1);
		}
		else
		{
			func_1557(uParam2, uParam3, iVar1);
		}
		return 1;
	}
	if (bParam4)
	{
		Var3.f_2 = -1;
		Var3.f_13 = 1065353216;
		Var3.f_14 = 1065353216;
		if (!func_1558(&Var3, iVar0, 0, 1, 6))
		{
			return 0;
		}
		if (iVar1 != -1 && Var3.f_3 == ((*uParam3)[iVar1 /*18*/])->f_3)
		{
			return 0;
		}
		func_1559(uParam2, uParam3, &Var3);
	}
	else if (iVar1 == -1)
	{
		func_1560(uParam2, uParam3, iVar0, 0, 1);
	}
	else
	{
		Var21.f_2 = -1;
		Var21.f_13 = 1065353216;
		Var21.f_14 = 1065353216;
		if (!func_1558(&Var21, iVar0, 0, 1, 6))
		{
			return 0;
		}
		*((*uParam3)[iVar1 /*18*/]) = { Var21 };
	}
	return 1;
}

void func_1339()
{
	Global_1951141->f_1054 = 0;
}

void func_1340(int iParam0)
{
	struct<34> Var0;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_1375(&(Global_1132968->f_5525.f_34[iParam0 /*3*/]), &Var0, 2, -1);
	func_1374(Var0, iParam0, 0);
}

void func_1341(int iParam0)
{
	struct<34> Var0;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_1373(func_1372(iParam0, 1), &Var0, 0, -1);
	func_1376(Var0, iParam0, 0);
}

void func_1342(int iParam0)
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
		func_1112(iParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_1306(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

bool func_1343(var uParam0, int iParam1)
{
	*uParam0 = Global_1234391->f_8113;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

int func_1344()
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

int func_1345(int iParam0)
{
	return func_1561(iParam0) + 30;
}

void func_1346(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { *(Global_1900718->f_1[iParam0 /*2*/]) };
	*(Global_1900718->f_1[iParam0 /*2*/]) = { *(Global_1900718->f_1[iParam1 /*2*/]) };
	*(Global_1900718->f_1[iParam1 /*2*/]) = { Var0 };
}

int func_1347(int iParam0)
{
	int iVar0;

	if (Global_1184439->f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1184439->f_129)
	{
		if (Global_1184439[iVar0 /*4*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1348(int iParam0)
{
	if (iParam0 == 395262693 || iParam0 == -933924539)
	{
		return 482206342;
	}
	return Global_524288->f_39792;
}

int func_1349(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case -504335712:
			if (func_1562(iParam1))
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 2;
			}
			break;
		case 395262693:
			iVar0 = 2;
			break;
		case -933924539:
			iVar0 = 0;
			break;
		default:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_1350(var uParam0, var uParam1)
{
	*uParam0 = { *uParam1 };
	uParam0->f_4 = uParam1->f_4;
	uParam0->f_5 = { uParam1->f_5 };
	uParam0->f_9 = uParam1->f_9;
	uParam0->f_11 = uParam1->f_14;
	if (!STREAMING::IS_MODEL_VALID(uParam0->f_11))
	{
		return 0;
	}
	uParam0->f_22 = func_1563(uParam0->f_11);
	if (uParam0->f_22 == 0)
	{
		return 0;
	}
	uParam0->f_12 = { uParam1->f_16 };
	uParam0->f_27 = uParam1->f_25;
	uParam0->f_20 = uParam1->f_24;
	uParam0->f_10 = 0;
	return 1;
}

int func_1351(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	iVar0 = func_674(bParam2);
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam0, uParam1, 24, 1))
	{
		return 0;
	}
	return 1;
}

int func_1352(var uParam0, var uParam1)
{
	*uParam0 = { *uParam1 };
	uParam0->f_4 = uParam1->f_4;
	uParam0->f_5 = { uParam1->f_5 };
	uParam0->f_9 = uParam1->f_9;
	uParam0->f_11 = uParam1->f_14;
	if (!STREAMING::IS_MODEL_VALID(uParam0->f_11))
	{
		return 0;
	}
	uParam0->f_22 = 0;
	uParam0->f_12 = { uParam1->f_15 };
	uParam0->f_20 = uParam1->f_23;
	uParam0->f_10 = 2;
	return 1;
}

int func_1353(int iParam0)
{
	var uVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	func_1564();
	Global_1903929->f_124.f_2 = 834733495;
	Global_1903929->f_124.f_3 = func_1565(iParam0);
	if (!DATAFILE::_DATAFILE_GET_BOOL(&uVar0, &(Global_1903929->f_124)))
	{
		return 0;
	}
	return uVar0;
}

void func_1354(var uParam0, int iParam1)
{
	func_1566(&(uParam0->f_20), iParam1);
}

int func_1355(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -742846258;
		case 2:
			return 131724934;
		case 3:
			return 325433051;
		case 4:
			return -1943296527;
		case 5:
			return 1586684911;
		case 6:
			return -1171161482;
		case 7:
			return 1038672528;
		case 8:
			return -1073329868;
		case 9:
			return 1263489075;
		case 10:
			return 966390205;
		case 11:
			return -2046198715;
		case 12:
			return 13;
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

bool func_1356(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_1357(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 39)
	{
		return false;
	}
	return ((Global_1951141->f_81[iParam0 /*12*/])->f_10 && iParam1) != 0;
}

Vector3 func_1358(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17172.f_54.f_644.f_1776;
	}
	return *((Global_17172.f_54.f_644.f_32[iParam1 /*120*/])->f_1.f_1[iParam0 /*3*/]);
}

void func_1359(int iParam0, int iParam1, int iParam2)
{
	(Global_1951141->f_81[iParam0 /*12*/])->f_11 = ((Global_1951141->f_81[iParam0 /*12*/])->f_11 || iParam1);
}

void func_1360(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

int func_1361(int iParam0, int iParam1)
{
	if (!func_691(iParam0, 0))
	{
		return func_1567(func_1202(iParam0), iParam1);
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

bool func_1362(int iParam0)
{
	return &Global_1951141->f_593[iParam0] > 0;
}

void func_1363(int iParam0)
{
	Global_1951141->f_593[iParam0] = &Global_1951141->f_593[iParam0] + 1;
}

int func_1364(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[5];
	int iVar32;
	int iVar33;
	int iVar34;
	struct<16> Var35;
	struct<16> Var51;

	if (func_1568(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_692(iParam0, joaat("default"));
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_986(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_1569(&Var1, &iVar32, iParam0, iVar0, iParam1, 1) || iVar32 < 1)
		{
			return 0;
		}
		iVar34 = -1;
		Var35.f_9 = 1;
		Var35.f_11 = -1591664384;
		iVar33 = 0;
		while (iVar33 < iVar32)
		{
			Var35 = { func_1570(iParam0, Var1[iVar33 /*6*/]) };
			Var35.f_12 = iParam2;
			iVar34 = func_1571(joaat("use"), &Var35, 1);
			if (iVar34 == -1)
			{
				return 0;
			}
			iVar33++;
		}
		if (iVar34 != -1)
		{
			Var51.f_7 = -142743235;
			Var51 = iParam3;
			Var51.f_7 = iParam2;
			func_1572(iVar34, Var51);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_674(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

int func_1365(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;
	struct<13> Var15;
	struct<16> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_1568(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_995(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_986(bParam6))
	{
		iVar14 = -1;
		if (func_23() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_1571(joaat("use"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_1572(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_674(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1366(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1367(int iParam0)
{
	if (func_1366(iParam0))
	{
		return 1;
	}
	else if (func_1573(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_1368(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 <= 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_972(1);
	}
	switch (iParam2)
	{
		case 0:
			Global_1954472->f_1331.f_26[iParam0] = fParam1;
			break;
		case 1:
			Global_1954472->f_1465.f_2.f_26[iParam0] = fParam1;
			break;
		default:
			break;
	}
}

int func_1369(int iParam0)
{
	int iVar0;

	iVar0 = func_1370(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 35)
	{
		return 0;
	}
	return 1;
}

int func_1370(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2094367662:
			return 18;
		case -1799662290:
			return 5;
		case -1756972389:
			return 10;
		case -1721456649:
			return 20;
		case -1505156133:
			return 33;
		case -1443085621:
			return 32;
		case -1415025746:
			return 34;
		case -1296457610:
			return 3;
		case -1214886674:
			return 24;
		case -950892868:
			return 26;
		case -910204339:
			return 14;
		case -806881894:
			return 21;
		case -556609435:
			return 25;
		case -490770640:
			return 30;
		case -36524866:
			return 22;
		case 0:
			return 0;
		case 83146574:
			return 31;
		case 98090593:
			return 11;
		case 115034433:
			return 12;
		case 396773658:
			return 1;
		case 459036629:
			return 16;
		case 610102849:
			return 13;
		case 615198061:
			return 19;
		case 771930716:
			return 4;
		case 915626679:
			return 2;
		case 996070251:
			return 8;
		case 1098820611:
			return 15;
		case 1136837330:
			return 23;
		case 1581755436:
			return 7;
		case 1670807098:
			return 27;
		case 1777305156:
			return 6;
		case 1878949572:
			return 29;
		case 1935456893:
			return 17;
		case 2067900487:
			return 9;
		case 2132497367:
			return 28;
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

bool func_1371(int iParam0)
{
	if (!func_1574(iParam0))
	{
		return false;
	}
	return iParam0 == 0;
}

int func_1372(int iParam0, bool bParam1)
{
	struct<4> Var0;

	Var0 = { func_987(bParam1) };
	return func_1576(Var0, func_1575(iParam0), 0, bParam1);
}

int func_1373(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_1577())
	{
		return 0;
	}
	if (!func_691(iParam0, 0))
	{
		return 0;
	}
	return func_1579(func_1578(iParam0), uParam1, iParam2, iParam3);
}

int func_1374(struct<34> Param0, int iParam34, bool bParam35)
{
	if (!func_1574(iParam34))
	{
		return 0;
	}
	if (func_1580(Param0))
	{
		func_1581();
	}
	func_1582(iParam34);
	if (bParam35 && func_1583())
	{
		return 0;
	}
	func_1584(iParam34);
	func_1585(&Param0);
	func_1586(iParam34, 1);
	return 1;
}

int func_1375(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_1577())
	{
		return 0;
	}
	return func_1579(iParam0, uParam1, iParam2, iParam3);
}

int func_1376(struct<34> Param0, int iParam34, bool bParam35)
{
	if (!func_1574(iParam34))
	{
		return 0;
	}
	func_1587(Param0, iParam34);
	if (bParam35 && func_1583())
	{
		return 0;
	}
	func_1588(Param0, iParam34);
	func_1585(&Param0);
	func_1586(iParam34, 1);
	return 1;
}

int func_1377(int iParam0)
{
	if (func_397(&(Global_1954472->f_1653), iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_1378(int iParam0)
{
	if (func_398(&(Global_1954472->f_1653), iParam0, 1))
	{
		return 1;
	}
	return 0;
}

void func_1379(float fParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (fParam0 > 0f && func_1589(iVar0))
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if ((PLAYER::_0xB16223CB7DA965F0(iVar0) && fParam0 > 0f) && !bParam2)
	{
		return;
	}
	if (fParam0 == 0f)
	{
		return;
	}
	fVar2 = PLAYER::_0xAB3773E7AA1E9DCC(iVar0);
	if (fParam0 < 0f && bParam1 == 1)
	{
		bParam1 = false;
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, 1f);
	}
	if (fParam0 > 0f)
	{
		PLAYER::_0x51345AE20F22C261(iVar0, fParam0, 0, 0, 1);
	}
	else
	{
		PLAYER::_0x200114E99552462B(iVar0, fParam0, 0);
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, fVar2);
	}
}

int func_1380(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_2;
		case 1:
			return uParam0->f_10;
		case 2:
			return uParam0->f_6;
		default:
			break;
	}
	return 1;
}

float func_1381(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_3;
		case 1:
			return uParam0->f_11;
		case 2:
			return uParam0->f_7;
		default:
			break;
	}
	return 0f;
}

void func_1382(int iParam0, float fParam1)
{
	Global_17172.f_54.f_2438.f_24[iParam0 /*3*/] = fParam1;
}

int func_1383(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_972(2);
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_1590(iVar0, iParam0, fParam1))
	{
		if (bParam2)
		{
			if (fParam1 >= 100f)
			{
				AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
			}
		}
		if (bParam3)
		{
			func_1591(iParam0, 7000, iParam5);
		}
		func_1592(iVar0, iParam0, fParam1);
		func_1593(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

void func_1384()
{
	if (!Global_1954472->f_1331.f_85)
	{
		return;
	}
	Global_1954472->f_1331.f_85 = 0;
}

void func_1385()
{
	if (!Global_1954472->f_1331.f_92)
	{
		return;
	}
	Global_1954472->f_1331.f_92 = 0;
}

void func_1386()
{
	if (!Global_1954472->f_1331.f_89)
	{
		return;
	}
	Global_1954472->f_1331.f_89 = 0;
}

void func_1387()
{
	char* sVar0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;

	sVar0 = func_1594();
	sVar1 = func_1595();
	bVar2 = (((Global_1954472->f_1331.f_89 && Global_1954472->f_1331.f_92) || (Global_1954472->f_1331.f_89 && Global_1954472->f_1331.f_85)) || (Global_1954472->f_1331.f_85 && Global_1954472->f_1331.f_92));
	bVar3 = (Global_1954472->f_1331.f_89 || Global_1954472->f_1331.f_85);
	if (Global_1954472->f_1331.f_92 && !func_1596())
	{
		if (!Global_1954472->f_1331.f_93)
		{
			GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
			Global_1954472->f_1331.f_93 = 1;
		}
	}
	else if (Global_1954472->f_1331.f_93)
	{
		GRAPHICS::_0xC5CB91D65852ED7E(sVar0);
		Global_1954472->f_1331.f_93 = 0;
	}
	if (bVar3)
	{
		fVar4 = ((MISC::GET_FRAME_TIME() * 1000f) / 2000f);
		fVar5 = (1f * fVar4);
		fVar6 = (-1f * fVar4);
		if (bVar2)
		{
			Global_1954472->f_1331.f_95 = (Global_1954472->f_1331.f_95 + fVar5);
			Global_1954472->f_1331.f_91 = (Global_1954472->f_1331.f_91 + fVar6);
			Global_1954472->f_1331.f_87 = (Global_1954472->f_1331.f_87 + fVar6);
		}
		else if (Global_1954472->f_1331.f_89)
		{
			Global_1954472->f_1331.f_95 = (Global_1954472->f_1331.f_95 + fVar6);
			Global_1954472->f_1331.f_91 = (Global_1954472->f_1331.f_91 + fVar5);
			Global_1954472->f_1331.f_87 = (Global_1954472->f_1331.f_87 + fVar6);
		}
		else if (Global_1954472->f_1331.f_85)
		{
			Global_1954472->f_1331.f_95 = (Global_1954472->f_1331.f_95 + fVar6);
			Global_1954472->f_1331.f_91 = (Global_1954472->f_1331.f_91 + fVar6);
			Global_1954472->f_1331.f_87 = (Global_1954472->f_1331.f_87 + fVar5);
		}
		Global_1954472->f_1331.f_95 = func_1080(Global_1954472->f_1331.f_95, 0f, 1f);
		Global_1954472->f_1331.f_87 = func_1080(Global_1954472->f_1331.f_87, 0f, 1f);
		Global_1954472->f_1331.f_91 = func_1080(Global_1954472->f_1331.f_91, 0f, 1f);
		if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
		{
			GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
		}
		GRAPHICS::_0xF972F0AB16DC5260(sVar1, 1, Global_1954472->f_1331.f_91);
		GRAPHICS::_0xF972F0AB16DC5260(sVar1, 2, Global_1954472->f_1331.f_87);
		GRAPHICS::_0xF972F0AB16DC5260(sVar1, 3, Global_1954472->f_1331.f_95);
	}
	else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
	{
		Global_1954472->f_1331.f_95 = 0f;
		Global_1954472->f_1331.f_91 = 0f;
		Global_1954472->f_1331.f_87 = 0f;
		GRAPHICS::_0xC5CB91D65852ED7E(sVar1);
	}
	if (Global_1954472->f_1331.f_88)
	{
		fVar7 = PLAYER::_0x0317C947D062854E(&(Global_1275573->f_154[&Global_1275573]));
		fVar8 = (IntToFloat(PED::GET_PED_MAX_HEALTH(Global_1275573->f_8)) * 0.1f);
		func_1597(fVar7, fVar8);
	}
	else
	{
		func_1598();
	}
}

int func_1388(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1f)
	{
		if (func_1366(iParam0))
		{
			fParam1 = 30f;
		}
		else
		{
			fParam1 = 30f;
		}
	}
	else if (fParam1 <= 0f)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				sVar0 = func_1599(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_1600(-1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, iParam3);
			Global_17172.f_54.f_2438.f_34[0 /*2*/] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_1599(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_1601(1775828486);
			func_1602(-1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, iParam3);
			Global_17172.f_54.f_2438.f_34[1 /*2*/] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_1599(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_1603(-1, 0);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, iParam3);
			Global_17172.f_54.f_2438.f_34[2 /*2*/] = fParam1;
			break;
		case 19:
			func_1601(350943398);
			func_1604(0, 1, 1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, iParam3);
			(Global_17172.f_54.f_2438.f_34[0 /*2*/])->f_1 = fParam1;
			break;
		case 18:
			func_1604(1, 1, 1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, iParam3);
			(Global_17172.f_54.f_2438.f_34[1 /*2*/])->f_1 = fParam1;
			break;
		case 20:
			func_1604(2, 1, 1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar1, iParam0, fParam1, iParam3);
			(Global_17172.f_54.f_2438.f_34[2 /*2*/])->f_1 = fParam1;
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_1389(int iParam0)
{
	return func_1361(iParam0, 1279601681);
}

int func_1390(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_1605(&uParam0, iParam4, bParam5, iParam6);
}

void func_1391(var uParam0, var uParam1)
{
	func_1012(uParam0, 2);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam1, true);
	WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(*uParam1, false);
	WEAPON::_0x431240A58484D5D0(*uParam1, 0);
	WEAPON::_0x45E57FDD531C9477(*uParam1, 0);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam1, 1269650476);
	if (func_1398(uParam0, uParam1, 0))
	{
	}
	func_1606(uParam1);
	switch (uParam1->f_10)
	{
		case joaat("guard"):
			PED::SET_PED_COMBAT_ABILITY(*uParam1, 2);
			PED::SET_PED_ACCURACY(*uParam1, 25);
			break;
		case joaat("search"):
			PED::SET_PED_COMBAT_ABILITY(*uParam1, 1);
			PED::SET_PED_ACCURACY(*uParam1, 10);
			WEAPON::_0x94A3C1B804D291EC(*uParam1, 1, 0, 1, 1);
			WEAPON::SET_CURRENT_PED_WEAPON(*uParam1, joaat("weapon_unarmed"), false, 0, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(*uParam1, joaat("weapon_unarmed"), false, 1, false, false);
			break;
		case joaat("bandit"):
			PED::SET_PED_COMBAT_ABILITY(*uParam1, 1);
			PED::SET_PED_ACCURACY(*uParam1, 10);
			break;
		case joaat("defensive"):
			PED::SET_PED_COMBAT_ABILITY(*uParam1, 2);
			PED::SET_PED_ACCURACY(*uParam1, 30);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam1, uParam1->f_5, 4f, 0, 0, 0);
			break;
		case -862695229:
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam1, 58, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam1, 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam1, 17, false);
			PED::SET_PED_COMBAT_ABILITY(*uParam1, 0);
			PED::SET_PED_ACCURACY(*uParam1, 0);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam1, uParam1->f_5, 4f, 0, 0, 0);
			if (uParam1->f_16 == 0)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam1, 747813878);
			}
			else
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam1, -40378879);
			}
			break;
		case -1346830927:
			PED::SET_PED_COMBAT_ABILITY(*uParam1, 0);
			PED::SET_PED_ACCURACY(*uParam1, 5);
			break;
		case -198742249:
			func_499(*uParam1, 0, 0);
			break;
		default:
			break;
	}
}

bool func_1392(int iParam0)
{
	return (Local_50[iParam0 /*6*/])->f_4 > Local_243.f_1420;
}

int func_1393(vector3 vParam0, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	fVar1 = iParam3;
	iVar4 = 255;
	fVar2 = iParam3;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3))
		{
		}
		else if (func_1392(iVar0))
		{
		}
		else if (bParam6 && !func_1607(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3), 1, 1))
		{
		}
		else
		{
			iVar5 = PLAYER::GET_PLAYER_PED(iVar3);
			if ((iParam4 == 0 || iParam5 == 0) || PED::GET_RELATIONSHIP_BETWEEN_PEDS(iParam5, iVar5) == iParam4)
			{
				fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar5, false, false), vParam0);
				if (fVar1 < fVar2)
				{
					iVar4 = iVar3;
					fVar2 = fVar1;
				}
			}
		}
		iVar0++;
	}
	return iVar4;
}

float func_1394(int iParam0)
{
	switch (iParam0)
	{
		case 1404758079:
			return 150f;
		case joaat("defensive"):
			return 250f;
		case joaat("guard"):
			return 250f;
		case -931055996:
			return 250f;
		case -1347265301:
			return 250f;
		case 200161421:
			return 400f;
		case -1553326850:
			return 250f;
		case -1346830927:
			return 600f;
		case -66644432:
			return 600f;
		default:
			break;
	}
	return 0f;
}

bool func_1395(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (bParam7)
	{
		return BUILTIN::VDIST2(vParam0, vParam3) <= (fParam6 * fParam6);
	}
	return func_1472(vParam0, vParam3) <= (fParam6 * fParam6);
}

float func_1396(int iParam0)
{
	switch (iParam0)
	{
		case 1404758079:
			return 50f;
		case joaat("defensive"):
			return 100f;
		case joaat("guard"):
			return 100f;
		case -931055996:
			return 100f;
		case -1347265301:
			return 100f;
		case 200161421:
			return 100f;
		case -1553326850:
			return 100f;
		case -1346830927:
			return 100f;
		case -66644432:
			return 100f;
		default:
			break;
	}
	return 0f;
}

int func_1397(int iParam0)
{
	if ((((iParam0 == joaat("bandit") || iParam0 == joaat("guard")) || iParam0 == joaat("defensive")) || iParam0 == -862695229) || iParam0 == joaat("search"))
	{
		return 0;
	}
	switch (iParam0)
	{
		case -1346830927:
			return 1;
		default:
			break;
	}
	return 1;
}

int func_1398(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (uParam1->f_9 == 0)
	{
		return 1;
	}
	if ((!func_1013(uParam0, 256) && PED::IS_PED_USING_ANY_SCENARIO(*uParam1)) && PED::_0x34D6AC1157C8226C(*uParam1, uParam1->f_9))
	{
		return 1;
	}
	if (func_1013(uParam0, 256) && PED::_0x9C54041BB66BCF9E(*uParam1, TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(uParam1->f_5, uParam1->f_9, 2f, 0, 0)))
	{
		return 1;
	}
	if (func_1295(*uParam1, -1098463898) || func_1295(*uParam1, -76381094))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
	{
		return 0;
	}
	if (func_1013(uParam0, 256))
	{
		iVar0 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(uParam1->f_5, uParam1->f_9, 2f, 0, 0);
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar0))
		{
			TASK::_TASK_USE_SCENARIO_POINT(*uParam1, iVar0, 0, -1, !bParam2, bParam2, 0, 0, -1082130432, 0);
		}
	}
	else
	{
		TASK::_TASK_START_SCENARIO_IN_PLACE(*uParam1, uParam1->f_9, -1, !bParam2, 0, -1082130432, 0);
	}
	return 0;
}

int func_1399(var uParam0, int iParam1)
{
	if (!func_160(uParam0))
	{
		func_188(uParam0, 0);
		return 0;
	}
	if (func_1223(uParam0, iParam1))
	{
		func_298(uParam0);
		return 1;
	}
	return 0;
}

bool func_1400(var uParam0)
{
	return (func_1097(Local_2503.f_42[uParam0->f_15 /*56*/], 16) || func_1097(Local_2503.f_42[uParam0->f_15 /*56*/], 8));
}

void func_1401(int iParam0, var uParam1)
{
	struct<10> Var0;

	if (func_1097(Local_2503.f_42[uParam1->f_15 /*56*/], iParam0))
	{
		return;
	}
	Var0.f_9 = 255;
	Var0.f_5 = func_1293(0, 8);
	Var0.f_6 = uParam1->f_15;
	Var0.f_7 = uParam1->f_16;
	Var0.f_8 = iParam0;
	func_1294(Var0, 4);
}

int func_1402(int iParam0, int iParam1)
{
	if (!PED::IS_PED_FACING_PED(iParam0, iParam1, 80f) && ENTITY::GET_ENTITY_SPEED(Global_34) >= 1f)
	{
		return 1;
	}
	return 0;
}

int func_1403(int iParam0, int iParam1, bool bParam2)
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

int func_1404(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_23() == -1)
	{
		if (func_1204(iParam0) && func_1608(iParam0))
		{
			func_1609(iParam0, iParam1, 1, &bParam2, iParam3);
			return 0;
		}
	}
	else if (iParam0 == 1259508039)
	{
		bParam2 = true;
	}
	else if (iParam0 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	return 1;
}

int func_1405(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_1610(iParam0, iParam1);
	Var0 = { func_694(iParam0, 0, 1) };
	iVar5 = func_1205(iParam0, &Var0, 0, 0);
	iVar6 = func_392(iParam0, 0, 0, 0);
	if (iVar5 > 1 && (iVar6 + iParam2) >= iVar5)
	{
		if (func_1361(iParam0, -2051813666))
		{
			func_348(672, 1);
		}
		else if (func_23() == -1)
		{
			func_348(671, 0);
		}
	}
	if (func_985(iParam0, &Var0, *iParam1, 0, 0, -1, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_1406(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	if (!func_1611())
	{
		return;
	}
	switch (func_1612(iParam0, -949239683))
	{
		case -1565009253:
		case -1420737577:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1939067->f_70.f_5 = 1;
			Global_1939067->f_70.f_6 = 0;
			Global_1939067->f_70.f_1 = iParam0;
			break;
	}
}

int func_1407(int iParam0, int iParam1)
{
	if (!func_691(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

int func_1408(int iParam0)
{
	if (!func_1613(iParam0))
	{
		return 0;
	}
	return func_1614(iParam0);
}

void func_1409(int iParam0)
{
	if (!func_1613(iParam0))
	{
		return;
	}
	func_1615(iParam0);
	func_1616(iParam0);
}

void func_1410(int iParam0)
{
	if (func_1361(iParam0, -1522723129))
	{
		func_1617(-848633709, 0, 255, 0, 0);
	}
	else if (func_1361(iParam0, -283942357))
	{
		func_1617(-981153234, 0, 255, 0, 0);
	}
	else if (func_1361(iParam0, 683680997))
	{
		func_1617(-756350192, 0, 255, 0, 0);
	}
	else if (func_1361(iParam0, 1307628809))
	{
		func_1617(603094518, 0, 255, 0, 0);
	}
}

int func_1411(int iParam0, bool bParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case -1639263599: /* GXTEntry: "Throwing Knife" */
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case -1860710511:
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 1507636870:
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 1828724907:
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 1222378998: /* GXTEntry: "Improved Throwing Knife" */
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 2074469742: /* GXTEntry: "Poison Throwing Knife" */
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 1270940175:
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case -1857826511:
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 480079517: /* GXTEntry: "Dynamite" */
			iVar0 = joaat("weapon_thrown_dynamite");
			break;
		case 840671577: /* GXTEntry: "Dynamite - Volatile" */
			iVar0 = joaat("weapon_thrown_dynamite");
			break;
		case joaat("ammo_molotov"):
			iVar0 = joaat("weapon_thrown_molotov");
			break;
		case -2006166057: /* GXTEntry: "Fire Bottle - Volatile" */
			iVar0 = joaat("weapon_thrown_molotov");
			break;
		case 1235846615: /* GXTEntry: "Tomahawk" */
			iVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case -228768324: /* GXTEntry: "Ancient Tomahawk" */
			iVar0 = joaat("weapon_thrown_tomahawk_ancient");
			break;
		case -1411922943: /* GXTEntry: "Tomahawk - Homing" */
			iVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case -834103244: /* GXTEntry: "Tomahawk - Improved" */
			iVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case 34372170: /* GXTEntry: "Bolas" */
			iVar0 = 1151374672; /* GXTEntry: "Bolas" */
			break;
		case 963726415:
			iVar0 = -577893115;
			break;
		case 424030678: /* GXTEntry: "Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet");
			break;
		case 446901936: /* GXTEntry: "Hunter Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_hunter");
			break;
		case -1092841802: /* GXTEntry: "Rusted Hunter Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_hunter_rusted");
			break;
		case -1452241321: /* GXTEntry: "Stone Hatchet" */
			iVar0 = joaat("weapon_melee_ancient_hatchet");
			break;
		case -1188697038: /* GXTEntry: "Cleaver" */
			iVar0 = joaat("weapon_melee_cleaver");
			break;
		case 1671758975: /* GXTEntry: "Double Bit Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_double_bit");
			break;
		case -893514737: /* GXTEntry: "Rusted Double Bit Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_double_bit_rusted");
			break;
		case -2063089161: /* GXTEntry: "Hewing Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_hewing");
			break;
		case -452897925: /* GXTEntry: "Viking Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_viking");
			break;
		default:
			break;
	}
	if (func_691(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1618(iVar0) || func_1619(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_1412(int iParam0, bool bParam1)
{
	if (!func_691(iParam0, 0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

void func_1413(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_13 != -1)
	{
		return;
	}
	if (!func_1468(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, true);
}

int func_1414(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var27;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, 0))
	{
		Var0 = { func_694(iParam0, 0, 1) };
		if (func_991(iParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_992(iParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_695(iParam0, Var0, Var0.f_4, 0) };
				func_1365(iParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_986(0))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, 0))
		{
			return 0;
		}
		func_1415(WEAPON::_0x5C2EA6C44F515F34(iParam0), iParam1, iParam6);
		func_1620(iParam0, iParam1);
		return 1;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, 0))
	{
		return 0;
	}
	if (iParam1 > 0)
	{
	}
	WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	return 1;
}

int func_1415(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_690(iParam0))
	{
		return 0;
	}
	if (!func_986(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_34, iParam0, iParam1, iParam2);
	return 1;
}

int func_1416(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;

	iVar0 = func_1412(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_23() == -1)
		{
			func_1413(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1621(iVar0);
			}
		}
		if (!func_985(iParam0, &uVar1, 1, 0, 0, -1, 0))
		{
			func_1609(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1622(iVar0);
			if (WEAPON::_0x6AD66548840472E5(iVar0))
			{
				func_1414(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("weapon_fishingrod") || WEAPON::_0xC853230E76A152DF(iVar0))
			{
				func_1414(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x6E4E1A82081EABED(iVar0))
			{
				func_1414(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x959383DCD42040DA(iVar0))
			{
				if (iVar0 == joaat("weapon_melee_knife_john") && !func_1623())
				{
					return 0;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!func_1624(iVar0))
				{
					func_1414(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_1414(iVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
			{
				iVar7 = func_1094(Global_34, 2, 0, 1);
				if ((((func_1468(iVar7) && !Global_26386) && iVar7 != iVar0) && !func_1091(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 1)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_34, iVar7);
				}
				if (func_1468(iVar7) && func_1091(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 1))
				{
					if (!func_1414(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return 0;
					}
				}
				else if (!func_1414(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return 0;
				}
			}
			else if (!func_1414(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return 0;
			}
		}
	}
	else
	{
		return 0;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		func_348(513, 1);
	}
	return 1;
}

int func_1417(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_690(iParam0))
	{
		return 0;
	}
	iVar4 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	if (func_1468(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_34, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (iVar4 == joaat("weapon_bow"))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_GET_WEAPON_CLIP_SIZE(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_1427(func_1625(iParam0), func_1426(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_986(0))
	{
		if (func_1415(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_393(iParam0, *iParam1, iParam2);
	}
	return 0;
}

int func_1418()
{
	return 0;
}

int func_1419(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	if (func_23() == 0)
	{
		func_546(iParam0, 0);
		return 0;
	}
	iVar0 = func_1626(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_1627(iVar0, sParam4, iParam5, 0);
	}
	func_1628(iVar0, bParam1, fParam2, iParam3);
	return iVar0;
}

void func_1420(int iParam0)
{
}

void func_1421(int iParam0)
{
}

void func_1422(int iParam0)
{
}

void func_1423(int iParam0)
{
}

void func_1424()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-1278339625) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1278339625, -1316535105, 1);
	}
}

void func_1425(int iParam0, int iParam1)
{
	var uVar0;

	func_1436(iParam0, iParam1, &uVar0);
}

int func_1426(int iParam0)
{
	int iVar0;

	if (!func_691(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_1629(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

void func_1427(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_629(iParam0, &iVar0, &iVar1);
	if (!func_630(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_896(iParam0, 1024))
	{
		return;
	}
	func_631(iVar0, iVar1);
	(Global_1904613->f_31[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	((Global_1904613->f_31[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_1428(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_629(iParam0, &iVar0, &iVar1);
	if (!func_630(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_896(iParam0, 1024))
	{
		return;
	}
	func_631(iVar0, iVar1);
	(Global_1904613->f_31[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		((Global_1904613->f_31[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 1;
	}
	else
	{
		((Global_1904613->f_31[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 5;
	}
}

void func_1429(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393: /* GXTEntry: "Opened Cigarettes" */
			*iParam0 = -885810591; /* GXTEntry: "Premium Cigarettes" */
			break;
		case 1358243310: /* GXTEntry: "Opened Cigarettes" */
			*iParam0 = 1463786584; /* GXTEntry: "Cigarettes" */
			break;
		case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
			*iParam0 = 206762213; /* GXTEntry: "Cocaine Gum" */
			break;
	}
}

void func_1430(int iParam0)
{
	if (func_23() != -1)
	{
		return;
	}
}

int func_1431()
{
	if (INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return 0;
	}
	return INVENTORY::_0xFC7563F482781A3D();
}

struct<2> func_1432(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_691(iParam0, 0))
	{
		return Var0;
	}
	if (func_1361(iParam0, -305066475))
	{
		if (func_23() == -1)
		{
			if (func_1361(iParam0, -537818634))
			{
				return func_505(189951448);
			}
			else
			{
				return func_505(1176172851);
			}
		}
	}
	else if (func_1361(iParam0, -537818634))
	{
		return func_505(-963660207);
	}
	if (func_1361(iParam0, 2084895747))
	{
		return func_505(1694039471);
	}
	return Var2;
}

void func_1433(int iParam0)
{
	switch (iParam0)
	{
		case 236757114: /* GXTEntry: "Flight Feather" */
			break;
	}
}

void func_1434(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_1630(Global_1902942->f_37);
	func_1632(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1631(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_1435(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	char* sVar14;
	char* sVar15;
	int iVar16;
	char* sVar17;
	int iVar18;
	char* sVar19;
	char cVar20[128];

	if (!func_691(iParam0, 0))
	{
		return;
	}
	else if (iParam0 == 1807503187)
	{
		return;
	}
	else if (iParam1 == 0)
	{
		return;
	}
	if (!func_1633() || bParam6)
	{
		func_1634(iParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_1635(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_1635(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_1407(iParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_988(iParam0);
	iVar10 = 0;
	iVar11 = joaat("inventory");
	if (((((((iVar6 == joaat("ammo") && iParam0 != 424030678) && iParam0 != -1188697038) && iParam0 != 446901936) && iParam0 != -228768324) && iParam0 != 34372170) && iParam0 != 963726415) && iParam0 != 1701457723)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	iVar12 = func_873(iParam0);
	if (((((((iVar6 == -1013984273 || iVar6 == 658570475) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_1636(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (bParam5)
	{
		Var7 = "ITEMTYPE_ORDERED_ITEM";
		Var7.f_1 = "itemtype_textures";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar13 = joaat("COLOR_PURE_WHITE");
	sVar14 = "Transaction_Positive";
	sVar15 = "Transaction_Feed_Sounds";
	iVar16 = 0;
	if (bVar0)
	{
		iVar13 = 619977481;
		sVar14 = "Transaction_Negative";
		iVar16 = 1;
	}
	if (func_1361(iParam0, 474910316))
	{
		sVar17 = func_1637(iParam0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar17))
		{
			sVar14 = sVar17;
			sVar15 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = -856358433;
		}
		else
		{
			iVar13 = -1905433004;
		}
	}
	if (func_1361(iParam0, 1816585950))
	{
		iVar13 = 76603059;
	}
	iVar18 = func_1426(iParam0);
	if ((func_1638(iVar12) && func_1361(iParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_1639(iParam0);
	}
	sVar19 = func_824(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, iVar18), iVar1), iVar13);
	if (((((iParam1 == 1 || func_1361(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar19 = MISC::_CREATE_VAR_STRING(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && iParam0 != -1713496139) && iParam0 != 1326838792) && iParam0 != -230310728) || ((iVar12 == 231148558 && iParam0 != 1733464892) && iParam0 != -598283164)) || (iVar12 == 252325943 && iParam0 != -860557048)) || (iVar12 == -636562458 && iParam0 != -2087489409))
	{
		sVar19 = MISC::_CREATE_VAR_STRING(0, func_1640(iParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		if (!func_1361(iParam0, 920823793))
		{
			StringCopy(&cVar20, "", 128);
			if (func_1641(iParam0, &cVar20))
			{
				sVar19 = func_1453(func_1642(cVar20), joaat("COLOR_PURE_WHITE"));
			}
		}
	}
	func_1632(sVar19, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

void func_1436(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870: /* GXTEntry: "Revolver Cartridges - Regular" */
			*iParam1 = 1802325493;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case -1202134084: /* GXTEntry: "Opened Revolver Cartridges" */
			*iParam1 = -864693164;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case 1297050066: /* GXTEntry: "Revolver Cartridges - Express" */
			*iParam1 = -603289736;
			*uParam2 = 1232099469; /* GXTEntry: "Revolver Cartridges - Express" */
			break;
		case -1780177928: /* GXTEntry: "Revolver Cartridges - High Velocity" */
			*iParam1 = -1803237008;
			*uParam2 = -2084181920; /* GXTEntry: "Revolver Cartridges - High Velocity" */
			break;
		case -1467836497: /* GXTEntry: "Pistol Cartridges - Regular" */
			*iParam1 = -1175521284;
			*uParam2 = joaat("ammo_pistol");
			break;
		case 1723805622: /* GXTEntry: "Opened Pistol Cartridges" */
			*iParam1 = -1559549888;
			*uParam2 = joaat("ammo_pistol");
			break;
		case -153287664: /* GXTEntry: "Pistol Cartridges - Express" */
			*iParam1 = -1650796693;
			*uParam2 = 836939099; /* GXTEntry: "Pistol Cartridges - Express" */
			break;
		case 1845082736: /* GXTEntry: "Pistol Cartridges - High Velocity" */
			*iParam1 = -1521597660;
			*uParam2 = -1411815376; /* GXTEntry: "Pistol Cartridges - High Velocity" */
			break;
		case 406755377: /* GXTEntry: "Rifle Cartridges - Regular" */
			*iParam1 = -1288829256;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 1469029564: /* GXTEntry: "Opened Rifle Cartridges" */
			*iParam1 = 1393841762;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 45760211: /* GXTEntry: "Rifle Cartridges - Express" */
			*iParam1 = -851229814;
			*uParam2 = 1654725195; /* GXTEntry: "Rifle Cartridges - Express" */
			break;
		case -276295943: /* GXTEntry: "Rifle Cartridges - High Velocity" */
			*iParam1 = 914704115;
			*uParam2 = 1858824185; /* GXTEntry: "Rifle Cartridges - High Velocity" */
			break;
		case -2029793397: /* GXTEntry: "Repeater Cartridges - Regular" */
			*iParam1 = -219896679;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case 2120467495:
			*iParam1 = 516838334;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case -2075613923: /* GXTEntry: "Repeater Cartridges - Express" */
			*iParam1 = -385817936;
			*uParam2 = -578347576; /* GXTEntry: "Repeater Cartridges - Express" */
			break;
		case 122656217: /* GXTEntry: "Repeater Cartridges - High Velocity" */
			*iParam1 = 1192843172;
			*uParam2 = 231465488; /* GXTEntry: "Repeater Cartridges - High Velocity" */
			break;
		case 2107187484: /* GXTEntry: "Shotgun Shells - Regular" */
			*iParam1 = 954871696;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case -791844268: /* GXTEntry: "Opened Shotgun Shells" */
			*iParam1 = -1217273132;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case 305770744: /* GXTEntry: "Shotgun - Slug" */
			*iParam1 = -2087227528;
			*uParam2 = 314966081; /* GXTEntry: "Shotgun - Slug" */
			break;
		case 550900979: /* GXTEntry: "Rifle Cartridges - Varmint" */
			*iParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

void func_1437(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

void func_1438(struct<2> Param0, int iParam2)
{
	if (!func_73(Param0))
	{
		func_1145(Global_1900718->f_1[iParam2 /*2*/]);
	}
	else
	{
		*(Global_1900718->f_1[iParam2 /*2*/]) = { Param0 };
	}
	func_1040(Param0, 0, 1, -1);
}

int func_1439(struct<2> Param0, struct<2> Param2, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_73(Param0))
	{
		return 0;
	}
	if (!func_73(Param2))
	{
		return 1;
	}
	iVar0 = func_646(Param0);
	iVar1 = func_646(Param2);
	if (iVar1 == iVar0)
	{
		if (bParam4)
		{
			return 1;
		}
	}
	if (iVar1 == 2 || iVar1 == 7)
	{
		if (bParam4 && (iVar0 == 2 || iVar0 == 7))
		{
			return 1;
		}
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 7)
	{
		return 1;
	}
	if (iVar1 == 6)
	{
		return 0;
	}
	if (iVar0 == 6)
	{
		return 1;
	}
	if (iVar1 == 5)
	{
		return 0;
	}
	if (iVar0 == 5)
	{
		return 1;
	}
	if (iVar1 == 3)
	{
		if (bParam4 && iVar0 == 3)
		{
			return 1;
		}
		return 0;
	}
	if (iVar0 == 3)
	{
		return 1;
	}
	if (iVar1 == 4)
	{
		if (bParam4 && iVar0 == 4)
		{
			return 1;
		}
		return 0;
	}
	if (iVar0 == 4)
	{
		return 1;
	}
	return 0;
}

int func_1440(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_1643(iParam0))
	{
		return 0;
	}
	if (func_1644(iParam0, uParam1, &uVar0))
	{
		func_1645(iParam0, &uVar0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_1441(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	if (Global_1184439->f_129 >= 32)
	{
		Global_1184439->f_129 = 32;
		return;
	}
	if (iParam1 >= Global_1184439->f_129)
	{
		iParam1 = -1;
	}
	if (iParam1 <= -1)
	{
		*((*Global_1184439)[Global_1184439->f_129 /*4*/]) = { *uParam0 };
		Global_1184439->f_129++;
		return;
	}
	iVar0 = iParam1;
	iVar1 = (Global_1184439->f_129 - 1);
	Var2.f_1 = -1;
	Var2.f_1.f_1 = -1;
	while (iVar1 >= iVar0)
	{
		Var2 = { *((*Global_1184439)[iVar1 /*4*/]) };
		*((*Global_1184439)[iVar1 /*4*/]) = { *((*Global_1184439)[iVar1 + 1 /*4*/]) };
		*((*Global_1184439)[iVar1 + 1 /*4*/]) = { Var2 };
		iVar1 = (iVar1 - 1);
	}
	*((*Global_1184439)[iParam1 /*4*/]) = { *uParam0 };
	Global_1184439->f_129++;
}

int func_1442()
{
	int iVar0;

	iVar0 = Global_1275565->f_2.f_4;
	if (!func_1646(iVar0))
	{
		iVar0 = MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return iVar0;
}

int func_1443(int iParam0, int iParam1, int iParam2)
{
	return func_1647(iParam0, iParam1, iParam2);
}

int func_1444(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_1648(bParam1, bParam2, bParam3);
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

int func_1445()
{
	int iVar0;

	iVar0 = func_1649(120839576, 59806960, 1, 0, 1, 0);
	if (!func_1646(iVar0))
	{
		iVar0 = MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return iVar0;
}

int func_1446(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<16> Var6;
	struct<16> Var22;

	iVar0 = -1;
	Var1 = { func_694(2084597891 /* GXTEntry: "Money" */, 1, 0) };
	Var6 = { func_1650(2084597891 /* GXTEntry: "Money" */, Var1, Var1.f_4, iParam0, 1) };
	Var6.f_12 = iParam2;
	iVar0 = func_1571(joaat("use"), &Var6, bParam3);
	if (iVar0 == -1)
	{
	}
	else
	{
		Var22.f_7 = -142743235;
		StringCopy(&(Var22.f_12), sParam1, 32);
		func_1572(iVar0, Var22);
	}
	return iVar0;
}

void func_1447()
{
	int iVar0;

	VOLUME::_0x748C5F51A18CB8F0(0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_1651(iVar0))
		{
			func_1652(iVar0);
		}
		iVar0++;
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
}

int func_1448(int iParam0)
{
	return &(Global_1103073->f_193[iParam0 /*8*/]);
}

void func_1449(int iParam0)
{
	Global_1103073->f_193[&Global_1275573 /*8*/] = iParam0;
	func_1653(&(Global_1102099->f_935.f_29));
}

bool func_1450(struct<38> Param0, var uParam38)
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL(Param0.f_37);
}

int func_1451()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar4 = DATABINDING::_DATABINDING_READ_DATA_INT((Global_1939231->f_242.f_14[0 /*39*/])->f_25);
	iVar5 = DATABINDING::_DATABINDING_READ_DATA_INT((Global_1939231->f_242.f_14[0 /*39*/])->f_35);
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT((Global_1939231->f_242.f_14[iVar0 /*39*/])->f_25);
		iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT((Global_1939231->f_242.f_14[iVar0 /*39*/])->f_35);
		if (iVar1 < iVar4)
		{
			iVar3 = iVar0;
			iVar4 = iVar1;
			iVar5 = iVar2;
		}
		else if (iVar1 == iVar4)
		{
			if (iVar2 < iVar5)
			{
				iVar3 = iVar0;
				iVar4 = iVar1;
				iVar5 = iVar2;
			}
		}
		iVar0++;
	}
	func_632(&(Global_1939231->f_242.f_14[iVar3 /*39*/]));
	return iVar3;
}

void func_1452(var uParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<16> Param10)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1, &cParam2);
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_1136(0), Param10);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_1136(1), Param10.f_1);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1136(2), Param10.f_2);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1136(54), Param10.f_3);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1136(55), Param10.f_4);
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1136(57), Param10.f_5);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1136(56), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = joaat("ib_select");
	}
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1136(58), Param10.f_7);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_1136(59), Param10.f_8);
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_1136(60), Param10.f_9);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1136(61), Param10.f_10);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1136(67), Param10.f_11);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1136(62), Param10.f_12);
	if (Param10.f_13 == 0)
	{
		Param10.f_13 = joaat("ib_select");
	}
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1136(64), Param10.f_13);
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_1136(65), Param10.f_14);
	uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_1136(66), Param10.f_15);
}

char* func_1453(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_824(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_1454(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14, var uParam15, var uParam16)
{
	struct<10> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_9 = uParam4;
	Var0.f_9.f_1 = uParam5;
	Var0.f_9.f_2 = uParam6;
	Var0.f_9.f_3 = uParam7;
	Var0.f_4.f_2 = uParam15;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = uParam16;
	uVar21 = _NAMESPACE71::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_1455(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, int iParam16, int iParam17, var uParam18, var uParam19)
{
	struct<10> Var0;
	struct<10> Var13;
	var uVar23;

	Var0 = -2;
	Var0 = uParam11;
	Var0.f_1 = uParam12;
	Var0.f_2 = uParam13;
	Var0.f_3 = iParam15;
	Var0.f_9 = uParam7;
	Var0.f_9.f_1 = uParam8;
	Var0.f_9.f_2 = uParam9;
	Var0.f_9.f_3 = uParam10;
	Var0.f_4.f_2 = uParam18;
	Var13.f_9 = 1;
	Var13 = uParam14;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = uParam5;
	Var13.f_8 = uParam6;
	Var13.f_9 = uParam19;
	uVar23 = _NAMESPACE71::_SHOW_NOTIFICATION(&Var0, &Var13, iParam16, iParam17);
	return uVar23;
}

var func_1456(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = uParam7;
	Var0.f_1 = uParam8;
	Var0.f_2 = uParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = uParam4;
	Var0.f_4.f_1 = uParam6;
	Var0.f_4.f_2 = uParam5;
	Var13.f_7 = 1;
	Var13 = uParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = 1;
	uVar21 = _NAMESPACE71::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

var func_1457(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, int iParam16)
{
	struct<5> Var0;
	struct<10> Var13;
	var uVar23;

	Var0 = -2;
	Var0 = uParam10;
	Var0.f_1 = uParam11;
	Var0.f_2 = uParam12;
	Var0.f_3 = iParam14;
	Var0.f_4 = uParam7;
	Var0.f_4.f_1 = uParam9;
	Var0.f_4.f_2 = uParam8;
	Var13.f_9 = 1;
	Var13 = uParam13;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = uParam5;
	Var13.f_8 = uParam6;
	Var13.f_9 = 1;
	uVar23 = _NAMESPACE71::_SHOW_NOTIFICATION(&Var0, &Var13, iParam15, iParam16);
	return uVar23;
}

var func_1458(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_4 = uParam5;
	Var0.f_4.f_1 = uParam7;
	Var0.f_4.f_2 = uParam6;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = 1;
	uVar21 = _NAMESPACE71::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_1459(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_4 = uParam5;
	Var0.f_4.f_1 = uParam7;
	Var0.f_4.f_2 = uParam6;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = uParam2;
	Var13.f_4 = uParam3;
	Var13.f_5 = uParam4;
	Var13.f_7 = 1;
	uVar21 = _NAMESPACE71::_0x3F9FDDBA79117C69(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_1460(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	Var13.f_7 = 1;
	uVar21 = _NAMESPACE71::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

void func_1461(struct<2> Param0)
{
	if (func_638(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_638(Param0)))
	{
		STATS::_0x99230691875FC218(func_646(Param0), func_638(Param0), Global_35);
	}
}

int func_1462(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return func_1326();
		case 4:
			return joaat("COLOR_PURE_WHITE");
		case 9:
			return func_1325();
		case 10:
			return joaat("COLOR_PURE_WHITE");
		case 23:
			return 1672732465;
		case 22:
			return -1019997170;
		case 24:
			return -5208416;
		case 18:
			return joaat("COLOR_PURE_WHITE");
		case 25:
			return func_1325();
		case 30:
			return func_1325();
		default:
			break;
	}
	return 0;
}

char* func_1463(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "timerString";
		case 1:
			return "isTimerLow";
		case 2:
			return "leftScore";
		case 5:
			return "leftScoreVisible";
		case 3:
			return "leftScoreColor";
		case 4:
			return "leftScoreTextColor";
		case 8:
			return "rightScore";
		case 11:
			return "rightScoreVisible";
		case 9:
			return "rightScoreColor";
		case 10:
			return "rightScoreTextColor";
		case 14:
			return "visible";
		case 15:
			return "enabled";
		case 16:
			return "text";
		case 17:
			return "meterValue";
		case 18:
			return "meterColor";
		case 19:
			return "meterVisible";
		case 20:
			return "txn";
		case 21:
			return "txd";
		case 22:
			return "secondaryTxn";
		case 23:
			return "secondaryTxd";
		case 24:
			return "secondaryImgColor";
		case 25:
			return "imgColor";
		case 26:
			return "isIconBackgroundVisible";
		case 27:
			return "iconEnabled";
		case 28:
			return "overlayTxn";
		case 29:
			return "overlayTxd";
		case 30:
			return "overlayColor";
		case 31:
			return "overlayVisible";
		case 32:
			return "meterThirdsVisible";
		case 33:
			return "showAlternateIcons";
		case 34:
			return "showBlinkIcon";
		case 35:
			return "showPulse";
		case 36:
			return "countDownTimer";
		case 37:
			return "isVisible";
		default:
			break;
	}
	return "";
}

char* func_1464(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "00:00";
		case 2:
			return "0";
		case 8:
			return "0";
		case 16:
			return "";
		case 21:
			return "";
		case 20:
			return "";
		case 29:
			return "";
		case 28:
			return "";
		default:
			break;
	}
	return "";
}

int func_1465(int iParam0)
{
	return 0;
}

float func_1466(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 0f;
		case 13:
			return 0f;
		case 17:
			return 0f;
		default:
			break;
	}
	return 0f;
}

int func_1467(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		case 5:
			return 1;
		case 6:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 14:
			return 1;
		case 15:
			return 1;
		case 19:
			return 0;
		case 26:
			return 0;
		case 27:
			return 1;
		case 31:
			return 0;
		case 32:
			return 0;
		case 33:
			return 0;
		case 34:
			return 0;
		case 35:
			return 0;
		case 37:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_1468(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_1469(int iParam0)
{
	switch (iParam0)
	{
		case -577270367:
			return 241235545;
		case 194818087:
			return 1827902148;
		case -845885815:
			return 1301555144;
		case -1869018428: /* GXTEntry: "No Foundation" */
			return -2056583192;
		case 1710247623: /* GXTEntry: "No Blush" */
			return 1015239729;
		case 1964684696: /* GXTEntry: "No Eye Liner" */
			return -340627321;
		case -2087489409: /* GXTEntry: "No Eye Shadow" */
			return -875805376;
		case -860557048: /* GXTEntry: "No Lipstick" */
			return -768760704;
		case -28107610:
			return -2118203104;
		case -896045342:
			return 1285634184;
		case -643819742:
			return -559080197;
		case -1504407916:
			return -1180698265;
		case -1386156083:
			return -487028314;
		case 1687431937:
			return -1811760631;
		case 1613216286:
			return 1858448324;
		default:
			break;
	}
	return 0;
}

int func_1470(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (((*uParam0)[iVar0 /*17*/])->f_1 == -1)
		{
		}
		else
		{
			if (((*uParam0)[iVar0 /*17*/])->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_1471(int iParam0)
{
	int iVar0;

	iVar0 = func_873(iParam0);
	switch (iVar0)
	{
		case 1341188928:
			return -2056583192;
		case 1216664798:
			return 1015239729;
		case 829857647:
			return -340627321;
		case -636562458:
			return -875805376;
		case 252325943:
			return -768760704;
		default:
			break;
	}
	return 0;
}

float func_1472(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_1473(int iParam0)
{
	return func_1393(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 1203982208 /* Float: 99999f */, 0, 0, 0);
}

void func_1474(var uParam0, bool bParam1, int iParam2)
{
	func_1654(iParam2);
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
		uParam0->f_13 = func_1655(0);
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
							func_484(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_1656(1, 1))
						{
							func_484(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_34) && (!func_1656(1, 1) || *uParam0 & 8192 != 0))
				{
					func_615(uParam0, 33554432);
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
			if (func_1657(uParam0))
			{
				uParam0->f_15 = func_1493();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_1493() - uParam0->f_15) > 500)
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
	func_1658(uParam0);
}

int func_1475(int iParam0, var uParam1)
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
			if (!func_1659(iParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_1660(iParam0, iVar2) <= func_1661(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_1476(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_1662(iParam2, 1, 1, 1, 0))
	{
		func_484(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_1663(uParam1, 1);
	func_1664();
}

int func_1477(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_1665(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_1666(uParam1);
			if (func_1667(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_1668(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_1663(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > func_1669(uParam1))
						{
							func_1663(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_1478(int iParam0, int iParam1, var uParam2)
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
	if (func_1670(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_1666(uParam2);
		if (func_1667(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_1668(uParam2)
				{
					func_1663(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_1479(int iParam0, var uParam1)
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
	if (func_1659(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_1668(uParam1)
		{
			fVar3 = func_1666(uParam1);
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

int func_1480(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_1493();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_1481(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_1671(uParam2);
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
			if (func_1489(uParam2, iParam1))
			{
				func_1663(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_1482(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_1672(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1939178->f_40) && !WEAPON::_0x5809DBCA0A37C82B(Global_1939178->f_40)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_34, &uVar0))
		{
			if (func_1489(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_1663(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_1483(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_1673(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_explosion"), vVar0, uParam2->f_23))
				{
					func_1663(uParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_fire"), vVar0, uParam2->f_29))
				{
					func_1663(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_potential_blast"), vVar0, uParam2->f_23))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_28, &vVar4, 0, 0);
					if (func_1674(iParam1, vVar0, vVar4))
					{
						func_1663(uParam2, 1);
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
					func_1663(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_potential_blast"), vVar0, uParam2->f_23))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_28, &vVar7, 0, 0);
					if (func_1674(iParam1, vVar0, vVar7))
					{
						func_1663(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_1484(int iParam0, var uParam1)
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
		if (!func_1659(iParam0, uParam1, &(Global_1939178->f_28[iVar0])) || iParam0 == &Global_1939178->f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_1675(&(Global_1939178->f_28[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1939178->f_28[iVar0]), false, false), vVar9);
			if (func_1676(&(Global_1939178->f_28[iVar0])))
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
			if (func_1677(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939178->f_28[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_1678(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1939178->f_28[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_1679(uParam1, iParam0, fVar1, iVar0))
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

int func_1485(int iParam0, var uParam1)
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

int func_1486(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_1493();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_1487(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_1680(iVar0, &iVar2))
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
	if (func_1681(iVar0, iParam0))
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

int func_1488(var uParam0, int iParam1)
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

int func_1489(var uParam0, int iParam1)
{
	if (func_1682(uParam0))
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
	if (PED::_0xB65A4DAB460A19BD(Global_34) != 0)
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

int func_1490(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_1683(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1491()
{
}

int func_1492(var uParam0, int iParam1)
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
		if (func_1684(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_1493();
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
						if (func_599(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_1493();
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

int func_1493()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_1494()
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
	if ((func_1493() - Global_1939178->f_37) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_1495(var uParam0, int iParam1)
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
	fVar0 = func_1661(uParam0);
	if (uParam0->f_12 > func_1685(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_1686(iParam1);
	iVar1 = func_1687(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || PED::_0x9D9473CB82D83A30(iParam1, Global_34, 0) == 1) || PED::_0x9D9473CB82D83A30(iParam1, uParam0->f_14, 0) == 1)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_1496(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

int func_1497(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_1688(iParam0, vVar0, iParam2);
}

int func_1498(int iParam0, int iParam1, var uParam2)
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
	return func_1689(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_1499(int iParam0, var uParam1)
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
		if (func_1690(iParam0, uParam1, 1))
		{
			return 1;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_34, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_34, 17)) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_34, 1, 0) == 1)
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
			if (func_1691(uParam1))
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
					if (!func_1692(uParam1, iParam0))
					{
						if (func_599(iVar4, Global_35, 1) < 7f)
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

int func_1500(int iParam0, var uParam1)
{
	if (!func_1693(0))
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

int func_1501(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_1493();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_1502(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_1503(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_1493();
	}
	else if (func_1493() - uParam1->f_4) > func_1694(uParam1)
	{
		return func_1695(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

int func_1504(var uParam0, int iParam1)
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

void func_1505(var uParam0)
{
	if (!func_1097(Local_2503.f_42[uParam0->f_15 /*56*/], 32))
	{
		func_1401(32, uParam0);
	}
	else if (!func_1097(Local_2503.f_42[uParam0->f_15 /*56*/], 64))
	{
		func_1401(64, uParam0);
	}
	else if (!func_1097(Local_2503.f_42[uParam0->f_15 /*56*/], 16))
	{
		func_1401(16, uParam0);
	}
}

void func_1506(var uParam0)
{
	if (!func_1097(Local_2503.f_42[uParam0->f_15 /*56*/], 1))
	{
		func_1401(1, uParam0);
	}
	else if (!func_1097(Local_2503.f_42[uParam0->f_15 /*56*/], 2))
	{
		func_1401(2, uParam0);
	}
	else if (!func_1097(Local_2503.f_42[uParam0->f_15 /*56*/], 4))
	{
		func_1401(4, uParam0);
	}
	else if (!func_1097(Local_2503.f_42[uParam0->f_15 /*56*/], 16))
	{
		func_1401(16, uParam0);
	}
}

void func_1507(int iParam0)
{
	struct<16> Var0;

	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1938417)[iParam0 /*16*/])->f_10)))
	{
		return;
	}
	*((*Global_1938417)[iParam0 /*16*/]) = { Var0 };
	Global_1938417->f_161 = (Global_1938417->f_161 - 1);
	if (Global_1938417->f_161 < 0)
	{
		Global_1938417->f_161 = 0;
	}
}

void func_1508(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

void func_1509(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	struct<8> Var14;
	char[] cVar22[8];
	bool bVar23;
	bool bVar24;
	float fVar25[8];
	var uVar34[8];
	int iVar43;
	int iVar44;
	bool bVar45;
	int iVar46;
	char* sVar47;
	int iVar48;

	iVar5 = 0;
	iVar6 = 32;
	bVar7 = MISC::IS_BIT_SET(uParam0->f_159, 3);
	bVar8 = MISC::IS_BIT_SET(uParam0->f_159, 23);
	bVar9 = MISC::IS_BIT_SET(uParam0->f_159, 24);
	bVar10 = MISC::IS_BIT_SET(uParam0->f_159, 25);
	bVar11 = MISC::IS_BIT_SET(uParam0->f_160, 10);
	bVar12 = MISC::IS_BIT_SET(uParam0->f_159, 28);
	iVar13 = PLAYER::PLAYER_ID();
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar2]), "Position", "");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar2]), "Gamertag", "");
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_143[iVar2]), "GamertagColor", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar2]), "StatPriority", "");
		iVar2++;
	}
	bVar23 = MISC::IS_BIT_SET(uParam0->f_159, 6);
	if (bVar12 && uParam0->f_150 > 0)
	{
		bVar24 = MISC::IS_BIT_SET(uParam0->f_159, 5);
		if ((bVar10 || bVar8) && func_1696() == 0)
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				fVar25[iVar0] = BUILTIN::TO_FLOAT(Global_1050928[iVar0]);
				iVar0++;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (uParam1[iVar0 /*23*/] != -1 && uParam1[iVar0 /*23*/] < 8)
				{
					if (bVar9)
					{
						if (((*uParam1)[iVar0 /*23*/])->f_1 != -1f)
						{
							fVar25[uParam1[iVar0 /*23*/]] = (&fVar25[uParam1[iVar0 /*23*/]] + ((*uParam1)[iVar0 /*23*/])->f_1);
						}
					}
					else if (bVar8)
					{
						if (((*uParam1)[iVar0 /*23*/])->f_5 != -1f)
						{
							fVar25[uParam1[iVar0 /*23*/]] = (&fVar25[uParam1[iVar0 /*23*/]] + ((*uParam1)[iVar0 /*23*/])->f_5);
						}
					}
					else if (bVar11)
					{
						if (((*uParam1)[iVar0 /*23*/])->f_8 != -1f)
						{
							fVar25[uParam1[iVar0 /*23*/]] = (&fVar25[uParam1[iVar0 /*23*/]] + ((*uParam1)[iVar0 /*23*/])->f_8);
						}
					}
					else if (((*uParam1)[iVar0 /*23*/])->f_1 != -1f)
					{
						fVar25[uParam1[iVar0 /*23*/]] = (&fVar25[uParam1[iVar0 /*23*/]] + ((*uParam1)[iVar0 /*23*/])->f_1);
					}
				}
				iVar0++;
			}
		}
		iVar6 = uParam0->f_150;
		func_1529(iParam2, &uVar34, uParam0->f_150, bVar23);
		func_1530(uParam0, iParam3, &uVar34, &iVar5, &iVar6);
		iVar2 = 0;
		while (iVar2 <= (iVar6 - 1))
		{
			iVar43 = &uVar34[iVar2];
			if (iVar2 == 0 || iVar2 >= iVar5)
			{
				if (iVar43 < 8 && iVar43 != -1)
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar22, iVar2 + 1, 8);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "Position", &cVar22);
						Var14 = { func_1697(iVar43) };
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "Gamertag", &Var14);
						iVar44 = func_1698(iVar43, iParam4, uParam0->f_150, bVar24, iParam4 == iVar43);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_143[iVar3]), "GamertagColor", iVar44);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "StatPriority", MISC::_0x2B6846401D68E563(&(fVar25[iVar43]), uParam0->f_151));
					}
				}
			}
			iVar2++;
		}
	}
	else
	{
		func_1532(uParam1, iParam3, &iVar5, &iVar6);
		iVar1 = 0;
		while (iVar1 <= iVar6)
		{
			if (iVar3 == 0 || iVar1 >= iVar5)
			{
				if (func_1510(&(((*uParam1)[iVar1 /*23*/])->f_14)))
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar22, iVar1 + 1, 8);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "Position", &cVar22);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "Gamertag", &(((*uParam1)[iVar1 /*23*/])->f_14.f_1));
						bVar45 = iVar13 == ((*uParam1)[iVar1 /*23*/])->f_14;
						iVar46 = func_1513(uParam0, uParam1, iVar1, iVar13, bVar45);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_143[iVar3]), "GamertagColor", iVar46);
						sVar47 = "";
						if (bVar7)
						{
							if (MISC::IS_BIT_SET(uParam0->f_159, 26))
							{
								if (MISC::IS_BIT_SET(uParam0->f_159, 0))
								{
									sVar47 = MISC::_0x2B6846401D68E563(func_1527((*uParam1)[iVar1 /*23*/], uParam0->f_159, uParam0->f_160), 0);
								}
								else
								{
									sVar47 = MISC::_0x2B6846401D68E563(func_1522((*uParam1)[iVar1 /*23*/], uParam0->f_159), 0);
								}
							}
							else if (MISC::IS_BIT_SET(uParam0->f_159, 27))
							{
								iVar4 = BUILTIN::ROUND(func_1523((*uParam1)[iVar1 /*23*/], uParam0->f_159));
								sVar47 = " ";
								if (func_1524(iVar4))
								{
									iVar48 = uParam0->f_159;
									if (((*uParam1)[iVar1 /*23*/])->f_1 == 8.94E+07f)
									{
										MISC::CLEAR_BIT(&iVar48, 12);
									}
									sVar47 = func_1525(iVar4, iVar48, 1);
								}
							}
							else
							{
								sVar47 = MISC::_0x2B6846401D68E563(func_1523((*uParam1)[iVar1 /*23*/], uParam0->f_159), func_1526(uParam0, 1));
							}
						}
						else if (bVar9)
						{
							sVar47 = MISC::_0x2B6846401D68E563(((*uParam1)[iVar1 /*23*/])->f_1, 0);
						}
						else if (bVar8 || bVar10)
						{
							if (MISC::IS_BIT_SET(uParam0->f_159, 9))
							{
								sVar47 = func_1311(((*uParam1)[iVar1 /*23*/])->f_5);
							}
							else
							{
								sVar47 = MISC::_0x2B6846401D68E563(((*uParam1)[iVar1 /*23*/])->f_5, 0);
							}
						}
						else if (bVar11)
						{
							sVar47 = MISC::_0x2B6846401D68E563(((*uParam1)[iVar1 /*23*/])->f_8, 0);
						}
						else
						{
							sVar47 = MISC::_0x2B6846401D68E563(((*uParam1)[iVar1 /*23*/])->f_1, 0);
						}
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "StatPriority", sVar47);
					}
				}
			}
			iVar1++;
		}
	}
}

int func_1510(var uParam0)
{
	if (*uParam0 != 255)
	{
		return 1;
	}
	else if (Global_2883584 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1)))
	{
		return 1;
	}
	return 0;
}

void func_1511(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	iVar0 = 0;
	iVar1 = PLAYER::PLAYER_ID();
	bVar2 = iVar1 == ((*uParam1)[iParam2 /*23*/])->f_14;
	iVar0 = func_1513(uParam0, uParam1, iParam2, iVar1, bVar2);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(((*uParam1)[iParam2 /*23*/])->f_14) && _NAMESPACE79::_0x919AF2D93E9AA89D(((*uParam1)[iParam2 /*23*/])->f_14))
	{
		bVar3 = _NAMESPACE79::_0xEF6F2A35FAAF2ED7(((*uParam1)[iParam2 /*23*/])->f_14);
	}
	else
	{
		bVar3 = false;
	}
	if (bVar3)
	{
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "HeadsetIconVisible", bVar3);
	if (!bParam3)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(&(uParam0->f_12[iParam2]), "HeadsetIconColor", iVar0);
	}
	if (bVar3)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "ShowBlip", false);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "ShowBlip", true);
	}
}

int func_1512(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iParam1 == iVar0)
		{
			return iVar1 + 1;
		}
		else if (uParam0[iParam1 /*23*/] == uParam0[iVar0 /*23*/] && func_1510(&(((*uParam0)[iVar0 /*23*/])->f_14)))
		{
			iVar1++;
		}
		iVar0++;
	}
	return -1;
}

int func_1513(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (MISC::IS_BIT_SET(uParam0->f_159, 11))
	{
		iVar0 = func_1699(uParam1[iParam2 /*23*/], PLAYER::GET_PLAYER_TEAM(iParam3), uParam0->f_150, MISC::IS_BIT_SET(uParam0->f_159, 5), bParam4);
	}
	else if (MISC::IS_BIT_SET(uParam0->f_159, 16))
	{
		if (bParam4)
		{
			iVar0 = joaat("COLOR_PURE_WHITE");
		}
		else
		{
			iVar0 = func_533(((*uParam1)[iParam2 /*23*/])->f_14, 1, -1, 1);
		}
	}
	else
	{
		iVar0 = func_533(((*uParam1)[iParam2 /*23*/])->f_14, 1, -1, 1);
	}
	return iVar0;
}

void func_1514(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	switch (((*uParam1)[iParam2 /*23*/])->f_10)
	{
		case 1:
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iParam2]), "SetOverlayImg", 1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "ShowOverlay", true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "ShowCross", false);
			break;
		case 2:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "ShowCross", true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "ShowOverlay", false);
			break;
		default:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "ShowCross", false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "ShowOverlay", false);
			break;
	}
	if (bParam3)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(&(uParam0->f_12[iParam2]), "CrossColor", iParam4);
	}
}

char* func_1515()
{
	return "RSN";
}

char* func_1516(int iParam0)
{
	if (iParam0 >= 32 || iParam0 < 0)
	{
		return "-";
	}
	return MISC::_CREATE_VAR_STRING(2, "NUMBER", Global_1139395[iParam0 /*34*/]);
}

int func_1517()
{
	if (Global_1099294->f_26.f_14 == 9)
	{
		return 0;
	}
	if (Global_1099294->f_26.f_14 == 10)
	{
		return 0;
	}
	if (Global_1099294->f_26.f_14 == 11)
	{
		return 0;
	}
	if (func_634(2048))
	{
		return 1;
	}
	if (func_633(1))
	{
		return 1;
	}
	if (Global_1099294->f_26.f_14 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_1518(int iParam0)
{
	int iVar0;

	iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(func_1700()));
	return iParam0 == iVar0;
}

char* func_1519(int iParam0)
{
	if (iParam0 != 0)
	{
		return STATS::_0xB112B9262EC29C20(1852874750, iParam0);
	}
	return "";
}

int func_1520(int iParam0)
{
	if ((func_1521(iParam0) || func_1528(iParam0)) || MISC::IS_BIT_SET(iParam0, 18))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(iParam0, 0) || MISC::IS_BIT_SET(iParam0, 17))
	{
		return 1;
	}
	return 0;
}

bool func_1521(int iParam0)
{
	return (MISC::IS_BIT_SET(iParam0, 0) && MISC::IS_BIT_SET(iParam0, 17));
}

float func_1522(var uParam0, int iParam1)
{
	if (func_1701())
	{
		func_1702(uParam0, 1);
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		if (MISC::IS_BIT_SET(iParam1, 0))
		{
			return uParam0->f_7;
		}
		else if (MISC::IS_BIT_SET(iParam1, 4) || MISC::IS_BIT_SET(iParam1, 15))
		{
			return uParam0->f_8;
		}
	}
	else if (func_1520(iParam1) || MISC::IS_BIT_SET(iParam1, 19))
	{
		return uParam0->f_1;
	}
	else if (MISC::IS_BIT_SET(iParam1, 8))
	{
		return uParam0->f_6;
	}
	else if (MISC::IS_BIT_SET(iParam1, 20))
	{
		return uParam0->f_6;
	}
	return uParam0->f_2;
}

float func_1523(var uParam0, int iParam1)
{
	if (func_1701())
	{
		return func_1702(uParam0, 0);
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		return uParam0->f_7;
	}
	else if (MISC::IS_BIT_SET(iParam1, 19))
	{
		return uParam0->f_6;
	}
	return uParam0->f_1;
}

int func_1524(int iParam0)
{
	if ((iParam0 != 86400000 || iParam0 == 0) || iParam0 == BUILTIN::ROUND(-3f))
	{
		return 1;
	}
	return 0;
}

char* func_1525(int iParam0, int iParam1, bool bParam2)
{
	char cVar0[32];

	StringCopy(&cVar0, "", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	if (bParam2)
	{
		if (iParam0 == 0)
		{
			return " ";
		}
		else if ((((iParam0 == 1000000000 || iParam0 == 88400000) || iParam0 == 72800000) || iParam0 == 87400000) || iParam0 == BUILTIN::ROUND(-3f))
		{
			return "--:--:--";
		}
		else
		{
			return func_1072(iParam0, 1, 2, MISC::IS_BIT_SET(iParam1, 12), 0, 0);
		}
	}
	else if ((MISC::IS_BIT_SET(iParam1, 3) || MISC::IS_BIT_SET(iParam1, 4)) || MISC::IS_BIT_SET(iParam1, 7))
	{
		if (iParam0 == 0)
		{
			return HUD::_GET_LABEL_TEXT("POS_LEAD");
		}
		else if (iParam0 == 88400000 || iParam0 == 72800000)
		{
			return HUD::_GET_LABEL_TEXT("POS_DNF");
		}
		else if (iParam0 == 87400000)
		{
			return HUD::_GET_LABEL_TEXT("POS_ELIM");
		}
		else if (iParam0 == BUILTIN::ROUND(-3f))
		{
			return "--:--:--";
		}
		else
		{
			return func_1072(iParam0, 1, 2, MISC::IS_BIT_SET(iParam1, 12), 0, 0);
		}
	}
	if (MISC::IS_BIT_SET(iParam1, 21))
	{
		if (iParam0 <= 0 || iParam0 == 1000000000)
		{
			return "--:--:--";
		}
		else
		{
			return func_1072(iParam0, 1, 2, 0, 0, 0);
		}
	}
	if (iParam0 < 0)
	{
		return "";
	}
	return func_1703(&cVar0);
}

int func_1526(var uParam0, int iParam1)
{
	if (iParam1 == 1 && MISC::IS_BIT_SET(uParam0->f_159, 29))
	{
		return uParam0->f_151;
	}
	if (iParam1 == 2 && MISC::IS_BIT_SET(uParam0->f_159, 30))
	{
		return uParam0->f_151;
	}
	if (iParam1 == 3 && MISC::IS_BIT_SET(uParam0->f_159, 31))
	{
		return uParam0->f_151;
	}
	return 0;
}

var func_1527(var uParam0, int iParam1, int iParam2)
{
	if (func_1701())
	{
		func_1702(uParam0, 2);
	}
	else if (MISC::IS_BIT_SET(iParam1, 0) && !MISC::IS_BIT_SET(iParam1, 17))
	{
		if (MISC::IS_BIT_SET(iParam1, 3) && (MISC::IS_BIT_SET(iParam1, 4) || MISC::IS_BIT_SET(iParam1, 15)))
		{
			return uParam0->f_8;
		}
		return uParam0->f_2;
	}
	else if (MISC::IS_BIT_SET(iParam1, 21))
	{
		return uParam0->f_7;
	}
	else if (func_1521(iParam1))
	{
		return uParam0->f_1;
	}
	else if (MISC::IS_BIT_SET(iParam1, 14))
	{
		return uParam0->f_8;
	}
	else if (MISC::IS_BIT_SET(iParam2, 8))
	{
		return uParam0->f_3;
	}
	return uParam0->f_5;
}

bool func_1528(int iParam0)
{
	return (MISC::IS_BIT_SET(iParam0, 18) && MISC::IS_BIT_SET(iParam0, 17));
}

void func_1529(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		(*uParam1)[iVar0] = iParam0[iVar0];
		iVar0++;
	}
	if (!bParam3)
	{
		if (iParam2 < 8 && uParam1[7] != -1)
		{
			(*uParam1)[(iParam2 - 1)] = uParam1[7];
			(*uParam1)[7] = -1;
		}
	}
}

void func_1530(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam1 == uParam2[iVar0])
		{
			iParam1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	*iParam3 = (iParam1 - 1);
	*iParam4 = iParam1 + 2;
	if (*iParam4 >= uParam0->f_150)
	{
		*iParam4 = uParam0->f_150;
		*iParam3 = (uParam0->f_150 - 3);
	}
	if (*iParam3 < 0)
	{
		*iParam3 = 0;
	}
	if (*iParam4 < 5 && uParam0->f_150 > 5)
	{
		*iParam4 = 5;
	}
	if (*iParam4 < uParam0->f_150 && uParam0->f_150 < 5)
	{
		*iParam4 = uParam0->f_150;
	}
	if (*iParam4 > 8)
	{
		*iParam4 = 8;
	}
}

void func_1531(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4)
{
	if (iParam4 < iParam3)
	{
		if (iParam1 != DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(uParam0, iParam4))
		{
			DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam0, iParam1);
			DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0, iParam4, sParam2, iParam1);
		}
	}
	else
	{
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0, iParam4, sParam2, iParam1);
	}
}

void func_1532(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar3 = -1;
	iVar4 = -1;
	iVar6 = -1;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (func_1510(&(((*uParam0)[iVar1 /*23*/])->f_14)))
		{
			if (iVar1 < iParam1)
			{
				iVar3 = iVar2;
				iVar2 = iVar1;
			}
			else if (iVar1 > iParam1)
			{
				iVar5++;
				if (iVar5 < 4)
				{
					iVar6 = iVar1;
				}
			}
			iVar0++;
			iVar4 = iVar1;
		}
		iVar1++;
	}
	*iParam2 = iVar2;
	if (iVar6 != -1)
	{
		*iParam3 = iVar6;
	}
	else
	{
		*iParam3 = iVar4;
	}
	if (*iParam3 >= iVar4 && iVar6 == -1)
	{
		*iParam3 = iVar4;
		if (iVar3 != -1)
		{
			*iParam2 = iVar3;
		}
		else
		{
			*iParam2 = iVar2;
		}
	}
	if (*iParam2 < 0)
	{
		*iParam2 = 0;
	}
}

void func_1533(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	char cVar5[64];
	int iVar13;
	float fVar14;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_150 - 1))
	{
		StringCopy(&cVar5, "LeaderboardListHeader_", 64);
		if (iVar0 < 10)
		{
			StringConCat(&cVar5, "0", 64);
		}
		StringIntConCat(&cVar5, iVar0, 64);
		uParam0->f_3[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, &cVar5);
		cVar5 = { func_1697(iVar0) };
		fVar2 = 0f;
		fVar3 = 0f;
		fVar4 = 0f;
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (iVar0 == uParam1[iVar1 /*23*/] && func_1510(&(((*uParam1)[iVar1 /*23*/])->f_14)))
			{
				if (MISC::IS_BIT_SET(uParam0->f_159, 19))
				{
					if (((*uParam1)[iVar1 /*23*/])->f_6 != -1f && fVar2 == 0f)
					{
						fVar2 = (fVar2 + ((*uParam1)[iVar1 /*23*/])->f_6);
					}
					if (((*uParam1)[iVar1 /*23*/])->f_1 != -1f)
					{
						fVar3 = (fVar3 + ((*uParam1)[iVar1 /*23*/])->f_1);
					}
					if (((*uParam1)[iVar1 /*23*/])->f_5 != -1f)
					{
						fVar4 = (fVar4 + ((*uParam1)[iVar1 /*23*/])->f_5);
					}
				}
				else
				{
					if (((*uParam1)[iVar1 /*23*/])->f_1 != -1f)
					{
						fVar2 = (fVar2 + ((*uParam1)[iVar1 /*23*/])->f_1);
					}
					if (((*uParam1)[iVar1 /*23*/])->f_2 != -1f)
					{
						fVar3 = (fVar3 + ((*uParam1)[iVar1 /*23*/])->f_2);
					}
					if (((*uParam1)[iVar1 /*23*/])->f_5 != -1f)
					{
						fVar4 = (fVar4 + ((*uParam1)[iVar1 /*23*/])->f_5);
					}
				}
			}
			iVar1++;
		}
		if (!MISC::IS_BIT_SET(uParam0->f_159, 19))
		{
			if (MISC::IS_BIT_SET(uParam0->f_159, 25) || MISC::IS_BIT_SET(uParam0->f_159, 23))
			{
				if (func_1696() == 0)
				{
					fVar4 = BUILTIN::TO_FLOAT(Global_1050928[iVar0]);
				}
			}
		}
		iVar13 = func_1698(iVar0, iParam2, iParam3, bParam4, iParam2 == iVar0);
		DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_3[iVar0]), "HeadingColor", iVar13);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_3[iVar0]), "Heading", &cVar5);
		if (MISC::IS_BIT_SET(uParam0->f_159, 6))
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_3[iVar0]), "Stat3Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_3[iVar0]), "Stat3", MISC::_0x2B6846401D68E563(fVar4, uParam0->f_151));
		}
		else if (func_1520(uParam0->f_159))
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_3[iVar0]), "Stat2Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_3[iVar0]), "Stat2", MISC::_0x2B6846401D68E563(fVar2, uParam0->f_151));
			fVar14 = fVar3;
			if (MISC::IS_BIT_SET(uParam0->f_159, 17))
			{
				fVar14 = fVar4;
			}
			DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_3[iVar0]), "Stat3Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_3[iVar0]), "Stat3", MISC::_0x2B6846401D68E563(fVar14, uParam0->f_151));
		}
		else if (func_1521(uParam0->f_159))
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_3[iVar0]), "Stat3Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_3[iVar0]), "Stat3", MISC::_0x2B6846401D68E563(fVar4, uParam0->f_151));
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_3[iVar0]), "Stat1Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_3[iVar0]), "Stat1", MISC::_0x2B6846401D68E563(fVar2, uParam0->f_151));
			DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_3[iVar0]), "Stat2Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_3[iVar0]), "Stat2", MISC::_0x2B6846401D68E563(fVar3, uParam0->f_151));
			DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_3[iVar0]), "Stat3Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_3[iVar0]), "Stat3", MISC::_0x2B6846401D68E563(fVar4, uParam0->f_151));
		}
		iVar0++;
	}
}

bool func_1534()
{
	return func_794(4);
}

void func_1535(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	char cVar1[32];

	if (bParam4)
	{
		if (func_1701())
		{
			func_1704(uParam0);
		}
		else
		{
			func_1705(uParam0, bParam5, bParam7);
		}
	}
	uParam0->f_149 = 0;
	if (iParam3 != -1)
	{
		uParam0->f_150 = iParam3;
	}
	if (MISC::IS_BIT_SET(uParam0->f_159, 5))
	{
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&cVar1, "MiniListItem_", 32);
		if (iVar0 < 10)
		{
			StringConCat(&cVar1, "0", 32);
		}
		StringIntConCat(&cVar1, iVar0, 32);
		uParam0->f_143[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, &cVar1);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_143[iVar0]), "Position", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_143[iVar0]), "Gamertag", "");
		DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_143[iVar0]), "GamertagColor", 0);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_143[iVar0]), "StatPriority", "");
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		StringCopy(&cVar1, "LeaderboardListItem_", 32);
		if (iVar0 < 10)
		{
			StringConCat(&cVar1, "0", 32);
		}
		StringIntConCat(&cVar1, iVar0, 32);
		uParam0->f_12[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, &cVar1);
		DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_12[iVar0]), "Position", 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "ShowCross", false);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(&(uParam0->f_12[iVar0]), "CrossColor", joaat("COLOR_RED"));
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iVar0]), "Gamertag", "");
		DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_12[iVar0]), "GamertagColor", 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "ShowCrewTag", true);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iVar0]), "CrewTag", "");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "ShowRank", true);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iVar0]), "Rank", "0");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "Spectating", false);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iVar0]), "Stat0", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iVar0]), "Stat1", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iVar0]), "Stat2", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iVar0]), "Stat3", "");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "ShowBlip", func_1706());
		DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_12[iVar0]), "BlipColor", 0);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iVar0]), "Blip", "BLIP_AMBIENT_PED_MEDIUM");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "isHighlighted", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "HeadsetIconVisible", false);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(&(uParam0->f_12[iVar0]), "HeadsetIconColor", joaat("COLOR_PURE_WHITE"));
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "ShowBlip", true);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "info_visible_06", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "info_visible_07", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "info_visible_08", false);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "info_value_06", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "info_value_07", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "info_value_08", "");
		DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_12[iVar0]), "SetOverlayImg", 1);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "ShowOverlay", false);
		func_1536(uParam0, &(((*uParam1)[iVar0 /*23*/])->f_14), iVar0, 0);
		iVar0++;
	}
	if (func_1701())
	{
		func_1707(uParam0, uParam1, iParam2, bParam6, bParam5, bParam7, bParam8, iParam9, iParam10);
	}
	else
	{
		func_1314(uParam0, uParam1, iParam2, bParam6, bParam5, bParam7, bParam8, iParam9, iParam10);
	}
}

void func_1536(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	char cVar0[64];
	char cVar8[64];
	struct<8> Var16;

	StringCopy(&cVar0, "mp_lobby_textures", 64);
	StringCopy(&cVar8, "TEMP_PEDSHOT", 64);
	MemCopy(&Var16, {func_1708(uParam0, *uParam1)}, 8);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var16) && !MISC::ARE_STRINGS_EQUAL(&Var16, "Invalid Handle"))
	{
		cVar0 = { Var16 };
		cVar8 = { Var16 };
	}
	if (bParam3)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_45[iParam2 /*3*/][0], &cVar0);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_45[iParam2 /*3*/][1], &cVar8);
	}
	else
	{
		(*uParam0->f_45[iParam2 /*3*/])[0] = DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iParam2]), "AvatarDictionary", &cVar0);
		(*uParam0->f_45[iParam2 /*3*/])[1] = DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iParam2]), "AvatarTexture", &cVar8);
	}
}

bool func_1537(int iParam0)
{
	return (Global_262151 && iParam0) != 0;
}

void func_1538(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_1539(bool bParam0)
{
	if (bParam0)
	{
		return joaat("leaderboard");
	}
	return -987928333;
}

int func_1540()
{
	return 205122612;
}

int func_1541()
{
	if (Global_1939067->f_20 && Global_1939067->f_5 == 1)
	{
		return 1;
	}
	return 0;
}

void func_1542(var uParam0)
{
	int iVar0;
	int iVar1;
	char cVar2[128];

	if (func_1709() > 0)
	{
		return;
	}
	if (uParam0->f_33 == 0)
	{
		return;
	}
	iVar0 = uParam0->f_35;
	uParam0->f_35++;
	if (uParam0->f_35 >= 32)
	{
		uParam0->f_35 = 0;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_33, iVar0))
	{
		return;
	}
	iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return;
	}
	StringCopy(&cVar2, "", 128);
	switch (func_1710(&cVar2, iVar0, 1))
	{
		case 4:
			(*uParam0)[iVar0] = iVar1;
			MISC::CLEAR_BIT(&(uParam0->f_33), iVar0);
			MISC::SET_BIT(&(uParam0->f_34), iVar0);
			break;
		case 3:
			break;
		case 1:
			func_1711(iVar0, 1);
			break;
		case 2:
			func_1711(iVar0, 1);
			func_1712(uParam0, iVar1, 0);
			break;
		case 0:
			break;
	}
}

void func_1543(var uParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;

	Var0.f_1 = 1;
	Var0 = 1;
	Var0.f_3 = iParam1;
	func_1713(&Var0);
	iVar4 = 0;
	while (iVar4 < 32)
	{
		iVar5 = PLAYER::INT_TO_PLAYERINDEX(iVar4);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
		{
		}
		else
		{
			MISC::SET_BIT(&(uParam0->f_33), iVar4);
		}
		iVar4++;
	}
}

int func_1544(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1951141->f_2706.f_1)
	{
		if (&Global_1951141->f_2706.f_43[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1545(int iParam0, var uParam1)
{
	return (Global_1951141->f_2706.f_3[iParam0] && uParam1) != 0;
}

void func_1546(int iParam0, var uParam1)
{
	Global_1951141->f_2706.f_3[iParam0] = (&Global_1951141->f_2706.f_3[iParam0] - (Global_1951141->f_2706.f_3[iParam0] && uParam1));
}

int func_1547(int iParam0, int iParam1)
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

bool func_1548(int iParam0, int iParam1)
{
	return ((Global_1951141->f_81[func_1170(iParam0, 1) /*12*/])->f_11 && iParam1) != 0;
}

int func_1549(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1951141->f_2760)
	{
		if (&Global_1951141->f_2760.f_2[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1550(int iParam0, int iParam1)
{
	func_1714(&(Global_1951141->f_2760), iParam0, iParam1);
}

void func_1551(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1552(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

int func_1553(int iParam0)
{
	if (iParam0 == 1733464892)
	{
		return -236468550;
	}
	return -28107610;
}

int func_1554(int iParam0)
{
	if (iParam0 == -230310728 || iParam0 == 1326838792)
	{
		return -1551826771;
	}
	switch (iParam0)
	{
		case -157559400:
			return -25348444;
		case 465258498:
			return -25348444;
		case -533110106:
			return -25348444;
		case -393465732:
			return -25348444;
		case 74351192:
			return -25348444;
		case 116074515:
			return -25348444;
		case 1618144916:
			return -25348444;
		case 1785263689:
			return -25348444;
		case -906745111:
			return -25348444;
		case 373001057:
			return -25348444;
		case -1414997496:
			return -25348444;
		case -1466370865:
			return -25348444;
		case -428747163:
			return -25348444;
		case 539445454:
			return -25348444;
		case 1893781991:
			return -25348444;
		case -156560189:
			return -25348444;
		case -1337137168:
			return -25348444;
		case 1529984470:
			return 129780002;
		case 163973342:
			return 129780002;
		case 1242718228:
			return 129780002;
		case 471104751:
			return 129780002;
		case 2093241299:
			return 129780002;
		case 1900264118:
			return 129780002;
		case 1226668975:
			return 129780002;
		case -1054967705:
			return 129780002;
		case 664756881:
			return 129780002;
		case -1196414963:
			return 129780002;
		case -549784028:
			return 129780002;
		case -1114404061:
			return 129780002;
		case 1998608299:
			return 129780002;
		case -1905369120:
			return 129780002;
		case -2125350662:
			return 129780002;
		case 1734235879:
			return 129780002;
		case 675995216:
			return 129780002;
		case -1713496139: /* GXTEntry: "No Hair" */
			return 1687431937;
		default:
			break;
	}
	return 1661173679;
	return 1687431937;
}

int func_1555(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (((*uParam0)[iVar0 /*18*/])->f_1 == -1 || ((*uParam0)[iVar0 /*18*/])->f_17 == 0)
		{
		}
		else
		{
			if (((*uParam0)[iVar0 /*18*/])->f_17 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_1556(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1555(uParam1, iParam2);
	if (iVar0 == -1)
	{
		return 0;
	}
	PED::_0x96C349DE04C49011(*uParam0, ((*uParam1)[iVar0 /*18*/])->f_2);
	func_1557(uParam0, uParam1, iVar0);
	return 1;
}

void func_1557(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	uParam0->f_6 = (uParam0->f_6 - 1);
	iVar0 = iParam2;
	while (iVar0 <= uParam0->f_6)
	{
		if (iVar0 + 1 >= 22)
		{
		}
		else
		{
			*((*uParam1)[iVar0 /*18*/]) = { *((*uParam1)[iVar0 + 1 /*18*/]) };
			((*uParam1)[iVar0 /*18*/])->f_2 = (((*uParam1)[iVar0 /*18*/])->f_2 - 1);
			iVar0++;
		}
	}
}

int func_1558(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	struct<5> Var0;

	Var0 = 660625468;
	Var0.f_1 = -756385367;
	Var0.f_2 = joaat("id");
	Var0.f_3 = 1;
	Var0.f_4 = iParam1;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	if (!func_1715(&Var0, uParam0, 0, bParam2, bParam3, iParam4))
	{
		return 0;
	}
	*uParam0 = iParam1;
	return 1;
}

void func_1559(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if ((!func_1552(uParam0, 1) || func_1552(uParam0, 2)) || uParam0->f_6 < 0)
	{
		return;
	}
	if (uParam2->f_17 == -1177453988)
	{
		if (uParam2->f_3 == 0)
		{
			uParam2->f_3 = uParam0->f_2;
		}
		if (uParam2->f_4 == 0)
		{
			uParam2->f_4 = uParam0->f_3;
		}
		if (uParam2->f_5 == 0)
		{
			uParam2->f_5 = uParam0->f_4;
		}
		func_1716(uParam0, uParam2->f_3, uParam2->f_4, uParam2->f_5);
	}
	else
	{
		iVar0 = func_1555(uParam1, uParam2->f_17);
		if (iVar0 <= -1)
		{
			if (uParam0->f_6 >= 22)
			{
				return;
			}
			*((*uParam1)[uParam0->f_6 /*18*/]) = { *uParam2 };
			uParam0->f_6++;
			func_1717(uParam0, uParam1, (uParam0->f_6 - 1));
		}
		else
		{
			uParam2->f_2 = ((*uParam1)[iVar0 /*18*/])->f_2;
			*((*uParam1)[iVar0 /*18*/]) = { *uParam2 };
			func_1718(uParam0, (*uParam1)[iVar0 /*18*/], 1);
		}
	}
}

int func_1560(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<18> Var0;
	int iVar18;
	struct<18> Var19;

	Var0.f_2 = -1;
	Var0.f_13 = 1065353216;
	Var0.f_14 = 1065353216;
	if (!func_1558(&Var0, iParam2, bParam3, bParam4, 6))
	{
		return 0;
	}
	if (uParam0->f_6 >= 22)
	{
		return 0;
	}
	*((*uParam1)[uParam0->f_6 /*18*/]) = { Var0 };
	uParam0->f_6++;
	Var19.f_2 = -1;
	Var19.f_13 = 1065353216;
	Var19.f_14 = 1065353216;
	iVar18 = (uParam0->f_6 - 1);
	while (iVar18 >= 1)
	{
		if (((*uParam1)[iVar18 /*18*/])->f_1 < ((*uParam1)[(iVar18 - 1) /*18*/])->f_1)
		{
			Var19 = { *((*uParam1)[iVar18 /*18*/]) };
			*((*uParam1)[iVar18 /*18*/]) = { *((*uParam1)[(iVar18 - 1) /*18*/]) };
			*((*uParam1)[(iVar18 - 1) /*18*/]) = { Var19 };
		}
	else
	{
		}
		else
		{
			iVar18 = (iVar18 + -1);
		}
	}
	return 1;
}

int func_1561(int iParam0)
{
	return iParam0 * 31;
}

bool func_1562(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

int func_1563(int iParam0)
{
	if (iParam0 == 808655744)
	{
		return -364764277 /* GXTEntry: "Scrawny Nag" */;
	}
	switch (iParam0)
	{
		case joaat("a_c_horse_americanpaint_overo"):
			return -974145463 /* GXTEntry: "American Paint - Overo Coat" */;
		case joaat("a_c_horse_americanpaint_tobiano"):
			return 1432602132 /* GXTEntry: "American Paint - Tobiano Coat" */;
		case 1792770814:
			return 92296905 /* GXTEntry: "American Paint - Splashed White Coat" */;
		case -1963397600:
			return -842044823 /* GXTEntry: "American Paint - Grey Overo Coat" */;
		case -1250098797:
			return 1371398552 /* GXTEntry: "American Standardbred - Black Coat" */;
		case -318278790:
			return -745453539 /* GXTEntry: "American Standardbred - Buckskin Coat" */;
		case 55096099:
			return 1583029039 /* GXTEntry: "American Standardbred - Palomino Dapple Coat" */;
		case -458397856:
			return -783061276 /* GXTEntry: "American Standardbred - Silver Tail Buckskin Coat" */;
		case -444610976:
			return -1322521536 /* GXTEntry: "Andalusian - Dark Bay Coat" */;
		case 746627200:
			return 728055838 /* GXTEntry: "Andalusian - Rose Grey Coat" */;
		case 705691988:
			return 1100711204 /* GXTEntry: "Andalusian - Perlino Coat" */;
		case joaat("a_c_horse_appaloosa_blanket"):
			return -1782334639 /* GXTEntry: "Appaloosa - Blanket Coat" */;
		case -1554827654:
			return -1181052732 /* GXTEntry: "Appaloosa - Leopard Blanket Coat" */;
		case -1029277326:
			return -179102320 /* GXTEntry: "Appaloosa - Brown Leopard Coat" */;
		case joaat("a_c_horse_appaloosa_leopard"):
			return -1266863668 /* GXTEntry: "Appaloosa - Leopard Coat" */;
		case joaat("a_c_horse_arabian_black"):
			return -2078767648 /* GXTEntry: "Arabian - Black Coat" */;
		case -403470324:
			return -852553462 /* GXTEntry: "Arabian - Rose Grey Bay Coat" */;
		case joaat("a_c_horse_arabian_white"):
			return -80004868 /* GXTEntry: "Arabian - White Coat" */;
		case joaat("a_c_horse_ardennes_bayroan"):
			return 1813208211 /* GXTEntry: "Ardennes - Bay Roan Coat" */;
		case -635239558:
			return 836323303 /* GXTEntry: "Ardennes - Strawberry Roan Coat" */;
		case joaat("a_c_horse_ardennes_irongreyroan"):
			return 153881023 /* GXTEntry: "Ardennes - Iron Grey Roan Coat" */;
		case joaat("a_c_horse_belgian_blondchestnut"):
			return -1256798240 /* GXTEntry: "Belgian Draft - Blond Chestnut Coat" */;
		case joaat("a_c_horse_belgian_mealychestnut"):
			return 2118089359;
		case 1593035738:
			return -1537586382 /* GXTEntry: "Dutch Warmblood - Sooty Buckskin Coat" */;
		case 861505058:
			return 1440692746 /* GXTEntry: "Dutch Warmblood - Seal Brown Coat" */;
		case 687445866:
			return 697143532 /* GXTEntry: "Dutch Warmblood - Chocolate Roan Coat" */;
		case 1705182311:
			return 281128160 /* GXTEntry: "Hungarian Halfbred - Flaxen Chestnut Coat" */;
		case -78273782:
			return 1854519167 /* GXTEntry: "Hungarian Halfbred - Piebald Tobiano Coat" */;
		case -819697512:
			return -1376299681 /* GXTEntry: "Hungarian Halfbred - Dark Dapple Grey Coat" */;
		case -247265944:
			return -1955947684;
		case -1265030920:
			return 1361788230 /* GXTEntry: "Kentucky Saddler - Chestnut Pinto Coat" */;
		case 2024948086:
			return 1974379573 /* GXTEntry: "Kentucky Saddler - Grey Coat" */;
		case 1696286663:
			return 545109431 /* GXTEntry: "Kentucky Saddler - Silver Bay Coat" */;
		case -1342159303:
			return 1275638003 /* GXTEntry: "Missouri Fox Trotter - Amber Champagne Coat" */;
		case joaat("a_c_horse_missourifoxtrotter_silverdapplepinto"):
			return 2083573823 /* GXTEntry: "Missouri Fox Trotter - Silver Dapple Pinto Coat" */;
		case 2030804811:
			return 1235275977 /* GXTEntry: "Morgan - Bay Coat" */;
		case 1230359523:
			return 892601357 /* GXTEntry: "Morgan - Bay Roan Coat" */;
		case -1038436471:
			return 1224695367 /* GXTEntry: "Morgan - Flaxen Chestnut Coat" */;
		case 96930969:
			return 648301150 /* GXTEntry: "Morgan - Palomino Coat" */;
		case -1180427609:
			return -1597490733 /* GXTEntry: "Mustang - Grullo Dun Coat" */;
		case joaat("a_c_horse_mustang_wildbay"):
			return 2000205872 /* GXTEntry: "Mustang - Wild Bay Coat" */;
		case 43825738:
			return -1428527735 /* GXTEntry: "Mustang - Tiger Striped Bay Coat" */;
		case joaat("a_c_horse_nokota_blueroan"):
			return 170010697 /* GXTEntry: "Nokota - Blue Roan Coat" */;
		case -1261814606:
			return -742726637 /* GXTEntry: "Nokota - White Roan Coat" */;
		case 107013696:
			return -1714171692 /* GXTEntry: "Nokota - Reverse Dapple Roan Coat" */;
		case 1066034872:
			return -103101636 /* GXTEntry: "Shire - Dark Bay Coat" */;
		case 36009259:
			return -1999094324 /* GXTEntry: "Shire - Light Grey Coat" */;
		case -1599683008:
			return 1724200240 /* GXTEntry: "Suffolk Punch - Sorrel Coat" */;
		case -1693870200:
			return 237935328 /* GXTEntry: "Suffolk Punch - Red Chestnut Coat" */;
		case 1072019803:
			return 120848852 /* GXTEntry: "Tennessee Walker - Black Rabicano Coat" */;
		case 1074477367:
			return -868094182 /* GXTEntry: "Tennessee Walker - Chestnut Coat" */;
		case -85890205:
			return -887362763 /* GXTEntry: "Tennessee Walker - Dapple Bay Coat" */;
		case -727455979:
			return -847714194 /* GXTEntry: "Tennessee Walker - Red Roan Coat" */;
		case -1667789645:
			return 1756765331 /* GXTEntry: "Tennessee Walker - Flaxen Roan Coat" */;
		case -1924405794:
			return -813071670 /* GXTEntry: "Thoroughbred - Blood Bay Coat" */;
		case joaat("a_c_horse_thoroughbred_dapplegrey"):
			return -1900569233 /* GXTEntry: "Thoroughbred - Dapple Grey Coat" */;
		case -526169133:
			return 1688250187 /* GXTEntry: "Thoroughbred - Brindle Coat" */;
		case 2120708491:
			return -1262715164 /* GXTEntry: "Thoroughbred - Black Chestnut Coat" */;
		case 900144280:
			return 2010625508 /* GXTEntry: "Thoroughbred - Reverse Dapple Black Coat" */;
		case 1133837220:
			return -136225010 /* GXTEntry: "Turkoman - Dark Bay Coat" */;
		case joaat("a_c_horse_turkoman_gold"):
			return -225011104 /* GXTEntry: "Turkoman - Gold Coat" */;
		case -1604180548:
			return -1882436593 /* GXTEntry: "Turkoman - Silver Coat" */;
		case -683592019:
			return -757978903 /* GXTEntry: "Breton - Red Roan Coat" */;
		case 337109765:
			return 1909854428 /* GXTEntry: "Breton - Sorrel Coat" */;
		case -619132373:
			return 1592694494 /* GXTEntry: "Breton - Grullo Dun Coat" */;
		case 1544366970:
			return 981469777 /* GXTEntry: "Breton - Seal Brown Coat" */;
		case -1441144351:
			return 1064693514 /* GXTEntry: "Breton - Mealy Dapple Bay Coat" */;
		case -1717674545:
			return -1365665739 /* GXTEntry: "Breton - Steel Grey Coat" */;
		case 1825358734:
			return 1577022605 /* GXTEntry: "Criollo - Blue Roan Overo Coat" */;
		case 1138427579:
			return 381495209 /* GXTEntry: "Criollo - Dun Coat" */;
		case -1720251851:
			return 3032834 /* GXTEntry: "Criollo - Bay Brindle Coat" */;
		case 506887890:
			return -1722101672 /* GXTEntry: "Criollo - Sorrel Overo Coat" */;
		case 766293155:
			return -189605757 /* GXTEntry: "Criollo - Bay Frame Overo Coat" */;
		case 2147082926:
			return 863391233 /* GXTEntry: "Criollo - Marble Sabino Coat" */;
		case -1616287563:
			return 885568364 /* GXTEntry: "Kladruber - Black Coat" */;
		case -127412252:
			return -1540355548 /* GXTEntry: "Kladruber - White Coat" */;
		case -1881155818:
			return -601560591 /* GXTEntry: "Kladruber - Cremello Coat" */;
		case -955237712:
			return -370362766 /* GXTEntry: "Kladruber - Grey Coat" */;
		case -647020346:
			return -1698261864 /* GXTEntry: "Kladruber - Dapple Rose Grey Coat" */;
		case -1846319726:
			return -670301166 /* GXTEntry: "Kladruber - Silver Coat" */;
		case 1007570567:
			return -302057902;
		case 1029339151:
			return 1257620801;
		case -1424767799:
			return 821735821;
		case -217135948:
			return -769035812;
		case -156439156:
			return -1824684932;
		case 1344011125:
			return 1589592948;
		case joaat("a_c_donkey_01"):
			return -1331210307 /* GXTEntry: "Donkey" */;
		case joaat("a_c_horsemule_01"):
			return 122449722 /* GXTEntry: "Mule" */;
		case joaat("a_c_horsemulepainted_01"):
			return -1784502482 /* GXTEntry: "Mule - Painted" */;
		case 1883159941:
			return -1943445834;
		case -1028075925:
			return -635244104 /* GXTEntry: "Appaloosa - Black Snowflake" */;
		case 84224102:
			return -1427377767 /* GXTEntry: "Arabian - Grey Coat" */;
		case 1496579364:
			return -2055655009 /* GXTEntry: "Arabian - Red Chestnut Coat" */;
		case -1896838685:
			return -1293672675 /* GXTEntry: "Hungarian Halfbred - Liver Chestnut Coat" */;
		case -420599285:
			return -1179079660 /* GXTEntry: "Missouri Fox Trotter - Sable Champagne Coat" */;
		case 478986344:
			return 805526368 /* GXTEntry: "Mustang - Golden Dun Coat" */;
		case 446670976:
			return 1342496140 /* GXTEntry: "Tennessee Walker - Mahogany Bay Coat" */;
		case joaat("a_c_horse_shire_ravenblack"):
			return -126555855 /* GXTEntry: "Shire - Raven Black Coat" */;
		case 549900435:
			return 294243421 /* GXTEntry: "Dutch Warmblood - Cremello Gold Coat" */;
		case -2063289686:
			return -997197050 /* GXTEntry: "Thoroughbred - Seal Brown Coat" */;
		case 917402668:
			return -235714362 /* GXTEntry: "Appaloosa - Blanket Coat" */;
		case -914712122:
			return -1678164 /* GXTEntry: "Nokota - Blue Roan Coat" */;
		case -598917269:
			return -977833913 /* GXTEntry: "Tennessee Walker - Black Rabicano Coat" */;
		case joaat("a_c_horse_winter02_01"):
			return 1589164943 /* GXTEntry: "Thoroughbred - Silver Bay Coat" */;
		default:
			break;
	}
	return 0;
}

void func_1564()
{
	Global_1903929->f_124 = (Global_1070356->f_26934[48 /*4*/])->f_3;
	Global_1903929->f_124.f_1 = 0;
	Global_1903929->f_124.f_2 = 0;
	Global_1903929->f_124.f_3 = 0;
	Global_1903929->f_124.f_4 = 0;
}

int func_1565(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1844561321;
		case 0:
			return 1653124001;
		case 1:
			return -430733995;
		case 2:
			return 1501387297;
		case 3:
			return -1143491563;
		case 4:
			return -1460176899;
		case 5:
			return 1003181529;
		default:
			break;
	}
	return 0;
}

void func_1566(var uParam0, int iParam1)
{
	if (func_1155(uParam0, iParam1))
	{
		return;
	}
	func_146(uParam0, iParam1);
}

int func_1567(int iParam0, int iParam1)
{
	if (!func_1203(iParam0, 2))
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

int func_1568(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_1569(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	var uVar0;

	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return 0;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_692(iParam2, joaat("default"));
		if (iParam3 == 0)
		{
			return 0;
		}
	}
	uVar0 = 5;
	if (!NETSHOPPING::_0xD1555FBC96C88444(iParam2, iParam3, iParam4, &uVar0, 5))
	{
		return 0;
	}
	if (!func_1719(uParam0, iParam1, &uVar0, iParam4, bParam5))
	{
		return 0;
	}
	return 1;
}

struct<16> func_1570(int iParam0, var uParam1)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_695(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_1571(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_1720(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			return func_1721(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 16), iVar0, uParam1);
		}
	}
	else
	{
		return func_1722(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_1572(int iParam0, struct<16> Param1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272170->f_20)
	{
		if (&Global_1272170->f_20.f_1[iVar0 /*20*/] == iParam0)
		{
			if ((Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 == 1 || (Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 == 5)
			{
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

int func_1573(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		case 13:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1574(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	return 1;
}

int func_1575(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1317351007;
		case 1:
			return -500478573;
		case 2:
			return -806573802;
		case 3:
			return -1109949204;
		default:
			break;
	}
	return -1060513333;
}

int func_1576(struct<4> Param0, int iParam4, int iParam5, bool bParam6)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_1723(Param0, iParam4, &Var0, iParam5, bParam6))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_1577()
{
	return DATAFILE::_0x603AC35FD4602C76(Global_1132968->f_8);
}

int func_1578(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (iParam0 == (Global_1132968->f_11.f_1556[iVar0 /*46*/])->f_2)
		{
			return &(Global_1132968->f_11.f_1556[iVar0 /*46*/]);
		}
		iVar0++;
	}
	return 0;
}

int func_1579(int iParam0, var uParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	struct<46> Var2;
	bool bVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	vector3 vVar52;

	if (iParam2 == 2)
	{
		bVar0 = func_1724() == true;
	}
	else if (iParam2 == 1)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam3 != -1)
	{
		bVar1 = true;
	}
	if (!func_1369(iParam0))
	{
		func_1725(uParam1);
		return 0;
	}
	Var2 = { *(Global_1132968->f_11.f_1556[func_1370(iParam0, 1) /*46*/]) };
	*uParam1 = Var2;
	uParam1->f_2 = Var2.f_2;
	uParam1->f_1 = Var2.f_1;
	uParam1->f_8 = Var2.f_3;
	uParam1->f_16 = Var2.f_4;
	uParam1->f_32 = Var2.f_7;
	uParam1->f_33 = Var2.f_8;
	if (!func_691(uParam1->f_2, 0))
	{
		func_1725(uParam1);
		return 0;
	}
	bVar48 = true;
	if (!func_1369(*uParam1))
	{
		func_1725(uParam1);
		return 0;
	}
	if (!bVar0)
	{
		if (func_1583())
		{
			uParam1->f_19 = func_1726(*uParam1);
			uParam1->f_20 = 1;
			uParam1->f_21 = 1;
			uParam1->f_9 = Var2.f_3;
			uParam1->f_10 = Var2.f_6;
			if (func_1574(uParam1->f_19))
			{
				uParam1->f_13 = (Global_1132968->f_5525.f_34[uParam1->f_19 /*3*/])->f_1;
			}
			else
			{
				uParam1->f_13 = 0;
			}
		}
		else
		{
			uParam1->f_19 = func_1727(*uParam1);
			iVar49 = func_1575(uParam1->f_19);
			uParam1->f_3 = { func_695(uParam1->f_2, func_987(bVar48), iVar49, bVar48) };
			uParam1->f_21 = func_1728(*uParam1);
			uParam1->f_13 = func_1729(*uParam1);
			uParam1->f_15 = func_1730(*uParam1);
			uParam1->f_20 = func_1731(*uParam1);
			uParam1->f_22 = func_1732(*uParam1);
			uParam1->f_14 = func_1733(*uParam1);
			uParam1->f_23 = func_1734(*uParam1);
			uParam1->f_24 = func_1735(*uParam1);
			uParam1->f_25 = func_1736(*uParam1);
			uParam1->f_26 = func_1737(uParam1);
			uParam1->f_27 = func_1738(uParam1);
			uParam1->f_29 = func_1739(*uParam1);
			uParam1->f_30 = func_1740(*uParam1);
			uParam1->f_31 = func_1741(*uParam1);
			iVar50 = -915411861;
			if (uParam1->f_27)
			{
				iVar50 = uParam1->f_28;
			}
			if (!uParam1->f_20)
			{
				uParam1->f_17 = func_1742(Var2.f_2, iVar50);
			}
			else
			{
				uParam1->f_17 = func_1743(uParam1->f_13, iVar50);
			}
			uParam1->f_18 = func_1742(Var2.f_2, -570078785);
			if (bVar1)
			{
				uParam1->f_26 = 0;
				uParam1->f_27 = 0;
				if (uParam1->f_23)
				{
					uParam1->f_23 = iParam3 == uParam1->f_13 + 1;
				}
				if (uParam1->f_25)
				{
					uParam1->f_25 = iParam3 == uParam1->f_13 + 1;
				}
				if (uParam1->f_20)
				{
					uParam1->f_20 = uParam1->f_13 >= iParam3;
				}
				uParam1->f_13 = iParam3;
			}
			if (uParam1->f_20)
			{
				uParam1->f_9 = Var2.f_3;
				uParam1->f_10 = Var2.f_6;
			}
			else
			{
				func_1744(uParam1);
			}
		}
	}
	else
	{
		iVar51 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1939231->f_1433.f_8));
		uParam1->f_9 = Var2.f_3;
		uParam1->f_10 = Var2.f_6;
		if (NETWORK::_0x255A5EF65EDA9167(iVar51))
		{
			uParam1->f_19 = func_1745(*uParam1, iVar51);
			if (func_1574(uParam1->f_19))
			{
				vVar52 = { *(((*Global_1139395)[iVar51 /*34*/])->f_10[uParam1->f_19 /*3*/]) };
				uParam1->f_13 = vVar52.y;
				uParam1->f_21 = func_1746(&(vVar52.f_2), 1);
			}
		}
	}
	uParam1->f_11 = func_1747(uParam1);
	uParam1->f_12 = func_1748(Var2, uParam1);
	return 1;
}

bool func_1580(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	return Param0.f_1 == joaat("deadeye");
}

void func_1581()
{
	PLAYER::_0xAE4BCC79C587EBBF(&(Global_1275573->f_154[&Global_1275573]), 0f, 0);
	PLAYER::_0x4D1699543B1C023C(&(Global_1275573->f_154[&Global_1275573]), 0f);
	PLAYER::_0xB783F75940B23014(&(Global_1275573->f_154[&Global_1275573]), 0f);
	PLAYER::_0x6B5DDFB967E5073D(&(Global_1275573->f_154[&Global_1275573]), 0);
	if (PLAYER::_0xB16223CB7DA965F0(&(Global_1275573->f_154[&Global_1275573])))
	{
		PLAYER::_0xAE637BB8EF017875(&(Global_1275573->f_154[&Global_1275573]), 1);
	}
	PLAYER::_0x95EE1DEE1DCD9070(&(Global_1275573->f_154[&Global_1275573]), 0);
}

void func_1582(int iParam0)
{
	struct<34> Var0;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_1587(Var0, iParam0);
}

bool func_1583()
{
	return (func_390(0) && func_390(5));
}

void func_1584(int iParam0)
{
	int iVar0;

	iVar0 = func_1749(iParam0);
	func_1750(iVar0);
}

void func_1585(var uParam0)
{
	bool bVar0;
	int iVar1;

	func_1751(Global_1939231->f_1433.f_4174.f_37[func_1370(*uParam0, 1) /*44*/], uParam0);
	bVar0 = func_1752(*uParam0);
	iVar1 = UIAPPS::_0x96FD694FE5BE55DC(joaat("abilities"));
	if (bVar0)
	{
		if (iVar1 == 756463805)
		{
			func_1753(*uParam0);
			return;
		}
		else
		{
			func_1754(&(Global_1939231->f_1433.f_4174.f_1936), *uParam0);
			func_1755(*uParam0);
		}
	}
}

void func_1586(int iParam0, int iParam1)
{
	struct<34> Var0;
	int iVar34;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	iVar34 = func_1756(iParam0, 1);
	if (!func_1375(iVar34, &Var0, 0, -1))
	{
		func_1725(&Var0);
	}
	func_1757(iParam0, Global_1939231->f_1433.f_4174.f_1579[iParam0 /*54*/], Var0);
	if (iParam1 && func_1758(iParam0))
	{
		func_1759(&(Global_1939231->f_1433.f_4174.f_1985), Var0, iParam0);
	}
}

void func_1587(struct<14> Param0, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, int iParam34)
{
	Global_1132968->f_5351.f_36[iParam34 /*3*/] = Param0;
	(Global_1132968->f_5351.f_36[iParam34 /*3*/])->f_1 = Param0.f_13;
}

void func_1588(struct<34> Param0, int iParam34)
{
	int iVar0;
	int iVar1;

	if (!func_1369(Param0))
	{
		return;
	}
	if (!func_1760(Param0.f_13))
	{
		return;
	}
	if (func_1580(Param0))
	{
		func_1761(Param0);
	}
	iVar0 = func_1749(iParam34);
	iVar1 = ((Global_1132968->f_11.f_1556[func_1370(Param0, 1) /*46*/])->f_9[Param0.f_13 /*12*/])->f_10;
	func_1762(iVar0, iVar1);
}

bool func_1589(int iParam0)
{
	float fVar0;

	fVar0 = (func_1763(iParam0) - PLAYER::_0xDF66A37936D5F3D9(iParam0));
	return fVar0 <= 1f;
}

int func_1590(int iParam0, int iParam1, float fParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (fParam2 > 100f)
	{
		fParam2 = 100f;
	}
	else if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iParam0, func_1764(iParam1), BUILTIN::CEIL(fParam2));
	return 1;
}

void func_1591(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_972(2);
	}
	if (iParam1 > 0)
	{
		iParam1 = (iParam1 + MISC::GET_GAME_TIMER());
	}
	switch (iParam2)
	{
		case 0:
			Global_1954472->f_1331.f_16[iParam0 /*3*/] = iParam1;
			break;
		case 1:
			Global_1954472->f_1465.f_2.f_16[iParam0 /*3*/] = iParam1;
			break;
		default:
			break;
	}
}

void func_1592(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_1765(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_0x437C08DB4FEBE2BD(iParam0, func_1766(iParam1), fParam2, -1);
	}
}

void func_1593(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	var uVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_972(2);
	}
	uVar0 = Global_1275573->f_21;
	func_1767(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_1768(iParam0, uVar0, iParam3);
	}
}

char* func_1594()
{
	return "PlayerRPGCoreDeadEye";
}

char* func_1595()
{
	return "PlayerRPGCore";
}

int func_1596()
{
	int iVar0;

	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_34, &iVar0, true, 0, false))
		{
			if (WEAPON::_0x6AD66548840472E5(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1597(float fParam0, float fParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = (fParam0 / fParam1);
	fVar1 = (-1f * (fVar0 - 1f));
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerHealthLow"))
	{
		GRAPHICS::ANIMPOSTFX_PLAY("PlayerHealthLow");
	}
	GRAPHICS::_0xCAB4DD2D5B2B7246("PlayerHealthLow", fVar1);
}

void func_1598()
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerHealthLow"))
	{
		GRAPHICS::_0xC5CB91D65852ED7E("PlayerHealthLow");
	}
}

char* func_1599(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
		case 1:
			return "PlayerOverpower";
		case 2:
			return "PlayerOverpower";
		default:
			break;
	}
	return "";
}

void func_1600(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0x16F2C8C084AB2092(iVar0);
	}
	iVar1 = func_965(2);
	func_1769(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_1601(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6[20];

	iVar1 = Global_1140484->f_41657.f_1.f_42;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = &Global_1140484->f_41657.f_1[iVar2 /*2*/];
		iVar3 = func_1770(iVar0, 1);
		if (&Global_1140484->f_30603.f_847[iVar3 /*12*/] == iParam0)
		{
			func_1750(iVar0);
			Global_1140484->f_41657.f_1.f_42 = (Global_1140484->f_41657.f_1.f_42 - 1);
		}
		else
		{
			*(Var6[iVar4 /*2*/]) = { *(Global_1140484->f_41657.f_1[iVar2 /*2*/]) };
			iVar4++;
		}
		iVar2++;
	}
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		*(Global_1140484->f_41657.f_1[iVar5 /*2*/]) = { *(Var6[iVar5 /*2*/]) };
		iVar5++;
	}
}

void func_1602(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0xFC3B580C4380B5B7(iVar0);
	}
	iVar1 = func_967(2);
	func_1771(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_1603(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = 10;
	}
	iVar0 = func_966(2);
	func_1379(BUILTIN::TO_FLOAT((iParam0 * iVar0)), 0, bParam1);
}

void func_1604(int iParam0, bool bParam1, bool bParam2)
{
	func_1383(iParam0, 100f, bParam1, bParam2, 1, 2);
}

int func_1605(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_1772(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

void func_1606(var uParam0)
{
	int iVar0;

	iVar0 = func_1773(uParam0);
	if (iVar0 != 0)
	{
		MISC::_0xF63FA29D4A9ACA86(*uParam0, func_1297(uParam0));
		PED::_0xC2745D9261664901(*uParam0, func_1773(uParam0));
	}
}

int func_1607(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return 0;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
	if (bParam2 && !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return 0;
	}
	if (bParam1 && PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	return 1;
}

int func_1608(int iParam0)
{
	var uVar0;

	if (func_23() != -1)
	{
		return 0;
	}
	if (func_1407(iParam0, 1048576))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_985(iParam0, &uVar0, 1, 0, 0, -1, 0);
	}
	return func_1091(iParam0, 1);
}

void func_1609(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_988(iParam0) != joaat("weapon"))
	{
		return;
	}
	iVar0 = func_1412(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_1619(iVar0))
	{
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iVar0, 0, 0) && func_1032(iParam0, 0, 0, 0) == 0))
		{
			if (func_23() == -1)
			{
				func_1413(iVar0);
			}
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_1435(iParam0, iParam1, 0, 0, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1610(int iParam0, int iParam1)
{
	if (func_1361(iParam0, 58855631))
	{
		func_1774(iParam0, -915411861, iParam1, 1);
	}
}

int func_1611()
{
	if (((((!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_34, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_34)) && !func_1295(Global_34, 1369124074)) && !func_1295(Global_34, 713668775)) && !TASK::_0xEC7E480FF8BD0BED(Global_34)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_34, false))
	{
		return 1;
	}
	return 0;
}

int func_1612(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if ((Var0[iVar42 /*2*/])->f_1 == iParam1)
			{
				return &(Var0[iVar42 /*2*/]);
			}
			iVar42++;
		}
	}
	return 0;
}

int func_1613(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_1614(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_39.f_3434[iVar1]), iVar2);
}

void func_1615(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_39.f_3434[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_39.f_3434[iVar1] = uVar3;
}

void func_1616(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_1775(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_1776(1);
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_1776(2);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_1776(3);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 30:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 31:
			break;
		case 32:
			func_1777(1);
			break;
		case 33:
			func_1778(1);
			break;
		case 34:
			func_1779(1);
			break;
		case 35:
			break;
		case 36:
			func_1780(0);
			break;
		case 37:
			func_1781(0);
			break;
		case 38:
			func_1782(0);
			break;
		case 39:
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if (func_1783() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_1460("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_348(675, 0);
			break;
		case 3:
			if (func_1783() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_1460("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_348(676, 0);
			break;
		case 4:
			if (func_1783() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_1460("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_348(677, 0);
			break;
		case 5:
			if (func_1783() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_1460("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_348(678, 0);
			break;
		case 23:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-200143754, true);
			UNLOCK::_UNLOCK_SET_VISIBLE(-200143754, true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			break;
		case 47:
			if (func_23() == -1)
			{
				if (!func_1091(1013902307, 1))
				{
					func_393(1013902307, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_23() == -1)
			{
				if (!func_1091(1013902307, 1))
				{
					func_393(1013902307, 1, 752097756);
				}
				if (!func_1091(142640135, 1))
				{
					func_393(142640135, 1, 752097756);
				}
			}
			break;
		case 48:
			if (func_23() == -1)
			{
				if (!func_1091(786809402, 1))
				{
					func_393(786809402, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_23() == -1)
			{
				if (!func_1091(786809402, 1))
				{
					func_393(786809402, 1, 752097756);
				}
				if (!func_1091(-518019409, 1))
				{
					func_393(-518019409, 1, 752097756);
				}
			}
			break;
		case 22:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 24:
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 43:
			break;
		case 44:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-843169622, true);
			Global_1939178->f_41 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 45:
			break;
		case 46:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), true);
			break;
		case 51:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-78935213, true);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-384786155, true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(296662302, true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-1871453000, true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(1397349651, true);
			break;
	}
}

int func_1617(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_1123(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

int func_1618(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_VISIBLE(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_1619(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
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

void func_1620(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_34, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar2 = func_1784(WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_34, iParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_34, &iVar1, iParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_34, iParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_34, iParam0, iVar1);
		}
	}
}

void func_1621(int iParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34) || Global_1939178->f_6)
	{
		return;
	}
	if (WEAPON::_0xC4DEC3CA8C365A5D(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::_0xDDC64F5E31EEDAB6(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::_0xC212F1D05A8232BB(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::_0x0A82317B7EBFC420(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::_0xC75386174ECE95D5(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_34, sVar0, iParam0);
	iVar2 = func_1785();
	func_1786(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_34, sVar1, iVar2);
}

int func_1622(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_1033(iParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, 954660191) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_0x6AD66548840472E5(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, WEAPON::_0x5C2EA6C44F515F34(iParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

int func_1623()
{
	return 0;
}

bool func_1624(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(iParam0));
}

int func_1625(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_0x0556E9D2ECF39D01(iVar0))
		{
			if (!func_1408(49))
			{
				if (!func_1408(47))
				{
					return 149;
				}
				return 151;
			}
		}
		else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
		{
			if (!func_1408(50))
			{
				if (!func_1408(48))
				{
					return 150;
				}
				return 152;
			}
		}
	}
	return 153;
}

int func_1626(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	int iVar25;

	if (func_23() == 0)
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_1091(1811977508 /* GXTEntry: "Elk Antler Trinket" */, 1))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_34, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (&Var1.f_1[iVar24] == 2084597891)
		{
			return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = &Var1.f_1[iVar24];
			if (func_691(iVar25, 0) && func_1361(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_1627(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (bParam3)
		{
			func_1787(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_1632(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_1628(int iParam0, bool bParam1, float fParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1788() || func_1789())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_1632(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
		}
		func_1632(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, 752097756);
		func_443(func_505(1644987397), iVar1);
	}
}

int func_1629(int iParam0)
{
	switch (iParam0)
	{
		case -59585102: /* GXTEntry: "Tonics Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
		case 1018123892: /* GXTEntry: "Ingredients Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
		case 982182330: /* GXTEntry: "Materials Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
		case -1406390556: /* GXTEntry: "Valuables Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
		case -1455768246: /* GXTEntry: "Kit Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
		case -921879912: /* GXTEntry: "Provisions Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
	}
	return 0;
}

char* func_1630(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_1631(int iParam0)
{
	var uVar0;

	if (!func_1790(iParam0, &uVar0, joaat("inventory"), 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

var func_1632(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _NAMESPACE71::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_1791(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_1633()
{
	return !&Global_1912978;
}

void func_1634(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1912978->f_3)
	{
		if ((((&Global_1912978->f_4[iVar0 /*6*/] == iParam0 && (Global_1912978->f_4[iVar0 /*6*/])->f_2 == bParam2) && (Global_1912978->f_4[iVar0 /*6*/])->f_3 == iParam3) && (Global_1912978->f_4[iVar0 /*6*/])->f_4 == bParam4) && (Global_1912978->f_4[iVar0 /*6*/])->f_5 == bParam5)
		{
			(Global_1912978->f_4[iVar0 /*6*/])->f_1 = ((Global_1912978->f_4[iVar0 /*6*/])->f_1 + iParam1);
			return;
		}
		iVar0++;
	}
	if (Global_1912978->f_3 < 19)
	{
		Global_1912978->f_4[Global_1912978->f_3 /*6*/] = iParam0;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_1 = iParam1;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_2 = bParam2;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_3 = iParam3;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_4 = bParam4;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_5 = bParam5;
		Global_1912978->f_3++;
	}
}

char* func_1635(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_1636(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var3.f_2[iVar0 /*3*/])))
			{
				Jump @227; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY((Var3.f_2[iVar0 /*3*/])->f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(&(Var3.f_2[iVar0 /*3*/]));
				iVar2 = MISC::GET_HASH_KEY((Var3.f_2[iVar0 /*3*/])->f_1);
				if (iParam2 != 0 && (Var3.f_2[iVar0 /*3*/])->f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { *(Var3.f_2[iVar0 /*3*/]) };
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

char* func_1637(int iParam0)
{
	if (func_1361(iParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_1361(iParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_1361(iParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_1361(iParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_1361(iParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_1361(iParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_1361(iParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_1361(iParam0, 781094263))
	{
		return "collectible_flowers";
	}
	return "";
}

int func_1638(int iParam0)
{
	switch (iParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return 0;
		default:
			break;
	}
	return 1;
}

int func_1639(int iParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_691(iParam0, 0))
	{
		return 0;
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var0))
	{
		iVar35 = 0;
		while (iVar35 < 8)
		{
			if ((Var0.f_18[iVar35 /*2*/])->f_1 == 14460646)
			{
				if (&Var0.f_18[iVar35 /*2*/] != 0)
				{
					return &(Var0.f_18[iVar35 /*2*/]);
				}
			}
			iVar35++;
		}
	}
	return 0;
}

int func_1640(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1792(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

int func_1641(int iParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_691(iParam0, 0))
	{
		return 0;
	}
	StringCopy(sParam1, func_1793(iParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_1794(iParam0))
	{
		return 0;
	}
	StringCopy(&cVar1, func_1795(iParam0), 128);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
		return 0;
	}
	StringConCat(&cVar1, " - ", 128);
	iVar0 = (iVar0 + HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar1));
	StringConCat(&cVar1, sParam1, 128);
	if (iVar0 >= 127)
	{
		return 0;
	}
	*sParam1 = { cVar1 };
	return 1;
}

char* func_1642(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

int func_1643(int iParam0)
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

bool func_1644(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_1796(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_1645(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_1797(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_1798(iVar0);
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
			uParam2->f_5 = func_1799(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1800(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1801(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_1802(iVar0);
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

bool func_1646(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_23() == 0)
	{
		return func_1803(iParam0);
	}
	return iParam0 <= func_1804();
}

int func_1647(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1225057->f_8943.f_97 >= 10)
	{
		return -1;
	}
	if (iParam0 == 1393257577)
	{
		iVar0 = Global_1225057->f_8943.f_99;
		iVar1 = Global_1225057->f_8943.f_97;
		while (iVar1 > 0)
		{
			iVar0 = (iVar0 - 1);
			if (iVar0 < 0)
			{
				iVar0 = 9;
			}
			if (&Global_1225057->f_8943.f_16[iVar0 /*8*/] == iParam0)
			{
				return -1;
			}
			iVar1 = (iVar1 - 1);
		}
	}
	iVar2 = Global_1225057->f_8943.f_99;
	Global_1225057->f_8943.f_16[iVar2 /*8*/] = iParam0;
	(Global_1225057->f_8943.f_16[iVar2 /*8*/])->f_5 = iParam2;
	(Global_1225057->f_8943.f_16[iVar2 /*8*/])->f_6 = iParam1;
	Global_1225057->f_8943.f_97++;
	Global_1225057->f_8943.f_99 = (Global_1225057->f_8943.f_99 + 1 % 10);
	return iVar2;
}

int func_1648(bool bParam0, bool bParam1, bool bParam2)
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

int func_1649(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && iParam1 == -915411861) && func_1805(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_1806(iParam0))
	{
		return func_1808(func_1807(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_1809(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32 /*2*/] == 2084597891 || &Var0[iVar32 /*2*/] == 773203532)
		{
			if (iParam5 != 0 && &Var0[iVar32 /*2*/] != iParam5)
			{
			}
			else
			{
				return (Var0[iVar32 /*2*/])->f_1;
				Jump @204; //curOff = 188
				if (&Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
				if (!bParam3)
				{
				}
				return 0;
			}
		}
	}

struct<16> func_1650(int iParam0, struct<4> Param1, int iParam5, int iParam6, bool bParam7)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_695(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = iParam5;
	if (bParam7)
	{
		Var0.f_15 = func_692(iParam0, joaat("default"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_948() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_1651(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

void func_1652(int iParam0)
{
	int iVar0;
	int iVar1;

	VOLUME::_0x748C5F51A18CB8F0(0);
	if (!func_1651(iParam0))
	{
		return;
	}
	func_1810(iParam0, 0);
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_775(iVar0))
		{
			if (func_1812(func_1811(iVar0, 1, 1)) == iParam0)
			{
				func_1813(iVar0, 0);
				func_1814(iVar0, 0, 350);
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 17)
	{
		if (func_1815(iVar1))
		{
			if (func_1816(iVar1) == iParam0)
			{
				func_1817(iVar1, 0);
			}
		}
		iVar1++;
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
}

void func_1653(var uParam0)
{
	func_1818(uParam0, 0);
}

void func_1654(int iParam0)
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
	Global_1939178->f_21 = func_1819();
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
			func_1820(&(Global_1939178->f_28), &(Global_1939178->f_33));
			Global_1939178->f_32 = iParam0;
			break;
		case 1:
			Global_1939178->f_24 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1939178->f_24)
			{
				if (bVar1 && WEAPON::_0x6E4E1A82081EABED(Global_1939178->f_38))
				{
					Global_1939178->f_24 = PED::_0xB65A4DAB460A19BD(Global_34) != 0;
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

var func_1655(int iParam0)
{
	return &(Global_1099294->f_372[iParam0 /*3*/]);
}

int func_1656(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_1821(bParam0, &iVar0, &iVar1))
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

int func_1657(var uParam0)
{
	int iVar0;

	iVar0 = Global_1939178->f_34;
	if (func_23() == -1)
	{
		if (Global_1939178->f_34 == 0)
		{
			iVar0 = func_1822(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1939178->f_34) || !&Global_1954472->f_1616[4])
	{
		iVar0 = func_1822(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_1687(iVar0) == -1)
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

void func_1658(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_1823(uParam0);
	}
}

int func_1659(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_1687(iParam2);
	}
	else
	{
		iVar1 = func_1686(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_1687(iParam0);
	}
	else
	{
		iVar0 = func_1686(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_614(*uParam1, 8388608))
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

float func_1660(int iParam0, int iParam1)
{
	return func_1683(iParam0, iParam1, 1, 1);
}

float func_1661(var uParam0)
{
	return uParam0->f_28;
}

int func_1662(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_1663(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_484(uParam0, 134217728);
	}
	else
	{
		func_615(uParam0, 134217728);
	}
}

void func_1664()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_1665(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
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
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_1683(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_0x6AD66548840472E5(func_1824(iVar0, 0)))
		{
			if (func_1825(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_1666(var uParam0)
{
	return uParam0->f_17;
}

int func_1667(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_614(*uParam0, 4194304))
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

int func_1668(var uParam0)
{
	return uParam0->f_18;
}

int func_1669(var uParam0)
{
	return uParam0->f_19;
}

int func_1670(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_0x6AD66548840472E5(func_1824(iVar0, 0)))
		{
			if (func_1826(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_1671(var uParam0)
{
	return uParam0->f_24;
}

int func_1672(var uParam0)
{
	return uParam0->f_22;
}

int func_1673(var uParam0)
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

int func_1674(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_1827(iParam0, vParam4, 0.5f))
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

int func_1675(int iParam0)
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
	if (func_1828(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_1676(int iParam0)
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

int func_1677(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_1829(iParam1))
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

int func_1678(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_1829(iParam1))
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

int func_1679(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = func_1830(uParam0);
	if (func_1829(iParam1))
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

int func_1680(int iParam0, int iParam1)
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

int func_1681(int iParam0, int iParam1)
{
	if (PED::_0xB65A4DAB460A19BD(iParam0) == iParam1)
	{
		return 1;
	}
	if (WEAPON::_0x8D50F43298AB9545(iParam0, iParam1))
	{
		return 1;
	}
	if (!WEAPON::_0x6E4E1A82081EABED(func_658(iParam0, 1, 0, 0)) && !func_658(iParam0, 1, 0, 0) == 1151374672)
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

bool func_1682(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_1683(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_1684(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_599(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_1685(var uParam0)
{
	return uParam0->f_25;
}

int func_1686(int iParam0)
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

int func_1687(int iParam0)
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

int func_1688(int iParam0, vector3 vParam1, float fParam4)
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
	fVar9 = func_1831(vVar3, vVar6);
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
	if (func_1832(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_1689(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_1680(Global_34, &iVar1))
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
		fVar2 = func_1683(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_1683(iParam0, Global_1939178->f_34, 0, 1) < 2.5f)
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

int func_1690(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_1821(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_1692(uParam1, iVar0))
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
				if (!bParam2 || !func_1692(uParam1, iVar1))
				{
					if (func_599(iVar1, Global_35, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_1691(var uParam0)
{
	return func_614(*uParam0, 131072);
}

int func_1692(var uParam0, int iParam1)
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

int func_1693(int iParam0)
{
	return 0;
}

int func_1694(var uParam0)
{
	return uParam0->f_21;
}

int func_1695(int iParam0, var uParam1, bool bParam2, float fParam3)
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

int func_1696()
{
	var uVar0;

	if (func_1537(16))
	{
		uVar0 = Global_1050004->f_12;
	}
	else
	{
		uVar0 = func_1833();
	}
	return uVar0;
}

struct<8> func_1697(int iParam0)
{
	char cVar0[64];

	if (MISC::IS_STRING_NULL_OR_EMPTY((*Global_1050937)[iParam0 /*8*/]))
	{
		StringCopy(&cVar0, "TEAM_", 64);
		StringIntConCat(&cVar0, iParam0, 64);
		StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&cVar0), 64);
		return cVar0;
	}
	return *((*Global_1050937)[iParam0 /*8*/]);
}

int func_1698(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	return func_1699(iParam0, iParam1, iParam2, bParam3, bParam4);
}

int func_1699(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (iParam2 > 1)
	{
		if (bParam3)
		{
			switch (iParam0)
			{
				case 0:
					return -275684858;
				case 1:
					return -1561147190;
				case 2:
					return -736318691;
				case 3:
					return 158864851;
				case 4:
					return 923463928;
				case 5:
					return -317694716;
				case 6:
					return 461388259;
				case 7:
					return 1811916478;
				default:
					break;
			}
			return joaat("COLOR_WHITE");
		}
		if (iParam1 == iParam0)
		{
			return 1765299542;
		}
	}
	else if (bParam4)
	{
		if (iParam2 < 2)
		{
			return joaat("COLOR_WHITE");
		}
		else
		{
			return 1765299542;
		}
	}
	return -1031763995;
}

var func_1700()
{
	return Global_1099294->f_26.f_18;
}

bool func_1701()
{
	return &Global_1048583;
}

float func_1702(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_1;
		case 1:
			return uParam0->f_2;
		case 2:
			return uParam0->f_3;
		case 3:
			return uParam0->f_4;
		default:
			break;
	}
	return 0f;
}

char* func_1703(char* sParam0)
{
	return HUD::_0xD8402B858F4DDD88(sParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0));
}

void func_1704(var uParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;

	sVar0 = func_1834(uParam0->f_159, uParam0->f_160);
	sVar1 = func_1835(uParam0->f_159, uParam0->f_160);
	sVar2 = func_1836(uParam0->f_159, uParam0->f_160);
	sVar3 = func_1837();
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat1", sVar0);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat1Color", joaat("COLOR_WHITE"));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat2", sVar1);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat2Color", joaat("COLOR_WHITE"));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat3", sVar2);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat3Color", joaat("COLOR_WHITE"));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "StatRounds", sVar3);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "StatRoundsColor", joaat("COLOR_WHITE"));
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HeadingColor", joaat("COLOR_WHITE"));
}

void func_1705(var uParam0, bool bParam1, bool bParam2)
{
	if (!MISC::IS_BIT_SET(uParam0->f_159, 0) && !MISC::IS_BIT_SET(uParam0->f_159, 17))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_159, 3))
		{
			if (bParam2)
			{
				DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat0", HUD::_GET_LABEL_TEXT("UIC_LDR_RNDW"));
				DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat0Color", joaat("COLOR_WHITE"));
			}
		}
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat1", func_1834(uParam0->f_159, uParam0->f_160));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat1Color", joaat("COLOR_WHITE"));
	}
	else if (func_1521(uParam0->f_159))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_159, 3))
		{
			if (bParam2)
			{
				DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat2", HUD::_GET_LABEL_TEXT("UIC_LDR_RNDW"));
				DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat2Color", joaat("COLOR_WHITE"));
			}
		}
	}
	else if (!MISC::IS_BIT_SET(uParam0->f_159, 3))
	{
		if (bParam2)
		{
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat1", HUD::_GET_LABEL_TEXT("UIC_LDR_RNDW"));
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat1Color", joaat("COLOR_WHITE"));
		}
	}
	if (!func_1521(uParam0->f_159))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat2", func_1835(uParam0->f_159, uParam0->f_160));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat2Color", joaat("COLOR_WHITE"));
	}
	if (!MISC::IS_BIT_SET(uParam0->f_159, 3) || MISC::IS_BIT_SET(uParam0->f_159, 0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat3", func_1836(uParam0->f_159, uParam0->f_160));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat3Color", joaat("COLOR_WHITE"));
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HeadingColor", joaat("COLOR_WHITE"));
}

int func_1706()
{
	return 1;
}

void func_1707(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	char* sVar7;
	float fVar8;

	if (Global_1939067->f_108)
	{
		func_1838(uParam0, uParam1, iParam2, iParam7, iParam8);
	}
	else
	{
		func_1321(uParam0, uParam1);
		iVar2 = PLAYER::PLAYER_ID();
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!func_1510(&(((*uParam1)[iVar0 /*23*/])->f_14)))
			{
			}
			else
			{
				iVar1++;
				func_1511(uParam0, uParam1, iVar0, bParam4);
				if (bParam3)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "Position", func_1512(uParam1, iVar0));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "Position", iVar1);
				}
				bVar3 = iVar2 == ((*uParam1)[iVar0 /*23*/])->f_14;
				iVar4 = func_1513(uParam0, uParam1, iVar0, iVar2, bVar3);
				if (!bParam6)
				{
					if (!bParam4)
					{
						func_1514(uParam0, uParam1, iVar0, bParam3, iVar4);
					}
				}
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Gamertag", &(((*uParam1)[iVar0 /*23*/])->f_14.f_1));
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "GamertagColor", iVar4);
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "CrewTag", func_1515());
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Rank", func_1516(((*uParam1)[iVar0 /*23*/])->f_14));
				if (!bParam4)
				{
					if (func_1517())
					{
						if (func_1518(((*uParam1)[iVar0 /*23*/])->f_14))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "Spectating", true);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "ShowRank", false);
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "Spectating", false);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "ShowRank", true);
						}
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "Spectating", false);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "ShowRank", true);
					}
				}
				if (bParam4)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat0", func_1519(((*uParam1)[iVar0 /*23*/])->f_11));
				}
				else if (bParam5)
				{
				}
				fVar5 = func_1523((*uParam1)[iVar0 /*23*/], uParam0->f_159);
				fVar6 = func_1522((*uParam1)[iVar0 /*23*/], uParam0->f_159);
				sVar7 = func_1527((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160);
				fVar8 = func_1839((*uParam1)[iVar0 /*23*/]);
				if (((*Global_1049246)[0 /*2*/])->f_1 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat1", MISC::_0x2B6846401D68E563(fVar5, 0));
				}
				if (((*Global_1049246)[1 /*2*/])->f_1 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat2", MISC::_0x2B6846401D68E563(fVar6, 0));
				}
				if (((*Global_1049246)[2 /*2*/])->f_1 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", MISC::_0x2B6846401D68E563(sVar7, 0));
				}
				if (((*Global_1049246)[3 /*2*/])->f_1 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "StatRounds", MISC::_0x2B6846401D68E563(fVar8, 0));
				}
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "isHighlighted", bVar3);
				if (bVar3)
				{
				}
				if (bParam4 && ((*uParam1)[iVar0 /*23*/])->f_13)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Blip", "BLIP_MVP");
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "BlipColor", -1777836132);
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "BlipColor", iVar4);
				}
			}
			iVar0++;
		}
		uParam0->f_149 = iVar1;
	}
}

struct<16> func_1708(var uParam0, int iParam1)
{
	struct<16> Var0;
	int iVar16;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return Var0;
	}
	if (func_1709() > 0)
	{
		return Var0;
	}
	iVar16 = iParam1;
	switch (func_1710(&Var0, iVar16, 1))
	{
		case 4:
			break;
		case 1:
			func_1711(iVar16, 1);
			break;
		case 2:
			func_1711(iVar16, 1);
			func_1712(&(uParam0->f_162), iParam1, 0);
			break;
		case 3:
			break;
		case 0:
			break;
	}
	return Var0;
}

int func_1709()
{
	return Global_1132968->f_5808.f_325;
}

int func_1710(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar10;
	int iVar11;
	char* sVar12;

	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 1;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam1);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 1;
	}
	StringCopy(sParam0, "", 128);
	iVar2 = func_1840(iParam1, iParam2);
	switch (iParam2)
	{
		case 0:
			NETWORK::NETWORK_HANDLE_FROM_PLAYER(PLAYER::INT_TO_PLAYERINDEX(iParam1), &uVar3);
			if (!NETWORK::NETWORK_IS_HANDLE_VALID(&uVar3))
			{
				return 1;
			}
			StringCopy(sParam0, NETWORK::_0xB5C4B18B12A2AF23(&uVar3, iParam2), 128);
			return 4;
		case 1:
		case 2:
			switch (iVar2)
			{
				case 0:
				default:
					return 1;
					return 2;
				case 1:
					return 3;
				case 2:
					uVar10 = func_1841(iParam2);
					iVar1 = NETWORK::_0x6E2FD8CF7EB10E53(iParam1, uVar10);
					if (iVar1 == -1)
					{
						return 3;
					}
					else if (iVar1 == 0)
					{
						func_1842(iParam1, iParam2, 0);
						return 1;
					}
					func_1843(iParam1, iParam2, iVar1);
					func_1842(iParam1, iParam2, 3);
					break;
				case 3:
					iVar1 = func_1844(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_1842(iParam1, iParam2, 0);
						return 1;
					}
					iVar11 = NETWORK::_GET_STATUS_OF_TEXTURE_DOWNLOAD(iVar1);
					switch (iVar11)
					{
						case 0:
							func_1842(iParam1, iParam2, 4);
							return 3;
						case 1:
							return 3;
						case 2:
							func_1842(iParam1, iParam2, 0);
							return 1;
						default:
							break;
					}
					break;
				case 4:
					iVar1 = func_1844(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_1842(iParam1, iParam2, 0);
						return 1;
					}
					sVar12 = NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1);
					if (MISC::_0x375F5870A7B8BEC1(sVar12))
					{
						return 3;
					}
					func_1842(iParam1, iParam2, 5);
					break;
				case 5:
					iVar1 = func_1844(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_1842(iParam1, iParam2, 0);
						return 1;
					}
					StringCopy(sParam0, NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1), 128);
					return 4;
			}
			break;
	}
	return 3;
}

void func_1711(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	iVar1 = func_1840(iParam0, iParam1);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	switch (iVar1)
	{
		case 1:
		case 2:
		default:
			return;
			func_1843(iParam0, iParam1, 0);
			func_1842(iParam0, iParam1, 0);
		case 3:
		case 4:
		case 5:
			iVar2 = func_1844(iParam0, iParam1);
			if (iVar2 != 0)
			{
				NETWORK::TEXTURE_DOWNLOAD_RELEASE(iVar2);
			}
			func_1842(iParam0, iParam1, 0);
			break;
	}
}

void func_1712(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam1;
	MISC::SET_BIT(&iVar1, iVar0);
	func_1845(uParam0, iVar1, iParam2);
}

void func_1713(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	var uVar5;
	struct<8> Var6;
	struct<8> Var14;

	vVar0 = -1;
	vVar0.f_1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	switch (*uParam0)
	{
		case 0:
			vVar0.x = 0;
			SCRIPTS::_0x31010318BA9897AC(&(vVar0.f_2), PLAYER::NETWORK_PLAYER_ID_TO_INT());
			func_1846(vVar0);
			break;
		case 1:
			vVar0.x = uParam0->f_1;
			SCRIPTS::_0x20F4CB76689ACDBC(&(vVar0.f_2));
			func_1846(vVar0);
			if (!uParam0->f_3)
			{
			}
			else
			{
				Var6.f_4 = 0;
				Var6.f_6 = uParam0->f_1;
				Var6.f_5 = *uParam0;
				Var6.f_7 = uVar4;
				iVar3 = 0;
				iVar3 = 0;
				while (iVar3 < 32)
				{
					if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1275573->f_154[iVar3])))
					{
					}
					else if (&Global_1275573->f_154[iVar3] == Global_1275573->f_10)
					{
					}
					else
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar5, &(Global_1275573->f_154[iVar3]));
					}
					iVar3++;
				}
				func_1847(&Var6, uVar5);
				Jump @392; //curOff = 221
				if (!SCRIPTS::_0x179A6F0EE2E79026(&(uParam0->f_2)))
				{
					return;
				}
				vVar0.x = uParam0->f_1;
				vVar0.f_2 = uParam0->f_2;
				func_1846(vVar0);
				if (!uParam0->f_3)
				{
				}
				else
				{
					Var14.f_4 = 0;
					Var14.f_6 = uParam0->f_1;
					Var14.f_5 = *uParam0;
					Var14.f_7 = uParam0->f_2;
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < 32)
					{
						if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1275573->f_154[iVar3])))
						{
						}
						else if (&Global_1275573->f_154[iVar3] == Global_1275573->f_10)
						{
						}
						else
						{
							SCRIPTS::_0x31010318BA9897AC(&uVar5, &(Global_1275573->f_154[iVar3]));
						}
						iVar3++;
					}
					func_1847(&Var14, uVar5);
				}
			}
		}

void func_1714(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1848(uParam0, 1))
	{
		func_1849(uParam0, 1);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_2[iVar0 /*2*/] == iParam1)
		{
			(uParam0->f_2[iVar0 /*2*/])->f_1 = iParam2;
			return;
		}
		if ((Global_1951141->f_81[&uParam0->f_2[iVar0 /*2*/] /*12*/])->f_2 > (Global_1951141->f_81[iParam1 /*12*/])->f_2)
		{
			iVar1 = *uParam0;
			while (iVar1 >= iVar0 + 1)
			{
				*(uParam0->f_2[iVar1 /*2*/]) = { *(uParam0->f_2[(iVar1 - 1) /*2*/]) };
				iVar1 = (iVar1 + -1);
			}
			uParam0->f_2[iVar0 /*2*/] = iParam1;
			(uParam0->f_2[iVar0 /*2*/])->f_1 = iParam2;
			*uParam0++;
			return;
		}
		iVar0++;
	}
	(uParam0->f_2[*uParam0 /*2*/])->f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

int func_1715(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;

	if (DATAFILE::_0x44B3A36933AC009C(&uVar2, uParam0, -480981886))
	{
		uParam1->f_17 = uVar2;
	}
	else if (!bParam2)
	{
		return 0;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, uParam0, -925732223))
	{
		uParam1->f_3 = iVar0;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, uParam0, joaat("normal")))
	{
		uParam1->f_4 = iVar0;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, uParam0, joaat("material")))
	{
		uParam1->f_5 = iVar0;
	}
	if (DATAFILE::_0xB2B42607F7867576(&uVar4, uParam0, 2018964076))
	{
		uParam1->f_13 = uVar4;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, uParam0, 723829617))
	{
		uParam1->f_16 = func_1850(iVar0);
	}
	if (DATAFILE::_0xB2B42607F7867576(&uVar4, uParam0, 1802626656))
	{
		uParam1->f_15 = uVar4;
	}
	if (DATAFILE::_0x52FC26D2D2FC2987(&uVar3, uParam0, 939944711))
	{
		uParam1->f_6 = uVar3;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, uParam0, 917806888))
	{
		uParam1->f_7 = iVar0;
		if (DATAFILE::_0x52FC26D2D2FC2987(&uVar3, uParam0, 1922465595))
		{
			uParam1->f_8 = uVar3;
		}
		if (DATAFILE::_0xB2B42607F7867576(&uVar4, uParam0, -1979206779))
		{
			uParam1->f_14 = uVar4;
		}
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, uParam0, 333547134))
	{
		uParam1->f_9 = iVar0;
		if (DATAFILE::_0x52FC26D2D2FC2987(&uVar3, uParam0, 1223307134))
		{
			uParam1->f_10 = uVar3;
		}
		if (DATAFILE::_0x52FC26D2D2FC2987(&uVar3, uParam0, 915180227))
		{
			uParam1->f_11 = uVar3;
		}
		if (DATAFILE::_0x52FC26D2D2FC2987(&uVar3, uParam0, -1231156504))
		{
			uParam1->f_12 = uVar3;
		}
	}
	uParam0->f_1 = 1777366913;
	uParam0->f_2 = joaat("id");
	uParam0->f_3 = 1;
	uParam0->f_4 = uVar2;
	DATAFILE::_0x91DED5DD64BB2691(uParam0);
	if (DATAFILE::_0x52FC26D2D2FC2987(&uVar1, uParam0, -1118674339))
	{
		uParam1->f_1 = uVar1;
	}
	if (bParam3)
	{
		func_1851(uParam1, bParam4);
	}
	return 1;
}

void func_1716(var uParam0, var uParam1, var uParam2, var uParam3)
{
	uParam0->f_2 = uParam1;
	uParam0->f_3 = uParam2;
	uParam0->f_4 = uParam3;
	PED::_0x253A63B5BADBC398(*uParam0, 0, uParam0->f_2, uParam0->f_3, uParam0->f_4);
}

void func_1717(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 > 0 && ((*uParam1)[(iParam2 - 1) /*18*/])->f_1 > ((*uParam1)[iParam2 /*18*/])->f_1)
	{
		func_1852(uParam0, uParam1);
	}
	else
	{
		func_1853(uParam0, (*uParam1)[iParam2 /*18*/]);
	}
}

void func_1718(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		PED::_0x253A63B5BADBC398(*uParam0, uParam1->f_2, uParam1->f_3, uParam1->f_4, uParam1->f_5);
	}
	if (uParam1->f_9 != 0)
	{
		PED::_0x1ED8588524AC9BE1(*uParam0, uParam1->f_2, uParam1->f_9);
		PED::_0x2DF59FFE6FFD6044(*uParam0, uParam1->f_2, uParam1->f_10, uParam1->f_11, uParam1->f_12);
	}
	if (uParam1->f_7 != 0)
	{
		PED::_0xF2EA041F1146D75B(*uParam0, uParam1->f_2, uParam1->f_7, uParam1->f_14, uParam1->f_8);
	}
	if (uParam1->f_15 > 0f)
	{
		PED::_0x057C4F092E2298BE(*uParam0, uParam1->f_2, uParam1->f_15);
	}
	PED::_0x3329AAE2882FC8E4(*uParam0, uParam1->f_2, uParam1->f_6);
	PED::_0x6C76BC24F8BB709A(*uParam0, uParam1->f_2, uParam1->f_13);
}

int func_1719(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;

	*iParam1 = 0;
	if (*uParam0 != 5)
	{
		return 0;
	}
	else if (*uParam2 != 5)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iParam3 < 1)
		{
			Jump @200; //curOff = 49
		}
		else if (((*uParam2)[iVar0 /*6*/])->f_4 == 0)
		{
			Jump @191; //curOff = 67
		}
		else if (((*uParam2)[iVar0 /*6*/])->f_5 == 0)
		{
		}
		else
		{
			*((*uParam0)[*iParam1 /*6*/]) = { *((*uParam2)[iVar0 /*6*/]) };
			((*uParam0)[*iParam1 /*6*/])->f_4 = ((*uParam2)[iVar0 /*6*/])->f_4;
			if (((*uParam2)[iVar0 /*6*/])->f_5 > iParam3)
			{
				((*uParam0)[*iParam1 /*6*/])->f_5 = iParam3;
				iParam3 = 0;
			}
			else
			{
				((*uParam0)[*iParam1 /*6*/])->f_5 = ((*uParam2)[iVar0 /*6*/])->f_5;
				iParam3 = (iParam3 - ((*uParam0)[*iParam1 /*6*/])->f_5);
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam4 && iParam3 > 0)
	{
		*iParam1 = 0;
		return 0;
	}
	return 1;
}

int func_1720(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("use"))
	{
		if (func_78(uVar0, 2048))
		{
			return 0;
		}
	}
	else if (func_78(uVar0, 8))
	{
		return 0;
	}
	else if (func_78(uVar0, 16))
	{
		return 0;
	}
	else if (func_78(uVar0, 65536))
	{
		return 0;
	}
	return 1;
}

int func_1721(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_1854(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_1854(iParam1, 2, 0, 0);
	return -1;
}

int func_1722(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_1854(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_1723(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_674(bParam7);
	if (INVENTORY::_0x033EE4B89F3AC545(iVar0, &uParam0, bParam4) <= iParam6)
	{
		return 0;
	}
	if (!INVENTORY::_0xBE012571B25F5ACA(iVar0, &uParam0, bParam4, iParam6, uParam5))
	{
		return 0;
	}
	return 1;
}

int func_1724()
{
	return Global_1939231->f_1433.f_4174.f_2083;
}

void func_1725(var uParam0)
{
	struct<34> Var0;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_1744(&Var0);
	*uParam0 = { Var0 };
}

int func_1726(int iParam0)
{
	int iVar0;

	if (!func_1583())
	{
		return -1;
	}
	if (!func_1369(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (&Global_1132968->f_5525.f_34[iVar0 /*3*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1727(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_1369(iParam0))
	{
		return -1;
	}
	iVar2 = func_1855(iParam0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = func_1575(iVar0);
		if (func_1856(iVar2, iVar1, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1728(struct<34> Param0)
{
	if (!func_1857(Param0))
	{
		return false;
	}
	if (func_1731(Param0))
	{
		return true;
	}
	return UNLOCK::_UNLOCK_IS_UNLOCKED(Param0.f_2);
}

int func_1729(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;

	if (!func_1369(Param0))
	{
		return -1;
	}
	if (!func_691(Param0.f_2, 0))
	{
		return -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&(Param0.f_3)))
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar6 = func_1858(iVar1);
		Var2 = { func_695(iVar6, Param0.f_3, 1635590003, 1) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var2))
		{
		}
		else
		{
			iVar0 = iVar1;
			iVar1++;
		}
	}
	return iVar0;
}

int func_1730(struct<14> Param0, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	int iVar8;

	if (Param0.f_13 >= 2)
	{
		return 0;
	}
	if (!func_1369(Param0))
	{
		return -1;
	}
	if (!func_691(Param0.f_2, 0))
	{
		return -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&(Param0.f_3)))
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < 3)
	{
		iVar7 = func_1858(iVar2);
		Var3 = { func_695(iVar7, Param0.f_3, 1635590003, 1) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
		}
		else
		{
			iVar8 = func_1859(iVar2);
			iVar0 = func_1178(1412640604, Var3, iVar8, 1, 0, 0);
			iVar1 = (iVar1 + iVar0);
			iVar2++;
		}
	}
	return iVar1;
}

bool func_1731(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	return func_1860(vParam0.z, 1);
}

int func_1732(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	int iVar0;

	if (!func_1369(vParam0.x))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_1372(iVar0, 1) == vParam0.z)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_1733(struct<14> Param0, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	return Param0.f_13 >= 2;
}

bool func_1734(struct<34> Param0)
{
	return ((!Param0.f_14 && Param0.f_20) && func_1861(Param0));
}

int func_1735(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	return 0;
}

var func_1736(struct<25> Param0, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	return (Param0.f_24 || Param0.f_23);
}

bool func_1737(var uParam0)
{
	uParam0->f_28 = 0;
	return ((!uParam0->f_20 && func_1862(*uParam0)) && func_1863(uParam0->f_2, &(uParam0->f_28)));
}

bool func_1738(var uParam0)
{
	if (uParam0->f_26)
	{
		return false;
	}
	uParam0->f_28 = 0;
	return ((!uParam0->f_20 && func_1862(*uParam0)) && func_1864(uParam0->f_2, &(uParam0->f_28)));
}

bool func_1739(struct<34> Param0)
{
	return (((!Param0.f_20 && func_1862(Param0)) && !Param0.f_26) && !Param0.f_27);
}

int func_1740(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	return 0;
}

var func_1741(struct<31> Param0, var uParam31, var uParam32, var uParam33)
{
	return (((Param0.f_30 || Param0.f_29) || Param0.f_26) || Param0.f_27);
}

int func_1742(int iParam0, int iParam1)
{
	return func_1649(iParam0, iParam1, 1, 0, 1, 0);
}

int func_1743(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1858(iParam0 + 1);
	return func_1742(iVar0, iParam1);
}

void func_1744(var uParam0)
{
	uParam0->f_9 = -902468816;
	uParam0->f_10 = 291057091;
}

int func_1745(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!NETWORK::_0x255A5EF65EDA9167(iParam1))
	{
		return -1;
	}
	if (!func_1369(iParam0))
	{
		return -1;
	}
	iVar1 = iParam1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (&((*Global_1139395)[iVar1 /*34*/])->f_10[iVar0 /*3*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1746(var uParam0, int iParam1)
{
	return func_614(*uParam0, iParam1);
}

char* func_1747(var uParam0)
{
	return MISC::_CREATE_VAR_STRING(42, "MP_ABILITY_CARD_DISPLAY_STRING", MISC::_CREATE_VAR_STRING(0, uParam0->f_8), MISC::_CREATE_VAR_STRING(2, func_1865(uParam0->f_13)));
}

char* func_1748(struct<10> Param0, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46)
{
	if (!func_1760(uParam46->f_13))
	{
		return "NULL";
	}
	return MISC::_CREATE_VAR_STRING(0, (Param0.f_9[uParam46->f_13 /*12*/])->f_11);
}

int func_1749(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 2;
	iVar0 = (iVar0 + iParam0 * 32);
	iVar0 = (&Global_1275573 + iVar0);
	iVar1 = func_1866(iVar0, 1);
	if (func_1867(iVar1))
	{
		return iVar1;
	}
	return 0;
}

int func_1750(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_1867(iParam0))
	{
		return 0;
	}
	iVar0 = func_1770(iParam0, 1);
	if (!func_1868(&(Global_1140484->f_30603.f_847[iVar0 /*12*/])))
	{
		return 1;
	}
	iVar3 = func_1869(&(Global_1140484->f_30603.f_847[iVar0 /*12*/]), 1);
	iVar4 = 0;
	while (iVar4 < (Global_1140484->f_30603[iVar3 /*6*/])->f_5)
	{
		iVar1 = Global_1140484->f_30603[iVar3 /*6*/][iVar4];
		switch (func_1870(iParam0, iVar1))
		{
			case 0:
				func_1871(iVar1, iParam0, iVar4);
				break;
			case 1:
				iVar5 = 0;
				while (iVar5 < Global_1140484->f_30603.f_10924)
				{
					if (&Global_1140484->f_30603.f_8871[iVar5 /*3*/] != iVar1 || (Global_1140484->f_30603.f_8871[iVar5 /*3*/])->f_1 != iParam0)
					{
					}
					else
					{
						func_1871(iVar1, iParam0, iVar4);
						func_1872(Global_1140484->f_30603.f_8871[iVar5 /*3*/]);
						Global_1140484->f_30603.f_10924 = (Global_1140484->f_30603.f_10924 - 1);
						*(Global_1140484->f_30603.f_8871[iVar5 /*3*/]) = { *(Global_1140484->f_30603.f_8871[Global_1140484->f_30603.f_10924 /*3*/]) };
						func_1872(Global_1140484->f_30603.f_8871[Global_1140484->f_30603.f_10924 /*3*/]);
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @554; //curOff = 357
				iVar2 = func_1873(iVar1, 1);
				func_1874(iVar2, -1);
				if ((Global_1140484->f_30603.f_2900[iVar2 /*31*/])->f_29 <= 0)
				{
					func_1875(iVar2, 0);
					iVar6 = 0;
					while (iVar6 < Global_1140484->f_30603.f_8870)
					{
						if (&Global_1140484->f_30603.f_8683[iVar6] != iVar1)
						{
						}
						else
						{
							Global_1140484->f_30603.f_8683[iVar6] = -1;
							Global_1140484->f_30603.f_8870 = (Global_1140484->f_30603.f_8870 - 1);
							Global_1140484->f_30603.f_8683[iVar6] = &Global_1140484->f_30603.f_8683[Global_1140484->f_30603.f_8870];
							Global_1140484->f_30603.f_8683[Global_1140484->f_30603.f_8870] = -1;
						}
						else
						{
							iVar6++;
						}
					}
				}
				iVar4++;
			}
			Global_1140484->f_30603.f_847[iVar0 /*12*/] = -1;
			func_1876(Global_1140484->f_30603.f_847[iVar0 /*12*/]);
			return 1;
		}

void func_1751(var uParam0, var uParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, uParam1->f_11);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_3, uParam1->f_12);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_4, uParam1->f_9);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_5, uParam1->f_10);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_41, func_1877(uParam1->f_1, uParam1->f_13));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_6, *uParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_7, func_1580(*uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_34, uParam1->f_22);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_12, uParam1->f_20);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_13, !uParam1->f_20);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_35, func_1878(*uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_14, !uParam1->f_21);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_15, uParam1->f_30);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_16, uParam1->f_29);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_17, uParam1->f_31);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_18, func_1879(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_19, uParam1->f_24);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_20, uParam1->f_23);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_21, uParam1->f_25);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_22, (!uParam1->f_14 && uParam1->f_20));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_23, !uParam1->f_14);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_24, (!uParam1->f_14 && func_1880(4)));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_25, func_1881(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_26, func_1882(*uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_27, func_1883(*uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_28, func_1884(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_29, (uParam1->f_31 && func_1884(uParam1)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_30, (uParam1->f_25 && func_1884(uParam1)));
	if (uParam1->f_26)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_31, func_323(0));
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_32, func_1885(0));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_31, func_323(func_1886(uParam1->f_17)));
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_32, func_1885(func_1887(uParam1->f_17)));
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_33, uParam1->f_18);
	if (!uParam1->f_21)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_43, func_1888(uParam1->f_16));
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_36, uParam1->f_13);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_38, uParam1->f_15);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_40, func_1889(uParam1->f_13));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_10, uParam1->f_23);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_11, !uParam1->f_21);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_8, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_9, false);
}

bool func_1752(int iParam0)
{
	return func_1890() == iParam0;
}

void func_1753(int iParam0)
{
	struct<34> Var0;
	struct<34> Var34;
	int iVar68;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	Var34.f_7 = 1;
	Var34.f_13 = -1;
	Var34.f_15 = -1;
	Var34.f_16 = -1;
	Var34.f_17 = -1;
	Var34.f_18 = -1;
	Var34.f_19 = -1;
	Var34.f_32 = -1;
	iVar68 = 0;
	while (iVar68 < 3)
	{
		Var0 = { Var34 };
		func_1375(iParam0, &Var0, 2, iVar68);
		func_1891(Global_1939231->f_1433.f_4174.f_1797[iVar68 /*46*/], Var0);
		if (func_1892(iVar68))
		{
			func_1893(&(Global_1939231->f_1433.f_4174.f_2034), Var0);
		}
		iVar68++;
	}
}

void func_1754(var uParam0, struct<16> Param1, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34)
{
	int iVar0;

	func_1751(uParam0, &Param1);
	iVar0 = func_1889(Param1.f_13);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_44, MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOCUS_XP_INFO", Param1.f_15, iVar0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_45, func_1894(&Param1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_47, func_1895(&Param1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_46, func_1896(&Param1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_48, func_1897(&Param1));
}

void func_1755(struct<34> Param0)
{
	int iVar0;

	if (!func_1898())
	{
		return;
	}
	iVar0 = func_1724();
	if (func_1583())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_1433.f_4174.f_5, true);
	}
	else if (iVar0 == 1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_1433.f_4174.f_5, true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_1433.f_4174.f_5, false);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_1433.f_4174.f_4, func_1899(Param0));
}

int func_1756(int iParam0, bool bParam1)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;

	if (func_1583())
	{
		return &(Global_1132968->f_5525.f_34[iParam0 /*3*/]);
	}
	iVar0 = func_1575(iParam0);
	Var1 = { func_987(bParam1) };
	iVar5 = func_1576(Var1, iVar0, 0, bParam1);
	if (!func_1900(iVar5))
	{
		return 0;
	}
	return func_1578(iVar5);
}

void func_1757(int iParam0, var uParam1, struct<23> Param2, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35)
{
	bool bVar0;

	bVar0 = func_1901(iParam0);
	if (func_1583())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_47, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_46, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_50, true);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_49, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_48, false);
		func_1751(uParam1, &Param2);
		return;
	}
	func_1751(uParam1, &Param2);
	if (bVar0)
	{
		func_1902(&((Global_1132968->f_5351.f_36[iParam0 /*3*/])->f_2), 1);
	}
	else
	{
		func_1903(&((Global_1132968->f_5351.f_36[iParam0 /*3*/])->f_2), 1);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_46, (bVar0 && func_1904()));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_47, ((bVar0 && func_1904()) && func_1880(0)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_48, (Param2.f_22 && func_1904()));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_49, ((Param2.f_22 && func_1904()) && func_1880(3)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_50, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_51, func_1888(func_1905(iParam0)));
}

bool func_1758(int iParam0)
{
	return Global_1939231->f_1433.f_4174.f_2086 == iParam0;
}

void func_1759(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, int iParam35)
{
	func_1906(iParam35, &uParam1);
	func_1751(uParam0, &uParam1);
}

int func_1760(int iParam0)
{
	if (iParam0 >= 0 && iParam0 <= 2)
	{
		return 1;
	}
	return 0;
}

int func_1761(struct<14> Param0, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	int iVar0;

	if (!func_1369(Param0))
	{
		return 0;
	}
	iVar0 = func_1370(Param0, 1);
	func_1581();
	PLAYER::_0x6B5DDFB967E5073D(&(Global_1275573->f_154[&Global_1275573]), &((Global_1132968->f_11.f_1556[iVar0 /*46*/])->f_9[Param0.f_13 /*12*/]));
	if (PLAYER::_0x32348719DCED2969(&(Global_1275573->f_154[&Global_1275573])))
	{
		if (func_1187(0))
		{
			PLAYER::_0x83FCD6921FC8FD05(&(Global_1275573->f_154[&Global_1275573]), 6);
		}
		else
		{
			PLAYER::_0x83FCD6921FC8FD05(&(Global_1275573->f_154[&Global_1275573]), 7);
		}
	}
	PLAYER::_0x7146CF430965927C(23, !((Global_1132968->f_11.f_1556[iVar0 /*46*/])->f_9[Param0.f_13 /*12*/])->f_1);
	PLAYER::_0x7146CF430965927C(22, ((Global_1132968->f_11.f_1556[iVar0 /*46*/])->f_9[Param0.f_13 /*12*/])->f_2);
	PLAYER::_0x7146CF430965927C(21, ((Global_1132968->f_11.f_1556[iVar0 /*46*/])->f_9[Param0.f_13 /*12*/])->f_2);
	PLAYER::_0x7146CF430965927C(7, ((Global_1132968->f_11.f_1556[iVar0 /*46*/])->f_9[Param0.f_13 /*12*/])->f_3);
	PLAYER::_0x7146CF430965927C(12, ((Global_1132968->f_11.f_1556[iVar0 /*46*/])->f_9[Param0.f_13 /*12*/])->f_4);
	PLAYER::_0x7146CF430965927C(8, ((Global_1132968->f_11.f_1556[iVar0 /*46*/])->f_9[Param0.f_13 /*12*/])->f_5);
	PLAYER::_0x7146CF430965927C(18, ((Global_1132968->f_11.f_1556[iVar0 /*46*/])->f_9[Param0.f_13 /*12*/])->f_6);
	PLAYER::_0x7146CF430965927C(9, ((Global_1132968->f_11.f_1556[iVar0 /*46*/])->f_9[Param0.f_13 /*12*/])->f_7);
	PLAYER::_0x7146CF430965927C(10, ((Global_1132968->f_11.f_1556[iVar0 /*46*/])->f_9[Param0.f_13 /*12*/])->f_8);
	PLAYER::_0x7146CF430965927C(14, !((Global_1132968->f_11.f_1556[iVar0 /*46*/])->f_9[Param0.f_13 /*12*/])->f_9);
	PLAYER::_0x95EE1DEE1DCD9070(&(Global_1275573->f_154[&Global_1275573]), 1);
	return 1;
}

int func_1762(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_1867(iParam0))
	{
		return 0;
	}
	iVar0 = func_1770(iParam0, 1);
	if (!func_1868(iParam1))
	{
		return 0;
	}
	iVar1 = func_1869(iParam1, 1);
	if (&Global_1140484->f_30603.f_847[iVar0 /*12*/] == iParam1)
	{
		return 1;
	}
	if (func_1868(&(Global_1140484->f_30603.f_847[iVar0 /*12*/])))
	{
		func_1750(iParam0);
	}
	Global_1140484->f_30603.f_847[iVar0 /*12*/] = iParam1;
	iVar4 = 0;
	while (iVar4 < (Global_1140484->f_30603[iVar1 /*6*/])->f_5)
	{
		iVar2 = Global_1140484->f_30603[iVar1 /*6*/][iVar4];
		iVar3 = func_1873(iVar2, 1);
		switch (func_1907(iParam0, iVar2))
		{
			case 0:
				func_1908(iVar2, iParam0, iVar4);
				break;
			case 1:
				Global_1140484->f_30603.f_8871[Global_1140484->f_30603.f_10924 /*3*/] = iVar2;
				(Global_1140484->f_30603.f_8871[Global_1140484->f_30603.f_10924 /*3*/])->f_1 = iParam0;
				(Global_1140484->f_30603.f_8871[Global_1140484->f_30603.f_10924 /*3*/])->f_2 = iVar4;
				Global_1140484->f_30603.f_10924++;
				break;
			case 2:
				Jump @391; //curOff = 312
				if ((Global_1140484->f_30603.f_2900[iVar3 /*31*/])->f_29 <= 0)
				{
					Global_1140484->f_30603.f_8683[Global_1140484->f_30603.f_8870] = iVar2;
					Global_1140484->f_30603.f_8870++;
				}
				func_1874(iVar3, 1);
				iVar4++;
			}
			return 1;
		}

float func_1763(int iParam0)
{
	return (PLAYER::_0x592F58BC4D2A2CF3(iParam0, 0) - IntToFloat(func_1909(2)));
}

int func_1764(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

char* func_1765(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		case 1:
			return "StaminaCoreValue";
		case 2:
			return "DeadEyeCoreValue";
		default:
			break;
	}
	return "";
}

char* func_1766(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
		case 1:
			return "isLowStaminaCoreActive";
		case 2:
			return "isLowDeadEyeCoreActive";
		default:
			break;
	}
	return "";
}

void func_1767(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_972(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1954472->f_1331.f_6[iParam0 /*3*/] = fParam1;
			break;
		case 1:
			Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/] = fParam1;
			break;
		default:
			break;
	}
}

void func_1768(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_972(2);
	}
	switch (iParam2)
	{
		case 0:
			(Global_1954472->f_1331.f_16[iParam0 /*3*/])->f_2 = uParam1;
			break;
		case 1:
			(Global_1954472->f_1465.f_2.f_16[iParam0 /*3*/])->f_2 = uParam1;
			break;
		default:
			break;
	}
}

void func_1769(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1275573->f_8;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	ENTITY::_0x835F131E7DC8F97A(iParam1, fParam0, 0, 0);
}

int func_1770(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2101912686:
			return 13;
		case -2006026692:
			return 166;
		case -1993903481:
			return 124;
		case -1970041458:
			return 142;
		case -1935700575:
			return 136;
		case -1927422497:
			return 127;
		case -1920464018:
			return 58;
		case -1919393558:
			return 27;
		case -1857550353:
			return 163;
		case -1855662261:
			return 55;
		case -1840995238:
			return 15;
		case -1835722213:
			return 88;
		case -1790318144:
			return 106;
		case -1786033368:
			return 62;
		case -1767968552:
			return 86;
		case -1767662471:
			return 32;
		case -1729980669:
			return 108;
		case -1729554078:
			return 49;
		case -1727526861:
			return 109;
		case -1722264360:
			return 18;
		case -1719665775:
			return 37;
		case -1716981503:
			return 107;
		case -1697567574:
			return 72;
		case -1631930150:
			return 161;
		case -1629969648:
			return 164;
		case -1605880447:
			return 120;
		case -1575244501:
			return 61;
		case -1551628748:
			return 74;
		case -1543433893:
			return 70;
		case -1539337723:
			return 121;
		case -1525401254:
			return 64;
		case -1525233154:
			return 47;
		case -1491472827:
			return 94;
		case -1486927560:
			return 112;
		case -1480068681:
			return 50;
		case -1478178768:
			return 148;
		case -1465202595:
			return 104;
		case -1459368569:
			return 116;
		case -1431848307:
			return 76;
		case -1418298797:
			return 155;
		case -1378468884:
			return 60;
		case -1291022662:
			return 117;
		case -1288042557:
			return 19;
		case -1248720641:
			return 7;
		case -1229834518:
			return 89;
		case -1223791123:
			return 79;
		case -1209874968:
			return 45;
		case -1197630873:
			return 153;
		case -1181880939:
			return 80;
		case -1170784825:
			return 38;
		case -1125028284:
			return 137;
		case -1123356036:
			return 147;
		case -1100659165:
			return 6;
		case -1089821002:
			return 85;
		case -1084890102:
			return 162;
		case -1080696981:
			return 92;
		case -1010031245:
			return 39;
		case -992423055:
			return 157;
		case -979738281:
			return 77;
		case -931294997:
			return 111;
		case -920221586:
			return 110;
		case -900877140:
			return 30;
		case -885737328:
			return 114;
		case -885646667:
			return 67;
		case -837774766:
			return 78;
		case -799500009:
			return 145;
		case -751329575:
			return 139;
		case -711254121:
			return 132;
		case -660114191:
			return 31;
		case -649929946:
			return 53;
		case -636552746:
			return 123;
		case -587737142:
			return 71;
		case -546870456:
			return 159;
		case -521477124:
			return 82;
		case -481051896:
			return 135;
		case -425216802:
			return 17;
		case -415437740:
			return 103;
		case -415250715:
			return 144;
		case -392183396:
			return 90;
		case -343572565:
			return 21;
		case -286632741:
			return 8;
		case -267135864:
			return 138;
		case -233204301:
			return 105;
		case -203268054:
			return 143;
		case -161625840:
			return 167;
		case -126580932:
			return 0;
		case -117284255:
			return 122;
		case -60432888:
			return 44;
		case -56802666:
			return 102;
		case -47513954:
			return 99;
		case -35033037:
			return 133;
		case -33431232:
			return 12;
		case -29822088:
			return 40;
		case 0:
			return 1;
		case 1213703:
			return 154;
		case 54499763:
			return 98;
		case 111084081:
			return 56;
		case 114587291:
			return 29;
		case 149216078:
			return 57;
		case 168336706:
			return 149;
		case 173401469:
			return 100;
		case 180714777:
			return 81;
		case 268103762:
			return 97;
		case 282858309:
			return 171;
		case 320758674:
			return 158;
		case 352539363:
			return 169;
		case 398279342:
			return 34;
		case 408582472:
			return 5;
		case 420477860:
			return 25;
		case 509781427:
			return 93;
		case 550487527:
			return 35;
		case 576694808:
			return 165;
		case 638586808:
			return 118;
		case 659100749:
			return 59;
		case 666050502:
			return 65;
		case 698214003:
			return 2;
		case 713106899:
			return 36;
		case 780689752:
			return 3;
		case 791791441:
			return 125;
		case 797908556:
			return 42;
		case 798283666:
			return 141;
		case 807983049:
			return 150;
		case 839199173:
			return 91;
		case 846387993:
			return 14;
		case 852774198:
			return 113;
		case 878491929:
			return 33;
		case 887717126:
			return 66;
		case 926420921:
			return 51;
		case 946848176:
			return 68;
		case 952755846:
			return 24;
		case 955999834:
			return 134;
		case 956867472:
			return 9;
		case 1036630721:
			return 10;
		case 1037792287:
			return 140;
		case 1052684812:
			return 87;
		case 1075856357:
			return 95;
		case 1078589127:
			return 46;
		case 1095779900:
			return 22;
		case 1110815339:
			return 152;
		case 1138017610:
			return 11;
		case 1156950836:
			return 83;
		case 1195903441:
			return 52;
		case 1278022357:
			return 48;
		case 1323028278:
			return 41;
		case 1374979106:
			return 28;
		case 1405624312:
			return 146;
		case 1444077748:
			return 23;
		case 1498983922:
			return 84;
		case 1554410187:
			return 73;
		case 1585362808:
			return 16;
		case 1614000521:
			return 170;
		case 1636352616:
			return 151;
		case 1662680949:
			return 168;
		case 1698995037:
			return 4;
		case 1769731136:
			return 115;
		case 1801131110:
			return 75;
		case 1806354060:
			return 96;
		case 1811663962:
			return 131;
		case 1828803907:
			return 20;
		case 1829805500:
			return 54;
		case 1830494920:
			return 101;
		case 1838787462:
			return 129;
		case 1899963938:
			return 63;
		case 1900141702:
			return 156;
		case 1903067887:
			return 126;
		case 1907663129:
			return 43;
		case 2040423027:
			return 128;
		case 2050123975:
			return 130;
		case 2096770678:
			return 119;
		case 2110112797:
			return 69;
		case 2119170919:
			return 160;
		case 2132307595:
			return 26;
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

void func_1771(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1275573->f_8;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	PED::_0xC3D4B754C0E86B9E(iParam1, fParam0);
}

int func_1772(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_674(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return 0;
	}
	if (!func_1209(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1773(var uParam0)
{
	char* sVar0;
	int iVar1;

	sVar0 = func_1297(uParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return 0;
	}
	iVar1 = MISC::GET_HASH_KEY(sVar0);
	return iVar1;
}

int func_1774(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_691(iParam0, 0) && !func_1203(func_1202(iParam0), 2))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

void func_1775(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 1);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 0);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, 1);
	}
}

void func_1776(int iParam0)
{
	int iVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1954472->f_5.f_7))
	{
		return;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1954472->f_5.f_7) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1954472->f_5.f_7, iParam0);
		if (iVar0 == &Global_1954472->f_5.f_14[iParam0 /*82*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1954472->f_5.f_7, iParam0, "pause_info_panel_list", &(Global_1954472->f_5.f_14[iParam0 /*82*/]));
}

void func_1777(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_34, 440, !bParam0);
}

void func_1778(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_34, 439, !bParam0);
}

void func_1779(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_34, 438, !bParam0);
}

void func_1780(bool bParam0)
{
	int iVar0;

	iVar0 = 398076311;
	if (bParam0)
	{
		HUD::_HIDE_HUD_COMPONENT(iVar0);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(iVar0);
	}
}

void func_1781(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 50;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

void func_1782(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 49;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

int func_1783()
{
	return 1;
	if (Global_1572887->f_13 == 0)
	{
		return 1;
	}
	return Global_39.f_1;
}

int func_1784(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_1785()
{
	return &Global_1902689;
}

void func_1786(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_1910(*iParam0);
	iVar1 = func_1911(*iParam0);
	iVar2 = func_1912(*iParam0);
	iVar3 = func_1913(*iParam0);
	iVar4 = func_1914(*iParam0);
	iVar5 = func_1915(*iParam0);
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
	iVar6 = func_1916(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_1916(iVar1, iVar0);
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
	func_1917(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_1787(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1918())
	{
		Global_1912978->f_125 = MISC::GET_GAME_TIMER();
		Global_1912978->f_126 = iParam1;
	}
	Global_1912978->f_127 = (Global_1912978->f_127 + iParam0);
}

bool func_1788()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

bool func_1789()
{
	return DLC::IS_DLC_PRESENT(-2112896652);
}

int func_1790(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var3.f_2[iVar0 /*3*/])))
			{
				Jump @230; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY((Var3.f_2[iVar0 /*3*/])->f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(&(Var3.f_2[iVar0 /*3*/]));
				iVar2 = MISC::GET_HASH_KEY((Var3.f_2[iVar0 /*3*/])->f_1);
				if (iParam2 != 0 && (Var3.f_2[iVar0 /*3*/])->f_2 != iParam2)
				{
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_1791(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

int func_1792(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;
	int iVar43;

	iVar41 = 0;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar42, 20))
	{
		iVar43 = 0;
		while (iVar43 < iVar42)
		{
			if ((Var0[iVar43 /*2*/])->f_1 == iParam1)
			{
				iVar41 = &Var0[iVar43 /*2*/];
				return iVar41;
			}
			iVar43++;
		}
	}
	return 0;
}

char* func_1793(int iParam0)
{
	int iVar0;

	if (!func_691(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_1426(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

int func_1794(int iParam0)
{
	if (func_873(iParam0) == -126813555 || func_873(iParam0) == 1946043663)
	{
		return 1;
	}
	return 0;
}

char* func_1795(int iParam0)
{
	int iVar0;

	if (!func_691(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_1639(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

int func_1796(int iParam0)
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

int func_1797(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_1919(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_1798(int iParam0)
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

int func_1799(int iParam0)
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

int func_1800(int iParam0)
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

int func_1801(int iParam0)
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

int func_1802(int iParam0)
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

bool func_1803(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iParam0, 0);
}

int func_1804()
{
	if (func_23() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_1805(int iParam0, int iParam1)
{
	if (!func_691(iParam0, 0))
	{
		return false;
	}
	if (func_1806(iParam0))
	{
		return func_1920(func_1807(iParam0, 0), iParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, iParam1) > 0;
}

int func_1806(int iParam0)
{
	if (func_1361(iParam0, 75135761))
	{
		return 1;
	}
	return 0;
}

int func_1807(int iParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_691(iParam0, 0))
	{
		return func_1921(func_1202(iParam0), bParam1);
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0) || Var0.f_5 == 0)
	{
		return 0;
	}
	if (bParam1 && NETWORK::_0xFBE782B3165AC8EC(Var0.f_5))
	{
		return 0;
	}
	return Var0.f_5;
}

int func_1808(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_1922(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if ((&Var0[iVar32 /*2*/] == 2084597891 || &Var0[iVar32 /*2*/] == 773203532) || &Var0[iVar32 /*2*/] == -1295114026)
		{
			return (Var0[iVar32 /*2*/])->f_1;
		}
		else if (&Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam2)
	{
	}
	return 0;
}

int func_1809(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_691(iParam0, 0))
	{
		return 0;
	}
	*iParam3 = ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return 0;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xAD73B614DF26CF8A(iParam0, iParam1, iVar0, (*uParam2)[iVar0 /*2*/]))
		{
			Jump @113; //curOff = 101
		}
		else if (!bParam5)
		{
		}
		iVar0++;
	}
	if (bParam4)
	{
		func_1923(iParam0, iParam1, uParam2, *iParam3);
	}
	return 1;
}

void func_1810(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_1651(iParam0))
	{
		return;
	}
	if (func_1924(iParam0, 2) && !bParam1)
	{
		return;
	}
	if (bParam1)
	{
		func_1925(iParam0, 1);
	}
	else
	{
		func_1926(iParam0, 1);
	}
	func_1927(iParam0, bParam1);
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_1816(iVar0) == iParam0)
		{
			func_1817(iVar0, 0);
		}
		iVar0++;
	}
}

int func_1811(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 81:
			if (func_1928(iParam0))
			{
				return 305496830;
			}
			else
			{
				return -1482428221;
			}
			break;
		case 111:
			if (func_1928(iParam0))
			{
				return -1323821455;
			}
			else
			{
				return -1994249944;
			}
			break;
		case 5:
			if (func_23() != -1 && func_1929() == 1339372314)
			{
				return 1339372314;
			}
			else
			{
				return 1559741032;
			}
			break;
		case 66:
			return 60667583;
		case 83:
			return 1758133584;
		case 26:
			return -577559008;
		case 40:
			if (!bParam1 || func_23() != -1)
			{
				return 1624541293;
			}
			if (func_1408(44))
			{
				return 1624541293;
			}
			else
			{
				return 1716860278;
			}
			break;
		case 98:
			if (func_23() != -1)
			{
				return 1178102426;
			}
			else
			{
				return 1637569166;
			}
			break;
		case 70:
			return -867798278;
		case 74:
			return 1543937523;
		case 99:
			return 1030875135;
		case 101:
			return -201437056;
		case 62:
			return 794246846;
		case 3:
			return -968357677;
		case 33:
			return 728480338;
		case 87:
			if (func_23() != -1)
			{
				return 1178102426;
			}
			else
			{
				return 725489698;
			}
			break;
		case 37:
			return 183652754;
		case 60:
			if (func_23() != -1)
			{
				return -1147969487;
			}
			else
			{
				return 2056744450;
			}
			break;
		case 134:
			return 963280223;
		case 127:
			return -256309418;
		case 131:
			return 1666986024;
		case 121:
			return 251328732;
		case 135:
			if (func_23() != -1)
			{
				return -877373104;
			}
			if (!bParam1)
			{
				return 1024208566;
			}
			if (func_1408(44))
			{
				return 1024208566;
			}
			else
			{
				return 1640255731;
			}
			break;
		case 22:
			return 965626876;
		case 39:
			return -497792649;
		case 4:
		case 9:
		case 45:
		case 63:
		case 76:
		case 84:
		case 104:
			break;
		case 116:
			return -1990305778;
	}
	if (bParam2)
	{
		iVar0 = func_1930(iParam0);
		if (iVar0 != -1)
		{
			return func_1931(iVar0, bParam1);
		}
	}
	return 0;
}

int func_1812(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2126166785:
			return -1;
		case -2119728378:
		case -1482428221:
		case -1391142299:
		case -867798278:
		case 183652754:
		case 305496830:
		case 725489698:
		case 1178102426:
		case 1543937523:
		case 1637569166:
		case 1758133584:
		case 2056744450:
			return 1;
		case -2137625828:
		case -1994249944:
		case -1323821455:
		case -968357677:
		case -201437056:
		case 493546894:
		case 728480338:
		case 1030875135:
		case 1559741032:
		case 1608357655:
			return 2;
		case -1147969487:
			return 0;
		case 60667583:
		case 537788226:
		case 794246846:
			return 5;
		case -1990305778:
		case -1738342532:
		case -1679988168:
		case -1308265478:
		case -650528936:
		case -577559008:
		case -497792649:
		case 139139039:
		case 965626876:
		case 1039226266:
		case 1624541293:
		case 1716860278:
			return 3;
		case -1618764825:
		case -877373104:
		case -256309418:
		case 251328732:
		case 963280223:
		case 1024208566:
		case 1640255731:
		case 1666986024:
			return 4;
	}
	return -1;
}

void func_1813(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_775(iParam0))
	{
		return;
	}
	bVar0 = func_779(iParam0, 67108864);
	if (bParam1)
	{
		if (!bVar0)
		{
			func_1932(iParam0, func_1785());
			func_1933(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_1077(iParam0, 67108864);
		func_1932(iParam0, -15);
	}
	func_1934(iParam0);
}

void func_1814(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (!func_775(iParam0))
	{
		return;
	}
	if (func_1935(iParam0) && !bParam1)
	{
		return;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(((*Global_1887327)[iParam0 /*36*/])->f_6))
	{
		iVar0 = ((*Global_1887327)[iParam0 /*36*/])->f_6;
	}
	else
	{
		iVar0 = func_1936(iParam0);
	}
	bVar1 = func_779(iParam0, 33554432);
	if (bParam1)
	{
		iVar2 = func_1937(iParam0);
		if (iParam2 > iVar2)
		{
			func_1938(iParam0, func_1785());
			func_1939(iParam0, iParam2);
		}
		if (!bVar1)
		{
			func_1933(iParam0, 33554432);
			if (VOLUME::_DOES_VOLUME_EXIST(iVar0))
			{
				if (iParam0 == 40)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				PATHFIND::_0xF2A2177AC848B3A8(iVar0, 0, iVar3);
			}
		}
	}
	else if (bVar1)
	{
		func_1077(iParam0, 33554432);
		func_1938(iParam0, -15);
		if (VOLUME::_DOES_VOLUME_EXIST(iVar0))
		{
			PATHFIND::_0xF2A2177AC848B3A8(iVar0, 1, 1);
		}
	}
	func_1940(iParam0);
}

bool func_1815(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

int func_1816(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

void func_1817(int iParam0, bool bParam1)
{
	if (!func_1815(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1941(iParam0, 1);
	}
	else
	{
		if (func_1942(iParam0))
		{
			return;
		}
		func_1943(iParam0, 1);
	}
	func_1944(iParam0, bParam1);
}

void func_1818(var uParam0, int iParam1)
{
	uParam0->f_1 = (func_1493() - iParam1);
	func_413(uParam0, 1);
	func_414(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_1819()
{
	if (func_1945())
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

void func_1820(var uParam0, var uParam1)
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

int func_1821(bool bParam0, int iParam1, int iParam2)
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
			if (PED::_0x3AA24CCC0D451379(Global_1939178->f_27) || ENTITY::IS_ENTITY_DEAD(Global_1939178->f_27))
			{
				*iParam2 = Global_1939178->f_27;
				iVar0 = 1;
			}
		}
	}
	if (Global_1939178->f_24 && !PED::IS_PED_INJURED(Global_34))
	{
		iVar1 = PED::_0xB65A4DAB460A19BD(Global_34);
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

int func_1822(var uParam0)
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
			iVar0 = PED::_0xB65A4DAB460A19BD(Global_34);
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

void func_1823(var uParam0)
{
	int iVar0;

	if (Global_1939178->f_32 == 0)
	{
		func_615(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1939178->f_33)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1939178->f_28[iVar0])))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(&(Global_1939178->f_28[iVar0])))
				{
					func_484(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

var func_1824(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_1825(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_1826(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_1826(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_1827(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_1828(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_1829(int iParam0)
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

float func_1830(var uParam0)
{
	return uParam0->f_27;
}

float func_1831(vector3 vParam0, vector3 vParam3)
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

bool func_1832(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_1833()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_controller")) != 0)
	{
		return 0;
	}
	else if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-701235215) != 0)
	{
		return 1;
	}
	return 2;
}

char* func_1834(int iParam0, int iParam1)
{
	if (func_1701())
	{
		return func_1946(0);
	}
	else if ((MISC::IS_BIT_SET(iParam0, 0) || MISC::IS_BIT_SET(iParam0, 17)) || MISC::IS_BIT_SET(iParam0, 18))
	{
		return "";
	}
	else if (MISC::IS_BIT_SET(iParam0, 6))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam0, 3))
	{
		return MISC::_CREATE_VAR_STRING(2, "UIC_LB_TIME");
	}
	else if (MISC::IS_BIT_SET(iParam0, 19))
	{
		return MISC::_CREATE_VAR_STRING(2, "UIC_LB_BOUT");
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_FISHING_LEADERBOARD_HOOKED");
	}
	else if (MISC::IS_BIT_SET(iParam1, 6))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_ESC_CONVICTS_LEADERBOARD_ALIVE");
	}
	else if (MISC::IS_BIT_SET(iParam1, 8))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_ROUNDUP_LEADERBOARD_TOTAL");
	}
	return MISC::_CREATE_VAR_STRING(2, "UIC_LB_KILLS");
}

char* func_1835(int iParam0, int iParam1)
{
	if (func_1701())
	{
		return func_1946(1);
	}
	else if (func_1521(iParam0) || func_1528(iParam0))
	{
		return "";
	}
	else if (MISC::IS_BIT_SET(iParam1, 9))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam1, 1))
	{
		return MISC::_CREATE_VAR_STRING(2, "UIC_LB_DEL");
	}
	else if (MISC::IS_BIT_SET(iParam0, 6))
	{
		if (MISC::IS_BIT_SET(iParam0, 0))
		{
			return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_KILLS");
		}
		else
		{
			return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_DEATHS");
		}
	}
	else if (MISC::IS_BIT_SET(iParam0, 3))
	{
		if (MISC::IS_BIT_SET(iParam0, 0))
		{
			return HUD::_GET_LABEL_TEXT("UIC_LB_TIME");
		}
		else
		{
			return func_1947(iParam0);
		}
	}
	else if (func_1520(iParam0) || MISC::IS_BIT_SET(iParam0, 19))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam0, 8))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_VAL");
	}
	else if (MISC::IS_BIT_SET(iParam0, 20))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_ACC");
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_FISHING_LEADERBOARD_CAUGHT");
	}
	else if (MISC::IS_BIT_SET(iParam1, 4))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_HUNTING_LEADERBOARD_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam1, 6))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_ESC_CONVICTS_LEADERBOARD_DEAD");
	}
	else if (MISC::IS_BIT_SET(iParam1, 8))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_ESC_CONVICTS_LEADERBOARD_ALIVE");
	}
	return HUD::_GET_LABEL_TEXT("UIC_LB_DEATHS");
}

char* func_1836(int iParam0, int iParam1)
{
	if (func_1701())
	{
		return func_1946(2);
	}
	else if (MISC::IS_BIT_SET(iParam0, 13))
	{
		return HUD::_GET_LABEL_TEXT("FM_POSSE_RACE_LEADERBOARD_SCORE");
	}
	else if (MISC::IS_BIT_SET(iParam1, 9))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_GOODS_TRAIN_LEADERBOARD_GOODS");
	}
	else if (MISC::IS_BIT_SET(iParam1, 7))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_WRECKAGE_LEADERBOARD_FOUND");
	}
	else if (MISC::IS_BIT_SET(iParam0, 6))
	{
		if (MISC::IS_BIT_SET(iParam0, 0))
		{
			return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_DEATHS");
		}
		else
		{
			return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_SCORE");
		}
	}
	else if (MISC::IS_BIT_SET(iParam0, 3) && MISC::IS_BIT_SET(iParam0, 0))
	{
		return func_1947(iParam0);
	}
	else if ((MISC::IS_BIT_SET(iParam0, 0) && !MISC::IS_BIT_SET(iParam0, 17)) && !func_1528(iParam0))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_DEATHS");
	}
	else if (func_1521(iParam0) && !func_1528(iParam0))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam0, 2) || MISC::IS_BIT_SET(iParam0, 19))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_CAPS");
	}
	else if (MISC::IS_BIT_SET(iParam1, 2))
	{
		return MISC::_CREATE_VAR_STRING(2, "UIC_LB_DEL");
	}
	else if (MISC::IS_BIT_SET(iParam0, 14))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_BOUT");
	}
	else if (MISC::IS_BIT_SET(iParam0, 21))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_TA");
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_FISHING_LEADERBOARD_WEIGHT");
	}
	else if (MISC::IS_BIT_SET(iParam1, 4))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_SCORE");
	}
	else if (MISC::IS_BIT_SET(iParam1, 6))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_SCORE");
	}
	else if (MISC::IS_BIT_SET(iParam1, 8))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_ESC_CONVICTS_LEADERBOARD_DEAD");
	}
	return HUD::_GET_LABEL_TEXT("UIC_LB_SCORE");
}

char* func_1837()
{
	if (func_1701())
	{
		return func_1946(3);
	}
	return "";
}

void func_1838(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<8> Var7;
	char[] cVar15[8];
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	float fVar21[8];
	var uVar30[8];
	int iVar39;
	int iVar40;
	bool bVar41;
	int iVar42;
	char* sVar43;

	iVar4 = 0;
	iVar5 = 32;
	iVar6 = PLAYER::PLAYER_ID();
	bVar16 = ((*Global_1049264)[0 /*2*/])->f_1 == -1128715836;
	bVar17 = ((*Global_1049264)[0 /*2*/])->f_1 == 1691389412;
	bVar18 = ((*Global_1049264)[0 /*2*/])->f_1 == 2105734739;
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar2]), "Position", "");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar2]), "Gamertag", "");
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_143[iVar2]), "GamertagColor", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar2]), "StatPriority", "");
		iVar2++;
	}
	bVar19 = MISC::IS_BIT_SET(uParam0->f_159, 6);
	if (bVar16 && uParam0->f_150 > 0)
	{
		bVar20 = MISC::IS_BIT_SET(uParam0->f_159, 5);
		if ((bVar17 || bVar18) && func_1696() == 0)
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				fVar21[iVar0] = BUILTIN::TO_FLOAT(Global_1050928[iVar0]);
				iVar0++;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (uParam1[iVar0 /*23*/] != -1 && uParam1[iVar0 /*23*/] < 8)
				{
					if (func_1948((*uParam1)[iVar0 /*23*/], 0) != -1f)
					{
						fVar21[uParam1[iVar0 /*23*/]] = (&fVar21[uParam1[iVar0 /*23*/]] + func_1948((*uParam1)[iVar0 /*23*/], 0));
					}
				}
				iVar0++;
			}
		}
		iVar5 = uParam0->f_150;
		func_1529(iParam2, &uVar30, uParam0->f_150, bVar19);
		func_1530(uParam0, iParam3, &uVar30, &iVar4, &iVar5);
		iVar2 = 0;
		while (iVar2 <= (iVar5 - 1))
		{
			iVar39 = &uVar30[iVar2];
			if (iVar2 == 0 || iVar2 >= iVar4)
			{
				if (iVar39 < 8 && iVar39 != -1)
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar15, iVar2 + 1, 8);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "Position", &cVar15);
						Var7 = { func_1697(iVar39) };
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "Gamertag", &Var7);
						iVar40 = func_1698(iVar39, iParam4, uParam0->f_150, bVar20, iParam4 == iVar39);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_143[iVar3]), "GamertagColor", iVar40);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "StatPriority", MISC::_0x2B6846401D68E563(&(fVar21[iVar39]), uParam0->f_151));
					}
				}
			}
			iVar2++;
		}
	}
	else
	{
		func_1532(uParam1, iParam3, &iVar4, &iVar5);
		iVar1 = 0;
		while (iVar1 <= iVar5)
		{
			if (iVar3 == 0 || iVar1 >= iVar4)
			{
				if (func_1510(&(((*uParam1)[iVar1 /*23*/])->f_14)))
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar15, iVar1 + 1, 8);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "Position", &cVar15);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "Gamertag", &(((*uParam1)[iVar1 /*23*/])->f_14.f_1));
						bVar41 = iVar6 == ((*uParam1)[iVar1 /*23*/])->f_14;
						iVar42 = func_1513(uParam0, uParam1, iVar1, iVar6, bVar41);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_143[iVar3]), "GamertagColor", iVar42);
						sVar43 = "";
						sVar43 = MISC::_0x2B6846401D68E563(func_1948((*uParam1)[iVar1 /*23*/], 0), 0);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "StatPriority", sVar43);
					}
				}
			}
			iVar1++;
		}
	}
}

float func_1839(var uParam0)
{
	if (func_1701())
	{
		func_1702(uParam0, 3);
	}
	return -1f;
}

int func_1840(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	if (iParam1 <= -1)
	{
		return -1;
	}
	return &((Global_1132968->f_5808[iParam0 /*10*/])->f_5[iParam1]);
}

int func_1841(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		default:
			return 2;
			return 2;
		case 2:
			return 3;
		}

void func_1842(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 == -1)
	{
		return;
	}
	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	(Global_1132968->f_5808[iParam0 /*10*/])->f_5[iParam1] = iParam2;
}

void func_1843(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	(*Global_1132968->f_5808[iParam0 /*10*/])[iParam1] = iParam2;
}

int func_1844(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 <= -1)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 0;
	}
	return Global_1132968->f_5808[iParam0 /*10*/][iParam1];
}

void func_1845(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (iParam1 == 0)
	{
		return;
	}
	Var0.f_1 = 1;
	Var0 = 2;
	Var0.f_3 = iParam2;
	iVar4 = iParam1;
	Var0.f_2 = iVar4;
	func_1713(&Var0);
	uParam0->f_33 = (uParam0->f_33 || iParam1);
}

void func_1846(vector3 vParam0)
{
	if (Global_1132968->f_5808.f_325 >= 50)
	{
		return;
	}
	if (vParam0.x == -1)
	{
		return;
	}
	*(Global_1132968->f_5808.f_326[Global_1132968->f_5808.f_324 /*3*/]) = { vParam0 };
	Global_1132968->f_5808.f_324 = (Global_1132968->f_5808.f_324 + 1 % 50);
	Global_1132968->f_5808.f_325++;
}

void func_1847(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 182;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 3, &uParam1);
}

bool func_1848(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1849(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_1850(int iParam0)
{
	switch (iParam0)
	{
		case 377740851:
			return 0;
		case -897347426:
			return 1;
		case -409773112:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_1851(var uParam0, bool bParam1)
{
	int iVar0;
	struct<17> Var1;
	int iVar18;
	struct<4> Var19;

	Var1.f_9 = 1;
	Var1.f_11 = -1591664384;
	iVar0 = func_1949(uParam0->f_17);
	if (iVar0 == 0)
	{
		return;
	}
	iVar18 = *uParam0;
	Var19 = { func_695(889965687 /* GXTEntry: "Wardrobe" */, func_987(1), 1034665895, 1) };
	if (bParam1 && iVar18 != func_1390(Var19, iVar0, 1, -1))
	{
		return;
	}
	Var1 = { func_1950(func_695(iVar18, Var19, iVar0, 1), 1, 0) };
	if (Var1.f_16 <= 0)
	{
		return;
	}
	uParam0->f_13 = func_1951(Var1.f_16);
}

void func_1852(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<18> Var2;

	iVar1 = (uParam0->f_6 - 1);
	Var2.f_2 = -1;
	Var2.f_13 = 1065353216;
	Var2.f_14 = 1065353216;
	iVar0 = (uParam0->f_6 - 1);
	while (iVar0 >= 1)
	{
		if (((*uParam1)[iVar0 /*18*/])->f_1 < ((*uParam1)[(iVar0 - 1) /*18*/])->f_1)
		{
			PED::_0x96C349DE04C49011(*uParam0, ((*uParam1)[(iVar0 - 1) /*18*/])->f_2);
			Var2 = { *((*uParam1)[iVar0 /*18*/]) };
			*((*uParam1)[iVar0 /*18*/]) = { *((*uParam1)[(iVar0 - 1) /*18*/]) };
			*((*uParam1)[(iVar0 - 1) /*18*/]) = { Var2 };
			iVar1 = (iVar0 - 1);
		}
	else
	{
		}
		else
		{
			iVar0 = (iVar0 + -1);
		}
	}
	iVar0 = iVar1;
	while (iVar0 <= (uParam0->f_6 - 1))
	{
		func_1853(uParam0, (*uParam1)[iVar0 /*18*/]);
		iVar0++;
	}
}

void func_1853(var uParam0, var uParam1)
{
	uParam1->f_2 = PED::_0x86BB5FF45F193A02(*uParam0, uParam1->f_3, uParam1->f_4, uParam1->f_5, uParam1->f_16, uParam1->f_13, uParam1->f_6);
	func_1718(uParam0, uParam1, 0);
}

void func_1854(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272170->f_20)
	{
		if (&Global_1272170->f_20.f_1[iVar0 /*20*/] == iParam0)
		{
			if ((Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 == iParam1)
			{
			}
			else
			{
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_2 = iParam2;
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_1952(iParam0, iParam1, iParam2, iParam3);
}

int func_1855(int iParam0)
{
	if (!func_1369(iParam0))
	{
		return 0;
	}
	return (Global_1132968->f_11.f_1556[func_1370(iParam0, 1) /*46*/])->f_2;
}

int func_1856(int iParam0, int iParam1, bool bParam2)
{
	struct<4> Var0;

	if (!func_1900(iParam0))
	{
		return 0;
	}
	Var0 = { func_987(bParam2) };
	if (func_1178(iParam0, Var0, iParam1, bParam2, 0, 0) >= 1)
	{
		return 1;
	}
	return 0;
}

int func_1857(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	if (func_1361(vParam0.z, 216050813))
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1387714323))
		{
			return 0;
		}
	}
	return 1;
}

int func_1858(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return func_1953(iVar0);
}

int func_1859(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return func_1954(iVar0);
}

int func_1860(int iParam0, bool bParam1)
{
	struct<4> Var0;

	if (!func_1900(iParam0))
	{
		return 0;
	}
	Var0 = { func_987(bParam1) };
	if (func_1178(iParam0, Var0, -1060513333, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_1178(iParam0, Var0, 1317351007, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_1178(iParam0, Var0, -500478573, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_1178(iParam0, Var0, -806573802, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_1178(iParam0, Var0, -1109949204, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	return 0;
}

bool func_1861(struct<16> Param0, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	return Param0.f_15 >= func_1889(Param0.f_13);
}

bool func_1862(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	return UNLOCK::_UNLOCK_IS_VISIBLE(vParam0.z);
}

bool func_1863(int iParam0, var uParam1)
{
	*uParam1 = func_1955(iParam0, 1);
	return *uParam1 != 0;
}

bool func_1864(int iParam0, var uParam1)
{
	*uParam1 = func_1956(iParam0, 1, 0);
	return *uParam1 != 0;
}

var func_1865(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return func_1957(iVar0);
}

int func_1866(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -126580932;
		case 1:
			return 0;
		case 2:
			return 698214003;
		case 3:
			return 780689752;
		case 4:
			return 1698995037;
		case 5:
			return 408582472;
		case 6:
			return -1100659165;
		case 7:
			return -1248720641;
		case 8:
			return -286632741;
		case 9:
			return 956867472;
		case 10:
			return 1036630721;
		case 11:
			return 1138017610;
		case 12:
			return -33431232;
		case 13:
			return -2101912686;
		case 14:
			return 846387993;
		case 15:
			return -1840995238;
		case 16:
			return 1585362808;
		case 17:
			return -425216802;
		case 18:
			return -1722264360;
		case 19:
			return -1288042557;
		case 20:
			return 1828803907;
		case 21:
			return -343572565;
		case 22:
			return 1095779900;
		case 23:
			return 1444077748;
		case 24:
			return 952755846;
		case 25:
			return 420477860;
		case 26:
			return 2132307595;
		case 27:
			return -1919393558;
		case 28:
			return 1374979106;
		case 29:
			return 114587291;
		case 30:
			return -900877140;
		case 31:
			return -660114191;
		case 32:
			return -1767662471;
		case 33:
			return 878491929;
		case 34:
			return 398279342;
		case 35:
			return 550487527;
		case 36:
			return 713106899;
		case 37:
			return -1719665775;
		case 38:
			return -1170784825;
		case 39:
			return -1010031245;
		case 40:
			return -29822088;
		case 41:
			return 1323028278;
		case 42:
			return 797908556;
		case 43:
			return 1907663129;
		case 44:
			return -60432888;
		case 45:
			return -1209874968;
		case 46:
			return 1078589127;
		case 47:
			return -1525233154;
		case 48:
			return 1278022357;
		case 49:
			return -1729554078;
		case 50:
			return -1480068681;
		case 51:
			return 926420921;
		case 52:
			return 1195903441;
		case 53:
			return -649929946;
		case 54:
			return 1829805500;
		case 55:
			return -1855662261;
		case 56:
			return 111084081;
		case 57:
			return 149216078;
		case 58:
			return -1920464018;
		case 59:
			return 659100749;
		case 60:
			return -1378468884;
		case 61:
			return -1575244501;
		case 62:
			return -1786033368;
		case 63:
			return 1899963938;
		case 64:
			return -1525401254;
		case 65:
			return 666050502;
		case 66:
			return 887717126;
		case 67:
			return -885646667;
		case 68:
			return 946848176;
		case 69:
			return 2110112797;
		case 70:
			return -1543433893;
		case 71:
			return -587737142;
		case 72:
			return -1697567574;
		case 73:
			return 1554410187;
		case 74:
			return -1551628748;
		case 75:
			return 1801131110;
		case 76:
			return -1431848307;
		case 77:
			return -979738281;
		case 78:
			return -837774766;
		case 79:
			return -1223791123;
		case 80:
			return -1181880939;
		case 81:
			return 180714777;
		case 82:
			return -521477124;
		case 83:
			return 1156950836;
		case 84:
			return 1498983922;
		case 85:
			return -1089821002;
		case 86:
			return -1767968552;
		case 87:
			return 1052684812;
		case 88:
			return -1835722213;
		case 89:
			return -1229834518;
		case 90:
			return -392183396;
		case 91:
			return 839199173;
		case 92:
			return -1080696981;
		case 93:
			return 509781427;
		case 94:
			return -1491472827;
		case 95:
			return 1075856357;
		case 96:
			return 1806354060;
		case 97:
			return 268103762;
		case 98:
			return 54499763;
		case 99:
			return -47513954;
		case 100:
			return 173401469;
		case 101:
			return 1830494920;
		case 102:
			return -56802666;
		case 103:
			return -415437740;
		case 104:
			return -1465202595;
		case 105:
			return -233204301;
		case 106:
			return -1790318144;
		case 107:
			return -1716981503;
		case 108:
			return -1729980669;
		case 109:
			return -1727526861;
		case 110:
			return -920221586;
		case 111:
			return -931294997;
		case 112:
			return -1486927560;
		case 113:
			return 852774198;
		case 114:
			return -885737328;
		case 115:
			return 1769731136;
		case 116:
			return -1459368569;
		case 117:
			return -1291022662;
		case 118:
			return 638586808;
		case 119:
			return 2096770678;
		case 120:
			return -1605880447;
		case 121:
			return -1539337723;
		case 122:
			return -117284255;
		case 123:
			return -636552746;
		case 124:
			return -1993903481;
		case 125:
			return 791791441;
		case 126:
			return 1903067887;
		case 127:
			return -1927422497;
		case 128:
			return 2040423027;
		case 129:
			return 1838787462;
		case 130:
			return 2050123975;
		case 131:
			return 1811663962;
		case 132:
			return -711254121;
		case 133:
			return -35033037;
		case 134:
			return 955999834;
		case 135:
			return -481051896;
		case 136:
			return -1935700575;
		case 137:
			return -1125028284;
		case 138:
			return -267135864;
		case 139:
			return -751329575;
		case 140:
			return 1037792287;
		case 141:
			return 798283666;
		case 142:
			return -1970041458;
		case 143:
			return -203268054;
		case 144:
			return -415250715;
		case 145:
			return -799500009;
		case 146:
			return 1405624312;
		case 147:
			return -1123356036;
		case 148:
			return -1478178768;
		case 149:
			return 168336706;
		case 150:
			return 807983049;
		case 151:
			return 1636352616;
		case 152:
			return 1110815339;
		case 153:
			return -1197630873;
		case 154:
			return 1213703;
		case 155:
			return -1418298797;
		case 156:
			return 1900141702;
		case 157:
			return -992423055;
		case 158:
			return 320758674;
		case 159:
			return -546870456;
		case 160:
			return 2119170919;
		case 161:
			return -1631930150;
		case 162:
			return -1084890102;
		case 163:
			return -1857550353;
		case 164:
			return -1629969648;
		case 165:
			return 576694808;
		case 166:
			return -2006026692;
		case 167:
			return -161625840;
		case 168:
			return 1662680949;
		case 169:
			return 352539363;
		case 170:
			return 1614000521;
		case 171:
			return 282858309;
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

int func_1867(int iParam0)
{
	int iVar0;

	iVar0 = func_1770(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 171)
	{
		return 0;
	}
	return 1;
}

int func_1868(int iParam0)
{
	int iVar0;

	iVar0 = func_1869(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 141)
	{
		return 0;
	}
	return 1;
}

int func_1869(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2137819446:
			return 100;
		case -2131931188:
			return 127;
		case -2130179962:
			return 63;
		case -2059502051:
			return 65;
		case -2056449621:
			return 93;
		case -1973221270:
			return 64;
		case -1969715419:
			return 35;
		case -1968787770:
			return 6;
		case -1957895818:
			return 56;
		case -1952291530:
			return 130;
		case -1950424573:
			return 54;
		case -1910888845:
			return 110;
		case -1883405573:
			return 78;
		case -1844803100:
			return 80;
		case -1831687141:
			return 62;
		case -1810408560:
			return 73;
		case -1805785047:
			return 41;
		case -1759910473:
			return 25;
		case -1756646040:
			return 92;
		case -1741565123:
			return 47;
		case -1609480552:
			return 61;
		case -1596526341:
			return 3;
		case -1573606823:
			return 49;
		case -1510695159:
			return 138;
		case -1504620904:
			return 107;
		case -1462866101:
			return 111;
		case -1405836475:
			return 55;
		case -1360021450:
			return 9;
		case -1356583879:
			return 128;
		case -1242362177:
			return 46;
		case -1235458416:
			return 74;
		case -1234968784:
			return 69;
		case -1234548949:
			return 7;
		case -1143906885:
			return 122;
		case -1140308479:
			return 134;
		case -1105699593:
			return 141;
		case -1008191715:
			return 1;
		case -985141745:
			return 79;
		case -974857798:
			return 131;
		case -914097888:
			return 123;
		case -900341092:
			return 133;
		case -859661758:
			return 60;
		case -810885450:
			return 40;
		case -750368411:
			return 48;
		case -691826426:
			return 77;
		case -608746625:
			return 17;
		case -567710817:
			return 2;
		case -565327488:
			return 72;
		case -559775780:
			return 117;
		case -549372097:
			return 59;
		case -455491084:
			return 85;
		case -447950391:
			return 94;
		case -418060375:
			return 4;
		case -391691334:
			return 68;
		case -375368707:
			return 58;
		case -357713093:
			return 119;
		case -336340230:
			return 115;
		case -309456186:
			return 10;
		case -300915357:
			return 136;
		case -252777454:
			return 126;
		case -190717545:
			return 30;
		case -179898515:
			return 118;
		case -179343615:
			return 140;
		case -132268497:
			return 132;
		case -120658935:
			return 67;
		case -97080319:
			return 43;
		case -93340399:
			return 106;
		case -2338369:
			return 39;
		case -1:
			return 0;
		case 18275459:
			return 8;
		case 47725914:
			return 11;
		case 151887407:
			return 18;
		case 153569762:
			return 44;
		case 163503896:
			return 101;
		case 183566846:
			return 15;
		case 193887912:
			return 113;
		case 225804550:
			return 124;
		case 267361268:
			return 86;
		case 272084311:
			return 71;
		case 312483235:
			return 29;
		case 349431355:
			return 105;
		case 350943398:
			return 102;
		case 383280474:
			return 12;
		case 467901857:
			return 51;
		case 508502713:
			return 125;
		case 548902645:
			return 109;
		case 591249118:
			return 28;
		case 611341556:
			return 16;
		case 618168626:
			return 26;
		case 620773281:
			return 98;
		case 668358831:
			return 139;
		case 677513315:
			return 45;
		case 713112284:
			return 50;
		case 722162219:
			return 88;
		case 730253571:
			return 36;
		case 731266401:
			return 90;
		case 785001351:
			return 135;
		case 793035862:
			return 81;
		case 802887669:
			return 114;
		case 828060856:
			return 38;
		case 837742789:
			return 70;
		case 900184247:
			return 21;
		case 924932702:
			return 14;
		case 969398724:
			return 89;
		case 1014273190:
			return 96;
		case 1033330939:
			return 82;
		case 1034286944:
			return 87;
		case 1123546272:
			return 104;
		case 1138545953:
			return 20;
		case 1157170123:
			return 75;
		case 1159895828:
			return 31;
		case 1296512587:
			return 97;
		case 1377989036:
			return 19;
		case 1423325819:
			return 32;
		case 1476796894:
			return 24;
		case 1486559056:
			return 120;
		case 1493749872:
			return 112;
		case 1500545235:
			return 129;
		case 1507470319:
			return 83;
		case 1543468593:
			return 137;
		case 1568867811:
			return 57;
		case 1625043854:
			return 22;
		case 1667258255:
			return 33;
		case 1695199279:
			return 121;
		case 1699722938:
			return 13;
		case 1746978940:
			return 84;
		case 1764814366:
			return 95;
		case 1767031434:
			return 116;
		case 1775828486:
			return 103;
		case 1830439946:
			return 23;
		case 1851839077:
			return 99;
		case 1860260195:
			return 66;
		case 1885285188:
			return 52;
		case 1905466026:
			return 27;
		case 1925734249:
			return 76;
		case 1938325642:
			return 5;
		case 2079700825:
			return 42;
		case 2081475118:
			return 37;
		case 2093509505:
			return 34;
		case 2100718034:
			return 108;
		case 2117355246:
			return 53;
		case 2146493981:
			return 91;
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

int func_1870(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1958(iParam0);
	iVar1 = &Global_1275573;
	iVar2 = func_1873(iParam1, 1);
	switch ((Global_1140484->f_30603.f_2900[iVar2 /*31*/])->f_1)
	{
		case -1912291748:
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case joaat("duration"):
		case -594821844:
		case 348502922:
		case 1002704651:
		case 1270499458:
			return 1;
		default:
			if (iVar1 == iVar0)
			{
				return 1;
			}
			break;
	}
	return 2;
}

int func_1871(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;

	if (!func_1867(iParam1))
	{
		return 0;
	}
	if (!func_1959(iParam0))
	{
		return 0;
	}
	iVar0 = func_1873(iParam0, 1);
	func_1960(iParam0, iParam1, iParam2);
	if (func_1961(*(Global_1140484->f_30603.f_2900[iVar0 /*31*/])) && func_1962(iParam0, (Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4))
	{
		vVar1 = { func_1963((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4) };
		if (func_1964(vVar1))
		{
			if (func_1965(vVar1.x, vVar1.y, vVar1.z))
			{
				func_1966((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_1967((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4);
			}
		}
		else
		{
			func_1967((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4);
		}
	}
	return 1;
}

void func_1872(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_1873(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2139291255:
			return 145;
		case -2133203822:
			return 108;
		case -2119961771:
			return 90;
		case -2117138640:
			return 79;
		case -2115524796:
			return 60;
		case -2108980762:
			return 137;
		case -2088744988:
			return 91;
		case -2056483403:
			return 75;
		case -2008161946:
			return 26;
		case -2006179687:
			return 170;
		case -1961023994:
			return 92;
		case -1958950493:
			return 183;
		case -1954641284:
			return 28;
		case -1946267644:
			return 130;
		case -1925826694:
			return 49;
		case -1920322236:
			return 22;
		case -1886192107:
			return 55;
		case -1854279248:
			return 6;
		case -1853627206:
			return 134;
		case -1851126253:
			return 29;
		case -1847886830:
			return 16;
		case -1841577353:
			return 112;
		case -1840959475:
			return 106;
		case -1808210911:
			return 30;
		case -1803458707:
			return 8;
		case -1761885354:
			return 111;
		case -1749044999:
			return 96;
		case -1698597704:
			return 45;
		case -1631537135:
			return 63;
		case -1599892133:
			return 38;
		case -1514337705:
			return 177;
		case -1498884346:
			return 151;
		case -1448841146:
			return 50;
		case -1445919747:
			return 117;
		case -1441068914:
			return 39;
		case -1426414385:
			return 172;
		case -1421504146:
			return 109;
		case -1419242781:
			return 33;
		case -1394912816:
			return 186;
		case -1378028573:
			return 27;
		case -1370534631:
			return 110;
		case -1327315394:
			return 1;
		case -1311380047:
			return 46;
		case -1299791944:
			return 2;
		case -1280685390:
			return 132;
		case -1268916163:
			return 119;
		case -1256990268:
			return 76;
		case -1139172958:
			return 61;
		case -1112015628:
			return 163;
		case -1094465110:
			return 47;
		case -1038422902:
			return 74;
		case -1011126213:
			return 31;
		case -964953325:
			return 123;
		case -955252868:
			return 124;
		case -932897324:
			return 11;
		case -931584677:
			return 103;
		case -925634234:
			return 21;
		case -750441842:
			return 174;
		case -649515024:
			return 142;
		case -624920400:
			return 81;
		case -612675573:
			return 148;
		case -572117096:
			return 182;
		case -562496675:
			return 57;
		case -562150430:
			return 171;
		case -560965516:
			return 48;
		case -554207528:
			return 59;
		case -539762089:
			return 97;
		case -529396121:
			return 175;
		case -454200664:
			return 104;
		case -440727241:
			return 19;
		case -423133485:
			return 133;
		case -403292810:
			return 113;
		case -398496662:
			return 23;
		case -343145237:
			return 155;
		case -342633876:
			return 5;
		case -334674962:
			return 13;
		case -332283977:
			return 66;
		case -306011710:
			return 4;
		case -280832639:
			return 51;
		case -276166656:
			return 162;
		case -269291543:
			return 68;
		case -206787059:
			return 35;
		case -164741307:
			return 105;
		case -158245263:
			return 41;
		case -147416760:
			return 150;
		case -97000889:
			return 86;
		case -91604267:
			return 159;
		case -1:
			return 0;
		case 25589062:
			return 56;
		case 39330853:
			return 125;
		case 78014060:
			return 9;
		case 81243326:
			return 69;
		case 141777963:
			return 15;
		case 183131704:
			return 167;
		case 200623432:
			return 64;
		case 221495846:
			return 165;
		case 224471061:
			return 98;
		case 233412256:
			return 77;
		case 279713143:
			return 161;
		case 285724035:
			return 54;
		case 302482713:
			return 136;
		case 347710188:
			return 89;
		case 350341162:
			return 127;
		case 447464746:
			return 129;
		case 570385280:
			return 185;
		case 593083875:
			return 80;
		case 639606025:
			return 70;
		case 654960265:
			return 95;
		case 668064801:
			return 184;
		case 671416267:
			return 107;
		case 673708797:
			return 139;
		case 694721787:
			return 20;
		case 702532569:
			return 82;
		case 720207812:
			return 168;
		case 724367341:
			return 65;
		case 726043209:
			return 58;
		case 728769635:
			return 83;
		case 756791452:
			return 149;
		case 763061271:
			return 18;
		case 775646007:
			return 102;
		case 783509408:
			return 160;
		case 794883372:
			return 176;
		case 805902559:
			return 84;
		case 817456409:
			return 100;
		case 835146902:
			return 181;
		case 841152146:
			return 93;
		case 886162534:
			return 131;
		case 937140932:
			return 173;
		case 997052462:
			return 152;
		case 1034295275:
			return 17;
		case 1040501041:
			return 122;
		case 1093424641:
			return 115;
		case 1139016431:
			return 34;
		case 1144080006:
			return 32;
		case 1171151366:
			return 43;
		case 1175961229:
			return 138;
		case 1193587137:
			return 166;
		case 1201719505:
			return 42;
		case 1203687692:
			return 10;
		case 1208331227:
			return 12;
		case 1211076549:
			return 73;
		case 1265311313:
			return 36;
		case 1268462011:
			return 37;
		case 1294394742:
			return 179;
		case 1295163466:
			return 114;
		case 1300622865:
			return 99;
		case 1312155508:
			return 144;
		case 1324420970:
			return 25;
		case 1328995848:
			return 88;
		case 1336349861:
			return 143;
		case 1336429519:
			return 140;
		case 1390582854:
			return 94;
		case 1413720692:
			return 158;
		case 1433853218:
			return 85;
		case 1452940977:
			return 87;
		case 1480202237:
			return 178;
		case 1482822775:
			return 146;
		case 1514854451:
			return 180;
		case 1522457772:
			return 147;
		case 1523275824:
			return 62;
		case 1524301922:
			return 78;
		case 1557116130:
			return 126;
		case 1557362410:
			return 116;
		case 1578015076:
			return 72;
		case 1578708778:
			return 67;
		case 1596748830:
			return 101;
		case 1608803012:
			return 128;
		case 1644017723:
			return 153;
		case 1687654048:
			return 71;
		case 1704907062:
			return 169;
		case 1726722300:
			return 135;
		case 1744707601:
			return 3;
		case 1746613639:
			return 121;
		case 1767173923:
			return 141;
		case 1798083308:
			return 24;
		case 1813411238:
			return 157;
		case 1835150954:
			return 40;
		case 1903955831:
			return 7;
		case 1913593527:
			return 53;
		case 1930815945:
			return 118;
		case 1938151130:
			return 44;
		case 1976949991:
			return 156;
		case 2028487040:
			return 52;
		case 2051020894:
			return 164;
		case 2081856931:
			return 120;
		case 2113464199:
			return 154;
		case 2126590447:
			return 14;
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

void func_1874(int iParam0, int iParam1)
{
	(Global_1140484->f_30603.f_2900[iParam0 /*31*/])->f_29 = ((Global_1140484->f_30603.f_2900[iParam0 /*31*/])->f_29 + iParam1);
}

void func_1875(int iParam0, int iParam1)
{
	(Global_1140484->f_30603.f_2900[iParam0 /*31*/])->f_29 = iParam1;
}

void func_1876(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1[iVar0 /*2*/] = 0;
		(uParam0->f_1[iVar0 /*2*/])->f_1 = 0;
		iVar0++;
	}
}

int func_1877(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	return func_1968(iParam0, iVar0);
}

bool func_1878(struct<23> Param0, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	return (Param0.f_20 && !Param0.f_22);
}

char* func_1879(var uParam0)
{
	if (uParam0->f_26 || uParam0->f_27)
	{
		return "IB_REDEEM";
	}
	if (uParam0->f_30)
	{
		return "IB_BUY_NOW";
	}
	return "IB_BUY";
}

int func_1880(int iParam0)
{
	int iVar0;

	iVar0 = func_1969();
	switch (iVar0)
	{
		case 0:
			return 1;
		case 1:
			return iParam0 == 0;
		case 2:
			return iParam0 == 1;
		case 3:
			return iParam0 == 2;
		case 4:
			return iParam0 == 5;
		default:
			break;
	}
	return 0;
}

char* func_1881(var uParam0)
{
	if (uParam0->f_24)
	{
		return "IB_UPGRADE_NOW";
	}
	return "IB_UPGRADE";
}

bool func_1882(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33)
{
	return (Param0.f_29 || Param0.f_23);
}

bool func_1883(struct<34> Param0)
{
	return (!func_1882(Param0) && (Param0.f_30 || Param0.f_24));
}

int func_1884(var uParam0)
{
	if (uParam0->f_26)
	{
		return 1;
	}
	else if (func_1882(*uParam0))
	{
		if (uParam0->f_17 < 0)
		{
			return 0;
		}
		else if (func_1646(uParam0->f_17))
		{
			return 1;
		}
	}
	else if (func_1883(*uParam0))
	{
		if (uParam0->f_18 < 0)
		{
			return 0;
		}
		else if (func_1970(uParam0->f_18))
		{
			return 1;
		}
	}
	return 0;
}

char* func_1885(int iParam0)
{
	if (iParam0 == 0)
	{
		return "00";
	}
	return func_323(iParam0);
}

int func_1886(int iParam0)
{
	return (iParam0 / 100);
}

int func_1887(int iParam0)
{
	return (iParam0 % 100);
}

char* func_1888(int iParam0)
{
	struct<4> Var0;

	if (iParam0 <= -1)
	{
		return "";
	}
	MISC::_INT_TO_STRING(iParam0, "%i", &Var0);
	return func_1971(Var0);
}

int func_1889(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return func_1972(iVar0);
}

int func_1890()
{
	return Global_1939231->f_1433.f_4174.f_2084;
}

void func_1891(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34)
{
	func_1751(uParam0, &uParam1);
}

bool func_1892(int iParam0)
{
	return func_1973() == iParam0;
}

void func_1893(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34)
{
	func_1751(uParam0, &uParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_45, func_1894(&uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_47, func_1895(&uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_46, func_1896(&uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_48, func_1897(&uParam1));
}

char* func_1894(var uParam0)
{
	if (uParam0->f_20)
	{
		return "IB_UPGRADE";
	}
	if (uParam0->f_26)
	{
		return "SHOP_REWARD_PRICE";
	}
	else if (uParam0->f_27)
	{
		return "SHOP_OFFER_PRICE";
	}
	return "IB_PRICE";
}

char* func_1895(var uParam0)
{
	if (uParam0->f_26)
	{
		return "IB_FREE";
	}
	else if (uParam0->f_20 && !uParam0->f_25)
	{
		return "NET_PLAYER_ABILITY_ADDITIONAL_XP_REQUIRED";
	}
	return "";
}

int func_1896(var uParam0)
{
	if (uParam0->f_26)
	{
		return 1;
	}
	else if (!uParam0->f_25 && uParam0->f_20)
	{
		return 1;
	}
	return 0;
}

bool func_1897(var uParam0)
{
	return (uParam0->f_21 && !uParam0->f_14);
}

bool func_1898()
{
	return UIAPPS::_IS_APP_ACTIVE(joaat("abilities"));
}

char* func_1899(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	char* sVar0;
	int iVar1;

	sVar0 = func_534(func_1974(), joaat("COLOR_PURE_WHITE"));
	if (func_1583())
	{
		return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_OVERRIDEN");
	}
	else if (func_1724() == 1)
	{
		return MISC::_CREATE_VAR_STRING(10, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_REMOTE_PLAYER_MODE", sVar0);
	}
	if (!func_1898())
	{
		return "INVALID";
	}
	iVar1 = UIAPPS::_0x96FD694FE5BE55DC(joaat("abilities"));
	if (iVar1 == 1738917854)
	{
		return func_1976(func_1975());
	}
	else if (iVar1 == -477213344)
	{
		return func_1977(&uParam0);
	}
	else if (iVar1 == 756463805)
	{
		return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_UPGRADE");
	}
	return "INVALID";
}

int func_1900(int iParam0)
{
	int iVar0;

	iVar0 = func_988(iParam0);
	if ((iVar0 == 810656527 || iVar0 == 2088138839) || iVar0 == 129583122)
	{
		return 1;
	}
	return 0;
}

int func_1901(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return UNLOCK::_UNLOCK_IS_UNLOCKED(-1815917332);
		case 1:
			return UNLOCK::_UNLOCK_IS_UNLOCKED(446771306);
		case 2:
			return UNLOCK::_UNLOCK_IS_UNLOCKED(214930631);
		case 3:
			return UNLOCK::_UNLOCK_IS_UNLOCKED(1057421621);
		default:
			break;
	}
	return 0;
}

void func_1902(var uParam0, int iParam1)
{
	func_484(uParam0, iParam1);
}

void func_1903(var uParam0, int iParam1)
{
	func_615(uParam0, iParam1);
}

bool func_1904()
{
	return func_1724() == 0;
}

int func_1905(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 10;
		case 2:
			return 20;
		case 3:
			return 40;
		default:
			break;
	}
	return -1;
}

void func_1906(int iParam0, var uParam1)
{
	if (!func_1369(*uParam1))
	{
		uParam1->f_11 = func_1978(iParam0);
		uParam1->f_12 = func_1979(iParam0);
	}
}

int func_1907(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1958(iParam0);
	iVar1 = &Global_1275573;
	iVar2 = func_1873(iParam1, 1);
	switch (&Global_1140484->f_30603.f_2900[iVar2 /*31*/])
	{
		case 979390476:
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case -2139108927:
		case -2129621195:
		case -1503245593:
		case 190804938:
			return 1;
		default:
			if (iVar1 == iVar0)
			{
				return 1;
			}
			break;
	}
	return 2;
}

int func_1908(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;

	if (!func_1867(iParam1))
	{
		return 0;
	}
	if (!func_1959(iParam0))
	{
		return 0;
	}
	iVar0 = func_1873(iParam0, 1);
	if (!func_1980(iParam2))
	{
		return 0;
	}
	bVar1 = func_1961(*(Global_1140484->f_30603.f_2900[iVar0 /*31*/]));
	if (bVar1 && func_1981((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4))
	{
		vVar2 = { func_1982((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4) };
		if (!func_1960(vVar2.x, vVar2.y, vVar2.z))
		{
			return 0;
		}
	}
	if (func_1965(iParam0, iParam1, iParam2))
	{
		if (bVar1)
		{
			func_1966((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4, iParam0, iParam1, iParam2);
		}
		return 1;
	}
	return 0;
}

int func_1909(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_965(2) * 2;
		case 1:
			return func_967(2) * 2;
		case 2:
			return func_966(2) * 2;
		default:
			break;
	}
	return -1;
}

int func_1910(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_1983(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_1911(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_1912(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_1913(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_1914(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_1915(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_1916(int iParam0, int iParam1)
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

void func_1917(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1984(iParam0, iParam6);
	func_1985(iParam0, iParam5);
	func_1986(iParam0, iParam4);
	func_1987(iParam0, iParam3);
	func_1988(iParam0, iParam2);
	func_1989(iParam0, iParam1);
}

bool func_1918()
{
	return Global_1912978->f_127 == 0;
}

int func_1919(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_1990(iParam0, uParam1, &uVar0))
	{
		func_1991(&uVar0, iParam0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_1920(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1992(iParam0))
	{
		return 0;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(iParam0, iParam1) == 0)
	{
		return 0;
	}
	if (bParam2)
	{
		return !func_1993(iParam0, iParam1);
	}
	return 1;
}

int func_1921(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_1203(iParam0, 2))
	{
		return 0;
	}
	iVar0 = 0;
	if ((iVar0 != 0 && bParam1) && NETWORK::_0xFBE782B3165AC8EC(iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_1922(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_1992(iParam0))
	{
		return 0;
	}
	*iParam3 = ITEMDATABASE::_0xF540239F9937033B(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam4)
		{
		}
		return 0;
	}
	if (!bParam4)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xF27F01BBF5ACD3F3(iParam0, iParam1, iVar0, (*uParam2)[iVar0 /*2*/]))
		{
			Jump @112; //curOff = 100
		}
		else if (!bParam4)
		{
		}
		iVar0++;
	}
	if (bParam5)
	{
		func_1994(iParam0, iParam1, uParam2, *iParam3);
	}
	return 1;
}

void func_1923(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	float fVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_PRICE_MODIFIERS(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (uParam2[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = (BUILTIN::ROUND((IntToFloat((10000 * ((*uParam2)[iVar0 /*2*/])->f_1)) * (&fVar21[iVar0] / 1f))) / 10000);
		}
		iVar0++;
	}
}

bool func_1924(int iParam0, int iParam1)
{
	if (!func_1651(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return ((Global_39.f_186[iParam0 /*12*/])->f_5 && iParam1) != 0;
	}
	return ((Global_1070356->f_19592[iParam0 /*12*/])->f_5 && iParam1) != 0;
}

void func_1925(int iParam0, int iParam1)
{
	if (!func_1651(iParam0))
	{
		return;
	}
	if (!func_1924(iParam0, iParam1))
	{
	}
	if (Global_1572887->f_13 == -1)
	{
		(Global_39.f_186[iParam0 /*12*/])->f_5 = ((Global_39.f_186[iParam0 /*12*/])->f_5 || iParam1);
		return;
	}
	(Global_1070356->f_19592[iParam0 /*12*/])->f_5 = ((Global_1070356->f_19592[iParam0 /*12*/])->f_5 || iParam1);
}

void func_1926(int iParam0, int iParam1)
{
	if (!func_1651(iParam0))
	{
		return;
	}
	if (Global_1572887->f_13 == -1)
	{
		(Global_39.f_186[iParam0 /*12*/])->f_5 = ((Global_39.f_186[iParam0 /*12*/])->f_5 - ((Global_39.f_186[iParam0 /*12*/])->f_5 && iParam1));
		return;
	}
	(Global_1070356->f_19592[iParam0 /*12*/])->f_5 = ((Global_1070356->f_19592[iParam0 /*12*/])->f_5 - ((Global_1070356->f_19592[iParam0 /*12*/])->f_5 && iParam1));
}

void func_1927(int iParam0, bool bParam1)
{
	if (!func_1651(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1996(func_1995(iParam0));
	}
	else
	{
		func_1997(func_1995(iParam0));
	}
}

int func_1928(int iParam0)
{
	if (!func_775(iParam0))
	{
		return 0;
	}
	return func_779(iParam0, 33554432);
}

int func_1929()
{
	return Global_1938085->f_26;
}

int func_1930(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 30)
	{
		return 1;
	}
	else if (iParam0 <= 34)
	{
		return 2;
	}
	else if (iParam0 <= 38)
	{
		return 3;
	}
	else if (iParam0 <= 41)
	{
		return 4;
	}
	else if (iParam0 <= 52)
	{
		return 7;
	}
	else if (iParam0 <= 61)
	{
		return 6;
	}
	else if (iParam0 <= 66)
	{
		return 8;
	}
	else if (iParam0 <= 81)
	{
		return 9;
	}
	else if (iParam0 <= 98)
	{
		return 10;
	}
	else if (iParam0 <= 112)
	{
		return 11;
	}
	else if (iParam0 <= 119)
	{
		return 12;
	}
	else if (iParam0 <= 121)
	{
		return 13;
	}
	else if (iParam0 <= 126)
	{
		return 14;
	}
	else if (iParam0 <= 133)
	{
		return 15;
	}
	else if (iParam0 <= 136)
	{
		return 16;
	}
	return -1;
}

int func_1931(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -2137625828;
		case 1:
			return 1039226266;
		case 2:
			return 493546894;
		case 3:
			return -2119728378;
		case 4:
			if (!bParam1 || func_23() != -1)
			{
				return -1308265478;
			}
			if (func_1408(44))
			{
				return -1308265478;
			}
			else
			{
				return -1738342532;
			}
			break;
		case 5:
			return -1147969487;
		case 6:
			return -1147969487;
		case 7:
			return -1147969487;
		case 8:
			return 537788226;
		case 9:
			return -1391142299;
		case 10:
			return 1178102426;
		case 11:
			return 1608357655;
		case 12:
			if (!bParam1 || func_23() != -1)
			{
				return -650528936;
			}
			if (func_1408(44))
			{
				return -650528936;
			}
			else
			{
				return 139139039;
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_23() != -1)
			{
				return -877373104;
			}
			if (func_1408(44))
			{
				return -877373104;
			}
			else
			{
				return -1618764825;
			}
			break;
	}
	return 0;
}

void func_1932(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		(Global_7887[iParam0 /*11*/])->f_2 = iParam1;
		return;
	}
	(Global_1070356->f_17941[iParam0 /*11*/])->f_2 = iParam1;
}

void func_1933(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_7887[iParam0 /*11*/] = (Global_7887[iParam0 /*11*/] || iParam1);
	}
	else
	{
		Global_1070356->f_17941[iParam0 /*11*/] = (Global_1070356->f_17941[iParam0 /*11*/] || iParam1);
	}
}

void func_1934(int iParam0)
{
	if (!func_775(iParam0))
	{
		return;
	}
	if (func_1998(iParam0))
	{
		func_1999(iParam0);
	}
	else
	{
		func_2000(iParam0);
	}
}

int func_1935(int iParam0)
{
	if (!func_775(iParam0))
	{
		return 0;
	}
	return func_779(iParam0, 16777216);
}

int func_1936(int iParam0)
{
	if (!func_775(iParam0))
	{
		return 0;
	}
	return ((*Global_1887327)[iParam0 /*36*/])->f_4;
}

int func_1937(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_775(iParam0))
	{
		return 0;
	}
	iVar0 = func_2001(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	iVar1 = func_2003(func_2002(iParam0));
	iVar2 = (iVar0 - iVar1);
	if (iVar2 < 0)
	{
		iVar2 = 0;
	}
	return iVar2;
}

void func_1938(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		(Global_7887[iParam0 /*11*/])->f_1 = iParam1;
		return;
	}
	(Global_1070356->f_17941[iParam0 /*11*/])->f_1 = iParam1;
}

void func_1939(int iParam0, int iParam1)
{
	if (!func_775(iParam0))
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	(Global_7887[iParam0 /*11*/])->f_3 = iParam1;
}

void func_1940(int iParam0)
{
	if (!func_775(iParam0))
	{
		return;
	}
	if (func_1928(iParam0) && func_2004(iParam0))
	{
		func_1996(func_2005(iParam0, 0));
	}
	else
	{
		func_1997(func_2005(iParam0, 0));
	}
}

void func_1941(int iParam0, int iParam1)
{
	if (!func_1815(iParam0))
	{
		return;
	}
	if (!func_2006(iParam0, iParam1))
	{
	}
	if (Global_1572887->f_13 == -1)
	{
		Global_39.f_259[iParam0] = (Global_39.f_259[iParam0] || iParam1);
		return;
	}
	Global_1070356->f_19665[iParam0] = (Global_1070356->f_19665[iParam0] || iParam1);
}

int func_1942(int iParam0)
{
	if (!func_1815(iParam0))
	{
		return 0;
	}
	return func_2006(iParam0, 2);
}

void func_1943(int iParam0, int iParam1)
{
	if (!func_1815(iParam0))
	{
		return;
	}
	if (Global_1572887->f_13 == -1)
	{
		Global_39.f_259[iParam0] = (&Global_39.f_259[iParam0] - (Global_39.f_259[iParam0] && iParam1));
		return;
	}
	Global_1070356->f_19665[iParam0] = (&Global_1070356->f_19665[iParam0] - (Global_1070356->f_19665[iParam0] && iParam1));
}

void func_1944(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_1815(iParam0))
	{
		return;
	}
	if (iParam0 == 8)
	{
		return;
	}
	iVar0 = func_2007(iParam0);
	if (bParam1)
	{
		func_1996(iVar0);
	}
	else
	{
		func_1997(iVar0);
	}
}

int func_1945()
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

char* func_1946(int iParam0)
{
	if (&Global_3145858->f_50919[iParam0 /*2*/] > -1)
	{
		if (func_2008(&(Global_3145858->f_50919[iParam0 /*2*/])))
		{
			return MISC::_CREATE_VAR_STRING(2, Global_3145858->f_42116[&Global_3145858->f_50919[iParam0 /*2*/] /*18*/]);
		}
		return func_2009(Global_3145858->f_42116[&Global_3145858->f_50919[iParam0 /*2*/] /*18*/]);
	}
	return "";
}

char* func_1947(int iParam0)
{
	if (MISC::IS_BIT_SET(iParam0, 4))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_BLAP");
	}
	if (MISC::IS_BIT_SET(iParam0, 15))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_CPCO");
	}
	return "";
}

float func_1948(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_9;
		default:
			break;
	}
	return 0f;
}

int func_1949(int iParam0)
{
	switch (iParam0)
	{
		case 12857284:
			return -1990383629;
		case 299749022:
			return -101524555;
		case -1180698265:
			return -1915385310;
		case -487028314:
			return 1315162488;
		case 241235545:
			return 727393558;
		case 1827902148:
			return -1228057307;
		case 1301555144:
			return 1712094016;
		case -2056583192:
			return -1248299493;
		case 1015239729:
			return -451359317;
		case -340627321:
			return -2041626192;
		case -875805376:
			return -1371514637;
		case -768760704:
			return 1547608292;
		case 1089431066:
			return -361152079;
		case -2118203104:
			return -1994943603;
		case 1285634184:
			return 1011151573;
		case -559080197:
			return 892816668;
		case -1811760631:
			return -246340825;
		case 1858448324:
			return -1839865333;
		default:
			break;
	}
	return 0;
}

struct<17> func_1950(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<17> Var0;
	struct<15> Var17;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_674(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_2010(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

float func_1951(int iParam0)
{
	return (BUILTIN::TO_FLOAT(iParam0) / 10000f);
}

void func_1952(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<20> Var1;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1272170->f_20 < 20)
	{
		Global_1272170->f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1272170->f_20.f_1[iVar0 /*20*/]) = { *(Global_1272170->f_20.f_1[iVar0 + 1 /*20*/]) };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1.f_4.f_7 = -142743235;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Var1.f_2 = iParam2;
		Var1.f_3 = iParam3;
	}
	*(Global_1272170->f_20.f_1[(Global_1272170->f_20 - 1) /*20*/]) = { Var1 };
}

int func_1953(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1814149473;
		case 1:
			return -2038682661;
		case 2:
			return 1942029925;
		default:
			break;
	}
	return 0;
}

int func_1954(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2047978619;
		case 1:
			return -586319254;
		case 2:
			return 249896112;
		default:
			break;
	}
	return 0;
}

int func_1955(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_2011(iVar0, 1, 0);
		if (!func_1809(iParam0, iVar33, &Var2, &iVar1, 1, 0))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_2012(&(Var2[iVar34 /*2*/])))
				{
					if (!bParam1 || func_1032(&(Var2[iVar34 /*2*/]), 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (&Var2[iVar34 /*2*/] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1956(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	struct<2> Var9[15];
	int iVar40;
	int iVar41;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_2011(iVar0, 0, 1);
		if (!func_1809(iParam0, iVar40, &Var9, &iVar1, 1, 0))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_2013(&(Var9[iVar41 /*2*/])))
				{
					if (!bParam1 || func_1032(&(Var9[iVar41 /*2*/]), 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (&Var9[iVar41 /*2*/] == 2084597891 || &Var9[iVar41 /*2*/] == 773203532)
				{
					if ((bParam2 && &Var9[iVar41 /*2*/] == 2084597891) || (!bParam2 && &Var9[iVar41 /*2*/] == 773203532))
					{
						if (iVar4 == 0 || (bVar6 && (Var9[iVar41 /*2*/])->f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = (Var9[iVar41 /*2*/])->f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || (Var9[iVar41 /*2*/])->f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = (Var9[iVar41 /*2*/])->f_1;
						iVar7 = 0;
					}
				}
				else if (&Var9[iVar41 /*2*/] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && iVar5 != 0)
			{
				iVar4 = iVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return iVar4;
}

char* func_1957(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MP_PLAYER_CARD_TIER_ONE";
		case 1:
			return "MP_PLAYER_CARD_TIER_TWO";
		case 2:
			return "MP_PLAYER_CARD_TIER_THREE";
		default:
			break;
	}
	return "NP_CARD_TIER_INVALID";
}

int func_1958(int iParam0)
{
	if (func_2014(iParam0))
	{
		return (func_2015(iParam0) % 32);
	}
	return &Global_1275573;
}

int func_1959(int iParam0)
{
	int iVar0;

	iVar0 = func_1873(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 186)
	{
		return 0;
	}
	return 1;
}

int func_1960(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar0 = func_1770(iParam1, 1);
	iVar1 = func_1873(iParam0, 1);
	iVar2 = func_1869(&(Global_1140484->f_30603.f_847[iVar0 /*12*/]), 1);
	if (Global_1140484->f_30603[iVar2 /*6*/][iParam2] != iParam0)
	{
		return 0;
	}
	if (!&(Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/])
	{
		return 1;
	}
	(Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/] = 0;
	iVar4 = 0;
	while (iVar4 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_16)
	{
		iVar3 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/];
		iVar5 = func_2016(iVar3, 1);
		if (!func_2017(iVar3))
		{
		}
		else
		{
			(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] = (&(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] - 1);
			(Global_1140484->f_2001[iVar5 /*192*/])->f_188 = ((Global_1140484->f_2001[iVar5 /*192*/])->f_188 - func_2018((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/]));
			func_2019(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_28)
	{
		iVar6 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/];
		if (!func_2020(iVar6))
		{
		}
		else
		{
			iVar8 = func_2021(iVar6, 1);
			(*Global_1140484->f_18706[iVar8 /*195*/])[iVar1] = (Global_1140484->f_18706[iVar8 /*195*/][iVar1] - 1);
			if (Global_1140484->f_18706[iVar8 /*195*/][iVar1] <= 0)
			{
				MISC::_0xB909149F2BB5F6DA(&((Global_1140484->f_18706[iVar8 /*195*/])->f_187), iVar1);
			}
			if (!MISC::_0x80E9C316EF84DD81(&((Global_1140484->f_18706[iVar8 /*195*/])->f_187)))
			{
				(Global_1140484->f_18706[iVar8 /*195*/])->f_194 = 0;
				func_2022(iVar6);
			}
		}
		iVar7++;
	}
	return 1;
}

bool func_1961(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_1962(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_1959(iParam0))
	{
		return false;
	}
	if (!func_2023(iParam1))
	{
		return false;
	}
	iVar0 = func_2024(iParam1, 1);
	return &Global_1140484->f_30603.f_8667[iVar0 /*3*/] == iParam0;
}

Vector3 func_1963(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_2025(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return *(Global_1140484->f_30603.f_8871[iVar0 /*3*/]);
}

int func_1964(vector3 vParam0)
{
	if (!func_1959(vParam0.x))
	{
		return 0;
	}
	if (!func_1867(vParam0.y))
	{
		return 0;
	}
	if (!func_1980(vParam0.z))
	{
		return 0;
	}
	return 1;
}

int func_1965(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar0 = func_1770(iParam1, 1);
	iVar1 = func_1873(iParam0, 1);
	iVar2 = func_1869(&(Global_1140484->f_30603.f_847[iVar0 /*12*/]), 1);
	if (Global_1140484->f_30603[iVar2 /*6*/][iParam2] != iParam0)
	{
		return 0;
	}
	((Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/])->f_1 = Global_1275573->f_21;
	if (&(Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/])
	{
		return 1;
	}
	(Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/] = 1;
	iVar4 = 0;
	while (iVar4 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_16)
	{
		iVar3 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/];
		iVar5 = func_2016(iVar3, 1);
		if (!func_2017(iVar3))
		{
		}
		else
		{
			(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] = &(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] + 1;
			(Global_1140484->f_2001[iVar5 /*192*/])->f_188 = ((Global_1140484->f_2001[iVar5 /*192*/])->f_188 + func_2018((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/]));
			func_2026(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_28)
	{
		iVar6 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/];
		if (!func_2020(iVar6))
		{
		}
		else if (!func_2027((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/]))
		{
		}
		else
		{
			iVar8 = func_2021(iVar6, 1);
			(*Global_1140484->f_18706[iVar8 /*195*/])[iVar1] = Global_1140484->f_18706[iVar8 /*195*/][iVar1] + 1;
			MISC::_0xE84AAC1B22A73E99(&((Global_1140484->f_18706[iVar8 /*195*/])->f_187), iVar1);
			if (!(Global_1140484->f_18706[iVar8 /*195*/])->f_194)
			{
				(Global_1140484->f_18706[iVar8 /*195*/])->f_194 = 1;
				func_2028(iVar6);
			}
		}
		iVar7++;
	}
	func_2029((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_2);
	return 1;
}

void func_1966(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_2023(iParam0))
	{
		return;
	}
	iVar0 = func_2024(iParam0, 1);
	if (!func_1959(iParam1))
	{
		return;
	}
	if (!func_1867(iParam2))
	{
		return;
	}
	if (!func_1980(iParam3))
	{
		return;
	}
	Global_1140484->f_30603.f_8667[iVar0 /*3*/] = iParam1;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_1 = iParam2;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_2 = iParam3;
}

void func_1967(int iParam0)
{
	int iVar0;

	if (!func_2023(iParam0))
	{
		return;
	}
	iVar0 = func_2024(iParam0, 1);
	Global_1140484->f_30603.f_8667[iVar0 /*3*/] = -1;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_1 = 0;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_2 = -1;
}

int func_1968(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("deadeye"):
			switch (iParam1)
			{
				case 0:
					return -880922108;
				case 1:
					return 712437748;
				case 2:
					return -132314303;
				default:
					break;
			}
			break;
		case joaat("combat"):
			switch (iParam1)
			{
				case 0:
					return 1098244389;
				case 1:
					return 856704090;
				case 2:
					return -1750135398;
				default:
					break;
			}
			break;
		case -1794176813:
			switch (iParam1)
			{
				case 0:
					return -216428280;
				case 1:
					return 283298970;
				case 2:
					return -1044664755;
				default:
					break;
			}
			break;
		case joaat("recovery"):
			switch (iParam1)
			{
				case 0:
					return -75395410;
				case 1:
					return 1111923763;
				case 2:
					return 1350842542;
				default:
					break;
			}
			break;
	}
	return joaat("COLOR_WHITE");
}

int func_1969()
{
	return Global_1132968->f_5351.f_155;
}

bool func_1970(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(0, iParam0);
}

char* func_1971(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_1972(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return &(Global_1132968->f_11.f_1556.f_1647[0]);
		case 1:
			return &(Global_1132968->f_11.f_1556.f_1647[1]);
		default:
			break;
	}
	return -1;
}

int func_1973()
{
	return Global_1939231->f_1433.f_4174.f_2087;
}

char* func_1974()
{
	return func_1642(Global_1939231->f_1433.f_8.f_7);
}

int func_1975()
{
	return Global_1939231->f_1433.f_4174.f_2086;
}

char* func_1976(int iParam0)
{
	if (!func_1901(iParam0))
	{
		if (func_1371(iParam0))
		{
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_ACTIVE_LOCKED");
		}
		else
		{
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_PASSIVE_LOCKED", func_1905(iParam0));
		}
	}
	else if (!func_2030(iParam0, 1))
	{
		if (func_1371(iParam0))
		{
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_ACTIVE_EQUIPPED");
		}
		else
		{
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_PASSIVE_EQUIPPED");
		}
	}
	else if (func_1371(iParam0))
	{
		return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_ACTIVE_OPEN");
	}
	else
	{
		return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_PASSIVE_OPEN");
	}
	return "INVALID";
}

char* func_1977(var uParam0)
{
	if (func_2031(*uParam0))
	{
		return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_BUY_LOCKED", func_2032(uParam0->f_2, 1));
	}
	else if (uParam0->f_26 || uParam0->f_27)
	{
		return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_BUY_VOUCHER");
	}
	else if (uParam0->f_29)
	{
		return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_BUY_CASH");
	}
	else if (uParam0->f_23)
	{
		return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_UPGRADE");
	}
	else if (uParam0->f_22)
	{
		if (uParam0->f_14)
		{
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_EQUIPPED_MAX");
		}
		else
		{
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_EQUIPPED");
		}
	}
	else
	{
		return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_UNEQUIPPED");
	}
	return "INVALID";
}

char* func_1978(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_ACTIVE_SLOT_FOCUS_TITLE");
		case 1:
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_1_FOCUS_TITLE");
		case 2:
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_2_FOCUS_TITLE");
		case 3:
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_3_FOCUS_TITLE");
		default:
			break;
	}
	return "NULL";
}

char* func_1979(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_ACTIVE_SLOT_FOCUS_DESCRIPTION");
		case 1:
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_FOCUS_DESCRIPTION");
		case 2:
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_FOCUS_DESCRIPTION");
		case 3:
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_FOCUS_DESCRIPTION");
		default:
			break;
	}
	return "NULL";
}

int func_1980(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return 0;
	}
	return 1;
}

int func_1981(int iParam0)
{
	int iVar0;

	if (!func_2023(iParam0))
	{
		return 0;
	}
	iVar0 = func_2033(iParam0);
	if (!func_1959(iVar0))
	{
		return 0;
	}
	return 1;
}

Vector3 func_1982(int iParam0)
{
	vector3 vVar0;
	int iVar3;

	if (!func_2023(iParam0))
	{
		vVar0 = -1;
		vVar0.f_2 = -1;
		return vVar0;
	}
	iVar3 = func_2024(iParam0, 1);
	return *(Global_1140484->f_30603.f_8667[iVar3 /*3*/]);
}

int func_1983(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1984(int iParam0, int iParam1)
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

void func_1985(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_1986(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1911(*iParam0);
	iVar1 = func_1910(*iParam0);
	if (iParam1 < 1 || iParam1 > func_1916(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_1987(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_1988(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_1989(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_1990(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_1796(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_1991(var uParam0, int iParam1, var uParam2)
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

int func_1992(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_BUY_AWARD_KEY_VALID(iParam0);
}

int func_1993(int iParam0, int iParam1)
{
	struct<47> Var0;
	int iVar471;
	int iVar472;
	int iVar473;
	int iVar474;
	int iVar475;

	Var0 = 10;
	Var0.f_1.f_4 = 15;
	Var0.f_1.f_36 = 10;
	Var0.f_1.f_47.f_4 = 15;
	Var0.f_1.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(iParam0, &Var0, &iVar471, 10) || iVar471 == 0)
	{
		return 0;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iVar474 < iVar471)
	{
		if (&Var0[iVar474 /*47*/] == iParam1)
		{
			iVar473 = (Var0[iVar474 /*47*/])->f_35;
			iVar475 = 0;
			while (iVar475 < iVar473)
			{
				iVar472 = &(Var0[iVar474 /*47*/])->f_36[iVar475];
				if (iVar472 == 0)
				{
				}
				else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar472))
				{
					return 1;
				}
				iVar475++;
			}
		}
		iVar474++;
	}
	return 0;
}

void func_1994(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	float fVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_0xE81D0378A384E755(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (uParam2[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = (BUILTIN::ROUND((IntToFloat((10000 * ((*uParam2)[iVar0 /*2*/])->f_1)) * (&fVar21[iVar0] / 1f))) / 10000);
		}
		iVar0++;
	}
}

int func_1995(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1806461473;
		case 3:
			return -694461623;
		case 1:
			return 1093870742;
		case 0:
			return 999150106;
		case 4:
			return 1098225713;
		case 5:
			return -1828192959;
		default:
			break;
	}
	return 0;
}

void func_1996(int iParam0)
{
	int iVar0;

	if (func_2034(iParam0) == 62)
	{
		MAP::_0x563FCB6620523917(-1145496915, -1482012664);
		MAP::_0x563FCB6620523917(-1043953850, -1482012664);
		MAP::_0x563FCB6620523917(-1783502982, -1482012664);
	}
	else
	{
		iVar0 = -1482012664;
		if (((func_2035(iParam0) == 4 || func_2035(iParam0) == 12) || func_1816(func_2035(iParam0)) == 4) || (func_2006(func_2035(iParam0), 8) && ((func_2035(iParam0) == 2 || func_2035(iParam0) == 0) || func_2035(iParam0) == 10)))
		{
			iVar0 = -1305340593;
		}
		MAP::_0x563FCB6620523917(iParam0, iVar0);
	}
}

void func_1997(int iParam0)
{
	if (func_2034(iParam0) == 62)
	{
		MAP::_0x6786D7AFAC3162B3(-1145496915);
		MAP::_0x6786D7AFAC3162B3(-1043953850);
		MAP::_0x6786D7AFAC3162B3(-1783502982);
	}
	else if (MAP::_0xE38450DBCBC70E3D(iParam0, -1305340593) || MAP::_0xE38450DBCBC70E3D(iParam0, -1482012664))
	{
		MAP::_0x6786D7AFAC3162B3(iParam0);
	}
}

int func_1998(int iParam0)
{
	if (!func_775(iParam0))
	{
		return 0;
	}
	return func_779(iParam0, 67108864);
}

void func_1999(int iParam0)
{
	char cVar0[64];
	char* sVar8;

	StringCopy(&cVar0, func_2036(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_2037(cVar0);
	MAP::_0x563FCB6620523917(MISC::GET_HASH_KEY(sVar8), -1482012664);
}

void func_2000(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	int iVar9;

	StringCopy(&cVar0, func_2036(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_2037(cVar0);
	iVar9 = MISC::GET_HASH_KEY(sVar8);
	if (MAP::_0xE38450DBCBC70E3D(iVar9, -1305340593) || MAP::_0xE38450DBCBC70E3D(iVar9, -1482012664))
	{
		MAP::_0x6786D7AFAC3162B3(iVar9);
	}
}

int func_2001(int iParam0)
{
	if (!func_775(iParam0))
	{
		return 0;
	}
	if (func_1935(iParam0))
	{
		return -1;
	}
	return (Global_7887[iParam0 /*11*/])->f_3;
}

int func_2002(int iParam0)
{
	if (!func_775(iParam0))
	{
		return -15;
	}
	if (Global_1572887->f_13 == -1)
	{
		return (Global_7887[iParam0 /*11*/])->f_1;
	}
	return (Global_1070356->f_17941[iParam0 /*11*/])->f_1;
}

int func_2003(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;

	if (!func_2038(iParam0))
	{
		return 0;
	}
	func_2039(iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	fVar6 = ((((((BUILTIN::TO_FLOAT(iVar0) / 60f) + BUILTIN::TO_FLOAT(iVar1)) + (BUILTIN::TO_FLOAT(iVar2) * 60f)) + ((BUILTIN::TO_FLOAT(iVar3) * 24f) * 60f)) + (((BUILTIN::TO_FLOAT(iVar4) * 30.4375f) * 24f) * 60f)) + (((BUILTIN::TO_FLOAT(iVar5) * 365.25f) * 24f) * 60f));
	iVar7 = BUILTIN::ROUND(fVar6);
	return iVar7;
}

int func_2004(int iParam0)
{
	if (!func_775(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 26:
		case 33:
		case 37:
		case 40:
		case 62:
		case 66:
		case 81:
		case 83:
		case 99:
		case 101:
		case 111:
		case 121:
			return 1;
	}
	return 0;
}

int func_2005(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -4613767;
		case 1:
			return 1567162363;
		case 2:
			return 456471693;
		case 3:
			return -1772963474;
		case 4:
			return 1881496386;
		case 5:
			return 711768994;
		case 6:
			return -440834066;
		case 7:
			return -1363847832;
		case 8:
			return 967769300;
		case 9:
			return -1436873944;
		case 10:
			return -1585669139;
		case 11:
			return 16791368;
		case 12:
			return 1452922822;
		case 13:
			return 549538301;
		case 14:
			return 974698954;
		case 15:
			return 445881012;
		case 16:
			return -2043891857;
		case 17:
			return 419656993;
		case 18:
			return -1732457315;
		case 19:
			return 1794318026;
		case 20:
			return 2035159966;
		case 21:
			return 770832805;
		case 22:
			return -1109814766;
		case 24:
			return -1075550363;
		case 23:
			return -1080317735;
		case 25:
			return 2138576151;
		case 26:
			return 1180954297;
		case 27:
			return 783603394;
		case 28:
			return 1162337247;
		case 30:
			return -170458336;
		case 29:
			return 2023240596;
		case 31:
			return 1285083821;
		case 32:
			return -1840907462;
		case 33:
			return 756710130;
		case 34:
			return 1634157321;
		case 35:
			return 388370024;
		case 36:
			return 1092296123;
		case 37:
			return 467491346;
		case 38:
			return -1391584612;
		case 39:
			return -152111346;
		case 40:
			return 1447551317;
		case 41:
			return 153136092;
		case 42:
			return 1304405732;
		case 43:
			return 1074984055;
		case 53:
			return 1087476368;
		case 54:
			return -1768057340;
		case 44:
			return 1218874593;
		case 55:
			return -1438443836;
		case 45:
			return -2036340415;
		case 56:
			return -597278150;
		case 46:
			return 803939643;
		case 57:
			return -632496195;
		case 47:
			return -965943619;
		case 48:
			return 283532073;
		case 49:
			return -462827524;
		case 50:
			return -69067491;
		case 51:
			return -1864895118;
		case 58:
			return -1929806571;
		case 59:
			return -698525417;
		case 60:
			return -1149739894;
		case 52:
			return 380507325;
		case 61:
			return -875142075;
		case 62:
			return 407796241;
		case 63:
			return -152267914;
		case 64:
			return -1675443320;
		case 65:
			return 1940341639;
		case 66:
			return 1846596114;
		case 67:
			return 907708501;
		case 69:
			return 1825644981;
		case 70:
			return 2065937607;
		case 71:
			return -211317417;
		case 72:
			return 1801307910;
		case 73:
			return -4118897;
		case 74:
			return 1853610692;
		case 75:
			return -1574644415;
		case 76:
			return 2133055515;
		case 77:
			return -1413401932;
		case 78:
			return 801090761;
		case 79:
			return 2131218644;
		case 80:
			return 1708823660;
		case 81:
			return 7976942;
		case 82:
			return 2111120505;
		case 83:
			return 176893118;
		case 84:
			return 1179148161;
		case 68:
			return 602306665;
		case 85:
			return 547412068;
		case 86:
			return -1539748801;
		case 87:
			return -1605119912;
		case 88:
			return -884464063;
		case 89:
			return -1420970720;
		case 90:
			return 1017024547;
		case 91:
			return -1204497306;
		case 92:
			return -1621069480;
		case 93:
			return -458604261;
		case 94:
			return -923391614;
		case 95:
			return -689247089;
		case 97:
			return 44049568;
		case 98:
			return 1350259552;
		case 96:
			return 620414938;
		case 99:
			return -61661574;
		case 100:
			return -725338054;
		case 101:
			return -770123507;
		case 102:
			return 1322486734;
		case 103:
			return -460939553;
		case 104:
			return -1451863552;
		case 105:
			return 173833068;
		case 106:
			return -1681004136;
		case 107:
			return 713715980;
		case 108:
			return -31204969;
		case 109:
			return -1720064790;
		case 110:
			return -532172775;
		case 111:
			return -739067737;
		case 112:
			return -1203133835;
		case 113:
			return -1947411598;
		case 115:
			return -1298718762;
		case 116:
			return -595083064;
		case 117:
			return 884833917;
		case 118:
			return 2141950651;
		case 114:
			return -1049753365;
		case 119:
			return -1437650729;
		case 134:
			return 672925454;
		case 135:
			return 846062774;
		case 136:
			return 1713550306;
		case 127:
			return 1369756178;
		case 128:
			return -736172423;
		case 129:
			return 1597070291;
		case 131:
			return -159501564;
		case 130:
			return -1438809608;
		case 132:
			return -102682392;
		case 133:
			return 676673543;
		case 120:
			return -81068979;
		case 121:
			return 227618407;
		case 122:
			return 2106043438;
		case 123:
			return -1380256064;
		case 124:
			return -2118469183;
		case 125:
			return -558997834;
		case 126:
			return 1563120499;
		case 137:
			return 658339366;
		default:
			break;
	}
	if (bParam1)
	{
		return 1757124778 /* GXTEntry: "Wilderness" */;
	}
	return 0;
}

bool func_2006(int iParam0, int iParam1)
{
	if (!func_1815(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return (Global_39.f_259[iParam0] && iParam1) != 0;
	}
	return (Global_1070356->f_19665[iParam0] && iParam1) != 0;
}

int func_2007(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 675537701;
		case 1:
			return -1915988145;
		case 2:
			return 38535626;
		case 3:
			return 1904167574;
		case 4:
			return 244711249;
		case 5:
			return -1859792564;
		case 6:
			return -1808688941;
		case 7:
			return -736296038;
		case 8:
			return -909439131;
		case 9:
			return 1917744724;
		case 10:
			return 821748379;
		case 11:
			return 196685551;
		case 12:
			return 1983548039;
		case 15:
			return -1716084250;
		case 13:
			return 985737465;
		case 16:
			return 869827975;
		case 14:
			return -735550853;
		default:
			break;
	}
	return 1776960747;
}

bool func_2008(int iParam0)
{
	return func_432((Global_3145858->f_42116[iParam0 /*18*/])->f_17, 0);
}

var func_2009(var uParam0)
{
	return uParam0;
}

struct<16> func_2010(var uParam0, bool bParam1)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	if (bParam1)
	{
		Var0.f_15 = func_692(uParam0->f_4, joaat("default"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_948() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_2011(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 205718222;
			case 1:
				return 866168015;
			case 2:
				return -1103707655;
			default:
				break;
		}
		iVar0 = 3;
	}
	if (bParam2)
	{
		switch ((iParam0 - iVar0))
		{
			case 0:
				return 75922725;
			case 1:
				return 1070046552;
			case 2:
				return -1843707398;
			case 3:
				return -1571233163;
			case 4:
				return -1197011183;
			default:
				break;
		}
	}
	return 0;
}

bool func_2012(int iParam0)
{
	return func_873(iParam0) == 1946043663;
}

bool func_2013(int iParam0)
{
	return func_873(iParam0) == -126813555;
}

int func_2014(int iParam0)
{
	int iVar0;

	iVar0 = func_1770(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return 1;
	}
	return 0;
}

int func_2015(int iParam0)
{
	int iVar0;

	iVar0 = func_1770(iParam0, 1);
	if (func_2014(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_2040(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_2041(iParam0))
	{
		return (iVar0 - 161);
	}
	else if (func_2042(iParam0))
	{
		return (iVar0 - 162);
	}
	else if (func_2043(iParam0))
	{
		return (iVar0 - 170);
	}
	else if (func_2044(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_2016(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1988557796:
			return 49;
		case -1936069272:
			return 47;
		case -1926692092:
			return 42;
		case -1846416021:
			return 58;
		case -1721745367:
			return 2;
		case -1701192079:
			return 41;
		case -1659620438:
			return 50;
		case -1607530002:
			return 61;
		case -1589052195:
			return 37;
		case -1575020444:
			return 86;
		case -1572802418:
			return 67;
		case -1514969696:
			return 74;
		case -1397050499:
			return 53;
		case -1349331938:
			return 43;
		case -1345921497:
			return 29;
		case -1309904053:
			return 22;
		case -1290490489:
			return 7;
		case -1202225775:
			return 56;
		case -1080116020:
			return 23;
		case -1079033682:
			return 46;
		case -1059185085:
			return 25;
		case -1003690472:
			return 51;
		case -851757466:
			return 64;
		case -744806636:
			return 52;
		case -516489227:
			return 11;
		case -514416345:
			return 63;
		case -484540420:
			return 36;
		case -483049716:
			return 71;
		case -400566333:
			return 14;
		case -391623459:
			return 69;
		case -374018223:
			return 59;
		case -349428415:
			return 39;
		case -231535884:
			return 15;
		case -201802680:
			return 1;
		case -85606741:
			return 62;
		case -77989269:
			return 76;
		case -1:
			return 0;
		case 66478954:
			return 85;
		case 146438590:
			return 83;
		case 198507096:
			return 68;
		case 222365748:
			return 78;
		case 295732030:
			return 40;
		case 340029732:
			return 66;
		case 374652900:
			return 82;
		case 410940916:
			return 84;
		case 515706097:
			return 5;
		case 527883710:
			return 44;
		case 549685826:
			return 60;
		case 641300611:
			return 81;
		case 696211072:
			return 30;
		case 778435476:
			return 19;
		case 808428606:
			return 4;
		case 854463919:
			return 79;
		case 857703729:
			return 48;
		case 874892169:
			return 87;
		case 886907851:
			return 16;
		case 995847993:
			return 65;
		case 1061744811:
			return 6;
		case 1149992366:
			return 27;
		case 1221256507:
			return 8;
		case 1247001946:
			return 72;
		case 1275912274:
			return 45;
		case 1333289277:
			return 20;
		case 1341193408:
			return 10;
		case 1447875596:
			return 75;
		case 1495919075:
			return 70;
		case 1509485650:
			return 17;
		case 1546732394:
			return 34;
		case 1572090083:
			return 55;
		case 1608132015:
			return 38;
		case 1664203120:
			return 32;
		case 1679987408:
			return 54;
		case 1728485678:
			return 28;
		case 1742416595:
			return 3;
		case 1766148221:
			return 73;
		case 1768495249:
			return 21;
		case 1900095956:
			return 18;
		case 1946296046:
			return 12;
		case 1968069853:
			return 24;
		case 1997267529:
			return 31;
		case 2000631014:
			return 77;
		case 2019620375:
			return 57;
		case 2037894795:
			return 9;
		case 2048982041:
			return 33;
		case 2063781084:
			return 13;
		case 2082272090:
			return 35;
		case 2089824257:
			return 26;
		case 2128780735:
			return 80;
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

int func_2017(int iParam0)
{
	int iVar0;

	iVar0 = func_2016(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 87)
	{
		return 0;
	}
	return 1;
}

float func_2018(var uParam0)
{
	var uVar0;

	if (uParam0->f_2 != 0)
	{
		uVar0 = func_2045(794259616, uParam0->f_2, uParam0->f_1, "");
		return uVar0;
	}
	return uParam0->f_1;
}

void func_2019(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_2017(iParam0))
	{
		return;
	}
	iVar0 = func_2016(iParam0, 1);
	if (!func_626(&(Global_1140484->f_2001[iVar0 /*192*/])))
	{
		return;
	}
	(*(*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])[iVar0] = ((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/][iVar0] - 1);
	if ((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/][iVar0] > 0)
	{
		return;
	}
	(*(*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])[iVar0] = 0;
	(Global_1140484->f_2001[iVar0 /*192*/])->f_191 = 0;
	if (!func_2046((Global_1140484->f_2001[iVar0 /*192*/])->f_190))
	{
		return;
	}
	iVar1 = func_2047((Global_1140484->f_2001[iVar0 /*192*/])->f_190, 1);
	((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] = (&((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] - 1);
	if (&((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] > 0)
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < (Global_1140484->f_41529[iVar1 /*25*/])->f_23)
	{
		if (Global_1140484->f_41529[iVar1 /*25*/][iVar2] != &Global_1140484->f_2001[iVar0 /*192*/])
		{
		}
		else
		{
			(*Global_1140484->f_41529[iVar1 /*25*/])[iVar2] = -1;
			(Global_1140484->f_41529[iVar1 /*25*/])->f_23 = ((Global_1140484->f_41529[iVar1 /*25*/])->f_23 - 1);
			(*Global_1140484->f_41529[iVar1 /*25*/])[iVar2] = Global_1140484->f_41529[iVar1 /*25*/][(Global_1140484->f_41529[iVar1 /*25*/])->f_23];
			(*Global_1140484->f_41529[iVar1 /*25*/])[(Global_1140484->f_41529[iVar1 /*25*/])->f_23] = -1;
		}
		else
		{
			iVar2++;
		}
	}
}

int func_2020(int iParam0)
{
	int iVar0;

	iVar0 = func_2021(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 61)
	{
		return 0;
	}
	return 1;
}

int func_2021(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2116044775:
			return 49;
		case -2103256604:
			return 12;
		case -2073453362:
			return 11;
		case -2041025962:
			return 60;
		case -1930487908:
			return 2;
		case -1913155192:
			return 41;
		case -1771755729:
			return 28;
		case -1751121159:
			return 50;
		case -1730553768:
			return 3;
		case -1655894020:
			return 25;
		case -1604680733:
			return 10;
		case -1511575465:
			return 34;
		case -1328991329:
			return 5;
		case -1136429013:
			return 45;
		case -1115905480:
			return 31;
		case -1026481003:
			return 6;
		case -966751997:
			return 13;
		case -824728332:
			return 33;
		case -718742742:
			return 55;
		case -698163919:
			return 32;
		case -662966589:
			return 1;
		case -549693655:
			return 14;
		case -488644714:
			return 4;
		case -430422799:
			return 36;
		case -350459285:
			return 61;
		case -268774736:
			return 40;
		case -220644763:
			return 26;
		case -199042163:
			return 56;
		case -191252842:
			return 22;
		case -166765081:
			return 51;
		case -106166013:
			return 19;
		case -1:
			return 0;
		case 50982971:
			return 17;
		case 125946764:
			return 20;
		case 367160929:
			return 57;
		case 482459685:
			return 24;
		case 492808644:
			return 18;
		case 539654946:
			return 23;
		case 656937467:
			return 39;
		case 692490127:
			return 15;
		case 718630298:
			return 52;
		case 785261183:
			return 48;
		case 793826854:
			return 21;
		case 892655276:
			return 46;
		case 907911269:
			return 27;
		case 955977457:
			return 43;
		case 966561884:
			return 7;
		case 988751276:
			return 30;
		case 1159158432:
			return 58;
		case 1204983685:
			return 37;
		case 1242495215:
			return 9;
		case 1254069395:
			return 59;
		case 1341326366:
			return 54;
		case 1348456703:
			return 35;
		case 1442295985:
			return 38;
		case 1527078018:
			return 42;
		case 1565429580:
			return 53;
		case 1696309427:
			return 44;
		case 1870637439:
			return 16;
		case 2067881273:
			return 8;
		case 2093700568:
			return 47;
		case 2113555978:
			return 29;
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

void func_2022(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case -488644714:
			func_2048();
			break;
		case -2103256604:
			func_2049();
			break;
		case 692490127:
			PED::_REMOVE_PED_WOUND_EFFECT(iVar0, 0f);
			break;
		case 50982971:
			PED::_0xA5950E16B8F31052(iVar0, 0, 0);
			GRAPHICS::_0xC5CB91D65852ED7E(func_2050(iParam0));
			break;
		case 1870637439:
			GRAPHICS::_0xC5CB91D65852ED7E(func_2050(iParam0));
			break;
		case 492808644:
			GRAPHICS::_0xC5CB91D65852ED7E(func_2050(iParam0));
			break;
		case 125946764:
			ATTRIBUTE::_0x3FC4C027FD0936F4(5);
			func_348(105, 1);
			break;
		case -106166013:
			GRAPHICS::_0xC5CB91D65852ED7E(func_2050(iParam0));
			break;
		case 1204983685:
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 1);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 18);
			break;
		case 1442295985:
			NETWORK::_0x442B4347B6EC36E8(iVar0, 0, true);
			break;
		case 656937467:
			ATTRIBUTE::_0x3FC4C027FD0936F4(15);
			break;
		case -430422799:
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
			break;
		case 539654946:
			PLAYER::_0x5F8E0303C229C84B(iVar1, "");
			break;
		case -1655894020:
		case 482459685:
		case 907911269:
			func_2052(func_2051(iParam0));
			break;
		case -1771755729:
		case -220644763:
			PLAYER::_0x768E81AE285A4B67(iVar1, 0);
			PLAYER::_0xE910932F4B30BE23(iVar1);
			PLAYER::_0x0E9057A9DA78D0F8(iVar1, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 0);
			break;
		case 2113555978:
			GRAPHICS::_0xAF4D239B8903FCBE();
			PLAYER::_0x768E81AE285A4B67(iVar1, 0);
			PLAYER::_0xE910932F4B30BE23(iVar1);
			PLAYER::_0x0E9057A9DA78D0F8(iVar1, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 0);
			break;
		case 785261183:
			PLAYER::_0xCE285A4413B00B7F(iVar1, 1);
			break;
		case 793826854:
			func_2053();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_626(17);
			break;
		case -824728332:
			func_626(16);
			break;
	}
}

int func_2023(int iParam0)
{
	int iVar0;

	iVar0 = func_2024(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return 0;
	}
	return 1;
}

int func_2024(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1290685708:
			return 1;
		case -1038992817:
			return 5;
		case -950874556:
			return 4;
		case -290151400:
			return 3;
		case 0:
			return 0;
		case 1938826026:
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

int func_2025(int iParam0)
{
	int iVar0;
	struct<31> Var1;
	struct<31> Var32;
	int iVar63;
	int iVar64;
	int iVar65;

	iVar0 = func_2033(iParam0);
	Var1.f_3 = 1065353216;
	Var1.f_5 = -1;
	Var1.f_6 = 3;
	Var1.f_6.f_1 = -1;
	Var1.f_6.f_1.f_3 = -1;
	Var1.f_6.f_1.f_3.f_3 = -1;
	Var1.f_17 = 5;
	Var32.f_3 = 1065353216;
	Var32.f_5 = -1;
	Var32.f_6 = 3;
	Var32.f_6.f_1 = -1;
	Var32.f_6.f_1.f_3 = -1;
	Var32.f_6.f_1.f_3.f_3 = -1;
	Var32.f_17 = 5;
	iVar63 = -1;
	iVar65 = 0;
	while (iVar65 < Global_1140484->f_30603.f_10924)
	{
		iVar64 = func_1873(&(Global_1140484->f_30603.f_8871[iVar65 /*3*/]), 1);
		if ((Global_1140484->f_30603.f_2900[iVar64 /*31*/])->f_4 != iParam0)
		{
		}
		else if (&Global_1140484->f_30603.f_8871[iVar65 /*3*/] == iVar0)
		{
		}
		else if (!func_2054(&(Global_1140484->f_30603.f_8871[iVar65 /*3*/]), (Global_1140484->f_30603.f_8871[iVar65 /*3*/])->f_1))
		{
		}
		else
		{
			Var1 = { func_2055(&(Global_1140484->f_30603.f_8871[iVar65 /*3*/])) };
			if (Var1.f_5 > Var32.f_5)
			{
				Var32 = { Var1 };
				iVar63 = iVar65;
			}
		}
		iVar65++;
	}
	return iVar63;
}

void func_2026(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_2017(iParam0))
	{
		return;
	}
	iVar0 = func_2016(iParam0, 1);
	if (!func_626(&(Global_1140484->f_2001[iVar0 /*192*/])))
	{
		return;
	}
	(*(*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])[iVar0] = (*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/][iVar0] + 1;
	(Global_1140484->f_2001[iVar0 /*192*/])->f_191 = 1;
	if (!func_2046((Global_1140484->f_2001[iVar0 /*192*/])->f_190))
	{
		return;
	}
	iVar1 = func_2047((Global_1140484->f_2001[iVar0 /*192*/])->f_190, 1);
	((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] = &((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] + 1;
	iVar2 = 0;
	while (iVar2 < (Global_1140484->f_41529[iVar1 /*25*/])->f_23)
	{
		if (Global_1140484->f_41529[iVar1 /*25*/][iVar2] == &Global_1140484->f_2001[iVar0 /*192*/])
		{
			return;
		}
		iVar2++;
	}
	(*Global_1140484->f_41529[iVar1 /*25*/])[(Global_1140484->f_41529[iVar1 /*25*/])->f_23] = &Global_1140484->f_2001[iVar0 /*192*/];
	(Global_1140484->f_41529[iVar1 /*25*/])->f_23++;
}

int func_2027(var uParam0)
{
	var uVar0;

	if (uParam0->f_1 != 0)
	{
		uVar0 = func_2056(794259616, uParam0->f_1, 1, "");
		return uVar0;
	}
	return 1;
}

void func_2028(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case -488644714:
			func_2048();
			break;
		case -2103256604:
			func_2049();
			break;
		case 692490127:
			PED::_SET_PED_WOUND_EFFECT(iVar0, 2, 14411, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case 50982971:
			PED::_0xA5950E16B8F31052(iVar0, 1, 0);
			GRAPHICS::ANIMPOSTFX_PLAY(func_2050(iParam0));
			break;
		case 1870637439:
			GRAPHICS::ANIMPOSTFX_PLAY(func_2050(iParam0));
			break;
		case 492808644:
			GRAPHICS::ANIMPOSTFX_PLAY(func_2050(iParam0));
			break;
		case 125946764:
			ATTRIBUTE::_0xFB6E111908502871(5);
			func_348(104, 1);
			break;
		case -106166013:
			GRAPHICS::ANIMPOSTFX_PLAY(func_2050(iParam0));
			break;
		case 1204983685:
			break;
		case 656937467:
			ATTRIBUTE::_0xFB6E111908502871(15);
			break;
		case 539654946:
			PLAYER::_0x5F8E0303C229C84B(iVar1, "focusfire");
			break;
		case 482459685:
			iVar2 = func_2051(iParam0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_2057(iParam0, 0));
			func_2058(iVar2, 0, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_2057(iParam0, 1));
			func_2058(iVar2, 1, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_2057(iParam0, 2));
			func_2058(iVar2, 2, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_2057(iParam0, 3));
			func_2058(iVar2, 2, 1, iVar3, 0);
			break;
		case -1655894020:
			iVar2 = func_2051(iParam0);
			func_2058(iVar2, 3, 1, -1, 1);
			break;
		case 907911269:
			iVar2 = func_2051(iParam0);
			func_2058(iVar2, 4, 1, -1, 0);
			break;
		case -220644763:
			PLAYER::_0x768E81AE285A4B67(iVar1, 1014693585);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			break;
		case -1771755729:
			PLAYER::_0x768E81AE285A4B67(iVar1, 1936842089);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			break;
		case 2113555978:
			GRAPHICS::_0x249CD6B7285536F2(0f, 2f, 2f);
			PLAYER::_0x768E81AE285A4B67(iVar1, 1979474018);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 25);
			PLAYER::_0x263D69767F76059C(iVar1, 2);
			break;
		case 785261183:
			PLAYER::_0xCE285A4413B00B7F(iVar1, 0);
			break;
		case 793826854:
			func_2059();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_626(17);
			break;
		case -824728332:
			func_626(16);
			break;
	}
}

void func_2029(int iParam0)
{
	char* sVar0;
	char* sVar1;

	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_2060(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	sVar1 = func_2061(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	AUDIO::_PLAY_SOUND_FROM_ENTITY(sVar0, Global_1275573->f_8, sVar1, 0, 0, 0);
}

bool func_2030(int iParam0, bool bParam1)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;
	bool bVar6;

	iVar0 = func_1575(iParam0);
	Var1 = { func_987(bParam1) };
	iVar5 = func_2062(&Var1, iVar0, bParam1);
	bVar6 = iVar5 == false;
	return bVar6;
}

bool func_2031(struct<34> Param0)
{
	return (!Param0.f_20 && !func_1862(Param0));
}

int func_2032(int iParam0, bool bParam1)
{
	struct<2> Var0;

	if (!func_691(iParam0, 0))
	{
		return -1;
	}
	UNLOCK::_0x7C1C2062CFAD06FE(iParam0, &Var0);
	if (Var0.f_1 < 1)
	{
		return -1;
	}
	else if (func_1361(iParam0, 81450561) || func_1361(iParam0, 1342455455))
	{
		return -1;
	}
	switch (Var0)
	{
		case joaat("CHARACTER_RANK_TRADER"):
		case joaat("CHARACTER_RANK_BOUNTY_HUNTER"):
		case joaat("CHARACTER_RANK_COLLECTOR"):
			if (bParam1)
			{
				return Var0.f_1;
			}
			return -1;
		case -55206167:
			return 1;
		case joaat("CHARACTER_RANK"):
			return Var0.f_1;
		default:
			break;
	}
	return -1;
}

int func_2033(int iParam0)
{
	int iVar0;

	if (!func_2023(iParam0))
	{
		return -1;
	}
	iVar0 = func_2024(iParam0, 1);
	return &(Global_1140484->f_30603.f_8667[iVar0 /*3*/]);
}

int func_2034(int iParam0)
{
	switch (iParam0)
	{
		case -2085163631:
			return 0;
		case -4613767:
			return 0;
		case 1567162363:
			return 1;
		case 456471693:
			return 2;
		case -1772963474:
			return 3;
		case 1881496386:
			return 4;
		case 711768994:
			return 5;
		case -440834066:
			return 6;
		case -1363847832:
			return 7;
		case 967769300:
			return 8;
		case -1436873944:
			return 9;
		case -1585669139:
			return 10;
		case 16791368:
			return 11;
		case 1452922822:
			return 12;
		case 549538301:
			return 13;
		case 974698954:
			return 14;
		case 445881012:
			return 15;
		case -2043891857:
			return 16;
		case 419656993:
			return 17;
		case -1732457315:
			return 18;
		case 1794318026:
			return 19;
		case 2035159966:
			return 20;
		case 770832805:
			return 21;
		case -1109814766:
			return 22;
		case -1080317735:
			return 23;
		case -1075550363:
			return 24;
		case 2138576151:
			return 25;
		case 1180954297:
			return 26;
		case 783603394:
			return 27;
		case -170458336:
			return 30;
		case 2023240596:
			return 29;
		case 1285083821:
			return 31;
		case -1840907462:
			return 32;
		case 756710130:
			return 33;
		case 1634157321:
			return 34;
		case 388370024:
			return 35;
		case 1092296123:
			return 36;
		case 467491346:
			return 37;
		case -1391584612:
			return 38;
		case -152111346:
			return 39;
		case 1447551317:
			return 40;
		case 153136092:
			return 41;
		case 1304405732:
			return 42;
		case 1074984055:
			return 43;
		case 1087476368:
			return 53;
		case -1768057340:
			return 54;
		case 1218874593:
			return 44;
		case -1438443836:
			return 55;
		case -2036340415:
			return 45;
		case -597278150:
			return 56;
		case 803939643:
			return 46;
		case -632496195:
			return 57;
		case -965943619:
			return 47;
		case 283532073:
			return 48;
		case -462827524:
			return 49;
		case -69067491:
			return 50;
		case -1864895118:
			return 51;
		case -1929806571:
			return 58;
		case 1162337247:
			return 28;
		case -698525417:
			return 59;
		case -1149739894:
			return 60;
		case 380507325:
			return 52;
		case -875142075:
			return 61;
		case 407796241:
			return 62;
		case -152267914:
			return 63;
		case -1675443320:
			return 64;
		case 1940341639:
			return 65;
		case 1846596114:
			return 66;
		case 907708501:
			return 67;
		case 1825644981:
			return 69;
		case 2065937607:
			return 70;
		case -211317417:
			return 71;
		case 1801307910:
			return 72;
		case -4118897:
			return 73;
		case 1853610692:
			return 74;
		case -1574644415:
			return 75;
		case 2133055515:
			return 76;
		case -1413401932:
			return 77;
		case 801090761:
			return 78;
		case 2131218644:
			return 79;
		case 1708823660:
			return 80;
		case 7976942:
			return 81;
		case 2111120505:
			return 82;
		case 176893118:
			return 83;
		case 602306665:
			return 68;
		case 1179148161:
			return 84;
		case 547412068:
			return 85;
		case -1539748801:
			return 86;
		case -1605119912:
			return 87;
		case -884464063:
			return 88;
		case -1420970720:
			return 89;
		case 1017024547:
			return 90;
		case -1204497306:
			return 91;
		case -1621069480:
			return 92;
		case -458604261:
			return 93;
		case -923391614:
			return 94;
		case -689247089:
			return 95;
		case 44049568:
			return 97;
		case 1350259552:
			return 98;
		case 620414938:
			return 96;
		case -61661574:
			return 99;
		case -725338054:
			return 100;
		case -770123507:
			return 101;
		case 1322486734:
			return 102;
		case -460939553:
			return 103;
		case -1451863552:
			return 104;
		case 713715980:
			return 107;
		case -31204969:
			return 108;
		case -1720064790:
			return 109;
		case 173833068:
			return 105;
		case -1681004136:
			return 106;
		case -532172775:
			return 110;
		case -739067737:
			return 111;
		case -1203133835:
			return 112;
		case -1947411598:
			return 113;
		case -1049753365:
			return 114;
		case -1298718762:
			return 115;
		case -595083064:
			return 116;
		case 884833917:
			return 117;
		case 2141950651:
			return 118;
		case -1437650729:
			return 119;
		case 672925454:
			return 134;
		case 846062774:
			return 135;
		case 1713550306:
			return 136;
		case 1369756178:
			return 127;
		case -736172423:
			return 128;
		case 1597070291:
			return 129;
		case -159501564:
			return 131;
		case -1438809608:
			return 130;
		case -102682392:
			return 132;
		case 676673543:
			return 133;
		case -81068979:
			return 120;
		case 227618407:
			return 121;
		case 2106043438:
			return 122;
		case -1380256064:
			return 123;
		case -2118469183:
			return 124;
		case -558997834:
			return 125;
		case 1563120499:
			return 126;
		case 658339366:
			return 137;
		default:
			break;
	}
	return -1;
}

int func_2035(int iParam0)
{
	switch (iParam0)
	{
		case 675537701:
			return 0;
		case -1915988145:
			return 1;
		case 38535626:
			return 2;
		case 1904167574:
			return 3;
		case 244711249:
			return 4;
		case -1859792564:
			return 5;
		case -1808688941:
			return 6;
		case -736296038:
			return 7;
		case -909439131:
			return 8;
		case 1917744724:
			return 9;
		case 821748379:
			return 10;
		case 196685551:
			return 11;
		case 1983548039:
			return 12;
		case 985737465:
			return 13;
		case -735550853:
			return 14;
		case -1716084250:
			return 15;
		case 869827975:
			return 16;
		default:
			break;
	}
	return -1;
}

char* func_2036(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "REGION_INVALID";
		case 0:
			return "REGION_BAY_CRAWDADWILLIES";
		case 1:
			return "REGION_BAY_MACOMBS_END";
		case 2:
			return "REGION_BAY_MERKINSWALLER";
		case 3:
			return "REGION_BAY_LAGRAS";
		case 4:
			return "REGION_BAY_LAKAY";
		case 5:
			return "REGION_BAY_SAINT_DENIS";
		case 6:
			return "REGION_BAY_ORANGE_PLANTATION";
		case 7:
			return "REGION_BAY_SERIAL_KILLER";
		case 8:
			return "REGION_BAY_SERENDIPITY";
		case 9:
			return "REGION_BAY_SHADYBELLE";
		case 10:
			return "REGION_BAY_SILTWATERSTRAND";
		case 11:
			return "REGION_BGV_APPLESEEDTIMBER";
		case 12:
			return "REGION_BGV_BERYLS_DREAM";
		case 13:
			return "REGION_BGV_BLACKBONEFOREST_TRAPPER";
		case 14:
			return "REGION_BGV_DAKOTARIVER_TRAPPER";
		case 15:
			return "REGION_BGV_FORTRIGGS";
		case 16:
			return "REGION_BGV_HANGINGDOG";
		case 17:
			return "REGION_BGV_LONEMULESTEAD";
		case 18:
			return "REGION_BGV_MISSING_HUSBAND";
		case 19:
			return "REGION_BGV_MONTO_REST";
		case 20:
			return "REGION_BGV_OWANJILA_DAM";
		case 21:
			return "REGION_BGV_PAINTEDSKY";
		case 22:
			return "REGION_BGV_PRONGHORN";
		case 23:
			return "REGION_BGV_RIGGS_STATION";
		case 24:
			return "REGION_BGV_SHACK";
		case 25:
			return "REGION_BGV_SHEPHERDS_RISE";
		case 26:
			return "REGION_BGV_STRAWBERRY";
		case 27:
			return "REGION_BGV_VALLEY_VIEW";
		case 28:
			return "REGION_BGV_WALLACE_STATION";
		case 30:
			return "REGION_BGV_WATSONSCABIN";
		case 29:
			return "REGION_BGV_OLD_MAN_JONES";
		case 31:
			return "REGION_BLU_CANEBREAK_MANOR";
		case 32:
			return "REGION_BLU_COPPERHEAD";
		case 33:
			return "REGION_BLU_SISIKA";
		case 34:
			return "REGION_BLU_TRAVELLING_SALESMAN";
		case 35:
			return "REGION_CML_BACCHUSBRIDGE";
		case 36:
			return "REGION_CML_DINO_LADY";
		case 37:
			return "REGION_CML_OLDFORTWALLACE";
		case 38:
			return "REGION_CML_SIXPOINTCABIN";
		case 39:
			return "REGION_GRT_BEECHERS";
		case 40:
			return "REGION_GRT_BLACKWATER";
		case 41:
			return "REGION_GRT_QUAKERS_COVE";
		case 42:
			return "REGION_GRZ_ADLERRANCH";
		case 43:
			return "REGION_GRZ_DEAD_RIVAL";
		case 53:
			return "REGION_GRZ_CALUMETRAVINE";
		case 54:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
		case 44:
			return "REGION_GRZ_CHEZPORTER";
		case 55:
			return "REGION_GRZ_COHUTTA";
		case 45:
			return "REGION_GRZ_COLTER";
		case 56:
			return "REGION_GRZ_COTORRA_SPRINGS";
		case 46:
			return "REGION_GRZ_FROZEN_EXPLORER";
		case 57:
			return "REGION_GRZ_GUNFIGHT";
		case 47:
			return "REGION_GRZ_MILLESANI_CLAIM";
		case 48:
			return "REGION_GRZ_MOUNTAIN_MAN";
		case 49:
			return "REGION_GRZ_MOUNT_HAGEN_PEAK";
		case 50:
			return "REGION_GRZ_STARVING_CHILDREN";
		case 51:
			return "REGION_GRZ_TEMPEST_RIM";
		case 58:
			return "REGION_GRZ_THELOFT";
		case 59:
			return "REGION_GRE_VETERAN";
		case 60:
			return "REGION_GRZ_WAPITI";
		case 52:
			return "REGION_GRZ_WINTERMINING_TOWN";
		case 61:
			return "REGION_GRZ_TRAVELLING_SALESMAN";
		case 62:
			return "REGION_GUA_AGUASDULCES";
		case 63:
			return "REGION_GUA_CAMP";
		case 64:
			return "REGION_GUA_CINCOTORRES";
		case 65:
			return "REGION_GUA_LACAPILLA";
		case 66:
			return "REGION_GUA_MANICATO";
		case 67:
			return "REGION_HRT_ABANDONED_MILL";
		case 69:
			return "REGION_HRT_CARMODYDELL";
		case 70:
			return "REGION_HRT_CORNWALLKEROSENE";
		case 71:
			return "REGION_HRT_CROP_FARM";
		case 72:
			return "REGION_HRT_CUMBERLANDFALLS";
		case 73:
			return "REGION_HRT_DOWNSRANCH";
		case 74:
			return "REGION_HRT_EMERALDRANCH";
		case 75:
			return "REGION_HRT_GRANGERS_HOGGERY";
		case 76:
			return "REGION_HRT_HORSESHOEOVERLOOK";
		case 77:
			return "REGION_HRT_LARNEDSOD";
		case 78:
			return "REGION_HRT_LOONY_CULT";
		case 79:
			return "REGION_HRT_LUCKYSCABIN";
		case 80:
			return "REGION_HRT_SWANSONS_STATION";
		case 81:
			return "REGION_HRT_VALENTINE";
		case 82:
			return "REGION_ROA_ABERDEENPIGFARM";
		case 83:
			return "REGION_ROA_ANNESBURG";
		case 84:
			return "REGION_ROA_BEAVERHOLLOW";
		case 68:
			return "REGION_ROA_BEECHERS_C";
		case 85:
			return "REGION_ROA_BLACK_BALSAM_RISE";
		case 86:
			return "REGION_ROA_BRANDYWINE_DROP";
		case 87:
			return "REGION_ROA_BUTCHERCREEK";
		case 88:
			return "REGION_ROA_DOVERHILL";
		case 89:
			return "REGION_ROA_HAPPY_FAMILY";
		case 90:
			return "REGION_ROA_ISOLATIONIST";
		case 91:
			return "REGION_ROA_MACLEANSHOUSE";
		case 92:
			return "REGION_ROA_MOSSY_FLATS";
		case 93:
			return "REGION_ROA_ROANOKE_VALLEY";
		case 94:
			return "REGION_ROA_ROCKYSEVEN";
		case 95:
			return "REGION_ROA_TRAPPER";
		case 97:
			return "REGION_ROA_VANHORNMANSION";
		case 98:
			return "REGION_ROA_VANHORNPOST";
		case 96:
			return "REGION_ROA_OLD_MAN_JONES";
		case 99:
			return "REGION_SCM_BRAITHWAITEMANOR";
		case 100:
			return "REGION_SCM_BULGERGLADE";
		case 101:
			return "REGION_SCM_CALIGAHALL";
		case 102:
			return "REGION_SCM_CATFISHJACKSONS";
		case 103:
			return "REGION_SCM_CLEMENSCOVE";
		case 104:
			return "REGION_SCM_CLEMENSPOINT";
		case 105:
			return "REGION_SCM_COMPSONS_STEAD";
		case 106:
			return "REGION_SCM_DAIRY_FARM";
		case 107:
			return "REGION_SCM_HORSE_SHOP";
		case 108:
			return "REGION_SCM_LONNIESSHACK";
		case 109:
			return "REGION_SCM_LOVE_TRIANGLE";
		case 110:
			return "REGION_SCM_RADLEYS_PASTURE";
		case 111:
			return "REGION_SCM_RHODES";
		case 112:
			return "REGION_SCM_SLAVE_PEN";
		case 113:
			return "REGION_TAL_AURORA_BASIN";
		case 114:
			return "REGION_TAL_DEAD_SETTLER";
		case 115:
			return "REGION_TAL_COCHINAY";
		case 116:
			return "REGION_TAL_MANZANITAPOST";
		case 117:
			return "REGION_TAL_PACIFICUNIONRR";
		case 118:
			return "REGION_TAL_TANNERSREACH";
		case 119:
			return "REGION_TAL_TRAPPER";
		case 134:
			return "REGION_HEN_MACFARLANES_RANCH";
		case 135:
			return "REGION_HEN_THIEVES_LANDING";
		case 136:
			return "REGION_HEN_TRAVELLING_SALESMAN";
		case 127:
			return "REGION_CHO_ARMADILLO";
		case 128:
			return "REGION_CHO_COOTS_CHAPEL";
		case 129:
			return "REGION_CHO_DON_JULIO_HOUSE";
		case 131:
			return "REGION_CHO_RIDGEWOOD_FARM";
		case 130:
			return "REGION_CHO_RILEYS_CHARGE";
		case 132:
			return "REGION_CHO_TWIN_ROCKS";
		case 133:
			return "REGION_CHO_TRAVELLING_SALESMAN";
		case 120:
			return "REGION_GAP_GAPTOOTH_BREACH";
		case 121:
			return "REGION_GAP_TUMBLEWEED";
		case 122:
			return "REGION_GAP_RATHSKELLER_FORK";
		case 123:
			return "REGION_RIO_BENEDICT_POINT";
		case 124:
			return "REGION_RIO_FORT_MERCER";
		case 125:
			return "REGION_RIO_PLAIN_VIEW";
		case 126:
			return "REGION_RIO_TRAVELLING_SALESMAN";
		case 137:
			return "REGION_CENTRALUNIONRR";
		default:
			break;
	}
	return "REGION_INVALID";
	return "REGION_INVALID";
}

char* func_2037(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

int func_2038(int iParam0)
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
	iVar0 = func_1915(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_1914(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_1913(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_1910(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_1911(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_1912(iParam0);
	if (iVar5 < 1 || iVar5 > func_1916(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_2039(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_2063(func_1785(), iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
}

int func_2040(int iParam0)
{
	int iVar0;

	iVar0 = func_1770(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return 1;
	}
	return 0;
}

int func_2041(int iParam0)
{
	int iVar0;

	iVar0 = func_1770(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return 1;
	}
	return 0;
}

int func_2042(int iParam0)
{
	int iVar0;

	iVar0 = func_1770(iParam0, 1);
	if (iVar0 >= 162 && iVar0 <= 169)
	{
		return 1;
	}
	return 0;
}

int func_2043(int iParam0)
{
	int iVar0;

	iVar0 = func_1770(iParam0, 1);
	if (iVar0 >= 170 && iVar0 <= 170)
	{
		return 1;
	}
	return 0;
}

int func_2044(int iParam0)
{
	int iVar0;

	iVar0 = func_1770(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 160)
	{
		return 1;
	}
	return 0;
}

float func_2045(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	struct<11> Var0;
	float fVar22;

	if (func_2064(iParam0, iParam1, &Var0))
	{
		fVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

int func_2046(int iParam0)
{
	int iVar0;

	iVar0 = func_2047(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return 0;
	}
	return 1;
}

int func_2047(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1745889187:
			return 3;
		case -1016837116:
			return 5;
		case 0:
			return 0;
		case 370243254:
			return 4;
		case 1213888609:
			return 2;
		case 1416591065:
			return 1;
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

void func_2048()
{
	bool bVar0;
	bool bVar1;

	if ((Global_1140484->f_18706[3 /*195*/])->f_194)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 550, bVar0);
	if ((Global_1140484->f_18706[4 /*195*/])->f_194)
	{
		bVar1 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 556, bVar1);
}

void func_2049()
{
	bool bVar0;

	bVar0 = false;
	if ((Global_1140484->f_18706[12 /*195*/])->f_194)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 263, bVar0);
}

char* func_2050(int iParam0)
{
	switch (iParam0)
	{
		case 1870637439:
			return "MP_ArrowDrain";
		case 492808644:
			return "MP_ArrowDisorient";
		case 50982971:
			return "MP_ArrowTracking";
		case -106166013:
			return "MP_MoonshineToxic";
		default:
			break;
	}
	return "";
}

int func_2051(int iParam0)
{
	switch (iParam0)
	{
		case 482459685:
			return -843895567;
		case -1655894020:
			return -1655894020;
		case 907911269:
			return 907911269;
		default:
			break;
	}
	return 0;
}

void func_2052(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (((*Global_1182208)[iVar0 /*8*/])->f_5 == iParam0)
		{
			((*Global_1182208)[iVar0 /*8*/])->f_7 = 1;
			((*Global_1182208)[iVar0 /*8*/])->f_5 = 0;
		}
		iVar0++;
	}
}

void func_2053()
{
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 305, false);
	PED::_0x801917E7D7BCE418(Global_1275573->f_8);
}

int func_2054(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<31> Var4;

	if (!func_1959(iParam0))
	{
		return 0;
	}
	iVar0 = func_1873(iParam0, 1);
	iVar2 = (Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4;
	if (func_1961(*(Global_1140484->f_30603.f_2900[iVar0 /*31*/])))
	{
		iVar3 = &Global_1140484->f_30603.f_8667[func_2024(iVar2, 1) /*3*/];
		Var4 = { func_2055(iVar3) };
		if (iVar3 != iParam0 && (Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_5 <= Var4.f_5)
		{
			return 0;
		}
	}
	switch (&Global_1140484->f_30603.f_2900[iVar0 /*31*/])
	{
		case -1606735498:
		case -1455211650:
		case -1324410551:
		case -1276912520:
		case -1028878953:
		case -992973338:
		case -971275364:
		case -932644421:
		case -590004554:
		case -528257357:
		case -193993646:
		case -166662497:
		case -23641105:
		case 37083370:
		case 52193493:
		case 180258367:
		case 429965152:
		case 461381338:
		case 522523138:
		case 589907865:
		case 979390476:
		case 1028557598:
		case 1154303630:
		case 1254162401:
		case 1269394302:
		case 1305415806:
		case 1461424861:
		case 1691008805:
		case 1759133423:
		case 1810352391:
		case 1915097582:
		case 1921800945:
		case 2046842849:
		case 2116793692:
			return 1;
		case 1245579893:
			if (!func_2065() && !func_2066())
			{
				return 0;
			}
			return 1;
		case -2010146101:
			if (!func_2065())
			{
				return 0;
			}
			return 1;
		case -2139108927:
			iVar1 = func_1958(iParam1);
			if (iVar1 == &Global_1275573)
			{
				return 0;
			}
			return 1;
		case -2129621195:
			iVar1 = func_1958(iParam1);
			if (iVar1 == &Global_1275573)
			{
				return 0;
			}
			if (!_NAMESPACE26::_0x424B17A7DC5C90BC(&(Global_1275573->f_154[&Global_1275573])))
			{
				return 0;
			}
			if (!_NAMESPACE26::_0x81FB74C83C2ED69F(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			return 1;
		case 190804938:
			iVar1 = func_1958(iParam1);
			if (!NETWORK::_0x255A5EF65EDA9167(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			if (iVar1 != &Global_1275573 && !func_1135(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			if (!func_1244(512, iVar1))
			{
				return 0;
			}
			return 1;
		case -1503245593:
			if (!&Global_1954472->f_1616[8])
			{
				return 0;
			}
			iVar1 = func_1958(iParam1);
			if (!NETWORK::_0x255A5EF65EDA9167(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			if (PED::_0x0C31C51168E80365(Global_1275573->f_8) != PLAYER::GET_PLAYER_PED(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			return 1;
		default:
			break;
	}
	return 0;
}

struct<31> func_2055(int iParam0)
{
	int iVar0;

	iVar0 = func_1873(iParam0, 1);
	return *(Global_1140484->f_30603.f_2900[iVar0 /*31*/]);
}

bool func_2056(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	struct<11> Var0;
	bool bVar22;

	if (func_2064(iParam0, iParam1, &Var0))
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_BOOL(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_BOOL(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_2057(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 482459685:
			switch (iParam1)
			{
				case 0:
					return "PH_HEAD";
				case 1:
					return "CP_CHEST";
				case 2:
					return "CP_R_UpperArm";
				case 3:
					return "CP_L_UpperArm";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_2058(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1182208[iVar0 /*8*/]) && !((*Global_1182208)[iVar0 /*8*/])->f_6)
		{
			((*Global_1182208)[iVar0 /*8*/])->f_5 = iParam0;
			((*Global_1182208)[iVar0 /*8*/])->f_1 = iParam1;
			((*Global_1182208)[iVar0 /*8*/])->f_2 = iParam2;
			((*Global_1182208)[iVar0 /*8*/])->f_3 = iParam3;
			((*Global_1182208)[iVar0 /*8*/])->f_4 = iParam4;
			((*Global_1182208)[iVar0 /*8*/])->f_6 = 1;
			return;
		}
		iVar0++;
	}
}

void func_2059()
{
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 305, true);
	PED::_0x05CE6AF4DF071D23(Global_1275573->f_8, 0.7f);
}

char* func_2060(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "Head_Shot_Ricco";
		default:
			break;
	}
	return "";
}

char* func_2061(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "RDRO_Ability_Cards_SFX_Sounds";
		default:
			break;
	}
	return "";
}

int func_2062(var uParam0, bool bParam1, bool bParam2)
{
	return INVENTORY::_0x033EE4B89F3AC545(func_674(bParam2), uParam0, bParam1);
}

void func_2063(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_2067(iParam0, iParam1, 1))
	{
		iVar0 = func_1911(iParam1);
		iVar1 = func_1910(iParam0);
		iVar2 = (func_1910(iParam0) - func_1910(iParam1));
		iVar3 = (func_1911(iParam0) - func_1911(iParam1));
		iVar4 = (func_1912(iParam0) - func_1912(iParam1));
		iVar5 = (func_1913(iParam0) - func_1913(iParam1));
		iVar6 = (func_1914(iParam0) - func_1914(iParam1));
		iVar7 = (func_1915(iParam0) - func_1915(iParam1));
	}
	else
	{
		iVar0 = func_1911(iParam0);
		iVar1 = func_1910(iParam1);
		iVar2 = (func_1910(iParam1) - func_1910(iParam0));
		iVar3 = (func_1911(iParam1) - func_1911(iParam0));
		iVar4 = (func_1912(iParam1) - func_1912(iParam0));
		iVar5 = (func_1913(iParam1) - func_1913(iParam0));
		iVar6 = (func_1914(iParam1) - func_1914(iParam0));
		iVar7 = (func_1915(iParam1) - func_1915(iParam0));
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
		iVar4 = (iVar4 + func_1916(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = BUILTIN::ROUND(func_2068(BUILTIN::TO_FLOAT(iVar0 + 1), 0f, 12f));
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
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

int func_2064(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	int iVar7;

	Var0 = -178401592;
	Var0.f_1 = iParam0;
	Var0.f_2 = joaat("name");
	Var0.f_3 = 1;
	Var0.f_4 = iParam1;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	if (DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, joaat("name")))
	{
		*uParam2 = iParam0;
		uParam2->f_9 = iParam1;
		StringCopy(&(uParam2->f_1), "", 64);
		StringIntConCat(&(uParam2->f_1), iVar7, 64);
		DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, joaat("type"));
		uParam2->f_10.f_3 = func_2069(iVar7);
		uParam2->f_14.f_3 = uParam2->f_10.f_3;
		uParam2->f_18.f_3 = uParam2->f_10.f_3;
		switch (uParam2->f_10.f_3)
		{
			case 0:
				if (!DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_10), &Var0, joaat("default")))
				{
				}
				break;
			case 1:
				if (!DATAFILE::_0xB2B42607F7867576(&(uParam2->f_10.f_1), &Var0, joaat("default")))
				{
				}
				break;
			case 2:
				if (!DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_10.f_2), &Var0, joaat("default")))
				{
				}
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_14), &Var0, joaat("min"));
				break;
			case 1:
				DATAFILE::_0xB2B42607F7867576(&(uParam2->f_14.f_1), &Var0, joaat("min"));
				break;
			case 2:
				DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_14.f_2), &Var0, joaat("min"));
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_18), &Var0, joaat("max"));
				break;
			case 1:
				DATAFILE::_0xB2B42607F7867576(&(uParam2->f_18.f_1), &Var0, joaat("max"));
				break;
			case 2:
				DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_18.f_2), &Var0, joaat("max"));
				break;
		}
		switch (uParam2->f_10.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		return 1;
	}
	return 0;
}

bool func_2065()
{
	return Global_1572887->f_6;
}

int func_2066()
{
	if (!&Global_1048577)
	{
		return 0;
	}
	if (!func_73(func_373(0)))
	{
		return 0;
	}
	if (&Global_3145858 != -504335712)
	{
		return 0;
	}
	if (func_1562(Global_524288->f_39792))
	{
		return 1;
	}
	return 0;
}

bool func_2067(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_2038(iParam1) || !func_2038(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

float func_2068(float fParam0, float fParam1, float fParam2)
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

int func_2069(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("int"):
			iVar0 = 0;
			break;
		case joaat("float"):
			iVar0 = 1;
			break;
		case joaat("bool"):
			iVar0 = 2;
			break;
	}
	return iVar0;
}

