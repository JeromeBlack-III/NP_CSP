#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>



// array = list
int main(){
    //examplw 1
    int grades[] = {74, 88, 95, 87, 98};

    printf("%d\n", grades[2]);

    // ex 2
    float sizes[] = {3.57, 24.95, 36.1, 5.99};
    //change an item in liat
    printf("%.2f\n",sizes[0]);
    sizes [0] = 10.45;
    printf("%.2f\n", sizes[0]);

    //ex 3 
    char names[][20] = {"Alex", "Katie", "Jerome"}; //first bracke is for # of items in the array, second is braket is for # of letters allowed in each string


    printf("%s\n", names[2]);

    for(int i = 20; i >=0; i--){

        printf("%d ", i );
    }
        
    srand(time (NULL));
    int guess = 0;

    for(int num = rand() %20 +1; num != guess; num = num){
        printf("\nguess a number 1-20: ");
        scanf("%d", &guess);
        if (guess == num){
        }else if (guess < num){
            printf("Your guess is too low\n");
        }else {
            printf("Your guess is too high\n");
        }
    }   
        printf("Game Over\n");


    int length = sizeof(names)/ sizeof(names[0]);


    for(int x =0; x < length; x++){

    printf("%s Jerome\n", names[x]);
    }


        return 0;

}