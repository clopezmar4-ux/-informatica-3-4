#include <stdio.h>
int main(void){
    int a = 5; //  = means assigment
    int b = 5;
    int c = 10; // we created three variables

    printf("%d == %d is %d \n", a, b, a == b); // == means comparison
    printf("%d == %d is %d \n", a, c, a == c); // True = 1,False = 0
    printf("%d != %d is %d \n", a, c, a != c); // != means is not equal

    //Progam that identifies negative number
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if(number < 0) {
        printf("%d is a negative number. \n", number);
    } else { // "else" mean that if the first thing "if" it doesnt apply then that happen
        printf("%d is a positive number. \n", number);
    }
}
