void __EntryFunction__()
{
	GAMEPLAY::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	while (true)
	{
		SYSTEM::WAIT(0);
		func_1();
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_104722)
	{
		if (Global_104722[iVar0 /*28*/].f_21 != 0)
		{
			iVar1 = iVar0;
			if (GAMEPLAY::GET_GAME_TIMER() > Global_104722[iVar0 /*28*/].f_21 && Global_104722[iVar0 /*28*/].f_21 != -1)
			{
				if (func_3(iVar0))
				{
					UI::CLEAR_FLOATING_HELP(iVar1, 0);
				}
				func_2(iVar0);
			}
			else if (func_3(iVar0))
			{
				if (Global_104722[iVar0 /*28*/].f_21 != -1)
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_104722[iVar0 /*28*/].f_27, 0))
					{
						Global_104722[iVar0 /*28*/].f_21 = (Global_104722[iVar0 /*28*/].f_21 + SYSTEM::ROUND((GAMEPLAY::GET_FRAME_TIME() * 1000f)));
						if (UI::_0x2432784ACA090DA4(iVar1))
						{
							GAMEPLAY::SET_BIT(&(Global_104722[iVar0 /*28*/].f_27), 0);
						}
					}
				}
				if (Global_104722[iVar0 /*28*/].f_24.f_2 != 9999f)
				{
					if (Global_104722[iVar0 /*28*/].f_23 != 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Global_104722[iVar0 /*28*/].f_23, 0))
						{
							if (!GAMEPLAY::IS_BIT_SET(Global_104722[iVar0 /*28*/].f_27, 3))
							{
								UI::_0x784BA7E0ECEB4178(iVar1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_104722[iVar0 /*28*/].f_23, Global_104722[iVar0 /*28*/].f_24));
							}
							else
							{
								UI::_0xB094BC1DB4018240(iVar1, Global_104722[iVar0 /*28*/].f_23, Global_104722[iVar0 /*28*/].f_24, Global_104722[iVar0 /*28*/].f_24.f_1);
							}
						}
					}
					else if ((Global_104722[iVar0 /*28*/].f_24 != 0f || Global_104722[iVar0 /*28*/].f_24.f_1 != 0f) || Global_104722[iVar0 /*28*/].f_24.f_2 != 0f)
					{
						UI::_0x784BA7E0ECEB4178(iVar1, Global_104722[iVar0 /*28*/].f_24);
					}
				}
				else
				{
					UI::_0x7679CC1BCEBE3D4C(iVar1, Global_104722[iVar0 /*28*/].f_24, Global_104722[iVar0 /*28*/].f_24.f_1);
				}
			}
			else if ((GAMEPLAY::GET_GAME_TIMER() - Global_104722[iVar0 /*28*/].f_22) > 1000)
			{
				func_2(iVar0);
			}
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	Global_104722[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_104722[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_104722[iParam0 /*28*/].f_4), "", 64);
	Global_104722[iParam0 /*28*/].f_23 = 0;
	Global_104722[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_104722[iParam0 /*28*/].f_27 = 0;
	Global_104722[iParam0 /*28*/].f_20 = 0;
	Global_104722[iParam0 /*28*/].f_22 = 0;
}

int func_3(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_104722[iParam0 /*28*/]), "") && !GAMEPLAY::IS_STRING_NULL(&(Global_104722[iParam0 /*28*/])))
	{
		if (GAMEPLAY::IS_BIT_SET(Global_104722[iParam0 /*28*/].f_27, 1))
		{
			if (GAMEPLAY::IS_BIT_SET(Global_104722[iParam0 /*28*/].f_27, 2))
			{
				return func_7(iVar0, &(Global_104722[iParam0 /*28*/]), &(Global_104722[iParam0 /*28*/].f_4), Global_104722[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_6(iVar0, &(Global_104722[iParam0 /*28*/]), &(Global_104722[iParam0 /*28*/].f_4));
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(Global_104722[iParam0 /*28*/].f_27, 2))
		{
			return func_5(iVar0, &(Global_104722[iParam0 /*28*/]), Global_104722[iParam0 /*28*/].f_20);
		}
		else
		{
			return func_4(iVar0, &(Global_104722[iParam0 /*28*/]));
		}
	}
	return 0;
}

int func_4(int iParam0, char* sParam1)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam1);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED((1 + iParam0));
}

int func_5(int iParam0, char* sParam1, int iParam2)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam1);
	UI::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED((1 + iParam0));
}

int func_6(int iParam0, char* sParam1, char* sParam2)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam1);
	UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED((1 + iParam0));
}

int func_7(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam1);
	UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	UI::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED((1 + iParam0));
}

