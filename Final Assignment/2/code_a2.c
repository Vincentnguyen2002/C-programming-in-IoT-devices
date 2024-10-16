#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main() {
    int target_num;
    int min_num = 1;
    int max_num = 3;
    int count_turns = 0;
    int win_count = 0;
    int lose_count = 0;
    int equal_count = 0;
    int scores = 0;
    while(count_turns < 5){
        //user select part
        printf("Select Scissor(1) , Paper(2) or Rock(3): ");
        int user_select;
        scanf("%d",&user_select);
        if(user_select == 1){
            printf("User select: Scissor \n");
        }else if (user_select == 2)
        {
            printf("User select: Paper \n");
        }else{
            printf("User select : Rock \n");
        }
        count_turns += 1;

        //random select
        srand(time(0));
        target_num = rand() % ( max_num - min_num + 1) + min_num;
        if(target_num == 1){
            printf("Random: Scissor \n");
            if(user_select == 1){ //SCISSOR
                printf("Equal \n");
                equal_count +=1 ;
                printf("\n");

            }else if(user_select == 2){ //PAPER
                printf("Lose \n");
                lose_count += 1;
                scores-=1 ; 
                printf("\n");

            }else{ //ROCK
                printf("Win\n");
                win_count += 1;
                scores += 1;
                printf("\n");
            }

        }else if (target_num == 2)
        {
            printf("Random: Paper\n");
            if(user_select == 1){ //SCISSOR
                printf(" Win\n");
                win_count += 1;
                scores += 1;
                printf("\n");

            }else if (user_select == 2)//Paper
            {
                printf("Equal \n");
                equal_count += 1;
                printf("\n");

            }else{ //ROCK
                printf("Lose \n");
                lose_count += 1;
                scores -= 1;
                printf("\n");
            }
            
        }else{
            printf("Random: Rock\n");
            if(user_select == 1){ //SCISSOR
                printf("Lose \n");
                lose_count += 1;
                scores -= 1;
                printf("\n");
            }else if (user_select == 2) //PAPER
            {
                printf("Win\n");
                win_count += 1;
                scores += 1;
                printf("\n");
            }else{ //ROCK
                printf("Equal \n");
                equal_count += 1; 
                printf("\n");
            }
            
        }
    }

    FILE *file = fopen("record.csv","w");
    fprintf(file,"%d",win_count);
    fprintf(file,",");
    fprintf(file,"%d",lose_count);
    fprintf(file,",");
    fprintf(file,"%d",equal_count);
    fprintf(file,",");
    fprintf(file,"%d",scores);
    fclose(file);

    printf("The scores is %d \n",scores);
    printf("Win: %d \n",win_count);
    printf("Equal: %d \n",equal_count);
    printf("Lose: %d \n",lose_count);


    return 0;
}