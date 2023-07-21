#include<stdio.h>
int main()
{
    int n;
    printf("enter size");
    scanf("%d",&n);
    int a[n];
    int i,j;
    int sum1=0,sum=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        printf(" %d",a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            sum1=sum1+a[i];
            printf("\n%d",sum1);
        }
        if(a[i]%2==1)
        {
            sum=sum+a[i];

            printf("\n%d",sum);
        }

    }
}
