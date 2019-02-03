#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_20[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_21 = 0;
	char* sLocal_22[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	vector3 vLocal_34 = { 0f, 0f, 0f };
	vector3 vLocal_35 = { 0f, 0f, 0f };
	float fLocal_36 = 0f;
	float fLocal_37 = 0f;
	float fLocal_38 = 0f;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	vector3 vLocal_41 = { 0f, 0f, 0f };
	vector3 vLocal_42 = { 0f, 0f, 0f };
	vector3 vLocal_43 = { 0f, 0f, 0f };
	vector3 vLocal_44 = { 0f, 0f, 0f };
	vector3 vLocal_45 = { 0f, 0f, 0f };
	vector3 vLocal_46 = { 0f, 0f, 0f };
	float fLocal_47 = 0f;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	float fLocal_50 = 0f;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	float fLocal_65 = 0f;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	char cLocal_96[16] = "";
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	float fLocal_107 = 0f;
	float fLocal_108 = 0f;
	float fLocal_109 = 0f;
	float fLocal_110 = 0f;
	float fLocal_111 = 0f;
	float fLocal_112 = 0f;
	float fLocal_113 = 0f;
	float fLocal_114 = 0f;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	iLocal_26 = 1;
	bLocal_29 = true;
	bLocal_30 = true;
	fLocal_36 = 0f;
	fLocal_37 = 172f;
	fLocal_40 = 0.7f;
	iLocal_88 = 1200;
	iLocal_89 = 1200;
	iLocal_90 = 166;
	fLocal_107 = 0.5f;
	fLocal_108 = 0.85f;
	fLocal_109 = 0.5f;
	fLocal_110 = -0.25f;
	fLocal_111 = 0.25f;
	fLocal_112 = 0.3f;
	fLocal_113 = 0.3f;
	fLocal_114 = 0.075f;
	GAMEPLAY::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (unk_0x346268472B5F4E43() == 0)
	{
		fLocal_40 = 1f;
	}
	else
	{
		fLocal_40 = 0.7f;
	}
	if (!func_148())
	{
		Global_4267054 = 99;
		Global_4267055 = 99;
		iLocal_24 = 99;
	}
	else
	{
		Global_4267054 = 0;
		Global_4267055 = 0;
	}
	sLocal_19[0] = "No_Filter";
	sLocal_19[1] = "phone_cam1";
	sLocal_19[2] = "phone_cam2";
	sLocal_19[3] = "phone_cam3";
	sLocal_19[4] = "phone_cam4";
	sLocal_19[5] = "phone_cam5";
	sLocal_19[6] = "phone_cam6";
	sLocal_19[7] = "phone_cam7";
	sLocal_19[8] = "phone_cam8";
	sLocal_19[9] = "phone_cam9";
	sLocal_19[10] = "phone_cam10";
	sLocal_19[11] = "phone_cam11";
	sLocal_19[12] = "phone_cam12";
	sLocal_20[0] = "No_Border";
	sLocal_20[1] = "frame1";
	sLocal_20[2] = "frame2";
	sLocal_20[3] = "frame3";
	sLocal_20[4] = "frame4";
	sLocal_20[5] = "frame5";
	sLocal_20[6] = "frame6";
	sLocal_20[7] = "frame7";
	sLocal_20[8] = "frame8";
	sLocal_20[9] = "frame9";
	sLocal_20[10] = "frame10";
	sLocal_20[11] = "frame11";
	sLocal_20[12] = "frame12";
	sLocal_22[0] = "No_Expression";
	sLocal_22[1] = "mood_Aiming_1";
	sLocal_22[2] = "mood_Happy_1";
	sLocal_22[3] = "mood_smug_1";
	sLocal_22[4] = "mood_Injured_1";
	sLocal_22[5] = "mood_sulk_1";
	sLocal_22[6] = "mood_Angry_1";
	func_147();
	if (func_146(1, 1, !iLocal_31, 1))
	{
		iLocal_31 = 1;
	}
	func_145();
	iLocal_63 = AUDIO::GET_SOUND_ID();
	if (Global_14458 == 0)
	{
		fLocal_47 = 0.207f;
		fLocal_48 = 0.158f;
		fLocal_49 = 0.207f;
		fLocal_50 = 0.335f;
	}
	else
	{
		fLocal_47 = 0.24f;
		fLocal_48 = 0.258f;
		fLocal_49 = 0.24f;
		fLocal_50 = 0.435f;
	}
	Global_16855 = 0;
	Global_16856 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		{
			Global_16855 = 1;
		}
		if (GRAPHICS::_IS_NIGHTVISION_INACTIVE())
		{
			Global_16855 = 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::SET_EXCLUSIVE_PHONE_RELATIONSHIPS(PLAYER::PLAYER_PED_ID()), 0))
		{
			Global_16855 = 1;
		}
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			Global_16855 = 1;
		}
		if (PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()))
		{
			Global_16855 = 1;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (iLocal_82 == 1)
			{
				Global_16855 = 1;
			}
			iLocal_99 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if ((((ENTITY::GET_ENTITY_MODEL(iLocal_99) == joaat("rhino") || ENTITY::GET_ENTITY_MODEL(iLocal_99) == joaat("cutter")) || ENTITY::GET_ENTITY_MODEL(iLocal_99) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iLocal_99) == -1435527158) || (ENTITY::GET_ENTITY_MODEL(iLocal_99) == -212993243 && VEHICLE::_0xE33FFA906CE74880(iLocal_99, func_144(PLAYER::PLAYER_PED_ID(), 1))))
			{
				Global_16855 = 1;
			}
			else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_99, -1, 0) == PLAYER::PLAYER_PED_ID())
			{
				if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iLocal_99) > 0f)
				{
					if (!Global_71205)
					{
						if (!func_143())
						{
							AI::TASK_VEHICLE_TEMP_ACTION(PLAYER::PLAYER_PED_ID(), iLocal_99, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_71205)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), 0);
		}
	}
	GAMEPLAY::CLEAR_BIT(&Global_2383, 21);
	func_142(0);
	GAMEPLAY::SET_BIT(&Global_2383, 17);
	if (Global_14455 == 0)
	{
		func_141();
	}
	else
	{
		uLocal_91 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("camera_gallery");
		uLocal_92 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_91) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_92))
		{
			SYSTEM::WAIT(0);
			UNK1::_0xEB2D525B57F42B40();
			CONTROLS::DISABLE_CONTROL_ACTION(0, 25, 1);
		}
		if (Global_71205)
		{
			iLocal_95 = 2;
		}
		else
		{
			switch (func_140())
			{
				case 0:
					iLocal_95 = 2;
					break;
				
				case 2:
					iLocal_95 = 2;
					break;
				
				case 3:
					iLocal_95 = 2;
					break;
				}
		}
		func_139(uLocal_91, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(iLocal_95), -1082130432, -1082130432, -1082130432, -1082130432);
		func_138(uLocal_91, "CLOSE_SHUTTER");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14494, "DISPLAY_VIEW");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(16);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
	vLocal_41 = { Global_14473 };
	vLocal_42 = { Global_14466[Global_14458 /*3*/] };
	Global_16856 = 1;
	iLocal_69 = 1;
	iLocal_70 = 1;
	iLocal_71 = 1;
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 0;
	iLocal_76 = 0;
	if (Global_14513.f_1 > 3)
	{
		Global_14513.f_1 = 8;
	}
	if (iLocal_82 == 0)
	{
		GAMEPLAY::CLEAR_BIT(&Global_2385, 3);
	}
	func_136();
	GRAPHICS::_SET_2D_LAYER(4);
	if (NETWORK::_0x76BF03FADBF154F5())
	{
	}
	if (Global_4456448.f_147499)
	{
	}
	if (Global_4456448.f_147501 == 1)
	{
		iLocal_106 = 1;
	}
	if (iLocal_106 == 1)
	{
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		CONTROLS::SET_INPUT_EXCLUSIVE(0, Global_14482);
		CONTROLS::SET_INPUT_EXCLUSIVE(0, 186);
		UNK1::_0xEB2D525B57F42B40();
		CONTROLS::DISABLE_CONTROL_ACTION(0, 25, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
		if (func_135())
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_4268330, 2))
			{
				GAMEPLAY::SET_BIT(&Global_4268330, 2);
				func_139(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (!Global_106070.f_14023.f_81)
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_4268330, 13))
			{
				if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_2384, 28))
					{
						if ((iLocal_79 && iLocal_82 == 0) && !func_135())
						{
							GAMEPLAY::SET_BIT(&Global_4268330, 13);
							Global_106070.f_14023.f_81 = 1;
							func_134("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!UI::IS_PAUSE_MENU_ACTIVE())
		{
			if (Global_4456448.f_147498 == 0 && Global_4456448.f_147499 == 0)
			{
				UI::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
			}
			UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			func_133();
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, 1);
			}
			CONTROLS::DISABLE_CONTROL_ACTION(0, 44, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 47, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 91, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 92, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 68, 1);
			if (iLocal_100 == 0)
			{
				CONTROLS::SET_INPUT_EXCLUSIVE(0, Global_14486);
			}
			CONTROLS::SET_INPUT_EXCLUSIVE(0, Global_14483);
			if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && !func_135())
			{
				iLocal_81 = 1;
				Global_14513.f_1 = 3;
				GAMEPLAY::SET_GAME_PAUSED(0);
			}
			if (GAMEPLAY::IS_STUNT_JUMP_IN_PROGRESS())
			{
				Global_14513.f_1 = 3;
				GAMEPLAY::SET_GAME_PAUSED(0);
			}
			if (GAMEPLAY::IS_BIT_SET(Global_2384, 3))
			{
				Global_14513.f_1 = 3;
				GAMEPLAY::SET_GAME_PAUSED(0);
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (func_122())
				{
					Global_14513.f_1 = 3;
					GAMEPLAY::SET_GAME_PAUSED(0);
				}
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
				{
					Global_14513.f_1 = 3;
					GAMEPLAY::SET_GAME_PAUSED(0);
				}
				if ((PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					if (func_121())
					{
					}
					else
					{
						Global_14513.f_1 = 3;
						GAMEPLAY::SET_GAME_PAUSED(0);
					}
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					if (Global_71205 == 1)
					{
						Global_14513.f_1 = 3;
					}
				}
				if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) > 0.3f)
					{
						Global_14513.f_1 = 3;
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					func_120();
					iLocal_99 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iLocal_99) < 0f)
					{
						func_117(0);
					}
					if (iLocal_66 == 1)
					{
						if (iLocal_67 == 1)
						{
							if (!CAM::_0x1F2300CB7FA7B7F6())
							{
								func_117(0);
							}
						}
						else if (!CAM::_0x1F2300CB7FA7B7F6())
						{
							iLocal_67 = 1;
							SYSTEM::WAIT(0);
							UNK1::_0xEB2D525B57F42B40();
						}
					}
				}
				else if (Global_71205 == 0)
				{
					if (GAMEPLAY::IS_BIT_SET(Global_2383, 18))
					{
						func_116();
						if ((Global_14513 == 0 || Global_14513 == 1) || Global_14513 == 2)
						{
							if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
								{
								}
								else
								{
									Global_14513.f_1 = 3;
									GAMEPLAY::SET_GAME_PAUSED(0);
								}
							}
						}
					}
				}
			}
			if (iLocal_93)
			{
				func_115();
			}
			if (Global_14513.f_1 < 4)
			{
			}
			if (iLocal_103 == 0)
			{
				if (iLocal_54 == 0)
				{
					if (iLocal_55 == 0)
					{
						if (iLocal_62 == 0)
						{
							if (Global_14513.f_1 > 3)
							{
								if (iLocal_100)
								{
									func_113();
									if (Global_16860 == 0 && Global_16857 == 6)
									{
										UI::CLEAR_FLOATING_HELP(0, 1);
										UI::_REMOVE_LOADING_PROMPT();
										iLocal_100 = 0;
										func_112();
										if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
										{
											vLocal_34 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
										}
										func_111();
										iLocal_60++;
										if (func_148())
										{
											func_139(uLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
										}
										else
										{
											func_139(uLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
										}
										iLocal_83 = 0;
										iLocal_84 = 0;
										iLocal_85 = 0;
										iLocal_78 = 0;
										func_106();
									}
									if (Global_16857 == 0)
									{
										iLocal_100 = 0;
										UI::_REMOVE_LOADING_PROMPT();
										if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
										{
											vLocal_34 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
										}
										func_105();
										iLocal_83 = 0;
										iLocal_84 = 0;
										iLocal_85 = 0;
										iLocal_78 = 0;
										func_106();
										if (func_148())
										{
											if (Global_4267055 == 0)
											{
												if (!GAMEPLAY::IS_BIT_SET(Global_4268330, 2))
												{
													func_139(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!GAMEPLAY::IS_BIT_SET(Global_4268330, 2))
										{
											func_139(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
										}
										func_104();
										func_103(1);
									}
								}
								else if (Global_14513.f_1 != 9)
								{
									if (Global_16856 == 1)
									{
										if (Global_16855 == 0)
										{
											func_102();
										}
									}
									else if ((Global_2991 - Global_2990) > Global_2992)
									{
										if (CAM::IS_SCREEN_FADED_OUT() && func_101())
										{
											if (func_100() && iLocal_78)
											{
											}
											else if (iLocal_78 == 0)
											{
												GAMEPLAY::SET_GAME_PAUSED(0);
												AUDIO::STOP_SOUND(iLocal_63);
												iLocal_94 = 0;
												if (Global_16855 == 0)
												{
													func_111();
													Global_16855 = 1;
													UI::CLEAR_FLOATING_HELP(0, 1);
													iLocal_79 = 0;
													iLocal_69 = 1;
													iLocal_70 = 1;
													iLocal_71 = 1;
													iLocal_72 = 1;
													iLocal_73 = 1;
													iLocal_74 = 1;
													func_99(0, 0);
													func_103(0);
													iLocal_66 = 0;
													func_98();
													iLocal_93 = 0;
													func_96(0, 1);
													func_139(Global_14494, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
													func_94(1);
												}
											}
										}
										if (func_93(2, Global_14481, 0))
										{
											if (func_135())
											{
												if (Global_1654543 || Global_1312782)
												{
												}
												else if (func_100() && iLocal_78)
												{
												}
												else if (!func_101())
												{
													if (iLocal_78 == 0)
													{
														CAM::DO_SCREEN_FADE_OUT(500);
														func_92(1);
													}
												}
											}
											else if (func_100() && iLocal_78)
											{
											}
											else if (iLocal_78 == 0)
											{
												GAMEPLAY::SET_GAME_PAUSED(0);
												AUDIO::STOP_SOUND(iLocal_63);
												iLocal_94 = 0;
												if (Global_16855 == 0)
												{
													func_111();
													Global_16855 = 1;
													UI::CLEAR_FLOATING_HELP(0, 1);
													iLocal_79 = 0;
													iLocal_69 = 1;
													iLocal_70 = 1;
													iLocal_71 = 1;
													iLocal_72 = 1;
													iLocal_73 = 1;
													iLocal_74 = 1;
													func_99(0, 0);
													func_103(0);
													iLocal_66 = 0;
													func_98();
													iLocal_93 = 0;
													func_96(0, 1);
													func_139(Global_14494, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_52 == 0)
									{
										if (UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											func_91();
											iLocal_52 = 1;
										}
									}
									else if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_91();
										iLocal_52 = 0;
									}
									if (iLocal_53 == 0)
									{
										if (GAMEPLAY::IS_BIT_SET(Global_2383, 28))
										{
											func_91();
											iLocal_53 = 1;
										}
									}
									else if (!GAMEPLAY::IS_BIT_SET(Global_2383, 28))
									{
										func_91();
										iLocal_53 = 0;
									}
									if (Global_16855 == 1)
									{
										func_84();
									}
									else if (Global_14513.f_1 > 4)
									{
										if (iLocal_75 == 1 && iLocal_76 == 0)
										{
											func_80();
										}
										if (iLocal_75 == 0 && iLocal_76 == 1)
										{
											func_105();
											if (iLocal_87 == 1 || iLocal_87 == 0)
											{
												if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
												{
													if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
													{
														func_138(uLocal_91, "CLOSE_SHUTTER");
														iLocal_86 = GAMEPLAY::GET_GAME_TIMER();
														while (GAMEPLAY::GET_GAME_TIMER() < (iLocal_86 + iLocal_88) && Global_14513.f_1 > 3)
														{
															func_133();
															func_115();
															func_79();
															UNK1::_0xEB2D525B57F42B40();
															SYSTEM::WAIT(0);
														}
													}
												}
												if (func_148())
												{
													if (Global_4267055 == 0)
													{
														if (!GAMEPLAY::IS_BIT_SET(Global_4268330, 2))
														{
															func_139(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!GAMEPLAY::IS_BIT_SET(Global_4268330, 2))
												{
													func_139(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
												func_115();
												func_133();
												iLocal_83 = 0;
												iLocal_84 = 0;
												iLocal_85 = 0;
												iLocal_78 = 0;
												func_106();
												iLocal_87 = 0;
												func_138(uLocal_91, "OPEN_SHUTTER");
											}
											func_104();
											func_103(1);
											func_78();
										}
									}
									if (iLocal_94 == 1)
									{
										func_75();
									}
									if (iLocal_80)
									{
										if (SYSTEM::TIMERB() > 500)
										{
											iLocal_79 = 1;
											iLocal_80 = 0;
											GAMEPLAY::SET_BIT(&Global_2383, 18);
											if (Global_16855 == 0)
											{
												func_96(1, 1);
											}
										}
									}
									if (iLocal_78 == 0)
									{
										if (iLocal_79 && Global_16855 == 0)
										{
											if ((iLocal_81 == 0 && iLocal_76 == 0) && Global_16858 == 0)
											{
												func_10();
											}
										}
										else
										{
											func_79();
										}
									}
									else if (iLocal_75 == 0)
									{
										func_5();
									}
								}
							}
						}
					}
				}
				else
				{
					if (Global_14513.f_1 > 3)
					{
						if (Global_16856 == 1)
						{
							if (Global_16855 == 0)
							{
								func_102();
							}
						}
					}
					func_4();
				}
			}
			else
			{
				if (iLocal_105 == 1)
				{
					UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "CELL_CAM_FW_1", iLocal_102, "CELL_CAM_FW_2", 0, -1, "", "", 1, 0);
				}
				if (iLocal_105 == 2)
				{
					UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "ERROR_NO_SC_CAMERAPHONE", iLocal_102, "", 0, -1, "", "", 1, 0);
				}
				if (iLocal_105 == 6)
				{
					UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "SC_ERROR_BANNED", iLocal_102, "", 0, -1, "", "", 1, 0);
				}
				if (iLocal_105 == 3)
				{
					UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "ERROR_UPDATE_SC_CAMERAPHONE", iLocal_102, "", 0, -1, "", "", 1, 0);
				}
				if (iLocal_105 == 7)
				{
					if (GAMEPLAY::IS_XBOX360_VERSION() || GAMEPLAY::IS_DURANGO_VERSION())
					{
						UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_102, "", 0, -1, "", "", 1, 0);
					}
					if (GAMEPLAY::IS_PS3_VERSION() || GAMEPLAY::IS_ORBIS_VERSION())
					{
						UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_102, "", 0, -1, "", "", 1, 0);
					}
					if (GAMEPLAY::IS_PC_VERSION())
					{
						UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "CELL_CAM_TEMP_30", iLocal_102, "", 0, -1, "", "", 1, 0);
					}
				}
				if (iLocal_105 == 4)
				{
					UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "CELL_CAM_CCW_1", iLocal_102, "CELL_CAM_CCW_2", 0, -1, "", "", 1, 0);
				}
				if (iLocal_105 == 5)
				{
					iVar0 = NETWORK::_0x9614B71F8ADB982B();
					switch (iVar0)
					{
						case -1:
							UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "HUD_AGE_I", iLocal_102, "", 0, -1, "", "", 1, 0);
							break;
						
						case 0:
							UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_102, "", 0, -1, "", "", 1, 0);
							break;
						
						case 1:
							UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "HUD_AGE_C", iLocal_102, "", 0, -1, "", "", 1, 0);
							break;
						
						case 2:
							UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "HUD_AGE_T", iLocal_102, "", 0, -1, "", "", 1, 0);
							break;
						
						default:
							UI::_SET_WARNING_MESSAGE_2("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_102, "", 0, -1, "", "", 1, 0);
							break;
						}
				}
				if (iLocal_105 == 0)
				{
				}
				if (iLocal_105 == 2 || iLocal_105 == 3)
				{
					if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 202))
					{
						iLocal_103 = 0;
						iLocal_105 = 0;
						func_96(0, 1);
					}
					if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201))
					{
						iLocal_104 = 1;
					}
					if (iLocal_104 == 1)
					{
						if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 201))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_96(0, 1);
							iLocal_104 = 0;
							UI::_0x9E778248D6685FE0("Gallery");
							UI::_0x75D3691713C3B05A();
						}
					}
				}
				else if (iLocal_105 == 7)
				{
					if (GAMEPLAY::IS_ORBIS_VERSION())
					{
						if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_96(0, 1);
							iLocal_62 = 0;
						}
					}
					else if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 202))
					{
						iLocal_103 = 0;
						iLocal_105 = 0;
						func_96(0, 1);
						iLocal_62 = 0;
					}
					if (!GAMEPLAY::IS_ORBIS_VERSION())
					{
						if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, Global_14485))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_96(0, 1);
							if (GAMEPLAY::IS_BIT_SET(Global_2384, 28))
							{
								iLocal_62 = 0;
							}
							else
							{
								iLocal_62 = 2;
							}
							iLocal_58 = GAMEPLAY::GET_GAME_TIMER();
							PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(1);
						}
					}
				}
				else if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201))
				{
					iLocal_103 = 0;
					iLocal_105 = 0;
					func_96(0, 1);
				}
			}
		}
		iLocal_59 = GAMEPLAY::GET_GAME_TIMER();
		if (func_135())
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_4268330, 2))
			{
				GAMEPLAY::SET_BIT(&Global_4268330, 2);
				func_139(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (func_3() || iLocal_81)
		{
			func_1(0);
			func_99(0, 0);
			func_103(0);
			iLocal_66 = 0;
			func_98();
			Global_16855 = 0;
			Global_16856 = 0;
			Global_16858 = 0;
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_91);
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_92);
			GAMEPLAY::SET_GAME_PAUSED(0);
			if (Global_14683 == 1)
			{
				GAMEPLAY::SET_BIT(&Global_2383, 17);
			}
			else
			{
				GAMEPLAY::CLEAR_BIT(&Global_2383, 17);
			}
			UI::CLEAR_FLOATING_HELP(0, 1);
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), 1);
			GAMEPLAY::CLEAR_BIT(&Global_2385, 3);
			GAMEPLAY::CLEAR_BIT(&Global_4268330, 3);
			UI::RESET_HUD_COMPONENT_VALUES(15);
			Global_16859 = 1;
			AUDIO::STOP_SOUND(iLocal_63);
			AUDIO::RELEASE_SOUND_ID(iLocal_63);
			UI::_REMOVE_LOADING_PROMPT();
			func_98();
			MOBILE::_0xA2CCBE62CD4C91A4(0);
			unk_0x375A706A5C2FD084(0);
			MOBILE::_0x1B0B4AEED5B9B41C(1f);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
				PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
			}
			if (Global_4267055 > 0 && Global_4267055 < 13)
			{
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_20[Global_4267055]);
			}
			GAMEPLAY::CLEAR_BIT(&Global_2383, 18);
			func_96(0, 1);
			if (func_146(0, 1, iLocal_31, 1))
			{
				iLocal_31 = 0;
			}
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			MOBILE::_SET_PHONE_LEAN(1);
		}
		else if (Global_14513.f_1 > 3)
		{
			MOBILE::_SET_PHONE_LEAN(0);
		}
	}
}

