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
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = -1;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 1000;
	var uLocal_55 = 1000;
	var uLocal_56 = 0;
	int iLocal_57[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	bool bLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	vector3 vLocal_77 = { 0f, 0f, 0f };
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	bool bLocal_86 = 0;
	float fLocal_87 = 0f;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 1132396544;
	var uLocal_93 = 1132396544;
	var uLocal_94 = 1132396544;
	var uLocal_95 = 0;
	var uLocal_96 = -1082130432;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 8;
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
	var uLocal_156 = -1;
	var uLocal_157 = 1092616192;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	int iLocal_160 = 0;
	struct<21> Local_161 = { 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<10> Local_162[15];
	int iLocal_163 = 0;
	float fLocal_164 = 0f;
	struct<2> Local_165 = { 0, 16 } ;
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
	vector3 vLocal_230[1] = {{ 0f, 0f, 0f } };
	struct<418> Local_231 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_232 = -1;
	var uLocal_233 = -1;
	var uLocal_234 = -1;
	var uLocal_235 = -1;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	vector3 vLocal_246 = { 0f, 0f, 0f };
	vector3 vLocal_247 = { 0f, 0f, 0f };
	vector3 vLocal_248 = { 0f, 0f, 0f };
	vector3 vLocal_249 = { 0f, 0f, 0f };
	vector3 vLocal_250 = { 0f, 0f, 0f };
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	bool bLocal_254 = 0;
	int iLocal_255 = 0;
	bool bLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	var uLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	vector3 vLocal_269[24] = "";
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	vector3 vLocal_273[24] = "";
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	vector3 vLocal_277[24] = "";
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	vector3 vLocal_281[24] = "";
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	vector3 vLocal_285[24] = "";
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	vector3 vLocal_289[24] = "";
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	vector3 vLocal_293[24] = "";
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	vector3 vLocal_297[24] = "";
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	vector3 vLocal_301[24] = "";
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	struct<6> Local_305 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 1097859072;
	var uLocal_309 = 1500;
	var uLocal_310 = 45;
	var uLocal_311 = 1103626240;
	var uLocal_312 = 5;
	int iLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	int iLocal_323[2] = { 0, 0 };
	int iLocal_324 = 0;
	var uLocal_325[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	bool bLocal_329 = 0;
	struct<28> Local_330 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 5;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_71 = UI::_0x4A9923385BDB9DAD();
	iLocal_72 = UI::_GET_BLIP_INFO_ID_ITERATOR();
	vLocal_77 = { 500f, 500f, 500f };
	vLocal_246 = { 342.6987f, -996.7599f, 28.2438f };
	vLocal_247 = { 321.1089f, -996.4285f, 28.20932f };
	vLocal_248 = { -1042.946f, -2689.55f, 12.7572f };
	vLocal_249 = { -1044.808f, -2694.138f, 12.728f };
	vLocal_250 = { 348.0136f, -993.6165f, 31.9655f };
	iLocal_262 = 1;
	iLocal_266 = -1;
	StringCopy(&cLocal_269, "txm8_thank1M_2", 24);
	StringCopy(&cLocal_273, "txm8_thank1T_2", 24);
	StringCopy(&cLocal_277, "txm8_thank1F_2", 24);
	StringCopy(&cLocal_281, "txm8_thank2M_2", 24);
	StringCopy(&cLocal_285, "txm8_thank2T_2", 24);
	StringCopy(&cLocal_289, "txm8_thank2F_2", 24);
	StringCopy(&cLocal_293, "txm8_thank3M_2", 24);
	StringCopy(&cLocal_297, "txm8_thank3T_2", 24);
	StringCopy(&cLocal_301, "txm8_thank3F_2", 24);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		func_434(2);
		func_431();
	}
	GAMEPLAY::SET_MISSION_FLAG(1);
	func_418(5);
	while (true)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_231.f_2))
		{
			func_8();
		}
		else
		{
			func_1(&Local_231);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(var uParam0)
{
	uParam0->f_2 = PLAYER::PLAYER_PED_ID();
	func_6(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(PLAYER::PLAYER_PED_ID());
	if (iVar1 == 0)
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	else if (iVar1 == 2)
	{
		iVar0 = joaat("sp2_dist_driving_car");
	}
	else if (iVar1 == 1)
	{
		iVar0 = joaat("sp1_dist_driving_car");
	}
	else
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	return iVar0;
}

int func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_4(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_4(int iParam0)
{
	if (func_5(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_5(int iParam0)
{
	return iParam0 < 3;
}

void func_6(var uParam0)
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = func_3(PLAYER::PLAYER_PED_ID());
	if (iVar0 == 0)
	{
		func_7(uParam0, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_7(uParam0, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_7(uParam0, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_7(uParam0, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_7(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_7(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_8()
{
	int iVar0;
	int iVar1;
	
	if (func_417(&Local_231))
	{
		if (func_416(&Local_231, bLocal_254))
		{
			func_414();
		}
	}
	else
	{
		func_413(&Local_231);
		func_379(&Local_231, &uLocal_306);
		if (Local_231.f_410 != 28 && Local_231.f_410 != 30)
		{
			func_378(&Local_231);
		}
		func_377(&Local_231, &uLocal_264, 0);
		if (Local_231.f_410 > 2)
		{
			if (((Local_231.f_410 == 21 || Local_231.f_410 == 25) || Local_231.f_410 == 9) || Local_231.f_410 == 22)
			{
				func_376(&Local_231);
			}
			if (!func_375(&Local_231))
			{
				func_345();
			}
			else
			{
				func_329(&Local_231, "Taxi Not Driveable", func_344(&Local_231));
			}
		}
		if (Local_231.f_410 == 9 || Local_231.f_410 == 22)
		{
			func_306(&Local_231, 0, 1);
		}
		if (Local_231.f_410 == 17 || Local_231.f_410 == 21)
		{
			if (func_305(&Local_231) && func_295(1, 1, 0))
			{
				func_282(&uLocal_45, vLocal_250, 0, 0, 1, 1, 1);
			}
			else
			{
				func_281(&uLocal_45, 0, 0);
			}
			if (func_280(&Local_231) && func_295(1, 1, 0))
			{
				if (!GAMEPLAY::IS_BIT_SET(iLocal_263, 3))
				{
					func_279("TAXI_HNT_CAM", -1);
					GAMEPLAY::SET_BIT(&iLocal_263, 3);
					if (GAMEPLAY::IS_BIT_SET(iLocal_263, 4))
					{
						GAMEPLAY::CLEAR_BIT(&iLocal_263, 4);
					}
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(iLocal_263, 4))
			{
				UI::CLEAR_HELP(1);
				GAMEPLAY::SET_BIT(&iLocal_263, 4);
			}
		}
		switch (Local_231.f_410)
		{
			case 0:
				func_276();
				func_275(&Local_231, 16, 4f, 0);
				func_272(&Local_231, vLocal_248, vLocal_249, "TaxiDerrick", func_274(0), 116.1366f, 10f);
				func_270(&Local_231);
				func_269(&Local_231, 1);
				break;
			
			case 1:
				if (func_267())
				{
					PED::ADD_RELATIONSHIP_GROUP("TAXI_Pursuers", &iLocal_328);
					func_266();
					func_246();
					func_245(&(vLocal_230[0 /*3*/]), "TAXI_SC_BN_07", 1000);
					func_244(&Local_231, &vLocal_230);
					func_243(&Local_231);
					Local_231.f_14 = { vLocal_248 };
					func_269(&Local_231, 3);
				}
				break;
			
			case 3:
				if (func_237(&Local_231, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_231.f_3, 0))
					{
						PED::SET_PED_COMPONENT_VARIATION(Local_231.f_3, 8, 0, 0, 0);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_231.f_3, iLocal_328);
						WEAPON::REMOVE_ALL_PED_WEAPONS(Local_231.f_3, 1);
					}
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1035.326f, -2703.305f, 12.8004f, -1056.08f, -2568.675f, 12.8181f, 125f, 1, false, 1);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, 1166638144, Local_231.f_413);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, -1865950624, Local_231.f_413);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, 296331235, Local_231.f_413);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_274(0));
					func_236(&Local_231, 1, 0);
					func_269(&Local_231, 5);
				}
				break;
			
			case 5:
				if (func_212(&Local_231, 0, 1109393408))
				{
					Local_231.f_17 = { func_211(0) };
					iLocal_251 = 1;
					func_269(&Local_231, 15);
				}
				break;
			
			case 15:
				if (func_210(&Local_231))
				{
					func_207(&Local_231, 9, 1, 0, 0);
					func_206(&Local_231);
					func_205();
					func_204(func_211(-1), 0, 1114636288);
					func_269(&Local_231, 9);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_231.f_4, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_231.f_2, Local_231.f_4, 0))
					{
						func_199(&Local_231);
						func_269(&Local_231, 5);
					}
				}
				break;
			
			case 9:
				if (!func_198(Local_231.f_82, 16384) && func_197(&Local_231) != 35)
				{
					if (func_196(&Local_231))
					{
						if (func_280(&Local_231))
						{
							if (func_195(Local_231.f_4, Local_231.f_17, 1) <= 80f)
							{
								func_193(&uLocal_333);
								func_192(&Local_330, 4, 0);
								func_207(&Local_231, 35, 1, 1, 0);
								PED::SET_CREATE_RANDOM_COPS(false);
							}
						}
					}
				}
				if (!iLocal_261)
				{
					if (func_196(&Local_231))
					{
						if (func_280(&Local_231))
						{
							if (func_195(Local_231.f_4, Local_231.f_17, 1) <= 100f)
							{
								GAMEPLAY::CLEAR_AREA_OF_COPS(333.6208f, -955.5027f, 28.4225f, 60f, 0);
								iLocal_261 = 1;
							}
						}
					}
				}
				if (func_175(&Local_231, 1086324736, 1097859072, 1117782016))
				{
					iLocal_251 = 0;
					UI::SET_BLIP_ALPHA(Local_231.f_9, 0);
					Local_231.f_26 = { -1047.518f, -2722.114f, 19.0823f };
					Local_231.f_34 = 238.52f;
					func_275(&Local_231, 6, 0, 0);
					func_173(&(Local_231.f_81), 67108864);
					func_207(&Local_231, 28, 1, 1, 0);
					Local_231.f_417 = 29;
					func_269(&Local_231, 16);
				}
				break;
			
			case 16:
				if (!PED::IS_PED_INJURED(Local_231.f_3))
				{
					if (func_196(&Local_231))
					{
						func_171(&Local_231, vLocal_246);
					}
					else if (AI::GET_SCRIPT_TASK_STATUS(Local_231.f_3, 451360105) == 7)
					{
						AI::CLEAR_SEQUENCE_TASK(&iLocal_245);
						AI::OPEN_SEQUENCE_TASK(&iLocal_245);
						AI::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_246, 1.5f, 40000, 1048576000, 0, 1193033728);
						AI::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 337.3356f, -997.7456f, 28.1318f, 3f, 40000, 1048576000, 0, 1193033728);
						AI::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_247, 3f, 40000, 1048576000, 0, 1193033728);
						AI::CLOSE_SEQUENCE_TASK(iLocal_245);
						AI::TASK_PERFORM_SEQUENCE(Local_231.f_3, iLocal_245);
						AI::CLEAR_SEQUENCE_TASK(&iLocal_245);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
						func_275(&Local_231, 6, 0, 0);
						func_269(&Local_231, 17);
						iLocal_252 = 0;
					}
				}
				break;
			
			case 17:
				if (!PED::IS_PED_INJURED(Local_231.f_3))
				{
				}
				if (!iLocal_252)
				{
					func_163();
				}
				if (func_280(&Local_231))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(Local_231.f_4, Local_231.f_17, 10f, 10f, 10f, false, true, 0))
					{
						if (func_195(Local_231.f_4, Local_231.f_17, 1) > 250f)
						{
							func_329(&Local_231, "Player abandoned his accomplice while he at the jewelry store", 8);
						}
						if (func_161(Local_231.f_3, 1) > 10f)
						{
							if (UI::GET_BLIP_ALPHA(Local_231.f_9) == 0 && !bLocal_254)
							{
								func_158(&Local_231, 1);
								UI::CLEAR_THIS_PRINT("TAXI_OBJ_CYI_01");
							}
							func_207(&Local_231, 57, 1, 0, 1);
						}
					}
					else if (UI::DOES_BLIP_EXIST(Local_231.f_9) && UI::GET_BLIP_ALPHA(Local_231.f_9) > 0)
					{
						UI::SET_BLIP_ALPHA(Local_231.f_9, 0);
						UI::SET_BLIP_ROUTE(Local_231.f_9, false);
						func_207(&Local_231, 29, 1, 0, 1);
						UI::CLEAR_THIS_PRINT("TAXI_OBJ_CYI_1B");
					}
				}
				else
				{
					if (!iLocal_253)
					{
						iLocal_253 = 1;
					}
					func_147(&Local_231, 1);
				}
				if (((ENTITY::IS_ENTITY_AT_COORD(Local_231.f_4, Local_231.f_17, 10f, 10f, 10f, false, true, 0) && ENTITY::IS_ENTITY_AT_COORD(Local_231.f_3, vLocal_247, 5f, 5f, 5f, false, true, 0)) && func_305(&Local_231)) && !iLocal_252)
				{
					if (!PED::IS_PED_INJURED(Local_231.f_3))
					{
						if (ENTITY::IS_ENTITY_OCCLUDED(Local_231.f_3))
						{
							GAMEPLAY::SET_BIT(&uLocal_306, 8);
							WEAPON::GIVE_WEAPON_TO_PED(Local_231.f_3, joaat("weapon_combatpistol"), 50, false, true);
							AI::TASK_SHOOT_AT_COORD(Local_231.f_3, 335.5314f, -992.4785f, 28.38245f, 10000, -687903391);
							ENTITY::SET_ENTITY_VISIBLE(Local_231.f_3, false, 0);
							ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_231.f_3, false);
							ENTITY::SET_ENTITY_INVINCIBLE(Local_231.f_3, true);
							ENTITY::SET_ENTITY_COORDS(Local_231.f_3, 339.9392f, -992.9357f, 28.3731f, 1, false, 0, 1);
							iLocal_252 = 1;
							func_275(&Local_231, 6, 0, 0);
						}
					}
				}
				if (iLocal_252)
				{
					if ((func_145(&Local_231, 6) > 8f && ENTITY::IS_ENTITY_AT_COORD(Local_231.f_4, Local_231.f_17, 10f, 10f, 10f, false, true, 0)) && func_305(&Local_231))
					{
						if (!PED::IS_PED_INJURED(Local_231.f_3))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(Local_231.f_3))
							{
								GAMEPLAY::CLEAR_BIT(&uLocal_306, 8);
								ENTITY::SET_ENTITY_VISIBLE(Local_231.f_3, true, 0);
								ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_231.f_3, true);
								ENTITY::SET_ENTITY_INVINCIBLE(Local_231.f_3, false);
								ENTITY::SET_ENTITY_COORDS(Local_231.f_3, vLocal_247, 1, false, 0, 1);
								PED::SET_PED_COMPONENT_VARIATION(Local_231.f_3, 8, 1, 0, 0);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_231.f_4, 0))
								{
									PED::SET_PED_CONFIG_FLAG(Local_231.f_3, 118, false);
									AI::CLEAR_PED_TASKS_IMMEDIATELY(Local_231.f_3);
									iVar0 = func_144(Local_231.f_4, Local_231.f_3);
									AI::CLEAR_SEQUENCE_TASK(&iLocal_245);
									AI::OPEN_SEQUENCE_TASK(&iLocal_245);
									AI::TASK_GO_TO_COORD_ANY_MEANS(0, 343.9973f, -998.308f, 28.2314f, 3f, 0, 0, 786603, -1082130432);
									AI::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
									AI::TASK_SWAP_WEAPON(0, 0);
									AI::TASK_ENTER_VEHICLE(0, Local_231.f_4, 40000, iVar0, 2f, 1, 0);
									AI::CLOSE_SEQUENCE_TASK(iLocal_245);
									AI::TASK_PERFORM_SEQUENCE(Local_231.f_3, iLocal_245);
									AI::CLEAR_SEQUENCE_TASK(&iLocal_245);
									func_275(&Local_231, 6, 0, 0);
									if (UI::DOES_BLIP_EXIST(Local_231.f_9))
									{
										UI::SET_BLIP_ALPHA(Local_231.f_9, 0);
										UI::SET_BLIP_ROUTE(Local_231.f_9, false);
									}
									PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_231.f_3, "MOVE_P_M_ZERO_RUCKSACK");
									func_269(&Local_231, 21);
								}
							}
						}
					}
				}
				break;
			
			case 21:
				if (func_145(&Local_231, 6) > 23f)
				{
					if (!PED::IS_PED_INJURED(Local_231.f_3))
					{
						AI::CLEAR_PED_TASKS(Local_231.f_3);
						AI::TASK_SHOOT_AT_ENTITY(Local_231.f_3, PLAYER::PLAYER_PED_ID(), -1, 0);
					}
					func_329(&Local_231, "player didn't let teh Passenger in", 8);
				}
				else if ((GAMEPLAY::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				if ((ENTITY::IS_ENTITY_AT_COORD(Local_231.f_3, 347.8621f, -983.6118f, 31.30889f, 4f, 3f, 3f, false, true, 0) && ENTITY::IS_ENTITY_AT_COORD(Local_231.f_4, Local_231.f_17, 10f, 10f, 10f, false, true, 0)) && iLocal_252)
				{
					FIRE::ADD_EXPLOSION(344.5906f, -996.409f, 28.30219f, 4, 1056964608, 1, 0, 1065353216, 0);
					AUDIO::PLAY_SOUND_FROM_COORD(iLocal_266, "Burglar_Bell", 340.8f, -965.4f, 28.4f, "Generic_Alarms", 0, 0, 0);
					iLocal_252 = 0;
				}
				if (func_196(&Local_231))
				{
					PED::SET_CREATE_RANDOM_COPS(true);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::GET_PLAYER_INDEX(), 2, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::GET_PLAYER_INDEX(), 0);
					AUDIO::START_AUDIO_SCENE("TAXI_CUT_U_IN");
					func_204(func_211(0), 1, 1114636288);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Local_231.f_413, -1533126372);
					func_142(6, 2);
					func_207(&Local_231, 49, 1, 0, 0);
					if (UI::DOES_BLIP_EXIST(Local_231.f_9))
					{
						UI::SET_BLIP_ROUTE(Local_231.f_9, false);
						UI::REMOVE_BLIP(&(Local_231.f_9));
					}
					func_281(&uLocal_45, 0, 0);
					func_275(&Local_231, 6, 0, 0);
					func_275(&Local_231, 9, 0, 0);
					func_275(&Local_231, 7, 0, 0);
					func_269(&Local_231, 25);
				}
				break;
			
			case 25:
				func_141(&Local_231, &(Local_231.f_43));
				if (func_198(Local_231.f_44, 4))
				{
					func_139(&(Local_231.f_44), 4);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) > 0)
				{
					if (!func_138(&Local_231))
					{
						if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							if ((func_145(&Local_231, 16) > GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(15f, 25f) && iLocal_268 < 8) || func_145(&Local_231, 16) > GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(25f, 35f))
							{
								if (func_197(&Local_231) != 51)
								{
									func_207(&Local_231, 51, 1, 0, 0);
									iLocal_268++;
								}
								else
								{
									func_236(&Local_231, 1, 0);
								}
							}
						}
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1 && func_145(&Local_231, 6) > 10f)
				{
					AUDIO::STOP_AUDIO_SCENE("TAXI_CUT_U_IN");
					func_269(&Local_231, 26);
					func_173(&(Local_231.f_44), 1);
				}
				break;
			
			case 26:
				func_141(&Local_231, &(Local_231.f_43));
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) > 0)
				{
					if (!func_138(&Local_231))
					{
						if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							if ((func_145(&Local_231, 16) > GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(15f, 25f) && iLocal_268 < 8) || func_145(&Local_231, 16) > GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(25f, 35f))
							{
								if (func_197(&Local_231) != 51)
								{
									func_207(&Local_231, 51, 1, 0, 0);
									iLocal_268++;
								}
								else
								{
									func_236(&Local_231, 1, 0);
								}
							}
						}
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1 && func_145(&Local_231, 9) > 2f)
				{
					if (func_145(&Local_231, 9) <= 180f)
					{
						func_137(&Local_231, 0);
					}
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, Local_231.f_413, -1533126372);
					Local_231.f_17 = { func_211(5) };
					func_142(7, 2);
					func_136(&Local_231);
					func_135(&Local_231, 9, 0);
					func_135(&Local_231, 2, 0);
					func_135(&Local_231, 3, 0);
					if (!func_198(Local_231.f_44, 4))
					{
						func_173(&(Local_231.f_44), 4);
					}
					Local_231.f_116 = 1;
					func_269(&Local_231, 14);
				}
				break;
			
			case 14:
				if (!func_133(&Local_231))
				{
					func_130();
					func_158(&Local_231, 1);
					func_129();
					func_269(&Local_231, 22);
				}
				break;
			
			case 22:
				if (!bLocal_256)
				{
					if (Local_231.f_417 == 33 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
					{
						bLocal_256 = true;
						func_173(&(Local_231.f_44), 4);
						func_128(&iLocal_266);
						Local_330.f_27++;
					}
				}
				if (bLocal_256)
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) > 0)
					{
						if (UI::DOES_BLIP_EXIST(Local_231.f_9))
						{
							UI::SET_BLIP_ROUTE(Local_231.f_9, false);
							UI::REMOVE_BLIP(&(Local_231.f_9));
						}
					}
					else
					{
						func_158(&Local_231, 1);
					}
				}
				if (func_198(Local_231.f_44, 1) && bLocal_256)
				{
					func_139(&(Local_231.f_44), 1);
					if (bLocal_329)
					{
					}
				}
				if (!func_198(Local_231.f_82, 32768) && func_197(&Local_231) != 36)
				{
					if (func_196(&Local_231))
					{
						if (func_280(&Local_231))
						{
							if (func_195(Local_231.f_4, Local_231.f_17, 1) <= 300f)
							{
								if (!func_127())
								{
									func_207(&Local_231, 36, 1, 1, 0);
								}
								else
								{
									func_125();
								}
								if (iLocal_255 && !iLocal_258)
								{
									GAMEPLAY::CLEAR_AREA(Local_231.f_17, 3f, 0, 0, 0, false);
									iLocal_326 = PED::ADD_SCENARIO_BLOCKING_AREA(-1033.188f, -2743.18f, 19f, -1047.948f, -2739.18f, 20.20066f, 0, 1, 1, 1);
									iLocal_323[0] = PED::CREATE_PED(6, func_274(3), -1036.502f, -2742.986f, 20.16969f, 0f, 1, true);
									iLocal_323[1] = PED::CREATE_PED(6, func_274(3), -1043.706f, -2739.234f, 19.16969f, 0f, 1, true);
									WEAPON::GIVE_WEAPON_TO_PED(iLocal_323[0], joaat("weapon_carbinerifle"), -1, true, true);
									WEAPON::GIVE_WEAPON_TO_PED(iLocal_323[1], joaat("weapon_carbinerifle"), -1, true, true);
									if (AI::DOES_SCENARIO_EXIST_IN_AREA(-1036.502f, -2742.986f, 20.16969f, 5f, 1))
									{
										AI::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_323[0], -1036.502f, -2742.986f, 20.16969f, 2.5f, 0);
									}
									else
									{
										AI::TASK_START_SCENARIO_IN_PLACE(iLocal_323[0], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, 0);
									}
									if (AI::DOES_SCENARIO_EXIST_IN_AREA(-1043.706f, -2739.234f, 19.16969f, 5f, 1))
									{
										AI::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_323[1], -1043.706f, -2739.234f, 19.16969f, 2.5f, 0);
									}
									else
									{
										AI::TASK_START_SCENARIO_IN_PLACE(iLocal_323[1], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, 0);
									}
									iLocal_258 = 1;
								}
							}
						}
					}
				}
				if (func_175(&Local_231, 1086324736, 1097859072, 1117782016))
				{
					Local_330 = 0;
					UI::REMOVE_BLIP(&(Local_231.f_9));
					func_123(&Local_231);
					func_119(&Local_231);
					func_118();
					func_269(&Local_231, 27);
				}
				break;
			
			case 27:
				if (func_116() && !iLocal_257)
				{
					func_115(&Local_231, &iVar1);
					iLocal_244 = OBJECT::CREATE_OBJECT(joaat("p_banknote_s"), ENTITY::GET_ENTITY_COORDS(Local_231.f_3, true), true, true, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_244, Local_231.f_3, 57005, 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					if (!PED::IS_PED_INJURED(Local_231.f_3) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						AI::TASK_PLAY_ANIM(Local_231.f_3, "oddjobs@taxi@cyi", func_114(iVar1), 2f, -2f, -1, 0, 0f, 0, 0, 0);
						AI::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "oddjobs@taxi@cyi", func_113(iVar1), 2f, -2f, -1, 0, 0f, 0, 0, 0);
						ENTITY::PLAY_ENTITY_ANIM(iLocal_244, func_112(iVar1), "oddjobs@taxi@cyi", 1f, 0, 0, 0, 0f, 0);
					}
					iLocal_257 = 1;
				}
				if (func_104(&Local_231, 1))
				{
					AI::CLEAR_SEQUENCE_TASK(&iLocal_245);
					AI::OPEN_SEQUENCE_TASK(&iLocal_245);
					AI::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					AI::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
					AI::TASK_CLEAR_LOOK_AT(0);
					AI::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_231.f_29, 1f, 20000, 1048576000, 0, 1193033728);
					AI::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
					AI::CLOSE_SEQUENCE_TASK(iLocal_245);
					AI::TASK_PERFORM_SEQUENCE(Local_231.f_3, iLocal_245);
					PED::SET_PED_KEEP_TASK(Local_231.f_3, true);
					PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_231.f_3, "MOVE_P_M_ZERO_RUCKSACK");
					func_269(&Local_231, 29);
				}
				break;
			
			case 29:
				if (func_73(&Local_231, &iLocal_313))
				{
					if (iLocal_255 || iLocal_265 == -1)
					{
						func_269(&Local_231, 28);
					}
					else
					{
						func_11(1, &Local_231, 1);
						func_269(&Local_231, 30);
					}
				}
				break;
			
			case 28:
				if (func_9())
				{
					func_11(1, &Local_231, 1);
					func_269(&Local_231, 30);
				}
				break;
			
			case 30:
				func_431();
				break;
			}
	}
}

