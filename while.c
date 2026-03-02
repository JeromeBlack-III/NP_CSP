#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int i = 1;
    while (i <=10){
        printf("%d\n", i);
        i++;
    }

srand(time(NULL));

printf("%d\n", rand() % 10); // % 10 means a random number between 0-10
printf("%d\n", (rand() % 4) + 1);
printf("%d\n", rand() % 40);





int goose = (rand() % 9)+1;
int count = 1;

while(count < goose){
    printf("Duck!\n");
    count++; // ++ increases by 1 -- decreases by 1

}
printf("GOOSE!");



int timer =30;
while (timer> 0 ) {
    printf("%d\n", timer);
    timer = timer -2;
}
printf("Times up");



    return 0;

}