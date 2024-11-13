#include<stdio.h>
void main(int i){
    int fact,i,n;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;++i){
        fact = fact*i;
    }
    if(n<=1){
        return 1;
    }
    else{
        fact = n *(n-1);
        return fact;
    }
    if(n<0){
        printf("factorial not defined");
    }
    else{
        printf("the factorial is:%d\n",fact);
    }
}
