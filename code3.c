#include<stdio.h>
int addfunction(int i){
    if(i==0){
        return 0;
    return (i % 10) + addfunction(i/10);
    }
}
int main(){
    int i,result;
    printf("enter the number:");
    scanf("%d",&i);
    result = addfunction(i);
    printf("enter the result:%d\n",result);    
    return 0;
}
