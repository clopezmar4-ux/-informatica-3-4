#include <stdio.h>
int main(void){
    char item[50];
    printf("Item: ");
    scanf("%s", &item);

    int p;
    printf("Price:  ");
    scanf("%d", &p);

    int q;
    printf("Quantity: ");
    scanf("%d", &q);

     // Name of the store: DreamMarket

    printf("\n");
    printf("**********************************\n");
    printf("DreamMarket \n");
    printf("**********************************\n");
    printf("Item\tQuantity\tPrice\n");
    printf("%s\t%d\t%d\n", item, q, p);
    printf("----------------------------------\n");
    int total= p*q;
    printf("Total\t\t\t$%d\n",total);
    printf("----------------------------------\n");
    printf("Thank you for your purchase!\n");

}