int func_2()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71205)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4268544 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_3()
{
	if (((Global_14513.f_1 == 1 || Global_14513.f_1 == 3) || Global_14513.f_1 == 0) || Global_14457 == 1)
	{
		Global_14500 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	iLocal_57 = GRAPHICS::_0xF5BED327CEA362B1(0);
	switch (iLocal_57)
	{
		case 0:
			iLocal_54 = 0;
			iLocal_60 = GRAPHICS::_0x473151EBC762C6DA();
			iLocal_61 = GRAPHICS::_0xDC54A7AF8B3A14EF();
			if (iLocal_55 == 1)
			{
				if (iLocal_78 == 0)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_91))
					{
						if (func_148())
						{
							if (Global_4267055 == 0)
							{
								if (!GAMEPLAY::IS_BIT_SET(Global_4268330, 2))
								{
									func_139(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							func_139(uLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!GAMEPLAY::IS_BIT_SET(Global_4268330, 2))
							{
								func_139(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							func_139(uLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_91))
				{
					func_139(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_139(uLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
				}
				iLocal_55 = 0;
			}
			UI::_REMOVE_LOADING_PROMPT();
			break;
		
		case 1:
			if (!UI::_IS_LOADING_PROMPT_BEING_DISPLAYED())
			{
				UI::_SET_LOADING_PROMPT_TEXT_ENTRY("CELL_SPINNER2");
				UI::_SHOW_LOADING_PROMPT(1);
			}
			break;
		
		case 2:
			if (GAMEPLAY::IS_BIT_SET(Global_2384, 28))
			{
				iLocal_54 = 0;
				iLocal_60 = 0;
				iLocal_61 = 0;
			}
			else
			{
				Global_14513.f_1 = 3;
				Global_16859 = 1;
			}
			UI::_REMOVE_LOADING_PROMPT();
			break;
	}
}

void func_5()
{
	if (func_93(2, Global_14482, 0))
	{
		func_1(0);
		if (GAMEPLAY::IS_BIT_SET(Global_2384, 28))
		{
			GAMEPLAY::SET_GAME_PAUSED(0);
			SYSTEM::SETTIMERB(0);
			func_112();
			iLocal_78 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				vLocal_34 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			}
			func_111();
			iLocal_87 = 1;
		}
		else if (func_9())
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2384, 14))
			{
				func_134("CELL_299", -1);
			}
			else
			{
				func_111();
				func_8();
			}
		}
		else
		{
			iLocal_103 = 1;
			func_96(1, 1);
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2383, 22))
	{
		func_1(0);
		while (SYSTEM::TIMERA() < 2000)
		{
			SYSTEM::WAIT(0);
			func_133();
			UNK1::_0xEB2D525B57F42B40();
			func_79();
			func_120();
			func_115();
		}
		GAMEPLAY::SET_GAME_PAUSED(0);
		func_112();
		SYSTEM::SETTIMERB(0);
		iLocal_78 = 0;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			vLocal_34 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		}
		func_106();
		func_111();
	}
	if (func_93(2, Global_14486, 0))
	{
		func_1(0);
		if (func_100() || GAMEPLAY::IS_BIT_SET(Global_2384, 28))
		{
		}
		else
		{
			GAMEPLAY::SET_GAME_PAUSED(0);
			SYSTEM::SETTIMERB(0);
			iLocal_87 = 1;
			func_112();
			iLocal_78 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				vLocal_34 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			}
			func_111();
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2383, 28))
	{
		if (func_93(2, Global_14485, 0))
		{
			func_1(0);
			GAMEPLAY::SET_GAME_PAUSED(0);
			GRAPHICS::_0x1072F115DAB0717E(0, 0);
			SYSTEM::WAIT(0);
			UNK1::_0xEB2D525B57F42B40();
			func_133();
			SYSTEM::WAIT(0);
			UNK1::_0xEB2D525B57F42B40();
			func_133();
			GRAPHICS::_0xD801CC02177FA3F1();
			GRAPHICS::_0x6A12D88881435DCA();
			Global_16859 = 1;
			iLocal_94 = 0;
			iLocal_77 = 0;
			func_96(0, 1);
			Global_16855 = 1;
			UI::CLEAR_FLOATING_HELP(0, 1);
			iLocal_79 = 0;
			iLocal_69 = 1;
			iLocal_70 = 1;
			iLocal_71 = 1;
			iLocal_72 = 1;
			iLocal_73 = 1;
			iLocal_74 = 1;
			func_6();
			iLocal_78 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				vLocal_34 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			}
			func_99(0, 0);
			func_103(0);
			iLocal_66 = 0;
			func_98();
			if (!Global_2524719.f_6184)
			{
				GAMEPLAY::SET_BIT(&Global_2383, 9);
			}
			iLocal_93 = 0;
			func_139(Global_14494, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_6()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_14502, 1);
		func_7();
	}
}

void func_7()
{
	if (func_2())
	{
		MOBILE::_MOVE_FINGER(5);
	}
}

void func_8()
{
	iLocal_100 = 1;
	Global_16860 = 1;
	UI::CLEAR_FLOATING_HELP(0, 1);
}

int func_9()
{
	if (iLocal_58 == iLocal_59)
	{
		if (iLocal_56)
		{
			iLocal_56 = 1;
		}
	}
	if (Global_14513.f_1 < 4)
	{
		return 0;
	}
	if (iLocal_60 == iLocal_61 || iLocal_60 > iLocal_61)
	{
		iLocal_105 = 1;
		iLocal_102 = 2;
		return 0;
	}
	return 1;
}

void func_10()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		iVar0 = 179;
		iVar1 = 21;
	}
	else
	{
		iVar0 = 228;
		iVar1 = 229;
	}
	if (iLocal_82)
	{
		func_70();
		func_66();
		func_65();
		fLocal_36 = CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();
		fLocal_37 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
		if (iLocal_84 == 0)
		{
			if (CONTROLS::IS_CONTROL_PRESSED(2, iVar0) && !CONTROLS::IS_CONTROL_PRESSED(2, iVar1))
			{
				iLocal_84 = 1;
				func_139(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_139(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (GAMEPLAY::IS_BIT_SET(Global_2383, 28))
				{
					func_63(uLocal_92, "SET_DATA_SLOT", 0f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
					func_63(uLocal_92, "SET_DATA_SLOT", 1f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, true), func_62());
					func_63(uLocal_92, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 178, true), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_63(uLocal_92, "SET_DATA_SLOT", 0f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_280");
					func_63(uLocal_92, "SET_DATA_SLOT", 1f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
					func_63(uLocal_92, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 178, true), "CELL_CAM_SELFIE_2");
				}
				func_61();
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uLocal_92, "SET_MAX_WIDTH");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fLocal_40);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				func_139(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!CONTROLS::IS_CONTROL_PRESSED(2, iVar0) || CONTROLS::IS_CONTROL_PRESSED(2, iVar1))
		{
			iLocal_84 = 0;
			func_106();
		}
		if (iLocal_85 == 0)
		{
			if (CONTROLS::IS_CONTROL_PRESSED(2, iVar1) && !CONTROLS::IS_CONTROL_PRESSED(2, iVar0))
			{
				iLocal_85 = 1;
				func_139(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_139(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (GAMEPLAY::IS_BIT_SET(Global_2383, 28))
				{
					func_63(uLocal_92, "SET_DATA_SLOT", 0f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
					func_63(uLocal_92, "SET_DATA_SLOT", 1f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, true), func_62());
				}
				else if (!func_135())
				{
					func_63(uLocal_92, "SET_DATA_SLOT", 0f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_280");
					func_63(uLocal_92, "SET_DATA_SLOT", 1f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
				}
				else
				{
					func_63(uLocal_92, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_280");
					func_63(uLocal_92, "SET_DATA_SLOT", 3f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
				}
				func_60();
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uLocal_92, "SET_MAX_WIDTH");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fLocal_40);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				func_139(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!CONTROLS::IS_CONTROL_PRESSED(2, iVar1) || CONTROLS::IS_CONTROL_PRESSED(2, iVar0))
		{
			iLocal_85 = 0;
			func_106();
		}
	}
	else
	{
		CONTROLS::ENABLE_CONTROL_ACTION(0, 2, 1);
		CONTROLS::ENABLE_CONTROL_ACTION(0, 1, 1);
	}
	if (CONTROLS::_0x6CD79468A1E595C6(2))
	{
		func_106();
	}
	func_120();
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, 1);
	}
	if (func_135())
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_4268330, 2))
		{
			GAMEPLAY::SET_BIT(&Global_4268330, 2);
			func_139(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	if ((CONTROLS::IS_CONTROL_JUST_PRESSED(2, 183) && iLocal_106 == 0) && !func_135())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14502, 1);
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_4268330, 2))
				{
					GAMEPLAY::CLEAR_BIT(&Global_4268330, 2);
					if (!GAMEPLAY::IS_BIT_SET(Global_4268330, 2))
					{
						func_139(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					GAMEPLAY::SET_BIT(&Global_4268330, 2);
					func_139(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
		}
	}
	if (iLocal_82)
	{
		if (iLocal_83 == 1)
		{
			iLocal_83 = 0;
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uLocal_91, "SET_FOCUS_LOCK");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(false);
			func_59("CELL_FOCUS");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
		if (!func_58(14))
		{
			if (GAMEPLAY::IS_BIT_SET(Global_4268330, 10))
			{
				if ((Global_71205 == 0 && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("pi_menu")) > 0) && func_57())
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uLocal_91, "SET_FOCUS_LOCK");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_ACTTL");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(UI::_GET_LABEL_TEXT(&Global_4269246));
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(false);
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
					GAMEPLAY::CLEAR_BIT(&Global_4268330, 10);
				}
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(Global_4268330, 10))
		{
			GAMEPLAY::CLEAR_BIT(&Global_4268330, 10);
		}
		iLocal_33 = GAMEPLAY::GET_GAME_TIMER();
		if ((iLocal_33 - iLocal_32) > 1500)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				vLocal_35 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(vLocal_35, vLocal_34, true) > 5f)
				{
					Global_14513.f_1 = 3;
					GAMEPLAY::SET_GAME_PAUSED(0);
				}
				iLocal_32 = GAMEPLAY::GET_GAME_TIMER();
			}
		}
	}
	else if (iLocal_83)
	{
		if (!CONTROLS::IS_CONTROL_PRESSED(0, 182) && !func_135())
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14502, 1);
			iLocal_83 = 0;
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uLocal_91, "SET_FOCUS_LOCK");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(false);
			func_59("CELL_FOCUS");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
	}
	else if (CONTROLS::IS_CONTROL_PRESSED(0, 182) && !func_135())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14502, 1);
		iLocal_83 = 1;
		if (!func_58(14))
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uLocal_91, "SET_FOCUS_LOCK");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
			func_59("CELL_FOCUS");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
	}
	if (func_148())
	{
		if ((CONTROLS::IS_CONTROL_JUST_PRESSED(2, 186) && iLocal_106 == 0) && !func_135())
		{
			if (iLocal_82)
			{
				iLocal_24++;
				if (iLocal_24 > 0 && iLocal_24 < 7)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14502, 1);
						PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
						PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
						if (Global_14513 == 0)
						{
							iVar4 = 0;
							iVar2 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 1);
							if (iVar3 != -1)
							{
								iVar4 = 1;
							}
							if (iVar4 == 1)
							{
								if ((((iLocal_24 == 2 || iLocal_24 == 3) || iLocal_24 == 4) || iLocal_24 == 8) || iLocal_24 == 9)
								{
									if (iVar2 == -1 && iVar3 > -1)
									{
										if (iLocal_24 == 3)
										{
											PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_22[iLocal_24], 0);
										}
									}
								}
								else
								{
									PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_22[iLocal_24], 0);
								}
							}
							else
							{
								PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_22[iLocal_24], 0);
							}
						}
						else
						{
							PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_22[iLocal_24], 0);
						}
					}
				}
				if (iLocal_24 == 7 || iLocal_24 > 7)
				{
					iLocal_24 = 0;
				}
				if (iLocal_24 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
					{
						PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
						PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14502, 1);
					}
				}
			}
		}
		if ((CONTROLS::IS_CONTROL_JUST_PRESSED(2, 185) && iLocal_106 == 0) && !func_135())
		{
			if (iLocal_82)
			{
				if (bLocal_29 == 1)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14502, 1);
					if (iLocal_28 == 0)
					{
						iLocal_28 = 1;
						iLocal_27 = 1;
						if (GAMEPLAY::ARE_STRINGS_EQUAL(sLocal_19[Global_4267054], "phone_cam12DUMMY"))
						{
						}
						else
						{
							MOBILE::_0xA2CCBE62CD4C91A4(1);
							unk_0x375A706A5C2FD084(1);
						}
					}
					else
					{
						iLocal_28 = 0;
						iLocal_27 = 0;
						MOBILE::_0xA2CCBE62CD4C91A4(0);
						unk_0x375A706A5C2FD084(0);
					}
				}
			}
			else if (bLocal_30 == 1)
			{
				if (iLocal_27 == 0)
				{
					iLocal_27 = 1;
					iLocal_28 = 1;
					MOBILE::_0xA2CCBE62CD4C91A4(1);
					unk_0x375A706A5C2FD084(1);
				}
				else
				{
					iLocal_27 = 0;
					iLocal_28 = 0;
					MOBILE::_0xA2CCBE62CD4C91A4(0);
					unk_0x375A706A5C2FD084(0);
				}
			}
		}
	}
	if (iLocal_26 == 1 && !func_135())
	{
		if (CONTROLS::IS_CONTROL_JUST_PRESSED(0, 172) && iLocal_106 == 0)
		{
			if (func_148())
			{
				Global_4267055++;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14502, 1);
			}
			if (Global_4267055 == 13)
			{
				func_103(0);
				MOBILE::_0x1B0B4AEED5B9B41C(1f);
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_20[(Global_4267055 - 1)]);
				Global_4267055 = 0;
				func_56();
				if (iLocal_21 == 1)
				{
					GAMEPLAY::CLEAR_BIT(&Global_4268330, 2);
					iLocal_21 = 0;
					func_139(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_4267055 > 0 && Global_4267055 < 13)
			{
				iLocal_26 = 0;
				iLocal_25 = 0;
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sLocal_20[Global_4267055], 0);
			}
		}
	}
	if (Global_4267055 > 0)
	{
		if (iLocal_26 == 0)
		{
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sLocal_20[Global_4267055]))
			{
				iLocal_25 = 1;
				iLocal_26 = 1;
				if (!GRAPHICS::_0xBCEDB009461DA156())
				{
					func_103(1);
				}
				if (iLocal_21 == 0)
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_4268330, 2))
					{
						iLocal_21 = 1;
					}
				}
				GAMEPLAY::SET_BIT(&Global_4268330, 2);
				func_139(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				MOBILE::_0x1B0B4AEED5B9B41C(0.25f);
				GRAPHICS::_0x27FEB5254759CDE3(sLocal_20[Global_4267055], 0);
			}
		}
		if (iLocal_25 == 1)
		{
			if (Global_4267055 == 1 || Global_4267055 == 3)
			{
			}
			if (Global_4267055 == 2 || Global_4267055 == 4)
			{
			}
		}
	}
	if ((CONTROLS::IS_CONTROL_JUST_PRESSED(0, 173) && iLocal_106 == 0) && !func_135())
	{
		if (func_148())
		{
			func_98();
			Global_4267054++;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14502, 1);
		}
		if (Global_4267054 == 13)
		{
			Global_4267054 = 0;
		}
		if (Global_4267054 == 0)
		{
			if (func_148())
			{
				func_98();
			}
		}
		else
		{
			func_104();
		}
		func_55();
	}
	if ((CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, 184) && iLocal_106 == 0) && !func_135())
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				vLocal_34 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14502, 1);
				func_139(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_138(uLocal_91, "CLOSE_SHUTTER");
				iLocal_86 = GAMEPLAY::GET_GAME_TIMER();
				while (GAMEPLAY::GET_GAME_TIMER() < (iLocal_86 + iLocal_90) && Global_14513.f_1 > 3)
				{
					func_133();
					func_115();
					func_79();
					UNK1::_0xEB2D525B57F42B40();
					SYSTEM::WAIT(0);
				}
				if (iLocal_82 == 0)
				{
					AUDIO::STOP_SOUND(iLocal_63);
					iLocal_82 = 1;
					func_54(1);
					func_53();
					GAMEPLAY::SET_BIT(&Global_2385, 3);
					iLocal_32 = GAMEPLAY::GET_GAME_TIMER();
				}
				else
				{
					iLocal_84 = 0;
					iLocal_85 = 0;
					func_54(0);
					iLocal_82 = 0;
					GAMEPLAY::CLEAR_BIT(&Global_2385, 3);
				}
				iLocal_86 = GAMEPLAY::GET_GAME_TIMER();
				while (GAMEPLAY::GET_GAME_TIMER() < (iLocal_86 + iLocal_88) && Global_14513.f_1 > 3)
				{
					func_133();
					func_115();
					func_79();
					UNK1::_0xEB2D525B57F42B40();
					SYSTEM::WAIT(0);
				}
				func_138(uLocal_91, "OPEN_SHUTTER");
				if (func_148())
				{
					if (Global_4267055 == 0)
					{
						if (!GAMEPLAY::IS_BIT_SET(Global_4268330, 2))
						{
							func_139(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!GAMEPLAY::IS_BIT_SET(Global_4268330, 2))
				{
					func_139(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_115();
				func_133();
				if (GAMEPLAY::IS_BIT_SET(Global_2383, 28))
				{
					StringCopy(&cLocal_96, "CELL_296", 16);
					func_51();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_295", 16);
					func_27();
				}
			}
		}
	}
	if (iLocal_82 == 0)
	{
		if (iLocal_64 == 0)
		{
			if (CONTROLS::IS_CONTROL_JUST_PRESSED(0, 40) || CONTROLS::IS_CONTROL_JUST_PRESSED(0, 41))
			{
				fLocal_65 = CAM::_GET_GAMEPLAY_CAM_ZOOM();
				if (fLocal_65 > 1f && fLocal_65 < 4.5f)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iLocal_63))
					{
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_63, "Camera_Zoom", &Global_14502, 1);
					}
				}
				else
				{
					AUDIO::STOP_SOUND(iLocal_63);
				}
				iLocal_64 = 1;
			}
		}
		else if (CONTROLS::IS_CONTROL_PRESSED(0, 40) || CONTROLS::IS_CONTROL_PRESSED(0, 41))
		{
			fLocal_65 = CAM::_GET_GAMEPLAY_CAM_ZOOM();
			if (fLocal_65 > 1f && fLocal_65 < 4.5f)
			{
				if (AUDIO::HAS_SOUND_FINISHED(iLocal_63))
				{
					AUDIO::PLAY_SOUND_FRONTEND(iLocal_63, "Camera_Zoom", &Global_14502, 1);
				}
			}
			else
			{
				AUDIO::STOP_SOUND(iLocal_63);
			}
		}
		else
		{
			AUDIO::STOP_SOUND(iLocal_63);
		}
	}
	if (func_93(2, Global_14482, 0))
	{
		fLocal_38 = CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();
		fLocal_39 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
		GRAPHICS::_0x1072F115DAB0717E(0, 0);
		GAMEPLAY::SET_BIT(&Global_2383, 21);
		AUDIO::STOP_SOUND(iLocal_63);
		iLocal_78 = 1;
		func_139(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_139(uLocal_91, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Camera_Shoot", &Global_14502, 1);
		func_138(uLocal_91, "CLOSE_SHUTTER");
		vLocal_43 = { -90.3f, 0f, 90f };
		MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_43, 0);
		if (!func_148())
		{
			func_98();
		}
		Global_16858 = 1;
		UI::CLEAR_FLOATING_HELP(0, 1);
		while (Global_16857 < 6 && Global_14513.f_1 > 3)
		{
			func_133();
			func_115();
			func_79();
			func_120();
			UNK1::_0xEB2D525B57F42B40();
			SYSTEM::WAIT(0);
		}
		MOBILE::CELL_CAM_ACTIVATE(0, 0);
		if (Global_14455)
		{
			func_1(1);
		}
		iLocal_86 = GAMEPLAY::GET_GAME_TIMER();
		while (GAMEPLAY::GET_GAME_TIMER() < (iLocal_86 + iLocal_89) && Global_14513.f_1 > 3)
		{
			func_133();
			func_115();
			func_79();
			UNK1::_0xEB2D525B57F42B40();
			SYSTEM::WAIT(0);
		}
		SYSTEM::SETTIMERA(0);
		func_138(uLocal_91, "OPEN_SHUTTER");
		GAMEPLAY::CLEAR_BIT(&Global_2383, 21);
		func_106();
		if (Global_14513.f_1 > 3)
		{
			if (Global_71205)
			{
				func_20(1086, 1, -1);
				func_19();
				func_16(23, 0);
			}
			else
			{
				switch (func_11())
				{
					case 0:
						STATS::STAT_INCREMENT(joaat("sp0_no_photos_taken"), 1f);
						break;
					
					case 1:
						STATS::STAT_INCREMENT(joaat("sp1_no_photos_taken"), 1f);
						break;
					
					case 2:
						STATS::STAT_INCREMENT(joaat("sp2_no_photos_taken"), 1f);
						break;
				}
				func_19();
			}
			func_103(0);
		}
		func_115();
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2383, 28))
	{
		if (func_93(2, Global_14485, 0))
		{
			GRAPHICS::_0x1072F115DAB0717E(0, 0);
			SYSTEM::WAIT(0);
			UNK1::_0xEB2D525B57F42B40();
			func_133();
			SYSTEM::WAIT(0);
			UNK1::_0xEB2D525B57F42B40();
			func_133();
			GRAPHICS::_0xD801CC02177FA3F1();
			GRAPHICS::_0x6A12D88881435DCA();
			Global_16859 = 1;
			iLocal_94 = 0;
			iLocal_77 = 1;
			Global_16855 = 1;
			UI::CLEAR_FLOATING_HELP(0, 1);
			iLocal_79 = 0;
			iLocal_69 = 1;
			iLocal_70 = 1;
			iLocal_71 = 1;
			iLocal_72 = 1;
			iLocal_73 = 1;
			iLocal_74 = 1;
			func_6();
			iLocal_78 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				vLocal_34 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			}
			func_99(0, 0);
			func_103(0);
			iLocal_66 = 0;
			func_98();
			if (!Global_2524719.f_6184)
			{
				GAMEPLAY::SET_BIT(&Global_2383, 9);
			}
			GAMEPLAY::SET_GAME_PAUSED(0);
			iLocal_93 = 0;
			func_139(Global_14494, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

int func_11()
{
	func_12();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_12()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_15(Global_106070.f_2355.f_539.f_4301) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_14(PLAYER::PLAYER_PED_ID());
			if (func_13(iVar0) && (!func_58(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_13(Global_106070.f_2355.f_539.f_4301))
				{
					Global_106070.f_2355.f_539.f_4302 = Global_106070.f_2355.f_539.f_4301;
				}
				Global_106070.f_2355.f_539.f_4303 = iVar0;
				Global_106070.f_2355.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_106070.f_2355.f_539.f_4301 != 145)
			{
				Global_106070.f_2355.f_539.f_4303 = Global_106070.f_2355.f_539.f_4301;
			}
			return;
		}
	}
	Global_106070.f_2355.f_539.f_4301 = 145;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_16(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_18(iParam0, iParam1))
	{
		iVar0 = func_17();
		Global_2458086[iVar0] = iParam0;
	}
}

int func_17()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2458086[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_18(int iParam0, var uParam1)
{
	if (Global_1312845)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312857) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_19()
{
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 1;
	iLocal_76 = 0;
	Global_14450 = { Global_14466[Global_14458 /*3*/] };
	func_96(0, 1);
	func_99(0, 0);
	func_103(0);
	iLocal_66 = 0;
	func_98();
	if (!GAMEPLAY::IS_BIT_SET(Global_2384, 28))
	{
		if (NETWORK::_0x76BF03FADBF154F5() == 0)
		{
			if (GAMEPLAY::IS_XBOX360_VERSION())
			{
				if (iLocal_68 == 0)
				{
					iLocal_68 = 1;
				}
			}
		}
	}
}

void func_20(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_24(iParam0, func_25(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_23(iParam0))
	{
		func_22(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_21(iParam0, iVar0, iParam2, 1);
	}
}

void func_21(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2535519[iParam0 /*3*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1378885[func_25(uParam2)] = iParam1;
			break;
		
		case 788:
			Global_1378891[func_25(uParam2)] = iParam1;
			break;
		
		case 789:
			Global_1378897[func_25(uParam2)] = iParam1;
			break;
		
		case 790:
			Global_1378903[func_25(uParam2)] = iParam1;
			break;
		
		case 777:
			Global_1378861[func_25(uParam2)] = iParam1;
			break;
		
		case 778:
			Global_1378867[func_25(uParam2)] = iParam1;
			break;
		
		case 779:
			Global_1378873[func_25(uParam2)] = iParam1;
			break;
		
		case 780:
			Global_1378879[func_25(uParam2)] = iParam1;
			break;
		
		case 767:
			Global_1378837[func_25(uParam2)] = iParam1;
			break;
		
		case 768:
			Global_1378843[func_25(uParam2)] = iParam1;
			break;
		
		case 769:
			Global_1378849[func_25(uParam2)] = iParam1;
			break;
		
		case 770:
			Global_1378855[func_25(uParam2)] = iParam1;
			break;
		
		case 757:
			Global_1378909[func_25(uParam2)] = iParam1;
			break;
		
		case 758:
			Global_1378915[func_25(uParam2)] = iParam1;
			break;
		
		case 759:
			Global_1378921[func_25(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_1378927[func_25(uParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1378933[func_25(uParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1378939[func_25(uParam2)] = iParam1;
			break;
		
		case 639:
			Global_1378945[func_25(uParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1378951[func_25(uParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2568104[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2568104[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2568104[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2568104[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 8527:
			Global_2568229[func_25(uParam2)] = iParam1;
			break;
		
		case 764:
			Global_1378957[func_25(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1378963[func_25(uParam2)] = iParam1;
			break;
		
		case 766:
			Global_1378969[func_25(uParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1378975[func_25(uParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2568165[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2568165[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2568165[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2568165[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2568165[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2568232[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2568232[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2568232[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2568232[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2568232[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2568248[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2568248[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2568248[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2568248[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2568248[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2568165[5 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2568104[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2568264[func_25(uParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2568273[func_25(uParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2568267[func_25(uParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2568276[func_25(uParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2568270[func_25(uParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2568279[func_25(uParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2568282[func_25(uParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2568165[6 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2568104[5 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2568165[7 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2568104[6 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2568165[8 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2568104[7 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2568165[9 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2568104[8 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2568165[10 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2568104[9 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2568165[11 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2568104[10 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2568165[12 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2568104[11 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2568165[13 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2568104[12 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2568165[14 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2568104[13 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2568165[15 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2568104[14 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2568165[16 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2568104[15 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2568165[17 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2568104[16 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2568104[17 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2568104[18 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2568104[19 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_22(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_23(int iParam0)
{
	if (Global_1378818)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 8527:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
				return 1;
				break;
			}
	}
	return 0;
}

int func_24(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_25(uParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_25(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_26();
		if (iVar1 > -1)
		{
			Global_2535232 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2535232 = 1;
		}
	}
	return iVar0;
}

var func_26()
{
	return Global_1312736;
}

void func_27()
{
	if (iLocal_106 == 1)
	{
		func_50();
		return;
	}
	if (iLocal_84 == 0 && iLocal_85 == 0)
	{
		func_139(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_139(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		if (!func_135())
		{
			func_63(uLocal_92, "SET_DATA_SLOT", 1f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
			func_63(uLocal_92, "SET_DATA_SLOT", 0f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_280");
		}
		else
		{
			func_63(uLocal_92, "SET_DATA_SLOT", 3f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
			func_63(uLocal_92, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_280");
		}
		if (iLocal_82)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (CONTROLS::_IS_INPUT_DISABLED(2) || GAMEPLAY::IS_ORBIS_VERSION())
					{
						func_63(uLocal_92, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_63(uLocal_92, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_71205 == 0 && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("pi_menu")) > 0) && func_57())
				{
					func_48();
				}
				else
				{
					if (CONTROLS::_IS_INPUT_DISABLED(2) || GAMEPLAY::IS_ORBIS_VERSION())
					{
						func_63(uLocal_92, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_63(uLocal_92, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
					}
					func_63(uLocal_92, "SET_DATA_SLOT", 3f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, true), "CELL_GRID");
					func_63(uLocal_92, "SET_DATA_SLOT", 4f, CONTROLS::_0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_148())
					{
						func_47(5f);
						func_46(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_29)
							{
								func_63(uLocal_92, "SET_DATA_SLOT", 8f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
							}
						}
						else if (bLocal_29)
						{
							func_63(uLocal_92, "SET_DATA_SLOT", 7f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (!func_135())
					{
						func_63(uLocal_92, "SET_DATA_SLOT", 2f, CONTROLS::_0x80C2FD58D720C801(0, 1, true), "CELL_285");
						func_63(uLocal_92, "SET_DATA_SLOT", 3f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, true), "CELL_GRID");
						func_63(uLocal_92, "SET_DATA_SLOT", 4f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, true), "CELL_284");
					}
					else
					{
						func_63(uLocal_92, "SET_DATA_SLOT", 0f, CONTROLS::_0x80C2FD58D720C801(0, 1, true), "CELL_285");
						if (!CONTROLS::_IS_INPUT_DISABLED(0))
						{
							func_63(uLocal_92, "SET_DATA_SLOT", 1f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 210, true), "CELL_284");
						}
						else
						{
							func_63(uLocal_92, "SET_DATA_SLOT", 1f, CONTROLS::_0x80C2FD58D720C801(0, 29, true), "CELL_284");
						}
					}
					if (!func_135())
					{
						if (func_148())
						{
							func_47(6f);
							func_46(7f);
							if (bLocal_30)
							{
								func_63(uLocal_92, "SET_DATA_SLOT", 3f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 182, true), "CELL_FOCUS");
							}
							func_63(uLocal_92, "SET_DATA_SLOT", 8f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_63(uLocal_92, "SET_DATA_SLOT", 2f, CONTROLS::_0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_148())
					{
						func_47(3f);
						func_46(4f);
						func_63(uLocal_92, "SET_DATA_SLOT", 8f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
					}
				}
			}
			else
			{
				if (!func_135())
				{
					if (CONTROLS::_IS_INPUT_DISABLED(2) || GAMEPLAY::IS_ORBIS_VERSION())
					{
						func_63(uLocal_92, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_1NP_XB");
					}
					else
					{
						func_63(uLocal_92, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_1NP_XB");
					}
				}
				if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (!func_135())
					{
						func_63(uLocal_92, "SET_DATA_SLOT", 4f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, true), "CELL_GRID");
						func_63(uLocal_92, "SET_DATA_SLOT", 5f, CONTROLS::_0x80C2FD58D720C801(0, 1, true), "CELL_285");
					}
					else
					{
						func_63(uLocal_92, "SET_DATA_SLOT", 0f, CONTROLS::_0x80C2FD58D720C801(0, 1, true), "CELL_285");
						if (!CONTROLS::_IS_INPUT_DISABLED(0))
						{
							func_63(uLocal_92, "SET_DATA_SLOT", 1f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 210, true), "CELL_284");
						}
						else
						{
							func_63(uLocal_92, "SET_DATA_SLOT", 1f, CONTROLS::_0x80C2FD58D720C801(0, 29, true), "CELL_284");
						}
					}
					if (!func_135())
					{
						func_63(uLocal_92, "SET_DATA_SLOT", 6f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, true), "CELL_284");
					}
					if (!func_135())
					{
						if (func_148())
						{
							func_47(7f);
							func_46(8f);
							if (bLocal_30)
							{
								func_63(uLocal_92, "SET_DATA_SLOT", 3f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 182, true), "CELL_FOCUS");
							}
							func_63(uLocal_92, "SET_DATA_SLOT", 9f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_63(uLocal_92, "SET_DATA_SLOT", 2f, CONTROLS::_0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_148())
					{
						func_47(3f);
						func_46(4f);
						func_63(uLocal_92, "SET_DATA_SLOT", 5f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
					}
				}
			}
		}
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uLocal_92, "SET_MAX_WIDTH");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fLocal_40);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		func_139(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_28(float fParam0)
{
	func_63(uLocal_92, "SET_DATA_SLOT", fParam0, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 174, true), "CELL_ACTION");
}

int func_29(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_45(Global_4194378, Global_4194379))
		{
			if (iParam0 == 0 || !func_30(Global_4194378, Global_4194379, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_30(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	return func_31(PLAYER::PLAYER_PED_ID(), iParam0, iParam1, bParam2, bParam3, bParam4);
}

int func_31(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	uVar0 = 5;
	uVar1 = 5;
	uVar2 = 5;
	if (iParam1 == 0)
	{
		iVar6 = 3;
	}
	else if (bParam3)
	{
		iVar6 = 1;
	}
	else if (bParam4)
	{
		iVar6 = 2;
	}
	else
	{
		iVar6 = 0;
	}
	func_39(iParam1, iParam2, &uVar0, &uVar1, &uVar2, iVar6, bParam5);
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar3 = func_38(iParam0);
			if (!iVar3 == -1)
			{
				if (func_37(&uVar0, iVar3))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar4 = func_36(iParam0);
			if (!iVar4 == -1)
			{
				if (func_34(&uVar1, iVar4))
				{
					return 1;
				}
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar5 = func_33(iParam0);
			if (!iVar5 == 0)
			{
				if (func_32(&uVar2, iVar5))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_32(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0)
{
	int iVar0;
	
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
	return iVar0;
}

bool func_34(var uParam0, int iParam1)
{
	return func_35(uParam0, iParam1);
}

int func_35(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

int func_36(int iParam0)
{
	int iVar0;
	
	iVar0 = PED::GET_PED_PROP_INDEX(iParam0, 0);
	return iVar0;
}

bool func_37(var uParam0, int iParam1)
{
	return func_35(uParam0, iParam1);
}

int func_38(int iParam0)
{
	int iVar0;
	
	iVar0 = PED::GET_PED_PROP_INDEX(iParam0, 0);
	return iVar0;
}

void func_39(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_44(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
		case 0:
			func_43(iParam0, iParam1, uParam2, uParam3, uParam4, iParam5, bParam6);
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 13, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 1:
							func_42(uParam3, 4, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 2:
							func_42(uParam3, 13, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 39, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 38, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
					}
					break;
				
				case 5:
				case 24:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 62, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 1, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 4, 1);
							func_44(uParam4, 5, 1);
							func_44(uParam4, 7, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 12, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 14, 1);
							func_44(uParam4, 15, 1);
							func_44(uParam4, 16, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 115, 1);
							func_44(uParam4, 116, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 1:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 115, 1);
							func_44(uParam4, 116, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 2:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 4, 1);
							func_44(uParam4, 5, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 12, 1);
							func_44(uParam4, 14, 1);
							func_44(uParam4, 15, 1);
							func_44(uParam4, 16, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 115, 1);
							func_44(uParam4, 116, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
					}
					break;
				
				case 40:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 66, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 77, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
						
						case 1:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 12, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
					}
					break;
				
				case 41:
					func_42(uParam3, 67, 1);
					func_42(uParam3, 68, 1);
					func_42(uParam3, 69, 1);
					func_42(uParam3, 70, 1);
					func_42(uParam3, 71, 1);
					func_42(uParam3, 72, 1);
					func_42(uParam3, 73, 1);
					func_42(uParam3, 74, 1);
					func_42(uParam3, 78, 1);
					func_42(uParam3, 79, 1);
					func_42(uParam3, 80, 1);
					func_42(uParam3, 81, 1);
					func_42(uParam3, 82, 1);
					func_42(uParam3, 91, 1);
					func_42(uParam3, 92, 1);
					func_40(uParam2, 66, 1);
					func_40(uParam2, 67, 1);
					func_40(uParam2, 68, 1);
					func_40(uParam2, 69, 1);
					func_40(uParam2, 70, 1);
					func_40(uParam2, 71, 1);
					func_40(uParam2, 72, 1);
					func_40(uParam2, 73, 1);
					func_40(uParam2, 77, 1);
					func_40(uParam2, 78, 1);
					func_40(uParam2, 79, 1);
					func_40(uParam2, 80, 1);
					func_40(uParam2, 81, 1);
					func_40(uParam2, 90, 1);
					func_40(uParam2, 91, 1);
					func_42(uParam3, 38, 1);
					func_42(uParam3, 47, 1);
					func_42(uParam3, 111, 1);
					func_40(uParam2, 37, 1);
					func_40(uParam2, 46, 1);
					func_40(uParam2, 110, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					func_44(uParam4, 124, 1);
					func_44(uParam4, 125, 1);
					func_44(uParam4, 126, 1);
					func_44(uParam4, 127, 1);
					func_44(uParam4, 128, 1);
					func_44(uParam4, 129, 1);
					func_44(uParam4, 130, 1);
					func_44(uParam4, 131, 1);
					func_44(uParam4, 132, 1);
					func_44(uParam4, 133, 1);
					func_44(uParam4, 136, 1);
					func_44(uParam4, 138, 1);
					func_44(uParam4, 139, 1);
					func_44(uParam4, 143, 1);
					func_44(uParam4, 144, 1);
					func_44(uParam4, 145, 1);
					func_44(uParam4, 147, 1);
					break;
				
				case 42:
					func_42(uParam3, 67, 1);
					func_42(uParam3, 68, 1);
					func_42(uParam3, 69, 1);
					func_42(uParam3, 70, 1);
					func_42(uParam3, 71, 1);
					func_42(uParam3, 72, 1);
					func_42(uParam3, 73, 1);
					func_42(uParam3, 74, 1);
					func_42(uParam3, 78, 1);
					func_42(uParam3, 79, 1);
					func_42(uParam3, 80, 1);
					func_42(uParam3, 81, 1);
					func_42(uParam3, 82, 1);
					func_42(uParam3, 91, 1);
					func_42(uParam3, 92, 1);
					func_40(uParam2, 66, 1);
					func_40(uParam2, 67, 1);
					func_40(uParam2, 68, 1);
					func_40(uParam2, 69, 1);
					func_40(uParam2, 70, 1);
					func_40(uParam2, 71, 1);
					func_40(uParam2, 72, 1);
					func_40(uParam2, 73, 1);
					func_40(uParam2, 77, 1);
					func_40(uParam2, 78, 1);
					func_40(uParam2, 79, 1);
					func_40(uParam2, 80, 1);
					func_40(uParam2, 81, 1);
					func_40(uParam2, 90, 1);
					func_40(uParam2, 91, 1);
					func_42(uParam3, 38, 1);
					func_42(uParam3, 47, 1);
					func_42(uParam3, 111, 1);
					func_40(uParam2, 37, 1);
					func_40(uParam2, 46, 1);
					func_40(uParam2, 110, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					func_44(uParam4, 124, 1);
					func_44(uParam4, 125, 1);
					func_44(uParam4, 126, 1);
					func_44(uParam4, 127, 1);
					func_44(uParam4, 128, 1);
					func_44(uParam4, 129, 1);
					func_44(uParam4, 130, 1);
					func_44(uParam4, 131, 1);
					func_44(uParam4, 132, 1);
					func_44(uParam4, 133, 1);
					func_44(uParam4, 136, 1);
					func_44(uParam4, 138, 1);
					func_44(uParam4, 139, 1);
					func_44(uParam4, 143, 1);
					func_44(uParam4, 144, 1);
					func_44(uParam4, 145, 1);
					func_44(uParam4, 147, 1);
					break;
				
				case 43:
					func_42(uParam3, 67, 1);
					func_42(uParam3, 68, 1);
					func_42(uParam3, 69, 1);
					func_42(uParam3, 70, 1);
					func_42(uParam3, 71, 1);
					func_42(uParam3, 72, 1);
					func_42(uParam3, 73, 1);
					func_42(uParam3, 74, 1);
					func_42(uParam3, 78, 1);
					func_42(uParam3, 79, 1);
					func_42(uParam3, 80, 1);
					func_42(uParam3, 81, 1);
					func_42(uParam3, 82, 1);
					func_42(uParam3, 91, 1);
					func_42(uParam3, 92, 1);
					func_40(uParam2, 66, 1);
					func_40(uParam2, 67, 1);
					func_40(uParam2, 68, 1);
					func_40(uParam2, 69, 1);
					func_40(uParam2, 70, 1);
					func_40(uParam2, 71, 1);
					func_40(uParam2, 72, 1);
					func_40(uParam2, 73, 1);
					func_40(uParam2, 77, 1);
					func_40(uParam2, 78, 1);
					func_40(uParam2, 79, 1);
					func_40(uParam2, 80, 1);
					func_40(uParam2, 81, 1);
					func_40(uParam2, 90, 1);
					func_40(uParam2, 91, 1);
					func_42(uParam3, 38, 1);
					func_42(uParam3, 47, 1);
					func_42(uParam3, 111, 1);
					func_40(uParam2, 37, 1);
					func_40(uParam2, 46, 1);
					func_40(uParam2, 110, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					func_44(uParam4, 124, 1);
					func_44(uParam4, 125, 1);
					func_44(uParam4, 126, 1);
					func_44(uParam4, 127, 1);
					func_44(uParam4, 128, 1);
					func_44(uParam4, 129, 1);
					func_44(uParam4, 130, 1);
					func_44(uParam4, 131, 1);
					func_44(uParam4, 132, 1);
					func_44(uParam4, 133, 1);
					func_44(uParam4, 136, 1);
					func_44(uParam4, 138, 1);
					func_44(uParam4, 139, 1);
					func_44(uParam4, 143, 1);
					func_44(uParam4, 144, 1);
					func_44(uParam4, 145, 1);
					func_44(uParam4, 147, 1);
					break;
				
				case 44:
				case 45:
				case 46:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 12, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
						
						case 1:
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
						
						case 2:
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
					}
					break;
				
				case 10:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 3, 1);
							func_42(uParam3, 4, 1);
							func_42(uParam3, 6, 1);
							func_42(uParam3, 10, 1);
							func_42(uParam3, 54, 1);
							func_42(uParam3, 55, 1);
							func_42(uParam3, 56, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 37, 1);
							func_42(uParam3, 39, 1);
							func_42(uParam3, 55, 1);
							func_42(uParam3, 106, 1);
							func_42(uParam3, 114, 1);
							func_42(uParam3, 116, 1);
							func_42(uParam3, 117, 1);
							func_42(uParam3, 118, 1);
							func_42(uParam3, 119, 1);
							func_40(uParam2, 3, 1);
							func_40(uParam2, 4, 1);
							func_40(uParam2, 6, 1);
							func_40(uParam2, 8, 1);
							func_40(uParam2, 9, 1);
							func_40(uParam2, 10, 1);
							func_40(uParam2, 53, 1);
							func_40(uParam2, 56, 1);
							func_40(uParam2, 55, 1);
							func_40(uParam2, 13, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 26, 1);
							func_40(uParam2, 27, 1);
							func_40(uParam2, 28, 1);
							func_40(uParam2, 32, 1);
							func_40(uParam2, 36, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 55, 1);
							func_40(uParam2, 14, 1);
							func_40(uParam2, 105, 1);
							func_40(uParam2, 113, 1);
							func_40(uParam2, 114, 1);
							func_40(uParam2, 115, 1);
							func_40(uParam2, 116, 1);
							func_40(uParam2, 117, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 4, 1);
							func_44(uParam4, 14, 1);
							func_44(uParam4, 15, 1);
							func_44(uParam4, 16, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 12, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
						
						case 1:
							func_42(uParam3, 3, 1);
							func_42(uParam3, 4, 1);
							func_42(uParam3, 6, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 19, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 37, 1);
							func_42(uParam3, 39, 1);
							func_42(uParam3, 55, 1);
							func_42(uParam3, 106, 1);
							func_42(uParam3, 114, 1);
							func_42(uParam3, 116, 1);
							func_42(uParam3, 117, 1);
							func_42(uParam3, 118, 1);
							func_42(uParam3, 119, 1);
							func_40(uParam2, 3, 1);
							func_40(uParam2, 4, 1);
							func_40(uParam2, 6, 1);
							func_40(uParam2, 8, 1);
							func_40(uParam2, 9, 1);
							func_40(uParam2, 10, 1);
							func_40(uParam2, 53, 1);
							func_40(uParam2, 56, 1);
							func_40(uParam2, 55, 1);
							func_40(uParam2, 11, 1);
							func_40(uParam2, 13, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 22, 1);
							func_40(uParam2, 54, 1);
							func_40(uParam2, 26, 1);
							func_40(uParam2, 27, 1);
							func_40(uParam2, 28, 1);
							func_40(uParam2, 30, 1);
							func_40(uParam2, 31, 1);
							func_40(uParam2, 32, 1);
							func_40(uParam2, 36, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 55, 1);
							func_40(uParam2, 14, 1);
							func_40(uParam2, 105, 1);
							func_40(uParam2, 113, 1);
							func_40(uParam2, 114, 1);
							func_40(uParam2, 115, 1);
							func_40(uParam2, 116, 1);
							func_40(uParam2, 117, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 4, 1);
							func_44(uParam4, 14, 1);
							func_44(uParam4, 15, 1);
							func_44(uParam4, 16, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 12, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
						
						case 2:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 39, 1);
							func_42(uParam3, 106, 1);
							func_42(uParam3, 114, 1);
							func_42(uParam3, 116, 1);
							func_42(uParam3, 117, 1);
							func_42(uParam3, 118, 1);
							func_42(uParam3, 119, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 14, 1);
							func_40(uParam2, 105, 1);
							func_40(uParam2, 113, 1);
							func_40(uParam2, 114, 1);
							func_40(uParam2, 115, 1);
							func_40(uParam2, 116, 1);
							func_40(uParam2, 117, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 12, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
					}
					break;
				
				case 13:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 19, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 115, 1);
							func_44(uParam4, 116, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
						
						case 1:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 7, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 115, 1);
							func_44(uParam4, 116, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 2:
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 1, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 5, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 115, 1);
							func_44(uParam4, 116, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
					}
					break;
				
				case 16:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 4, 1);
							break;
						
						case 1:
							func_44(uParam4, 43, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 23:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
						
						case 1:
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
						
						case 2:
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
					}
					break;
				
				case 17:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 1, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 5, 1);
							func_44(uParam4, 6, 1);
							func_44(uParam4, 7, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 1:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 1, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 5, 1);
							func_44(uParam4, 6, 1);
							func_44(uParam4, 7, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 2:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 1, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 5, 1);
							func_44(uParam4, 6, 1);
							func_44(uParam4, 7, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
					}
					break;
				
				case 19:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 3, 1);
							func_42(uParam3, 7, 1);
							func_42(uParam3, 0, 1);
							func_42(uParam3, 12, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 15, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 17, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 21, 1);
							func_42(uParam3, 25, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 30, 1);
							func_42(uParam3, 31, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 39, 1);
							func_42(uParam3, 37, 1);
							func_40(uParam2, 0, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 3, 1);
							func_40(uParam2, 4, 1);
							func_40(uParam2, 6, 1);
							func_40(uParam2, 7, 1);
							func_40(uParam2, 8, 1);
							func_40(uParam2, 11, 1);
							func_40(uParam2, 13, 1);
							func_40(uParam2, 15, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 17, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 19, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 22, 1);
							func_40(uParam2, 54, 1);
							func_40(uParam2, 24, 1);
							func_40(uParam2, 26, 1);
							func_40(uParam2, 27, 1);
							func_40(uParam2, 28, 1);
							func_40(uParam2, 30, 1);
							func_40(uParam2, 31, 1);
							func_40(uParam2, 32, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 36, 1);
							func_44(uParam4, 1, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 4, 1);
							func_44(uParam4, 14, 1);
							func_44(uParam4, 15, 1);
							func_44(uParam4, 16, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 77, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 1:
							func_42(uParam3, 3, 1);
							func_42(uParam3, 7, 1);
							func_42(uParam3, 0, 1);
							func_42(uParam3, 12, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 15, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 17, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 21, 1);
							func_42(uParam3, 25, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 30, 1);
							func_42(uParam3, 31, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 39, 1);
							func_40(uParam2, 0, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 3, 1);
							func_40(uParam2, 4, 1);
							func_40(uParam2, 6, 1);
							func_40(uParam2, 7, 1);
							func_40(uParam2, 11, 1);
							func_40(uParam2, 13, 1);
							func_40(uParam2, 15, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 17, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 19, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 22, 1);
							func_40(uParam2, 54, 1);
							func_40(uParam2, 24, 1);
							func_40(uParam2, 38, 1);
							func_44(uParam4, 1, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 4, 1);
							func_44(uParam4, 14, 1);
							func_44(uParam4, 15, 1);
							func_44(uParam4, 16, 1);
							func_44(uParam4, 6, 1);
							func_44(uParam4, 7, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 77, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 2:
							func_42(uParam3, 1, 1);
							func_42(uParam3, 3, 1);
							func_42(uParam3, 4, 1);
							func_42(uParam3, 5, 1);
							func_42(uParam3, 7, 1);
							func_42(uParam3, 10, 1);
							func_42(uParam3, 54, 1);
							func_42(uParam3, 55, 1);
							func_42(uParam3, 56, 1);
							func_42(uParam3, 0, 1);
							func_42(uParam3, 12, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 15, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 17, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 21, 1);
							func_42(uParam3, 25, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 30, 1);
							func_42(uParam3, 31, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 37, 1);
							func_42(uParam3, 39, 1);
							func_40(uParam2, 0, 1);
							func_40(uParam2, 1, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 3, 1);
							func_40(uParam2, 4, 1);
							func_40(uParam2, 5, 1);
							func_40(uParam2, 6, 1);
							func_40(uParam2, 7, 1);
							func_40(uParam2, 8, 1);
							func_40(uParam2, 9, 1);
							func_40(uParam2, 10, 1);
							func_40(uParam2, 53, 1);
							func_40(uParam2, 56, 1);
							func_40(uParam2, 55, 1);
							func_40(uParam2, 11, 1);
							func_40(uParam2, 12, 1);
							func_40(uParam2, 13, 1);
							func_40(uParam2, 14, 1);
							func_40(uParam2, 15, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 17, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 19, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 22, 1);
							func_40(uParam2, 54, 1);
							func_40(uParam2, 23, 1);
							func_40(uParam2, 24, 1);
							func_40(uParam2, 26, 1);
							func_40(uParam2, 27, 1);
							func_40(uParam2, 28, 1);
							func_40(uParam2, 29, 1);
							func_40(uParam2, 30, 1);
							func_40(uParam2, 31, 1);
							func_40(uParam2, 32, 1);
							func_40(uParam2, 33, 1);
							func_40(uParam2, 36, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 55, 1);
							func_44(uParam4, 1, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 4, 1);
							func_44(uParam4, 14, 1);
							func_44(uParam4, 15, 1);
							func_44(uParam4, 16, 1);
							func_44(uParam4, 6, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 12, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 77, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
					}
					break;
				
				case 18:
					switch (iParam5)
					{
						case 0:
							break;
						
						case 1:
							func_40(uParam2, 2, 1);
							func_40(uParam2, 20, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 0:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 8:
				case 10:
				case 12:
				case 14:
				case 18:
				case 22:
				case 25:
				case 29:
				case 33:
				case 19:
				case 21:
					func_39(2, 40, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 31:
					func_39(2, 41, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 16:
				case 26:
				case 30:
					break;
			}
			break;
	}
}

void func_40(var uParam0, int iParam1, bool bParam2)
{
	func_41(uParam0, iParam1, bParam2);
}

void func_41(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		GAMEPLAY::SET_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_42(var uParam0, int iParam1, bool bParam2)
{
	func_41(uParam0, iParam1, bParam2);
}

void func_43(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_44(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							break;
						
						case 1:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							break;
						
						case 2:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							break;
					}
					break;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 6:
				case 26:
					if (bParam6)
					{
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_40(uParam2, 16, 1);
						func_40(uParam2, 47, 1);
						func_40(uParam2, 48, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
					}
					func_44(uParam4, 3, 1);
					func_44(uParam4, 4, 1);
					func_44(uParam4, 5, 1);
					func_44(uParam4, 6, 1);
					func_44(uParam4, 7, 1);
					func_44(uParam4, 8, 1);
					func_44(uParam4, 9, 1);
					func_44(uParam4, 12, 1);
					func_44(uParam4, 14, 1);
					func_44(uParam4, 15, 1);
					func_44(uParam4, 16, 1);
					func_44(uParam4, 17, 1);
					func_44(uParam4, 18, 1);
					func_44(uParam4, 19, 1);
					func_44(uParam4, 20, 1);
					func_44(uParam4, 59, 1);
					func_44(uParam4, 60, 1);
					func_44(uParam4, 61, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 63, 1);
					func_44(uParam4, 64, 1);
					func_44(uParam4, 65, 1);
					func_44(uParam4, 66, 1);
					func_44(uParam4, 67, 1);
					func_44(uParam4, 68, 1);
					func_44(uParam4, 69, 1);
					func_44(uParam4, 70, 1);
					func_44(uParam4, 71, 1);
					func_44(uParam4, 72, 1);
					func_44(uParam4, 21, 1);
					func_44(uParam4, 22, 1);
					func_44(uParam4, 23, 1);
					func_44(uParam4, 24, 1);
					func_44(uParam4, 25, 1);
					func_44(uParam4, 26, 1);
					func_44(uParam4, 36, 1);
					func_44(uParam4, 46, 1);
					func_44(uParam4, 38, 1);
					func_44(uParam4, 28, 1);
					func_44(uParam4, 10, 1);
					func_44(uParam4, 33, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					func_44(uParam4, 110, 1);
					func_44(uParam4, 112, 1);
					func_44(uParam4, 115, 1);
					func_44(uParam4, 116, 1);
					break;
				
				case 1:
					if (bParam6)
					{
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
					}
					func_44(uParam4, 9, 1);
					func_44(uParam4, 12, 1);
					func_44(uParam4, 13, 1);
					func_44(uParam4, 17, 1);
					func_44(uParam4, 18, 1);
					func_44(uParam4, 19, 1);
					func_44(uParam4, 20, 1);
					func_44(uParam4, 59, 1);
					func_44(uParam4, 60, 1);
					func_44(uParam4, 61, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 63, 1);
					func_44(uParam4, 64, 1);
					func_44(uParam4, 65, 1);
					func_44(uParam4, 66, 1);
					func_44(uParam4, 67, 1);
					func_44(uParam4, 68, 1);
					func_44(uParam4, 69, 1);
					func_44(uParam4, 70, 1);
					func_44(uParam4, 71, 1);
					func_44(uParam4, 72, 1);
					func_44(uParam4, 21, 1);
					func_44(uParam4, 22, 1);
					func_44(uParam4, 23, 1);
					func_44(uParam4, 24, 1);
					func_44(uParam4, 25, 1);
					func_44(uParam4, 26, 1);
					func_44(uParam4, 36, 1);
					func_44(uParam4, 46, 1);
					func_44(uParam4, 38, 1);
					func_44(uParam4, 29, 1);
					func_44(uParam4, 28, 1);
					func_44(uParam4, 8, 1);
					func_44(uParam4, 10, 1);
					func_44(uParam4, 31, 1);
					func_44(uParam4, 33, 1);
					func_44(uParam4, 34, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					break;
				
				case 10:
					func_44(uParam4, 28, 1);
					break;
				
				case 12:
					if (bParam6)
					{
						func_42(uParam3, 3, 1);
						func_42(uParam3, 4, 1);
						func_42(uParam3, 6, 1);
						func_42(uParam3, 10, 1);
						func_42(uParam3, 54, 1);
						func_42(uParam3, 55, 1);
						func_42(uParam3, 56, 1);
						func_42(uParam3, 13, 1);
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_42(uParam3, 20, 1);
						func_42(uParam3, 26, 1);
						func_42(uParam3, 27, 1);
						func_42(uParam3, 32, 1);
						func_42(uParam3, 33, 1);
						func_42(uParam3, 37, 1);
						func_42(uParam3, 39, 1);
						func_42(uParam3, 106, 1);
						func_42(uParam3, 114, 1);
						func_42(uParam3, 116, 1);
						func_42(uParam3, 117, 1);
						func_42(uParam3, 118, 1);
						func_42(uParam3, 119, 1);
						func_40(uParam2, 3, 1);
						func_40(uParam2, 4, 1);
						func_40(uParam2, 6, 1);
						func_40(uParam2, 8, 1);
						func_40(uParam2, 9, 1);
						func_40(uParam2, 10, 1);
						func_40(uParam2, 53, 1);
						func_40(uParam2, 56, 1);
						func_40(uParam2, 55, 1);
						func_40(uParam2, 13, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
						func_40(uParam2, 21, 1);
						func_40(uParam2, 26, 1);
						func_40(uParam2, 27, 1);
						func_40(uParam2, 28, 1);
						func_40(uParam2, 32, 1);
						func_40(uParam2, 36, 1);
						func_40(uParam2, 38, 1);
						func_40(uParam2, 55, 1);
						func_40(uParam2, 14, 1);
						func_40(uParam2, 105, 1);
						func_40(uParam2, 113, 1);
						func_40(uParam2, 114, 1);
						func_40(uParam2, 115, 1);
						func_40(uParam2, 116, 1);
						func_40(uParam2, 117, 1);
					}
					func_44(uParam4, 2, 1);
					func_44(uParam4, 3, 1);
					func_44(uParam4, 4, 1);
					func_44(uParam4, 14, 1);
					func_44(uParam4, 15, 1);
					func_44(uParam4, 16, 1);
					func_44(uParam4, 9, 1);
					func_44(uParam4, 10, 1);
					func_44(uParam4, 12, 1);
					func_44(uParam4, 13, 1);
					func_44(uParam4, 17, 1);
					func_44(uParam4, 18, 1);
					func_44(uParam4, 19, 1);
					func_44(uParam4, 20, 1);
					func_44(uParam4, 59, 1);
					func_44(uParam4, 60, 1);
					func_44(uParam4, 61, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 63, 1);
					func_44(uParam4, 64, 1);
					func_44(uParam4, 65, 1);
					func_44(uParam4, 66, 1);
					func_44(uParam4, 67, 1);
					func_44(uParam4, 68, 1);
					func_44(uParam4, 69, 1);
					func_44(uParam4, 70, 1);
					func_44(uParam4, 71, 1);
					func_44(uParam4, 72, 1);
					func_44(uParam4, 21, 1);
					func_44(uParam4, 22, 1);
					func_44(uParam4, 23, 1);
					func_44(uParam4, 24, 1);
					func_44(uParam4, 25, 1);
					func_44(uParam4, 26, 1);
					func_44(uParam4, 36, 1);
					func_44(uParam4, 46, 1);
					func_44(uParam4, 38, 1);
					func_44(uParam4, 29, 1);
					func_44(uParam4, 28, 1);
					func_44(uParam4, 8, 1);
					func_44(uParam4, 31, 1);
					func_44(uParam4, 32, 1);
					func_44(uParam4, 33, 1);
					func_44(uParam4, 34, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					func_44(uParam4, 110, 1);
					func_44(uParam4, 112, 1);
					break;
				
				case 15:
					if (bParam6)
					{
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
						func_40(uParam2, 19, 1);
					}
					func_44(uParam4, 3, 1);
					func_44(uParam4, 6, 1);
					func_44(uParam4, 8, 1);
					func_44(uParam4, 9, 1);
					func_44(uParam4, 10, 1);
					func_44(uParam4, 13, 1);
					func_44(uParam4, 17, 1);
					func_44(uParam4, 18, 1);
					func_44(uParam4, 19, 1);
					func_44(uParam4, 20, 1);
					func_44(uParam4, 59, 1);
					func_44(uParam4, 60, 1);
					func_44(uParam4, 61, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 63, 1);
					func_44(uParam4, 64, 1);
					func_44(uParam4, 65, 1);
					func_44(uParam4, 66, 1);
					func_44(uParam4, 67, 1);
					func_44(uParam4, 68, 1);
					func_44(uParam4, 69, 1);
					func_44(uParam4, 70, 1);
					func_44(uParam4, 71, 1);
					func_44(uParam4, 72, 1);
					func_44(uParam4, 21, 1);
					func_44(uParam4, 22, 1);
					func_44(uParam4, 23, 1);
					func_44(uParam4, 24, 1);
					func_44(uParam4, 25, 1);
					func_44(uParam4, 26, 1);
					func_44(uParam4, 36, 1);
					func_44(uParam4, 46, 1);
					func_44(uParam4, 38, 1);
					func_44(uParam4, 29, 1);
					func_44(uParam4, 28, 1);
					func_44(uParam4, 31, 1);
					func_44(uParam4, 32, 1);
					func_44(uParam4, 33, 1);
					func_44(uParam4, 34, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					func_44(uParam4, 110, 1);
					func_44(uParam4, 112, 1);
					func_44(uParam4, 115, 1);
					func_44(uParam4, 116, 1);
					break;
				
				case 18:
					if (bParam6)
					{
						func_42(uParam3, 4, 1);
					}
					break;
				
				case 17:
					func_44(uParam4, 9, 1);
					break;
				
				case 19:
					if (bParam6)
					{
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_40(uParam2, 16, 1);
						func_40(uParam2, 47, 1);
						func_40(uParam2, 48, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
					}
					func_44(uParam4, 9, 1);
					func_44(uParam4, 10, 1);
					func_44(uParam4, 18, 1);
					func_44(uParam4, 19, 1);
					func_44(uParam4, 20, 1);
					func_44(uParam4, 59, 1);
					func_44(uParam4, 60, 1);
					func_44(uParam4, 61, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 63, 1);
					func_44(uParam4, 64, 1);
					func_44(uParam4, 65, 1);
					func_44(uParam4, 66, 1);
					func_44(uParam4, 67, 1);
					func_44(uParam4, 68, 1);
					func_44(uParam4, 69, 1);
					func_44(uParam4, 70, 1);
					func_44(uParam4, 71, 1);
					func_44(uParam4, 72, 1);
					func_44(uParam4, 21, 1);
					func_44(uParam4, 22, 1);
					func_44(uParam4, 23, 1);
					func_44(uParam4, 24, 1);
					func_44(uParam4, 25, 1);
					func_44(uParam4, 26, 1);
					func_44(uParam4, 36, 1);
					func_44(uParam4, 46, 1);
					func_44(uParam4, 38, 1);
					func_44(uParam4, 29, 1);
					func_44(uParam4, 8, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					break;
				
				case 21:
					if (bParam6)
					{
						func_42(uParam3, 3, 1);
						func_42(uParam3, 7, 1);
						func_42(uParam3, 0, 1);
						func_42(uParam3, 12, 1);
						func_42(uParam3, 13, 1);
						func_42(uParam3, 15, 1);
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 17, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_42(uParam3, 20, 1);
						func_42(uParam3, 21, 1);
						func_42(uParam3, 25, 1);
						func_42(uParam3, 26, 1);
						func_42(uParam3, 27, 1);
						func_42(uParam3, 30, 1);
						func_42(uParam3, 31, 1);
						func_42(uParam3, 32, 1);
						func_42(uParam3, 33, 1);
						func_42(uParam3, 39, 1);
						func_42(uParam3, 37, 1);
						func_42(uParam3, 55, 1);
						func_40(uParam2, 0, 1);
						func_40(uParam2, 2, 1);
						func_40(uParam2, 3, 1);
						func_40(uParam2, 4, 1);
						func_40(uParam2, 6, 1);
						func_40(uParam2, 7, 1);
						func_40(uParam2, 8, 1);
						func_40(uParam2, 11, 1);
						func_40(uParam2, 13, 1);
						func_40(uParam2, 15, 1);
						func_40(uParam2, 16, 1);
						func_40(uParam2, 47, 1);
						func_40(uParam2, 48, 1);
						func_40(uParam2, 17, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
						func_40(uParam2, 19, 1);
						func_40(uParam2, 20, 1);
						func_40(uParam2, 21, 1);
						func_40(uParam2, 22, 1);
						func_40(uParam2, 54, 1);
						func_40(uParam2, 24, 1);
						func_40(uParam2, 26, 1);
						func_40(uParam2, 27, 1);
						func_40(uParam2, 28, 1);
						func_40(uParam2, 30, 1);
						func_40(uParam2, 31, 1);
						func_40(uParam2, 32, 1);
						func_40(uParam2, 38, 1);
						func_40(uParam2, 36, 1);
					}
					func_44(uParam4, 3, 1);
					func_44(uParam4, 3, 1);
					func_44(uParam4, 4, 1);
					func_44(uParam4, 14, 1);
					func_44(uParam4, 15, 1);
					func_44(uParam4, 16, 1);
					func_44(uParam4, 8, 1);
					func_44(uParam4, 9, 1);
					func_44(uParam4, 10, 1);
					func_44(uParam4, 12, 1);
					func_44(uParam4, 13, 1);
					func_44(uParam4, 17, 1);
					func_44(uParam4, 18, 1);
					func_44(uParam4, 19, 1);
					func_44(uParam4, 20, 1);
					func_44(uParam4, 59, 1);
					func_44(uParam4, 60, 1);
					func_44(uParam4, 61, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 63, 1);
					func_44(uParam4, 64, 1);
					func_44(uParam4, 65, 1);
					func_44(uParam4, 66, 1);
					func_44(uParam4, 67, 1);
					func_44(uParam4, 68, 1);
					func_44(uParam4, 69, 1);
					func_44(uParam4, 70, 1);
					func_44(uParam4, 71, 1);
					func_44(uParam4, 72, 1);
					func_44(uParam4, 21, 1);
					func_44(uParam4, 22, 1);
					func_44(uParam4, 23, 1);
					func_44(uParam4, 24, 1);
					func_44(uParam4, 25, 1);
					func_44(uParam4, 26, 1);
					func_44(uParam4, 36, 1);
					func_44(uParam4, 46, 1);
					func_44(uParam4, 38, 1);
					func_44(uParam4, 29, 1);
					func_44(uParam4, 28, 1);
					func_44(uParam4, 31, 1);
					func_44(uParam4, 33, 1);
					func_44(uParam4, 34, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					break;
			}
			break;
	}
}

void func_44(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		GAMEPLAY::SET_BIT(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

int func_45(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 7:
				case 5:
				case 10:
				case 11:
				case 12:
				case 13:
				case 15:
				case 14:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
				case 26:
				case 25:
				case 24:
				case 30:
				case 34:
					return 1;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_46(float fParam0)
{
	func_63(uLocal_92, "SET_DATA_SLOT", fParam0, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 172, true), "CELL_BORDER");
}

void func_47(float fParam0)
{
	if (Global_1664486 == 1)
	{
		fParam0 = -1f;
	}
	func_63(uLocal_92, "SET_DATA_SLOT", fParam0, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 173, true), "CELL_FILTER");
}

void func_48()
{
	if (CONTROLS::_IS_INPUT_DISABLED(2) || GAMEPLAY::IS_ORBIS_VERSION())
	{
		func_63(uLocal_92, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_63(uLocal_92, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
	}
	func_63(uLocal_92, "SET_DATA_SLOT", 3f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 183, true), "CELL_GRID");
	func_63(uLocal_92, "SET_DATA_SLOT", 4f, CONTROLS::_0x80C2FD58D720C801(0, 1, true), "CELL_285");
	func_47(5f);
	func_46(6f);
	func_49(7f);
	func_28(8f);
	if (bLocal_29)
	{
		func_63(uLocal_92, "SET_DATA_SLOT", 9f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
	}
	if (!func_58(14))
	{
		if ((Global_71205 == 0 && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("pi_menu")) > 0) && func_57())
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uLocal_91, "SET_FOCUS_LOCK");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_ACTTL");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(UI::_GET_LABEL_TEXT(&Global_4269246));
			GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(false);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
	}
}

void func_49(float fParam0)
{
	func_63(uLocal_92, "SET_DATA_SLOT", fParam0, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 175, true), "CELL_ACCYC");
}

void func_50()
{
	func_139(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_139(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_63(uLocal_92, "SET_DATA_SLOT", 3f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, true), "CELL_284");
	func_63(uLocal_92, "SET_DATA_SLOT", 2f, CONTROLS::_0x80C2FD58D720C801(0, 1, true), "CELL_285");
	func_63(uLocal_92, "SET_DATA_SLOT", 1f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
	func_63(uLocal_92, "SET_DATA_SLOT", 0f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_280");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uLocal_92, "SET_MAX_WIDTH");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fLocal_40);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	func_139(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_51()
{
	if (iLocal_106 == 1)
	{
		func_52();
		return;
	}
	if (iLocal_84 == 0 && iLocal_85 == 0)
	{
		func_139(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_139(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_63(uLocal_92, "SET_DATA_SLOT", 0f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
		func_63(uLocal_92, "SET_DATA_SLOT", 1f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, true), func_62());
		if (iLocal_82)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (CONTROLS::_IS_INPUT_DISABLED(2) || GAMEPLAY::IS_ORBIS_VERSION())
					{
						func_63(uLocal_92, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_63(uLocal_92, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
					}
					if (func_148())
					{
						func_47(3f);
						func_46(4f);
					}
				}
				else if ((Global_71205 == 0 && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("pi_menu")) > 0) && func_57())
				{
					func_48();
				}
				else
				{
					if (CONTROLS::_IS_INPUT_DISABLED(2) || GAMEPLAY::IS_ORBIS_VERSION())
					{
						func_63(uLocal_92, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_63(uLocal_92, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
					}
					func_63(uLocal_92, "SET_DATA_SLOT", 3f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, true), "CELL_GRID");
					func_63(uLocal_92, "SET_DATA_SLOT", 4f, CONTROLS::_0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_148())
					{
						func_47(5f);
						func_46(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_29)
							{
								func_63(uLocal_92, "SET_DATA_SLOT", 8f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
							}
						}
						else if (bLocal_29)
						{
							func_63(uLocal_92, "SET_DATA_SLOT", 7f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					func_63(uLocal_92, "SET_DATA_SLOT", 3f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, true), "CELL_GRID");
					func_63(uLocal_92, "SET_DATA_SLOT", 4f, CONTROLS::_0x80C2FD58D720C801(0, 1, true), "CELL_285");
					func_63(uLocal_92, "SET_DATA_SLOT", 5f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, true), "CELL_284");
					if (func_148())
					{
						func_47(6f);
						func_46(7f);
						func_63(uLocal_92, "SET_DATA_SLOT", 8f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
					}
				}
				else
				{
					func_63(uLocal_92, "SET_DATA_SLOT", 2f, CONTROLS::_0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_148())
					{
						func_47(3f);
						func_46(4f);
						func_63(uLocal_92, "SET_DATA_SLOT", 5f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
					}
				}
			}
			else if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (!func_135())
				{
					if (CONTROLS::_IS_INPUT_DISABLED(2) || GAMEPLAY::IS_ORBIS_VERSION())
					{
						func_63(uLocal_92, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_1NP_XB");
					}
					else
					{
						func_63(uLocal_92, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_1NP_XB");
					}
				}
				func_63(uLocal_92, "SET_DATA_SLOT", 4f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, true), "CELL_GRID");
				func_63(uLocal_92, "SET_DATA_SLOT", 5f, CONTROLS::_0x80C2FD58D720C801(0, 1, true), "CELL_285");
				func_63(uLocal_92, "SET_DATA_SLOT", 6f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, true), "CELL_284");
				if (func_148())
				{
					if (!func_135())
					{
						func_47(7f);
						func_46(8f);
						if (bLocal_30)
						{
							func_63(uLocal_92, "SET_DATA_SLOT", 3f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 182, true), "CELL_FOCUS");
						}
						func_63(uLocal_92, "SET_DATA_SLOT", 9f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
					}
				}
				else
				{
					if (!func_135())
					{
						if (CONTROLS::_IS_INPUT_DISABLED(2) || GAMEPLAY::IS_ORBIS_VERSION())
						{
							func_63(uLocal_92, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_1NP_XB");
						}
						else
						{
							func_63(uLocal_92, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_1NP_XB");
						}
					}
					func_63(uLocal_92, "SET_DATA_SLOT", 3f, CONTROLS::_0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_148())
					{
						if (!func_135())
						{
							func_47(4f);
							func_46(5f);
							func_63(uLocal_92, "SET_DATA_SLOT", 6f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
						}
					}
				}
			}
		}
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uLocal_92, "SET_MAX_WIDTH");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fLocal_40);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		func_139(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_52()
{
	func_139(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_139(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_63(uLocal_92, "SET_DATA_SLOT", 3f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, true), "CELL_284");
	func_63(uLocal_92, "SET_DATA_SLOT", 2f, CONTROLS::_0x80C2FD58D720C801(0, 1, true), "CELL_285");
	func_63(uLocal_92, "SET_DATA_SLOT", 1f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, true), func_62());
	func_63(uLocal_92, "SET_DATA_SLOT", 0f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uLocal_92, "SET_MAX_WIDTH");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fLocal_40);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	func_139(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_53()
{
	if (iLocal_82)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_36, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_37);
	}
}

void func_54(int iParam0)
{
	if (iLocal_106 == 1)
	{
		return;
	}
	if (Global_4456448.f_147498 == 1)
	{
	}
	else if (Global_4456448.f_147499 == 1)
	{
	}
	else
	{
		MOBILE::_DISABLE_PHONE_THIS_FRAME(iParam0);
	}
}

void func_55()
{
	if (iLocal_28 == 1)
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(sLocal_19[Global_4267054], "phone_cam12DUMMY"))
		{
			MOBILE::_0xA2CCBE62CD4C91A4(0);
			unk_0x375A706A5C2FD084(0);
		}
		else
		{
			MOBILE::_0xA2CCBE62CD4C91A4(1);
			unk_0x375A706A5C2FD084(1);
		}
	}
}

void func_56()
{
	func_139(uLocal_91, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_148())
	{
		if (Global_1664486 == 0)
		{
			GRAPHICS::SET_TIMECYCLE_MODIFIER("phone_cam");
		}
	}
}

int func_57()
{
	if (func_58(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if ((ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106070.f_28022[0 /*29*/] || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106070.f_28022[1 /*29*/]) || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106070.f_28022[2 /*29*/])
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_58(int iParam0)
{
	return Global_36117 == iParam0;
}

void func_59(char* sParam0)
{
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(sParam0);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
}

void func_60()
{
	if (CONTROLS::_IS_INPUT_DISABLED(2) || GAMEPLAY::IS_ORBIS_VERSION())
	{
		func_63(uLocal_92, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_63(uLocal_92, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
	}
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		func_63(uLocal_92, "SET_DATA_SLOT", 3f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 30, true), "CELL_RT_RSTICK");
		func_63(uLocal_92, "SET_DATA_SLOT", 4f, CONTROLS::_0x80C2FD58D720C801(2, 1, true), "CELL_RT_LSTICK");
	}
	else
	{
		func_63(uLocal_92, "SET_DATA_SLOT", 3f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 1, true), "CELL_RT_RSTICK");
		func_63(uLocal_92, "SET_DATA_SLOT", 4f, CONTROLS::_0x80C2FD58D720C801(2, 0, true), "CELL_RT_LSTICK");
	}
}

void func_61()
{
	if (CONTROLS::_IS_INPUT_DISABLED(2) || GAMEPLAY::IS_ORBIS_VERSION())
	{
		func_63(uLocal_92, "SET_DATA_SLOT", 3f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_63(uLocal_92, "SET_DATA_SLOT", 3f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
	}
	func_63(uLocal_92, "SET_DATA_SLOT", 4f, CONTROLS::_0x80C2FD58D720C801(0, 1, true), "CELL_LT_RSTICK");
	if (func_58(14))
	{
		func_63(uLocal_92, "SET_DATA_SLOT", 5f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 30, true), "CELL_LT_LSTICK");
	}
	else
	{
		func_63(uLocal_92, "SET_DATA_SLOT", 5f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, true), "CELL_LT_LSTICKZ");
		func_63(uLocal_92, "SET_DATA_SLOT", 6f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 30, true), "CELL_LT_LSTICK");
	}
}

char* func_62()
{
	if (Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_33 == 233 && Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_176 == 9)
	{
		return "FHHUD_SENDLES";
	}
	return "CELL_287";
}

void func_63(var uParam0, char* sParam1, float fParam2, char* sParam3, char* sParam4)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, sParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam2));
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_64(sParam3);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_59(sParam4);
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_64(char* sParam0)
{
	GRAPHICS::_0xE83A3E3557A56640(sParam0);
}

