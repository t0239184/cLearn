#include <stdio.h>
#include <stdint.h>

int main(){
    printf("-------------------------------------------\n");
    printf("char        : %lu bytes\n",sizeof(char));
    printf("short       : %lu bytes\n",sizeof(short));
    printf("int         : %lu bytes\n",sizeof(int));
    printf("long        : %lu bytes\n",sizeof(long));
    printf("double      : %lu bytes\n",sizeof(double));
    printf("long double : %lu bytes\n",sizeof(long double));
    printf("-------------------------------------------\n");
    printf("include <stdint.h>!!\n");
    printf("-------------------------------------------\n");
    printf("\n");
    printf("int8_t   : %lu bytes\n",sizeof(int8_t));
    printf("int16_t  : %lu bytes\n",sizeof(int16_t));
    printf("int32_t  : %lu bytes\n",sizeof(int32_t));
    printf("int64_t  : %lu bytes\n",sizeof(int64_t));
    printf("uint8_t  : %lu bytes\n",sizeof(uint8_t));
    printf("uint16_t : %lu bytes\n",sizeof(uint16_t));
    printf("uint32_t : %lu bytes\n",sizeof(uint32_t));
    printf("uint64_t : %lu bytes\n",sizeof(uint64_t));
    printf("-------------------------------------------\n");
    return 0;
}

