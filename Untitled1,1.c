#include<stdio.h>
#include<stdlib.h>
int main()
{
int n1,n2,numerator,denominator;
int rem;
scanf("%d",&n1);
scanf("%d",&n2);
if(n1<n2)
{
numerator=n1;
denominator=n2;
}
else
{
numerator=n2;
denominator=n1;
}
rem=numerator%denominator;
while(rem!=0)
{
numerator=denominator;
denominator=rem;
rem=numerator%denominator;
}
printf("%d",denominator);
}
