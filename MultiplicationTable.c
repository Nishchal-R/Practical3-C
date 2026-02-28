/*Electricity bill
Practical 3, Part 3
@Nishchal Ranjitkar*/

#include<stdio.h>
#define MAX 9
int main(){
    int size;
    printf("Enter table size (1-%d): ", MAX);
    if(scanf("%d", &size)!= 1){
            printf("Invalid input\n");
            return 1;
    }

    if(size< 1||size>MAX){
            printf("Size must be between 1 and %d\n", MAX);
            return 1;
    }

    printf("\nMultiplication Table %dx%d:\n", size, size);
    printf("     ");
    for(int i=1;i<=size;i++){
        printf("%4d", i);
    } printf("\n     "); 
    for(int i=1;i<=size;i++){
        printf("----");
    } printf("\n"); 

    for(int i=1;i<=size;i++){
        printf("%3d |", i);
        for(int j=1;j<=size;j++){
            printf("%4d", i * j);
        }
        printf("\n");
    }

    return 0;
}