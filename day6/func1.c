#include<stdio.h>
// function dec
int sum(int a, int b);
int main(){
    int a=10,b=10,res;
    res=sum(a,b);
    printf("the sum of %d and %d is %d \n",a,b,res);
    res=sum(30,30);
    printf("the sum of 30 and 30 is %d \n",res);
    res=sum(46,30);
    printf("the sum of 46 and 30 is %d \n",res);
    res=sum(50,100);
    printf("the sum of 50 and 100 is %d \n",res);
    return 0;
}

//function definition
int sum(int a, int b){   
    int res=a+b;
    return res;
}
