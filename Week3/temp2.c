#include <stdio.h>
int main(void){
    int c;
    printf("Celsius= ");
    scanf("%d", &c);
    int f= (c*1.8)+32;
    printf("%d°C = %d°F \n", c, f);
//if something of this conditions are apply then it will print a messege depending in the condition
    if(c<0){// if is below 0 then it will print this messege
        printf("❄️ Freezing weather\n");
    } else if( c<10){// if is below to 10 but more than zero it will print this messege
        printf("🥶 Very cold weather\n");
    } else if(c<20){// if is below 20 but more than 10 it will print this messege
        printf("🧥 Chilly weather\n");
    }else if (c<30){//if is below 30 but more than 20 it will print this messege
        printf("🖼️ Normal weather\n");
    } else if (c<40){//if is below 40 but more than 30 it will print this messege
        printf("☀️ Hot weather\n");
    }else{//if is above 40 it will print this messege
        printf("🔥 Very hot weather\n");
    }
}
