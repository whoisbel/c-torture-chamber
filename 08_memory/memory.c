#include <stdio.h>

int main() {
    printf("char = %zu bytes\n", sizeof(char));
    printf("short = %zu bytes\n", sizeof(short));
    printf("int = %zu bytes\n", sizeof(int));
    printf("long = %zu bytes\n", sizeof(long));
    printf("long long = %zu bytes\n", sizeof(long long));
    printf("float = %zu bytes\n", sizeof(float));
    printf("double = %zu bytes\n", sizeof(double));
    printf("long double = %zu bytes\n", sizeof(long double));
    printf("_Bool = %zu bytes\n", sizeof(_Bool));
    printf("void* = %zu bytes\n", sizeof(void*));


    int arr[4] = {1,2,3,4}; // 16 bytes

    printf("Size of array: %zu\n", sizeof(arr));
    
    for (int i = 0; i < 4; i++) {
        printf("Element %d address: %p\t(each address is %zu bytes apart)\n",
            i, (void*)&arr[i], sizeof(arr[0]));
    }

    return 0;
}