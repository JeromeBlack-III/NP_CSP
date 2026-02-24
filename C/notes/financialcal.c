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
float inr = (float)rent/income*100;
printf("$%d is your rent, and that is %.2f  precent of your income\n", rent, inr);

float inu = (float)utilities/income*100;
printf("$%d is your utility expenses, and that is %.2f precent of your income\n", utilities, inu);

float ing = (float)groceries/income*100;
printf("$%d is your groceries expenses, and that is %.2f precent of your income\n", groceries, ing);

float intr = (float)trans/income*100;
printf("$%d is your transportation expenses, and that is %.2f precent of your income\n", trans, intr);

float save = (float)income*.1;
printf("$%.2f is your svaings,  %.2f precent of your income\n", save, 10.0);


float end = (float)income-rent-utilities-groceries-trans-save;

printf("$%.2f is how much is left for spending", end);






































    return 0;

}










