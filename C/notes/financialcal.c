#include <stdio.h>
#include <math.h>


float incomeprecent(int cost, int income){
    return (float)cost/income *100;
}
 
int tellme(char* amount){
    int costof;
    printf("Tell me your %s amount: ", amount);
    scanf("%d", &costof );
return costof;






}

int main(){

int income;
int rent;
int utilities;
int groceries;
int trans;

income = tellme("income");

rent = tellme("rent");

utilities = tellme("utilities");

groceries = tellme("groceries");

trans = tellme("transportation");


float inr = incomeprecent(rent,income);
printf("$%d is your rent, and that is %.2f  precent of your income\n", rent, inr);

float inu = incomeprecent(utilities,income);
printf("$%d is your utility expenses, and that is %.2f precent of your income\n", utilities, inu);

float ing = incomeprecent(groceries,income);
printf("$%d is your groceries expenses, and that is %.2f precent of your income\n", groceries, ing);

float intr = incomeprecent(trans,income);
printf("$%d is your transportation expenses, and that is %.2f precent of your income\n", trans, intr);

float save = (float)income*.1;
printf("$%.2f is your savings,  %.2f precent of your income\n", save, 10.0);


float end = (float)income-rent-utilities-groceries-trans-save;

printf("$%.2f is how much is left for spending", end);






































    return 0;

}










