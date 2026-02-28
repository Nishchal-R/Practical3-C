/*Electricity bill
Practical 3, Part 3
@Nishchal Ranjitkar*/

#include<stdio.h>
int main(){
    int choice, num1, num2;
    do {
        printf("===Simple Calculator===\n");
        printf("\n1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Exit\n");
        printf("Choice: ");

        if(scanf("%d", &choice)!= 1){
            printf("Invalid input\n");
            while(getchar()!='\n'); 
            choice=0;
            continue;
        }

        if(choice< 1||choice>4){
            printf("Choice must be between 1 and 4\n");
            continue;
        }

        if(choice>= 1&&choice<= 3){
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);

            switch(choice){
                case 1:
                printf("Result: %d+%d=%d\n", num1, num2, num1+num2);
                break;
                case 2:
                printf("Result: %d-%d=%d\n", num1, num2, num1-num2);
                break;
                case 3:
                printf("Result: %d*%d=%d\n", num1, num2, num1*num2);
                break;
                default:
                printf("Invalid operation\n");
            }
        }

    }while(choice!= 4);
    printf("Goodbye!\n");

    return 0;
}