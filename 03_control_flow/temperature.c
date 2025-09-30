#include <stdio.h>


/*

    Classic Celsius-Fahrenheit converter

    if-else

*/


int main(){

    int user_input;
    float result;
    float temperature;

    printf("\n[1] Celsius To Fahrenheit\n");
    printf("[2] Fahrenheit To Celsius\n\n");
    printf(">>> ");
    scanf("%d", &user_input);

    printf("\n\n Enter Temperature >>> ");
    scanf("%f", &temperature);
    if(user_input == 1){
        result = (temperature * 9/5) + 32;
        printf("Result >> %f", result);
    }else if (user_input == 2)
    {
        result = (temperature - 32) * 5/9;
        printf("Result >> %f", result);
    }else{
        printf("Invalid input");
    }
    
}