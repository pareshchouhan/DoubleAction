#pragma once

// Keep this as just a number and increment it, don't do '12a' or '12.2' or atoi() will break.
#define DA_VERSION "2"

#define PANEL_FOLDER "folder"

#define SDK_DEFAULT_PLAYER_RUNSPEED    230
#define SDK_DEFAULT_PLAYER_SPRINTSPEED 330
#define SDK_DEFAULT_PLAYER_PRONESPEED  100
#define SDK_DEFAULT_PLAYER_SLIDESPEED  320
#define SDK_DEFAULT_PLAYER_ROLLSPEED   200

typedef enum
{
	STYLE_SOUND_NONE,
	STYLE_SOUND_SMALL,
	STYLE_SOUND_LARGE,
	STYLE_SOUND_KNOCKOUT,
} style_sound_t;

typedef enum
{
	STYLE_POINT_SMALL,
	STYLE_POINT_LARGE,
	STYLE_POINT_STYLISH,
} style_point_t;

typedef enum {
	ANNOUNCEMENT_NONE=0,
	ANNOUNCEMENT_COOL,
	ANNOUNCEMENT_STYLISH,
	ANNOUNCEMENT_DIVE,
	ANNOUNCEMENT_DIVE_KILL,
	ANNOUNCEMENT_SLIDE,
	ANNOUNCEMENT_SLIDE_KILL,
	ANNOUNCEMENT_STUNT,
	ANNOUNCEMENT_STUNT_KILL,
	ANNOUNCEMENT_THROUGH_WALL,
	ANNOUNCEMENT_LAST_BULLET,
	ANNOUNCEMENT_LONG_RANGE,
	ANNOUNCEMENT_LONG_RANGE_KILL,
	ANNOUNCEMENT_DOUBLE_KILL,
	ANNOUNCEMENT_GRENADE,
	ANNOUNCEMENT_GRENADE_KILL,
	ANNOUNCEMENT_SLOWMO_KILL,
	ANNOUNCEMENT_TACTICOOL,
	ANNOUNCEMENT_BRAWL,
	ANNOUNCEMENT_BRAWL_KILL,
	ANNOUNCEMENT_DIVEPUNCH,
	ANNOUNCEMENT_SLIDEPUNCH,
	ANNOUNCEMENT_HEADSHOT,
	ANNOUNCEMENT_POINT_BLANK,
	ANNOUNCEMENT_EXECUTION,
	TOTAL_ANNOUNCEMENTS
} announcement_t;

typedef enum {
	NOTICE_MARKSMAN,
	NOTICE_TROLL,
	NOTICE_BOUNCER,
	NOTICE_ATHLETIC,
	NOTICE_SUPERSLO,
	NOTICE_RESILIENT,
	NOTICE_SLOMO,
	NOTICE_STYLESTREAK,
	NOTICE_WORTHIT,

	NOTICE_FIRST_TOPNOTICE,
	NOTICE_CAPTURE_BRIEFCASE = NOTICE_FIRST_TOPNOTICE,
	NOTICE_PLAYER_HAS_BRIEFCASE,
	NOTICE_PLAYER_CAPTURED_BRIEFCASE,

	NOTICE_BOUNTY_ON_PLAYER,
	NOTICE_BOUNTY_COLLECTED,
	NOTICE_BOUNTY_LOST,

	NOTICE_RATRACE_START,
	NOTICE_RATRACE_PLAYER_LEAD,
	NOTICE_RATRACE_PLAYER_POINT_2,
	NOTICE_RATRACE_OVER,

	/*NOTICE_DENIED*/
	TOTAL_NOTICES
} notice_t;

typedef enum
{
	MINIOBJECTIVE_NONE = 0,
	MINIOBJECTIVE_BRIEFCASE,
	MINIOBJECTIVE_BOUNTY,
	MINIOBJECTIVE_RATRACE,
	MINIOBJECTIVE_MAX,
} miniobjective_t;

typedef enum {
	WT_NONE = 0,
	WT_MELEE,
	WT_RIFLE,
	WT_SHOTGUN,
	WT_SMG,
	WT_PISTOL,
	WT_GRENADE,

	WT_MAX
} weapontype_t;
