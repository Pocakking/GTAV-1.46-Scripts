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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<9> Local_44 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_45[46] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_46 = 0;
	var uLocal_47[2] = { 0, 0 };
	float fLocal_48 = 0f;
	int iLocal_49 = 0;
	vector3 vLocal_50 = { 0f, 0f, 0f };
	int iLocal_51 = 0;
	vector3 vLocal_52 = { 0f, 0f, 0f };
	float fLocal_53 = 0f;
	struct<67> Local_54 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_67 = 0;
	struct<261> Local_68[4];
	char* sLocal_69[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_70 = NULL;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	char* sLocal_79 = NULL;
	var uLocal_80 = 16;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	int iLocal_245 = 0;
	var uLocal_246 = 0;
	int iLocal_247 = 0;
#endregion

void __EntryFunction__()
{
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_43 = 145;
	iLocal_46 = -1;
	fLocal_48 = 0f;
	vLocal_50 = { 0f, 0f, 0f };
	vLocal_52 = { 0f, 0f, 0f };
	fLocal_53 = 0f;
	iLocal_67 = 1;
	sLocal_70 = "";
	iLocal_73 = -1;
	iLocal_76 = -1;
	iLocal_78 = -1;
	if (!func_251(31))
	{
		iLocal_37 = Global_106070.f_10021.f_128;
		if (iLocal_37 == 2)
		{
			GAMEPLAY::SET_BIT(&iLocal_49, 10);
			vLocal_52 = { func_250(25) };
			fLocal_53 = func_249(25);
			if (func_248(&Local_54, 25))
			{
				if (!GAMEPLAY::IS_BIT_SET(iLocal_49, 14))
				{
					GAMEPLAY::SET_BIT(&iLocal_49, 14);
				}
			}
		}
		else if (iLocal_37 == 1)
		{
		}
	}
	else
	{
		func_246("AM_H_PREP8", 2, 0, -1, 10000, 7, 0, 0, 0);
		Global_106070.f_10021.f_128 = iLocal_37;
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 2)
		{
			func_237(0);
			func_236();
			func_234(31, 1);
		}
		else
		{
			func_236();
			func_234(31, 0);
		}
	}
	func_229(2);
	vLocal_50 = { -166.1555f, -621.9833f, 31.4281f };
	while (true)
	{
		if (func_228(85))
		{
			func_224("AM_H_PREP8", 1);
			func_234(31, 0);
		}
		if (func_223(PLAYER::PLAYER_PED_ID()))
		{
			func_216();
			func_208();
			func_207();
			func_196();
			switch (iLocal_37)
			{
				case 0:
					func_165();
					break;
				
				case 1:
					func_133();
					break;
				
				case 2:
					func_132();
					break;
				
				case 3:
					func_125();
					break;
				
				case 4:
					func_15(34);
					break;
				
				case 5:
					break;
				
				default:
					break;
			}
			func_7();
		}
		else
		{
			func_1(46, 1);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (46 - 1))
	{
		if (iParam0 != iVar0 && iParam0 != 46)
		{
			func_4(iVar0);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (iParam0 != 46)
		{
			if ((!func_2(func_3(iParam0)) && !Global_104710) && !GAMEPLAY::IS_BIT_SET(iLocal_49, 15))
			{
				GAMEPLAY::SET_BIT(&iLocal_49, 15);
				UI::CLEAR_HELP(1);
			}
		}
		else if ((UI::IS_HELP_MESSAGE_BEING_DISPLAYED() && !Global_104710) && !GAMEPLAY::IS_BIT_SET(iLocal_49, 15))
		{
			GAMEPLAY::SET_BIT(&iLocal_49, 15);
			UI::CLEAR_HELP(1);
		}
	}
}

int func_2(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

var func_3(int iParam0)
{
	return sLocal_45[iParam0];
}

void func_4(int iParam0)
{
	int iVar0;
	
	iVar0 = func_6(iParam0);
	GAMEPLAY::CLEAR_BIT(&(uLocal_47[func_5(iParam0)]), iVar0);
}

int func_5(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 32)
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_6(int iParam0)
{
	if (iParam0 > 31)
	{
		return (iParam0 - 32);
	}
	return iParam0;
}

void func_7()
{
	if (((GAMEPLAY::IS_BIT_SET(iLocal_49, 0) && !GAMEPLAY::IS_BIT_SET(iLocal_49, 1)) && !GAMEPLAY::IS_BIT_SET(iLocal_49, 14)) && func_12())
	{
		if (func_11(0, 172, 0) || func_11(0, 173, 0))
		{
			iLocal_78 = GAMEPLAY::GET_GAME_TIMER();
		}
		if (iLocal_78 != -1)
		{
			if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_78) < 200)
			{
				iLocal_43 = func_8();
			}
			else
			{
				iLocal_78 = -1;
			}
		}
	}
	else
	{
		iLocal_43 = 145;
		iLocal_78 = -1;
	}
}

int func_8()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar2 = 0;
	iVar3 = 145;
	if (Global_71205)
	{
		iVar3 = 145;
	}
	else if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14494) == 1)
	{
		if (func_10())
		{
			if (func_9())
			{
				iVar6 = 0;
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14494, "GET_CURRENT_SELECTION");
				iVar0 = GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION();
				iVar4 = GAMEPLAY::GET_GAME_TIMER();
				while ((!GRAPHICS::_0x768FF8961BA904D6(iVar0) && iVar6 == 0) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14494) == 1)
				{
					SYSTEM::WAIT(0);
					iVar5 = GAMEPLAY::GET_GAME_TIMER();
					if ((iVar5 - iVar4) > 1500)
					{
						iVar6 = 1;
					}
				}
				iVar1 = GRAPHICS::_0x2DE7EFA66B906036(iVar0);
				if (iVar1 > 157 || iVar1 < 0)
				{
					iVar1 = 157;
				}
				iVar2 = Global_14519[iVar1];
				iVar3 = iVar2;
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14494) == 0)
				{
					iVar3 = 145;
				}
				if (iVar6 == 1)
				{
					iVar3 = 145;
				}
			}
			else
			{
				iVar3 = 145;
			}
		}
		else
		{
			iVar3 = 145;
		}
	}
	else
	{
		iVar3 = 145;
	}
	return iVar3;
}

int func_9()
{
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_10()
{
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcontacts")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_11(int iParam0, int iParam1, int iParam2)
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

int func_12()
{
	if (func_14(0) && func_13())
	{
		return 1;
	}
	return 0;
}

int func_13()
{
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcontacts")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_14(int iParam0)
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

void func_15(int iParam0)
{
	func_107();
	if (iLocal_40 == 0)
	{
		switch (iLocal_41)
		{
			case 0:
				func_106(1);
				iLocal_74 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_BIG_MESSAGE_FREEMODE");
				func_1(46, 1);
				iLocal_75 = GAMEPLAY::GET_GAME_TIMER() + 3000;
				if (!GAMEPLAY::IS_BIT_SET(iLocal_49, 10))
				{
					func_90();
				}
				func_89(iParam0, 1);
				iLocal_41 = 1;
				break;
			
			case 1:
				if (GAMEPLAY::GET_GAME_TIMER() > iLocal_75)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_74))
					{
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_74, "SHOW_MISSION_PASSED_MESSAGE");
						func_88("M_FB4P3_P");
						func_88("M_FB4P3");
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(100);
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
						GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
						iLocal_75 = GAMEPLAY::GET_GAME_TIMER() + 10000;
						func_86(0);
						iLocal_41 = 2;
					}
				}
				break;
			
			case 2:
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_74) && AUDIO::_0x6F259F82D873B8B8())
				{
					if (GAMEPLAY::GET_GAME_TIMER() < iLocal_75)
					{
						GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_74, 0.5f, 0.3f, 1f, 1f, 255, 255, 255, 255, 0);
					}
					else if (GAMEPLAY::GET_GAME_TIMER() < iLocal_75 + 100)
					{
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_74, "TRANSITION_OUT");
						GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
						iLocal_75 = (iLocal_75 - 100);
					}
					else if (GAMEPLAY::GET_GAME_TIMER() < iLocal_75 + 500)
					{
						GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_74, 0.5f, 0.3f, 1f, 1f, 255, 255, 255, 255, 0);
					}
					else
					{
						iLocal_41 = 3;
					}
				}
				break;
			
			case 3:
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_74))
				{
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_74);
				}
				func_106(0);
				if (iLocal_42 == 2)
				{
					func_85(108, 0);
				}
				if (func_83(iLocal_51))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_51, 1);
				}
				func_79("M_FHPE", func_80());
				func_76(2, 0);
				break;
			}
	}
	func_16();
}

void func_16()
{
	int iVar0;
	
	if (!GAMEPLAY::IS_BIT_SET(iLocal_49, 2))
	{
		if (!func_75(0f, 0f, 0f, vLocal_52, 0))
		{
			if (func_74(PLAYER::PLAYER_PED_ID(), vLocal_52, 100f) && !func_73())
			{
				if (func_83(func_72(25)))
				{
					iLocal_51 = func_72(25);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_51, true, 1);
					if (func_83(iLocal_51))
					{
						if (!DECORATOR::DECOR_EXIST_ON(iLocal_51, "GetawayVehicleValid"))
						{
							if (DECORATOR::DECOR_SET_BOOL(iLocal_51, "GetawayVehicleValid", 1))
							{
							}
						}
						GAMEPLAY::SET_BIT(&iLocal_49, 0);
						GAMEPLAY::SET_BIT(&iLocal_49, 2);
					}
				}
				else if (!func_71(25, 0))
				{
					if (!func_83(func_72(25)))
					{
						func_67(1);
					}
				}
			}
			else if (func_83(iLocal_51))
			{
				if (!func_74(PLAYER::PLAYER_PED_ID(), vLocal_52, 100f))
				{
				}
			}
		}
	}
	else
	{
		if (!func_75(0f, 0f, 0f, vLocal_52, 0))
		{
			if (!func_74(PLAYER::PLAYER_PED_ID(), vLocal_52, 100f))
			{
				if (func_83(iLocal_51))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_51, 0))
					{
						func_20(iLocal_51, vLocal_52, fLocal_53, 25, 1);
						GAMEPLAY::CLEAR_BIT(&iLocal_49, 2);
						VEHICLE::_0x02398B627547189C(iLocal_51, 0);
						func_19(&iLocal_51);
						GAMEPLAY::CLEAR_BIT(&iLocal_49, 0);
					}
					else
					{
						func_67(0);
					}
				}
				else if (!func_71(25, 0))
				{
					func_67(1);
				}
			}
			else if (!func_71(25, 0))
			{
				if (!func_83(iLocal_51))
				{
					func_67(1);
				}
			}
			else if (!func_83(iLocal_51))
			{
				iVar0 = func_72(25);
				if (func_83(iVar0) && iVar0 != iLocal_51)
				{
					iLocal_51 = iVar0;
				}
			}
		}
		func_17();
	}
}

void func_17()
{
	if (GAMEPLAY::IS_BIT_SET(iLocal_49, 2) && GAMEPLAY::IS_BIT_SET(iLocal_49, 0))
	{
		if (func_83(iLocal_51))
		{
			if (func_18(PLAYER::PLAYER_PED_ID(), iLocal_51, 10f, 1))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_51, true), vLocal_52) >= 100f)
				{
					func_67(0);
				}
			}
		}
		else if (!func_71(25, 0))
		{
			if (func_83(iLocal_51))
			{
				VEHICLE::_0x02398B627547189C(iLocal_51, 0);
			}
			func_19(&iLocal_51);
			func_67(1);
		}
	}
}

bool func_18(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3)) <= (fParam2 * fParam2);
}

