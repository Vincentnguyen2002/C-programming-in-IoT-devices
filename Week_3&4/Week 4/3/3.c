#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(0));
    //i've created five empty variables for this program
    //first_add is for the first random number
    //second_add is for the second random number
    //first_turn is for the first number which is typed from the user
    //second_turn is for the second number which is typed from the user
    //total_turn is the combination of two number first_turn and second_turn
    //max_num and min_num are the variables that for setting up the maximum and mininum limit of random
    //count is the variable that i want to set up because of setting up the turns for user to type
    //turn is the one that i want to inform user to know how many turns are left in your computer
    int first_add , second_add , first_turn , second_turn , total_turn;
    int max_num = 100;
    int min_num = 1;
    int count = 0;
    int turn = 5;

    //set up the first_add and second_add
    first_add = rand() % (max_num - min_num + 1) + min_num;
    second_add = rand() % (max_num - min_num + 1) + min_num;

    //set up the total of two random numbers 
    int total = first_add + second_add;

    //having the while loops in 5 turn 
    while(count < 5){
        //four lines below are for prompting the user to type two numbers
        printf("what is your first number: ");
        scanf("%d",&first_turn);
        
        printf("How's about your second number: ");
        scanf("%d",&second_turn);

        //calculating the total of two prompting numbers
        total_turn = first_turn + second_turn;
        //check the condition if total_turn equals to total or not
        if(total_turn == total){
            printf("Correct");
            break;
        }else if (total_turn < total)
        {
            printf("try the one higher \n");
        }else{
            printf("try the one smaller \n");
        }
        //set up to not being in infinite loop
        count += 1;
        turn -= 1;
        printf("you still have %d turn \n",turn);
    }

    //print out the result of game for users
    printf("the result is %d",total);

    return 0;
}