#include <stdio.h>
int main(){
    //prompt the patient name 
    printf("What is your name ? ");
    char patient_name[100];
    scanf("%s", &patient_name);

    //prompt the age 
    printf("How about your age: ");
    int patient_age;
    scanf("%d" , &patient_age);

    //prompt height and weight 
    printf("What is your height: ");
    double height ; 
    scanf("%lf" , &height);

    printf("What is your weight: ");
    double weight;
    scanf("%lf", &weight);

    //prompt the blood type
    printf("Your blood type: ");
    char blood_type[100];
    scanf("%s", &blood_type);

    //Calculate the BMI 
    double BMI; 
    BMI = weight /(height*height);
    printf("The BMI of %s is %lf",patient_name ,BMI);



    return 0;
}