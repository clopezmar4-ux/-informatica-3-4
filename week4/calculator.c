#include <stdio.h>
// 1. Prototype
void n1_ad_n2(void);
void n1_sub_n2(void);
void n1_mul_n2(void);
void n1_div_n2(void);

int main(void){
    int user_response;
    printf("Calculator\n");
    printf("Select an option:\n");
    printf("1. Sum\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d", &user_response);
    if(user_response==1){
        n1_ad_n2();
    }else if (user_response==2){
        n1_sub_n2();
    } else if (user_response==3) {
        n1_mul_n2();
    } else if (user_response==4){
        n1_div_n2();
    } else {
        printf("Sintax error\n");
    }

    }

void n1_ad_n2(void){
   float n1;
   float n2;
    printf("Operation= ");
    scanf("%f+%f", &n1, &n2);
     float t= n1+n2;
    printf("%.2f+%.2f = %.2f\n", n1, n2, t); // 2. Define
}

void n1_sub_n2(void){
    float n1;
   float n2;
    printf("n1= ");
    scanf("%f", &n1);
    printf("n2= ");
    scanf("%f", &n2);
    float t= n1-n2;
    printf("%.2f-%.2f = %.2f\n", n1, n2, t); // 2. Define
}
void n1_mul_n2(void){
    float n1;
   float n2;
    printf("n1= ");
    scanf("%f", &n1);
    printf("n2= ");
    scanf("%f", &n2);
     float t= n1*n2;
    printf("%.2f*%.2f = %.2f\n", n1, n2, t); // 2. Define
}
void n1_div_n2(void){
     float n1;
   float n2;
    printf("n1= ");
    scanf("%f", &n1);
    printf("n2= ");
    scanf("%f", &n2);
    float t= n1/n2;
    printf("%.2f/%.2f = %.2f\n", n1, n2, t);
}
