#include<stdio.h>
#include <string.h>
#include <stdbool.h>


int main(){
    int grade = 97;
    bool admin = true;




    if(grade >=90){
        if (grade >=90){
            if (grade > 93){
        printf("You have a %d precent. That is an A\n",grade);
            }else{
        printf("You have a %d precent. That is an A-\n",grade);
            }
 
    }else if (grade >= 90){ 
        printf("You have a %d precent. That is an B\n",grade);
     }else if (grade >= 80){ 
        printf("You have a %d precent. That is an C\n",grade);
     }else if (grade >= 70){ 
        printf("You have a %d precent. That is an D\n",grade);
     }else if (grade >= 60){ 
        printf("You have a %d precent. That is an B\n",grade);
     }else{
        printf("Oh no! you have a %d precent, that is a failing grade!\n", grade);
     };
    
    int num = 42;

    if(num%2 == 0 && (num <10 || num > -10)){
        printf("%d is a single digit even muber\n", num);
    }else if (num%2 !=0 &&(num <10 || num > -10)){
        printf("%d is a single digit odd muber\n", num);
    }else{
        printf("%d is not a single digit number!\n", num);
    }

    char name[] = "Erick";

    if (strcmp(name, "Cora")  ==0 ){
        printf("We;come Admin!");
    }else{
        printf("Hello %s\n", name);

    }
    
    
    return 0;

}























































