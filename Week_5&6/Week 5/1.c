#include <stdio.h>
#define MAX_SIZE 10
int main() {
    int age_arr[MAX_SIZE] = {10, 20, 60, 20, 30, -200, 50, 92, 20, 31};
    int err_flag = 0;

    // age check. whether invalid value or not
    for(int i = 0; i < MAX_SIZE; i++){
        if(age_arr[i] < 0){
            err_flag = 1;
        }
    }

    // result
    if(err_flag == 0){
        printf("No problem.");
    }else if(err_flag == 1){
        printf("Warning: including invalid value!");
    }

    return 0;
}
