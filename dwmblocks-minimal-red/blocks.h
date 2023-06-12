//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
	{" Uptime ", "/home/avneesh/.local/src/dwm/scripts/upt", 6, 3 },
	{"", "/home/avneesh/.local/src/dwm/scripts/volume",	 120,		         10},

	{" Battery ", "/home/avneesh/.local/src/dwm/scripts/battery", 20,            10},

	{" Time ", "echo -e $(date +\"%a, %B %d %l:%M%p\"| sed 's/  / /g')",  60,		          0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '/';
