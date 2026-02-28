/*Electricity bill
Practical 3, Part 2
@Nishchal Ranjitkar*/

#include<stdio.h>
int main(){
    int previous, present, day, month;
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

    return 0;
}