void func_65()
{
	if (Global_71205)
	{
		switch (Global_16939)
		{
			case 0:
				if (CONTROLS::_IS_INPUT_DISABLED(2))
				{
					func_134("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_134("CELL_CAM_SELFIE_0", -1);
				}
				Global_16939++;
				break;
			
			case 1:
				if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (CONTROLS::_IS_INPUT_DISABLED(2))
					{
						func_134("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_134("CELL_CAM_SELFIE_1", -1);
					}
					Global_16939++;
				}
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_16938)
		{
			case 0:
				if (CONTROLS::_IS_INPUT_DISABLED(2))
				{
					func_134("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_134("CELL_CAM_SELFIE_0", -1);
				}
				Global_16938++;
				break;
			
			case 1:
				if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (CONTROLS::_IS_INPUT_DISABLED(2))
					{
						func_134("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_134("CELL_CAM_SELFIE_1", -1);
					}
					Global_16938++;
				}
				break;
			
			case 2:
				break;
			}
	}
}

void func_66()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (CONTROLS::IS_CONTROL_PRESSED(2, iVar10) && !CONTROLS::IS_CONTROL_PRESSED(2, iVar9))
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 2, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 1, 1);
		iVar0 = SYSTEM::FLOOR(CONTROLS::_0x4F8A26A890FD62FB(0, 30)) * 127;
		iVar1 = SYSTEM::FLOOR(CONTROLS::_0x4F8A26A890FD62FB(0, 31)) * 127;
		iVar2 = SYSTEM::FLOOR(CONTROLS::_0x4F8A26A890FD62FB(0, 1)) * 127;
		iVar3 = SYSTEM::FLOOR(CONTROLS::_0x4F8A26A890FD62FB(0, 2)) * 127;
		if (CONTROLS::_IS_INPUT_DISABLED(2))
		{
			if (GAMEPLAY::ABSI(iVar0) > 28 || GAMEPLAY::ABSI(iVar1) > 28)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			}
		}
		else if (GAMEPLAY::ABSI(iVar2) > 28 || GAMEPLAY::ABSI(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
		}
		if (CONTROLS::_IS_INPUT_DISABLED(2))
		{
			fVar7 = CONTROLS::_0x4F8A26A890FD62FB(0, 290);
			fVar8 = CONTROLS::_0x4F8A26A890FD62FB(0, 291);
			if (CONTROLS::_0xE1615EC03B3BB4FD())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (GAMEPLAY::ABSI(iVar0) > 28 || GAMEPLAY::ABSI(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_114);
		}
		func_69(fVar5);
		func_68(fVar6);
		func_67(fVar4);
	}
	else if (!CONTROLS::IS_CONTROL_PRESSED(2, iVar9))
	{
		CONTROLS::ENABLE_CONTROL_ACTION(0, 2, 1);
		CONTROLS::ENABLE_CONTROL_ACTION(0, 1, 1);
	}
}

