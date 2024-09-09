#include <stdio.h>
int main(){
    printf("First number : ");
    double first_num;
    scanf("%lf" , &first_num);

    printf("Second numer : ");
    double second_num;
    scanf("%lf" , &second_num);

    printf("Third number : ");
    double third_num;
    scanf("%lf" , &third_num);

    double adds = first_num + second_num + third_num;
    double multiply = first_num * second_num * third_num ;
    double average = (first_num + second_num + third_num)/3 ; 

    printf("the result of adds is %lf \n", adds);
    printf("the result of multiply is %lf \n", multiply);
    printf("the result of average if %lf \n", average);

    
    return 0;
}