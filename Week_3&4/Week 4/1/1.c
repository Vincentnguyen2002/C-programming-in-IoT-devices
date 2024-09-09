#include <stdio.h>
int main() {
    //input num is the varibale which is set up for prompting function from the user
    int input_num;
    //total_num is for always being plused from input_num
    int total_num = 0;
    
    //set up the infinite loops
    while (1) {
        //first two lines for prompting user
        printf("Input number = ");
        scanf("%d", &input_num);
        //when the input_num is prompted , it's gonna plus with total_num and print out 
        total_num = total_num + input_num;
        printf("Now total = %d \n", total_num);
        printf("---------------\n");
    }

    return 0;
}