void func_67(float fParam0)
{
	fLocal_111 = (fLocal_111 + fParam0);
	if (fLocal_111 > 1f)
	{
		fLocal_111 = 1f;
	}
	else if (fLocal_111 < -1f)
	{
		fLocal_111 = -1f;
	}
	MOBILE::_0xD6ADE981781FCA09(fLocal_111);
}

void func_68(float fParam0)
{
	fLocal_112 = (fLocal_112 + fParam0);
	if (fLocal_112 > 1f)
	{
		fLocal_112 = 1f;
	}
	else if (fLocal_112 < -1f)
	{
		fLocal_112 = -1f;
	}
	MOBILE::_0xF1E22DC13F5EEBAD(fLocal_112);
}

void func_69(float fParam0)
{
	fLocal_113 = (fLocal_113 + fParam0);
	if (fLocal_113 > 1f)
	{
		fLocal_113 = 1f;
	}
	else if (fLocal_113 < -1f)
	{
		fLocal_113 = -1f;
	}
	MOBILE::_0x466DA42C89865553(fLocal_113);
}

void func_70()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (CONTROLS::IS_CONTROL_PRESSED(2, iVar10))
		{
			if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 178) && !func_135())
			{
				MOBILE::_0x53F4892D18EC90A4(0.5f);
				MOBILE::_0x3117D84EFA60F77B(0.85f);
				MOBILE::_0xAC2890471901861C(0.5f);
				MOBILE::_0x15E69E2802C24B8D(-0.25f);
				fLocal_107 = 0.5f;
				fLocal_108 = 0.85f;
				fLocal_109 = 0.5f;
				fLocal_110 = -0.25f;
			}
		}
	}
	else
	{
		iVar10 = 228;
		iVar11 = 229;
	}
	if (CONTROLS::IS_CONTROL_PRESSED(2, iVar10) && !CONTROLS::IS_CONTROL_PRESSED(2, iVar11))
	{
		if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 178) && !func_135())
		{
			MOBILE::_0x53F4892D18EC90A4(0.5f);
			MOBILE::_0x3117D84EFA60F77B(0.85f);
			MOBILE::_0xAC2890471901861C(0.5f);
			MOBILE::_0x15E69E2802C24B8D(-0.25f);
			fLocal_107 = 0.5f;
			fLocal_108 = 0.85f;
			fLocal_109 = 0.5f;
			fLocal_110 = -0.25f;
		}
		CONTROLS::DISABLE_CONTROL_ACTION(0, 2, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 1, 1);
		iVar0 = SYSTEM::FLOOR(CONTROLS::_0x4F8A26A890FD62FB(0, 30)) * 127;
		iVar1 = SYSTEM::FLOOR(CONTROLS::_0x4F8A26A890FD62FB(0, 31)) * 127;
		iVar2 = SYSTEM::FLOOR(CONTROLS::_0x4F8A26A890FD62FB(0, 1)) * 127;
		iVar3 = SYSTEM::FLOOR(CONTROLS::_0x4F8A26A890FD62FB(0, 2)) * 127;
		if (CONTROLS::_IS_INPUT_DISABLED(2))
		{
			iVar1 = SYSTEM::FLOOR(CONTROLS::_0x4F8A26A890FD62FB(0, 39)) * 127;
			fVar8 = CONTROLS::_0x4F8A26A890FD62FB(0, 290);
			fVar9 = CONTROLS::_0x4F8A26A890FD62FB(0, 291);
			if (CONTROLS::_0xE1615EC03B3BB4FD())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (GAMEPLAY::ABSI(iVar2) > 15 || GAMEPLAY::ABSI(iVar3) > 15)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_114);
		}
		if (GAMEPLAY::ABSI(iVar0) > 28 || GAMEPLAY::ABSI(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_114);
		}
		func_74(fVar6);
		func_73(fVar7);
		func_72(fVar4);
		if (!func_58(14))
		{
			func_71(fVar5);
		}
	}
	else if (!CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, iVar11))
	{
		CONTROLS::ENABLE_CONTROL_ACTION(0, 2, 1);
		CONTROLS::ENABLE_CONTROL_ACTION(0, 1, 1);
	}
	if (!CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, iVar10) && !CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, iVar11))
	{
		iVar0 = SYSTEM::FLOOR(CONTROLS::_0x4F8A26A890FD62FB(0, 30)) * 127;
		iVar1 = SYSTEM::FLOOR(CONTROLS::_0x4F8A26A890FD62FB(0, 31)) * 127;
		iVar2 = SYSTEM::FLOOR(CONTROLS::_0x4F8A26A890FD62FB(0, 290)) * 127;
		iVar3 = SYSTEM::FLOOR(CONTROLS::_0x4F8A26A890FD62FB(0, 291)) * 127;
		iVar2 = SYSTEM::FLOOR(CONTROLS::_0x4F8A26A890FD62FB(0, 294)) * 127;
		iVar2 = SYSTEM::FLOOR(CONTROLS::_0x4F8A26A890FD62FB(0, 295)) * 127;
		iVar3 = SYSTEM::FLOOR(CONTROLS::_0x4F8A26A890FD62FB(0, 292)) * 127;
		iVar3 = SYSTEM::FLOOR(CONTROLS::_0x4F8A26A890FD62FB(0, 293)) * 127;
		if (GAMEPLAY::ABSI(iVar2) > 28 || GAMEPLAY::ABSI(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_114);
		}
		if (GAMEPLAY::ABSI(iVar0) > 28 || GAMEPLAY::ABSI(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_114);
		}
		if (!func_58(14))
		{
			func_71(fVar5);
		}
	}
}

