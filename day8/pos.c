#include<stdio.h>
int main(){
    int arr[10]={10,20,30,40,50,60};
    int data=50;
    for(int i=0;i<6;i++){
        if (arr[i]==data){
            printf("the array element present in pos %d",i);
            break;
        }
    }
}