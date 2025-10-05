#include <stdio.h>
#include <stdlib.h>

int main() {
    // Sum an array of N integers entered by the user

    int N = 0;

    printf("Enter how many elements for the array >> ");
    scanf("%d", &N);

    // Dynamically allocate memory for N integers in the heap
    int *arr = malloc(sizeof(int) * N); // (sizeof(int) * N) bytes total

    for (int i = 0; i < N; i++) {
        // Get each user input and store it in the array
        printf("\nEnter number: ");
        scanf("%d", &arr[i]);
    }

    int sum = 0;

    for (int i = 0; i < N; i++) {
        // Add each element to the running total
        sum += arr[i];
    }

    printf("\nSum is: %d", sum);

    // Free allocated heap memory
    free(arr);

    return 0;
}
