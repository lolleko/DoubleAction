#include "cbase.h"
#include "weapon_sdkbase.h"
#include "weapon_akimbobase.h"

#if defined( CLIENT_DLL )
	#define CAkimboBeretta C_AkimboBeretta
	#include "c_sdk_player.h"
#else
	#include "sdk_player.h"
#endif

class CAkimboBeretta : public CAkimboBase
{
public:
	DECLARE_CLASS(CAkimboBeretta, CAkimboBase);
	DECLARE_NETWORKCLASS(); 
	DECLARE_PREDICTABLE();
	DECLARE_ACTTABLE();
	virtual SDKWeaponID GetWeaponID (void) const 
	{
		return SDK_WEAPON_AKIMBO_BERETTA;
	}
	virtual int GetFireMode () const
	{
		return FM_SEMIAUTOMATIC;
	}
};

IMPLEMENT_NETWORKCLASS_ALIASED(AkimboBeretta, DT_AkimboBeretta)

BEGIN_NETWORK_TABLE(CAkimboBeretta, DT_AkimboBeretta)
END_NETWORK_TABLE()

BEGIN_PREDICTION_DATA(CAkimboBeretta)
END_PREDICTION_DATA()

LINK_ENTITY_TO_CLASS(weapon_akimbo_beretta, CAkimboBeretta);
PRECACHE_WEAPON_REGISTER(weapon_akimbo_beretta);

