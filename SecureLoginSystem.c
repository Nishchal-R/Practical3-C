/*Secure login system
Practical 3, exercise-3
@Nishchal Ranjitkar*/

#include<stdio.h>
#include<string.h>
#define PIN 1298

int main(){
    char input[20];
    int attempt=0;
    
    int i, pin;
    int valid;
    
    while(attempt< 3){
        printf("Enter Pin code: ");
        if(scanf("%19s", input)!= 1){
            continue;
        }

        valid=1;

        if(strlen(input)!=4){
            valid=0;
        }

        for(i=0; input[i]!='\0';i++){
            if(input[i]<'0'||input[i]>'9'){
                valid=0;
                break;
            }
        }

        if(!valid){
            printf("Error: Enter exact 4 digits.\n");
            continue;
        }

        pin=0;
        for(i=0;i<4;i++){
            pin=pin*10+(input[i]-'0');
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