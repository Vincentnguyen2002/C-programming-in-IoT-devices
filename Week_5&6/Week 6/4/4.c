#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 100

//create the function that can return the average value
int average(int *random_array){
    int aver_val = 0;
    for(int i = 0;i<MAX_SIZE;i++){
        aver_val = aver_val + random_array[i];
    }
    aver_val = aver_val / MAX_SIZE;
    return aver_val;
}


int main() {
    srand(time(0));
    //create the array to store the array
    int my_random_array[MAX_SIZE];
    int max_random = 100;
    int min_random = 0;

    //create the for loop to create 100 random numbers
    for(int i = 0;i<MAX_SIZE;i++){
      my_random_array[i] = rand() % (max_random - min_random + 1) + min_random;
    }
    //checking the array
    for(int i = 0;i<MAX_SIZE;i++){
      printf("%d turn = %d \n ",i,my_random_array[i]);
    //   total_num = (total_num + my_random_array[i]);
    }
    //create a variable to store and using that for functionss
    int final_average = average(my_random_array);
    printf("the average is %d",final_average);
 
  return 0;
}
