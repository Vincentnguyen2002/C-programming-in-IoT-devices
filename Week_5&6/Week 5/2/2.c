#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 10
int main() {
    int a_arr[MAX_SIZE];

    // random number range
    int min_n = 1;
    int max_n = 100;
    srand(time(0));

    // substituing random numbers to array
    for(int i = 0; i < MAX_SIZE; i++){
      a_arr[i] = rand() % (max_n - min_n + 1) + min_n;
    }

    // show
    for(int i = 0; i < MAX_SIZE; i++){
      printf("a[%d] = %d\n", i, a_arr[i]);
    }

  return 0;
}
