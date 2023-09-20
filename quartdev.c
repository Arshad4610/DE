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
int median(int a[],int m,int n)
{
    if(n%2==0)
    {
        return (a[n/2]+a[(n/2)+1])/2.0;
    }
    else
    {
        return a[n/2];
    }
    
}
int main()
{
    int a[]={13, 15, 16, 16, 19, 20, 20, 21, 22, 22, 25, 25, 25, 25, 30, 33, 33, 35, 35, 35, 36, 40, 45, 52, 70};
    // int a[]={3,5,7,8,12,13,14,18,21};
    int n=25;
    int q1,q2,q3;
    float fq1,fq3,IQR,Q1,Q3;
    if(n%2==0)
    {
        q1=n/4;
        q3=(3*n)/4;
        fq1=n/4.0;
        fq3=(3*n)/4.0;
    }
    else
    {
        q1=(n+1)/4;
        q3=(3*(n+1))/4;
        fq1=(n+1)/4.0;
        fq3=(3*(n+1))/4.0;
    }
    if(q1==fq1)
    {
        IQR=a[q3]-a[q1];
        printf("q1 is :%d\n",a[q1]);
        printf("q3 is :%d\n",a[q3]);
        printf("IQR is :%f\n",IQR);
        Q1=a[q1]-(1.5*IQR);
        Q3=a[q3]+(1.5*IQR);
        printf("Q1 :%f\n",Q1);
        printf("Q3 :%f",Q3);
    }
    else
    {
        float i=((a[q3-1]+a[q3])/2.0);
        float j=((a[q1-1]+a[q1])/2.0);
        IQR=i-j;
        printf("Q3 is :%f\n",i);
        printf("Q1 is :%f\n",j);
        printf("IQR is :%f\n",IQR);
        Q1=j-(1.5*IQR);
        Q3=i+(1.5*IQR);
        printf("Q1 :%f\n",Q1);
        printf("Q3 :%f",Q3);
    }
}
