#include <stdio.h>
#include <string.h>

int main(){

    int age;
    char name[100];

    printf("Enter your full name >> ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = 0; //REMOVE NEWLINE

    printf("Enter Age >> ");
    scanf("%d", &age);

    printf("Your name is %s and your age is %d", name, age);
    
}