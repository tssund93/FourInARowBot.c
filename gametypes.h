#ifndef __GAMETYPES_H
#define __GAMETYPES_H

#define WIN_LENGTH	4
#define WIN_SCORE	100000
#define ALPHABETA_LEVEL	7
#define STRATEGY_BONUS	500
#define TIMEBANK_LOW	2000

#define TRUE 1
#define FALSE 0

#define MAX_FIELD_COLUMNS 10
#define MAX_FIELD_ROWS 10

struct Settings {
	int		timebank;
	int		time_per_move;
	int		your_botid;
	int		their_botid;
	int		field_columns;
	int		field_rows;
	char	*player_names;
	char	*player_name1;
	char	*player_name2;
	char	*your_bot;
};

struct Game {
	struct Settings	settings;
	int				round;
	int				field[MAX_FIELD_COLUMNS][MAX_FIELD_ROWS];
	int				time_remaining;
} game;

#endif
