#include <stdio.h>
// 1. Prototype
void c_to_f(void);
void f_to_c(void);

int main(void){
    int user_response;
    printf("Tempeature Convert\n");
    printf("Select an option:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    scanf("%d", &user_response);
    if(user_response==1){
        c_to_f();
    }else if (user_response==2){
        f_to_c();
    } else {
        printf("Invalid option\n");
    }

}


void c_to_f(void){
   int c;
    printf("Celsius= ");
    scanf("%d", &c);
    int f= (c*1.8)+32;
    printf("%d°C = %d°F \n", c, f); // 2. Define
}

void f_to_c(void){
     int f;
    printf("Fahrenheit= ");
    scanf("%d", &f);
    int c= (f-32)/1.8;
    printf("%d°F = %d°C \n", f, c);
}


