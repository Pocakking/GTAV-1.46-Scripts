#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		func_1();
	}
	iLocal_0 = ScriptParam_3;
	iLocal_1 = ScriptParam_3.f_1;
	while (!GAMEPLAY::IS_BIT_SET(iLocal_2, 1))
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_2, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_0, 0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_0, 0, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_0, true);
					ENTITY::SET_ENTITY_PROOFS(iLocal_0, 1, 1, 1, 1, 1, 0, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1, 0, 1);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_1, true);
						ENTITY::SET_ENTITY_PROOFS(iLocal_1, 1, 1, 1, 1, 1, 0, 0, 0);
					}
					GAMEPLAY::SET_BIT(&iLocal_2, 0);
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_0, 0))
			{
				fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_0, true));
				if (fVar0 > 90000f)
				{
					GAMEPLAY::SET_BIT(&iLocal_2, 1);
				}
				else if (fVar0 > 40000f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_0))
				{
					GAMEPLAY::SET_BIT(&iLocal_2, 1);
				}
			}
			else
			{
				GAMEPLAY::SET_BIT(&iLocal_2, 1);
			}
		}
		SYSTEM::WAIT(0);
	}
	func_1();
}

void func_1()
{
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_0);
	ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iLocal_1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

