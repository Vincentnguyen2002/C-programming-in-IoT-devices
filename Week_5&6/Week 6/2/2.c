#include <stdio.h>
#define MAX_SIZE 5

//making the function 2 without any returning value
void func2(double width , double height){
    double area_rectangle =  width * height;
    printf("the area of rectangle is %lf",area_rectangle);
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
    //using the function func2
    func2(width,height);

    return 0;
}