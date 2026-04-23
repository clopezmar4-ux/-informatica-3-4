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

    printf("Welcome to the Snack Shop! \n");
    printf("---------------------------\n");
    printf("Item\t\t\tPrice\tQuantity\tCode \n");
    printf("Cinnamon rolls\t\t$%.2f\t%d\t\t%c \n", price1, Quatites_available1, Selection_code1);
    printf("Red velvet Cake\t\t$%.2f\t%d\t\t%c \n", price2, Quatites_available2, Selection_code2);
    printf("Chocomilk\t\t$%.2f\t%d\t\t%c \n", price3, Quatites_available3, Selection_code3);
}

