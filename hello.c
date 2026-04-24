#include <stdio.h>

int main(void)
{
    char Name[50];
    printf("Enter your name: ");
    scanf("%s", &Name);
    printf("Hello %s! \n", Name);
    char favoriteColor[50];
    printf("Enter favorite color: ");
    scanf("%s", &favoriteColor);
    printf("Your favorite color is: %s \n", favoriteColor);
}
