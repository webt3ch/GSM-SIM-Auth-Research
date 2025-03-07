#include "a3a8.h"
#include <assert.h>

void test_a3a8() {
    unsigned char rand[16] = {0};
    unsigned char sres[4], kc[8];
    a3a8(rand, sres, kc);

    for(int i = 0; i < 4; i++) assert(sres[i] == 0xAA);
    for(int i = 0; i < 8; i++) assert(kc[i] == 0x55);
}

int main() {
    test_a3a8();
    return 0;
}
