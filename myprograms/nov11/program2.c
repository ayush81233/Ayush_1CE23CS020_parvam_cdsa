#include<stdio.h>
int factorial(int n){
    if (n<=1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n<0){
        printf("factorial is not defined\n");
    }
    else{
        printf("the factorial is :%d\n",factorial(n));
    }
return 0;
}
