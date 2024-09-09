#include <stdio.h>
int main(){
    // prompt the first interger from the keyboard of first integer 
    printf("1st integer: ");
    int first_integer ;
    scanf("%d", &first_integer);


    //prompt the second integer from the keyboard of second integer 
    printf("2nd integer: ");
    int second_integer ; 
    scanf("%d", &second_integer); 


    //create the result variable and calculate the add calculations of two integers
    int result; 
    result = first_integer + second_integer; 
    printf("the result is %d \n", result);

    return 0;
}