#include<stdio.h>
#include<stdlib.h>
int mode(int a[])
{
    int n=25,maxcount=0,maxvalue=0;
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count>maxcount)
        {
            maxcount=count;
            maxvalue=a[i];
        }
    }
    return maxvalue;
}
int main()
{
    int a[]={13, 15, 16, 16, 19, 20, 20, 21, 22, 22, 25, 25, 25, 25, 30, 33, 33, 35, 35, 35, 36, 40, 45, 52, 70};
    int n=sizeof(a)/sizeof(a[0]);
    int p=mode(a);
    printf("Mode is:%d ",p);
}
