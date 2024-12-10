#include<stdio.h>
int main(){
    int inputNumber=0,revNumber=0,digit,countNumber;
    printf("enter a number:  ");
    scanf("%d",&inputNumber);

    while(inputNumber!=0){
        digit=inputNumber%10;
        countNumber++;
        revNumber=(revNumber*10)+digit;
        inputNumber=inputNumber/10;
    }
    printf("the no of digits:%d",countNumber);
    return 0;
}