#include <stdio.h>
#define MAX_SIZE 5

//making the function 3 without any returning value
void func3(double width , double height , int user_select){
    double area_triangle = 0.5*  width * height;
    double area_rectangle = width * height ;
    //creating the if else to check the option of user
    if(user_select == 0){
        printf("the area of triangle is %lf",area_triangle);
    }
    else{
        printf("the area of rectangle is %lf",area_rectangle);
    }
}
//the main function
int main() {
    //prompt from the user the height , width and user option
    printf("Width : ");
    double width ;
    scanf("%lf",&width);

    printf("Height : ");
    double height;
    scanf("%lf",&height);

    printf("Choose 0(triangle area) or 1(rectangle area): ");
    int user_select;
    scanf("%d",&user_select);
    //using the function func3
    func3(width,height,user_select);

    return 0;
}
