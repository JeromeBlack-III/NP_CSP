#include <stdio.h>
// array = list
int main(){
//examplw 1
int grades[] = {74, 88, 95, 87, 98};

printf("%d\n", grades[2]);

// ex 2
float sizes[] = {3.57, 24.95, 36.1, 5.99};
//change an item in liat
printf("%.2f\n", sizes[0]);
sizes [0] = 10.45;
printf("%.2f\n", sizes[0]);

//ex 3 
char names[][20] = {"Alex", "Katie", "Jerome"}; //first bracke is for # of items in the array, second is braket is for # of letters allowed in each string
 
names[5]= " ";


printf("%s\n", names[2]);





    return 0;

}