#include<stdio.h>
int main()
{

    int n;
    int target;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("target");
    scanf("%d",&target);
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i]+a[j]==target)
            {
                printf("true");
                break;
            }
        }

}}
