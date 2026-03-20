// GC NP AL 3rd period team game in c
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
int main (){
    char name [50];
    char yesorno [50];
    printf("What is your name?:\n");
    scanf("%s", name);
    printf("Hello, %s do you wish to play tic tac toe?\n", name);
    scanf("%s", yesorno);
        if (yesorno && "yes" "Yes"){
            printf("Welcome to tic tac toe\n");
        }else{
            printf("You still must play\n");
        };
char spts[9] = {'0','1','2','3','4','5','6','7','8'};
    

while (true){
          
        

        printf(" %c | %c | %c \n", spts[0], spts[1], spts[2]);
        printf(" %c | %c | %c \n", spts[3], spts[4], spts[5]);
        printf(" %c | %c | %c \n", spts[6], spts[7], spts[8]);
   
   
    while(true){
      int myNum;
        printf("Select a board spot 0-8:\n");
     scanf("%d", &myNum);

     if(spts[myNum] == 'X' || spts[myNum] == 'O'){
        printf("That spot is taken");
     }else{
        spts[myNum] = 'X';
        break;
     }

    }
    


    printf ("\n");
    printf("Players' Turn\n");
    printf(" %c | %c | %c \n", spts[0], spts[1], spts[2]);
    printf(" %c | %c | %c \n", spts[3], spts[4], spts[5]);
    printf(" %c | %c | %c \n", spts[6], spts[7], spts[8]);



    srand(time(NULL));
    
    int bot= rand() %9; //bot turn here
    if(bot == 0){
    spts[0] = 'O';
        
     }else if(bot == 1){
    spts[1] = 'O';
        
     }else if(bot == 2){
    spts[2] = 'O';
        
     }else if(bot == 3){
    spts[3] = 'O';
        
     }else if(bot == 4){
    spts[4] = 'O';
        
     }else if(bot == 5){
    spts[5] = 'O';
        
     }else if(bot == 6){
    spts[6] = 'O';
        
     }else if(bot == 7){
    spts[7] = 'O';
        
     }else if(bot == 8){
    spts[8] = 'O';
    }else{
        printf("That is not a valid spot\n");
    }

            

    printf("Bots turn\n");
   
    

          char* win = spts;
    if (spts[0]==spts[1] && spts[1] == spts[2]){
        if(spts[0] == 'X'){
        printf("You win!");
        }else{
        printf("The bot won");
         break;
    }
        
    }else if(spts[3]==spts[4] && spts[5] == spts[4]){
        if(spts[3] == 'X'){
        printf("You win!");
        }else{
        printf("The bot won");
         break;
        }
    }else if(spts[6]==spts[7]&& spts[8]==spts[7]){
         if(spts[0] == 'X'){
        printf("You win!");
        }else{
        printf("The bot won");
         break;
        }
    }else if(spts[0]==spts[4]&&spts[8]==spts[4]){
        if(spts[0] == 'X'){
        printf("You win!");
        }else{
        printf("The bot won");
         break;
        }
    }else if(spts[6]==spts[4]&& spts[2]==spts[4]){
         if(spts[2] == 'X'){
        printf("You win!");
        }else{
        printf("The bot won");
         break;
        }
    }else if( spts[0]==spts[3]&&spts[6] == spts[3]){
        if(spts[0] == 'X'){
        printf("You win!");
        }else{
        printf("The bot won");
         break;
        }
    }else if(spts[1]==spts[4]&& spts[7] == spts[4]){
        if(spts[1] == 'X'){
        printf("You win!");
        }else{
        printf("The bot won");
         break;
        }
    }else if(spts[2]==spts[5]&& spts[8] ==spts[5]){
        if(spts[2] == 'X'){
        printf("You win!");
        }else{
        printf("The bot won");
         break;
    } 
    }
    
}

return 0;
}