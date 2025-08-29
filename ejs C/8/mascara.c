#include <stdio.h>
#include <stdint.h>

int main(){
    uint32_t word1 = 0xA1234567;
    uint32_t word2 = 0x12345685;
    uint32_t mask1 = 0xE0000000;
    uint32_t mask2 = 0x7;

    uint32_t res1 = word1 & mask1;
    uint32_t res2 = word2 & mask2;
    res2 = res2 << 29;

    printf("%d\n", res1==res2);

    return 0;
}
