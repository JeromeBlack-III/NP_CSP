#include <stdio.h>
#include <math.h>


int main(){

int income ;
int rent;
int utilities;
int groceries;
int trans;

printf("Tell me your income\n");
scanf("%d", &income);


printf("Tell me your rent cost\n");
scanf("%d", &rent);

printf("Tell me your utilities cost\n");
scanf("%d", &utilities);

printf("Tell me your groceries cost\n");
scanf("%d", &groceries);

printf("Tell me your transportation cost\n");



scanf("%d", &trans);
float inr = (float)rent/income;
printf("%d is your rent, and that is %.2f precent of your income\n", rent, inr);

float inu = (float)utilities/income;
printf("%d is your groceries, and that is %.2f*100 precent of your income\n", utilities, inu);

float ing = (float)groceries/income;
printf("%d is your groceries, and that is %.2f*100 precent of your income\n", groceries, ing);












































    return 0;

}










