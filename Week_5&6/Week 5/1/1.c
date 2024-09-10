#include <stdio.h>
#define MAX_SIZE 5

int main(){
    //firstly,i set up the variables for empty array and prompting for user
    int my_array[MAX_SIZE];
    int turn_prompt;

    //set up the for loop
    for(int count_turn = 0;count_turn < MAX_SIZE;count_turn++){
        //prompt user
        printf("Number: ");
        scanf("%d",&turn_prompt);
        //use the array index to set up the values for each components and print it out
        my_array[count_turn] = turn_prompt;
        printf("%d is in your list  \n",my_array[count_turn]);
    }
    //print out the component of array
    for (int i = 0 ; i < MAX_SIZE; i++){
        printf("my_array[%d] = %d \n ",i,my_array[i]);
    }
    return 0;
}