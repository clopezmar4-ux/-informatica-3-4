#include <stdio.h>
int main(void)
{
    // Create variables for first snack (Cinnamon rolls)
    float price1 = 15.99;
    int Quatites_available1 = 20;
    char Selection_code1 = 'C';
    //Create variables for second snack (Red velvet Cake)
    float price2 = 20.00;
    int Quatites_available2 = 25;
    char Selection_code2 = 'R';
    // Create variables for first drink (Chocomilk)
    float price3 = 15.99;
    int Quatites_available3 = 20;
    char Selection_code3 = 'H';

    printf("Vending Machine Stock \n");
    printf("---------------------------\n");
    printf("Item name: Cinnamon rolls \n");
    printf("Price: %.2f \n", price1);
    printf("Quantity available: %d \n", Quatites_available1);
    printf("Selection code: %c \n", Selection_code1);
    printf("\n");
     printf("Item name: Chocomilk \n");
    printf("Price: %.2f \n", price3);
    printf("Quantity available: %d \n", Quatites_available3);
    printf("Selection code: %c \n", Selection_code3);
    printf("\n");
    printf("Item name: Red velvet Cake \n");
    printf("Price: %.2f \n", price2);
    printf("Quantity available: %d \n", Quatites_available2);
    printf("Selection code: %c \n", Selection_code2);
    printf("\n");

}


