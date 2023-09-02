#include<stdio.h>
#include<stdlib.h>
int mean(int x[])
{
    int sum=0;int i;
    int n=5;
    for(i=0;i<n;i++)
    {
        sum=sum+x[i];
    }
    return (sum/n);
}
int main()
{
    int i,n;
    printf("Enter length:");
    scanf("%d",&n);
    int x[n];
    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    int m=mean(x);
    printf("mean is:%d",m);
}
