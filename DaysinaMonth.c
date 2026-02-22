/*Number of days in a month
Practical 3, exercise-2
@Nishchal Ranjitkar*/

#include<stdio.h>

int main(){
    int month, year, days;
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    if (month== 2){  
        if (year% 4== 0){
            days= 29;
        } else {
            days= 28;
        }
    }else if(month== 4||month== 6||month== 9||month== 11){
        days = 30;
    }else if(month>= 1&&month<= 12){
        days = 31;
    }else{
        printf("Invalid month.\n");
        return 1;
    }

    printf("Month %d in year %d has %d days.\n", month, year, days);

    return 0;
}