#include <stdio.h>
// var 13
#include <stdint.h>
int main(void){
    uint16_t i, r;
    uint32_t res;
    if (scanf("%hu %hu", &i, &r) != 2){
        printf ("error!\n");
        return 1;
    }
res = (uint32_t)i*r;
printf("r = %hu\n", (unsigned int)r);
printf("i = %hu\n", (unsigned int)i);
printf("resultat i*r = %u\n", (unsigned)res);
printf("uint16_t: %llu byte\n", (unsigned long long)sizeof(uint16_t));
printf("uint32_t: %llu byte\n", (unsigned long long)sizeof(uint32_t));
return 0;
}