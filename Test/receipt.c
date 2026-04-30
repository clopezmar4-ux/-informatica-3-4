#include <stdio.h>
int main(void){
    char item[50];
    printf("Item: ");
    scanf("%s", &item);

    int p;
    printf("Price: $ ");
    scanf("%d", &p);

    int q;
    printf("Quantity: ");
    scanf("%d", &q);

     // Name of the store: DreamMarket

    printf("\n");
    printf("**********************************************\n");
    printf("DreamMarket \n");
    printf("**********************************************\n");
    printf("Item\t\t\tQuantity\tPrice\n");
    printf("%s\t\t%d\t\t$%d\n", item, q, p);
    printf("---------------------------------------------\n");
    int total= p*q;
    printf("Total\t\t\t\t\t$%d\n",total);
    printf("---------------------------------------------\n");
    printf("\tThank you for your purchase!\n");

}
