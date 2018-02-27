#include "testHeader.h"

const unsigned char pMM = 128;
const unsigned char pMN = 32;
unsigned char pMTemplate[128][32];

unsigned char template1[16][16] = { 
	{0, 0, 0, 0, 1} ,
	{0, 0, 0, 0, 1} ,
	{0, 0, 0, 0, 1} ,
	{0, 0, 0, 0, 1} ,	
	{0, 0, 0, 0, 1} ,
};

unsigned char template2[16][16] = { 
	{1, 1, 1, 1, 0} ,
	{1, 1, 1, 1, 0} ,
	{1, 1, 1, 1, 0} ,
};


unsigned char truck[16][16] = {
	{0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0},
	{0,0,1,1, 1,1,0,0, 0,0,0,0, 0,0,0,0},
	{0,0,1,1, 1,1,0,0, 0,0,0,0, 0,0,0,0},
	{0,1,1,1, 1,1,1,0, 0,0,0,0, 0,0,0,0},
	{0,1,1,1, 1,1,1,0, 0,0,0,0, 0,0,0,0},
	{0,0,1,1, 1,1,0,0, 0,0,0,0, 0,0,0,0},
	{0,0,1,1, 1,1,0,0, 0,0,0,0, 0,0,0,0},
	{0,1,1,1, 1,1,1,0, 0,0,0,0, 0,0,0,0},
	{0,1,1,1, 1,1,1,0, 0,0,0,0, 0,0,0,0},
	{0,0,1,1, 1,1,0,0, 0,0,0,0, 0,0,0,0},
	{0,0,1,1, 1,1,0,0, 0,0,0,0, 0,0,0,0},
	{0,1,1,1, 1,1,1,0, 0,0,0,0, 0,0,0,0},
	{0,1,1,1, 1,1,1,0, 0,0,0,0, 0,0,0,0},
	{1,1,1,1, 1,1,1,1, 0,0,0,0, 0,0,0,0},
	{0,1,1,1, 1,1,1,0, 0,0,0,0, 0,0,0,0},
	{0,0,1,1, 1,1,0,0, 0,0,0,0, 0,0,0,0},
};


const unsigned char carTemplateM = 8;
const unsigned char carTemplateN = 4;
unsigned char carTemplate[8][4] = { 
	{1, 0, 0, 1} ,
	{1, 1, 1, 1} ,
	{1, 1, 1, 1} ,
	{0, 1, 1, 0} ,
	{0, 1, 1, 0} ,
	{1, 1, 1, 1} ,
	{1, 1, 1, 1} ,
	{1, 0, 0, 1} ,
};

const unsigned char roadTemplateM = 135;
const unsigned char roadTemplateN = 2;
unsigned char roadTemplate[135][2] = { 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{0, 0}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1}, 
	{1, 1},
}; 