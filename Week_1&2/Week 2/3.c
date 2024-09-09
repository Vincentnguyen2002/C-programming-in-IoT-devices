#include <stdio.h>
int main(){
    //prompt the width from the user
    printf("Enter your Width: ");
    double width;
    scanf("%lf",&width);

    //prompt the length from the user
    printf("Enter your length: ");
    double length;
    scanf("%lf",&length);

    //calculate the area of triangle and rectangle 
    double area_tri;
    area_tri = 0.5 * width * length ; 

    double area_rect;
    area_rect = width * length;

    //let user choose triangle or rectangle 
    printf("Type 1(triangle) or 2(rectangle): ");
    int opt;
    scanf("%d",&opt);

    //comparing part
    if(opt == 1){
        printf("your area of triangle is %lf",area_tri);
    }else if (opt == 2)
    {
        printf("your area of rectangle is %lf",area_rect);
    }
    

    return 0; 
}