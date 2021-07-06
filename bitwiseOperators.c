// Bitwise operator examples

#include <stdio.h>

int main(){

    unsigned int a = 60; // 0011 1100
    unsigned int b = 13; // 0000 1101
    int andResult = 0;
    int orResult = 0;
    int xorResult = 0;
    int complementA = 0;
    int leftShiftedA = 0;

    andResult = a & b; // 0000 1100
    orResult = a | b;  // 0011 1101
    xorResult = a ^ b; // 0011 0001
    complementA = ~a;  // 1100 0011
    leftShiftedA = a << 2; // 1111 0000

    printf("60 'Bitwise And' 13\nresult is: %d\n\n", andResult);
    printf("60 'Bitwise Or' 13\nresult is: %d\n\n", orResult);
    printf("60 'Bitwise Exclusive Or' 13\nresult is: %d\n\n", xorResult);
    printf("'Bitwise Complement' 60\nresult is: %d\n\n", complementA);
    printf("'Right shift' 60 by 2\nresult is: %d\n\n", leftShiftedA);

    return 0;
}