void func_19(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*iParam0, 0);
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, 1))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_20(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)
{
	struct<60> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_70024.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_70024.f_484[25], 0))
			{
				if (Global_70024.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_66(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_61(iParam0, &Var0);
		if (func_75(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			fParam2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam3 == 24)
		{
			if (GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_71012 = GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		func_55(iParam3, &Var0, vParam1, fParam2, func_60(iParam0));
		func_21(iParam3, iParam0, 0);
	}
}

void func_21(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_51(&(Global_70024.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_70024.f_555[0 /*21*/].f_9, 12) && !GAMEPLAY::IS_BIT_SET(Global_70024.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_70024.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_70931 != -1 && Global_70931 != iParam0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_106070.f_32605.f_4801 = func_40();
			}
			if (iParam1 != Global_70024.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_72(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && iParam1 != iVar0)
					{
						func_22(iVar0, 145);
					}
				}
				Global_70930 = iParam1;
				Global_70931 = iParam0;
				Global_70932 = iParam2;
			}
		}
	}
}

void func_22(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_23(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_106070.f_2355.f_539.f_4301;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_106070.f_32605.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_106070.f_32605.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (GAMEPLAY::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_106070.f_32605.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_106070.f_32605.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_106070.f_32605.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_106070.f_32605.f_5600[iVar1 /*78*/].f_66)
		{
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_106070.f_32605.f_5600[iVar1 /*78*/].f_1)))
			{
				if (GAMEPLAY::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_106070.f_32605.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_106070.f_32605.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_106070.f_32605.f_5590 = iParam1;
	Global_70929 = iParam0;
	Global_106070.f_32605.f_5588 = 1;
	func_61(iParam0, &(Global_106070.f_32605.f_5510));
}

int func_23(int iParam0)
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_38(iParam0, 0, 0)) || func_38(iParam0, 1, 0)) || func_38(iParam0, 2, 0)) || func_60(iParam0) != 145) || func_37(iParam0)) || func_36(iParam0)) || func_35(iParam0)) || func_34(iParam0)) || !func_24(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_36(iParam0))
		{
		}
		if (func_36(iParam0))
		{
		}
		if (func_38(iParam0, 0, 0))
		{
		}
		if (func_38(iParam0, 1, 0))
		{
		}
		if (func_38(iParam0, 2, 0))
		{
		}
		if (func_60(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_24(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_25(iParam0, 0))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case 1938952078:
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_25(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_33())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < DLC1::GET_NUM_DLC_VEHICLES())
		{
			if (DLC1::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (DLC1::_IS_DLC_DATA_EMPTY(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_32() && !func_31()) && !func_30()) && !func_29()) && !func_33())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((GAMEPLAY::IS_DURANGO_VERSION() || GAMEPLAY::IS_PC_VERSION()) || GAMEPLAY::IS_ORBIS_VERSION())
		{
		}
		else if (!func_30())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_28(iParam0))
		{
			return 0;
		}
	}
	if (!func_26(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_26(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_27())
	{
		return 1;
	}
	unk_0x0B2954993B98F51D(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x3B6DCE62F381F366(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_27()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

int func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2503689)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::_GET_POSIX_TIME();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6488 && !Global_262145.f_12797) && iVar1 < Global_262145.f_12798)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14095 && iVar1 < Global_262145.f_14107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14091 && iVar1 < Global_262145.f_14103)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14092 && iVar1 < Global_262145.f_14104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14093 && iVar1 < Global_262145.f_14105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14094 && iVar1 < Global_262145.f_14106)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14096 && iVar1 < Global_262145.f_14108)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14097 && iVar1 < Global_262145.f_14100)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14098 && iVar1 < Global_262145.f_14101)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14099 && iVar1 < Global_262145.f_14102)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16727 && iVar1 < Global_262145.f_16691)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16722 && iVar1 < Global_262145.f_16686)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16726 && iVar1 < Global_262145.f_16690)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16725 && iVar1 < Global_262145.f_16689)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16719 && iVar1 < Global_262145.f_16683)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16720 && iVar1 < Global_262145.f_16684)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16723 && iVar1 < Global_262145.f_16687)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16724 && iVar1 < Global_262145.f_16688)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16721 && iVar1 < Global_262145.f_16685)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16729 && iVar1 < Global_262145.f_16693)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16730 && iVar1 < Global_262145.f_16694)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16718 && iVar1 < Global_262145.f_16682)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16717 && iVar1 < Global_262145.f_16681)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16716 && iVar1 < Global_262145.f_16680)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16728 && iVar1 < Global_262145.f_16692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16731 && iVar1 < Global_262145.f_16695)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16732 && iVar1 < Global_262145.f_16696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16733 && iVar1 < Global_262145.f_16697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16734 && iVar1 < Global_262145.f_16698)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16879 && iVar1 < Global_262145.f_16901)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16880 && iVar1 < Global_262145.f_16902)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16881 && iVar1 < Global_262145.f_16903)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16882 && iVar1 < Global_262145.f_16904)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16883 && iVar1 < Global_262145.f_16905)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16884 && iVar1 < Global_262145.f_16906)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16886 && iVar1 < Global_262145.f_16907)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16887 && iVar1 < Global_262145.f_16908)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16888 && iVar1 < Global_262145.f_16909)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16889 && iVar1 < Global_262145.f_16910)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16890 && iVar1 < Global_262145.f_16911)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16891 && iVar1 < Global_262145.f_16912)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16892 && iVar1 < Global_262145.f_16913)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16898 && iVar1 < Global_262145.f_16920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16895 && iVar1 < Global_262145.f_16916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16896 && iVar1 < Global_262145.f_16917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16897 && iVar1 < Global_262145.f_16918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16885 && iVar1 < Global_262145.f_16919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16899 && iVar1 < Global_262145.f_16921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16893 && iVar1 < Global_262145.f_16914)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16894 && iVar1 < Global_262145.f_16915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16900 && iVar1 < Global_262145.f_16922)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18528 && iVar1 < Global_262145.f_18625)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18529 && iVar1 < Global_262145.f_18626)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18530 && iVar1 < Global_262145.f_18627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18531 && iVar1 < Global_262145.f_18628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18532 && iVar1 < Global_262145.f_18629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18533 && iVar1 < Global_262145.f_18630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18534 && iVar1 < Global_262145.f_18631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18535 && iVar1 < Global_262145.f_18632)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18536 && iVar1 < Global_262145.f_18633)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18537 && iVar1 < Global_262145.f_18634)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18538 && iVar1 < Global_262145.f_18635)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18539 && iVar1 < Global_262145.f_18636)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18540 && iVar1 < Global_262145.f_18637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18541 && iVar1 < Global_262145.f_18638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18542 && iVar1 < Global_262145.f_18639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18543 && iVar1 < Global_262145.f_18640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18544 && iVar1 < Global_262145.f_18641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18545 && iVar1 < Global_262145.f_18642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18546 && iVar1 < Global_262145.f_18643)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18547 && iVar1 < Global_262145.f_18644)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18548 && iVar1 < Global_262145.f_18645)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18549 && iVar1 < Global_262145.f_18646)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18550 && iVar1 < Global_262145.f_18647)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18551 && iVar1 < Global_262145.f_18648)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18552 && iVar1 < Global_262145.f_18649)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1234311532)
	{
		if (!Global_262145.f_19608 && iVar1 < Global_262145.f_19604)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1405937764)
	{
		if (!Global_262145.f_19609 && iVar1 < Global_262145.f_19605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 719660200)
	{
		if (!Global_262145.f_19610 && iVar1 < Global_262145.f_19606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -982130927)
	{
		if (!Global_262145.f_19611 && iVar1 < Global_262145.f_19607)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 917809321)
	{
		if (!Global_262145.f_20487 && iVar1 < Global_262145.f_20495)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223240013)
	{
		if (!Global_262145.f_20488 && iVar1 < Global_262145.f_20496)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1504306544)
	{
		if (!Global_262145.f_20489 && iVar1 < Global_262145.f_20497)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1939284556)
	{
		if (!Global_262145.f_20490 && iVar1 < Global_262145.f_20498)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 159274291)
	{
		if (!Global_262145.f_20491 && iVar1 < Global_262145.f_20499)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 433954513)
	{
		if (!Global_262145.f_20492 && iVar1 < Global_262145.f_20500)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1763555241)
	{
		if (!Global_262145.f_21264 && iVar1 < Global_262145.f_21284)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -749299473)
	{
		if (!Global_262145.f_21276 && iVar1 < Global_262145.f_21296)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -975345305)
	{
		if (!Global_262145.f_21267 && iVar1 < Global_262145.f_21287)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1700874274)
	{
		if (!Global_262145.f_21277 && iVar1 < Global_262145.f_21297)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -392675425)
	{
		if (!Global_262145.f_21265 && iVar1 < Global_262145.f_21285)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1043222410)
	{
		if (!Global_262145.f_21281 && iVar1 < Global_262145.f_21301)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1386191424)
	{
		if (!Global_262145.f_21279 && iVar1 < Global_262145.f_21299)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1565978651)
	{
		if (!Global_262145.f_21280 && iVar1 < Global_262145.f_21300)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1036591958)
	{
		if (!Global_262145.f_21275 && iVar1 < Global_262145.f_21295)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -32878452)
	{
		if (!Global_262145.f_21282 && iVar1 < Global_262145.f_21302)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -42959138)
	{
		if (!Global_262145.f_21278 && iVar1 < Global_262145.f_21298)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1984275979)
	{
		if (!Global_262145.f_21274 && iVar1 < Global_262145.f_21294)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1007528109)
	{
		if (!Global_262145.f_21266 && iVar1 < Global_262145.f_21286)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523619738)
	{
		if (!Global_262145.f_21268 && iVar1 < Global_262145.f_21288)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1392481335)
	{
		if (!Global_262145.f_21269 && iVar1 < Global_262145.f_21289)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -998177792)
	{
		if (!Global_262145.f_21270 && iVar1 < Global_262145.f_21290)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1242608589)
	{
		if (!Global_262145.f_21271 && iVar1 < Global_262145.f_21291)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1841130506)
	{
		if (!Global_262145.f_21272 && iVar1 < Global_262145.f_21292)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2049897956)
	{
		if (!Global_262145.f_21273 && iVar1 < Global_262145.f_21293)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1483171323)
	{
		if (!Global_262145.f_22225 && iVar1 < Global_262145.f_22253)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_262145.f_22226 && iVar1 < Global_262145.f_22254)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1693015116)
	{
		if (!Global_262145.f_22227 && iVar1 < Global_262145.f_22255)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -692292317)
	{
		if (!Global_262145.f_22228 && iVar1 < Global_262145.f_22256)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1435527158)
	{
		if (!Global_262145.f_22229 && iVar1 < Global_262145.f_22257)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181327175)
	{
		if (!Global_262145.f_22230 && iVar1 < Global_262145.f_22258)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1489874736)
	{
		if (!Global_262145.f_22231 && iVar1 < Global_262145.f_22259)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -212993243)
	{
		if (!Global_262145.f_22232 && iVar1 < Global_262145.f_22260)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 447548909)
	{
		if (!Global_262145.f_22233 && iVar1 < Global_262145.f_22261)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1561920505)
	{
		if (!Global_262145.f_22234 && iVar1 < Global_262145.f_22262)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1848994066)
	{
		if (!Global_262145.f_22235 && iVar1 < Global_262145.f_22263)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_262145.f_22236 && iVar1 < Global_262145.f_22264)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1104234922)
	{
		if (!Global_262145.f_22237 && iVar1 < Global_262145.f_22265)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1871995513)
	{
		if (!Global_262145.f_22238 && iVar1 < Global_262145.f_22266)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1352136073)
	{
		if (!Global_262145.f_22239 && iVar1 < Global_262145.f_22267)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -313185164)
	{
		if (!Global_262145.f_22240 && iVar1 < Global_262145.f_22268)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2079788230)
	{
		if (!Global_262145.f_22241 && iVar1 < Global_262145.f_22269)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 600450546)
	{
		if (!Global_262145.f_22242 && iVar1 < Global_262145.f_22270)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -410205223)
	{
		if (!Global_262145.f_22243 && iVar1 < Global_262145.f_22271)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 867799010)
	{
		if (!Global_262145.f_22244 && iVar1 < Global_262145.f_22272)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1529242755)
	{
		if (!Global_262145.f_22245 && iVar1 < Global_262145.f_22273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 903794909)
	{
		if (!Global_262145.f_22246 && iVar1 < Global_262145.f_22274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1532697517)
	{
		if (!Global_262145.f_22247 && iVar1 < Global_262145.f_22275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15219735)
	{
		if (!Global_262145.f_22248 && iVar1 < Global_262145.f_22276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 661493923)
	{
		if (!Global_262145.f_22249 && iVar1 < Global_262145.f_22277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 838982985)
	{
		if (!Global_262145.f_22250 && iVar1 < Global_262145.f_22278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -391595372)
	{
		if (!Global_262145.f_22251 && iVar1 < Global_262145.f_22279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -121446169)
	{
		if (!Global_262145.f_22252 && iVar1 < Global_262145.f_22280)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1909189272)
	{
		if (!Global_262145.f_23432 && iVar1 < Global_262145.f_23448)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1617472902)
	{
		if (!Global_262145.f_23433 && iVar1 < Global_262145.f_23449)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1267543371)
	{
		if (!Global_262145.f_23437 && iVar1 < Global_262145.f_23453)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 931280609)
	{
		if (!Global_262145.f_23440 && iVar1 < Global_262145.f_23456)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1046206681)
	{
		if (!Global_262145.f_23445 && iVar1 < Global_262145.f_23461)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1259134696)
	{
		if (!Global_262145.f_23439 && iVar1 < Global_262145.f_23455)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1115909093)
	{
		if (!Global_262145.f_23431 && iVar1 < Global_262145.f_23447)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1031562256)
	{
		if (!Global_262145.f_23438 && iVar1 < Global_262145.f_23454)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -376434238)
	{
		if (!Global_262145.f_23444 && iVar1 < Global_262145.f_23460)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -986944621)
	{
		if (!Global_262145.f_23443 && iVar1 < Global_262145.f_23459)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1134706562)
	{
		if (!Global_262145.f_23434 && iVar1 < Global_262145.f_23450)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2120700196)
	{
		if (!Global_262145.f_23436 && iVar1 < Global_262145.f_23452)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -214906006)
	{
		if (!Global_262145.f_23446 && iVar1 < Global_262145.f_23462)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -988501280)
	{
		if (!Global_262145.f_23442 && iVar1 < Global_262145.f_23458)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1254014755)
	{
		if (!Global_262145.f_23435 && iVar1 < Global_262145.f_23451)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -726768679)
	{
		if (!Global_262145.f_23441 && iVar1 < Global_262145.f_23457)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1988428699)
	{
		if (!Global_262145.f_23522 && iVar1 < Global_262145.f_23509)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 345756458)
	{
		if (!Global_262145.f_23523 && iVar1 < Global_262145.f_23510)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1945374990)
	{
		if (!Global_262145.f_23528 && iVar1 < Global_262145.f_23515)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1653666139)
	{
		if (!Global_262145.f_23527 && iVar1 < Global_262145.f_23514)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 500482303)
	{
		if (!Global_262145.f_23525 && iVar1 < Global_262145.f_23512)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2044532910)
	{
		if (!Global_262145.f_23531 && iVar1 < Global_262145.f_23518)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -638562243)
	{
		if (!Global_262145.f_23533 && iVar1 < Global_262145.f_23520)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1692272545)
	{
		if (!Global_262145.f_23534 && iVar1 < Global_262145.f_23521)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2069146067)
	{
		if (!Global_262145.f_23532 && iVar1 < Global_262145.f_23519)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -420911112)
	{
		if (!Global_262145.f_23524 && iVar1 < Global_262145.f_23511)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 321186144)
	{
		if (!Global_262145.f_23526 && iVar1 < Global_262145.f_23513)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -54332285)
	{
		if (!Global_262145.f_23530 && iVar1 < Global_262145.f_23517)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -307958377)
	{
		if (!Global_262145.f_23529 && iVar1 < Global_262145.f_23516)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1721676810)
	{
	}
	else if (iParam0 == -801550069)
	{
	}
	else if (iParam0 == 679453769)
	{
	}
	else if (iParam0 == 1909700336)
	{
	}
	else if (iParam0 == 2139203625)
	{
	}
	else if (iParam0 == -1890996696)
	{
	}
	else if (iParam0 == 2038858402)
	{
	}
	else if (iParam0 == -1146969353)
	{
	}
	else if (iParam0 == 1542143200)
	{
	}
	else if (iParam0 == -579747861)
	{
	}
	else if (iParam0 == 444994115)
	{
	}
	else if (iParam0 == 1637620610)
	{
	}
	else if (iParam0 == -755532233)
	{
	}
	else if (iParam0 == 540101442)
	{
	}
	else if (iParam0 == -1106120762)
	{
	}
	else if (iParam0 == -1478704292)
	{
	}
	else if (iParam0 == -2096690334)
	{
	}
	else if (iParam0 == 1591739866)
	{
		if (!Global_262145.f_25628 && iVar1 < Global_262145.f_25630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1168952148)
	{
		if (!Global_262145.f_24683 && iVar1 < Global_262145.f_24676)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1566607184)
	{
		if (!Global_262145.f_24684 && iVar1 < Global_262145.f_24677)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -331467772)
	{
		if (!Global_262145.f_24685 && iVar1 < Global_262145.f_24678)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1279262537)
	{
		if (!Global_262145.f_24686 && iVar1 < Global_262145.f_24679)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -49115651)
	{
		if (!Global_262145.f_25629 && iVar1 < Global_262145.f_25631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456744817)
	{
		if (!Global_262145.f_24687 && iVar1 < Global_262145.f_24680)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -507495760)
	{
		if (!Global_262145.f_24688 && iVar1 < Global_262145.f_24681)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -286046740)
	{
		if (!Global_262145.f_24689 && iVar1 < Global_262145.f_24682)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_29()
{
	return 0;
}

int func_30()
{
	return 1;
}

int func_31()
{
	return 1;
}

int func_32()
{
	if (DLC2::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_33()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (NETWORK::_0x91B87C55093DE351())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				GAMEPLAY::SET_BIT(&iVar0, 2);
				GAMEPLAY::SET_BIT(&iVar0, 4);
				GAMEPLAY::SET_BIT(&iVar0, 6);
				GAMEPLAY::SET_BIT(&Global_25, 2);
				GAMEPLAY::SET_BIT(&Global_25, 4);
				GAMEPLAY::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (GAMEPLAY::_0x5AA3BEFA29F03AD4())
				{
					iVar0 = GAMEPLAY::GET_PROFILE_SETTING(866);
					GAMEPLAY::SET_BIT(&iVar0, 0);
					STATS::_0xDAC073C7901F9E15(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_144765 == 2)
	{
		return 1;
	}
	else if (Global_144765 == 3)
	{
		return 0;
	}
	if (GAMEPLAY::_0x5AA3BEFA29F03AD4())
	{
		if (GAMEPLAY::IS_BIT_SET(GAMEPLAY::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_34(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && GAMEPLAY::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_25(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_35(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_90688[iVar0]))
		{
			if (Global_90688[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_36(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_90658[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_90658[iVar0], 0))
			{
				if (Global_90658[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_90658[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_37(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_70024.f_484[24]))
	{
		if (iParam0 == Global_70024.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_70024.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_70024.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_38(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_39(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || GAMEPLAY::IS_BIT_SET(Global_106070.f_7201[iVar2], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_39(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

var func_40()
{
	var uVar0;
	
	func_50(&uVar0, TIME::GET_CLOCK_SECONDS());
	func_49(&uVar0, TIME::GET_CLOCK_MINUTES());
	func_48(&uVar0, TIME::GET_CLOCK_HOURS());
	func_43(&uVar0, TIME::GET_CLOCK_DAY_OF_MONTH());
	func_42(&uVar0, TIME::GET_CLOCK_MONTH());
	func_41(&uVar0, TIME::GET_CLOCK_YEAR());
	return uVar0;
}

void func_41(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_42(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_43(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_47(*uParam0);
	iVar1 = func_45(*uParam0);
	if (iParam1 < 1 || iParam1 > func_44(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_44(int iParam0, int iParam1)
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
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
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
			break;
	}
	return 30;
}

var func_45(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_46(GAMEPLAY::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_46(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_47(var uParam0)
{
	return uParam0 & 15;
}

void func_48(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_49(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_50(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_51(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_52(0, 1);
			uParam0->f_12 = 0;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 20);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_52(0, 1);
			uParam0->f_12 = 0;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 20);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_52(1, 1);
			uParam0->f_12 = 1;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 20);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_52(1, 2);
			uParam0->f_12 = 1;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 19);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_52(1, 1);
			uParam0->f_12 = 1;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 20);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_52(1, 2);
			uParam0->f_12 = 1;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 19);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_52(2, 1);
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 20);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_52(2, 1);
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 20);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_52(2, 1);
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 20);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 22);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 22);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 22);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 24);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 24);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 24);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 27);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 24);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 27);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 24);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 27);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 24);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 11);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 13);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 11);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 13);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 9);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 9);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = 1938952078;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 2);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 30);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 2);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 22);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_33())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 13);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 2);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 1);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_33())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 13);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 2);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 1);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 30);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 30);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (GAMEPLAY::IS_BIT_SET(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_106070.f_32605.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_75(Global_106070.f_32605.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_106070.f_32605.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_106070.f_32605.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_106070.f_32605.f_1934[uParam0->f_14];
		}
	}
	if (GAMEPLAY::IS_BIT_SET(uParam0->f_9, 19))
	{
		if (!func_75(Global_106070.f_2355.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_106070.f_2355.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_106070.f_2355.f_539.f_3589[1 /*4*/][uParam0->f_12];
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_75(Global_106070.f_2355.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_106070.f_2355.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_106070.f_2355.f_539.f_3589[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_52(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_54(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_53(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_53(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_106070.f_9057.f_99.f_58[128] && !Global_106070.f_9057.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_106070.f_9057.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_106070.f_9057.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_54(int iParam0)
{
	return iParam0 < 3;
}

void func_55(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)
{
	if (func_51(&(Global_70024.f_555[0 /*21*/]), iParam0))
	{
		if (GAMEPLAY::IS_BIT_SET(Global_70024.f_555[0 /*21*/].f_9, 10))
		{
			func_59(iParam0);
			func_58(uParam1, &(Global_106070.f_32605.f_69[Global_70024.f_555[0 /*21*/].f_14 /*78*/]));
			if (GAMEPLAY::IS_BIT_SET(Global_70024.f_555[0 /*21*/].f_9, 11))
			{
				Global_106070.f_32605.f_1864[Global_70024.f_555[0 /*21*/].f_14 /*3*/] = { vParam2 };
				Global_106070.f_32605.f_1934[Global_70024.f_555[0 /*21*/].f_14] = fParam3;
			}
			else
			{
				Global_106070.f_32605.f_1864[Global_70024.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_106070.f_32605.f_1934[Global_70024.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_106070.f_32605.f_1958[Global_70024.f_555[0 /*21*/].f_14] = iParam4 + 1;
			func_56(iParam0, 1);
		}
	}
}

void func_56(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_71(iParam0, 0))
		{
			func_57(iParam0, 1, 0);
			func_57(iParam0, 2, 0);
			func_57(iParam0, 3, 0);
			func_57(iParam0, 4, 0);
			func_57(iParam0, 0, 1);
			Global_70024[iParam0] = 1;
		}
	}
	else
	{
		func_57(iParam0, 0, 0);
	}
}

void func_57(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		GAMEPLAY::SET_BIT(&(Global_106070.f_32605[iParam0]), iParam1);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_106070.f_32605[iParam0]), iParam1);
	}
}

void func_58(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_59(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_51(&(Global_70024.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_70024.f_139[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_70024.f_139[iParam0], true, 1);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_70024.f_139[iParam0]));
			Global_70024.f_139[iParam0] = 0;
		}
		if (GAMEPLAY::IS_BIT_SET(Global_70024.f_555[0 /*21*/].f_9, 13))
		{
			func_56(iParam0, 0);
		}
	}
}

int func_60(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_90658[iVar0]))
		{
			if (Global_90658[iVar0] == iParam0)
			{
				return Global_90668[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_61(int iParam0, var uParam1)
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_65(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_64(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::_VEHICLE_HAS_LANDING_GEAR(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						GAMEPLAY::CLEAR_BIT(&(uParam1->f_77), 23);
						GAMEPLAY::SET_BIT(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						GAMEPLAY::CLEAR_BIT(&(uParam1->f_77), 23);
						GAMEPLAY::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
					
					case 5:
						GAMEPLAY::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				GAMEPLAY::SET_BIT(&(uParam1->f_77), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 12);
		}
		func_63(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				GAMEPLAY::SET_BIT(&(uParam1->f_77), func_62(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::_DOES_VEHICLE_HAVE_DECAL(iParam0, 0))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 11);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(uParam1->f_77), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 27);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(uParam1->f_77), 27);
		}
	}
}

int func_62(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_63(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (unk_0x3DFF319A831E0CDB(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_64(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case -998177792:
			return 1;
		
		default:
	}
	return 0;
}

void func_65(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

void func_66(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_59(iParam0);
	func_56(iParam0, 0);
}

void func_67(bool bParam0)
{
	if (GAMEPLAY::IS_BIT_SET(iLocal_49, 14))
	{
		if (func_69(PLAYER::PLAYER_PED_ID()) == 0)
		{
			if (bParam0)
			{
				func_68(10);
			}
			else
			{
				func_68(12);
			}
		}
		else if (bParam0)
		{
			func_68(11);
		}
		else
		{
			func_68(13);
		}
		if (iLocal_42 == 0)
		{
			func_89(45, 0);
		}
		else if (iLocal_42 == 1)
		{
			func_89(12, 0);
		}
		else if (iLocal_42 == 2)
		{
			func_89(34, 0);
		}
		if (iLocal_42 != 2)
		{
			vLocal_50 = { 0f, 0f, 0f };
		}
		iLocal_40 = 0;
		iLocal_41 = 0;
		GAMEPLAY::CLEAR_BIT(&iLocal_49, 6);
		GAMEPLAY::CLEAR_BIT(&iLocal_49, 7);
		GAMEPLAY::CLEAR_BIT(&iLocal_49, 0);
		GAMEPLAY::CLEAR_BIT(&iLocal_49, 1);
		GAMEPLAY::CLEAR_BIT(&iLocal_49, 8);
		GAMEPLAY::CLEAR_BIT(&iLocal_49, 12);
		GAMEPLAY::CLEAR_BIT(&iLocal_49, 2);
		GAMEPLAY::CLEAR_BIT(&iLocal_49, 14);
		if (iLocal_37 == 4)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_74))
			{
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_74);
			}
			func_106(0);
		}
		func_76(0, 0);
	}
}

void func_68(int iParam0)
{
	int iVar0;
	
	iVar0 = func_6(iParam0);
	GAMEPLAY::SET_BIT(&(uLocal_47[func_5(iParam0)]), iVar0);
}

int func_69(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_70(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_70(int iParam0)
{
	if (func_54(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_71(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_106070.f_32605[iParam0], iParam1);
}

int func_72(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_70024.f_139[iParam0];
}

int func_73()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_90805.f_44 == 1;
	}
	return 0;
}

bool func_74(int iParam0, vector3 vParam1, float fParam2)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), vParam1) <= (fParam2 * fParam2);
}

bool func_75(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_76(int iParam0, bool bParam1)
{
	Global_106070.f_10021.f_128 = iParam0;
	iLocal_37 = iParam0;
	if (bParam1)
	{
		return;
	}
	func_77();
}

int func_77()
{
	if (func_78(0))
	{
		return 0;
	}
	if (Global_93271.f_8)
	{
		if (Global_93271.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_93271.f_10 > 1)
	{
		return 0;
	}
	Global_93271.f_10++;
	return 1;
}

bool func_78(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_71453, 0);
}

void func_79(char* sParam0, int iParam1)
{
	STATS::STAT_SET_GXT_LABEL(joaat("sp_last_mission_name"), sParam0, 1);
	if (GAMEPLAY::IS_BIT_SET(iParam1, 0))
	{
		STATS::STAT_SET_GXT_LABEL(joaat("sp0_last_mission_name"), sParam0, 1);
	}
	if (GAMEPLAY::IS_BIT_SET(iParam1, 1))
	{
		STATS::STAT_SET_GXT_LABEL(joaat("sp1_last_mission_name"), sParam0, 1);
	}
	if (GAMEPLAY::IS_BIT_SET(iParam1, 2))
	{
		STATS::STAT_SET_GXT_LABEL(joaat("sp2_last_mission_name"), sParam0, 1);
	}
}

int func_80()
{
	func_81();
	switch (Global_106070.f_2355.f_539.f_4301)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_81()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_70(Global_106070.f_2355.f_539.f_4301) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_69(PLAYER::PLAYER_PED_ID());
			if (func_54(iVar0) && (!func_82(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_54(Global_106070.f_2355.f_539.f_4301))
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

bool func_82(int iParam0)
{
	return Global_36117 == iParam0;
}

int func_83(int iParam0)
{
	if (func_84(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_84(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_85(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_106070.f_8585[iParam0] = 1;
	Global_106070.f_8585.f_236[iParam0] = (GAMEPLAY::GET_GAME_TIMER() + iParam1);
}

void func_86(bool bParam0)
{
	char* sVar0;
	
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	switch (func_87())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	AUDIO::PLAY_MISSION_COMPLETE_AUDIO(sVar0);
}

int func_87()
{
	func_81();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_88(char* sParam0)
{
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(sParam0);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
}

void func_89(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_106070.f_9057.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_106070.f_9057.f_99.f_58[iParam0] = iParam1;
}

void func_90()
{
	Global_106070.f_9988.f_21++;
	if (iLocal_42 == 0)
	{
		STATS::STAT_SET_INT(joaat("fl_co_fb4p3"), Global_106070.f_9988.f_21, 1);
		if (func_99())
		{
			if (func_228(74) || (func_228(75) && func_98()))
			{
				func_89(46, 1);
			}
		}
	}
	func_91();
	GAMEPLAY::SET_BIT(&iLocal_49, 10);
}

void func_91()
{
	if (iLocal_42 == 0)
	{
		func_92(23, 0, 0);
	}
	else if (iLocal_42 == 1)
	{
	}
	else if (iLocal_42 == 2)
	{
	}
}

void func_92(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_96((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_106070.f_10166[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_106070.f_10166[iParam0 /*12*/].f_6 == 11 || Global_106070.f_10166[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_106070.f_10166[iParam0 /*12*/].f_5 = 1;
		Global_106070.f_10166[iParam0 /*12*/].f_10 = iParam1;
		Global_106070.f_10166[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			STATS::_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_93();
	}
}

void func_93()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_105806 = 0;
	Global_105807 = 0;
	Global_105808 = 0;
	Global_105809 = 0;
	Global_105810 = 0;
	Global_105811 = 0;
	Global_105812 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_106070.f_10166.f_3853;
	Global_106070.f_10166.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_106070.f_10166[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_106070.f_10166[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_105806++;
					fVar1 = (fVar1 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_105807++;
					fVar2 = (fVar2 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_105808++;
					fVar3 = (fVar3 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_105809++;
					fVar4 = (fVar4 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_105810++;
					fVar5 = (fVar5 + (Global_106070.f_10166[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_105811++;
					fVar6 = (fVar6 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_105812++;
					fVar7 = (fVar7 + Global_106070.f_10166[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_105789 > 0)
	{
		if (Global_105806 == Global_105789)
		{
			fVar1 = 55f;
		}
	}
	if (Global_105790 > 0)
	{
		if (Global_105807 == Global_105790)
		{
			fVar2 = 10f;
		}
	}
	if (Global_105791 > 0)
	{
		if (Global_105808 == Global_105791)
		{
			fVar3 = 0f;
		}
	}
	if (Global_105792 > 0)
	{
		if (Global_105809 == Global_105792)
		{
			fVar4 = 10f;
		}
	}
	if (Global_105793 > 0)
	{
		if (((Global_105810 == Global_105793 || (Global_105793 * 10 / Global_105810) < 41) || Global_105810 > Global_105796) || Global_105810 == Global_105796)
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_106070.f_10166.f_3856, 14))
			{
				if (Global_105810 == Global_105793)
				{
					STATS::_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_105793, 0);
					GAMEPLAY::SET_BIT(&(Global_106070.f_10166.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_105794 > 0)
	{
		if (Global_105811 == Global_105794)
		{
			fVar6 = 15f;
		}
	}
	if (Global_105795 > 0)
	{
		if (Global_105812 == Global_105795)
		{
			fVar7 = 5f;
		}
	}
	Global_106070.f_10166.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_105810 > Global_105796 || Global_105810 == Global_105796)
	{
		iVar9 = Global_105796;
	}
	else
	{
		iVar9 = Global_105810;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_105806, 1);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_105789, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_105807, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_105790, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_105808, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_105791, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_105809, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_105792, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_105796, 1);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_105812 + Global_105811), 1);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_105795 + Global_105794), 1);
	Global_105813 = (Global_105806 * 100 / Global_105789);
	Global_105815 = ((Global_105808 + Global_105807) * 100 / (Global_105791 + Global_105790));
	Global_105814 = ((Global_105809 + iVar9) * 100 / (Global_105792 + Global_105796));
	Global_105816 = ((Global_105811 + Global_105812) * 100 / (Global_105794 + Global_105795));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_106070.f_10166.f_3853, 1);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_105813, 1);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_105814, 1);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_105815, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_106070.f_10166.f_3853))
	{
		func_95(13, SYSTEM::FLOOR(Global_106070.f_10166.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_71205)
		{
			if (func_94() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_105804 = 0;
				}
				if (!Global_56181)
				{
					func_77();
				}
			}
		}
	}
}

int func_94()
{
	return Global_25459;
}

int func_95(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_0xC2AFFFDABBDC2C5C(iParam0, iParam1);
	}
	return 0;
}

int func_96(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	if (iParam2 == -1)
	{
		iParam2 = func_97();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar19, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_97()
{
	return Global_1312736;
}

int func_98()
{
	if ((func_228(41) && func_228(3)) && func_228(21))
	{
		return 1;
	}
	return 0;
}

int func_99()
{
	if (iLocal_42 == 0)
	{
		return func_104();
	}
	else if (iLocal_42 == 1)
	{
		return func_103();
	}
	else if (iLocal_42 == 2)
	{
		return func_100();
	}
	return 0;
}

int func_100()
{
	if ((func_228(79) && func_228(83)) && func_101(func_102()))
	{
		return 1;
	}
	return 0;
}

int func_101(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106070.f_9057.f_99.f_58[iParam0];
}

int func_102()
{
	if (iLocal_42 == 0)
	{
		return 45;
	}
	else if (iLocal_42 == 1)
	{
		return 12;
	}
	else if (iLocal_42 == 2)
	{
		return 34;
	}
	return -1;
}

int func_103()
{
	if (func_228(68))
	{
		return 1;
	}
	return 0;
}

int func_104()
{
	if (func_105(33, 37) >= 4)
	{
		return 1;
	}
	return 0;
}

int func_105(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = iParam0;
	while (iVar1 <= iParam1)
	{
		if (func_228(iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (func_101(func_102()))
	{
		iVar0++;
	}
	return iVar0;
}

void func_106(int iParam0)
{
	Global_71465 = iParam0;
	Global_71466 = iParam0;
}

void func_107()
{
	struct<6> Var0;
	
	if (iLocal_40 != 0)
	{
		Var0 = { func_124() };
		switch (iLocal_40)
		{
			case 1:
				if (iLocal_42 != 2)
				{
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&Var0))
					{
						if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() > 0)
						{
							func_123("LOCAUD", Local_44.f_7);
							func_122(1);
							iLocal_40 = 2;
						}
						else if (GAMEPLAY::IS_BIT_SET(iLocal_49, 10) && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() == 0)
						{
							func_123("LOCAUD", Local_44.f_7);
							func_122(1);
							iLocal_40 = 2;
						}
					}
				}
				else
				{
					iLocal_40 = 0;
				}
				if (func_121())
				{
					iLocal_40 = 3;
				}
				break;
			
			case 2:
				if (func_121())
				{
					iLocal_40 = 3;
				}
				if (!GAMEPLAY::IS_BIT_SET(iLocal_49, 10))
				{
					if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 0)
					{
						func_114(Var0);
					}
				}
				else
				{
					iLocal_40 = 3;
				}
				break;
			
			case 3:
				if (!func_113())
				{
					iLocal_40 = 4;
				}
				break;
			
			case 4:
				if (!func_14(0))
				{
					if (iLocal_42 == 1)
					{
						func_112(Local_44.f_8);
					}
					iLocal_40 = 5;
				}
				break;
			
			case 5:
				if (func_87() == 0)
				{
					if (iLocal_42 == 0)
					{
						if (func_99())
						{
							if ((func_228(74) || func_228(75)) && func_98())
							{
								func_108(1);
								iLocal_40 = 0;
							}
							else
							{
								func_108(0);
								iLocal_40 = 0;
							}
						}
						else
						{
							iLocal_40 = 0;
						}
					}
					else
					{
						iLocal_40 = 0;
					}
				}
				else
				{
					if (iLocal_42 == 0)
					{
						if (func_99())
						{
							if (!func_228(3))
							{
								func_85(50, 0);
							}
						}
					}
					iLocal_40 = 0;
				}
				break;
			}
	}
}

void func_108(bool bParam0)
{
	if (bParam0)
	{
		func_109(1527885205, 0, func_87(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
	else if (!func_228(3))
	{
		func_109(-224691627, 0, func_87(), 23, 3, 6000, 6000, -1, 50, -1, 0);
	}
	else
	{
		func_109(-224691627, 0, func_87(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
}

int func_109(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<15> Var0;
	int iVar1;
	
	if (func_78(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 == 76)
	{
		return 0;
	}
	if (iParam8 == 235)
	{
		return 0;
	}
	if (iParam3 == iParam2)
	{
		return 0;
	}
	if (((iParam2 != 144 && iParam2 != 0) && iParam2 != 1) && iParam2 != 2)
	{
		return 0;
	}
	if (Global_106070.f_7660.f_136 < 9)
	{
		Var0 = iParam0;
		if (Global_106070.f_7660.f_911 == Var0)
		{
			Global_106070.f_7660.f_911 = -1;
		}
		Var0.f_3 = func_111(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (GAMEPLAY::GET_GAME_TIMER() + iParam5);
		Var0.f_1 = iParam10;
		iVar1 = 0;
		GAMEPLAY::SET_BIT(&iVar1, iParam2);
		Var0.f_2 = iVar1;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		GAMEPLAY::SET_BIT(&(Var0.f_1), 0);
		GAMEPLAY::CLEAR_BIT(&(Var0.f_1), 1);
		if (iParam1 == 0)
		{
			GAMEPLAY::SET_BIT(&(Var0.f_1), 10);
		}
		Global_106070.f_7660[Global_106070.f_7660.f_136 /*15*/] = { Var0 };
		Global_106070.f_7660.f_136++;
		func_110(iParam2);
		return 1;
	}
	return 0;
}

void func_110(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_54(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_106070.f_7660.f_136)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_106070.f_7660[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_106070.f_7660[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_106070.f_7660[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_106070.f_7660.f_764)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_106070.f_7660.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_106070.f_7660.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_106070.f_7660.f_919[iParam0] = iVar1;
}

int func_111(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

void func_112(int iParam0)
{
	if (Global_117[iParam0 /*10*/].f_8 != 145)
	{
		Global_106070.f_28022[iParam0 /*29*/].f_12[0] = 0;
		Global_106070.f_28022[iParam0 /*29*/].f_12[1] = 0;
		Global_106070.f_28022[iParam0 /*29*/].f_12[2] = 0;
		Global_106070.f_28022[iParam0 /*29*/].f_24[0] = 0;
		Global_106070.f_28022[iParam0 /*29*/].f_24[1] = 0;
		Global_106070.f_28022[iParam0 /*29*/].f_24[2] = 0;
	}
}

int func_113()
{
	if (Global_15822 == 4)
	{
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_114(struct<6> Param0)
{
	if (iLocal_42 == 0)
	{
		func_119(Param0);
	}
	else if (iLocal_42 == 1)
	{
		func_115(Param0);
	}
}

void func_115(struct<6> Param0)
{
	if (func_99())
	{
		func_116(Param0, 1);
	}
	else
	{
		func_116(Param0, 0);
	}
}

void func_116(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;
	
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&uParam0))
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(&uParam0, Local_44.f_7))
		{
			if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 0)
			{
				if (iLocal_42 == 0)
				{
					Var0 = { func_118(bParam6) };
					func_89(46, 1);
					func_123(sLocal_79, &Var0);
					func_122(1);
				}
				else if (iLocal_42 == 1)
				{
					Var0 = { func_117(bParam6) };
					func_123(sLocal_79, &Var0);
					func_122(1);
				}
				iLocal_40 = 3;
			}
		}
	}
}

struct<4> func_117(bool bParam0)
{
	struct<4> Var0;
	
	if (bParam0)
	{
		switch (func_87())
		{
			case 1:
				StringCopy(&Var0, "AHF_C8", 16);
				break;
			
			case 0:
				StringCopy(&Var0, "AHF_C5", 16);
				break;
		}
	}
	else
	{
		switch (func_87())
		{
			case 1:
				StringCopy(&Var0, "AHF_C9", 16);
				break;
			
			case 0:
				StringCopy(&Var0, "AHF_C6", 16);
				break;
			}
	}
	return Var0;
}

struct<4> func_118(bool bParam0)
{
	struct<4> Var0;
	
	if (bParam0)
	{
		switch (func_87())
		{
			case 1:
				StringCopy(&Var0, "FBI4_ISAGO", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "FBI4_ISAGO", 16);
				break;
		}
	}
	else
	{
		switch (func_87())
		{
			case 1:
				StringCopy(&Var0, "FBI4_THATSIT", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "FBI4_THATSIT", 16);
				break;
			}
	}
	return Var0;
}

void func_119(struct<6> Param0)
{
	if (func_99())
	{
		if (func_120())
		{
			if (func_87() != 0)
			{
				func_116(Param0, 1);
			}
			else
			{
				iLocal_40 = 3;
			}
		}
		else if (func_87() != 0)
		{
			func_116(Param0, 0);
		}
		else
		{
			iLocal_40 = 3;
		}
	}
	else
	{
		iLocal_40 = 3;
	}
}

int func_120()
{
	if (iLocal_42 == 0)
	{
		if ((func_228(74) || func_228(74)) && func_98())
		{
			return 1;
		}
	}
	else if (iLocal_42 == 1)
	{
		if (func_228(68))
		{
			return 1;
		}
	}
	return 0;
}

int func_121()
{
	if (Global_15871 == 1 || Global_16838 == 1)
	{
		return 1;
	}
	return 0;
}

void func_122(bool bParam0)
{
	AUDIO::STOP_SCRIPTED_CONVERSATION(bParam0);
	if (bParam0)
	{
	}
}

void func_123(char* sParam0, char* sParam1)
{
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		Global_15879 = 1;
		StringCopy(&Global_15886, sParam0, 24);
		StringCopy(&Global_15880, sParam1, 24);
	}
}

struct<6> func_124()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15822 == 4)
	{
		return Global_15441;
	}
	return Var0;
}

void func_125()
{
	func_126();
}

void func_126()
{
	func_130();
	func_127();
}

void func_127()
{
	if (func_129() == 85)
	{
		if (func_128() && !func_71(25, 0))
		{
			if (Local_54.f_66 != 0)
			{
				func_55(25, &Local_54, vLocal_52, fLocal_53, 145);
			}
		}
	}
}

int func_128()
{
	if (Global_93232 == 10 || Global_93232 == 9)
	{
		return 1;
	}
	return 0;
}

int func_129()
{
	return Global_71467;
}

void func_130()
{
	if (!func_75(vLocal_52, 0f, 0f, 0f, 0) && func_129() != func_131())
	{
		if (func_74(PLAYER::PLAYER_PED_ID(), vLocal_52, 60f))
		{
			if (func_83(func_72(25)))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_72(25), true), vLocal_52) >= 100f)
				{
					func_67(0);
				}
			}
			else if (!func_71(25, 0))
			{
				func_67(1);
			}
		}
	}
}

int func_131()
{
	if (iLocal_42 == 0)
	{
		return 38;
	}
	else if (iLocal_42 == 1)
	{
		return 69;
	}
	else if (iLocal_42 == 2)
	{
		return 85;
	}
	return -1;
}

void func_132()
{
	func_16();
	func_107();
}

void func_133()
{
	func_147();
	func_143();
	func_140();
	func_107();
	if (func_74(PLAYER::PLAYER_PED_ID(), vLocal_50, 150f) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -176.9431f, -651.257f, 31.2136f, -150.9563f, -579.7476f, 35.4245f, 50f, 0, true, 0))
	{
		GAMEPLAY::CLEAR_AREA_OF_VEHICLES(vLocal_50, 6f, 0, 1, 0, 0, false, 0);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-169.4253f, -622.0479f, 31.42444f, -162.2762f, -620.509f, 35.42448f, false, 1);
	}
	if (!GAMEPLAY::IS_BIT_SET(iLocal_49, 18))
	{
		if (!func_14(0) && !func_113())
		{
			func_139(sLocal_45[4], 7500, 0);
			GAMEPLAY::SET_BIT(&iLocal_49, 18);
		}
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_49, 0))
	{
		if (GAMEPLAY::IS_BIT_SET(iLocal_49, 1))
		{
			PATHFIND::SET_IGNORE_NO_GPS_FLAG(0);
			func_138(&iLocal_245);
			if (!iLocal_247)
			{
				iLocal_247 = 1;
				if (!func_137("PRC_GETOUT", 0, 0))
				{
					func_139("PRC_GETOUT", 7500, 0);
				}
			}
			if (func_83(iLocal_51))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_51, 0))
				{
					if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_51))
					{
						func_135();
						func_134(&uLocal_246);
						func_89(35, 0);
						if (func_137("PRC_GETOUT", 0, 0))
						{
							UI::CLEAR_PRINTS();
						}
						VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-169.4253f, -622.0479f, 31.42444f, -162.2762f, -620.509f, 35.42448f, true, 1);
						func_76(4, 0);
					}
				}
			}
		}
		else
		{
			if (func_137("PRC_GETOUT", 0, 0))
			{
				UI::CLEAR_PRINTS();
			}
			iLocal_247 = 0;
		}
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&iLocal_49, 18);
		func_134(&uLocal_246);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-169.4253f, -622.0479f, 31.42444f, -162.2762f, -620.509f, 35.42448f, true, 1);
		func_76(0, 1);
	}
}

void func_134(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_36079)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_36078 = 0;
	Global_36080 = 0;
	Global_36117 = 15;
	Global_56178 = 0;
	Global_56179 = 0;
}

void func_135()
{
	if (!GAMEPLAY::IS_BIT_SET(iLocal_49, 6))
	{
		if (func_83(iLocal_51))
		{
			vLocal_52 = { ENTITY::GET_ENTITY_COORDS(iLocal_51, true) };
			fLocal_53 = ENTITY::GET_ENTITY_HEADING(iLocal_51);
			GAMEPLAY::SET_BIT(&iLocal_49, 6);
			GAMEPLAY::SET_BIT(&iLocal_49, 2);
			func_61(iLocal_51, &Local_54);
			func_20(iLocal_51, vLocal_52, fLocal_53, 25, 1);
			GAMEPLAY::SET_BIT(&iLocal_49, 14);
			func_136(iLocal_51);
		}
	}
}

int func_136(int iParam0)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave"))
	{
		if (DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 1))
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

bool func_137(char* sParam0, int iParam1, char* sParam2)
{
	UI::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	}
	return UI::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

void func_138(int iParam0)
{
	if (UI::DOES_BLIP_EXIST(*iParam0))
	{
		UI::SET_BLIP_ROUTE(*iParam0, false);
		UI::REMOVE_BLIP(iParam0);
	}
}

void func_139(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	UI::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	UI::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

void func_140()
{
	switch (iLocal_38)
	{
		case 0:
			if (((!UI::DOES_BLIP_EXIST(iLocal_245) && GAMEPLAY::IS_BIT_SET(iLocal_49, 0)) && !GAMEPLAY::IS_BIT_SET(iLocal_49, 1)) && GAMEPLAY::IS_BIT_SET(iLocal_49, 18))
			{
				iLocal_245 = func_141(vLocal_50, 1);
				PATHFIND::SET_IGNORE_NO_GPS_FLAG(1);
			}
			break;
		
		case 1:
			func_138(&iLocal_245);
			PATHFIND::SET_IGNORE_NO_GPS_FLAG(0);
			break;
		
		case 2:
			break;
	}
}

int func_141(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = UI::ADD_BLIP_FOR_COORD(vParam0);
	UI::SET_BLIP_SCALE(iVar0, func_142(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	UI::SET_BLIP_ROUTE(iVar0, bParam1);
	return iVar0;
}

float func_142(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_143()
{
	if (func_101(35))
	{
		if (iLocal_38 == 0)
		{
			if (!GAMEPLAY::IS_BIT_SET(iLocal_49, 1))
			{
				if (func_83(iLocal_51))
				{
					ENTITY::IS_ENTITY_AT_COORD(iLocal_51, vLocal_50, 4f, 4f, 2f, true, true, 0);
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_51, -168.8162f, -619.9002f, 31.42446f, -162.6423f, -622.0781f, 33.42446f, 4.14f, 0, true, 0))
					{
						func_146(24, 46);
						if (func_145(iLocal_51))
						{
							if (func_144(1077936128, 1))
							{
								GAMEPLAY::SET_BIT(&iLocal_49, 1);
							}
						}
					}
				}
			}
			else if (GAMEPLAY::IS_BIT_SET(iLocal_49, 0))
			{
				if (!func_74(iLocal_51, vLocal_50, 10f) || ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_51))
				{
					GAMEPLAY::CLEAR_BIT(&iLocal_49, 1);
				}
			}
		}
	}
}

int func_144(float fParam0, int iParam1)
{
	int iVar0;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return 1;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) == PLAYER::PLAYER_PED_ID())
		{
			if (!VEHICLE::IS_VEHICLE_STOPPED(iVar0))
			{
				VEHICLE::_SET_VEHICLE_HALT(iVar0, fParam0, iParam1, 0);
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		if (VEHICLE::IS_VEHICLE_STOPPED(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_145(int iParam0)
{
	vector3 vVar0;
	
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam0))
	{
		func_68(39);
		return 0;
	}
	if (!VEHICLE::_0x639431E895B9AA57(PLAYER::PLAYER_PED_ID(), iParam0, -1, 0, 0) && !VEHICLE::_0x639431E895B9AA57(PLAYER::PLAYER_PED_ID(), iParam0, 0, 0, 0))
	{
		func_68(37);
		return 0;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
	{
		func_68(36);
		return 0;
	}
	vVar0 = { ENTITY::GET_ENTITY_ROTATION(iParam0, 2) };
	if (vVar0.x >= 10f || vVar0.x <= -10f)
	{
		func_68(42);
		return 0;
	}
	else if (vVar0.y >= 15f || vVar0.y <= -15f)
	{
		func_68(43);
		return 0;
	}
	return 1;
}

void func_146(int iParam0, int iParam1)
{
	func_4(iParam0);
	if (func_2(func_3(iParam0)))
	{
		UI::CLEAR_HELP(1);
		GAMEPLAY::SET_BIT(&iLocal_49, 15);
	}
	if (iParam1 != 46)
	{
		func_4(iParam1);
		if (func_2(func_3(iParam1)))
		{
			UI::CLEAR_HELP(1);
			GAMEPLAY::SET_BIT(&iLocal_49, 15);
		}
	}
}

void func_147()
{
	int iVar0;
	int iVar1;
	
	if ((Global_36117 == 15 && !func_164()) || func_101(35))
	{
		if (iLocal_38 == 0)
		{
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (!GAMEPLAY::IS_BIT_SET(iLocal_49, 0))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (!GAMEPLAY::IS_BIT_SET(iLocal_49, 7))
						{
							iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
							if (func_83(iVar0))
							{
								if (!func_163(iVar0))
								{
									if (func_156(iVar0) && !func_155())
									{
										if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
										{
											if (!GAMEPLAY::IS_BIT_SET(iLocal_49, 19))
											{
												func_68(9);
												GAMEPLAY::SET_BIT(&iLocal_49, 19);
											}
											else if (func_69(PLAYER::PLAYER_PED_ID()) == 0)
											{
												func_68(17);
											}
											else
											{
												func_68(18);
											}
											iLocal_51 = iVar0;
											if (DECORATOR::DECOR_SET_BOOL(iLocal_51, "GetawayVehicleValid", 1))
											{
											}
											ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_51, true, 1);
											GAMEPLAY::SET_BIT(&iLocal_49, 0);
											GAMEPLAY::SET_BIT(&iLocal_49, 8);
											GAMEPLAY::SET_BIT(&iLocal_49, 7);
											return;
										}
										else
										{
											func_19(&iLocal_51);
											GAMEPLAY::CLEAR_BIT(&iLocal_49, 7);
											GAMEPLAY::CLEAR_BIT(&iLocal_49, 0);
											return;
										}
									}
									if (DECORATOR::DECOR_SET_BOOL(iVar0, "GetawayVehicleValid", 0))
									{
									}
									GAMEPLAY::SET_BIT(&iLocal_49, 7);
								}
								else if (func_154(iVar0))
								{
									iLocal_51 = iVar0;
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_51, true, 1);
									GAMEPLAY::SET_BIT(&iLocal_49, 0);
									GAMEPLAY::SET_BIT(&iLocal_49, 8);
									GAMEPLAY::SET_BIT(&iLocal_49, 7);
									return;
								}
							}
							else
							{
								func_19(&iLocal_51);
								GAMEPLAY::SET_BIT(&iLocal_49, 7);
								GAMEPLAY::CLEAR_BIT(&iLocal_49, 0);
							}
						}
						else if (GAMEPLAY::IS_BIT_SET(iLocal_49, 0))
						{
							if (!func_83(iLocal_51))
							{
								func_19(&iLocal_51);
								GAMEPLAY::SET_BIT(&iLocal_49, 0);
								GAMEPLAY::SET_BIT(&iLocal_49, 8);
								GAMEPLAY::SET_BIT(&iLocal_49, 7);
							}
						}
					}
					else if (GAMEPLAY::IS_BIT_SET(iLocal_49, 8))
					{
						iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						if (func_83(iVar1))
						{
							if (func_18(PLAYER::PLAYER_PED_ID(), iVar1, 10f, 1) && !DECORATOR::DECOR_EXIST_ON(iVar1, "Getaway_Winched"))
							{
								iLocal_51 = iVar1;
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_51, true, 1);
								GAMEPLAY::SET_BIT(&iLocal_49, 0);
								GAMEPLAY::SET_BIT(&iLocal_49, 7);
							}
						}
					}
					else
					{
						GAMEPLAY::CLEAR_BIT(&iLocal_49, 7);
					}
				}
				else if (func_83(iLocal_51))
				{
					if (!func_18(PLAYER::PLAYER_PED_ID(), iLocal_51, 80f, 1))
					{
						func_68(5);
						GAMEPLAY::SET_BIT(&iLocal_49, 8);
						func_19(&iLocal_51);
						GAMEPLAY::CLEAR_BIT(&iLocal_49, 0);
						GAMEPLAY::CLEAR_BIT(&iLocal_49, 7);
						func_236();
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) != iLocal_51)
						{
							func_19(&iLocal_51);
							func_146(17, 46);
							func_146(18, 46);
							func_146(14, 46);
							func_153();
							if (func_12())
							{
								func_149(0);
							}
							func_236();
						}
					}
					else if (!func_148(iLocal_51))
					{
						if (DECORATOR::DECOR_SET_BOOL(iLocal_51, "GetawayVehicleValid", 0))
						{
						}
						func_146(17, 46);
						func_146(18, 46);
						func_19(&iLocal_51);
						func_236();
						func_153();
					}
				}
				else
				{
					func_19(&iLocal_51);
					func_153();
					func_236();
				}
			}
		}
	}
}

int func_148(int iParam0)
{
	if (ENTITY::GET_ENTITY_HEALTH(iParam0) < 300 || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) < 300f)
	{
		func_68(6);
		return 0;
	}
	return 1;
}

void func_149(int iParam0)
{
	if (func_152())
	{
		return;
	}
	if (Global_14681)
	{
		func_151(0, 0);
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
	if (!func_150())
	{
		Global_14513.f_1 = 3;
	}
}

int func_150()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_151(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_14(0))
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

bool func_152()
{
	return GAMEPLAY::IS_BIT_SET(Global_1678593, 19);
}

void func_153()
{
	GAMEPLAY::CLEAR_BIT(&iLocal_49, 0);
	GAMEPLAY::CLEAR_BIT(&iLocal_49, 8);
	GAMEPLAY::CLEAR_BIT(&iLocal_49, 7);
}

int func_154(int iParam0)
{
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "GetawayVehicleValid"))
	{
		if (DECORATOR::DECOR_GET_BOOL(iParam0, "GetawayVehicleValid"))
		{
			return 1;
		}
	}
	return 0;
}

int func_155()
{
	if (PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
	{
		if ((VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0, 0) == PLAYER::PLAYER_PED_ID() || VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1, 0) == PLAYER::PLAYER_PED_ID()) || VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 2, 0) == PLAYER::PLAYER_PED_ID())
		{
			return 1;
		}
	}
	return 0;
}