void func_71(float fParam0)
{
	fLocal_109 = (fLocal_109 + fParam0);
	if (fLocal_109 > 1f)
	{
		fLocal_109 = 1f;
	}
	else if (fLocal_109 < 0f)
	{
		fLocal_109 = 0f;
	}
	MOBILE::_0xAC2890471901861C(fLocal_109);
}

void func_72(float fParam0)
{
	fLocal_110 = (fLocal_110 + fParam0);
	if (fLocal_110 > 1f)
	{
		fLocal_110 = 1f;
	}
	else if (fLocal_110 < -1f)
	{
		fLocal_110 = -1f;
	}
	MOBILE::_0x15E69E2802C24B8D(fLocal_110);
}

void func_73(float fParam0)
{
	fLocal_108 = (fLocal_108 + fParam0);
	if (fLocal_108 > 1.5f)
	{
		fLocal_108 = 1.5f;
	}
	else if (fLocal_108 < 0.5f)
	{
		fLocal_108 = 0.5f;
	}
	MOBILE::_0x3117D84EFA60F77B(fLocal_108);
}

void func_74(float fParam0)
{
	fLocal_107 = (fLocal_107 + fParam0);
	if (fLocal_107 > 2f)
	{
		fLocal_107 = 2f;
	}
	else if (fLocal_107 < -1.7f)
	{
		fLocal_107 = -1.7f;
	}
	MOBILE::_0x53F4892D18EC90A4(fLocal_107);
}

