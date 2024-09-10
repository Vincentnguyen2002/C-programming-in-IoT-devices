#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 100
//create the function to check how many minus numbers that we have by using for loop and if else statement
int minus_counter(int *random_array){
    int counter = 0;
    for(int i = 0 ; i<MAX_SIZE ; i++ ){
        if(random_array[i] < 0){
            counter += 1;
        }
    }
    return counter;
}
int main() {
    srand(time(0));
    //create the array to store the array
    int my_random_array[MAX_SIZE];
    int max_random = 100;
    int min_random = -100;
    int count_one = 0;
    //create the for loop to create 100 random numbers
    for(int i = 0;i<MAX_SIZE;i++){
      my_random_array[i] = rand() % (max_random - min_random + 1) + min_random;
    }
    //checking the array
    for(int i = 0;i<MAX_SIZE;i++){
      printf("%d turn = %d \n ",i,my_random_array[i]);
    //   total_num = (total_num + my_random_array[i]);
    }
    //create the variable and using that for function minus_counter
    int counter_result = minus_counter(my_random_array);
    printf("there are %d times that having minus numbers",counter_result);
 
  return 0;
}