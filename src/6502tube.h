void tube_6502_init_cpu();
void tube_6502_reset();
void tube_6502_exec();
void tube_6502_close();
void tube_6502_mapoutrom();

uint8_t tubereadmeml(uint16_t addr);

extern uint8_t tubea, tubex, tubey, tubesp;
extern uint16_t tubepc;

typedef struct TUBEPREG
{
	int c, z, i, d, v, n;
} TUBEPREG;

extern TUBEPREG tubep;
