/* BLUFOR - PNB */
 class Rev_B_PNB_Van_02_Transport_F: Van_02_transport_base_F
 {
    author = $STR_A3_A_BranFlakes;
    //editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_PNB_Van_02_Transport_F";
    class SimpleObject
	{
		eden = 1;
		animate[] = {{"damagehide",0},{"damagehidevez",0},{"damagehidehlaven",0},{"wheel_1_1_destruct",0},{"wheel_1_2_destruct",0},{"wheel_1_3_destruct",0},{"wheel_1_4_destruct",0},{"wheel_2_1_destruct",0},{"wheel_2_2_destruct",0},{"wheel_2_3_destruct",0},{"wheel_2_4_destruct",0},{"wheel_1_1_destruct_unhide",0},{"wheel_1_2_destruct_unhide",0},{"wheel_1_3_destruct_unhide",0},{"wheel_1_4_destruct_unhide",0},{"wheel_2_1_destruct_unhide",0},{"wheel_2_2_destruct_unhide",0},{"wheel_2_3_destruct_unhide",0},{"wheel_2_4_destruct_unhide",0},{"wheel_1_3_damage",0},{"wheel_1_4_damage",0},{"wheel_2_3_damage",0},{"wheel_2_4_damage",0},{"wheel_1_3_damper_damage_backanim",0},{"wheel_1_4_damper_damage_backanim",0},{"wheel_2_3_damper_damage_backanim",0},{"wheel_2_4_damper_damage_backanim",0},{"wheel_1_1",0},{"wheel_2_1",0},{"wheel_1_2",0},{"wheel_2_2",0},{"glass1_destruct",0},{"glass2_destruct",0},{"glass3_destruct",0},{"glass4_destruct",0},{"glass5_destruct",0},{"glass6_destruct",0},{"glass7_destruct",0},{"glass8_destruct",0},{"glass1_destruct_unhide",0},{"glass4_destruct_unhide",0},{"glass5_destruct_unhide",0},{"glass6_destruct_unhide",0},{"glass7_destruct_unhide",0},{"glass8_destruct_unhide",0},{"wheel_1_1_damage",0},{"wheel_1_2_damage",0},{"wheel_2_1_damage",0},{"wheel_2_2_damage",0},{"wheel_1_1_damper_damage_backanim",0},{"wheel_1_2_damper_damage_backanim",0},{"wheel_2_1_damper_damage_backanim",0},{"wheel_2_2_damper_damage_backanim",0},{"drivingwheel",0},{"steering_1_1",0},{"steering_2_1",0},{"indicatorspeed",0},{"indicatorrpm",0},{"fuel",1},{"watchhour",0.2},{"watchminute",0.39},{"compass",0},{"daylights",0},{"pedal_thrust",0},{"dashboard_off",0},{"dashboard",0},{"reverse_light",1},{"reverse_camera",1},{"reverse_camera_hide_ac",1},{"gear_r",1},{"gear_d",1},{"wheel_1_1_damper",0},{"wheel_2_1_damper",0},{"wheel_1_2_damper",0},{"wheel_2_2_damper",0},{"door_1_source",0},{"door_2_source",0},{"door_3_source",0},{"door_3b_source",0},{"door_4_source",0},{"door_4a_source",0},{"door_5_source",0},{"door_5a_source",0},{"hide_door_5_source",0},{"lights_em_1",2786.92},{"lights_em_2",2786.92},{"lights_em_1_flash",2786.92},{"lights_em_2_flash",2786.92},{"lights_em_1_door5",2786.92},{"lights_em_2_door4",2786.92},{"lights_em_1_door5_flash",2786.92},{"lights_em_2_door4_flash",2786.92},{"lights_em_1_door5_main_hide",0},{"lights_em_2_door4_main_hide",0},{"reflective_tape_door1_hide",0},{"reflective_tape_door2_hide",0},{"reflective_tape_door3_hide",0},{"led_lights_door4_hide",0},{"led_lights_door5_hide",0},{"lights_em_1_side_hide",0},{"lights_em_2_side_hide",0},{"lights_em_1_door5_hide",0},{"lights_em_2_door4_hide",0},{"lights_em_1_roof_front_hide",0},{"lights_em_2_roof_front_hide",0},{"lights_em_1_roof_rear_hide",0},{"lights_em_2_roof_rear_hide",0}};
		hide[] = {"zasleh","light_l_hide","light_r_hide","zadni svetlo","brzdove svetlo","clan","podsvit pristroju","poskozeni"};
		verticalOffset = 1.521;
		verticalOffsetWorld = -0.211;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
    scope = public;
  	scopeCurator = public;
    faction = Revolucion_BLU_PNB_F;
	side = TWest;
    crew = Rev_B_PNB_Soldier_F;
	typicalCargo[] = {Rev_B_PNB_Soldier_F};
    weapons[]={PoliceHorn};
    hiddenSelectionsTextures[] = 
    {
        "A3\Soft_F_enoch\Van_02\Data\van_body_ldf_MP_CO.paa",
        "a3\Soft_F_enoch\Van_02\Data\van_wheel_transport_ldf_MP_CO.paa",
        "a3\soft_f_enoch\van_02\data\van_glass_MP_CA.paa",
        "a3\soft_f_enoch\van_02\data\van_body_ldf_MP_CO.paa"
    };
	textureList[] = {Policia,1};
	animationList[] = 
    {
        beacon_front_hide,0,
        beacon_rear_hide,0,
        LED_lights_hide,0,
        reflective_tape_hide,0,
        side_protective_frame_hide,0,
        front_protective_frame_hide,0
    };
 };
 class Rev_B_PNB_Van_02_Vehicle_F: Van_02_vehicle_base_F
 {
     author = $STR_A3_A_BranFlakes;
    //editorPreview = "\A3_Revolucion\EditorPreviews_F_Revolucion\Data\CfgVehicles\Rev_B_PNB_Van_02_Vehicle_F";
    class SimpleObject
	{
		eden=1;
		animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"damagehidevez",
					0
				},
				
				{
					"damagehidehlaven",
					0
				},
				
				{
					"wheel_1_1_destruct",
					0
				},
				
				{
					"wheel_1_2_destruct",
					0
				},
				
				{
					"wheel_1_3_destruct",
					0
				},
				
				{
					"wheel_1_4_destruct",
					0
				},
				
				{
					"wheel_2_1_destruct",
					0
				},
				
				{
					"wheel_2_2_destruct",
					0
				},
				
				{
					"wheel_2_3_destruct",
					0
				},
				
				{
					"wheel_2_4_destruct",
					0
				},
				
				{
					"wheel_1_1_destruct_unhide",
					0
				},
				
				{
					"wheel_1_2_destruct_unhide",
					0
				},
				
				{
					"wheel_1_3_destruct_unhide",
					0
				},
				
				{
					"wheel_1_4_destruct_unhide",
					0
				},
				
				{
					"wheel_2_1_destruct_unhide",
					0
				},
				
				{
					"wheel_2_2_destruct_unhide",
					0
				},
				
				{
					"wheel_2_3_destruct_unhide",
					0
				},
				
				{
					"wheel_2_4_destruct_unhide",
					0
				},
				
				{
					"wheel_1_3_damage",
					0
				},
				
				{
					"wheel_1_4_damage",
					0
				},
				
				{
					"wheel_2_3_damage",
					0
				},
				
				{
					"wheel_2_4_damage",
					0
				},
				
				{
					"wheel_1_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_4_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_4_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_1",
					0
				},
				
				{
					"wheel_2_1",
					0
				},
				
				{
					"wheel_1_2",
					0
				},
				
				{
					"wheel_2_2",
					0
				},
				
				{
					"glass1_destruct",
					0
				},
				
				{
					"glass2_destruct",
					0
				},
				
				{
					"glass3_destruct",
					0
				},
				
				{
					"glass4_destruct",
					0
				},
				
				{
					"glass5_destruct",
					0
				},
				
				{
					"glass6_destruct",
					0
				},
				
				{
					"glass7_destruct",
					0
				},
				
				{
					"glass8_destruct",
					0
				},
				
				{
					"glass1_destruct_unhide",
					0
				},
				
				{
					"glass4_destruct_unhide",
					0
				},
				
				{
					"glass5_destruct_unhide",
					0
				},
				
				{
					"glass6_destruct_unhide",
					0
				},
				
				{
					"glass7_destruct_unhide",
					0
				},
				
				{
					"glass8_destruct_unhide",
					0
				},
				
				{
					"wheel_1_1_damage",
					0
				},
				
				{
					"wheel_1_2_damage",
					0
				},
				
				{
					"wheel_2_1_damage",
					0
				},
				
				{
					"wheel_2_2_damage",
					0
				},
				
				{
					"wheel_1_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_2_damper_damage_backanim",
					0
				},
				
				{
					"drivingwheel",
					0
				},
				
				{
					"steering_1_1",
					0
				},
				
				{
					"steering_2_1",
					0
				},
				
				{
					"indicatorspeed",
					0
				},
				
				{
					"indicatorrpm",
					0
				},
				
				{
					"fuel",
					1
				},
				
				{
					"watchhour",
					0.14
				},
				
				{
					"watchminute",
					0.63999999
				},
				
				{
					"compass",
					0
				},
				
				{
					"daylights",
					0
				},
				
				{
					"pedal_thrust",
					0
				},
				
				{
					"dashboard_off",
					0
				},
				
				{
					"dashboard",
					0
				},
				
				{
					"hide_dashboard2",
					0
				},
				
				{
					"hide_dashboard3",
					0
				},
				
				{
					"hide_light_back_l",
					0
				},
				
				{
					"hide_light_back_r",
					0
				},
				
				{
					"hide_light_back_top",
					0
				},
				
				{
					"hide_reverselight",
					0
				},
				
				{
					"reverse_light",
					1
				},
				
				{
					"reverse_camera",
					1
				},
				
				{
					"reverse_camera_hide_ac",
					1
				},
				
				{
					"gear_r",
					1
				},
				
				{
					"gear_d",
					1
				},
				
				{
					"door_1_source",
					0
				},
				
				{
					"door_2_source",
					0
				},
				
				{
					"door_3_source",
					0
				},
				
				{
					"door_3b_source",
					0
				},
				
				{
					"door_4_source",
					0
				},
				
				{
					"door_4a_source",
					0
				},
				
				{
					"door_5_source",
					0
				},
				
				{
					"door_5a_source",
					0
				},
				
				{
					"hide_door_5_source",
					0
				},
				
				{
					"lights_em_1",
					116.92
				},
				
				{
					"lights_em_2",
					116.92
				},
				
				{
					"lights_em_1_flash",
					116.92
				},
				
				{
					"lights_em_2_flash",
					116.92
				},
				
				{
					"lights_em_1_door5",
					116.92
				},
				
				{
					"lights_em_2_door4",
					116.92
				},
				
				{
					"lights_em_1_door5_flash",
					116.92
				},
				
				{
					"lights_em_2_door4_flash",
					116.92
				},
				
				{
					"lights_em_1_door5_main_hide",
					0
				},
				
				{
					"lights_em_2_door4_main_hide",
					0
				},
				
				{
					"reflective_tape_door1_hide",
					0
				},
				
				{
					"reflective_tape_door2_hide",
					0
				},
				
				{
					"reflective_tape_door3_hide",
					0
				},
				
				{
					"led_lights_door4_hide",
					0
				},
				
				{
					"led_lights_door5_hide",
					0
				},
				
				{
					"lights_em_1_side_hide",
					0
				},
				
				{
					"lights_em_2_side_hide",
					0
				},
				
				{
					"lights_em_1_door5_hide",
					0
				},
				
				{
					"lights_em_2_door4_hide",
					0
				},
				
				{
					"lights_em_1_roof_front_hide",
					0
				},
				
				{
					"lights_em_2_roof_front_hide",
					0
				},
				
				{
					"lights_em_1_roof_rear_hide",
					0
				},
				
				{
					"lights_em_2_roof_rear_hide",
					0
				},
				
				{
					"wheel_1_1_damper",
					0
				},
				
				{
					"wheel_2_1_damper",
					0
				},
				
				{
					"wheel_1_2_damper",
					0
				},
				
				{
					"wheel_2_2_damper",
					0
				}
			};
			hide[]=
			{
				"zasleh",
				"light_l_hide",
				"light_r_hide",
				"zadni svetlo",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.647;
			verticalOffsetWorld=-0.0089999996;
			postinit="[this, '', []] call bis_fnc_initVehicle";
	};
    scope = public;
  	scopeCurator = public;
    faction = Revolucion_BLU_PNB_F;
	side = TWest;
    crew = Rev_B_PNB_Soldier_F;
	typicalCargo[] = {Rev_B_PNB_Soldier_F};
    weapons[]={PoliceHorn};
    animationList[]=
	{
		beacon_front_hide,0,
		beacon_rear_hide,0,
        LED_lights_hide,0,
		reflective_tape_hide,0,
		side_protective_frame_hide,0,
		front_protective_frame_hide,0
	};
	hiddenSelectionsTextures[]=
	{
		"\a3\soft_f_orange\van_02\data\van_body_gen_CO.paa",
		"\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
		"\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa",
		"\a3\soft_f_orange\van_02\data\van_body_gen_CO.paa"
	};
	textureList[]=
	{
		Policia,1
	};
};

/* OPFOR - Policia */
class Rev_O_PNB_Van_02_Transport_F: Rev_B_PNB_Van_02_Transport_F
{
    faction = Revolucion_OPF_PNB_F;
	side = TEast;
    crew = Rev_O_PNB_Soldier_F;
	typicalCargo[] = {Rev_O_PNB_Soldier_F};
};
class Rev_O_PNB_Van_02_Vehicle_F: Rev_B_PNB_Van_02_Vehicle_F
{
    faction = Revolucion_OPF_PNB_F;
	side = TEast;
    crew = Rev_O_PNB_Soldier_F;
	typicalCargo[] = {Rev_O_PNB_Soldier_F};
};