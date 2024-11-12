#include<stdio.h>
int main(){
    int num,i,flag = 0;
    printf("enter the number =");
    scanf("%d",&num);
    for(i=2;i<=num/2;++i){
        printf("\nnum : %d,\ti=%d,\tremainder :%d",num,i,num%i);
        if(num%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("\n Given number is a prime number...");
    }

    else{
        printf("given number is not a prime numbe..");
    }
    return 0;
}
