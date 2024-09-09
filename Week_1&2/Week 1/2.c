#include <stdio.h>
int main(){
    //prompt the first double number from user 
    printf("First double number: ");
    double first_number;
    scanf("%lf", &first_number);


    //prompt the second double number from user 
    printf("Second  double number: ");
    double second_number;
    scanf("%lf", &second_number);

    //prompt the third double number from user 
    printf("Third  double number: ");
    double third_number;
    scanf("%lf", &third_number);

    //print the result of three number 
    double result;
    result = (first_number + second_number + third_number)/3 ; 
    printf("the result is %.3lf \n", result);
    return 0;
}