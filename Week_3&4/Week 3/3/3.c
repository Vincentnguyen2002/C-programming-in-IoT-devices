#include <stdio.h>
#include <stdlib.h> // for "rand" function
#include <time.h> // for "time" function 

int main() {
    //create the random function and set the limit to the dice side from 1 to 6
    srand(time(0));
    int max_side = 6;
    int min_side = 1;

    //create the variable for turn of playing dice of each players and the total scores
    int alpha_score_1,alpha_score_2,alpha_score_3;
    int beta_score_1,beta_score_2,beta_score_3;
    int total_alpha;
    int total_beta;

    //// getting scores of alpha player
    alpha_score_1 = rand() % (max_side - min_side + 1) + min_side;
    alpha_score_2 = rand() % (max_side - min_side + 1) + min_side;
    alpha_score_3 = rand() % (max_side - min_side + 1) + min_side;
    
    // getting scores of beta player
    beta_score_1 = rand() % (max_side - min_side + 1) + min_side;
    beta_score_2 = rand() % (max_side - min_side + 1) + min_side;
    beta_score_3 = rand() % (max_side - min_side + 1) + min_side;

    //calculate the total score of alpha and beta player
    total_alpha = alpha_score_1 + alpha_score_2 + alpha_score_3;
    total_beta = beta_score_1 + beta_score_2 + beta_score_3;

    //show the score
    printf("Player 1's turn score is %d,%d,%d \n",alpha_score_1,alpha_score_2,alpha_score_3);
    printf("Player 2's turn score is %d,%d,%d \n",beta_score_1,beta_score_2,beta_score_3);

    printf("Total of gamer 1 is %d \n",total_alpha);
    printf("Total of gamer 2 is %d \n",total_beta);

    //comparing score 
    if(total_alpha > total_beta){
        printf("alpha wins \n");
    }else if (total_alpha == total_beta){
        printf("Draws \n");
    }else{
        printf("beta wins");
    }


    return 0;
}