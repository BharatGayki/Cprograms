#include<stdio.h>
/////take input in sec and convert it to hr:min:sec
int main(){

int sec;

printf("Enter value of sec:");
scanf("%d",&sec);

int hr,min;

/*
My logic
hr = sec/3600;
sec = sec-(hr*3600);
min = sec/60;
*/

hr = sec/3600;
sec = sec-(hr*3600);
min = sec/60;
sec = sec-(min*60);

printf("Time in hr:min:sec: is :%d:%d:%d",hr,min,sec);

    return 0;
}