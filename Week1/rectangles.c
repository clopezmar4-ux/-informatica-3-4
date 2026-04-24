#include <stdio.h>
int main(void){
    int length;
    int width;

    printf("Enter the length: ");
    scanf("%d", &length);
    printf("Enter the width: ");
    scanf("%d", &width);

    int area = length*width;
    int perimeter = 2*(length+width);
    printf("Area: %d \n", area);
     printf("Perimeter: %d \n", perimeter);

}
