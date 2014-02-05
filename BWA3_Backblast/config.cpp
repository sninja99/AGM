class CfgPatches {
  class BWA3_Backblast {
    units[] = {};
    weapons[] = {};

    requiredVersion = 0.1;
    requiredAddons[] = {"A3_Weapons_F", "Extended_EventHandlers"};
  };
};

class CfgFunctions {
  class BWA3_Backblast {
    class BWA3_Backblast {
        file = "bwa3_backblast\functions";
      class launcherBackblast {};
    };
  };
};

class Extended_FiredNear_EventHandlers {
  class CAManBase {
    class BWA3_FiredNear {
      FiredNear = "if (local (_this select 0) && {getNumber (configfile >> 'CfgWeapons' >> (_this select 3) >> 'BWA3_Backblast_Damage') > 0}) then {_this call BWA3_Backblast_fnc_launcherBackblast}";
    };
  };
};

class CfgWeapons {
  class Launcher_Base_F {
    BWA3_Backblast_Angle = 60;
    BWA3_Backblast_Range = 5;
    BWA3_Backblast_Damage = 0.5;
  };
  
  class launch_Titan_short_base {
    BWA3_Backblast_Angle = 40;
    BWA3_Backblast_Range = 3;
    BWA3_Backblast_Damage = 0.4;
  };
  class launch_Titan_base {
    BWA3_Backblast_Angle = 40;
    BWA3_Backblast_Range = 3;
    BWA3_Backblast_Damage = 0.2;
  };
  
  class launch_NLAW_F {
    BWA3_Backblast_Angle = 40;
    BWA3_Backblast_Range = 5;
    BWA3_Backblast_Damage = 0.5;
  };
  class launch_RPG32_F {
    BWA3_Backblast_Angle = 60;
    BWA3_Backblast_Range = 10;
    BWA3_Backblast_Damage = 0.5;
  };
  
  class BWA3_Pzf3 {
    BWA3_Backblast_Angle = 60;
    BWA3_Backblast_Range = 10;
    BWA3_Backblast_Damage = 0.5;
  };
  class BWA3_RGW90 {
    BWA3_Backblast_Angle = 60;
    BWA3_Backblast_Range = 2;
    BWA3_Backblast_Damage = 0.5;
  };
};
