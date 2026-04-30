#include <stdio.h>
int main(void){
    int minutes;
    printf("Movie running time (in minutes): ");
    scanf("%d", &minutes);

    int startHour;
    int startMin;
    printf("Start time= ");
    scanf("%d:%d", &startHour, &startMin);

    int hour= minutes/60;
    int min= minutes%60;
    printf("The movie will last %d hr and %d min\n", hour, min);

    int endHour= startHour+hour;
    int endMin= startMin+min;
    printf("End time= %d:%d\n", endHour, endMin);

}
