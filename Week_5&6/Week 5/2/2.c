#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 5
int main() {
    srand(time(0));
    //create the array to store the array
    int my_random_array[MAX_SIZE];
    //set up the limit for random number and total_num is for calculating the final number after taking all of number 
    int min_random = -100;
    int max_random = 100;
    int total_num = 0;

    //setting up the for loop to to store the random number in array
    for(int i = 0;i<MAX_SIZE;i++){
      my_random_array[i] = rand() % (max_random - min_random + 1) + min_random;
    }
    //calculate the array and print it out
    for(int i = 0;i<MAX_SIZE;i++){
      printf("my_random_array[%d] = %d \n ",i,my_random_array[i]);
      total_num = total_num + my_random_array[i];
    }
    printf("the total number is %d \n",total_num);
  return 0;
}
