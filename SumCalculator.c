/*Electricity bill
Practical 3, Part 3
@Nishchal Ranjitkar*/

#include<stdio.h>
int main(){
    int number, sum = 0;
    printf("===Sum Calculator===\n");
    printf("Enter positive numbers (negative to stop):\n");
    while(1){
        printf("Enter number: ");
        if(scanf("%d", &number)!= 1){
            printf("Invalid input\n");
            return 1;
        }
        if(number< 0){
            break;}

        sum+= number;
        printf("Current sum: %d\n", sum);
    }

    printf("Final sum: %d\n", sum);

    return 0;
}