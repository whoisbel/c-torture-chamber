#include <stdio.h>

int main() {
    int *p;
    int n = 10;

    p = &n;

    printf("Address of p itself: %p\n", &p);
    printf("Address stored in p (address of n): %p\n", p);
    printf("Value pointed to by p (value of n): %d\n", *p);

    return 0;
}
