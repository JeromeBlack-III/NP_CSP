#include <stdio.h>
#include <math.h>


int main(){

int income [100];
int rent [51];
int utilities [51];
int groceries [51];
int trans [51];
int inr = rent[10]/income[10];




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

printf("%d is your rent and that is %.2f precent of your income\n", income, inr);
















































    return 0;

}










