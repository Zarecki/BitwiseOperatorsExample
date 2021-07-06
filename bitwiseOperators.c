// Bitwise operator examples

#include <stdio.h>

int main(){

    unsigned int a = 60; // 0011 1100
    unsigned int b = 13; // 0000 1101
    int andResult = 0;

    andResult = a & b; //0000 1100

    printf("60 'Bitwise And' 13\nresult is: %d\n\n", andResult);

    return 0;
}