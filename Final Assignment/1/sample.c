#include <stdio.h>
#define MAX_SIZE 100



int main() {
    char *array[] = {"apple","banana","cherry"};
    for(int i =0;i <3;i++){
        printf("a[%d] : %s ",i,array[i]);
    }
    return 0;
}