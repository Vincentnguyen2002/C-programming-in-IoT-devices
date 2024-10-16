#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

double cal_BMI(double weight,double height){
    double BMI = weight / (height*height);
    return BMI;
}

int main() {
    int amt_mal = 0;
    int amt_fem = 0;
    double total_BMI = 0;
    double aver_BMI;
    int over_BMI = 0;
    char fi_name[5][MAX_SIZE];
    char la_name[5][MAX_SIZE];
    int age_arr[5];
    int gender_arr[5];
    int height_arr[5];
    int weight_arr[5];
    int BMI_arr[5];
    FILE *file = fopen("first_name.csv", "w");
    FILE *file_las = fopen("last_name.csv", "w");
    FILE *file_age = fopen("age.csv", "w");
    FILE *file_gen = fopen("gender.csv", "w");
    FILE *file_height = fopen("height.csv", "w");
    FILE *file_weight = fopen("weight.csv", "w");
    FILE *file_BMI = fopen("BMI.csv", "w");

    for(int i = 0 ; i<5;i++){
        printf("First name: ");
        scanf("%s",fi_name[i]);

        printf("Last name: ");
        scanf("%s",la_name[i]);

        printf("Age: ");
        int age;
        scanf("%d",&age);
        age_arr[i]=age;

        printf("Type 1(male) or 2(female): ");
        int gen;
        scanf("%d",&gen);
        gender_arr[i]=gen;
        if(gen == 1){
            amt_mal += 1;
        }else if (gen == 2){
            amt_fem += 1;
        }
        printf("Height(m): ");
        double height;
        scanf("%lf",&height);
        height_arr[i]=height;

        printf("Weight(kg):  ");
        double weight;
        scanf("%lf",&weight);
        weight_arr[i]=weight;

        double BMI = cal_BMI(weight,height);
        BMI_arr[i]=BMI;

        if(BMI > 25){
            over_BMI += 1;
        }
        total_BMI += BMI ;
        printf("The BMI of %s is %lf \n" , fi_name[i],BMI);
        printf("\n");
    }
    aver_BMI = total_BMI / 5;
    printf("The average BMI of 5 people is %.2lf \n",aver_BMI);
    printf("There are %d females and %d males \n",amt_fem,amt_mal);
    printf("There are %d people who are over 25 BMI \n",over_BMI);

    for (int i = 0; i < 5; i++) {
        fprintf(file, "%s", fi_name[i]);
        fprintf(file_las, "%s", la_name[i]);
        fprintf(file_age, "%d", age_arr[i]);
        fprintf(file_gen, "%d", gender_arr[i]);
        fprintf(file_height, "%d", height_arr[i]);
        fprintf(file_weight, "%d", weight_arr[i]);
        fprintf(file_BMI, "%d", BMI_arr[i]);

        if (i < 4) { // Final "\n" is not necessary.
            fprintf(file, ",");
            fprintf(file_las, ",");
            fprintf(file_age, ",");
            fprintf(file_gen, ",");
            fprintf(file_height, ",");
            fprintf(file_weight, ",");
            fprintf(file_BMI, ",");
        }
    }

    // Close files
    fclose(file);
    fclose(file_las);
    fclose(file_age);
    fclose(file_gen);
    fclose(file_height);
    fclose(file_weight);
    fclose(file_BMI);

    return 0;
}