acttable_t CAkimboBeretta::m_acttable[] = 
{
	{ ACT_DA_STAND_IDLE,				ACT_DA_STAND_IDLE_AKIMBO_BERETTA,				false },
	{ ACT_DA_WALK_IDLE,				ACT_DA_WALK_IDLE_AKIMBO_BERETTA,					false },
	{ ACT_DA_RUN_IDLE,					ACT_DA_RUN_IDLE_AKIMBO_BERETTA,					false },
	{ ACT_DA_CROUCH_IDLE,				ACT_DA_CROUCH_IDLE_AKIMBO_BERETTA,				false },
	{ ACT_DA_CROUCHWALK_IDLE,			ACT_DA_CROUCHWALK_IDLE_AKIMBO_BERETTA,			false },
	{ ACT_DA_STAND_READY,              ACT_DA_STAND_READY_AKIMBO_BERETTA,              false },
	{ ACT_DA_WALK_READY,               ACT_DA_WALK_READY_AKIMBO_BERETTA,               false },
	{ ACT_DA_RUN_READY,                ACT_DA_RUN_READY_AKIMBO_BERETTA,                false },
	{ ACT_DA_CROUCH_READY,             ACT_DA_CROUCH_READY_AKIMBO_BERETTA,             false },
	{ ACT_DA_CROUCHWALK_READY,         ACT_DA_CROUCHWALK_READY_AKIMBO_BERETTA,         false },
	{ ACT_DA_PRONECHEST_IDLE,			ACT_DA_PRONECHEST_IDLE_AKIMBO_BERETTA,			false },
	{ ACT_DA_PRONEBACK_IDLE,			ACT_DA_PRONEBACK_IDLE_AKIMBO_BERETTA,			false },

	{ ACT_DA_DRAW,                     ACT_DA_DRAW_AKIMBO_BERETTA,                        false },

	{ ACT_DA_AKIMBO_RIGHT,				ACT_DA_PRIMARYATTACK_AKIMBO_BERETTA_RIGHT,			false },
	{ ACT_DA_AKIMBO_CROUCH_RIGHT,		ACT_DA_PRIMARYATTACK_CROUCH_AKIMBO_BERETTA_RIGHT,	false },
	{ ACT_DA_AKIMBO_PRONE_RIGHT,		ACT_DA_PRIMARYATTACK_PRONE_AKIMBO_BERETTA_RIGHT,	false },
	{ ACT_DA_AKIMBO_SLIDE_RIGHT,		ACT_DA_PRIMARYATTACK_SLIDE_AKIMBO_BERETTA_RIGHT,	false },
	{ ACT_DA_AKIMBO_DIVE_RIGHT,		ACT_DA_PRIMARYATTACK_DIVE_AKIMBO_BERETTA_RIGHT,	false },
	{ ACT_DA_AKIMBO_ROLL_RIGHT,		ACT_DA_PRIMARYATTACK_ROLL_AKIMBO_BERETTA_RIGHT,	false },

	{ ACT_DA_AKIMBO_LEFT,				ACT_DA_PRIMARYATTACK_AKIMBO_BERETTA_LEFT,			false },
	{ ACT_DA_AKIMBO_CROUCH_LEFT,		ACT_DA_PRIMARYATTACK_CROUCH_AKIMBO_BERETTA_LEFT,	false },
	{ ACT_DA_AKIMBO_PRONE_LEFT,		ACT_DA_PRIMARYATTACK_PRONE_AKIMBO_BERETTA_LEFT,	false },
	{ ACT_DA_AKIMBO_SLIDE_LEFT,		ACT_DA_PRIMARYATTACK_SLIDE_AKIMBO_BERETTA_LEFT,	false },
	{ ACT_DA_AKIMBO_DIVE_LEFT,			ACT_DA_PRIMARYATTACK_DIVE_AKIMBO_BERETTA_LEFT,		false },
	{ ACT_DA_AKIMBO_ROLL_LEFT,			ACT_DA_PRIMARYATTACK_ROLL_AKIMBO_BERETTA_LEFT,		false },

	{ ACT_DA_RELOAD,					ACT_DA_RELOAD_AKIMBO_BERETTA,					false },
	{ ACT_DA_RELOAD_CROUCH,			ACT_DA_RELOAD_CROUCH_AKIMBO_BERETTA,				false },
	{ ACT_DA_RELOAD_PRONE,				ACT_DA_RELOAD_PRONE_AKIMBO_BERETTA,				false },
	{ ACT_DA_RELOAD_SLIDE,				ACT_DA_RELOAD_SLIDE_AKIMBO_BERETTA,				false },
	{ ACT_DA_BRAWL,                    ACT_DA_BRAWL_AKIMBO_BERETTA,                    false },
	{ ACT_DA_BRAWL_CROUCH,             ACT_DA_BRAWL_CROUCH_AKIMBO_BERETTA,             false },
	{ ACT_DA_BRAWL_PRONE,              ACT_DA_BRAWL_PRONE_AKIMBO_BERETTA,              false },
	{ ACT_DA_BRAWL_SLIDE,              ACT_DA_BRAWL_SLIDE_AKIMBO_BERETTA,              false },
	{ ACT_DA_BRAWL_DIVE,               ACT_DA_BRAWL_DIVE_AKIMBO_BERETTA,               false },
	{ ACT_DA_BRAWL_ROLL,               ACT_DA_BRAWL_ROLL_AKIMBO_BERETTA,               false },
	{ ACT_DA_JUMP_START,				ACT_DA_JUMP_START_AKIMBO_BERETTA,				false },
	{ ACT_DA_JUMP_FLOAT,				ACT_DA_JUMP_FLOAT_AKIMBO_BERETTA,				false },
	{ ACT_DA_JUMP_LAND,				ACT_DA_JUMP_LAND_AKIMBO_BERETTA,					false },
	{ ACT_DA_DIVE,						ACT_DA_DIVE_AKIMBO_BERETTA,						false },
	{ ACT_DA_DIVEFALL,					ACT_DA_DIVEFALL_AKIMBO_BERETTA,					false },
	{ ACT_DA_DIVEROLL,					ACT_DA_DIVEROLL_AKIMBO_BERETTA,					false },
	{ ACT_DA_ROLL,						ACT_DA_ROLL_AKIMBO_BERETTA,						false },
	{ ACT_DA_SLIDESTART,				ACT_DA_SLIDESTART_AKIMBO_BERETTA,				false },
	{ ACT_DA_SLIDE,					ACT_DA_SLIDE_AKIMBO_BERETTA,						false },
	{ ACT_DA_DIVESLIDE,                ACT_DA_DIVESLIDE_AKIMBO_BERETTA,                false },
	{ ACT_DA_PRONE_TO_STAND,           ACT_DA_PRONE_TO_STAND_AKIMBO_BERETTA,           false },
};
IMPLEMENT_ACTTABLE(CAkimboBeretta);