int func_156(int iParam0)
{
	if ((func_162() && func_158(iParam0)) && func_157(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_157(int iParam0)
{
	int iVar0;
	
	iVar0 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
	if (iVar0 >= 3)
	{
		return 1;
	}
	func_68(15);
	return 0;
}

int func_158(int iParam0)
{
	if ((func_160(iParam0) && !func_159(iParam0)) && func_148(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_159(int iParam0)
{
	int iVar0;
	
	iVar0 = func_60(iParam0);
	if (iVar0 == 0)
	{
		func_68(25);
		return 1;
	}
	if (iVar0 == 1)
	{
		func_68(26);
		return 1;
	}
	if (iVar0 == 2)
	{
		func_68(27);
		return 1;
	}
	if (func_35(iParam0))
	{
		func_68(14);
		return 1;
	}
	return 0;
}

int func_160(int iParam0)
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!func_161(iVar0))
	{
		if (VEHICLE::GET_VEHICLE_MODEL_ACCELERATION(iVar0) > 0.165f && VEHICLE::_GET_VEHICLE_MAX_SPEED(iVar0) > 31f)
		{
			return 1;
		}
	}
	func_68(14);
	return 0;
}

int func_161(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iLocal_66[iVar0] == iParam0)
		{
			if (iVar0 == 0 && !func_228(33))
			{
				GAMEPLAY::SET_BIT(&iLocal_49, 3);
			}
			else if (iVar0 == 1 && !func_228(34))
			{
				GAMEPLAY::SET_BIT(&iLocal_49, 3);
			}
			else
			{
				GAMEPLAY::CLEAR_BIT(&iLocal_49, 3);
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_162()
{
	if ((((PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()))
	{
		func_68(14);
		return 0;
	}
	return 1;
}

int func_163(int iParam0)
{
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "GetawayVehicleValid"))
	{
		return 1;
	}
	return 0;
}

int func_164()
{
	if (Global_90249 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_84115[Global_90249 /*34*/].f_15, 13);
	}
	return 0;
}

void func_165()
{
	int iVar0;
	
	func_147();
	func_107();
	func_195();
	if (func_193())
	{
		if (func_187(&uLocal_246) && func_166(&iVar0))
		{
			func_237(0);
			if (iVar0 == 1)
			{
				func_76(iVar0, 0);
			}
			else
			{
				func_76(iVar0, 1);
			}
		}
	}
}

int func_166(var uParam0)
{
	char* sVar0;
	
	if (GAMEPLAY::IS_BIT_SET(iLocal_49, 0))
	{
		func_179();
		if (func_167())
		{
			sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				if (iLocal_42 == 2)
				{
					*uParam0 = 1;
				}
				else
				{
					*uParam0 = 4;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_167()
{
	if (func_169(&uLocal_80, Local_44.f_8, sLocal_79, Local_44.f_4, 9, 1, 0, 0, 0))
	{
		iLocal_40 = 1;
		func_168(192, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
		return 1;
	}
	return 0;
}

void func_168(int iParam0, vector3 vParam1)
{
	int iVar0;
	
	if (UI::DOES_BLIP_EXIST(Global_25834[iParam0 /*23*/].f_19))
	{
		UI::SET_BLIP_COORDS(Global_25834[iParam0 /*23*/].f_19, vParam1);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_25834[iParam0 /*23*/][iVar0 /*3*/] = { vParam1 };
		iVar0++;
	}
}

bool func_169(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_178(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
	Global_15870 = 0;
	Global_15829 = 1;
	Global_15836 = 0;
	Global_15831 = 0;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_16819 = 0;
	Global_15827 = 0;
	Global_15874 = 0;
	Global_15876 = 0;
	if (iParam5 == 1)
	{
		Global_15834 = 1;
	}
	else
	{
		Global_15834 = 0;
	}
	Global_2621441 = 0;
	return func_170(sParam3, iParam4, bParam8);
}

int func_170(char* sParam0, int iParam1, bool bParam2)
{
	Global_15823 = 0;
	if (Global_15822 == 0 || Global_15824 == 2)
	{
		if (Global_15822 != 0)
		{
			if (iParam1 > Global_15824)
			{
				if (Global_15829 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_14513.f_1 = 3;
					Global_15822 = 0;
					Global_15823 = 1;
					Global_15875 = 0;
					Global_15818 = 0;
					Global_15819 = 0;
					Global_15833 = 0;
					Global_15832 = 0;
					Global_14512 = 0;
				}
				else
				{
					func_177();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_176(8, -1))
		{
			return 0;
		}
		Global_15898 = { Global_15892 };
		func_175();
		Global_15111 = { Global_15276 };
		Global_15828 = Global_15829;
		Global_15835 = Global_15836;
		Global_2621442 = Global_2621441;
		Global_15837 = { Global_15853 };
		Global_15830 = Global_15831;
		Global_16812 = Global_16813;
		Global_16820 = { Global_16826 };
		Global_16814 = Global_16815;
		Global_16816 = Global_16817;
		Global_16818 = Global_16819;
		Global_15441.f_370 = Global_16811;
		Global_15441.f_368 = Global_16809;
		Global_15441.f_369 = Global_16810;
		Global_15818 = Global_15819;
		if (Global_15828)
		{
			GAMEPLAY::CLEAR_BIT(&Global_2383, 20);
			GAMEPLAY::CLEAR_BIT(&Global_2384, 17);
			GAMEPLAY::CLEAR_BIT(&Global_2385, 0);
			if (bParam2)
			{
				func_174();
				if (Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14513.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14479 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_173())
				{
					return 0;
				}
				if (AI::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_71205)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
				}
			}
			if (func_150())
			{
				return 0;
			}
			else
			{
				switch (Global_14513.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (GAMEPLAY::IS_BIT_SET(Global_2383, 9))
				{
					return 0;
				}
			}
			func_172();
			Global_15832 = bParam2;
		}
		Global_15824 = iParam1;
		StringCopy(&Global_15441, sParam0, 24);
		Global_14688 = 0;
		func_171();
		return 1;
	}
	if (Global_15822 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15824 || iParam1 == Global_15824)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_177();
	}
	return 0;
}

void func_171()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14690[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_15822 = 1;
}

void func_172()
{
	Global_15875 = Global_15874;
	Global_15869 = Global_15870;
	Global_15916 = { Global_15904 };
	Global_15922 = { Global_15910 };
	Global_15877 = Global_15876;
	Global_15946 = { Global_15928 };
	Global_15952 = { Global_15934 };
	Global_15958 = { Global_15940 };
	Global_15964 = { Global_15970 };
	Global_1698 = Global_1699;
	Global_1700 = Global_1701;
	Global_15833 = Global_15834;
	Global_15835 = Global_15836;
	Global_15837 = { Global_15853 };
	Global_15826 = Global_15827;
	Global_16838 = 0;
	Global_15871 = 0;
	Global_15872 = 0;
	GAMEPLAY::CLEAR_BIT(&Global_2384, 16);
}

int func_173()
{
	int iVar0;
	int iVar1;
	
	if (Global_71205)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_174()
{
	if (func_82(14))
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
		Global_14513 = func_87();
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

void func_175()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15111[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15111[iVar0 /*10*/].f_1), "", 24);
		Global_15111[iVar0 /*10*/].f_7 = 0;
		Global_15111[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15111.f_161 = -99;
	Global_15111.f_162 = { 0f, 0f, 0f };
}

bool func_176(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1368245.f_203[iParam1];
			}
			break;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1368245.f_1048, iParam0);
}

void func_177()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16833 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_14513.f_1 == 9) || Global_14512 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_15822 = 6;
		Global_14513.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_15822 = 6;
		return;
	}
}

void func_178(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15276 = { *uParam0 };
	Global_1699 = uParam1;
	StringCopy(&Global_15892, sParam2, 24);
	Global_16811 = iParam5;
	if (iParam3 == 0)
	{
		Global_16809 = 1;
		Global_16807 = 0;
	}
	else
	{
		Global_16809 = 0;
		Global_16807 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16810 = 1;
		Global_16808 = 0;
	}
	else
	{
		Global_16810 = 0;
		Global_16808 = 1;
	}
}

void func_179()
{
	int iVar0;
	
	iVar0 = func_87();
	func_180(iVar0, func_186(iVar0));
}

void func_180(int iParam0, var uParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			Local_44 = 0;
			Local_44.f_1 = "MICHAEL";
			if (iLocal_42 == 0)
			{
				Local_44.f_2 = 1;
				Local_44.f_3 = "FRANKLIN";
				Local_44.f_8 = 5;
			}
			else
			{
				Local_44.f_2 = 3;
				Local_44.f_3 = "LESTER";
				if (iLocal_42 == 1)
				{
					Local_44.f_8 = 6;
				}
				else
				{
					Local_44.f_8 = 12;
				}
			}
			Local_44.f_5 = "FBI_3_FRESP";
			func_184(iParam0);
			break;
		
		case 1:
			Local_44 = 1;
			Local_44.f_1 = "FRANKLIN";
			if (iLocal_42 == 0)
			{
				Local_44.f_2 = 0;
				Local_44.f_3 = "MICHAEL";
				Local_44.f_8 = 9;
			}
			else
			{
				Local_44.f_2 = 3;
				Local_44.f_3 = "LESTER";
				if (iLocal_42 == 1)
				{
					Local_44.f_8 = 7;
				}
				else
				{
					Local_44.f_8 = 12;
				}
			}
			Local_44.f_5 = "FBI_3_MRESP";
			func_184(iParam0);
			break;
		
		case 2:
			Local_44 = 2;
			Local_44.f_1 = "TREVOR";
			if (iLocal_42 == 0)
			{
				Local_44.f_2 = 0;
				Local_44.f_3 = "MICHAEL";
				Local_44.f_8 = 8;
			}
			else
			{
				Local_44.f_2 = 3;
				Local_44.f_3 = "LESTER";
				if (iLocal_42 == 1)
				{
					Local_44.f_8 = 7;
				}
				else
				{
					Local_44.f_8 = 12;
				}
			}
			Local_44.f_5 = "FBI_3_MRESP";
			func_184(iParam0);
			break;
	}
	if (iLocal_42 == 1)
	{
		if (iParam0 == 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
		func_182(Local_44.f_8, iVar0, 0);
	}
	func_181(&uLocal_80, Local_44, PLAYER::PLAYER_PED_ID(), Local_44.f_1, 0, 1);
	func_181(&uLocal_80, Local_44.f_2, 0, Local_44.f_3, 0, 1);
	Local_44.f_4 = uParam1;
}

void func_181(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_71205)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

void func_182(int iParam0, int iParam1, bool bParam2)
{
	Global_3069 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 145)
	{
		func_174();
		if (iParam1 == 4)
		{
			Global_106070.f_28022[iParam0 /*29*/].f_12[0] = 1;
			Global_106070.f_28022[iParam0 /*29*/].f_12[1] = 1;
			Global_106070.f_28022[iParam0 /*29*/].f_12[2] = 1;
			Global_106070.f_28022[iParam0 /*29*/].f_24[0] = 1;
			Global_106070.f_28022[iParam0 /*29*/].f_24[1] = 1;
			Global_106070.f_28022[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_106070.f_28022[iParam0 /*29*/].f_12[iParam1] == 1 && Global_106070.f_28022[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_106070.f_28022[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_106070.f_28022[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_71205)
			{
				if (iParam1 != 4)
				{
					if (Global_14513 != iParam1)
					{
						Global_3042[iParam1 /*4*/] = { Global_106070.f_28022[iParam0 /*29*/].f_3 };
						Global_3059[iParam1] = 1;
						Global_3064[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14513)
					{
					}
					else
					{
						Global_2993[1 /*6*/] = { Global_106070.f_28022[iParam0 /*29*/].f_3 };
						Global_2993[1 /*6*/].f_5 = iParam1;
						func_183();
					}
				}
				else
				{
					Global_2993[1 /*6*/] = { Global_106070.f_28022[iParam0 /*29*/].f_3 };
					Global_2993[1 /*6*/].f_5 = iParam1;
					func_183();
				}
			}
			else
			{
				Global_2993[1 /*6*/] = { Global_106070.f_28022[iParam0 /*29*/].f_3 };
				Global_2993[1 /*6*/].f_5 = iParam1;
				func_183();
			}
		}
	}
}

void func_183()
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, UI::_GET_LABEL_TEXT(&(Global_106070.f_28022[Global_3069 /*29*/].f_7)), 64);
	if (Global_3088 == 0)
	{
		UI::_SET_NOTIFICATION_TEXT_ENTRY("");
		StringCopy(&cVar1, UI::_GET_LABEL_TEXT(&(Global_2993[1 /*6*/])), 64);
		sVar2 = UI::_GET_LABEL_TEXT("CELL_253");
		UI::_SET_NOTIFICATION_MESSAGE(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
	}
	else
	{
		UI::_SET_NOTIFICATION_TEXT_ENTRY("CELL_255");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2993[1 /*6*/]));
		UI::_SET_NOTIFICATION_MESSAGE(&cVar0, &cVar0, 0, 3, "", 0);
	}
	GAMEPLAY::CLEAR_BIT(&Global_2383, 0);
}

void func_184(int iParam0)
{
	Local_44.f_6 = ZONE::GET_NAME_OF_ZONE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	func_185(iParam0);
}

void func_185(int iParam0)
{
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(Local_44.f_6))
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "SanAnd"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M77";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F78";
			}
			else
			{
				Local_44.f_7 = "LOC_T78";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Alamo"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M101";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F1";
			}
			else
			{
				Local_44.f_7 = "LOC_T1";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Alta"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M1";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F2";
			}
			else
			{
				Local_44.f_7 = "LOC_T2";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Airp"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M48";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F49";
			}
			else
			{
				Local_44.f_7 = "LOC_T49";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "ArmyB"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M28";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F29";
			}
			else
			{
				Local_44.f_7 = "LOC_T29";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "BhamCa"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M2";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F3";
			}
			else
			{
				Local_44.f_7 = "LOC_T3";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Banning"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M3";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F4";
			}
			else
			{
				Local_44.f_7 = "LOC_T4";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Baytre"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M4";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F5";
			}
			else
			{
				Local_44.f_7 = "LOC_T5";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Beach"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M93";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F94";
			}
			else
			{
				Local_44.f_7 = "LOC_T94";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "BradT"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M7";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F8";
			}
			else
			{
				Local_44.f_7 = "LOC_T8";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "BradP"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M6";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F7";
			}
			else
			{
				Local_44.f_7 = "LOC_T7";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Burton"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M8";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F9";
			}
			else
			{
				Local_44.f_7 = "LOC_T9";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "CANNY"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M70";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F71";
			}
			else
			{
				Local_44.f_7 = "LOC_T71";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "CCreak"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M10";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F11";
			}
			else
			{
				Local_44.f_7 = "LOC_T11";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "CalafB"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M9";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F10";
			}
			else
			{
				Local_44.f_7 = "LOC_T10";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "ChamH"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M11";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F12";
			}
			else
			{
				Local_44.f_7 = "LOC_T12";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "CHU"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M13";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F14";
			}
			else
			{
				Local_44.f_7 = "LOC_T14";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "CHIL"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M96";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F97";
			}
			else
			{
				Local_44.f_7 = "LOC_T97";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "COSI"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M14";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F15";
			}
			else
			{
				Local_44.f_7 = "LOC_T15";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "CMSW"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M12";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F13";
			}
			else
			{
				Local_44.f_7 = "LOC_T13";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Cypre"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M15";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F16";
			}
			else
			{
				Local_44.f_7 = "LOC_T16";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Davis"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M16";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F17";
			}
			else
			{
				Local_44.f_7 = "LOC_T17";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Desrt"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M32";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F33";
			}
			else
			{
				Local_44.f_7 = "LOC_T33";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "DelBe"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M19";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F20";
			}
			else
			{
				Local_44.f_7 = "LOC_T20";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "DelPe"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M18";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F19";
			}
			else
			{
				Local_44.f_7 = "LOC_T19";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "DelSol"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M41";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F42";
			}
			else
			{
				Local_44.f_7 = "LOC_T42";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Downt"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M20";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F21";
			}
			else
			{
				Local_44.f_7 = "LOC_T21";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "DTVine"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M21";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F22";
			}
			else
			{
				Local_44.f_7 = "LOC_T22";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Eclips"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M24";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F25";
			}
			else
			{
				Local_44.f_7 = "LOC_T25";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "ELSant"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M22";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F23";
			}
			else
			{
				Local_44.f_7 = "LOC_T23";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "EBuro"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M25";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F26";
			}
			else
			{
				Local_44.f_7 = "LOC_T26";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "ELGorl"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M26";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F27";
			}
			else
			{
				Local_44.f_7 = "LOC_T27";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Elysian"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M27";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F28";
			}
			else
			{
				Local_44.f_7 = "LOC_T28";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Galli"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M31";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F32";
			}
			else
			{
				Local_44.f_7 = "LOC_T32";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Galfish"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M29";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F30";
			}
			else
			{
				Local_44.f_7 = "LOC_T30";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Greatc"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M34";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F35";
			}
			else
			{
				Local_44.f_7 = "LOC_T35";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Golf"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M35";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F36";
			}
			else
			{
				Local_44.f_7 = "LOC_T36";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "GrapeS"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M33";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F34";
			}
			else
			{
				Local_44.f_7 = "LOC_T34";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Hawick"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M37";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F38";
			}
			else
			{
				Local_44.f_7 = "LOC_T38";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Harmo"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M36";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F37";
			}
			else
			{
				Local_44.f_7 = "LOC_T37";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Heart"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M38";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F39";
			}
			else
			{
				Local_44.f_7 = "LOC_T39";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "HumLab"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M39";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F40";
			}
			else
			{
				Local_44.f_7 = "LOC_T40";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "HORS"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M97";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F98";
			}
			else
			{
				Local_44.f_7 = "LOC_T98";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Koreat"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M46";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F47";
			}
			else
			{
				Local_44.f_7 = "LOC_T47";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Jail"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M5";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F6";
			}
			else
			{
				Local_44.f_7 = "LOC_T6";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "LAct"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M45";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F46";
			}
			else
			{
				Local_44.f_7 = "LOC_T46";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "LDam"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M44";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F45";
			}
			else
			{
				Local_44.f_7 = "LOC_T45";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Lago"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M43";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F44";
			}
			else
			{
				Local_44.f_7 = "LOC_T44";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "LegSqu"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F";
			}
			else
			{
				Local_44.f_7 = "LOC_T";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "LosSF"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M47";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F48";
			}
			else
			{
				Local_44.f_7 = "LOC_T48";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "LMesa"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M40";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F41";
			}
			else
			{
				Local_44.f_7 = "LOC_T41";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "LosPuer"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M41";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F42";
			}
			else
			{
				Local_44.f_7 = "LOC_T42";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "LosPFy"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M42";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F43";
			}
			else
			{
				Local_44.f_7 = "LOC_T43";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "LOSTMC"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F";
			}
			else
			{
				Local_44.f_7 = "LOC_T";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Mirr"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M50";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F51";
			}
			else
			{
				Local_44.f_7 = "LOC_T51";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Morn"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M52";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F53";
			}
			else
			{
				Local_44.f_7 = "LOC_T53";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Murri"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M56";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F57";
			}
			else
			{
				Local_44.f_7 = "LOC_T57";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "MTChil"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M53";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F54";
			}
			else
			{
				Local_44.f_7 = "LOC_T54";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "MTJose"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M55";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F56";
			}
			else
			{
				Local_44.f_7 = "LOC_T56";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "MTGordo"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M54";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F55";
			}
			else
			{
				Local_44.f_7 = "LOC_T55";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Movie"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M72";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F73";
			}
			else
			{
				Local_44.f_7 = "LOC_T73";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "NCHU"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M57";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F58";
			}
			else
			{
				Local_44.f_7 = "LOC_T58";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Noose"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M84";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F85";
			}
			else
			{
				Local_44.f_7 = "LOC_T85";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Oceana"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M60";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F61";
			}
			else
			{
				Local_44.f_7 = "LOC_T61";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Observ"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M30";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F31";
			}
			else
			{
				Local_44.f_7 = "LOC_T31";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Palmpow"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M64";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F65";
			}
			else
			{
				Local_44.f_7 = "LOC_T65";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "PBOX"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M66";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F67";
			}
			else
			{
				Local_44.f_7 = "LOC_T67";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "PBluff"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M59";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F60";
			}
			else
			{
				Local_44.f_7 = "LOC_T60";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Paleto"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M61";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F62";
			}
			else
			{
				Local_44.f_7 = "LOC_T62";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "PalCov"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M62";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F63";
			}
			else
			{
				Local_44.f_7 = "LOC_T63";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "PalFor"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M63";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F64";
			}
			else
			{
				Local_44.f_7 = "LOC_T64";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "PalHigh"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M65";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F66";
			}
			else
			{
				Local_44.f_7 = "LOC_T66";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "ProcoB"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M68";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F69";
			}
			else
			{
				Local_44.f_7 = "LOC_T69";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Prol"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M58";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F59";
			}
			else
			{
				Local_44.f_7 = "LOC_T59";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "RTRAK"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M71";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F72";
			}
			else
			{
				Local_44.f_7 = "LOC_T72";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Rancho"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M69";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F70";
			}
			else
			{
				Local_44.f_7 = "LOC_T70";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "RGLEN"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M74";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F75";
			}
			else
			{
				Local_44.f_7 = "LOC_T75";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Richm"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M73";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F74";
			}
			else
			{
				Local_44.f_7 = "LOC_T74";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Rockf"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M75";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F76";
			}
			else
			{
				Local_44.f_7 = "LOC_T76";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "SANDY"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M79";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F80";
			}
			else
			{
				Local_44.f_7 = "LOC_T80";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "TongvaH"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M87";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F88";
			}
			else
			{
				Local_44.f_7 = "LOC_T88";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "TongvaV"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M88";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F89";
			}
			else
			{
				Local_44.f_7 = "LOC_T89";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "East_V"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M23";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F24";
			}
			else
			{
				Local_44.f_7 = "LOC_T24";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Zenora"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M80";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F81";
			}
			else
			{
				Local_44.f_7 = "LOC_T81";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Slab"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M81";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F82";
			}
			else
			{
				Local_44.f_7 = "LOC_T82";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "SKID"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M51";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F52";
			}
			else
			{
				Local_44.f_7 = "LOC_T52";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "SLSant"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M82";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F83";
			}
			else
			{
				Local_44.f_7 = "LOC_T83";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Stad"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M49";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F50";
			}
			else
			{
				Local_44.f_7 = "LOC_T50";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Tatamo"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M84";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F85";
			}
			else
			{
				Local_44.f_7 = "LOC_T85";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Termina"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M85";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F86";
			}
			else
			{
				Local_44.f_7 = "LOC_T86";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "TEXTI"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M86";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F87";
			}
			else
			{
				Local_44.f_7 = "LOC_T87";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "WVine"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M99";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F100";
			}
			else
			{
				Local_44.f_7 = "LOC_T100";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "UtopiaG"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M89";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F90";
			}
			else
			{
				Local_44.f_7 = "LOC_T90";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Vesp"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M92";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F93";
			}
			else
			{
				Local_44.f_7 = "LOC_T93";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "VCana"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M94";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F95";
			}
			else
			{
				Local_44.f_7 = "LOC_T95";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Vine"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M95";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F96";
			}
			else
			{
				Local_44.f_7 = "LOC_T96";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "WMirror"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M98";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F99";
			}
			else
			{
				Local_44.f_7 = "LOC_T99";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "WindF"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M76";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F77";
			}
			else
			{
				Local_44.f_7 = "LOC_T77";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "Zancudo"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M100";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F101";
			}
			else
			{
				Local_44.f_7 = "LOC_T101";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "SanChia"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M78";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F79";
			}
			else
			{
				Local_44.f_7 = "LOC_T79";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "STRAW"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M83";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F84";
			}
			else
			{
				Local_44.f_7 = "LOC_T84";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "zQ_UAR"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M17";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F18";
			}
			else
			{
				Local_44.f_7 = "LOC_T18";
			}
			return;
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(Local_44.f_6, "ZP_ORT"))
		{
			if (iParam0 == 0)
			{
				Local_44.f_7 = "LOC_M67";
			}
			else if (iParam0 == 1)
			{
				Local_44.f_7 = "LOC_F68";
			}
			else
			{
				Local_44.f_7 = "LOC_T68";
			}
			return;
		}
		if (iParam0 == 0)
		{
			Local_44.f_7 = "LOC_M";
		}
		else if (iParam0 == 1)
		{
			Local_44.f_7 = "LOC_M";
		}
		else
		{
			Local_44.f_7 = "LOC_M";
		}
	}
	else if (iParam0 == 0)
	{
		Local_44.f_7 = "LOC_M";
	}
	else if (iParam0 == 1)
	{
		Local_44.f_7 = "LOC_F";
	}
	else
	{
		Local_44.f_7 = "LOC_T";
	}
}

char* func_186(int iParam0)
{
	char* sVar0;
	
	if (!GAMEPLAY::IS_BIT_SET(iLocal_49, 10))
	{
		if (iLocal_42 == 0)
		{
			sLocal_79 = "FBIPRAU";
		}
		else if (iLocal_42 == 1)
		{
			sLocal_79 = "AHFAUD";
		}
		else if (iLocal_42 == 2)
		{
			sLocal_79 = "FHFAUD";
		}
		if (iLocal_42 == 0)
		{
			if (iParam0 == 0)
			{
				sVar0 = "FBI_3_MDRPC";
			}
			else if (iParam0 == 1)
			{
				sVar0 = "FBI_3_FDRPC";
			}
			else if (iParam0 == 2)
			{
				sVar0 = "FBI_3_TDRPC";
			}
		}
		else if (iLocal_42 == 1)
		{
			if (iParam0 == 0)
			{
				sVar0 = "AH_MDRPC";
			}
			else if (iParam0 == 1)
			{
				sVar0 = "AH_FDRPC";
			}
			else if (iParam0 == 2)
			{
				sVar0 = "AH_TDRPC";
			}
		}
		else if (iLocal_42 == 2)
		{
			if (iParam0 == 0)
			{
				sVar0 = "FHP_PICKCM";
			}
			else if (iParam0 == 1)
			{
				sVar0 = "FHP_PICKCF";
			}
			else if (iParam0 == 2)
			{
				sVar0 = "FHP_PICKCT";
			}
		}
	}
	else
	{
		sLocal_79 = "FHFAUD";
		if (iParam0 == 0)
		{
			sVar0 = "FHP_MOVEM";
		}
		else if (iParam0 == 1)
		{
			sVar0 = "FHP_MOVEF";
		}
		else if (iParam0 == 2)
		{
			sVar0 = "FHP_MOVET";
		}
	}
	return sVar0;
}

int func_187(var uParam0)
{
	switch (func_188(uParam0, 1, 5, 0, 0))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			func_89(35, 0);
			func_149(0);
			return 0;
			break;
		
		case 2:
			func_89(35, 1);
			return 0;
			break;
	}
	return 0;
}

int func_188(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_90805.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_192(0))
		{
			return 0;
		}
		Global_36081++;
		*uParam0 = Global_36081;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_17228.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_36117 = iParam2;
		Global_36079 = *uParam0;
		Global_36080 = iParam4;
		Global_36078 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_36078 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_36078)
			{
				if (Global_36084[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_36079 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_190(iParam2))
		{
			return 0;
		}
		if (Global_36078 == 8)
		{
			return 0;
		}
		Global_36081++;
		*uParam0 = Global_36081;
		Global_36084[Global_36078 /*4*/] = Global_36081;
		Global_36084[Global_36078 /*4*/].f_1 = iParam1;
		Global_36084[Global_36078 /*4*/].f_2 = iParam2;
		Global_36084[Global_36078 /*4*/].f_3 = 0;
		Global_36078++;
		if (iParam4 != 0)
		{
			func_189(uParam0, iParam4);
		}
	}
	return 2;
}

void func_189(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_36078 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_36078)
	{
		if (Global_36084[iVar0 /*4*/] == *uParam0)
		{
			Global_36084[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_190(int iParam0)
{
	return func_191(iParam0, Global_36117);
}

int func_191(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_192(int iParam0)
{
	if (Global_36117 == 15)
	{
		return 0;
	}
	if (func_190(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_193()
{
	if (GAMEPLAY::IS_BIT_SET(iLocal_49, 0))
	{
		if (func_83(iLocal_51))
		{
			if (func_194(12))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_194(int iParam0)
{
	if (Global_16937 == 0)
	{
		return 0;
	}
	if (Global_117[iParam0 /*10*/].f_8 != 145)
	{
		if (Global_14513.f_1 == 10)
		{
			if (Global_1698 == iParam0)
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
	return 0;
}

void func_195()
{
	if (GAMEPLAY::IS_BIT_SET(iLocal_49, 0))
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_49, 11))
		{
			func_237(1);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(iLocal_49, 11))
	{
		func_237(0);
	}
}

void func_196()
{
	int iVar0;
	int iVar1;
	
	if (((((((Global_36117 == 15 && iLocal_37 != 3) && GAMEPLAY::IS_BIT_SET(iLocal_49, 5)) && !func_164()) && Global_71202 == -1) && !func_206()) && !func_82(9)) || func_101(35))
	{
		func_205();
		func_204();
		switch (iLocal_39)
		{
			case 0:
				if (GAMEPLAY::IS_BIT_SET(iLocal_49, 17))
				{
					iVar0 = -1;
					while (iVar0 < (36 - 1))
					{
						iVar0++;
						if (iVar0 != 46)
						{
							func_203(uLocal_47[0], &iVar0);
						}
					}
					GAMEPLAY::CLEAR_BIT(&iLocal_49, 17);
				}
				else
				{
					iVar0 = 31;
					while (iVar0 < (46 - 1))
					{
						iVar0++;
						if (iVar0 != 46)
						{
							func_203(uLocal_47[1], &iVar0);
						}
					}
					GAMEPLAY::SET_BIT(&iLocal_49, 17);
				}
				break;
			
			case 1:
			case 2:
			case 3:
			case 4:
				func_198(iLocal_46, 1);
				break;
		}
	}
	else if (((((((Global_36117 != 15 || Global_36117 != 0) || Global_36117 != 2) || Global_36117 != 4) || Global_36117 != 17) || func_164()) || Global_71202 == -1) || Global_105125)
	{
		iVar1 = 0;
		if (func_197())
		{
			iVar1 = 1;
		}
		else if (Global_105125)
		{
			iVar1 = 2;
		}
		if (GAMEPLAY::IS_BIT_SET(uLocal_47[func_5(iVar1)], iVar1))
		{
			func_198(iVar1, 0);
		}
	}
}

bool func_197()
{
	return SCRIPT::IS_THREAD_ACTIVE(Global_106070.f_18075.f_395);
}

void func_198(int iParam0, bool bParam1)
{
	switch (iLocal_39)
	{
		case 1:
			if ((!UI::IS_HELP_MESSAGE_BEING_DISPLAYED() && !func_201(func_87())) && !func_200())
			{
				func_199(func_3(iParam0), 15000);
				iLocal_39 = 2;
			}
			break;
		
		case 2:
			if (func_2(func_3(iParam0)))
			{
				fLocal_48 = 0f;
				iLocal_39 = 3;
			}
			else
			{
				fLocal_48 = (fLocal_48 + GAMEPLAY::GET_FRAME_TIME());
				if (fLocal_48 >= 20f)
				{
					iLocal_39 = 4;
				}
				else if (GAMEPLAY::IS_BIT_SET(iLocal_49, 15))
				{
					func_4(iParam0);
					GAMEPLAY::CLEAR_BIT(&iLocal_49, 15);
					iLocal_39 = 4;
				}
			}
			break;
		
		case 3:
			if (!func_2(func_3(iParam0)))
			{
				if (fLocal_48 >= 7.5f || GAMEPLAY::IS_BIT_SET(iLocal_49, 15))
				{
					func_4(iParam0);
					GAMEPLAY::CLEAR_BIT(&iLocal_49, 15);
					iLocal_39 = 4;
				}
				else if (bParam1)
				{
					iLocal_39 = 0;
				}
				else
				{
					iLocal_39 = 1;
					fLocal_48 = 0f;
				}
			}
			else
			{
				fLocal_48 = (fLocal_48 + GAMEPLAY::GET_FRAME_TIME());
			}
			break;
		
		case 4:
			fLocal_48 = 0f;
			iLocal_39 = 0;
			break;
	}
}

void func_199(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

int func_200()
{
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_201(int iParam0)
{
	int iVar0;
	
	if (func_54(iParam0))
	{
		if (func_202(iParam0))
		{
			iVar0 = 0;
			while (iVar0 < Global_106070.f_7660.f_136)
			{
				if (Global_106070.f_7660[iVar0 /*15*/].f_3 == 5)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_202(int iParam0)
{
	int iVar0;
	
	if (!func_54(iParam0))
	{
	}
	iVar0 = 0;
	while (iVar0 < Global_106070.f_7660.f_136)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_106070.f_7660[iVar0 /*15*/].f_2, iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_106070.f_7660.f_764)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_106070.f_7660.f_651[iVar0 /*14*/].f_2, iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_106070.f_7660.f_866)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_106070.f_7660.f_765[iVar0 /*10*/].f_2, iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_203(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_6(*iParam1);
	if (GAMEPLAY::IS_BIT_SET(iParam0, iVar0))
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_49, 3))
		{
			iLocal_46 = *iParam1;
			iLocal_39 = 1;
			fLocal_48 = 0f;
			func_4(44);
			func_4(45);
			iLocal_76 = GAMEPLAY::GET_GAME_TIMER();
			*iParam1 = 46;
		}
		else if (14 == iVar0)
		{
			func_4(iVar0);
			*iParam1 = 46;
		}
		else
		{
			iLocal_46 = *iParam1;
			iLocal_39 = 1;
			fLocal_48 = 0f;
			*iParam1 = 46;
		}
	}
}

void func_204()
{
	if (iLocal_37 == 0 || iLocal_37 == 1)
	{
		switch (iLocal_38)
		{
			case 0:
				if (func_137(func_3(3), 0, 0))
				{
					GAMEPLAY::SET_BIT(&iLocal_49, 15);
					UI::CLEAR_HELP(1);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					if (((((((!func_2(func_3(7)) && !func_2(func_3(8))) && !func_2(func_3(10))) && !func_2(func_3(11))) && !func_2(func_3(12))) && !func_2(func_3(13))) && !func_197()) && !Global_104710)
					{
						GAMEPLAY::SET_BIT(&iLocal_49, 15);
						UI::CLEAR_HELP(1);
					}
					iLocal_38 = 1;
				}
				break;
			
			case 1:
				if (GAMEPLAY::IS_BIT_SET(iLocal_49, 0))
				{
					if (iLocal_42 == 2)
					{
						if (iLocal_37 == 1)
						{
							if (func_83(iLocal_51))
							{
								func_68(3);
								func_1(3, 1);
							}
						}
						iLocal_38 = 2;
					}
					else
					{
						if (func_83(iLocal_51))
						{
							func_68(3);
							func_1(3, 1);
						}
						iLocal_38 = 2;
					}
				}
				else
				{
					iLocal_38 = 2;
				}
				break;
			
			case 2:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (func_2(func_3(3)))
					{
						GAMEPLAY::SET_BIT(&iLocal_49, 15);
						UI::CLEAR_HELP(1);
					}
					iLocal_38 = 0;
				}
				break;
			}
	}
}

void func_205()
{
	if ((((!func_101(func_102()) && !func_101(35)) && !func_201(func_87())) && !func_200()) && !func_113())
	{
		if (iLocal_77 < 2 && (GAMEPLAY::GET_GAME_TIMER() - iLocal_76) > 480000)
		{
			if (iLocal_42 != 2)
			{
				func_68(44);
			}
			else
			{
				func_68(45);
			}
			iLocal_77++;
		}
	}
}

int func_206()
{
	if (Global_71465)
	{
		return 1;
	}
	else if (Global_56175 && !Global_56181)
	{
		return 1;
	}
	return 0;
}

void func_207()
{
	if (func_73())
	{
		if (GAMEPLAY::IS_BIT_SET(iLocal_49, 2))
		{
			if (func_83(iLocal_51))
			{
				func_20(iLocal_51, vLocal_52, fLocal_53, 25, 1);
				func_19(&iLocal_51);
			}
			GAMEPLAY::CLEAR_BIT(&iLocal_49, 2);
		}
		func_1(46, 1);
		func_237(0);
	}
}

void func_208()
{
	if (!func_213())
	{
		if (!func_206())
		{
			if (CAM::IS_SCREEN_FADED_IN())
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					func_210();
				}
			}
		}
	}
	else if (iLocal_37 != 3)
	{
		func_209();
	}
}

void func_209()
{
	if (iLocal_37 != 4)
	{
		if (iLocal_37 != 2)
		{
			if (UI::IS_HELP_MESSAGE_BEING_DISPLAYED() && !Global_104710)
			{
				GAMEPLAY::SET_BIT(&iLocal_49, 15);
				UI::CLEAR_HELP(1);
			}
			if (GAMEPLAY::IS_BIT_SET(iLocal_49, 0))
			{
				if (func_83(iLocal_51))
				{
					VEHICLE::_0x02398B627547189C(iLocal_51, 0);
				}
				func_19(&iLocal_51);
				func_153();
				if (iLocal_42 != 2)
				{
					vLocal_50 = { 0f, 0f, 0f };
				}
				GAMEPLAY::CLEAR_BIT(&iLocal_49, 8);
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iLocal_49, 0))
		{
			func_20(iLocal_51, vLocal_52, fLocal_53, 25, 1);
			if (func_83(iLocal_51))
			{
				VEHICLE::_0x02398B627547189C(iLocal_51, 0);
			}
			func_19(&iLocal_51);
			func_153();
		}
		if (UI::HAS_THIS_ADDITIONAL_TEXT_LOADED("GETAWY", 5))
		{
			UI::CLEAR_ADDITIONAL_TEXT(5, false);
			GAMEPLAY::CLEAR_BIT(&iLocal_49, 4);
			GAMEPLAY::CLEAR_BIT(&iLocal_49, 5);
			func_237(0);
			if (func_197())
			{
				func_1(1, 1);
			}
			else
			{
				func_1(0, 1);
			}
		}
		iLocal_37 = 3;
	}
}

void func_210()
{
	func_212();
	if (GAMEPLAY::IS_BIT_SET(iLocal_49, 4))
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_49, 5) && !GAMEPLAY::IS_BIT_SET(iLocal_49, 16))
		{
			UI::REQUEST_ADDITIONAL_TEXT("GETAWY", 5);
			if (UI::HAS_THIS_ADDITIONAL_TEXT_LOADED("GETAWY", 5))
			{
				GAMEPLAY::SET_BIT(&iLocal_49, 5);
			}
			if (GAMEPLAY::IS_BIT_SET(iLocal_49, 5))
			{
				func_211();
				iLocal_39 = 0;
				GAMEPLAY::CLEAR_BIT(&iLocal_49, 7);
				GAMEPLAY::CLEAR_BIT(&iLocal_49, 0);
				GAMEPLAY::CLEAR_BIT(&iLocal_49, 1);
				if (func_2(func_3(0)))
				{
					UI::CLEAR_HELP(1);
				}
				func_4(0);
				iLocal_37 = Global_106070.f_10021.f_128;
			}
		}
	}
}

void func_211()
{
	if (!func_101(func_102()))
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_49, 12))
		{
			if (func_99())
			{
				if (iLocal_42 != 2)
				{
					func_68(44);
				}
				else
				{
					func_68(45);
				}
				GAMEPLAY::SET_BIT(&iLocal_49, 12);
			}
		}
	}
}

void func_212()
{
	if (!UI::IS_STREAMING_ADDITIONAL_TEXT(5))
	{
		GAMEPLAY::SET_BIT(&iLocal_49, 4);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&iLocal_49, 4);
	}
}

int func_213()
{
	if (iLocal_42 != 2)
	{
		if (iLocal_42 == 1 && func_87() == 2)
		{
			if (!GAMEPLAY::IS_BIT_SET(iLocal_49, 16))
			{
				GAMEPLAY::SET_BIT(&iLocal_49, 16);
			}
			return 1;
		}
		else if (GAMEPLAY::IS_BIT_SET(iLocal_49, 16))
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_49, 16);
		}
		if (func_214())
		{
			return 0;
		}
	}
	else if (func_101(35))
	{
		return 0;
	}
	else if (func_214())
	{
		return 0;
	}
	return 1;
}

int func_214()
{
	if (((((Global_36117 == 15 && !func_164()) && Global_71202 == -1) && !func_197()) && !func_215(1112014848)) && !Global_105125)
	{
		return 1;
	}
	return 0;
}

int func_215(float fParam0)
{
	if (iLocal_42 == 1)
	{
		if (func_74(PLAYER::PLAYER_PED_ID(), Global_89273[1 /*15*/], fParam0))
		{
			return 1;
		}
	}
	else if (iLocal_42 == 2)
	{
		if (func_74(PLAYER::PLAYER_PED_ID(), Global_89273[0 /*15*/], fParam0))
		{
			return 1;
		}
	}
	else if (iLocal_42 == 0)
	{
		if (func_74(PLAYER::PLAYER_PED_ID(), Global_89273[3 /*15*/], fParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_216()
{
	if (!GAMEPLAY::IS_BIT_SET(iLocal_49, 13))
	{
		if (func_217())
		{
			GAMEPLAY::SET_BIT(&iLocal_49, 13);
		}
	}
	else if (!func_217())
	{
		GAMEPLAY::CLEAR_BIT(&iLocal_49, 7);
		GAMEPLAY::CLEAR_BIT(&iLocal_49, 0);
		GAMEPLAY::CLEAR_BIT(&iLocal_49, 1);
		GAMEPLAY::CLEAR_BIT(&iLocal_49, 13);
	}
}

int func_217()
{
	if (((((func_218(39) || func_218(40)) || func_218(41)) || func_218(42)) || func_218(43)) || func_218(44))
	{
		return 1;
	}
	return 0;
}

int func_218(int iParam0)
{
	return func_219(iParam0, 6, 1);
}

int func_219(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return GAMEPLAY::IS_BIT_SET(Global_93284.f_1336[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_94() == 0)
		{
			return GAMEPLAY::IS_BIT_SET(func_220(func_222(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_106070.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_220(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_221(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_221(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_97();
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

int func_222(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 8488;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		default:
			break;
	}
	return 9954;
}

int func_223(int iParam0)
{
	if (func_84(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_224(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_104710 && iParam1)
	{
		if (func_2(sParam0) && !UI::IS_HELP_MESSAGE_FADING_OUT())
		{
			UI::CLEAR_HELP(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_106070.f_20382.f_145)
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, &(Global_106070.f_20382[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_106070.f_20382.f_145 - 2))
			{
				func_227(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_226((Global_106070.f_20382.f_145 - 1));
			Global_106070.f_20382.f_145 = (Global_106070.f_20382.f_145 - 1);
			func_225();
			return;
		}
		iVar0++;
	}
}

void func_225()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_106070.f_20382.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_106070.f_20382.f_145)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_106070.f_20382[iVar0 /*16*/].f_11, 0))
		{
			if (Global_106070.f_20382[iVar0 /*16*/].f_12 > Global_106070.f_20382.f_146[0])
			{
				Global_106070.f_20382.f_146[0] = Global_106070.f_20382[iVar0 /*16*/].f_12;
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Global_106070.f_20382[iVar0 /*16*/].f_11, 1))
		{
			if (Global_106070.f_20382[iVar0 /*16*/].f_12 > Global_106070.f_20382.f_146[1])
			{
				Global_106070.f_20382.f_146[1] = Global_106070.f_20382[iVar0 /*16*/].f_12;
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Global_106070.f_20382[iVar0 /*16*/].f_11, 2))
		{
			if (Global_106070.f_20382[iVar0 /*16*/].f_12 > Global_106070.f_20382.f_146[2])
			{
				Global_106070.f_20382.f_146[2] = Global_106070.f_20382[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_226(int iParam0)
{
	StringCopy(&(Global_106070.f_20382[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_106070.f_20382[iParam0 /*16*/].f_4), "", 16);
	Global_106070.f_20382[iParam0 /*16*/].f_8 = 0;
	Global_106070.f_20382[iParam0 /*16*/].f_9 = 0;
	Global_106070.f_20382[iParam0 /*16*/].f_11 = 0;
	Global_106070.f_20382[iParam0 /*16*/].f_10 = -1;
	Global_106070.f_20382[iParam0 /*16*/].f_12 = 0;
	Global_106070.f_20382[iParam0 /*16*/].f_13 = 0;
	Global_106070.f_20382[iParam0 /*16*/].f_14 = 0;
	Global_106070.f_20382[iParam0 /*16*/].f_15 = 0;
}

void func_227(int iParam0, int iParam1)
{
	Global_106070.f_20382[iParam0 /*16*/] = { Global_106070.f_20382[iParam1 /*16*/] };
	Global_106070.f_20382[iParam0 /*16*/].f_4 = { Global_106070.f_20382[iParam1 /*16*/].f_4 };
	Global_106070.f_20382[iParam0 /*16*/].f_8 = Global_106070.f_20382[iParam1 /*16*/].f_8;
	Global_106070.f_20382[iParam0 /*16*/].f_10 = Global_106070.f_20382[iParam1 /*16*/].f_10;
	Global_106070.f_20382[iParam0 /*16*/].f_9 = Global_106070.f_20382[iParam1 /*16*/].f_9;
	Global_106070.f_20382[iParam0 /*16*/].f_11 = Global_106070.f_20382[iParam1 /*16*/].f_11;
	Global_106070.f_20382[iParam0 /*16*/].f_12 = Global_106070.f_20382[iParam1 /*16*/].f_12;
	Global_106070.f_20382[iParam0 /*16*/].f_13 = Global_106070.f_20382[iParam1 /*16*/].f_13;
	Global_106070.f_20382[iParam0 /*16*/].f_14 = Global_106070.f_20382[iParam1 /*16*/].f_14;
	Global_106070.f_20382[iParam0 /*16*/].f_15 = Global_106070.f_20382[iParam1 /*16*/].f_15;
}

int func_228(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106070.f_9057.f_330[iParam0 /*6*/];
}

void func_229(int iParam0)
{
	iLocal_42 = iParam0;
	if (iLocal_42 == 0)
	{
		sLocal_79 = "FBIPRAU";
	}
	else if (iLocal_42 == 1)
	{
		sLocal_79 = "AHFAUD";
	}
	else if (iLocal_42 == 2)
	{
		sLocal_79 = "FHFAUD";
	}
	iLocal_66[0] = joaat("trash");
	iLocal_66[1] = joaat("towtruck");
	iLocal_66[2] = joaat("ambulance");
	iLocal_66[3] = joaat("barracks2");
	iLocal_66[4] = joaat("stretch");
	iLocal_66[5] = joaat("phantom");
	iLocal_66[6] = joaat("packer");
	iLocal_66[7] = joaat("blazer");
	iLocal_66[8] = joaat("blazer2");
	if (iLocal_42 != 0)
	{
		iLocal_66[9] = joaat("sentinel2");
	}
	else
	{
		iLocal_66[9] = 0;
	}
	func_232();
	func_230();
	GAMEPLAY::SET_BIT(&iLocal_49, 17);
	iLocal_76 = GAMEPLAY::GET_GAME_TIMER();
}

void func_230()
{
	sLocal_45[0] = "AM_H_FBIC1A";
	sLocal_45[1] = "AM_H_FBIC1B";
	sLocal_45[2] = "AM_H_FBIC1C";
	sLocal_45[3] = "PRC_WANT";
	sLocal_45[4] = "PRC_DROPOFF";
	sLocal_45[5] = "PRC_INVALVEH";
	sLocal_45[6] = "PRC_HEALTH";
	sLocal_45[7] = func_231(7);
	sLocal_45[8] = func_231(8);
	sLocal_45[9] = "PRC_USEFIRST";
	sLocal_45[10] = func_231(10);
	sLocal_45[11] = func_231(11);
	sLocal_45[13] = func_231(13);
	sLocal_45[12] = func_231(12);
	sLocal_45[14] = "PRC_UNUSE";
	sLocal_45[15] = "PRC_SEATS";
	sLocal_45[16] = "PRC_CBOBVAL";
	sLocal_45[17] = func_231(17);
	sLocal_45[18] = func_231(18);
	sLocal_45[20] = func_231(20);
	sLocal_45[21] = "PRC_PUBAREA";
	sLocal_45[22] = "PRC_LAWAREA";
	sLocal_45[23] = "PRC_RESAREA";
	sLocal_45[24] = "PRC_STOP";
	sLocal_45[25] = "PRC_OWNEDM";
	sLocal_45[26] = "PRC_OWNEDF";
	sLocal_45[27] = "PRC_OWNEDT";
	sLocal_45[28] = "PRC_SECROUTE";
	sLocal_45[29] = "PRC_CLOSELOT";
	sLocal_45[30] = "PRC_CLOSELES";
	sLocal_45[31] = "PRC_CLSAGNT";
	sLocal_45[32] = "PRC_CLOSESAFE_M";
	sLocal_45[33] = "PRC_CLOSESAFE_F";
	sLocal_45[34] = "PRC_CLOSESAFE_T";
	sLocal_45[35] = "PRC_PEDS";
	sLocal_45[36] = "PRC_WATER";
	sLocal_45[37] = "PRC_OBST";
	sLocal_45[38] = "PRC_OBSTVEH";
	sLocal_45[39] = "PRC_UPDWN";
	sLocal_45[40] = "PRC_NEARROAD";
	sLocal_45[41] = "PRC_ONROAD";
	sLocal_45[19] = "PRC_PLAN";
	sLocal_45[42] = "PRC_TOOSTEEP";
	sLocal_45[43] = "PRC_UNEVEN";
	sLocal_45[44] = "PRC_REMIND";
	sLocal_45[45] = "PRC_REMINDA";
}

char* func_231(int iParam0)
{
	char* sVar0;
	
	if (iLocal_42 == 0)
	{
		if (iParam0 == 17)
		{
			sVar0 = "PRC_USEFT";
		}
		else if (iParam0 == 18)
		{
			sVar0 = "PRC_USEM";
		}
		else if (iParam0 == 10)
		{
			sVar0 = "PRC_PICKCARTF";
		}
		else if (iParam0 == 11)
		{
			sVar0 = "PRC_PICKCARM";
		}
		else if (iParam0 == 13)
		{
			sVar0 = "PRC_PICKNEWM";
		}
		else if (iParam0 == 12)
		{
			sVar0 = "PRC_PICKNEWTF";
		}
		else if (iParam0 == 7)
		{
			sVar0 = "PRC_LOCSUITFT";
		}
		else if (iParam0 == 8)
		{
			sVar0 = "PRC_LOCSUITM";
		}
		else if (iParam0 == 20)
		{
			sVar0 = "PRC_INACC";
		}
	}
	else if (iLocal_42 == 1)
	{
		if (iParam0 == 17)
		{
			sVar0 = "PRC_USEFL";
		}
		else if (iParam0 == 18)
		{
			sVar0 = "PRC_USEML";
		}
		else if (iParam0 == 10)
		{
			sVar0 = "PRC_PICKCRFL";
		}
		else if (iParam0 == 11)
		{
			sVar0 = "PRC_PICKCRML";
		}
		else if (iParam0 == 13)
		{
			sVar0 = "PRC_PICKNEWML";
		}
		else if (iParam0 == 12)
		{
			sVar0 = "PRC_PICKNEWFL";
		}
		else if (iParam0 == 7)
		{
			sVar0 = "PRC_LOCSUITFL";
		}
		else if (iParam0 == 8)
		{
			sVar0 = "PRC_LOCSUITML";
		}
		else if (iParam0 == 20)
		{
			sVar0 = "PRC_INACCF";
		}
	}
	else if (iLocal_42 == 2)
	{
		if (iParam0 == 17)
		{
			sVar0 = "PRC_USEL";
		}
		else if (iParam0 == 18)
		{
			sVar0 = "PRC_USEL";
		}
		else if (iParam0 == 10)
		{
			sVar0 = "PRC_PICKCARL";
		}
		else if (iParam0 == 11)
		{
			sVar0 = "PRC_PICKCARL";
		}
		else if (iParam0 == 13)
		{
			sVar0 = "PRC_PICKNEWL";
		}
		else if (iParam0 == 12)
		{
			sVar0 = "PRC_PICKNEWL";
		}
		else if (iParam0 == 7)
		{
			sVar0 = "PRC_LOCSUITFT";
		}
		else if (iParam0 == 8)
		{
			sVar0 = "PRC_LOCSUITM";
		}
		else if (iParam0 == 20)
		{
			sVar0 = "PRC_INACCF";
		}
	}
	return sVar0;
}

void func_232()
{
	sLocal_69[0] = "ARMYB";
	sLocal_69[1] = "AIRP";
	sLocal_69[2] = "STAD";
	sLocal_69[3] = "TERMINA";
	sLocal_69[4] = "MOVIE";
	sLocal_69[5] = "JAIL";
	sLocal_69[6] = "OCEANA";
	sLocal_69[7] = "GOLF";
	sLocal_69[8] = "HORS";
	sLocal_69[9] = "MTCHIL";
	sLocal_69[10] = "MTGORDO";
	sLocal_69[11] = "SANCHIA";
	sLocal_69[12] = "TATAMO";
	Local_68[0 /*261*/][0 /*8*/] = { func_233("DELBE", -1615.257f, -952.5944f, 20.01716f, -2160.706f, -423f, -1.28679f, 327.8f) };
	Local_68[0 /*261*/][1 /*8*/] = { func_233("DELBE", -1521.716f, -914.5676f, 20.17247f, -1855.715f, -1325.784f, -44.79295f, 254.8f) };
	Local_68[0 /*261*/][2 /*8*/] = { func_233("BEACH", -1162.37f, -1815.008f, 15.33822f, -1553.207f, -1098.685f, 0.46467f, 253.91f) };
	Local_68[0 /*261*/][3 /*8*/] = { func_233("BEACH", -1464.219f, -1136.783f, 0.32167f, -2241.566f, -358.8849f, 20.32481f, 282.21f) };
	Local_68[0 /*261*/][4 /*8*/] = { func_233("PBOX", 156.4109f, -1042.641f, 22.31273f, 238.6382f, -821.1217f, 35.10069f, 176.96f) };
	Local_68[0 /*261*/][5 /*8*/] = { func_233("CHIL", 883.1121f, 534.7283f, 115.725f, 559.7425f, 644.602f, 150.5971f, 301.08f) };
	Local_68[0 /*261*/][6 /*8*/] = { func_233("EAST_V", 941.4531f, -329.4256f, 60.77003f, 727.7651f, -200.9519f, 75.59085f, 88.89f) };
	Local_68[0 /*261*/][7 /*8*/] = { func_233("EAST_V", 689.1177f, -273.1406f, 60.21559f, 834.7326f, -352.1655f, 50.92442f, 81.23f) };
	Local_68[0 /*261*/][8 /*8*/] = { func_233("MIRR", 1048.499f, -357.0332f, 60.92149f, 1401.581f, -783.8975f, 75.7477f, 325.93f) };
	Local_68[0 /*261*/][9 /*8*/] = { func_233("MIRR", 892.2836f, -461.5752f, 70.86029f, 1161.301f, -829.8299f, 45.90131f, 184.12f) };
	Local_68[0 /*261*/][10 /*8*/] = { func_233("VCANA", -1161.361f, -1143.716f, -5.71593f, -864.9714f, -981.1257f, 21.09691f, 328.65f) };
	Local_68[0 /*261*/][11 /*8*/] = { func_233("BAYTRE", 251.4011f, 1068.347f, 280.6663f, 189.6012f, 1272.352f, 143.8035f, 160.32f) };
	Local_68[0 /*261*/][13 /*8*/] = { func_233("OBSERV", -450.9835f, 1048.408f, 252.945f, -389.564f, 1244.504f, 370.2469f, 199.93f) };
	Local_68[0 /*261*/][14 /*8*/] = { func_233("AIRP", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_68[0 /*261*/][15 /*8*/] = { func_233("TERMINA", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_68[0 /*261*/][16 /*8*/] = { func_233("STAD", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_68[0 /*261*/][17 /*8*/] = { func_233("MOVIE", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_68[0 /*261*/][18 /*8*/] = { func_233("GOLF", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_68[0 /*261*/][19 /*8*/] = { func_233("HORS", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_68[0 /*261*/][20 /*8*/] = { func_233("PBOX", -28.39781f, -1071.245f, 50.21438f, -49.8352f, -1131.277f, 20.02555f, 55.12f) };
	Local_68[0 /*261*/][21 /*8*/] = { func_233("LOSSF", 843.1962f, 25.93548f, 65.16061f, 1138.687f, 363.0587f, 105.4128f, 61.11f) };
	Local_68[0 /*261*/][22 /*8*/] = { func_233("ROCKF", -992.5638f, -199.7673f, 30.74956f, -687.9904f, -43.23445f, 80.93306f, 80.53f) };
	Local_68[0 /*261*/][23 /*8*/] = { func_233("ROCKF", -251.8548f, -446.2141f, 29.5887f, -362.685f, -434.7425f, 90.931f, 50f) };
	Local_68[0 /*261*/][24 /*8*/] = { func_233("ALTA", 180.2637f, -404.9771f, 40.1713f, 289.9432f, -445.1485f, 124.3793f, 100f) };
	Local_68[0 /*261*/][25 /*8*/] = { func_233("ALTA", 343.8481f, -323.1273f, 80.7749f, 427.08f, -361.0469f, 45.3411f, 85f) };
	Local_68[0 /*261*/][26 /*8*/] = { func_233("RANCHO", 414.5057f, -2092.1f, 19.8533f, 350.8093f, -2158.395f, 12.3916f, 55f) };
	Local_68[0 /*261*/][27 /*8*/] = { func_233("RANCHO", 283.7474f, -2103.918f, 12.9242f, 391.8871f, -1983.204f, 33.0042f, 100f) };
	Local_68[0 /*261*/][28 /*8*/] = { func_233("PBOX", 85.038f, -670.3274f, 42.8642f, 227.8234f, -722.2458f, 274f, 175f) };
	Local_68[0 /*261*/][29 /*8*/] = { func_233("PBOX", -107.2516f, -906.36f, 28.2051f, -49.9007f, -752.925f, 330f, 125f) };
	Local_68[0 /*261*/][30 /*8*/] = { func_233("TEXTI", 456.8563f, -683.8335f, 32.2903f, 457.5504f, -819.4669f, 25.9553f, 14.4f) };
	Local_68[0 /*261*/][31 /*8*/] = { func_233("ROCKF", -699.7205f, -227.3646f, 67.818f, -645.1068f, -332.5107f, 30.9132f, 127.1f) };
	Local_68[0 /*261*/].f_260 = 0;
	Local_68[0 /*261*/].f_257 = 32;
	Local_68[2 /*261*/][0 /*8*/] = { func_233("PBOX", -25.50944f, -932.3846f, 20.41711f, 119.9406f, -523.4398f, 33.07988f, 363.4f) };
	Local_68[2 /*261*/][1 /*8*/] = { func_233("DOWNT", -25.50944f, -932.3846f, 20.41711f, 119.9406f, -523.4398f, 33.07988f, 363.4f) };
	Local_68[2 /*261*/][2 /*8*/] = { func_233("COSI", 1426.934f, 1225.115f, 90.76305f, 1429.982f, 1006.831f, 120.6643f, 259.89f) };
	Local_68[2 /*261*/][3 /*8*/] = { func_233("COSI", 3503.56f, 3546.403f, 20.18748f, 3513.955f, 3875.795f, 72.94806f, 393.78f) };
	Local_68[2 /*261*/][4 /*8*/] = { func_233("SKID", 403.5404f, -864.4694f, 20.33799f, 396.3441f, -1127.325f, 35.49262f, 325.93f) };
	Local_68[2 /*261*/][5 /*8*/] = { func_233("JAIL", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_68[2 /*261*/][6 /*8*/] = { func_233("ARMYB", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_68[2 /*261*/].f_260 = 2;
	Local_68[2 /*261*/].f_257 = 7;
	Local_68[1 /*261*/][0 /*8*/] = { func_233("PALETO", -422.8618f, 6068.399f, 20.34662f, -282.7452f, 6206.324f, 50.46586f, 196.61f) };
	Local_68[1 /*261*/][1 /*8*/] = { func_233("ROCKF", -755.2506f, 147.4266f, 75.41048f, -1079.033f, 169.3806f, 50.46801f, 179.12f) };
	Local_68[1 /*261*/][2 /*8*/] = { func_233("ROCKF", -752.3674f, 90.76733f, 65.5171f, -938.798f, -15.91457f, 35.48347f, 205.78f) };
	Local_68[1 /*261*/][3 /*8*/] = { func_233("ROCKF", -890.4999f, 431.1449f, 90.29848f, -875.3576f, 232.3266f, 60.20724f, 263.82f) };
	Local_68[1 /*261*/][4 /*8*/] = { func_233("ROCKF", -752.3674f, 90.76733f, 65.5171f, -938.798f, -15.91457f, 35.48347f, 205.78f) };
	Local_68[1 /*261*/][5 /*8*/] = { func_233("ROCKF", -1198.183f, 638.6367f, 115.1066f, -444.509f, 750.9377f, 198.2971f, 473.88f) };
	Local_68[1 /*261*/][6 /*8*/] = { func_233("ROCKF", -844.4075f, 400.9413f, 80.433f, -109.5311f, 420.5014f, 120.2088f, 256.03f) };
	Local_68[1 /*261*/][7 /*8*/] = { func_233("ROCKF", -518.6213f, 648.8265f, 130.9352f, -64.0709f, 582.4504f, 215.3084f, 162.72f) };
	Local_68[1 /*261*/][8 /*8*/] = { func_233("RICHM", -934.9802f, 349.6101f, 85.77298f, -1432.451f, 269.9804f, 50.7303f, 185.03f) };
	Local_68[1 /*261*/][9 /*8*/] = { func_233("RICHM", -1633.813f, -69.53224f, 65.10236f, -1446.823f, 69.71544f, 48.23926f, 214.92f) };
	Local_68[1 /*261*/][10 /*8*/] = { func_233("RICHM", -1732.258f, 444.1353f, 130.1258f, -2065.69f, 412.2121f, 98.09863f, 175.17f) };
	Local_68[1 /*261*/][11 /*8*/] = { func_233("RICHM", -1618.036f, 50.95197f, 70.95364f, -1396.514f, 221.1004f, 50.84464f, 161.61f) };
	Local_68[1 /*261*/][12 /*8*/] = { func_233("RICHM", -1801.285f, 106.8786f, 72.12892f, -1541.74f, 263.3738f, 50.44112f, 155.88f) };
	Local_68[1 /*261*/][13 /*8*/] = { func_233("PELUFF", -2208.563f, 146.4101f, 150.9325f, -2350.122f, 486.6066f, 200.5952f, 299.18f) };
	Local_68[1 /*261*/][14 /*8*/] = { func_233("PELUFF", -1852.326f, 134.4172f, 70.06226f, -1994.387f, 299.6283f, 100.9652f, 182.04f) };
	Local_68[1 /*261*/][15 /*8*/] = { func_233("CHIL", -1982.67f, 505.9648f, 100.9364f, -1918.843f, 713.6382f, 150.7395f, 168.9f) };
	Local_68[1 /*261*/][16 /*8*/] = { func_233("CHIL", -1455.751f, 887.3351f, 191.9757f, -1663.207f, 767.3684f, 160.8108f, 239.65f) };
	Local_68[1 /*261*/][17 /*8*/] = { func_233("CHIL", -1570.222f, 508.2056f, 140.3884f, -808.9532f, 526.4333f, 90.18556f, 238.43f) };
	Local_68[1 /*261*/][18 /*8*/] = { func_233("CHIL", 242.6204f, 583.5905f, 159.4043f, 268.0424f, 827.4494f, 201.6953f, 105.09f) };
	Local_68[1 /*261*/][19 /*8*/] = { func_233("CHIL", -21.10285f, 706.8648f, 150.7263f, -210.4382f, 1056.276f, 280.3182f, 290.15f) };
	Local_68[1 /*261*/][20 /*8*/] = { func_233("RGLEN", -1837.538f, 774.2984f, 120.5629f, -1765.842f, 831.0044f, 160.3584f, 68.09f) };
	Local_68[1 /*261*/][21 /*8*/] = { func_233("DIVINE", -372.0849f, 372.7183f, 100.6043f, 390.2198f, 532.5167f, 180.538f, 305.88f) };
	Local_68[1 /*261*/].f_260 = 1;
	Local_68[1 /*261*/].f_257 = 22;
	Local_68[3 /*261*/][0 /*8*/] = { func_233("MTCHIL", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_68[3 /*261*/][1 /*8*/] = { func_233("MTGORDO", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_68[3 /*261*/][2 /*8*/] = { func_233("SANCHIA", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_68[3 /*261*/][3 /*8*/] = { func_233("TATAMO", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
	Local_68[3 /*261*/][4 /*8*/] = { func_233("ELYSIAN", 531.2397f, -3019.267f, 50f, 530.1656f, -3393.623f, -22.4165f, 210f) };
	Local_68[3 /*261*/][5 /*8*/] = { func_233("ELYSIAN", 569.1023f, -2913.018f, 15.891f, 420.8226f, -2912.775f, -15.0372f, 25f) };
	Local_68[3 /*261*/][6 /*8*/] = { func_233("ELYSIAN", 495.1012f, -2833.175f, 5.164f, 460.1983f, -2813.528f, 0.4269f, 12f) };
	Local_68[3 /*261*/][7 /*8*/] = { func_233("ELYSIAN", 675.2973f, -2747.45f, 4.952f, 689.2358f, -2747.396f, 10.9001f, 4.3f) };
	Local_68[3 /*261*/][8 /*8*/] = { func_233("CYPRE", 533.437f, -2693.279f, 17.4952f, 588.6345f, -2693.462f, 5.3007f, 15f) };
	Local_68[3 /*261*/][9 /*8*/] = { func_233("CYPRE", 534.9656f, -2699.136f, 4.9004f, 560.1779f, -2662.192f, 9.0007f, 15f) };
	Local_68[3 /*261*/][10 /*8*/] = { func_233("CYPRE", 583.903f, -2689.207f, 16.9771f, 549.8469f, -2665.318f, 3.9007f, 17.3f) };
	Local_68[3 /*261*/][11 /*8*/] = { func_233("CYPRE", 683.428f, -2635.134f, 9.3367f, 694.4725f, -2679.66f, 4.7815f, 10f) };
	Local_68[3 /*261*/][12 /*8*/] = { func_233("CYPRE", 695.2171f, -2694.769f, 5.9815f, 695.5035f, -2679.168f, 4.8365f, 10f) };
	Local_68[3 /*261*/][13 /*8*/] = { func_233("CYPRE", 731.7991f, -2659.58f, 4.7713f, 732.5307f, -2678.4f, 10.5065f, 25f) };
	Local_68[3 /*261*/][14 /*8*/] = { func_233("ELYSIAN", 86.1885f, -2430.696f, -0.1888f, 119.1515f, -2453.121f, 2.8614f, 13f) };
	Local_68[3 /*261*/][15 /*8*/] = { func_233("ELYSIAN", 260.3166f, -2426.777f, 21.2819f, 313.7871f, -2433.656f, 6.5609f, 20.5f) };
	Local_68[3 /*261*/][16 /*8*/] = { func_233("ELYSIAN", 260.3166f, -2426.777f, 21.2819f, 313.7871f, -2433.656f, 6.5609f, 20.5f) };
	Local_68[3 /*261*/][17 /*8*/] = { func_233("ELYSIAN", 283.1514f, -2456.777f, 19.4609f, 290.2325f, -2403.611f, 4.2465f, 20.5f) };
	Local_68[3 /*261*/][18 /*8*/] = { func_233("ELYSIAN", 266.0341f, -2446.724f, 19.4623f, 308.3783f, -2414.544f, 4.5423f, 20.5f) };
	Local_68[3 /*261*/][19 /*8*/] = { func_233("ELYSIAN", 303.5269f, -2451.446f, 19.4091f, 270.9798f, -2409.452f, 4.4609f, 20.5f) };
	Local_68[3 /*261*/][20 /*8*/] = { func_233("RANCHO", 515.026f, -1653.54f, 37.2615f, 582.571f, -1577.825f, 26.3365f, 100f) };
	Local_68[3 /*261*/][21 /*8*/] = { func_233("BURTON", -150.7403f, -419.0541f, 28.6163f, -52.8669f, -453.5552f, 39.4051f, 100f) };
	Local_68[3 /*261*/][22 /*8*/] = { func_233("SanAnd", 50.2035f, -470.7132f, 36.9003f, 102.0394f, -322.0089f, 115f, 130f) };
	Local_68[3 /*261*/][23 /*8*/] = { func_233("ALTA", 499.1769f, -241.2495f, 47.3462f, 393.5317f, -205.7358f, 79.3132f, 120f) };
	Local_68[3 /*261*/][24 /*8*/] = { func_233("DTVINE", 422.3247f, 62.118f, 113.2905f, 478.494f, 43.322f, 83.4541f, 80f) };
	Local_68[3 /*261*/][25 /*8*/] = { func_233("DTVINE", 385.4908f, 56.1423f, 159.58f, 332.458f, -87.6805f, 63.3657f, 80f) };
	Local_68[3 /*261*/][26 /*8*/] = { func_233("DTVINE", 213.6192f, 90.2228f, 98.9357f, 203.3067f, 61.8088f, 86.9197f, 60f) };
	Local_68[3 /*261*/][27 /*8*/] = { func_233("DTVINE", 192.813f, -14.9451f, 85.3158f, 149.2689f, 0.6803f, 67.0343f, 40f) };
	Local_68[3 /*261*/][28 /*8*/] = { func_233("WVINE", 16.1659f, 61.8685f, 70.8467f, -17.1751f, 74.3771f, 76.88f, 4.5f) };
	Local_68[3 /*261*/][29 /*8*/] = { func_233("WVINE", -86.5425f, 84.8701f, 80.2147f, -50.4826f, 67.7335f, 70.297f, 20f) };
	Local_68[3 /*261*/][30 /*8*/] = { func_233("ELGORL", 3449.839f, 5173.981f, 0.0662f, 3412.309f, 5166.89f, 14.8342f, 33.7f) };
	Local_68[3 /*261*/].f_260 = 3;
	Local_68[3 /*261*/].f_257 = 31;
	if (func_223(PLAYER::PLAYER_PED_ID()))
	{
		sLocal_70 = ZONE::GET_NAME_OF_ZONE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	}
}

struct<8> func_233(char* sParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	struct<8> Var0;
	
	Var0 = sParam0;
	Var0.f_1 = { vParam1 };
	Var0.f_4 = { vParam2 };
	Var0.f_7 = fParam3;
	return Var0;
}

void func_234(int iParam0, bool bParam1)
{
	if (func_83(iLocal_51))
	{
		func_19(&iLocal_51);
	}
	if (!bParam1)
	{
		func_235(iParam0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_235(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_106070.f_9057.f_99.f_219[iVar0], iVar1))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_106070.f_9057.f_99.f_219[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

void func_236()
{
	if (func_101(35))
	{
		func_89(35, 0);
		func_134(&uLocal_246);
	}
	func_138(&iLocal_245);
}

void func_237(bool bParam0)
{
	char* sVar0;
	
	if (bParam0)
	{
		sVar0 = "PRC_MARK";
		if (iLocal_42 == 2)
		{
			sVar0 = "PRC_MARKVEH";
			func_245(sVar0);
		}
		else if (iLocal_42 == 0)
		{
			if (func_87() == 0)
			{
				func_244(sVar0);
				func_243(sVar0);
			}
			else if (func_87() == 1)
			{
				func_242(sVar0);
			}
			else
			{
				func_242(sVar0);
			}
		}
		else if (iLocal_42 == 1)
		{
			if (func_87() == 0)
			{
				func_244(sVar0);
				func_245(sVar0);
			}
			else if (func_87() == 1)
			{
				func_242(sVar0);
				func_245(sVar0);
			}
			else
			{
				func_242(sVar0);
				func_245(sVar0);
			}
		}
		GAMEPLAY::SET_BIT(&iLocal_49, 11);
	}
	else if (GAMEPLAY::IS_BIT_SET(iLocal_49, 11))
	{
		func_241();
		func_240();
		func_239();
		func_238();
		GAMEPLAY::CLEAR_BIT(&iLocal_49, 11);
	}
}

void func_238()
{
	StringCopy(&(Global_2221[3 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}

void func_239()
{
	StringCopy(&(Global_2221[2 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}

void func_240()
{
	StringCopy(&(Global_2221[1 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}

void func_241()
{
	StringCopy(&(Global_2221[0 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}

void func_242(char* sParam0)
{
	StringCopy(&(Global_2221[0 /*16*/].f_8), sParam0, 32);
}

void func_243(char* sParam0)
{
	StringCopy(&(Global_2221[2 /*16*/].f_8), sParam0, 32);
}

void func_244(char* sParam0)
{
	StringCopy(&(Global_2221[1 /*16*/].f_8), sParam0, 32);
}

void func_245(char* sParam0)
{
	StringCopy(&(Global_2221[3 /*16*/].f_8), sParam0, 32);
}

void func_246(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_247(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_247(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_106070.f_20382.f_145)
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_106070.f_20382[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_106070.f_20382.f_145 < 9)
	{
		StringCopy(&(Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_4), sParam1, 16);
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_8 = (GAMEPLAY::GET_GAME_TIMER() + iParam3);
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_9 = iParam5;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_11 = iParam6;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_12 = uParam2;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_13 = iParam7;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_14 = iParam8;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_10 = ((GAMEPLAY::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_10 = -1;
		}
		Global_106070.f_20382.f_145++;
		func_225();
	}
}

int func_248(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	if (!func_51(&(Global_70024.f_555[0 /*21*/]), iParam1))
	{
		return 0;
	}
	else
	{
		func_58(&(Global_106070.f_32605.f_69[Global_70024.f_555[0 /*21*/].f_14 /*78*/]), uParam0);
	}
	return 1;
}

float func_249(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (!func_51(&(Global_70024.f_555[0 /*21*/]), iParam0))
	{
		return 0f;
	}
	return Global_70024.f_555[0 /*21*/].f_3;
}

Vector3 func_250(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (!func_51(&(Global_70024.f_555[0 /*21*/]), iParam0))
	{
		return 0f, 0f, 0f;
	}
	return Global_70024.f_555[0 /*21*/];
}

int func_251(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_106070.f_9057.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	GAMEPLAY::SET_BIT(&(Global_106070.f_9057.f_99.f_219[iVar0]), iVar1);
	return 1;
}

