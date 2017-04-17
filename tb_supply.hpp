class TacBF
{
	class Supply
	{
		// Generates cargo IDs (More effecient broadcasting for these items + their ammo)
		staticWeapons[] = {"B_HMG_01_high_F","RHS_MK19_TriPod_WD", "RHS_AGS30_TriPod_MSV", "rhs_SPG9M_MSV", "RHS_M2StaticMG_MiniTripod_D", "RHS_M2StaticMG_D", "rhs_KORD_high_MSV", "rhs_KORD_MSV", "rhsgref_ins_DSHKM", "rhsgref_ins_DSHKM_Mini_TriPod", "RHS_M252_D", "rhs_2b14_82mm_msv", "RHS_TOW_TriPod_D", "rhs_Metis_9k115_2_msv", "rhs_D30_msv", "RHS_ZU23_MSV", "RHS_M119_D"};

		class CargoCollections
		{
			class rds_westFO {
				transportClear = 1;
				cargo[] = {{"RHS_M2StaticMG_D", 2, 4},
				{"RHS_M2StaticMG_MiniTripod_D", 3, 5},
//				{"RHS_TOW_TriPod_D", 1, 0},
				};
			};

			class rds_eastFO {
				transportClear = 1;
				cargo[] = {{"rhs_KORD_high_MSV", 1, 2},
				{"rhs_KORD_MSV", 1, 2},
				{"rhsgref_ins_DSHKM_Mini_TriPod", 2, 3},
				{"rhsgref_ins_DSHKM", 1, 2},
//				{"rhs_Metis_9k115_2_msv", 1, 0},
									};
			};

			class statics_westSmall {
				transportClear = 1;
				cargo[] = {{"RHS_M2StaticMG_MiniTripod_D", 2, 4},
				{"RHS_M2StaticMG_D", 2, 4},
//				{"RHS_M252_D", 1, 3},
				{"ICE_emptySandbagsCrate_supply", 8,0},
				};
			};

			class statics_eastSmall {
				transportClear = 1;
				cargo[] = {{"rhs_KORD_high_MSV", 1, 2},
				{"rhs_KORD_MSV", 1, 2},
				{"rhsgref_ins_DSHKM", 1, 2},
				{"rhsgref_ins_DSHKM_Mini_TriPod", 1, 2},
//				{"rhs_2b14_82mm_msv", 1, 3},
				{"ICE_emptySandbagsCrate_supply", 8,0},
				};
			};

			class statics_westHeavy {
				transportClear = 1;
				cargo[] = {{"RHS_M2StaticMG_MiniTripod_D", 2, 4},
				{"RHS_M2StaticMG_D", 4, 6},
				{"RHS_TOW_TriPod_D", 2, 3},
				{"ICE_emptySandbagsCrate_supply", 8,0},
				};
			};

			class statics_eastHeavy {
				transportClear = 1;
				cargo[] = {{"rhs_KORD_high_MSV", 2, 4},
				{"rhs_KORD_MSV", 1, 2},
				{"rhsgref_ins_DSHKM", 2, 4},
				{"rhsgref_ins_DSHKM_Mini_TriPod", 1, 2},
				{"rhs_Metis_9k115_2_msv", 2, 3},
				{"ICE_emptySandbagsCrate_supply", 8,0},
				};
			};

			class statics_westArty {
				transportClear = 1;
				cargo[] = {{"RHS_M119_D", -0, 4}};
			};

			class statics_eastArty {
				transportClear = 1;
				cargo[] = {{"rhs_D30_msv", -0, 4}};
			};
			class statics_eastAAA {
				transportClear = 1;
				cargo[] = {{"RHS_ZU23_MSV", 2, 8}};
			};
			class statics_eastAAA_ammo {
				transportClear = 1;
				cargo[] = {{"RHS_ZU23_MSV", -0, 8}};
			};
			class statics_eastAmmo {
				transportClear = 1;
				cargo[] = {{"RHS_ZU23_MSV", -0, 10}};
			};
			class statics_westAmmo {
				transportClear = 1;
				cargo[] = {{"RHS_ZU23_MSV", -0, 10}};
			};


		};
		class Containers
		{
			class ICE_ForwardOutpost_container_WestMG
			{
				crateCollection = "rds_westFO";
				crateMass = 1750;
			};

			class ICE_ForwardOutpost_container_EastMG
			{
				crateCollection = "rds_eastFO";
				crateMass = 1750;
			};
		};
	};
};
