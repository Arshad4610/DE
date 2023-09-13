#include<stdio.h>
#include<stdlib.h>
void sort(int a[])
{
    int n=25;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int median(int a[],int n)
{
    if(n%2==0)
    {
        return (a[n/2]+a[n/2+1])/2;
    }
    else
    {
        return a[n/2];
    }
    
}
int main()
{
    int a[]={13, 15, 16, 16, 19, 20, 20, 21, 22, 22, 25, 25, 25, 25, 30, 33, 33, 35, 35, 35, 36, 40, 45, 52, 70};
    int n=sizeof(a)/sizeof(a[0]);
    sort(a);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    int p=median(a,n);
    printf("Median is:%d",p);
}
