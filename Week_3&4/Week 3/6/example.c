#include <stdio.h>
#include <stdlib.h> // for "rand" function
#include <time.h> // for "time" function 

int main() {
    srand(time(0));
    //create the maximum and minimum random value 
    int min_num = 1 ;
    int max_num = 10;

    int number_one , number_two , number_three;

    //get the result
    int alpha_num , beta_num , delta_num;
    alpha_num = rand() % (max_num - min_num + 1) + min_num;
    beta_num  = rand() % (max_num - min_num + 1) + min_num;
    delta_num = rand() % (max_num - min_num + 1) + min_num;

    printf("alpha %d , beta %d , delta %d \n",alpha_num,beta_num,delta_num);
    
    if (alpha_num > beta_num){
        printf("alpha is higher than beta \n");
        if (beta_num > delta_num){
            printf("beta is higher than delta \n");
            printf("alpha %d is highest then beta %d and delta %d \n" , alpha_num , beta_num ,delta_num);
        }else if(beta_num < delta_num){
            printf("alpha %d is the highest then delta %d and beta %d \n",alpha_num,delta_num,beta_num);
        }

    }else{
        printf("beta is higher than alpha \n");
        if(alpha_num > delta_num){
            printf("alpha is higher than delta \n");
            printf("beta %d is the highest then alpha %d and delta %d \n",beta_num,alpha_num,delta_num);
        }else if(alpha_num < delta_num){
            printf("beta %d is the highest then delta %d and alpha %d \n",beta_num,delta_num,alpha_num);
        }
    }
    
    return 0;

}