#include <stdio.h>
int main(){
    //Enter the Width from user 
    printf("The Width: ");
    double Width;
    scanf("%lf", &Width);


    //prompt the Length from user 
    printf("The Length: ");
    double Length;
    scanf("%lf", &Length);

    //print out the result 
    double area;
    area = 0.5 * Width * Length ; 
    printf("The area of this triangle is %.3lf" , area);
    return 0;
}