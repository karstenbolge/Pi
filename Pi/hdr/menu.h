#ifndef _MENU_H_
#define _MENU_H_

#include <stdint.h>

void openMenu();
void menuUp();
void menuDown();
void menuExit();
void menuEnter();
uint8_t isMenuOpen();

#define MENU_BOOKKEEPINGS 1
#define MENU_MAIN_AUDITS 2
#define MENU_AVERAGE_BALL_TIME 3
#define MENU_TOTAL_PLAYS 4
#define MENU_REPLAY_AWARDS 5 // NOT_USED
#define MENU_EXTRA_BALLS 6
#define MENU_PERCENT_EXTRA_BALLS 7

#define MENU_LEFT_DRAINS 37
#define MENU_RIGHT_DRAINS 38
#define MENU_TIME_PER_GAME 39
#define MENU_PLAY_TIME 40
#define MENU_BALLS_PLAYED 41
#define MENU_TILTS 42
#define MENU_LEFT_FLIPPER 43
#define MENU_RIGHT_FLIPPER 44

#define MENU_STANDARD_AUDITS 8
#define MENU_FEATURE_AUDITS 9
#define MENU_HISTOGRAMS 10
#define MENU_HISTOGRAM_SCORES 45
#define MENU_HISTOGRAM_GAME_TIME 46
#define MENU_TIME_STAMP 11
#define MENU_CURRENT_TIME 47
#define MENU_LAST_GAME_START 48
#define MENU_LAST_FACTORE_RESET 49
#define MENU_LAST_HIGHSCORE_RESET 50
#define MENU_TEST_MENU 12
#define MENU_SWITCH_EDGE 13
#define MENU_SWITCH_LEVELS 14
#define MENU_SINGLE_SWITCH_TEST 15
#define MENU_SOLENOID_TEST 16
#define MENU_FLASHER_TEST 17
#define MENU_G_I_TEST 18
#define MENU_SOUND_AND_MUSIC_TEST 19
#define MENU_SINGLE_LAMP_TEST 20
#define MENU_ALL_LAMPS_TEST 21
#define MENU_DISPLAY_TEST 22
#define MENU_FLIPPER_COIL_TEST 23
#define MENU_UTILITIES 24
#define MENU_CLEAR_AUTIDS 25
#define MENU_RESET_H_S_T_D 26
#define MENU_SET_TIME_AND_DATE 27
#define MENU_SET_CUSTOM_MESSAGE 28
#define MENU_SET_GAME_ID 29
#define MENU_FACTORY_ADJUSTMENTS 30
#define MENU_FACTORY_RESET 31
#define MENU_ADJUSTMENTS 32
#define MENU_STANDARD_ADJUSTMENTS 33
#define MENU_FEATURE_ADJUSTMENTS 34
#define MENU_H_S_T_D_ADJUSTMENTS 35

#define MENU_BALLS_PER_GAME 36

#define MENU_LINES_COUNT 8

/*Bookkeepings
		Main audits
			Avarage ball time
			Total plays
			//Replay awards
			Extra balls
			Percent extra balls
		Standard audits
			Left Drains
      Right Drains
      Time Per Game
      PlayTime
      Balls Played
      Tilts
      Left Flipper
      Right Flipper
		Feature audits
		Histograms
      Score
      Game time
		Time-stamps
      Current time
      Last game start
      Last factory reset
      Last highscore reset
Test menu
		Switch edge
		Switch levels
		Singles switch test
		Solenoid test
		Flasher test
		G.I Test
		Sound and music test
		Single lamp test
		All lamps test
		Lamp and flasher test
		Display test
		Flipper coil test
Utilities
		Clear audits
		Reset H.S.T.D.
		Set time and date
		Set Custom message
		Set game id
		Factory adjustments
		Factory reset
Adjustments
		Standard adjustements
      Balls per game, def 3
      Tilt warnings, def 3
      Maximum extra balls, def 4
      Maximum extra ball per ball in play (offered) def OFF
      Tournament
      Decimal separator
      Game restart NEVER, SLOW, INSTANT def SLOW
		Feature adjustments
      //Buy-In Extra Balls makes no sense when no coi-door
      Ball saves
      Ball save time
      First hard lock ?
		H.S.T.D. adjustments*/

#endif