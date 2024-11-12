#include<stdio.h>
int main(){
	int i[50], result, sum=0,num,digit;
	printf("enter the number ...");
	scanf("%d",&num);
	while(num>0){
		digit = num%10;
		sum = sum+digit;
		printf("\nnum : %d Sum : %d",num,digit,sum);
		num = num/10;
	}
	printf("\n\nsum is : %d",sum);
	return 0;
}