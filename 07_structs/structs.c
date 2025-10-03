#include <stdio.h>

struct coordinates{
    int x;
    int y;
    char mapName[5];
};

int main(){

    struct coordinates map;

    map.x = 10;
    map.y = 25;

    printf("X = %d\n", map.x);
    printf("Y = %d\n", map.y);
    

    // mapName[5] = 5 bytes
    // int x + int y = 8 bytes
    // raw total = 13 bytes
    //
    // BUT: on most systems, ints require 4-byte alignment
    // So the compiler inserts **3 padding bytes after mapName** 
    // (not before it — the padding is at the end to make the struct’s 
    // total size a multiple of the largest member’s alignment, which is 4).
    //
    // Total size = 16 bytes


    printf("Size of coordinates: %zu\n", sizeof(map));
}