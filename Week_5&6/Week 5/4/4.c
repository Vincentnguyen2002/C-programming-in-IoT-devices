#include <stdio.h>
#define MAX_SIZE 10

int main(){
    //firstly,i set up the variables for empty array and prompting for user
    int my_age_array[MAX_SIZE];
    int turn_prompt;
    int age_flag = 0;

    //set up the for loop
    for(int count_turn = 0;count_turn < MAX_SIZE;count_turn++){
        //prompt user
        printf("Age : ");
        scanf("%d",&turn_prompt);
        //use the array index to set up the values for each components and print it out
        my_age_array[count_turn] = turn_prompt;
        printf("%d is in your list  \n",my_age_array[count_turn]);
    }
    //print out the component of array
    for (int i = 0 ; i < MAX_SIZE; i++){
        if(my_age_array[i] < 0 || my_age_array[i]>100){
            age_flag += 1;
        }
    }
    // printf("there are %d age flag \n",age_flag);
    //checking there are some problems with the array or not
    
    if (age_flag >= 1){
        printf("there are some minus or over 100");
    }else{
        printf("there are nothing to recognize !");
    }
    return 0;
}