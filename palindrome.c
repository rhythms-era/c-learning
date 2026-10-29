#include <stdio.h>
int main()
{int n,num,i=0;
printf("Enter number:");
scanf("%d",&n);
num=n;
while(n!=0)
{i=i*10+n%10;
n/=10;}
if(i==num)
{printf("%d is palindrome ",num);}
else
{printf("%d is not palindrome",num);}
return 0;
}
