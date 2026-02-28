/*Electricity bill
Practical 3, Part 3
@Nishchal Ranjitkar*/

#include<stdio.h>
#define MAX 10
int main(){
    int customers;
    int previous, present, day, month, total=0;

    printf("How many customers?(1-%d):\n", MAX);
    if(scanf("%d", &customers)!= 1||customers<1||customers>10){
        printf("Invalid customers number input\n");
        return 1;
    }
    for(int i=1;i<=customers;i++){
        printf("\nCustomer %d\n", i);
        printf("Enter previous reading, present reading, day and month:\n");

        if(scanf("%d %d %d %d", &previous, &present, &day, &month)!= 4){
            printf("Invalid input\n");
            return 1;
        }

        printf("%d %d %d %d\n", previous, present, day, month);

    if(previous<0||previous>9999){
        printf("Error: previous reading out of range\n");}
    if(present<0||present>9999){
        printf("Error: present reading out of range\n");}
    if(previous>present){
        printf("Error: previous greater than present\n");}
    if(present-previous>1000){
        printf("Error: usage more than 1000 units\n");}
    if(month<1||month>12){
        printf("Error: invalid month\n");}
    if(day<1||day>31){
        printf("Error: invalid day\n");}

    if(previous<=present){
            total+=(present-previous);
    }
    }

    printf("\n=====Summary=====\n");
    printf("Total customers processed: %d\n", customers);
    printf("Total electricity units used: %d\n", total);

    return 0;
}