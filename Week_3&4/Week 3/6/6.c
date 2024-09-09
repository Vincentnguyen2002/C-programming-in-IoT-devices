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
    //checking the result
    if (alpha_num > beta_num){
        if ( alpha_num > delta_num){
            printf("alpha %d is the highest \n",alpha_num);
            if (beta_num > delta_num){
                printf("beta %d is the second and delta %d is the last \n",beta_num,delta_num);
            }
            else{
                printf("delta %d is the second and beta %d is the last \n",delta_num,beta_num);
            }
        }
        else{
            printf("delta is the highest %d , alpha %d is the second , beta %d is the last \n",delta_num,alpha_num,beta_num);
        }
    }
    else{
        if(beta_num > delta_num){
            printf("beta %d is the highest \n",beta_num);
            if(alpha_num > delta_num){
                printf("alpha %d is the second , delta %d is the last \n",alpha_num,delta_num);
            }
            else{
                printf("delta %d is the second , alpha %d is the last \n",delta_num,alpha_num);
            }
        }
        else{
            printf("delta %d is the highest , beta %d is the second , alpha %d is the last", delta_num,beta_num,alpha_num);
        }
    }
    
    return 0;

}