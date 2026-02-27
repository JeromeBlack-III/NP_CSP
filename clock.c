#include <stdio.h>
#include <string.h>

int main(){

int time;

printf("What is the time in milliatry time?: ");
scanf("%d", &time);


    if (time >24){ 
printf("Not a valid number!");


    }else if (time >17){ 
printf("Good night!");


    }else if (time >14){ 
printf("Good evening!");


   }else if (time >11){ 
printf("Good afternoon!");


   }else if (time >5){ 
printf("Good morning");


    }else if (time <5){
printf("Go to sleep!");
    }













    return 0;

}