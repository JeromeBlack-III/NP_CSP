#include <stdio.h>
#include <math.h>


int main(){

int income [50];
int rent [50];
int utilities [50];
int groceries [50];
int trans [50];
int inr = income[50]/rent[50];




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

printf("%d is your rent and that is %f precent of your income\n", income, inr);
















































    return 0;

}










