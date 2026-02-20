#include <stdio.h>
#include <math.h>


int main(){



int apples =10;
int people = 6;
int hours= 12;
int minutes = hours * 60;

printf("%d,%d,%d\n", apples, people,hours);

printf("%f\n", (float)apples/people);

printf("%d hours is %d minutes\n", hours,minutes);

float pi= 3.1415;
float liters = 8.3;
float years = 22.5;
float cups = liters * 4.2275;
float root = sqrt(10);

printf("%f, %.1f, %.2f\n", pi,liters, years);

printf("%.1f liters is %.1f cups\n", liters, cups);

printf("%d in Fahrenheit is %d in Celcius\n", 70, (70 -32)* 5/9);

printf("%f\n", round(pi));

printf("%f\n", root);

printf("%d\n", (int)pow(2, 8));//first number is base number, second number is power of number







 return 0;

}