void func_75()
{
	if (Global_71465 || Global_71466)
	{
		return;
	}
	if (iLocal_75 == 0)
	{
		if (!iLocal_100)
		{
			if (Global_4456448.f_147498 == 0 && Global_4456448.f_147499 == 0)
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_92, 255, 255, 255, 0, 0);
			}
		}
	}
	if (iLocal_78 == 0)
	{
		if (Global_14455)
		{
			if (Global_14681)
			{
				if (iLocal_100 == 0)
				{
					if (Global_14513.f_1 > 3)
					{
					}
				}
			}
		}
		else
		{
			func_77(255, 255, 255, 255);
			func_76(0.059f, 0.644f, "CELL_284", 0);
			func_77(255, 255, 255, 255);
			func_76(0.165f, 0.644f, "CELL_285", 0);
			func_77(255, 255, 255, 255);
			func_76(0.275f, 0.75f, "CELL_280", 0);
			func_77(255, 255, 255, 255);
			func_76(0.275f, 0.83f, "CELL_281", 0);
		}
	}
	else if (Global_14455)
	{
	}
	else
	{
		func_77(255, 255, 255, 255);
		func_76(0.275f, 0.75f, func_62(), 0);
		func_77(255, 255, 255, 255);
		func_76(0.275f, 0.79f, "CELL_286", 0);
		func_77(255, 255, 255, 255);
		func_76(0.275f, 0.83f, "CELL_281", 0);
	}
}

