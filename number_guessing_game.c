#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int random , guess;
    int no_of_guess = 0;
    srand (time(NULL));

    printf("Welcome to the world of guessing number !!\n");
    random = rand() % 100 + 1;  // Generating between (0 to 100)

    do{
        printf("\nPlease enter your Guess between(1 to 100):");
        scanf("%d" ,&guess);
        no_of_guess++;

        if(random > guess){
            printf("Guess Larger Number:\n");
        }else if(random < guess){
            printf("Guess Smaller Number:\n");

        }else{
            printf("Congratulation !!! You have Successfully Guessed The Correct Number in %d Attempts\n" , no_of_guess );
        }

    }while(guess != random);

    printf("bye bye Thanks For Playing.\n");
    printf("\n");
    printf("Developed by: shivam-dextor.\n");


    return 0;
}