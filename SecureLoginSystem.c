/*Secure login system
Practical 3, exercise-3
@Nishchal Ranjitkar*/

#include<stdio.h>
#define PIN 1298

int main(){
    int pin;
    int attempt=0;
    
    while(attempt< 3){
        printf("Enter Pin code: ");
        if(scanf("%d", &pin)!= 1){
            printf("Invalid. Numbers only.\n");
            while(getchar()!='\n');
            continue;
        }

        if(pin<1000||pin>9999){
            printf("Error: Enter only 4 digits.\n");
            continue;
        }
        
        if(pin==PIN){
            printf("Access Granted!\n");
            return 0;
        }
        attempt++;

        if(attempt< 3){
            printf("Wrong PIN. %d attempt(s) left.\n", 3-attempt);
        }else{
            printf("Access Denied. Account Locked.\n");
        }
    }

    return 0;
}