void func_76(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
}

void func_77(int iParam0, int iParam1, int iParam2, int iParam3)
{
	UI::SET_TEXT_SCALE(0.4f, 0.4f);
	UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	UI::SET_TEXT_EDGE(1, 0, 0, 0, 205);
	UI::SET_TEXT_PROPORTIONAL(1);
	UI::SET_TEXT_FONT(0);
	UI::SET_TEXT_COLOUR(iParam0, iParam1, iParam2, iParam3);
}

void func_78()
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_38, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_39);
}

void func_79()
{
	CONTROLS::DISABLE_CONTROL_ACTION(0, 25, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 44, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 3, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 4, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 5, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 6, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 1, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 2, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 39, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 47, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 56, 1);
}

void func_80()
{
	vLocal_44 = { Global_14466[Global_14458 /*3*/] };
	if (Global_14455)
	{
		if (func_83())
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&vLocal_46);
			vLocal_44 = { vLocal_46 };
			iLocal_72 = 0;
			iLocal_73 = 0;
			iLocal_74 = 0;
		}
		func_1(1);
		if (iLocal_72)
		{
			vLocal_42.x = (vLocal_42.x + 12f);
		}
		if (vLocal_42.x > vLocal_44.x || vLocal_42.x == vLocal_44.x)
		{
			vLocal_42.x = vLocal_44.x;
			iLocal_72 = 0;
		}
		if (iLocal_73)
		{
			vLocal_42.y = (vLocal_42.y - 6f);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_2385, 4))
		{
			if (vLocal_42.y < (vLocal_44.y + 15f) || vLocal_42.y == (vLocal_44.y + 15f))
			{
				vLocal_42.y = (vLocal_44.y + 15f);
				iLocal_73 = 0;
			}
		}
		else if (vLocal_42.y < (vLocal_44.y + 10f) || vLocal_42.y == (vLocal_44.y + 10f))
		{
			vLocal_42.y = (vLocal_44.y + 10f);
			iLocal_73 = 0;
		}
		if (iLocal_74)
		{
			vLocal_42.z = (vLocal_42.z - 10f);
		}
		if (vLocal_42.z < vLocal_44.z || vLocal_42.z == vLocal_44.z)
		{
			vLocal_42.z = vLocal_44.z;
			iLocal_74 = 0;
		}
		if (func_83() == 0)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2385, 4))
			{
				vLocal_44.y = (vLocal_44.y + 15f);
			}
			else
			{
				vLocal_44.y = (vLocal_44.y + 10f);
			}
			vLocal_44.x = (vLocal_44.x - 14f);
		}
		else
		{
			vLocal_44 = { Global_14459[Global_14458 /*3*/] };
		}
		vLocal_42 = { vLocal_44 };
		iLocal_74 = 0;
		iLocal_73 = 0;
		iLocal_72 = 0;
		MOBILE::SET_MOBILE_PHONE_POSITION(vLocal_42);
		if ((iLocal_72 == 0 && iLocal_73 == 0) && iLocal_74 == 0)
		{
			iLocal_75 = 0;
			vLocal_43 = { -90.3f, 0f, 90f };
			MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_43, 0);
			if (!GAMEPLAY::IS_BIT_SET(Global_2383, 22))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_2383, 28))
				{
					StringCopy(&cLocal_96, "CELL_294", 16);
					func_82();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_293", 16);
					func_81();
				}
				iLocal_51 = 2;
			}
		}
	}
}

void func_81()
{
	func_139(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_139(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (GAMEPLAY::IS_BIT_SET(Global_2384, 28))
	{
		func_63(uLocal_92, "SET_DATA_SLOT", 0f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_286");
	}
	else
	{
		func_63(uLocal_92, "SET_DATA_SLOT", 1f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 178, true), "CELL_277");
		func_63(uLocal_92, "SET_DATA_SLOT", 0f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_GALSAVE");
	}
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uLocal_92, "SET_MAX_WIDTH");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fLocal_40);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	func_139(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_82()
{
	func_139(uLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_139(uLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (GAMEPLAY::IS_BIT_SET(Global_2384, 28))
	{
		func_63(uLocal_92, "SET_DATA_SLOT", 1f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, true), func_62());
		func_63(uLocal_92, "SET_DATA_SLOT", 0f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_286");
	}
	else
	{
		func_63(uLocal_92, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, true), func_62());
		func_63(uLocal_92, "SET_DATA_SLOT", 1f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 178, true), "CELL_277");
		func_63(uLocal_92, "SET_DATA_SLOT", 0f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_GALSAVE");
	}
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uLocal_92, "SET_MAX_WIDTH");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fLocal_40);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	func_139(uLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_83()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (Global_14513.f_1 == 10 || Global_14513.f_1 == 9)
		{
			if (Global_14456 == 0)
			{
				if (Global_1698 != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (Global_15822 != 2)
						{
						}
					}
				}
			}
		}
		if (func_58(14))
		{
			return 0;
		}
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!CAM::_0x4F32C0D5A90A9B40())
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
				{
					return 0;
				}
			}
		}
		if (((PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		if (Global_105118)
		{
			return 0;
		}
	}
	if (Global_71205)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || CAM::_0x4F32C0D5A90A9B40()))
	{
		iVar2 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if ((((((((VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar3)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar3))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iVar3))) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("rhino")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4268544 || iVar2 == 1)
	{
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) > 0 || Global_106070.f_14023.f_89)
		{
			if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael2")) > 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_84()
{
	CONTROLS::DISABLE_CONTROL_ACTION(0, 47, 1);
	CONTROLS::SET_INPUT_EXCLUSIVE(0, Global_14483);
	vLocal_43 = { Global_14473 };
	vLocal_44 = { Global_14466[Global_14458 /*3*/] };
	if (func_83())
	{
		MOBILE::GET_MOBILE_PHONE_ROTATION(&vLocal_45, 0);
		vLocal_43 = { vLocal_45 };
		MOBILE::GET_MOBILE_PHONE_POSITION(&vLocal_46);
		vLocal_44 = { vLocal_46 };
		iLocal_69 = 0;
		iLocal_70 = 0;
		iLocal_71 = 0;
		iLocal_72 = 0;
		iLocal_73 = 0;
		iLocal_74 = 0;
	}
	if (Global_14455)
	{
		func_139(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_54(0);
		iLocal_82 = 0;
		if (GAMEPLAY::IS_BIT_SET(Global_2383, 30))
		{
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			func_85();
		}
		if (iLocal_72)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2383, 9))
			{
				vLocal_42.x = (vLocal_42.x + 2f);
			}
			else
			{
				vLocal_42.x = (vLocal_42.x + 12f);
			}
		}
		if (vLocal_42.x > vLocal_44.x || vLocal_42.x == vLocal_44.x)
		{
			vLocal_42.x = vLocal_44.x;
			iLocal_72 = 0;
		}
		if (iLocal_73)
		{
			vLocal_42.y = (vLocal_42.y - 6f);
		}
		if (vLocal_42.y < vLocal_44.y || vLocal_42.y == vLocal_44.y)
		{
			vLocal_42.y = vLocal_44.y;
			iLocal_73 = 0;
		}
		if (iLocal_74)
		{
			vLocal_42.z = (vLocal_42.z - 10f);
		}
		if (vLocal_42.z < vLocal_44.z || vLocal_42.z == vLocal_44.z)
		{
			vLocal_42.z = vLocal_44.z;
			iLocal_74 = 0;
		}
		if (iLocal_74 == 0)
		{
			if (iLocal_69)
			{
				vLocal_41.x = (vLocal_41.x + 1f);
			}
			if (vLocal_41.x > vLocal_43.x || vLocal_41.x == vLocal_43.x)
			{
				vLocal_41.x = vLocal_43.x;
				iLocal_69 = 0;
			}
			if (iLocal_70)
			{
				vLocal_41.y = (vLocal_41.y - 2f);
			}
			if (vLocal_41.y < vLocal_43.y || vLocal_41.y == vLocal_43.y)
			{
				vLocal_41.y = vLocal_43.y;
				iLocal_70 = 0;
			}
			if (iLocal_71)
			{
				vLocal_41.z = (vLocal_41.z - 14f);
			}
			if (vLocal_41.z < vLocal_43.z || vLocal_41.z == vLocal_43.z)
			{
				vLocal_41.z = vLocal_43.z;
				iLocal_71 = 0;
			}
		}
		if (iLocal_77)
		{
			vLocal_41 = { vLocal_43 };
			vLocal_42 = { vLocal_44 };
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			if (func_83() == 0)
			{
				MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_41, 0);
				MOBILE::SET_MOBILE_PHONE_POSITION(vLocal_42);
			}
			func_96(0, 1);
		}
		else if (func_83() == 0)
		{
			MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_41, 0);
			MOBILE::SET_MOBILE_PHONE_POSITION(vLocal_42);
		}
		if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
		{
			func_85();
		}
	}
	else
	{
		if (iLocal_69)
		{
			vLocal_41.x = (vLocal_41.x + 1f);
		}
		if (vLocal_41.x > vLocal_43.x || vLocal_41.x == vLocal_43.x)
		{
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			vLocal_41.y = (vLocal_41.y - 2f);
		}
		if (vLocal_41.y < vLocal_43.y || vLocal_41.y == vLocal_43.y)
		{
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			vLocal_41.z = (vLocal_41.z - 7f);
		}
		if (vLocal_41.z < vLocal_43.z || vLocal_41.z == vLocal_43.z)
		{
			iLocal_71 = 0;
		}
		if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
		{
			func_85();
		}
	}
	MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_41, 0);
}

