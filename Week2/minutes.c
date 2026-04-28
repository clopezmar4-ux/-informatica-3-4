#include <stdio.h>
int main(void){
    int minutes;
    printf("Movie running time (in minutes): ");
    scanf("%d", &minutes);

    int start;
    printf("Start time= ");
    scanf("%d", &start);

    int hour= minutes/60;
    int min= minutes%60;
    printf("The movie will last %d hr and %d min \n", hour, min);

    int end= start+hour;
    printf("End time= %d:%d\n", end,min);

}
