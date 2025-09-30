#include <stdio.h>



int main(){

    for(int i=0;i<10;i++){
        printf("For: %d\n", i);
    }

    int x=10;

    while(x<10){
        printf("Should not execute because x is not less than 10\n");
        x++;
    }

    x=10;
    do{
        printf("should execute once.\n");
    }while(x<10);

    
    int y = 0;
    loop:
        y++;
        if(y<5){
            printf("Y:%d\n", y);
            goto loop;
        }
    printf("Loop finished.");
    return 0;
}