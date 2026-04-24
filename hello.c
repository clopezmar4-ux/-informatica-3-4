#include <stdio.h>

int main(void)
{
    int Name[50];
    printf("Enter your name: ");
    scanf("%s", &Name);
    printf("Hello %s! \n", Name);
    int favoriteColor[50];
    printf("Enter favorite color: ");
    scanf("%s", &favoriteColor);
    printf("Your favorite color is: %s \n", favoriteColor);
}
