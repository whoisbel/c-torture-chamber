#include <stdio.h>
#include <math.h> // TO RETURN NAN WHEN CONV_TYPE IS NOT 1 OR 2

float converter(int conv_type, float temperature){
    if(conv_type == 1){
        // Celsius to Fahrenheit
        return (temperature * 9/5) + 32;
    }else if(conv_type == 2){
        //Fahrenheit to Celsius
        return (temperature - 32) * 5/9;
    }else{
        return NAN;
    }
}

int main(){

    //Copied from ./03_control_flow/temperature.c
    int user_input;
    float temperature;
    printf("\n[1] Celsius To Fahrenheit\n");
    printf("[2] Fahrenheit To Celsius\n\n");
    printf(">>> ");
    scanf("%d", &user_input);

    printf("\n\n Enter Temperature >>> ");
    scanf("%f", &temperature);


    printf("Result: %f", converter(user_input, temperature));

}