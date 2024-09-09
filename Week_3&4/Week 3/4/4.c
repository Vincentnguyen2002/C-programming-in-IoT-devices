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
    //prompt the username
    printf("What is the name of first player ? ");
    char alpha_name[100];
    scanf("%s",&alpha_name);
    printf("What is the name of second player ? ");
    char beta_name[100];
    scanf("%s",&beta_name);
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
    printf("%s's turn score is %d,%d,%d \n",alpha_name,alpha_score_1,alpha_score_2,alpha_score_3);
    printf("%s's turn score is %d,%d,%d \n",beta_name,beta_score_1,beta_score_2,beta_score_3);
    printf("Total of %s is %d \n",alpha_name,total_alpha);
    printf("Total of %s is %d \n",beta_name,total_beta);
    //comparing score 
    if(total_alpha > total_beta){
        printf("%s wins \n",alpha_name);
    }else if (total_alpha == total_beta){
        printf("Draws \n");
    }else{
        printf("%s wins",beta_name);
    }
    return 0;
}