void func_85()
{
	func_1(0);
	if (func_83() == 0)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2383, 30))
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14459[Global_14458 /*3*/]);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14466[Global_14458 /*3*/]);
		}
		vLocal_41 = { vLocal_43 };
		MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_41, 0);
	}
	Global_16855 = 0;
	func_99(0, 0);
	func_103(0);
	iLocal_66 = 0;
	func_98();
	Global_14500 = 1;
	Global_16858 = 0;
	if (Global_14513.f_1 > 4)
	{
		Global_14513.f_1 = 6;
		Global_14491 = 1;
		func_86();
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_91))
	{
		func_138(uLocal_91, "SHUTDOWN_MOVIE");
	}
	SYSTEM::WAIT(0);
	UNK1::_0xEB2D525B57F42B40();
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_92);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_91);
	if (Global_14683 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2383, 17);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2383, 17);
	}
	GAMEPLAY::CLEAR_BIT(&Global_2383, 18);
	GAMEPLAY::CLEAR_BIT(&Global_2383, 21);
	UI::CLEAR_FLOATING_HELP(0, 1);
	GAMEPLAY::CLEAR_BIT(&Global_2385, 3);
	GAMEPLAY::CLEAR_BIT(&Global_4268330, 3);
	GAMEPLAY::SET_GAME_PAUSED(0);
	PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), 1);
	UI::RESET_HUD_COMPONENT_VALUES(15);
	Global_16859 = 1;
	AUDIO::STOP_SOUND(iLocal_63);
	AUDIO::RELEASE_SOUND_ID(iLocal_63);
	UI::_REMOVE_LOADING_PROMPT();
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
	}
	func_98();
	MOBILE::_0xA2CCBE62CD4C91A4(0);
	unk_0x375A706A5C2FD084(0);
	MOBILE::_0x1B0B4AEED5B9B41C(1f);
	if (Global_4267055 > 0 && Global_4267055 < 13)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_20[Global_4267055]);
	}
	func_96(0, 1);
	if (func_146(0, 1, iLocal_31, 1))
	{
		iLocal_31 = 0;
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_86()
{
	vector3 vVar0[24];
	
	if (Global_14496 == 1)
	{
		return;
	}
	if (Global_14513.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14494))
	{
		SYSTEM::WAIT(0);
	}
	switch (Global_14513.f_1)
	{
		case 6:
			func_139(Global_14494, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_90(Global_2988);
			if (Global_2988 == 1)
			{
				func_139(Global_14494, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14517), -1082130432, -1082130432, -1082130432);
				Global_14493 = Global_14517;
			}
			else
			{
				func_139(Global_14494, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14518), -1082130432, -1082130432, -1082130432);
				Global_14493 = Global_14518;
			}
			if (Global_14501)
			{
				func_89(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_89(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_89(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_89(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14683 == 0)
			{
				func_89(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				GAMEPLAY::CLEAR_BIT(&Global_2383, 17);
			}
			else if (Global_71205)
			{
				func_89(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				GAMEPLAY::CLEAR_BIT(&Global_2383, 17);
			}
			else
			{
				if (Global_14682 == 1)
				{
					if (Global_14501)
					{
						func_89(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_89(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14501)
				{
					func_89(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_89(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				GAMEPLAY::SET_BIT(&Global_2383, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_139(Global_14494, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_89(Global_14494, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_89(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_2383, 17);
			if (GAMEPLAY::IS_BIT_SET(Global_2383, 20))
			{
				func_89(Global_14494, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14501)
			{
				func_89(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14456)
				{
					func_89(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_89(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14512 == 1)
			{
				func_88();
				func_139(Global_14494, "SET_THEME", SYSTEM::TO_FLOAT(Global_106070.f_14023[Global_14513 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15835)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14494, "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(4);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_CONDFON");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_15837);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					func_59("CELL_300");
					func_59("CELL_217");
					func_59("CELL_217");
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				else if (Global_106070.f_28022[Global_1698 /*29*/].f_24[Global_14513] == 0)
				{
					func_89(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_117[Global_1698 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_89(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_106070.f_28022[Global_1698 /*29*/].f_3), &(Global_106070.f_28022[Global_1698 /*29*/].f_7), "CELL_217", &(Global_106070.f_28022[Global_1698 /*29*/].f_3), 0);
				}
				func_139(Global_14494, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15822 == 4 || Global_15822 == 3)
			{
				func_139(Global_14494, "SET_THEME", SYSTEM::TO_FLOAT(Global_106070.f_14023[Global_14513 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_88();
				if (Global_15835)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14494, "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(4);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_CONDFON");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_15837);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					func_59("CELL_300");
					func_59("CELL_219");
					func_59("CELL_219");
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				else
				{
					if (Global_16080)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (Global_106070.f_28022[Global_1698 /*29*/].f_24[Global_14513] == 0)
					{
						func_139(Global_14494, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_89(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_1698 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_139(Global_14494, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_89(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_106070.f_28022[Global_1698 /*29*/].f_3), &(Global_106070.f_28022[Global_1698 /*29*/].f_7), &cVar0, &(Global_106070.f_28022[Global_1698 /*29*/].f_3), 0);
					}
				}
				func_139(Global_14494, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_87();
			break;
		
		default:
			break;
	}
}

void func_87()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14494))
	{
		if (Global_14512 == 1)
		{
			if (Global_14501)
			{
				func_89(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_89(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15869)
			{
				func_89(Global_14494, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_2383, 20))
			{
				func_89(Global_14494, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14501)
			{
				func_89(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_89(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_89(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_2383, 17);
		}
		else
		{
			func_89(Global_14494, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_89(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_2383, 17);
			if (GAMEPLAY::IS_BIT_SET(Global_2383, 20))
			{
				func_89(Global_14494, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14501)
			{
				func_89(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14456)
				{
					func_89(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_89(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_88()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (Global_14513 == 0)
		{
			switch (Global_106070.f_14023[Global_14513 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14513 == 1)
		{
			switch (Global_106070.f_14023[Global_14513 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14513 == 2)
		{
			switch (Global_106070.f_14023[Global_14513 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14513 == 3)
		{
			switch (Global_4268542)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_89(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, sParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam6));
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_59(sParam7);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_59(sParam8);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_59(sParam9);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_59(sParam10);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_59(sParam11);
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_90(int iParam0)
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
	
	Global_16890 = 0;
	Global_2988 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2952[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_58(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2390[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2390[iVar1 /*15*/].f_4)
					{
						if (Global_2952[iVar0] == 0)
						{
							Global_2916[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_2384, 3))
								{
									iVar2 = 42;
									Global_14685 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14685 = 0;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14494, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2390[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_59(&(Global_2390[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar2);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							if (Global_2458186)
							{
								if (iVar1 == 14)
								{
									func_89(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16885), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2952[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2390[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2390[iVar1 /*15*/].f_4)
					{
						if (Global_2952[iVar0] == 0)
						{
							Global_2916[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_106070.f_14113[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_106070.f_14113[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_106070.f_14113[iVar3 /*104*/].f_99[Global_14513] == 1)
											{
												Global_16890++;
											}
										}
									}
									iVar3++;
								}
								func_89(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16890), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_71205)
								{
									iVar4 = 0;
									iVar4 = Global_4267064;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4267065[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4267065[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4267065[iVar5 /*104*/].f_99[Global_14513] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_89(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14513)
									{
										case 0:
											iVar6 = Global_37276;
											break;
										
										case 1:
											iVar6 = Global_37277;
											break;
										
										case 2:
											iVar6 = Global_37278;
											break;
										
										default:
											break;
									}
									func_89(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_89(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16885), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14494, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2390[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_59(&(Global_2390[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2389);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 2)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_2384, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14494, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2390[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_59(&(Global_2390[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar7);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 3)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_2384, 3))
								{
									iVar8 = 42;
									Global_14685 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14685 = 0;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14494, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2390[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_59(&(Global_2390[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar8);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14494, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2390[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_59(&(Global_2390[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(42);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if ((iVar1 == 23 && GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_2390[iVar1 /*15*/]), "CELL_BENWEB")) && GAMEPLAY::IS_BIT_SET(Global_2384, 6))
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14494, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2390[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_59(&(Global_2390[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(42);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (Global_2390[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1624079.f_1;
								func_89(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_89(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2952[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_91()
{
	switch (iLocal_51)
	{
		case 1:
			UI::CLEAR_FLOATING_HELP(0, 1);
			if (GAMEPLAY::IS_BIT_SET(Global_2383, 28))
			{
				StringCopy(&cLocal_96, "CELL_296", 16);
				func_51();
			}
			else
			{
				StringCopy(&cLocal_96, "CELL_295", 16);
				func_27();
			}
			break;
		
		case 2:
			if (!GAMEPLAY::IS_BIT_SET(Global_2383, 22))
			{
				UI::CLEAR_FLOATING_HELP(0, 1);
				if (GAMEPLAY::IS_BIT_SET(Global_2383, 28))
				{
					StringCopy(&cLocal_96, "CELL_294", 16);
					func_82();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_293", 16);
					func_81();
				}
				iLocal_51 = 2;
			}
			break;
		
		default:
			break;
	}
}

void func_92(bool bParam0)
{
	if (bParam0)
	{
		if (!func_101())
		{
			GAMEPLAY::SET_BIT(&Global_1678593, 17);
		}
	}
	else if (func_101())
	{
		GAMEPLAY::CLEAR_BIT(&Global_1678593, 17);
	}
}

int func_93(int iParam0, int iParam1, int iParam2)
{
	if (CONTROLS::IS_CONTROL_JUST_PRESSED(iParam0, iParam1) || (iParam2 == 1 && CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1)))
	{
		if (GAMEPLAY::IS_PC_VERSION())
		{
			if (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0 || (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE() && CONTROLS::_IS_INPUT_DISABLED(2)))
			{
				return 0;
			}
		}
		if (UI::IS_PAUSE_MENU_ACTIVE() || UI::IS_WARNING_MESSAGE_ACTIVE())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_94(bool bParam0)
{
	if (bParam0)
	{
		if (!func_95())
		{
			GAMEPLAY::SET_BIT(&Global_1678593, 18);
		}
	}
	else if (func_95())
	{
		GAMEPLAY::CLEAR_BIT(&Global_1678593, 18);
	}
}

bool func_95()
{
	return GAMEPLAY::IS_BIT_SET(Global_1678593, 18);
}

void func_96(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_97(0))
		{
			Global_14681 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_14450);
			}
			Global_14441 = { Global_14459[Global_14458 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14441);
		}
	}
	else if (Global_14681 == 1)
	{
		Global_14681 = 0;
		Global_14441 = { Global_14466[Global_14458 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14450);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14441);
		}
	}
}

int func_97(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14513.f_1 > 3)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2383, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14513.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_98()
{
	if ((Global_4456448.f_147498 == 0 && Global_4456448.f_147499 == 0) && Global_1664486 == 0)
	{
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	}
}

void func_99(int iParam0, int iParam1)
{
	if (Global_4456448.f_147498 == 1)
	{
	}
	else if (Global_4456448.f_147499 == 1)
	{
	}
	else
	{
		MOBILE::CELL_CAM_ACTIVATE(iParam0, iParam1);
	}
}

int func_100()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2383, 15))
	{
		return 1;
	}
	return 0;
}

bool func_101()
{
	return GAMEPLAY::IS_BIT_SET(Global_1678593, 17);
}

void func_102()
{
	if (Global_14455)
	{
		vLocal_43 = { -90.3f, 0f, 90f };
		vLocal_44 = { 1.5f, 0f, -17f };
		if (func_83())
		{
			MOBILE::GET_MOBILE_PHONE_ROTATION(&vLocal_45, 0);
			vLocal_43 = { vLocal_45 };
			MOBILE::GET_MOBILE_PHONE_POSITION(&vLocal_46);
			vLocal_44 = { vLocal_46 };
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			iLocal_72 = 0;
			iLocal_73 = 0;
			iLocal_74 = 0;
		}
		if (iLocal_71 == 0)
		{
			if (iLocal_72)
			{
				vLocal_42.x = (vLocal_42.x - 14f);
			}
			if (vLocal_42.x < vLocal_44.x || vLocal_42.x == vLocal_44.x)
			{
				iLocal_72 = 0;
			}
			if (iLocal_73)
			{
				vLocal_42.y = (vLocal_42.y + 7f);
			}
			if (vLocal_42.y > vLocal_44.y || vLocal_42.y == vLocal_44.y)
			{
				iLocal_73 = 0;
			}
			if (iLocal_74)
			{
				vLocal_42.z = (vLocal_42.z + 12f);
			}
			if (vLocal_42.z > vLocal_44.z || vLocal_42.z == vLocal_44.z)
			{
				iLocal_74 = 0;
			}
		}
		if (iLocal_69)
		{
			vLocal_41.x = (vLocal_41.x - 1f);
		}
		if (vLocal_41.x < vLocal_43.x || vLocal_41.x == vLocal_43.x)
		{
			vLocal_41.x = vLocal_43.x;
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			vLocal_41.y = (vLocal_41.y - 0.5f);
		}
		if (vLocal_41.y < vLocal_43.y || vLocal_41.y == vLocal_43.y)
		{
			vLocal_41.y = vLocal_43.y;
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			vLocal_41.z = (vLocal_41.z + 11f);
		}
		if (vLocal_41.z > vLocal_43.z || vLocal_41.z == vLocal_43.z)
		{
			vLocal_41.z = vLocal_43.z;
			iLocal_71 = 0;
		}
		if (func_83() == 0)
		{
			MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_41, 0);
			MOBILE::SET_MOBILE_PHONE_POSITION(vLocal_42);
		}
	}
	else
	{
		vLocal_43 = { -93.9f, 4.9f, 90.7f };
		if (iLocal_69)
		{
			vLocal_41.x = (vLocal_41.x - 1f);
		}
		if (vLocal_41.x < vLocal_43.x || vLocal_41.x == vLocal_43.x)
		{
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			vLocal_41.y = (vLocal_41.y + 2f);
		}
		if (vLocal_41.y > vLocal_43.y || vLocal_41.y == vLocal_43.y)
		{
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			vLocal_41.z = (vLocal_41.z + 7f);
		}
		if (vLocal_41.z > vLocal_43.z || vLocal_41.z == vLocal_43.z)
		{
			iLocal_71 = 0;
		}
		MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_41, 0);
	}
	if (Global_14455)
	{
		if (((((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0) && iLocal_72 == 0) && iLocal_73 == 0) && iLocal_74 == 0)
		{
			if (func_83())
			{
			}
			else
			{
				vLocal_41 = { vLocal_43 };
				MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_41, 0);
				vLocal_42 = { vLocal_44 };
				MOBILE::SET_MOBILE_PHONE_POSITION(vLocal_42);
			}
			if (iLocal_54 == 0)
			{
				Global_16856 = 0;
				func_99(1, 1);
				iLocal_66 = 1;
				func_103(1);
				func_56();
				func_104();
				func_54(0);
				SYSTEM::SETTIMERA(0);
				iLocal_93 = 1;
				iLocal_94 = 1;
				func_115();
				func_139(uLocal_91, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(iLocal_95), -1082130432, -1082130432, -1082130432, -1082130432);
				if (!GAMEPLAY::IS_BIT_SET(Global_4268330, 2))
				{
					func_139(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_139(uLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
				func_141();
			}
		}
	}
	else if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
	{
		vLocal_41 = { vLocal_43 };
		MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_41, 0);
		Global_16856 = 0;
	}
}

void func_103(bool bParam0)
{
	if (func_148())
	{
		if (bParam0)
		{
			if (!GRAPHICS::_0xBCEDB009461DA156())
			{
				GRAPHICS::_0x7AC24EAB6D74118D(1);
				if (Global_4267055 > 0 && Global_4267055 < 99)
				{
					GRAPHICS::_0x27FEB5254759CDE3(sLocal_20[Global_4267055], 0);
					MOBILE::_0x1B0B4AEED5B9B41C(0.25f);
				}
			}
		}
		else if (GRAPHICS::_0xBCEDB009461DA156())
		{
			GRAPHICS::_0x7AC24EAB6D74118D(0);
		}
	}
}

void func_104()
{
	if (Global_4267054 > 0 && Global_4267054 < 99)
	{
		if (Global_1664486 == 0)
		{
			GRAPHICS::SET_TIMECYCLE_MODIFIER(sLocal_19[Global_4267054]);
		}
	}
}

void func_105()
{
	if (Global_14455)
	{
		iLocal_76 = 0;
		func_56();
		func_96(1, 1);
		func_99(1, 1);
		iLocal_66 = 1;
		Global_16859 = 1;
	}
}

void func_106()
{
	if (Global_4456448.f_147498 == 1 && func_107(1))
	{
		return;
	}
	if (iLocal_78 == 0)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2383, 28))
		{
			StringCopy(&cLocal_96, "CELL_296", 16);
			func_51();
		}
		else
		{
			StringCopy(&cLocal_96, "CELL_295", 16);
			func_27();
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(&cLocal_96, "DUMMYCOMPARISON"))
		{
			fLocal_49 = fLocal_50;
			fLocal_47 = fLocal_48;
			fLocal_50 = fLocal_49;
			fLocal_48 = fLocal_47;
		}
		iLocal_51 = 1;
	}
}

int func_107(int iParam0)
{
	if ((func_110() || func_109()) || (func_108() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_108()
{
	return Global_2448386.f_16;
}

var func_109()
{
	return Global_2448386.f_15;
}

var func_110()
{
	return Global_2448386.f_14;
}

void func_111()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_14502, 1);
	}
}

void func_112()
{
	GRAPHICS::_0x1072F115DAB0717E(0, 0);
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 0;
	iLocal_76 = 1;
}

void func_113()
{
	func_114();
}

void func_114()
{
	if (iLocal_101)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_101 = 0;
		}
	}
	if (iLocal_101 == 0)
	{
	}
}

void func_115()
{
	if (Global_14513.f_1 > 3)
	{
		if (!UI::IS_PAUSE_MENU_ACTIVE())
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_91, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_116()
{
	if (func_58(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106070.f_28022[0 /*29*/])
			{
				Global_14513 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106070.f_28022[1 /*29*/])
			{
				Global_14513 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106070.f_28022[2 /*29*/])
			{
				Global_14513 = 2;
			}
			else
			{
				Global_14513 = 0;
			}
		}
	}
	else
	{
		Global_14513 = func_11();
		if (Global_14513 == 145)
		{
			Global_14513 = 3;
		}
		if (Global_71205)
		{
			Global_14513 = 3;
		}
		if (Global_14513 > 3)
		{
			Global_14513 = 3;
		}
	}
}

void func_117(int iParam0)
{
	if (func_119())
	{
		return;
	}
	if (Global_14681)
	{
		func_96(0, 0);
	}
	if (Global_14513.f_1 == 10 || Global_14513.f_1 == 9)
	{
		GAMEPLAY::SET_BIT(&Global_2384, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_15822 = 5;
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2383, 30);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2383, 30);
	}
	if (!func_118())
	{
		Global_14513.f_1 = 3;
	}
}

int func_118()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_119()
{
	return GAMEPLAY::IS_BIT_SET(Global_1678593, 19);
}

void func_120()
{
	CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 56, 1);
	if (iLocal_100 == 0)
	{
		CONTROLS::SET_INPUT_EXCLUSIVE(0, Global_14486);
		CONTROLS::SET_INPUT_EXCLUSIVE(0, Global_14483);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 278, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 279, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 280, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 281, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 282, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 282, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 284, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 285, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 69, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 70, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 114, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 71, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 72, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 74, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 76, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 73, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 77, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 78, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 286, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 287, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 79, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 81, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 82, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 86, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 59, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 60, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 61, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 62, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 63, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 64, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 87, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 88, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 89, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 90, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 107, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 108, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 109, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 110, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 111, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 112, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 113, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 114, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 91, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 92, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 68, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 102, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 136, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 137, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 138, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 139, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 102, 1);
	}
}

int func_121()
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, -1, 0))
			{
				return 1;
			}
			else if (!VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) == PLAYER::PLAYER_PED_ID())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_122()
{
	var uVar0;
	
	func_129(&uVar0);
	if (Global_1312834 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_128())
	{
		return 1;
	}
	if (Global_2460426)
	{
		return 1;
	}
	if (func_127())
	{
		return 1;
	}
	if (func_126(157))
	{
		if (!func_125())
		{
			return 1;
		}
	}
	if (func_126(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_123() != 0)
	{
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_123()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_123()
{
	switch (func_124())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_124()
{
	return Global_25459;
}

bool func_125()
{
	return Global_2448386.f_587;
}

int func_126(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_127()
{
	return Global_2458191;
}

bool func_128()
{
	return Global_2448386.f_582;
}

void func_129(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 171)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -563286670:
					func_130(iVar0);
					break;
				
				case 566035618:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &vVar3, 4);
					if (vVar3.z == -1989728150)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_130(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_132(vVar0.y, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_131(iVar2, &bVar3))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_131(int iParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, 1);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_132(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437022.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_133()
{
	if (iLocal_106 == 1)
	{
		UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
		UI::HIDE_HUD_COMPONENT_THIS_FRAME(1);
		UI::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		UI::HIDE_HUD_COMPONENT_THIS_FRAME(4);
		UI::HIDE_HUD_COMPONENT_THIS_FRAME(6);
		UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);
		UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
		UI::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	}
	else
	{
		UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
}

void func_134(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

bool func_135()
{
	return GAMEPLAY::IS_BIT_SET(Global_1678593, 5);
}

void func_136()
{
	if (func_137())
	{
		GRAPHICS::_0x4AF92ACD3141D96C();
		if (GRAPHICS::_0x2A893980E96B659A(0))
		{
			iLocal_54 = 1;
			iLocal_62 = 0;
		}
		else
		{
			Global_16859 = 1;
			Global_14513.f_1 = 3;
			UI::_REMOVE_LOADING_PROMPT();
		}
	}
	else
	{
		iLocal_60 = 0;
		iLocal_61 = 0;
		if (iLocal_55 == 1)
		{
			if (iLocal_78 == 0)
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_91))
				{
					if (func_148())
					{
						if (Global_4267055 == 0)
						{
							if (!GAMEPLAY::IS_BIT_SET(Global_4268330, 2))
							{
								func_139(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						func_139(uLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!GAMEPLAY::IS_BIT_SET(Global_4268330, 2))
						{
							func_139(uLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						func_139(uLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_91))
			{
				func_139(uLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_139(uLocal_91, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), -1082130432, -1082130432, -1082130432);
			}
			iLocal_55 = 0;
		}
		iLocal_62 = 0;
		UI::_REMOVE_LOADING_PROMPT();
	}
}

int func_137()
{
	if (Global_4456448.f_147498 == 1)
	{
		if (Global_71205)
		{
			return 0;
		}
	}
	if (Global_4456448.f_147499 == 1)
	{
		if (Global_71205)
		{
			return 0;
		}
	}
	if (GAMEPLAY::IS_XBOX360_VERSION() || GAMEPLAY::IS_PS3_VERSION())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2384, 28))
		{
			return 0;
		}
	}
	return 1;
}

void func_138(var uParam0, char* sParam1)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, sParam1);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_139(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, sParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

int func_140()
{
	if (Global_71205)
	{
		Global_14513 = 3;
	}
	else
	{
		Global_14513 = func_11();
	}
	if (Global_14513 > 3)
	{
		Global_14513 = 3;
	}
	return Global_106070.f_14023[Global_14513 /*20*/].f_7;
}

void func_141()
{
	if (Global_14513.f_1 > 3)
	{
		Global_14513.f_1 = 8;
	}
	Global_16858 = 0;
	iLocal_78 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		vLocal_34 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (Global_14455)
	{
		while (SYSTEM::TIMERA() < iLocal_88)
		{
			SYSTEM::WAIT(0);
			func_115();
			func_79();
			UNK1::_0xEB2D525B57F42B40();
		}
		func_138(uLocal_91, "OPEN_SHUTTER");
		func_133();
		func_106();
		iLocal_80 = 1;
		SYSTEM::SETTIMERB(0);
	}
	else
	{
		func_99(1, 1);
		func_103(1);
		func_56();
		func_104();
		func_54(0);
		iLocal_66 = 1;
	}
}

void func_142(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2383, 15);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2383, 15);
	}
}

bool func_143()
{
	return Global_1312834;
}

int func_144(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, iParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, iParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, 0))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

void func_145()
{
}

int func_146(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && bParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_147()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
			MOBILE::_0x53F4892D18EC90A4(fLocal_107);
			MOBILE::_0x3117D84EFA60F77B(fLocal_108);
			MOBILE::_0xAC2890471901861C(fLocal_109);
		}
		else
		{
			MOBILE::_0x53F4892D18EC90A4(fLocal_107);
			MOBILE::_0x3117D84EFA60F77B(fLocal_108);
			MOBILE::_0xAC2890471901861C(fLocal_109);
		}
	}
	MOBILE::_0x15E69E2802C24B8D(fLocal_110);
	MOBILE::_0xD6ADE981781FCA09(fLocal_111);
	MOBILE::_0xF1E22DC13F5EEBAD(fLocal_112);
	MOBILE::_0x466DA42C89865553(fLocal_113);
	func_53();
}

int func_148()
{
	if (iLocal_23 == 0)
	{
		iLocal_23 = 1;
	}
	return 1;
}

