#include <stdio.h>
#define MAX_ARR 3

// user-difined function for changing array val.
void change_arr_val(int *pointer){
    //make a for loop to make all of elements to be 0
    for(int i = 0; i < MAX_ARR; i++){
        *pointer = i*0;
        pointer = pointer + 1;
    }
}

int main() {
    //create the array 
    int array[3] = {1,2,3};
    for(int i = 0;i<3;i++){
        printf("before a[%d] = %d \n",i,array[i]);
    }
    //use the function above
    change_arr_val(array);
    //checking the value after using the function
    for(int i = 0;i<3;i++){
        printf("after a[%d]  = %d \n",i,array[i]);
    }
    return 0;
}