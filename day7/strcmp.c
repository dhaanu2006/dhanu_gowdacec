#include<stdio.h>
#include<string.h>
int main(){
       //strcmp
    char str8[10]="pavan";
    char str9[10]="pAvan";
    int res1=strcmp(str8,str9);
    printf("\n %d",res1);
    if(res1==0){
        printf("\n strings are same");
    }
    else{
        printf("\nStrings are not same");
    }
    return 0;
}