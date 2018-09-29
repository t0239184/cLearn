#include <stdio.h>

int main(void){
    int b = 2;
    int* pointer = &b;

    printf("b        -> Val : %d\n", b);
    printf("&b       -> Addr: %p\n", &b);
    printf("*&b      -> Val : %d\n", *&b);
    printf("pointer  -> Val : %p\n", pointer);
    printf("*pointer -> Val : %d\n", *pointer);
    printf("\n");

    *pointer = 100;

    printf("*pointer -> Val : %d\n", *pointer);
    printf("b        -> Val : %d\n", b);
    printf("&pointer -> Addr: %p\n", &pointer);
    
    return 0;
}
