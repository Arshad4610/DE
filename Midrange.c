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
int midrange(int a[])
{
    int n=25,maxvalue=a[n-1],minvalue=a[0];
    return (maxvalue-minvalue)/2;
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
    int p=midrange(a);
    printf("Midrange is:%d",p);
}
