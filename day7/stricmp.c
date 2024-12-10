#include<stdio.h>
#include<string.h>
int main(){
      //stricmp
    char str10[10]="pavan";
    char str11[10]="pAvan";
    int res2=stricmp(str10,str11);
    printf("\n %d",res2);
    if(res2==0){
        printf("\n strings are same");
    }
    else{
        printf("\nStrings are not same");
    }
    return 0;
}
