#include <stdio.h>
int main() {
    //create an double array 
    double prompt_array[5];
    //open the file
    FILE *file = fopen("a.csv" , "w");
    //make an for loop for making sure that the users are gonna type 5 times 
    for(int i=0 ; i<5; i++){
        printf("Type number: ");
        double user_prompt;
        scanf("%lf",&user_prompt);
        //store the variables into the array
        prompt_array[i] = user_prompt;
    }
    // save the file
    for(int i = 0 ;i < 5; i++){
        fprintf(file,"%lf",prompt_array[i]);
        if(i<4){
            fprintf(file,",");
        }
    }fclose(file); // close it
    return 0;
}