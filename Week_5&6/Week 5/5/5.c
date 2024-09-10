#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 100
int main() {
    srand(time(0));
    //create the array to store the array
    int my_dice_array[MAX_SIZE];
    int max_random = 6;
    int min_random = 1;
    int count_one = 0;

    for(int i = 0;i<MAX_SIZE;i++){
      my_dice_array[i] = rand() % (max_random - min_random + 1) + min_random;
    }

    for(int i = 0;i<MAX_SIZE;i++){
      printf("dice %d = %d \n ",i,my_dice_array[i]);
    //   total_num = (total_num + my_random_array[i]);
    }

    for(int i = 0; i<MAX_SIZE;i++){
        if(my_dice_array[i] == 1){
            count_one += 1;
        }
    }
    printf("there are %d  times that number 1 appears",count_one);

 
  return 0;
}
