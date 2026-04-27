#include <stdio.h>
int main(void){
    int f;
    printf("Fahrenheit= ");
    scanf("%d", &f);
    int c= (f-32)/1.8;
    printf("%d°F = %d°C \n", f, c);
    //Fahrenheit and Celcius are the same in -40
}

