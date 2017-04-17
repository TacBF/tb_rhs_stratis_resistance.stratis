#include "tb_defines.hpp"
//Mission:
zoneList[] =
{
//ID and PROFILE = not used
//LINK = zones capturable after this one
//DEPEND = auto-capture/enable upon these zones being held
//DEPQTY = quantity of zones required for DEPEND i.e. can have only 2 of the 3 zones in DEPEND required
//SYNC = required zones for progression

//ID TEAM          	SPAWNTYPE       LINK         	SYNC  	PROFILE   DEPEND     DEPQTY  ZONE_DESC
{ 0, 0           , 0          ,    	{}         	, {}	, 1      , {}        , 0      },

{ 1, TEAM_BLUE, 	SPAWN_XRAY ,       {2}      	, {}	, 1      , {}        , 0    , "%3" },

{ 2, TEAM_BLUE, 	SPAWN_NEVER,       {1,3}      , {}	, 1      , {}        , 0    , "Rog" },

{ 3, TEAM_BLUE, 	SPAWN_NEVER,       {4,2}      , {}	, 1      , {}        , 0    , "Radar" },

{ 4, TEAM_NEUTRAL, 	SPAWN_NEVER,     {5,3}  		, {}	, 1      , {}        , 0    , "Baricades" },

{ 5, TEAM_NEUTRAL, 	SPAWN_NEVER,     {6,4}      , {}	, 1      , {}        , 0    , "Old Post" },

{ 6, TEAM_RED,  SPAWN_NEVER ,        {7,5}      , {}	, 1      , {}        , 0    , "Air Station" },

{ 7, TEAM_RED, 	  SPAWN_NEVER,       {6,8}      , {}	, 1      , {}        , 0    , "Max" },

{ 8, TEAM_RED, 		  SPAWN_XRAY,      {7}     		, {} 	, 1      , {}        , 0    , "%3" },

{9, TEAM_NEUTRAL, SPAWN_INSTANT,     {}         ,{}   , 1      , {1,4,5}   , 3    , "%4: 1" },

{10, TEAM_NEUTRAL, SPAWN_INSTANT,    {}         , {}  , 1      , {8,4,5}   , 3    , "%4: 1" }


};
