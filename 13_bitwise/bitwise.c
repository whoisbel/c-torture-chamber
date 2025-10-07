#include <stdio.h>

int main() {
    int a = 2; // 00000010
    int b = 5; // 00000101
    int c = 0;

    // AND -> 1 IF BOTH BITS ARE 1 ELSE 0
    printf("%d\n", a & b); // 0 

    /*
    a =  00000010
    b =  00000101
    c =  00000000
    */

    // OR -> 1 IF ONE OF THE BITS IS 1, ZERO IF BOTH ARE 0
    printf("%d\n", a | b); // 7

    /*
    a =  00000010
    b =  00000101
    c =  00000111 // 7
    */

    // XOR -> 1 IF ONLY ONE OF THE BITS IS 1, BUT NOT BOTH
    printf("%d\n", a ^ b); // 7 (not |)

    /*
    a =  00000010
    b =  00000101
    c =  00000111 // 7
    */

    // << -> SHIFT BITS TO THE LEFT BY N
    printf("%d\n", a << 2); // 8

    /*
    a =  00000010
    << 2
    a =  00001000  // 8
    */

    // >> -> SHIFT BITS TO THE RIGHT BY N
    printf("%d\n", a >> 2); // 0

    /*
    a =  00000010
    >> 2
    a =  00000000  // 0
    */
}
