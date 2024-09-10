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
    int count_two = 0;
    int count_three = 0;
    int count_four = 0;
    int count_five = 0;
    int count_six = 0;

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
        }else if (my_dice_array[i] == 2)
        {
            count_two += 1;
        }else if (my_dice_array[i] == 3)
        {
            count_three += 1;
        }else if (my_dice_array[i] == 4)
        {
            count_four += 1;
        }else if (my_dice_array[i] == 5)
        {
            count_five += 1;
        }else
        {
            count_six += 1;
        }
    }
    printf("1 times : %d \n",count_one);
    printf("2 times : %d \n",count_two);
    printf("3 times : %d \n",count_three);
    printf("4 times : %d \n",count_four);
    printf("5 times : %d \n",count_five);
    printf("6 times : %d \n",count_six);

 
  return 0;
}
