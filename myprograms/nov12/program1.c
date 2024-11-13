#include<stdio.h>
int main(){
    int i,n1,n2;
    printf("Enter two numbers: ");
    scanf("%d\t%d",&n1,&n2);
    if(n1<=n2){
        for(i=n1;i<=n2;i++){
            printf("%d\t",i);
        }
    }
    else{
        printf("terminated");
    }
return 0;
}
