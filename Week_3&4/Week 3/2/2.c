#include <stdio.h>
#include <stdlib.h> // for "rand" function
#include <time.h> // for "time" function 

int main() {
    //create three variables that user can type their value from the keyboard by using printf , scanf 
    //scan for a value
    printf("A value : ");
    int a_value;
    scanf("%d",&a_value);

    //scan for b value
    printf("B value : ");
    int b_value;
    scanf("%d",&b_value);

    //scanf for c value
    printf("C value : ");
    int c_value;
    scanf("%d",&c_value);

    //comparing whether if a value , b value and c value is not the same or not
    if(a_value != b_value && a_value != c_value && b_value != c_value){
        printf("not same");
    }


    return 0;
}