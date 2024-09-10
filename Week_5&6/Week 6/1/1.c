#include <stdio.h>
#define MAX_SIZE 5

//making the function 1 without any returning value
void func1(double width , double height){
    double area_triangle = 0.5 * width * height;
    printf("the area of triangle is %lf",area_triangle);
}
//the main function
int main() {
    //prompt from the user the height and width
    printf("Width : ");
    double width ;
    scanf("%lf",&width);

    printf("Height : ");
    double height;
    scanf("%lf",&height);
    //using the function func1
    func1(width,height);

    return 0;
}