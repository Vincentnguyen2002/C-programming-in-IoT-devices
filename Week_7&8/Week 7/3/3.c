#include <stdio.h>
#include <math.h>
#define MAX_SIZE 1000

// User-defined function for making CSV
// Input: File name, array data
// Result: Save file
void make_csv(char *filename, double *arr){
    // open file
    FILE *file = fopen(filename, "w");

    // record values
    for (int i = 0; i < MAX_SIZE; i++) {
        fprintf(file, "%lf", arr[i]);
        if(i < MAX_SIZE - 1){ // Final "\n" is not necessary.
            fprintf(file, "\n");
        }
    }
    // close file
    fclose(file);
}

int main() {
    double input_x[MAX_SIZE];  
    double output_y[MAX_SIZE];

    // Making input domain
    // i = 0 to 999
    // 0.0, 0.1, ..., 99.9
    for(int i = 0; i < MAX_SIZE; i++){
        input_x[i] = 0.1 * i;
    }

    // Get value of sin(x) + 0.1*x function
    for(int i = 0; i < MAX_SIZE; i++){
        output_y[i] = sin(input_x[i]) + 0.1*input_x[i];
    }

    // save the file 
    make_csv("sin_function.csv", output_y);

    return 0;
}