#ifndef _structs_
#define _structs_

////////////////////////////////////////////////////////////////////////////////////////
//structs
///////////////////////////////////////////////////////////////////////////////////////

struct arrow{
	unsigned char name;
	unsigned char arr_C[8];
	unsigned char arr_B[8];
	unsigned char length;
};

struct game{
	unsigned char lvl[6];
	unsigned short gamespeed;
	unsigned short gameplay;
};
	
struct health_bar{
	unsigned char xs[10];
};

struct game_score{
	unsigned char points[5];
	};

struct menu_led{
	unsigned char pc;
	unsigned char pb;
	unsigned short cnt;
	};




#endif