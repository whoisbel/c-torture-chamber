#include <stdio.h>
#include <string.h>


int main(){

    int arr[5] = {1,2,3,4,5};

    for(int i=0;i<5;i++){
        if(i == 0){
            printf("[%d,", arr[i]);
        }else if(i==4){
            printf("%d]", arr[i]);
        }else{
            printf("%d,", arr[i]);
        }
    }

    // 13 Character string
    char str[] = "Hello, World!";

    printf("\n%s", str);
    // Sizeof will display 14 because of null terminator or '\0'
    printf("\n%zu", sizeof(str));
    // Strlen will display 13 because it's the visible characters.
    printf("\n%zu", strlen(str));

}