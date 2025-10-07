#include <stdio.h>



int main(){


    FILE *fptr;

    fptr = fopen("./10_file_io/build/sample.txt", "w");


    char input[100];
    fgets(input, sizeof(input), stdin);

    fprintf(fptr, "%s", input);
    fclose(fptr);


}