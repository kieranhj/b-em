extern uint8_t a,x,y,s;
extern uint16_t pc;
extern uint16_t oldpc, oldoldpc, pc3;
typedef struct PREG
{
        int c,z,i,d,v,n;
} PREG;

extern PREG p;


extern int output;
extern int timetolive;
extern int interrupt;
extern int nmi;

extern uint8_t opcode;

extern int romsel;
extern int ram4k, ram8k, ram12k, ram20k;

void m6502_reset();
void m6502_exec();
void m65c02_exec();
void dumpregs();

uint8_t readmem(uint16_t addr);
void writemem(uint16_t addr, uint8_t val);

void m6502_savestate(FILE *f);
void m6502_loadstate(FILE *f);