int func_9()
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	
	vVar1 = { vVar1 };
	if (iLocal_265 > 2)
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
	switch (iLocal_265)
	{
		case -1:
			iLocal_265++;
			break;
		
		case 0:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			PED::SET_CREATE_RANDOM_COPS(false);
			AI::CLEAR_SEQUENCE_TASK(&iVar0);
			AI::OPEN_SEQUENCE_TASK(&iVar0);
			AI::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
			AI::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1041.9f, -2745.113f, 20.3644f, 1.25f, 20000, 1048576000, 0, 1193033728);
			AI::CLOSE_SEQUENCE_TASK(iVar0);
			AI::TASK_PERFORM_SEQUENCE(Local_231.f_3, iVar0);
			AI::CLEAR_SEQUENCE_TASK(&iVar0);
			iLocal_327 = VEHICLE::CREATE_VEHICLE(func_274(4), -1067.146f, -2579.632f, 19.7762f, 150f, true, true, false);
			iLocal_324 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_327, 26, func_274(3), -1, 1, true);
			func_275(&Local_231, 9, 0, 0);
			iLocal_265++;
			break;
		
		case 1:
			if (func_145(&Local_231, 9) > 0.5f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_231.f_3, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_323[0], 0))
					{
						AI::TASK_LOOK_AT_ENTITY(iLocal_323[0], Local_231.f_3, -1, 2049, 3);
						func_7(&(Local_231.f_244), 4, iLocal_323[0], "TaxiOJCop1", 0, 1);
						AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_323[0], "TaxiOJCop1");
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_323[1], 0))
					{
						AI::TASK_LOOK_AT_ENTITY(iLocal_323[1], Local_231.f_3, -1, 2049, 3);
					}
				}
				iLocal_265++;
			}
			break;
		
		case 2:
			if ((!ENTITY::IS_ENTITY_DEAD(iLocal_323[0], 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_323[1], 0)) && !ENTITY::IS_ENTITY_DEAD(Local_231.f_3, 0))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_231.f_3, -1032.675f, -2738.775f, 19.16969f, -1041.51f, -2733.615f, 21.54504f, 2f, 0, true, 0))
				{
					AI::OPEN_SEQUENCE_TASK(&iVar0);
					AI::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Local_231.f_3, Local_231.f_3, 1f, 0, 4f, 1082130432, 1, 0, -957453492);
					AI::TASK_AIM_GUN_AT_ENTITY(0, Local_231.f_3, -1, 0);
					AI::CLOSE_SEQUENCE_TASK(iVar0);
					AI::TASK_PERFORM_SEQUENCE(iLocal_323[0], iVar0);
					AI::CLEAR_SEQUENCE_TASK(&iVar0);
					PED::SET_PED_KEEP_TASK(iLocal_323[0], true);
					AI::OPEN_SEQUENCE_TASK(&iVar0);
					AI::TASK_STAND_STILL(0, 1500);
					AI::TASK_AIM_GUN_AT_ENTITY(0, Local_231.f_3, 2000, 0);
					AI::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Local_231.f_3, Local_231.f_3, 1f, 0, 4f, 1082130432, 1, 0, -957453492);
					AI::TASK_AIM_GUN_AT_ENTITY(0, Local_231.f_3, -1, 0);
					AI::CLOSE_SEQUENCE_TASK(iVar0);
					AI::TASK_PERFORM_SEQUENCE(iLocal_323[1], iVar0);
					AI::CLEAR_SEQUENCE_TASK(&iVar0);
					PED::SET_PED_KEEP_TASK(iLocal_323[1], true);
					AI::OPEN_SEQUENCE_TASK(&iVar0);
					AI::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_323[0], 3);
					AI::TASK_LOOK_AT_ENTITY(0, iLocal_323[0], -1, 2049, 3);
					AI::TASK_STAND_STILL(0, 1000);
					AI::TASK_HANDS_UP(0, -1, 0, -1, 0);
					AI::CLOSE_SEQUENCE_TASK(iVar0);
					AI::TASK_PERFORM_SEQUENCE(Local_231.f_3, iVar0);
					AI::CLEAR_SEQUENCE_TASK(&iVar0);
					func_207(&Local_231, 54, 1, 0, 0);
					iLocal_267 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uLocal_325, -1);
					iVar2 = 0;
					while (iVar2 < iLocal_267)
					{
						if (((((uLocal_325[iVar2] != PLAYER::PLAYER_PED_ID() && uLocal_325[iVar2] != Local_231.f_3) && uLocal_325[iVar2] != iLocal_323[1]) && uLocal_325[iVar2] != iLocal_323[0]) && uLocal_325[iVar2] != iLocal_324) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_325[iVar2]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_325[iVar2], true, 1);
							AI::TASK_SMART_FLEE_PED(uLocal_325[iVar2], Local_231.f_3, 100f, -1, 0, 0);
						}
						iVar2++;
					}
					func_275(&Local_231, 9, 0, 0);
					iLocal_265++;
				}
			}
			break;
		
		case 3:
			if (func_145(&Local_231, 9) > 5f && !func_127())
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_328, -1533126372);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, -1533126372, iLocal_328);
				WEAPON::GET_CURRENT_PED_WEAPON(Local_231.f_3, &iVar3, 1);
				if (iVar3 == joaat("weapon_unarmed"))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Local_231.f_3, joaat("weapon_combatpistol"), -1, false, true);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_231.f_3, 13, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_231.f_3, 24, true);
				PED::SET_PED_COMBAT_MOVEMENT(Local_231.f_3, 2);
				PED::SET_PED_CAN_EVASIVE_DIVE(Local_231.f_3, 1);
				PED::SET_PED_ACCURACY(Local_231.f_3, 80);
				AI::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_231.f_3, 50f, 0);
				func_275(&Local_231, 9, 0, 0);
				iLocal_265++;
			}
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_323[0], PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_323[1], PLAYER::PLAYER_PED_ID(), 1)) && !PED::IS_PED_INJURED(Local_231.f_3))
			{
				AI::TASK_SMART_FLEE_PED(Local_231.f_3, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
				func_275(&Local_231, 9, 0, 0);
				iLocal_265++;
			}
			break;
		
		case 4:
			if (ENTITY::IS_ENTITY_DEAD(Local_231.f_3, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_323[0], 0))
				{
					AI::CLEAR_PED_TASKS(iLocal_323[0]);
					if (AI::DOES_SCENARIO_EXIST_IN_AREA(-1036.502f, -2742.986f, 20.16969f, 5f, 1))
					{
						AI::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_323[0], -1036.502f, -2742.986f, 20.16969f, 1f, 0);
					}
					else
					{
						AI::TASK_START_SCENARIO_IN_PLACE(iLocal_323[0], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, 0);
					}
					PED::SET_PED_KEEP_TASK(iLocal_323[0], true);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_323[1], 0))
				{
					AI::CLEAR_PED_TASKS(iLocal_323[1]);
					vVar1 = { ENTITY::GET_ENTITY_COORDS(Local_231.f_3, false) };
					AI::CLEAR_SEQUENCE_TASK(&iVar0);
					AI::OPEN_SEQUENCE_TASK(&iVar0);
					AI::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, vVar1, vVar1, 1f, false, 3f, 4f, 1, 0, 0, -957453492);
					AI::TASK_AIM_GUN_AT_COORD(0, vVar1, 500, 0, 0);
					AI::TASK_LOOK_AT_COORD(0, vVar1, -1, 2049, 3);
					AI::CLOSE_SEQUENCE_TASK(iVar0);
					AI::TASK_PERFORM_SEQUENCE(iLocal_323[1], iVar0);
					PED::SET_PED_KEEP_TASK(iLocal_323[0], true);
				}
				return 1;
			}
			else
			{
				if (func_145(&Local_231, 9) > 6f)
				{
					func_207(&Local_231, 140, 1, 0, 1);
					func_275(&Local_231, 9, 0, 0);
				}
				if (ENTITY::IS_ENTITY_DEAD(iLocal_323[0], 0) && ENTITY::IS_ENTITY_DEAD(iLocal_323[1], 0))
				{
					AI::CLEAR_PED_TASKS(Local_231.f_3);
					AI::TASK_SMART_FLEE_PED(Local_231.f_3, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
				}
				if (func_161(Local_231.f_3, 1) > 50f)
				{
					return 1;
				}
			}
			func_275(&Local_231, 9, 0, 0);
			iLocal_265++;
			break;
		
		case 5:
			if (func_145(&Local_231, 9) > 2f)
			{
				func_275(&Local_231, 9, 0, 0);
				iLocal_265++;
			}
			break;
		
		case 6:
			if (func_145(&Local_231, 9) > 2f)
			{
				vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_327, func_10(5)) };
				func_275(&Local_231, 9, 0, 0);
				iLocal_265++;
			}
			break;
		
		case 7:
			if (func_145(&Local_231, 9) >= 1f)
			{
				iLocal_265++;
			}
			break;
		
		case 8:
			iLocal_265++;
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

Vector3 func_10(int iParam0)
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0:
			vVar0 = { -1040.486f, -2726.058f, 21.4491f };
			break;
		
		case 4:
			vVar0 = { -1044.847f, -2726.239f, 20.2197f };
			break;
		
		case 6:
			vVar0 = { -1045.252f, -2733.154f, 23.9084f };
			break;
		
		case 5:
			vVar0 = { -1053.653f, -2720.5f, 20.1615f };
			break;
		
		case 1:
			vVar0 = { -1042.008f, -2729.232f, 21.2022f };
			break;
		
		case 2:
			vVar0 = { -1049.799f, -2725.069f, 20.7481f };
			break;
		
		case 3:
			vVar0 = { -1043.888f, -2723.783f, 20.6874f };
			break;
		
		case 7:
			vVar0 = { -1041.917f, -2746.239f, 22.2494f };
			break;
		
		case 8:
			vVar0 = { -1041.811f, -2739.353f, 21.2173f };
			break;
	}
	return vVar0;
}

void func_11(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_49(uParam1);
		if (!PED::IS_PED_INJURED(uParam1->f_3))
		{
			PED::SET_PED_CONFIG_FLAG(uParam1->f_3, 317, true);
		}
	}
	else
	{
		func_142(1, 0);
	}
	func_12(uParam1, bParam2);
}

void func_12(var uParam0, bool bParam1)
{
	func_48(uParam0);
	if (func_127())
	{
		func_46();
	}
	func_44();
	UI::CLEAR_PRINTS();
	UI::CLEAR_HELP(1);
	func_40(0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_4, false);
		VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(uParam0->f_4);
		VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_4);
	}
	func_36(uParam0->f_14, 1);
	func_204(uParam0->f_14, 1, 1114636288);
	func_35(&(uParam0->f_244), 3);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
	if (func_32())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	CUTSCENE::_0xC61B86C9F61EB404(1);
	func_22(0, 1, 1, 0, 0);
	UI::DISPLAY_RADAR(true);
	UI::DISPLAY_HUD(true);
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DESTROY_CAM(*uParam0, 0);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	}
	if (func_198(Global_106070.f_19069, 4))
	{
		func_139(&(Global_106070.f_19069), 4);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_21(), false);
	}
	if (bParam1)
	{
		func_20(uParam0);
	}
	func_19(uParam0);
	STREAMING::REMOVE_ANIM_DICT("gestures@m@standing@casual");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@taxi@");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@towingcome_here");
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		func_17(uParam0->f_411);
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	}
	STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((func_13(&iLocal_82) * 1000f)), 12, 0);
}

float func_13(var uParam0)
{
	if (func_16(uParam0))
	{
		if (func_15(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_14(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_14(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(GAMEPLAY::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(GAMEPLAY::GET_GAME_TIMER()) / 1000f);
}

bool func_15(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 2);
}

bool func_16(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 1);
}

void func_17(int iParam0)
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_18(iParam0)}, 6);
		if (!GAMEPLAY::IS_STRING_NULL(&uVar0))
		{
		}
	}
}

struct<8> func_18(int iParam0)
{
	struct<8> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "TAXI_SC_N_NE", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "TAXI_SC_N_TE", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "TAXI_SC_N_DL", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "TAXI_SC_N_GB", 32);
			break;
		
		case 4:
			StringCopy(&Var0, "TAXI_SC_N_TB", 32);
			break;
		
		case 5:
			StringCopy(&Var0, "TAXI_SC_N_CY", 32);
			break;
		
		case 6:
			StringCopy(&Var0, "TAXI_SC_N_GN", 32);
			break;
		
		case 7:
			StringCopy(&Var0, "TAXI_SC_N_CC", 32);
			break;
		
		case 8:
			StringCopy(&Var0, "TAXI_SC_N_FC", 32);
			break;
		
		case 9:
			StringCopy(&Var0, "TAXI_BLIP_CAR", 32);
			break;
		
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

void func_19(var uParam0)
{
	VEHICLE::_0x1033371FC8E842A7(uParam0->f_51[0]);
}

void func_20(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, 0))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, 0))
			{
				PED::RESET_PED_LAST_VEHICLE(uParam0->f_3);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, false);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, uParam0->f_413, 1862763509);
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				AI::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				AI::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				AI::STOP_ANIM_TASK(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				AI::STOP_ANIM_TASK(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -8f);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_3));
		}
	}
}

int func_21()
{
	return joaat("taxi");
}

void func_22(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_31(1);
		UI::_0xA8FDB297A8D25FBA();
		UI::_0xFDB423997FA30340();
		if (Global_14513.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_30())
			{
				Global_14513.f_1 = 3;
			}
			Global_15822 = 5;
		}
		func_29(1, iParam3, iParam2, 0);
		Global_56187 = 1;
		Global_68497 = 1;
		Global_71203 = 1;
	}
	else
	{
		func_31(0);
		UI::_0xE1CD1E48E025E661();
		Global_56187 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_29(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_27(PLAYER::PLAYER_ID())) && !func_24(PLAYER::PLAYER_ID(), 0)) && !func_23()) && !bParam4)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_27(PLAYER::PLAYER_ID())) && !bParam4)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_71203 = 0;
	}
}

bool func_23()
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_39.f_18, 14);
}

bool func_24(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_25(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589747[iParam0 /*790*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_25(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_26();
	}
	if (Global_1312837[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_26()
{
	return Global_1312736;
}

int func_27(int iParam0)
{
	if (func_24(iParam0, 0))
	{
		return 1;
	}
	if (func_28())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2423801[iParam0 /*413*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_28()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

int func_29(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_30()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_31(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2383, 13);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2383, 13);
	}
}

int func_32()
{
	if (!func_34() && !func_33())
	{
		if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			return 1;
		}
	}
	return 0;
}

int func_33()
{
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_34()
{
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_35(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_36(vector3 vParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!func_38(vParam0, func_39(), 0))
	{
		vVar0 = { func_37(vParam0, 1f, -30f, -30f, -10f) };
		vVar1 = { func_37(vParam0, 1f, 30f, 30f, 10f) };
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vVar0, vVar1, bParam1, 1);
	}
}

Vector3 func_37(vector3 vParam0, float fParam1, struct<2> Param2, float fParam3)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	
	fVar1 = fParam1;
	fVar2 = SYSTEM::COS(fVar1);
	fVar3 = SYSTEM::SIN(fVar1);
	vVar0.x = ((Param2 * fVar2) + (Param2.f_1 * fVar3));
	vVar0.y = ((Param2.f_1 * fVar2) - (Param2 * fVar3));
	vVar4 = { vParam0 + vVar0 };
	return vVar4;
}

bool func_38(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_39()
{
	vector3 vVar0;
	
	return vVar0;
}

void func_40(int iParam0)
{
	if (func_43())
	{
		return;
	}
	if (Global_14681)
	{
		func_41(0, 0);
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
	if (!func_30())
	{
		Global_14513.f_1 = 3;
	}
}

void func_41(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_42(0))
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

int func_42(int iParam0)
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

bool func_43()
{
	return GAMEPLAY::IS_BIT_SET(Global_1678593, 19);
}

void func_44()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_90260[iVar0 /*17*/] && !Global_90260[iVar0 /*17*/].f_1)
		{
			if (Global_90260[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_90260[iVar0 /*17*/].f_5 != 88 && Global_90260[iVar0 /*17*/].f_5 != 89) && Global_90260[iVar0 /*17*/].f_5 != 92)
				{
					func_45(Global_90260[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_45(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_87312[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_87312[iParam0 /*2*/] = 0;
	}
}

void func_46()
{
	Global_14688 = 0;
	func_47();
}

void func_47()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16833 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_15822 = 6;
	}
}

void func_48(var uParam0)
{
	if (UI::DOES_BLIP_EXIST(uParam0->f_8))
	{
		UI::REMOVE_BLIP(&(uParam0->f_8));
	}
	if (UI::DOES_BLIP_EXIST(uParam0->f_9))
	{
		UI::REMOVE_BLIP(&(uParam0->f_9));
	}
	if (UI::DOES_BLIP_EXIST(uParam0->f_10))
	{
		UI::REMOVE_BLIP(&(uParam0->f_10));
	}
}

void func_49(var uParam0)
{
	func_142(0, 0);
	if (uParam0->f_411 != 9)
	{
		func_434(1);
		func_59(15, 1);
	}
	func_173(&(Global_106070.f_19069), 1024);
	if (!func_198(Global_106070.f_19069, 64))
	{
		func_50(func_57(func_58(uParam0)), 0, 0);
	}
}

void func_50(int iParam0, int iParam1, int iParam2)
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
		func_56((891 + iParam0), 1, -1, 1);
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
		func_51();
	}
}

void func_51()
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
		func_55(13, SYSTEM::FLOOR(Global_106070.f_10166.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_71205)
		{
			if (func_54() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_105804 = 0;
				}
				if (!Global_56181)
				{
					func_52();
				}
			}
		}
	}
}

int func_52()
{
	if (func_53(0))
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

bool func_53(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_71453, 0);
}

int func_54()
{
	return Global_25459;
}

int func_55(int iParam0, int iParam1)
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

int func_56(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_26();
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

int func_57(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 199;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 2:
			iVar0 = 201;
			break;
		
		case 3:
			iVar0 = 202;
			break;
		
		case 4:
			iVar0 = 203;
			break;
		
		case 5:
			iVar0 = 204;
			break;
		
		case 6:
			iVar0 = 205;
			break;
		
		case 7:
			iVar0 = 206;
			break;
		
		case 8:
			iVar0 = 207;
			break;
		
		case 9:
			break;
		
		default:
			iVar0 = 199;
			break;
	}
	return iVar0;
}

int func_58(var uParam0)
{
	return uParam0->f_411;
}

int func_59(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_60(iParam0, iParam1);
}

