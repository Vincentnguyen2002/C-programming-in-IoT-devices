#include <stdio.h>
int main(){
    //prompt the user name
    printf("What is your name ?  ");
    char name[100];
    scanf("%s",&name);

    //Choose the buffet option
    printf("Which one do you guys choose? 1(15e) or 2(20e) ");
    int opt;
    scanf("%d",&opt);

    //prompt how many people are there in group 
    printf("How many people do you have (including children) ? ");
    int amt_people; 
    scanf("%d",&amt_people);

    //prompt do the customers have children
    printf("How many you guys have children ? 1(Yes) or 2(No) ");
    int child; 
    scanf("%d",&child);

    int total_bill;
    if(opt == 1){
        if(child == 1){
            total_bill = (15 * amt_people) - 5 ; 
            printf("Your bill is %d",total_bill);
        }else if(child == 2){
            total_bill = 15 * amt_people;
            printf("Your bill is %d",total_bill);
        }
    }else{
        if(child == 1){
            total_bill = (20 * amt_people) - 5 ; 
            printf("Your bill is %d",total_bill);
        }else if(child == 2){
            total_bill = 20 * amt_people;
            printf("Your bill is %d",total_bill);
        }
    }
    return 0; 
}