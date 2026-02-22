/*Future dates
Practical 3, exercise-1 
@Nishchal Ranjitkar*/

#include<stdio.h>

int main(){
    int today, future, future_day;
    
    char days[7][10]= {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    printf("Enter today's day (0-6): ");
    scanf("%d", &today);
    if(today<0||today>6){
        printf("Invalid day entered.\n");
        return 1;
    }
    printf("Enter number of days in future: ");
    scanf("%d", &future);   
    future_day= (today+ future)% 7;
    printf("Today is %s and the future day is %s\n", days[today], days[future_day]);

    return 0;
}