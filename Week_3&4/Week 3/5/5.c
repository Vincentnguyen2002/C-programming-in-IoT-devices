#include <stdio.h>
#include <stdlib.h> // for "rand" function
#include <time.h> // for "time" function 

int main() {
    srand(time(0));
    //create the maximum and minimum random value 
    int min_num = 1 ;
    int max_num = 10;

    //get the result
    int alpha_num , beta_num;
    alpha_num = rand() % (max_num - min_num + 1) + min_num;
    beta_num  = rand() % (max_num - min_num + 1) + min_num;

    //show the values of them
    printf("there are two number that are  %d and  %d \n",alpha_num,beta_num);

    //comparing them 
    if(alpha_num > beta_num){
        printf("so maximum value is %d" , alpha_num);
    }else if(alpha_num < beta_num){
        printf("so maximum is %d",beta_num);
    }else if (alpha_num == beta_num)
    {
        printf("there are two maximum value is %d %d",alpha_num,beta_num);
    }
    
    return 0;
}