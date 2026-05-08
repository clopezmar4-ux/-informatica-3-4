#include <stdio.h>
int main(void){
    int c;
    printf("Celsius= ");
    scanf("%d", &c);
    int f= (c*1.8)+32;
    printf("%d°C = %d°F \n", c, f);

    if(c<0){
        printf("❄️ Freezing weather\n");
    } else if( c<10){
        printf("🥶 Very cold weather\n");
    } else if(c<20){
        printf("🧥 Chilly weather\n");
    }else if (c<30){
        printf("🖼️ Normal weather\n");
    } else if (c<40){
        printf("☀️ Hot weather\n");
    }else if (c>40){
        printf("🔥 Very hot weather\n");
    }
}
