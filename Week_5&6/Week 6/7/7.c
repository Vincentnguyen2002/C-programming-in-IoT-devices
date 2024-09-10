#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 100

int count_x(int *my_array,int user_select){
    int count_one = 0;
    int count_two = 0;
    int count_three = 0;
    int count_four = 0;
    int count_five = 0;
    int count_six = 0;

    for(int i = 0; i<MAX_SIZE;i++){
        if(my_array[i] == 1){
            count_one += 1;
        }else if (my_array[i] == 2)
        {
            count_two += 1;
        }else if (my_array[i] == 3)
        {
            count_three += 1;
        }else if (my_array[i] == 4)
        {
            count_four += 1;
        }else if (my_array[i] == 5)
        {
            count_five += 1;
        }else
        {
            count_six += 1;
        }
    }
    //checking the user select
    if(user_select == 1){
        return count_one;
    }else if (user_select == 2)
    {
        return count_two;
    }else if (user_select == 3)
    {
        return count_three;
    }else if (user_select == 4)
    {
        return count_four;
    }else if (user_select == 5)
    {
        return count_five;
    }else{
        return count_six;
    }
    
}


int main() {
    srand(time(0));
    //create the array to store the array
    int my_dice_array[MAX_SIZE];
    int max_random = 6;
    int min_random = 1;
    int user_select;

    for(int i = 0;i<MAX_SIZE;i++){
      my_dice_array[i] = rand() % (max_random - min_random + 1) + min_random;
    }

    for(int i = 0;i<MAX_SIZE;i++){
      printf("dice %d = %d \n ",i,my_dice_array[i]);
    //   total_num = (total_num + my_random_array[i]);
    }

    printf("Which number do you want to count ? : ");
    scanf("%d", &user_select);
    int count = count_x(my_dice_array,user_select);
    printf("there are %d turns that %d appear",count,user_select);
  
  return 0;
}
