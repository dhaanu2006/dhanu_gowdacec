#include<stdio.h>
int main(){
    int inputNumber=0;
    printf("enter a number:");
    scanf("%d",&inputNumber);
    if(inputNumber>0){
        printf("the number is greater than 0");
    }
    else if(inputNumber>=0 && inputNumber<20){
        printf("the number is greater than or eguals to0 and less than 10");
    }
    else if(inputNumber>=10 && inputNumber<20){
        printf("the number is greater than or eguals to 10 and less than 20");
    }
    else{
        printf("the number greater than 20");
    }
    return 0;
}