#include <stdio.h>
int main() {
    //first we create two variables that one is for empty , the other one is set up the variable that can be changed when the input is typed
    int input_num;
    int total_num = 0;

    //set up the while true loops 
    while (1) {
        //print out the line to prompt the user
        printf("Input number = ");
        scanf("%d", &input_num);
        //in this line i've already set up the if statement to check whether the input number is zero or not if it's actually 0 , the program will be end by "break;"
        if(input_num == 0){
            printf("End program");
            break;
        }
        //this line is when the user input is typed , it's gonna plus to the total num variable ,and it keeps going until the input equals to 0
        total_num = total_num + input_num;
        printf("Now total = %d \n", total_num);
        printf("---------------\n");
    }

    return 0;
}