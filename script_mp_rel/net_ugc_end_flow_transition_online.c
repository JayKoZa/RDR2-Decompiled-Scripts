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
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	var uLocal_15[4] = { 0, 0, 0, 0 };
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	bool bLocal_30 = false;
	int iLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	struct<394> Local_37 = { 0, 0, 1, 0, 0, 0, 0, -1, -1, -1, 4, 255, 0, -1, -1, -1, 255, 0, -1, -1, -1, 255, 0, -1, -1, -1, 255, 0, -1, -1, -1, 255, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, -1, 0 } ;
	struct<5> Local_431[32];
	struct<12> Local_592[32];
	struct<38> Local_977[32];
	struct<1484> Local_2194 = { 0, 4, 0, 0, 0, 0, -1, 0, 255, 0, 0, 0, 0, 0, 4, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, 20, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, -1, 0, -2, 0, 0, 20, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 10, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 10, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 5, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 24, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 1 } ;
	var uLocal_3678 = 0;
	var uLocal_3679 = 0;
	var uLocal_3680 = 0;
	var uLocal_3681 = 0;
	var uLocal_3682 = 0;
	var uLocal_3683 = 0;
	var uLocal_3684 = 0;
	var uLocal_3685 = 0;
	var uLocal_3686 = 0;
	var uLocal_3687 = 0;
	var uLocal_3688 = 0;
	var uLocal_3689 = 0;
	var uLocal_3690 = 0;
	var uLocal_3691 = 0;
	var uLocal_3692 = 0;
	var uLocal_3693 = 0;
	var uLocal_3694 = 14;
	var uLocal_3695 = 0;
	var uLocal_3696 = 0;
	var uLocal_3697 = 0;
	var uLocal_3698 = 0;
	var uLocal_3699 = 0;
	var uLocal_3700 = 0;
	var uLocal_3701 = 0;
	var uLocal_3702 = 0;
	var uLocal_3703 = 0;
	var uLocal_3704 = 0;
	var uLocal_3705 = 0;
	var uLocal_3706 = 0;
	var uLocal_3707 = 0;
	var uLocal_3708 = 0;
	var uLocal_3709 = 0;
	var uLocal_3710 = 0;
	var uLocal_3711 = 0;
	var uLocal_3712 = 0;
	var uLocal_3713 = 0;
	var uLocal_3714 = 0;
	var uLocal_3715 = 0;
	var uLocal_3716 = 0;
	var uLocal_3717 = 0;
	var uLocal_3718 = 0;
	var uLocal_3719 = 0;
	var uLocal_3720 = 0;
	var uLocal_3721 = 0;
	var uLocal_3722 = 0;
	var uLocal_3723 = 0;
	var uLocal_3724 = 0;
	var uLocal_3725 = 0;
	var uLocal_3726 = 0;
	var uLocal_3727 = 0;
	var uLocal_3728 = 0;
	var uLocal_3729 = 0;
	var uLocal_3730 = 0;
	var uLocal_3731 = 0;
	var uLocal_3732 = 0;
	var uLocal_3733 = 0;
	var uLocal_3734 = 0;
	var uLocal_3735 = 0;
	var uLocal_3736 = 0;
	var uLocal_3737 = 0;
	var uLocal_3738 = 0;
	var uLocal_3739 = 0;
	var uLocal_3740 = 0;
	var uLocal_3741 = 0;
	var uLocal_3742 = 0;
	var uLocal_3743 = 0;
	var uLocal_3744 = 0;
	var uLocal_3745 = 0;
	var uLocal_3746 = 0;
	var uLocal_3747 = 0;
	var uLocal_3748 = 0;
	var uLocal_3749 = 0;
	var uLocal_3750 = 0;
	var uLocal_3751 = 0;
	var uLocal_3752 = 0;
	var uLocal_3753 = 0;
	var uLocal_3754 = 0;
	var uLocal_3755 = 0;
	var uLocal_3756 = 0;
	var uLocal_3757 = 0;
	var uLocal_3758 = 0;
	var uLocal_3759 = 0;
	var uLocal_3760 = 0;
	var uLocal_3761 = 0;
	var uLocal_3762 = 0;
	var uLocal_3763 = 0;
	var uLocal_3764 = 0;
	var uLocal_3765 = 0;
	var uLocal_3766 = 0;
	var uLocal_3767 = 0;
	var uLocal_3768 = 0;
	var uLocal_3769 = 0;
	var uLocal_3770 = 0;
	var uLocal_3771 = 0;
	var uLocal_3772 = 0;
	var uLocal_3773 = 0;
	var uLocal_3774 = 0;
	var uLocal_3775 = 0;
	var uLocal_3776 = 0;
	var uLocal_3777 = 0;
	var uLocal_3778 = 0;
	var uLocal_3779 = 0;
	var uLocal_3780 = 0;
	var uLocal_3781 = 0;
	var uLocal_3782 = 0;
	var uLocal_3783 = 0;
	var uLocal_3784 = 0;
	var uLocal_3785 = 0;
	var uLocal_3786 = 0;
	var uLocal_3787 = 0;
	var uLocal_3788 = 0;
	var uLocal_3789 = 0;
	var uLocal_3790 = 0;
	var uLocal_3791 = 0;
	var uLocal_3792 = 0;
	var uLocal_3793 = 0;
	var uLocal_3794 = 0;
	var uLocal_3795 = 0;
	var uLocal_3796 = 0;
	var uLocal_3797 = 0;
	var uLocal_3798 = 0;
	var uLocal_3799 = 0;
	var uLocal_3800 = 0;
	var uLocal_3801 = 0;
	var uLocal_3802 = 0;
	var uLocal_3803 = 0;
	var uLocal_3804 = 0;
	var uLocal_3805 = 0;
	var uLocal_3806 = 0;
	var uLocal_3807 = 0;
	var uLocal_3808 = 0;
	var uLocal_3809 = 0;
	var uLocal_3810 = 0;
	var uLocal_3811 = 0;
	var uLocal_3812 = 0;
	var uLocal_3813 = 0;
	var uLocal_3814 = 0;
	var uLocal_3815 = 0;
	var uLocal_3816 = 0;
	var uLocal_3817 = 0;
	var uLocal_3818 = 0;
	var uLocal_3819 = 0;
	var uLocal_3820 = 0;
	var uLocal_3821 = 0;
	var uLocal_3822 = 0;
	var uLocal_3823 = 0;
	var uLocal_3824 = 0;
	var uLocal_3825 = 0;
	var uLocal_3826 = 0;
	var uLocal_3827 = 0;
	var uLocal_3828 = 0;
	var uLocal_3829 = 0;
	var uLocal_3830 = 0;
	var uLocal_3831 = 0;
	var uLocal_3832 = 0;
	var uLocal_3833 = 0;
	var uLocal_3834 = 0;
	var uLocal_3835 = 0;
	var uLocal_3836 = 0;
	var uLocal_3837 = 0;
	var uLocal_3838 = 0;
	var uLocal_3839 = 0;
	var uLocal_3840 = 0;
	var uLocal_3841 = 0;
	var uLocal_3842 = 0;
	var uLocal_3843 = 0;
	var uLocal_3844 = 0;
	var uLocal_3845 = 0;
	var uLocal_3846 = 0;
	var uLocal_3847 = 0;
	var uLocal_3848 = 0;
	var uLocal_3849 = 0;
	var uLocal_3850 = 0;
	var uLocal_3851 = 0;
	var uLocal_3852 = 0;
	var uLocal_3853 = 0;
	var uLocal_3854 = 0;
	var uLocal_3855 = 0;
	var uLocal_3856 = 0;
	var uLocal_3857 = 0;
	var uLocal_3858 = 0;
	var uLocal_3859 = 0;
	var uLocal_3860 = 0;
	var uLocal_3861 = 0;
	var uLocal_3862 = 0;
	var uLocal_3863 = 1097859072;
	var uLocal_3864 = 1101004800;
	var uLocal_3865 = 0;
	var uLocal_3866 = 0;
	var uLocal_3867 = 0;
	var uLocal_3868 = 0;
	var uLocal_3869 = 0;
	var uLocal_3870 = 0;
	var uLocal_3871 = 0;
	var uLocal_3872 = 0;
	var uLocal_3873 = 0;
	var uLocal_3874 = 0;
	var uLocal_3875 = 0;
	var uLocal_3876 = 0;
	var uLocal_3877 = 0;
	var uLocal_3878 = 0;
	var uLocal_3879 = 0;
	var uLocal_3880 = 0;
	var uLocal_3881 = 0;
	var uLocal_3882 = 0;
	var uLocal_3883 = 0;
	var uLocal_3884 = 0;
	var uLocal_3885 = 0;
	var uLocal_3886 = 0;
	var uLocal_3887 = 0;
	var uLocal_3888 = 0;
	var uLocal_3889 = 0;
	var uLocal_3890 = 0;
	var uLocal_3891 = 0;
	var uLocal_3892 = 0;
	var uLocal_3893 = 0;
	var uLocal_3894 = 0;
	var uLocal_3895 = 0;
	var uLocal_3896 = 0;
	var uLocal_3897 = 0;
	var uLocal_3898 = 0;
	var uLocal_3899 = 0;
	var uLocal_3900 = 0;
	var uLocal_3901 = 0;
	var uLocal_3902 = 4;
	var uLocal_3903 = 0;
	var uLocal_3904 = 0;
	var uLocal_3905 = 0;
	var uLocal_3906 = 0;
	var uLocal_3907 = 0;
	var uLocal_3908 = 0;
	var uLocal_3909 = 0;
	var uLocal_3910 = 0;
	var uLocal_3911 = 0;
	var uLocal_3912 = 0;
	var uLocal_3913 = 0;
	var uLocal_3914 = 0;
	var uLocal_3915 = 0;
	var uLocal_3916 = 0;
	var uLocal_3917 = 0;
	var uLocal_3918 = 0;
	var uLocal_3919 = 0;
	var uLocal_3920 = 0;
	var uLocal_3921 = 0;
	var uLocal_3922 = 0;
	var uLocal_3923 = 0;
	var uLocal_3924 = 0;
	var uLocal_3925 = 0;
	var uLocal_3926 = 0;
	var uLocal_3927 = 0;
	var uLocal_3928 = 0;
	var uLocal_3929 = 0;
	var uLocal_3930 = 0;
	var uLocal_3931 = 0;
	var uLocal_3932 = 0;
	var uLocal_3933 = 0;
	var uLocal_3934 = 0;
	var uLocal_3935 = 0;
	var uLocal_3936 = 0;
	var uLocal_3937 = 0;
	var uLocal_3938 = 0;
	var uLocal_3939 = 0;
	var uLocal_3940 = 0;
	var uLocal_3941 = 0;
	var uLocal_3942 = 0;
	var uLocal_3943 = 0;
	var uLocal_3944 = 0;
	var uLocal_3945 = 0;
	var uLocal_3946 = 0;
	var uLocal_3947 = 0;
	var uLocal_3948 = 0;
	var uLocal_3949 = 0;
	var uLocal_3950 = 0;
	var uLocal_3951 = 0;
	var uLocal_3952 = 0;
	var uLocal_3953 = 0;
	var uLocal_3954 = 0;
	var uLocal_3955 = 0;
	var uLocal_3956 = 0;
	var uLocal_3957 = 0;
	var uLocal_3958 = 0;
	var uLocal_3959 = 0;
	var uLocal_3960 = 0;
	var uLocal_3961 = 0;
	var uLocal_3962 = 0;
	var uLocal_3963 = 0;
	var uLocal_3964 = 0;
	var uLocal_3965 = 0;
	var uLocal_3966 = 0;
	var uLocal_3967 = 0;
	var uLocal_3968 = 0;
	var uLocal_3969 = 1000;
	var uLocal_3970 = 15;
	var uLocal_3971 = 0;
	var uLocal_3972 = 0;
	var uLocal_3973 = 0;
	var uLocal_3974 = 0;
	var uLocal_3975 = 0;
	var uLocal_3976 = 0;
	var uLocal_3977 = 0;
	var uLocal_3978 = 0;
	var uLocal_3979 = 0;
	var uLocal_3980 = 0;
	var uLocal_3981 = 0;
	var uLocal_3982 = 0;
	var uLocal_3983 = 0;
	var uLocal_3984 = 0;
	var uLocal_3985 = 0;
	var uLocal_3986 = 0;
	var uLocal_3987 = 0;
	var uLocal_3988 = 0;
	var uLocal_3989 = 0;
	var uLocal_3990 = 0;
	var uLocal_3991 = 0;
	var uLocal_3992 = 0;
	var uLocal_3993 = 0;
	var uLocal_3994 = 0;
	var uLocal_3995 = 0;
	var uLocal_3996 = 0;
	var uLocal_3997 = 0;
	var uLocal_3998 = 0;
	var uLocal_3999 = 0;
	var uLocal_4000 = 0;
	var uLocal_4001 = 0;
	var uLocal_4002 = 0;
	var uLocal_4003 = 0;
	var uLocal_4004 = 0;
	var uLocal_4005 = 0;
	var uLocal_4006 = 0;
	var uLocal_4007 = 0;
	var uLocal_4008 = 0;
	var uLocal_4009 = 0;
	var uLocal_4010 = 0;
	var uLocal_4011 = 0;
	var uLocal_4012 = 0;
	var uLocal_4013 = 0;
	var uLocal_4014 = 0;
	var uLocal_4015 = 0;
	var uLocal_4016 = 0;
	var uLocal_4017 = 0;
	var uLocal_4018 = 0;
	var uLocal_4019 = 0;
	var uLocal_4020 = 0;
	var uLocal_4021 = 0;
	var uLocal_4022 = 0;
	var uLocal_4023 = 0;
	var uLocal_4024 = 0;
	var uLocal_4025 = 0;
	var uLocal_4026 = 0;
	var uLocal_4027 = 0;
	var uLocal_4028 = 0;
	var uLocal_4029 = 0;
	var uLocal_4030 = 0;
	var uLocal_4031 = 0;
	var uLocal_4032 = 0;
	var uLocal_4033 = 0;
	var uLocal_4034 = 0;
	var uLocal_4035 = 0;
	var uLocal_4036 = 0;
	var uLocal_4037 = 0;
	var uLocal_4038 = 0;
	var uLocal_4039 = 0;
	var uLocal_4040 = 0;
	var uLocal_4041 = 0;
	var uLocal_4042 = 0;
	var uLocal_4043 = 0;
	var uLocal_4044 = 0;
	var uLocal_4045 = 0;
	var uLocal_4046 = 0;
	var uLocal_4047 = 0;
	var uLocal_4048 = 0;
	var uLocal_4049 = 0;
	var uLocal_4050 = 0;
	var uLocal_4051 = 0;
	var uLocal_4052 = 0;
	var uLocal_4053 = 0;
	var uLocal_4054 = 0;
	var uLocal_4055 = 0;
	var uLocal_4056 = 0;
	var uLocal_4057 = 0;
	var uLocal_4058 = 0;
	var uLocal_4059 = 0;
	var uLocal_4060 = 0;
	var uLocal_4061 = 0;
	var uLocal_4062 = 30;
	var uLocal_4063 = 0;
	var uLocal_4064 = 0;
	var uLocal_4065 = 0;
	var uLocal_4066 = 0;
	var uLocal_4067 = 0;
	var uLocal_4068 = 0;
	var uLocal_4069 = 0;
	var uLocal_4070 = 0;
	var uLocal_4071 = 0;
	var uLocal_4072 = 0;
	var uLocal_4073 = 0;
	var uLocal_4074 = 0;
	var uLocal_4075 = 0;
	var uLocal_4076 = 0;
	var uLocal_4077 = 0;
	var uLocal_4078 = 0;
	var uLocal_4079 = 0;
	var uLocal_4080 = 0;
	var uLocal_4081 = 0;
	var uLocal_4082 = 0;
	var uLocal_4083 = 0;
	var uLocal_4084 = 0;
	var uLocal_4085 = 0;
	var uLocal_4086 = 0;
	var uLocal_4087 = 0;
	var uLocal_4088 = 0;
	var uLocal_4089 = 0;
	var uLocal_4090 = 0;
	var uLocal_4091 = 0;
	var uLocal_4092 = 0;
	var uLocal_4093 = 0;
	var uLocal_4094 = 60;
	var uLocal_4095 = 0;
	var uLocal_4096 = 0;
	var uLocal_4097 = 0;
	var uLocal_4098 = 0;
	var uLocal_4099 = 0;
	var uLocal_4100 = 0;
	var uLocal_4101 = 0;
	var uLocal_4102 = 0;
	var uLocal_4103 = 0;
	var uLocal_4104 = 0;
	var uLocal_4105 = 0;
	var uLocal_4106 = 0;
	var uLocal_4107 = 0;
	var uLocal_4108 = 0;
	var uLocal_4109 = 0;
	var uLocal_4110 = 0;
	var uLocal_4111 = 0;
	var uLocal_4112 = 0;
	var uLocal_4113 = 0;
	var uLocal_4114 = 0;
	var uLocal_4115 = 0;
	var uLocal_4116 = 0;
	var uLocal_4117 = 0;
	var uLocal_4118 = 0;
	var uLocal_4119 = 0;
	var uLocal_4120 = 0;
	var uLocal_4121 = 0;
	var uLocal_4122 = 0;
	var uLocal_4123 = 0;
	var uLocal_4124 = 0;
	var uLocal_4125 = 0;
	var uLocal_4126 = 0;
	var uLocal_4127 = 0;
	var uLocal_4128 = 0;
	var uLocal_4129 = 0;
	var uLocal_4130 = 0;
	var uLocal_4131 = 0;
	var uLocal_4132 = 0;
	var uLocal_4133 = 0;
	var uLocal_4134 = 0;
	var uLocal_4135 = 0;
	var uLocal_4136 = 0;
	var uLocal_4137 = 0;
	var uLocal_4138 = 0;
	var uLocal_4139 = 0;
	var uLocal_4140 = 0;
	var uLocal_4141 = 0;
	var uLocal_4142 = 0;
	var uLocal_4143 = 0;
	var uLocal_4144 = 0;
	var uLocal_4145 = 0;
	var uLocal_4146 = 0;
	var uLocal_4147 = 0;
	var uLocal_4148 = 0;
	var uLocal_4149 = 0;
	var uLocal_4150 = 0;
	var uLocal_4151 = 0;
	var uLocal_4152 = 0;
	var uLocal_4153 = 0;
	var uLocal_4154 = 0;
	var uLocal_4155 = 2;
	var uLocal_4156 = 0;
	var uLocal_4157 = 0;
	var uLocal_4158 = 75;
	var uLocal_4159 = 2;
	var uLocal_4160 = 0;
	var uLocal_4161 = 0;
	var uLocal_4162 = 2;
	var uLocal_4163 = 0;
	var uLocal_4164 = 0;
	var uLocal_4165 = 2;
	var uLocal_4166 = 0;
	var uLocal_4167 = 0;
	var uLocal_4168 = 2;
	var uLocal_4169 = 0;
	var uLocal_4170 = 0;
	var uLocal_4171 = 2;
	var uLocal_4172 = 0;
	var uLocal_4173 = 0;
	var uLocal_4174 = 2;
	var uLocal_4175 = 0;
	var uLocal_4176 = 0;
	var uLocal_4177 = 2;
	var uLocal_4178 = 0;
	var uLocal_4179 = 0;
	var uLocal_4180 = 2;
	var uLocal_4181 = 0;
	var uLocal_4182 = 0;
	var uLocal_4183 = 2;
	var uLocal_4184 = 0;
	var uLocal_4185 = 0;
	var uLocal_4186 = 2;
	var uLocal_4187 = 0;
	var uLocal_4188 = 0;
	var uLocal_4189 = 2;
	var uLocal_4190 = 0;
	var uLocal_4191 = 0;
	var uLocal_4192 = 2;
	var uLocal_4193 = 0;
	var uLocal_4194 = 0;
	var uLocal_4195 = 2;
	var uLocal_4196 = 0;
	var uLocal_4197 = 0;
	var uLocal_4198 = 2;
	var uLocal_4199 = 0;
	var uLocal_4200 = 0;
	var uLocal_4201 = 2;
	var uLocal_4202 = 0;
	var uLocal_4203 = 0;
	var uLocal_4204 = 2;
	var uLocal_4205 = 0;
	var uLocal_4206 = 0;
	var uLocal_4207 = 2;
	var uLocal_4208 = 0;
	var uLocal_4209 = 0;
	var uLocal_4210 = 2;
	var uLocal_4211 = 0;
	var uLocal_4212 = 0;
	var uLocal_4213 = 2;
	var uLocal_4214 = 0;
	var uLocal_4215 = 0;
	var uLocal_4216 = 2;
	var uLocal_4217 = 0;
	var uLocal_4218 = 0;
	var uLocal_4219 = 2;
	var uLocal_4220 = 0;
	var uLocal_4221 = 0;
	var uLocal_4222 = 2;
	var uLocal_4223 = 0;
	var uLocal_4224 = 0;
	var uLocal_4225 = 2;
	var uLocal_4226 = 0;
	var uLocal_4227 = 0;
	var uLocal_4228 = 2;
	var uLocal_4229 = 0;
	var uLocal_4230 = 0;
	var uLocal_4231 = 2;
	var uLocal_4232 = 0;
	var uLocal_4233 = 0;
	var uLocal_4234 = 2;
	var uLocal_4235 = 0;
	var uLocal_4236 = 0;
	var uLocal_4237 = 2;
	var uLocal_4238 = 0;
	var uLocal_4239 = 0;
	var uLocal_4240 = 2;
	var uLocal_4241 = 0;
	var uLocal_4242 = 0;
	var uLocal_4243 = 2;
	var uLocal_4244 = 0;
	var uLocal_4245 = 0;
	var uLocal_4246 = 2;
	var uLocal_4247 = 0;
	var uLocal_4248 = 0;
	var uLocal_4249 = 2;
	var uLocal_4250 = 0;
	var uLocal_4251 = 0;
	var uLocal_4252 = 2;
	var uLocal_4253 = 0;
	var uLocal_4254 = 0;
	var uLocal_4255 = 2;
	var uLocal_4256 = 0;
	var uLocal_4257 = 0;
	var uLocal_4258 = 2;
	var uLocal_4259 = 0;
	var uLocal_4260 = 0;
	var uLocal_4261 = 2;
	var uLocal_4262 = 0;
	var uLocal_4263 = 0;
	var uLocal_4264 = 2;
	var uLocal_4265 = 0;
	var uLocal_4266 = 0;
	var uLocal_4267 = 2;
	var uLocal_4268 = 0;
	var uLocal_4269 = 0;
	var uLocal_4270 = 2;
	var uLocal_4271 = 0;
	var uLocal_4272 = 0;
	var uLocal_4273 = 2;
	var uLocal_4274 = 0;
	var uLocal_4275 = 0;
	var uLocal_4276 = 2;
	var uLocal_4277 = 0;
	var uLocal_4278 = 0;
	var uLocal_4279 = 2;
	var uLocal_4280 = 0;
	var uLocal_4281 = 0;
	var uLocal_4282 = 2;
	var uLocal_4283 = 0;
	var uLocal_4284 = 0;
	var uLocal_4285 = 2;
	var uLocal_4286 = 0;
	var uLocal_4287 = 0;
	var uLocal_4288 = 2;
	var uLocal_4289 = 0;
	var uLocal_4290 = 0;
	var uLocal_4291 = 2;
	var uLocal_4292 = 0;
	var uLocal_4293 = 0;
	var uLocal_4294 = 2;
	var uLocal_4295 = 0;
	var uLocal_4296 = 0;
	var uLocal_4297 = 2;
	var uLocal_4298 = 0;
	var uLocal_4299 = 0;
	var uLocal_4300 = 2;
	var uLocal_4301 = 0;
	var uLocal_4302 = 0;
	var uLocal_4303 = 2;
	var uLocal_4304 = 0;
	var uLocal_4305 = 0;
	var uLocal_4306 = 2;
	var uLocal_4307 = 0;
	var uLocal_4308 = 0;
	var uLocal_4309 = 2;
	var uLocal_4310 = 0;
	var uLocal_4311 = 0;
	var uLocal_4312 = 2;
	var uLocal_4313 = 0;
	var uLocal_4314 = 0;
	var uLocal_4315 = 2;
	var uLocal_4316 = 0;
	var uLocal_4317 = 0;
	var uLocal_4318 = 2;
	var uLocal_4319 = 0;
	var uLocal_4320 = 0;
	var uLocal_4321 = 2;
	var uLocal_4322 = 0;
	var uLocal_4323 = 0;
	var uLocal_4324 = 2;
	var uLocal_4325 = 0;
	var uLocal_4326 = 0;
	var uLocal_4327 = 2;
	var uLocal_4328 = 0;
	var uLocal_4329 = 0;
	var uLocal_4330 = 2;
	var uLocal_4331 = 0;
	var uLocal_4332 = 0;
	var uLocal_4333 = 2;
	var uLocal_4334 = 0;
	var uLocal_4335 = 0;
	var uLocal_4336 = 2;
	var uLocal_4337 = 0;
	var uLocal_4338 = 0;
	var uLocal_4339 = 2;
	var uLocal_4340 = 0;
	var uLocal_4341 = 0;
	var uLocal_4342 = 2;
	var uLocal_4343 = 0;
	var uLocal_4344 = 0;
	var uLocal_4345 = 2;
	var uLocal_4346 = 0;
	var uLocal_4347 = 0;
	var uLocal_4348 = 2;
	var uLocal_4349 = 0;
	var uLocal_4350 = 0;
	var uLocal_4351 = 2;
	var uLocal_4352 = 0;
	var uLocal_4353 = 0;
	var uLocal_4354 = 2;
	var uLocal_4355 = 0;
	var uLocal_4356 = 0;
	var uLocal_4357 = 2;
	var uLocal_4358 = 0;
	var uLocal_4359 = 0;
	var uLocal_4360 = 2;
	var uLocal_4361 = 0;
	var uLocal_4362 = 0;
	var uLocal_4363 = 2;
	var uLocal_4364 = 0;
	var uLocal_4365 = 0;
	var uLocal_4366 = 2;
	var uLocal_4367 = 0;
	var uLocal_4368 = 0;
	var uLocal_4369 = 2;
	var uLocal_4370 = 0;
	var uLocal_4371 = 0;
	var uLocal_4372 = 2;
	var uLocal_4373 = 0;
	var uLocal_4374 = 0;
	var uLocal_4375 = 2;
	var uLocal_4376 = 0;
	var uLocal_4377 = 0;
	var uLocal_4378 = 2;
	var uLocal_4379 = 0;
	var uLocal_4380 = 0;
	var uLocal_4381 = 2;
	var uLocal_4382 = 0;
	var uLocal_4383 = 0;
	var uLocal_4384 = 32;
	var uLocal_4385 = 2;
	var uLocal_4386 = 0;
	var uLocal_4387 = 0;
	var uLocal_4388 = 2;
	var uLocal_4389 = 0;
	var uLocal_4390 = 0;
	var uLocal_4391 = 2;
	var uLocal_4392 = 0;
	var uLocal_4393 = 0;
	var uLocal_4394 = 2;
	var uLocal_4395 = 0;
	var uLocal_4396 = 0;
	var uLocal_4397 = 2;
	var uLocal_4398 = 0;
	var uLocal_4399 = 0;
	var uLocal_4400 = 2;
	var uLocal_4401 = 0;
	var uLocal_4402 = 0;
	var uLocal_4403 = 2;
	var uLocal_4404 = 0;
	var uLocal_4405 = 0;
	var uLocal_4406 = 2;
	var uLocal_4407 = 0;
	var uLocal_4408 = 0;
	var uLocal_4409 = 2;
	var uLocal_4410 = 0;
	var uLocal_4411 = 0;
	var uLocal_4412 = 2;
	var uLocal_4413 = 0;
	var uLocal_4414 = 0;
	var uLocal_4415 = 2;
	var uLocal_4416 = 0;
	var uLocal_4417 = 0;
	var uLocal_4418 = 2;
	var uLocal_4419 = 0;
	var uLocal_4420 = 0;
	var uLocal_4421 = 2;
	var uLocal_4422 = 0;
	var uLocal_4423 = 0;
	var uLocal_4424 = 2;
	var uLocal_4425 = 0;
	var uLocal_4426 = 0;
	var uLocal_4427 = 2;
	var uLocal_4428 = 0;
	var uLocal_4429 = 0;
	var uLocal_4430 = 2;
	var uLocal_4431 = 0;
	var uLocal_4432 = 0;
	var uLocal_4433 = 2;
	var uLocal_4434 = 0;
	var uLocal_4435 = 0;
	var uLocal_4436 = 2;
	var uLocal_4437 = 0;
	var uLocal_4438 = 0;
	var uLocal_4439 = 2;
	var uLocal_4440 = 0;
	var uLocal_4441 = 0;
	var uLocal_4442 = 2;
	var uLocal_4443 = 0;
	var uLocal_4444 = 0;
	var uLocal_4445 = 2;
	var uLocal_4446 = 0;
	var uLocal_4447 = 0;
	var uLocal_4448 = 2;
	var uLocal_4449 = 0;
	var uLocal_4450 = 0;
	var uLocal_4451 = 2;
	var uLocal_4452 = 0;
	var uLocal_4453 = 0;
	var uLocal_4454 = 2;
	var uLocal_4455 = 0;
	var uLocal_4456 = 0;
	var uLocal_4457 = 2;
	var uLocal_4458 = 0;
	var uLocal_4459 = 0;
	var uLocal_4460 = 2;
	var uLocal_4461 = 0;
	var uLocal_4462 = 0;
	var uLocal_4463 = 2;
	var uLocal_4464 = 0;
	var uLocal_4465 = 0;
	var uLocal_4466 = 2;
	var uLocal_4467 = 0;
	var uLocal_4468 = 0;
	var uLocal_4469 = 2;
	var uLocal_4470 = 0;
	var uLocal_4471 = 0;
	var uLocal_4472 = 2;
	var uLocal_4473 = 0;
	var uLocal_4474 = 0;
	var uLocal_4475 = 2;
	var uLocal_4476 = 0;
	var uLocal_4477 = 0;
	var uLocal_4478 = 2;
	var uLocal_4479 = 0;
	var uLocal_4480 = 0;
	var uLocal_4481 = 4;
	var uLocal_4482 = 2;
	var uLocal_4483 = 0;
	var uLocal_4484 = 0;
	var uLocal_4485 = 2;
	var uLocal_4486 = 0;
	var uLocal_4487 = 0;
	var uLocal_4488 = 2;
	var uLocal_4489 = 0;
	var uLocal_4490 = 0;
	var uLocal_4491 = 2;
	var uLocal_4492 = 0;
	var uLocal_4493 = 0;
	var uLocal_4494 = 0;
	var uLocal_4495 = 0;
	var uLocal_4496 = 0;
	var uLocal_4497 = 0;
	var uLocal_4498 = 0;
	var uLocal_4499 = 0;
	var uLocal_4500 = 0;
	var uLocal_4501 = 0;
	var uLocal_4502 = 0;
	var uLocal_4503 = 0;
	var uLocal_4504 = 0;
	var uLocal_4505 = 0;
	var uLocal_4506 = 0;
	var uLocal_4507 = 0;
	var uLocal_4508 = 0;
	var uLocal_4509 = 0;
	var uLocal_4510 = 0;
	var uLocal_4511 = 0;
	var uLocal_4512 = 0;
	var uLocal_4513 = 0;
	var uLocal_4514 = 0;
	var uLocal_4515 = 0;
	var uLocal_4516 = 0;
	var uLocal_4517 = 0;
	var uLocal_4518 = 0;
	var uLocal_4519 = 0;
	var uLocal_4520 = 0;
	var uLocal_4521 = 24;
	var uLocal_4522 = 0;
	var uLocal_4523 = 0;
	var uLocal_4524 = 0;
	var uLocal_4525 = 0;
	var uLocal_4526 = 0;
	var uLocal_4527 = 0;
	var uLocal_4528 = 0;
	var uLocal_4529 = 0;
	var uLocal_4530 = 0;
	var uLocal_4531 = 0;
	var uLocal_4532 = 0;
	var uLocal_4533 = 0;
	var uLocal_4534 = 0;
	var uLocal_4535 = 0;
	var uLocal_4536 = 0;
	var uLocal_4537 = 0;
	var uLocal_4538 = 0;
	var uLocal_4539 = 0;
	var uLocal_4540 = 0;
	var uLocal_4541 = 0;
	var uLocal_4542 = 0;
	var uLocal_4543 = 0;
	var uLocal_4544 = 0;
	var uLocal_4545 = 0;
	var uLocal_4546 = 0;
	var uLocal_4547 = 0;
	var uLocal_4548 = 0;
	var uLocal_4549 = 0;
	var uLocal_4550 = 0;
	var uLocal_4551 = 0;
	var uLocal_4552 = 0;
	var uLocal_4553 = 0;
	var uLocal_4554 = 0;
	var uLocal_4555 = 0;
	var uLocal_4556 = 0;
	var uLocal_4557 = 0;
	var uLocal_4558 = 0;
	var uLocal_4559 = 0;
	var uLocal_4560 = 0;
	var uLocal_4561 = 0;
	var uLocal_4562 = 0;
	var uLocal_4563 = 0;
	var uLocal_4564 = 0;
	var uLocal_4565 = 0;
	var uLocal_4566 = 0;
	var uLocal_4567 = 0;
	var uLocal_4568 = 0;
	var uLocal_4569 = 0;
	var uLocal_4570 = 0;
	var uLocal_4571 = 0;
	var uLocal_4572 = 0;
	var uLocal_4573 = 0;
	var uLocal_4574 = 0;
	var uLocal_4575 = 0;
	var uLocal_4576 = 0;
	var uLocal_4577 = 0;
	var uLocal_4578 = 0;
	var uLocal_4579 = 0;
	var uLocal_4580 = 0;
	var uLocal_4581 = 0;
	var uLocal_4582 = 0;
	var uLocal_4583 = 0;
	var uLocal_4584 = 0;
	var uLocal_4585 = 0;
	var uLocal_4586 = 0;
	var uLocal_4587 = 0;
	var uLocal_4588 = 0;
	var uLocal_4589 = 0;
	var uLocal_4590 = 0;
	var uLocal_4591 = 0;
	var uLocal_4592 = 0;
	var uLocal_4593 = 0;
	var uLocal_4594 = 0;
	var uLocal_4595 = 0;
	var uLocal_4596 = 0;
	var uLocal_4597 = 0;
	var uLocal_4598 = 0;
	var uLocal_4599 = 0;
	var uLocal_4600 = 0;
	var uLocal_4601 = 0;
	var uLocal_4602 = 0;
	var uLocal_4603 = 0;
	var uLocal_4604 = 0;
	var uLocal_4605 = 0;
	var uLocal_4606 = 0;
	var uLocal_4607 = 0;
	var uLocal_4608 = 0;
	var uLocal_4609 = 0;
	var uLocal_4610 = 0;
	var uLocal_4611 = 0;
	var uLocal_4612 = 0;
	var uLocal_4613 = 0;
	var uLocal_4614 = 0;
	var uLocal_4615 = 0;
	var uLocal_4616 = 0;
	var uLocal_4617 = 0;
	var uLocal_4618 = 0;
	var uLocal_4619 = 3;
	var uLocal_4620 = 0;
	var uLocal_4621 = 0;
	var uLocal_4622 = 0;
	var uLocal_4623 = 3;
	var uLocal_4624 = 0;
	var uLocal_4625 = 0;
	var uLocal_4626 = 0;
	var uLocal_4627 = 0;
	var uLocal_4628 = 0;
	var uLocal_4629 = 0;
	var uLocal_4630 = -1;
	var uLocal_4631 = 4;
	var uLocal_4632 = 0;
	var uLocal_4633 = 0;
	var uLocal_4634 = 0;
	var uLocal_4635 = 0;
	var uLocal_4636 = 4;
	var uLocal_4637 = 0;
	var uLocal_4638 = 0;
	var uLocal_4639 = 0;
	var uLocal_4640 = 0;
	var uLocal_4641 = 0;
	var uLocal_4642 = 75;
	var uLocal_4643 = -1;
	var uLocal_4644 = -1;
	var uLocal_4645 = -1;
	var uLocal_4646 = -1;
	var uLocal_4647 = -1;
	var uLocal_4648 = -1;
	var uLocal_4649 = -1;
	var uLocal_4650 = -1;
	var uLocal_4651 = -1;
	var uLocal_4652 = -1;
	var uLocal_4653 = -1;
	var uLocal_4654 = -1;
	var uLocal_4655 = -1;
	var uLocal_4656 = -1;
	var uLocal_4657 = -1;
	var uLocal_4658 = -1;
	var uLocal_4659 = -1;
	var uLocal_4660 = -1;
	var uLocal_4661 = -1;
	var uLocal_4662 = -1;
	var uLocal_4663 = -1;
	var uLocal_4664 = -1;
	var uLocal_4665 = -1;
	var uLocal_4666 = -1;
	var uLocal_4667 = -1;
	var uLocal_4668 = -1;
	var uLocal_4669 = -1;
	var uLocal_4670 = -1;
	var uLocal_4671 = -1;
	var uLocal_4672 = -1;
	var uLocal_4673 = -1;
	var uLocal_4674 = -1;
	var uLocal_4675 = -1;
	var uLocal_4676 = -1;
	var uLocal_4677 = -1;
	var uLocal_4678 = -1;
	var uLocal_4679 = -1;
	var uLocal_4680 = -1;
	var uLocal_4681 = -1;
	var uLocal_4682 = -1;
	var uLocal_4683 = -1;
	var uLocal_4684 = -1;
	var uLocal_4685 = -1;
	var uLocal_4686 = -1;
	var uLocal_4687 = -1;
	var uLocal_4688 = -1;
	var uLocal_4689 = -1;
	var uLocal_4690 = -1;
	var uLocal_4691 = -1;
	var uLocal_4692 = -1;
	var uLocal_4693 = -1;
	var uLocal_4694 = -1;
	var uLocal_4695 = -1;
	var uLocal_4696 = -1;
	var uLocal_4697 = -1;
	var uLocal_4698 = -1;
	var uLocal_4699 = -1;
	var uLocal_4700 = -1;
	var uLocal_4701 = -1;
	var uLocal_4702 = -1;
	var uLocal_4703 = -1;
	var uLocal_4704 = -1;
	var uLocal_4705 = -1;
	var uLocal_4706 = -1;
	var uLocal_4707 = -1;
	var uLocal_4708 = -1;
	var uLocal_4709 = -1;
	var uLocal_4710 = -1;
	var uLocal_4711 = -1;
	var uLocal_4712 = -1;
	var uLocal_4713 = -1;
	var uLocal_4714 = -1;
	var uLocal_4715 = -1;
	var uLocal_4716 = -1;
	var uLocal_4717 = -1;
	var uLocal_4718 = -1;
	var uLocal_4719 = -1;
	var uLocal_4720 = -1;
	var uLocal_4721 = -1;
	var uLocal_4722 = -1;
	var uLocal_4723 = -1;
	var uLocal_4724 = -1;
	var uLocal_4725 = -1;
	var uLocal_4726 = -1;
	var uLocal_4727 = -1;
	var uLocal_4728 = -1;
	var uLocal_4729 = -1;
	var uLocal_4730 = -1;
	var uLocal_4731 = -1;
	var uLocal_4732 = -1;
	var uLocal_4733 = -1;
	var uLocal_4734 = -1;
	var uLocal_4735 = -1;
	var uLocal_4736 = -1;
	var uLocal_4737 = -1;
	var uLocal_4738 = -1;
	var uLocal_4739 = -1;
	var uLocal_4740 = -1;
	var uLocal_4741 = -1;
	var uLocal_4742 = -1;
	var uLocal_4743 = -1;
	var uLocal_4744 = -1;
	var uLocal_4745 = -1;
	var uLocal_4746 = -1;
	var uLocal_4747 = -1;
	var uLocal_4748 = -1;
	var uLocal_4749 = -1;
	var uLocal_4750 = -1;
	var uLocal_4751 = -1;
	var uLocal_4752 = -1;
	var uLocal_4753 = -1;
	var uLocal_4754 = -1;
	var uLocal_4755 = -1;
	var uLocal_4756 = -1;
	var uLocal_4757 = -1;
	var uLocal_4758 = -1;
	var uLocal_4759 = -1;
	var uLocal_4760 = -1;
	var uLocal_4761 = -1;
	var uLocal_4762 = -1;
	var uLocal_4763 = -1;
	var uLocal_4764 = -1;
	var uLocal_4765 = -1;
	var uLocal_4766 = -1;
	var uLocal_4767 = -1;
	var uLocal_4768 = -1;
	var uLocal_4769 = -1;
	var uLocal_4770 = -1;
	var uLocal_4771 = -1;
	var uLocal_4772 = -1;
	var uLocal_4773 = -1;
	var uLocal_4774 = -1;
	var uLocal_4775 = -1;
	var uLocal_4776 = -1;
	var uLocal_4777 = -1;
	var uLocal_4778 = -1;
	var uLocal_4779 = -1;
	var uLocal_4780 = -1;
	var uLocal_4781 = -1;
	var uLocal_4782 = -1;
	var uLocal_4783 = -1;
	var uLocal_4784 = -1;
	var uLocal_4785 = -1;
	var uLocal_4786 = -1;
	var uLocal_4787 = -1;
	var uLocal_4788 = -1;
	var uLocal_4789 = -1;
	var uLocal_4790 = -1;
	var uLocal_4791 = -1;
	var uLocal_4792 = -1;
	var uLocal_4793 = 20;
	var uLocal_4794 = -1;
	var uLocal_4795 = -1;
	var uLocal_4796 = -1;
	var uLocal_4797 = -1;
	var uLocal_4798 = -1;
	var uLocal_4799 = -1;
	var uLocal_4800 = -1;
	var uLocal_4801 = -1;
	var uLocal_4802 = -1;
	var uLocal_4803 = -1;
	var uLocal_4804 = -1;
	var uLocal_4805 = -1;
	var uLocal_4806 = -1;
	var uLocal_4807 = -1;
	var uLocal_4808 = -1;
	var uLocal_4809 = -1;
	var uLocal_4810 = -1;
	var uLocal_4811 = -1;
	var uLocal_4812 = -1;
	var uLocal_4813 = -1;
	var uLocal_4814 = -1;
	var uLocal_4815 = -1;
	var uLocal_4816 = -1;
	var uLocal_4817 = -1;
	var uLocal_4818 = -1;
	var uLocal_4819 = -1;
	var uLocal_4820 = -1;
	var uLocal_4821 = -1;
	var uLocal_4822 = -1;
	var uLocal_4823 = -1;
	var uLocal_4824 = -1;
	var uLocal_4825 = -1;
	var uLocal_4826 = -1;
	var uLocal_4827 = -1;
	var uLocal_4828 = -1;
	var uLocal_4829 = -1;
	var uLocal_4830 = -1;
	var uLocal_4831 = -1;
	var uLocal_4832 = -1;
	var uLocal_4833 = -1;
	var uLocal_4834 = 75;
	var uLocal_4835 = 0;
	var uLocal_4836 = 0;
	var uLocal_4837 = 0;
	var uLocal_4838 = 0;
	var uLocal_4839 = 0;
	var uLocal_4840 = 0;
	var uLocal_4841 = 0;
	var uLocal_4842 = 0;
	var uLocal_4843 = 0;
	var uLocal_4844 = 0;
	var uLocal_4845 = 0;
	var uLocal_4846 = 0;
	var uLocal_4847 = 0;
	var uLocal_4848 = 0;
	var uLocal_4849 = 0;
	var uLocal_4850 = 0;
	var uLocal_4851 = 0;
	var uLocal_4852 = 0;
	var uLocal_4853 = 0;
	var uLocal_4854 = 0;
	var uLocal_4855 = 0;
	var uLocal_4856 = 0;
	var uLocal_4857 = 0;
	var uLocal_4858 = 0;
	var uLocal_4859 = 0;
	var uLocal_4860 = 0;
	var uLocal_4861 = 0;
	var uLocal_4862 = 0;
	var uLocal_4863 = 0;
	var uLocal_4864 = 0;
	var uLocal_4865 = 0;
	var uLocal_4866 = 0;
	var uLocal_4867 = 0;
	var uLocal_4868 = 0;
	var uLocal_4869 = 0;
	var uLocal_4870 = 0;
	var uLocal_4871 = 0;
	var uLocal_4872 = 0;
	var uLocal_4873 = 0;
	var uLocal_4874 = 0;
	var uLocal_4875 = 0;
	var uLocal_4876 = 0;
	var uLocal_4877 = 0;
	var uLocal_4878 = 0;
	var uLocal_4879 = 0;
	var uLocal_4880 = 0;
	var uLocal_4881 = 0;
	var uLocal_4882 = 0;
	var uLocal_4883 = 0;
	var uLocal_4884 = 0;
	var uLocal_4885 = 0;
	var uLocal_4886 = 0;
	var uLocal_4887 = 0;
	var uLocal_4888 = 0;
	var uLocal_4889 = 0;
	var uLocal_4890 = 0;
	var uLocal_4891 = 0;
	var uLocal_4892 = 0;
	var uLocal_4893 = 0;
	var uLocal_4894 = 0;
	var uLocal_4895 = 0;
	var uLocal_4896 = 0;
	var uLocal_4897 = 0;
	var uLocal_4898 = 0;
	var uLocal_4899 = 0;
	var uLocal_4900 = 0;
	var uLocal_4901 = 0;
	var uLocal_4902 = 0;
	var uLocal_4903 = 0;
	var uLocal_4904 = 0;
	var uLocal_4905 = 0;
	var uLocal_4906 = 0;
	var uLocal_4907 = 0;
	var uLocal_4908 = 0;
	var uLocal_4909 = 0;
	var uLocal_4910 = 32;
	var uLocal_4911 = 0;
	var uLocal_4912 = 0;
	var uLocal_4913 = 0;
	var uLocal_4914 = 0;
	var uLocal_4915 = 0;
	var uLocal_4916 = 0;
	var uLocal_4917 = 0;
	var uLocal_4918 = 0;
	var uLocal_4919 = 0;
	var uLocal_4920 = 0;
	var uLocal_4921 = 0;
	var uLocal_4922 = 0;
	var uLocal_4923 = 0;
	var uLocal_4924 = 0;
	var uLocal_4925 = 0;
	var uLocal_4926 = 0;
	var uLocal_4927 = 0;
	var uLocal_4928 = 0;
	var uLocal_4929 = 0;
	var uLocal_4930 = 0;
	var uLocal_4931 = 0;
	var uLocal_4932 = 0;
	var uLocal_4933 = 0;
	var uLocal_4934 = 0;
	var uLocal_4935 = 0;
	var uLocal_4936 = 0;
	var uLocal_4937 = 0;
	var uLocal_4938 = 0;
	var uLocal_4939 = 0;
	var uLocal_4940 = 0;
	var uLocal_4941 = 0;
	var uLocal_4942 = 0;
	var uLocal_4943 = 75;
	var uLocal_4944 = 0;
	var uLocal_4945 = 0;
	var uLocal_4946 = 0;
	var uLocal_4947 = 0;
	var uLocal_4948 = 0;
	var uLocal_4949 = 0;
	var uLocal_4950 = 0;
	var uLocal_4951 = 0;
	var uLocal_4952 = 0;
	var uLocal_4953 = 0;
	var uLocal_4954 = 0;
	var uLocal_4955 = 0;
	var uLocal_4956 = 0;
	var uLocal_4957 = 0;
	var uLocal_4958 = 0;
	var uLocal_4959 = 0;
	var uLocal_4960 = 0;
	var uLocal_4961 = 0;
	var uLocal_4962 = 0;
	var uLocal_4963 = 0;
	var uLocal_4964 = 0;
	var uLocal_4965 = 0;
	var uLocal_4966 = 0;
	var uLocal_4967 = 0;
	var uLocal_4968 = 0;
	var uLocal_4969 = 0;
	var uLocal_4970 = 0;
	var uLocal_4971 = 0;
	var uLocal_4972 = 0;
	var uLocal_4973 = 0;
	var uLocal_4974 = 0;
	var uLocal_4975 = 0;
	var uLocal_4976 = 0;
	var uLocal_4977 = 0;
	var uLocal_4978 = 0;
	var uLocal_4979 = 0;
	var uLocal_4980 = 0;
	var uLocal_4981 = 0;
	var uLocal_4982 = 0;
	var uLocal_4983 = 0;
	var uLocal_4984 = 0;
	var uLocal_4985 = 0;
	var uLocal_4986 = 0;
	var uLocal_4987 = 0;
	var uLocal_4988 = 0;
	var uLocal_4989 = 0;
	var uLocal_4990 = 0;
	var uLocal_4991 = 0;
	var uLocal_4992 = 0;
	var uLocal_4993 = 0;
	var uLocal_4994 = 0;
	var uLocal_4995 = 0;
	var uLocal_4996 = 0;
	var uLocal_4997 = 0;
	var uLocal_4998 = 0;
	var uLocal_4999 = 0;
	var uLocal_5000 = 0;
	var uLocal_5001 = 0;
	var uLocal_5002 = 0;
	var uLocal_5003 = 0;
	var uLocal_5004 = 0;
	var uLocal_5005 = 0;
	var uLocal_5006 = 0;
	var uLocal_5007 = 0;
	var uLocal_5008 = 0;
	var uLocal_5009 = 0;
	var uLocal_5010 = 0;
	var uLocal_5011 = 0;
	var uLocal_5012 = 0;
	var uLocal_5013 = 0;
	var uLocal_5014 = 0;
	var uLocal_5015 = 0;
	var uLocal_5016 = 0;
	var uLocal_5017 = 0;
	var uLocal_5018 = 0;
	var uLocal_5019 = 32;
	var uLocal_5020 = 0;
	var uLocal_5021 = 0;
	var uLocal_5022 = 0;
	var uLocal_5023 = 0;
	var uLocal_5024 = 0;
	var uLocal_5025 = 0;
	var uLocal_5026 = 0;
	var uLocal_5027 = 0;
	var uLocal_5028 = 0;
	var uLocal_5029 = 0;
	var uLocal_5030 = 0;
	var uLocal_5031 = 0;
	var uLocal_5032 = 0;
	var uLocal_5033 = 0;
	var uLocal_5034 = 0;
	var uLocal_5035 = 0;
	var uLocal_5036 = 0;
	var uLocal_5037 = 0;
	var uLocal_5038 = 0;
	var uLocal_5039 = 0;
	var uLocal_5040 = 0;
	var uLocal_5041 = 0;
	var uLocal_5042 = 0;
	var uLocal_5043 = 0;
	var uLocal_5044 = 0;
	var uLocal_5045 = 0;
	var uLocal_5046 = 0;
	var uLocal_5047 = 0;
	var uLocal_5048 = 0;
	var uLocal_5049 = 0;
	var uLocal_5050 = 0;
	var uLocal_5051 = 0;
	var uLocal_5052 = 10;
	var uLocal_5053 = 0;
	var uLocal_5054 = 0;
	var uLocal_5055 = 0;
	var uLocal_5056 = 0;
	var uLocal_5057 = 0;
	var uLocal_5058 = 0;
	var uLocal_5059 = 0;
	var uLocal_5060 = 0;
	var uLocal_5061 = 0;
	var uLocal_5062 = 0;
	var uLocal_5063 = 0;
	var uLocal_5064 = 0;
	var uLocal_5065 = 0;
	var uLocal_5066 = 0;
	var uLocal_5067 = 0;
	var uLocal_5068 = 0;
	var uLocal_5069 = 0;
	var uLocal_5070 = 0;
	var uLocal_5071 = 0;
	var uLocal_5072 = 0;
	var uLocal_5073 = 0;
	var uLocal_5074 = 0;
	var uLocal_5075 = 0;
	var uLocal_5076 = 0;
	var uLocal_5077 = 0;
	var uLocal_5078 = 0;
	var uLocal_5079 = 0;
	var uLocal_5080 = 0;
	var uLocal_5081 = 0;
	var uLocal_5082 = 0;
	var uLocal_5083 = 0;
	var uLocal_5084 = 0;
	var uLocal_5085 = 0;
	var uLocal_5086 = 0;
	var uLocal_5087 = 0;
	var uLocal_5088 = 0;
	var uLocal_5089 = 0;
	var uLocal_5090 = 0;
	var uLocal_5091 = 0;
	var uLocal_5092 = 0;
	var uLocal_5093 = 0;
	var uLocal_5094 = 0;
	var uLocal_5095 = 0;
	var uLocal_5096 = 0;
	var uLocal_5097 = 0;
	var uLocal_5098 = 0;
	var uLocal_5099 = 0;
	var uLocal_5100 = 0;
	var uLocal_5101 = 0;
	var uLocal_5102 = 0;
	var uLocal_5103 = 75;
	var uLocal_5104 = 0;
	var uLocal_5105 = 0;
	var uLocal_5106 = 0;
	var uLocal_5107 = 0;
	var uLocal_5108 = 0;
	var uLocal_5109 = 0;
	var uLocal_5110 = 0;
	var uLocal_5111 = 0;
	var uLocal_5112 = 0;
	var uLocal_5113 = 0;
	var uLocal_5114 = 0;
	var uLocal_5115 = 0;
	var uLocal_5116 = 0;
	var uLocal_5117 = 0;
	var uLocal_5118 = 0;
	var uLocal_5119 = 0;
	var uLocal_5120 = 0;
	var uLocal_5121 = 0;
	var uLocal_5122 = 0;
	var uLocal_5123 = 0;
	var uLocal_5124 = 0;
	var uLocal_5125 = 0;
	var uLocal_5126 = 0;
	var uLocal_5127 = 0;
	var uLocal_5128 = 0;
	var uLocal_5129 = 0;
	var uLocal_5130 = 0;
	var uLocal_5131 = 0;
	var uLocal_5132 = 0;
	var uLocal_5133 = 0;
	var uLocal_5134 = 0;
	var uLocal_5135 = 0;
	var uLocal_5136 = 0;
	var uLocal_5137 = 0;
	var uLocal_5138 = 0;
	var uLocal_5139 = 0;
	var uLocal_5140 = 0;
	var uLocal_5141 = 0;
	var uLocal_5142 = 0;
	var uLocal_5143 = 0;
	var uLocal_5144 = 0;
	var uLocal_5145 = 0;
	var uLocal_5146 = 0;
	var uLocal_5147 = 0;
	var uLocal_5148 = 0;
	var uLocal_5149 = 0;
	var uLocal_5150 = 0;
	var uLocal_5151 = 0;
	var uLocal_5152 = 0;
	var uLocal_5153 = 0;
	var uLocal_5154 = 0;
	var uLocal_5155 = 0;
	var uLocal_5156 = 0;
	var uLocal_5157 = 0;
	var uLocal_5158 = 0;
	var uLocal_5159 = 0;
	var uLocal_5160 = 0;
	var uLocal_5161 = 0;
	var uLocal_5162 = 0;
	var uLocal_5163 = 0;
	var uLocal_5164 = 0;
	var uLocal_5165 = 0;
	var uLocal_5166 = 0;
	var uLocal_5167 = 0;
	var uLocal_5168 = 0;
	var uLocal_5169 = 0;
	var uLocal_5170 = 0;
	var uLocal_5171 = 0;
	var uLocal_5172 = 0;
	var uLocal_5173 = 0;
	var uLocal_5174 = 0;
	var uLocal_5175 = 0;
	var uLocal_5176 = 0;
	var uLocal_5177 = 0;
	var uLocal_5178 = 0;
	var uLocal_5179 = 0;
	var uLocal_5180 = 0;
	var uLocal_5181 = 0;
	var uLocal_5182 = 0;
	var uLocal_5183 = 0;
	var uLocal_5184 = 0;
	var uLocal_5185 = 0;
	var uLocal_5186 = 0;
	var uLocal_5187 = 0;
	var uLocal_5188 = 0;
	var uLocal_5189 = 0;
	var uLocal_5190 = 0;
	var uLocal_5191 = 0;
	var uLocal_5192 = 0;
	var uLocal_5193 = 0;
	var uLocal_5194 = 0;
	var uLocal_5195 = 0;
	var uLocal_5196 = 0;
	var uLocal_5197 = 0;
	var uLocal_5198 = 0;
	var uLocal_5199 = 0;
	var uLocal_5200 = 0;
	var uLocal_5201 = 0;
	var uLocal_5202 = 0;
	var uLocal_5203 = 0;
	var uLocal_5204 = 0;
	var uLocal_5205 = 0;
	var uLocal_5206 = 0;
	var uLocal_5207 = 0;
	var uLocal_5208 = 0;
	var uLocal_5209 = 0;
	var uLocal_5210 = 0;
	var uLocal_5211 = 0;
	var uLocal_5212 = 0;
	var uLocal_5213 = 0;
	var uLocal_5214 = 0;
	var uLocal_5215 = 0;
	var uLocal_5216 = 0;
	var uLocal_5217 = 0;
	var uLocal_5218 = 0;
	var uLocal_5219 = 0;
	var uLocal_5220 = 0;
	var uLocal_5221 = 0;
	var uLocal_5222 = 0;
	var uLocal_5223 = 0;
	var uLocal_5224 = 0;
	var uLocal_5225 = 0;
	var uLocal_5226 = 0;
	var uLocal_5227 = 0;
	var uLocal_5228 = 0;
	var uLocal_5229 = 0;
	var uLocal_5230 = 0;
	var uLocal_5231 = 0;
	var uLocal_5232 = 0;
	var uLocal_5233 = 0;
	var uLocal_5234 = 0;
	var uLocal_5235 = 0;
	var uLocal_5236 = 0;
	var uLocal_5237 = 0;
	var uLocal_5238 = 0;
	var uLocal_5239 = 0;
	var uLocal_5240 = 0;
	var uLocal_5241 = 0;
	var uLocal_5242 = 0;
	var uLocal_5243 = 0;
	var uLocal_5244 = 0;
	var uLocal_5245 = 0;
	var uLocal_5246 = 0;
	var uLocal_5247 = 0;
	var uLocal_5248 = 0;
	var uLocal_5249 = 0;
	var uLocal_5250 = 0;
	var uLocal_5251 = 0;
	var uLocal_5252 = 0;
	var uLocal_5253 = 0;
	var uLocal_5254 = 75;
	var uLocal_5255 = 0;
	var uLocal_5256 = 0;
	var uLocal_5257 = 0;
	var uLocal_5258 = 0;
	var uLocal_5259 = 0;
	var uLocal_5260 = 0;
	var uLocal_5261 = 0;
	var uLocal_5262 = 0;
	var uLocal_5263 = 0;
	var uLocal_5264 = 0;
	var uLocal_5265 = 0;
	var uLocal_5266 = 0;
	var uLocal_5267 = 0;
	var uLocal_5268 = 0;
	var uLocal_5269 = 0;
	var uLocal_5270 = 0;
	var uLocal_5271 = 0;
	var uLocal_5272 = 0;
	var uLocal_5273 = 0;
	var uLocal_5274 = 0;
	var uLocal_5275 = 0;
	var uLocal_5276 = 0;
	var uLocal_5277 = 0;
	var uLocal_5278 = 0;
	var uLocal_5279 = 0;
	var uLocal_5280 = 0;
	var uLocal_5281 = 0;
	var uLocal_5282 = 0;
	var uLocal_5283 = 0;
	var uLocal_5284 = 0;
	var uLocal_5285 = 0;
	var uLocal_5286 = 0;
	var uLocal_5287 = 0;
	var uLocal_5288 = 0;
	var uLocal_5289 = 0;
	var uLocal_5290 = 0;
	var uLocal_5291 = 0;
	var uLocal_5292 = 0;
	var uLocal_5293 = 0;
	var uLocal_5294 = 0;
	var uLocal_5295 = 0;
	var uLocal_5296 = 0;
	var uLocal_5297 = 0;
	var uLocal_5298 = 0;
	var uLocal_5299 = 0;
	var uLocal_5300 = 0;
	var uLocal_5301 = 0;
	var uLocal_5302 = 0;
	var uLocal_5303 = 0;
	var uLocal_5304 = 0;
	var uLocal_5305 = 0;
	var uLocal_5306 = 0;
	var uLocal_5307 = 0;
	var uLocal_5308 = 0;
	var uLocal_5309 = 0;
	var uLocal_5310 = 0;
	var uLocal_5311 = 0;
	var uLocal_5312 = 0;
	var uLocal_5313 = 0;
	var uLocal_5314 = 0;
	var uLocal_5315 = 0;
	var uLocal_5316 = 0;
	var uLocal_5317 = 0;
	var uLocal_5318 = 0;
	var uLocal_5319 = 0;
	var uLocal_5320 = 0;
	var uLocal_5321 = 0;
	var uLocal_5322 = 0;
	var uLocal_5323 = 0;
	var uLocal_5324 = 0;
	var uLocal_5325 = 0;
	var uLocal_5326 = 0;
	var uLocal_5327 = 0;
	var uLocal_5328 = 0;
	var uLocal_5329 = 0;
	var uLocal_5330 = 0;
	var uLocal_5331 = 0;
	var uLocal_5332 = 0;
	var uLocal_5333 = 0;
	var uLocal_5334 = 0;
	var uLocal_5335 = 0;
	var uLocal_5336 = 0;
	var uLocal_5337 = 0;
	var uLocal_5338 = 0;
	var uLocal_5339 = 0;
	var uLocal_5340 = 0;
	var uLocal_5341 = 0;
	var uLocal_5342 = 0;
	var uLocal_5343 = 0;
	var uLocal_5344 = 0;
	var uLocal_5345 = 0;
	var uLocal_5346 = 0;
	var uLocal_5347 = 0;
	var uLocal_5348 = 0;
	var uLocal_5349 = 0;
	var uLocal_5350 = 0;
	var uLocal_5351 = 0;
	var uLocal_5352 = 0;
	var uLocal_5353 = 0;
	var uLocal_5354 = 0;
	var uLocal_5355 = 0;
	var uLocal_5356 = 0;
	var uLocal_5357 = 0;
	var uLocal_5358 = 0;
	var uLocal_5359 = 0;
	var uLocal_5360 = 0;
	var uLocal_5361 = 0;
	var uLocal_5362 = 0;
	var uLocal_5363 = 0;
	var uLocal_5364 = 0;
	var uLocal_5365 = 0;
	var uLocal_5366 = 0;
	var uLocal_5367 = 0;
	var uLocal_5368 = 0;
	var uLocal_5369 = 0;
	var uLocal_5370 = 0;
	var uLocal_5371 = 0;
	var uLocal_5372 = 0;
	var uLocal_5373 = 0;
	var uLocal_5374 = 0;
	var uLocal_5375 = 0;
	var uLocal_5376 = 0;
	var uLocal_5377 = 0;
	var uLocal_5378 = 0;
	var uLocal_5379 = 0;
	var uLocal_5380 = 0;
	var uLocal_5381 = 0;
	var uLocal_5382 = 0;
	var uLocal_5383 = 0;
	var uLocal_5384 = 0;
	var uLocal_5385 = 0;
	var uLocal_5386 = 0;
	var uLocal_5387 = 0;
	var uLocal_5388 = 0;
	var uLocal_5389 = 0;
	var uLocal_5390 = 0;
	var uLocal_5391 = 0;
	var uLocal_5392 = 0;
	var uLocal_5393 = 0;
	var uLocal_5394 = 0;
	var uLocal_5395 = 0;
	var uLocal_5396 = 0;
	var uLocal_5397 = 0;
	var uLocal_5398 = 0;
	var uLocal_5399 = 0;
	var uLocal_5400 = 0;
	var uLocal_5401 = 0;
	var uLocal_5402 = 0;
	var uLocal_5403 = 0;
	var uLocal_5404 = 0;
	var uLocal_5405 = 32;
	var uLocal_5406 = 0;
	var uLocal_5407 = 0;
	var uLocal_5408 = 0;
	var uLocal_5409 = 0;
	var uLocal_5410 = 0;
	var uLocal_5411 = 0;
	var uLocal_5412 = 0;
	var uLocal_5413 = 0;
	var uLocal_5414 = 0;
	var uLocal_5415 = 0;
	var uLocal_5416 = 0;
	var uLocal_5417 = 0;
	var uLocal_5418 = 0;
	var uLocal_5419 = 0;
	var uLocal_5420 = 0;
	var uLocal_5421 = 0;
	var uLocal_5422 = 0;
	var uLocal_5423 = 0;
	var uLocal_5424 = 0;
	var uLocal_5425 = 0;
	var uLocal_5426 = 0;
	var uLocal_5427 = 0;
	var uLocal_5428 = 0;
	var uLocal_5429 = 0;
	var uLocal_5430 = 0;
	var uLocal_5431 = 0;
	var uLocal_5432 = 0;
	var uLocal_5433 = 0;
	var uLocal_5434 = 0;
	var uLocal_5435 = 0;
	var uLocal_5436 = 0;
	var uLocal_5437 = 0;
	var uLocal_5438 = 0;
	var uLocal_5439 = 0;
	var uLocal_5440 = 0;
	var uLocal_5441 = 0;
	var uLocal_5442 = 0;
	var uLocal_5443 = 0;
	var uLocal_5444 = 0;
	var uLocal_5445 = 0;
	var uLocal_5446 = 0;
	var uLocal_5447 = 0;
	var uLocal_5448 = 0;
	var uLocal_5449 = 0;
	var uLocal_5450 = 0;
	var uLocal_5451 = 0;
	var uLocal_5452 = 0;
	var uLocal_5453 = 0;
	var uLocal_5454 = 0;
	var uLocal_5455 = 0;
	var uLocal_5456 = 0;
	var uLocal_5457 = 0;
	var uLocal_5458 = 0;
	var uLocal_5459 = 0;
	var uLocal_5460 = 0;
	var uLocal_5461 = 0;
	var uLocal_5462 = 0;
	var uLocal_5463 = 0;
	var uLocal_5464 = 0;
	var uLocal_5465 = 0;
	var uLocal_5466 = 0;
	var uLocal_5467 = 0;
	var uLocal_5468 = 0;
	var uLocal_5469 = 0;
	var uLocal_5470 = 0;
	var uLocal_5471 = 0;
	var uLocal_5472 = 0;
	var uLocal_5473 = 0;
	var uLocal_5474 = 0;
	var uLocal_5475 = 0;
	var uLocal_5476 = 0;
	var uLocal_5477 = 0;
	var uLocal_5478 = 0;
	var uLocal_5479 = 0;
	var uLocal_5480 = 0;
	var uLocal_5481 = 0;
	var uLocal_5482 = 0;
	var uLocal_5483 = 0;
	var uLocal_5484 = 0;
	var uLocal_5485 = 0;
	var uLocal_5486 = 0;
	var uLocal_5487 = 623901053;
	var uLocal_5488 = 6;
	var uLocal_5489 = 0;
	var uLocal_5490 = 0;
	var uLocal_5491 = 0;
	var uLocal_5492 = 0;
	var uLocal_5493 = 0;
	var uLocal_5494 = 0;
	var uLocal_5495 = 0;
	var uLocal_5496 = 0;
	var uLocal_5497 = 0;
	var uLocal_5498 = 0;
	var uLocal_5499 = 0;
	var uLocal_5500 = 0;
	var uLocal_5501 = 0;
	var uLocal_5502 = 1048576000;
	var uLocal_5503 = 1092616192;
	var uLocal_5504 = -1082130432;
	var uLocal_5505 = -1082130432;
	var uLocal_5506 = 0;
	var uLocal_5507 = 0;
	var uLocal_5508 = 0;
	var uLocal_5509 = 0;
	var uLocal_5510 = 0;
	var uLocal_5511 = 0;
	var uLocal_5512 = 0;
	var uLocal_5513 = 0;
	var uLocal_5514 = 0;
	var uLocal_5515 = 0;
	var uLocal_5516 = 4;
	var uLocal_5517 = 0;
	var uLocal_5518 = 0;
	var uLocal_5519 = -1;
	var uLocal_5520 = -1;
	var uLocal_5521 = 0;
	var uLocal_5522 = -1;
	var uLocal_5523 = -1;
	var uLocal_5524 = -1;
	var uLocal_5525 = -1;
	var uLocal_5526 = 0;
	var uLocal_5527 = 0;
	var uLocal_5528 = 0;
	var uLocal_5529 = 0;
	var uLocal_5530 = -1;
	var uLocal_5531 = 255;
	var uLocal_5532 = 0;
	var uLocal_5533 = 0;
	var uLocal_5534 = 0;
	var uLocal_5535 = 0;
	var uLocal_5536 = 0;
	var uLocal_5537 = 0;
	var uLocal_5538 = 0;
	var uLocal_5539 = 0;
	var uLocal_5540 = 0;
	var uLocal_5541 = 0;
	var uLocal_5542 = 0;
	var uLocal_5543 = -1;
	var uLocal_5544 = 0;
	var uLocal_5545 = 0;
	var uLocal_5546 = 0;
	var uLocal_5547 = 0;
	var uLocal_5548 = 0;
	var uLocal_5549 = 0;
	var uLocal_5550 = -1;
	var uLocal_5551 = -1;
	var uLocal_5552 = 0;
	var uLocal_5553 = -1;
	var uLocal_5554 = -1;
	var uLocal_5555 = -1;
	var uLocal_5556 = -1;
	var uLocal_5557 = 0;
	var uLocal_5558 = 0;
	var uLocal_5559 = 0;
	var uLocal_5560 = 0;
	var uLocal_5561 = -1;
	var uLocal_5562 = 255;
	var uLocal_5563 = 0;
	var uLocal_5564 = 0;
	var uLocal_5565 = 0;
	var uLocal_5566 = 0;
	var uLocal_5567 = 0;
	var uLocal_5568 = 0;
	var uLocal_5569 = 0;
	var uLocal_5570 = 0;
	var uLocal_5571 = 0;
	var uLocal_5572 = 0;
	var uLocal_5573 = 0;
	var uLocal_5574 = -1;
	var uLocal_5575 = 0;
	var uLocal_5576 = 0;
	var uLocal_5577 = 0;
	var uLocal_5578 = 0;
	var uLocal_5579 = 0;
	var uLocal_5580 = 0;
	var uLocal_5581 = -1;
	var uLocal_5582 = -1;
	var uLocal_5583 = 0;
	var uLocal_5584 = -1;
	var uLocal_5585 = -1;
	var uLocal_5586 = -1;
	var uLocal_5587 = -1;
	var uLocal_5588 = 0;
	var uLocal_5589 = 0;
	var uLocal_5590 = 0;
	var uLocal_5591 = 0;
	var uLocal_5592 = -1;
	var uLocal_5593 = 255;
	var uLocal_5594 = 0;
	var uLocal_5595 = 0;
	var uLocal_5596 = 0;
	var uLocal_5597 = 0;
	var uLocal_5598 = 0;
	var uLocal_5599 = 0;
	var uLocal_5600 = 0;
	var uLocal_5601 = 0;
	var uLocal_5602 = 0;
	var uLocal_5603 = 0;
	var uLocal_5604 = 0;
	var uLocal_5605 = -1;
	var uLocal_5606 = 0;
	var uLocal_5607 = 0;
	var uLocal_5608 = 0;
	var uLocal_5609 = 0;
	var uLocal_5610 = 0;
	var uLocal_5611 = 0;
	var uLocal_5612 = -1;
	var uLocal_5613 = -1;
	var uLocal_5614 = 0;
	var uLocal_5615 = -1;
	var uLocal_5616 = -1;
	var uLocal_5617 = -1;
	var uLocal_5618 = -1;
	var uLocal_5619 = 0;
	var uLocal_5620 = 0;
	var uLocal_5621 = 0;
	var uLocal_5622 = 0;
	var uLocal_5623 = -1;
	var uLocal_5624 = 255;
	var uLocal_5625 = 0;
	var uLocal_5626 = 0;
	var uLocal_5627 = 0;
	var uLocal_5628 = 0;
	var uLocal_5629 = 0;
	var uLocal_5630 = 0;
	var uLocal_5631 = 0;
	var uLocal_5632 = 0;
	var uLocal_5633 = 0;
	var uLocal_5634 = 0;
	var uLocal_5635 = 0;
	var uLocal_5636 = -1;
	var uLocal_5637 = 0;
	var uLocal_5638 = 0;
	var uLocal_5639 = 0;
	var uLocal_5640 = 0;
	var uLocal_5641 = 20;
	var uLocal_5642 = 0;
	var uLocal_5643 = 0;
	var uLocal_5644 = -1;
	var uLocal_5645 = -1;
	var uLocal_5646 = 0;
	var uLocal_5647 = -1;
	var uLocal_5648 = -1;
	var uLocal_5649 = -1;
	var uLocal_5650 = -1;
	var uLocal_5651 = 0;
	var uLocal_5652 = 0;
	var uLocal_5653 = 0;
	var uLocal_5654 = 0;
	var uLocal_5655 = -1;
	var uLocal_5656 = 255;
	var uLocal_5657 = 0;
	var uLocal_5658 = 0;
	var uLocal_5659 = 0;
	var uLocal_5660 = 0;
	var uLocal_5661 = 0;
	var uLocal_5662 = 0;
	var uLocal_5663 = 0;
	var uLocal_5664 = 0;
	var uLocal_5665 = 0;
	var uLocal_5666 = 0;
	var uLocal_5667 = 0;
	var uLocal_5668 = -1;
	var uLocal_5669 = 0;
	var uLocal_5670 = 0;
	var uLocal_5671 = 0;
	var uLocal_5672 = 0;
	var uLocal_5673 = 0;
	var uLocal_5674 = 0;
	var uLocal_5675 = -1;
	var uLocal_5676 = -1;
	var uLocal_5677 = 0;
	var uLocal_5678 = -1;
	var uLocal_5679 = -1;
	var uLocal_5680 = -1;
	var uLocal_5681 = -1;
	var uLocal_5682 = 0;
	var uLocal_5683 = 0;
	var uLocal_5684 = 0;
	var uLocal_5685 = 0;
	var uLocal_5686 = -1;
	var uLocal_5687 = 255;
	var uLocal_5688 = 0;
	var uLocal_5689 = 0;
	var uLocal_5690 = 0;
	var uLocal_5691 = 0;
	var uLocal_5692 = 0;
	var uLocal_5693 = 0;
	var uLocal_5694 = 0;
	var uLocal_5695 = 0;
	var uLocal_5696 = 0;
	var uLocal_5697 = 0;
	var uLocal_5698 = 0;
	var uLocal_5699 = -1;
	var uLocal_5700 = 0;
	var uLocal_5701 = 0;
	var uLocal_5702 = 0;
	var uLocal_5703 = 0;
	var uLocal_5704 = 0;
	var uLocal_5705 = 0;
	var uLocal_5706 = -1;
	var uLocal_5707 = -1;
	var uLocal_5708 = 0;
	var uLocal_5709 = -1;
	var uLocal_5710 = -1;
	var uLocal_5711 = -1;
	var uLocal_5712 = -1;
	var uLocal_5713 = 0;
	var uLocal_5714 = 0;
	var uLocal_5715 = 0;
	var uLocal_5716 = 0;
	var uLocal_5717 = -1;
	var uLocal_5718 = 255;
	var uLocal_5719 = 0;
	var uLocal_5720 = 0;
	var uLocal_5721 = 0;
	var uLocal_5722 = 0;
	var uLocal_5723 = 0;
	var uLocal_5724 = 0;
	var uLocal_5725 = 0;
	var uLocal_5726 = 0;
	var uLocal_5727 = 0;
	var uLocal_5728 = 0;
	var uLocal_5729 = 0;
	var uLocal_5730 = -1;
	var uLocal_5731 = 0;
	var uLocal_5732 = 0;
	var uLocal_5733 = 0;
	var uLocal_5734 = 0;
	var uLocal_5735 = 0;
	var uLocal_5736 = 0;
	var uLocal_5737 = -1;
	var uLocal_5738 = -1;
	var uLocal_5739 = 0;
	var uLocal_5740 = -1;
	var uLocal_5741 = -1;
	var uLocal_5742 = -1;
	var uLocal_5743 = -1;
	var uLocal_5744 = 0;
	var uLocal_5745 = 0;
	var uLocal_5746 = 0;
	var uLocal_5747 = 0;
	var uLocal_5748 = -1;
	var uLocal_5749 = 255;
	var uLocal_5750 = 0;
	var uLocal_5751 = 0;
	var uLocal_5752 = 0;
	var uLocal_5753 = 0;
	var uLocal_5754 = 0;
	var uLocal_5755 = 0;
	var uLocal_5756 = 0;
	var uLocal_5757 = 0;
	var uLocal_5758 = 0;
	var uLocal_5759 = 0;
	var uLocal_5760 = 0;
	var uLocal_5761 = -1;
	var uLocal_5762 = 0;
	var uLocal_5763 = 0;
	var uLocal_5764 = 0;
	var uLocal_5765 = 0;
	var uLocal_5766 = 0;
	var uLocal_5767 = 0;
	var uLocal_5768 = -1;
	var uLocal_5769 = -1;
	var uLocal_5770 = 0;
	var uLocal_5771 = -1;
	var uLocal_5772 = -1;
	var uLocal_5773 = -1;
	var uLocal_5774 = -1;
	var uLocal_5775 = 0;
	var uLocal_5776 = 0;
	var uLocal_5777 = 0;
	var uLocal_5778 = 0;
	var uLocal_5779 = -1;
	var uLocal_5780 = 255;
	var uLocal_5781 = 0;
	var uLocal_5782 = 0;
	var uLocal_5783 = 0;
	var uLocal_5784 = 0;
	var uLocal_5785 = 0;
	var uLocal_5786 = 0;
	var uLocal_5787 = 0;
	var uLocal_5788 = 0;
	var uLocal_5789 = 0;
	var uLocal_5790 = 0;
	var uLocal_5791 = 0;
	var uLocal_5792 = -1;
	var uLocal_5793 = 0;
	var uLocal_5794 = 0;
	var uLocal_5795 = 0;
	var uLocal_5796 = 0;
	var uLocal_5797 = 0;
	var uLocal_5798 = 0;
	var uLocal_5799 = -1;
	var uLocal_5800 = -1;
	var uLocal_5801 = 0;
	var uLocal_5802 = -1;
	var uLocal_5803 = -1;
	var uLocal_5804 = -1;
	var uLocal_5805 = -1;
	var uLocal_5806 = 0;
	var uLocal_5807 = 0;
	var uLocal_5808 = 0;
	var uLocal_5809 = 0;
	var uLocal_5810 = -1;
	var uLocal_5811 = 255;
	var uLocal_5812 = 0;
	var uLocal_5813 = 0;
	var uLocal_5814 = 0;
	var uLocal_5815 = 0;
	var uLocal_5816 = 0;
	var uLocal_5817 = 0;
	var uLocal_5818 = 0;
	var uLocal_5819 = 0;
	var uLocal_5820 = 0;
	var uLocal_5821 = 0;
	var uLocal_5822 = 0;
	var uLocal_5823 = -1;
	var uLocal_5824 = 0;
	var uLocal_5825 = 0;
	var uLocal_5826 = 0;
	var uLocal_5827 = 0;
	var uLocal_5828 = 0;
	var uLocal_5829 = 0;
	var uLocal_5830 = -1;
	var uLocal_5831 = -1;
	var uLocal_5832 = 0;
	var uLocal_5833 = -1;
	var uLocal_5834 = -1;
	var uLocal_5835 = -1;
	var uLocal_5836 = -1;
	var uLocal_5837 = 0;
	var uLocal_5838 = 0;
	var uLocal_5839 = 0;
	var uLocal_5840 = 0;
	var uLocal_5841 = -1;
	var uLocal_5842 = 255;
	var uLocal_5843 = 0;
	var uLocal_5844 = 0;
	var uLocal_5845 = 0;
	var uLocal_5846 = 0;
	var uLocal_5847 = 0;
	var uLocal_5848 = 0;
	var uLocal_5849 = 0;
	var uLocal_5850 = 0;
	var uLocal_5851 = 0;
	var uLocal_5852 = 0;
	var uLocal_5853 = 0;
	var uLocal_5854 = -1;
	var uLocal_5855 = 0;
	var uLocal_5856 = 0;
	var uLocal_5857 = 0;
	var uLocal_5858 = 0;
	var uLocal_5859 = 0;
	var uLocal_5860 = 0;
	var uLocal_5861 = -1;
	var uLocal_5862 = -1;
	var uLocal_5863 = 0;
	var uLocal_5864 = -1;
	var uLocal_5865 = -1;
	var uLocal_5866 = -1;
	var uLocal_5867 = -1;
	var uLocal_5868 = 0;
	var uLocal_5869 = 0;
	var uLocal_5870 = 0;
	var uLocal_5871 = 0;
	var uLocal_5872 = -1;
	var uLocal_5873 = 255;
	var uLocal_5874 = 0;
	var uLocal_5875 = 0;
	var uLocal_5876 = 0;
	var uLocal_5877 = 0;
	var uLocal_5878 = 0;
	var uLocal_5879 = 0;
	var uLocal_5880 = 0;
	var uLocal_5881 = 0;
	var uLocal_5882 = 0;
	var uLocal_5883 = 0;
	var uLocal_5884 = 0;
	var uLocal_5885 = -1;
	var uLocal_5886 = 0;
	var uLocal_5887 = 0;
	var uLocal_5888 = 0;
	var uLocal_5889 = 0;
	var uLocal_5890 = 0;
	var uLocal_5891 = 0;
	var uLocal_5892 = -1;
	var uLocal_5893 = -1;
	var uLocal_5894 = 0;
	var uLocal_5895 = -1;
	var uLocal_5896 = -1;
	var uLocal_5897 = -1;
	var uLocal_5898 = -1;
	var uLocal_5899 = 0;
	var uLocal_5900 = 0;
	var uLocal_5901 = 0;
	var uLocal_5902 = 0;
	var uLocal_5903 = -1;
	var uLocal_5904 = 255;
	var uLocal_5905 = 0;
	var uLocal_5906 = 0;
	var uLocal_5907 = 0;
	var uLocal_5908 = 0;
	var uLocal_5909 = 0;
	var uLocal_5910 = 0;
	var uLocal_5911 = 0;
	var uLocal_5912 = 0;
	var uLocal_5913 = 0;
	var uLocal_5914 = 0;
	var uLocal_5915 = 0;
	var uLocal_5916 = -1;
	var uLocal_5917 = 0;
	var uLocal_5918 = 0;
	var uLocal_5919 = 0;
	var uLocal_5920 = 0;
	var uLocal_5921 = 0;
	var uLocal_5922 = 0;
	var uLocal_5923 = -1;
	var uLocal_5924 = -1;
	var uLocal_5925 = 0;
	var uLocal_5926 = -1;
	var uLocal_5927 = -1;
	var uLocal_5928 = -1;
	var uLocal_5929 = -1;
	var uLocal_5930 = 0;
	var uLocal_5931 = 0;
	var uLocal_5932 = 0;
	var uLocal_5933 = 0;
	var uLocal_5934 = -1;
	var uLocal_5935 = 255;
	var uLocal_5936 = 0;
	var uLocal_5937 = 0;
	var uLocal_5938 = 0;
	var uLocal_5939 = 0;
	var uLocal_5940 = 0;
	var uLocal_5941 = 0;
	var uLocal_5942 = 0;
	var uLocal_5943 = 0;
	var uLocal_5944 = 0;
	var uLocal_5945 = 0;
	var uLocal_5946 = 0;
	var uLocal_5947 = -1;
	var uLocal_5948 = 0;
	var uLocal_5949 = 0;
	var uLocal_5950 = 0;
	var uLocal_5951 = 0;
	var uLocal_5952 = 0;
	var uLocal_5953 = 0;
	var uLocal_5954 = -1;
	var uLocal_5955 = -1;
	var uLocal_5956 = 0;
	var uLocal_5957 = -1;
	var uLocal_5958 = -1;
	var uLocal_5959 = -1;
	var uLocal_5960 = -1;
	var uLocal_5961 = 0;
	var uLocal_5962 = 0;
	var uLocal_5963 = 0;
	var uLocal_5964 = 0;
	var uLocal_5965 = -1;
	var uLocal_5966 = 255;
	var uLocal_5967 = 0;
	var uLocal_5968 = 0;
	var uLocal_5969 = 0;
	var uLocal_5970 = 0;
	var uLocal_5971 = 0;
	var uLocal_5972 = 0;
	var uLocal_5973 = 0;
	var uLocal_5974 = 0;
	var uLocal_5975 = 0;
	var uLocal_5976 = 0;
	var uLocal_5977 = 0;
	var uLocal_5978 = -1;
	var uLocal_5979 = 0;
	var uLocal_5980 = 0;
	var uLocal_5981 = 0;
	var uLocal_5982 = 0;
	var uLocal_5983 = 0;
	var uLocal_5984 = 0;
	var uLocal_5985 = -1;
	var uLocal_5986 = -1;
	var uLocal_5987 = 0;
	var uLocal_5988 = -1;
	var uLocal_5989 = -1;
	var uLocal_5990 = -1;
	var uLocal_5991 = -1;
	var uLocal_5992 = 0;
	var uLocal_5993 = 0;
	var uLocal_5994 = 0;
	var uLocal_5995 = 0;
	var uLocal_5996 = -1;
	var uLocal_5997 = 255;
	var uLocal_5998 = 0;
	var uLocal_5999 = 0;
	var uLocal_6000 = 0;
	var uLocal_6001 = 0;
	var uLocal_6002 = 0;
	var uLocal_6003 = 0;
	var uLocal_6004 = 0;
	var uLocal_6005 = 0;
	var uLocal_6006 = 0;
	var uLocal_6007 = 0;
	var uLocal_6008 = 0;
	var uLocal_6009 = -1;
	var uLocal_6010 = 0;
	var uLocal_6011 = 0;
	var uLocal_6012 = 0;
	var uLocal_6013 = 0;
	var uLocal_6014 = 0;
	var uLocal_6015 = 0;
	var uLocal_6016 = -1;
	var uLocal_6017 = -1;
	var uLocal_6018 = 0;
	var uLocal_6019 = -1;
	var uLocal_6020 = -1;
	var uLocal_6021 = -1;
	var uLocal_6022 = -1;
	var uLocal_6023 = 0;
	var uLocal_6024 = 0;
	var uLocal_6025 = 0;
	var uLocal_6026 = 0;
	var uLocal_6027 = -1;
	var uLocal_6028 = 255;
	var uLocal_6029 = 0;
	var uLocal_6030 = 0;
	var uLocal_6031 = 0;
	var uLocal_6032 = 0;
	var uLocal_6033 = 0;
	var uLocal_6034 = 0;
	var uLocal_6035 = 0;
	var uLocal_6036 = 0;
	var uLocal_6037 = 0;
	var uLocal_6038 = 0;
	var uLocal_6039 = 0;
	var uLocal_6040 = -1;
	var uLocal_6041 = 0;
	var uLocal_6042 = 0;
	var uLocal_6043 = 0;
	var uLocal_6044 = 0;
	var uLocal_6045 = 0;
	var uLocal_6046 = 0;
	var uLocal_6047 = -1;
	var uLocal_6048 = -1;
	var uLocal_6049 = 0;
	var uLocal_6050 = -1;
	var uLocal_6051 = -1;
	var uLocal_6052 = -1;
	var uLocal_6053 = -1;
	var uLocal_6054 = 0;
	var uLocal_6055 = 0;
	var uLocal_6056 = 0;
	var uLocal_6057 = 0;
	var uLocal_6058 = -1;
	var uLocal_6059 = 255;
	var uLocal_6060 = 0;
	var uLocal_6061 = 0;
	var uLocal_6062 = 0;
	var uLocal_6063 = 0;
	var uLocal_6064 = 0;
	var uLocal_6065 = 0;
	var uLocal_6066 = 0;
	var uLocal_6067 = 0;
	var uLocal_6068 = 0;
	var uLocal_6069 = 0;
	var uLocal_6070 = 0;
	var uLocal_6071 = -1;
	var uLocal_6072 = 0;
	var uLocal_6073 = 0;
	var uLocal_6074 = 0;
	var uLocal_6075 = 0;
	var uLocal_6076 = 0;
	var uLocal_6077 = 0;
	var uLocal_6078 = -1;
	var uLocal_6079 = -1;
	var uLocal_6080 = 0;
	var uLocal_6081 = -1;
	var uLocal_6082 = -1;
	var uLocal_6083 = -1;
	var uLocal_6084 = -1;
	var uLocal_6085 = 0;
	var uLocal_6086 = 0;
	var uLocal_6087 = 0;
	var uLocal_6088 = 0;
	var uLocal_6089 = -1;
	var uLocal_6090 = 255;
	var uLocal_6091 = 0;
	var uLocal_6092 = 0;
	var uLocal_6093 = 0;
	var uLocal_6094 = 0;
	var uLocal_6095 = 0;
	var uLocal_6096 = 0;
	var uLocal_6097 = 0;
	var uLocal_6098 = 0;
	var uLocal_6099 = 0;
	var uLocal_6100 = 0;
	var uLocal_6101 = 0;
	var uLocal_6102 = -1;
	var uLocal_6103 = 0;
	var uLocal_6104 = 0;
	var uLocal_6105 = 0;
	var uLocal_6106 = 0;
	var uLocal_6107 = 0;
	var uLocal_6108 = 0;
	var uLocal_6109 = -1;
	var uLocal_6110 = -1;
	var uLocal_6111 = 0;
	var uLocal_6112 = -1;
	var uLocal_6113 = -1;
	var uLocal_6114 = -1;
	var uLocal_6115 = -1;
	var uLocal_6116 = 0;
	var uLocal_6117 = 0;
	var uLocal_6118 = 0;
	var uLocal_6119 = 0;
	var uLocal_6120 = -1;
	var uLocal_6121 = 255;
	var uLocal_6122 = 0;
	var uLocal_6123 = 0;
	var uLocal_6124 = 0;
	var uLocal_6125 = 0;
	var uLocal_6126 = 0;
	var uLocal_6127 = 0;
	var uLocal_6128 = 0;
	var uLocal_6129 = 0;
	var uLocal_6130 = 0;
	var uLocal_6131 = 0;
	var uLocal_6132 = 0;
	var uLocal_6133 = -1;
	var uLocal_6134 = 0;
	var uLocal_6135 = 0;
	var uLocal_6136 = 0;
	var uLocal_6137 = 0;
	var uLocal_6138 = 0;
	var uLocal_6139 = 0;
	var uLocal_6140 = -1;
	var uLocal_6141 = -1;
	var uLocal_6142 = 0;
	var uLocal_6143 = -1;
	var uLocal_6144 = -1;
	var uLocal_6145 = -1;
	var uLocal_6146 = -1;
	var uLocal_6147 = 0;
	var uLocal_6148 = 0;
	var uLocal_6149 = 0;
	var uLocal_6150 = 0;
	var uLocal_6151 = -1;
	var uLocal_6152 = 255;
	var uLocal_6153 = 0;
	var uLocal_6154 = 0;
	var uLocal_6155 = 0;
	var uLocal_6156 = 0;
	var uLocal_6157 = 0;
	var uLocal_6158 = 0;
	var uLocal_6159 = 0;
	var uLocal_6160 = 0;
	var uLocal_6161 = 0;
	var uLocal_6162 = 0;
	var uLocal_6163 = 0;
	var uLocal_6164 = -1;
	var uLocal_6165 = 0;
	var uLocal_6166 = 0;
	var uLocal_6167 = 0;
	var uLocal_6168 = 0;
	var uLocal_6169 = 0;
	var uLocal_6170 = 0;
	var uLocal_6171 = -1;
	var uLocal_6172 = -1;
	var uLocal_6173 = 0;
	var uLocal_6174 = -1;
	var uLocal_6175 = -1;
	var uLocal_6176 = -1;
	var uLocal_6177 = -1;
	var uLocal_6178 = 0;
	var uLocal_6179 = 0;
	var uLocal_6180 = 0;
	var uLocal_6181 = 0;
	var uLocal_6182 = -1;
	var uLocal_6183 = 255;
	var uLocal_6184 = 0;
	var uLocal_6185 = 0;
	var uLocal_6186 = 0;
	var uLocal_6187 = 0;
	var uLocal_6188 = 0;
	var uLocal_6189 = 0;
	var uLocal_6190 = 0;
	var uLocal_6191 = 0;
	var uLocal_6192 = 0;
	var uLocal_6193 = 0;
	var uLocal_6194 = 0;
	var uLocal_6195 = -1;
	var uLocal_6196 = 0;
	var uLocal_6197 = 0;
	var uLocal_6198 = 0;
	var uLocal_6199 = 0;
	var uLocal_6200 = 0;
	var uLocal_6201 = 0;
	var uLocal_6202 = -1;
	var uLocal_6203 = -1;
	var uLocal_6204 = 0;
	var uLocal_6205 = -1;
	var uLocal_6206 = -1;
	var uLocal_6207 = -1;
	var uLocal_6208 = -1;
	var uLocal_6209 = 0;
	var uLocal_6210 = 0;
	var uLocal_6211 = 0;
	var uLocal_6212 = 0;
	var uLocal_6213 = -1;
	var uLocal_6214 = 255;
	var uLocal_6215 = 0;
	var uLocal_6216 = 0;
	var uLocal_6217 = 0;
	var uLocal_6218 = 0;
	var uLocal_6219 = 0;
	var uLocal_6220 = 0;
	var uLocal_6221 = 0;
	var uLocal_6222 = 0;
	var uLocal_6223 = 0;
	var uLocal_6224 = 0;
	var uLocal_6225 = 0;
	var uLocal_6226 = -1;
	var uLocal_6227 = 0;
	var uLocal_6228 = 0;
	var uLocal_6229 = 0;
	var uLocal_6230 = 0;
	var uLocal_6231 = 0;
	var uLocal_6232 = 0;
	var uLocal_6233 = -1;
	var uLocal_6234 = -1;
	var uLocal_6235 = 0;
	var uLocal_6236 = -1;
	var uLocal_6237 = -1;
	var uLocal_6238 = -1;
	var uLocal_6239 = -1;
	var uLocal_6240 = 0;
	var uLocal_6241 = 0;
	var uLocal_6242 = 0;
	var uLocal_6243 = 0;
	var uLocal_6244 = -1;
	var uLocal_6245 = 255;
	var uLocal_6246 = 0;
	var uLocal_6247 = 0;
	var uLocal_6248 = 0;
	var uLocal_6249 = 0;
	var uLocal_6250 = 0;
	var uLocal_6251 = 0;
	var uLocal_6252 = 0;
	var uLocal_6253 = 0;
	var uLocal_6254 = 0;
	var uLocal_6255 = 0;
	var uLocal_6256 = 0;
	var uLocal_6257 = -1;
	var uLocal_6258 = 0;
	var uLocal_6259 = 0;
	var uLocal_6260 = 0;
	var uLocal_6261 = 0;
	var uScriptParam_0 = -1;
#endregion

void __EntryFunction__()
{
	int iVar0;

	iLocal_13 = joaat("W_BINOCULAR_INNER01");
	fLocal_28 = 1f;
	fLocal_29 = 1f;
	func_1(&uScriptParam_0);
	while (!func_2())
	{
		func_3();
		if (iLocal_31 >= 0 && iLocal_31 < 32)
		{
			iLocal_36 = MISC::GET_GAME_TIMER();
			func_4();
			func_5();
			func_6();
		}
		else
		{
			iVar0 = MISC::GET_GAME_TIMER();
			if (iLocal_36 != 0)
			{
				if ((iVar0 - iLocal_36) > 30000)
				{
					CAM::DO_SCREEN_FADE_IN(0);
					func_7();
					SCRIPTS::TERMINATE_THIS_THREAD();
				}
			}
			else
			{
				iLocal_36 = iVar0;
			}
		}
		BUILTIN::WAIT(0);
	}
	func_7();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_8(32, *uParam0);
	func_9();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	func_10();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_37, 394, 48);
	func_11(NETWORK::_0xBA24095EA96DFE17(&Local_37), 394, "sServerBD");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_431, 161, 49);
	func_12(NETWORK::_0x690806BC83BC8CA2(&(Local_431[0 /*5*/])), 161, "sClientBD");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_592, 385, 50);
	func_12(NETWORK::_0x690806BC83BC8CA2(&(Local_592[0 /*12*/])), 385, "sCutscenePlayerBD");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_977, 1217, 51);
	func_12(NETWORK::_0x690806BC83BC8CA2(&(Local_977[0 /*38*/])), 1217, "sVotingPlayerBD");
	while (!NETWORK::_0x5D10B3795F3FC886() && !func_2())
	{
		BUILTIN::WAIT(0);
	}
	while (!func_13() && !func_2())
	{
		if (!func_14(&uLocal_34))
		{
			func_15(&uLocal_34, 1, 0);
		}
		BUILTIN::WAIT(0);
	}
}

bool func_2()
{
	if (func_16(Global_390124.f_6, Global_390124.f_7))
	{
		return true;
	}
	if (Local_37 == 5)
	{
		return true;
	}
	return false;
}

void func_3()
{
	bLocal_30 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
	iLocal_31 = NETWORK::PARTICIPANT_ID_TO_INT();
}

void func_4()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		iVar0 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar1);
		switch (iVar0)
		{
			case -507840394:
				func_17(iVar1);
				break;
		}
		iVar1++;
	}
}

void func_5()
{
	int iVar0;
	int iVar1;

	if (!bLocal_30)
	{
		return;
	}
	while (iVar0 < 6)
	{
		iVar1 = Local_37;
		switch (Local_37)
		{
			case 0:
				if (func_18(1))
				{
					func_19();
					iVar1 = 1;
				}
				break;
			case 1:
				if (func_18(3))
				{
					iVar1 = 2;
				}
				break;
			case 2:
				if (func_20())
				{
					iVar1 = 3;
				}
				break;
			case 3:
				if (func_18(5))
				{
					iVar1 = 4;
				}
				break;
			case 4:
				iVar1 = 5;
				break;
		}
		if (iVar1 != Local_37)
		{
			Local_37 = iVar1;
			iVar0++;
		}
	else
	{
		}
	else
	{
		}
	}
}

void func_6()
{
	int iVar0;
	int iVar1;

	while (iVar0 < 6)
	{
		iVar1 = Local_431[iLocal_31 /*5*/];
		switch (Local_431[iLocal_31 /*5*/])
		{
			case 0:
				if (func_21())
				{
					iVar1 = 1;
				}
				break;
			case 1:
				if (Local_37 >= 1)
				{
					func_22();
					iVar1 = 2;
				}
				break;
			case 2:
				if (func_23())
				{
					iVar1 = 3;
				}
				break;
			case 3:
				if (Local_37 >= 2)
				{
					iVar1 = 4;
				}
				break;
			case 4:
				if (func_24())
				{
					iVar1 = 5;
				}
				break;
		}
		if (iVar1 != Local_431[iLocal_31 /*5*/])
		{
			Local_431[iLocal_31 /*5*/] = iVar1;
			iVar0++;
		}
	else
	{
		}
	else
	{
		}
	}
}

void func_7()
{
	if (func_25())
	{
		func_26(&Local_2194, 12);
	}
	func_27(&Local_2194, &(Local_592[iLocal_31 /*12*/]));
	func_28();
}

void func_8(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_29();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_9()
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
			func_29();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				case 1:
					func_29();
					break;
				case 2:
					func_29();
					break;
				case 4:
					func_29();
					break;
				case 3:
					func_29();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_29();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_29();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_29();
		}
		if (func_30() == 0)
		{
			if (func_31())
			{
				func_29();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_29();
	}
	return 1;
}

void func_10()
{
	int iVar0;

	func_32(&(Local_37.f_2[0 /*33*/]));
	iVar0 = 0;
	while (iVar0 < Local_592)
	{
		func_33(&(Local_592[iVar0 /*12*/]));
		iVar0++;
	}
	func_34(&Local_2194);
}

int func_11(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_12(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

bool func_13()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_35(Global_3407872.f_2499, 8))
	{
		return true;
	}
	if (func_14(&uLocal_34) && func_36(&uLocal_34, 1, 0) > 20000)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_3407872[iVar0 /*7*/])))
		{
		}
		else
		{
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Global_3407872[iVar0 /*7*/])))
			{
				return false;
			}
			iVar1 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_3407872[iVar0 /*7*/]));
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
			{
				return false;
			}
			if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
			{
				return false;
			}
			iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_14(var uParam0)
{
	return uParam0->f_1;
}

void func_15(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
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

void func_17(int iParam0)
{
	var uVar0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &uVar0, 4))
	{
		return;
	}
}

bool func_18(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
		}
		else if (Local_431[iVar0 /*5*/] != iParam0)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_19()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_25())
	{
		return;
	}
	Local_37.f_393 = 255;
	iVar0 = 255;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
		{
			if (Local_431[iVar1 /*5*/].f_3 == 0)
			{
			}
			else
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2);
				if (iVar3 != GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(iVar3)))
				{
					if (iVar0 == 255)
					{
						iVar0 = iVar2;
					}
				}
				else
				{
					Local_37.f_393 = iVar2;
				}
			}
		}
		iVar1++;
	}
	if (Local_37.f_393 == 255)
	{
		if (iVar0 != 255)
		{
			Local_37.f_393 = iVar0;
		}
	}
	if (Local_37.f_393 != 255)
	{
		Local_37.f_391 = Local_431[Local_37.f_393 /*5*/].f_3;
		Local_37.f_392 = Local_431[Local_37.f_393 /*5*/].f_4;
	}
	if (Local_37.f_392 == -1)
	{
		Local_37.f_391 = 0;
	}
}

bool func_20()
{
	switch (Global_3407872.f_225)
	{
		case 1:
			return func_37();
		default:
			break;
	}
	return true;
	return false;
}

bool func_21()
{
	int iVar0;

	if (!func_25())
	{
		return true;
	}
	if (!func_38())
	{
		return false;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-2111141782))
	{
		MISC::SET_BIT(&(Local_431[iLocal_31 /*5*/].f_3), 0);
		MISC::SET_BIT(&(Local_431[iLocal_31 /*5*/].f_3), 1);
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1384963671))
	{
		MISC::SET_BIT(&(Local_431[iLocal_31 /*5*/].f_3), 3);
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-567253426))
	{
		MISC::SET_BIT(&(Local_431[iLocal_31 /*5*/].f_3), 2);
	}
	iVar0 = func_40(func_39(), 1);
	if (iVar0 == -1)
	{
		Local_431[iLocal_31 /*5*/].f_3 = 0;
	}
	Local_431[iLocal_31 /*5*/].f_4 = iVar0;
	return true;
}

void func_22()
{
	var uVar0;
	int iVar5;

	if (!func_25())
	{
		return;
	}
	if (!func_41())
	{
		return;
	}
	if (Local_37.f_393 == NETWORK::PARTICIPANT_ID())
	{
		uVar0 = 4;
		func_42(&uVar0);
		func_43(&uVar0);
	}
	if (Global_3407872.f_226 == 2)
	{
		func_44(-1, &(Global_3407872.f_227[0 /*2270*/].f_2056[0 /*26*/].f_17), &(Global_3407872.f_227[0 /*2270*/].f_1621[0 /*3*/]), &(Global_3407872.f_227[0 /*2270*/].f_2056[0 /*26*/].f_16), &(Local_37.f_392));
	}
	else
	{
		iVar5 = 0;
		while (iVar5 < 4)
		{
			func_44(iVar5, &(Global_3407872.f_227[0 /*2270*/].f_2056[iVar5 /*26*/].f_17), &(Global_3407872.f_227[0 /*2270*/].f_1621[iVar5 /*3*/]), &(Global_3407872.f_227[0 /*2270*/].f_2056[iVar5 /*26*/].f_16), &(Local_37.f_392));
			iVar5++;
		}
	}
}

bool func_23()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (!func_25())
	{
		return true;
	}
	if (!func_41())
	{
		return true;
	}
	bVar0 = func_45(255);
	bVar1 = ENTITY::IS_ENTITY_DEAD(Global_34);
	bVar2 = Global_1298378.f_29.f_3 == 2;
	if ((!bVar0 && !bVar1) && bVar2)
	{
		return true;
	}
	return false;
}

bool func_24()
{
	func_46();
	switch (Global_3407872.f_225)
	{
		case 1:
			return func_47();
		default:
			break;
	}
	return true;
	return false;
}

bool func_25()
{
	return (Global_3407872.f_226 == 3 || Global_3407872.f_226 == 2);
}

void func_26(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_27(int* iParam0, var uParam1)
{
	MISC::CLEAR_BIT(&(Global_1957959.f_1), 5);
	Global_1048584 = 0;
	STREAMING::CLEAR_FOCUS();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_48(iParam0))
		{
			NETWORK::_0x007FF852DCF49DA4(256);
			NETWORK::_0x4B05B97BA46F419D(1);
			NETWORK::_0x6C7E04E9DE451789();
		}
	}
	if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
	if (CAM::DOES_CAM_EXIST(iParam0->f_1478))
	{
		CAM::DESTROY_CAM(iParam0->f_1478, false);
	}
	if (func_49(&(iParam0->f_1483)))
	{
		func_50(&(iParam0->f_1483));
	}
	func_51(&(iParam0->f_1483));
	func_52(iParam0, uParam1);
}

void func_28()
{
	struct<228> Var0;

	Var0 = 32;
	Var0.f_227 = 1;
	Var0.f_227.f_1.f_24 = 4;
	Var0.f_227.f_1.f_24.f_1.f_11 = 2;
	Var0.f_227.f_1.f_24.f_1.f_11.f_1.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_11 = 2;
	Var0.f_227.f_1.f_24.f_1.f_80.f_11.f_1.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_80.f_11 = 2;
	Var0.f_227.f_1.f_24.f_1.f_80.f_80.f_11.f_1.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_80.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_80.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_80.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_80.f_80.f_11 = 2;
	Var0.f_227.f_1.f_24.f_1.f_80.f_80.f_80.f_11.f_1.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_80.f_80.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_80.f_80.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_227.f_1.f_24.f_1.f_80.f_80.f_80.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_227.f_1.f_345 = 20;
	Var0.f_227.f_1.f_345.f_1 = -1;
	Var0.f_227.f_1.f_345.f_1.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_227.f_1.f_926 = 20;
	Var0.f_227.f_1.f_926.f_1 = -1;
	Var0.f_227.f_1.f_926.f_1.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227 = 10;
	Var0.f_227.f_1.f_1227.f_1 = -1;
	Var0.f_227.f_1.f_1227.f_1.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15 = -1;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378 = 10;
	Var0.f_227.f_1.f_1378.f_1 = -1;
	Var0.f_227.f_1.f_1378.f_1.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15 = -1;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1529 = 1;
	Var0.f_227.f_1.f_1529.f_1 = -1;
	Var0.f_227.f_1.f_1529.f_1.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1529.f_1.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1545 = 5;
	Var0.f_227.f_1.f_1545.f_1 = -1;
	Var0.f_227.f_1.f_1545.f_1.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1545.f_1.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1545.f_1.f_15 = -1;
	Var0.f_227.f_1.f_1545.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1545.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1545.f_1.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1545.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1545.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1545.f_1.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1545.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1545.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1545.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_227.f_1.f_1545.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_227.f_1.f_1545.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_227.f_1.f_1621 = 8;
	Var0.f_227.f_1.f_1647 = 2;
	Var0.f_227.f_1.f_1651 = 4;
	Var0.f_227.f_1.f_1668 = 20;
	Var0.f_227.f_1.f_1829 = 20;
	Var0.f_227.f_1.f_1910 = 10;
	Var0.f_227.f_1.f_1951 = 1;
	Var0.f_227.f_1.f_1956 = 10;
	Var0.f_227.f_1.f_1997 = 5;
	Var0.f_227.f_1.f_2018 = 3;
	Var0.f_227.f_1.f_2043 = 3;
	Var0.f_227.f_1.f_2056 = 8;
	Var0.f_227.f_1.f_2056.f_1.f_21 = 3;
	Var0.f_227.f_1.f_2056.f_1.f_26.f_21 = 3;
	Var0.f_227.f_1.f_2056.f_1.f_26.f_26.f_21 = 3;
	Var0.f_227.f_1.f_2056.f_1.f_26.f_26.f_26.f_21 = 3;
	Var0.f_227.f_1.f_2056.f_1.f_26.f_26.f_26.f_26.f_21 = 3;
	Var0.f_227.f_1.f_2056.f_1.f_26.f_26.f_26.f_26.f_26.f_21 = 3;
	Var0.f_227.f_1.f_2056.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_21 = 3;
	Var0.f_227.f_1.f_2056.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_21 = 3;
	MISC::_COPY_MEMORY(&Global_3407872, &Var0, 2500);
}

void func_29()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_30()
{
	return Global_1572887.f_13;
}

bool func_31()
{
	return Global_1051252.f_8;
}

void func_32(var uParam0)
{
	func_53(uParam0);
}

void func_33(var uParam0)
{
	func_54(uParam0);
}

void func_34(int iParam0)
{
	func_55(iParam0);
	func_56(&(iParam0->f_1776));
}

bool func_35(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_36(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME());
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(*uParam0, MISC::GET_GAME_TIMER());
}

int func_37()
{
	var uVar0;
	bool bVar33;
	bool bVar34;
	int iVar35;
	int iVar36;

	uVar0 = 32;
	bVar33 = func_59(&(Local_37.f_2[0 /*33*/]), 0, &Local_592, &uVar0, &(Global_3407872.f_227[0 /*2270*/]), &(Local_37.f_61), &Local_977, 8630, 8638);
	while (iVar35 < 6)
	{
		iVar36 = Local_37.f_1;
		switch (Local_37.f_1)
		{
			case 0:
				Local_37.f_388 = { func_60() };
				Local_37.f_388 = 1;
				Local_37.f_388.f_1 = 0;
				iVar36 = 1;
				break;
			case 1:
				if (!func_61(&(Local_37.f_388.f_2), &bVar34))
				{
					return 0;
				}
				if (bVar34)
				{
					iVar36 = 5;
				}
				else
				{
					iVar36 = 2;
				}
				break;
			case 2:
				if (func_62(&(Local_37.f_2[0 /*33*/]), 0, Local_37.f_388, 2, 0))
				{
					iVar36 = 3;
				}
				break;
			case 3:
				if (func_63(1))
				{
					if (func_62(&(Local_37.f_2[0 /*33*/]), 0, Local_37.f_388, 3, 0))
					{
						iVar36 = 4;
					}
				}
				break;
			case 4:
				if (bVar33)
				{
					iVar36 = 5;
				}
				break;
			case 5:
				return 1;
		}
		if (iVar36 != Local_37.f_1)
		{
			Local_37.f_1 = iVar36;
			iVar35++;
		}
	else
	{
		}
	else
	{
		}
	}
	return 0;
}

bool func_38()
{
	return (func_64() && Global_1298166 == 1);
}

int func_39()
{
	return Global_1298166.f_200;
}

int func_40(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return -1;
		}
	}
	return Global_1298536[iParam0 /*87*/].f_5.f_12;
}

bool func_41()
{
	return Local_37.f_392 != -1;
}

void func_42(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = *uParam0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (iVar0 <= iVar1)
		{
		}
		else
		{
			if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_3407872[iVar2 /*7*/])))
			{
			}
			else if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Global_3407872[iVar2 /*7*/])))
			{
			}
			else
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_3407872[iVar2 /*7*/]));
				if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar3))
				{
				}
				else
				{
					(*uParam0)[iVar1] = iVar3;
					iVar1++;
				}
			}
			iVar2++;
		}
	}
}

void func_43(var uParam0)
{
	int iVar0;
	struct<20> Var1;
	var uVar27;
	int iVar28;

	if (Global_1298166.f_1 == 4)
	{
		return;
	}
	func_65(4);
	iVar0 = *uParam0;
	if (iVar0 > 4)
	{
		return;
	}
	func_66(2, 0, 1);
	Var1.f_5 = 255;
	Var1.f_7 = -1;
	Var1.f_9 = 7;
	Var1.f_19 = -1;
	Var1.f_19.f_1 = -1;
	Var1.f_5 = Global_1296859.f_154[Global_1296859];
	Var1.f_4 = 2;
	iVar28 = 0;
	while (iVar28 <= (iVar0 - 1))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE((*uParam0)[iVar28]) && (*uParam0)[iVar28] != Global_1296859.f_154[Global_1296859])
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar27, (*uParam0)[iVar28]);
		}
		iVar28++;
	}
	func_67(&Var1, uVar27);
	func_68(0);
}

void func_44(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 3:
			StringCopy(sParam1, "pl_Band", 32);
			break;
		case 2:
			StringCopy(sParam1, "pl_Bar", 32);
			break;
		case 1:
			StringCopy(sParam1, "pl_Cook", 32);
			break;
		case 0:
			StringCopy(sParam1, "pl_Maggie", 32);
			break;
	}
	switch (*uParam4)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { 1779.365f, -802.881f, 187.965f };
					*uParam3 = -136.6f;
					break;
				case 1:
					*uParam2 = { 1789.989f, -818.1904f, 188.401f };
					*uParam3 = 28.4f;
					break;
				case 0:
					*uParam2 = { 1789.589f, -812.6585f, 191.5976f };
					*uParam3 = -176.6f;
					break;
				case -1:
					*uParam2 = { 1787.426f, -809.093f, 190.695f };
					*uParam3 = -108.9f;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { -1086.47f, 694.842f, 79.6002f };
					*uParam3 = 23.5f;
					break;
				case 1:
					*uParam2 = { -1091.248f, 712.8531f, 80.0358f };
					*uParam3 = -171.5f;
					break;
				case 0:
					*uParam2 = { -1092.755f, 707.5154f, 83.2324f };
					*uParam3 = -16.5f;
					break;
				case -1:
					*uParam2 = { -1091.934f, 703.427f, 82.33f };
					*uParam3 = 51.2f;
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { -2785.119f, -3060.223f, -13.3343f };
					*uParam3 = -27.7f;
					break;
				case 1:
					*uParam2 = { -2774.076f, -3045.214f, -12.8987f };
					*uParam3 = 137.3f;
					break;
				case 0:
					*uParam2 = { -2779.18f, -3047.384f, -9.7021f };
					*uParam3 = -67.7f;
					break;
				case -1:
					*uParam2 = { -2781.852f, -3050.585f, -10.605f };
					*uParam3 = 0f;
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { 1615.008f, 837.4983f, 120.3081f };
					*uParam3 = -113.2f;
					break;
				case 1:
					*uParam2 = { 1630.838f, 827.6671f, 120.7437f };
					*uParam3 = 51.8f;
					break;
				case 0:
					*uParam2 = { 1628.273f, 832.5851f, 123.9403f };
					*uParam3 = -153.2f;
					break;
				case -1:
					*uParam2 = { 1624.872f, 834.998f, 123.038f };
					*uParam3 = -85.5f;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { -1851.025f, -1738.521f, 84.6213f };
					*uParam3 = 60f;
					break;
				case 1:
					*uParam2 = { -1865.579f, -1726.884f, 85.0569f };
					*uParam3 = -135f;
					break;
				case 0:
					*uParam2 = { -1863.615f, -1732.071f, 88.2535f };
					*uParam3 = 20f;
					break;
				case -1:
					*uParam2 = { -1860.524f, -1734.87f, 87.351f };
					*uParam3 = 87.7f;
					break;
			}
			break;
	}
}

bool func_45(int iParam0)
{
	return func_69(1, iParam0);
}

void func_46()
{
	char* sVar0;

	if (iLocal_33 == 4)
	{
		return;
	}
	sVar0 = func_70();
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		func_71(4);
		return;
	}
	switch (iLocal_33)
	{
		case 0:
			func_71(1);
			break;
		case 1:
			AUDIO::PREPARE_MUSIC_EVENT(sVar0);
			func_71(2);
			break;
		case 2:
			if (CAM::IS_SCREEN_FADED_IN())
			{
				func_71(3);
			}
			break;
		case 3:
			AUDIO::TRIGGER_MUSIC_EVENT(sVar0);
			func_71(4);
			break;
	}
}

int func_47()
{
	bool bVar0;
	var uVar1;
	int iVar34;
	int iVar35;

	func_72(&(Local_2194.f_1483), 524288, 1);
	uVar1 = 32;
	if (Local_431[iLocal_31 /*5*/].f_2 >= 1)
	{
		bVar0 = func_74(&(Local_37.f_2), 1, &Local_2194, &Local_592, iLocal_31, iLocal_31, &uVar1, &(Local_37.f_61), &Local_977, &(Global_3407872.f_227), 9848, 8638, 0);
	}
	while (iVar34 < 6)
	{
		iVar35 = Local_431[iLocal_31 /*5*/].f_2;
		switch (Local_431[iLocal_31 /*5*/].f_2)
		{
			case 0:
				if (Local_37.f_1 > 4)
				{
					iVar35 = 5;
				}
				else if (Local_37.f_388.f_2 >= 0 && Local_37.f_388.f_2 < 8)
				{
					if (func_75())
					{
						func_76(1);
						func_77(1);
						func_78(1);
						func_79(1);
						func_80(Global_3407872.f_227[0 /*2270*/].f_1621[Local_37.f_388.f_2 /*3*/], Global_3407872.f_227[0 /*2270*/].f_2056[Local_37.f_388.f_2 /*26*/].f_16, 1);
					}
					func_15(&uLocal_34, 1, 0);
					iVar35 = 3;
				}
				break;
			case 3:
				if (func_81(255) != 1 || (func_36(&uLocal_34, 1, 0) > 100 && func_81(255) == 1))
				{
					func_82(&(Global_3407872.f_2499), 4);
					iVar35 = 4;
				}
				break;
			case 4:
				if (func_81(255) == 1)
				{
					iVar35 = 1;
				}
				break;
			case 1:
				if ((func_35(Global_3407872.f_2499, 1) && func_83(&(Local_592[iLocal_31 /*12*/]))) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_2194.f_1483.f_208))
				{
					func_82(&(Local_431[iLocal_31 /*5*/].f_1), 1);
					iVar35 = 2;
				}
				break;
			case 2:
				if (func_84(&(Local_592[iLocal_31 /*12*/])))
				{
					if (!func_35(uLocal_32, 1))
					{
						func_85(0, 0);
						func_82(&uLocal_32, 1);
					}
				}
				if (bVar0)
				{
					iVar35 = 5;
				}
				break;
			case 5:
				return 1;
		}
		if (iVar35 != Local_431[iLocal_31 /*5*/].f_2)
		{
			Local_431[iLocal_31 /*5*/].f_2 = iVar35;
			iVar34++;
		}
	else
	{
		}
	else
	{
		}
	}
	return 0;
}

bool func_48(int* iParam0)
{
	return !func_86(*iParam0, 12);
}

bool func_49(var uParam0)
{
	return ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208);
}

void func_50(var uParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_208);
	}
}

void func_51(var uParam0)
{
	struct<293> Var0;

	Var0 = 1;
	Var0.f_17 = 14;
	Var0.f_186 = 1097859072;
	Var0.f_187 = 1101004800;
	Var0.f_225 = 4;
	Var0.f_292 = 1000;
	MISC::_COPY_MEMORY(uParam0, &Var0, 293);
}

void func_52(int* iParam0, var uParam1)
{
	func_34(iParam0);
	func_33(uParam1);
}

void func_53(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_87(&(uParam0->f_4));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_88(&(uParam0->f_7[iVar0 /*5*/]));
		iVar0++;
	}
	uParam0->f_28 = 255;
	func_89(&(uParam0->f_29));
	func_89(&(uParam0->f_31));
}

void func_54(var uParam0)
{
	*uParam0 = -1;
	func_87(&(uParam0->f_1));
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	func_87(&(uParam0->f_9));
}

void func_55(int iParam0)
{
	func_90(iParam0);
	func_91(0);
	Global_1048584 = 0;
}

void func_56(var uParam0)
{
	func_92(uParam0);
}

void func_57(var uParam0, var uParam1, var uParam2)
{
}

int func_58(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return 2;
}

int func_59(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;

	iVar0 = *uParam0;
	while (iVar1 < 8)
	{
		switch (*uParam0)
		{
			case 0:
				if (func_93(uParam0))
				{
					iVar0 = 1;
				}
				break;
			case 1:
				if (func_94(uParam0, iParam1, iParam2, uParam3, uParam4))
				{
					iVar0 = 2;
				}
				break;
			case 2:
				if (func_95(uParam0, iParam1, iParam2, uParam3, uParam4))
				{
					iVar0 = 3;
				}
				break;
			case 3:
				if (func_96(uParam0, uParam4, iParam8))
				{
					iVar0 = 4;
				}
				break;
			case 4:
				if (func_97(uParam0, iParam1, uParam4, uParam5, iParam8))
				{
					iVar0 = 5;
				}
				break;
			case 5:
				if (func_98(uParam0, iParam1, iParam2, uParam4))
				{
					iVar0 = 6;
				}
				break;
			case 6:
				if (func_99(uParam0, iParam1, iParam2, uParam5, uParam6, iParam7))
				{
					iVar0 = 7;
				}
				break;
			case 7:
				if (func_100(uParam0, iParam1, iParam2))
				{
					return 1;
				}
				break;
		}
		if (iVar0 != *uParam0)
		{
			*uParam0 = iVar0;
			iVar1++;
		}
	else
	{
		}
	else
	{
		}
	}
	return 0;
}

Vector3 func_60()
{
	vector3 vVar0;

	vVar0 = -1;
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	return vVar0;
}

bool func_61(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2[8];
	int iVar11;

	iVar11 = 0;
	if (func_25())
	{
		if (Local_37.f_391 != 0)
		{
			if (Global_3407872.f_226 == 2)
			{
				iVar2[0] = 0;
				iVar1 = 1;
			}
			else
			{
				iVar11 = 0;
				while (iVar11 <= 7)
				{
					if (MISC::IS_BIT_SET(Local_37.f_391, iVar11))
					{
						iVar2[iVar1] = iVar11;
						iVar1++;
					}
					iVar11++;
				}
			}
		}
		else
		{
			iVar1 = 0;
		}
		iVar0 = 8;
	}
	else
	{
		iVar11 = 0;
		while (iVar11 <= 7)
		{
			if (func_101(iVar11, &(Global_3407872.f_227[0 /*2270*/]), Global_3407872.f_2498, &(Local_37.f_36[iVar11 /*3*/])))
			{
				iVar0++;
				if (!Local_37.f_36[iVar11 /*3*/].f_2)
				{
					iVar2[iVar1] = iVar11;
					iVar1++;
				}
			}
			iVar11++;
		}
	}
	if (iVar0 < 8)
	{
		return false;
	}
	if (iVar1 == 0)
	{
		*uParam1 = 1;
		return true;
	}
	*uParam0 = -1;
	if (*uParam0 == -1)
	{
		*uParam0 = iVar2[MISC::GET_RANDOM_INT_IN_RANGE(0, func_102(iVar1, 0, 7))];
	}
	iVar11 = 0;
	while (iVar11 <= 7)
	{
		if (iVar11 != *uParam0 && VOLUME::_0xF6A8A652A6B186CD(Local_37.f_36[iVar11 /*3*/]))
		{
			VOLUME::_0xFDFECC6EE4491E11(Local_37.f_36[iVar11 /*3*/]);
		}
		iVar11++;
	}
	return true;
}

bool func_62(var uParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6)
{
	if (iParam1 < 0 || iParam1 >= 8)
	{
		return false;
	}
	if (!func_103(vParam2, 1))
	{
		return false;
	}
	if (func_104(uParam0))
	{
		return false;
	}
	if (func_105(uParam0->f_4, vParam2) && iParam5 == uParam0->f_2)
	{
		return true;
	}
	uParam0->f_4 = { vParam2 };
	uParam0->f_2 = iParam5;
	uParam0->f_3 = iParam6;
	return true;
}

bool func_63(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
		}
		else if (!func_35(Local_431[iVar0 /*5*/].f_1, iParam0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_64()
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return Global_1071686.f_3;
}

void func_65(int iParam0)
{
	Global_1298166.f_1 = iParam0;
}

int func_66(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	Global_1298536[PLAYER::PLAYER_ID() /*87*/].f_5[iParam0] = iParam1;
	return 1;
}

void func_67(var uParam0, var uParam1)
{
	*uParam0 = 13;
	uParam0->f_1 = PLAYER::GET_PLAYER_INDEX();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 26, 15, &uParam1);
}

void func_68(bool bParam0)
{
	func_106(128);
	func_107(1);
	if (bParam0)
	{
		func_106(1024);
	}
}

bool func_69(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_108(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 == func_109())
	{
		return func_108(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1296859.f_22[iParam1])
	{
		return func_108(&(Global_1100469[iParam1 /*53*/].f_4), iVar0, 5);
	}
	return false;
}

char* func_70()
{
	if (Global_3407872.f_226 == 1)
	{
		return "MP_BH_MISSION_COMPLETE_MUSIC";
	}
	return "";
}

void func_71(int iParam0)
{
	iLocal_33 = iParam0;
}

void func_72(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
	if (((iParam1 == 512 && bParam2) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208)) && ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_208))
	{
		ANIMSCENE::_0x8A8208AE92BF87A5(uParam0->f_208);
	}
}

void func_73(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_82(&(Global_3407872.f_2499), 2);
			break;
		case 7:
			func_110();
			break;
		case 2:
			func_111();
			break;
	}
}

int func_74(var uParam0, int iParam1, int* iParam2, int iParam3, int iParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, bool bParam12)
{
	struct<2> Var0;

	Var0 = 1;
	Var0.f_1.f_8.f_24 = 4;
	Var0.f_1.f_8.f_24.f_1.f_11 = 2;
	Var0.f_1.f_8.f_24.f_1.f_11.f_1.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_11 = 2;
	Var0.f_1.f_8.f_24.f_1.f_80.f_11.f_1.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_80.f_11 = 2;
	Var0.f_1.f_8.f_24.f_1.f_80.f_80.f_11.f_1.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_80.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_80.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_80.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_80.f_80.f_11 = 2;
	Var0.f_1.f_8.f_24.f_1.f_80.f_80.f_80.f_11.f_1.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_80.f_80.f_11.f_1.f_13.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_80.f_80.f_11.f_1.f_34.f_5 = -1082130432;
	Var0.f_1.f_8.f_24.f_1.f_80.f_80.f_80.f_11.f_1.f_34.f_13.f_5 = -1082130432;
	Var0.f_1.f_8.f_345 = 20;
	Var0.f_1.f_8.f_345.f_1 = -1;
	Var0.f_1.f_8.f_345.f_1.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29 = -1;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_345.f_1.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_29.f_16.f_5 = -1082130432;
	Var0.f_1.f_8.f_926 = 20;
	Var0.f_1.f_8.f_926.f_1 = -1;
	Var0.f_1.f_8.f_926.f_1.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_926.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227 = 10;
	Var0.f_1.f_8.f_1227.f_1 = -1;
	Var0.f_1.f_8.f_1227.f_1.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15 = -1;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1227.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378 = 10;
	Var0.f_1.f_8.f_1378.f_1 = -1;
	Var0.f_1.f_8.f_1378.f_1.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15 = -1;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1378.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1529 = 1;
	Var0.f_1.f_8.f_1529.f_1 = -1;
	Var0.f_1.f_8.f_1529.f_1.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1529.f_1.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1545 = 5;
	Var0.f_1.f_8.f_1545.f_1 = -1;
	Var0.f_1.f_8.f_1545.f_1.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1545.f_1.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1545.f_1.f_15 = -1;
	Var0.f_1.f_8.f_1545.f_1.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1545.f_1.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1545.f_1.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1545.f_1.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1545.f_1.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1545.f_1.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1545.f_1.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1545.f_1.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1545.f_1.f_15.f_15.f_15.f_15 = -1;
	Var0.f_1.f_8.f_1545.f_1.f_15.f_15.f_15.f_15.f_3.f_5 = -1082130432;
	Var0.f_1.f_8.f_1545.f_1.f_15.f_15.f_15.f_15.f_9.f_5 = -1082130432;
	Var0.f_1.f_8.f_1621 = 8;
	Var0.f_1.f_8.f_1647 = 2;
	Var0.f_1.f_1659 = 20;
	Var0.f_1.f_2381 = 4;
	Var0.f_1.f_2381.f_1 = 2;
	Var0.f_1.f_2381.f_1.f_3 = 2;
	Var0.f_1.f_2381.f_1.f_3.f_3 = 2;
	Var0.f_1.f_2381.f_1.f_3.f_3.f_3 = 2;
	Var0.f_1.f_2394 = 20;
	func_112(uParam0, iParam1, iParam3[iParam4 /*12*/], (*uParam6)[iParam5], &Var0, uParam9);
	func_113(iParam2);
	if (func_103((iParam3[iParam4 /*12*/])->f_1, 1) && (iParam3[iParam4 /*12*/])->f_1 == 1)
	{
		func_114(uParam0, iParam2, iParam3[iParam4 /*12*/], uParam9);
		return func_115(uParam0, iParam2, iParam3, iParam4, iParam5, uParam7, uParam8, uParam9, iParam10, iParam11, bParam12);
	}
	return 0;
}

bool func_75()
{
	if (func_25())
	{
		return false;
	}
	return true;
}

void func_76(bool bParam0)
{
	if (!bParam0)
	{
		func_116(19);
	}
	else
	{
		func_117(19);
	}
}

void func_77(bool bParam0)
{
	if (!bParam0)
	{
		func_116(18);
	}
	else
	{
		func_117(18);
	}
}

void func_78(bool bParam0)
{
	if (!bParam0)
	{
		func_116(25);
	}
	else
	{
		func_117(25);
	}
}

void func_79(bool bParam0)
{
	if (bParam0)
	{
		func_117(129);
	}
	else
	{
		func_116(129);
	}
}

void func_80(vector3 vParam0, var uParam3, bool bParam4)
{
	if (func_118(vParam0, uParam3))
	{
		func_119(1, bParam4);
	}
}

int func_81(int iParam0)
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

void func_82(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_83(var uParam0)
{
	if (!func_120(uParam0))
	{
		return false;
	}
	if (uParam0->f_8 != 3)
	{
		return false;
	}
	return true;
}

bool func_84(var uParam0)
{
	if (!func_120(uParam0))
	{
		return false;
	}
	return uParam0->f_4 == 10;
}

void func_85(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_121(49);
	}
	if (bParam1)
	{
		func_121(51);
	}
	func_122(48);
	func_121(52);
	func_121(3);
}

bool func_86(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

void func_87(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

void func_88(var uParam0)
{
	*uParam0 = 255;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = -1;
}

void func_89(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_90(int iParam0)
{
	int iVar0;

	*iParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iParam0->f_1[iVar0] = -1;
		iVar0++;
	}
	iParam0->f_6 = -1;
	iParam0->f_7 = 0;
	iParam0->f_8 = 255;
	iParam0->f_9 = { 0f, 0f, 0f };
	func_89(&(iParam0->f_12));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_123(&(iParam0->f_14[iVar0 /*21*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_124(&(iParam0->f_99[iVar0 /*20*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_125(&(iParam0->f_500[iVar0 /*13*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_125(&(iParam0->f_761[iVar0 /*13*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_125(&(iParam0->f_892[iVar0 /*13*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_125(&(iParam0->f_1023[iVar0 /*13*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_126(&(iParam0->f_1089[iVar0 /*14*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 24)
	{
		func_127(&(iParam0->f_1104[iVar0 /*15*/]));
		iVar0++;
	}
	iParam0->f_1465 = 0;
	iParam0->f_1466 = 0;
	func_89(&(iParam0->f_1467));
	func_89(&(iParam0->f_1469));
	func_89(&(iParam0->f_1471));
	func_89(&(iParam0->f_1473));
	func_128(&(iParam0->f_1475));
	iParam0->f_1478 = 0;
	iParam0->f_1479 = 0;
	iParam0->f_1480 = -1;
	func_89(&(iParam0->f_1481));
	func_129(&(iParam0->f_1483));
}

void func_91(int iParam0)
{
	Global_1048585 = iParam0;
}

void func_92(var uParam0)
{
	int iVar0;

	func_130(uParam0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_131(&(uParam0->f_1546[iVar0 /*31*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_131(&(uParam0->f_1671[iVar0 /*31*/]));
		iVar0++;
	}
}

bool func_93(var uParam0)
{
	if (!func_103(uParam0->f_4, 1))
	{
		return false;
	}
	if (uParam0->f_2 != 3)
	{
		return false;
	}
	func_132(&(uParam0->f_29), 0, 1);
	return true;
}

bool func_94(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = true;
	bVar1 = NETWORK::_0x31DAD2CD6D49546E(SCRIPTS::GET_ID_OF_THIS_THREAD());
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (bVar1)
		{
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)))
			{
			}
			else
			{
				Jump @62; //curOff = 50
				if (iVar2 != 0)
				{
				}
				else
				{
					if (!func_133((*uParam3)[iVar2], iParam1, uParam4))
					{
					}
					else if (func_134(uParam0, iParam1, iParam2[iVar2 /*12*/]) && (iParam2[iVar2 /*12*/])->f_4 > 1)
					{
					}
					else
					{
						bVar0 = false;
					}
					else
					{
						iVar2++;
					}
				}
				if (!bVar0)
				{
					return false;
				}
				return true;
			}
		}
	}
}

bool func_95(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (*iParam2 != *uParam3)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_135(&(uParam0->f_7[iVar0 /*5*/]));
		iVar0++;
	}
	if (!NETWORK::_0x31DAD2CD6D49546E(SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		uParam0->f_7[0 /*5*/] = PLAYER::PLAYER_ID();
		uParam0->f_7[0 /*5*/].f_2 = (*uParam3)[0];
		if (func_136(uParam0->f_7[0 /*5*/], iParam2[0 /*12*/], uParam4))
		{
			func_82(&(uParam0->f_7[0 /*5*/].f_1), 1);
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (iVar1 >= 4)
		{
		}
		else
		{
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
			}
			else if (!func_133((*uParam3)[iVar0], iParam1, uParam4))
			{
			}
			else if ((iParam2[iVar0 /*12*/])->f_4 <= 1 || (iParam2[iVar0 /*12*/])->f_4 > 2)
			{
			}
			else
			{
				uParam0->f_7[iVar1 /*5*/] = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
				if (func_136(uParam0->f_7[iVar1 /*5*/], iParam2[iVar0 /*12*/], uParam4))
				{
					func_82(&(uParam0->f_7[iVar1 /*5*/].f_1), 1);
				}
				iVar1++;
			}
			iVar0++;
		}
	}
	iVar2 = func_137(uParam0->f_4.f_2);
	if (iVar1 > 1)
	{
		func_138(&(uParam0->f_7), uParam4->f_1621[iVar2 /*3*/]);
	}
	return true;
}

bool func_96(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam0->f_7[iVar0 /*5*/] == 255)
		{
		}
		else
		{
			uParam0->f_7[iVar0 /*5*/].f_3 = func_139(PLAYER::GET_PLAYER_PED(uParam0->f_7[iVar0 /*5*/]), uParam1, &iParam2);
		}
		iVar0++;
	}
	return true;
}

bool func_97(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	int iVar0;
	var uVar1[4];
	int iVar6;

	if (!func_35(uParam2->f_18, 256))
	{
		func_140(uParam0, uParam2, iParam4, &uVar1);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iVar6 = uVar1[iVar0];
			if (iVar6 < 0 || iVar6 >= 4)
			{
			}
			else
			{
				uParam0->f_7[iVar6 /*5*/].f_4 = iVar0;
			}
			iVar0++;
		}
	}
	if (func_141(uParam2))
	{
		if (!func_143(uParam3, func_142(iParam1)))
		{
			func_144(uParam3, func_142(iParam1), 1, 0, 0);
		}
	}
	return true;
}

bool func_98(var uParam0, int iParam1, int iParam2, var uParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = func_35(uParam3->f_18, 1024);
	iVar1 = 0;
	while (iVar1 < *iParam2)
	{
		iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
		{
		}
		else if (!func_134(uParam0, iParam1, iParam2[iVar1 /*12*/]))
		{
		}
		else if (!bVar0)
		{
			if (func_35((iParam2[iVar1 /*12*/])->f_5, 2))
			{
			}
			else if ((iParam2[iVar1 /*12*/])->f_4 < 8)
			{
				return false;
			}
			iVar1++;
			iVar3 = func_36(&(uParam0->f_29), 0, 1);
			iVar4 = func_145((uParam3->f_20 - iVar3), 350);
			func_15(&(uParam0->f_31), 0, 1);
			func_146(&(uParam0->f_31), iVar4);
			return true;
		}
	}
}

bool func_99(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5)
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
	int iVar9;
	int iVar10;

	func_147(uParam0, uParam3, iParam1, iParam2, uParam4, &iVar0, &iVar1, &iVar3, &iVar2, &iVar5, &iVar4, &iVar6, &iVar7);
	iVar8 = ((iVar7 + iVar6) + iVar4);
	if (func_143(uParam3, func_142(iParam1)))
	{
		if (!func_86(uParam0->f_1, 1))
		{
			if (iVar3 == (iVar0 - iVar8))
			{
				if (iVar3 > 0)
				{
					func_148(uParam3, func_142(iParam1));
				}
				func_26(&(uParam0->f_1), 1);
			}
		}
		else if (!func_86(uParam0->f_1, 2))
		{
			if (iVar1 == 0)
			{
				iVar9 = func_142(iParam1);
				if (func_143(uParam3, iVar9))
				{
					iVar10 = func_149(uParam3, iVar9);
					if (!func_150(uParam3[iVar10 /*36*/]))
					{
						func_151(uParam3, iVar9, -1);
					}
				}
				func_26(&(uParam0->f_1), 2);
			}
		}
	}
	if (!func_86(uParam0->f_1, 4) && func_86(uParam0->f_1, 0))
	{
		func_26(&(uParam0->f_1), 4);
		func_152(iParam5, uParam0, iParam1, 1);
	}
	if (!func_86(uParam0->f_1, 5) && (iVar8 + iVar5) >= iVar0)
	{
		func_26(&(uParam0->f_1), 5);
		func_152(iParam5, uParam0, iParam1, 2);
	}
	if (!func_86(uParam0->f_1, 6) && (iVar8 > 0 || iVar5 >= iVar0))
	{
		func_26(&(uParam0->f_1), 6);
		func_152(iParam5, uParam0, iParam1, 3);
	}
	if (!func_86(uParam0->f_1, 0))
	{
		if (((iVar2 == iVar0 || func_86(uParam0->f_1, 6)) || iVar8 > 0) || iVar5 >= iVar0)
		{
			func_26(&(uParam0->f_1), 0);
			func_152(iParam5, uParam0, iParam1, 0);
		}
	}
	if (iVar0 <= 0)
	{
		return true;
	}
	else if (iVar7 == iVar0)
	{
		return true;
	}
	return false;
}

bool func_100(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
		}
		else if (func_134(uParam0, iParam1, iParam2[iVar0 /*12*/]))
		{
			return false;
		}
		iVar0++;
	}
	func_32(uParam0);
	return true;
}

bool func_101(int iParam0, var uParam1, int iParam2, var uParam3)
{
	vector3 vVar0;
	float fVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<8> Var8;

	if (uParam3->f_2)
	{
		return true;
	}
	if (!MISC::IS_BIT_SET(iParam2, iParam0))
	{
		uParam3->f_2 = 1;
		return true;
	}
	vVar0 = { uParam1->f_1621[iParam0 /*3*/] };
	if (func_153(vVar0))
	{
		uParam3->f_2 = 1;
		return true;
	}
	fVar3 = 25f;
	if (!VOLUME::_0xA4A4359320345B34(uParam3->f_1))
	{
		if (VOLUME::_0x397769175A7DBB30(vVar0, fVar3, 0, 0, 0))
		{
			uParam3->f_2 = 1;
			return true;
		}
		uVar4 = func_154(vVar0, 0f, 0f, 0f, fVar3, fVar3, fVar3, joaat("VOLSPHERE"), 0, 8);
		iVar5 = SCRIPTS::COUNT_PLAYER_BITS(&uVar4);
		if (iVar5 > 0)
		{
			iVar7 = 0;
			iVar7 = 0;
			while (iVar7 <= 31)
			{
				if (SCRIPTS::_0x72B2E00C9BAC6789(&uVar4, iVar7))
				{
					iVar6 = PLAYER::INT_TO_PLAYERINDEX(iVar7);
					if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar6) && iVar6 != PLAYER::PLAYER_ID()) && !GANG::_0x81FB74C83C2ED69F(iVar6))
					{
						uParam3->f_2 = 1;
						return true;
					}
				}
				iVar7++;
			}
		}
		Var8 = { vVar0 };
		Var8.f_4 = fVar3;
		Var8.f_6 = MISC::GET_HASH_KEY("net_ugc_end_flow_transition_online");
		Var8.f_7 = iParam0;
		Var8.f_5 = 0;
		uParam3->f_1 = VOLUME::_0x183C0B6CFEFFCAE4(&Var8);
	}
	switch (VOLUME::_0xB33A604345F58202(uParam3->f_1))
	{
		case 3:
			*uParam3 = VOLUME::_0x351D71B8B72B858B(uParam3->f_1);
			return true;
		case 4:
			uParam3->f_1 = 0;
			uParam3->f_2 = 1;
			return true;
		case 0:
			uParam3->f_1 = 0;
			uParam3->f_2 = 1;
			return true;
		default:
			break;
	}
	return false;
}

int func_102(int iParam0, int iParam1, int iParam2)
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

bool func_103(vector3 vParam0, bool bParam3)
{
	if (vParam0.x == -1)
	{
		return false;
	}
	if (vParam0.y < 0 || vParam0.y >= 8)
	{
		return false;
	}
	if (!bParam3)
	{
		if (vParam0.z < 0 || vParam0.z >= 8)
		{
			return false;
		}
	}
	return true;
}

bool func_104(var uParam0)
{
	if (!func_103(uParam0->f_4, 1))
	{
		return false;
	}
	if (uParam0->f_2 == 3)
	{
		return true;
	}
	if (*uParam0 > 0)
	{
		return true;
	}
	return false;
}

bool func_105(vector3 vParam0, vector3 vParam3)
{
	if (vParam0.x != vParam3.x)
	{
		return false;
	}
	if (vParam0.y != vParam3.y)
	{
		return false;
	}
	if (vParam0.z != vParam3.z)
	{
		return false;
	}
	return true;
}

void func_106(int iParam0)
{
	func_155(&(Global_1298378.f_156), iParam0);
}

void func_107(int iParam0)
{
	func_155(&(Global_1298536[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*87*/].f_86), iParam0);
}

bool func_108(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_109()
{
	return Global_1102219.f_3672;
}

void func_110()
{
	if (Global_3407872.f_226 != 2)
	{
		return;
	}
	func_156(Global_3407872.f_227[0 /*2270*/].f_2056[0 /*26*/]);
	func_107(1024);
}

void func_111()
{
	if (!func_25())
	{
		return;
	}
	func_107(64);
}

void func_112(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (iParam1 < 0 || iParam1 >= 8)
	{
		return;
	}
	if (iParam3 < 0 || iParam3 >= iParam1)
	{
		return;
	}
	if (func_157(uParam2))
	{
		return;
	}
	if (!func_158(uParam0, uParam2, iParam3, uParam4, uParam5))
	{
		return;
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < iParam1)
	{
		vVar2 = { (uParam0[iVar1 /*33*/])->f_4 };
		if (!func_103(vVar2, 1))
		{
		}
		else if ((*uParam0)[iVar1 /*33*/] > 4)
		{
		}
		else
		{
			switch (vVar2.x)
			{
				case 0:
					if (!func_133(iParam3, iVar1, &((uParam4[vVar2.y /*2418*/])->f_8)))
					{
					}
					else
					{
						Jump @212; //curOff = 182
						if (!func_133(iParam3, iVar1, uParam5[vVar2.y /*2270*/]))
						{
						}
						else if (iVar0 == -1)
						{
							iVar0 = iVar1;
						}
						else if (iVar1 == iParam3 && iVar0 != iParam3)
						{
							iVar0 = iVar1;
						}
					}
					iVar1++;
					if (iVar0 == -1)
					{
					}
					else if (iVar0 >= 0 && iVar0 < *uParam0)
					{
						if (!func_105(uParam2->f_1, (uParam0[iVar0 /*33*/])->f_4))
						{
							uParam2->f_1 = { (uParam0[iVar0 /*33*/])->f_4 };
						}
						if (*uParam2 != iVar0)
						{
							*uParam2 = iVar0;
						}
					}
					default:
						break;
			}
		}
	}
}

void func_113(int* iParam0)
{
	int iVar0;

	iVar0 = func_159();
	if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		iParam0->f_8 = iVar0;
	}
}

void func_114(var uParam0, int* iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;

	iVar0 = uParam2->f_8;
	vVar2 = { uParam2->f_1 };
	while (iVar5 < 5)
	{
		switch (uParam2->f_8)
		{
			case 0:
				if (func_160(iParam1, uParam2, uParam3))
				{
					iVar0 = 1;
				}
				break;
			case 1:
				iVar1 = func_161(uParam0[*uParam2 /*33*/], uParam2, uParam3[vVar2.y /*2270*/]);
				if (iVar1 == 1)
				{
					iVar0 = 2;
				}
				else if (iVar1 == 2)
				{
					iVar0 = 0;
				}
				break;
			case 2:
				iVar1 = func_162(uParam0[*uParam2 /*33*/], iParam1, uParam2, uParam3[vVar2.y /*2270*/]);
				if (iVar1 == 1)
				{
					iVar0 = 3;
				}
				else if (iVar1 == 2)
				{
					iVar0 = 4;
				}
				break;
			case 3:
				if (!func_163(uParam0[*uParam2 /*33*/], iParam1, uParam2, uParam3[vVar2.y /*2270*/]))
				{
					iVar0 = 4;
				}
				break;
			case 4:
				func_164(iParam1, uParam2);
				iVar0 = 0;
				break;
		}
		if (iVar0 != uParam2->f_8)
		{
			uParam2->f_8 = iVar0;
			iVar5++;
		}
	else
	{
		}
	else
	{
		}
	}
}

int func_115(var uParam0, int* iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;

	if (iParam3 < 0 || iParam3 >= *iParam2)
	{
		return 0;
	}
	if (iParam4 < 0 || iParam4 >= *iParam2)
	{
		return 0;
	}
	iVar0 = (iParam2[iParam3 /*12*/])->f_4;
	while (iVar1 < 17)
	{
		vVar2 = { (iParam2[iParam3 /*12*/])->f_1 };
		iVar5 = (*iParam2)[iParam3 /*12*/];
		if (func_103(vVar2, 1))
		{
			func_165(uParam0[iVar5 /*33*/], iParam1, iParam2[iParam3 /*12*/], uParam7[vVar2.y /*2270*/], iParam9);
		}
		switch ((iParam2[iParam3 /*12*/])->f_4)
		{
			case 0:
				if (func_166(uParam0, iParam2[iParam3 /*12*/], iParam1))
				{
					iVar0 = 1;
				}
				break;
			case 1:
				if (func_167(iParam2[iParam3 /*12*/], uParam7[vVar2.y /*2270*/], iParam8))
				{
					iVar0 = 16;
				}
				else
				{
					iVar0 = 2;
				}
				break;
			case 2:
				if (func_168(uParam0[iVar5 /*33*/], iParam1, uParam7[vVar2.y /*2270*/], iParam8, iParam9))
				{
					iVar0 = 3;
				}
				break;
			case 3:
				if (func_169())
				{
					iVar0 = 4;
				}
				break;
			case 4:
				if (func_170(iParam1, iParam2[iParam3 /*12*/], uParam7[vVar2.y /*2270*/]))
				{
					iVar0 = 6;
				}
				break;
			case 6:
				if (func_171(iParam1, iParam2[iParam3 /*12*/]))
				{
					iVar0 = 5;
				}
				break;
			case 5:
				if (func_172(iParam1, iParam2[iParam3 /*12*/], uParam7[vVar2.y /*2270*/]))
				{
					iVar0 = 7;
				}
				break;
			case 7:
				iVar6 = func_173(iParam1, iParam2[iParam3 /*12*/], uParam7[vVar2.y /*2270*/]);
				if (iVar6 == 1)
				{
					iVar0 = 8;
				}
				else if (iVar6 == 2)
				{
					iVar0 = 11;
				}
				break;
			case 8:
				if (func_174(uParam0[iVar5 /*33*/]))
				{
					iVar0 = 9;
				}
				break;
			case 9:
				if (func_175(uParam0[iVar5 /*33*/], iParam1, iParam2, iParam3, uParam7[vVar2.y /*2270*/], iParam8, iParam9))
				{
					iVar0 = 10;
				}
				break;
			case 10:
				if (func_176(uParam0[iVar5 /*33*/], iParam1, iParam2[iParam3 /*12*/], uParam5, uParam6, uParam7[vVar2.y /*2270*/], iParam8))
				{
					iVar0 = 11;
				}
				break;
			case 11:
				iVar6 = func_177(uParam0[iVar5 /*33*/], iParam1, iParam2[iParam3 /*12*/]);
				if (iVar6 == 1)
				{
					iVar0 = 13;
				}
				else if (iVar6 == 2)
				{
					iVar0 = 12;
				}
				break;
			case 12:
				if (func_178(uParam0[iVar5 /*33*/], uParam7[vVar2.y /*2270*/]))
				{
					iVar0 = 13;
				}
				break;
			case 13:
				if (func_179(iParam1))
				{
					iVar0 = 14;
				}
				break;
			case 14:
				func_180(uParam0[iVar5 /*33*/], iParam1, uParam7[vVar2.y /*2270*/], iParam8, iParam9);
				iVar0 = 15;
				break;
			case 15:
				if (func_181(iParam1, iParam2[iParam3 /*12*/], uParam7[vVar2.y /*2270*/], 0, bParam10))
				{
					iVar0 = 16;
				}
				break;
			case 16:
				if (func_182(uParam0[iVar5 /*33*/], iParam1, iParam2[iParam3 /*12*/], uParam7[vVar2.y /*2270*/]))
				{
					return 1;
				}
				break;
		}
		if (iVar0 != (iParam2[iParam3 /*12*/])->f_4)
		{
			(iParam2[iParam3 /*12*/])->f_4 = iVar0;
			iVar1++;
		}
	else
	{
		}
	else
	{
		}
	}
	return 0;
}

int func_116(int iParam0)
{
	if (func_183(&(Global_1102219.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_117(int iParam0)
{
	if (func_184(&(Global_1102219.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_118(vector3 vParam0, var uParam3)
{
	if (func_153(vParam0))
	{
		return false;
	}
	if (func_81(255) == 4)
	{
		return false;
	}
	if (func_69(4, 255))
	{
	}
	func_117(4);
	func_185(&(Global_1102219.f_3879));
	Global_1102219.f_3879.f_6 = { vParam0 };
	Global_1102219.f_3879 = uParam3;
	Global_1102219.f_3879.f_5 = 1;
	Global_1102219.f_26.f_3341 = 0;
	Global_1102219.f_26.f_3342 = 0;
	func_186(Global_1102219.f_3879, 36);
	return true;
}

void func_119(bool bParam0, bool bParam1)
{
	if (func_81(255) == 4)
	{
		return;
	}
	if (func_153(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_116(0);
	}
	else
	{
		if (bParam1)
		{
			func_187(0, 0, 0, 1);
		}
		func_117(0);
		func_188(&(Global_1102219.f_3849));
		Global_1102219.f_3849 = 0f;
		Global_1102219.f_3849.f_5 = 1;
		Global_1102219.f_3849.f_16 = 0;
		Global_1102219.f_3849.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102219.f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219.f_3849.f_17 = { Global_1901947.f_50.f_1, Global_1901947.f_50.f_1, Global_1901947.f_50.f_1 };
		Global_1102219.f_3849.f_17.f_9 = joaat("VOLSPHERE");
		func_189(&(Global_1102219.f_3888));
		Global_1102219.f_3888.f_6 = { Global_1102219.f_3849.f_17.f_6 };
		Global_1102219.f_3888 = Global_1102219.f_3849;
		Global_1102219.f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102219.f_26.f_3341 = 0;
			Global_1102219.f_26.f_3342 = 0;
		}
	}
	func_190(Global_1102219.f_3849, 36);
	func_191(Global_1102219.f_3888, 36);
}

bool func_120(var uParam0)
{
	if (*uParam0 == -1)
	{
		return false;
	}
	if (!func_103(uParam0->f_1, 1))
	{
		return false;
	}
	return true;
}

void func_121(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_192(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_1904087.f_496[iVar0]), iVar1);
}

void func_122(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_192(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_1904087.f_496[iVar0]), iVar1);
}

void func_123(var uParam0)
{
	*uParam0 = -1;
	func_124(&(uParam0->f_1));
}

void func_124(var uParam0)
{
	func_125(uParam0);
	func_193(&(uParam0->f_13));
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
}

void func_125(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	func_194(&(uParam0->f_5));
	uParam0->f_10 = 0;
	func_89(&(uParam0->f_11));
}

void func_126(var uParam0)
{
	func_125(uParam0);
	uParam0->f_13 = 0;
}

void func_127(var uParam0)
{
	func_125(uParam0);
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
}

void func_128(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
}

void func_129(var uParam0)
{
	int iVar0;

	*uParam0 = 1;
	func_128(&(uParam0->f_1));
	uParam0->f_4 = 0;
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0f;
	uParam0->f_16 = 0f;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_195(&(uParam0->f_17[iVar0 /*12*/]));
		iVar0++;
	}
	uParam0->f_186 = 15f;
	uParam0->f_187 = 20f;
	uParam0->f_191 = 0;
	StringCopy(&(uParam0->f_192), "", 128);
	uParam0->f_208 = 0;
	StringCopy(&(uParam0->f_209), "", 64);
	StringCopy(&(uParam0->f_217), "", 64);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_196(&(uParam0->f_225[iVar0 /*9*/]));
		iVar0++;
	}
	uParam0->f_262 = 0;
	uParam0->f_263 = 0;
	uParam0->f_264 = 0;
	uParam0->f_265 = { 0f, 0f, 0f };
	uParam0->f_268 = { 0f, 0f, 0f };
	uParam0->f_271 = 0f;
	uParam0->f_272 = 0;
	uParam0->f_273 = 0f;
	uParam0->f_274 = 0;
	uParam0->f_275 = 0;
	func_197(&(uParam0->f_276));
	uParam0->f_292 = 1000;
}

void func_130(var uParam0)
{
	func_198(uParam0);
	func_199(&(uParam0->f_524));
	func_200(&(uParam0->f_550));
	uParam0->f_1539 = 0;
	uParam0->f_1540 = 0;
	uParam0->f_1541 = 0;
	uParam0->f_1542 = 0;
	uParam0->f_1543 = 0;
	uParam0->f_1544 = 0;
	uParam0->f_1545 = 0;
}

void func_131(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = 0;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = -1;
	uParam0->f_9 = 0;
	uParam0->f_10 = { 0f, 0f, 0f };
	uParam0->f_13 = -1;
	uParam0->f_14 = 255;
	func_89(&(uParam0->f_15));
	func_89(&(uParam0->f_17));
	func_89(&(uParam0->f_19));
	uParam0->f_21 = 0;
	uParam0->f_22 = 0;
	uParam0->f_23 = 0;
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_26 = -1;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	func_201(&(uParam0->f_29));
}

void func_132(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

bool func_133(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 < 0 || iParam0 >= 8)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 8)
	{
		return false;
	}
	if (iParam1 == iParam0)
	{
		return true;
	}
	if (MISC::IS_BIT_SET(uParam2->f_19, iParam0))
	{
		return true;
	}
	return false;
}

bool func_134(var uParam0, int iParam1, var uParam2)
{
	if (!func_202(uParam0))
	{
		return false;
	}
	if (!func_120(uParam2))
	{
		return false;
	}
	if (*uParam2 != iParam1)
	{
		return false;
	}
	if (!func_105(uParam0->f_4, uParam2->f_1))
	{
		return false;
	}
	return true;
}

void func_135(var uParam0)
{
	func_88(uParam0);
}

bool func_136(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_137(uParam1->f_1.f_2);
	if (!func_203(PLAYER::GET_PLAYER_PED(iParam0), uParam2->f_1621[iVar0 /*3*/], BUILTIN::TO_FLOAT(uParam2->f_1)))
	{
		return false;
	}
	return true;
}

int func_137(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 8)
	{
		iParam0 = 0;
	}
	return iParam0;
}

void func_138(var uParam0, vector3 vParam1)
{
	struct<6> Var0;
	int iVar25;
	vector3 vVar26;

	Var0 = 4;
	Var0.f_1.f_1 = 255;
	Var0.f_1.f_1.f_2 = -1;
	Var0.f_1.f_1.f_3 = -1;
	Var0.f_1.f_1.f_4 = -1;
	Var0.f_1.f_6.f_1 = 255;
	Var0.f_1.f_6.f_1.f_2 = -1;
	Var0.f_1.f_6.f_1.f_3 = -1;
	Var0.f_1.f_6.f_1.f_4 = -1;
	Var0.f_1.f_6.f_6.f_1 = 255;
	Var0.f_1.f_6.f_6.f_1.f_2 = -1;
	Var0.f_1.f_6.f_6.f_1.f_3 = -1;
	Var0.f_1.f_6.f_6.f_1.f_4 = -1;
	Var0.f_1.f_6.f_6.f_6.f_1 = 255;
	Var0.f_1.f_6.f_6.f_6.f_1.f_2 = -1;
	Var0.f_1.f_6.f_6.f_6.f_1.f_3 = -1;
	Var0.f_1.f_6.f_6.f_6.f_1.f_4 = -1;
	iVar25 = 0;
	while (iVar25 < *uParam0)
	{
		Var0[iVar25 /*6*/].f_1 = { *(uParam0[iVar25 /*5*/]) };
		Var0[iVar25 /*6*/] = 99999.9f;
		if ((*uParam0)[iVar25 /*5*/] == 255)
		{
		}
		else
		{
			vVar26 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED((*uParam0)[iVar25 /*5*/]), false, false) };
			Var0[iVar25 /*6*/] = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar26, vParam1, true);
		}
		iVar25++;
	}
	NETWORK::_0x7E300B5B86AB1D1A(&Var0, Var0, 6, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	iVar25 = 0;
	while (iVar25 < *uParam0)
	{
		MISC::_COPY_MEMORY(uParam0[iVar25 /*5*/], &(Var0[iVar25 /*6*/].f_1), 5);
		iVar25++;
	}
}

int func_139(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;

	fVar1 = -1f;
	iVar4 = 0;
	switch (uParam1->f_1646)
	{
		case 1:
			iVar5 = 0;
			while (iVar5 < 2)
			{
				fVar6 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), uParam1->f_24[0 /*80*/].f_11[iVar5 /*34*/]);
				if (fVar6 < fVar1 || fVar1 == -1f)
				{
					fVar6 = fVar1;
					iVar0 = iVar5;
				}
				iVar5++;
			}
			return iVar0;
		case 2:
			iVar5 = 0;
			while (iVar5 < 2)
			{
				if (func_204(*iParam2, uParam1->f_1647[iVar5], -1566524474, &uVar2, &uVar3, &iVar4) != 1)
				{
				}
				else
				{
					iVar7 = MISC::_0xF18AF483DF70BBDE(uVar2);
					if (!VOLUME::_DOES_VOLUME_EXIST(iVar7))
					{
					}
					else if (ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iVar7, false, 0))
					{
						func_205(iVar7);
						return iVar5;
					}
					else
					{
						func_205(iVar7);
					}
				}
				iVar5++;
			}
			break;
	}
	return 0;
}

void func_140(var uParam0, var uParam1, int iParam2, var uParam3)
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

	iVar1 = 0;
	while (iVar1 < 4)
	{
		(*uParam3)[iVar1] = -1;
		if (uParam0->f_7[iVar1 /*5*/] != 255)
		{
			iVar0++;
		}
		iVar1++;
	}
	if (uParam1->f_16 > iVar0)
	{
	}
	iVar2 = uParam1->f_17;
	if (iVar2 <= 0)
	{
		iVar2 = 3;
	}
	iVar2 = func_102(iVar2, 0, iVar0);
	iVar3 = 0;
	iVar4 = 0;
	while (iVar4 < iVar2)
	{
		bVar6 = iVar4 >= uParam1->f_16;
		iVar7 = uParam1->f_24[iVar4 /*80*/];
		iVar8 = -1;
		while (iVar8 == -1)
		{
			switch (iVar7)
			{
				case 0:
					iVar8 = func_206(&(uParam0->f_7), iVar3, bVar6);
					break;
				case 1:
					iVar8 = func_207(&(uParam0->f_7), iVar3, bVar6, uParam0->f_28);
					break;
				case 3:
					iVar8 = func_208(&(uParam0->f_7), iVar3, bVar6);
					break;
				case 2:
					iVar8 = func_209(&(uParam0->f_7), iVar3, bVar6, &(uParam1->f_24[iVar4 /*80*/]));
					break;
				case 4:
					iVar8 = func_210(&(uParam0->f_7), iVar3, bVar6, &(uParam1->f_24[iVar4 /*80*/]), iParam2);
					break;
				case 5:
					iVar8 = func_211(&(uParam0->f_7), iVar3, bVar6);
					break;
				case 6:
					iVar8 = func_212(&(uParam0->f_7), iVar3, bVar6, &(uParam1->f_24[iVar4 /*80*/]));
					break;
			}
			if (iVar8 != -1 && uParam0->f_7[iVar8 /*5*/] != 255)
			{
				(*uParam3)[iVar4] = iVar8;
				iVar5++;
				MISC::SET_BIT(&iVar3, iVar8);
				Jump @393; //curOff = 369
			}
			else if (iVar7 != 0)
			{
				iVar7 = 0;
			}
		else
		{
			}
		else
		{
			}
		}
		iVar4++;
	}
	if (iVar5 < uParam1->f_16)
	{
	}
}

bool func_141(var uParam0)
{
	if (func_35(uParam0->f_18, 65536))
	{
		return true;
	}
	return false;
}

int func_142(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 4;
		case 2:
			return 5;
		case 3:
			return 6;
		case 4:
			return 7;
		case 5:
			return 8;
		case 6:
			return 9;
		case 7:
			return 10;
		default:
			break;
	}
	return 0;
}

bool func_143(var uParam0, int iParam1)
{
	return func_149(uParam0, iParam1) > -1;
}

void func_144(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = func_213(uParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	(*uParam0)[iVar0 /*36*/] = iParam1;
	if (bParam2)
	{
		MISC::SET_BIT(&((uParam0[iVar0 /*36*/])->f_1), 6);
	}
	if (bParam3)
	{
		MISC::SET_BIT(&((uParam0[iVar0 /*36*/])->f_1), 7);
	}
	if (bParam4)
	{
		MISC::SET_BIT(&((uParam0[iVar0 /*36*/])->f_1), 8);
	}
}

int func_145(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_146(var uParam0, int iParam1)
{
	*uParam0 = NETWORK::GET_TIME_OFFSET(*uParam0, iParam1);
}

void func_147(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar0 = func_143(uParam1, func_142(iParam2));
	bVar1 = NETWORK::_0x31DAD2CD6D49546E(SCRIPTS::GET_ID_OF_THIS_THREAD());
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (bVar1)
		{
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)))
			{
			}
			else
			{
				Jump @73; //curOff = 61
				if (iVar2 != 0)
				{
				}
				else
				{
					if (!func_134(uParam0, iParam2, iParam3[iVar2 /*12*/]))
					{
					}
					else
					{
						*iParam5++;
						bVar3 = false;
						if (func_35((iParam3[iVar2 /*12*/])->f_5, 2))
						{
							bVar3 = true;
						}
						if (func_84(iParam3[iVar2 /*12*/]))
						{
							*iParam6++;
							bVar3 = true;
							if (bVar0 && func_214(uParam4[iVar2 /*38*/], func_142(iParam2)))
							{
								*iParam7++;
							}
							if (func_35((iParam3[iVar2 /*12*/])->f_5, 1))
							{
								*iParam10++;
							}
						}
						else if ((iParam3[iVar2 /*12*/])->f_4 == 12)
						{
							*iParam9++;
							bVar3 = true;
						}
						else if (func_215(iParam3[iVar2 /*12*/]))
						{
							*iParam12++;
							bVar3 = true;
						}
						else if (func_216(iParam3[iVar2 /*12*/]))
						{
							*iParam11++;
							bVar3 = true;
						}
						if (bVar3)
						{
							*iParam8++;
						}
					}
					iVar2++;
				}
			}
		}
	}
}

void func_148(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_149(uParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	MISC::SET_BIT(&((uParam0[iVar0 /*36*/])->f_1), 0);
}

int func_149(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if ((*uParam0)[iVar0 /*36*/] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_150(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_1, 1);
}

void func_151(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_149(uParam0, iParam1);
	}
	if (iParam2 == -1)
	{
		return;
	}
	MISC::SET_BIT(&((uParam0[iParam2 /*36*/])->f_1), 4);
}

void func_152(int iParam0, var uParam1, int iParam2, int iParam3)
{
	Stack.Push(uParam1);
	Stack.Push(iParam2);
	Stack.Push(iParam3);
	Call_Loc(iParam0);
}

bool func_153(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

var func_154(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, var uParam11)
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
	if (func_217() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_218());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_218());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_218());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_219(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_220(iVar2))
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
				if (iVar9 & 8192 != 0 && func_81(iVar2) != 1)
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
					if (!func_221(iVar10))
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

void func_155(var uParam0, int iParam1)
{
	func_222(uParam0, iParam1);
}

void func_156(struct<16> Param0)
{
	Global_1298378.f_140 = { Param0 };
}

bool func_157(var uParam0)
{
	if (!func_120(uParam0))
	{
		return false;
	}
	if (uParam0->f_4 == 0)
	{
		return false;
	}
	return true;
}

bool func_158(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4)
{
	vector3 vVar0;

	if (!func_103(uParam1->f_1, 1))
	{
		return true;
	}
	else if (*uParam1 < 0 || *uParam1 >= *uParam0)
	{
		return true;
	}
	else if (((iParam2 >= 0 && iParam2 < *uParam0) && iParam2 != *uParam1) && func_103((uParam0[iParam2 /*33*/])->f_4, 1))
	{
		return true;
	}
	else if (!func_105(uParam1->f_1, (uParam0[*uParam1 /*33*/])->f_4))
	{
		return true;
	}
	else
	{
		vVar0 = { uParam1->f_1 };
		switch (vVar0.x)
		{
			case 0:
				if (vVar0.y >= *uParam3 || !func_133(iParam2, *uParam1, &((uParam3[vVar0.y /*2418*/])->f_8)))
				{
					return true;
				}
				break;
			case 1:
				if (vVar0.y >= *uParam4 || !func_133(iParam2, *uParam1, uParam4[vVar0.y /*2270*/]))
				{
					return true;
				}
				break;
		}
	}
	return false;
}

int func_159()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 255;
	iVar1 = func_223();
	if (func_224(iVar1))
	{
		return PLAYER::PLAYER_ID();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar1))
		{
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (PED::IS_PED_A_PLAYER(iVar2))
			{
				iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
			}
		}
	}
	return iVar0;
}

bool func_160(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;
	char cVar7[32];
	int iVar11;
	char cVar12[32];

	if (!func_225(uParam1))
	{
		return false;
	}
	iVar0 = uParam1->f_1.f_1;
	iVar1 = func_137(uParam1->f_1.f_2);
	if (!func_226(uParam2[iVar0 /*2270*/], 0))
	{
		return false;
	}
	iParam0->f_1483.f_192 = { (uParam2[iVar0 /*2270*/])->f_2056[iVar1 /*26*/] };
	func_227(&(iParam0->f_1483), 8192);
	func_228(&(iParam0->f_1483), 2);
	func_229(&(iParam0->f_1483.f_264), 1);
	func_227(&(iParam0->f_1483), 2);
	func_230(&(iParam0->f_1483.f_263), 4);
	func_230(&(iParam0->f_1483.f_263), 8388608);
	func_229(&(iParam0->f_1483.f_264), 2048);
	func_229(&(iParam0->f_1483.f_264), 1024);
	if (func_231(140))
	{
		func_230(&(iParam0->f_1483.f_263), 2097152);
	}
	if ((uParam2[iVar0 /*2270*/])->f_2267 > -1)
	{
		iParam0->f_1483.f_292 = (uParam2[iVar0 /*2270*/])->f_2267;
	}
	if (func_35((uParam2[iVar0 /*2270*/])->f_1650, 64))
	{
		func_26(iParam0, 12);
	}
	if (func_35((uParam2[iVar0 /*2270*/])->f_1650, 2))
	{
		vVar2 = { (uParam2[iVar0 /*2270*/])->f_1621[iVar1 /*3*/] };
		fVar5 = (uParam2[iVar0 /*2270*/])->f_2056[iVar1 /*26*/].f_16;
		func_232(&(iParam0->f_1483), vVar2, 0f, 0f, fVar5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam2[iVar0 /*2270*/])->f_2056[iVar1 /*26*/].f_17)))
	{
		func_233(&(iParam0->f_1483), &((uParam2[iVar0 /*2270*/])->f_2056[iVar1 /*26*/].f_17));
	}
	else
	{
		func_228(&(iParam0->f_1483), 1);
	}
	if ((uParam2[iVar0 /*2270*/])->f_2265 >= 0 && (uParam2[iVar0 /*2270*/])->f_2265 < 8)
	{
		iVar6 = (uParam2[iVar0 /*2270*/])->f_2265;
		cVar7 = { (uParam2[iVar0 /*2270*/])->f_2056[iVar6 /*26*/].f_17 };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar7))
		{
			func_234(&(iParam0->f_1483), &cVar7, 1);
		}
	}
	if ((uParam2[iVar0 /*2270*/])->f_2266 >= 0 && (uParam2[iVar0 /*2270*/])->f_2266 < 8)
	{
		iVar11 = (uParam2[iVar0 /*2270*/])->f_2266;
		cVar12 = { (uParam2[iVar0 /*2270*/])->f_2056[iVar11 /*26*/].f_17 };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar12))
		{
			func_234(&(iParam0->f_1483), &cVar12, 1);
		}
	}
	return true;
}

int func_161(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if (func_235(uParam1))
	{
		return 2;
	}
	if (func_236() != 0 && func_223() != func_237())
	{
		return 2;
	}
	if (uParam0->f_2 == 3 || uParam0->f_2 == 2)
	{
		return 1;
	}
	iVar0 = func_137(uParam1->f_9.f_2);
	if (func_238(PLAYER::PLAYER_PED_ID(), uParam2->f_1621[iVar0 /*3*/], 200f, 1, 1))
	{
		return 1;
	}
	return 0;
}

int func_162(var uParam0, int* iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = func_239(uParam0, iParam1, uParam2, uParam3);
	if (iVar0 == 2)
	{
		return 2;
	}
	iVar1 = func_137(uParam2->f_9.f_2);
	if (!func_240(&(iParam1->f_1483), &(uParam3->f_2056[iVar1 /*26*/]), 1, 1))
	{
		iVar0 = 0;
	}
	else if (func_35(uParam3->f_1650, 2))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iParam1->f_1483.f_208, uParam3->f_1621[iVar1 /*3*/], 0f, 0f, uParam3->f_2056[iVar1 /*26*/].f_16, 2);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_1483.f_208) || !ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(iParam1->f_1483.f_208, false))
	{
		iVar0 = 0;
	}
	else if (ANIMSCENE::_0x6F1F0B17109309DA(iParam1->f_1483.f_208, "P_BINOCULARS01x"))
	{
		STREAMING::REQUEST_MODEL(iLocal_13, false);
		if (!STREAMING::HAS_MODEL_LOADED(iLocal_13))
		{
			iVar0 = 0;
		}
	}
	if (iVar0 == 1)
	{
	}
	return iVar0;
}

bool func_163(var uParam0, int* iParam1, var uParam2, var uParam3)
{
	int iVar0;

	if (!func_241(uParam0, uParam2, uParam3))
	{
		return false;
	}
	iVar0 = func_137(uParam2->f_9.f_2);
	if (uParam2->f_4 < 10)
	{
		if (!func_240(&(iParam1->f_1483), &(uParam3->f_2056[iVar0 /*26*/]), 1, 1))
		{
			return false;
		}
	}
	return true;
}

void func_164(int* iParam0, var uParam1)
{
	func_242(iParam0, uParam1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_13);
	func_50(&(iParam0->f_1483));
	func_51(&(iParam0->f_1483));
}

void func_165(var uParam0, int* iParam1, var uParam2, var uParam3, int iParam4)
{
	func_243(iParam1, uParam2, uParam3);
	if (uParam2->f_4 >= 3 && uParam2->f_4 <= 11)
	{
		iParam1->f_1466 = func_244(uParam0, iParam1, uParam2, uParam3, iParam4);
	}
}

bool func_166(var uParam0, var uParam1, int* iParam2)
{
	if (!func_103(uParam1->f_1, 1))
	{
		return false;
	}
	if (*uParam1 == -1)
	{
		return false;
	}
	if (!func_105((uParam0[*uParam1 /*33*/])->f_4, uParam1->f_1))
	{
		return false;
	}
	if ((uParam0[*uParam1 /*33*/])->f_2 != 3)
	{
		return false;
	}
	if (func_48(iParam2))
	{
		NETWORK::_0x007FF852DCF49DA4(7);
	}
	func_245();
	if (SCRIPTS::_IS_LOADING_SCREEN_ACTIVE())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	return true;
}

bool func_167(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_137(uParam0->f_1.f_2);
	if (!func_203(PLAYER::PLAYER_PED_ID(), uParam1->f_1621[iVar0 /*3*/], BUILTIN::TO_FLOAT(*uParam1)))
	{
		uParam0->f_6 = 1;
		func_246(iParam2, 4);
		return true;
	}
	return false;
}

bool func_168(var uParam0, int* iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (*uParam0 <= 4)
	{
		return false;
	}
	if (func_35(uParam2->f_18, 256))
	{
		func_140(uParam0, uParam2, iParam4, &(iParam1->f_1));
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iVar1 = uParam0->f_7[iVar0 /*5*/].f_4;
			if (iVar1 < 0 || iVar1 >= 4)
			{
			}
			else
			{
				iParam1->f_1[iVar1] = iVar0;
			}
			iVar0++;
		}
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		iVar3 = iParam1->f_1[iVar2];
		if (iVar3 < 0 || iVar3 >= 4)
		{
		}
		else if (uParam0->f_7[iVar3 /*5*/] == 255)
		{
		}
		else if (uParam0->f_7[iVar3 /*5*/] != PLAYER::PLAYER_ID())
		{
		}
		else
		{
			iParam1->f_6 = iVar2;
		}
		else
		{
			iVar2++;
		}
	}
	func_246(iParam3, 0);
	return true;
}

bool func_169()
{
	if (!func_247(255))
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
		PLAYER::_0x64FF4BF9AF59E139(PLAYER::PLAYER_ID(), 1);
		func_248(0);
	}
	MISC::SET_BIT(&(Global_1957959.f_1), 5);
	Global_1048584 = 1;
	return true;
}

bool func_170(int* iParam0, var uParam1, var uParam2)
{
	bool bVar0;

	if (func_249() == 0)
	{
		return true;
	}
	if (!func_86(*iParam0, 9))
	{
		bVar0 = true;
		if (func_247(255))
		{
			func_26(iParam0, 8);
		}
		else if (!func_250())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
			{
				func_251(uParam1, 250);
			}
			else if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_26(iParam0, 9);
				if (func_86(*iParam0, 8))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam2->f_1621[func_137(iParam0->f_7) /*3*/], false, false, true, true);
				}
				func_252(128);
				func_252(64);
				func_187(0, 0, 0, 1);
			}
		}
	}
	return false;
}

bool func_171(int* iParam0, var uParam1)
{
	if (func_86(*iParam0, 8))
	{
		return true;
	}
	if (func_253(255) && func_254())
	{
		return true;
	}
	if (func_69(11, 255))
	{
		return false;
	}
	if (func_254())
	{
		return false;
	}
	if (CAM::IS_SCREEN_FADED_OUT() || (func_14(&(iParam0->f_1473)) && func_36(&(iParam0->f_1473), 1, 0) > 5000))
	{
		if (func_255())
		{
			func_256();
			func_76(1);
			func_77(1);
			func_78(1);
			func_79(1);
			func_82(&(uParam1->f_5), 16);
		}
		if (func_257(0))
		{
			func_258();
		}
	}
	else if (CAM::IS_SCREEN_FADED_IN())
	{
		if (!func_14(&(iParam0->f_1473)))
		{
			func_15(&(iParam0->f_1473), 1, 0);
		}
		func_251(uParam1, 500);
		if (func_255())
		{
			func_76(1);
			func_77(1);
			func_78(1);
		}
	}
	return false;
}

bool func_172(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;

	if (SCRIPTS::_IS_LOADING_SCREEN_ACTIVE())
	{
		return false;
	}
	if (!func_259(uParam1, uParam2))
	{
		return false;
	}
	iVar0 = func_137(uParam1->f_1.f_2);
	if (func_260(iParam0, uParam1, uParam2->f_1621[iVar0 /*3*/]))
	{
		func_261(iParam0, 7);
		return true;
	}
	return false;
}

int func_173(int* iParam0, var uParam1, var uParam2)
{
	if (func_35(uParam1->f_5, 4))
	{
		return 2;
	}
	if (SCRIPTS::_IS_LOADING_SCREEN_ACTIVE() || func_262())
	{
		return 0;
	}
	if (func_35(uParam2->f_18, 2) && !func_86(*iParam0, 6))
	{
		return 0;
	}
	if (!func_105(uParam1->f_9, uParam1->f_1))
	{
		return 0;
	}
	if (uParam1->f_8 != 3)
	{
		return 0;
	}
	if (!iParam0->f_1466)
	{
		return 0;
	}
	return 1;
}

bool func_174(var uParam0)
{
	int iVar0;

	if (*uParam0 < 6)
	{
		return false;
	}
	if (!func_14(&(uParam0->f_31)))
	{
		return false;
	}
	iVar0 = func_36(&(uParam0->f_31), 0, 1);
	if (iVar0 < 0)
	{
		return false;
	}
	return true;
}

bool func_175(var uParam0, int* iParam1, int iParam2, int iParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar10;
	int iVar11;
	struct<4> Var12;
	char cVar16[32];
	int iVar20;
	int iVar21;
	int iVar22;
	vector3 vVar23[24];
	int iVar26;

	if (!func_86(*iParam1, 2))
	{
		iParam1->f_7 = func_137((iParam2[iParam3 /*12*/])->f_1.f_2);
		iVar0 = 0;
		iVar1 = func_263(iParam1, 0);
		if (iVar1 >= 0 && iVar1 < 4)
		{
			iVar0 = PLAYER::GET_PLAYER_PED(uParam0->f_7[iVar1 /*5*/]);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (PED::IS_PED_MALE(iVar0))
			{
				if ((uParam4->f_2265 >= 0 && uParam4->f_2265 < 8) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_2056[uParam4->f_2265 /*26*/].f_17)))
				{
					iParam1->f_7 = uParam4->f_2265;
				}
			}
			else if ((uParam4->f_2266 >= 0 && uParam4->f_2266 < 8) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_2056[uParam4->f_2266 /*26*/].f_17)))
			{
				iParam1->f_7 = uParam4->f_2266;
			}
		}
		Var2 = { func_264(&(iParam1->f_1483)) };
		if (((iParam1->f_7 >= 0 && iParam1->f_7 < 8) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_2056[iParam1->f_7 /*26*/].f_17))) && !MISC::ARE_STRINGS_EQUAL(&Var2, &(uParam4->f_2056[iParam1->f_7 /*26*/].f_17)))
		{
			func_265(&(iParam1->f_1483), &(uParam4->f_2056[iParam1->f_7 /*26*/].f_17));
		}
		func_266(&(iParam1->f_1483));
		iVar10 = 0;
		while (iVar10 < 4)
		{
			iVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1->f_14[iVar10 /*21*/].f_1.f_2);
			Var12 = { func_267(&(uParam4->f_1651[iVar10 /*4*/]), iVar11, iVar10, 0) };
			if (func_268(iParam1, &Var12, iParam1->f_14[iVar10 /*21*/].f_1.f_2))
			{
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < 20)
		{
			if (func_268(iParam1, &(uParam4->f_1668[iVar10 /*8*/]), iParam1->f_99[iVar10 /*20*/].f_2))
			{
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < 20)
		{
			if (func_268(iParam1, &(uParam4->f_1829[iVar10 /*4*/]), iParam1->f_500[iVar10 /*13*/].f_2))
			{
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < 10)
		{
			if (func_268(iParam1, &(uParam4->f_1910[iVar10 /*4*/]), iParam1->f_761[iVar10 /*13*/].f_2))
			{
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < 1)
		{
			if (func_268(iParam1, &(uParam4->f_1951[iVar10 /*4*/]), iParam1->f_1089[iVar10 /*14*/].f_2))
			{
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < 10)
		{
			if (func_268(iParam1, &(uParam4->f_1956[iVar10 /*4*/]), iParam1->f_892[iVar10 /*13*/].f_2))
			{
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < 5)
		{
			if (func_268(iParam1, &(uParam4->f_1997[iVar10 /*4*/]), iParam1->f_1023[iVar10 /*13*/].f_2))
			{
			}
			iVar10++;
		}
		iVar10 = 0;
		while (iVar10 < 24)
		{
			StringCopy(&cVar16, "", 32);
			if (!func_269(iParam1, uParam4, iVar10, 0, &cVar16, 0, 0))
			{
			}
			if (func_268(iParam1, &cVar16, iParam1->f_1104[iVar10 /*15*/].f_2))
			{
			}
			iVar10++;
		}
		func_270(&(iParam1->f_1483));
		func_271(&(iParam1->f_1483), 1);
		if (func_35(uParam0->f_3, 2))
		{
			func_227(&(iParam1->f_1483), 524288);
			func_228(&(iParam1->f_1483), 4);
		}
		if (func_35(uParam4->f_1650, 8) && !func_86(*iParam1, 3))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(uParam4->f_2056[iParam1->f_7 /*26*/]), "cutscene@mpgvo1_int"))
			{
				func_26(iParam1, 3);
			}
		}
		func_26(iParam1, 2);
		iVar20 = 0;
		while (iVar20 < 4)
		{
			iVar21 = func_263(iParam1, iVar20);
			if (iVar21 < 0 || iVar21 >= 4)
			{
			}
			else if (uParam0->f_7[iVar21 /*5*/] == 255)
			{
			}
			else
			{
				iVar22 = uParam0->f_7[iVar21 /*5*/].f_3;
				if (uParam0->f_7[iVar21 /*5*/] == PLAYER::PLAYER_ID())
				{
					if (ANIMSCENE::_0x6F1F0B17109309DA(iParam1->f_1483.f_208, "local_player_variation"))
					{
						ANIMSCENE::SET_ANIM_SCENE_INT(iParam1->f_1483.f_208, "local_player_variation", iVar22 + 1, false);
					}
				}
				StringCopy(&cVar23, "mp_player_", 24);
				StringIntConCat(&cVar23, iVar20 + 1, 24);
				StringConCat(&cVar23, "_variation", 24);
				if (ANIMSCENE::_0x6F1F0B17109309DA(iParam1->f_1483.f_208, &cVar23))
				{
					ANIMSCENE::SET_ANIM_SCENE_INT(iParam1->f_1483.f_208, &cVar23, iVar22 + 1, false);
				}
			}
			iVar20++;
		}
	}
	func_272(uParam4->f_2056[iParam1->f_7 /*26*/], &(iParam1->f_1483));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_1483.f_208) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam1->f_1483.f_208, false))
	{
		func_273(iParam1, uParam0, iParam2[iParam3 /*12*/], uParam4, iParam5);
		if (func_35(uParam4->f_1650, 4))
		{
			func_274(0, iParam6);
			func_26(iParam1, 4);
		}
		iVar26 = 0;
		while (iVar26 < 3)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_2043[iVar26 /*4*/].f_1)))
			{
			}
			else if (!ANIMSCENE::_0x6F1F0B17109309DA(iParam1->f_1483.f_208, &(uParam4->f_2043[iVar26 /*4*/].f_1)))
			{
			}
			else if (!MISC::IS_BIT_SET(uParam4->f_2056[iParam1->f_7 /*26*/].f_25, iVar26))
			{
			}
			else
			{
				func_275(iParam1, uParam4->f_2043[iVar26 /*4*/], uParam4->f_2043[iVar26 /*4*/].f_1, uParam4->f_2056[iParam1->f_7 /*26*/].f_21[iVar26]);
			}
			iVar26++;
		}
		return true;
	}
	return false;
}

bool func_176(var uParam0, int* iParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	struct<7> Var6;
	int iVar18;

	func_276(uParam2, iParam1, uParam5);
	bVar0 = false;
	if (func_277(uParam0, iParam1, uParam2, uParam3, uParam4, uParam5, iParam6, &bVar0))
	{
		func_227(&(iParam1->f_1483), 524288);
		func_228(&(iParam1->f_1483), 4);
		if (!func_86(*iParam1, 1))
		{
			if (bVar0)
			{
				func_227(&(iParam1->f_1483), 67108864);
			}
			func_26(iParam1, 1);
		}
	}
	if (func_272(uParam5->f_2056[iParam1->f_7 /*26*/], &(iParam1->f_1483)))
	{
		if (func_48(iParam1))
		{
			func_278(uParam0, 0);
		}
		return true;
	}
	else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_1483.f_208))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam1->f_1483.f_208, false))
		{
			iVar1 = BUILTIN::ROUND((ANIMSCENE::_GET_ANIM_SCENE_DURATION(iParam1->f_1483.f_208) * 1000f));
			iVar2 = BUILTIN::ROUND((ANIMSCENE::_GET_ANIM_SCENE_TIME(iParam1->f_1483.f_208) * 1000f));
			bVar3 = !ENTITY::HAS_ANIM_EVENT_FIRED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1->f_14[0 /*21*/].f_1.f_2), MISC::GET_HASH_KEY("NotFinalPlaylist"));
			if (!func_35(uParam2->f_5, 1))
			{
				if (bVar3 && func_279(uParam5, iVar1, iVar2))
				{
					func_82(&(uParam2->f_5), 1);
				}
			}
			iVar4 = 0;
			while (iVar4 < 3)
			{
				if (MISC::IS_BIT_SET(uParam2->f_7, iVar4))
				{
				}
				else if (MISC::_IS_STRING_SPACE(&(uParam5->f_2018[iVar4 /*8*/].f_1)))
				{
				}
				else if (MISC::_IS_STRING_SPACE(&(uParam5->f_2018[iVar4 /*8*/].f_4)))
				{
				}
				else if (!ANIMSCENE::_0x6F1F0B17109309DA(iParam1->f_1483.f_208, &(uParam5->f_2018[iVar4 /*8*/].f_1)))
				{
				}
				else
				{
					iVar5 = func_280(iParam1->f_1483.f_208, &(uParam5->f_2018[iVar4 /*8*/].f_1), 0);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
					{
					}
					else if (!ENTITY::HAS_ANIM_EVENT_FIRED(iVar5, MISC::GET_HASH_KEY(&(uParam5->f_2018[iVar4 /*8*/].f_4))))
					{
					}
					else
					{
						MISC::SET_BIT(&(uParam2->f_7), iVar4);
					}
				}
				iVar4++;
			}
			if (!func_35(uParam2->f_5, 8))
			{
				if (func_86(uParam0->f_1, 0))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam1->f_1483.f_208, "ExportCamera", &Var6, false, 0, 2) && !func_153(Var6.f_6))
					{
						iParam1->f_9 = { Var6.f_6 };
						STREAMING::SET_FOCUS_POS_AND_VEL(iParam1->f_9, 0f, 0f, 0f);
					}
					func_82(&(uParam2->f_5), 8);
				}
			}
			if ((bVar3 && uParam5->f_2269 > -2) && !func_86(*iParam1, 11))
			{
				iVar18 = 1000;
				if (uParam5->f_2269 > -1)
				{
					iVar18 = uParam5->f_2269;
				}
				if (func_281(uParam5, iVar1, iVar2, iVar18 + 100))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_OUT(iVar18);
					}
					func_227(&(iParam1->f_1483), 524288);
					func_228(&(iParam1->f_1483), 4);
					func_246(iParam6, 7);
					func_26(iParam1, 11);
				}
			}
		}
	}
	return false;
}

int func_177(var uParam0, int* iParam1, var uParam2)
{
	bool bVar0;

	bVar0 = true;
	if (!iParam1->f_1466)
	{
		if (!func_14(&(iParam1->f_1469)))
		{
			if (func_86(uParam0->f_1, 0))
			{
				func_15(&(iParam1->f_1469), 0, 0);
			}
		}
		if (CAM::IS_SCREEN_FADED_IN())
		{
		}
		else if (func_14(&(iParam1->f_1469)) && func_282(&(iParam1->f_1469), 5000, 0))
		{
		}
		else
		{
			bVar0 = false;
		}
	}
	if (!func_260(iParam1, uParam2, 0f, 0f, 0f))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		func_283(&(iParam1->f_1469));
		func_261(iParam1, 7);
		if (func_35(uParam2->f_5, 4))
		{
			return 2;
		}
		return 1;
	}
	return 0;
}

bool func_178(var uParam0, var uParam1)
{
	if (!func_86(uParam0->f_1, 0))
	{
		return false;
	}
	if (func_35(uParam1->f_18, 1) && !func_86(uParam0->f_1, 6))
	{
		return false;
	}
	return true;
}

bool func_179(int* iParam0)
{
	int iVar0;

	if (!func_86(*iParam0, 8))
	{
		return true;
	}
	func_252(64);
	func_252(128);
	if (func_247(255))
	{
		return true;
	}
	if (!func_86(*iParam0, 10))
	{
		if (iParam0->f_8 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0->f_8))
		{
			iVar0 = PLAYER::GET_PLAYER_PED(iParam0->f_8);
		}
		func_26(iParam0, 10);
		func_252(128);
		func_252(64);
		func_284(7, iVar0, 1, 0);
	}
	return false;
}

void func_180(var uParam0, int* iParam1, var uParam2, int iParam3, int iParam4)
{
	func_285(uParam0, iParam1, uParam2, iParam3);
	if (func_35(uParam2->f_1650, 4) && func_86(*iParam1, 4))
	{
		func_274(1, iParam4);
		func_261(iParam1, 4);
	}
}

bool func_181(int* iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 1;
	if (func_35(uParam1->f_5, 16))
	{
		if ((bParam4 || !bParam3) || !CAM::_0x251241CAEC707106())
		{
			func_286(&(uParam1->f_5), 16);
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && func_287(iParam0, uParam2))
			{
				func_288(1, 2);
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if (!func_86(*iParam0, 8))
	{
		if (!func_35(uParam2->f_18, 512))
		{
			if (!bParam4 && func_36(&(iParam0->f_1471), 0, 0) <= 4000)
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 25, true);
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_182(var uParam0, int* iParam1, var uParam2, var uParam3)
{
	if (*uParam0 < 7)
	{
		return false;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && func_287(iParam1, uParam3))
	{
		func_288(1, 2);
	}
	func_27(iParam1, uParam2);
	return true;
}

bool func_183(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::CLEAR_BIT(uParam0[iVar0], iVar1);
	return bVar2;
}

bool func_184(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::SET_BIT(uParam0[iVar0], iVar1);
	return !bVar2;
}

void func_185(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_186(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

void func_187(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_289(iParam0);
	if (!func_290(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_291(128) && !func_231(19))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_292() == 4)
	{
		func_116(18);
	}
	func_252(1024);
}

void func_188(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_189(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_190(struct<29> Param0, var uParam29, int iParam30)
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

void func_191(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

bool func_192(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	return true;
}

void func_193(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_4 = -2;
}

void func_194(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = -1f;
}

void func_195(var uParam0)
{
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
}

void func_196(char* sParam0)
{
	StringCopy(sParam0, "", 64);
	sParam0->f_8 = 0;
}

void func_197(char* sParam0)
{
	StringCopy(sParam0, "", 64);
	StringCopy(&(sParam0->f_8), "", 64);
}

void func_198(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_293(uParam0[iVar0 /*6*/]);
		iVar0++;
	}
	uParam0->f_91 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		uParam0->f_92[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_123 = 0;
	iVar0 = 0;
	while (iVar0 < 60)
	{
		uParam0->f_124[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_185[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 75)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			uParam0->f_188[iVar0 /*3*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			uParam0->f_414[iVar0 /*3*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			uParam0->f_511[iVar0 /*3*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
}

void func_199(var uParam0)
{
}

void func_200(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	func_294(&(uParam0->f_1));
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_99[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_103[iVar0] = 0;
		iVar0++;
	}
	StringCopy(&(uParam0->f_107), "", 24);
	uParam0->f_110 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_111[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_116[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_121 = 0;
	iVar0 = 0;
	while (iVar0 < 75)
	{
		func_295(&(uParam0->f_122[iVar0 /*2*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_295(&(uParam0->f_273[iVar0 /*2*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 75)
	{
		uParam0->f_314[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_390[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 75)
	{
		uParam0->f_423[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_499[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_296(&(uParam0->f_532[iVar0 /*5*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 75)
	{
		func_89(&(uParam0->f_583[iVar0 /*2*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 75)
	{
		func_89(&(uParam0->f_734[iVar0 /*2*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_89(&(uParam0->f_885[iVar0 /*2*/]));
		iVar0++;
	}
	func_297(&(uParam0->f_950));
}

void func_201(var uParam0)
{
	*uParam0 = 0f;
	uParam0->f_1 = 0;
}

bool func_202(var uParam0)
{
	if (!func_103(uParam0->f_4, 1))
	{
		return false;
	}
	return true;
}

bool func_203(int iParam0, vector3 vParam1, float fParam4)
{
	float fVar0;

	if (fParam4 == -1f)
	{
		return true;
	}
	if (fParam4 == 0f)
	{
		fVar0 = 100f;
	}
	else
	{
		fVar0 = fParam4;
	}
	return func_238(iParam0, vParam1, fVar0, 1, 1);
}

int func_204(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Stack.Push(iParam1);
	Stack.Push(iParam2);
	Stack.Push(iParam3);
	Stack.Push(iParam4);
	Stack.Push(iParam5);
	Call_Loc(iParam0);
	return StackVal;
}

void func_205(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

int func_206(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_298(iVar0, uParam0[iVar0 /*5*/], iParam1, bParam2))
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_207(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_298(iVar0, uParam0[iVar0 /*5*/], iParam1, bParam2))
		{
		}
		else if ((*uParam0)[iVar0 /*5*/] != iParam3)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_208(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_298(iVar0, uParam0[iVar0 /*5*/], iParam1, bParam2))
		{
		}
		else
		{
			iVar1 = (*uParam0)[iVar0 /*5*/];
			iVar2 = GANG::_0x901E0DC25080C8B9(iVar1);
			if (!GANG::_0xD6F6ACF4392187FB(iVar2))
			{
			}
			else if (!GANG::_0x0F99F6436528A089(iVar2))
			{
			}
			else if (!GANG::_0x424B17A7DC5C90BC(iVar1))
			{
			}
			else
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_209(var uParam0, int iParam1, bool bParam2, var uParam3)
{
	int iVar0;

	if (uParam3->f_1 < 0 || uParam3->f_1 >= 8)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_298(iVar0, uParam0[iVar0 /*5*/], iParam1, bParam2))
		{
		}
		else if ((uParam0[iVar0 /*5*/])->f_2 < 0 || (uParam0[iVar0 /*5*/])->f_2 >= 8)
		{
		}
		else if ((uParam0[iVar0 /*5*/])->f_2 != uParam3->f_1)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_210(var uParam0, int iParam1, bool bParam2, var uParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_298(iVar0, uParam0[iVar0 /*5*/], iParam1, bParam2))
		{
		}
		else
		{
			iVar1 = 0;
			iVar2 = 0;
			iVar3 = 0;
			Stack.Push(uParam3->f_1);
			Stack.Push(1135537454);
			Stack.Push(&iVar1);
			Stack.Push(&iVar2);
			Stack.Push(&iVar3);
			Call_Loc(iParam4);
			if (StackVal != 1)
			{
			}
			else
			{
				iVar4 = (*uParam0)[iVar0 /*5*/];
				iVar5 = PLAYER::GET_PLAYER_PED(iVar4);
				iVar6 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(iVar1));
				if (PED::IS_PED_IN_VEHICLE(iVar5, iVar6, true) && func_299(iVar5, iVar6) == uParam3->f_2)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_211(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_298(iVar0, uParam0[iVar0 /*5*/], iParam1, bParam2))
		{
		}
		else if (*uParam0)[iVar0 /*5*/] != PLAYER::PLAYER_ID()
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_212(var uParam0, int iParam1, bool bParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_298(iVar0, uParam0[iVar0 /*5*/], iParam1, bParam2))
		{
		}
		else if ((uParam0[iVar0 /*5*/])->f_3 != uParam3->f_1)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_213(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if ((*uParam0)[iVar0 /*36*/] == iParam1)
		{
		}
		if ((*uParam0)[iVar0 /*36*/] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_214(var uParam0, int iParam1)
{
	if (uParam0->f_2 != iParam1)
	{
		return false;
	}
	return MISC::IS_BIT_SET(*uParam0, 0);
}

bool func_215(var uParam0)
{
	if (!func_120(uParam0))
	{
		return true;
	}
	if (uParam0->f_4 < 15)
	{
		return false;
	}
	else if (uParam0->f_4 == 15)
	{
		return !func_35(uParam0->f_5, 16);
	}
	return true;
}

bool func_216(var uParam0)
{
	if (!func_120(uParam0))
	{
		return false;
	}
	if (uParam0->f_4 <= 14)
	{
		return false;
	}
	return true;
}

int func_217()
{
	return Global_1051252.f_12;
}

char* func_218()
{
	return "unnamed";
}

int func_219(int iParam0)
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

bool func_220(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_69(36, iParam0);
}

bool func_221(int iParam0)
{
	if (func_300(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) != 1)
		{
			func_301(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) == 1;
}

void func_222(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_223()
{
	return Global_1102219.f_26.f_3341;
}

bool func_224(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (iVar0 == Global_1102219.f_26.f_3344)
	{
		return true;
	}
	if (iVar0 == PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))
	{
		return true;
	}
	return false;
}

bool func_225(var uParam0)
{
	if (*uParam0 == -1)
	{
		return false;
	}
	if (!func_103(uParam0->f_1, 1))
	{
		return false;
	}
	uParam0->f_9 = { uParam0->f_1 };
	return true;
}

bool func_226(var uParam0, int iParam1)
{
	if (func_302(uParam0))
	{
		return true;
	}
	if (!func_303(uParam0, iParam1))
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2056[iParam1 /*26*/])))
	{
		return false;
	}
	return true;
}

void func_227(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_228(var uParam0, int iParam1)
{
	uParam0->f_12 = (uParam0->f_12 || iParam1);
}

void func_229(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_230(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_231(int iParam0)
{
	return (Global_1102219.f_4[Global_1106305[iParam0 /*2*/]] && Global_1106305[iParam0 /*2*/].f_1) == Global_1106305[iParam0 /*2*/].f_1;
}

void func_232(var uParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_153(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
	uParam0->f_8 = { vParam4 };
	func_230(&(uParam0->f_263), 4194304);
}

void func_233(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_209), sParam1, 64);
}

void func_234(var uParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (func_304(uParam0, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_225[iVar0 /*9*/])))
		{
			if (!func_305(uParam0, sParam1) || func_306(uParam0, 8388608))
			{
				StringCopy(&(uParam0->f_225[iVar0 /*9*/]), sParam1, 64);
				if (!bParam2)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_208, true, false))
					{
						if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_208, sParam1))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_208, sParam1);
						}
					}
					else
					{
						func_227(uParam0, 4194304);
					}
				}
				else
				{
					func_227(uParam0, 4194304);
				}
				return;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
}

bool func_235(var uParam0)
{
	if (!func_157(uParam0))
	{
		return false;
	}
	return !func_105(uParam0->f_1, uParam0->f_9);
}

int func_236()
{
	return func_249();
}

int func_237()
{
	return Global_1102219.f_26.f_3342;
}

bool func_238(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return true;
		}
	}
	else if (func_307(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

int func_239(var uParam0, int* iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (func_308(uParam0, uParam2, uParam3))
	{
		return 2;
	}
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (!func_309(iVar1, 966820754, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1->f_14[iVar1 /*21*/].f_1.f_1), &(uParam3->f_24[iVar1 /*80*/].f_11[iVar2 /*34*/]), &(iParam1->f_14[iVar1 /*21*/].f_1.f_18), 1))
			{
				iVar0 = 0;
			}
			if (!func_309(iVar1, 966820754, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1->f_14[iVar1 /*21*/].f_1.f_1), &(uParam3->f_24[iVar1 /*80*/].f_11[iVar2 /*34*/].f_13), &(iParam1->f_14[iVar1 /*21*/].f_1.f_19), 0))
			{
				iVar0 = 0;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (!func_309(iVar1, 1627542854, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1->f_99[iVar1 /*20*/].f_1), &(uParam3->f_345[iVar1 /*29*/].f_3), &(iParam1->f_99[iVar1 /*20*/].f_18), 0))
		{
			iVar0 = 0;
		}
		bVar3 = (iVar0 == 1 && func_310(uParam3->f_345[iVar1 /*29*/].f_3, uParam3->f_345[iVar1 /*29*/].f_16, 0.5f, 1));
		if (!func_309(iVar1, 1627542854, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1->f_99[iVar1 /*20*/].f_1), &(uParam3->f_345[iVar1 /*29*/].f_16), &(iParam1->f_99[iVar1 /*20*/].f_19), bVar3))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_240(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	struct<8> Var7;
	int iVar15;
	bool bVar16;
	int iVar17;
	struct<8> Var18;

	if (bParam3)
	{
		uParam0->f_274++;
		if (uParam0->f_274 < 10)
		{
			return (func_306(uParam0, 256) && !func_306(uParam0, 4194304));
		}
		uParam0->f_274 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	func_311(uParam0, sParam1);
	if (!func_306(uParam0, 64))
	{
		if (!func_153(func_312(uParam0)))
		{
			func_227(uParam0, 64);
		}
		else if (func_313(uParam0, &vVar0, &vVar3))
		{
			uParam0->f_5 = { vVar0 };
			uParam0->f_8 = { vVar3 };
		}
		return false;
	}
	fVar6 = func_314(Global_34, func_312(uParam0), 1);
	if (func_306(uParam0, 128) || func_306(uParam0, 256))
	{
		if ((fVar6 >= func_315(uParam0) && !bParam2) || !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208))
		{
			func_316(uParam0);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_208);
			}
			func_317(uParam0);
			func_72(uParam0, 128, 1);
			func_72(uParam0, 256, 1);
			func_72(uParam0, 4096, 1);
			func_72(uParam0, 32768, 1);
			func_72(uParam0, 16777216, 1);
		}
	}
	else if (fVar6 <= func_318(uParam0) || bParam2)
	{
		if (!func_306(uParam0, 128))
		{
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208))
			{
				if (func_318(uParam0) >= func_315(uParam0))
				{
				}
				Var7 = { func_264(uParam0) };
				if (!func_319(uParam0, 1) && MISC::IS_STRING_NULL_OR_EMPTY(&Var7))
				{
					func_320(uParam0);
					Var7 = { func_264(uParam0) };
				}
				iVar15 = 256;
				if (!func_306(uParam0, 1))
				{
					iVar15 |= 2048;
				}
				if (func_319(uParam0, 2))
				{
					iVar15 |= 16384;
				}
				uParam0->f_208 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_192), iVar15, &Var7, false, true);
				func_321(uParam0, 0, 0, 0, 0);
				func_227(uParam0, 128);
			}
		}
	}
	if (func_306(uParam0, 128))
	{
		if (func_306(uParam0, 256) && !func_306(uParam0, 4194304))
		{
			return true;
		}
		func_322(uParam0);
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_208, true, false))
		{
			bVar16 = true;
			Var18 = { func_323(uParam0) };
			iVar17 = 0;
			while (iVar17 < 4)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_225[iVar17 /*9*/])))
				{
					if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_225[iVar17 /*9*/]), &Var18))
					{
						if (!uParam0->f_225[iVar17 /*9*/].f_8)
						{
							uParam0->f_225[iVar17 /*9*/].f_8 = 1;
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_208, &(uParam0->f_225[iVar17 /*9*/]));
							bVar16 = false;
						}
						else if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_208, &(uParam0->f_225[iVar17 /*9*/])))
						{
							bVar16 = false;
						}
					}
				}
				iVar17++;
			}
			if (!func_306(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_208, &Var18))
				{
					if (!func_306(uParam0, 16777216))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_208, &Var18);
						func_227(uParam0, 16777216);
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_208, &Var18))
					{
						bVar16 = false;
					}
				}
			}
			if (!bVar16)
			{
				return false;
			}
			func_227(uParam0, 256);
			func_72(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

bool func_241(var uParam0, var uParam1, var uParam2)
{
	if (func_308(uParam0, uParam1, uParam2))
	{
		return false;
	}
	return true;
}

void func_242(int* iParam0, var uParam1)
{
	int iVar0;

	TASK::_0x4F57397388E1DFF8();
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_324(iVar0, 966820754, &(iParam0->f_14[iVar0 /*21*/].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_324(iVar0, 1627542854, &(iParam0->f_99[iVar0 /*20*/]));
		iVar0++;
	}
	uParam1->f_9 = { func_60() };
}

void func_243(int* iParam0, var uParam1, var uParam2)
{
	func_325(iParam0, uParam1, uParam2);
	func_326(iParam0, uParam1, uParam2);
	POPULATION::_0xF45E46DEECF7DF6E(4224, 0, 0, -1, -1);
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && CAM::IS_SCREEN_FADED_OUT())
	{
		func_327(0);
	}
	if (func_328(uParam1) || func_84(uParam1))
	{
		if (UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("PLAYER_MENU")) || UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PLAYER_MENU")))
		{
			UIAPPS::_CLOSE_APP_BY_HASH(joaat("PLAYER_MENU"));
		}
		if (UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("PAUSE_MENU")) || UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PAUSE_MENU")))
		{
			UIAPPS::_CLOSE_APP_BY_HASH(joaat("PAUSE_MENU"));
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MAP"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MAP_POI"), false);
		PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_FRONTEND_PAUSE"), false);
		PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), false);
	}
	if (uParam1->f_4 != 0)
	{
		VOICE::_0xB3E8841F6BDAF83E();
	}
}

bool func_244(var uParam0, int* iParam1, var uParam2, var uParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	bVar0 = true;
	iVar3 = 0;
	while (iVar3 < 4)
	{
		iVar4 = func_263(iParam1, iVar3);
		if (iVar4 < 0 || iVar4 >= 4)
		{
		}
		else
		{
			if (!func_329(uParam0, &(uParam0->f_7[iVar4 /*5*/]), iParam1, uParam2, iVar3, iVar3, 966820754, &(iParam1->f_14[iVar3 /*21*/]), uParam3, &(uParam3->f_24[iVar3 /*80*/]), iParam4))
			{
				if (bVar0)
				{
					bVar0 = false;
				}
			}
			func_330(&(iParam1->f_14[iVar3 /*21*/].f_1), &iVar1, &iVar2);
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 20)
	{
		if (!func_331(uParam0, iParam1, uParam2, iVar3, uParam3->f_345[iVar3 /*29*/], 1627542854, &(iParam1->f_99[iVar3 /*20*/]), uParam3, &(uParam3->f_345[iVar3 /*29*/]), &(uParam3->f_1668[iVar3 /*8*/]), iParam4))
		{
			if (bVar0)
			{
				bVar0 = false;
			}
		}
		func_330(&(iParam1->f_99[iVar3 /*20*/]), &iVar1, &iVar2);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 20)
	{
		iVar5 = 0;
		if (!func_332(iParam1, uParam0, uParam2, iVar3, uParam3->f_926[iVar3 /*15*/], -1821507459, &(iParam1->f_500[iVar3 /*13*/]), &iVar5, uParam3, &(uParam3->f_926[iVar3 /*15*/]), &(uParam3->f_926[iVar3 /*15*/].f_3), &(uParam3->f_926[iVar3 /*15*/].f_9), &(uParam3->f_1829[iVar3 /*4*/]), iParam4))
		{
			if (bVar0)
			{
				bVar0 = false;
			}
		}
		func_330(&(iParam1->f_500[iVar3 /*13*/]), &iVar1, &iVar2);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 10)
	{
		iVar6 = 0;
		if (!func_332(iParam1, uParam0, uParam2, iVar3, uParam3->f_1227[iVar3 /*15*/], 1135537454, &(iParam1->f_761[iVar3 /*13*/]), &iVar6, uParam3, &(uParam3->f_1227[iVar3 /*15*/]), &(uParam3->f_1227[iVar3 /*15*/].f_3), &(uParam3->f_1227[iVar3 /*15*/].f_9), &(uParam3->f_1910[iVar3 /*4*/]), iParam4))
		{
			if (bVar0)
			{
				bVar0 = false;
			}
		}
		func_333(uParam0, &(iParam1->f_761[iVar3 /*13*/]), uParam3->f_1227[iVar3 /*15*/]);
		func_330(&(iParam1->f_761[iVar3 /*13*/]), &iVar1, &iVar2);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 1)
	{
		if (!func_332(iParam1, uParam0, uParam2, iVar3, uParam3->f_1529[iVar3 /*15*/], 465509728, &(iParam1->f_1089[iVar3 /*14*/]), &(iParam1->f_1089[iVar3 /*14*/].f_13), uParam3, &(uParam3->f_1529[iVar3 /*15*/]), &(uParam3->f_1529[iVar3 /*15*/].f_3), &(uParam3->f_1529[iVar3 /*15*/].f_9), &(uParam3->f_1951[iVar3 /*4*/]), iParam4))
		{
			if (bVar0)
			{
				bVar0 = false;
			}
		}
		func_330(&(iParam1->f_1089[iVar3 /*14*/]), &iVar1, &iVar2);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 10)
	{
		iVar7 = 0;
		if (!func_332(iParam1, uParam0, uParam2, iVar3, uParam3->f_1378[iVar3 /*15*/], 422112462, &(iParam1->f_892[iVar3 /*13*/]), &iVar7, uParam3, &(uParam3->f_1378[iVar3 /*15*/]), &(uParam3->f_1378[iVar3 /*15*/].f_3), &(uParam3->f_1378[iVar3 /*15*/].f_9), &(uParam3->f_1956[iVar3 /*4*/]), iParam4))
		{
			if (bVar0)
			{
				bVar0 = false;
			}
		}
		func_330(&(iParam1->f_892[iVar3 /*13*/]), &iVar1, &iVar2);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 5)
	{
		iVar8 = 0;
		if (!func_332(iParam1, uParam0, uParam2, iVar3, uParam3->f_1545[iVar3 /*15*/], -230450704, &(iParam1->f_1023[iVar3 /*13*/]), &iVar8, uParam3, &(uParam3->f_1545[iVar3 /*15*/]), &(uParam3->f_1545[iVar3 /*15*/].f_3), &(uParam3->f_1545[iVar3 /*15*/].f_9), &(uParam3->f_1997[iVar3 /*4*/]), iParam4))
		{
			if (bVar0)
			{
				bVar0 = false;
			}
		}
		func_330(&(iParam1->f_892[iVar3 /*13*/]), &iVar1, &iVar2);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 24)
	{
		if (!func_334(iParam1, uParam0, uParam2, iVar3, 0, &(iParam1->f_1104[iVar3 /*15*/]), uParam3, iVar1, iVar2, iParam4))
		{
			if (bVar0)
			{
				bVar0 = false;
			}
		}
		iVar3++;
	}
	return bVar0;
}

void func_245()
{
	if (!Global_1102219.f_16)
	{
		return;
	}
	Global_1071686.f_28662.f_5 = 1;
	AUDIO::_0x531A78D6BF27014B("rdro_gamemode_transition_sounds");
	AUDIO::_0x531A78D6BF27014B("rdro_gamemode_generic_sounds");
}

void func_246(int iParam0, int iParam1)
{
	Stack.Push(iParam1);
	Call_Loc(iParam0);
}

bool func_247(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219.f_3 & 128 != 0;
	}
	return func_335(128, iParam0);
}

void func_248(bool bParam0)
{
	if (func_257(bParam0))
	{
		func_337(func_336(), 0);
	}
}

int func_249()
{
	return Global_1102219.f_26.f_3337;
}

bool func_250()
{
	return (func_338() && func_339(Global_1102219.f_3520.f_17, 1500));
}

void func_251(var uParam0, int iParam1)
{
	if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_OUT(iParam1);
	}
	if (func_328(uParam0))
	{
		func_82(&(uParam0->f_5), 2);
	}
}

void func_252(int iParam0)
{
	if (func_340(iParam0))
	{
		return;
	}
	Global_1102219.f_26.f_9 = (Global_1102219.f_26.f_9 || iParam0);
}

bool func_253(int iParam0)
{
	return !func_45(iParam0);
}

bool func_254()
{
	if (func_255() || func_257(0))
	{
		return false;
	}
	return true;
}

bool func_255()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if ((((((PED::_0xB655DB7582AEC805(iVar0) || PED::IS_PED_INJURED(iVar0)) || PED::IS_PED_DEAD_OR_DYING(iVar0, true)) || PED::_0x3BDFCF25B58B0415(iVar0)) || PED::_IS_PED_HOGTIED(iVar0)) || PED::IS_PED_FALLING(iVar0)) || PED::_IS_PED_LASSOED(iVar0))
	{
		return true;
	}
	return false;
}

void func_256()
{
	func_117(11);
	func_119(1, 1);
	func_185(&(Global_1102219.f_3879));
	Global_1102219.f_3879.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
	Global_1102219.f_3879 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
	Global_1102219.f_3879.f_5 = 1;
	Global_1102219.f_26.f_3341 = 0;
	Global_1102219.f_26.f_3342 = 0;
	func_186(Global_1102219.f_3879, 36);
}

bool func_257(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715.f_20638;
	}
	return (Global_1915715.f_20638 || Global_1915715.f_22504.f_1);
}

void func_258()
{
	if (func_257(0))
	{
		Global_1051439.f_43 = 1;
	}
}

bool func_259(var uParam0, var uParam1)
{
	if (uParam1->f_2 != -1)
	{
		if (CAM::IS_SCREEN_FADED_IN())
		{
			func_251(uParam0, uParam1->f_2);
		}
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			return false;
		}
	}
	return true;
}

bool func_260(int* iParam0, var uParam1, vector3 vParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;

	bVar0 = !func_153(vParam2);
	bVar1 = ((bVar0 && !func_153(iParam0->f_9)) || (!bVar0 && func_153(iParam0->f_9)));
	bVar2 = false;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_1071686.f_28662.f_8.f_3) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1071686.f_28662.f_8.f_3, false))
	{
		bVar2 = true;
	}
	if (!func_86(*iParam0, 7))
	{
		if (!bVar1)
		{
			func_283(&(iParam0->f_12));
			if (bVar0)
			{
				if (CAM::IS_SCREEN_FADED_IN() && !bVar2)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), vParam2, true) < 100f)
					{
						bVar3 = true;
					}
					else
					{
						func_251(uParam1, 500);
					}
				}
				else if (CAM::IS_SCREEN_FADED_OUT() || bVar2)
				{
					if (STREAMING::_0xCF45DF50C7775F2A())
					{
						STREAMING::_0x5A8B01199C3E79C3();
					}
					if (STREAMING::_0x513F8AA5BF2F17CF(vParam2, 100f, 5))
					{
						bVar3 = true;
					}
				}
				if (bVar3)
				{
					STREAMING::SET_FOCUS_POS_AND_VEL(vParam2, 0f, 0f, 0f);
					iParam0->f_9 = { vParam2 };
					bVar1 = true;
				}
			}
			else
			{
				if (CAM::IS_SCREEN_FADED_IN() && !bVar2)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), iParam0->f_9, true) < 100f)
					{
						bVar4 = true;
					}
					else
					{
						func_251(uParam1, 500);
					}
				}
				else if (CAM::IS_SCREEN_FADED_OUT() || bVar2)
				{
					if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
					{
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					}
					if (CAM::DOES_CAM_EXIST(iParam0->f_1478))
					{
						CAM::DESTROY_CAM(iParam0->f_1478, false);
					}
					if (STREAMING::_0xCF45DF50C7775F2A())
					{
						STREAMING::_0x5A8B01199C3E79C3();
					}
					vVar5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false) };
					if (STREAMING::_0x513F8AA5BF2F17CF(vVar5, 100f, 5))
					{
						bVar4 = true;
					}
				}
				if (bVar4)
				{
					STREAMING::CLEAR_FOCUS();
					iParam0->f_9 = { 0f, 0f, 0f };
					bVar1 = true;
				}
			}
		}
		if (bVar1)
		{
			if (STREAMING::_0xCF45DF50C7775F2A())
			{
				if (!func_14(&(iParam0->f_12)))
				{
					func_132(&(iParam0->f_12), 0, 0);
				}
				if (STREAMING::_0x0909F71B5C070797() || func_282(&(iParam0->f_12), 5000, 0))
				{
					STREAMING::_0x5A8B01199C3E79C3();
					func_26(iParam0, 7);
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						return false;
					}
				}
			}
			else
			{
				func_26(iParam0, 7);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					return false;
				}
			}
		}
	}
	return func_86(*iParam0, 7);
}

void func_261(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_262()
{
	return Global_1071686.f_28662.f_8.f_13 != 0;
}

int func_263(int* iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return -1;
	}
	return iParam0->f_1[iParam1];
}

struct<8> func_264(var uParam0)
{
	return uParam0->f_209;
}

void func_265(var uParam0, char* sParam1)
{
	int iVar0;
	struct<8> Var1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_208, true, false))
	{
		return;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_208, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_225[iVar0 /*9*/])) && MISC::ARE_STRINGS_EQUAL(sParam1, &(uParam0->f_225[iVar0 /*9*/])))
		{
			Var1 = { uParam0->f_209 };
			uParam0->f_225[iVar0 /*9*/] = { Var1 };
		}
		iVar0++;
	}
	func_233(uParam0, sParam1);
	func_72(uParam0, 2097152, 1);
	func_227(uParam0, 33554432);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_208, sParam1, true);
}

void func_266(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		uParam0->f_17[iVar0 /*12*/].f_11 = 0;
		iVar0++;
	}
}

struct<4> func_267(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return *sParam0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return Var0;
	}
	StringCopy(&Var0, "mp_player_", 32);
	if (!bParam3)
	{
		if (PED::IS_PED_MALE(iParam1))
		{
			StringConCat(&Var0, "m_", 32);
		}
		else
		{
			StringConCat(&Var0, "f_", 32);
		}
	}
	if (iParam2 >= 0 && iParam2 < 4)
	{
		StringIntConCat(&Var0, iParam2 + 1, 32);
	}
	return Var0;
}

bool func_268(int* iParam0, char* sParam1, int iParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	if (!ANIMSCENE::_0x6F1F0B17109309DA(iParam0->f_1483.f_208, sParam1))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (func_341(&(iParam0->f_1483), iParam2, sParam1, 0, ENTITY::GET_ENTITY_MODEL(iParam2), 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	return false;
}

bool func_269(int* iParam0, var uParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, bool bParam6)
{
	int iVar0;

	if (iParam2 < 0)
	{
		return false;
	}
	switch (iParam3)
	{
		case 966820754:
			if (!bParam5)
			{
				*sParam4 = { func_267(&(uParam1->f_1651[iParam2 /*4*/]), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0->f_14[iParam2 /*21*/].f_1.f_1), iParam2, bParam6) };
				return true;
			}
			break;
		case 1627542854:
			if (bParam5)
			{
				*sParam4 = { uParam1->f_1668[iParam2 /*8*/].f_4 };
				return true;
			}
			else
			{
				*sParam4 = { uParam1->f_1668[iParam2 /*8*/] };
				return true;
			}
			break;
		case 1135537454:
			if (!bParam5)
			{
				*sParam4 = { uParam1->f_1910[iParam2 /*4*/] };
				return true;
			}
			break;
		case 465509728:
			if (!bParam5)
			{
				*sParam4 = { uParam1->f_1951[iParam2 /*4*/] };
				return true;
			}
			break;
		case 422112462:
			if (!bParam5)
			{
				*sParam4 = { uParam1->f_1956[iParam2 /*4*/] };
				return true;
			}
			break;
		case 0:
			if (bParam5)
			{
				return false;
			}
			if (iParam0->f_1104[iParam2 /*15*/].f_13 == -1)
			{
				return false;
			}
			if (iParam0->f_1104[iParam2 /*15*/].f_14 == 0)
			{
				return false;
			}
			if (func_269(iParam0, uParam1, iParam0->f_1104[iParam2 /*15*/].f_13, iParam0->f_1104[iParam2 /*15*/].f_14, sParam4, 1, 1))
			{
				return true;
			}
			else if (func_269(iParam0, uParam1, iParam0->f_1104[iParam2 /*15*/].f_13, iParam0->f_1104[iParam2 /*15*/].f_14, sParam4, 0, 1))
			{
				iVar0 = iParam0->f_1104[iParam2 /*15*/].f_1;
				if (func_342(iVar0))
				{
					StringConCat(sParam4, "_horse", 32);
					return true;
				}
			}
			break;
	}
	return false;
}

void func_270(var uParam0)
{
	int iVar0;

	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_208, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_17[iVar0 /*12*/]) || func_343(&(uParam0->f_17[iVar0 /*12*/]), 2))
		{
			if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_208, &(uParam0->f_17[iVar0 /*12*/].f_1)))
			{
				func_344(&(uParam0->f_17[iVar0 /*12*/]), 1);
			}
		}
		iVar0++;
	}
}

void func_271(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_17[iVar0 /*12*/]) || func_343(&(uParam0->f_17[iVar0 /*12*/]), 2))
		{
			if (func_343(&(uParam0->f_17[iVar0 /*12*/]), 1) || ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_208, &(uParam0->f_17[iVar0 /*12*/].f_1)))
			{
				func_345(uParam0, &(uParam0->f_17[iVar0 /*12*/].f_1), uParam0->f_17[iVar0 /*12*/], uParam0->f_17[iVar0 /*12*/].f_9);
				if (bParam1 && ENTITY::IS_ENTITY_A_PED(uParam0->f_17[iVar0 /*12*/]))
				{
					iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_17[iVar0 /*12*/]);
					if (iVar1 != Global_34 && !func_343(&(uParam0->f_17[iVar0 /*12*/]), 16))
					{
						func_346(iVar1);
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_272(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
	int iVar0;

	func_311(uParam16, &uParam0);
	if (func_347(uParam16) != 1)
	{
		func_348(uParam16);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_34, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (func_347(uParam16))
	{
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam16->f_208) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam16->f_208, true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam16->f_208, false))
				{
					func_349(uParam16, &uParam0);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam16->f_208))
				{
					func_350(uParam16, 4);
					return false;
				}
				else if (func_351(uParam16, 2))
				{
					Stack.Push(uParam16);
					Call_Loc(uParam16->f_189);
				}
				func_350(uParam16, 3);
			}
			else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam16->f_208))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam16->f_209)) && func_306(uParam16, 134217728))
				{
				}
				else
				{
					func_352(uParam16);
				}
				func_353(&(uParam16->f_1));
				func_350(uParam16, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_322(uParam16);
				if (!func_354(&(uParam16->f_1)))
				{
					func_355(&(uParam16->f_1), 0);
				}
				else if (func_356(&(uParam16->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam16->f_208))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam16->f_208);
					}
					func_350(uParam16, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam16->f_208) || !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam16->f_208, true, false))
			{
				if (func_240(uParam16, &uParam0, 1, 1))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam16->f_208, true, false))
					{
						func_350(uParam16, 4);
					}
					else if (!func_153(func_312(uParam16)) && !func_238(Global_34, func_312(uParam16), 100f, 1, 1))
					{
						if (!func_357(uParam16->f_263, 8388608))
						{
							func_358(1);
						}
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), func_312(uParam16), 0f, true, true, true, false);
					}
				}
				else if (func_356(&(uParam16->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam16->f_208))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam16->f_208);
					}
					func_350(uParam16, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				func_359(1, 0);
				func_349(uParam16, &uParam0);
				func_350(uParam16, 3);
			}
			else if (func_356(&(uParam16->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam16->f_208))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam16->f_208);
				}
				func_350(uParam16, 4);
			}
			break;
		case 3:
			func_360(uParam16);
			if (func_351(uParam16, 2))
			{
				Stack.Push(uParam16);
				Call_Loc(uParam16->f_189);
			}
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam16->f_208) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam16->f_208, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam16->f_208) || func_306(uParam16, 512)))
			{
				if (!func_306(uParam16, 1024) && func_361(uParam16, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!func_306(uParam16, 512))
				{
					func_353(&(uParam16->f_1));
					func_227(uParam16, 512);
					func_350(uParam16, 4);
				}
				else if (func_306(uParam16, 524288))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			else
			{
				func_348(uParam16);
			}
			if (func_306(uParam16, 524288))
			{
				if (IntToFloat(MISC::ABSI((func_362(uParam16) - func_363(uParam16)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam16->f_208))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam16->f_208))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (func_364(uParam16, Global_34, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (!func_319(uParam16, 4))
				{
					if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && func_363(uParam16) > 5000)
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
			}
			if (func_365(uParam16))
			{
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam16->f_208))
				{
				}
				func_366(uParam16);
				func_367(uParam16);
				return true;
			}
			else
			{
				if (func_306(uParam16, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam16->f_208) && !ANIMSCENE::_0xEF324E9550A394D5(uParam16->f_208))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam16->f_208);
						}
						func_353(&(uParam16->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						func_227(uParam16, 512);
						func_72(uParam16, 67108864, 1);
						func_350(uParam16, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!func_306(uParam16, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam16->f_208)) && CAM::IS_SCREEN_FADED_OUT()) && func_363(uParam16) <= 5000) && func_363(uParam16) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(uParam16->f_292);
				}
				if (!func_306(uParam16, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1495039362))
				{
					func_368(&(uParam16->f_264), 0);
					func_227(uParam16, 536870912);
				}
				if (func_363(uParam16) >= 5000 && func_363(uParam16) <= (func_362(uParam16) - 5000))
				{
					func_369();
				}
			}
			break;
		case 6:
			if (func_365(uParam16))
			{
				func_366(uParam16);
				func_367(uParam16);
				return true;
			}
			break;
		case 4:
			if (func_306(uParam16, 524288))
			{
				ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
					if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam16->f_208))
					{
						func_227(uParam16, 1073741824 /* Float: 2f */);
					}
				}
			}
			else
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam16->f_208))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam16->f_208))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam16->f_208, true);
						if (UIFEED::_0xC17F69E1418CD11F(9) != 0)
						{
							UIFEED::_0xDD1232B332CBB9E7(9, 1, 0);
						}
						return false;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam16->f_208))
					{
						return false;
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_351(uParam16, 4));
					Stack.Push(uParam16);
					Call_Loc(uParam16->f_190);
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam16->f_208) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam16->f_208))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam16->f_208, false);
						}
						func_350(uParam16, 3);
					}
					else if (func_356(&(uParam16->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam16->f_208) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam16->f_208))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam16->f_208, false);
						}
						func_350(uParam16, 3);
					}
				}
				if (func_347(uParam16) == 3)
				{
					if (func_306(uParam16, 524288))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			break;
		case 5:
			func_350(uParam16, 4);
			break;
	}
	return false;
}

void func_273(int* iParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_86(*iParam0, 8))
	{
		iVar0 = 8;
		if (func_370(57))
		{
			iVar0 |= 128;
		}
		if (!func_48(iParam0))
		{
			iVar0 |= 4;
			iVar0 |= 16;
		}
		func_288(0, iVar0);
		func_82(&(uParam2->f_5), 16);
		func_371(0);
		func_372();
		MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), 10f, 1);
	}
	func_245();
	if (func_48(iParam0))
	{
		func_278(uParam1, 1);
	}
	func_91(1);
	func_373(0);
	if (!func_35(uParam3->f_18, 128))
	{
		AUDIO::SET_AUDIO_FLAG("EnableCutsceneMusic", true);
	}
	iVar1 = func_137(uParam2->f_1.f_2);
	func_374(uParam3->f_1621[iVar1 /*3*/], 20f, 1);
	func_375(0);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	func_246(iParam4, 1);
}

void func_274(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < 150)
	{
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		func_204(iParam1, iVar0, -230450704, &iVar1, &iVar2, &iVar3);
		if (!MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar1))
		{
		}
		else
		{
			iVar4 = MISC::_GET_ENTITY_FROM_ITEM(iVar1);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
			}
			else
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar4, bParam0);
			}
		}
		iVar0++;
	}
}

void func_275(int* iParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5)
{
	bool bVar0;
	int iVar1;

	switch (iParam1)
	{
		case 0:
			if (fParam5 != 0f)
			{
				bVar0 = true;
			}
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_1483.f_208, &uParam2, bVar0, false);
			break;
		case 1:
			iVar1 = BUILTIN::ROUND(fParam5);
			ANIMSCENE::SET_ANIM_SCENE_INT(iParam0->f_1483.f_208, &uParam2, iVar1, false);
			break;
		case 2:
			ANIMSCENE::SET_ANIM_SCENE_FLOAT(iParam0->f_1483.f_208, &uParam2, fParam5, false, false);
			break;
	}
}

void func_276(var uParam0, int* iParam1, var uParam2)
{
	int iVar0;

	if ((func_86(*iParam1, 3) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_1483.f_208)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam1->f_1483.f_208, false))
	{
		STREAMING::_0xD346248C1DCE0D76(6, 6, 10, 10);
		if (!func_86(*iParam1, 4))
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!MISC::IS_BIT_SET(uParam0->f_7, iVar0))
				{
				}
				else if (!MISC::ARE_STRINGS_EQUAL(&(uParam2->f_2018[iVar0 /*8*/].f_4), "TriggerMusic"))
				{
				}
				else
				{
					func_26(iParam1, 4);
				}
				iVar0++;
			}
		}
		else
		{
			GRAPHICS::_0x98A7CD5EA379A854();
		}
	}
}

bool func_277(var uParam0, int* iParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;

	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	func_376();
	NETWORK::_0x236905C700FDB54D();
	func_377(0, 0, 1);
	CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
	if (func_141(uParam5))
	{
		iVar0 = func_142(*uParam2);
		if (func_143(uParam3, iVar0))
		{
			iVar1 = 0;
			if (NETWORK::_0x31DAD2CD6D49546E(SCRIPTS::GET_ID_OF_THIS_THREAD()))
			{
				iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
			}
			iVar2 = func_149(uParam3, iVar0);
			func_378(uParam4, uParam3[iVar2 /*36*/], 0, &iVar3, &uVar4);
			if (iVar3 < 1)
			{
				if (!MISC::IS_BIT_SET((*uParam4)[iVar1 /*38*/], 6))
				{
					MISC::SET_BIT(uParam4[iVar1 /*38*/], 6);
				}
			}
			else if (MISC::IS_BIT_SET((*uParam4)[iVar1 /*38*/], 6))
			{
				MISC::CLEAR_BIT(uParam4[iVar1 /*38*/], 6);
			}
			if (!func_214(uParam4[iVar1 /*38*/], iVar0))
			{
				func_380(uParam4[iVar1 /*38*/], func_379("VOTE_SKIP_CONTEXT"), 0, joaat("INPUT_SKIP_CUTSCENE"), 6);
				func_381(uParam4[iVar1 /*38*/], iVar0, !func_86(*iParam1, 8));
				MISC::SET_BIT(uParam4[iVar1 /*38*/], 7);
			}
			if (func_35(uParam2->f_5, 1) || func_86(*iParam1, 0))
			{
				if (!func_382(uParam4[iVar1 /*38*/]))
				{
					func_383(uParam4[iVar1 /*38*/]);
				}
				func_384(uParam4[iVar1 /*38*/]);
			}
			else if (func_385(uParam4[iVar1 /*38*/]) && func_86(uParam0->f_1, 0))
			{
				if (func_150(uParam3[iVar2 /*36*/]) && func_386(uParam4, uParam3[iVar2 /*36*/]) == 0)
				{
					func_26(iParam1, 0);
					func_384(uParam4[iVar1 /*38*/]);
				}
			}
		}
	}
	if (func_86(*iParam1, 0))
	{
		bVar5 = true;
		*bParam7 = 1;
	}
	else if (func_35(uParam2->f_5, 1) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), iParam1->f_9, true) >= 100f)
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_OUT(500);
		}
		else if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (func_86(*iParam1, 0))
			{
				uParam2->f_6 = 2;
				func_246(iParam6, 5);
			}
			return true;
		}
	}
	return false;
}

void func_278(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, true, 32, true);
		}
		NETWORK::_0x4B05B97BA46F419D(0);
		NETWORK::_0x89D803CD48622150(1);
		NETWORK::_0x34BC1E79546BA543(1);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 7, false);
		NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(0, 0, 7);
		NETWORK::_0xDC6AD5C046F33AB4(1, 1);
	}
	else if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_7[iVar0 /*5*/]))
			{
			}
			else
			{
				iVar1 = PLAYER::GET_PLAYER_PED(uParam0->f_7[iVar0 /*5*/]);
				NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar1, true, true, 256);
			}
			iVar0++;
		}
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, true, 32, true);
		NETWORK::_0x89D803CD48622150(0);
	}
}

bool func_279(var uParam0, int iParam1, int iParam2)
{
	return func_281(uParam0, iParam1, iParam2, 600);
}

int func_280(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	iVar0 = ANIMSCENE::_GET_ANIM_SCENE_PED(iParam0, sParam1, bParam2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return iVar0;
	}
	iVar0 = ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iParam0, sParam1, bParam2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return iVar0;
	}
	iVar0 = ANIMSCENE::_GET_ANIM_SCENE_VEHICLE(iParam0, sParam1, bParam2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return iVar0;
	}
	return func_387();
}

bool func_281(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_145(uParam0->f_22, iParam3);
	if ((iParam1 - iParam2) <= iVar0)
	{
		return true;
	}
	return false;
}

bool func_282(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_132(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return true;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return true;
	}
	return false;
}

void func_283(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_284(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iVar0 == iParam1)
	{
		iVar1 = 1;
	}
	func_388(1);
	func_389(iParam0, iParam1, bParam2, iParam3, iVar1, 0);
}

void func_285(var uParam0, int* iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_246(iParam3, 2);
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!PED::IS_PED_INJURED(iVar0) && !func_86(*iParam1, 8))
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
		if (func_390(iVar0, -1959848946))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, false, true);
		}
		iVar1 = iParam1->f_6;
		if (iVar1 >= 0 && iVar1 < 4)
		{
			iVar2 = func_263(iParam1, iVar1);
			if (iVar2 >= 0 && iVar2 < 4)
			{
				iVar3 = uParam0->f_7[iVar2 /*5*/].f_3;
				if (iVar3 < 0 || iVar3 > 2)
				{
					iVar3 = 0;
				}
				if (func_86(uParam2->f_24[iVar1 /*80*/].f_11[iVar3 /*34*/].f_13.f_13, 3))
				{
					func_391(uParam2->f_24[iVar1 /*80*/].f_11[iVar3 /*34*/].f_13.f_16);
				}
				else
				{
					if (!func_86(uParam2->f_24[iVar1 /*80*/].f_11[iVar3 /*34*/].f_13.f_13, 1))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(uParam2->f_24[iVar1 /*80*/].f_11[iVar3 /*34*/].f_13.f_14, 1f);
					}
					if (!func_86(uParam2->f_24[iVar1 /*80*/].f_11[iVar3 /*34*/].f_13.f_13, 2))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(uParam2->f_24[iVar1 /*80*/].f_11[iVar3 /*34*/].f_13.f_15, 1f);
					}
				}
				if (func_86(uParam2->f_24[iVar1 /*80*/].f_11[iVar3 /*34*/].f_13.f_13, 0))
				{
					func_392(uParam2->f_24[iVar1 /*80*/].f_11[iVar3 /*34*/].f_13.f_19, uParam2->f_24[iVar1 /*80*/].f_11[iVar3 /*34*/].f_13.f_20, 1, 1);
				}
			}
		}
	}
	func_393(iParam1);
	func_15(&(iParam1->f_1471), 0, 0);
	func_394(0, 0);
	func_375(1);
	if (!func_35(uParam2->f_18, 128))
	{
		AUDIO::SET_AUDIO_FLAG("EnableCutsceneMusic", false);
	}
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
	STREAMING::CLEAR_FOCUS();
	iParam1->f_9 = { 0f, 0f, 0f };
	Global_1048584 = 0;
	func_91(0);
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		if (func_35(uParam0->f_3, 2))
		{
			if (func_86(*iParam1, 8))
			{
				func_395(64);
				func_395(128);
			}
		}
		else if (func_35(uParam2->f_18, 2048))
		{
			func_246(iParam3, 6);
			if (func_86(*iParam1, 8))
			{
				func_395(64);
				func_395(128);
			}
		}
		else
		{
			CAM::DO_SCREEN_FADE_IN(500);
			if (func_86(*iParam1, 8))
			{
				func_395(64);
				func_395(128);
			}
		}
	}
	func_396();
}

void func_286(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_287(int* iParam0, var uParam1)
{
	if (func_86(*iParam0, 8))
	{
		return false;
	}
	if (func_35(uParam1->f_18, 2048))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return false;
		}
	}
	return true;
}

void func_288(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	if (bParam0)
	{
		func_397(iParam1);
		return;
	}
	if (iParam1 == 2)
	{
		iParam1 = 56;
	}
	iVar0 = iParam1;
	bVar1 = !iVar0 & 4 != false;
	bVar2 = iVar0 & 8 != false;
	bVar3 = iVar0 & 16 != false;
	bVar4 = iVar0 & 32 != false;
	bVar5 = iVar0 & 1024 != false;
	bVar6 = iVar0 & 64 != false;
	func_398(bVar1, bVar2, bVar3, (bVar4 || bVar5), bVar6, 0, bVar5);
}

void func_289(int iParam0)
{
	Global_1102219.f_26.f_12 = iParam0;
}

bool func_290(int iParam0)
{
	return (Global_1102219.f_26.f_7 && iParam0) != 0;
}

bool func_291(int iParam0)
{
	return (Global_1102219.f_26.f_9 && iParam0) != 0;
}

int func_292()
{
	if (Global_1102219 <= 5)
	{
		return Global_1102219;
	}
	if (Global_1102219 <= 22)
	{
		return 4;
	}
	if (Global_1102219 <= 25)
	{
		return 3;
	}
	return 26;
}

void func_293(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	func_89(&(uParam0->f_2));
	func_89(&(uParam0->f_4));
}

void func_294(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 24)
	{
		func_399(uParam0[iVar0 /*4*/]);
		iVar0++;
	}
	uParam0->f_97 = 0;
}

void func_295(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_296(var uParam0)
{
	*uParam0 = "";
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_89(&(uParam0->f_3));
}

void func_297(var uParam0)
{
	int iVar0;

	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = { 0f, 0f, 0f };
	uParam0->f_9 = { 0f, 0f, 0f };
	uParam0->f_12 = { 0f, 0f, 0f };
	uParam0->f_15 = 0f;
	uParam0->f_16 = 0f;
	uParam0->f_17 = joaat("REL_NO_RELATIONSHIP");
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_400(&(uParam0->f_18[iVar0 /*2*/]));
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = 0.25f;
	uParam0->f_33 = 10f;
	uParam0->f_34 = -1f;
	uParam0->f_35 = -1f;
	uParam0->f_36 = 0f;
	uParam0->f_37 = 0f;
	uParam0->f_38 = 0;
}

bool func_298(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (*uParam1 == 255)
	{
		return false;
	}
	if (func_401(*uParam1))
	{
		return false;
	}
	if (MISC::IS_BIT_SET(iParam2, iParam0))
	{
		return false;
	}
	if (bParam3)
	{
		if (!func_35(uParam1->f_1, 1))
		{
			return false;
		}
	}
	return true;
}

int func_299(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1) == iParam0)
			{
				return -1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0) == iParam0)
			{
				return 0;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1) == iParam0)
			{
				return 1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

bool func_300(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_301(int iParam0)
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
		func_402(iParam0);
		return;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_403(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 1;
}

bool func_302(var uParam0)
{
	if (func_35(uParam0->f_1650, 32))
	{
		return true;
	}
	return false;
}

bool func_303(var uParam0, int iParam1)
{
	if (func_153(uParam0->f_1621[iParam1 /*3*/]))
	{
		return false;
	}
	return true;
}

bool func_304(var uParam0, char* sParam1)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_225[iVar0 /*9*/])) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_225[iVar0 /*9*/]), sParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_305(var uParam0, char* sParam1)
{
	struct<8> Var0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	Var0 = { func_323(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(sParam1, &Var0);
}

bool func_306(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

float func_307(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_308(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if (func_235(uParam1))
	{
		return true;
	}
	if (uParam0->f_2 == 3 || uParam0->f_2 == 2)
	{
		return false;
	}
	if (uParam1->f_4 > 10)
	{
		return true;
	}
	iVar0 = func_137(uParam1->f_9.f_2);
	if (!func_238(PLAYER::PLAYER_PED_ID(), uParam2->f_1621[iVar0 /*3*/], 300f, 1, 1))
	{
		return true;
	}
	if (func_236() != 0 && func_223() != func_237())
	{
		return true;
	}
	return false;
}

bool func_309(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	char cVar7[64];

	if (uParam3->f_7 != 3)
	{
		return true;
	}
	iVar0 = 1;
	if (!bParam5 && !VOLUME::_DOES_VOLUME_EXIST(*uParam4))
	{
		vVar1 = { 2f, 2f, 2f };
		vVar4 = { *uParam3 };
		StringCopy(&cVar7, "[MC][CS] CoverLoadArea - ", 64);
		StringConCat(&cVar7, " iCSIdx: ", 64);
		StringIntConCat(&cVar7, iParam0, 64);
		*uParam4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar4, 0f, 0f, uParam3->f_3, vVar1, &cVar7);
		if (VOLUME::_DOES_VOLUME_EXIST(*uParam4))
		{
			TASK::_0x2A10538D0A005E81(*uParam4, 1);
		}
		else
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_310(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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
				return true;
			}
		}
	}
	return false;
}

void func_311(var uParam0, char* sParam1)
{
	int iVar0;

	if (func_306(uParam0, 8192))
	{
		return;
	}
	if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "cutscene@"))
	{
		iVar0 = MISC::_0x94E8CA3DEE952789(sParam1, "@");
		if (MISC::_0x94E8CA3DEE952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_192), {func_404("cutscene@", MISC::_0x5B4A8121A47D844D((iVar0 - 1)), 1, 63)}, 16);
		}
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		MemCopy(&(uParam0->f_192), {func_404("cutscene@", sParam1, 1, 63)}, 16);
	}
	func_227(uParam0, 8192);
}

Vector3 func_312(var uParam0)
{
	return uParam0->f_5;
}

bool func_313(var uParam0, Vector3* vParam1, Vector3* vParam2)
{
	var uVar0;
	int iVar8;
	struct<4> Var9;

	*vParam1 = { 0f, 0f, 0f };
	*vParam2 = { 0f, 0f, 0f };
	MemCopy(&uVar0, {func_405(uParam0)}, 8);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208))
	{
		iVar8 = 0;
		if (func_306(uParam0, 2) && !func_306(uParam0, 67108864))
		{
			iVar8 |= 256;
		}
		uParam0->f_208 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_192), iVar8, &(uParam0->f_209), false, true);
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_208, false))
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_208, func_406(Global_34), &Var9, false, 0, 2))
		{
			*vParam1 = { Var9 };
			*vParam2 = { Var9.f_3 };
		}
		else
		{
			ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(uParam0->f_208, vParam1, vParam2, 2);
		}
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_208);
		return true;
	}
	return false;
}

float func_314(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_315(var uParam0)
{
	return uParam0->f_187;
}

void func_316(var uParam0)
{
	int iVar0;

	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_208, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_225[iVar0 /*9*/])) && (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_208, &(uParam0->f_225[iVar0 /*9*/])) || ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_208, &(uParam0->f_225[iVar0 /*9*/]))))
		{
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_208, &(uParam0->f_225[iVar0 /*9*/]));
		}
		uParam0->f_225[iVar0 /*9*/].f_8 = 0;
		iVar0++;
	}
}

void func_317(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_4))
	{
		if (func_306(uParam0, 16))
		{
			POPULATION::_0xA1CFB35069D23C23(uParam0->f_4);
			POPULATION::_0x74C2B3DC0B294102(uParam0->f_4);
			func_407(uParam0);
			PATHFIND::_0xD17672447692478E(uParam0->f_4, 0);
		}
	}
	if (func_306(uParam0, 8))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_4);
		func_72(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_72(uParam0, 16, 1);
}

float func_318(var uParam0)
{
	return uParam0->f_186;
}

bool func_319(var uParam0, int iParam1)
{
	return (uParam0->f_12 && iParam1) != 0;
}

void func_320(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_408() };
	func_233(uParam0, &Var0);
}

void func_321(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_306(uParam0, 16))
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_4) && !func_409(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_218());
		func_227(uParam0, 8);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_4))
	{
		POPULATION::_0xB56D41A694E42E86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_410(uParam0, uParam0->f_4, 0, 1);
		PATHFIND::_0xC1799FAFD2FDF52B(uParam0->f_4, 0, 0, iParam2);
		func_227(uParam0, 16);
	}
}

void func_322(var uParam0)
{
	if ((!func_306(uParam0, 32768) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208)) && ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_208, false))
	{
		func_270(uParam0);
		func_271(uParam0, 0);
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_208, true))
		{
			if (func_357(uParam0->f_263, 4194304))
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_208, uParam0->f_5, uParam0->f_8, 2);
			}
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_208);
		}
		func_227(uParam0, 32768);
	}
}

struct<8> func_323(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_411(uParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { func_412() };
	}
	return Var0;
}

void func_324(int iParam0, int iParam1, var uParam2)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam2->f_18))
	{
		VOLUME::_DELETE_VOLUME(uParam2->f_18);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_2))
	{
		AICOVERPOINT::_0x1A7A802B2301EDC0(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam2->f_2));
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam2->f_19))
	{
		VOLUME::_DELETE_VOLUME(uParam2->f_19);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_1))
	{
		AICOVERPOINT::_0x1A7A802B2301EDC0(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam2->f_1));
	}
}

void func_325(int* iParam0, var uParam1, var uParam2)
{
	if (func_35(uParam1->f_5, 4))
	{
		return;
	}
	if (!func_35(uParam1->f_5, 2))
	{
		return;
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (!func_328(uParam1))
	{
		return;
	}
	if (uParam2->f_3 < 0)
	{
		return;
	}
	if (!func_14(&(iParam0->f_1467)))
	{
		func_132(&(iParam0->f_1467), 1, 0);
	}
	if (uParam2->f_3 == 0 || func_36(&(iParam0->f_1467), 1, 0) >= uParam2->f_3)
	{
		func_82(&(uParam1->f_5), 4);
	}
}

void func_326(int* iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	float fVar4;

	if (!func_328(uParam1))
	{
		return;
	}
	if (!func_35(uParam2->f_18, 2))
	{
		return;
	}
	bVar0 = true;
	iVar1 = PLAYER::PLAYER_PED_ID();
	bVar2 = !func_35(uParam2->f_18, 64);
	iVar3 = func_137(uParam1->f_1.f_2);
	if (!func_35(uParam2->f_18, 4))
	{
		func_413(iVar1, uParam2->f_1621[iVar3 /*3*/], 0, uParam2->f_4, uParam2->f_5, uParam2->f_6, uParam2->f_7, 1, 0, bVar2, 0);
	}
	if (!func_35(uParam2->f_18, 16))
	{
		fVar4 = (BUILTIN::TO_FLOAT(uParam2->f_8) / 1000f);
		if (func_414(iVar1, uParam2->f_1621[iVar3 /*3*/], &(iParam0->f_1475), uParam2->f_7, fVar4, 0, 0, 0, bVar2))
		{
		}
	}
	if (!func_35(uParam2->f_18, 32))
	{
		if (!func_86(*iParam0, 5))
		{
			WEAPON::_HIDE_PED_WEAPONS(iVar1, 2, false);
			TASK::TASK_SWAP_WEAPON(iVar1, 1, 1, 0, 0);
			func_26(iParam0, 5);
		}
	}
	if (!func_35(uParam2->f_18, 8))
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		if (CAM::_0xA2B1C7EF759A63CE() < 1f)
		{
			bVar0 = false;
		}
	}
	if (bVar0 && !func_86(*iParam0, 6))
	{
		func_26(iParam0, 6);
	}
}

void func_327(int iParam0)
{
	if (Global_1940144.f_105.f_2 >= iParam0)
	{
		return;
	}
	Global_1940144.f_105.f_2 = iParam0;
}

bool func_328(var uParam0)
{
	if (!func_120(uParam0))
	{
		return false;
	}
	if (uParam0->f_4 <= 1 || uParam0->f_4 >= 10)
	{
		return false;
	}
	return true;
}

bool func_329(var uParam0, var uParam1, int* iParam2, var uParam3, int iParam4, int iParam5, int iParam6, var uParam7, var uParam8, var uParam9, int iParam10)
{
	char[] cVar0[8];
	var uVar4;
	var uVar5;
	int iVar8;
	int iVar9;
	int iVar10;

	uParam7->f_1.f_3 = func_415(uParam0, uParam7->f_1.f_1, iParam6, iParam5, iParam4);
	func_416(uParam0, &(uParam7->f_1), uParam9);
	uVar5 = -1;
	while (iVar8 < 15)
	{
		iVar9 = uParam7->f_1.f_10;
		switch (uParam7->f_1.f_10)
		{
			case 0:
				iVar10 = func_417(uParam0, iParam2, iParam4, iParam5, iParam6, &(uParam7->f_1), &uVar4, iParam10);
				if (iVar10 == 1)
				{
					iVar9 = 1;
				}
				else if (iVar10 == 2)
				{
					iVar9 = 14;
				}
				break;
			case 1:
				iVar10 = func_418(iParam2, uParam7, &(uParam8->f_1651[iParam4 /*4*/]));
				if (iVar10 != 0)
				{
					if (iVar10 == 1)
					{
						func_26(&(uParam7->f_1.f_4), 0);
					}
					iVar9 = 2;
				}
				break;
			case 2:
				func_269(iParam2, uParam8, iParam4, iParam6, &cVar0, 0, 0);
				if (func_419(*uParam1))
				{
					if (func_420(uParam3, iParam2, &(uParam7->f_1), iParam4, iParam6, uParam8, &(uParam9->f_11[uParam1->f_3 /*34*/]), &cVar0, 1) != 0)
					{
						iVar9 = 4;
					}
				}
				break;
			case 4:
				if (uParam3->f_4 >= 7)
				{
					if (!func_421(&(uParam7->f_1)) || func_422(&(uParam7->f_1)))
					{
						iVar9 = 5;
					}
				}
				break;
			case 5:
				if (!ENTITY::DOES_ENTITY_EXIST(uParam7->f_1.f_2) || func_423(&(uParam7->f_1), iParam4, iParam6, 1, &uVar5))
				{
					iVar9 = 6;
				}
				break;
			case 6:
				if (!ENTITY::DOES_ENTITY_EXIST(uParam7->f_1.f_2) || func_424(iParam2, iParam4, iParam6, &(uParam7->f_1), &(uParam9->f_11[uParam1->f_3 /*34*/]), 1))
				{
					iVar9 = 7;
				}
				break;
			case 7:
				if (uParam3->f_4 > 9)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam7->f_1.f_2))
					{
						func_425(uParam7->f_1.f_2, 0);
					}
					iVar9 = 8;
				}
				else
				{
					return true;
				}
				break;
			case 8:
				if ((func_86(uParam0->f_1, 0) || func_35(uParam3->f_5, 1)) && func_423(&(uParam7->f_1), iParam4, iParam6, 0, &uVar5))
				{
					iVar9 = 9;
				}
				break;
			case 9:
				if (func_424(iParam2, iParam4, iParam6, &(uParam7->f_1), &(uParam9->f_11[uParam1->f_3 /*34*/]), 0))
				{
					func_194(&(uParam7->f_1.f_5));
					func_193(&(uParam7->f_1.f_13));
					iVar9 = 10;
				}
				break;
			case 10:
				func_269(iParam2, uParam8, iParam4, iParam6, &cVar0, 0, 0);
				if (func_420(uParam3, iParam2, &(uParam7->f_1), iParam4, iParam6, uParam8, &(uParam9->f_11[uParam1->f_3 /*34*/].f_13), &cVar0, 0) != 0)
				{
					iVar9 = 12;
				}
				break;
			case 12:
				if (func_423(&(uParam7->f_1), iParam4, iParam6, 0, &uVar5))
				{
					iVar9 = 13;
				}
				break;
			case 13:
				if (func_424(iParam2, iParam4, iParam6, &(uParam7->f_1), &(uParam9->f_11[uParam1->f_3 /*34*/].f_13), 0))
				{
					iVar9 = 14;
				}
				break;
			case 14:
				return true;
		}
		if (iVar9 != uParam7->f_1.f_10)
		{
			uParam7->f_1.f_10 = iVar9;
			iVar8++;
		}
	else
	{
		}
	else
	{
		}
	}
	return false;
}

void func_330(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_10 > 0 && uParam0->f_10 <= 2)
	{
		*iParam1++;
		*iParam2++;
	}
	else if (uParam0->f_10 > 2 && uParam0->f_10 <= 10)
	{
		*iParam2++;
	}
}

bool func_331(var uParam0, int* iParam1, var uParam2, int iParam3, int iParam4, int iParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10)
{
	int iVar0;
	char[] cVar1[8];
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = 0;
	uParam6->f_3 = func_415(uParam0, uParam6->f_1, iParam5, iParam4, iParam3);
	while (iVar5 < 15)
	{
		iVar6 = uParam6->f_10;
		switch (uParam6->f_10)
		{
			case 0:
				iVar7 = func_417(uParam0, iParam1, iParam3, iParam4, iParam5, uParam6, &iVar0, iParam10);
				if (iVar7 == 1)
				{
					iVar6 = 1;
				}
				else if (iVar7 == 2)
				{
					iVar6 = 14;
				}
				break;
			case 1:
				iVar7 = func_426(iParam1, uParam6, uParam8, sParam9);
				if (iVar7 != 0)
				{
					if (iVar7 == 1)
					{
						func_26(&(uParam6->f_4), 0);
					}
					iVar6 = 2;
				}
				break;
			case 2:
				func_269(iParam1, uParam7, iParam3, iParam5, &cVar1, 0, 0);
				if (func_420(uParam2, iParam1, uParam6, iParam3, iParam5, uParam7, &(uParam8->f_3), &cVar1, 1) != 0)
				{
					iVar6 = 4;
				}
				break;
			case 4:
				if (uParam2->f_4 >= 7)
				{
					if (!func_421(uParam6) || func_422(uParam6))
					{
						iVar6 = 5;
					}
				}
				break;
			case 5:
				if (!ENTITY::DOES_ENTITY_EXIST(uParam6->f_2) || func_423(uParam6, iParam3, iParam5, 1, uParam8))
				{
					iVar6 = 6;
				}
				break;
			case 6:
				if (!ENTITY::DOES_ENTITY_EXIST(uParam6->f_2) || func_424(iParam1, iParam3, iParam5, uParam6, &(uParam8->f_3), 1))
				{
					iVar6 = 7;
				}
				break;
			case 7:
				if (uParam2->f_4 > 9)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam6->f_2))
					{
						func_425(uParam6->f_2, 0);
					}
					else if (func_86(uParam6->f_4, 1))
					{
						NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(uParam6->f_1, true, true, 7);
					}
					iVar6 = 8;
				}
				else
				{
					return true;
				}
				break;
			case 8:
				if ((func_86(uParam0->f_1, 0) || func_35(uParam2->f_5, 1)) && func_423(uParam6, iParam3, iParam5, 0, uParam8))
				{
					iVar6 = 9;
				}
				break;
			case 9:
				if (func_424(iParam1, iParam3, iParam5, uParam6, &(uParam8->f_3), 0))
				{
					func_194(&(uParam6->f_5));
					func_193(&(uParam6->f_13));
					iVar6 = 10;
				}
				break;
			case 10:
				func_269(iParam1, uParam7, iParam3, iParam5, &cVar1, 0, 0);
				if (func_420(uParam2, iParam1, uParam6, iParam3, iParam5, uParam7, &(uParam8->f_16), &cVar1, 0) != 0)
				{
					iVar6 = 12;
				}
				break;
			case 12:
				if (func_423(uParam6, iParam3, iParam5, 0, uParam8))
				{
					iVar6 = 13;
				}
				break;
			case 13:
				if (func_424(iParam1, iParam3, iParam5, uParam6, &(uParam8->f_16), 0))
				{
					iVar6 = 14;
				}
				break;
			case 14:
				return true;
		}
		if (iVar6 != uParam6->f_10)
		{
			uParam6->f_10 = iVar6;
			iVar5++;
		}
	else
	{
		}
	else
	{
		}
	}
	return false;
}

bool func_332(int* iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, var uParam6, int iParam7, var uParam8, var uParam9, var uParam10, var uParam11, char* sParam12, int iParam13)
{
	var uVar0;
	int iVar4;
	int iVar5;
	int iVar6;

	func_427(uParam6);
	uParam6->f_3 = func_415(uParam1, uParam6->f_1, iParam5, iParam4, iParam3);
	while (iVar4 < 15)
	{
		iVar5 = uParam6->f_10;
		switch (uParam6->f_10)
		{
			case 0:
				iVar6 = func_417(uParam1, iParam0, iParam3, iParam4, iParam5, uParam6, iParam7, iParam13);
				if (iVar6 == 1)
				{
					iVar5 = 1;
				}
				else if (iVar6 == 2)
				{
					iVar5 = 14;
				}
				break;
			case 1:
				iVar6 = func_426(iParam0, uParam6, uParam9, sParam12);
				if (iVar6 != 0)
				{
					if (iVar6 == 1)
					{
						func_26(&(uParam6->f_4), 0);
					}
					iVar5 = 2;
				}
				break;
			case 2:
				func_269(iParam0, uParam8, iParam3, iParam5, &uVar0, 0, 0);
				func_428(uParam2, iParam0, uParam6, iParam3, iParam5, uParam8, uParam10, &uVar0, 1, 0, 1);
				iVar5 = 4;
				break;
			case 4:
				if (uParam2->f_4 >= 7)
				{
					if (!func_421(uParam6) || func_429(uParam6, *iParam7, iParam13))
					{
						iVar5 = 5;
					}
				}
				break;
			case 5:
				if (!ENTITY::DOES_ENTITY_EXIST(uParam6->f_2) || func_430(uParam6, iParam3, iParam5, 1, uParam9))
				{
					iVar5 = 6;
				}
				break;
			case 6:
				if (func_431(uParam10, uParam6, iParam3, iParam5, 1))
				{
					iVar5 = 7;
				}
				break;
			case 7:
				if (uParam2->f_4 > 9)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam6->f_2))
					{
						func_425(uParam6->f_2, 0);
					}
					else if (func_86(uParam9->f_1, 1))
					{
						NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(uParam6->f_1, true, true, 7);
					}
					iVar5 = 8;
				}
				else
				{
					return true;
				}
				break;
			case 8:
				if ((func_86(uParam1->f_1, 0) || func_35(uParam2->f_5, 1)) && func_430(uParam6, iParam3, iParam5, 0, uParam9))
				{
					func_194(&(uParam6->f_5));
					iVar5 = 10;
				}
				break;
			case 10:
				func_269(iParam0, uParam8, iParam3, iParam5, &uVar0, 0, 0);
				func_428(uParam2, iParam0, uParam6, iParam3, iParam5, uParam8, uParam11, &uVar0, 0, 0, 1);
				iVar5 = 12;
				break;
			case 12:
				if (func_430(uParam6, iParam3, iParam5, 0, uParam9))
				{
					iVar5 = 13;
				}
				break;
			case 13:
				if (func_431(uParam11, uParam6, iParam3, iParam5, 0))
				{
					iVar5 = 14;
				}
				break;
			case 14:
				return true;
		}
		if (iVar5 != uParam6->f_10)
		{
			uParam6->f_10 = iVar5;
			iVar4++;
		}
	else
	{
		}
	else
	{
		}
	}
	return false;
}

void func_333(var uParam0, var uParam1, struct<2> Param2, var uParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
	{
		return;
	}
	func_432(uParam0, uParam1, 6, 10, MISC::GET_HASH_KEY("Breaking_Front_Left_Wheel"), 0);
	func_432(uParam0, uParam1, 7, 11, MISC::GET_HASH_KEY("Breaking_Front_Right_Wheel"), 1);
	func_432(uParam0, uParam1, 8, 12, MISC::GET_HASH_KEY("Breaking_Rear_Left_Wheel"), 2);
	func_432(uParam0, uParam1, 9, 13, MISC::GET_HASH_KEY("Breaking_Rear_Right_Wheel"), 3);
	if (func_86(Param2.f_1, 3))
	{
		VEHICLE::_0x201B8ED4FF7FE9F5(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam1->f_2));
	}
	else if (func_86(Param2.f_1, 4))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_2, -913345033))
		{
			VEHICLE::_0x201B8ED4FF7FE9F5(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam1->f_2));
		}
		else
		{
			VEHICLE::_0x41CDA90EE3450921(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam1->f_2));
		}
	}
}

bool func_334(int* iParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9)
{
	char[] cVar0[8];
	struct<6> Var4;
	int iVar10;
	var uVar11;
	int iVar14;
	int iVar15;
	int iVar16;

	Var4.f_5 = -1082130432;
	uVar11 = -1;
	uParam5->f_3 = func_415(uParam1, uParam5->f_1, iParam4, -1, iParam3);
	while (iVar14 < 15)
	{
		iVar15 = uParam5->f_10;
		switch (uParam5->f_10)
		{
			case 0:
				if (ENTITY::DOES_ENTITY_EXIST(uParam5->f_1))
				{
					iVar15 = 1;
				}
				else
				{
					return true;
				}
				break;
			case 1:
				iVar16 = func_433(iParam0, uParam5, iParam3, uParam6);
				if (iVar16 != 0)
				{
					if (iVar16 == 1)
					{
						func_26(&(uParam5->f_4), 0);
					}
					iVar15 = 2;
				}
				break;
			case 2:
				func_269(iParam0, uParam6, iParam3, 0, &cVar0, 0, 0);
				if (func_428(uParam2, iParam0, uParam5, iParam3, iParam4, uParam6, &Var4, &cVar0, 1, 1, 1))
				{
					iVar15 = 3;
				}
				break;
			case 3:
				if (iParam7 == 0 || func_86(uParam5->f_5, 0))
				{
					iVar15 = 4;
				}
				break;
			case 4:
				if (uParam2->f_4 >= 7)
				{
					if (!func_421(uParam5) || func_429(uParam5, iVar10, iParam9))
					{
						iVar15 = 5;
					}
				}
				break;
			case 5:
				if (!ENTITY::DOES_ENTITY_EXIST(uParam5->f_2) || func_430(uParam5, iParam3, iParam4, 1, &uVar11))
				{
					iVar15 = 7;
				}
				break;
			case 7:
				if (uParam2->f_4 > 9)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam5->f_2))
					{
						func_425(uParam5->f_2, 0);
					}
					iVar15 = 8;
				}
				else
				{
					return true;
				}
				break;
			case 8:
				if (!ENTITY::DOES_ENTITY_EXIST(uParam5->f_1) || ((func_86(uParam1->f_1, 0) || func_35(uParam2->f_5, 1)) && func_430(uParam5, iParam3, iParam4, 0, &uVar11)))
				{
					func_194(&(uParam5->f_5));
					iVar15 = 10;
				}
				break;
			case 10:
				func_269(iParam0, uParam6, iParam3, 0, &cVar0, 0, 0);
				if (func_428(uParam2, iParam0, uParam5, iParam3, 0, uParam6, &Var4, &cVar0, 0, 1, 1))
				{
					iVar15 = 11;
				}
				break;
			case 11:
				if (iParam8 == 0 || func_86(uParam5->f_5, 0))
				{
					iVar15 = 12;
				}
				break;
			case 12:
				if (!ENTITY::DOES_ENTITY_EXIST(uParam5->f_1) || func_430(uParam5, iParam3, iParam4, 0, &uVar11))
				{
					iVar15 = 14;
				}
				break;
			case 14:
				return true;
		}
		if (iVar15 != uParam5->f_10)
		{
			uParam5->f_10 = iVar15;
			iVar14++;
		}
	else
	{
		}
	else
	{
		}
	}
	return false;
}

bool func_335(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219.f_3 && iParam0) != 0;
	}
	return (Global_1100469[iParam1 /*53*/].f_3 && iParam0) != 0;
}

int func_336()
{
	return Global_1915715.f_20241;
}

void func_337(int iParam0, bool bParam1)
{
	if (!func_434(iParam0))
	{
		return;
	}
	if ((bParam1 && func_435(iParam0, 512)) || (!bParam1 && !func_435(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_436(iParam0, 512);
	}
	else
	{
		func_437(iParam0, 512);
	}
	if (func_438(iParam0))
	{
		INVENTORY::_0x9B4E793B1CB6550A();
	}
}

bool func_338()
{
	return func_439(4096);
}

bool func_339(int iParam0, int iParam1)
{
	return MISC::ABSI((MISC::_GET_SYSTEM_TIME() - iParam0)) >= iParam1;
}

bool func_340(int iParam0)
{
	return (Global_1102219.f_26.f_9 && iParam0) == iParam0;
}

bool func_341(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (iParam3 == 0 && !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (iParam3 == 0 && (ENTITY::IS_ENTITY_DEAD(iParam1) && !bParam5))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = func_440(iParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return false;
	}
	iVar0 = func_441(uParam0, iParam1);
	if (iVar0 != -1)
	{
		if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_17[iVar0 /*12*/].f_1), sParam2))
		{
		}
		else if (uParam0->f_17[iVar0 /*12*/].f_9 != iParam3)
		{
		}
		else if (uParam0->f_17[iVar0 /*12*/].f_10 != iParam4)
		{
		}
		else
		{
			return true;
		}
	}
	else
	{
		iVar1 = func_442(uParam0, sParam2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != iParam1)
		{
			func_443(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_444(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_17[iVar0 /*12*/] = iParam1;
		StringCopy(&(uParam0->f_17[iVar0 /*12*/].f_1), sParam2, 64);
		uParam0->f_17[iVar0 /*12*/].f_9 = iParam3;
		uParam0->f_17[iVar0 /*12*/].f_10 = iParam4;
		if (bParam5)
		{
			func_344(&(uParam0->f_17[iVar0 /*12*/]), 2);
		}
		else
		{
			func_445(&(uParam0->f_17[iVar0 /*12*/]), 2);
		}
		return true;
	}
	return false;
}

bool func_342(int iParam0)
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
	return PED::_IS_THIS_MODEL_A_HORSE(iVar0);
}

bool func_343(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

void func_344(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_345(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (iParam3 == 1)
	{
		if (ANIMSCENE::_0x9D1ECA9337BE9FC3(uParam0->f_208, sParam1))
		{
			iParam3 = 0;
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_208, sParam1, iParam2, iParam3);
}

void func_346(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	PED::CLEAR_PED_BLOOD_DAMAGE(iParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		PED::_CLEAR_PED_BLOOD_DAMAGE_FACIAL(iParam0, iVar0);
		iVar0++;
	}
}

int func_347(var uParam0)
{
	return *uParam0;
}

void func_348(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_208, false)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_208)) || func_306(uParam0, 512))
	{
		if (!func_446(uParam0->f_264, 128))
		{
			func_447();
		}
		return;
	}
	if ((func_364(uParam0, Global_34, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_208, func_406(Global_34)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_208, func_406(Global_34)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_208))
	{
		if (!func_446(uParam0->f_264, 128))
		{
			func_447();
		}
		return;
	}
	bVar0 = true;
	iVar1 = UIFEED::_0xC17F69E1418CD11F(9);
	if (iVar1 != 0)
	{
		if (func_448(iVar1))
		{
			if (func_449(Global_26539, 0))
			{
				bVar0 = false;
			}
		}
	}
	bVar2 = false;
	if (func_446(uParam0->f_264, 512))
	{
		bVar2 = true;
	}
	if (!func_306(uParam0, 2) && func_450(bVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_208);
		func_447();
	}
}

void func_349(var uParam0, char* sParam1)
{
	struct<8> Var0;
	char cVar8[32];

	if (func_347(uParam0) == 2 && (func_357(uParam0->f_263, 16384) || func_306(uParam0, 268435456)))
	{
		Var0 = { func_323(uParam0) };
		func_265(uParam0, &Var0);
	}
	func_451(uParam0, sParam1);
	if (func_306(uParam0, 131072))
	{
		func_452(uParam0, 0);
	}
	if (func_453())
	{
		func_454(1);
	}
	func_321(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 32);
	func_455(uParam0, cVar8);
	func_359(1, 0);
	func_316(uParam0);
	if (func_351(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_188);
	}
	func_456(uParam0);
	func_271(uParam0, 1);
	if (func_357(uParam0->f_263, 4194304))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_208, uParam0->f_5, uParam0->f_8, 2);
	}
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_208);
	Global_26538 = uParam0->f_208;
	StringCopy(&Global_26540, sParam1, 24);
}

void func_350(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_353(&(uParam0->f_1));
}

bool func_351(var uParam0, int iParam1)
{
	return (uParam0->f_191 && iParam1) != 0;
}

void func_352(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_323(uParam0) };
	func_233(uParam0, &Var0);
}

void func_353(float fParam0)
{
	func_457(fParam0, 0f);
}

bool func_354(float fParam0)
{
	return func_458(*fParam0, 1);
}

void func_355(float fParam0, bool bParam1)
{
	if (bParam1 || !func_354(fParam0))
	{
		func_353(fParam0);
	}
}

float func_356(float fParam0)
{
	if (!func_354(fParam0))
	{
		return fParam0->f_1;
	}
	if (func_459(fParam0))
	{
		return fParam0->f_2;
	}
	return (func_460() - fParam0->f_1);
}

bool func_357(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_358(bool bParam0)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), bParam0, false, 256);
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 32, true);
}

void func_359(bool bParam0, int iParam1)
{
	if (func_461())
	{
		UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_462())
		{
			func_463(1);
		}
	}
	AUDIO::_0x36559148B78853B3(0, iParam1, 0);
}

void func_360(var uParam0)
{
	vector3 vVar0;

	if (!func_306(uParam0, 4))
	{
		if (func_357(uParam0->f_263, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { func_464(uParam0) };
		if (!func_357(uParam0->f_263, 524288))
		{
			func_465(&(uParam0->f_275));
		}
		func_466(&(uParam0->f_263), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_467(uParam0, 0f, 0f, 0f);
		func_468(uParam0);
		func_469(uParam0);
		func_470(uParam0, 0f, 0f, 0f, 0, 0);
		func_471(uParam0);
		func_227(uParam0, 4);
		func_472(uParam0, 0);
		func_473(Global_34, 65601, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_276)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_276));
		}
	}
}

bool func_361(var uParam0, int iParam1)
{
	if (func_306(uParam0, 262144))
	{
		return false;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208))
	{
		return false;
	}
	if (!ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_208, "ExportCamera"))
	{
		return false;
	}
	if ((ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_208, "ExportCamera") || (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_208, "ExportCamera") && iParam1)) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uParam0->f_208))
	{
		func_227(uParam0, 262144);
		func_472(uParam0, 1);
		return true;
	}
	return false;
}

int func_362(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_208, false))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_DURATION(uParam0->f_208) * 1000f));
}

int func_363(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_208, false))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_208) * 1000f));
}

bool func_364(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0 /*12*/]) && uParam0->f_17[iVar0 /*12*/] == iParam1) && func_343(&(uParam0->f_17[iVar0 /*12*/]), iParam2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_365(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208))
	{
		return true;
	}
	if (ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_208, 0))
	{
		if (func_306(uParam0, 524288))
		{
			ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
		}
		return true;
	}
	if (func_306(uParam0, 1048576) && ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uParam0->f_208))
	{
		return true;
	}
	if ((func_446(uParam0->f_264, 1024) && ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_208, "ExportCamera")) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_208, "ExportCamera"))
	{
		return true;
	}
	return false;
}

void func_366(var uParam0)
{
	if (((func_306(uParam0, 1073741824 /* Float: 2f */) && !func_306(uParam0, 524288)) && func_306(uParam0, 512)) && CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(uParam0->f_292);
	}
}

void func_367(var uParam0)
{
	if (!func_306(uParam0, 536870912))
	{
		func_472(uParam0, 1);
		func_368(&(uParam0->f_264), uParam0->f_275);
		func_227(uParam0, 536870912);
	}
	if (func_306(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_474(uParam0);
	func_350(uParam0, 1);
	func_317(uParam0);
	func_266(uParam0);
	func_475(uParam0);
	func_476(uParam0, 4);
	func_320(uParam0);
	func_452(uParam0, 1);
	func_316(uParam0);
	func_477(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_208) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_208))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_208);
	}
	func_478(!func_446(uParam0->f_264, 128));
	if (!func_446(uParam0->f_264, 128))
	{
		func_447();
	}
}

void func_368(var uParam0, int iParam1)
{
	if (Global_1940258.f_6)
	{
		return;
	}
	func_479(2000);
	Global_13 = 0;
	if (!func_446(*uParam0, 2048))
	{
		func_480();
	}
	ENTITY::SET_ENTITY_INVINCIBLE(Global_34, func_446(*uParam0, 8));
	if (!func_446(*uParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (func_446(*uParam0, 2) || func_446(*uParam0, 4))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!func_446(*uParam0, 16))
	{
		func_481(1);
	}
	if ((iParam1 != 0 && func_482(iParam1) != -525676072) && !func_446(*uParam0, 32))
	{
		func_483(Global_34, -1144282354, 0, 0, 0);
	}
	else if (func_484(joaat("MPC_HIDE_ACTION_HAT")) != -1)
	{
		func_483(Global_34, joaat("MPC_HIDE_ACTION_HAT"), 0, 0, 0);
	}
	func_485(Global_34, 98369, 1, 1, 0);
	*uParam0 = 0;
}

void func_369()
{
	Global_1940258.f_46 = 1;
}

bool func_370(int iParam0)
{
	return func_486(&(Global_524288.f_6), iParam0);
}

void func_371(bool bParam0)
{
	if (bParam0)
	{
		Global_1940311 = 1;
	}
	else
	{
		Global_1940311 = 2;
	}
}

void func_372()
{
	Global_1913501 = 1;
}

void func_373(int iParam0)
{
	if (MISC::IS_BIT_SET(iLocal_14, iParam0))
	{
	}
	else
	{
		MISC::SET_BIT(&iLocal_14, iParam0);
		HUD::_HIDE_HUD_COMPONENT(func_487(iParam0));
	}
}

void func_374(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 1;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_375(bool bParam0)
{
	func_488(46, !bParam0);
}

void func_376()
{
	func_489(0);
}

void func_377(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1071686.f_7 = 1;
	if ((Global_1296859.f_21 - Global_1071686.f_9) > 2)
	{
		if (bParam2)
		{
			func_490(20f);
		}
	}
	Global_1071686.f_9 = Global_1296859.f_21;
	if (bParam0)
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else
		{
			iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				PED::SET_PED_RESET_FLAG(iVar1, 96, true);
			}
		}
		iVar2++;
	}
	if (func_491())
	{
		NETWORK::_0x236905C700FDB54D();
	}
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 25, true);
	CAM::_0x3C8F74E8FE751614();
	CAM::_0x634F4A0562CF19B8();
	func_492(250);
	if (bParam1)
	{
		HUD::_0x5651516D947ABC53();
	}
}

void func_378(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	*iParam3 = 0;
	*uParam4 = 0;
	iVar0 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	iVar2 = 0;
	while (iVar2 <= (*uParam0 - 1))
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar2);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
		}
		else if (MISC::IS_BIT_SET((*uParam0)[iVar2 /*38*/], 0) && !MISC::IS_BIT_SET((*uParam0)[iVar2 /*38*/], 8))
		{
			*uParam4++;
			if (SCRIPTS::_0x0A79C81C418F5D38(&(uParam1->f_29[iParam2]), iVar2))
			{
				if (iVar0 == NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1))
				{
					uParam1->f_6 = iParam2;
				}
				*iParam3++;
			}
		}
		iVar2++;
	}
	if (uParam1->f_14[iParam2] > 0)
	{
		*uParam4 = uParam1->f_14[iParam2];
	}
}

Vector3 func_379(char* sParam0)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

void func_380(int* iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	iParam0->f_9[iParam4 /*3*/] = { vParam1 };
	iParam0->f_27[iParam4] = iParam5;
	iParam0->f_32[iParam4] = iParam6;
	MISC::SET_BIT(iParam0, 5);
}

void func_381(int* iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, 0);
	}
	iParam0->f_2 = iParam1;
}

bool func_382(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 8);
}

void func_383(int* iParam0)
{
	MISC::SET_BIT(iParam0, 8);
}

void func_384(int* iParam0)
{
	int iVar0;

	if (MISC::IS_BIT_SET(*iParam0, 3) && !MISC::IS_BIT_SET(*iParam0, 4))
	{
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (func_493(uLocal_15[iVar0]))
			{
				func_494(uLocal_15[iVar0], 0, 1, 1);
				func_495(uLocal_15[iVar0], 0, 1);
				func_496(&(uLocal_15[iVar0]), 1, 1);
			}
			iVar0++;
		}
		MISC::SET_BIT(iParam0, 4);
	}
}

bool func_385(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

int func_386(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (MISC::IS_BIT_SET(uParam1->f_1, 8))
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (SCRIPTS::_0x0A79C81C418F5D38(&(uParam1->f_29[iVar1]), iVar0))
			{
				return iVar1;
			}
			iVar1++;
		}
		return uParam1->f_5;
	}
	if ((uParam0[iVar0 /*38*/])->f_1 != -1)
	{
		if (uParam1->f_19[(uParam0[iVar0 /*38*/])->f_1])
		{
			return (uParam0[iVar0 /*38*/])->f_1;
		}
	}
	return uParam1->f_4;
}

int func_387()
{
	return -1;
}

void func_388(bool bParam0)
{
	if (bParam0)
	{
		func_252(32);
	}
	else
	{
		func_395(32);
	}
}

void func_389(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		iParam4 = 1;
	}
	func_289(iParam0);
	func_395(1024);
	if (bParam5)
	{
		func_252(16);
	}
	func_497(iParam1);
	func_498(iParam4);
	if (bParam2)
	{
		Global_1102219.f_26.f_4 = 1;
		Global_1102219.f_26.f_5 = iParam3;
	}
}

bool func_390(int iParam0, int iParam1)
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

void func_391(vector3 vParam0)
{
	if (!Global_1940258.f_6)
	{
		func_499(vParam0);
		func_500(vParam0);
	}
}

void func_392(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar1 = PLAYER::PLAYER_ID();
	iVar2 = PLAYER::PLAYER_PED_ID();
	if (PED::IS_PED_ON_MOUNT(iVar2))
	{
		iVar3 = PED::GET_MOUNT(iVar2);
		if (!PED::IS_PED_INJURED(iVar3))
		{
			iVar0 = iVar3;
		}
		else
		{
			iVar0 = iVar2;
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(iVar2, false))
	{
		iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar2, false);
		if (ENTITY::_IS_ENTITY_FROZEN(iVar4))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar4, false);
		}
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar4, (fParam0 * 3f));
		return;
	}
	else
	{
		iVar0 = iVar2;
	}
	if (ENTITY::_IS_ENTITY_FROZEN(iVar0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
	}
	PED::FORCE_PED_MOTION_STATE(iVar0, func_501(fParam0), false, iParam2, bParam3);
	PLAYER::SIMULATE_PLAYER_INPUT_GAIT(iVar1, fParam0, iParam1, ENTITY::GET_ENTITY_HEADING(iVar0), false, false);
}

void func_393(int* iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_14[iVar0 /*21*/].f_1.f_2))
		{
			ENTITY::DELETE_ENTITY(&(iParam0->f_14[iVar0 /*21*/].f_1.f_2));
		}
		iParam0->f_14[iVar0 /*21*/].f_1.f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_99[iVar0 /*20*/].f_2))
		{
			ENTITY::DELETE_ENTITY(&(iParam0->f_99[iVar0 /*20*/].f_2));
		}
		iParam0->f_99[iVar0 /*20*/].f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_500[iVar0 /*13*/].f_2))
		{
			ENTITY::DELETE_ENTITY(&(iParam0->f_500[iVar0 /*13*/].f_2));
		}
		iParam0->f_500[iVar0 /*13*/].f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_761[iVar0 /*13*/].f_2))
		{
			ENTITY::DELETE_ENTITY(&(iParam0->f_761[iVar0 /*13*/].f_2));
		}
		iParam0->f_761[iVar0 /*13*/].f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_892[iVar0 /*13*/].f_2))
		{
			ENTITY::DELETE_ENTITY(&(iParam0->f_892[iVar0 /*13*/].f_2));
		}
		iParam0->f_892[iVar0 /*13*/].f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1023[iVar0 /*13*/].f_2))
		{
			ENTITY::DELETE_ENTITY(&(iParam0->f_1023[iVar0 /*13*/].f_2));
		}
		iParam0->f_1023[iVar0 /*13*/].f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1089[iVar0 /*14*/].f_2))
		{
			iVar1 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0->f_1089[iVar0 /*14*/].f_2);
			VEHICLE::DELETE_MISSION_TRAIN(&iVar1);
		}
		iParam0->f_1089[iVar0 /*14*/].f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1104[iVar0 /*15*/].f_2))
		{
			ENTITY::DELETE_ENTITY(&(iParam0->f_1104[iVar0 /*15*/].f_2));
		}
		iParam0->f_1104[iVar0 /*15*/].f_2 = 0;
		iVar0++;
	}
}

void func_394(int iParam0, bool bParam1)
{
	if (MISC::IS_BIT_SET(iLocal_14, iParam0) || bParam1)
	{
		MISC::CLEAR_BIT(&iLocal_14, iParam0);
		HUD::_DISPLAY_HUD_COMPONENT(func_487(iParam0));
	}
}

void func_395(int iParam0)
{
	if (!func_502(iParam0))
	{
		return;
	}
	Global_1102219.f_26.f_9 = (Global_1102219.f_26.f_9 - (Global_1102219.f_26.f_9 && iParam0));
}

void func_396()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1952637.f_2977)
	{
		if (!Global_1952637.f_2977.f_1[iVar0 /*2*/])
		{
		}
		else if (PED::_0x93FFD92F05EC32FD(Global_1952637.f_2977.f_1[iVar0 /*2*/].f_1))
		{
			PED::_0x13E7320C762F0477(Global_1952637.f_2977.f_1[iVar0 /*2*/].f_1);
		}
		iVar0++;
	}
}

void func_397(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	ENTITY::SET_ENTITY_VISIBLE(iVar1, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 2, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 3, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 11, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 12, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 1, true);
	ENTITY::_0x18FF3110CF47115D(iVar1, 0, true);
	PED::SET_PED_CAN_RAGDOLL(iVar1, true);
	bVar2 = iParam0 & 256 != false;
	if (bVar2)
	{
		PLAYER::SET_PLAYER_CONTROL(iVar0, true, 0, false);
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(iVar0, true, 4, false);
	}
	ENTITY::FREEZE_ENTITY_POSITION(iVar1, false);
	if (iParam0 & 512 != 0)
	{
	}
	else
	{
		func_245();
	}
	PLAYER::SET_PLAYER_INVINCIBLE(iVar0, false);
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
	{
		ENTITY::SET_ENTITY_COLLISION(iVar1, true, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, true, false);
	}
}

void func_398(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!bParam0)
	{
	}
	if (bParam1)
	{
	}
	if (bParam2)
	{
	}
	if (bParam3)
	{
	}
	if (bParam6)
	{
	}
	if (bParam4)
	{
	}
	if (bParam5)
	{
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	iVar2 = 0;
	if (bParam3 && !PED::IS_PED_FATALLY_INJURED(iVar1))
	{
		iVar2 = 4;
	}
	if (bParam4)
	{
		iVar2 |= 256;
	}
	if (bParam5)
	{
		iVar2 |= 2048;
	}
	PLAYER::SET_PLAYER_CONTROL(iVar0, false, iVar2, false);
	ENTITY::SET_ENTITY_VISIBLE(iVar1, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 2, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 3, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 11, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 12, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 1, bParam0);
	ENTITY::_0x18FF3110CF47115D(iVar1, 0, bParam0);
	if (bParam1)
	{
		PLAYER::SET_PLAYER_INVINCIBLE(iVar0, true);
	}
	if ((!PED::IS_PED_IN_ANY_VEHICLE(iVar1, true) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(iVar1)) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar1))
	{
		if (bParam2)
		{
			ENTITY::SET_ENTITY_COLLISION(iVar1, false, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
		}
	}
	if (bParam3 && !PED::IS_PED_FATALLY_INJURED(iVar1))
	{
		if (TASK::_0x9FF5F9B24E870748(iVar1))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, false, !bParam6);
		}
	}
}

void func_399(var uParam0)
{
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 24);
}

void func_400(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

bool func_401(int iParam0)
{
	return func_335(128, iParam0);
}

void func_402(int iParam0)
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
	func_403(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 0;
}

void func_403(int iParam0)
{
	if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

struct<8> func_404(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	char cVar10[64];
	struct<8> Var18;

	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (iVar0 >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(sParam0, (iVar0 - iParam3), iVar0), 64);
	}
	else
	{
		StringCopy(&cVar2, sParam0, 64);
	}
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar2);
	if (iVar1 >= iParam3)
	{
		StringCopy(&cVar10, HUD::_0x806862E5D266CF38(sParam1, (iVar1 - iParam3), iVar1), 64);
	}
	else
	{
		StringCopy(&cVar10, sParam1, 64);
	}
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar10);
	if (bParam2)
	{
		if ((iVar0 + iVar1) >= iParam3)
		{
			StringCopy(&cVar10, HUD::_0x806862E5D266CF38(&cVar10, iVar0, iVar1), 64);
		}
	}
	else if ((iVar0 + iVar1) >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(&cVar2, iVar1, iVar0), 64);
	}
	Var18 = { cVar2 };
	StringConCat(&Var18, &cVar10, 64);
	return Var18;
}

struct<16> func_405(var uParam0)
{
	return uParam0->f_192;
}

char* func_406(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_34)
	{
		if (ENTITY::GET_ENTITY_MODEL(Global_34) == joaat("PLAYER_THREE"))
		{
			return "John";
		}
		else
		{
			return "Arthur";
		}
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return func_503(iVar0);
}

void func_407(var uParam0)
{
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_13))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_13, false);
	}
}

struct<8> func_408()
{
	char cVar0[64];

	StringCopy(&cVar0, "NormalStart", 64);
	return cVar0;
}

bool func_409(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_410(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_13))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_13, false);
	}
	uParam0->f_4 = uParam1;
	iVar0 = 14;
	if (bParam3)
	{
		iVar0 |= 1;
	}
	uParam0->f_13 = PED::_0x4C39C95AE5DB1329(uParam1, iParam2, iVar0);
}

struct<8> func_411(var uParam0)
{
	return uParam0->f_217;
}

struct<8> func_412()
{
	char cVar0[64];

	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

void func_413(int iParam0, vector3 vParam1, bool bParam4, float fParam5, float fParam6, float fParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;

	if (bParam4)
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return;
	}
	if (func_409(vParam1, 0f, 0f, 0f))
	{
		return;
	}
	if (((fParam5 < 0f || fParam6 < 0f) || fParam7 < 0f) || fParam8 < 0f)
	{
		return;
	}
	if (((((!fParam5 > fParam6 || !fParam5 > fParam7) || !fParam5 > fParam8) || !fParam6 > fParam7) || !fParam6 > fParam8) || !fParam7 > fParam8)
	{
		return;
	}
	iVar0 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	fVar3 = func_314(iParam0, vParam1, 1);
	if ((fVar3 <= fParam5 && fVar3 > fParam6) && fVar3 > fParam7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.75f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::_IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.75f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.75f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam6 && fVar3 > fParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1.5f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.25f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::_IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1.25f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1.25f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1f);
			if (bParam9 == 1)
			{
				if (PED::_0x33FA048675821DA7(iVar0, 3))
				{
					PED::_0x06D26A96CA1BCA75(iVar0, 3, 0f, 0);
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::_IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, 1f);
					if (bParam9 == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
						{
							if (PED::_0x33FA048675821DA7(iVar0, 3))
							{
								PED::_0x06D26A96CA1BCA75(iVar2, 3, 0f, 0);
							}
						}
					}
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(iVar2, 1f));
				}
				iVar4++;
			}
		}
	}
	if (bParam4)
	{
		if (fVar3 <= fParam8)
		{
			if (iParam0 == Global_34)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !func_504(iParam0, 501393341))
			{
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam12, 0, 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !func_504(iParam0, -828834893))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, iParam12);
			}
		}
	}
}

bool func_414(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	iVar1 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	fVar4 = func_314(iParam0, vParam1, 1);
	if (!func_354(fParam4))
	{
		if (fVar4 <= fParam5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				func_355(fParam4, 0);
			}
		}
	}
	else if (bParam7 && fVar4 > fParam5)
	{
		func_477(fParam4);
	}
	if (func_354(fParam4))
	{
		if (bParam10)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar1, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar2) && VEHICLE::_IS_DRAFT_VEHICLE(iVar2))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar3 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar2, iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar3, 1f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar2, PED::_0x46BF2A810679D6E6(iVar3, 1f));
				}
				iVar0++;
			}
		}
		if (func_356(fParam4) >= fParam6)
		{
			if (iParam0 == Global_34)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !func_504(iParam0, 501393341))
			{
				if (PED::IS_PED_ON_MOUNT(iParam0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(iParam0, 0, 0, 0, 0, 0);
					return true;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !func_504(iParam0, -828834893))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, 0);
					return true;
				}
			}
		}
		if (iParam0 == Global_34 && bParam8 == 0)
		{
			if (TASK::GET_IS_TASK_ACTIVE(iParam0, 8))
			{
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
			}
			PED::SET_PED_RESET_FLAG(iParam0, 175, true);
		}
	}
	return false;
}

int func_415(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 2;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam1) && PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
	{
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1) == PLAYER::PLAYER_PED_ID())
		{
			return 1;
		}
		return 2;
	}
	iVar0 = NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(iParam1);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0))
	{
		return 1;
	}
	iVar1 = NETWORK::_0xA6C0787443C9583E(iVar0);
	if (iVar1 == 255)
	{
		return 0;
	}
	if (iVar1 == PLAYER::PLAYER_ID())
	{
		NETWORK::_0x7182EDDA1EE7DB5A(iVar0);
		return 1;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (uParam0->f_7[iVar2 /*5*/] == 255)
		{
		}
		else if (uParam0->f_7[iVar2 /*5*/] == iVar1)
		{
			return 2;
		}
		iVar2++;
	}
	if (uParam0->f_7[0 /*5*/] != 255 && uParam0->f_7[0 /*5*/] == PLAYER::PLAYER_ID())
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iVar0);
	}
	return 0;
}

void func_416(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_3)))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_1);
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2);
	bVar2 = func_505(uParam1->f_1) == PLAYER::PLAYER_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (PED::IS_PED_MALE(iVar1))
	{
		iVar3 = MISC::GET_HASH_KEY(&(uParam2->f_3));
	}
	else
	{
		iVar3 = MISC::GET_HASH_KEY(&(uParam2->f_7));
	}
	if (PED::_0xA0BC8FAED8CFEB3C(iVar1))
	{
		if (!func_86(uParam1->f_4, 14) && func_86(uParam1->f_4, 15))
		{
			func_506(iVar1, iVar3);
			func_26(&(uParam1->f_4), 14);
		}
		if (!func_86(uParam1->f_4, 15))
		{
			PED::_0x59BD177A1A48600A(iVar1, 1);
			func_26(&(uParam1->f_4), 15);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_2, MISC::GET_HASH_KEY("ChangeOutfit")))
	{
		if (!func_86(uParam1->f_4, 17) && PED::_0xA0BC8FAED8CFEB3C(iVar1))
		{
			func_507(iVar1, iVar3);
			func_26(&(uParam1->f_4), 17);
		}
		if (!func_86(uParam1->f_4, 16))
		{
			if (!bVar2)
			{
				func_26(&(uParam1->f_4), 16);
			}
			else if (PED::_0xA0BC8FAED8CFEB3C(iVar0) && func_508())
			{
				func_507(iVar0, iVar3);
				iVar4 = iVar3;
				func_509(&iVar4);
				func_26(&(uParam1->f_4), 16);
			}
		}
	}
}

int func_417(var uParam0, int* iParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;

	if (iParam3 <= -1)
	{
		return 2;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam5->f_1))
	{
		return 1;
	}
	else if (iParam4 == 966820754)
	{
		if (iParam3 >= 4)
		{
			return 2;
		}
		iVar0 = func_263(iParam1, iParam3);
		if (iVar0 < 0 || iVar0 >= 4)
		{
			return 2;
		}
		iVar1 = uParam0->f_7[iVar0 /*5*/];
		if (iVar1 == 255)
		{
			return 2;
		}
		uParam5->f_1 = PLAYER::GET_PLAYER_PED(iVar1);
		*uParam5 = iParam3;
		*iParam6 = 0;
		return 1;
	}
	else
	{
		iVar4 = func_204(iParam7, iParam3, iParam4, &iVar2, iParam6, &uVar3);
		uParam5->f_1 = MISC::_GET_ENTITY_FROM_ITEM(iVar2);
		if (iVar4 == 0)
		{
			if (!func_14(&(uParam5->f_11)))
			{
				func_15(&(uParam5->f_11), 0, 0);
			}
			if (func_36(&(uParam5->f_11), 0, 0) >= 15000)
			{
				func_283(&(uParam5->f_11));
				return 2;
			}
			return 0;
		}
		else if (iVar4 == 2 || !ENTITY::DOES_ENTITY_EXIST(uParam5->f_1))
		{
			func_283(&(uParam5->f_11));
			return 2;
		}
		else if (iVar4 == 1)
		{
			func_283(&(uParam5->f_11));
			*uParam5 = iParam3;
			return 1;
		}
	}
	return 0;
}

int func_418(int* iParam0, var uParam1, char* sParam2)
{
	struct<4> Var0;

	Var0 = { func_267(sParam2, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_1.f_1), uParam1->f_1, 0) };
	return func_510(iParam0, &Var0);
}

bool func_419(int iParam0)
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		iVar0 = iParam0;
		if (!func_253(iVar0))
		{
			return false;
		}
		iVar1 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			return false;
		}
		return true;
	}
	return false;
}

int func_420(var uParam0, int* iParam1, var uParam2, int iParam3, int iParam4, var uParam5, var uParam6, char* sParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam2->f_1);
	uParam2->f_13 = uParam6->f_7;
	switch (uParam6->f_7)
	{
		case 0:
			func_26(&(uParam2->f_5), 1);
			if (PED::IS_PED_DEAD_OR_DYING(iVar0, true) && !PED::IS_PED_A_PLAYER(iVar0))
			{
				uParam2->f_13 = 5;
			}
			else if (AITRANSPORT::_0xDC44F405A6B98D03(iVar0, 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false) && TASK::IS_MOUNTED_WEAPON_TASK_UNDERNEATH_DRIVING_TASK(iVar0))
				{
					uParam2->f_13 = 1;
				}
				else
				{
					iVar1 = PED::_GET_TRANSPORT_PED_IS_SEATED_ON(iVar0);
					uParam2->f_13.f_4 = PED::_GET_SEAT_PED_IS_USING(iVar0);
					uParam2->f_13 = 6;
				}
			}
			else if (PED::_IS_PED_HOGTIED(iVar0))
			{
				iVar2 = ENTITY::_0x61914209C36EFDDB(iVar0);
				if (iVar2 == 7 || iVar2 == 5)
				{
					iVar1 = PED::_GET_CARRIER_AS_PED(iVar0);
				}
				uParam2->f_13 = 4;
			}
			else if (PED::IS_PED_IN_COVER(iVar0, false, false))
			{
				uParam2->f_13 = 3;
			}
			else if (PED::_GET_PED_CROUCH_MOVEMENT(iVar0))
			{
				uParam2->f_13 = 2;
			}
			else
			{
				uParam2->f_13 = 1;
			}
			break;
		case 4:
			break;
		case 6:
			iVar1 = PED::_GET_LAST_MOUNT(iVar0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				uParam2->f_13 = 1;
			}
			else
			{
				uParam2->f_13.f_4 = uParam6->f_10;
			}
			break;
		case 7:
			uParam2->f_13.f_2 = uParam6->f_8;
			uParam2->f_13.f_1 = uParam6->f_9;
			uParam2->f_13.f_4 = uParam6->f_10;
			break;
		case 8:
			if (PED::IS_PED_A_PLAYER(iVar0))
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
				iVar4 = PLAYER::_GET_MOUNT_OF_PLAYER(iVar3);
				iVar5 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(iVar3);
				if (ENTITY::DOES_ENTITY_EXIST(iVar4))
				{
					iVar1 = iVar4;
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iVar5))
				{
					iVar1 = iVar5;
				}
				else
				{
					uParam2->f_13 = 1;
				}
			}
			else
			{
				uParam2->f_13 = 1;
			}
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		iVar6 = -1;
		if (func_511(iParam1, iVar1, 0, &iVar6, &uVar7))
		{
			uParam2->f_13.f_2 = iVar6;
			uParam2->f_13.f_1 = uVar7;
		}
		else if (!func_86(uParam2->f_13.f_3, 0))
		{
			func_26(&(uParam2->f_13.f_3), 0);
			return 0;
		}
		else
		{
			iVar8 = func_512(iVar1, iParam1, iParam3, iParam4);
			if (iVar8 != -1)
			{
				uParam2->f_13.f_2 = iVar8;
				uParam2->f_13.f_1 = 0;
			}
		}
	}
	if (func_86(uParam6->f_6, 0) && AITRANSPORT::_0xDC44F405A6B98D03(iVar0, 0))
	{
		bVar9 = true;
	}
	if (func_428(uParam0, iParam1, uParam2, iParam3, iParam4, uParam5, uParam6, sParam7, bParam8, bVar9, func_86(uParam2->f_5, 1)))
	{
		bVar9 = true;
	}
	if (uParam2->f_13.f_2 != -1 && uParam2->f_13.f_1 == 0)
	{
		iVar10 = uParam2->f_13.f_2;
		if (uParam2->f_10 == 2)
		{
			iVar11 = 3;
		}
		else
		{
			iVar11 = 11;
		}
		if (iParam1->f_1104[iVar10 /*15*/].f_10 < iVar11)
		{
			return 0;
		}
		else if (!func_86(iParam1->f_1104[iVar10 /*15*/].f_5, 0))
		{
			if (uParam2->f_13 != 6 || uParam2->f_13.f_4 == -1)
			{
				iParam1->f_1104[iVar10 /*15*/].f_5.f_1 = { uParam2->f_5.f_1 };
				iParam1->f_1104[iVar10 /*15*/].f_5.f_4 = uParam2->f_5.f_4;
				func_26(&(iParam1->f_1104[iVar10 /*15*/].f_5), 0);
			}
		}
	}
	if (bVar9)
	{
		return 1;
	}
	return 2;
}

bool func_421(var uParam0)
{
	if (!func_86(uParam0->f_4, 0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return false;
	}
	return true;
}

bool func_422(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return true;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_1);
	if (!PED::_0xA0BC8FAED8CFEB3C(iVar0))
	{
		return false;
	}
	vVar1 = { func_513(iVar0) };
	vVar1.f_1 = (vVar1.y + 100f);
	fVar4 = ENTITY::GET_ENTITY_HEADING(iVar0);
	iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_2);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		iVar5 = PED::CLONE_PED(iVar0, 0f, false, true);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
		{
			return true;
		}
		ENTITY::SET_ENTITY_INVINCIBLE(iVar5, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar5, true);
		func_514(iVar0, iVar5);
		ENTITY::SET_ENTITY_COORDS(iVar5, vVar1, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(iVar5, fVar4);
		func_425(iVar5, 1);
		uParam0->f_2 = iVar5;
	}
	if (!func_515(iVar0, iVar5, &(uParam0->f_4)))
	{
		return false;
	}
	return true;
}

bool func_423(var uParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;

	if (bParam3)
	{
		iVar0 = uParam0->f_2;
	}
	else
	{
		iVar0 = uParam0->f_1;
		if (uParam0->f_3 != 1)
		{
			return uParam0->f_3 != 0;
		}
	}
	if (uParam0->f_13.f_2 == -1)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
		if (func_516(iVar1))
		{
			AITRANSPORT::_0x8886D83A430537FD(iVar1, 4194336);
		}
		return func_430(uParam0, iParam1, iParam2, bParam3, uParam4);
	}
	return true;
}

bool func_424(int* iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5)
{
	int iVar0;
	struct<11> Var1;
	int iVar14;
	int iVar15;
	int iVar16;
	struct<4> Var17;
	bool bVar21;
	bool bVar22;
	int iVar23;
	bool bVar24;

	if (bParam5)
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam3->f_2);
	}
	else
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam3->f_1);
		if (uParam3->f_3 != 1)
		{
			return uParam3->f_3 != 0;
		}
	}
	Var1 = -1;
	Var1.f_5.f_4 = -1082130432;
	if (func_517(iParam0, uParam3->f_13.f_2, uParam3->f_13.f_1, &Var1))
	{
		if (Var1.f_10 <= 1)
		{
			return false;
		}
		else if (func_86(Var1.f_4, 0))
		{
			if (func_518(iParam0, uParam3->f_13.f_2, uParam3->f_13.f_1, bParam5, &iVar14))
			{
			}
			else
			{
				return false;
			}
		}
	}
	iVar15 = 0;
	iVar16 = func_519(iVar0, 1, 0, 0);
	Var17 = { func_520() };
	bVar21 = false;
	bVar22 = func_86(uParam4->f_6, 5);
	switch (uParam4->f_11)
	{
		case 0:
			break;
		case 1:
			WEAPON::_HIDE_PED_WEAPONS(iVar0, 2, true);
			break;
		case 2:
			iVar15 = WEAPON::GET_BEST_PED_WEAPON(iVar0, bVar22, true);
			break;
		case 4:
			iVar15 = WEAPON::_0xDA37A053C1522F5D(iVar0, bVar22, 0, 0);
			break;
		case 5:
			iVar15 = uParam4->f_12;
			break;
		case 3:
			iVar15 = WEAPON::GET_BEST_PED_WEAPON(iVar0, bVar22, false);
			break;
		case 6:
			if (func_86(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == joaat("GROUP_BOW"))
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, joaat("GROUP_BOW"), bVar22, 0);
			}
			break;
		case 7:
			if (func_86(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == joaat("GROUP_FISHINGROD"))
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, joaat("GROUP_FISHINGROD"), bVar22, 0);
			}
			break;
		case 8:
			if (func_86(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == joaat("GROUP_HEAVY"))
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, joaat("GROUP_HEAVY"), bVar22, 0);
			}
			break;
		case 9:
			if (func_86(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == -954861255)
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, -954861255, bVar22, 0);
			}
			break;
		case 10:
			if (func_86(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == joaat("GROUP_LASSO"))
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, joaat("GROUP_LASSO"), bVar22, 0);
			}
			break;
		case 11:
			if (func_86(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == joaat("GROUP_MELEE"))
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, joaat("GROUP_MELEE"), bVar22, 0);
			}
			break;
		case 12:
			if (func_86(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == joaat("GROUP_PETROLCAN"))
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, joaat("GROUP_PETROLCAN"), bVar22, 0);
			}
			break;
		case 13:
			if (func_86(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == joaat("GROUP_PISTOL"))
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, joaat("GROUP_PISTOL"), bVar22, 0);
			}
			break;
		case 14:
			if (func_86(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == joaat("GROUP_REPEATER"))
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, joaat("GROUP_REPEATER"), bVar22, 0);
			}
			break;
		case 15:
			if (func_86(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == joaat("GROUP_REVOLVER"))
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, joaat("GROUP_REVOLVER"), bVar22, 0);
			}
			break;
		case 16:
			if (func_86(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == joaat("GROUP_RIFLE"))
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, joaat("GROUP_RIFLE"), bVar22, 0);
			}
			break;
		case 17:
			if (func_86(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == joaat("GROUP_SHOTGUN"))
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, joaat("GROUP_SHOTGUN"), bVar22, 0);
			}
			break;
		case 18:
			if (func_86(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == joaat("GROUP_SNIPER"))
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, joaat("GROUP_SNIPER"), bVar22, 0);
			}
			break;
		case 19:
			if (func_86(uParam4->f_6, 4) && WEAPON::GET_WEAPONTYPE_GROUP(iVar16) == joaat("GROUP_THROWN"))
			{
				iVar15 = iVar16;
			}
			else
			{
				iVar15 = WEAPON::_0x9F67929D98E7C6E8(iVar0, joaat("GROUP_THROWN"), bVar22, 0);
			}
			break;
		case 20:
			if (func_86(uParam4->f_6, 4) && WEAPON::_IS_WEAPON_ONE_HANDED(iVar16))
			{
				iVar15 = iVar16;
			}
			else
			{
				WEAPON::_0xF52BD94B47CCF736(iVar0, &Var17, bVar22, 0);
				bVar21 = true;
			}
			break;
		case 21:
			WEAPON::REMOVE_ALL_PED_WEAPONS(iVar0, true, true);
			break;
	}
	if (bVar21)
	{
		WEAPON::_0x12FB95FE3D579238(iVar0, &Var17, 1, 0, 0, 0);
	}
	else
	{
		iVar23 = uParam4->f_11;
		if ((iVar23 >= 6 && iVar23 <= 19) && iVar15 == 0)
		{
			WEAPON::_0xF52BD94B47CCF736(iVar0, &Var17, bVar22, 0);
			WEAPON::_0x12FB95FE3D579238(iVar0, &Var17, 1, 0, 0, 0);
		}
		if (iVar15 != 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(iVar0, iVar15, 0, false))
			{
				WEAPON::_GIVE_WEAPON_TO_PED_2(iVar0, iVar15, 0, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				WEAPON::_ADD_AMMO_TO_PED(iVar0, iVar15, 10, 752097756);
				WEAPON::SET_PED_INFINITE_AMMO(iVar0, true, iVar15);
			}
			WEAPON::SET_CURRENT_PED_WEAPON(iVar0, iVar15, true, 0, false, false);
		}
	}
	if (!func_521(iVar0, uParam4))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return true;
	}
	switch (uParam3->f_13)
	{
		case 0:
			break;
		case 1:
			if (PED::IS_PED_ON_FOOT(iVar0))
			{
				if (PED::_GET_PED_CROUCH_MOVEMENT(iVar0))
				{
					PED::_SET_PED_CROUCH_MOVEMENT(iVar0, false, 0, true);
				}
			}
			else if (AITRANSPORT::_0xDC44F405A6B98D03(iVar0, 0))
			{
				AITRANSPORT::_0x8886D83A430537FD(iVar0, 4194336);
			}
			break;
		case 2:
			if (!PED::_GET_PED_CROUCH_MOVEMENT(iVar0))
			{
				PED::_SET_PED_CROUCH_MOVEMENT(iVar0, true, 0, true);
			}
			break;
		case 3:
			if (!func_390(iVar0, -1959848946))
			{
				if (ENTITY::_IS_ENTITY_FROZEN(iVar0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
					bVar24 = true;
				}
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iVar0, uParam3->f_5.f_1, -1, 1, 0, 1, func_86(uParam4->f_6, 1), 0, 0, 1, 0);
				PED::_0x2208438012482A1A(iVar0, false, false);
				if (bVar24)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
				}
			}
			break;
		case 4:
			if (!func_390(iVar0, joaat("SCRIPT_TASK_CARRIABLE")))
			{
				TASK::TASK_CARRIABLE(iVar0, joaat("HOGTIED_PED"), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar14), 0, 0);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar14))
				{
					ENTITY::_0x9587913B9E772D29(iVar0, 0);
				}
				PED::_0x2208438012482A1A(iVar0, false, false);
			}
			if (!PED::_IS_PED_HOGTIED(iVar0))
			{
				return false;
			}
			break;
		case 6:
		case 7:
		case 8:
			if (!ENTITY::DOES_ENTITY_EXIST(iVar14))
			{
				return true;
			}
			if (!AITRANSPORT::_0x159EF5B6EDCE00E8(iVar0, iVar14) || (uParam3->f_13.f_4 != -2 && PED::_GET_SEAT_PED_IS_USING(iVar0) != uParam3->f_13.f_4))
			{
				if (ENTITY::_IS_ENTITY_FROZEN(iVar0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
				}
				AITRANSPORT::_0xE588B5A8A005CB5E(iVar0, iVar14, uParam3->f_13.f_4, 4194336);
				if (!AITRANSPORT::_0x159EF5B6EDCE00E8(iVar0, iVar14))
				{
					return false;
				}
			}
			break;
		case 5:
			if (!PED::IS_PED_DEAD_OR_DYING(iVar0, true))
			{
				func_522(iVar0, 0);
			}
			break;
	}
	return true;
}

void func_425(int iParam0, bool bParam1)
{
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, bParam1);
	ENTITY::SET_ENTITY_COLLISION(iParam0, !bParam1, false);
	ENTITY::SET_ENTITY_VISIBLE(iParam0, !bParam1);
}

int func_426(int* iParam0, var uParam1, var uParam2, char* sParam3)
{
	if (!func_86(uParam2->f_1, 0) && ENTITY::IS_ENTITY_DEAD(uParam1->f_1))
	{
		return 2;
	}
	return func_510(iParam0, sParam3);
}

void func_427(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		ENTITY::_0xC3ABCFBC7D74AFA5(uParam0->f_2, 6, 1);
	}
}

bool func_428(var uParam0, int* iParam1, var uParam2, int iParam3, int iParam4, var uParam5, var uParam6, char* sParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	vector3 vVar8;
	vector3 vVar11;
	struct<10> Var14;

	iVar0 = uParam2->f_1;
	if (ENTITY::GET_ENTITY_TYPE(iVar0) == 1 && !bParam10)
	{
		vVar1 = { func_513(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)) };
	}
	else
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	}
	fVar4 = ENTITY::GET_ENTITY_HEADING(iVar0);
	iVar5 = func_137(uParam0->f_1.f_2);
	uParam2->f_5.f_1 = { vVar1 };
	uParam2->f_5.f_4 = fVar4;
	if (bParam9)
	{
		bVar6 = true;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, uParam5->f_1621[iVar5 /*3*/], true) < 100f && func_86(uParam6->f_4, 0))
	{
		bVar6 = true;
	}
	if (func_86(uParam6->f_4, 1))
	{
		bVar7 = true;
	}
	if (!bVar6)
	{
		if (func_86(uParam6->f_4, 2))
		{
			if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam1->f_1483.f_208, sParam7, &Var14, false, 0, 2))
			{
				if (bParam8)
				{
					vVar8 = { Var14 };
					vVar11 = { Var14.f_3 };
				}
				else
				{
					vVar8 = { Var14.f_6 };
					vVar11 = { Var14.f_9 };
				}
				if (!bVar7)
				{
					uParam2->f_5.f_1 = { vVar8 };
				}
				uParam2->f_5.f_4 = vVar11.z;
				bVar6 = true;
			}
		}
	}
	if (!bVar6)
	{
		if (!func_153(*uParam6))
		{
			if (!bVar7)
			{
				uParam2->f_5.f_1 = { *uParam6 };
			}
			uParam2->f_5.f_4 = uParam6->f_3;
			bVar6 = true;
		}
	}
	return bVar6;
}

int func_429(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return 1;
	}
	iVar0 = ENTITY::GET_ENTITY_TYPE(uParam0->f_1);
	switch (iVar0)
	{
		case 1:
			return func_422(uParam0);
		case 2:
			if (VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(uParam0->f_1)))
			{
				return func_523(uParam0, iParam1);
			}
			else
			{
				return func_524(uParam0, iParam2);
			}
			break;
		case 3:
			return func_525(uParam0);
	}
	return 1;
}

bool func_430(var uParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	float fVar5;

	if (bParam3)
	{
		iVar0 = uParam0->f_2;
	}
	else
	{
		iVar0 = uParam0->f_1;
		if (uParam0->f_3 != 1)
		{
			return uParam0->f_3 != 0;
		}
	}
	bVar1 = ENTITY::_IS_ENTITY_FROZEN(iVar0);
	if (bVar1)
	{
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
	}
	if (func_86(uParam0->f_5, 1))
	{
		func_526(iVar0, uParam0->f_5.f_1, uParam0->f_5.f_4, 1, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_526(iVar0, uParam0->f_5.f_1, uParam0->f_5.f_4, 2, 1073741824 /* Float: 2f */);
	}
	if (!func_86(uParam4->f_1, 2))
	{
		ENTITY::_0x9587913B9E772D29(iVar0, 1);
	}
	if (bParam3 && ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		PED::_0x2208438012482A1A(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), false, false);
	}
	if (bVar1)
	{
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
	}
	ENTITY::_SET_ENTITY_SOMETHING(iVar0, true);
	vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar5 = ENTITY::GET_ENTITY_HEADING(iVar0);
	return true;
}

bool func_431(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam4)
	{
		iVar0 = uParam1->f_2;
	}
	else
	{
		iVar0 = uParam1->f_1;
		if (uParam1->f_3 != 1)
		{
			return uParam1->f_3 != 0;
		}
	}
	if (MISC::IS_BIT_SET(uParam0->f_4, 3) && ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
	{
		iVar1 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0);
		iVar2 = 9;
		if (VEHICLE::_0xFF5791B7639C2A46(iVar1, &iVar2))
		{
			WEAPON::_0x194D877FC5597B7D(iVar1, iVar2, uParam0->f_5, 1);
		}
	}
	return true;
}

void func_432(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;

	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_2, iParam4))
	{
		if (!func_86(uParam1->f_4, iParam2) && func_86(uParam0->f_1, 0))
		{
			func_26(&(uParam1->f_4), iParam2);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam1->f_1))
			{
				iVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam1->f_1);
				VEHICLE::_BREAK_OFF_VEHICLE_WHEEL(iVar0, iParam5);
			}
		}
		if (!func_86(uParam1->f_4, iParam3))
		{
			func_26(&(uParam1->f_4), iParam3);
			iVar1 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam1->f_2);
			VEHICLE::_BREAK_OFF_VEHICLE_WHEEL(iVar1, iParam5);
		}
	}
}

int func_433(int* iParam0, var uParam1, int iParam2, var uParam3)
{
	var uVar0;

	if (!func_269(iParam0, uParam3, iParam2, 0, &uVar0, 0, 0))
	{
		return 2;
	}
	return func_510(iParam0, &uVar0);
}

bool func_434(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

bool func_435(int iParam0, int iParam1)
{
	if (!func_434(iParam0))
	{
		return false;
	}
	if (func_30() == -1)
	{
		return (Global_1915715.f_3[iParam0 /*447*/].f_6 && iParam1) != 0;
	}
	else
	{
		return (Global_1051439.f_72[iParam0 /*75*/].f_1 && iParam1) != 0;
	}
	return false;
}

void func_436(int iParam0, int iParam1)
{
	if (!func_434(iParam0))
	{
		return;
	}
	if (func_30() == -1)
	{
		Global_1915715.f_3[iParam0 /*447*/].f_6 = (Global_1915715.f_3[iParam0 /*447*/].f_6 || iParam1);
	}
	else
	{
		Global_1051439.f_72[iParam0 /*75*/].f_1 = (Global_1051439.f_72[iParam0 /*75*/].f_1 || iParam1);
	}
}

void func_437(int iParam0, int iParam1)
{
	if (!func_434(iParam0))
	{
		return;
	}
	if (func_30() == -1)
	{
		Global_1915715.f_3[iParam0 /*447*/].f_6 = (Global_1915715.f_3[iParam0 /*447*/].f_6 - (Global_1915715.f_3[iParam0 /*447*/].f_6 && iParam1));
	}
	else
	{
		Global_1051439.f_72[iParam0 /*75*/].f_1 = (Global_1051439.f_72[iParam0 /*75*/].f_1 - (Global_1051439.f_72[iParam0 /*75*/].f_1 && iParam1));
	}
}

bool func_438(int iParam0)
{
	if (func_527())
	{
		if (Global_1915715.f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_439(int iParam0)
{
	return (Global_1102219.f_3520 && iParam0) != 0;
}

char* func_440(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return func_406(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		return func_528(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		return func_529(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	return "";
}

int func_441(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0 /*12*/]) && uParam0->f_17[iVar0 /*12*/] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_442(var uParam0, char* sParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0 /*12*/]) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_17[iVar0 /*12*/].f_1), sParam1))
		{
			return uParam0->f_17[iVar0 /*12*/];
		}
		iVar0++;
	}
	return 0;
}

void func_443(var uParam0, int iParam1)
{
	struct<12> Var0;
	int iVar12;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 14)
	{
		if (uParam0->f_17[iVar12 /*12*/] == iParam1)
		{
			uParam0->f_17[iVar12 /*12*/] = { Var0 };
			return;
		}
		iVar12++;
	}
}

int func_444(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0 /*12*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_445(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

bool func_446(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_447()
{
	if (func_493(Global_26539))
	{
		func_496(&Global_26539, 0, 0);
	}
}

bool func_448(int iParam0)
{
	int iVar0;

	if (func_530(iParam0))
	{
		iVar0 = UIFEED::_0x59FA676177DBE4C9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return false;
}

bool func_449(int iParam0, bool bParam1)
{
	if (bParam1 && !func_493(iParam0))
	{
		return false;
	}
	return !func_531(iParam0, 4);
}

bool func_450(bool bParam0, bool bParam1)
{
	if (!func_493(Global_26539))
	{
		Global_26539 = func_532("CUTSCENE_SKIP", joaat("INPUT_SKIP_CUTSCENE"), 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("LONG_TIMED_EVENT"), 0);
		Global_1951255[Global_26539 /*23*/].f_16 = Global_20[3];
		func_495(Global_26539, 0, 1);
		func_533(Global_26539, 6, 1);
		if (bParam1)
		{
			func_533(Global_26539, 14, 1);
		}
	}
	else
	{
		if (!func_449(Global_26539, 0))
		{
			func_494(Global_26539, 1, 1, 1);
		}
		if (func_534(Global_26539, 1) != 0f && bParam0)
		{
			func_495(Global_26539, 1, 1);
		}
		else
		{
			func_495(Global_26539, 0, 1);
		}
		return func_535(Global_26539, 1);
	}
	return false;
}

void func_451(var uParam0, char* sParam1)
{
	if (((!func_306(uParam0, 32) || func_536(uParam0)) || func_306(uParam0, 268435456)) && !func_306(uParam0, 65536))
	{
		func_230(&(uParam0->f_263), 256);
	}
}

void func_452(var uParam0, bool bParam1)
{
	var uVar0;

	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_34, &uVar0, false, 9, false))
	{
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 9, bParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_34, &uVar0, false, 7, false))
	{
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 7, bParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_34, &uVar0, false, 8, false))
	{
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 8, bParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_34, &uVar0, false, 10, false))
	{
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 10, bParam1);
	}
}

bool func_453()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CAMERA_ITEM")) > 0)
	{
		return true;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("NET_ADVANCED_CAMERA")) > 0)
	{
		return true;
	}
	return false;
}

void func_454(bool bParam0)
{
	if (func_453())
	{
		Global_1958008 = 1;
	}
	if (func_537(joaat("CAMERA_ITEM")))
	{
	}
	if (bParam0 && (Global_1940258.f_38 == joaat("WEAPON_KIT_CAMERA") || Global_1940258.f_38 == joaat("WEAPON_KIT_CAMERA_ADVANCED")))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
		Global_1940258.f_38 = joaat("WEAPON_UNARMED");
	}
}

void func_455(var uParam0, char[16] cParam1)
{
	MemCopy(&(uParam0->f_192), {cParam1}, 16);
}

void func_456(var uParam0)
{
	int iVar0;
	struct<8> Var1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_225[iVar0 /*9*/])))
		{
			func_538(uParam0, &(uParam0->f_225[iVar0 /*9*/]));
		}
		iVar0++;
	}
	Var1 = { func_408() };
	func_538(uParam0, &Var1);
	Var1 = { func_323(uParam0) };
	func_538(uParam0, &Var1);
}

void func_457(float fParam0, float fParam1)
{
	fParam0->f_1 = (func_460() - fParam1);
	func_539(fParam0, 1);
	func_540(fParam0, 2);
	fParam0->f_2 = 0f;
}

bool func_458(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_459(float fParam0)
{
	return func_458(*fParam0, 2);
}

float func_460()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_461()
{
	return func_530(UIFEED::_0xC17F69E1418CD11F(3));
}

bool func_462()
{
	int iVar0;

	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) == 4);
}

void func_463(int iParam0)
{
	UIFEED::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

Vector3 func_464(var uParam0)
{
	return uParam0->f_265;
}

void func_465(var uParam0)
{
	int iVar0;

	if (func_541(&iVar0))
	{
		if (func_542(iVar0, 0))
		{
			if (func_482(iVar0) == -525676072)
			{
				func_543(joaat("MPC_HIDE_ACTION_HAT"), Global_34, 0, 0);
			}
			else
			{
				func_543(-1144282354, Global_34, 0, 0);
			}
		}
		if (*uParam0 == 0)
		{
			*uParam0 = iVar0;
		}
	}
}

void func_466(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;

	if (Global_1940258.f_6)
	{
		return;
	}
	Global_13 = 1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_544(-1);
		func_545(-1);
	}
	if (!func_357(*uParam0, 8388608))
	{
		func_358(1);
	}
	ENTITY::SET_ENTITY_INVINCIBLE(Global_34, true);
	if (!func_357(*uParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_357(*uParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_357(*uParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_357(*uParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_357(*uParam0, 32768))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam1, true);
	}
	if (!func_357(*uParam0, 1))
	{
		PAD::_0xF239400E16C23E08(0, 0);
	}
	if (!func_357(*uParam0, 65536))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	}
	if (!func_357(*uParam0, 4) && !func_357(*uParam0, 2))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!func_357(*uParam0, 2048))
	{
		func_546(0);
	}
	if (func_357(*uParam0, 8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_34, false, true);
	}
	if (func_357(*uParam0, 256))
	{
		WEAPON::_HIDE_PED_WEAPONS(Global_34, 2, true);
	}
	if (func_357(*uParam0, 8192))
	{
		func_547();
	}
	if (!func_357(*uParam0, 262144))
	{
		PED::SET_PED_RESET_FLAG(Global_34, 264, true);
	}
	if (!func_357(*uParam0, 512))
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	if (!func_357(*uParam0, 1024))
	{
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	}
	if (iParam2 != 2)
	{
		PED::SET_PED_STEALTH_MOVEMENT(Global_34, iParam2 == 1, 0, 0);
	}
	if (PED::IS_PED_ON_FOOT(Global_34))
	{
		if (bParam6)
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Global_34, 0f);
			PED::SET_PED_DESIRED_HEADING(Global_34, ENTITY::GET_ENTITY_HEADING(Global_34));
			ENTITY::SET_ENTITY_VELOCITY(Global_34, 0f, 0f, 0f);
		}
		if (!func_357(*uParam0, 16))
		{
			iVar0 = ITEMSET::CREATE_ITEMSET(true);
			bVar1 = false;
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_34, iVar0);
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar0))
			{
				iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0);
				iVar7 = MISC::_GET_ENTITY_FROM_ITEM(iVar6);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
				}
				else
				{
					bVar8 = false;
					if (ENTITY::IS_ENTITY_AN_OBJECT(iVar7))
					{
						if (func_548() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = uParam3;
					vVar3.f_1 = uParam4;
					vVar3.f_2 = uParam5;
					if (func_153(vVar3))
					{
						vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_34, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_549(&vVar3, 50, 10, 0, 0);
					}
					vVar3.f_2 = (vVar3.z + 10f);
					if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar3, &(vVar3.f_2), true))
					{
					}
					PED::_0xED00D72F81CF7278(iVar7, 0, 1);
					ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_550(2);
						func_551(-1);
						func_552(vVar3);
						func_554(func_553());
					}
					bVar1 = true;
				}
				iVar2++;
			}
			if (bVar1)
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_34, -1))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_34, false, true);
					PED::_0x2208438012482A1A(Global_34, false, false);
				}
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
		}
	}
	if (bParam6 && PED::IS_PED_ON_MOUNT(Global_34))
	{
		iVar9 = PED::GET_MOUNT(Global_34);
		if (!ENTITY::IS_ENTITY_DEAD(iVar9))
		{
			TASK::CLEAR_PED_TASKS(iVar9, true, false);
			TASK::TASK_STAND_STILL(iVar9, -1);
		}
	}
	if (!func_357(*uParam0, 4096))
	{
		func_346(Global_34);
	}
	if (!func_357(*uParam0, 1048576))
	{
		UIFEED::_0xDD1232B332CBB9E7(7, 1, 0);
	}
	if (!func_357(*uParam0, 2097152) && !func_231(140))
	{
		if (func_555() || PED::_0x50F124E6EF188B22(Global_34))
		{
			func_556(1);
		}
	}
	*uParam0 = 0;
}

void func_467(var uParam0, vector3 vParam1)
{
	uParam0->f_265 = { vParam1 };
}

void func_468(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (func_306(uParam0, 2048) && !func_153(func_557(uParam0)))
	{
		bVar0 = VOLUME::_DOES_VOLUME_EXIST(uParam0->f_4);
		iVar1 = PED::_GET_LAST_MOUNT(Global_34);
		if ((!ENTITY::IS_ENTITY_DEAD(iVar1) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar1, uParam0->f_4, true, 0)) || func_306(uParam0, -2147483648))) && PED::GET_MOUNT(Global_34) != iVar1)
		{
			func_526(iVar1, func_557(uParam0), func_558(uParam0), 2, 1073741824 /* Float: 2f */);
		}
		iVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar2) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar2, uParam0->f_4, true, 0)) || func_306(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_34, iVar2, true))
		{
			func_526(iVar2, func_557(uParam0), func_558(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_469(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	if ((func_306(uParam0, 268435456) && !func_153(func_557(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_34, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_34);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { func_557(uParam0) };
			func_526(iVar0, vVar1, func_559(vVar1, Global_35, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_470(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_268 = { vParam1 };
	uParam0->f_271 = iParam4;
	if (func_153(vParam1))
	{
		func_72(uParam0, 2048, 1);
	}
	else
	{
		func_227(uParam0, 2048);
		if (bParam5)
		{
			func_227(uParam0, -2147483648);
		}
	}
}

void func_471(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(uParam0->f_17[iVar0 /*12*/]) && ENTITY::IS_ENTITY_A_PED(uParam0->f_17[iVar0 /*12*/])) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_17[iVar0 /*12*/]) != Global_34)
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_17[iVar0 /*12*/]);
			if (PED::IS_PED_HUMAN(iVar1))
			{
				if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_208, &(uParam0->f_17[iVar0 /*12*/].f_1)))
				{
					if (!func_343(&(uParam0->f_17[iVar0 /*12*/]), 8))
					{
						if (func_561(func_560(iVar1, 0, 1, 0)))
						{
							if (!func_562(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 0)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("WEAPON_UNARMED"), true, 0, false, false);
							}
						}
						if (func_561(func_560(iVar1, 1, 1, 0)))
						{
							if (!func_562(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 1)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("WEAPON_UNARMED"), true, 1, false, false);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_472(var uParam0, bool bParam1)
{
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_34, 3, bParam1);
	if (!bParam1)
	{
		if (!Global_14)
		{
			PED::_SET_PED_COMPONENT_DISABLED(Global_34, joaat("HOLSTERS_LEFT"), 1);
		}
	}
	else if (!func_446(uParam0->f_264, 256))
	{
		func_563(Global_34, Global_1952637.f_1675.f_1[28 /*3*/], 0, joaat("MP_COMPONENT_TYPE_LOADOUT_4"), 1, 1, 0, 1, 0, 0, 1);
		func_229(&(uParam0->f_264), 256);
	}
	Global_14 = !bParam1;
}

int func_473(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (PED::IS_PED_A_PLAYER(iParam0))
		{
			func_564(14, iParam1, 0, 0, 0);
		}
		else
		{
			func_564(14, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!func_565(0))
	{
	}
	func_566(&(Global_1952637.f_1675), iParam0, 1, iParam1, 1, bParam3, 1, 1);
	return 1;
}

void func_474(var uParam0)
{
	StringCopy(&(uParam0->f_192), "", 128);
	func_567(uParam0);
	func_568(uParam0);
	func_569(uParam0);
}

void func_475(var uParam0)
{
	uParam0->f_11 = 0;
}

void func_476(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_445(&(uParam0->f_17[iVar0 /*12*/]), iParam1);
		iVar0++;
	}
}

void func_477(float fParam0)
{
	fParam0->f_1 = 0f;
	fParam0->f_2 = 0f;
	*fParam0 = 0;
}

void func_478(bool bParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_26538))
	{
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(Global_26538))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Global_26538);
		}
	}
	Global_26538 = -1;
	StringCopy(&Global_26540, "", 24);
	Global_13 = 0;
	if (bParam0)
	{
		func_447();
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
}

void func_479(int iParam0)
{
	func_570();
	Global_1913504.f_1 = MISC::GET_GAME_TIMER();
	Global_1913504.f_2 = iParam0;
}

void func_480()
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
}

void func_481(bool bParam0)
{
	if (bParam0)
	{
		Global_1951255.f_1381 = (Global_1951255.f_1381 - Global_1951255.f_1381 & 2);
	}
	else
	{
		Global_1951255.f_1381 |= 2;
	}
	func_571(bParam0);
}

int func_482(int iParam0)
{
	struct<2> Var0;

	if (!func_542(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_483(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (!func_572(iParam1))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_573(iParam1);
	return func_485(iParam0, iVar0, bParam2, bParam2, bParam4);
}

int func_484(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1952637.f_2843.f_1)
	{
		if (Global_1952637.f_2843.f_43[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_485(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!func_574(bParam4))
	{
	}
	if (!bParam2)
	{
		if (PED::IS_PED_A_PLAYER(iParam0))
		{
			func_564(2, iParam1, 0, 0, 0);
		}
		else
		{
			func_564(2, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	func_566(&(Global_1952637.f_1675), iParam0, 1, iParam1, 1, bParam3, 1, 1);
	return 1;
}

bool func_486(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_487(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 598430796;
		case 1:
			return 690901814;
		case 3:
			return 2083323686;
		case 2:
			return 474191950;
		case 4:
			return 128623374;
		case 6:
			return -993263478;
		case 7:
			return 1344742130;
		case 8:
			return 537169871;
		case 9:
			return -1763610107;
		case 10:
			return 68203906;
		case 11:
			return 253418738;
		case 12:
			return 433996714;
		case 13:
			return 999578278;
	}
	return 0;
}

void func_488(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_121(iParam0);
	}
	else
	{
		func_122(iParam0);
	}
}

void func_489(int iParam0)
{
	Global_1956200.f_1431.f_2 = 0f;
	Global_1956200.f_1431.f_1 = iParam0;
}

void func_490(float fParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	MISC::CLEAR_AREA(vVar1, fParam0, 65536);
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(vVar1, fParam0);
}

bool func_491()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

void func_492(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896738.f_3948 = MISC::GET_GAME_TIMER();
	Global_1896738.f_3948.f_1 = iParam0;
}

bool func_493(int iParam0)
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

void func_494(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_493(iParam0))
	{
		return;
	}
	iVar0 = func_575(iParam0);
	if (bParam1)
	{
		func_576(iParam0, 4);
		if (bParam3)
		{
			func_577(iVar0, 1);
		}
		func_578(iVar0, 1);
	}
	else
	{
		func_579(iParam0, 4);
		func_578(iVar0, 0);
	}
}

void func_495(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_493(iParam0))
	{
		return;
	}
	iVar0 = func_575(iParam0);
	func_577(iVar0, bParam1);
}

void func_496(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_493(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_575(*uParam0);
	if (Global_1951255[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_580(iVar0);
	*uParam0 = 0;
}

void func_497(int iParam0)
{
	if (Global_1102219.f_26.f_3342 == iParam0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		Global_1102219.f_26.f_3342 = 0;
		return;
	}
	if (iParam0 == func_581(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1102219.f_26.f_3344))
		{
			iParam0 = Global_1102219.f_26.f_3344;
		}
	}
	Global_1102219.f_26.f_3342 = iParam0;
}

void func_498(int iParam0)
{
	Global_1102219.f_26.f_3 = iParam0;
}

void func_499(vector3 vParam0)
{
	float fVar0;
	vector3 vVar1;

	if (!Global_1940258.f_6)
	{
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Global_34, vParam0) };
		fVar0 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar0, 1f);
		CAM::_0x05BD5E4088B30A66(-180f, 180f);
	}
}

void func_500(vector3 vParam0)
{
	vector3 vVar0;
	float fVar3;

	if (!Global_1940258.f_6)
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Global_34, vParam0) };
		fVar3 = MISC::ATAN((vVar0.z / BUILTIN::SQRT(((vVar0.y * vVar0.y) + (vVar0.x * vVar0.x)))));
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fVar3, 1f);
	}
}

int func_501(float fParam0)
{
	if (fParam0 == 0f)
	{
		return joaat("MOTIONSTATE_IDLE");
	}
	if (fParam0 >= 1f && fParam0 < 2f)
	{
		return joaat("MOTIONSTATE_WALK");
	}
	if (fParam0 >= 2f && fParam0 < 3f)
	{
		return joaat("MOTIONSTATE_RUN");
	}
	if (fParam0 == 3f)
	{
		return joaat("MOTIONSTATE_SPRINT");
	}
	return joaat("MOTIONSTATE_IDLE");
}

bool func_502(int iParam0)
{
	return (Global_1102219.f_26.f_9 && iParam0) != 0;
}

char* func_503(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			return "Arthur";
		case joaat("CS_ABE"):
			return "Abe";
		case joaat("CS_ABERDEENPIGFARMER"):
			return "ABERDEENPIGFARMER";
		case joaat("CS_ABERDEENSISTER"):
			return "ABERDEENSISTER";
		case joaat("CS_ABIGAILROBERTS"):
			return "AbigailRoberts";
		case joaat("CS_ALBERTMASON"):
			return "AlbertMason";
		case joaat("CS_ARCHIEDOWN"):
			return "ArchieDown";
		case joaat("CS_BAPTISTE"):
			return "Baptiste";
		case joaat("CS_BARTHOLOMEWBRAITHWAITE"):
			return "BartholomewBraithwaite";
		case joaat("CS_BEATENUPCAPTAIN"):
			return "CS_BEATENUPCAPTAIN";
		case joaat("CS_BEAUGRAY"):
			return "BeauGray";
		case joaat("CS_PENELOPEBRAITHWAITE"):
			return "PenelopeBraithwaite";
		case joaat("CS_BILLWILLIAMSON"):
			return "BillWilliamson";
		case joaat("CS_BRAITHWAITESERVANT"):
			return "BraithwaiteServant";
		case joaat("CS_CATHERINEBRAITHWAITE"):
			return "CatherineBraithwaite";
		case joaat("CS_CHARLESSMITH"):
			return "CharlesSmith";
		case joaat("CS_CIGCARDGUY"):
			return "CS_CIGCARDGUY";
		case joaat("CS_DINOBONESLADY"):
			return "CS_DINOBONESLADY";
		case joaat("CS_CLEET"):
			return "Cleet";
		case joaat("CS_COLMODRISCOLL"):
			return "ColmODriscoll";
		case joaat("CS_CREOLEGUY"):
			return "CreoleGuy";
		case joaat("CS_SDDOCTOR_01"):
			return "SDDoctor_01";
		case joaat("CS_DALEMARONEY"):
			return "DaleMaroney";
		case joaat("CS_DUTCH"):
			return "Dutch";
		case joaat("CS_EDITHDOWN"):
			return "EdithDown";
		case joaat("CS_FUSSAR"):
			return "Fussar";
		case joaat("CS_FISHCOLLECTOR"):
			return "cs_fishcollector";
		case joaat("CS_BRONTE"):
			return "Bronte";
		case joaat("CS_GUIDOMARTELLI"):
			return "GuidoMartelli";
		case joaat("U_M_M_NBXBRONTEGOON_01"):
			return "U_M_M_NBXBRONTEGOON_01";
		case joaat("G_M_M_UNIBRONTEGOONS_01"):
			return "G_M_M_UNIBRONTEGOONS_01";
		case joaat("CS_GARETHBRAITHWAITE"):
			return "GarethBraithwaite";
		case joaat("CS_GENSTORYFEMALE"):
			return "GenStoryFemale";
		case joaat("CS_GENSTORYMALE"):
			return "GenStoryMale";
		case joaat("CS_LEON"):
			return "Leon";
		case joaat("CS_GERALDBRAITHWAITE"):
			return "GeraldBraithwaite";
		case joaat("CS_HOSEAMATTHEWS"):
			return "HoseaMatthews";
		case joaat("CS_JACKMARSTON"):
			return "JackMarston";
		case joaat("CS_JACKMARSTON_TEEN"):
			return "JackMarston_Teen";
		case joaat("CS_JAMIE"):
			return "Jamie";
		case joaat("CS_JAVIERESCUELLA"):
			return "JavierEscuella";
		case joaat("CS_JIMCALLOWAY"):
			return "JimCalloway";
		case joaat("CS_JOE"):
			return "Joe";
		case joaat("CS_JOHNMARSTON"):
			return "JohnMarston";
		case joaat("CS_JOHNWEATHERS"):
			return "CS_JOHNWEATHERS";
		case joaat("CS_JOSIAHTRELAWNY"):
			return "JosiahTrelawny";
		case joaat("CS_KAREN"):
			return "Karen";
		case joaat("CS_MRSADLER"):
			return "MrsAdler";
		case joaat("CS_KIERAN"):
			return "Kieran";
		case joaat("CS_LEOSTRAUSS"):
			return "LeoStrauss";
		case joaat("CS_LONDONDERRYSON"):
			return "LondonderrySon";
		case joaat("CS_MARYBETH"):
			return "MaryBeth";
		case joaat("CS_MARYLINTON"):
			return "MaryLinton";
		case joaat("CS_MICAHBELL"):
			return "MicahBell";
		case joaat("CS_MOLLYOSHEA"):
			return "MollyOshea";
		case joaat("CS_MRLINTON"):
			return "CS_MrLinton";
		case joaat("CS_MRPEARSON"):
			return "MrPearson";
		case joaat("CS_MRSLONDONDERRY"):
			return "MrsLondonderry";
		case joaat("CS_MUD2BIGGUY"):
			return "Mud2BigGuy";
		case joaat("CS_PROFESSORBELL"):
			return "ProfessorBell";
		case joaat("CS_REVSWANSON"):
			return "RevSwanson";
		case joaat("CS_SAMARITAN"):
			return "CS_Samaritan";
		case joaat("CS_STRDEPUTY_01"):
			return "StrDeputy_01";
		case joaat("CS_STRDEPUTY_02"):
			return "StrDeputy_02";
		case joaat("CS_STRSHERIFF_01"):
		case joaat("U_M_M_STRSHERRIFF_01"):
			return "StrSheriff_01";
		case joaat("CS_SUSANGRIMSHAW"):
			return "SusanGrimshaw";
		case joaat("CS_TAVISHGRAY"):
			return "TavishGray";
		case joaat("CS_THEODORELEVIN"):
			return "TheodoreLevin";
		case joaat("CS_THOMASDOWN"):
			return "ThomasDown";
		case joaat("CS_TILLY"):
			return "Tilly";
		case joaat("CS_UNCLE"):
			return "Uncle";
		case joaat("G_M_M_UNICRIMINALS_01"):
			return "G_M_M_UniCriminals_01";
		case joaat("G_M_M_UNIDUSTER_01"):
			return "G_M_M_UNIDUSTER_01";
		case joaat("CS_VALSHERIFF"):
			return "CS_VALSHERIFF";
		case joaat("S_M_M_MARSHALLSRURAL_01"):
			return "S_M_M_MARSHALLSRURAL_01";
		case joaat("U_M_O_VHTEXOTICSHOPKEEPER_01"):
			return "U_M_O_VHTEXOTICSHOPKEEPER_01";
		case joaat("CS_SEAN"):
			return "Sean";
		case joaat("CS_LENNY"):
			return "Lenny";
		case joaat("CS_HERCULE"):
			return "Hercule";
		case joaat("CS_CREOLECAPTAIN"):
			return "CreoleCaptain";
		case joaat("U_M_M_CREOLECAPTAIN_01"):
			return "U_M_M_CREOLECAPTAIN_01";
		case joaat("CS_RINGMASTER"):
			return "RingMaster";
		case joaat("U_M_M_VALBARTENDER_01"):
			return "U_M_M_VALBARTENDER_01";
		case joaat("A_M_M_EMRFARMHAND_01"):
			return "A_M_M_EMRFARMHAND_01";
		case joaat("A_M_M_GRISURVIVALIST_01"):
			return "A_M_M_GriSurvivalist_01";
		case joaat("CS_LILLYMILLET"):
			return "LillyMillet";
		case joaat("A_F_M_STRTOWNFOLK_01"):
			return "A_F_M_STRTOWNFOLK_01";
		case joaat("A_M_M_STRTOWNFOLK_01"):
			return "A_M_M_STRTOWNFOLK_01";
		case joaat("S_M_M_STRLUMBERJACK_01"):
			return "S_M_M_STRLUMBERJACK_01";
		case joaat("G_M_M_UNICRIMINALS_02"):
			return "G_M_M_UniCriminals_02";
		case joaat("G_M_M_UNICORNWALLGOONS_01"):
			return "G_M_M_UNICORNWALLGOONS_01";
		case joaat("A_M_M_NBXUPPERCLASS_01"):
			return "A_M_M_NBXUPPERCLASS_01";
		case joaat("A_F_M_NBXUPPERCLASS_01"):
			return "A_F_M_NBXUPPERCLASS_01";
		case joaat("A_M_M_VALFARMER_01"):
			return "A_M_M_VALFARMER_01";
		case joaat("A_M_M_VALTOWNFOLK_01"):
			return "A_M_M_VALTOWNFOLK_01";
		case joaat("A_M_M_VALTOWNFOLK_02"):
			return "A_M_M_VALTOWNFOLK_02";
		case joaat("A_F_M_VALTOWNFOLK_01"):
			return "A_F_M_VALTOWNFOLK_01";
		case joaat("U_M_M_NBXBARTENDER_01"):
			return "U_M_M_NBXBARTENDER_01";
		case joaat("CS_NBXEXECUTED"):
			return "NBXExecuted";
		case joaat("CS_RHODEPUTY_01"):
			return "RHODEPUTY_01";
		case joaat("U_M_M_RHDSHERIFF_01"):
			return "RHDSHERIFF_01";
		case joaat("CS_LEIGHGRAY"):
			return "LeighGray";
		case joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"):
			return "Horse_01";
		case joaat("U_M_M_STRGENSTOREOWNER_01"):
			return "U_M_M_StrGenStoreOwner_01";
		case joaat("CS_TOMDICKENS"):
			return "TomDickens";
		case joaat("CS_DAVIDGEDDES"):
			return "DavidGeddes";
		case joaat("CS_ANSEL_ATHERTON"):
			return "ANSEL_ATHERTON";
		case joaat("CS_WROBEL"):
			return "CS_Wrobel";
		case joaat("A_C_COW"):
			return "COW";
		case joaat("A_C_BULL_01"):
			return "BULL";
		case joaat("CS_ALBERTCAKEESQUIRE"):
			return "ALBERTCAKEESQUIRE";
		case joaat("U_M_O_BLWGENERALSTOREOWNER_01"):
			return "U_M_O_BLWGENERALSTOREOWNER_01";
		case joaat("A_C_DOGCATAHOULACUR_01"):
			return "A_C_DOGCATAHOULACUR_01";
		case joaat("A_C_DOGRUFUS_01"):
			return "A_C_DOGRUFUS_01";
		case joaat("A_C_DOGLION_01"):
			return "A_C_DOGLION_01";
		case joaat("CS_TIGERHANDLER"):
			return "Handler";
		case joaat("CS_VALAUCTIONBOSS_01"):
			return "VALAUCTIONBOSS_01";
		case joaat("CS_NBXRECEPTIONIST_01"):
			return "NbxReceptionist_01";
		case joaat("U_M_M_BIVFOREMAN_01"):
			return "U_M_M_BiVForeman_01";
		case joaat("U_M_M_RACFOREMAN_01"):
			return "U_M_M_RACFOREMAN_01";
		case joaat("CS_CHAINPRISONER_01"):
			return "CHAINPRISONER_01";
		case joaat("CS_CHAINPRISONER_02"):
			return "CHAINPRISONER_02";
		case joaat("U_M_M_VALPOKERPLAYER_01"):
			return "U_M_M_ValPokerPlayer_01";
		case joaat("U_M_M_VALPOKERPLAYER_02"):
			return "U_M_M_ValPokerPlayer_02";
		case joaat("CS_DUNCANGEDDES"):
			return "DUNCANGEDDES";
		case joaat("CS_ANGUSGEDDES"):
			return "ANGUSGEDDES";
		case joaat("CS_EVELYNMILLER"):
			return "EvelynMiller";
		case joaat("CS_SISTERCALDERON"):
			return "SISTERCALDERON";
		case joaat("CS_EDGARROSS"):
			return "EDGARROSS";
		case joaat("CS_WINTONHOLMES"):
			return "U_M_M_GriSurvivalist_01";
		case joaat("U_F_M_RKSHOMESTEADTENANT_01"):
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case joaat("CS_ROCKYSEVEN_WIDOW"):
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case joaat("U_M_M_BHT_STRAWBERRYDUEL"):
			return "U_M_M_BHT_STRAWBERRYDUEL";
		case joaat("U_M_M_RHDTRAINSTATIONWORKER_01"):
			return "StationWorker";
		case joaat("CS_LEVISIMON"):
			return "LEVISIMON";
		case joaat("S_M_M_FUSSARHENCHMAN_01"):
			return "S_M_M_GULFUSSARS_01";
		case joaat("A_C_DONKEY_01"):
			return "A_C_DONKEY_01";
		case joaat("A_M_M_GUATOWNFOLK_01"):
			return "S_M_M_ISPWORKER_01";
		case joaat("A_M_O_GUATOWNFOLK_01"):
			return "S_M_M_ISPWORKER_02";
		case joaat("U_M_O_VALBARTENDER_01"):
			return "U_M_O_ValBartender_01";
		case joaat("U_M_M_NBXBARTENDER_02"):
			return "U_M_M_NBXBARTENDER_02";
		case joaat("CS_UNIDUSTERJAIL_01"):
			return "CS_UNIDUSTERJAIL_01";
		case joaat("A_M_M_RHDTOWNFOLK_01"):
			return "A_M_M_RHDTOWNFOLK_01";
		case joaat("U_M_M_UNIBOUNTYHUNTER_01"):
			return "U_M_M_UNIBOUNTYHUNTER_01";
		case joaat("U_M_M_UNIBOUNTYHUNTER_02"):
			return "U_M_M_UNIBOUNTYHUNTER_02";
		case joaat("CS_BROTHERDORKINS"):
			return "BrotherDorkins";
		case joaat("G_M_M_UNIBRAITHWAITES_01"):
			return "G_M_M_UniBraithwaites_01";
		case joaat("A_M_M_GAMHIGHSOCIETY_01"):
			return "A_M_M_GAMHIGHSOCIETY_01";
		case joaat("U_M_M_STRFREIGHTSTATIONOWNER_01"):
			return "U_M_M_STRFREIGHTSTATIONOWNER_01";
		case joaat("CS_EAGLEFLIES"):
			return "EagleFlies";
		case joaat("CS_RAINSFALL"):
			return "CS_RAINSFALL";
		case joaat("A_M_M_WAPWARRIORS_01"):
			return "A_M_M_WapWarriors_01";
		case joaat("A_M_Y_NBXSTREETKIDS_01"):
			return "A_M_Y_NBXSTREETKIDS_01";
		case joaat("U_M_M_BHT_SHACKESCAPE"):
			return "U_M_M_BHT_SHACKESCAPE";
		case joaat("A_M_M_HTLROUGHTRAVELLERS_01"):
			return "A_M_M_HTLROUGHTRAVELLERS_01";
		case joaat("CS_LEMIUXASSISTANT"):
			return "LemiuxAssistant";
		case joaat("P_KEYS01X"):
			return "p_keys01x";
		case joaat("CS_BALLOONOPERATOR"):
			return "CS_BALLOONOPERATOR";
		case joaat("A_M_M_BIVWORKER_01"):
			return "Worker1";
		case joaat("U_M_M_BHT_MINEFOREMAN"):
			return "U_M_M_BHT_MINEFOREMAN";
		case joaat("A_M_M_NBXSLUMS_01"):
			return "A_M_M_NbxSlums_01";
		case joaat("CS_SDPRIEST"):
			return "U_M_M_NBXPRIEST_01";
		case joaat("A_C_BEAR_01"):
			return "A_C_BEAR_01";
		case joaat("CS_MARSHALL_THURWELL"):
			return "MARSHALL_THURWELL";
		case joaat("CS_FAMOUSGUNSLINGER_02"):
			return "CS_FAMOUSGUNSLINGER_02";
		case joaat("CS_SD_STREETKID_01"):
			return "cs_sd_streetkid_01";
		case joaat("CS_SD_STREETKID_02"):
			return "cs_sd_streetkid_02";
		case joaat("CS_OBEDIAHHINTON"):
			return "ObediahHinton";
		case joaat("CS_POISONWELLSHAMAN"):
			return "PoisonWellShaman";
		case joaat("CS_COOPER"):
			return "A_M_M_EMRFARMHAND_01";
		case joaat("U_M_M_BHT_BENEDICTALLBRIGHT"):
			return "u_m_m_bht_benedictallbright";
		case joaat("CS_JULES"):
			return "Jules";
		case joaat("CS_MRDEVON"):
			return "MRDEVON";
		case joaat("CS_MRWAYNE"):
			return "MRWAYNE";
		case joaat("CS_PAYTAH"):
			return "PAYTAH";
		case joaat("CS_VALDEPUTY_01"):
			return "CS_VALDEPUTY_01";
		case joaat("MES_SADIE5_MALES_01"):
			return "MES_SADIE5_MALES_01^1";
		case joaat("A_M_M_NBXDOCKWORKERS_01"):
			return "A_M_M_NBXDOCKWORKERS_01";
		case joaat("U_M_M_VALSHERIFF_01"):
			return "U_M_M_VALSHERIFF_01";
		case joaat("P_C_HORSE_01"):
			return "P_C_HORSE_01";
	}
	return "";
}

bool func_504(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_505(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_A_PLAYER(iVar0))
		{
			return NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
		}
	}
	return 255;
}

void func_506(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;

	iVar5 = PED::_GET_METAPED_TYPE(iParam0);
	iVar6 = joaat("MPC_PLAYER_TYPE_MP_MALE");
	if (iVar5 == 1)
	{
		iVar6 = joaat("MPC_PLAYER_TYPE_MP_FEMALE");
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1952637.f_1794.f_1[iVar0 /*3*/] = { vVar2 };
		iVar0++;
	}
	if (!func_582(&(Global_1952637.f_1794), &uVar1, iParam1, -1, 0, 0, iVar6, 0, 8))
	{
		return;
	}
	func_583(iParam0, &(Global_1952637.f_1794));
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1952637.f_1794.f_1[iVar0 /*3*/] == Global_1952637.f_83[iVar0 /*12*/] || Global_1952637.f_1794.f_1[iVar0 /*3*/] == 0)
		{
		}
		else
		{
			func_584(Global_1952637.f_1794.f_1[iVar0 /*3*/], iVar5);
		}
		iVar0++;
	}
}

int func_507(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;

	iVar1 = PED::_GET_METAPED_TYPE(iParam0);
	iVar2 = joaat("MPC_PLAYER_TYPE_MP_MALE");
	if (iVar1 == 1)
	{
		iVar2 = joaat("MPC_PLAYER_TYPE_MP_FEMALE");
	}
	iVar3 = 0;
	while (iVar3 < 39)
	{
		Global_1952637.f_2032.f_1[iVar3 /*3*/] = { vVar4 };
		iVar3++;
	}
	if (!func_582(&(Global_1952637.f_2032), &uVar0, iParam1, -1, 0, 0, iVar2, 0, 8))
	{
		return 0;
	}
	func_583(iParam0, &(Global_1952637.f_2032));
	iVar3 = 0;
	while (iVar3 < 39)
	{
		if (!func_585(iVar3, 8))
		{
		}
		else
		{
			func_586(iParam0, iVar3, 1);
		}
		iVar3++;
	}
	func_566(&(Global_1952637.f_2032), iParam0, 1, 8, 1, 0, 1, 0);
	return 1;
}

bool func_508()
{
	int iVar0;

	if (Global_1952637.f_2977 <= 0)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < Global_1952637.f_2977)
	{
		if (!PED::_0xB0B2C6D170B0E8E5(Global_1952637.f_2977.f_1[iVar0 /*2*/].f_1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_509(int iParam0)
{
	var uVar0;

	if (!func_587(32))
	{
		func_588(&(Global_1952637.f_2365));
		func_589(32);
	}
	if (iParam0->f_1 == 0)
	{
		if (!func_590(*iParam0))
		{
			if (func_587(32))
			{
				func_591(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1);
			}
			return 0;
		}
		func_592(&(Global_1952637.f_2365));
		if (!func_593(&(Global_1952637.f_1556), *iParam0, &uVar0, 0, 1, 0, 0, 0, 0, 8))
		{
			if (func_587(32))
			{
				func_591(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1);
			}
			return 0;
		}
		func_594(&(Global_1952637.f_1556));
	}
	func_564(33, Global_1139381.f_4779.f_4, 0, 0, 0);
	Global_1139381.f_4779.f_4 = *iParam0;
	Global_1139381.f_4779 = iParam0->f_1;
	func_564(30, 0, 0, 0, 0);
	func_564(27, 0, 0, 0, 0);
	func_564(32, Global_1139381.f_4779.f_4, 0, 0, 0);
	return 1;
}

int func_510(int* iParam0, char* sParam1)
{
	if (MISC::_IS_STRING_SPACE(sParam1))
	{
		return 2;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_1483.f_208))
	{
		return 0;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(iParam0->f_1483.f_208, false))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x6F1F0B17109309DA(iParam0->f_1483.f_208, sParam1))
	{
		return 2;
	}
	return 1;
}

bool func_511(int* iParam0, int iParam1, bool bParam2, int iParam3, var uParam4)
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
	int iVar9;

	iVar0 = ENTITY::GET_ENTITY_TYPE(iParam1);
	switch (iVar0)
	{
		case 1:
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (PED::IS_PED_A_PLAYER(iVar2))
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (bParam2)
					{
						iVar3 = iParam0->f_14[iVar1 /*21*/].f_1.f_2;
					}
					else
					{
						iVar3 = iParam0->f_14[iVar1 /*21*/].f_1.f_1;
					}
					if (iParam1 != iVar3)
					{
					}
					else
					{
						*iParam3 = iVar1;
						*uParam4 = 966820754;
						return true;
					}
					iVar1++;
				}
			}
			else if (ENTITY::_0x9A100F1CF4546629(iVar2))
			{
				iVar1 = 0;
				while (iVar1 < 20)
				{
					if (bParam2)
					{
						iVar4 = iParam0->f_500[iVar1 /*13*/].f_2;
					}
					else
					{
						iVar4 = iParam0->f_500[iVar1 /*13*/].f_1;
					}
					if (iParam1 != iVar4)
					{
					}
					else
					{
						*iParam3 = iVar1;
						*uParam4 = -1821507459;
						return true;
					}
					iVar1++;
				}
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 20)
				{
					if (bParam2)
					{
						iVar5 = iParam0->f_99[iVar1 /*20*/].f_2;
					}
					else
					{
						iVar5 = iParam0->f_99[iVar1 /*20*/].f_1;
					}
					if (iParam1 != iVar5)
					{
					}
					else
					{
						*iParam3 = iVar1;
						*uParam4 = 1627542854;
						return true;
					}
					iVar1++;
				}
			}
			break;
		case 2:
			iVar6 = ENTITY::GET_ENTITY_MODEL(iParam1);
			if (VEHICLE::IS_THIS_MODEL_A_TRAIN(iVar6))
			{
				iVar1 = 0;
				while (iVar1 < 1)
				{
					if (bParam2)
					{
						iVar7 = iParam0->f_1089[iVar1 /*14*/].f_2;
					}
					else
					{
						iVar7 = iParam0->f_1089[iVar1 /*14*/].f_1;
					}
					if (iParam1 != iVar7)
					{
					}
					else
					{
						*iParam3 = iVar1;
						*uParam4 = 465509728;
						return true;
					}
					iVar1++;
				}
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 10)
				{
					if (bParam2)
					{
						iVar8 = iParam0->f_761[iVar1 /*13*/].f_2;
					}
					else
					{
						iVar8 = iParam0->f_761[iVar1 /*13*/].f_1;
					}
					if (iParam1 != iVar8)
					{
					}
					else
					{
						*iParam3 = iVar1;
						*uParam4 = 1135537454;
						return true;
					}
					iVar1++;
				}
			}
			break;
	}
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (bParam2)
		{
			iVar9 = iParam0->f_1104[iVar1 /*15*/].f_2;
		}
		else
		{
			iVar9 = iParam0->f_1104[iVar1 /*15*/].f_1;
		}
		if (iParam1 != iVar9)
		{
		}
		else
		{
			*iParam3 = iVar1;
			*uParam4 = 0;
			return true;
		}
		iVar1++;
	}
	return false;
}

int func_512(int iParam0, int* iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (iParam1->f_1465 == -1)
	{
		return -1;
	}
	if (iParam1->f_1465 >= 24)
	{
		iParam1->f_1465 = -1;
	}
	iVar0 = iParam1->f_1465;
	iParam1->f_1465++;
	iVar1 = ENTITY::GET_ENTITY_TYPE(iParam0);
	iParam1->f_1104[iVar0 /*15*/].f_1 = iParam0;
	iParam1->f_1104[iVar0 /*15*/].f_13 = iParam2;
	iParam1->f_1104[iVar0 /*15*/].f_14 = iParam3;
	return iVar0;
}

Vector3 func_513(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &vVar3, &vVar6);
	fVar9 = MISC::ABSF(((vVar6.z - vVar3.z) * 0.5f));
	vVar0.f_2 = (vVar0.z - fVar9);
	return vVar0;
}

void func_514(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_595(iParam0, iParam1);
	iVar1 = 0;
	while (iVar1 <= (29 - 1))
	{
		iVar2 = ((29 - 1) - iVar1);
		if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, false, iVar2, false))
		{
			if (iVar0 != joaat("WEAPON_UNARMED"))
			{
				if (iVar2 == 1)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 116, true);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(iParam1, iVar0, true, iVar2, false, false);
			}
		}
		iVar1++;
	}
}

bool func_515(int iParam0, int iParam1, int* iParam2)
{
	bool bVar0;

	if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		return false;
	}
	if (PED::_0xA0BC8FAED8CFEB3C(iParam1))
	{
		if (!func_86(*iParam2, 5))
		{
			PED::_SET_PED_COMPONENT_DISABLED(iParam1, joaat("HOLSTERS_LEFT"), 1);
			bVar0 = true;
			func_26(iParam2, 5);
		}
		if (bVar0)
		{
			PED::_UPDATE_PED_VARIATION(iParam1, false, true, true, true, false);
			return false;
		}
		return true;
	}
	return false;
}

bool func_516(int iParam0)
{
	return ((PED::IS_PED_IN_ANY_VEHICLE(iParam0, false) || PED::IS_PED_ON_MOUNT(iParam0)) || (!PED::IS_PED_RAGDOLL(iParam0) && PED::IS_PED_ON_VEHICLE(iParam0, false)));
}

bool func_517(int* iParam0, int iParam1, int iParam2, var uParam3)
{
	if (iParam1 < 0)
	{
		return false;
	}
	switch (iParam2)
	{
		case 966820754:
			if (iParam1 >= 4)
			{
				return false;
			}
			*uParam3 = { iParam0->f_14[iParam1 /*21*/].f_1 };
			return true;
		case 1627542854:
			if (iParam1 >= 20)
			{
				return false;
			}
			*uParam3 = { iParam0->f_99[iParam1 /*20*/] };
			return true;
		case -1821507459:
			if (iParam1 >= 20)
			{
				return false;
			}
			*uParam3 = { iParam0->f_500[iParam1 /*13*/] };
			return true;
		case 465509728:
			if (iParam1 >= 1)
			{
				return false;
			}
			*uParam3 = { iParam0->f_1089[iParam1 /*14*/] };
			return true;
		case 1135537454:
			if (iParam1 >= 10)
			{
				return false;
			}
			*uParam3 = { iParam0->f_761[iParam1 /*13*/] };
			return true;
		case 422112462:
			if (iParam1 >= 10)
			{
				return false;
			}
			*uParam3 = { iParam0->f_892[iParam1 /*13*/] };
			return true;
		case -230450704:
			if (iParam1 >= 5)
			{
				return false;
			}
			*uParam3 = { iParam0->f_1023[iParam1 /*13*/] };
			return true;
		case 0:
			if (iParam1 >= 24)
			{
				return false;
			}
			*uParam3 = { iParam0->f_1104[iParam1 /*15*/] };
			return true;
		default:
			break;
	}
	return false;
}

bool func_518(int* iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam1 < 0)
	{
		return false;
	}
	switch (iParam2)
	{
		case 0:
			if (iParam1 >= 24)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = iParam0->f_1104[iParam1 /*15*/].f_2;
			}
			else
			{
				*iParam4 = iParam0->f_1104[iParam1 /*15*/].f_1;
			}
			break;
		case 966820754:
			if (iParam1 >= 4)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = iParam0->f_14[iParam1 /*21*/].f_1.f_2;
			}
			else
			{
				*iParam4 = iParam0->f_14[iParam1 /*21*/].f_1.f_1;
			}
			break;
		case 1627542854:
			if (iParam1 >= 20)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = iParam0->f_99[iParam1 /*20*/].f_2;
			}
			else
			{
				*iParam4 = iParam0->f_99[iParam1 /*20*/].f_1;
			}
			break;
		case -1821507459:
			if (iParam1 >= 20)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = iParam0->f_500[iParam1 /*13*/].f_2;
			}
			else
			{
				*iParam4 = iParam0->f_500[iParam1 /*13*/].f_1;
			}
			break;
		case 1135537454:
			if (iParam1 >= 10)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = iParam0->f_761[iParam1 /*13*/].f_2;
			}
			else
			{
				*iParam4 = iParam0->f_761[iParam1 /*13*/].f_1;
			}
			break;
		case 422112462:
			if (iParam1 >= 10)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = iParam0->f_892[iParam1 /*13*/].f_2;
			}
			else
			{
				*iParam4 = iParam0->f_892[iParam1 /*13*/].f_1;
			}
			break;
		case -230450704:
			if (iParam1 >= 5)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = iParam0->f_1023[iParam1 /*13*/].f_2;
			}
			else
			{
				*iParam4 = iParam0->f_1023[iParam1 /*13*/].f_1;
			}
			break;
		case 465509728:
			if (iParam1 >= 1)
			{
				return false;
			}
			if (bParam3)
			{
				*iParam4 = iParam0->f_1089[iParam1 /*14*/].f_2;
			}
			else
			{
				*iParam4 = iParam0->f_1089[iParam1 /*14*/].f_1;
			}
			break;
	}
	return ENTITY::DOES_ENTITY_EXIST(*iParam4);
}

int func_519(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

struct<4> func_520()
{
	struct<4> Var0;

	return Var0;
}

bool func_521(int iParam0, var uParam1)
{
	bool bVar0;

	if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		return false;
	}
	if (PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		PED::_SET_PED_COMPONENT_DISABLED(iParam0, -1903910230, 0);
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
		if (PED::_IS_METAPED_USING_COMPONENT(iParam0, joaat("WRIST_BINDINGS")))
		{
			PED::_SET_PED_COMPONENT_DISABLED(iParam0, joaat("WRIST_BINDINGS"), 1);
			bVar0 = true;
		}
		if (PED::_IS_METAPED_USING_COMPONENT(iParam0, joaat("ANKLE_BINDINGS")))
		{
			PED::_SET_PED_COMPONENT_DISABLED(iParam0, joaat("ANKLE_BINDINGS"), 1);
			bVar0 = true;
		}
		if (func_86(uParam1->f_6, 2))
		{
			if (PED::_IS_METAPED_USING_COMPONENT(iParam0, joaat("MASKS")))
			{
				PED::_SET_PED_COMPONENT_DISABLED(iParam0, joaat("MASKS"), 1);
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
			return false;
		}
		return true;
	}
	return false;
}

void func_522(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iParam1, 0);
	}
}

int func_523(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return 1;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(uParam0->f_1);
	if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(iVar0))
	{
		return 1;
	}
	if (iParam1 == 0)
	{
		return 1;
	}
	iVar1 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_1);
	vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar1, true, false) };
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		bVar5 = VEHICLE::_0x3C9628A811CBD724(iVar1);
		iVar6 = VEHICLE::_CREATE_MISSION_TRAIN(iParam1, vVar2, bVar5, false, false, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
		{
			return 1;
		}
		ENTITY::SET_ENTITY_INVINCIBLE(iVar6, true);
		func_425(iVar6, 1);
		uParam0->f_2 = iVar6;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		iVar7 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_2);
		iVar8 = VEHICLE::_0x635423D55CA84FC8(iParam1);
		iVar9 = 0;
		while (iVar9 < iVar8)
		{
			iVar10 = VEHICLE::GET_TRAIN_CARRIAGE(iVar7, iVar9);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar10))
			{
			}
			else if (!ENTITY::IS_ENTITY_VISIBLE(iVar10))
			{
			}
			else
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iVar10, true);
				func_425(iVar10, 1);
			}
			iVar9++;
		}
		if (VEHICLE::_0xBD3C4A2ED509205E(iVar7))
		{
			return 1;
		}
	}
	return 0;
}

int func_524(var uParam0, int iParam1)
{
	struct<6> Var0;
	int iVar13;
	vector3 vVar14;
	float fVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	var uVar22;
	var uVar23;
	int iVar24;
	int iVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;

	Var0.f_5 = -1082130432;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return 1;
	}
	iVar13 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_1);
	vVar14 = { ENTITY::GET_ENTITY_COORDS(iVar13, true, false) };
	vVar14.f_1 = (vVar14.y + 100f);
	fVar17 = ENTITY::GET_ENTITY_HEADING(iVar13);
	if (VEHICLE::_IS_DRAFT_VEHICLE(iVar13) && !VEHICLE::_0xA19447D83294E29F(iVar13, &iVar18, &iVar19))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		iVar20 = ENTITY::GET_ENTITY_MODEL(iVar13);
		iVar21 = VEHICLE::CREATE_VEHICLE(iVar20, vVar14, fVar17, false, false, false, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar21))
		{
			return 1;
		}
		ENTITY::SET_ENTITY_COORDS(iVar21, vVar14, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(iVar21, fVar17);
		ENTITY::SET_ENTITY_INVINCIBLE(iVar21, true);
		VEHICLE::_SET_VEHICLE_TINT(iVar21, VEHICLE::_GET_VEHICLE_TINT(iVar13));
		VEHICLE::COPY_VEHICLE_DAMAGES(iVar13, iVar21);
		func_204(iParam1, *uParam0, 1135537454, &uVar22, &uVar23, &iVar24);
		if (iVar24 != 0)
		{
			PROPSET::_0xD80FAF919A2E56EA(iVar21, iVar24);
		}
		func_425(iVar21, 1);
		uParam0->f_2 = iVar21;
	}
	if (!VEHICLE::_IS_DRAFT_VEHICLE(iVar13))
	{
		return 1;
	}
	else if (!func_86(uParam0->f_4, 2))
	{
		iVar25 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_2);
		bVar26 = true;
		if (!VEHICLE::_0xA19447D83294E29F(iVar25, &iVar18, &iVar19))
		{
			bVar26 = false;
		}
		else if (iVar19 < iVar18)
		{
			bVar26 = false;
		}
		iVar27 = 0;
		while (iVar27 < 6)
		{
			iVar28 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar25, iVar27);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar28))
			{
			}
			else
			{
				if (ENTITY::IS_ENTITY_VISIBLE(iVar28))
				{
					func_425(iVar28, 1);
					ENTITY::SET_ENTITY_INVINCIBLE(iVar28, true);
				}
				iVar29 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar13, iVar27);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar29) || PED::IS_PED_INJURED(iVar29))
				{
				}
				else if (!PED::_0xA0BC8FAED8CFEB3C(iVar29))
				{
					bVar26 = false;
				}
				else if (!PED::_0xA0BC8FAED8CFEB3C(iVar28))
				{
					bVar26 = false;
				}
				else
				{
					iVar30 = (18 + iVar27);
					if (!MISC::IS_BIT_SET(uParam0->f_4, iVar30))
					{
						PED::CLONE_PED_TO_TARGET(iVar29, iVar28);
						MISC::SET_BIT(&(uParam0->f_4), iVar30);
					}
					if (!func_521(iVar28, &Var0))
					{
						bVar26 = false;
					}
				}
			}
			iVar27++;
		}
		if (bVar26)
		{
			iVar27 = 0;
			while (iVar27 < 6)
			{
				iVar31 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar25, iVar27);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar31))
				{
				}
				else
				{
					iVar32 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar13, iVar27);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar32) || PED::IS_PED_INJURED(iVar32))
					{
						func_596(&iVar31);
					}
				}
				iVar27++;
			}
			func_26(&(uParam0->f_4), 2);
			return 1;
		}
	}
	return 0;
}

int func_525(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	int iVar6;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return 1;
	}
	iVar0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_1);
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	vVar1.f_1 = (vVar1.y + 100f);
	fVar4 = ENTITY::GET_ENTITY_HEADING(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		iVar5 = ENTITY::GET_ENTITY_MODEL(uParam0->f_1);
		iVar6 = OBJECT::CREATE_OBJECT(iVar5, vVar1, false, false, true, false, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
		{
			return 1;
		}
		ENTITY::SET_ENTITY_COORDS(iVar6, vVar1, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(iVar6, fVar4);
		ENTITY::SET_ENTITY_INVINCIBLE(iVar6, true);
		func_425(iVar6, 1);
		uParam0->f_2 = iVar6;
	}
	return 1;
}

void func_526(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
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
		bVar3 = PED::_GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == func_581(Global_34) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_342(iParam0))
	{
		if (func_597(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (func_598(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_526(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_526(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_598(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (func_598(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_598(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_598(iParam5, 32), true);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (func_598(iParam5, 129))
	{
		if (func_598(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iParam0, vParam1, fParam4, func_598(iParam5, 32), true);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_598(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_598(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (func_342(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_598(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_34 && !func_598(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

bool func_527()
{
	return (Global_1915715.f_20637 || Global_1915715.f_22504.f_1);
}

char* func_528(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return func_599(iVar0);
}

char* func_529(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("CANOE"):
			return "CANOE";
		case joaat("WAGON02X"):
			return "WAGON02X";
		case joaat("WAGON04X"):
			return "WAGON04X";
		case joaat("WAGON05X"):
			return "WAGON05X";
		case joaat("CHUCKWAGON000X"):
			return "CHUCKWAGON000X";
		case joaat("WAGONCIRCUS02X"):
			return "WAGONCIRCUS02X";
		case joaat("COACH2"):
			return "COACH2";
		case joaat("PRIVATECOALCAR01X"):
			return "PRIVATECOALCAR01X";
		case joaat("NORTHPASSENGER01X"):
			return "NORTHPASSENGER01X";
		case joaat("PRIVATESTEAMER01X"):
			return "PRIVATESTEAMER01X";
		case joaat("PRIVATEDINING01X"):
			return "PRIVATEDINING01X";
		case joaat("UTILLIWAG"):
			return "UTILLIWAG";
		case joaat("SKIFF"):
			return "SKIFF";
		case joaat("HANDCART"):
			return "HANDCART";
		case joaat("ROWBOATSWAMP"):
			return "ROWBOATSWAMP";
		case joaat("ROWBOATSWAMP02"):
			return "ROWBOATSWAMP02";
	}
	return "";
}

bool func_530(int iParam0)
{
	return iParam0 != 0;
}

bool func_531(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951255[iParam0 /*23*/].f_1 && iParam1) != 0;
}

int func_532(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_531(iVar0, 2))
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
		func_600(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_533(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_493(iParam0))
	{
		return;
	}
	iVar0 = func_575(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_0xF4A5C4509BF923B1(Global_1951255[iVar0 /*23*/].f_3, iParam1);
}

float func_534(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_493(iParam0))
	{
		return 0f;
	}
	iVar0 = func_575(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1951255[iVar0 /*23*/].f_3))
	{
		return HUD::_UIPROMPT_GET_MASH_MODE_PROGRESS(Global_1951255[iVar0 /*23*/].f_3);
	}
	return HUD::_0x81801291806DBC50(Global_1951255[iVar0 /*23*/].f_3);
}

bool func_535(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_493(iParam0))
	{
		return false;
	}
	iVar0 = func_575(iParam0);
	if (HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(Global_1951255[iVar0 /*23*/].f_3))
	{
		if (Global_1951255[iVar0 /*23*/].f_20)
		{
			iVar1 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = MISC::_GET_SYSTEM_TIME();
		}
		uVar2 = HUD::_0x81801291806DBC50(Global_1951255[iVar0 /*23*/].f_3);
		if (!HUD::_UIPROMPT_IS_ACTIVE(Global_1951255[iVar0 /*23*/].f_3))
		{
			iVar3 = (iVar1 - Global_1951255[iVar0 /*23*/].f_21);
			iVar4 = BUILTIN::FLOOR((IntToFloat(Global_1951255[iVar0 /*23*/].f_18) * (1f - Global_1951255[iVar0 /*23*/].f_22)));
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			Global_1951255[iVar0 /*23*/].f_21 = iVar1;
			Global_1951255[iVar0 /*23*/].f_22 = uVar2;
		}
	}
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1951255[iVar0 /*23*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1951255[iVar0 /*23*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1951255[iVar0 /*23*/].f_3);
}

bool func_536(var uParam0)
{
	struct<8> Var0;
	struct<8> Var8;

	Var0 = { func_264(uParam0) };
	Var8 = { func_323(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(&Var0, &Var8);
}

bool func_537(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939493.f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(Global_1939493[iVar0 /*16*/].f_10)))
		{
			func_601(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_538(var uParam0, char* sParam1)
{
	struct<8> Var0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	Var0 = { func_264(uParam0) };
	if ((!MISC::ARE_STRINGS_EQUAL(&Var0, sParam1) && ANIMSCENE::_0xA9016536015DE29D(uParam0->f_208, sParam1)) && ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_208, sParam1))
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_208, sParam1);
	}
}

void func_539(float fParam0, int iParam1)
{
	*fParam0 = (*fParam0 || iParam1);
}

void func_540(float fParam0, int iParam1)
{
	*fParam0 = (*fParam0 - (*fParam0 && iParam1));
}

bool func_541(int iParam0)
{
	if (-1829635046 == func_602(81053684))
	{
		if (func_603(iParam0))
		{
			return true;
		}
	}
	else if (func_604(-525676072, iParam0) || func_606(func_605(1742327865), -1303648999))
	{
		if (func_603(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_542(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_543(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	return func_607(iParam0, iParam1, bParam2, bParam3);
}

void func_544(int iParam0)
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
	iVar1 = func_608(2);
	func_609(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_545(int iParam0)
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
	iVar1 = func_610(2);
	func_611(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_546(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_34, &iVar3, false, iVar4, true))
		{
			if (func_561(iVar3) && WEAPON::_0x705BE297EEBDB95D(iVar3))
			{
				if (bParam0)
				{
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_34, iVar3) < WEAPON::_GET_WEAPON_CLIP_SIZE(iVar3) * 4)
					{
						WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_34, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iVar3), (WEAPON::_GET_WEAPON_CLIP_SIZE(iVar3) * 4 - WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(Global_34, iVar3))), 752097756);
					}
				}
				iVar0 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_34, iVar3);
				if (iVar0 > WEAPON::_GET_WEAPON_CLIP_SIZE(iVar3))
				{
					iVar1 = WEAPON::_GET_WEAPON_CLIP_SIZE(iVar3);
				}
				else
				{
					iVar1 = iVar0;
				}
				if (iVar1 > 0)
				{
					WEAPON::SET_AMMO_IN_CLIP(Global_34, iVar3, iVar1);
				}
				iVar1 = 0;
				iVar0 = 0;
			}
		}
		iVar2++;
	}
}

void func_547()
{
	int iVar0;

	iVar0 = func_560(Global_34, 9, 1, 0);
	if (func_561(iVar0))
	{
		return;
	}
	iVar0 = func_560(Global_34, 7, 1, 0);
	if (func_561(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, iVar0, true, 8, false, false);
	}
	iVar0 = func_560(Global_34, 0, 1, 0);
	if (func_561(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_560(Global_34, 1, 1, 0);
	if (func_561(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_560(Global_34, 18, 1, 0);
	if (func_561(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_612();
	if (func_561(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, iVar0, 0, true))
		{
			func_613(Global_34, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_34, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_614(3072, 0);
	if (func_561(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iVar0, 0, true))
		{
			func_613(Global_34, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_34, iVar0, true, 9, false, false);
		}
	}
}

int func_548()
{
	return Global_1903136.f_379;
}

int func_549(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_409(*uParam0, 0f, 0f, 0f))
	{
		return 1;
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
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

void func_550(int iParam0)
{
	Global_39.f_281.f_3222.f_1 = iParam0;
}

void func_551(int iParam0)
{
	Global_39.f_281.f_3222 = iParam0;
}

void func_552(vector3 vParam0)
{
	Global_39.f_281.f_3222.f_19 = { vParam0 };
}

var func_553()
{
	return Global_1902818;
}

void func_554(var uParam0)
{
	Global_39.f_281.f_3222.f_2 = uParam0;
}

bool func_555()
{
	return (func_615() || func_616());
}

void func_556(bool bParam0)
{
	if (bParam0)
	{
		Global_1940085.f_9 = 0f;
	}
	Global_1940085.f_8 = 0f;
	Global_1940085.f_15.f_1 = 0f;
	Global_1940085.f_15 = 0f;
	Global_1940085.f_15.f_9 = 0f;
	Global_1940085.f_15.f_8 = 0f;
	Global_1940085.f_15.f_10 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		PED::_0x06D26A96CA1BCA75(Global_34, 10, 0f, 0);
		AUDIO::SET_PED_IS_DRUNK(Global_34, false);
		PED::_0x406CCF555B04FAD3(Global_34, 0, 0f);
	}
	func_617(0f);
	if (ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		PED::SET_PED_CONFIG_FLAG(Global_34, 26, false);
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_618();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

Vector3 func_557(var uParam0)
{
	return uParam0->f_268;
}

float func_558(var uParam0)
{
	return uParam0->f_271;
}

float func_559(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

int func_560(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_561(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_562(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0 /*12*/]) && uParam0->f_17[iVar0 /*12*/] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_563(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_619(iParam1, 1, 0) };
		iParam3 = func_620(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_622(iParam1, iParam2, func_621(iParam3, 1), bParam4, 1, 0, 1))
	{
		return 0;
	}
	func_623(1, bParam5, bParam9, 1);
	if (bParam10)
	{
		if (func_624(iParam1, 0))
		{
			func_625(Global_1952637.f_1675.f_1[func_621(iParam3, 1) /*3*/], 0, 0);
		}
		else
		{
			func_625(iParam1, 1, 0);
		}
	}
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam7 && iParam1 != Global_1952637.f_83[func_621(iParam3, 1) /*12*/])
			{
				func_564(27, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_587(32768))
			{
				func_626();
				func_564(21, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		return 1;
	}
	iVar5 = func_627(iParam3);
	if (bParam4)
	{
		iVar5 |= 2;
	}
	if (bParam8)
	{
		func_628(&iVar5, 4);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_564(19, 0, iVar5, 0, 0);
	}
	else
	{
		iVar5 |= 1;
		func_564(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_564(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_589(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_629(Var0);
}

bool func_565(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1952637.f_2843.f_1 <= 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_630(iVar0, 1);
		if (func_631(iVar2, 2))
		{
		}
		else if (Global_1952637.f_2843.f_3[iVar0] == 0)
		{
		}
		else
		{
			if (bParam0 && func_632(iVar0) == -1)
			{
				func_633(iVar0, 0);
				func_634(&(Global_1952637.f_2897.f_2[(Global_1952637.f_2897 - 1) /*2*/]), 2, 6);
			}
			func_635(iVar2, 2, 6);
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		return true;
	}
	return false;
}

void func_566(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1952637.f_925 = 0;
	if (iParam3 == -1 && bParam6)
	{
		PED::_0x0BFA1BD465CDFEFD(iParam1);
		if (bParam7)
		{
			func_636(iParam1, &(Global_1952637.f_4), Global_1952637.f_3481, Global_1956200.f_1431.f_106);
		}
	}
	else
	{
		bParam6 = false;
	}
	if ((func_587(32768) && func_631(1108822547, 8)) && func_585(10, iParam3))
	{
		func_637(iParam1, 0, 1, 0);
	}
	iVar1 = 0;
	while (iVar1 < Global_1952637.f_592)
	{
		iVar2 = Global_1952637.f_552[iVar1];
		iVar0 = func_621(iVar2, 1);
		if (func_631(iVar2, 8))
		{
		}
		else if (Global_1952637.f_83[iVar0 /*12*/].f_1 <= 0 || Global_1952637.f_83[iVar0 /*12*/].f_3[0] == joaat("MISSING"))
		{
		}
		else if (uParam0->f_1[iVar0 /*3*/] == 0)
		{
		}
		else if (!func_585(iVar0, iParam3))
		{
		}
		else if ((func_631(iVar2, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1952637.f_83[iVar0 /*12*/]) || uParam0->f_1[iVar0 /*3*/].f_1 == 289238755)
		{
			if (!func_631(iVar2, 1) || bParam2)
			{
				Global_1952637.f_925++;
				if (!bParam6)
				{
					func_586(iParam1, iVar0, 1);
				}
				if (uParam0->f_1[iVar0 /*3*/].f_1 == 289238755)
				{
					Global_1952637.f_2764[iVar0 /*2*/].f_1 = 289238755;
				}
				func_635(iVar2, 1, 6);
			}
		}
		else
		{
			if (!bParam6)
			{
				if ((!bParam2 && uParam0->f_1[iVar0 /*3*/] == Global_1952637.f_2764[iVar0 /*2*/]) && uParam0->f_1[iVar0 /*3*/].f_1 == Global_1952637.f_2764[iVar0 /*2*/].f_1)
				{
				}
				else
				{
					func_586(iParam1, iVar0, 1);
					Global_1952637.f_2764[iVar0 /*2*/] = uParam0->f_1[iVar0 /*3*/];
					Global_1952637.f_2764[iVar0 /*2*/].f_1 = uParam0->f_1[iVar0 /*3*/].f_1;
					if (func_631(iVar2, 1))
					{
						func_638(iVar2, 1, 6);
					}
					Global_1952637.f_925++;
					func_639(&(uParam0->f_1[iVar0 /*3*/]), iParam1);
				}
				iVar1++;
				if (Global_1952637.f_925 <= 0)
				{
					return;
				}
				if (bParam4)
				{
					PED::_0xAAB86462966168CE(iParam1, 1);
					PED::_UPDATE_PED_VARIATION(iParam1, false, true, true, true, bParam5);
				}
			}
		}
	}
}

void func_567(var uParam0)
{
	struct<8> Var0;

	uParam0->f_217 = { Var0 };
}

void func_568(var uParam0)
{
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = { 0f, 0f, 0f };
	func_640(&(uParam0->f_263), 4194304);
}

void func_569(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_225[iVar0 /*9*/]), "", 64);
		iVar0++;
	}
}

void func_570()
{
	Global_1913504 = 1;
}

void func_571(bool bParam0)
{
	Global_1940144.f_19 = !bParam0;
}

bool func_572(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (Global_1952637.f_2843.f_1 <= 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		Global_1952637.f_2843.f_2 = 0;
		Global_1952637.f_2843.f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_1952637.f_2843.f_43[iVar0 /*2*/] = { Var2 };
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 39)
		{
			Global_1952637.f_2843.f_3[iVar1] = 0;
			iVar1++;
		}
		return true;
	}
	iVar0 = func_484(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	Global_1952637.f_2843.f_2 = (Global_1952637.f_2843.f_2 - (Global_1952637.f_2843.f_2 && Global_1952637.f_2843.f_43[iVar0 /*2*/].f_1));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (func_641(iVar1, Global_1952637.f_2843.f_43[iVar0 /*2*/].f_1))
		{
			func_642(iVar1, Global_1952637.f_2843.f_43[iVar0 /*2*/].f_1);
		}
		iVar1++;
	}
	Global_1952637.f_2843.f_1 = (Global_1952637.f_2843.f_1 - 1);
	Global_1952637.f_2843.f_43[iVar0 /*2*/] = { Global_1952637.f_2843.f_43[Global_1952637.f_2843.f_1 /*2*/] };
	Global_1952637.f_2843.f_43[Global_1952637.f_2843.f_1 /*2*/].f_1 = 0;
	Global_1952637.f_2843.f_43[Global_1952637.f_2843.f_1 /*2*/] = 0;
	return true;
}

int func_573(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	Var1 = -961687407;
	if (func_30() == -1)
	{
		Var1 = 1444744190;
	}
	Var1.f_1 = iParam0;
	Var1.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var1);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var1))
	{
		return 0;
	}
	if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var1, -624749060))
	{
		return 0;
	}
	return func_643(iVar0);
}

bool func_574(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_630(iVar0, 1);
		if (!func_631(iVar2, 2))
		{
		}
		else if (Global_1952637.f_2843.f_3[iVar0] != 0)
		{
		}
		else
		{
			if (bParam0)
			{
				func_633(iVar0, 0);
				func_634(&(Global_1952637.f_2897.f_2[(Global_1952637.f_2897 - 1) /*2*/]), 1, 6);
			}
			func_638(iVar2, 3, 6);
			Global_1952637.f_2764[iVar0 /*2*/] = 0;
			Global_1952637.f_2764[iVar0 /*2*/].f_1 = 0;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 > 0;
}

int func_575(int iParam0)
{
	return iParam0;
}

void func_576(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 - (Global_1951255[iParam0 /*23*/].f_1 && iParam1));
}

void func_577(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		if (Global_1951255[iParam0 /*23*/].f_5 == 5 && !func_531(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_578(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1951255[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_579(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 || iParam1);
}

void func_580(int iParam0)
{
	if (!func_644(iParam0))
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

int func_581(int iParam0)
{
	return iParam0;
}

bool func_582(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, int iParam8)
{
	int iVar0;

	if (iParam2 == 1378879298)
	{
		if (!func_645(uParam0, iParam2))
		{
			return false;
		}
	}
	else if (!func_646(uParam0, iParam3, iParam2) && !func_593(uParam0, iParam2, uParam1, 0, bParam4, 0, iParam6, bParam7, 0, iParam8))
	{
		return false;
	}
	iVar0 = 10;
	if (func_587(32768) && iParam6 == 0)
	{
		if (!*uParam1 || (*uParam1 && uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/]))
		{
			func_647(1108822547);
		}
		else
		{
			func_648(1108822547);
		}
	}
	if (bParam5)
	{
		func_649(2);
	}
	return true;
}

void func_583(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;

	iVar4 = PED::_GET_NUM_COMPONENTS_IN_PED(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar4)
	{
		iVar1 = PED::_GET_PED_COMPONENT_AT_INDEX(iParam0, iVar0, true, &uVar3, &uVar2);
		switch (func_482(iVar1))
		{
			case -1961188419:
				uParam1->f_1[0 /*3*/] = iVar1;
				break;
			case 1033860813:
				uParam1->f_1[26 /*3*/] = iVar1;
				break;
			case 1589583617:
				uParam1->f_1[27 /*3*/] = iVar1;
				break;
			case 153430294:
				uParam1->f_1[28 /*3*/] = iVar1;
				break;
			case -130218241:
			case 629735563:
				uParam1->f_1[8 /*3*/] = iVar1;
				break;
			case -709696437:
			case -702721097:
				uParam1->f_1[9 /*3*/] = iVar1;
				break;
			case -1839668642:
			case -1415811768:
				uParam1->f_1[1 /*3*/] = iVar1;
				break;
			case -986397773:
				uParam1->f_1[2 /*3*/] = iVar1;
				break;
			case -1674363638:
				uParam1->f_1[3 /*3*/] = iVar1;
				break;
			case 231148558:
				uParam1->f_1[4 /*3*/] = iVar1;
				break;
			default:
				break;
				break;
		}
		iVar0++;
	}
}

void func_584(var uParam0, int iParam1)
{
	if (Global_1952637.f_2977 >= 156)
	{
		return;
	}
	Global_1952637.f_2977.f_1[Global_1952637.f_2977 /*2*/].f_1 = PED::_0xF6D9E1F3560CBF8E(iParam1, uParam0, 0, 1, 0);
	Global_1952637.f_2977.f_1[Global_1952637.f_2977 /*2*/] = 1;
	Global_1952637.f_2977++;
}

bool func_585(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 39)
	{
		return false;
	}
	return (Global_1952637.f_83[iParam0 /*12*/].f_10 && iParam1) != 0;
}

void func_586(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 < Global_1952637.f_83[iParam1 /*12*/].f_1)
		{
			PED::_0xDF631E4BCE1B1FC4(iParam0, Global_1952637.f_83[iParam1 /*12*/].f_3[iVar0], 0, 1);
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_1952637.f_83[iParam1 /*12*/].f_1)
		{
			PED::_SET_PED_COMPONENT_DISABLED(iParam0, Global_1952637.f_83[iParam1 /*12*/].f_3[iVar0], 0);
			iVar0++;
		}
	}
}

bool func_587(int iParam0)
{
	return (Global_1952637 && iParam0) != 0;
}

void func_588(var uParam0)
{
	int iVar0;

	*uParam0 = Global_1952637.f_1675;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uParam0->f_1[iVar0 /*3*/] = { Global_1952637.f_1675.f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

void func_589(int iParam0)
{
	Global_1952637 = (Global_1952637 || iParam0);
}

bool func_590(var uParam0)
{
	struct<4> Var0;

	Var0 = func_650(0);
	Var0.f_1 = uParam0;
	Var0.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	return DATAFILE::_0xED4413CEE1BF142C(&Var0);
}

void func_591(int iParam0, bool bParam1)
{
	if (!func_587(32))
	{
		return;
	}
	func_564(33, Global_1139381.f_4779.f_4, 0, 0, 0);
	func_651(32);
	func_626();
	Global_1139381.f_4779.f_4 = 0;
	Global_1139381.f_4779 = 0;
	func_594(&(Global_1952637.f_2365));
	func_592(&(Global_1952637.f_2365));
	func_652(4);
	if (bParam1)
	{
		func_653(iParam0, 1, 1, 0);
	}
	func_564(27, 0, 131074, 0, 0);
	func_564(34, 0, 131072, 0, 0);
}

void func_592(var uParam0)
{
	int iVar0;

	Global_1952637.f_1556 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1952637.f_1556.f_1[iVar0 /*3*/] = { uParam0->f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

bool func_593(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;
	int iVar11;

	iVar11 = 0;
	Var4 = func_650(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		return false;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var4, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 2049745650);
	*uParam2 = bVar2;
	if (!bVar2 && !bParam3)
	{
		func_654(uParam0, func_643(iVar0), 1, 1, bParam7);
	}
	if (bVar2)
	{
		if (iParam9 != 8)
		{
			func_655(-1);
		}
		if (DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, -1212855483))
		{
			iVar11 = func_643(iVar0);
		}
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_621(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, joaat("COMPONENT")))
			{
			}
			else
			{
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bVar2)
				{
					func_635(iVar3, 16, 6);
				}
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1441384))
					{
						uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
					}
					else
					{
						Jump @362; //curOff = 297
						if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1194786549))
						{
							if (func_656(iVar3) && func_657(uParam0->f_1[iVar1 /*3*/], iVar3, &iVar0))
							{
								uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
							}
						}
						else
						{
							uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
						}
					}
					iVar1 = 16;
					if (bVar2)
					{
						if (!bParam8)
						{
							func_659(uParam0, iVar11, func_658(iParam1) != 0, iParam9);
						}
					}
					else if ((((func_660() == joaat("MPC_PLAYER_TYPE_MP_FEMALE") && uParam0->f_1[iVar1 /*3*/] == Global_1952637.f_83[iVar1 /*12*/]) && func_658(uParam0->f_1[34 /*3*/]) == 0) && !func_587(32)) && !func_587(64))
					{
						uParam0->f_1[iVar1 /*3*/] = func_661(-1293064293, 0);
						uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
						func_662(uParam0, uParam0->f_1[iVar1 /*3*/], iVar1, 0, iParam9);
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return true;
				}
			}
		}
	}
}

void func_594(var uParam0)
{
	int iVar0;

	Global_1952637.f_1675 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1952637.f_1675.f_1[iVar0 /*3*/] = { uParam0->f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

void func_595(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar6;

	iVar0 = INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam0);
	iVar1 = INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam1);
	if (!INVENTORY::_0x886DFD3E185C8A89(iVar0, &uVar6, 923904168, -740156546, &uVar2))
	{
	}
	INVENTORY::_0xC04F47D488EF9EBA(iVar0, iVar1, &uVar2, 0);
}

void func_596(int* iParam0)
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

bool func_597(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (PED::_IS_PED_USING_SCENARIO_HASH(iParam0, joaat("PROP_HITCHINGPOST")))
	{
		return true;
	}
	return false;
}

bool func_598(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

char* func_599(int iParam0)
{
	switch (iParam0)
	{
		case joaat("P_CS_LEDGER01X"):
			return "P_CS_LEDGER01X";
		case joaat("P_CS_ROPE01X"):
			return "P_CS_ROPE01X";
		case joaat("P_DOOR01X"):
			return "P_DOOR01X";
		case joaat("P_DOOR03X"):
			return "P_DOOR03X";
		case joaat("P_DOOR12X"):
			return "p_door12x";
		case joaat("P_DOOR13X"):
			return "P_DOOR13X";
		case joaat("P_DOOR45X"):
			return "p_door45x";
		case joaat("P_CHAIRVICTORIAN01X"):
			return "p_chairvictorian01x";
		case joaat("P_CRATE03X"):
			return "p_crate03x";
		case joaat("P_CS_JUG01X"):
			return "p_cs_jug01x";
		case joaat("P_CS_WAGON02X"):
			return "p_cs_wagon02x";
		case joaat("P_DOOR37X"):
			return "P_DOOR37X";
		case joaat("P_DOOR_VAL_GENSTORE"):
			return "p_door_val_genstore";
		case joaat("P_DOORSTRAWBERRY01X"):
			return "p_doorstrawberry01x";
		case joaat("P_DOORFRENCH01L"):
			return "p_doorfrench01l";
		case joaat("P_DOORFRENCH01R"):
			return "p_doorfrench01r";
		case joaat("P_DOORMANSIONGATE01X"):
			return "p_doormansiongate01x";
		case joaat("P_DOORNBD39X"):
			return "p_doornbd39x";
		case joaat("P_DOORSALOON02X"):
			return "p_doorsaloon02x";
		case joaat("P_DOORVH_SALOON_L"):
			return "P_DOORVH_SALOON_L";
		case joaat("P_DOORVH_SALOON_R"):
			return "P_DOORVH_SALOON_R";
		case joaat("P_CIGARLIT01X"):
			return "p_cigarlit01x";
		case joaat("P_PEBBLE01X"):
			return "p_pebble01x";
		case joaat("P_CS_ROPE03X"):
			return "p_cs_rope03x";
		case joaat("P_CARDS01X"):
			return "P_CARDS01X";
		case joaat("P_CS_POKERHAND01X"):
			return "P_CS_POKERHAND01X";
		case joaat("P_CS_POKERHAND02X"):
			return "P_CS_POKERHAND02X";
		case joaat("P_CS_HOLDEMHAND01X"):
			return "P_CS_HOLDEMHAND01X";
		case joaat("P_CS_HOLDEMHAND02X"):
			return "P_CS_HOLDEMHAND02X";
		case joaat("P_CS_BUCKET01X"):
			return "P_CS_BUCKET01X";
		case joaat("P_CS_SYRINGE01X"):
			return "p_cs_syringe01x";
		case joaat("P_BOTTLEJD01X"):
			return "p_bottleJD01x";
		case joaat("P_RAG02X"):
			return "p_rag02x";
		case joaat("P_MAGNETO02X"):
			return "p_magneto02x";
		case joaat("P_MAGNETO01X"):
			return "p_magneto01x";
		case joaat("P_CS_WANTEDALIVE01X"):
			return "p_cs_wantedalive01x";
		case joaat("P_CS_RCRIDETHELIGHTNING"):
			return "P_CS_RCRIDETHELIGHTNING";
		case joaat("P_PEN01X"):
			return "p_pen01x";
		case joaat("P_CS_LETTER01A_X"):
			return "p_cs_letter01a_x";
		case joaat("P_CS_ELECTRICCHAIR01X"):
			return "p_cs_electricchair01x";
		case joaat("P_CS_GENERATOR01X"):
			return "p_cs_generator01x";
		case joaat("P_CS_ELECTRICHELMET01X"):
			return "p_cs_electricHelmet01x";
		case joaat("P_CS_GAG01X"):
			return "p_cs_gag01x";
		case joaat("P_DOOR_SHA_MAN01X"):
			return "p_door_sha_man01x";
		case joaat("P_STOOL01X"):
			return "p_stool01x";
		case joaat("P_STOOL02X"):
			return "p_stool02x";
		case joaat("P_JUGGLINGBALL01X"):
			return "p_jugglingball01x";
		case joaat("P_CHAIR02X"):
			return "p_chair02x";
		case joaat("P_CHAIR04X"):
			return "p_chair04x";
		case joaat("P_CRATE15X"):
			return "p_crate15x";
		case joaat("P_CLEAVER01X"):
			return "p_cleaver01x";
		case joaat("P_BOTTLE003X"):
			return "p_bottle003x";
		case joaat("P_CS_BOOK02X"):
			return "p_cs_book02x";
		case joaat("P_STICKYDYMT_SINGLE"):
			return "p_stickydymt_single";
		case joaat("P_CS_FUSEDYNAMITE01X"):
			return "p_cs_fusedynamite01x";
		case joaat("P_DYNAMITE01X"):
			return "p_dynamite01x";
		case joaat("P_CS_FUSESPOOL01X"):
			return "p_cs_fusespool01x";
		case joaat("P_CS_DETONATOR01X"):
			return "p_cs_detonator01x";
		case joaat("P_CS_BEDROLLCLSD01X"):
			return "p_cs_bedrollclsd01x";
		case joaat("P_CIGARETTE_CS01X"):
			return "P_CIGARETTE_CS01X";
		case joaat("P_MATCHES01X"):
			return "P_MATCHES01X";
		case joaat("P_MATCHSTICK01X"):
			return "P_MATCHSTICK01X";
		case joaat("P_WOODENCHAIR01X"):
			return "P_WOODENCHAIR01X";
		case joaat("P_CHAIR_CRATE02X"):
			return "P_CHAIR_CRATE02X";
		case joaat("P_KNITTINGNEEDLE01X"):
			return "p_knittingneedle01x";
		case joaat("P_KNITTINGSQUARE01X"):
			return "p_knittingsquare01x";
		case joaat("P_CS_RABBITMEAT01X"):
			return "p_cs_rabbitMeat01x";
		case joaat("P_CS_RABBITMEAT02X"):
			return "p_cs_rabbitMeat02x";
		case joaat("P_BOTTLE03X"):
			return "p_bottle03x";
		case joaat("P_CS_BILLSTACK01X"):
			return "p_cs_billstack01x";
		case joaat("P_CS_BILLSINGLE01X"):
			return "p_cs_billSingle01x";
		case joaat("P_BINOCULARS01X"):
			return "p_binoculars01x";
		case joaat("P_DOORRHOSHERIFF02X"):
			return "p_doorrhosheriff02x";
		case joaat("P_BARSTOOL01X"):
			return "P_BARSTOOL01X";
		case joaat("P_CS_SHOTGLASS01X"):
			return "p_cs_shotglass01x";
		case joaat("P_LAMP18X"):
			return "p_lamp18x";
		case joaat("P_CLOCK06X"):
			return "p_clock06x";
		case joaat("P_BOTTLE02X"):
			return "p_bottle02x";
		case joaat("P_CS_LOOTSACK01X"):
			return "p_cs_lootSack01x";
		case joaat("P_WINEBOX01X"):
			return "p_wineBox01x";
		case joaat("P_STRONGBOX01X"):
			return "p_strongBox01x";
		case joaat("P_CLOCKTABLE02X"):
			return "P_CLOCKTABLE02X";
		case joaat("P_GEN_STATUE03B"):
			return "p_gen_statue03b";
		case joaat("P_STOOLWINTER01X"):
			return "P_STOOLWINTER01X";
		case joaat("P_CS_BARRAG01X"):
			return "P_CS_BARRAG01X";
		case joaat("P_PLATE01X"):
			return "P_PLATE01X";
		case joaat("P_KNIFE01X"):
			return "P_KNIFE01X";
		case joaat("P_KNIFE02X"):
			return "P_KNIFE02X";
		case joaat("P_CS_CATFISH_WHOLE01X"):
			return "P_CS_CATFISH_WHOLE01X";
		case joaat("P_CS_CATFISH_WHOLE01BX"):
			return "P_CS_CATFISH_WHOLE01BX";
		case joaat("P_WOODWHITTLE01X"):
			return "P_WOODWHITTLE01X";
		case joaat("P_STICKFIREPOKER01X"):
			return "P_STICKFIREPOKER01X";
		case joaat("P_CS_WOODPILE01X"):
			return "P_CS_WOODPILE01X";
		case joaat("P_FORK01X"):
			return "P_FORK01X";
		case joaat("P_KNIFE04X"):
			return "P_KNIFE04X";
		case joaat("P_KNIFE03X"):
			return "p_knife03x";
		case joaat("P_CS_BOTTLESLIM01X"):
			return "P_CS_BOTTLESLIM01X";
		case joaat("P_CS_BLANKET01X"):
			return "P_CS_BLANKET01X";
		case joaat("P_BEDROLLCLOSED01X"):
			return "P_BEDROLLCLOSED01X";
		case joaat("P_CS_KINDLING01X"):
			return "P_CS_KINDLING01X";
		case joaat("P_CIGARTHIN01X"):
			return "P_CIGARTHIN01X";
		case joaat("P_DOOR_WGLASS01X"):
			return "p_door_wglass01x";
		case joaat("P_BROOM02X"):
			return "p_broom02x";
		case joaat("P_AMB_CLIPBOARD_01"):
			return "P_AMB_CLIPBOARD_01";
		case joaat("P_CHAIR07X"):
			return "P_CHAIR07X";
		case joaat("P_CS_CRATETNT01X"):
			return "p_cs_cratetnt01x";
		case joaat("P_CS_FLOURBAG01X"):
			return "p_cs_flourbag01x";
		case joaat("P_CS_SUPPLIES01X"):
			return "p_cs_supplies01x";
		case joaat("P_CS_SUPPLIES02X"):
			return "p_cs_supplies02x";
		case joaat("P_CS_SUPPLIES03X"):
			return "p_cs_supplies03x";
		case joaat("P_DOOR04X"):
			return "p_door04x";
		case joaat("P_DOOR11X"):
			return "p_door11x";
		case joaat("P_DOORRHOSALOON01_L"):
			return "p_doorrhosaloon01_l";
		case joaat("P_DOORRHOSALOON01_R"):
			return "p_doorrhosaloon01_r";
		case joaat("P_VAL_GATE2M02X"):
			return "P_VAL_GATE2M02X";
		case joaat("P_CS_STMDNKY01X"):
			return "P_CS_STMDNKY01X";
		case joaat("P_CS_HOOKPULLEY01X"):
			return "P_CS_HOOKPULLEY01X";
		case joaat("P_CHAIR_CS05X"):
			return "P_CHAIR_CS05X";
		case joaat("P_CHAIR18X"):
			return "P_CHAIR_18X";
		case joaat("P_CHAIR19X"):
			return "P_CHAIR19X";
		case joaat("P_CHAIR20X"):
			return "P_CHAIR20X";
		case joaat("P_CHAIR05X"):
			return "P_CHAIR05X";
		case joaat("P_CHAIR22X"):
			return "p_chair22x";
		case joaat("P_GLASS01X"):
			return "p_glass01x";
		case joaat("P_DININGCHAIRS01X"):
			return "P_DININGCHAIRS01X";
		case joaat("P_WINDSORCHAIR03X"):
			return "P_WINDSORCHAIR03X";
		case joaat("P_WINDSORCHAIR02X"):
			return "P_WINDSORCHAIR02X";
		case joaat("P_DOOR_VAL_JAIL02X"):
			return "p_door_val_jail02x";
		case joaat("P_CRATETNT01X"):
			return "P_CRATETNT01X";
		case joaat("P_CRATETNT02X"):
			return "P_CRATETNT02X";
		case joaat("P_MONEYSTACK01X"):
			return "P_MONEYSTACK01X";
		case joaat("P_AXE01X"):
			return "P_AXE01X";
		case joaat("P_HOE01X"):
			return "P_HOE01X";
		case joaat("P_SHOVEL01X"):
			return "P_SHOVEL01X";
		case joaat("P_SHOVEL04X"):
			return "P_SHOVEL04X";
		case joaat("P_BROOM01X"):
			return "P_BROOM01X";
		case joaat("P_PITCHFORK01X"):
			return "P_PITCHFORK01X";
		case joaat("P_SCYTHE01X"):
			return "P_SCYTHE01X";
		case joaat("P_SKIFF02X"):
			return "P_SKIFF02x";
		case joaat("P_DOOR_NBX_DOC01X_L"):
			return "p_door_nbx_doc01x_l";
		case joaat("P_DOOR_NBX_DOC01X_R"):
			return "p_door_nbx_doc01x_r";
		case joaat("P_CS_CAMERA"):
			return "p_cs_camera";
		case joaat("P_CS_CAMERATRIPOD"):
			return "p_cs_cameratripod";
		case joaat("P_CS_CAMERABAG01X"):
			return "p_cs_camerabag01x";
		case joaat("P_CAMERAFLASH01X"):
			return "p_cameraflash01x";
		case joaat("P_CS_SHUTTERRELEASE"):
			return "p_cs_shutterrelease";
		case joaat("ROWBOATSWAMP"):
			return "rowboatswamp";
		case joaat("P_CHAIR25X"):
			return "P_CHAIR25X";
		case joaat("P_DOORBRAIT01BX"):
			return "P_DOORBRAIT01BX";
		case joaat("P_CS_MAP01X"):
			return "P_CS_MAP01X";
		case joaat("P_HAMMER03X"):
			return "p_hammer03x";
		case joaat("P_CS_NAILBARREL01X"):
			return "p_cs_nailbarrel01x";
		case joaat("P_CS_BOOK04X"):
			return "p_cs_book04x";
		case joaat("P_CS_FAN01X"):
			return "p_cs_Fan01x";
		case joaat("P_CS_LEDGERSMALL01X"):
			return "p_cs_ledgerSmall01x";
		case joaat("P_CS_ENVELOPE01X"):
			return "p_cs_envelope01x";
		case joaat("P_WRAPPEDMEAT01X"):
			return "p_wrappedmeat01x";
		case joaat("P_CS_LETTER02X"):
			return "P_CS_LETTER02X";
		case joaat("P_CS_BOOK03X"):
			return "p_cs_book03x";
		case joaat("P_CS_GIFTBOX01X"):
			return "p_cs_giftBox01x";
		case joaat("P_BOILER01X"):
			return "p_boiler01x";
		case joaat("P_BOILER02X"):
			return "p_boiler02x";
		case joaat("P_MUGCOFFEE01X"):
			return "p_mugCoffee01x";
		case joaat("P_GLASSTALLBEER01X"):
			return "p_glasstallbeer01x";
		case joaat("P_PITCHER02X"):
			return "p_pitcher02x";
		case joaat("P_TRAY03X"):
			return "p_tray03x";
		case joaat("P_SIT_CHAIRWICKER01B"):
			return "p_sit_chairwicker01b";
		case joaat("S_INV_ORLEANDER01CX"):
			return "S_INV_ORLEANDER01CX";
		case joaat("S_INV_ORLEANDER01DX"):
			return "S_INV_ORLEANDER01DX";
		case joaat("P_LADLE02X"):
			return "P_LADLE02X";
		case joaat("P_CS_POT01X"):
			return "P_CS_POT01X";
		case joaat("P_CHAIRDINING03X"):
			return "P_CHAIRDINING03X";
		case joaat("P_SPOON01X"):
			return "P_SPOON01X";
		case joaat("P_BOWL03X"):
			return "P_BOWL03X";
		case joaat("P_CS_BRIDECATALOGUE01X"):
			return "P_CS_BRIDECATALOGUE01X";
		case joaat("P_JEWELRYBOX02BX"):
			return "P_JEWELRYBOX02BX";
		case joaat("P_CS_LETTERFOLDED01X"):
			return "P_CS_LETTERFOLDED01X";
		case joaat("P_CS_ARTHURHAT01X"):
			return "P_CS_ARTHURHAT01X";
		case joaat("P_OAR03X"):
			return "P_OAR03X";
		case joaat("P_DOOR_VAL_BANKVAULT"):
			return "P_DOOR_VAL_BANKVAULT";
		case joaat("P_DOOR_COMBANK01X"):
			return "P_DOOR_COMBANK01X";
		case joaat("P_CS_DONATION01X"):
			return "P_CS_DONATION01X";
		case joaat("P_DOOR_NBX_BANK03X_R"):
			return "p_door_nbx_bank03x_R";
		case joaat("P_DOOR_NBX_BANK03X_L"):
			return "p_door_nbx_bank03x_L";
		case joaat("P_CAMP_PLATE_02X"):
			return "p_camp_plate_02x";
		case joaat("P_STEWPLATE02X"):
			return "p_stewplate02x";
		case joaat("P_CS_LOG01X"):
			return "p_cs_log01x";
		case joaat("P_NDB_HOTELPLANK01X"):
			return "p_ndb_hotelplank01x";
		case joaat("P_GLASS06X"):
			return "p_glass06x";
		case joaat("P_CS_RAG01X"):
			return "p_cs_rag01x";
		case joaat("P_INKWELL01X"):
			return "p_inkwell01x";
		case joaat("P_CIGAR02X"):
			return "p_cigar02x";
		case joaat("P_BOTTLEBEER01X"):
			return "p_bottleBeer01x";
		case joaat("P_BEERMUGGLASS01X"):
			return "p_beermugglass01x";
		case joaat("P_NUTBOWL01X"):
			return "p_nutBowl01x";
		case joaat("P_CS_SACKLARGE01X"):
			return "p_cs_sacklarge01x";
		case joaat("P_CS_DRESSBOX01X"):
			return "p_cs_dressbox01x";
		case joaat("P_BELL05X"):
			return "p_bell05x";
		case joaat("P_WOODENDESKCHAIR01X"):
			return "p_woodendeskchair01x";
		case joaat("P_CHAIR06X"):
			return "p_chair06x";
		case joaat("P_JUG01X"):
			return "p_jug01x";
		case joaat("S_INV_MEDICINE01X"):
			return "S_INV_MEDICINE01X";
		case joaat("S_INV_MEDICINE_FTY"):
			return "S_INV_MEDICINE_FTY";
		case joaat("S_INV_MILKWEED01BX"):
			return "S_INV_Milkweed01bx";
		case joaat("P_BOTTLESLIM01X"):
			return "p_bottleslim01x";
		case joaat("P_CS_JOURNAL01X"):
			return "p_cs_journal01x";
		case joaat("P_MORTARPESTLE02X"):
			return "p_mortarpestle02x";
		case joaat("S_INV_BURDOCK01DX"):
			return "s_inv_burdock01dx";
		case joaat("P_CS_ROPELEGSPLIT"):
			return "p_cs_ropeLegSplit";
		case joaat("P_CS_ROPEHANDSSPLIT"):
			return "p_cs_ropeHandsSplit";
		case joaat("P_FISHINGPOLE01X"):
			return "p_fishingpole01x";
		case joaat("P_FISHINGPOLE02X"):
			return "P_FISHINGPOLE02X";
		case joaat("P_CS_FLOWERNECKLACE"):
			return "p_cs_flowernecklace";
		case joaat("P_CS_FLOWERS01X"):
			return "P_CS_FLOWERS01X";
		case joaat("S_INV_YARROW01CX"):
			return "s_inv_yarrow01cx";
		case joaat("P_CS_FISHINGPOLEBAG01X"):
			return "P_CS_FISHINGPOLEBAG01X";
		case joaat("P_STICK02X"):
			return "P_STICK02X";
		case joaat("P_CS_SOCK01X"):
			return "P_CS_SOCK01X";
		case joaat("P_DOOR_VAL_BANK00_RX"):
			return "P_DOOR_VAL_BANK00_RX";
		case joaat("P_DOOR_VAL_BANK00_LX"):
			return "P_DOOR_VAL_BANK00_RX";
		case joaat("P_CAN10X"):
			return "p_can10x";
		case joaat("P_CS_RABBITGUT"):
			return "p_cs_rabbitgut";
		case joaat("P_CS_RABBITHEADLESS"):
			return "p_cs_rabbitheadless";
		case joaat("P_CS_RABBITFEETLESS"):
			return "p_cs_rabbitfeetless";
		case joaat("P_KETTLE03X"):
			return "p_kettle03x";
		case joaat("S_CHE_WOODBIN01X"):
			return "s_che_woodbin01x";
		case joaat("S_LOOTABLEPOORCASE"):
			return "s_lootablepoorcase";
		case joaat("P_CS_BOOKHARDCV01X"):
			return "P_CS_BOOKHARDCV01X";
		case joaat("P_LETTERBUNDLE_01X"):
			return "P_LETTERBUNDLE_01X";
		case joaat("P_LETTERENVELOPE_CS01X"):
			return "P_LETTERENVELOPE_CS01X";
		case joaat("P_PACKAGE08X"):
			return "P_PACKAGE08X";
		case joaat("P_CIGARBOX02X"):
			return "P_CIGARBOX02X";
		case joaat("P_CRUCIFIX02X"):
			return "p_crucifix02x";
		case joaat("P_BOTTLECRATE01X"):
			return "p_bottleCrate01x";
		case joaat("P_CAN05X"):
			return "p_can05x";
		case joaat("P_CS_SUITCASE04X"):
			return "p_cs_suitcase04x";
		case joaat("P_CS_BAGSTRAUSS01X"):
			return "p_cs_bagstrauss01x";
		case joaat("P_BOTTLE008X"):
			return "P_BOTTLE008X";
		case joaat("P_BOTTLE009X"):
			return "P_BOTTLE009X";
		case joaat("P_BOTTLE010X"):
			return "P_BOTTLE010X";
		case joaat("P_POCKETMIRROR01X"):
			return "p_pocketMirror01x";
		case joaat("P_CIGARETTE01X"):
			return "P_CIGARETTE01X";
		case joaat("P_TRAVELTRUNK02X"):
			return "P_TRAVELTRUNK02X";
		case joaat("P_CHAIRWHITE01X"):
			return "P_CHAIRWHITE01X";
		case joaat("P_JOURNAL_OPEN01X"):
			return "P_JOURNAL_OPEN01X";
		case joaat("P_TABLE42_CS"):
			return "p_table42_cs";
		case joaat("P_CS_NEWSPAPER_02X"):
			return "p_cs_newspaper_02x";
		case joaat("P_CS_POTATOSLICE01X"):
			return "P_CS_POTATOSLICE01X";
		case joaat("S_APLSD_LOG"):
			return "S_APLSD_LOG";
		case joaat("S_APLSD_HRSATT"):
			return "S_APLSD_HRSATT";
		case joaat("P_SPITTOON01X"):
			return "p_spittoon01x";
		case joaat("P_WOODBOWL01X"):
			return "p_woodbowl01x";
		case joaat("P_PENCIL01X"):
			return "p_pencil01x";
		case joaat("P_SPOONMID01X"):
			return "P_SPOONMID01X";
		case joaat("P_PAN01X"):
			return "P_PAN01X";
		case joaat("P_PIPE01X"):
			return "P_Pipe01x";
		case joaat("P_CS_RAILROADBOND01X"):
			return "p_cs_railroadbond01x";
		case joaat("P_SHARPENINGSTONE01X"):
			return "p_sharpeningstone01x";
		case joaat("P_TREESTUMP02X"):
			return "p_treestump02x";
		case joaat("P_PLATE17X"):
			return "p_plate17x";
		case joaat("P_CS_NEWSPAPER_01X"):
			return "p_cs_newspaper_01x";
		case joaat("P_SADIEHAT01X"):
			return "p_sadiehat01x";
		case joaat("P_DOOR_BLA_JAIL_L_01X"):
			return "p_door_bla_jail_l_01x";
		case joaat("P_DOOR_BLA_JAIL_R_01X"):
			return "p_door_bla_jail_r_01x";
		case joaat("P_MASHEDPOTATO02X"):
			return "p_mashedPotato02x";
	}
	return "";
}

void func_600(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	Global_1951255[iParam0 /*23*/].f_4 = iParam1;
	Global_1951255[iParam0 /*23*/] = iParam4;
	Global_1951255[iParam0 /*23*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1951255[iParam0 /*23*/].f_2 = iParam5;
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
	Global_1951255[iParam0 /*23*/].f_3 = iVar0;
	func_577(iParam0, 1);
	func_578(iParam0, 1);
	func_579(iParam0, 128);
}

void func_601(int iParam0)
{
	struct<16> Var0;

	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1939493[iParam0 /*16*/].f_10)))
	{
		return;
	}
	Global_1939493[iParam0 /*16*/] = { Var0 };
	Global_1939493.f_161 = (Global_1939493.f_161 - 1);
	if (Global_1939493.f_161 < 0)
	{
		Global_1939493.f_161 = 0;
	}
}

int func_602(int iParam0)
{
	int iVar0;

	iVar0 = func_621(func_663(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1952637.f_1675.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_603(int iParam0)
{
	if (func_604(81053684, iParam0))
	{
		return true;
	}
	if (func_604(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

bool func_604(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_621(func_663(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1952637.f_1675.f_1[iVar1 /*3*/] != 0 && Global_1952637.f_1675.f_1[iVar1 /*3*/] != Global_1952637.f_83[iVar1 /*12*/])
	{
		iVar0 = Global_1952637.f_1675.f_1[iVar1 /*3*/];
		if (func_482(iVar0) == iParam0 || (iParam0 == 81053684 && func_606(iVar0, 160827531)))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

int func_605(int iParam0)
{
	return Global_1952637.f_1675.f_1[func_621(iParam0, 1) /*3*/];
}

bool func_606(int iParam0, int iParam1)
{
	if (!func_542(iParam0, 0))
	{
		return func_665(func_664(iParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return true;
	}
	return false;
}

int func_607(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (Global_1952637.f_2843.f_1 >= 5)
	{
		return 0;
	}
	if (!func_666(iParam0))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_573(iParam0);
	return func_473(iParam1, iVar0, bParam2, 1);
}

int func_608(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_667(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200.f_1546;
		case 1:
			return Global_1956200.f_1565.f_136;
		default:
			break;
	}
	return -1;
}

void func_609(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1296859.f_8;
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

int func_610(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_667(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200.f_1546.f_2;
		case 1:
			return Global_1956200.f_1565.f_136.f_2;
		default:
			break;
	}
	return -1;
}

void func_611(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1296859.f_8;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	PED::_CHARGE_PED_STAMINA(iParam1, fParam0);
}

int func_612()
{
	if (!func_561(Global_1940258.f_39))
	{
		return joaat("WEAPON_UNARMED");
	}
	return Global_1940258.f_39;
}

int func_613(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case joaat("GROUP_SNIPER"):
		case joaat("GROUP_REVOLVER"):
		case joaat("GROUP_REPEATER"):
		case joaat("GROUP_PISTOL"):
		case joaat("GROUP_SHOTGUN"):
		case joaat("GROUP_RIFLE"):
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			iVar0 = iParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(iVar0) || WEAPON::_IS_WEAPON_MELEE(iVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				StringCopy(&cVar5, WEAPON::_GET_WEAPON_NAME(iVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_26640 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_561(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_26640)
						{
							if (func_561(iVar4) && iVar4 != iVar0)
							{
								iVar0 = iVar4;
							}
						}
						else if (iVar4 == iVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_30() == -1 && !func_668(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar0, 0, false) && iParam0 != Global_34)
		{
			bVar22 = true;
		}
		else if (((iVar4 == iVar0 && !Global_26640) && iParam0 != Global_34) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
		{
			bVar22 = true;
		}
		else
		{
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
		}
	}
	if (iVar0 == joaat("WEAPON_UNARMED") && iParam1 == joaat("WEAPON_UNARMED"))
	{
		return iVar0;
	}
	else if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		switch (iParam1)
		{
			case joaat("GROUP_REVOLVER"):
			case joaat("GROUP_PISTOL"):
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
			case joaat("GROUP_SNIPER"):
			case joaat("GROUP_REPEATER"):
			case joaat("GROUP_SHOTGUN"):
			case joaat("GROUP_RIFLE"):
				if (func_668(joaat("WEAPON_REPEATER_CARBINE")))
				{
					iVar0 = joaat("WEAPON_REPEATER_CARBINE");
				}
				else
				{
					iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				}
				break;
			default:
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
		}
	}
	else if (iVar0 == joaat("WEAPON_MELEE_LANTERN") && iParam0 == Global_34)
	{
		iVar0 = joaat("WEAPON_MELEE_DAVY_LANTERN");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_34 && func_561(iVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, iVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::_IS_WEAPON_MELEE(iVar0) && iVar0 != joaat("WEAPON_UNARMED")) && !WEAPON::_IS_WEAPON_LANTERN(iVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, iVar0));
			iVar24 = WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 3;
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
	if (iParam0 == Global_34)
	{
		func_669(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_670(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_34)
	{
		if (func_671(iVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, iVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), iVar0, iParam4);
	}
	return iVar0;
}

int func_614(int iParam0, int iParam1)
{
	var uVar0;

	return func_672(&uVar0, iParam0, iParam1);
}

bool func_615()
{
	return Global_1940085 == 1;
}

bool func_616()
{
	return Global_1940085 == 2;
}

void func_617(float fParam0)
{
}

void func_618()
{
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	Global_1940085.f_15 = 0f;
}

struct<5> func_619(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_673(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_674(iParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_675(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_676(bParam1) };
			if (bParam2 && func_677(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_678(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_678(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_679(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
		case joaat("COACH"):
		case joaat("HORSE"):
			Var0.f_4 = 1782082944;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -1591664384;
			Var0 = { func_680(bParam1) };
			switch (func_482(iParam0))
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
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_681(iParam0, -1823706425))
			{
				Var0 = { func_675(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_681(iParam0, -1483207246))
			{
				Var0 = { func_675(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1911121386))
			{
				Var0 = { func_675(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_681(iParam0, -1653629781))
			{
				Var0 = { func_675(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_682(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_681(iParam0, -1653629781))
			{
				Var0 = { func_675(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_620(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1952637.f_83[iVar0 /*12*/].f_9 == iParam0)
		{
			return func_630(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_621(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case joaat("MP_COMPONENT_TYPE_HEAD"):
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
		case joaat("MP_COMPONENT_TYPE_UPPER_BODY"):
			return 8;
		case -1197751823:
			return 20;
		case joaat("MP_COMPONENT_TYPE_SATCHEL"):
			return 24;
		case -1130865351:
			return 31;
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			return 1;
		case -893163968:
			return 17;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_4"):
			return 28;
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS"):
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			return 26;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_3"):
			return 27;
		case 304805134:
			return 21;
		case joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE"):
			return 7;
		case joaat("MP_COMPONENT_TYPE_EYES"):
			return 2;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
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
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			return 4;
		case joaat("MP_COMPONENT_TYPE_LOWER_BODY"):
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case joaat("MP_COMPONENT_TYPE_TEETH"):
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

bool func_622(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_683();
	if (iParam2 == 39)
	{
		Var0 = { func_619(iParam0, 1, 0) };
		iParam2 = func_621(func_620(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_587(32768) && iParam2 == 10)
	{
		func_647(1108822547);
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	if (func_624(iParam0, 1))
	{
		func_684(&(Global_1952637.f_1556), &iParam0, iParam2, bParam5);
	}
	if (bParam6)
	{
		func_655(iParam2);
	}
	func_633(iParam2, iVar5);
	func_685(&(Global_1952637.f_1556.f_1[iParam2 /*3*/]), 4, 6);
	func_685(&(Global_1952637.f_1675.f_1[iParam2 /*3*/]), 4, 6);
	func_662(&(Global_1952637.f_1556), iParam0, iParam2, 1, iVar5);
	if (iParam1 == 0)
	{
		iParam1 = Global_1952637.f_1556.f_1[iParam2 /*3*/].f_1;
	}
	Global_1952637.f_1556.f_1[iParam2 /*3*/] = iParam0;
	Global_1952637.f_1556.f_1[iParam2 /*3*/].f_1 = func_686(iParam0, iParam2, iParam1);
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1952637.f_2897)
		{
			if (Global_1952637.f_2897.f_2[iVar6 /*2*/] >= 0 && Global_1952637.f_2897.f_2[iVar6 /*2*/] < 39)
			{
				Global_1952637.f_2764[Global_1952637.f_2897.f_2[iVar6 /*2*/] /*2*/] = 0;
				Global_1952637.f_2764[Global_1952637.f_2897.f_2[iVar6 /*2*/] /*2*/].f_1 = 0;
				func_638(func_630(Global_1952637.f_2897.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_623(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	func_687(&(Global_1952637.f_2897), bParam0, bParam1, bParam2, bParam3);
}

bool func_624(int iParam0, bool bParam1)
{
	if (!func_542(iParam0, 0))
	{
	}
	if (!bParam1 && (iParam0 == joaat("CLOTHING_ITEM_HAIR_NONE") || iParam0 == joaat("CLOTHING_ITEM_BEARD_NONE")))
	{
		return false;
	}
	if (func_606(iParam0, 265372629))
	{
		return true;
	}
	return false;
}

bool func_625(int iParam0, int iParam1, bool bParam2)
{
	struct<4> Var0;
	struct<5> Var4;
	int iVar9;

	Var4 = { func_619(iParam0, bParam2, 0) };
	if (func_624(iParam0, 0))
	{
		iVar9 = func_688(Var4, Var4.f_4, bParam2, -1);
		if (iVar9 != 0)
		{
			Var4 = { func_619(iVar9, bParam2, 0) };
			Var0 = { func_675(iVar9, Var4, Var4.f_4, bParam2) };
			return func_689(Var0, 0, bParam2);
		}
		return true;
	}
	Var0 = { func_675(iParam0, Var4, Var4.f_4, bParam2) };
	return func_689(Var0, iParam1, bParam2);
}

void func_626()
{
	Global_1952637.f_3467 = 0;
	Global_1952637.f_3467.f_1 = 0;
	Global_1952637.f_3467.f_8 = 0;
	Global_1952637.f_3467.f_2 = 0;
	Global_1952637.f_3467.f_3[0] = 0;
	Global_1952637.f_3467.f_3[1] = 0;
	Global_1952637.f_3467.f_3[2] = 0;
	Global_1952637.f_3467.f_3[3] = 0;
	Global_1952637.f_3467.f_9 = 0;
	Global_1952637.f_3467.f_10 = 0;
	Global_1952637.f_3467.f_11 = 0;
	if (Global_1952637.f_3467.f_12)
	{
		PED::_0x13E7320C762F0477(Global_1952637.f_3467.f_13);
	}
	Global_1952637.f_3467.f_12 = 0;
	func_651(32768);
	func_638(1108822547, 8, 6);
}

int func_627(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_621(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (Global_1952637.f_1675.f_1[iVar1 /*3*/] == Global_1952637.f_83[iVar1 /*12*/] || Global_1952637.f_1556.f_1[iVar1 /*3*/] == Global_1952637.f_83[iVar1 /*12*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_628(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_629(struct<4> Param0)
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
		case 23:
			if (Global_1952637.f_918 >= 25)
			{
				return;
			}
			if (func_690(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1952637.f_918)
				{
					iVar1 = ((Global_1952637.f_923 + iVar0) % 25);
					if ((Global_1952637.f_736[iVar1 /*4*/] == Param0 && Global_1952637.f_736[iVar1 /*4*/].f_1 == Param0.f_1) && Global_1952637.f_736[iVar1 /*4*/].f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_691(Param0);
			Global_1952637.f_736[Global_1952637.f_924 /*4*/] = { Param0 };
			Global_1952637.f_918++;
			Global_1952637.f_924 = (Global_1952637.f_924 + 1 % 25);
			func_589(8);
			break;
		case 24:
		case 25:
			if (Global_1952637.f_919 >= 25)
			{
				return;
			}
			if (func_690(Param0))
			{
				return;
			}
			func_691(Param0);
			Global_1952637.f_635[Global_1952637.f_919 /*4*/] = { Param0 };
			Global_1952637.f_919++;
			func_589(8);
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
			if (Global_1952637.f_920 >= 20)
			{
				return;
			}
			if (func_690(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1952637.f_920)
				{
					iVar1 = ((Global_1952637.f_921 + iVar0) % 20);
					if ((Global_1952637.f_837[iVar1 /*4*/] == Param0 && Global_1952637.f_837[iVar1 /*4*/].f_1 == Param0.f_1) && Global_1952637.f_837[iVar1 /*4*/].f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_691(Param0);
			Global_1952637.f_837[Global_1952637.f_922 /*4*/] = { Param0 };
			Global_1952637.f_920++;
			Global_1952637.f_922 = (Global_1952637.f_922 + 1 % 20);
			func_589(8);
			break;
			break;
	}
}

int func_630(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("MP_COMPONENT_TYPE_HEAD");
		case 1:
			return joaat("MP_COMPONENT_TYPE_HAIR");
		case 2:
			return joaat("MP_COMPONENT_TYPE_EYES");
		case 3:
			return joaat("MP_COMPONENT_TYPE_TEETH");
		case 4:
			return joaat("MP_COMPONENT_TYPE_BEARD");
		case 5:
			return 735520874;
		case 6:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS");
		case 7:
			return joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE");
		case 8:
			return joaat("MP_COMPONENT_TYPE_UPPER_BODY");
		case 9:
			return joaat("MP_COMPONENT_TYPE_LOWER_BODY");
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
			return joaat("MP_COMPONENT_TYPE_SATCHEL");
		case 25:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_1");
		case 26:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_2");
		case 27:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_3");
		case 28:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_4");
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

bool func_631(int iParam0, int iParam1)
{
	return (Global_1952637.f_83[func_621(iParam0, 1) /*12*/].f_11 && iParam1) != 0;
}

int func_632(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1952637.f_2897)
	{
		if (Global_1952637.f_2897.f_2[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_633(int iParam0, int iParam1)
{
	if (iParam1 & 8 != 0)
	{
		return;
	}
	func_692(&(Global_1952637.f_2897), iParam0, iParam1);
}

void func_634(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_635(int iParam0, int iParam1, int iParam2)
{
	Global_1952637.f_83[func_621(iParam0, 1) /*12*/].f_11 = (Global_1952637.f_83[func_621(iParam0, 1) /*12*/].f_11 || iParam1);
}

void func_636(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, Global_1952637.f_4[iVar0 /*2*/], (uParam1[iVar0 /*2*/])->f_1);
		iVar0++;
	}
	if (iParam2 != 0)
	{
		PED::_SET_PED_BODY_COMPONENT(iParam0, iParam2);
	}
	if (iParam3 != 0)
	{
		PED::_SET_PED_BODY_COMPONENT(iParam0, iParam3);
	}
}

void func_637(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 10;
	if (func_631(1108822547, 6) || bParam3)
	{
		if (bParam2 || bParam3)
		{
			func_586(iParam0, iVar0, 0);
			func_635(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_0xBC6DF00D7A4A6819(iParam0, Global_1952637.f_3467.f_1, Global_1952637.f_3467.f_3[0], Global_1952637.f_3467.f_3[1], Global_1952637.f_3467.f_3[2], Global_1952637.f_3467.f_8, Global_1952637.f_3467.f_9, Global_1952637.f_3467.f_10, Global_1952637.f_3467.f_11);
		func_638(1108822547, 1, 6);
	}
	Global_1952637.f_925++;
	if (!bParam1)
	{
		return;
	}
	PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
}

void func_638(int iParam0, int iParam1, int iParam2)
{
	Global_1952637.f_83[func_621(iParam0, 1) /*12*/].f_11 = (Global_1952637.f_83[func_621(iParam0, 1) /*12*/].f_11 - (Global_1952637.f_83[func_621(iParam0, 1) /*12*/].f_11 && iParam1));
}

void func_639(var uParam0, int iParam1)
{
	PED::_SET_PED_COMPONENT_ENABLED(iParam1, *uParam0, false, true, false);
	if (uParam0->f_1 != 0)
	{
		PED::_0x66B957AAC2EAAEAB(iParam1, *uParam0, uParam0->f_1, 0, 1, 1);
	}
}

void func_640(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_641(int iParam0, var uParam1)
{
	return (Global_1952637.f_2843.f_3[iParam0] && uParam1) != 0;
}

void func_642(int iParam0, var uParam1)
{
	Global_1952637.f_2843.f_3[iParam0] = (Global_1952637.f_2843.f_3[iParam0] - (Global_1952637.f_2843.f_3[iParam0] && uParam1));
}

int func_643(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_APPAREL"):
			return 1;
		case joaat("MPC_SYSTEM_TAG_INFO_CHEST_APPAREL"):
			return 2;
		case joaat("MPC_SYSTEM_TAG_INFO_LEG_APPAREL"):
			return 4;
		case joaat("MPC_SYSTEM_TAG_INFO_APPAREL"):
			return 8;
		case joaat("MPC_SYSTEM_TAG_INFO_BODY"):
			return 16;
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_FEATURES"):
			return 32;
		case joaat("MPC_SYSTEM_TAG_INFO_HAIR"):
			return 64;
		case joaat("MPC_SYSTEM_TAG_INFO_UPPER_BODY"):
			return 256;
		case joaat("MPC_SYSTEM_TAG_INFO_LOWER_BODY"):
			return 512;
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_OVERLAY"):
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
		case 396349281:
			return 2097152;
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

bool func_644(int iParam0)
{
	return func_531(iParam0, 2);
}

bool func_645(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_654(uParam0, -1, 1, 1, 0);
	iVar0 = 16;
	iVar1 = 34;
	iVar2 = func_661(Global_1952637.f_83[iVar1 /*12*/].f_9, 0);
	iVar3 = func_661(Global_1952637.f_83[iVar0 /*12*/].f_9, 0);
	if (iVar2 == 0)
	{
		return false;
	}
	else
	{
		uParam0->f_1[iVar1 /*3*/] = iVar2;
	}
	if (iVar3 == 0)
	{
		if (func_660() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		{
			return false;
		}
	}
	else
	{
		uParam0->f_1[iVar0 /*3*/] = iVar3;
	}
	*uParam0 = iParam1;
	return true;
}

bool func_646(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam2 != 0 && func_693(iParam1) != iParam2)
	{
		return false;
	}
	if (func_694(2, iParam1))
	{
		func_695(uParam0, iParam1);
		return true;
	}
	return false;
}

void func_647(int iParam0)
{
	func_638(iParam0, 8, 6);
}

void func_648(int iParam0)
{
	func_635(iParam0, 8, 6);
}

void func_649(int iParam0)
{
	Global_1952637.f_1057 = iParam0;
}

int func_650(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_660();
	}
	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		return -1806335803;
	}
	else if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		return -971050805;
	}
	return 0;
}

void func_651(int iParam0)
{
	Global_1952637 = (Global_1952637 - (Global_1952637 && iParam0));
}

void func_652(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_696(iVar0, iParam0))
		{
			func_697(iVar0, iParam0, 6);
		}
		iVar0++;
	}
}

void func_653(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 2;
	}
	if (bParam2 && Global_1952637.f_2843 != 0)
	{
		func_572(Global_1952637.f_2843);
		func_574(0);
		Global_1952637.f_2843 = 0;
	}
	else if (iParam3 != 0 && func_698(iParam3))
	{
		func_565(0);
	}
	if (func_587(32768))
	{
		func_648(1108822547);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		iParam0 = 0;
		func_699(Global_1952637.f_1675.f_1[1 /*3*/], -1811760631, &(Global_1952637.f_1058), &(Global_1952637.f_1058.f_9), 1);
		func_699(Global_1952637.f_1675.f_1[4 /*3*/], -2118203104, &(Global_1952637.f_1058), &(Global_1952637.f_1058.f_9), 1);
		func_564(2, 0, iVar0, 0, 0);
		func_564(4, 0, 0, 0, 0);
		func_564(5, 0, 0, 0, 0);
	}
	else
	{
		iVar0 |= 1;
		func_564(2, 0, iVar0, iParam0, 0);
	}
	func_700();
}

void func_654(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_701(&(uParam0->f_1[iVar0 /*3*/]), 2))
		{
			if (func_585(iVar0, iParam1))
			{
				vVar4 = { func_702(iVar0, -1) };
				if (((!bParam4 && vVar4.x != Global_1952637.f_83[iVar0 /*12*/]) && vVar4.x != 0) && (uParam0->f_1[iVar0 /*3*/] != vVar4.x || uParam0->f_1[iVar0 /*3*/].f_1 != vVar4.y))
				{
					uParam0->f_1[iVar0 /*3*/] = { vVar4 };
				}
				if (func_696(iVar0, 4))
				{
					func_697(iVar0, 4, 6);
				}
			}
			else
			{
				if (bParam3)
				{
					func_703(iVar0, 4, 6);
				}
				Jump @205; //curOff = 171
				if (bParam2)
				{
					vVar1.x = Global_1952637.f_83[iVar0 /*12*/];
					uParam0->f_1[iVar0 /*3*/] = { vVar1 };
				}
			}
			iVar0++;
		}
	}
}

void func_655(int iParam0)
{
	func_704(&(Global_1952637.f_2897), iParam0);
}

bool func_656(int iParam0)
{
	int iVar0;
	var uVar1;

	Global_1952637.f_1043.f_2 = 0;
	iVar0 = 1226838104;
	func_705(&(Global_1952637.f_1043), iVar0, -367421157, 1409451727, 1, iParam0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1952637.f_1043));
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar1, &(Global_1952637.f_1043), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_657(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return true;
}

int func_658(int iParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_542(iParam0, 0))
	{
		return 0;
	}
	iVar6 = ITEMDATABASE::_0x8870895BA5ED9385(iParam0, 761377030, &uVar0);
	if (iVar6 > 0)
	{
		return uVar0[0];
	}
	return 0;
}

void func_659(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (func_606(uParam0->f_1[34 /*3*/], -166674229))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		bVar1 = func_696(iVar0, 16);
		if (bVar1)
		{
			func_697(iVar0, 16, 9);
		}
		if (Global_1952637.f_83[iVar0 /*12*/].f_3[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
		{
		}
		else
		{
			if (bVar1)
			{
				func_633(iVar0, iParam3);
			}
			if (!bParam2 && func_658(uParam0->f_1[iVar0 /*3*/]) != 0)
			{
			}
			else if (func_585(iVar0, iParam1) && !bVar1)
			{
				uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
				uParam0->f_1[iVar0 /*3*/].f_1 = 0;
				func_662(uParam0, uParam0->f_1[iVar0 /*3*/], iVar0, 1, iParam3);
				func_633(iVar0, iParam3);
			}
			else if (bVar1 && !bParam2)
			{
				func_662(uParam0, uParam0->f_1[iVar0 /*3*/], iVar0, 0, iParam3);
			}
		}
		iVar0++;
	}
}

int func_660()
{
	return Global_1952637.f_1;
}

int func_661(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;

	iVar2 = 0;
	Var3 = { func_706(0, -1591664384, iParam0, -1591664384, 0, 0, 0) };
	if (func_707(&Var3, &iVar0, &iVar1, 1))
	{
		if (iVar1 > 0)
		{
			iVar2 = func_708(iVar0, iVar1, iParam1);
		}
		func_709(iVar0);
	}
	return iVar2;
}

void func_662(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	bool bVar1;

	iVar0 = iParam1;
	bVar1 = func_624(iVar0, 1);
	if (bParam3 && func_606(uParam0->f_1[iParam2 /*3*/], 343781202))
	{
		func_710(uParam0, uParam0->f_1[iParam2 /*3*/]);
	}
	switch (func_630(iParam2, 1))
	{
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			func_711(uParam0, iVar0, iParam2, iParam4);
			break;
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			func_712(uParam0, iVar0, iParam2);
			break;
		case -338487716:
			func_713(uParam0, iVar0, bVar1, iParam4);
			break;
		case 1108822547:
			func_714(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1742327865:
			func_715(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1250092473:
			func_716(uParam0, bVar1, iVar0, iParam2, iParam4);
			break;
		case -893163968:
			func_717(uParam0, bVar1, iVar0, iParam4);
			break;
		case -450913544:
			func_718(uParam0, bVar1, iVar0, iParam2, iParam4);
			break;
		case -1197751823:
			func_719(uParam0, bVar1, iVar0, iParam4);
			break;
		case 304805134:
			func_720(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1145151482:
			func_721(uParam0, bVar1, iParam4);
			break;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			func_722(uParam0, bVar1, iVar0, iParam4);
			break;
		case -426430150:
			func_723(uParam0, bVar1, iParam4);
			break;
		case 788010710:
			func_724(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1958421083:
			func_725(uParam0, bVar1, iVar0, iParam4);
			break;
		case -1944638739:
			func_726(uParam0, bVar1, iVar0, iParam4);
			break;
	}
}

int func_663(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_620(iVar0);
}

int func_664(int iParam0)
{
	return iParam0;
}

int func_665(int iParam0, int iParam1)
{
	if (!func_727(iParam0, 2))
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

bool func_666(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	Var2 = -961687407;
	if (func_30() == -1)
	{
		Var2 = 1444744190;
	}
	Var2.f_1 = iParam0;
	Var2.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var2);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var2))
	{
		return false;
	}
	if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var2, -2008906477))
	{
		return false;
	}
	iVar1 = func_728(iParam0);
	func_729(iVar0, iVar1);
	while (DATAFILE::_0xED4413CEE1BF142C(&Var2))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var2, -2008906477))
		{
		}
		else
		{
			func_729(iVar0, iVar1);
		}
	}
	return true;
}

int func_667(int iParam0)
{
	return func_731(func_730(iParam0));
}

bool func_668(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return true;
	}
	return false;
}

int func_669(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var27;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_MELEE(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
	{
		Var0 = { func_619(iParam0, 0, 1) };
		if (func_678(iParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_679(iParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_675(iParam0, Var0, Var0.f_4, 0) };
				func_732(iParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_733(0))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
		{
			return 0;
		}
		func_734(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
		func_735(iParam0, iParam1);
		return 1;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
	{
		return 0;
	}
	if (iParam1 > 0)
	{
	}
	WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	return 1;
}

void func_670(int iParam0, int iParam1, float fParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar1)
	{
		case joaat("G_M_M_UNIDUSTER_03"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_03"):
		case joaat("G_M_M_UNIDUSTER_04"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_02"):
		case joaat("G_M_M_UNIDUSTER_02"):
		case joaat("U_M_M_FATDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_01"):
		case joaat("G_M_M_UNIDUSTER_01"):
		case joaat("CS_DISGUISEDDUSTER_01"):
		case joaat("G_F_M_UNIDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERLEADER_01"):
		case joaat("CS_DISGUISEDDUSTER_03"):
		case joaat("G_M_M_UNIDUSTER_05"):
		case joaat("CS_DISGUISEDDUSTER_02"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("G_M_Y_UNIEXCONFEDS_02"):
		case joaat("G_M_Y_UNIEXCONFEDS_01"):
		case joaat("G_M_O_UNIEXCONFEDS_01"):
		case joaat("CS_EXCONFEDSLEADER_01"):
		case joaat("U_M_M_UNIEXCONFEDSBOUNTY_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		case joaat("G_M_M_UNIINBRED_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		case joaat("U_M_M_BHT_SKINNERSEARCH"):
		case joaat("G_M_M_UNIMOUNTAINMEN_01"):
		case joaat("U_M_M_BHT_SKINNERBROTHER"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		case joaat("G_M_M_UNIRANCHERS_01"):
		case joaat("CS_LARAMIE"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		case joaat("U_M_M_BHT_BANDITOSHACK"):
		case joaat("U_M_M_BHT_BANDITOMINE"):
		case joaat("G_M_M_UNIBANDITOS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("U_M_M_NBXBRONTEGOON_01"):
		case joaat("U_M_M_NBXBRONTESECFORM_01"):
		case joaat("U_M_M_NBXBRONTEASC_01"):
		case joaat("G_M_M_UNIBRONTEGOONS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
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

bool func_671(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_672(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar18;

	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_736(iParam1, 128);
	if (func_737("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_738(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_561(Var4.f_4))
			{
			}
			else if (!WEAPON::_0x705BE297EEBDB95D(Var4.f_4) && !WEAPON::_IS_WEAPON_BOW(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if (!bVar18 || WEAPON::_0xF29A186ED428B552(Global_34, Var4.f_4))
			{
				if (((WEAPON::_IS_WEAPON_TWO_HANDED(Var4.f_4) && (!WEAPON::_IS_WEAPON_SHOTGUN(Var4.f_4) || func_736(iParam1, 16))) && (!WEAPON::_IS_WEAPON_SNIPER(Var4.f_4) || func_736(iParam1, 4))) && (!func_739(Var4.f_4) || func_736(iParam1, 8)))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_34, &Var4) > WEAPON::_0xA2091482ED42EF85(Global_34, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		func_709(iVar1);
	}
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
	}
	return iVar0;
}

struct<4> func_673(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_740(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1293346))
			{
				Global_1293346 = { func_675(joaat("CHARACTER"), func_520(), -1591664384, bParam0) };
			}
			return Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_12)))
			{
				Global_1293346.f_12 = { func_675(joaat("CHARACTER"), func_520(), -1591664384, 0) };
			}
			return Global_1293346.f_12;
		}
	}
	return func_675(joaat("CHARACTER"), func_520(), -1591664384, bParam0);
}

int func_674(int iParam0)
{
	vector3 vVar0;

	if (!func_542(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_675(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_542(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_740(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_676(bool bParam0)
{
	int iVar0;

	iVar0 = func_740(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_4)))
		{
			Global_1293346.f_4 = { func_675(923904168, func_673(bParam0), -740156546, bParam0) };
		}
		return Global_1293346.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_16)))
		{
			Global_1293346.f_16 = { func_675(923904168, func_673(bParam0), -740156546, 0) };
		}
		return Global_1293346.f_16;
	}
	return func_675(923904168, func_673(bParam0), -740156546, 0);
}

bool func_677(int iParam0, bool bParam1)
{
	if (func_482(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_741();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_678(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_742(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_679(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_743(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_680(bool bParam0)
{
	int iVar0;

	iVar0 = func_740(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_8)))
		{
			Global_1293346.f_8 = { func_675(271701509, func_673(bParam0), 12999093, 0) };
		}
		return Global_1293346.f_8;
	}
	return func_675(271701509, func_673(bParam0), 12999093, 0);
}

bool func_681(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_482(iParam0);
	if (iVar1 == -1015256479)
	{
		return false;
	}
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_744(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_682(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_745(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

void func_683()
{
	int iVar0;

	Global_1952637.f_1556 = Global_1952637.f_1675;
	Global_1952637.f_1552 = Global_1952637.f_1554;
	Global_1952637.f_1552.f_1 = Global_1952637.f_1554.f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1952637.f_1556.f_1[iVar0 /*3*/] = { Global_1952637.f_1675.f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

void func_684(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	if (bParam3)
	{
		if ((*iParam1 == joaat("CLOTHING_ITEM_OVERALLS_NONE") || *iParam1 == joaat("CLOTHING_ITEM_PANTS_NONE")) || *iParam1 == 750544038)
		{
			iVar0 = 16;
			if (func_482(uParam0->f_1[iVar0 /*3*/]) != 1882579758)
			{
				return;
			}
			iVar1 = func_746(uParam0->f_1[iVar0 /*3*/]);
			if (iVar1 != 0 && iVar1 != Global_1952637.f_83[iParam2 /*12*/])
			{
				*iParam1 = iVar1;
				return;
			}
		}
		if (!func_747(*iParam1, iParam2))
		{
			*iParam1 = Global_1952637.f_1675.f_1[iParam2 /*3*/];
			return;
		}
	}
	*iParam1 = Global_1952637.f_83[iParam2 /*12*/];
}

void func_685(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_686(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	if (func_660() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	if (iParam2 == 289238755)
	{
		return 289238755;
	}
	if (iParam2 != 0 && func_748(iParam0, iVar0, iParam2) != -1)
	{
		return iParam2;
	}
	if (func_657(iParam0, func_630(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_687(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;

	if (*uParam0 <= 0)
	{
		return;
	}
	if (func_587(4718592))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_749(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
		iVar0++;
	}
	if (bParam4)
	{
		bVar1 = false;
		if (Global_1952637.f_1675 != 491602716 || !func_694(2, -1))
		{
			bVar1 = true;
		}
		else if (!func_606(Global_1952637.f_1675, -166674229) && (Global_1952637.f_1675 != 491602716 || !func_694(2, -1)))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			Global_1952637.f_1675 = 491602716; /* GXTEntry: "Custom Outfit" */
			Global_1952637.f_1556 = 491602716; /* GXTEntry: "Custom Outfit" */
			func_750(-1, 0, 6);
			func_564(27, 0, 65536, 0, 0);
		}
	}
	if (bParam3)
	{
		func_751(0, 1);
	}
}

int func_688(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_752(&uParam0, iParam4, bParam5, iParam6);
}

bool func_689(struct<4> Param0, int iParam4, bool bParam5)
{
	struct<11> Var0;

	if (!func_733(0))
	{
		return func_753(&Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_682(Param0, &Var0, bParam5, 0, -1))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_740(bParam5), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_690(int iParam0)
{
	return Global_1952637.f_595[iParam0] > 0;
}

void func_691(int iParam0)
{
	Global_1952637.f_595[iParam0]++;
}

void func_692(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (*uParam0 + 1 >= 16)
	{
		return;
	}
	if (!func_754(uParam0, 1))
	{
		func_755(uParam0, 1);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0->f_2[iVar0 /*2*/] == iParam1)
		{
			uParam0->f_2[iVar0 /*2*/].f_1 = iParam2;
			return;
		}
		if (Global_1952637.f_83[uParam0->f_2[iVar0 /*2*/] /*12*/].f_2 > Global_1952637.f_83[iParam1 /*12*/].f_2)
		{
			iVar1 = *uParam0;
			while (iVar1 >= iVar0 + 1)
			{
				uParam0->f_2[iVar1 /*2*/] = { uParam0->f_2[(iVar1 - 1) /*2*/] };
				iVar1 = (iVar1 + -1);
			}
			uParam0->f_2[iVar0 /*2*/] = iParam1;
			uParam0->f_2[iVar0 /*2*/].f_1 = iParam2;
			*uParam0++;
			return;
		}
		iVar0++;
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

int func_693(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_756();
	}
	return Global_17411.f_55.f_644.f_33[iParam0 /*120*/].f_1;
}

bool func_694(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		return (Global_17411.f_55.f_644.f_33[iParam1 /*120*/] && iParam0) != 0;
	}
	return false;
}

void func_695(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	*uParam0 = Global_17411.f_55.f_644.f_33[iParam1 /*120*/].f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uParam0->f_1[iVar0 /*3*/] = { Global_17411.f_55.f_644.f_33[iParam1 /*120*/].f_1.f_1[iVar0 /*3*/] };
		iVar0++;
	}
	if (119907797 == func_482(uParam0->f_1[10 /*3*/]) && func_606(uParam0->f_1[1 /*3*/], 458991572))
	{
		uParam0->f_1[10 /*3*/] = Global_1952637.f_83[10 /*12*/];
	}
}

bool func_696(int iParam0, int iParam1)
{
	return (Global_1952637.f_83[iParam0 /*12*/].f_11 && iParam1) != 0;
}

void func_697(int iParam0, int iParam1, int iParam2)
{
	Global_1952637.f_83[iParam0 /*12*/].f_11 = (Global_1952637.f_83[iParam0 /*12*/].f_11 - (Global_1952637.f_83[iParam0 /*12*/].f_11 && iParam1));
}

bool func_698(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = Global_1952637.f_1675.f_1[34 /*3*/];
	if ((((func_658(iVar0) != 0 && iParam0 != joaat("MPC_HIDE_ACTION_GLOVES")) && iParam0 != joaat("MPC_HIDE_ACTION_HAT")) && iParam0 != -38530791) && iParam0 != 1905845894)
	{
		return false;
	}
	if (func_606(iVar0, -166674229))
	{
		return false;
	}
	return func_666(iParam0);
}

int func_699(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<15> Var3;
	struct<18> Var21;

	if (func_757(&(Global_1952637.f_1058), 2))
	{
		return 0;
	}
	if (iParam1 == -2118203104)
	{
		iVar0 = func_758(iParam0);
	}
	else if (iParam1 == -1811760631)
	{
		iVar0 = func_759(iParam0);
	}
	else
	{
		return 0;
	}
	iVar1 = func_760(uParam3, iParam1);
	bVar2 = func_761(iVar0) != false;
	if (iVar1 == -1 && bVar2)
	{
		return 0;
	}
	if (bVar2)
	{
		if (bParam4)
		{
			func_762(uParam2, uParam3, iParam1);
		}
		else
		{
			func_763(uParam2, uParam3, iVar1);
		}
		return 1;
	}
	if (bParam4)
	{
		Var3.f_2 = -1;
		Var3.f_13 = 1065353216;
		Var3.f_14 = 1065353216;
		if (!func_764(&Var3, iVar0, 0, 1, 6))
		{
			return 0;
		}
		if (iVar1 != -1 && Var3.f_3 == (uParam3[iVar1 /*18*/])->f_3)
		{
			return 0;
		}
		func_765(uParam2, uParam3, &Var3);
	}
	else if (iVar1 == -1)
	{
		func_766(uParam2, uParam3, iVar0, 0, 1);
	}
	else
	{
		Var21.f_2 = -1;
		Var21.f_13 = 1065353216;
		Var21.f_14 = 1065353216;
		if (!func_764(&Var21, iVar0, 0, 1, 6))
		{
			return 0;
		}
		*(uParam3[iVar1 /*18*/]) = { Var21 };
	}
	return 1;
}

void func_700()
{
	Global_1952637.f_1057 = 0;
}

bool func_701(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

Vector3 func_702(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	return Global_17411.f_55.f_644.f_33[iParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
}

void func_703(int iParam0, int iParam1, int iParam2)
{
	Global_1952637.f_83[iParam0 /*12*/].f_11 = (Global_1952637.f_83[iParam0 /*12*/].f_11 || iParam1);
}

void func_704(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	Var2 = 39;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_1952637.f_2897.f_35[iVar0 /*2*/] = { Var2 };
		if (iVar0 < *uParam0)
		{
			if ((func_767(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			else
			{
				if (func_767(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_634(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
				}
				Global_1952637.f_2897.f_35[iVar1 /*2*/] = { uParam0->f_2[iVar0 /*2*/] };
				iVar1++;
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				uParam0->f_2[iVar0 /*2*/] = { Global_1952637.f_2897.f_35[iVar0 /*2*/] };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}
}

void func_705(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

struct<14> func_706(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

bool func_707(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_740(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_708(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<10> Var1;
	int iVar15;
	int iVar16;

	Var1.f_9 = -1591664384;
	iVar16 = 0;
	if (func_660() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar16 = 1;
	}
	iParam2 |= 28;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (!func_738(&Var1, iVar0, iParam0, iParam1))
		{
		}
		else if (PED::_GET_PED_COMPONENT_CATEGORY(Var1.f_4, iVar16, true) == 0)
		{
			if ((Var1.f_4 != joaat("CLOTHING_ITEM_M_BEARD_STUBBLE") && Var1.f_4 != 1326838792) && Var1.f_4 != -230310728)
			{
			}
			else if (func_658(Var1.f_4) != 0)
			{
			}
			else if (func_606(Var1.f_4, -166674229))
			{
			}
			else if (func_606(Var1.f_4, 525391395))
			{
			}
			else
			{
				iVar15 = func_482(Var1.f_4);
				if (func_769(iParam2, func_768(iVar15)))
				{
				}
				else
				{
					return Var1.f_4;
				}
			}
			iVar0++;
			return 0;
		}
	}
}

int func_709(int iParam0)
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

void func_710(var uParam0, var uParam1)
{
	struct<4> Var0;
	int iVar7;
	int iVar8;

	Var0 = func_650(0);
	Var0.f_1 = uParam1;
	Var0.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var0))
	{
		return;
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var0))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, 1409451727))
		{
		}
		else
		{
			iVar8 = func_621(iVar7, 1);
			if (iVar8 < 0 || iVar8 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, joaat("COMPONENT")))
			{
			}
			else if (uParam0->f_1[iVar8 /*3*/] != iVar7)
			{
			}
			else
			{
				uParam0->f_1[iVar8 /*3*/] = Global_1952637.f_83[iVar8 /*12*/];
				uParam0->f_1[iVar8 /*3*/].f_1 = 0;
				func_633(iVar8, 0);
			}
		}
	}
}

void func_711(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (iParam1 == -230310728 || iParam1 == 1326838792)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = 289238755;
	}
	else if (uParam0->f_1[iParam2 /*3*/].f_1 == 289238755)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = joaat("BASE");
	}
	iVar0 = 10;
	iVar1 = func_482(uParam0->f_1[iVar0 /*3*/]);
	if (iVar1 == 119907797)
	{
		if (func_606(iParam1, 458991572))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_633(iVar0, iParam3);
		}
	}
	else if (iVar1 == 2086043523)
	{
		if (func_606(iParam1, -93469181))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_633(iVar0, iParam3);
		}
	}
	iVar0 = 11;
	if (func_606(uParam0->f_1[iVar0 /*3*/], -1446529222) && func_606(iParam1, -93469181))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam3);
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_606(iParam1, -93469181)) && func_606(uParam0->f_1[iVar0 /*3*/], -1303648999))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam3);
	}
}

void func_712(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == joaat("CLOTHING_ITEM_M_BEARD_STUBBLE"))
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = 289238755;
	}
	else if (uParam0->f_1[iParam2 /*3*/].f_1 == 289238755)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = joaat("BASE");
	}
}

void func_713(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		return;
	}
	iVar0 = 12;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if (!func_624(iVar1, 0) && func_606(iVar1, -180472385))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam3);
	}
	iVar0 = 10;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if ((iVar1 != Global_1952637.f_83[iVar0 /*12*/] && func_482(iVar1) == 2086043523) && func_606(iParam1, -93469181))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam3);
	}
}

void func_714(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_482(iParam2))
	{
		case -525676072:
			func_770(uParam0, bParam1, iParam3);
			break;
		case 2086043523:
			func_771(uParam0, bParam1, iParam3);
			break;
	}
}

void func_715(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 18;
	if (func_482(uParam0->f_1[iVar0 /*3*/]) == 912453393)
	{
		func_633(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	if (func_482(iParam2) == 81053684 || func_606(iParam2, 160827531))
	{
		func_772(uParam0, bParam1, iParam3);
	}
	iVar0 = 11;
	if (func_606(iParam2, -180472385) && !func_624(uParam0->f_1[iVar0 /*3*/], 0))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam3);
	}
	if (func_606(iParam2, -1303648999))
	{
		return;
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		func_633(iVar0, iParam3);
		iVar0 = 20;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
		{
			func_633(iVar0, iParam3);
		}
	}
	else if (uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = -1539589426;
		func_633(iVar0, iParam3);
		iVar0 = 20;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
		{
			func_633(iVar0, iParam3);
		}
	}
}

void func_716(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 12;
	iVar1 = 0;
	if (func_660() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar1 = 1;
	}
	if (joaat("NECKTIES") == PED::_GET_PED_COMPONENT_CATEGORY(uParam0->f_1[iVar0 /*3*/], iVar1, true))
	{
		if ((bParam1 || func_606(iParam2, 1872585553)) || func_482(iParam2) == 1882579758)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_633(iVar0, iParam4);
		}
	}
	iVar0 = 17;
	if (!func_624(uParam0->f_1[iVar0 /*3*/], 0) && func_606(iParam2, 1467402774))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam4);
	}
	iVar0 = 29;
	if (!func_624(uParam0->f_1[iVar0 /*3*/], 0) && func_606(iParam2, 1126863852))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam4);
	}
	iVar0 = 34;
	iVar2 = uParam0->f_1[iVar0 /*3*/];
	if (func_482(iVar2) == 1759215194 && func_482(iParam2) == 1882579758)
	{
		uParam0->f_1[iVar0 /*3*/] = func_746(iParam2);
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam4);
	}
	else if (func_773(iVar2, bParam1, iVar1))
	{
		iVar2 = uParam0->f_1[18 /*3*/];
		iVar3 = 0;
		if (func_482(iVar2) == 912453393 && func_774(32))
		{
			iVar3 |= 1;
		}
		if (func_606(iParam2, 525391395))
		{
			iVar3 |= 2;
		}
		iVar2 = func_661(Global_1952637.f_83[iVar0 /*12*/].f_9, iVar3);
		if (iVar2 != 0)
		{
			uParam0->f_1[iVar0 /*3*/] = iVar2;
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_633(iVar0, iParam4);
			func_724(uParam0, 0, iVar2, iParam4);
		}
	}
	iVar0 = 21;
	if (func_624(uParam0->f_1[iVar0 /*3*/], 0))
	{
		return;
	}
	func_633(iVar0, iParam4);
	if (uParam0->f_1[iParam3 /*3*/].f_1 == -1539589426 || uParam0->f_1[iParam3 /*3*/].f_1 == 1334603721)
	{
		return;
	}
	if (uParam0->f_1[iParam3 /*3*/].f_1 == 0 || uParam0->f_1[iParam3 /*3*/].f_1 == joaat("BASE"))
	{
		if (func_748(iParam2, iVar1, -1539589426) >= 0)
		{
			uParam0->f_1[iParam3 /*3*/].f_1 = -1539589426;
			return;
		}
	}
	if (func_748(iParam2, iVar1, 1334603721) >= 0)
	{
		uParam0->f_1[iParam3 /*3*/].f_1 = 1334603721;
	}
}

void func_717(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_606(iParam2, 358628372))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam3);
	}
}

void func_718(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	switch (func_482(iParam2))
	{
		case 698653232:
			func_775(uParam0, bParam1, iParam2, iParam4);
			break;
		case 912453393:
			func_776(uParam0, bParam1, iParam3, iParam4);
			break;
	}
}

void func_719(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_482(iParam2))
	{
		case -1080198344:
		case 1868067663:
			func_777(uParam0, bParam1, iParam2, iParam3);
			break;
		case 294388917:
			func_778(uParam0, bParam1, iParam2, iParam3);
			break;
	}
}

void func_720(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 18;
	if (func_482(uParam0->f_1[iVar0 /*3*/]) == 912453393)
	{
		func_633(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar1 = 0;
	if (func_660() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar1 = 1;
	}
	iVar0 = 23;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_606(iParam2, 1537768121))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam3);
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		func_633(iVar0, iParam3);
		if (uParam0->f_1[iVar0 /*3*/].f_1 == -1539589426 || uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721)
		{
			return;
		}
		if (uParam0->f_1[iVar0 /*3*/].f_1 == 0 || uParam0->f_1[iVar0 /*3*/].f_1 == joaat("BASE"))
		{
			if (func_748(uParam0->f_1[iVar0 /*3*/], iVar1, -1539589426) >= 0)
			{
				uParam0->f_1[iVar0 /*3*/].f_1 = -1539589426;
				return;
			}
		}
		if (func_748(uParam0->f_1[iVar0 /*3*/], iVar1, 1334603721) >= 0)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1334603721;
		}
	}
}

void func_721(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 21;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_606(uParam0->f_1[iVar0 /*3*/], 1537768121))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam2);
	}
}

void func_722(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	if (func_779(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) && func_606(iParam2, -1230785684))
	{
		iVar0 = 27;
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam3);
	}
	iVar0 = 32;
	if (!func_624(uParam0->f_1[iVar0 /*3*/], 0) && func_606(iParam2, 1016511012))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam3);
	}
}

void func_723(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_606(uParam0->f_1[iVar0 /*3*/], 358628372))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam2);
	}
}

void func_724(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_482(iParam2))
	{
		case 1759215194:
			func_780(uParam0, iParam3);
			break;
		case 1223979091:
		case 2047428024:
			func_781(uParam0, bParam1, iParam2, iParam3);
			break;
		case 684307653:
			func_782(uParam0, bParam1, iParam2, iParam3);
			break;
		case 502936876:
			func_783(uParam0, bParam1, iParam3);
			break;
		case -1740828670:
			func_784(uParam0, bParam1, iParam2, iParam3);
			break;
		case 344283346:
			func_785(uParam0, bParam1, iParam3);
			break;
	}
}

void func_725(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_482(iParam2))
	{
		case 1769055947:
			func_786(uParam0, bParam1, iParam2, iParam3);
			break;
		case -923693316:
			func_787(uParam0, bParam1, iParam2, iParam3);
			break;
	}
}

void func_726(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		func_788(uParam0, iParam3, 0, 1);
		return;
	}
	iVar0 = 35;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if ((func_606(iParam2, 813132419) && uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/]) && func_482(iVar1) == -923693316)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam3);
	}
	if ((func_606(iParam2, -1650340550) && uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/]) && func_482(iVar1) == 1769055947)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam3);
	}
	iVar0 = 37;
	if (func_606(iParam2, -1278198125) && uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam3);
	}
}

bool func_727(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

int func_728(int iParam0)
{
	int iVar0;

	Global_1952637.f_2843.f_43[Global_1952637.f_2843.f_1 /*2*/] = iParam0;
	iVar0 = Global_1952637.f_2843.f_2 ^ -1;
	iVar0 = (iVar0 && -iVar0);
	Global_1952637.f_2843.f_2 = (Global_1952637.f_2843.f_2 || iVar0);
	Global_1952637.f_2843.f_43[Global_1952637.f_2843.f_1 /*2*/].f_1 = iVar0;
	Global_1952637.f_2843.f_1++;
	return iVar0;
}

void func_729(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_789(iParam0, &iVar0))
	{
		return;
	}
	if (iVar0 == 20 && func_606(Global_1952637.f_1675.f_1[iVar0 /*3*/], 343781202))
	{
		iVar1 = func_790(Global_1952637.f_1675.f_1[iVar0 /*3*/], 1108822547);
		if (1388798186 == func_482(iVar1))
		{
			func_791(10, iParam1);
		}
	}
	func_791(iVar0, iParam1);
}

bool func_730(int iParam0)
{
	return func_108(&(Global_1956200.f_1565), iParam0, 1);
}

int func_731(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

bool func_732(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (func_792(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_682(*uParam1, &Var0, bParam6, 0, -1))
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_733(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_30() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_793(joaat("USE"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_794(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_740(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_733(bool bParam0)
{
	if (func_30() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_740(bParam0));
}

int func_734(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_795(iParam0))
	{
		return 0;
	}
	if (!func_733(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_34, iParam0, iParam1, iParam2);
	return 1;
}

void func_735(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_34, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar2 = func_796(WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_34, iParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_34, &iVar1, iParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_34, iParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_34, iParam0, iVar1);
		}
	}
}

bool func_736(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_737(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_740(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_738(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		return false;
	}
	return true;
}

bool func_739(int iParam0)
{
	return WEAPON::_IS_WEAPON_BOW(iParam0);
}

int func_740(bool bParam0)
{
	if (func_30() == -1)
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

bool func_741()
{
	return (func_797(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_688(func_675(joaat("WARDROBE"), func_673(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_742(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_542(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_798(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_675(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_740(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_740(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_743(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_740(0);
	*uParam1 = { func_675(iParam0, func_676(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return false;
	}
	return true;
}

bool func_744(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 487172188)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
		{
			return false;
		}
	}
	return ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, iParam2);
}

bool func_745(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_740(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_746(int iParam0)
{
	var uVar0;
	var uVar1;

	func_705(&uVar1, 9044914, iParam0, 0, 0, 0);
	DATAFILE::_0x91DED5DD64BB2691(&uVar1);
	while (DATAFILE::_0xED4413CEE1BF142C(&uVar1))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&uVar0, &uVar1, -1168434056))
		{
			return 0;
		}
		return uVar0;
	}
	return 0;
}

bool func_747(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_482(Global_1952637.f_1675.f_1[iParam1 /*3*/]);
	if (func_482(iParam0) == iVar0)
	{
		return true;
	}
	else if (iParam0 == joaat("CLOTHING_ITEM_BANDANA_NONE"))
	{
		return func_606(Global_1952637.f_1675.f_1[iParam1 /*3*/], 160827531);
	}
	else if (iParam0 == 491480257)
	{
		return (iVar0 == -2061583405 || iVar0 == 2086043523);
	}
	else if (iParam0 == joaat("CLOTHING_ITEM_CHAPS_NONE"))
	{
		return iVar0 == -923693316;
	}
	else if (iParam0 == joaat("CLOTHING_ITEM_SHIRT_NONE"))
	{
		return iVar0 == 1882579758;
	}
	return false;
}

int func_748(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(iParam0, iParam1, 1))
	{
		if (PED::_0x6243635AF2F1B826(iParam0, iVar0, iParam1, 1) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_749(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		Global_1952637.f_1675.f_1[iParam0 /*3*/] = { Global_1952637.f_1556.f_1[iParam0 /*3*/] };
	}
	if (!bParam2)
	{
		return;
	}
	func_799(&(Global_1952637.f_1675.f_1[iParam0 /*3*/]), iParam0, Global_17411.f_55.f_644.f_1777);
}

void func_750(int iParam0, bool bParam1, int iParam2)
{
	func_800(&(Global_1952637.f_1556), iParam0);
	func_801(2, iParam0, 6);
	if (bParam1)
	{
		func_751(0, 1);
	}
}

void func_751(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_700();
	}
	if (bParam0)
	{
		func_589(8);
		func_589(512);
	}
	else
	{
		func_589(8);
		func_589(16);
	}
}

int func_752(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_802(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_753(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	struct<14> Var1;
	int iVar15;
	struct<28> Var16;
	struct<25> Var44;
	struct<17> Var69;
	struct<16> Var86;

	iVar0 = -1;
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_682(*uParam0, &Var1, 1, 0, -1))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam1)
	{
		return iVar0;
	}
	if (Var1.f_13)
	{
		return iVar0;
	}
	iVar15 = func_674(Var1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		Var16 = { func_803(*uParam0, 1, 0) };
		Var16.f_10 = iParam1;
		iVar0 = func_804(joaat("UPDATE"), &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("COACH"))
	{
		Var44 = { func_805(*uParam0, 1, 0) };
		Var44.f_10 = iParam1;
		iVar0 = func_806(joaat("UPDATE"), &Var44, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		Var69 = { func_807(*uParam0, 1, 0) };
		Var69.f_10 = iParam1;
		iVar0 = func_808(joaat("UPDATE"), &Var69, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_809(&Var1, 0) };
		Var86.f_10 = iParam1;
		iVar0 = func_793(joaat("UPDATE"), &Var86, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_754(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_755(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_756()
{
	return Global_17411.f_55.f_644.f_1777;
}

bool func_757(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

int func_758(int iParam0)
{
	if (iParam0 == joaat("CLOTHING_ITEM_M_BEARD_STUBBLE"))
	{
		return -236468550;
	}
	return joaat("CLOTHING_BLEND_FACIAL_HAIR_NONE");
}

int func_759(int iParam0)
{
	if (iParam0 == joaat("CLOTHING_ITEM_HAIR_NONE"))
	{
		return 1687431937;
	}
	else if (func_606(iParam0, -779797157))
	{
		return 129780002;
	}
	else if (func_606(iParam0, -1082418872))
	{
		return -25348444;
	}
	else if (func_606(iParam0, -724253702))
	{
		return -1551826771;
	}
	else
	{
		return 1661173679;
	}
	return 1687431937;
}

int func_760(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((uParam0[iVar0 /*18*/])->f_1 == -1 || (uParam0[iVar0 /*18*/])->f_17 == 0)
		{
		}
		else
		{
			if ((uParam0[iVar0 /*18*/])->f_17 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_761(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CLOTHING_BLEND_FRECKLES_NONE"):
			return 241235545;
		case joaat("CLOTHING_BLEND_MOLES_NONE"):
			return 1827902148;
		case joaat("CLOTHING_BLEND_SPOTS_NONE"):
			return 1301555144;
		case joaat("CLOTHING_BLEND_FOUNDATION_NONE"):
			return -2056583192;
		case joaat("CLOTHING_BLEND_BLUSHER_NONE"):
			return 1015239729;
		case joaat("CLOTHING_BLEND_EYELINER_NONE"):
			return -340627321;
		case joaat("CLOTHING_BLEND_EYESHADOW_NONE"):
			return -875805376;
		case joaat("CLOTHING_BLEND_LIPSTICK_NONE"):
			return -768760704;
		case joaat("CLOTHING_BLEND_FACIAL_HAIR_NONE"):
			return -2118203104;
		case joaat("CLOTHING_BLEND_GRIME_NONE"):
			return 1285634184;
		case -643819742:
			return -559080197;
		case joaat("CLOTHING_BLEND_COMPLEXION_NONE"):
			return -1180698265;
		case joaat("CLOTHING_BLEND_COMPLEXION_2_NONE"):
			return -487028314;
		case 1687431937:
			return -1811760631;
		case joaat("CLOTHING_BLEND_SCAR_NONE"):
			return 1858448324;
		default:
			break;
	}
	return 0;
}

int func_762(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_760(uParam1, iParam2);
	if (iVar0 == -1)
	{
		return 0;
	}
	PED::_REMOVE_PED_OVERLAY(*uParam0, (uParam1[iVar0 /*18*/])->f_2);
	func_763(uParam0, uParam1, iVar0);
	return 1;
}

void func_763(var uParam0, var uParam1, int iParam2)
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
			*(uParam1[iVar0 /*18*/]) = { *(uParam1[iVar0 + 1 /*18*/]) };
			(uParam1[iVar0 /*18*/])->f_2 = ((uParam1[iVar0 /*18*/])->f_2 - 1);
			iVar0++;
		}
	}
}

bool func_764(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	struct<5> Var0;

	Var0 = 660625468;
	Var0.f_1 = -756385367;
	Var0.f_2 = joaat("ID");
	Var0.f_3 = 1;
	Var0.f_4 = iParam1;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	if (!func_810(&Var0, uParam0, 0, iParam4))
	{
		return false;
	}
	*uParam0 = iParam1;
	if (bParam2)
	{
		func_811(uParam0, bParam3);
	}
	return true;
}

void func_765(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if ((!func_757(uParam0, 1) || func_757(uParam0, 2)) || uParam0->f_6 < 0)
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
		func_812(uParam0, uParam2->f_3, uParam2->f_4, uParam2->f_5);
	}
	else
	{
		iVar0 = func_760(uParam1, uParam2->f_17);
		if (iVar0 <= -1)
		{
			if (uParam0->f_6 >= 22)
			{
				return;
			}
			*(uParam1[uParam0->f_6 /*18*/]) = { *uParam2 };
			uParam0->f_6++;
			func_813(uParam0, uParam1, (uParam0->f_6 - 1));
		}
		else
		{
			uParam2->f_2 = (uParam1[iVar0 /*18*/])->f_2;
			*(uParam1[iVar0 /*18*/]) = { *uParam2 };
			func_814(uParam0, uParam1[iVar0 /*18*/], 1);
		}
	}
}

int func_766(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<18> Var0;
	int iVar18;
	struct<18> Var19;

	Var0.f_2 = -1;
	Var0.f_13 = 1065353216;
	Var0.f_14 = 1065353216;
	if (!func_764(&Var0, iParam2, bParam3, bParam4, 6))
	{
		return 0;
	}
	if (uParam0->f_6 >= 22)
	{
		return 0;
	}
	*(uParam1[uParam0->f_6 /*18*/]) = { Var0 };
	uParam0->f_6++;
	Var19.f_2 = -1;
	Var19.f_13 = 1065353216;
	Var19.f_14 = 1065353216;
	iVar18 = (uParam0->f_6 - 1);
	while (iVar18 >= 1)
	{
		if ((uParam1[iVar18 /*18*/])->f_1 < (uParam1[(iVar18 - 1) /*18*/])->f_1)
		{
			Var19 = { *(uParam1[iVar18 /*18*/]) };
			*(uParam1[iVar18 /*18*/]) = { *(uParam1[(iVar18 - 1) /*18*/]) };
			*(uParam1[(iVar18 - 1) /*18*/]) = { Var19 };
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

bool func_767(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_768(int iParam0)
{
	switch (iParam0)
	{
		case 502936876:
			return 1;
		case 684307653:
			return 2;
		case 1759215194:
			return 4;
		case -1740828670:
			return 8;
		case 344283346:
			return 16;
		default:
			break;
	}
	return 0;
}

bool func_769(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_770(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if (func_606(iVar1, 160827531) || func_482(iVar1) == 81053684)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam2);
	}
}

void func_771(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 11;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_606(uParam0->f_1[iVar0 /*3*/], -93469181))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam2);
	}
}

void func_772(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 10;
	if (-525676072 == func_482(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam2);
	}
}

bool func_773(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_482(iParam0);
	if (iParam2 == 0)
	{
		return (iVar0 == 1759215194 || iVar0 == 344283346);
	}
	return (!bParam1 && (iVar0 == -1740828670 || iVar0 == 344283346));
}

bool func_774(int iParam0)
{
	return (Global_17411.f_55.f_644.f_1734 && iParam0) != 0;
}

void func_775(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_606(iParam2, -1527414429)) && !func_606(uParam0->f_1[iVar0 /*3*/], -1303648999))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam3);
	}
	iVar0 = 16;
	if ((uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430 || uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721) && func_606(iParam2, -985549034))
	{
		if (uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
			func_633(iVar0, iParam3);
		}
		else if (uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -1539589426;
			func_633(iVar0, iParam3);
		}
	}
}

void func_776(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam3);
	}
	if (uParam0->f_1[iParam2 /*3*/].f_1 != -2081918609)
	{
		iVar0 = 34;
		iVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_606(iVar1, 1583165364))
		{
			uParam0->f_1[iParam2 /*3*/].f_1 = -2081918609;
			func_633(iParam2, iParam3);
		}
		else
		{
			iVar0 = 35;
			iVar1 = uParam0->f_1[iVar0 /*3*/];
			if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && 1769055947 == func_482(iVar1))
			{
				uParam0->f_1[iParam2 /*3*/].f_1 = -2081918609;
				func_633(iParam2, iParam3);
			}
		}
	}
}

void func_777(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 16;
	func_633(iVar0, iParam3);
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		func_633(iVar0, iParam3);
	}
	if (bParam1)
	{
		iVar0 = 21;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
		{
			func_633(iVar0, iParam3);
			func_720(uParam0, 0, uParam0->f_1[iVar0 /*3*/], iParam3);
		}
		return;
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_606(iParam2, 1126863852))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam3);
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_606(iParam2, -985549034))
	{
		if (uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		}
		else if (uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -1539589426;
		}
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_606(iParam2, -1527414429)) && !func_606(uParam0->f_1[iVar0 /*3*/], -1303648999))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam3);
	}
}

void func_778(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		func_633(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && !func_606(uParam0->f_1[iVar0 /*3*/], -1303648999))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam3);
	}
	iVar0 = 13;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam3);
	}
	iVar0 = 25;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_606(iParam2, 675650051))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam3);
	}
}

bool func_779(int iParam0)
{
	return Global_1952637.f_1675.f_1[func_621(iParam0, 1) /*3*/] != Global_1952637.f_83[func_621(iParam0, 1) /*12*/];
}

void func_780(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam1);
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		func_633(iVar0, iParam1);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		func_633(iVar0, iParam1);
	}
}

void func_781(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (bParam1)
	{
		return;
	}
	bVar2 = false;
	iVar3 = 0;
	if (func_660() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar3 = 1;
	}
	if (func_660() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1952637.f_83[iVar0 /*12*/] && func_482(uParam0->f_1[18 /*3*/]) != 912453393)
		{
			uParam0->f_1[iVar0 /*3*/] = func_661(Global_1952637.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_633(iVar0, iParam3);
		}
	}
	iVar0 = 36;
	func_633(iVar0, iParam3);
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_606(iParam2, -1473580422))
	{
		iVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_606(iVar1, 1469783911))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		}
		else if (func_748(uParam0->f_1[iVar0 /*3*/], iVar3, -2081918609) != -1)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -2081918609;
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		}
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		iVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_482(iVar1) == 912453393)
		{
			bVar2 = true;
			if (func_606(iParam2, 1583165364))
			{
				uParam0->f_1[iVar0 /*3*/].f_1 = -2081918609;
				func_633(iVar0, iParam3);
			}
		}
	}
	iVar0 = 20;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if (iVar1 != Global_1952637.f_83[iVar0 /*12*/])
	{
		if (func_482(iVar1) == 1868067663 && func_606(iParam2, -1016441646))
		{
			func_815(uParam0, iVar0, iParam3);
		}
		else if (bVar2)
		{
			func_633(iVar0, iParam3);
		}
	}
	iVar0 = 34;
	if (1759215194 == func_482(uParam0->f_1[iVar0 /*3*/]))
	{
		func_633(16, iParam3);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_606(iParam2, -1650340550))
	{
		iVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_482(iVar1) == 1769055947)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_633(iVar0, iParam3);
		}
	}
}

void func_782(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		return;
	}
	if (func_660() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1952637.f_83[iVar0 /*12*/] && func_482(uParam0->f_1[18 /*3*/]) != 912453393)
		{
			uParam0->f_1[iVar0 /*3*/] = func_661(Global_1952637.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_633(iVar0, iParam3);
		}
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		if (func_606(uParam0->f_1[iVar0 /*3*/], -2093434733))
		{
			func_788(uParam0, iParam3, 1, 0);
		}
		else if (func_606(iParam2, 1718965018))
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		}
	}
	func_633(iVar0, iParam3);
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam3);
	}
	iVar0 = 20;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_606(iVar1, 1090938458)) && func_606(iParam2, 475297062))
	{
		func_815(uParam0, iVar0, iParam3);
	}
}

void func_783(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		return;
	}
	func_633(36, iParam2);
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam2);
	}
	if (func_660() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1952637.f_83[iVar0 /*12*/])
		{
			iVar0 = 16;
			uParam0->f_1[iVar0 /*3*/] = func_661(Global_1952637.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_633(iVar0, iParam2);
		}
	}
	iVar0 = 20;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if (iVar1 != Global_1952637.f_83[iVar0 /*12*/] && func_606(iVar1, 353024991))
	{
		func_815(uParam0, iVar0, iParam2);
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam2);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && 1769055947 == func_482(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam2);
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam2);
	}
}

void func_784(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_482(iVar1) == 294388917)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam3);
	}
	iVar0 = 18;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		if (func_482(iVar1) == 912453393)
		{
			if (uParam0->f_1[iVar0 /*3*/].f_1 != joaat("BASE"))
			{
				uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
				func_633(iVar0, iParam3);
			}
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_633(iVar0, iParam3);
		}
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam3);
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam3);
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam3);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam3);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		if (func_606(uParam0->f_1[iVar0 /*3*/], -2093434733))
		{
			func_788(uParam0, iParam3, 1, 0);
		}
		else if (func_606(iParam2, 1718965018))
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		}
	}
}

void func_785(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		func_815(uParam0, iVar0, iParam2);
	}
	iVar0 = 21;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam2);
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam2);
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam2);
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam2);
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam2);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam2);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		if (func_606(uParam0->f_1[iVar0 /*3*/], -2093434733))
		{
			func_788(uParam0, iParam2, 1, 0);
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
			func_633(iVar0, iParam2);
		}
	}
}

void func_786(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 34;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		func_633(iVar0, iParam3);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = -2081918609;
		func_633(iVar0, iParam3);
	}
	iVar0 = 37;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_606(iParam2, -1278198125))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam3);
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		iVar1 = uParam0->f_1[iVar0 /*3*/];
		if (912453393 == func_482(iVar1) && uParam0->f_1[iVar0 /*3*/].f_1 != -2081918609)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -2081918609;
			func_633(iVar0, iParam3);
		}
	}
}

void func_787(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 37;
	if (func_606(iParam2, -1278198125) && uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam3);
	}
}

void func_788(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 36;
	if (bParam2)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam1);
	}
	iVar0 = 37;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam1);
	}
	iVar0 = 38;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam1);
	}
	iVar0 = 35;
	if (bParam3 && -923693316 == func_482(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_633(iVar0, iParam1);
	}
}

bool func_789(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case -1912930450:
			iVar0 = 1742327865;
			if (func_482(func_605(iVar0)) != 81053684 && !func_606(func_605(iVar0), 160827531))
			{
				return false;
			}
			break;
		case -1745589872:
			iVar0 = 1742327865;
			if (!func_606(func_605(iVar0), -1303648999))
			{
				return false;
			}
			break;
		case -1549909015:
			iVar0 = 1108822547;
			iVar1 = func_482(func_605(iVar0));
			if (iVar1 != -525676072 && iVar1 != -2061583405)
			{
				return false;
			}
			break;
		case 357406204:
			iVar0 = -1197751823;
			iVar1 = func_482(func_605(iVar0));
			if (iVar1 != 294388917)
			{
				return false;
			}
			break;
		case -464635753:
			iVar0 = -450913544;
			iVar1 = func_482(func_605(iVar0));
			if (iVar1 != 698653232)
			{
				return false;
			}
			break;
		case 1742327865:
			iVar0 = 1742327865;
			if (func_606(func_605(iVar0), -1303648999))
			{
				return false;
			}
			break;
		default:
			iVar0 = iParam0;
			break;
	}
	*iParam1 = func_621(iVar0, 1);
	return true;
}

int func_790(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = func_650(0);
	func_705(&(Global_1952637.f_1043), iVar0, iParam0, 1409451727, 1, iParam1);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1952637.f_1043));
	if (!DATAFILE::_0xED4413CEE1BF142C(&(Global_1952637.f_1043)))
	{
		return 0;
	}
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar1, &(Global_1952637.f_1043), joaat("COMPONENT")))
	{
		return 0;
	}
	return uVar1;
}

void func_791(int iParam0, int iParam1)
{
	Global_1952637.f_2843.f_3[iParam0] = (Global_1952637.f_2843.f_3[iParam0] || iParam1);
}

bool func_792(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

int func_793(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_816(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_818(func_817(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_819(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_794(int iParam0, struct<17> Param1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346.f_20)
	{
		if (Global_1293346.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 == 1 || Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 == 5)
			{
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

bool func_795(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_796(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_797(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_795(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_740(bParam1), iParam0, iParam3);
}

int func_798(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

void func_799(var uParam0, int iParam1, int iParam2)
{
	Global_17411.f_55.f_644.f_33[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
}

void func_800(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	Global_17411.f_55.f_644.f_33[iParam1 /*120*/].f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_799(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_801(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		Global_17411.f_55.f_644.f_33[iParam1 /*120*/] = (Global_17411.f_55.f_644.f_33[iParam1 /*120*/] || iParam0);
	}
}

bool func_802(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_740(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_745(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

struct<28> func_803(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<28> Var0;
	struct<29> Var28;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_740(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_809(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_804(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_816(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_818(func_820(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_819(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_805(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<25> Var0;
	struct<24> Var25;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var25.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_740(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_809(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_806(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_818(func_821(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_819(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

struct<17> func_807(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_740(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_809(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_808(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_816(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_818(func_822(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_819(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

struct<16> func_809(var uParam0, bool bParam1)
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
		Var0.f_15 = func_798(uParam0->f_4, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_520() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_810(var uParam0, var uParam1, bool bParam2, int iParam3)
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
		return false;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, uParam0, joaat("ALBEDO")))
	{
		uParam1->f_3 = iVar0;
	}
	else
	{
		uParam1->f_3 = 0;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, uParam0, joaat("NORMAL")))
	{
		uParam1->f_4 = iVar0;
	}
	else
	{
		uParam1->f_4 = 0;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, uParam0, joaat("MATERIAL")))
	{
		uParam1->f_5 = iVar0;
	}
	else
	{
		uParam1->f_5 = 0;
	}
	if (DATAFILE::_0xB2B42607F7867576(&uVar4, uParam0, 2018964076))
	{
		uParam1->f_13 = uVar4;
	}
	else
	{
		uParam1->f_13 = 0f;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, uParam0, 723829617))
	{
		uParam1->f_16 = func_823(iVar0);
	}
	if (DATAFILE::_0xB2B42607F7867576(&uVar4, uParam0, 1802626656))
	{
		uParam1->f_15 = uVar4;
	}
	else
	{
		uParam1->f_15 = 0f;
	}
	if (DATAFILE::_0x52FC26D2D2FC2987(&uVar3, uParam0, 939944711))
	{
		uParam1->f_6 = uVar3;
	}
	else
	{
		uParam1->f_6 = 0;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, uParam0, 917806888))
	{
		uParam1->f_7 = iVar0;
		if (DATAFILE::_0x52FC26D2D2FC2987(&uVar3, uParam0, 1922465595))
		{
			uParam1->f_8 = uVar3;
		}
		else
		{
			uParam1->f_8 = 0;
		}
		if (DATAFILE::_0xB2B42607F7867576(&uVar4, uParam0, -1979206779))
		{
			uParam1->f_14 = uVar4;
		}
		else
		{
			uParam1->f_14 = 0f;
		}
	}
	else
	{
		uParam1->f_7 = 0;
		uParam1->f_8 = 0;
		uParam1->f_14 = 0f;
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
	else
	{
		uParam1->f_9 = 0;
		uParam1->f_10 = 0;
		uParam1->f_11 = 0;
		uParam1->f_12 = 0;
	}
	uParam0->f_1 = 1777366913;
	uParam0->f_2 = joaat("ID");
	uParam0->f_3 = 1;
	uParam0->f_4 = uVar2;
	DATAFILE::_0x91DED5DD64BB2691(uParam0);
	if (DATAFILE::_0x52FC26D2D2FC2987(&uVar1, uParam0, -1118674339))
	{
		uParam1->f_1 = uVar1;
	}
	return true;
}

void func_811(var uParam0, bool bParam1)
{
	int iVar0;
	struct<17> Var1;
	int iVar18;
	struct<4> Var19;

	Var1.f_9 = 1;
	Var1.f_11 = -1591664384;
	iVar0 = func_824(uParam0->f_17);
	if (iVar0 == 0)
	{
		return;
	}
	iVar18 = *uParam0;
	Var19 = { func_675(joaat("WARDROBE"), func_673(1), 1034665895, 1) };
	if (bParam1 && iVar18 != func_688(Var19, iVar0, 1, -1))
	{
		return;
	}
	Var1 = { func_807(func_675(iVar18, Var19, iVar0, 1), 1, 0) };
	if (Var1.f_16 <= 0)
	{
		return;
	}
	uParam0->f_13 = func_825(Var1.f_16);
}

void func_812(var uParam0, var uParam1, var uParam2, var uParam3)
{
	uParam0->f_2 = uParam1;
	uParam0->f_3 = uParam2;
	uParam0->f_4 = uParam3;
	PED::_SET_TEXTURE_LAYER_TEXTURE_MAP(*uParam0, 0, uParam0->f_2, uParam0->f_3, uParam0->f_4);
}

void func_813(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 > 0 && (uParam1[(iParam2 - 1) /*18*/])->f_1 > (uParam1[iParam2 /*18*/])->f_1)
	{
		func_826(uParam0, uParam1);
	}
	else
	{
		func_827(uParam0, uParam1[iParam2 /*18*/]);
	}
}

void func_814(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		PED::_SET_TEXTURE_LAYER_TEXTURE_MAP(*uParam0, uParam1->f_2, uParam1->f_3, uParam1->f_4, uParam1->f_5);
	}
	if (uParam1->f_9 != 0)
	{
		PED::_SET_TEXTURE_LAYER_PALLETE(*uParam0, uParam1->f_2, uParam1->f_9);
		PED::_SET_TEXTURE_LAYER_TINT(*uParam0, uParam1->f_2, uParam1->f_10, uParam1->f_11, uParam1->f_12);
	}
	if (uParam1->f_7 != 0)
	{
		PED::_SET_TEXTURE_LAYER_MOD(*uParam0, uParam1->f_2, uParam1->f_7, uParam1->f_14, uParam1->f_8);
	}
	if (uParam1->f_15 > 0f)
	{
		PED::_SET_TEXTURE_LAYER_ROUGHNESS(*uParam0, uParam1->f_2, uParam1->f_15);
	}
	PED::_SET_TEXTURE_LAYER_SHEET_GRID_INDEX(*uParam0, uParam1->f_2, uParam1->f_6);
	PED::_SET_TEXTURE_LAYER_ALPHA(*uParam0, uParam1->f_2, uParam1->f_13);
}

void func_815(var uParam0, int iParam1, int iParam2)
{
	if (func_606(uParam0->f_1[iParam1 /*3*/], 343781202))
	{
		func_710(uParam0, uParam0->f_1[iParam1 /*3*/]);
	}
	else
	{
		uParam0->f_1[iParam1 /*3*/] = Global_1952637.f_83[iParam1 /*12*/];
		uParam0->f_1[iParam1 /*3*/].f_1 = 0;
		func_633(iParam1, iParam2);
	}
}

bool func_816(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("USE"))
	{
		if ((func_828(uParam1->f_8, iParam0, iVar0, 2048) || func_828(uParam1->f_8, iParam0, iVar0, 32768)) || func_828(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_828(uParam1->f_8, iParam0, iVar0, 4) || func_828(uParam1->f_8, iParam0, iVar0, 256)) || func_828(uParam1->f_8, iParam0, iVar0, 65536)) || func_828(uParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SPEND"))
	{
		if (((func_828(uParam1->f_8, iParam0, iVar0, 1) || func_828(uParam1->f_8, iParam0, iVar0, 8)) || func_828(uParam1->f_8, iParam0, iVar0, 65536)) || func_828(uParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SELL"))
	{
		if (((func_828(uParam1->f_8, iParam0, iVar0, 1) || func_828(uParam1->f_8, iParam0, iVar0, 16)) || func_828(uParam1->f_8, iParam0, iVar0, 2)) || func_828(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_828(uParam1->f_8, iParam0, iVar0, 8) || func_828(uParam1->f_8, iParam0, iVar0, 4096)) || func_828(uParam1->f_8, iParam0, iVar0, 256)) || func_828(uParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_817(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_818(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_829(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_829(iParam1, 2, 0, 0);
	return -1;
}

int func_819(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_829(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_820(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 28, uParam2, 0);
}

bool func_821(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 25, uParam2, 0);
}

bool func_822(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

int func_823(int iParam0)
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

int func_824(int iParam0)
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

float func_825(int iParam0)
{
	return (BUILTIN::TO_FLOAT(iParam0) / 10000f);
}

void func_826(var uParam0, var uParam1)
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
		if ((uParam1[iVar0 /*18*/])->f_1 < (uParam1[(iVar0 - 1) /*18*/])->f_1)
		{
			PED::_REMOVE_PED_OVERLAY(*uParam0, (uParam1[(iVar0 - 1) /*18*/])->f_2);
			Var2 = { *(uParam1[iVar0 /*18*/]) };
			*(uParam1[iVar0 /*18*/]) = { *(uParam1[(iVar0 - 1) /*18*/]) };
			*(uParam1[(iVar0 - 1) /*18*/]) = { Var2 };
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
		func_827(uParam0, uParam1[iVar0 /*18*/]);
		iVar0++;
	}
}

void func_827(var uParam0, var uParam1)
{
	uParam1->f_2 = PED::_ADD_TEXTURE_LAYER(*uParam0, uParam1->f_3, uParam1->f_4, uParam1->f_5, uParam1->f_16, uParam1->f_13, uParam1->f_6);
	func_814(uParam0, uParam1, 0);
}

int func_828(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_598(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_829(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346.f_20)
	{
		if (Global_1293346.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_2 = iParam2;
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_830(iParam0, iParam1, iParam2, iParam3);
}

void func_830(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1293346.f_20 < 20)
	{
		Global_1293346.f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1293346.f_20.f_1[iVar0 /*21*/] = { Global_1293346.f_20.f_1[iVar0 + 1 /*21*/] };
			iVar0++;
		}
	}
	func_831(&(Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/]));
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/] = iParam0;
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

void func_831(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_832(&(uParam0->f_4));
}

void func_832(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -142743235;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	StringCopy(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
}