int func_60(int iParam0, int iParam1)
{
	if (func_72(14) && !func_71(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25706 != 0 && !Global_71205)
	{
		return 0;
	}
	if (func_70(&Global_4268566))
	{
		if (func_68(&Global_4268566, iParam0))
		{
			return 0;
		}
		if (func_61(&Global_4268566, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_61(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_72(14) && !func_71(iParam1))
	{
		return 0;
	}
	if (func_68(uParam0, iParam1))
	{
		return 0;
	}
	if (func_67(uParam0) < 0f)
	{
		func_66(uParam0, 0);
	}
	func_64(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_62(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_62(var uParam0, int iParam1)
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_72(14) && !func_71(iParam1))
	{
		return 0;
	}
	if (func_68(uParam0, iParam1))
	{
		return 0;
	}
	if (func_67(uParam0) < 0f)
	{
		func_66(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_63(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_63(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_64(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_65(uParam0, iVar0);
		iVar0++;
	}
	func_66(uParam0, (Global_4268565 - 0.5f));
}

void func_65(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_66(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_67(var uParam0)
{
	return uParam0->f_80;
}

bool func_68(var uParam0, int iParam1)
{
	return func_69(uParam0, iParam1) != -1;
}

int func_69(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_70(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_71(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

bool func_72(int iParam0)
{
	return Global_36117 == iParam0;
}

int func_73(var uParam0, int iParam1)
{
	switch (iLocal_160)
	{
		case 0:
			if (!func_127() && func_145(uParam0, 0) > 1f)
			{
				if (func_32())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
				func_103(uParam0);
				func_139(&(Global_106070.f_19069), 4096);
				func_100(iParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_102(uParam0), "TAXI_FARE_MID", 4000, 1);
				iParam1->f_1 = 4000;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", false);
				func_99(1);
				iLocal_160 = 6;
			}
			break;
		
		case 6:
			if (!func_93(iParam1, 0))
			{
				func_74(uParam0);
				func_275(uParam0, 0, 0, 0);
				func_99(0);
				iLocal_160 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_74(var uParam0)
{
	int iVar0;
	
	iVar0 = ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105);
	if (iVar0 > 0)
	{
		func_75(func_91(), 21, iVar0, 0, 0);
		func_142(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_75(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_106070.f_28022[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_106070.f_28022[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_76(Global_106070.f_28022[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, 1);
	}
}

int func_76(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_90();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_89(99, 1);
					func_88(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_88(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_88(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_87(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_83(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_88(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_88(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_88(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_83(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_88(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_88(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_88(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_88(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_88(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_88(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_88(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_88(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_88(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_88(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_88(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_88(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_88(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_88(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_88(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_83(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_88(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_88(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_88(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_88(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_88(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_88(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_82(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_89(95, iParam3);
					break;
				
				case 1:
					func_89(97, iParam3);
					break;
				
				case 2:
					func_89(96, iParam3);
					break;
			}
			func_89(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_79(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_79(iVar1);
	}
	iVar5 = (Global_53355[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53355[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53355[iVar2] = 2147483647;
				}
				else
				{
					Global_53355[iVar2] = (Global_53355[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_88(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_88(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_88(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53355[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53355[iVar2];
			Global_53355[iVar2] = (Global_53355[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_106070.f_20536.f_233[iVar2 /*69*/].f_2[Global_106070.f_20536.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_106070.f_20536.f_233[iVar2 /*69*/].f_2[Global_106070.f_20536.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_106070.f_20536.f_233[iVar2 /*69*/].f_2[Global_106070.f_20536.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_106070.f_20536.f_233[iVar2 /*69*/]++;
		Global_106070.f_20536.f_233[iVar2 /*69*/].f_1++;
		if (Global_106070.f_20536.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_106070.f_20536.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_78(iParam0);
	if (Global_36117 == 15)
	{
		func_77(0);
	}
	return 1;
}

void func_77(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_106070.f_20536.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53363[iVar0 /*3*/][0] = Global_106070.f_20536[iVar0];
		Global_53363.f_31[iVar0 /*3*/][0] = Global_106070.f_20536.f_11[iVar0];
		Global_53363.f_62[iVar0 /*3*/][0] = Global_106070.f_20536.f_22[iVar0];
		Global_53363.f_93[iVar0 /*3*/][0] = Global_106070.f_20536.f_33[iVar0];
		Global_53363.f_124[iVar0 /*3*/][0] = Global_106070.f_20536.f_44[iVar0];
		Global_53363.f_155[iVar0 /*3*/][0] = Global_106070.f_20536.f_55[iVar0];
		Global_53363.f_186[iVar0 /*3*/][0] = Global_106070.f_20536.f_66[iVar0];
		Global_53363.f_217[iVar0 /*3*/][0] = Global_106070.f_20536.f_77[iVar0];
		Global_53363.f_248[iVar0 /*3*/][0] = Global_106070.f_20536.f_88[iVar0];
		if (!bParam0)
		{
			Global_53363[iVar0 /*3*/][1] = Global_106070.f_20536[iVar0];
			Global_53363.f_31[iVar0 /*3*/][1] = Global_106070.f_20536.f_11[iVar0];
			Global_53363.f_62[iVar0 /*3*/][1] = Global_106070.f_20536.f_22[iVar0];
			Global_53363.f_93[iVar0 /*3*/][1] = Global_106070.f_20536.f_33[iVar0];
			Global_53363.f_124[iVar0 /*3*/][1] = Global_106070.f_20536.f_44[iVar0];
			Global_53363.f_155[iVar0 /*3*/][1] = Global_106070.f_20536.f_55[iVar0];
			Global_53363.f_186[iVar0 /*3*/][1] = Global_106070.f_20536.f_66[iVar0];
			Global_53363.f_217[iVar0 /*3*/][1] = Global_106070.f_20536.f_77[iVar0];
			Global_53363.f_248[iVar0 /*3*/][1] = Global_106070.f_20536.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_78(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53355[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_79(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_56(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_56(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_56(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_56(137, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_106070.f_20536.f_471, iParam0))
		{
			bVar0 = true;
			GAMEPLAY::CLEAR_BIT(&(Global_106070.f_20536.f_471), iParam0);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_106070.f_20536.f_471, iParam0) || GAMEPLAY::IS_BIT_SET(Global_2097152[func_81() /*12745*/].f_8178.f_10, iParam0))
	{
		bVar0 = true;
		GAMEPLAY::CLEAR_BIT(&(Global_106070.f_20536.f_471), iParam0);
		GAMEPLAY::CLEAR_BIT(&(Global_2097152[func_81() /*12745*/].f_8178.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		UI::_SET_NOTIFICATION_TEXT_ENTRY("COUP_RED");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_80(iParam0));
		UI::_SET_NOTIFICATION_MESSAGE(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_80(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		default:
	}
	return "";
}

int func_81()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_82(int iParam0)
{
	func_89(93, iParam0);
	func_89(29, iParam0);
	func_89(30, iParam0);
}

bool func_83(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_84(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_84(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_84(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_84(137, -1, -1);
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return GAMEPLAY::IS_BIT_SET(Global_106070.f_20536.f_471, iParam0);
	}
	return GAMEPLAY::IS_BIT_SET(Global_2097152[func_81() /*12745*/].f_8178.f_10, iParam0);
}

int func_84(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_26();
	}
	iVar1 = func_86(iParam0, iParam1);
	uVar2 = func_85(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_85(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
	}
	return iVar0;
}

int func_86(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_26();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	return iVar0;
}

int func_87(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, 1);
		func_55(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_59(27, 1);
	return 1;
}

void func_88(int iParam0, int iParam1)
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_89(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51923[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_51923[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_51923[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_51923[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_90()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53355[0] == iVar0)
		{
			Global_53355[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53355[1] == iVar0)
		{
			Global_53355[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53355[2] == iVar0)
		{
			Global_53355[2] = iVar0;
		}
	}
}

int func_91()
{
	func_92();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_92()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_4(Global_106070.f_2355.f_539.f_4301) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_3(PLAYER::PLAYER_PED_ID());
			if (func_5(iVar0) && (!func_72(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_5(Global_106070.f_2355.f_539.f_4301))
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

int func_93(var uParam0, int iParam1)
{
	if (!func_16(&(uParam0->f_2)))
	{
		func_97(&(uParam0->f_2));
	}
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201) || uParam0->f_8)
		{
			if (!func_16(&(uParam0->f_5)))
			{
				func_97(&(uParam0->f_5));
				func_96(uParam0, 1051260355);
			}
		}
		if (func_16(&(uParam0->f_5)))
		{
			if (func_95(&(uParam0->f_5)) > 0.33f)
			{
				func_94(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_95(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		if (!func_16(&(uParam0->f_5)))
		{
			func_97(&(uParam0->f_5));
			func_96(uParam0, 1051260355);
		}
		else if (func_95(&(uParam0->f_5)) > 0.33f)
		{
			func_94(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_94(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_95(var uParam0)
{
	if (func_16(uParam0))
	{
		if (func_15(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_14(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_96(var uParam0, float fParam1)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SHARD_ANIM_OUT");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_9);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fParam1);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_97(int iParam0)
{
	func_98(iParam0, 0f);
}

void func_98(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_14(GAMEPLAY::IS_BIT_SET(*iParam0, 4)) - fParam1);
	GAMEPLAY::SET_BIT(iParam0, 1);
	GAMEPLAY::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_99(int iParam0)
{
	Global_71465 = iParam0;
	Global_71466 = iParam0;
}

void func_100(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, func_101());
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("STRING");
	UI::_SET_NOTIFACTION_COLOR_NEXT(iParam9);
	UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(sParam7);
	UI::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	UI::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam6);
	UI::ADD_TEXT_COMPONENT_INTEGER(iParam5);
	UI::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	func_97(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_101()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_102(var uParam0)
{
	char* sVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			sVar0 = "TAXI_SC_BN_02";
			break;
		
		case 1:
			sVar0 = "TAXI_SC_BN_01";
			break;
		
		case 2:
			sVar0 = "TAXI_SC_BN_03";
			break;
		
		case 3:
			sVar0 = "TAXI_SC_BN_12";
			break;
		
		case 4:
			sVar0 = "TAXI_SC_BN_08";
			break;
		
		case 5:
			sVar0 = "TAXI_SC_BN_07";
			break;
		
		case 6:
			sVar0 = "TAXI_SC_KO";
			break;
		
		case 7:
			sVar0 = "TAXI_SC_BN_10";
			break;
		
		case 8:
			sVar0 = "TAXI_SC_BN_04";
			break;
	}
	return sVar0;
}

void func_103(var uParam0)
{
	int iVar0;
	
	Local_161.f_1 = SYSTEM::TO_FLOAT(uParam0->f_50);
	Local_161.f_2 = SYSTEM::TO_FLOAT(uParam0->f_56);
	func_142(11, uParam0->f_56);
	func_142(12, uParam0->f_56);
	iLocal_57[1] = uParam0->f_56;
	iLocal_57[2] = uParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_60)
	{
		Local_161.f_4[iVar0 /*3*/] = { uParam0->f_60[iVar0 /*3*/] };
		if (GAMEPLAY::IS_BIT_SET(Local_161.f_4[iVar0 /*3*/], 2))
		{
			Local_161.f_3 = (Local_161.f_3 + IntToFloat(uParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_161 = uParam0->f_411;
	Local_161.f_20 = ((Local_161.f_1 + Local_161.f_2) + Local_161.f_3);
}

int func_104(var uParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, 0))
	{
		if (func_196(uParam0) && func_108(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_107(uParam0, 2097152))
				{
					func_105(uParam0);
				}
			}
			else
			{
				func_105(uParam0);
			}
		}
		else if (!func_196(uParam0))
		{
			if (bParam1)
			{
				if (func_107(uParam0, 2097152))
				{
					if (AI::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 451360105) == 7)
					{
						return 1;
					}
				}
			}
			else if (AI::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 451360105) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_105(var uParam0)
{
	vector3 vVar0;
	
	if (func_106(uParam0->f_29))
	{
		vVar0 = { uParam0->f_17 };
	}
	else
	{
		vVar0 = { uParam0->f_29 };
	}
	func_171(uParam0, vVar0);
}

int func_106(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_107(var uParam0, int iParam1)
{
	if (iParam1 != 1073741824)
	{
		return (func_198(uParam0->f_81, iParam1) && !func_127());
	}
	return func_127();
}

int func_108(var uParam0, bool bParam1, float fParam2)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_42(1))
			{
				func_40(0);
			}
			if (func_32())
			{
				func_111();
				return 1;
			}
			else if (func_109(uParam0->f_4, fParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256);
				}
				else
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0);
				}
			}
			VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_109(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	CONTROLS::DISABLE_CONTROL_ACTION(0, 71, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 72, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 76, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 73, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 59, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam5)
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
	if (!bParam6)
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 69, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 70, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 68, 1);
	}
	CONTROLS::DISABLE_CONTROL_ACTION(0, 74, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 86, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 81, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 82, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 138, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 136, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 114, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 107, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 110, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 89, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 89, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 87, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 88, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 113, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 115, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 116, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 117, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 118, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 119, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 131, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 132, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 123, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 126, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 129, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 130, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 133, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 134, 1);
	CAM::_0x17FCA7199A530203();
	func_110(iParam0);
	if ((GAMEPLAY::GET_GAME_TIMER() - Global_29) > 500)
	{
		VEHICLE::_SET_VEHICLE_HALT(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = GAMEPLAY::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (GAMEPLAY::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_110(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (unk_0x36D782F68B309BDA(iParam0))
		{
			if (unk_0x3D34E80EED4AE3BE(iParam0))
			{
				unk_0x81E1552E35DC3839(iParam0, 0);
			}
		}
	}
}

void func_111()
{
	if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
	}
}

char* func_112(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "std_hand_off_ps_money";
		
		case 2:
			return "std_hand_off_rps_money";
		
		case 1:
			return "std_hand_off_rds_money";
		
		default:
	}
	return "";
}

char* func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "std_hand_off_ps_driver";
		
		case 2:
			return "std_hand_off_rps_driver";
		
		case 1:
			return "std_hand_off_rds_driver";
		
		default:
	}
	return "";
}

char* func_114(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "std_hand_off_ps_passenger";
		
		case 2:
			return "std_hand_off_rps_passenger";
		
		case 1:
			return "std_hand_off_rds_passenger";
		
		default:
	}
	return "";
}

int func_115(var uParam0, var uParam1)
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 1, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 2, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_116()
{
	Local_305 = { func_117() };
	if ((((((((GAMEPLAY::ARE_STRINGS_EQUAL(&cLocal_269, &Local_305) || GAMEPLAY::ARE_STRINGS_EQUAL(&cLocal_273, &Local_305)) || GAMEPLAY::ARE_STRINGS_EQUAL(&cLocal_277, &Local_305)) || GAMEPLAY::ARE_STRINGS_EQUAL(&cLocal_281, &Local_305)) || GAMEPLAY::ARE_STRINGS_EQUAL(&cLocal_285, &Local_305)) || GAMEPLAY::ARE_STRINGS_EQUAL(&cLocal_289, &Local_305)) || GAMEPLAY::ARE_STRINGS_EQUAL(&cLocal_293, &Local_305)) || GAMEPLAY::ARE_STRINGS_EQUAL(&cLocal_297, &Local_305)) || GAMEPLAY::ARE_STRINGS_EQUAL(&cLocal_301, &Local_305))
	{
		return 1;
	}
	return 0;
}

struct<6> func_117()
{
	struct<6> Var0;
	int iVar1;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15822 == 4)
	{
		iVar1 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar1 = (iVar1 + Global_16832);
		if (iVar1 > -1)
		{
			return Global_14690[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_118()
{
	if (Local_231.f_56 >= Local_231.f_59)
	{
		Local_231.f_56 = 10000;
	}
	else if (Local_231.f_56 <= 0)
	{
		Local_231.f_56 = 0;
	}
	else
	{
		Local_231.f_56 = 5000;
	}
}

void func_119(var uParam0)
{
	func_121();
	UI::CLEAR_PRINTS();
	if (uParam0->f_56 < uParam0->f_58)
	{
		if (uParam0->f_411 == 0)
		{
			func_207(uParam0, 105, 1, 0, 0);
		}
		else
		{
			func_207(uParam0, 103, 1, 0, 0);
		}
		func_120(1);
	}
	else if (uParam0->f_56 >= uParam0->f_59)
	{
		func_207(uParam0, 101, 1, 0, 0);
	}
	else
	{
		func_207(uParam0, 102, 1, 0, 0);
	}
	func_275(uParam0, 16, 4f, 0);
}

void func_120(int iParam0)
{
	Global_104780.f_221 = iParam0;
}

void func_121()
{
	Global_14688 = 0;
	func_122();
}

void func_122()
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_16833 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_15822 = 6;
		return;
	}
}

void func_123(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_124(fVar0);
	iLocal_57[4] = SYSTEM::CEIL(fVar0);
	iLocal_57[5] = SYSTEM::CEIL(fVar0);
	func_142(4, SYSTEM::CEIL(fVar0));
	func_142(5, SYSTEM::CEIL(fVar0));
	uParam0->f_50 = SYSTEM::CEIL((fVar0 * 100f));
}

float func_124(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_125()
{
	Global_14688 = 0;
	func_126();
}

void func_126()
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

int func_127()
{
	if (Global_15822 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_128(int iParam0)
{
	if (*iParam0 != -1)
	{
		AUDIO::STOP_SOUND(*iParam0);
		AUDIO::RELEASE_SOUND_ID(*iParam0);
		*iParam0 = -1;
	}
}

void func_129()
{
	STREAMING::REQUEST_ANIM_DICT("oddjobs@taxi@cyi");
	STREAMING::REQUEST_MODEL(joaat("p_banknote_s"));
}

void func_130()
{
	if (func_145(&Local_231, 7) < 75f && !iLocal_255)
	{
		Local_231.f_57 += 12;
		func_207(&Local_231, 30, 1, 0, 1);
	}
	else if (func_145(&Local_231, 7) > 150f || iLocal_255)
	{
		Local_231.f_57 = -10;
		func_207(&Local_231, 32, 1, 0, 1);
		iLocal_255 = 1;
		func_131();
	}
	else
	{
		Local_231.f_57 += 5;
		func_207(&Local_231, 31, 1, 0, 1);
	}
}

void func_131()
{
	STREAMING::REQUEST_MODEL(func_274(3));
	STREAMING::REQUEST_MODEL(func_274(4));
	VEHICLE::REQUEST_VEHICLE_RECORDING(0, func_132(1));
}

char* func_132(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 1:
			sVar0 = "txm8_pol1_A";
			break;
	}
	return sVar0;
}

int func_133(var uParam0)
{
	if (func_127())
	{
		return 1;
	}
	if (func_134(uParam0, 17))
	{
		return 1;
	}
	if (func_134(uParam0, 14))
	{
		return 1;
	}
	if (func_138(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_134(var uParam0, int iParam1)
{
	return func_16(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_135(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam1 == 14)
	{
	}
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			func_94(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_94(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

void func_136(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_16(&(Local_162[iVar0 /*10*/].f_6)))
		{
			func_97(&(Local_162[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_275(uParam0, 10, 0f, 1);
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
}

void func_137(var uParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		GAMEPLAY::SET_BIT(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

bool func_138(var uParam0)
{
	return uParam0->f_110;
}

void func_139(var uParam0, int iParam1)
{
	func_140(uParam0, iParam1);
}

void func_140(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_141(var uParam0, var uParam1)
{
	STATS::STAT_GET_FLOAT(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

void func_142(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_106070.f_19069.f_22[0]++;
			func_143("Fares Completed ++ = ", Global_106070.f_19069.f_22[0]);
			break;
		
		case 1:
			Global_106070.f_19069.f_22[1]++;
			func_143("Fares Failed ++ = ", Global_106070.f_19069.f_22[1]);
			break;
		
		case 2:
			Global_106070.f_19069.f_22[2]++;
			func_143("Fares Accepted ++ ", Global_106070.f_19069.f_22[2]);
			break;
		
		case 3:
			Global_106070.f_19069.f_22[3]++;
			func_143("Fares Expired ++ ", Global_106070.f_19069.f_22[3]);
			break;
		
		case 13:
			Global_106070.f_19069.f_22[13]++;
			func_143("Passengers run ++ = ", Global_106070.f_19069.f_22[13]);
			break;
		
		case 14:
			Global_106070.f_19069.f_22[14]++;
			func_143("Passenger Forced to Pay ++ = ", Global_106070.f_19069.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_106070.f_19069.f_22[4])
				{
					Global_106070.f_19069.f_22[4] = iParam1;
					func_143("This distance ", iParam1);
					func_143(" is longer than current best", Global_106070.f_19069.f_22[4]);
				}
				else
				{
					func_143("Longest Distance Not Beat ", Global_106070.f_19069.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_106070.f_19069.f_22[5] = (Global_106070.f_19069.f_22[5] + iParam1);
			func_143("Total Distance w/ Passenger = ", Global_106070.f_19069.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_106070.f_19069.f_22[6]++;
			}
			else
			{
				Global_106070.f_19069.f_22[6] = (Global_106070.f_19069.f_22[6] + iParam1);
			}
			func_143("Wanted Levels ++ = ", Global_106070.f_19069.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_106070.f_19069.f_22[7] = (Global_106070.f_19069.f_22[7] + iParam1);
			}
			else
			{
				Global_106070.f_19069.f_22[7]++;
			}
			func_143("Wanted Levels Lost = ", Global_106070.f_19069.f_22[7]);
			break;
		
		case 8:
			Global_106070.f_19069.f_22[8]++;
			func_143("Taxis wrecked ++ = ", Global_106070.f_19069.f_22[8]);
			break;
		
		case 9:
			Global_106070.f_19069.f_22[9]++;
			func_143("Horn Honked ++ = ", Global_106070.f_19069.f_22[9]);
			break;
		
		case 10:
			Global_106070.f_19069.f_22[10] = (Global_106070.f_19069.f_22[10] + iParam1);
			func_143("Total Money Earned = ", Global_106070.f_19069.f_22[10]);
			break;
		
		case 11:
			Global_106070.f_19069.f_22[11] = (Global_106070.f_19069.f_22[11] + iParam1);
			func_143("Total Tips Earned = ", Global_106070.f_19069.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_106070.f_19069.f_22[12])
			{
				Global_106070.f_19069.f_22[12] = iParam1;
				func_143("New Highest Tip = ", Global_106070.f_19069.f_22[12]);
			}
			else
			{
				func_143("Highest Tip Not Reached = ", Global_106070.f_19069.f_22[12]);
			}
			break;
	}
}

void func_143(char* sParam0, int iParam1)
{
}

int func_144(int iParam0, int iParam1)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true)) };
	if (ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("vacca"))
	{
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sentinel2"))
	{
		iVar2 = 1;
	}
	if (iVar2 == 1)
	{
		iVar1 = 0;
	}
	else if (vVar0.x > 0f)
	{
		if (VEHICLE::_0x639431E895B9AA57(iParam1, iParam0, 2, 0, false))
		{
			iVar1 = 2;
		}
		else if (VEHICLE::_0x639431E895B9AA57(iParam1, iParam0, 1, 0, false))
		{
			iVar1 = 1;
		}
		else
		{
			iVar1 = -2;
		}
	}
	else if (VEHICLE::_0x639431E895B9AA57(iParam1, iParam0, 1, 0, false))
	{
		iVar1 = 1;
	}
	else if (VEHICLE::_0x639431E895B9AA57(iParam1, iParam0, 2, 0, false))
	{
		iVar1 = 2;
	}
	else
	{
		iVar1 = -2;
	}
	return iVar1;
}

float func_145(var uParam0, int iParam1)
{
	if (!func_16(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_146(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_95(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_146(int iParam0)
{
	if (!func_16(iParam0))
	{
		func_97(iParam0);
	}
}

void func_147(var uParam0, bool bParam1)
{
	func_157(uParam0, uParam0->f_3);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_134(uParam0, 14))
			{
				if (func_127())
				{
					func_156(1);
				}
				func_155(uParam0, 11, 1);
				func_148(uParam0, 1);
				func_275(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_196(uParam0))
				{
					if ((GAMEPLAY::GET_GAME_TIMER() % 1000) < 50)
					{
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_2, 0))
					{
						if (func_145(uParam0, 15) > 5f)
						{
							func_275(uParam0, 15, 0f, 1);
						}
					}
					if (func_145(uParam0, 14) > 20f)
					{
						func_329(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_145(uParam0, 14) > 20f)
				{
					if (func_161(uParam0->f_4, 1) > 40f)
					{
						func_329(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_329(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

void func_148(var uParam0, bool bParam1)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (UI::DOES_BLIP_EXIST(uParam0->f_8))
			{
				UI::SET_BLIP_ALPHA(uParam0->f_8, 0);
				UI::SET_BLIP_ROUTE(uParam0->f_8, false);
				func_154(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (UI::DOES_BLIP_EXIST(uParam0->f_9))
			{
				UI::SET_BLIP_ALPHA(uParam0->f_9, 0);
				UI::SET_BLIP_ROUTE(uParam0->f_9, false);
				UI::CLEAR_PRINTS();
				if (func_196(uParam0))
				{
					func_207(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_154(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_149(uParam0, 0, 0);
		}
		else if (UI::DOES_BLIP_EXIST(uParam0->f_10))
		{
			UI::REMOVE_BLIP(&(uParam0->f_10));
			if (UI::DOES_BLIP_EXIST(uParam0->f_8))
			{
				UI::SET_BLIP_ALPHA(uParam0->f_8, 255);
				UI::SET_BLIP_ROUTE(uParam0->f_8, true);
			}
			else if (UI::DOES_BLIP_EXIST(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					UI::SET_BLIP_ALPHA(uParam0->f_9, 0);
					UI::SET_BLIP_ROUTE(uParam0->f_9, false);
				}
				else if (uParam0->f_411 != 4)
				{
					UI::SET_BLIP_ALPHA(uParam0->f_9, 255);
					UI::SET_BLIP_ROUTE(uParam0->f_9, true);
				}
			}
			UI::CLEAR_PRINTS();
		}
	}
}

void func_149(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_48(uParam0);
	}
	if (!UI::DOES_BLIP_EXIST(uParam0->f_10))
	{
		uParam0->f_10 = func_152(uParam0->f_4, 1, 0);
		UI::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_10, "TAXI_BLIP_CAR");
		UI::SET_BLIP_ROUTE(uParam0->f_10, true);
		func_150(uParam0);
		if (bParam2)
		{
			UI::CLEAR_PRINTS();
			func_207(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_150(var uParam0)
{
	func_275(uParam0, 14, 0, 0);
	func_151();
}

void func_151()
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

int func_152(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = UI::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		UI::SET_BLIP_SCALE(iVar0, func_153(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			UI::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			UI::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		UI::SET_BLIP_SCALE(iVar0, func_153(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		UI::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		UI::SET_BLIP_SCALE(iVar0, func_153(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_153(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_154(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_198(*uParam1, iParam2))
	{
		UI::CLEAR_PRINTS();
		func_207(uParam0, iParam3, 1, 0, 0);
		func_173(uParam1, iParam2);
	}
}

void func_155(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_156(int iParam0)
{
	Global_16833 = iParam0;
}

void func_157(var uParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
			{
				if ((WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, joaat("weapon_stungun"), 0) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 2)) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 1))
				{
					func_329(uParam0, "Passenger injured by player with weapon.", 14);
				}
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			}
		}
	}
}

void func_158(var uParam0, bool bParam1)
{
	func_160(uParam0);
	if (bParam1)
	{
		if (!UI::DOES_BLIP_EXIST(uParam0->f_9))
		{
			uParam0->f_9 = func_159(uParam0->f_17, 1);
		}
		else if (UI::GET_BLIP_ALPHA(uParam0->f_9) == 0)
		{
			UI::SET_GPS_FLAGS(1, 0f);
			UI::SET_BLIP_ALPHA(uParam0->f_9, 255);
			UI::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_17);
			UI::SET_BLIP_ROUTE(uParam0->f_9, true);
		}
	}
}

int func_159(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = UI::ADD_BLIP_FOR_COORD(vParam0);
	UI::SET_BLIP_SCALE(iVar0, func_153(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	UI::SET_BLIP_ROUTE(iVar0, bParam1);
	return iVar0;
}

void func_160(var uParam0)
{
	if (UI::DOES_BLIP_EXIST(uParam0->f_8))
	{
		UI::SET_BLIP_ROUTE(uParam0->f_8, false);
		UI::REMOVE_BLIP(&(uParam0->f_8));
	}
}

float func_161(int iParam0, bool bParam1)
{
	return func_162(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0, bParam1);
}

float func_162(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar1, bParam2);
}

void func_163()
{
	if (bLocal_329)
	{
		func_170("TAXI_CYI_HANDLE_PLAYER_NEAR_JEWELRY_STORE", &iLocal_262, 1000);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_231.f_3, 0))
	{
		switch (iLocal_374)
		{
			case 0:
				if (func_195(Local_231.f_3, vLocal_246, 1) < 16f)
				{
					iLocal_374 = 1;
				}
				break;
			
			case 1:
				if (func_161(Local_231.f_3, 1) < 10f)
				{
					WEAPON::GIVE_WEAPON_TO_PED(Local_231.f_3, joaat("weapon_combatpistol"), 50, true, true);
					AI::CLEAR_SEQUENCE_TASK(&iLocal_245);
					AI::OPEN_SEQUENCE_TASK(&iLocal_245);
					AI::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0);
					AI::CLOSE_SEQUENCE_TASK(iLocal_245);
					AI::TASK_PERFORM_SEQUENCE(Local_231.f_3, iLocal_245);
					AI::CLEAR_SEQUENCE_TASK(&iLocal_245);
					func_275(&Local_231, 12, 0, 0);
					iLocal_374 = 2;
				}
				break;
			
			case 2:
				if (func_145(&Local_231, 12) > 1.5f)
				{
					if (iLocal_375 != 5)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_231.f_2, 0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_231.f_4, 0))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_231.f_2, Local_231.f_4, 0))
								{
									func_207(&Local_231, 56, 1, 0, 0);
								}
								else
								{
									func_207(&Local_231, 55, 1, 1, 0);
								}
							}
						}
						iLocal_259 = 0;
						iLocal_253 = 1;
						func_275(&Local_231, 12, 0, 0);
						func_168(&Local_231, 6);
						iLocal_374 = 3;
					}
					else
					{
						func_135(&Local_231, 12, 0);
						iLocal_374 = 9;
					}
				}
				break;
			
			case 3:
				if (func_161(Local_231.f_3, 1) >= 10f)
				{
					iLocal_374 = 5;
				}
				else if (iLocal_260)
				{
					if (!func_127() && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (!iLocal_259)
						{
							func_275(&Local_231, 12, 0, 0);
							iLocal_259 = 1;
						}
						else if (func_145(&Local_231, 12) > 5f)
						{
							func_135(&Local_231, 12, 0);
							iLocal_374 = 9;
						}
					}
				}
				else if (!iLocal_260)
				{
					if (func_166("txm8_lvMe1") || func_166("txm8_lvMe2"))
					{
						iLocal_260 = 1;
					}
				}
				break;
			
			case 5:
				func_164(&Local_231, 6);
				if (AI::GET_SCRIPT_TASK_STATUS(Local_231.f_3, 242628503) != 7)
				{
					AI::CLEAR_SEQUENCE_TASK(&iLocal_245);
					AI::OPEN_SEQUENCE_TASK(&iLocal_245);
					AI::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_246, 1f, 40000, 1048576000, 0, 1193033728);
					AI::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 337.3356f, -997.7456f, 28.1318f, 3f, 40000, 1048576000, 0, 1193033728);
					AI::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_247, 3f, 40000, 1048576000, 0, 1193033728);
					AI::CLOSE_SEQUENCE_TASK(iLocal_245);
					AI::TASK_PERFORM_SEQUENCE(Local_231.f_3, iLocal_245);
					AI::CLEAR_SEQUENCE_TASK(&iLocal_245);
					iLocal_375 = 5;
					iLocal_374 = 0;
				}
				break;
			
			case 9:
				if (func_134(&Local_231, 12))
				{
					if (func_145(&Local_231, 12) > 2f)
					{
						func_275(&Local_231, 6, 0, 0);
						AI::CLEAR_SEQUENCE_TASK(&iLocal_245);
						AI::OPEN_SEQUENCE_TASK(&iLocal_245);
						AI::TASK_SHOOT_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, -957453492);
						AI::CLOSE_SEQUENCE_TASK(iLocal_245);
						AI::TASK_PERFORM_SEQUENCE(Local_231.f_3, iLocal_245);
						AI::CLEAR_SEQUENCE_TASK(&iLocal_245);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Local_231.f_413, 1862763509);
						PED::SET_PED_KEEP_TASK(Local_231.f_3, true);
						bLocal_254 = true;
						if (UI::DOES_BLIP_EXIST(Local_231.f_9) && UI::GET_BLIP_ALPHA(Local_231.f_9) > 0)
						{
							UI::SET_BLIP_ALPHA(Local_231.f_9, 0);
							UI::SET_BLIP_ROUTE(Local_231.f_9, false);
							UI::CLEAR_THIS_PRINT("TAXI_OBJ_CYI_1B");
						}
						iLocal_374 = 10;
					}
				}
				else
				{
					func_275(&Local_231, 12, 0, 0);
					if (!ENTITY::IS_ENTITY_DEAD(Local_231.f_2, 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_231.f_4, 0))
						{
							if (PED::IS_PED_IN_VEHICLE(Local_231.f_2, Local_231.f_4, 0))
							{
								func_207(&Local_231, 56, 1, 0, 0);
							}
							else
							{
								func_207(&Local_231, 55, 1, 1, 0);
							}
						}
					}
				}
				break;
			
			case 10:
				if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && func_145(&Local_231, 6) > 2f)
				{
					func_329(&Local_231, "Passenger shoots player", 9);
				}
				break;
			}
	}
}

void func_164(var uParam0, int iParam1)
{
	if (func_16(&(uParam0->f_146[iParam1 /*3*/])))
	{
		if (func_15(&(uParam0->f_146[iParam1 /*3*/])))
		{
			func_165(&(uParam0->f_146[iParam1 /*3*/]));
		}
	}
}

void func_165(int iParam0)
{
	if (func_16(iParam0))
	{
		if (func_15(iParam0))
		{
			iParam0->f_1 = (func_14(GAMEPLAY::IS_BIT_SET(*iParam0, 4)) - iParam0->f_2);
			iParam0->f_2 = 0f;
			GAMEPLAY::CLEAR_BIT(iParam0, 2);
		}
	}
}

int func_166(char* sParam0)
{
	var uVar0;
	
	if (func_127())
	{
		MemCopy(&uVar0, {func_167()}, 4);
		if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_167()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15822 == 4)
	{
		return Global_15441;
	}
	return Var0;
}

void func_168(var uParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!func_15(&(uParam0->f_146[iVar0 /*3*/])))
			{
				func_169(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (func_16(&(uParam0->f_146[iParam1 /*3*/])))
	{
		if (!func_15(&(uParam0->f_146[iParam1 /*3*/])))
		{
			func_169(&(uParam0->f_146[iParam1 /*3*/]));
		}
	}
}

void func_169(int iParam0)
{
	if (func_16(iParam0))
	{
		if (!func_15(iParam0))
		{
			iParam0->f_2 = (func_14(GAMEPLAY::IS_BIT_SET(*iParam0, 4)) - iParam0->f_1);
			GAMEPLAY::SET_BIT(iParam0, 2);
		}
	}
}

void func_170(char* sParam0, int iParam1, int iParam2)
{
	if (GAMEPLAY::GET_GAME_TIMER() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = GAMEPLAY::GET_GAME_TIMER();
}

void func_171(var uParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, 0) && PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_3, uParam0->f_4))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_172(uParam0->f_3, uParam0->f_4) == 0)
			{
				AI::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, false) < GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(vVar1, vParam1, false) && VEHICLE::_0x639431E895B9AA57(uParam0->f_3, uParam0->f_4, 1, 0, false))
			{
				AI::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, false) >= GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(vVar1, vParam1, false) && VEHICLE::_0x639431E895B9AA57(uParam0->f_3, uParam0->f_4, 2, 0, false))
			{
				AI::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				AI::TASK_LEAVE_VEHICLE(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_172(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

void func_173(var uParam0, int iParam1)
{
	func_174(uParam0, iParam1);
}

void func_174(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_175(var uParam0, float fParam1, float fParam2, float fParam3)
{
	if ((((CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADED_OUT()) && !uParam0->f_142)
	{
		if (func_191(uParam0))
		{
			func_141(uParam0, &(uParam0->f_43));
			func_187(uParam0);
			func_186(uParam0);
			func_183(uParam0);
			func_181(uParam0, fParam2, fParam3);
			func_179(uParam0);
			return func_176(uParam0, fParam1);
		}
	}
	return 0;
}

int func_176(var uParam0, float fParam1)
{
	if (func_58(uParam0) == 2)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(uParam0->f_4, uParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_140, true, 0))
		{
		}
		if (((func_178(uParam0->f_4, uParam0->f_17, 1) <= (fParam1 + 1f) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1) && func_177(1, 1, 1)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4))
		{
			return func_108(uParam0, 1, fParam1);
		}
	}
	else if (((ENTITY::IS_ENTITY_AT_COORD(uParam0->f_4, uParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_140, true, 0) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1) && func_177(1, 1, 1)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4))
	{
		return func_108(uParam0, 1, fParam1);
	}
	return 0;
}

int func_177(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (GAMEPLAY::IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0)
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (bParam0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) != PLAYER::PLAYER_PED_ID())
				{
					return 0;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

float func_178(int iParam0, vector3 vParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	return GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, bParam2);
}

void func_179(var uParam0)
{
	float fVar0;
	
	if ((func_196(uParam0) && func_198(uParam0->f_81, 67108864)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_89) >= 10000)
		{
			fVar0 = func_180(uParam0->f_17, 1);
			if (fVar0 > fLocal_87)
			{
				iLocal_88++;
			}
			else
			{
				iLocal_88 = 0;
			}
			fLocal_87 = fVar0;
			iLocal_89 = GAMEPLAY::GET_GAME_TIMER();
		}
		if (iLocal_88 >= 2 && !func_127())
		{
			func_207(uParam0, 136, 1, 0, 1);
			iLocal_88 = 0;
		}
		if ((GAMEPLAY::GET_GAME_TIMER() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((GAMEPLAY::GET_GAME_TIMER() % 4000) < 50)
		{
			if (!func_196(uParam0))
			{
			}
			if (!func_198(uParam0->f_81, 67108864))
			{
			}
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			if (iLocal_88 > 0)
			{
				iLocal_88 = 0;
			}
		}
	}
}

float func_180(vector3 vParam0, bool bParam1)
{
	return func_195(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), vParam0, bParam1);
}

void func_181(var uParam0, float fParam1, float fParam2)
{
	if (func_196(uParam0) && func_198(uParam0->f_44, 4))
	{
		if ((VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4) || ENTITY::GET_ENTITY_SPEED(uParam0->f_4) < 3f) && func_305(uParam0))
		{
			if (!func_134(uParam0, 2))
			{
				func_182(uParam0, 2);
			}
			else if (func_196(uParam0))
			{
				if (func_145(uParam0, 2) > fParam1 && !func_134(uParam0, 14))
				{
					if (func_34())
					{
						func_207(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_207(uParam0, 48, 1, 0, 0);
					}
					func_275(uParam0, 2, 0, 0);
					if (func_134(uParam0, 10))
					{
						func_275(uParam0, 10, 0, 0);
					}
				}
				if (!func_134(uParam0, 3))
				{
					func_275(uParam0, 3, 0, 0);
				}
				else if (func_145(uParam0, 3) >= fParam2)
				{
					func_135(uParam0, 3, 0);
					func_329(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_134(uParam0, 2))
			{
				func_135(uParam0, 2, 0);
			}
			if (func_134(uParam0, 3))
			{
				func_135(uParam0, 3, 0);
			}
		}
	}
}

void func_182(var uParam0, int iParam1)
{
	func_146(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_183(var uParam0)
{
	if (func_185(uParam0))
	{
		func_184(uParam0);
	}
}

void func_184(var uParam0)
{
	if (AUDIO::IS_RADIO_RETUNING() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
			func_135(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_145(uParam0, 20) > 3f)
				{
					func_207(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_198(uParam0->f_81, 262144) || !func_198(uParam0->f_81, 1048576))
				{
					if (func_145(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_207(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_198(uParam0->f_82, 67108864))
				{
					if (func_145(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_207(uParam0, 85, 1, 0, 0);
						func_135(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_145(uParam0, 20) > 8f)
				{
					func_207(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_198(uParam0->f_81, 262144) || func_198(uParam0->f_82, 67108864))
			{
				if (!func_134(uParam0, 22))
				{
					func_182(uParam0, 22);
				}
			}
			if (func_134(uParam0, 22) && func_145(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_198(uParam0->f_81, 1048576))
					{
						func_207(uParam0, 84, 1, 0, 0);
						func_135(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_198(uParam0->f_82, 134217728))
					{
						func_207(uParam0, 85, 1, 0, 0);
						func_135(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_185(var uParam0)
{
	return uParam0->f_120;
}

void func_186(var uParam0)
{
	if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::GET_PLAYER_INDEX()) && !func_198(uParam0->f_44, 2))
	{
		func_173(&(uParam0->f_44), 2);
	}
	else if (!PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::GET_PLAYER_INDEX()) && func_198(uParam0->f_44, 2))
	{
		func_139(&(uParam0->f_44), 2);
		uParam0->f_47++;
		func_142(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		func_207(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + SYSTEM::CEIL(5f));
	}
}

void func_187(var uParam0)
{
	if (!func_198(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					if (func_145(uParam0, 9) > 1f)
					{
						func_190(uParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
						if (uParam0->f_410 != 22)
						{
							func_207(uParam0, 50, 1, 1, 0);
						}
						func_275(uParam0, 9, 0, 0);
						if (UI::DOES_BLIP_EXIST(uParam0->f_9))
						{
							UI::SET_BLIP_ALPHA(uParam0->f_9, 0);
							UI::SET_BLIP_ROUTE(uParam0->f_9, false);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_127() && func_145(uParam0, 9) > 4f)
				{
					func_207(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_189("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						func_207(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), func_188(uParam0)))
				{
					func_190(uParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
					func_142(6, 0);
				}
				if (!func_138(uParam0))
				{
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (func_145(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								func_207(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					if (func_189("TAXI_OBJ_POL", 0, 0))
					{
						UI::CLEAR_PRINTS();
					}
					if (UI::DOES_BLIP_EXIST(uParam0->f_9))
					{
						UI::SET_BLIP_ALPHA(uParam0->f_9, 255);
						UI::SET_BLIP_ROUTE(uParam0->f_9, true);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_127())
				{
					if (uParam0->f_410 != 22)
					{
						func_207(uParam0, 53, 1, 0, 1);
					}
					func_142(7, func_188(uParam0));
					func_190(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_127())
				{
					func_135(uParam0, 9, 0);
					func_275(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

int func_188(var uParam0)
{
	return uParam0->f_106;
}

bool func_189(char* sParam0, int iParam1, char* sParam2)
{
	UI::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	}
	return UI::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

void func_190(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

int func_191(var uParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (!PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, 1) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3))
			{
				func_329(uParam0, "Passenger left car.", 9);
			}
			else if (func_280(uParam0))
			{
				if (func_189("TAXI_OBJ_PICKUP", 0, 0))
				{
					UI::CLEAR_THIS_PRINT("TAXI_OBJ_PICKUP");
				}
				if (CAM::IS_SCREEN_FADED_IN())
				{
					return 1;
				}
			}
			else
			{
				if ((GAMEPLAY::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				func_147(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_192(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = 0;
	}
	else
	{
		*uParam0 = -1;
	}
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

void func_193(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_194(), 24);
		iVar0++;
	}
	UI::CLEAR_PRINTS();
	func_46();
}

var func_194()
{
	var uVar0;
	
	return uVar0;
}

float func_195(int iParam0, vector3 vParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		return -1f;
	}
	return GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), vParam1, bParam2);
}

int func_196(var uParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_197(var uParam0)
{
	return uParam0->f_416;
}

bool func_198(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_199(var uParam0)
{
	func_203(uParam0, 1000);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, 0) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		AI::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
		AI::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
	}
	func_125();
	func_200(uParam0);
}

void func_200(var uParam0)
{
	func_135(uParam0, 14, 0);
	func_135(uParam0, 15, 0);
	func_202();
	if (func_201())
	{
		func_156(0);
	}
}

int func_201()
{
	if (Global_16833 == 1)
	{
		return 1;
	}
	return 0;
}

void func_202()
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_203(var uParam0, int iParam1)
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DESTROY_CAM(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		CAM::RENDER_SCRIPT_CAMS(false, true, iParam1, 1, 0, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
	}
}

void func_204(vector3 vParam0, bool bParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { func_37(vParam0, 1f, -fParam2, -fParam2, -fParam2) };
	vVar1 = { func_37(vParam0, 1f, fParam2, fParam2, fParam2) };
	vVar0.z = (vVar0.z - 22f);
	vVar1.z = (vVar1.z + 22f);
	if (!bParam1)
	{
		PATHFIND::SET_ROADS_IN_AREA(vVar0, vVar1, false, 1);
	}
	else
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar0, vVar1, true);
		PED::CLEAR_PED_NON_CREATION_AREA();
	}
}

void func_205()
{
	func_173(&(Local_231.f_55), 2);
	func_173(&(Local_231.f_55), 4);
	func_173(&(Local_231.f_55), 16);
	func_173(&(Local_231.f_55), 64);
	func_173(&(Local_231.f_55), 256);
	func_173(&(Local_231.f_55), 512);
	func_173(&(Local_231.f_55), 1024);
	func_173(&(Local_231.f_55), 2048);
	func_173(&(Local_231.f_55), 4096);
	func_173(&(Local_231.f_100), 8);
	func_173(&(Local_231.f_100), 2048);
	func_173(&(Local_231.f_100), 256);
	func_173(&uLocal_306, 2);
}

void func_206(var uParam0)
{
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	func_203(uParam0, 1000);
}

void func_207(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_275(uParam0, 16, 4f, 0);
		if (func_208(uParam0))
		{
			func_46();
		}
	}
	func_236(uParam0, iParam2, bParam3);
}

int func_208(var uParam0)
{
	vector3 vVar0;
	struct<6> Var1;
	
	StringCopy(&vVar0, uParam0->f_143, 24);
	if (func_127())
	{
		Var1 = { func_167() };
		if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
			StringConCat(&vVar0, "_obj1", 24);
			if (GAMEPLAY::ARE_STRINGS_EQUAL(&Var1, &vVar0))
			{
				return 1;
			}
			StringCopy(&vVar0, uParam0->f_143, 24);
			StringConCat(&vVar0, "_gret1", 24);
			func_209(&vVar0);
			if (GAMEPLAY::ARE_STRINGS_EQUAL(&Var1, &vVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_209(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

int func_210(var uParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if ((PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3) && (GAMEPLAY::GET_GAME_TIMER() - iLocal_81) > 500) || PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_211(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 335.4227f, -956.4223f, 28.3588f;
			break;
		
		case 0:
			return 349.926f, -958.3827f, 28.3033f;
			break;
		
		case 1:
			return -1020.581f, -2743.842f, 18.4049f;
			break;
		
		case 2:
			return -1043.947f, -2748.683f, 20.3594f;
			break;
		
		case 3:
			return -1042.391f, -2731.644f, 19.1701f;
			break;
		
		case 4:
			return -1045.677f, -2730.109f, 19.1701f;
			break;
		
		case 5:
			return -1032.295f, -2731.449f, 19.0458f;
			break;
		
		case 6:
			return -1051.045f, -2722.934f, 19.1693f;
			break;
		
		case 7:
			return -1052.905f, -2723.375f, 19.1693f;
			break;
		
		case 8:
			return -1042.812f, -2743.095f, 20.362f;
			break;
		
		default:
			return 354.5381f, -947.7332f, 28.359f;
			break;
	}
	return func_39();
}

int func_212(var uParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, 0))
		{
			if ((GAMEPLAY::GET_GAME_TIMER() % 1000) < 50)
			{
			}
			func_147(uParam0, 1);
			if (func_32())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
			}
			if (AI::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 2106541073) == 1 || AI::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 2106541073) == 0)
			{
				AI::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_79 = 0;
				AI::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0))
		{
			func_234(uParam0);
			if (uParam0->f_48 > 1)
			{
				AI::CLEAR_SEQUENCE_TASK(&iVar3);
				AI::OPEN_SEQUENCE_TASK(&iVar3);
				AI::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
				AI::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4, 0);
				AI::CLOSE_SEQUENCE_TASK(iVar3);
				AI::TASK_PERFORM_SEQUENCE(uParam0->f_3, iVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_134(uParam0, 14))
			{
				func_200(uParam0);
				func_148(uParam0, 0);
			}
			if (func_134(uParam0, 9))
			{
				func_135(uParam0, 9, 0);
				UI::CLEAR_PRINTS();
				if (UI::DOES_BLIP_EXIST(uParam0->f_8))
				{
					UI::SET_BLIP_ALPHA(uParam0->f_8, 255);
					UI::SET_BLIP_ROUTE(uParam0->f_8, true);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, 0))
			{
				fVar4 = ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && func_233(uParam0, uParam0->f_3) > 300f)
				{
					func_329(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (AI::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 1 || ((func_162(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 1) < 20f && func_178(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_178(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_230(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_229(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_86)
							{
								uParam0->f_7 = func_144(uParam0->f_4, uParam0->f_3);
								iVar0 = func_115(uParam0, &iVar1);
								if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
								{
									if (iVar1 == uParam0->f_7)
									{
										if (uParam0->f_7 == 1)
										{
											iVar2 = 262144;
										}
										else if (uParam0->f_7 == 2)
										{
											iVar2 = 131072;
										}
										AI::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, iVar2);
									}
									else
									{
										AI::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 0);
									}
								}
								if (uParam0->f_411 == 0)
								{
									if (VEHICLE::_0x639431E895B9AA57(uParam0->f_3, uParam0->f_4, 0, 0, false))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
											{
												AI::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							AI::CLEAR_PED_TASKS(uParam0->f_3);
							AI::TASK_ENTER_VEHICLE(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true), fVar4, 0, 0, 255, 150);
							}
							if (!func_305(uParam0))
							{
								AI::CLEAR_PED_TASKS(uParam0->f_3);
							}
							else if (((AI::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 1 && AI::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 0) && AI::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 7) && func_233(uParam0, uParam0->f_3) > 8f)
							{
								AI::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
								AI::OPEN_SEQUENCE_TASK(&(uParam0->f_243));
								AI::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								if (uParam0->f_411 != 9)
								{
									AI::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0f, 0, 0, 0);
								}
								else
								{
									AI::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0f, 0, 0, 0);
								}
								AI::CLOSE_SEQUENCE_TASK(uParam0->f_243);
								AI::TASK_PERFORM_SEQUENCE(uParam0->f_3, uParam0->f_243);
							}
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								ENTITY::SET_ENTITY_ANIM_SPEED(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_86)
						{
							if (func_162(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_228(uParam0, 1))
								{
									AI::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
									func_329(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_227(uParam0->f_4))
								{
									AI::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
									func_329(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_225(uParam0);
						if (func_233(uParam0, uParam0->f_3) < fVar4 || func_32())
						{
							if (PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_213(uParam0))
								{
									func_160(uParam0);
									iLocal_81 = GAMEPLAY::GET_GAME_TIMER();
									PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 26, true);
									func_135(uParam0, 5, 0);
									UI::CLEAR_GPS_FLAGS();
									STATS::STAT_GET_FLOAT(uParam0->f_428, &(uParam0->f_42), -1);
									PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam0->f_3, 0);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

int func_213(var uParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	
	func_170("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar6 = -1;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, 0) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_4, 0))
	{
		func_224();
	}
	if (bLocal_86)
	{
		iLocal_78 = 10;
	}
	if ((iLocal_78 < 7 && iLocal_78 > 0) && !bLocal_86)
	{
		if (func_222(iLocal_80))
		{
			iLocal_78 = 7;
		}
	}
	switch (iLocal_78)
	{
		case 0:
			if (func_108(uParam0, 0, 1084227584) && func_177(1, 1, 1))
			{
				if (func_228(uParam0, 1))
				{
					iLocal_80 = GAMEPLAY::GET_GAME_TIMER();
					SYSTEM::SETTIMERA(0);
					iLocal_78 = 1;
				}
				else
				{
					func_329(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (SYSTEM::TIMERA() > 500)
			{
				uParam0->f_7 = func_144(uParam0->f_4, uParam0->f_3);
				iVar3 = func_115(uParam0, &iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3, 0))
				{
					if (iVar4 == uParam0->f_7)
					{
						if (uParam0->f_7 == 1)
						{
							iVar5 = 262144;
						}
						else
						{
							iVar5 = 131072;
						}
						AI::TASK_LEAVE_ANY_VEHICLE(iVar3, 0, iVar5);
					}
					else
					{
						AI::TASK_LEAVE_ANY_VEHICLE(iVar3, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (VEHICLE::_0x639431E895B9AA57(uParam0->f_3, uParam0->f_4, 0, 0, false))
					{
						uParam0->f_7 = 0;
						if (!ENTITY::IS_ENTITY_DEAD(iVar3, 0))
						{
							AI::TASK_LEAVE_ANY_VEHICLE(iVar3, 0, 4096);
						}
					}
				}
				iLocal_78 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_7 == 0)
			{
				vVar2 = { 1.5f, 0f, -0.6422f };
				vVar0 = { -1.4309f, 3.958f, 3.5037f };
				vVar1 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else if (uParam0->f_7 == 2)
			{
				vVar2 = { 1.5f, -1f, -0.6422f };
				vVar0 = { 1.4309f, 3.958f, 0.5037f };
				vVar1 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else
			{
				vVar2 = { -1.5f, -1f, -0.6422f };
				vVar0 = { -1.4823f, 4.2333f, 0.5939f };
				vVar1 = { -0.4718f, 1.4282f, 0.3619f };
			}
			iVar6 = func_221(&(uParam0->f_409), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 0f, 2.2f, 0.275f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, vVar0), 1);
			if (iVar6 == 1)
			{
				vVar0.z = (vVar0.z + 1.5f);
				if (uParam0->f_7 == 2)
				{
					vVar1 = { 0.7632f, 1.4884f, 0.4369f };
				}
			}
			if (iVar6 != -1)
			{
				func_220(0, 0, 1);
				GAMEPLAY::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, true), 3f, 0);
				GAMEPLAY::CLEAR_AREA_OF_OBJECTS(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, true), 25f, 0);
				UI::CLEAR_HELP(1);
				UI::CLEAR_PRINTS();
				func_121();
				func_236(uParam0, 0, 0);
				vVar7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, vVar2) };
				ENTITY::SET_ENTITY_COORDS(uParam0->f_3, vVar7, 1, false, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_3, func_218(uParam0));
				func_217(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				CAM::SET_CAM_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, vVar0));
				CAM::POINT_CAM_AT_ENTITY(*uParam0, uParam0->f_4, vVar1, 1);
				CAM::SET_CAM_ACTIVE(*uParam0, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				PED::_0x2208438012482A1A(uParam0->f_3, 0, 0);
				AI::TASK_ENTER_VEHICLE(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_78 = 5;
			}
			break;
		
		case 5:
			func_170("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (SYSTEM::TIMERA() > 3500)
			{
				iLocal_78 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, 0) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_4, 0))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, 0))
				{
					PED::SET_PED_INTO_VEHICLE(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(uParam0->f_4, func_216(uParam0->f_7), 1);
				}
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
				CAM::DESTROY_CAM(*uParam0, 0);
				CAM::DESTROY_CAM(uParam0->f_1, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::DO_SCREEN_FADE_IN(800);
				UI::CLEAR_HELP(1);
				UI::CLEAR_PRINTS();
				func_121();
				func_236(uParam0, 0, 0);
				iLocal_78 = 8;
			}
			break;
		
		case 8:
			if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				func_214(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
			CAM::DESTROY_CAM(*uParam0, 0);
			CAM::DESTROY_CAM(uParam0->f_1, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			func_214(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, 0) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_4, 0))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3) || PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, 1))
				{
					return 1;
				}
				else if (AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) != 1 && AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) != 0)
				{
					AI::TASK_ENTER_VEHICLE(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

void func_214(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	}
	CUTSCENE::_0xC61B86C9F61EB404(1);
	func_22(0, 1, iParam2, 0, 0);
	if (bParam1)
	{
		UI::DISPLAY_RADAR(true);
		UI::DISPLAY_HUD(true);
	}
	func_215(23, 0);
}

void func_215(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&Global_25704, iParam0);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_25704, iParam0);
	}
}

int func_216(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2;
		
		case 2:
			return 3;
		
		case 0:
			return 1;
		
		case -1:
			return 0;
		
		default:
	}
	return 2;
}

void func_217(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		*uParam0 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vParam1, vParam2, fParam3, 0, 2);
	}
}

float func_218(var uParam0)
{
	float fVar0;
	vector3 vVar1;
	
	fVar0 = 0f;
	vVar1 = { func_39() };
	if (uParam0->f_7 == 2)
	{
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_219(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true), vVar1);
	return fVar0;
}

float func_219(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3)
{
	return GAMEPLAY::GET_HEADING_FROM_VECTOR_2D((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_220(int iParam0, int iParam1, int iParam2)
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 15f);
	}
	CUTSCENE::_0xC61B86C9F61EB404(iParam1);
	func_40(0);
	func_22(1, 1, iParam2, 0, 0);
	UI::DISPLAY_RADAR(false);
	UI::DISPLAY_HUD(false);
	func_215(23, 1);
}

int func_221(var uParam0, vector3 vParam1, vector3 vParam2, bool bParam3)
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (*uParam0 == 0)
	{
		*uParam0 = WORLDPROBE::START_SHAPE_TEST_LOS_PROBE(vParam1, vParam2, 511, 0, 7);
		if (bParam3)
		{
		}
	}
	else
	{
		iVar4 = WORLDPROBE::GET_SHAPE_TEST_RESULT(*uParam0, &iVar2, &uVar0, &uVar1, &uVar3);
		if (iVar4 == 2)
		{
			if (bParam3)
			{
			}
			if (iVar2 == 0)
			{
				*uParam0 = 0;
				return iVar2;
			}
			else
			{
				if (bParam3)
				{
				}
				*uParam0 = 0;
				return iVar2;
			}
		}
		else if (iVar4 == 0)
		{
			if (bParam3)
			{
			}
			*uParam0 = 0;
		}
	}
	return -1;
}

int func_222(int iParam0)
{
	if (func_223() && GAMEPLAY::GET_GAME_TIMER() >= iParam0 + 1000)
	{
		CAM::DO_SCREEN_FADE_OUT(500);
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
		}
		func_40(0);
		func_125();
		return 1;
	}
	return 0;
}

int func_223()
{
	if (UI::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (CONTROLS::IS_CONTROL_JUST_PRESSED(0, 18) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_224()
{
	if (func_34())
	{
		GAMEPLAY::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("appInternet");
	}
	if (func_33())
	{
		GAMEPLAY::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("appCamera");
	}
	if (func_42(1))
	{
		func_40(0);
	}
}

void func_225(var uParam0)
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (func_161(uParam0->f_3, 1) > 30f || func_226(uParam0))
			{
				if (AI::GET_SCRIPT_TASK_STATUS(uParam0->f_3, -1794415470) == 1 || AI::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) == 1)
				{
					AI::CLEAR_SEQUENCE_TASK(&iVar0);
					AI::OPEN_SEQUENCE_TASK(&iVar0);
					AI::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4, 0);
					AI::TASK_PLAY_ANIM(0, "misscommon@response", "screw_you", 8f, -8f, -1, 0, 0f, 0, 0, 0);
					AI::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
					AI::CLOSE_SEQUENCE_TASK(iVar0);
					AI::TASK_PERFORM_SEQUENCE(uParam0->f_3, iVar0);
					func_329(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_226(var uParam0)
{
	if ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 3f && func_145(uParam0, 5) > 15f) || ENTITY::IS_ENTITY_UPSIDEDOWN(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_227(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		iVar1 = 0;
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 0))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 1))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 2))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 3))
		{
			iVar1++;
		}
		if (iVar1 < 2)
		{
			return 0;
		}
	}
	return 1;
}

int func_228(var uParam0, bool bParam1)
{
	int iVar0[3];
	int iVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		iVar0[0] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 1, 0);
		iVar0[1] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 2, 0);
		iVar0[2] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 0, 0);
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar1]))
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar0[iVar1], 0))
				{
					if (iVar1 == 0)
					{
						uParam0->f_7 = 1;
						if (bParam1)
						{
						}
					}
					else if (iVar1 == 1)
					{
						uParam0->f_7 = 2;
						if (bParam1)
						{
						}
					}
					else
					{
						uParam0->f_7 = 0;
						if (bParam1)
						{
						}
					}
					if (bParam1)
					{
					}
					return 0;
				}
			}
			iVar1++;
		}
		if ((GAMEPLAY::GET_GAME_TIMER() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_229(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, 0))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3) && func_161(uParam0->f_3, 1) < fParam2)
		{
			if (!func_134(uParam0, 5))
			{
				func_275(uParam0, 5, 0, 0);
			}
		}
		else if (func_134(uParam0, 5))
		{
			func_135(uParam0, 5, 0);
		}
		if (((func_145(uParam0, 5) > IntToFloat(iParam1) && ENTITY::GET_ENTITY_SPEED(uParam0->f_4) < fParam4) && !ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3)) || func_161(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_230(var uParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	
	iVar8 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_4, "windscreen");
	if (iVar8 == -1)
	{
		iVar8 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_4, "windscreen_f");
	}
	if (iVar8 != -1)
	{
		vVar2 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_4, iVar8) };
		vVar2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_4, vVar2) };
		vVar2.y = (vVar2.y + 1f);
	}
	else
	{
		vVar2 = { 0f, 1f, 1f };
	}
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, vVar2) };
	vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_3, 0f, 0.25f, 0.9f) };
	GRAPHICS::DRAW_DEBUG_LINE(vVar0, vVar1, 0, 0, 255, 255);
	switch (iLocal_79)
	{
		case 0:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, true);
			iLocal_79 = 1;
			break;
		
		case 1:
			if ((func_162(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && GAMEPLAY::ABSF((vVar0.z - vVar1.z)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = WORLDPROBE::START_SHAPE_TEST_LOS_PROBE(vVar0, vVar1, 511, 0, 7);
				}
				else
				{
					iVar7 = WORLDPROBE::GET_SHAPE_TEST_RESULT(uParam0->f_409, &iVar5, &uVar3, &uVar4, &uVar6);
					if (iVar7 == 2)
					{
						if (iVar5 == 0)
						{
							iLocal_79 = 2;
						}
						uParam0->f_409 = 0;
					}
					else if (iVar7 == 0)
					{
						uParam0->f_409 = 0;
					}
				}
			}
			else if (AI::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 1 && AI::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 0)
			{
				AI::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
				AI::OPEN_SEQUENCE_TASK(&(uParam0->f_243));
				AI::TASK_PLAY_ANIM(0, "oddjobs@taxi@", "idle_a", 8f, -8f, -1, 0, 0f, 0, 0, 0);
				AI::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				AI::SET_SEQUENCE_TO_REPEAT(uParam0->f_243, 1);
				AI::CLOSE_SEQUENCE_TASK(uParam0->f_243);
				AI::TASK_PERFORM_SEQUENCE(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			UI::CLEAR_PRINTS();
			if (uParam0->f_411 != 9)
			{
				if (!func_198(uParam0->f_44, 128))
				{
					func_207(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_231(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			AI::CLEAR_PED_TASKS(uParam0->f_3);
			AI::TASK_LOOK_AT_ENTITY(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			AI::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
			AI::OPEN_SEQUENCE_TASK(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				AI::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0f, 0, 0, 0);
			}
			else
			{
				AI::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0f, 0, 0, 0);
			}
			AI::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
			AI::CLOSE_SEQUENCE_TASK(uParam0->f_243);
			AI::TASK_PERFORM_SEQUENCE(uParam0->f_3, uParam0->f_243);
			AI::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
			iLocal_79 = 3;
			break;
		
		case 3:
			iLocal_79 = 0;
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				ENTITY::SET_ENTITY_ANIM_SPEED(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

void func_231(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(iParam0, sParam1, sParam2, func_232(iParam3), 0);
}

int func_232(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

float func_233(var uParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		if (func_305(uParam0))
		{
			return func_162(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_234(var uParam0)
{
	func_157(uParam0, uParam0->f_3);
	if (func_305(uParam0))
	{
		if (func_134(uParam0, 14))
		{
			func_200(uParam0);
			if (UI::DOES_BLIP_EXIST(uParam0->f_10))
			{
				UI::REMOVE_BLIP(&(uParam0->f_10));
			}
		}
	}
	if (!func_134(uParam0, 9))
	{
		if (UI::DOES_BLIP_EXIST(uParam0->f_8))
		{
			UI::SET_BLIP_ALPHA(uParam0->f_8, 0);
			UI::SET_BLIP_ROUTE(uParam0->f_8, false);
		}
		func_275(uParam0, 9, 0, 0);
		func_235("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_235(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	UI::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	UI::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

void func_236(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_46();
		func_275(uParam0, 16, 4f, 0);
		UI::CLEAR_PRINTS();
	}
}

int func_237(var uParam0, int iParam1)
{
	if (!UI::HAS_ADDITIONAL_TEXT_LOADED(2))
	{
		return 0;
	}
	func_242(12);
	if (func_198(uParam0->f_44, 8))
	{
		if (!func_198(uParam0->f_44, 128))
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && !func_198(uParam0->f_44, 256))
			{
				func_173(&(uParam0->f_44), 256);
			}
			if (func_198(uParam0->f_44, 256) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				func_207(uParam0, 135, 1, 0, 1);
				func_173(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_240(uParam0, iParam1))
	{
		if (func_161(uParam0->f_3, 1) < 35f)
		{
			if (!func_198(uParam0->f_44, 8))
			{
				AI::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
				func_207(uParam0, 133, 1, 0, 1);
				func_173(&(uParam0->f_44), 8);
			}
		}
		if ((PED::IS_PED_INJURED(uParam0->f_3) || PED::IS_PED_FLEEING(uParam0->f_3)) || func_161(uParam0->f_3, 1) > 400f)
		{
			func_329(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_2, 0);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_4, true);
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_4);
			func_238(uParam0);
			func_142(2, 0);
			bLocal_86 = true;
			func_146(&iLocal_82);
			return 1;
		}
		else
		{
			func_329(uParam0, "No Taxi", 21);
			func_279("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_238(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4, 0))
	{
		if (func_239())
		{
		}
	}
}

int func_239()
{
	if (GAMEPLAY::IS_BIT_SET(GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_240(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
				bVar2 = func_227(iVar0);
				bVar3 = true;
				if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iVar1 == joaat("rhino") || iVar1 == joaat("ratloader")) || iVar1 == joaat("surfer")) || iVar1 == joaat("surfer2")) || iVar1 == joaat("armytanker")) || iVar1 == joaat("barracks")) || iVar1 == joaat("barracks2")) || iVar1 == joaat("crusader")) || iVar1 == joaat("utillitruck")) || iVar1 == joaat("utillitruck2")) || iVar1 == joaat("utillitruck3")) || iVar1 == joaat("airtug")) || iVar1 == joaat("caddy")) || iVar1 == joaat("caddy2")) || iVar1 == joaat("dloader")) || iVar1 == joaat("docktug")) || iVar1 == joaat("flatbed")) || iVar1 == joaat("ripley")) || iVar1 == joaat("romero")) || iVar1 == joaat("towtruck")) || iVar1 == joaat("towtruck2")) || iVar1 == joaat("airbus")) || iVar1 == joaat("bus")) || iVar1 == joaat("coach")) || iVar1 == joaat("rentalbus")) || iVar1 == joaat("tourbus")) || iVar1 == joaat("riot")) || iVar1 == joaat("trash")) || iVar1 == joaat("benson")) || iVar1 == joaat("biff")) || iVar1 == joaat("hauler")) || iVar1 == joaat("packer")) || iVar1 == joaat("phantom")) || iVar1 == joaat("pounder")) || iVar1 == joaat("bulldozer")) || iVar1 == joaat("handler")) || iVar1 == joaat("tiptruck2")) || iVar1 == joaat("cutter")) || iVar1 == joaat("dump")) || iVar1 == joaat("mixer")) || iVar1 == joaat("mixer2")) || iVar1 == joaat("rubble")) || iVar1 == joaat("scrap")) || iVar1 == joaat("tiptruck")) || iVar1 == joaat("camper")) || iVar1 == joaat("taco")) || iVar1 == joaat("boxville")) || iVar1 == joaat("boxville2")) || iVar1 == joaat("boxville3")) || iVar1 == joaat("burrito")) || iVar1 == joaat("burrito2")) || iVar1 == joaat("burrito3")) || iVar1 == joaat("burrito4")) || iVar1 == joaat("gburrito")) || iVar1 == joaat("journey")) || iVar1 == joaat("mule")) || iVar1 == joaat("mule2")) || iVar1 == joaat("pony")) || iVar1 == joaat("rumpo")) || iVar1 == joaat("rumpo2")) || iVar1 == joaat("speedo")) || iVar1 == joaat("speedo2")) || iVar1 == joaat("youga")) || iVar1 == joaat("mower")) || iVar1 == joaat("tractor")) || iVar1 == joaat("tractor2")) || iVar1 == joaat("fbi")) || iVar1 == joaat("fbi2")) || iVar1 == joaat("pranger")) || iVar1 == joaat("ambulance")) || iVar1 == joaat("dilettante2")) || iVar1 == 1938952078) || iVar1 == joaat("lguard")) || iVar1 == joaat("dune")) || iVar1 == joaat("pbus")) || iVar1 == joaat("police")) || iVar1 == joaat("police2")) || iVar1 == joaat("police3")) || iVar1 == joaat("police4")) || iVar1 == joaat("policeb")) || iVar1 == joaat("policet")) || iVar1 == joaat("sheriff")) || iVar1 == joaat("sheriff2")) || iVar1 == joaat("stockade"))
				{
					bVar3 = false;
				}
				if (uParam0->f_411 == 7)
				{
					if (iVar1 == joaat("bodhi2"))
					{
						bVar3 = false;
					}
				}
				bVar4 = false;
				if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar1))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) == PLAYER::PLAYER_PED_ID())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_198(uParam0->f_44, 64))
					{
						if (UI::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_279("TX_VIP_DMGD", -1);
							if (func_241("TX_VIP_DMGD"))
							{
								func_173(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_198(uParam0->f_44, 32))
					{
						if (UI::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_279("TX_VIP_CAR", -1);
							if (func_241("TX_VIP_CAR"))
							{
								func_173(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_198(uParam0->f_44, 16))
					{
						if (UI::HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_279("TX_VIP_SMALL", -1);
							if (func_241("TX_VIP_SMALL"))
							{
								func_173(&(uParam0->f_44), 16);
							}
						}
					}
					return 0;
				}
				return 1;
			}
		}
		else
		{
			func_139(&(uParam0->f_44), 16);
			func_139(&(uParam0->f_44), 64);
			func_139(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

int func_241(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_242(int iParam0)
{
	var uVar0;
	vector3 vVar1[24];
	
	if (GAMEPLAY::IS_XBOX360_VERSION() || GAMEPLAY::IS_DURANGO_VERSION())
	{
		uVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(8, &uVar0, 1, 1);
	}
	else if (GAMEPLAY::IS_PS3_VERSION() || GAMEPLAY::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::_0x3E200C2BCF4164EB(8, &cVar1);
	}
}

void func_243(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_140(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_244(var uParam0, var uParam1)
{
	int iVar0;
	
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			GAMEPLAY::CLEAR_BIT(&(uParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			GAMEPLAY::SET_BIT(&(uParam0->f_60[iVar0 /*3*/]), 1);
			GAMEPLAY::CLEAR_BIT(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_245(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_246()
{
	Local_165 = 0;
	func_263(40981, 40956, 1);
	func_263(40717, 40694, 1);
	func_263(40632, 40607, 1);
	func_263(40535, 40511, 1);
	func_263(40401, 40380, 1);
	func_263(40327, 40302, 1);
	func_263(40160, 40137, 1);
}

int func_247(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_329(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_248(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (func_250(uParam0->f_4))
		{
			func_249(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_249(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_250(int iParam0)
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 1;
	}
	if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) < -100f)
	{
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_251(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_329(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_252(var uParam0)
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		if (func_253(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_253(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_254(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_249(uParam0, 11);
	return 1;
}

int func_255(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(uParam0->f_4) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4))
		{
			if (!func_134(uParam0, 25))
			{
				func_275(uParam0, 25, 0, 0);
			}
			else if (func_145(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_134(uParam0, 25))
		{
			func_135(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_256(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_329(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_257(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4, 0))
	{
		if (VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(uParam0->f_4))
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_4, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_258(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_329(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_259(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4, 0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
		{
			if (VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
			{
				if (func_253(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_260(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_329(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_261(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (func_262(uParam0->f_4))
		{
			func_249(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_262(int iParam0)
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 1;
	}
	if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) == 0f)
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
		}
		return 1;
	}
	else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_263(int iParam0, int iParam1, bool bParam2)
{
	if (Local_165 >= 16)
	{
		Local_165 = 16;
		return;
	}
	Local_165.f_1[Local_165 /*4*/] = 0;
	func_174(&(Local_165.f_1[Local_165 /*4*/]), 1);
	if (bParam2)
	{
		func_174(&(Local_165.f_1[Local_165 /*4*/]), 2);
	}
	Local_165.f_1[Local_165 /*4*/].f_2 = iParam0;
	Local_165.f_1[Local_165 /*4*/].f_3 = iParam1;
	Local_165++;
}

int func_264(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_329(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_265(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		if ((PED::IS_PED_INJURED(uParam0->f_3) || ENTITY::IS_ENTITY_DEAD(uParam0->f_3, 0)) || FIRE::IS_ENTITY_ON_FIRE(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_266()
{
	Local_162[5 /*10*/] = 5;
	Local_162[5 /*10*/].f_1 = 0;
	Local_162[5 /*10*/].f_2 = "TX_SPEED_N";
	Local_162[5 /*10*/].f_9 = 78;
	Local_162[0 /*10*/] = 5;
	Local_162[0 /*10*/].f_1 = 0;
	Local_162[0 /*10*/].f_2 = "TX_AIR_N";
	Local_162[0 /*10*/].f_9 = 76;
	Local_162[2 /*10*/] = 5;
	Local_162[2 /*10*/].f_1 = 0;
	Local_162[2 /*10*/].f_2 = "TX_QSTOP_N";
	Local_162[2 /*10*/].f_9 = 21;
	Local_162[1 /*10*/] = 10;
	Local_162[1 /*10*/].f_1 = 0;
	Local_162[1 /*10*/].f_2 = "TX_DRIFT_N";
	Local_162[1 /*10*/].f_9 = 71;
	Local_162[4 /*10*/] = 10;
	Local_162[4 /*10*/].f_1 = 0;
	Local_162[4 /*10*/].f_2 = "TX_SIDEWALK_N";
	Local_162[4 /*10*/].f_9 = 79;
	Local_162[6 /*10*/] = 10;
	Local_162[6 /*10*/].f_1 = 0;
	Local_162[6 /*10*/].f_2 = "TX_ONCOMING_N";
	Local_162[6 /*10*/].f_9 = 80;
	Local_162[9 /*10*/] = 15;
	Local_162[9 /*10*/].f_1 = 0;
	Local_162[9 /*10*/].f_2 = "TX_HITRUN_N";
	Local_162[9 /*10*/].f_9 = 82;
	Local_162[8 /*10*/] = 15;
	Local_162[8 /*10*/].f_1 = 0;
	Local_162[8 /*10*/].f_2 = "TX_RECKLESS_N";
	Local_162[8 /*10*/].f_9 = 72;
	Local_162[7 /*10*/] = 15;
	Local_162[7 /*10*/].f_1 = 0;
	Local_162[7 /*10*/].f_2 = "TX_ROLL_N";
	Local_162[7 /*10*/].f_9 = 74;
	Local_162[11 /*10*/] = 5;
	Local_162[11 /*10*/].f_1 = 0;
	Local_162[11 /*10*/].f_2 = "TX_SWERVE_N";
	Local_162[11 /*10*/].f_9 = 70;
	Local_162[12 /*10*/] = 5;
	Local_162[12 /*10*/].f_1 = 0;
	Local_162[12 /*10*/].f_2 = "TX_REVERSE_N";
	Local_162[12 /*10*/].f_9 = 69;
	Local_162[13 /*10*/] = 10;
	Local_162[13 /*10*/].f_1 = 0;
	Local_162[13 /*10*/].f_2 = "TX_OFFROAD_N";
	Local_162[13 /*10*/].f_9 = 67;
	Local_162[14 /*10*/] = 10;
	Local_162[14 /*10*/].f_1 = 0;
	Local_162[14 /*10*/].f_2 = "TX_NEARMIS_N";
	Local_162[14 /*10*/].f_9 = 75;
}

int func_267()
{
	if (!func_268(&iLocal_262, 1))
	{
		func_170("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_262, 1000);
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_313))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(func_274(0)))
	{
		func_170("TAXI_ASSETS_STREAMED - Loading U_M_M_JewelThief", &iLocal_262, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MOVE_P_M_ZERO_RUCKSACK"))
	{
		func_170("TAXI_ASSETS_STREAMED - Loading MOVE_P_M_ZERO_RUCKSACK", &iLocal_262, 1000);
		return 0;
	}
	return 1;
}

int func_268(int iParam0, bool bParam1)
{
	if (!STREAMING::HAS_MODEL_LOADED(func_21()))
	{
		func_170("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED("gestures@m@standing@casual"))
		{
			func_170("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@taxi@"))
	{
		func_170("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@towingcome_here"))
	{
		func_170("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("misscommon@response"))
	{
		func_170("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!UI::HAS_ADDITIONAL_TEXT_LOADED(2))
	{
		func_170("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_269(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			uParam0->f_123 = "TRS_STREAMING";
			break;
		
		case 2:
			uParam0->f_123 = " TRS_FINDING_LOCATION ";
			break;
		
		case 3:
			uParam0->f_123 = " TRS_SPAWNING ";
			break;
		
		case 4:
			uParam0->f_123 = " TRS_SPAWN_CAR ";
			break;
		
		case 5:
			uParam0->f_123 = " TRS_MANAGE_PICKUP ";
			break;
		
		case 6:
			uParam0->f_123 = " TRS_PASSENGER_ENTER ";
			break;
		
		case 7:
			uParam0->f_123 = " TRS_WAIT_FOR_TIME ";
			break;
		
		case 8:
			uParam0->f_123 = " TRS_WAIT_FOR_TAIL ";
			break;
		
		case 9:
			uParam0->f_123 = " TRS_DRIVING_PASSENGER ";
			break;
		
		case 10:
			uParam0->f_123 = " TRS_WAIT_FOR_FULL_STOP ";
			break;
		
		case 18:
			uParam0->f_123 = " TRS_PRE_CUTSCENE ";
			break;
		
		case 11:
			uParam0->f_123 = " TRS_SWITCH_JOB ";
			break;
		
		case 19:
			uParam0->f_123 = " TRS_CUTSCENE ";
			break;
		
		case 20:
			uParam0->f_123 = " TRS_CUTSCENE_02 ";
			break;
		
		case 13:
			uParam0->f_123 = " TRS_CHASE_DRIVER ";
			break;
		
		case 12:
			uParam0->f_123 = " TRS_SAVE_DAMSEL ";
			break;
		
		case 14:
			uParam0->f_123 = " TRS_REVEAL_DESTINATION ";
			break;
		
		case 15:
			uParam0->f_123 = " TRS_WAIT_PARK ";
			break;
		
		case 16:
			uParam0->f_123 = " TRS_SEND_TO_STORE ";
			break;
		
		case 17:
			uParam0->f_123 = " TRS_WAIT_1ST_STOP ";
			break;
		
		case 22:
			uParam0->f_123 = " TRS_DROPPING_OFF ";
			break;
		
		case 25:
			uParam0->f_123 = " TRS_ESCAPE_POLICE ";
			break;
		
		case 26:
			uParam0->f_123 = " TRS_POLICE_ESCAPED ";
			break;
		
		case 24:
			uParam0->f_123 = " TRS_TIE_UP_LOSE_ENDS ";
			break;
		
		case 27:
			uParam0->f_123 = " TRS_REGULAR_PAYMENT ";
			break;
		
		case 23:
			uParam0->f_123 = " TRS_ELIMATE_ALL_ENEMIES ";
			break;
		
		case 28:
			uParam0->f_123 = " TRS_SPECIAL_ENDING ";
			break;
		
		case 29:
			uParam0->f_123 = " TRS_SCORECARD_GRADE ";
			break;
		
		case 30:
			uParam0->f_123 = " TRS_CLEANUP ";
			break;
		
		case 21:
			uParam0->f_123 = " TRS_WAIT_FOR_PASSENGER ";
			break;
		
		default:
			uParam0->f_123 = " TRS IS UNIDENTIFIED - FIX THIS ";
			break;
	}
	uParam0->f_410 = iParam1;
}

int func_270(var uParam0)
{
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		uParam0->f_8 = func_271(uParam0->f_3, 0, 0);
		UI::SET_GPS_FLAGS(1, 0f);
		UI::SET_BLIP_ROUTE(uParam0->f_8, true);
		UI::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_8, "TAXI_BLIP_PASS");
		AI::TASK_LOOK_AT_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
	}
	return 1;
}

int func_271(int iParam0, bool bParam1, bool bParam2)
{
	return func_152(iParam0, !bParam1, bParam2);
}

int func_272(var uParam0, vector3 vParam1, vector3 vParam2, char* sParam3, int iParam4, float fParam5, float fParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		func_273(uParam0, uParam0->f_14);
		uParam0->f_11 = { vParam1 };
		uParam0->f_14 = { vParam2 };
		func_36(uParam0->f_14, 0);
		GAMEPLAY::CLEAR_AREA_OF_PEDS(uParam0->f_14, 2f, 0);
		func_204(uParam0->f_14, 0, fParam6);
		if (iParam4 == 0)
		{
			uParam0->f_3 = PED::CREATE_RANDOM_PED(uParam0->f_11);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Global_104780.f_225[0]))
		{
			uParam0->f_3 = Global_104780.f_225[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_3, true, 1);
		}
		else
		{
			uParam0->f_3 = PED::CREATE_PED(26, iParam4, uParam0->f_11, fParam5, 1, true);
		}
		func_7(&(uParam0->f_244), 3, uParam0->f_3, sParam3, 0, 1);
		AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_3, sParam3);
		PED::SET_PED_RESET_FLAG(uParam0->f_3, 112, true);
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			ENTITY::SET_ENTITY_LOD_DIST(uParam0->f_3, 250);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 32, false);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 104, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 177, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 116, false);
			PED::ADD_RELATIONSHIP_GROUP("TAXI_Passenger", &(uParam0->f_413));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, uParam0->f_413, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, uParam0->f_413, -1533126372);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

void func_273(var uParam0, vector3 vParam1)
{
	uParam0->f_51[0] = VEHICLE::_0x2CE544C68FB812A0(vParam1, 20f, 5f, 0);
}

int func_274(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("u_m_m_jewelthief");
			break;
		
		case 1:
			iVar0 = joaat("manana");
			break;
		
		case 2:
			iVar0 = joaat("issi2");
			break;
		
		case 3:
			iVar0 = joaat("s_m_y_cop_01");
			break;
		
		case 4:
			iVar0 = joaat("police2");
			break;
		
		default:
			iVar0 = joaat("u_m_m_jewelthief");
			break;
	}
	return iVar0;
}

void func_275(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_98(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_97(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_98(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_97(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_276()
{
	func_278(1);
	STREAMING::REQUEST_MODEL(func_274(0));
	iLocal_313 = func_277();
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Alarms", false, -1);
	STREAMING::REQUEST_ANIM_DICT("MOVE_P_M_ZERO_RUCKSACK");
}

int func_277()
{
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
}

void func_278(bool bParam0)
{
	STREAMING::REQUEST_MODEL(func_21());
	if (bParam0)
	{
		STREAMING::REQUEST_ANIM_DICT("gestures@m@standing@casual");
	}
	STREAMING::REQUEST_ANIM_DICT("oddjobs@taxi@");
	STREAMING::REQUEST_ANIM_DICT("oddjobs@towingcome_here");
	STREAMING::REQUEST_ANIM_DICT("misscommon@response");
	UI::REQUEST_ADDITIONAL_TEXT("TAXI", 2);
	if (!func_198(Global_106070.f_19069, 128))
	{
		func_173(&(Global_106070.f_19069), 128);
	}
}

void func_279(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

int func_280(var uParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			if (func_134(uParam0, 14))
			{
				func_200(uParam0);
			}
			func_148(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_281(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4577, 26))
		{
			return;
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(iParam2);
		GRAPHICS::_STOP_SCREEN_EFFECT("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			GRAPHICS::_START_SCREEN_EFFECT("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (GAMEPLAY::IS_STRING_NULL(sVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!GAMEPLAY::IS_STRING_NULL(uParam0->f_3))
	{
		if (func_241(uParam0->f_3))
		{
			UI::CLEAR_HELP(1);
		}
	}
	if (!GAMEPLAY::IS_STRING_NULL(sVar0))
	{
		if (func_241(sVar0))
		{
			UI::CLEAR_HELP(1);
		}
	}
}

void func_282(var uParam0, vector3 vParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (GAMEPLAY::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = iParam2;
	if (GAMEPLAY::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_241(iVar0))
	{
		func_294();
	}
	if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (func_289(uParam0, bParam4, bParam6, 0))
		{
			func_288(uParam0, vParam1, iParam3);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_287(iVar0))
			{
				if ((GAMEPLAY::IS_STRING_NULL(uParam0->f_3) && !GAMEPLAY::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if ((CAM::IS_SPHERE_VISIBLE(vParam1, 1f) && !UI::IS_HELP_MESSAGE_BEING_DISPLAYED()) && iParam5)
					{
						if (!func_241(iVar0))
						{
							func_279(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (GAMEPLAY::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_286(1);
							}
						}
					}
				}
			}
		}
		else if (func_287(iVar0))
		{
			if (GAMEPLAY::IS_STRING_NULL(uParam0->f_3) && !GAMEPLAY::IS_STRING_NULL(iVar0))
			{
				if ((CAM::IS_SPHERE_VISIBLE(vParam1, 1f) && !UI::IS_HELP_MESSAGE_BEING_DISPLAYED()) && iParam5)
				{
					if (!func_241(iVar0))
					{
						func_279(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (GAMEPLAY::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
						{
							func_286(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!GAMEPLAY::IS_STRING_NULL(iVar0))
		{
			if (func_241(iVar0) && UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				UI::CLEAR_HELP(1);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(3) == 3 || CAM::_0xEE778F8C7E1142E2(3) == 4)
				{
					func_281(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(6) == 3 || CAM::_0xEE778F8C7E1142E2(6) == 4)
				{
					func_281(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(4) == 3 || CAM::_0xEE778F8C7E1142E2(4) == 4)
				{
					func_281(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(5) == 3 || CAM::_0xEE778F8C7E1142E2(5) == 4)
				{
					func_281(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(2) == 3 || CAM::_0xEE778F8C7E1142E2(2) == 4)
				{
					func_281(uParam0, iVar0, 1);
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				func_281(uParam0, iVar0, 1);
			}
		}
		if (!func_289(uParam0, bParam4, bParam6, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_285(uParam0))
			{
				func_283(uParam0);
			}
		}
	}
}

void func_283(var uParam0)
{
	if (func_284(PLAYER::PLAYER_PED_ID()))
	{
		AI::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		CAM::STOP_GAMEPLAY_HINT(0);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::_STOP_SCREEN_EFFECT("FocusIn");
		if (uParam0->f_11)
		{
			GRAPHICS::_START_SCREEN_EFFECT("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_284(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_285(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > GAMEPLAY::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	return 0;
}

int func_286(bool bParam0)
{
	switch (Global_36117)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_106070.f_10021.f_100++;
			}
			return Global_106070.f_10021.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_106070.f_10021.f_101++;
			}
			return Global_106070.f_10021.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_106070.f_10021.f_102++;
			}
			return Global_106070.f_10021.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_287(char* sParam0)
{
	if (!func_295(1, 1, 0))
	{
		if ((!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0) && func_241(sParam0)) || func_241("CMN_HINT"))
		{
			UI::CLEAR_HELP(1);
		}
		return 0;
	}
	switch (Global_36117)
	{
		case 0:
		case 3:
			if (func_286(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_286(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_286(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

void func_288(var uParam0, vector3 vParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	iVar0 = uParam0->f_9;
	iVar1 = uParam0->f_10;
	if (iParam2 == 1726668277)
	{
		if (iVar0 < 1500)
		{
			iVar0 = 1500;
		}
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_COORD_HINT(vParam1, -1, iVar0, iVar1, iParam2);
	iVar2 = 2048;
	iVar3 = 3;
	AI::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), vParam1, -1, iVar2, iVar3);
	GRAPHICS::_START_SCREEN_EFFECT("FocusIn", 0, 0);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = GAMEPLAY::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_289(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (GAMEPLAY::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (func_293(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_292(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_292(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_293(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_285(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((GAMEPLAY::GET_GAME_TIMER() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (!func_293(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_292(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_292(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_293(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (!func_293(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_292(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_292(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || AI::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_293(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((GAMEPLAY::GET_GAME_TIMER() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (func_291(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_290(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || func_290(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || AI::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_291(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_285(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_295(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_294();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_290(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_295(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_291(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_295(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_292(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_295(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 80) && GAMEPLAY::GET_GAME_TIMER() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_293(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_295(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 80) && GAMEPLAY::GET_GAME_TIMER() > Global_116)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

void func_294()
{
	GAMEPLAY::SET_BIT(&Global_2384, 4);
}

int func_295(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (func_42(0))
	{
		return 0;
	}
	if (func_304())
	{
		return 0;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return 0;
	}
	if (Global_68494)
	{
		return 0;
	}
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53362)
	{
		return 0;
	}
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(3) == 3 || CAM::_0xEE778F8C7E1142E2(3) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(6) == 3 || CAM::_0xEE778F8C7E1142E2(6) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(4) == 3 || CAM::_0xEE778F8C7E1142E2(4) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(5) == 3 || CAM::_0xEE778F8C7E1142E2(5) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(2) == 3 || CAM::_0xEE778F8C7E1142E2(2) == 4)
				{
					return 0;
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				return 0;
			}
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
			{
				return 0;
			}
		}
	}
	if ((func_303() || func_302(Global_4456448.f_152990)) || func_301())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			iVar1 = func_300(PLAYER::PLAYER_PED_ID(), 0);
			if (((VEHICLE::_0xE33FFA906CE74880(iVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(iVar0) == 562680400 && iVar1 != -1)) || (ENTITY::GET_ENTITY_MODEL(iVar0) == 1181327175 && iVar1 != -1)) || (((ENTITY::GET_ENTITY_MODEL(iVar0) == -1693015116 && iVar1 == 0) && func_299(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (func_296(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_296(int iParam0)
{
	if (iParam0 != func_298())
	{
		if (func_297(iParam0, 1, 1))
		{
			return Global_2423801[iParam0 /*413*/].f_309.f_4 != -1;
		}
		else if ((Global_1312857 && iParam0 == PLAYER::PLAYER_ID()) && func_297(iParam0, 1, 0))
		{
			return Global_2423801[iParam0 /*413*/].f_309.f_4 != -1;
		}
	}
	return 0;
}

int func_297(int iParam0, bool bParam1, bool bParam2)
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

int func_298()
{
	return -1;
}

int func_299(int iParam0, int iParam1)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_300(int iParam0, int iParam1)
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

var func_301()
{
	return Global_2448386.f_16;
}

bool func_302(int iParam0)
{
	return iParam0 == 51;
}

var func_303()
{
	return Global_2448386.f_15;
}

bool func_304()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_17367.f_5873 + 100;
}

int func_305(var uParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, 0) == PLAYER::PLAYER_PED_ID())
		{
			return 1;
		}
	}
	return 0;
}

void func_306(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (bParam2)
			{
				if (func_145(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_207(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_207(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_275(uParam0, 10, 0f, 1);
				}
			}
			else if (func_145(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_207(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_207(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_275(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_145(uParam0, 10) > 30f)
		{
			if (!func_127())
			{
				if (uParam0->f_112)
				{
					func_207(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_207(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_275(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_198(uParam0->f_100, 64))
	{
		if (!func_16(&(Local_162[5 /*10*/].f_6)))
		{
			func_146(&(Local_162[5 /*10*/].f_6));
		}
		else if (func_95(&(Local_162[5 /*10*/].f_6)) > 6f)
		{
			if (func_328(uParam0))
			{
				if (uParam0->f_113)
				{
					func_207(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_207(uParam0, Local_162[5 /*10*/].f_9, 1, 0, 0);
				}
				func_327(uParam0, 1);
				func_325(5, uParam0);
				func_136(uParam0);
			}
		}
	}
	if (func_198(uParam0->f_100, 1))
	{
		if (!func_16(&(Local_162[0 /*10*/].f_6)))
		{
			func_146(&(Local_162[0 /*10*/].f_6));
		}
		else if (func_95(&(Local_162[0 /*10*/].f_6)) > 5f)
		{
			if (func_324(uParam0))
			{
				func_327(uParam0, 1);
				func_325(0, uParam0);
				if (uParam0->f_113)
				{
					func_207(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_207(uParam0, Local_162[0 /*10*/].f_9, 1, 0, 0);
				}
				func_136(uParam0);
			}
		}
	}
	if (func_198(uParam0->f_100, 2))
	{
		if (!func_16(&(Local_162[1 /*10*/].f_6)))
		{
			func_146(&(Local_162[1 /*10*/].f_6));
		}
		else if (func_95(&(Local_162[1 /*10*/].f_6)) > 5f)
		{
			if (func_323(uParam0))
			{
				func_327(uParam0, 1);
				func_325(1, uParam0);
				if (uParam0->f_113)
				{
					func_207(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_207(uParam0, Local_162[1 /*10*/].f_9, 1, 0, 0);
				}
				func_136(uParam0);
			}
		}
	}
	if (func_198(uParam0->f_100, 2048))
	{
		if (!func_16(&(Local_162[8 /*10*/].f_6)))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
			{
				uParam0->f_46 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_4);
				func_146(&(Local_162[8 /*10*/].f_6));
			}
		}
		else if (func_95(&(Local_162[8 /*10*/].f_6)) > 7f || Local_162[8 /*10*/].f_1 == 0)
		{
			if (func_322(uParam0))
			{
				func_327(uParam0, 1);
				func_325(8, uParam0);
				func_136(uParam0);
			}
		}
	}
	if (func_198(uParam0->f_100, 128))
	{
		if (!func_16(&(Local_162[6 /*10*/].f_6)))
		{
			func_146(&(Local_162[6 /*10*/].f_6));
		}
		else if (func_95(&(Local_162[6 /*10*/].f_6)) > 5f)
		{
			if (func_321(uParam0))
			{
				func_327(uParam0, 1);
				func_325(6, uParam0);
				if (uParam0->f_113)
				{
					func_207(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_207(uParam0, Local_162[6 /*10*/].f_9, 1, 0, 0);
				}
				func_136(uParam0);
			}
		}
	}
	if (func_198(uParam0->f_100, 32))
	{
		if (!func_16(&(Local_162[4 /*10*/].f_6)))
		{
			func_146(&(Local_162[4 /*10*/].f_6));
		}
		else if (func_95(&(Local_162[4 /*10*/].f_6)) > 4f)
		{
			if (func_320(uParam0))
			{
				func_327(uParam0, 1);
				func_325(4, uParam0);
				if (uParam0->f_113)
				{
					func_207(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_207(uParam0, Local_162[4 /*10*/].f_9, 1, 0, 0);
				}
				func_136(uParam0);
			}
		}
	}
	if (func_198(uParam0->f_100, 256))
	{
		if (!func_16(&(Local_162[7 /*10*/].f_6)))
		{
			func_146(&(Local_162[7 /*10*/].f_6));
		}
		else if (func_95(&(Local_162[7 /*10*/].f_6)) > 5f || Local_162[7 /*10*/].f_1 == 0)
		{
			if (func_319(uParam0))
			{
				func_325(7, uParam0);
				func_327(uParam0, 1);
				if (uParam0->f_113)
				{
					func_207(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_207(uParam0, Local_162[7 /*10*/].f_9, 1, 0, 1);
				}
				func_136(uParam0);
			}
		}
	}
	if (func_198(uParam0->f_100, 8))
	{
		if (!func_16(&(Local_162[9 /*10*/].f_6)))
		{
			func_146(&(Local_162[9 /*10*/].f_6));
		}
		else if (func_95(&(Local_162[9 /*10*/].f_6)) <= 7f)
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
		}
		else if (func_95(&(Local_162[9 /*10*/].f_6)) > 7f || Local_162[9 /*10*/].f_1 == 0)
		{
			if (func_318(uParam0))
			{
				func_327(uParam0, 1);
				func_325(9, uParam0);
				if (uParam0->f_113)
				{
					func_207(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_207(uParam0, Local_162[9 /*10*/].f_9, 1, 0, 1);
				}
				func_136(uParam0);
			}
		}
	}
	if (func_198(uParam0->f_100, 16384))
	{
		if (!func_16(&(Local_162[13 /*10*/].f_6)))
		{
			func_146(&(Local_162[13 /*10*/].f_6));
		}
		else if (func_95(&(Local_162[13 /*10*/].f_6)) > 10f)
		{
			if (func_312(uParam0))
			{
				func_327(uParam0, 1);
				func_325(13, uParam0);
				if (uParam0->f_113)
				{
					func_207(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_207(uParam0, Local_162[13 /*10*/].f_9, 1, 0, 0);
				}
				func_136(uParam0);
			}
		}
	}
	if (func_198(uParam0->f_100, 32768))
	{
		if (!func_16(&(Local_162[14 /*10*/].f_6)))
		{
			func_146(&(Local_162[14 /*10*/].f_6));
		}
		else if (func_95(&(Local_162[14 /*10*/].f_6)) > 7f)
		{
			if (func_311(uParam0))
			{
				func_327(uParam0, 1);
				func_325(14, uParam0);
				if (uParam0->f_113)
				{
					func_207(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_207(uParam0, Local_162[14 /*10*/].f_9, 1, 0, 0);
				}
				func_136(uParam0);
			}
		}
	}
	if (func_198(uParam0->f_100, 4096))
	{
		if (!func_16(&(Local_162[11 /*10*/].f_6)))
		{
			func_146(&(Local_162[11 /*10*/].f_6));
		}
		else if (func_95(&(Local_162[11 /*10*/].f_6)) > 8f)
		{
			if (func_310(uParam0))
			{
				func_327(uParam0, 1);
				func_325(11, uParam0);
				if (uParam0->f_113)
				{
					func_207(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_207(uParam0, Local_162[11 /*10*/].f_9, 1, 0, 0);
				}
				func_136(uParam0);
			}
		}
	}
	if (func_198(uParam0->f_100, 8192))
	{
		if (!func_16(&(Local_162[12 /*10*/].f_6)))
		{
			func_146(&(Local_162[12 /*10*/].f_6));
		}
		else if (func_95(&(Local_162[12 /*10*/].f_6)) > 5f)
		{
			if (func_309(uParam0))
			{
				func_327(uParam0, 1);
				func_325(12, uParam0);
				if (uParam0->f_113)
				{
					func_207(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_207(uParam0, Local_162[12 /*10*/].f_9, 1, 0, 0);
				}
				func_136(uParam0);
			}
		}
	}
	if (func_198(uParam0->f_100, 4))
	{
		if (!func_16(&(Local_162[2 /*10*/].f_6)))
		{
			func_308(&(Local_162[2 /*10*/].f_6), 0f);
		}
		else if (func_95(&(Local_162[2 /*10*/].f_6)) > 5f)
		{
			if (func_307(uParam0))
			{
				if (uParam0->f_113)
				{
					func_207(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_207(uParam0, Local_162[2 /*10*/].f_9, 1, 0, 0);
				}
				func_327(uParam0, 1);
				func_325(2, uParam0);
				func_136(uParam0);
			}
		}
	}
}

int func_307(var uParam0)
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(uParam0->f_2))
	{
		if ((!PED::IS_PED_STOPPED(uParam0->f_2) && !func_16(&(Local_162[0 /*10*/].f_3))) && !func_16(&(Local_162[1 /*10*/].f_3)))
		{
			if (!func_16(&(Local_162[2 /*10*/].f_3)))
			{
				uParam0->f_37 = ENTITY::GET_ENTITY_SPEED(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_146(&(Local_162[2 /*10*/].f_3));
				}
			}
			else if (func_95(&(Local_162[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = ENTITY::GET_ENTITY_SPEED(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_94(&(Local_162[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_94(&(Local_162[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_308(int iParam0, float fParam1)
{
	if (!func_16(iParam0))
	{
		func_98(iParam0, fParam1);
	}
}

int func_309(var uParam0)
{
	vector3 vVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, 1) };
		if (vVar0.y < -10f && !func_16(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_162[12 /*10*/].f_3)))
			{
				func_146(&(Local_162[12 /*10*/].f_3));
			}
			else if (func_95(&(Local_162[12 /*10*/].f_3)) > 5f)
			{
				func_94(&(Local_162[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_94(&(Local_162[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_310(var uParam0)
{
	vector3 vVar0;
	
	if ((((((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0) && !func_16(&(Local_162[0 /*10*/].f_3))) && !func_16(&(Local_162[1 /*10*/].f_3))) && !func_16(&(Local_162[5 /*10*/].f_3))) && !func_16(&(Local_162[9 /*10*/].f_3))) && !func_16(&(Local_162[7 /*10*/].f_3))) && !func_16(&(Local_162[8 /*10*/].f_3)))
	{
		vVar0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, 1) };
		if (GAMEPLAY::ABSF(vVar0.x) > 2.5f && !func_16(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_162[11 /*10*/].f_3)))
			{
				func_146(&(Local_162[11 /*10*/].f_3));
				fLocal_164 = vVar0.x;
			}
			else if (func_95(&(Local_162[11 /*10*/].f_3)) < 1.5f && (GAMEPLAY::ABSF(fLocal_164) - GAMEPLAY::ABSF(vVar0.x)) < 0f)
			{
				func_94(&(Local_162[11 /*10*/].f_3));
				return 1;
			}
			else if (func_95(&(Local_162[11 /*10*/].f_3)) >= 1.5f)
			{
				func_94(&(Local_162[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_311(var uParam0)
{
	if (((((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0) && !func_16(&(Local_162[0 /*10*/].f_3))) && !func_16(&(Local_162[8 /*10*/].f_3))) && !func_16(&(Local_162[5 /*10*/].f_3))) && !func_16(&(Local_162[9 /*10*/].f_3))) && !func_16(&(Local_162[7 /*10*/].f_3)))
	{
		if (!func_16(&(Local_162[14 /*10*/].f_3)))
		{
			uParam0->f_5 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, true), 10f, 0, 260);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
			{
				if ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 15f && func_162(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5, 0) && !VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_5, -1, 0)))
				{
					func_146(&(Local_162[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_95(&(Local_162[14 /*10*/].f_3)) < 1.5f && func_162(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_5))
		{
			func_94(&(Local_162[14 /*10*/].f_3));
			return 1;
		}
		else if (func_95(&(Local_162[14 /*10*/].f_3)) >= 1.5f)
		{
			func_94(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_5))
		{
			func_94(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_312(var uParam0)
{
	if (((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0) && !func_16(&(Local_162[9 /*10*/].f_3))) && !func_16(&(Local_162[7 /*10*/].f_3))) && !func_16(&(Local_162[4 /*10*/].f_3)))
	{
		if (!func_313(uParam0->f_4) && ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 15f)
		{
			if (!func_16(&(Local_162[13 /*10*/].f_3)))
			{
				func_146(&(Local_162[13 /*10*/].f_3));
			}
			else if (func_95(&(Local_162[13 /*10*/].f_3)) > 5f)
			{
				func_94(&(Local_162[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_94(&(Local_162[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_313(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	float fVar9;
	
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iParam0, true), 1, &vVar0, 1, 3f, 0f);
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(iParam0, true), 2, &vVar1, 1, 3f, 0f);
	PATHFIND::_0x16F46FB18C8009E4(vVar0, -1, &vVar2);
	fVar9 = SYSTEM::VMAG(vVar2 - vVar0);
	vVar3 = { func_317((vVar1.x - vVar0.x), (vVar1.y - vVar0.y), 0f) };
	vVar4 = { func_316(vVar3, 0) * Vector(fVar9, fVar9, fVar9) };
	vVar3 = { vVar3 * Vector(2f, 2f, 2f) };
	vVar5 = { vVar0 - vVar3 + vVar4 };
	vVar6 = { vVar0 - vVar3 - vVar4 };
	vVar7 = { vVar1 + vVar3 + vVar4 };
	vVar8 = { vVar1 + vVar3 - vVar4 };
	vVar8 = { vVar8 };
	return func_314(ENTITY::GET_ENTITY_COORDS(iParam0, true), vVar5, vVar6, vVar7);
}

int func_314(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	
	vParam0.z = 0f;
	vParam1.z = 0f;
	vParam2.z = 0f;
	vParam3.z = 0f;
	vVar0 = { func_317(vParam2 - vParam1) };
	vVar1 = { func_317(vParam3 - vParam1) };
	fVar2 = func_315(vParam0, vVar0);
	fVar3 = func_315(vParam1, vVar0);
	fVar4 = func_315(vParam2, vVar0);
	fVar5 = func_315(vParam0, vVar1);
	fVar6 = func_315(vParam1, vVar1);
	fVar7 = func_315(vParam3, vVar1);
	if (fVar3 > fVar4)
	{
		fVar8 = fVar3;
		fVar3 = fVar4;
		fVar4 = fVar8;
	}
	if (fVar2 < fVar3 || fVar2 > fVar4)
	{
		return 0;
	}
	if (fVar6 > fVar7)
	{
		fVar9 = fVar6;
		fVar6 = fVar7;
		fVar7 = fVar9;
	}
	if (fVar5 < fVar6 || fVar5 > fVar7)
	{
		return 0;
	}
	return 1;
}

float func_315(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_316(vector3 vParam0, int iParam1)
{
	vector3 vVar0;
	
	switch (iParam1)
	{
		case 0:
			vVar0.x = -vParam0.y;
			vVar0.y = vParam0.x;
			break;
		
		case 1:
			vVar0.x = -vParam0.x;
			vVar0.y = -vParam0.y;
			break;
		
		case 2:
			vVar0.x = vParam0.y;
			vVar0.y = -vParam0.x;
			break;
	}
	vVar0.z = vParam0.z;
	return vVar0;
}

Vector3 func_317(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

int func_318(var uParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, 0) == PLAYER::PLAYER_PED_ID())
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_319(var uParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, 0) == PLAYER::PLAYER_PED_ID())
		{
			if (ENTITY::IS_ENTITY_UPSIDEDOWN(uParam0->f_4))
			{
				if (!iLocal_163)
				{
					if (ENTITY::GET_ENTITY_ROLL(uParam0->f_4) <= -145f || ENTITY::GET_ENTITY_ROLL(uParam0->f_4) >= 145f)
					{
						iLocal_163 = 1;
					}
				}
			}
			else if (iLocal_163)
			{
				if (ENTITY::GET_ENTITY_ROLL(uParam0->f_4) <= 35f && ENTITY::GET_ENTITY_ROLL(uParam0->f_4) >= -35f)
				{
					iLocal_163 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_320(var uParam0)
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(PLAYER::PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!func_16(&(Local_162[4 /*10*/].f_3)))
			{
				func_146(&(Local_162[4 /*10*/].f_3));
			}
			else if (func_95(&(Local_162[4 /*10*/].f_3)) > 2f)
			{
				func_94(&(Local_162[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_94(&(Local_162[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_321(var uParam0)
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(PLAYER::PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!func_16(&(Local_162[6 /*10*/].f_3)))
			{
				func_146(&(Local_162[6 /*10*/].f_3));
			}
			else if (func_95(&(Local_162[6 /*10*/].f_3)) > 3.5f)
			{
				func_94(&(Local_162[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_94(&(Local_162[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_322(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(uParam0->f_4))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_207(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_207(uParam0, 72, 1, 0, 1);
				}
				func_94(&(Local_162[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_323(var uParam0)
{
	vector3 vVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, 1) };
		if (GAMEPLAY::ABSF(vVar0.x) > 3f && !func_16(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_162[1 /*10*/].f_3)))
			{
				func_146(&(Local_162[1 /*10*/].f_3));
			}
			else if (func_95(&(Local_162[1 /*10*/].f_3)) > 1.2f)
			{
				func_94(&(Local_162[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_94(&(Local_162[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_324(var uParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4) && ENTITY::IS_ENTITY_IN_AIR(uParam0->f_4))
		{
			if (!func_16(&(Local_162[0 /*10*/].f_3)))
			{
				func_146(&(Local_162[0 /*10*/].f_3));
			}
			else if (func_95(&(Local_162[0 /*10*/].f_3)) > 0.7f)
			{
				func_94(&(Local_162[0 /*10*/].f_3));
				func_97(&(Local_162[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_94(&(Local_162[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_325(int iParam0, var uParam1)
{
	Local_162[iParam0 /*10*/].f_1++;
	func_326(uParam1, iParam0);
	func_94(&(Local_162[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_326(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_162[iParam1 /*10*/]);
}

void func_327(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_328(var uParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 25f)
		{
			if (!func_16(&(Local_162[5 /*10*/].f_3)))
			{
				func_146(&(Local_162[5 /*10*/].f_3));
			}
			else if (func_95(&(Local_162[5 /*10*/].f_3)) > 3.5f)
			{
				func_94(&(Local_162[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_94(&(Local_162[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_329(var uParam0, char* sParam1, int iParam2)
{
	vector3 vVar0;
	
	func_125();
	func_434(2);
	vVar0 = { func_117() };
	if ((!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&vVar0) && func_127()) && !GAMEPLAY::ARE_STRINGS_EQUAL(&vVar0, "NULL"))
	{
	}
	else
	{
		UI::CLEAR_PRINTS();
		UI::CLEAR_HELP(1);
		StringCopy(&vVar0, uParam0->f_143, 24);
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, 0))
		{
			if (!func_196(uParam0))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					AI::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					AI::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					AI::STOP_ANIM_TASK(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
				}
			}
		}
		uParam0->f_109 = 1;
		uParam0->f_121 = sParam1;
		uParam0->f_415 = iParam2;
		func_275(uParam0, 3, 0, 0);
		if (iParam2 == 8 || iParam2 == 18)
		{
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_aband2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aband1", 24);
				}
				func_342(uParam0, &vVar0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_231(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 10)
		{
			if (uParam0->f_115)
			{
				StringConCat(&vVar0, "_aggro2", 24);
			}
			else
			{
				StringConCat(&vVar0, "_aggro", 24);
			}
			func_342(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&vVar0, "_lost1", 24);
			func_342(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&vVar0, "_spotd1", 24);
			func_342(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&vVar0, "_wntd1", 24);
			func_342(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&vVar0, "_spook", 24);
			func_342(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_196(uParam0))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
				{
					func_340(uParam0, 4096, 0);
				}
				else
				{
					func_340(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&vVar0, "_hit2", 24);
			func_342(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&vVar0, "_jak", 24);
			func_342(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 14)
		{
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_shot2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_shot1", 24);
				}
				func_342(uParam0, &vVar0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_231(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_342(uParam0, &vVar0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_342(uParam0, &vVar0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_142(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_342(uParam0, &vVar0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_231(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_340(uParam0, 0, 0);
			func_342(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_142(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_342(uParam0, &vVar0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_231(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_342(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_142(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_342(uParam0, &vVar0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_231(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&vVar0, "OJTX_QUIT_", 24);
			func_339(&vVar0);
			func_330(&(uParam0->f_244), "OJTXAUD", &vVar0, 7, 0, 0, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_CNCL", 24);
		}
		else if (iParam2 == 20)
		{
			if (uParam0->f_115)
			{
				StringConCat(&vVar0, "_aband2", 24);
			}
			else
			{
				StringConCat(&vVar0, "_fail1", 24);
			}
			func_342(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else
		{
			if (uParam0->f_411 != 9)
			{
				if (iParam2 != 21)
				{
					StringConCat(&vVar0, "_Fail1", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aband1", 24);
				}
				if (uParam0->f_410 > 5)
				{
					func_342(uParam0, &vVar0);
				}
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				func_231(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_142(3, 0);
		}
		func_275(uParam0, 3, 0f, 1);
	}
}

int func_330(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_338(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15829 = 0;
	Global_15831 = 0;
	Global_15836 = 0;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_16819 = 0;
	Global_2621441 = 0;
	return func_331(sParam2, iParam3, 0);
}

int func_331(char* sParam0, int iParam1, bool bParam2)
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
					func_126();
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
		if (func_337(8, -1))
		{
			return 0;
		}
		Global_15898 = { Global_15892 };
		func_336();
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
				func_335();
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
				if (func_334())
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
			if (func_30())
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
			func_333();
			Global_15832 = bParam2;
		}
		Global_15824 = iParam1;
		StringCopy(&Global_15441, sParam0, 24);
		Global_14688 = 0;
		func_332();
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
		func_126();
	}
	return 0;
}

void func_332()
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

void func_333()
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

int func_334()
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

void func_335()
{
	if (func_72(14))
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
		Global_14513 = func_91();
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

void func_336()
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

bool func_337(int iParam0, int iParam1)
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

void func_338(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15276 = { *uParam0 };
	Global_1699 = iParam1;
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

void func_339(char* sParam0)
{
	switch (func_3(PLAYER::PLAYER_PED_ID()))
	{
		case 0:
			StringConCat(sParam0, "M", 24);
			break;
		
		case 2:
			StringConCat(sParam0, "T", 24);
			break;
		
		case 1:
			StringConCat(sParam0, "F", 24);
			break;
		
		default:
			StringConCat(sParam0, "M", 24);
			break;
	}
}

void func_340(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, 0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, false);
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_3);
		PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 3, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 17, true);
		AI::CLEAR_PED_TASKS(uParam0->f_3);
		if ((func_195(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_106(uParam0->f_29)) && !bParam2)
		{
			func_341(uParam0);
		}
		else
		{
			PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 1024, true);
			PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 131072, true);
			AI::OPEN_SEQUENCE_TASK(&iVar0);
			AI::TASK_LEAVE_ANY_VEHICLE(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				AI::TASK_WANDER_STANDARD(0, 1193033728, 0);
			}
			else
			{
				AI::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
			}
			AI::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
			AI::CLOSE_SEQUENCE_TASK(iVar0);
			AI::TASK_PERFORM_SEQUENCE(uParam0->f_3, iVar0);
			AI::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		PED::SET_PED_KEEP_TASK(uParam0->f_3, true);
	}
}

void func_341(var uParam0)
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, 0))
	{
		if (func_38(func_39(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				ENTITY::SET_ENTITY_HEADING(uParam0->f_3, 84.9058f);
				PED::SET_PED_KEEP_TASK(uParam0->f_3, true);
			}
			else if (uParam0->f_411 == 4)
			{
				ENTITY::SET_ENTITY_HEADING(uParam0->f_3, 68.3138f);
				PED::SET_PED_KEEP_TASK(uParam0->f_3, true);
			}
			else
			{
				AI::TASK_WANDER_STANDARD(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			AI::CLEAR_PED_TASKS(uParam0->f_3);
			AI::CLEAR_SEQUENCE_TASK(&iVar0);
			AI::OPEN_SEQUENCE_TASK(&iVar0);
			AI::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			AI::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
			AI::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_29, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_411 == 2)
			{
				AI::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_411 == 0)
			{
				AI::TASK_CLIMB_LADDER(0, 1);
				AI::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000, 0, 1193033728);
				AI::TASK_ACHIEVE_HEADING(0, 151.7794f, 0);
				AI::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_411 == 4)
			{
				AI::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				AI::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, uParam0->f_29, 15f, 20000);
				AI::TASK_WANDER_STANDARD(0, 1193033728, 0);
			}
			else
			{
				AI::TASK_PLAY_ANIM(0, "oddjobs@taxi@", "base", 8f, -8f, -1, 0, 0f, 0, 0, 0);
				AI::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_pleased", 8f, -8f, -1, 0, 0f, 0, 0, 0);
			}
			if (AI::DOES_SCENARIO_EXIST_IN_AREA(uParam0->f_29, 15f, 1))
			{
				AI::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				AI::TASK_WANDER_STANDARD(0, 1193033728, 0);
			}
			AI::CLOSE_SEQUENCE_TASK(iVar0);
			AI::TASK_PERFORM_SEQUENCE(uParam0->f_3, iVar0);
			AI::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		PED::SET_PED_KEEP_TASK(uParam0->f_3, true);
	}
}

void func_342(var uParam0, char* sParam1)
{
	if (func_343(uParam0))
	{
		func_330(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_343(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, 0))
	{
		if (func_162(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 1) < 40f && !ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

int func_344(var uParam0)
{
	return uParam0->f_118;
}

void func_345()
{
	func_374(&Local_231);
	if (func_373(&Local_231, &Local_330))
	{
		switch (Local_330.f_27)
		{
			case 0:
				if (Local_231.f_410 == 9)
				{
					if (!func_133(&Local_231))
					{
						if (func_372("TX_OBJ_CYI_DO") || UI::DOES_BLIP_EXIST(Local_231.f_9))
						{
							Local_330.f_27++;
						}
						else if (func_197(&Local_231) != 10)
						{
							func_207(&Local_231, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_197(&Local_231) > 10 && func_197(&Local_231) != 15) && !func_133(&Local_231))
				{
					func_207(&Local_231, 15, 1, 0, 0);
					func_182(&Local_231, 7);
				}
				break;
			
			case 2:
				if (func_145(&Local_231, 18) > 2f)
				{
					func_207(&Local_231, 16, 1, 0, 0);
				}
				break;
			
			case 3:
				if (func_145(&Local_231, 18) > 2f)
				{
					func_207(&Local_231, 17, 1, 0, 0);
				}
				break;
			
			case 5:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					if ((((func_197(&Local_231) != 33 && !func_371(&Local_231)) && !func_133(&Local_231)) && !bLocal_256) && Local_231.f_410 > 9)
					{
						if (func_145(&Local_231, 18) > 2f)
						{
							func_207(&Local_231, 33, 1, 0, 1);
							func_275(&Local_231, 16, 4f, 0);
							if (bLocal_329)
							{
							}
						}
					}
					else
					{
						if (func_197(&Local_231) != 33)
						{
						}
						if (!func_371(&Local_231))
						{
						}
						if (!func_133(&Local_231))
						{
						}
						if (!bLocal_256)
						{
						}
						if (Local_231.f_410 > 9)
						{
						}
					}
				}
				break;
			
			case 6:
				if (((func_145(&Local_231, 16) > 4f && func_197(&Local_231) != 34) && !func_133(&Local_231)) && !func_371(&Local_231))
				{
					func_207(&Local_231, 34, 1, 0, 0);
					if (bLocal_329)
					{
					}
				}
				break;
			
			case 7:
				Local_330.f_27++;
				break;
			}
	}
	func_346(&Local_231, &uLocal_333, &Local_330, bLocal_329);
}

int func_346(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_353(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_134(uParam0, 2))
	{
		if (func_352(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((GAMEPLAY::GET_GAME_TIMER() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_371(uParam0))
				{
					uParam2->f_7 = { func_351(uParam1) };
					func_330(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_127())
				{
					uParam2->f_13 = { func_167() };
					if (GAMEPLAY::ARE_STRINGS_EQUAL(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_174(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_349(uParam1);
					func_275(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_138(uParam0))
				{
					if (func_127())
					{
						func_275(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_348() };
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_127())
				{
					uParam2->f_19 = { func_117() };
				}
				else
				{
					func_174(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_349(uParam1);
					func_275(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_134(uParam0, 14) && !func_127()) && !func_138(uParam0)) && func_145(uParam0, 18) > 1f)
				{
					func_275(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_127())
				{
					if (func_145(uParam0, 18) > 1f)
					{
						if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1)))
						{
							func_347(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_127())
				{
					func_174(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_349(uParam1);
					func_275(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_347(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_338(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15829 = 0;
	Global_15836 = 0;
	Global_15831 = 0;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_16819 = 1;
	StringCopy(&Global_16826, sParam3, 24);
	Global_2621441 = 0;
	return func_331(sParam2, iParam4, 0);
}

struct<6> func_348()
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15822 == 4)
	{
		iVar1 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar1 = (iVar1 + Global_16832);
		iVar2 = iVar1 + 1;
		if (iVar2 > -1 && iVar1 > -1)
		{
			if (UI::DOES_TEXT_LABEL_EXIST(&(Global_14690[iVar2 /*6*/])))
			{
				return Global_14690[iVar2 /*6*/];
			}
			else
			{
				iVar3 = iVar2;
				while (iVar3 < 70)
				{
					if (UI::DOES_TEXT_LABEL_EXIST(&(Global_14690[iVar3 /*6*/])))
					{
						return Global_14690[iVar3 /*6*/];
						iVar3 = 70;
					}
					iVar3++;
				}
				return Var0;
			}
			return Global_14690[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_349(var uParam0)
{
	int iVar0;
	
	iVar0 = func_350(uParam0);
	if (iVar0 > -1)
	{
		func_139(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_139(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_173(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_194(), 24);
	}
}

int func_350(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_198((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_351(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_198((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_173(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_352(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_198((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_353(var uParam0, var uParam1)
{
	vector3 vVar0;
	char cVar1[48];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5[8];
	bool bVar6;
	
	if (func_371(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_134(uParam0, 14))
	{
		StringCopy(&vVar0, uParam0->f_143, 24);
		switch (func_197(uParam0))
		{
			case 55:
				StringConCat(&vVar0, "_lvMe1", 24);
				cVar1 = { vVar0 };
				func_370(&(uParam0->f_93), 3, &cVar1, 0, 1, 0);
				func_369(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_275(uParam0, 16, 0, 0);
				func_368(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_127())
				{
					if (uParam0->f_115)
					{
						StringConCat(&vVar0, "_retrn2", 24);
					}
					else
					{
						StringConCat(&vVar0, "_retrn1", 24);
					}
					if (uParam0->f_411 != 9)
					{
						func_367(uParam0, &vVar0, 0, 0, 8);
					}
				}
				else
				{
					func_364(uParam0, vVar0, func_366(uParam0, 2));
				}
				if (func_198(uParam0->f_98, 4))
				{
					func_275(uParam0, 16, 0, 0);
					func_236(uParam0, 0, 0);
				}
				func_154(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_145(uParam0, 16) > 1f)
				{
					func_156(1);
					if (uParam0->f_411 == 9)
					{
						func_235("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_235("TAXI_VIP_RETURN", 7500, 1);
					}
					func_275(uParam0, 16, 0, 0);
					func_236(uParam0, 0, 0);
				}
				break;
			
			case 65:
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_aggro2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aggro", 24);
				}
				uParam0->f_107++;
				if (uParam0->f_411 != 9)
				{
					func_367(uParam0, &vVar0, 0, 1, 8);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_231(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_145(uParam0, 16) > func_153(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_127()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&vVar0, uParam0->f_143, 24);
		switch (func_197(uParam0))
		{
			case 142:
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_367(uParam0, &vVar0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&vVar0, "_lvMe2", 24);
				cVar1 = { vVar0 };
				func_370(&(uParam0->f_93), 3, &cVar1, 0, 1, 0);
				func_369(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_275(uParam0, 16, 0, 0);
				func_368(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_330(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_207(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_275(uParam0, 16, 0, 0);
				func_207(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&vVar0, "_hail1", 24);
				cVar1 = { vVar0 };
				if (!func_198(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_370(&(uParam0->f_99), 4, &cVar1, 0, 1, 0);
						func_369(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
					}
					else
					{
						func_367(uParam0, &vVar0, 0, 0, 8);
					}
				}
				func_275(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_275(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_235("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_235("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_275(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&vVar0, "_obj1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!UI::DOES_BLIP_EXIST(uParam0->f_9))
					{
						uParam0->f_9 = func_159(uParam0->f_17, 1);
					}
					else if (UI::GET_BLIP_ALPHA(uParam0->f_9) == 0)
					{
						UI::SET_BLIP_ALPHA(uParam0->f_9, 255);
						UI::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_17);
						UI::SET_BLIP_ROUTE(uParam0->f_9, true);
					}
				}
				func_207(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 9:
				if ((uParam0->f_101 == 1 || uParam0->f_411 == 2) || uParam0->f_411 == 0)
				{
					StringConCat(&vVar0, "_gret1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&vVar0, "_gret1", 24);
							break;
						
						case 0:
							StringConCat(&vVar0, "_gret2", 24);
							break;
						
						case 2:
							StringConCat(&vVar0, "_gret3", 24);
							break;
						
						default:
							StringConCat(&vVar0, "_gret4", 24);
							break;
						}
				}
				func_209(&vVar0);
				if (uParam0->f_411 != 9)
				{
					func_367(uParam0, &vVar0, 0, 0, 8);
				}
				else
				{
					func_231(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!UI::DOES_BLIP_EXIST(uParam0->f_9))
					{
						uParam0->f_9 = func_159(uParam0->f_17, 1);
					}
					else if (UI::GET_BLIP_ALPHA(uParam0->f_9) == 0)
					{
						UI::SET_BLIP_ALPHA(uParam0->f_9, 255);
						UI::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_17);
						UI::SET_BLIP_ROUTE(uParam0->f_9, true);
					}
				}
				func_207(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&vVar0, "_dest2", 24);
				func_363(uParam0, 33554432, vVar0, "", 1, 8);
				func_275(uParam0, 16, 0, 0);
				func_207(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_127())
				{
					func_362(uParam0, 0);
					func_173(&(uParam0->f_44), 4);
					func_275(uParam0, 16, 0, 0);
					func_207(uParam0, 13, 0, 0, 0);
				}
				break;
			
			case 14:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&vVar0, "_bant2", 24);
						break;
					
					case 1:
						StringConCat(&vVar0, "_bant1", 24);
						break;
					
					case 2:
						StringConCat(&vVar0, "_bant3", 24);
						break;
					
					default:
						StringConCat(&vVar0, "_bant1", 24);
						break;
				}
				func_209(&vVar0);
				func_360(vVar0, uParam1);
				func_275(uParam0, 16, 0, 0);
				func_275(uParam0, 11, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_145(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&vVar0, "_ban1", 24);
					}
					else
					{
						StringConCat(&vVar0, "_bant1", 24);
						func_209(&vVar0);
					}
					func_360(vVar0, uParam1);
					func_173(&(uParam0->f_81), 67108864);
					func_275(uParam0, 16, 0, 0);
					func_275(uParam0, 11, 0, 0);
					func_236(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_145(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&vVar0, "_ban2", 24);
					}
					else if (uParam0->f_411 == 1)
					{
						StringConCat(&vVar0, "_banter", 24);
					}
					else
					{
						StringConCat(&vVar0, "_bant2", 24);
						if (uParam0->f_411 != 6)
						{
							func_209(&vVar0);
						}
					}
					func_360(vVar0, uParam1);
					func_275(uParam0, 11, 0, 0);
					func_275(uParam0, 16, 0, 0);
					func_236(uParam0, 0, 0);
				}
				break;
			
			case 17:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&vVar0, "_ban3", 24);
				}
				else
				{
					StringConCat(&vVar0, "_bant3", 24);
					func_209(&vVar0);
				}
				func_360(vVar0, uParam1);
				func_275(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 18:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&vVar0, "_BAN4", 24);
				}
				else
				{
					StringConCat(&vVar0, "_bant4", 24);
				}
				func_209(&vVar0);
				func_360(vVar0, uParam1);
				func_275(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 19:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&vVar0, "_BAN5", 24);
				}
				else
				{
					StringConCat(&vVar0, "_bant5", 24);
				}
				func_209(&vVar0);
				func_360(vVar0, uParam1);
				func_275(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&vVar0, "_dest2b", 24);
				func_209(&vVar0);
				func_360(vVar0, uParam1);
				func_275(uParam0, 16, 0, 0);
				func_275(uParam0, 11, 0, 0);
				func_236(uParam0, 0, 0);
				func_173(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&vVar0, "_seePt1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_207(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_275(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&vVar0, "_talk", 24);
				StringIntConCat(&vVar0, 1, 24);
				func_209(&vVar0);
				func_367(uParam0, &vVar0, 1, 0, 8);
				break;
			
			case 89:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&vVar0, "_deal1", 24);
						break;
					
					case 1:
						StringConCat(&vVar0, "_deal1", 24);
						break;
					
					default:
						StringConCat(&vVar0, "_deal1", 24);
						break;
				}
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&vVar0, "_ig1c", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 27:
				StringConCat(&vVar0, "_bTime", 24);
				if (uParam0->f_411 == 2)
				{
					iVar3 = 8;
				}
				else
				{
					iVar3 = 3;
				}
				iVar2 = 0;
				while (iVar2 < iVar3)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar2)
							{
								case 3:
								case 5:
								case 6:
								case 7:
									iVar5[iVar2] = 0;
									break;
								
								default:
									iVar5[iVar2] = 1;
									break;
							}
							break;
						
						default:
							iVar5[iVar2] = 1;
							break;
					}
					iVar2++;
				}
				if (uParam0->f_411 == 2)
				{
					func_359(&(uParam0->f_90), 8, &vVar0, &iVar5, 1, 0);
				}
				else
				{
					func_359(&(uParam0->f_90), 3, &vVar0, &iVar5, 1, 0);
				}
				func_360(vVar0, uParam1);
				func_368(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_275(uParam0, 16, 0, 0);
				func_275(uParam0, 6, 0f, 1);
				func_236(uParam0, 0, 0);
				break;
			
			case 26:
				StringConCat(&vVar0, "_gTime", 24);
				iVar2 = 0;
				while (iVar2 < 8)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar2)
							{
								case 3:
								case 4:
								case 5:
								case 7:
									iVar5[iVar2] = 0;
									break;
								
								default:
									iVar5[iVar2] = 1;
									break;
							}
							break;
						
						default:
							iVar5[iVar2] = 1;
							break;
					}
					iVar2++;
				}
				if (uParam0->f_411 == 2)
				{
					func_359(&(uParam0->f_89), 8, &vVar0, &iVar5, 1, 0);
				}
				else
				{
					func_359(&(uParam0->f_89), 3, &vVar0, &iVar5, 1, 0);
				}
				func_360(vVar0, uParam1);
				func_368(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 1);
				func_275(uParam0, 16, 0, 0);
				func_275(uParam0, 6, 0f, 1);
				func_236(uParam0, 0, 0);
				break;
			
			case 12:
				func_235("TAXI_OBJ_GYB", 3500, 1);
				func_275(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_235("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_235("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_235("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_275(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 28:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&vVar0, "_dest1A", 24);
						break;
					
					case 1:
						StringConCat(&vVar0, "_dest1B", 24);
						break;
					
					default:
						StringConCat(&vVar0, "_dest1A", 24);
						break;
				}
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_207(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_198(uParam0->f_98, 268435456))
				{
					func_235("TAXI_OBJ_CYI_01", 7500, 1);
					func_173(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_275(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&vVar0, "_rCar1", 24);
				func_209(&vVar0);
				func_360(vVar0, uParam1);
				uParam0->f_124 = { vVar0 };
				func_275(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&vVar0, "_rCar2", 24);
				func_209(&vVar0);
				func_360(vVar0, uParam1);
				uParam0->f_124 = { vVar0 };
				func_275(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&vVar0, "_rCar3", 24);
				func_209(&vVar0);
				func_360(vVar0, uParam1);
				uParam0->f_124 = { vVar0 };
				func_275(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 33:
				func_235("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_275(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_198(uParam0->f_82, 8192))
				{
					if (func_145(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&vVar0, "_airBr1", 24);
						func_209(&vVar0);
						if (uParam0->f_411 == 5)
						{
							func_360(vVar0, uParam1);
						}
						else
						{
							func_367(uParam0, &vVar0, 0, 0, 8);
						}
						func_173(&(uParam0->f_82), 8192);
						func_275(uParam0, 16, 0, 0);
						func_275(uParam0, 11, 0, 0);
						func_236(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_198(uParam0->f_82, 16384))
				{
					StringConCat(&vVar0, "_seeD1", 24);
					func_209(&vVar0);
					func_367(uParam0, &vVar0, 0, 0, 8);
					func_173(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_198(uParam0->f_82, 32768))
				{
					StringConCat(&vVar0, "_seeD2", 24);
					func_209(&vVar0);
					func_367(uParam0, &vVar0, 0, 0, 8);
					func_173(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&vVar0, "_done1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_207(uParam0, 46, 1, 0, 0);
				break;
			
			case 138:
				if (uParam0->f_101 == 1)
				{
					StringConCat(&vVar0, "_ftc1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&vVar0, "_ftc1", 24);
							break;
						
						case 0:
							StringConCat(&vVar0, "_ftc2", 24);
							break;
						
						case 2:
							StringConCat(&vVar0, "_ftc3", 24);
							break;
						
						default:
							StringConCat(&vVar0, "_ftc3", 24);
							break;
						}
				}
				func_209(&vVar0);
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_207(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_236(uParam0, 0, 0);
				break;
			
			case 139:
				func_235("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_207(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&vVar0, "_dOff1", 24);
				cVar1 = { vVar0 };
				iVar4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 120);
				if (!func_198(uParam0->f_82, 268435456))
				{
					if (iVar4 > 80)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else if (iVar4 > 40)
					{
						StringConCat(&cVar1, "_2", 24);
					}
					else
					{
						StringConCat(&cVar1, "_3", 24);
					}
					func_173(&(uParam0->f_82), 268435456);
				}
				else if (iVar4 > 80)
				{
					StringConCat(&cVar1, "_4", 24);
				}
				else if (iVar4 > 40)
				{
					StringConCat(&cVar1, "_5", 24);
				}
				else
				{
					StringConCat(&cVar1, "_6", 24);
				}
				func_369(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_275(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&vVar0, "_bdOff1", 24);
				cVar1 = { vVar0 };
				iVar4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (!func_198(uParam0->f_82, 268435456))
				{
					if (iVar4 < 50)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else
					{
						StringConCat(&cVar1, "_2", 24);
					}
					func_173(&(uParam0->f_82), 268435456);
				}
				else if (iVar4 < 50)
				{
					StringConCat(&cVar1, "_3", 24);
				}
				else
				{
					StringConCat(&cVar1, "_4", 24);
				}
				func_369(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_275(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&vVar0, "_dr2P", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_275(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&vVar0, "_dr2N", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_275(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&vVar0, "_dOff2", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_207(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_235("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_236(uParam0, 0, 0);
				func_207(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&vVar0, "_dOff3", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_207(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_127())
				{
					func_235("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_236(uParam0, 0, 0);
					func_207(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_235("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_236(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_198(uParam0->f_81, 1))
				{
					func_358(uParam0, 1, vVar0, "_sick1", 8);
					func_139(&(uParam0->f_81), 2);
				}
				else if (!func_198(uParam0->f_81, 2))
				{
					func_358(uParam0, 2, vVar0, "_sick2", 8);
					func_139(&(uParam0->f_81), 1);
				}
				func_368(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_198(uParam0->f_82, 2097152))
				{
					StringConCat(&vVar0, "_nopke1", 24);
				}
				else if (!func_198(uParam0->f_82, 4194304))
				{
					StringConCat(&vVar0, "_nopke2", 24);
				}
				func_173(&(uParam0->f_81), 2097152);
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_275(uParam0, 16, 0, 0);
				func_368(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 1);
				func_236(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&vVar0, "_Puke1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_368(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				break;
			
			case 63:
				StringConCat(&vVar0, "_PkStp2", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_368(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_275(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&vVar0, "_PkStp1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_368(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				break;
			
			case 64:
				StringConCat(&vVar0, "_PukeR1", 24);
				func_209(&vVar0);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_198(uParam0->f_81, 4))
				{
					func_358(uParam0, 4, vVar0, "_turns1", 8);
				}
				else if (!func_198(uParam0->f_81, 8))
				{
					func_358(uParam0, 8, vVar0, "_turns2", 8);
				}
				else
				{
					func_358(uParam0, 8, vVar0, "_turns3", 8);
					func_139(&(uParam0->f_81), 4);
					func_139(&(uParam0->f_81), 8);
				}
				func_368(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_357(uParam0))
				{
					func_364(uParam0, vVar0, func_366(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_231(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&vVar0, "_carHt", 24);
					cVar1 = { vVar0 };
					func_370(&(uParam0->f_95), 5, &cVar1, 1, 0, 1);
					func_330(&(uParam0->f_244), uParam0->f_144, &cVar1, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&vVar0, "_carHt1", 24);
					cVar1 = { vVar0 };
					if (uParam0->f_411 == 0)
					{
						func_370(&(uParam0->f_95), 8, &cVar1, 1, 1, 0);
					}
					else
					{
						func_370(&(uParam0->f_95), 5, &cVar1, 1, 1, 0);
					}
					func_369(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				}
				func_368(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
				func_275(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&vVar0, "_genPnHi", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_198(uParam0->f_83, 128))
				{
					StringConCat(&vVar0, "_nMiss1", 24);
					func_330(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_173(&(uParam0->f_83), 128);
					func_139(&(uParam0->f_83), 256);
					func_275(uParam0, 16, 0, 0);
				}
				else if (!func_198(uParam0->f_83, 256))
				{
					StringConCat(&vVar0, "_nMiss2", 24);
					func_330(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_173(&(uParam0->f_83), 256);
					func_139(&(uParam0->f_83), 512);
					func_275(uParam0, 16, 0, 0);
				}
				else if (!func_198(uParam0->f_83, 512))
				{
					StringConCat(&vVar0, "_nMiss3", 24);
					func_330(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_173(&(uParam0->f_83), 512);
					func_139(&(uParam0->f_83), 128);
					func_275(uParam0, 16, 0, 0);
				}
				func_236(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!func_198(uParam0->f_83, 1))
				{
					StringConCat(&vVar0, "_air1", 24);
					if (bVar6)
					{
						func_209(&vVar0);
					}
					func_330(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_173(&(uParam0->f_83), 1);
					func_139(&(uParam0->f_83), 2);
					func_275(uParam0, 16, 0, 0);
				}
				else if (!func_198(uParam0->f_83, 2))
				{
					StringConCat(&vVar0, "_air2", 24);
					if (bVar6)
					{
						func_209(&vVar0);
					}
					func_330(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_173(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_139(&(uParam0->f_83), 4);
					}
					else
					{
						func_139(&(uParam0->f_83), 1);
					}
					func_275(uParam0, 16, 0, 0);
				}
				else if (!func_198(uParam0->f_83, 4))
				{
					StringConCat(&vVar0, "_air3", 24);
					if (bVar6)
					{
						func_209(&vVar0);
					}
					func_330(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_173(&(uParam0->f_83), 4);
					func_139(&(uParam0->f_83), 1);
					func_275(uParam0, 16, 0, 0);
				}
				func_368(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 79:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!func_198(uParam0->f_81, 4096))
				{
					func_363(uParam0, 4096, vVar0, "_sideW1", bVar6, 8);
				}
				else if (!func_198(uParam0->f_81, 8192))
				{
					func_363(uParam0, 8192, vVar0, "_sideW2", bVar6, 8);
				}
				func_368(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!func_198(uParam0->f_81, 16384))
				{
					func_363(uParam0, 16384, vVar0, "_opLne1", bVar6, 8);
				}
				else if (!func_198(uParam0->f_81, 32768))
				{
					func_363(uParam0, 32768, vVar0, "_opLne2", bVar6, 8);
				}
				func_368(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_198(uParam0->f_82, 8))
					{
						func_356(uParam0, 8, vVar0, "_bored1", 8, 0);
					}
					else if (!func_198(uParam0->f_82, 16))
					{
						func_356(uParam0, 16, vVar0, "_bored2", 8, 0);
					}
					else if (!func_198(uParam0->f_82, 32))
					{
						func_356(uParam0, 32, vVar0, "_bored3", 8, 0);
					}
					func_368(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
					func_236(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&vVar0, "_good1", 24);
					cVar1 = { vVar0 };
					func_370(&(uParam0->f_93), 6, &cVar1, 0, 1, 0);
					func_369(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
					func_368(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
					func_275(uParam0, 16, 0, 0);
					func_236(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&vVar0, "_EtoB1", 24);
				cVar1 = { vVar0 };
				func_370(&(uParam0->f_96), 2, &cVar1, 0, 1, 0);
				func_369(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_368(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_275(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&vVar0, "_BtoE1", 24);
				cVar1 = { vVar0 };
				func_370(&(uParam0->f_97), 2, &cVar1, 0, 1, 0);
				func_369(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_368(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_275(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_198(uParam0->f_81, 65536))
				{
					func_363(uParam0, 65536, vVar0, "_runLit1", 1, 8);
				}
				else if (!func_198(uParam0->f_81, 131072))
				{
					func_363(uParam0, 131072, vVar0, "_runLit2", 1, 8);
				}
				func_236(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_357(uParam0))
				{
					func_364(uParam0, vVar0, func_366(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_231(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_198(uParam0->f_83, 8))
				{
					StringConCat(&vVar0, "_hitR1", 24);
					func_209(&vVar0);
					func_330(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_173(&(uParam0->f_83), 8);
					func_139(&(uParam0->f_83), 16);
					func_275(uParam0, 16, 0, 0);
				}
				else if (!func_198(uParam0->f_83, 16))
				{
					StringConCat(&vVar0, "_hitR2", 24);
					func_209(&vVar0);
					func_330(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_173(&(uParam0->f_83), 16);
					func_139(&(uParam0->f_83), 32);
					func_275(uParam0, 16, 0, 0);
				}
				else if (!func_198(uParam0->f_83, 32))
				{
					StringConCat(&vVar0, "_hitR3", 24);
					func_209(&vVar0);
					func_330(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_173(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_139(&(uParam0->f_83), 64);
					}
					else
					{
						func_139(&(uParam0->f_83), 8);
					}
					func_275(uParam0, 16, 0, 0);
				}
				else if (!func_198(uParam0->f_83, 64))
				{
					StringConCat(&vVar0, "_hitR4", 24);
					func_209(&vVar0);
					func_330(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_173(&(uParam0->f_83), 64);
					func_139(&(uParam0->f_83), 8);
					func_275(uParam0, 16, 0, 0);
				}
				func_368(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_127())
				{
					if (uParam0->f_115)
					{
						StringConCat(&vVar0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&vVar0, "_aggro", 24);
					}
					func_367(uParam0, &vVar0, 0, 1, 8);
				}
				else
				{
					func_364(uParam0, vVar0, func_366(uParam0, 65));
					func_236(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_127())
				{
					if (uParam0->f_411 == 4)
					{
						StringCopy(&vVar0, "tm6_shoot", 24);
					}
					else if (uParam0->f_115)
					{
						StringConCat(&vVar0, "_shootlz", 24);
					}
					else
					{
						StringConCat(&vVar0, "_shoot", 24);
					}
					func_367(uParam0, &vVar0, 0, 1, 8);
				}
				else
				{
					func_364(uParam0, vVar0, func_366(uParam0, 66));
					func_236(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_127())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&vVar0, "_warnC1", 24);
								func_367(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&vVar0, "_warnF1", 24);
								func_367(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&vVar0, "_far1", 24);
								func_367(uParam0, &vVar0, 0, 0, 8);
								func_368(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
								break;
							
							case 2:
								StringConCat(&vVar0, "_close1", 24);
								func_367(uParam0, &vVar0, 0, 0, 8);
								func_368(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
								break;
							
							case 10:
								StringConCat(&vVar0, "_hit1", 24);
								func_367(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&vVar0, "_good1", 24);
								cVar1 = { vVar0 };
								func_370(&(uParam0->f_93), 6, &cVar1, 1, 1, 0);
								func_369(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
								func_368(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
								func_275(uParam0, 16, 0, 0);
								func_236(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_58)
								{
									StringConCat(&vVar0, "_sBant1", 24);
									cVar1 = { vVar0 };
									func_367(uParam0, &vVar0, 0, 0, 8);
									func_275(uParam0, 16, 0, 0);
									func_275(uParam0, 11, 0, 0);
									func_236(uParam0, 0, 0);
									if (!iLocal_60)
									{
										iLocal_58 = 1;
									}
								}
								else
								{
									if (!iLocal_59)
									{
										StringConCat(&vVar0, "_bant3", 24);
										iLocal_59 = 1;
									}
									else
									{
										StringConCat(&vVar0, "_bant2", 24);
										iLocal_60 = 1;
									}
									func_209(&vVar0);
									func_367(uParam0, &vVar0, 0, 0, 8);
									func_275(uParam0, 16, 0, 0);
									func_275(uParam0, 11, 0, 0);
									func_236(uParam0, 0, 0);
									iLocal_58 = 0;
								}
								break;
							
							case 7:
								StringConCat(&vVar0, "_done1", 24);
								func_367(uParam0, &vVar0, 0, 0, 8);
								break;
						}
						func_207(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&vVar0, "_speed1", 24);
				cVar1 = { vVar0 };
				func_370(&(uParam0->f_87), 6, &cVar1, 1, 1, 0);
				func_369(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_368(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_275(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_198(uParam0->f_82, 1))
				{
					func_356(uParam0, 1, vVar0, "_close1", 8, 0);
				}
				else if (!func_198(uParam0->f_82, 2))
				{
					func_356(uParam0, 2, vVar0, "_close2", 8, 0);
				}
				else if (!func_198(uParam0->f_82, 4))
				{
					func_356(uParam0, 4, vVar0, "_close3", 8, 0);
				}
				func_236(uParam0, 0, 0);
				break;
			
			case 48:
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_stop2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_stop1", 24);
				}
				cVar1 = { vVar0 };
				func_370(&(uParam0->f_86), 4, &cVar1, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_369(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_231(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_275(uParam0, 16, 0, 0);
				func_368(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_357(uParam0))
				{
					func_364(uParam0, vVar0, func_366(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_231(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&vVar0, "_roll1", 24);
					func_355(uParam0, vVar0, 8);
				}
				func_368(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_275(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_198(uParam0->f_83, 1024))
				{
					func_173(&(uParam0->f_83), 1024);
					func_275(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv1", 24);
					func_209(&vVar0);
					func_330(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
				}
				else if (!func_198(uParam0->f_83, 2048))
				{
					func_173(&(uParam0->f_83), 2048);
					func_275(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv2", 24);
					func_209(&vVar0);
					func_330(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
				}
				else if (!func_198(uParam0->f_83, 4096))
				{
					func_173(&(uParam0->f_83), 4096);
					func_275(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv3", 24);
					func_209(&vVar0);
					func_330(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
				}
				func_236(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_198(uParam0->f_82, 1024))
				{
					func_356(uParam0, 1024, vVar0, "_rvrs1", 8, 1);
					func_139(&(uParam0->f_82), 2048);
				}
				else if (!func_198(uParam0->f_82, 2048))
				{
					func_356(uParam0, 2048, vVar0, "_rvrs2", 8, 1);
				}
				func_236(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&vVar0, "_ofrd1", 24);
				cVar1 = { vVar0 };
				func_370(&(uParam0->f_88), 4, &cVar1, 0, 1, 0);
				func_369(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_368(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
				func_275(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&vVar0, "_ofrdch1", 24);
				func_330(&(uParam0->f_244), uParam0->f_144, &vVar0, 9, 0, 0, 0);
				func_275(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&vVar0, "_losPol1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_207(uParam0, 52, 1, 0, 0);
				break;
			
			case 50:
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_lsPo2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_lsPo1", 24);
				}
				if (uParam0->f_411 != 9)
				{
					func_367(uParam0, &vVar0, 0, 0, 8);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					func_231(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_275(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_357(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&vVar0, "_copBa1", 24);
						cVar1 = { vVar0 };
						cVar1 = { vVar0 };
						func_367(uParam0, &vVar0, 0, 0, 8);
						func_207(uParam0, 52, 1, 0, 0);
						func_275(uParam0, 16, 0, 0);
					}
					else
					{
						if (uParam0->f_411 == 5 && uParam0->f_410 > 9)
						{
							StringConCat(&vVar0, "_copBa2", 24);
						}
						else
						{
							StringConCat(&vVar0, "_copBa1", 24);
						}
						cVar1 = { vVar0 };
						func_367(uParam0, &vVar0, 0, 0, 8);
						func_275(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&vVar0, "_copBa1", 24);
					cVar1 = { vVar0 };
					func_370(&(uParam0->f_85), 6, &cVar1, 1, 1, 0);
					func_369(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
					func_275(uParam0, 16, 0, 0);
					func_236(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&vVar0, "_evdeP1", 24);
				func_368(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_275(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					func_235("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_236(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&vVar0, "_cpFz1", 24);
				func_209(&vVar0);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_198(uParam0->f_81, 262144))
				{
					func_363(uParam0, 262144, vVar0, "_rdCh1", 1, 8);
				}
				else if (!func_198(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_363(uParam0, 1048576, vVar0, "_rdCh2", 1, 8);
					}
					else
					{
						func_363(uParam0, 1048576, vVar0, "_rdCh2", 0, 8);
					}
				}
				func_368(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_198(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_354(uParam0, 67108864, vVar0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_198(uParam0->f_82, 134217728))
				{
					func_354(uParam0, 134217728, vVar0, "_rdFv1", 0, 7);
				}
				func_368(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&vVar0, "_rdneu1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&vVar0, "_rdtip1", 24);
				cVar1 = { vVar0 };
				StringConCat(&cVar1, "_", 24);
				StringIntConCat(&cVar1, uParam0->f_418.f_3, 24);
				func_369(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_275(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 100:
				func_235("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_236(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&vVar0, "_horn", 24);
					func_367(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&vVar0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_209(&vVar0);
				}
				func_173(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_367(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&vVar0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_209(&vVar0);
				}
				func_173(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_367(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 103:
				if (uParam0->f_411 == 4)
				{
					StringConCat(&vVar0, "_pissed1", 24);
				}
				else
				{
					StringConCat(&vVar0, "_thank3", 24);
				}
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_209(&vVar0);
				}
				func_173(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_367(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_198(uParam0->f_82, 65536))
				{
					if (func_145(uParam0, 11) > uParam0->f_36)
					{
						switch (uParam0->f_102)
						{
							case 0:
								StringConCat(&vVar0, "_ccba2", 24);
								break;
							
							case 1:
								StringConCat(&vVar0, "_ccba1", 24);
								break;
							
							default:
								StringConCat(&vVar0, "_ccba1", 24);
								break;
						}
						func_209(&vVar0);
						func_360(vVar0, uParam1);
						func_173(&(uParam0->f_82), 65536);
						func_275(uParam0, 16, 0, 0);
						func_275(uParam0, 11, 0, 0);
						func_236(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_198(uParam0->f_82, 131072))
				{
					if (func_145(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&vVar0, "_ccbb1", 24);
						func_209(&vVar0);
						func_360(vVar0, uParam1);
						func_173(&(uParam0->f_82), 131072);
						func_275(uParam0, 16, 0, 0);
						func_275(uParam0, 11, 0, 0);
						func_236(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_198(uParam0->f_82, 8388608))
				{
					StringConCat(&vVar0, "_close1", 24);
					func_173(&(uParam0->f_82), 8388608);
				}
				else if (!func_198(uParam0->f_82, 16777216))
				{
					StringConCat(&vVar0, "_close2", 24);
					func_173(&(uParam0->f_82), 16777216);
				}
				else if (!func_198(uParam0->f_82, 33554432))
				{
					StringConCat(&vVar0, "_close3", 24);
					func_173(&(uParam0->f_82), 33554432);
				}
				func_360(vVar0, uParam1);
				func_275(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&vVar0, "_kill1", 24);
					cVar1 = { vVar0 };
					func_370(&(uParam0->f_93), 6, &cVar1, 1, 1, 1);
					func_209(&vVar0);
					func_369(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&vVar0, "_cheat1", 24);
					func_367(uParam0, &vVar0, 0, 0, 8);
				}
				else
				{
					StringConCat(&vVar0, "_kill1", 24);
					func_367(uParam0, &vVar0, 0, 0, 8);
				}
				func_275(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&vVar0, "_wndw2", 24);
				func_360(vVar0, uParam1);
				func_275(uParam0, 16, 0, 0);
				func_275(uParam0, 11, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&vVar0, "_wndw0", 24);
				func_360(vVar0, uParam1);
				func_275(uParam0, 16, 0, 0);
				func_275(uParam0, 11, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&vVar0, "_wndw1", 24);
				func_360(vVar0, uParam1);
				func_275(uParam0, 16, 0, 0);
				func_275(uParam0, 11, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&vVar0, "_csite1", 24);
				func_209(&vVar0);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&vVar0, "_fair1", 24);
				func_209(&vVar0);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&vVar0, "_AlCk1", 24);
				cVar1 = { vVar0 };
				func_370(&(uParam0->f_91), 5, &cVar1, 1, 1, 0);
				func_369(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_275(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&vVar0, "_eggG1", 24);
				cVar1 = { vVar0 };
				func_370(&(uParam0->f_92), 5, &cVar1, 1, 1, 0);
				func_369(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar1, 8, 0, 0);
				func_275(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&vVar0, "_goons1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&vVar0, "_oRun1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&vVar0, "_gotG1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&vVar0, "_getA1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&vVar0, "_gnawy1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&vVar0, "_grl1", 24);
				func_209(&vVar0);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&vVar0, "_figt1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&vVar0, "_gEgg1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&vVar0, "_gEgg3", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&vVar0, "_gEgg2", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&vVar0, "_gLeav1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&vVar0, "_aKill1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&vVar0, "_gHelp1", 24);
				func_209(&vVar0);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&vVar0, "_gDest1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_207(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&vVar0, "_gKO1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&vVar0, "_gThank1", 24);
				func_173(&(uParam0->f_81), 2097152);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&vVar0, "_gDriv1", 24);
				func_209(&vVar0);
				func_360(vVar0, uParam1);
				func_173(&(uParam0->f_81), 67108864);
				func_275(uParam0, 16, 0, 0);
				func_275(uParam0, 11, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&vVar0, "_cash1", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_198(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_363(uParam0, 33554432, vVar0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						func_231(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_207(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&vVar0, "_foot", 24);
				func_330(&(uParam0->f_244), uParam0->f_144, &vVar0, 9, 0, 0, 0);
				func_275(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_198(uParam0->f_81, 268435456))
				{
					func_363(uParam0, 268435456, vVar0, "_kPay1", 1, 8);
				}
				func_207(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_235("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_236(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_198(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_363(uParam0, 4194304, vVar0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!PED::IS_PED_INJURED(uParam0->f_3))
						{
							func_231(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_363(uParam0, 4194304, vVar0, "_mPay1", 1, 8);
					}
				}
				func_207(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_235("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_236(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&vVar0, "_runoff", 24);
				func_330(&(uParam0->f_244), uParam0->f_144, &vVar0, 9, 0, 0, 0);
				func_275(uParam0, 16, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_198(uParam0->f_81, 16777216))
				{
					func_363(uParam0, 16777216, vVar0, "_ret1", 1, 8);
				}
				func_236(uParam0, 0, 0);
				break;
			
			case 88:
				func_235("TAXI_TIEFLEE", 7500, 1);
				func_236(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_198(uParam0->f_98, 536870912))
				{
					func_235("TAXI_OBJ_CYI_1B", 7500, 1);
					func_173(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_236(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&vVar0, "_joke1", 24);
				func_209(&vVar0);
				func_367(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 136:
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_wronglz", 24);
				}
				else if (uParam0->f_116)
				{
					StringConCat(&vVar0, "_wrong2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_wrong", 24);
				}
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_236(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&vVar0, "_shout", 24);
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_236(uParam0, 0, 0);
				break;
			
			case 135:
				if (uParam0->f_411 == 4)
				{
					StringCopy(&vVar0, "tm6_jack", 24);
				}
				else
				{
					StringConCat(&vVar0, "_jack", 24);
				}
				func_367(uParam0, &vVar0, 0, 0, 8);
				func_236(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&vVar0, "_getCar", 24);
				func_367(uParam0, &vVar0, 1, 0, 8);
				func_207(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_235("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_207(uParam0, 0, 0, 0, 0);
				func_236(uParam0, 0, 0);
				break;
			}
	}
}

void func_354(var uParam0, int iParam1, vector3 vParam2, var uParam3, var uParam4, var uParam5, char* sParam6, bool bParam7, int iParam8)
{
	func_173(&(uParam0->f_82), iParam1);
	func_275(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	if (bParam7)
	{
		func_209(&vParam2);
	}
	func_330(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam8, 0, 0, 0);
}

void func_355(var uParam0, struct<6> Param1, int iParam2)
{
	vector3 vVar0[24];
	
	cVar0 = { Param1 };
	if (!func_198(uParam0->f_82, 64))
	{
		func_173(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_198(uParam0->f_82, 128))
	{
		func_173(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 3), 24);
	}
	func_369(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam2, 0, 0);
	func_275(uParam0, 16, 0, 0);
}

void func_356(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7, bool bParam8)
{
	func_173(&(uParam0->f_82), iParam1);
	func_275(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam8)
		{
			func_209(&vParam2);
		}
	}
	func_330(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam7, 0, 0, 0);
}

int func_357(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_358(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7)
{
	func_173(&(uParam0->f_81), iParam1);
	func_275(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	func_330(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam7, 0, 0, 0);
}

void func_359(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_253(*uParam0, iVar1))
		{
			func_174(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_209(sParam2);
			}
			if (bParam4)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

void func_360(char[24] cParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_361(uParam1);
	if (iVar0 > -1)
	{
		*(uParam1[iVar0 /*8*/]) = { cParam0 };
		func_173(&((uParam1[iVar0 /*8*/])->f_7), 2);
	}
}

int func_361(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_362(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_235("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_235("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_235("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_235("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_235("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_235("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_235("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_235("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_235("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_235("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_235("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_235("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_235("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_235("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_235("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_235("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_235("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_235("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_235("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_235("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_363(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, bool bParam7, int iParam8)
{
	func_173(&(uParam0->f_81), iParam1);
	func_275(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	if (bParam7)
	{
		func_209(&vParam2);
	}
	func_330(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam8, 0, 0, 0);
}

void func_364(var uParam0, char[12] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char* sParam5)
{
	func_275(uParam0, 16, 0, 0);
	func_275(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam5, 24);
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		AUDIO::INTERRUPT_CONVERSATION(uParam0->f_3, &cParam1, func_365(uParam0));
	}
}

char* func_365(var uParam0)
{
	char* sVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			sVar0 = "TaxiFelipe";
			break;
		
		case 1:
			sVar0 = "TaxiOtis";
			break;
		
		case 2:
			sVar0 = "TaxiKwak";
			break;
		
		case 3:
			sVar0 = "TaxiWalter";
			break;
		
		case 4:
			sVar0 = "TaxiMiranda";
			break;
		
		case 5:
			sVar0 = "TaxiDerrick";
			break;
		
		case 6:
			sVar0 = "TaxiAlonzo";
			break;
		
		case 7:
			sVar0 = "TaxiDarren";
			break;
		
		case 8:
			sVar0 = "TaxiKeyla";
			break;
	}
	return sVar0;
}

char* func_366(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 72:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ACRH";
				
				case 1:
					return "_ACRH";
				
				case 2:
					return "_ACAA";
				
				case 3:
					return "_ACRH";
				
				case 4:
					return "_AEAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					return "_ACAA";
				
				case 7:
					return "_ACAA";
				
				case 8:
					return "_ACRH";
				
				default:
			}
			return "_ACRH";
			break;
		
		case 82:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AHIT";
				
				case 1:
					return "_AHIT";
				
				case 2:
					return "_AEAA";
				
				case 3:
					return "_ADAA";
				
				case 4:
					return "_AFAA";
				
				case 5:
					return "_AFAA";
				
				case 6:
					return "_AEAA";
				
				case 7:
					return "_AHAA";
				
				case 8:
					return "_AEAA";
				
				default:
			}
			return "_AHIT";
			break;
		
		case 74:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AROL";
				
				case 1:
					return "_AROL";
				
				case 2:
					return "_AHAA";
				
				case 3:
					return "_AROL";
				
				case 4:
					return "_AGAA";
				
				case 5:
					return "_AROL";
				
				case 6:
					return "_AROL";
				
				case 7:
					return "_AROL";
				
				case 8:
					return "_AROL";
				
				default:
			}
			return "_AROL";
			break;
		
		case 65:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ABAA";
				
				case 1:
					return "_FUAA";
				
				case 2:
					return "_AFAA";
				
				case 3:
					return "_DBAA";
				
				case 4:
					return "_DLAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_EEAA";
					}
					else
					{
						return "_EFAA";
					}
					break;
				
				case 7:
					return "_DBAA";
				
				case 8:
					return "_EFAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 66:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AEAA";
				
				case 1:
					return "_ACAA";
				
				case 2:
					return "_AJAA";
				
				case 3:
					return "_AHAA";
				
				case 4:
					return "_AHAA";
				
				case 5:
					return "_AIAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_AJAA";
					}
					else
					{
						return "_AGAA";
					}
					break;
				
				case 7:
					return "_AUAA";
				
				case 8:
					return "_AHAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 2:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AAAA";
				
				case 1:
					return "_AAAA";
				
				case 2:
					return "_ADAA";
				
				case 3:
					return "_ABAA";
				
				case 4:
					return "_AAAA";
				
				case 5:
					return "_ABAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_AHAA";
					}
					else
					{
						return "_ABAA";
					}
					break;
				
				case 7:
					return "_BUAA";
				
				case 8:
					return "_ADAA";
				
				default:
					return "_AAAA";
			}
			break;
	}
	return "_ACRH";
}

int func_367(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_275(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_275(uParam0, 17, 0f, 1);
	}
	func_236(uParam0, iParam2, 0);
	return func_330(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_368(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam5)
{
	if (iParam0 == 0)
	{
		if (func_198(*uParam2, 2))
		{
			if (!bParam5)
			{
				*uParam1 = (*uParam1 - 2);
			}
			else
			{
				*uParam1 += 3;
			}
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 8)
	{
		if (func_198(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_198(*uParam2, 4))
		{
			if (!func_198(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_139(uParam2, 4096);
			}
		}
		else if (func_198(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_198(*uParam2, 512))
		{
			if (!func_198(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_139(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_198(*uParam2, 16))
		{
			if (!func_198(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_139(uParam2, 4096);
			}
		}
		else if (func_198(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_198(*uParam2, 64))
		{
			if (!func_198(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_139(uParam2, 4096);
			}
		}
		else if (func_198(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_198(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_198(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_198(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_198(*uParam2, 8192))
		{
			if (func_198(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_198(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_198(*uParam2, 16384))
		{
			if (func_198(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
			else
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 11)
	{
		if (func_198(*uParam2, 32768))
		{
			if (func_198(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_198(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_198(*uParam2, 65536))
		{
			if (func_198(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_198(*uParam2, 131072))
		{
			if (func_198(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_198(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_198(*uParam2, 262144))
		{
			if (func_198(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_198(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_198(*uParam2, 524288))
		{
			if (func_198(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_198(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_198(*uParam2, 1048576))
		{
			if (func_198(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_198(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_198(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_198(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_198(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_198(*uParam2, 67108864))
		{
			if (func_198(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_198(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_198(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_198(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_198(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

int func_369(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_338(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15829 = 0;
	Global_15836 = 0;
	Global_15831 = 0;
	Global_16813 = 1;
	Global_16815 = 0;
	Global_16819 = 0;
	StringCopy(&Global_16826, sParam3, 24);
	Global_2621441 = 0;
	return func_331(sParam2, iParam4, 0);
}

void func_370(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_253(*uParam0, iVar1))
		{
			func_174(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_209(sParam2);
				}
				else
				{
					func_209(sParam2);
				}
			}
			else
			{
				if (bParam4)
				{
					StringConCat(sParam2, "_", 24);
				}
				StringIntConCat(sParam2, iVar2 + 1, 24);
			}
			if (bParam3)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

int func_371(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_189("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_189("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_189("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_189("TX_OBJ_GYB_DO", 0, 0) || func_189("TAXI_OBJ_GYB", 0, 0)) || func_189("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_189("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_189("TX_OBJ_CYI_DO", 0, 0) || func_189("TAXI_OBJ_CYI_01", 0, 0)) || func_189("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_189("TX_OBJ_GYN_DO", 0, 0) || func_189("TAXI_OBJ_GYN", 0, 0)) || func_189("TAXI_OBJ_GYN_TG", 0, 0)) || func_189("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_189("TAXI_OBJ_CC1", 0, 0) || func_189("TAXI_OBJ_CC2", 0, 0)) || func_189("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_189("TAXI_OBJ_FTC1", 0, 0) || func_189("TAXI_OBJ_FTC2", 0, 0)) || func_189("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_189("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_189("TAXI_OBJ_GETRUN", 0, 0) || func_189("TAXI_OBJ_DRIVE", 0, 0)) || func_189("TAXI_OBJ_RETURN", 0, 0)) || func_189("TAXI_OBJ_POL", 0, 0)) || func_189("TAXI_OBJ_RUNOUT", 0, 0)) || func_189("TAXI_OBJ_POL", 0, 0));
}

int func_372(char* sParam0)
{
	if (!GAMEPLAY::IS_STRING_NULL(sParam0))
	{
		if (func_189(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_373(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_134(uParam0, 9));
}

void func_374(var uParam0)
{
	if (func_134(uParam0, 17))
	{
		if (!func_134(uParam0, 14))
		{
			if (!func_138(uParam0))
			{
				if (!func_127())
				{
					func_135(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_375(var uParam0)
{
	return uParam0->f_117;
}

void func_376(var uParam0)
{
	if (!func_305(uParam0))
	{
		if ((GAMEPLAY::GET_GAME_TIMER() % 1000) < 50)
		{
		}
		func_147(uParam0, 1);
	}
	else if (func_134(uParam0, 14))
	{
		func_200(uParam0);
		func_148(uParam0, 0);
	}
}

void func_377(var uParam0, var uParam1, bool bParam2)
{
	if (!func_198(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_124)) && func_127())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_127())
				{
					StringCopy(&(uParam0->f_124), func_194(), 24);
					uParam0->f_56 = (uParam0->f_56 + uParam0->f_57);
					if (uParam0->f_56 < 0)
					{
						uParam0->f_56 = 0;
					}
					uParam0->f_57 = 0;
					*uParam1 = 0;
					if (bParam2)
					{
					}
				}
				break;
			}
	}
}

void func_378(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
		{
			if (Local_165 > 0 && !func_253(Local_165.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_165 - 1))
				{
					if (func_253(Local_165.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_165.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_253(Local_165.f_1[iVar0 /*4*/], 4))
							{
								func_174(&(Local_165.f_1[iVar0 /*4*/]), 4);
								Local_165.f_1[iVar0 /*4*/].f_1 = GAMEPLAY::GET_GAME_TIMER();
							}
						}
						else
						{
							func_140(&(Local_165.f_1[iVar0 /*4*/]), 12);
						}
						if (func_253(Local_165.f_1[iVar0 /*4*/], 4) && !func_253(Local_165.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_165.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_165.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_174(&(Local_165.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_329(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_379(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_134(uParam0, 27))
	{
		func_182(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_145(uParam0, 27) > 5f)
	{
		if (func_406(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_275(uParam0, 27, 0, 0);
			func_275(uParam0, 10, 0, 0);
			func_404(uParam0, &uVar0, uParam1);
		}
		func_401(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_380(uParam0);
	}
	if ((((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && (CAM::DOES_CAM_EXIST(*uParam0) && !CAM::IS_CAM_ACTIVE(*uParam0))) && (CAM::DOES_CAM_EXIST(uParam0->f_1) && !CAM::IS_CAM_ACTIVE(uParam0->f_1))) && !UI::IS_MESSAGE_BEING_DISPLAYED()) && !func_127())
	{
		if (func_145(uParam0, 26) > 10f)
		{
			func_135(uParam0, 26, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
	}
	else if (func_134(uParam0, 26))
	{
		func_135(uParam0, 26, 0);
	}
	return 0;
}

void func_380(var uParam0)
{
	if (!func_400(uParam0->f_429))
	{
		uParam0->f_429 = func_399();
		func_390(&(uParam0->f_429), 0, 0, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(4, 7), 0, 0, 0);
	}
	else if (func_381(uParam0->f_429))
	{
		func_329(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_381(int iParam0)
{
	return func_382(func_399(), iParam0);
}

int func_382(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_400(iParam1) || !func_400(iParam0))
	{
		return 1;
	}
	iVar0 = func_388(iParam0);
	iVar1 = func_388(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_387(iParam0);
	iVar1 = func_387(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_386(iParam0);
	iVar1 = func_386(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_385(iParam0);
	iVar1 = func_385(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_384(iParam0);
	iVar1 = func_384(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_383(iParam0);
	iVar1 = func_383(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_383(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_384(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_385(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_386(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_387(int iParam0)
{
	return iParam0 & 15;
}

var func_388(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_389(GAMEPLAY::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_389(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_390(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_388(*uParam0);
	iVar1 = func_387(*uParam0);
	iVar2 = func_386(*uParam0);
	iVar3 = func_385(*uParam0);
	iVar4 = func_384(*uParam0);
	iVar5 = func_383(*uParam0);
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
	iVar6 = func_398(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_398(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_391(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_391(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_397(uParam0, iParam1);
	func_396(uParam0, iParam2);
	func_395(uParam0, iParam3);
	func_394(uParam0, iParam5);
	func_393(uParam0, iParam4);
	func_392(uParam0, iParam6);
}

void func_392(var uParam0, int iParam1)
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

void func_393(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_387(*uParam0);
	iVar1 = func_388(*uParam0);
	if (iParam1 < 1 || iParam1 > func_398(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_394(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_395(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_396(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_397(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_398(int iParam0, int iParam1)
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

int func_399()
{
	var uVar0;
	
	func_397(&uVar0, TIME::GET_CLOCK_SECONDS());
	func_396(&uVar0, TIME::GET_CLOCK_MINUTES());
	func_395(&uVar0, TIME::GET_CLOCK_HOURS());
	func_393(&uVar0, TIME::GET_CLOCK_DAY_OF_MONTH());
	func_394(&uVar0, TIME::GET_CLOCK_MONTH());
	func_392(&uVar0, TIME::GET_CLOCK_YEAR());
	return uVar0;
}

int func_400(int iParam0)
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
	iVar0 = func_383(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_384(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_385(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_388(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_387(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_386(iParam0);
	if (iVar5 < 1 || iVar5 > func_398(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_401(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_403()) && !func_305(uParam0)) || ((uParam0->f_411 != 9 && func_240(uParam0, 1)) && !func_305(uParam0)))
		{
			uVar0 = func_402(uParam0->f_4);
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
			uParam0->f_4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4, true, 0);
			func_200(uParam0);
			func_148(uParam0, 0);
		}
	}
}

var func_402(var uParam0)
{
	return uParam0;
}

int func_403()
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) == PLAYER::PLAYER_PED_ID())
				{
					if (VEHICLE::IS_VEHICLE_MODEL(iVar0, func_21()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_404(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_405(uParam0, 0, 1))
			{
				func_329(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_405(uParam0, 0, 4))
			{
				func_329(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_405(uParam0, 0, 8))
			{
				func_329(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_405(uParam0, 1, 1))
			{
				func_329(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_405(uParam0, 0, 1))
			{
				func_329(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_198(*uParam2, 2) && func_196(uParam0))
			{
				func_329(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_405(var uParam0, int iParam1, int iParam2)
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, 0))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_207(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_207(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_406(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (!func_198(*uParam2, 1))
		{
			if (func_412(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_198(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_198(*uParam2, 4))
		{
			if (func_410(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_198(*uParam2, 8))
		{
			if (func_409(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_198(*uParam2, 128);
		if (bParam4)
		{
			if (func_407(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_198(*uParam2, 16))
		{
			if (func_407(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (iParam7 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_407(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_73)
		{
			iLocal_74 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_73 = true;
		}
		iLocal_75 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_76 = (iLocal_74 - iLocal_75);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_76) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_73)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (IntToFloat(iLocal_76) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			if (PED::IS_PED_BEING_JACKED(iParam0))
			{
				if (PED::GET_PEDS_JACKER(iParam0) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::WAS_PED_KILLED_BY_STEALTH(iParam0))
		{
			return 1;
		}
	}
	if (func_408(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && func_161(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_408(int iParam0, int iParam1)
{
	int iVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(iParam1, true)) < 2.5f)
			{
				if (PED::IS_PED_FACING_PED(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_409(int iParam0, int iParam1, var uParam2)
{
	if (WEAPON::IS_PED_ARMED(iParam0, 4))
	{
		if (PED::IS_PED_SHOOTING(iParam0) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_410(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar1;
	
	iVar1 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	if (GAMEPLAY::IS_BULLET_IN_AREA(vVar0, 4f, 1))
	{
		return 1;
	}
	if (GAMEPLAY::HAS_BULLET_IMPACTED_IN_AREA(vVar0, SYSTEM::TO_FLOAT(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (WEAPON::IS_PED_ARMED(iParam0, 2))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0);
			}
			if (PED::IS_PED_PLANTING_BOMB(iParam0) || func_411(iVar1))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (GAMEPLAY::IS_PROJECTILE_IN_AREA((vVar0.x - IntToFloat(uParam2->f_6)), (vVar0.y - IntToFloat(uParam2->f_6)), (vVar0.z - IntToFloat(uParam2->f_6)), (vVar0.x + IntToFloat(uParam2->f_6)), (vVar0.y + IntToFloat(uParam2->f_6)), (vVar0.z + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_411(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0) != 0)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_162(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 40f)
						{
							if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar1))
							{
								if ((ENTITY::IS_ENTITY_A_VEHICLE(iVar1) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1) == iParam0) || (ENTITY::IS_ENTITY_A_PED(iVar1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0)))
								{
									if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && CONTROLS::IS_CONTROL_PRESSED(0, 24)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && CONTROLS::IS_CONTROL_PRESSED(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_412(int iParam0, var uParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_161(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = GAMEPLAY::GET_GAME_TIMER();
						}
						else if ((GAMEPLAY::GET_GAME_TIMER() - uParam1->f_1) > uParam1->f_3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_413(var uParam0)
{
	if (!func_198(uParam0->f_98, 2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
		{
			if (func_195(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				GAMEPLAY::CLEAR_AREA_OF_VEHICLES(uParam0->f_17, 25f, 0, 0, 0, 0, false, 0);
				func_173(&(uParam0->f_98), 2);
			}
		}
	}
}

void func_414()
{
	func_415(&Local_231);
	func_431();
}

void func_415(var uParam0)
{
	func_11(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_434(2);
	}
}

int func_416(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_127() && func_145(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, 0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_58(uParam0) == 0 || func_253(uParam0->f_85, 32))
					{
						if (!VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
						{
							func_340(uParam0, 4160, 0);
						}
						else
						{
							func_340(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_340(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_340(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_340(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((GAMEPLAY::GET_GAME_TIMER() % 1000) < 50)
	{
	}
	return 0;
}

int func_417(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_418(int iParam0)
{
	func_420(&Local_231, iParam0);
	Local_231.f_410 = 0;
	func_419(&Local_231, 2, 8);
	Local_231.f_23 = { -1069.277f, -2666.156f, 12.665f };
	Local_231.f_33 = 202.9f;
	Local_231.f_26 = { 323.9376f, -956.7155f, 28.346f };
	Local_231.f_34 = 262.6098f;
	Local_231.f_29 = { -1037.711f, -2748.463f, 20.3642f };
}

void func_419(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_420(var uParam0, var uParam1)
{
	func_430(1);
	func_202();
	func_6(&(uParam0->f_244));
	func_429(uParam0);
	uParam0->f_411 = uParam1;
	if (!func_198(Global_106070.f_19069, 4))
	{
		func_173(&(Global_106070.f_19069), 4);
	}
	func_424(uParam0);
	func_422(uParam0);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	uParam0->f_102 = (func_421(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	UI::REQUEST_ADDITIONAL_TEXT("TAXI", 2);
}

int func_421(int iParam0)
{
	return Global_106070.f_19069.f_39[iParam0];
}

void func_422(var uParam0)
{
	switch (func_58(uParam0))
	{
		case 0:
			func_423(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_423(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_423(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_423(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_423(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_423(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_423(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_423(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_423(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_423(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_423(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_424(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_428(uParam0, 3);
			func_427(uParam0, 14);
			break;
		
		case 1:
			func_428(uParam0, 14);
			func_427(uParam0, 8);
			break;
		
		case 2:
			func_428(uParam0, 8);
			func_427(uParam0, 7);
			break;
		
		case 3:
			func_428(uParam0, 15);
			func_427(uParam0, 6);
			break;
		
		case 4:
			func_428(uParam0, 0);
			func_427(uParam0, 3);
			break;
		
		case 5:
			func_428(uParam0, 6);
			func_427(uParam0, 7);
			break;
		
		case 6:
			func_428(uParam0, 8);
			func_427(uParam0, 15);
			break;
		
		case 7:
			func_428(uParam0, 8);
			func_427(uParam0, 14);
			break;
		
		case 8:
			func_428(uParam0, 7);
			func_427(uParam0, 15);
			break;
		
		case 9:
			func_428(uParam0, GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 17));
			iVar0 = func_426((uParam0->f_418.f_2 + GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 17)), 0, 16);
			func_427(uParam0, iVar0);
			func_425(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_425(var uParam0)
{
	switch (uParam0->f_418.f_2)
	{
		case 2:
		case 8:
			uParam0->f_418.f_3 = 1;
			break;
		
		case 0:
		case 3:
		case 5:
		case 9:
		case 15:
			uParam0->f_418.f_3 = 2;
			break;
		
		case 4:
		case 10:
			uParam0->f_418.f_3 = 3;
			break;
		
		case 1:
		case 6:
		case 13:
			uParam0->f_418.f_3 = 4;
			break;
		
		case 11:
			uParam0->f_418.f_3 = 5;
			break;
		
		case 12:
		case 14:
			uParam0->f_418.f_3 = 6;
			break;
		
		case 7:
			uParam0->f_418.f_3 = 7;
			break;
	}
}

int func_426(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam1 > iParam2)
	{
		return -1;
	}
	if (iParam0 >= iParam1 && iParam0 <= iParam2)
	{
		return iParam0;
	}
	iVar0 = 0;
	if (iParam0 < iParam1)
	{
		if (iParam0 < 0)
		{
			iVar0 = -iParam0;
		}
	}
	else if (iParam1 < 0)
	{
		iVar0 = -iParam1;
	}
	iParam0 = (iParam0 + iVar0);
	iParam1 = (iParam1 + iVar0);
	iParam2 = (iParam2 + iVar0);
	iVar1 = (iParam2 - iParam1);
	if (iParam0 > iParam2)
	{
		iVar2 = (iParam0 - iParam2);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam1 + iVar3);
	}
	else
	{
		iVar2 = (iParam1 - iParam0);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam2 - iVar3);
	}
	return (iParam0 - iVar0);
}

void func_427(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_428(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_429(var uParam0)
{
	uParam0->f_2 = PLAYER::PLAYER_PED_ID();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_39() };
	uParam0->f_17 = { func_39() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_135(uParam0, 32, 0);
}

void func_430(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_105126, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
		Global_105120 = 1;
	}
	else
	{
		StringCopy(&Global_105126, "NULL", 24);
		Global_105120 = 0;
	}
}

void func_431()
{
	int iVar0;
	
	func_204(func_211(-1), 1, 1114636288);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_323[iVar0], 0))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_323[iVar0]));
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_274(0));
	func_128(&iLocal_266);
	AUDIO::_FORCE_AMBIENT_SIREN(0);
	PED::SET_CREATE_RANDOM_COPS(true);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::STOP_AUDIO_SCENE("TAXI_CUT_U_IN");
	STREAMING::REMOVE_ANIM_DICT("MOVE_P_M_ZERO_RUCKSACK");
	func_433();
	func_432();
	func_281(&uLocal_45, 0, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_326, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_244))
	{
		OBJECT::DELETE_OBJECT(&iLocal_244);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_432()
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_274(3));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_274(4));
	VEHICLE::REMOVE_VEHICLE_RECORDING(0, func_132(1));
}

void func_433()
{
}

void func_434(int iParam0)
{
	Global_104780.f_22 = iParam0;
}

