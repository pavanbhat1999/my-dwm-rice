//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
    {"speed:", "netspeed",1,0},
    {" 🐧 ", "/opt/dwmblocks-distrotube-git/scripts/kernel",		    360,		        2},

	{" 🔺 ", "/opt/dwmblocks-distrotube-git/scripts/upt",		        60,		            2},

	{" 📦 ", "/opt/dwmblocks-distrotube-git/scripts/pacupdate",		360,		        9},
	
	{" 💻 ", "/opt/dwmblocks-distrotube-git/scripts/memory",	        6,		            1},

	{" 🔊 ", "/opt/dwmblocks-distrotube-git/scripts/volume",			2,		            10},

    {"🔋","cat /sys/class/power_supply/BAT0/capacity",2,0},
    {"BRI:","/opt/dwmblocks-distrotube-git/scripts/brightness",1,0},


	{" 🕑 ", "/opt/dwmblocks-distrotube-git/scripts/clock",			5,		            0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
