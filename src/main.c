#include "a3a8.h"
#include "apdu_handler.h"

int main() {
    unsigned char rand[16] = {0x12,0x34,0x56,0x78,0x90,0xAB,0xCD,0xEF,
                              0xFE,0xDC,0xBA,0x09,0x87,0x65,0x43,0x21};

    unsigned char sres[4];
    unsigned char kc[8];

    a3a8(rand, sres, kc);

    printf("SRES: ");
    for(int i=0; i<4; i++) printf("%02X", sres[i]);
    printf("\nKc: ");
    for(int i=0; i<8; i++) printf("%02X", kc[i]);
    printf("\n");

    return 0;
}
