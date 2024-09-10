#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 100
//create the function to count how many does the number 1 appear by using for loops and if else 
int count_1(int *my_array){
    int count_one = 0;
    for(int i = 0; i<MAX_SIZE;i++){
        if(my_array[i] == 1){
            count_one += 1;
        }
    }
    return count_one;
}


int main() {
    srand(time(0));
    //create the array to store the array
    int my_dice_array[MAX_SIZE];
    int max_random = 6;
    int min_random = 1;
    //for loops to create the array fulling with 100 random numbers
    for(int i = 0;i<MAX_SIZE;i++){
      my_dice_array[i] = rand() % (max_random - min_random + 1) + min_random;
    }
    //checking whether it has number or not
    for(int i = 0;i<MAX_SIZE;i++){
      printf("dice %d = %d \n ",i,my_dice_array[i]);
    //   total_num = (total_num + my_random_array[i]);
    }
    //variable for using function
    int total_count = count_1(my_dice_array);
    printf("there are %d  times that number 1 appears",total_count);
  return 0;
}
