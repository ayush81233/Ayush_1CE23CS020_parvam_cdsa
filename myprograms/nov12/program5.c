#include<stdio.h>
#include<conio.h>
int main()
{
char str1[100],str2[100],str3[100];
int i=0,j=0;
printf("\n enter the first string :");
gets(str1);
printf("\n enter the second string:");
gets(str2);
while(str1[i]!="\0")
{
str3[j]=str1[i];
i++;
j++;
}
i=0;
while(str2[i] !="\0")
{
str3[j]=str2[i];
i++;
j++;
}
str3[j]= "\0";
printf("\n the concentrated string is:");
puts(str3);
getch();
return 0;
}