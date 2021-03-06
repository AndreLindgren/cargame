/*
 * testHeader.h
 * Created 2018-02-21
 * by André Lindgren
 * 
 * Header for all test files
 */

int game (int level, int difficulty);
void clearMatrix(const unsigned char m, const unsigned char n, unsigned char matrix[m][n]);

void insertSprite(const unsigned char m, const unsigned char n, unsigned char pxlMap[m][n], const unsigned char m2, const unsigned char n2, unsigned char sprite[m2][n2], int x, int y);

unsigned char carHit(const unsigned char m, const unsigned char n, unsigned char pxlMap[m][n], const unsigned char carM, const unsigned char carN, unsigned char car[carM][carN], int x, int y);

void moveSprite(double speedX, double speedY, long lastTime, double* x, double* y);

int difficultyMenu(int level);
int chooselevel(void);
void mainMenu(void);
int PauseMenu(void);
int winMenu(void);
int LostMenu(void);
int ruleMenu(void);


extern const unsigned char pMM;
extern const unsigned char pMN;

extern unsigned char template1[16][16];
extern unsigned char template2[16][16];

extern unsigned char truck[16][16];

extern unsigned char house[16][16];

unsigned char skyscraper[16][16];
unsigned char tree[16][16];
unsigned char moose[16][16];
unsigned char dog[16][16];
unsigned char beachball[16][16];
unsigned char palmtree[16][16];
unsigned char crab[16][16];

extern unsigned char templateList[3][16][16];

extern const unsigned char carTemplateM;
extern const unsigned char carTemplateN;
extern unsigned char carTemplate[8][4];

extern const unsigned char boatTemplateM;
extern const unsigned char boatTemplateN;
extern unsigned char boatTemplate[7][5];

const unsigned char goalTemplateM;
const unsigned char goalTemplateN;
unsigned char goalTemplate[16][32];

extern const unsigned char roadTemplateM;
extern const unsigned char roadTemplateN;
extern unsigned char roadTemplate[135][2];

const unsigned char dirtRoadTemplateM;
const unsigned char dirtRoadTemplateN;
unsigned char dirtRoadTemplate[16][32];

const unsigned char oceanTemplateM;
const unsigned char oceanTemplateN;
unsigned char oceanTemplate[16][32];