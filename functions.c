#include <stdio.h>

int add( int numone,int numtwo){
    return numone + numtwo;
}

void greeting(char * name){
    printf("hello %s. Welcome to my program!", name);

}
   float area(int len, int wid){
return (float) len * wid;
   }

int main(){

int total = add(40, 2);
printf("%d\n", total);

greeting("Jerome");
greeting("Angie");
greeting("Dustin");
greeting("Alex");
greeting("Alex");

float rectangle = area(10, 5);
printf("The area is %.2f\n, rectangle");
printf("The area is: %.2f\n", area (4,6));
    return 0;

}