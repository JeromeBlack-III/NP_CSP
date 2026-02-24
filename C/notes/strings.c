//NP Strings notes
#include <stdio.h>
#include <string.h> 



int main(){
    char subject[] = "Computer Science Principles";
    char book[150];
    int num; 

    printf("%s\n", subject);
    num = 10;
    printf("Write a book title:  ");
    fgets(book, sizeof(book), stdin);

    printf("\n The book is %s\n", book);







// concantenation in c 
    char name[] = "Jerome";
    char last[] = "Black";
    strcat(name, " ");
    strcat(name, last);

    char full_name[15];
    ///strcat(full_name, "frrrrrrrrrrrrouytoiutoiuytoiuyljhkjhfkhjgdhtrrrrrrrrrjhjffffffffffffffffffffffff");

    ///printf("%s\n", full_name);



    printf("%s\n",name);


    ///length

    printf("%lu", strlen(name));






























































  return 0;

}





















