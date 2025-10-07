#include <stdio.h>



int main(){

    int arr[5] = {1,2,3,4,5};

    int target = 3;

    int i = 0;
    while(i<5){
        if(arr[i] == target){
            printf("Target found at index %d", i);
            break;
        }
        i++;
    }

}