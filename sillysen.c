#include <stdio.h>
#include <string.h> 
int main(){

char name[20];
char last[20];
char food[20];
char cond[20];
char tool[20];



printf("Tell me a name(Henry,Jerome,ect.): ");
scanf("%s", &name);  
printf("Tell me a last name(Johnson, Smith,ect.): ");
scanf("%s", &last); 
printf("Tell me a food(hotdog,beans,ect.): ");
scanf("%s", &food);  
printf("Tell me a condiment(ketchup,mustard,ect.): ");
scanf("%s", &cond);  
printf("Tell me a tool(Screw driver,Hammer, ect.): ");
scanf("%s", &tool);   

strcat(name, " ");
strcat(name, last);

printf("%s woke up feeling really hungry. %s made %s for breakfast. He put %s on his %s. He ate his %s with a %s",name, name, food, cond, food, food, tool );
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
    return 0;

}