#include <stdio.h>
int main(){
    //prompt the first double number from the user
    printf("Enter the first double number: ");
    double a_double;
    scanf("%lf",&a_double);

    //prompt the second double number from the user 
    printf("Enter the second double number: ");
    double b_double;
    scanf("%lf",&b_double);

    //calculate the division among two of them
    double division;

    division = a_double / b_double ;

    if ( division >= 5){
        printf("greater than 5");
    }else{
        printf("not satisfied");
    }
    return 0;
}