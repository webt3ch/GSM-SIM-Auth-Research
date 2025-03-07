#include "a3a8.h"

void a3a8(unsigned char *rand, unsigned char *sres, unsigned char *kc) {
    for(int i = 0; i < 4; i++) sres[i] = rand[i] ^ 0xAA;
    for(int i = 0; i < 8; i++) kc[i] = rand[8+i] ^ 0x55;
}
