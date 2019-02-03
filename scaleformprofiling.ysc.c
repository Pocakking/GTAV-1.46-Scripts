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
	int iLocal_18 = 0;
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
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_2();
	}
	iLocal_18 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("scaleform_profiling");
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_18))
	{
		SYSTEM::WAIT(0);
	}
	while (true)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(iLocal_18);
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0)
{
	if (Global_14492 == 0)
	{
		if (((((((CONTROLS::IS_CONTROL_PRESSED(2, 189) || CONTROLS::IS_CONTROL_PRESSED(2, 190)) || CONTROLS::IS_CONTROL_PRESSED(2, 188)) || CONTROLS::IS_CONTROL_PRESSED(2, 187)) || CONTROLS::IS_CONTROL_PRESSED(2, 205)) || CONTROLS::IS_CONTROL_PRESSED(2, 206)) || CONTROLS::IS_CONTROL_PRESSED(2, 201)) || CONTROLS::IS_CONTROL_PRESSED(2, 202))
		{
			Global_14492 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
	else if (SYSTEM::TIMERA() > 50)
	{
		Global_14492 = 0;
	}
	if (Global_14492 == 0)
	{
		if (CONTROLS::IS_CONTROL_PRESSED(2, 189))
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(10);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
		if (CONTROLS::IS_CONTROL_PRESSED(2, 190))
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(11);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
		if (CONTROLS::IS_CONTROL_PRESSED(2, 205))
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(4);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
		if (CONTROLS::IS_CONTROL_PRESSED(2, 206))
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(6);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
		if (CONTROLS::IS_CONTROL_PRESSED(2, 188))
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(8);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
		if (CONTROLS::IS_CONTROL_PRESSED(2, 187))
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(9);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
		if (CONTROLS::IS_CONTROL_PRESSED(2, 201))
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(16);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
		if (CONTROLS::IS_CONTROL_PRESSED(2, 202))
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(17);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
	}
}

void func_2()
{
	func_3(0);
	GAMEPLAY::SET_GAME_PAUSED(0);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_18);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_9();
		if (Global_14513.f_1 == 10 || Global_14513.f_1 == 9)
		{
			GAMEPLAY::SET_BIT(&Global_2384, 16);
		}
		Global_14513.f_1 = 1;
		if (func_8(0))
		{
			func_4(0);
		}
	}
	else if (Global_14513.f_1 == 1)
	{
		if (!Global_14513.f_1 == 0)
		{
			Global_14513.f_1 = 3;
		}
	}
}

void func_4(int iParam0)
{
	if (func_7())
	{
		return;
	}
	if (Global_14681)
	{
		func_6(0, 0);
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
	if (!func_5())
	{
		Global_14513.f_1 = 3;
	}
}

int func_5()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_8(0))
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

bool func_7()
{
	return GAMEPLAY::IS_BIT_SET(Global_1678593, 19);
}

int func_8(int iParam0)
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

void func_9()
{
	if (Global_14513.f_1 == 9 || Global_14513.f_1 == 10)
	{
		Global_15875 = 0;
		Global_15871 = 1;
	}
}

