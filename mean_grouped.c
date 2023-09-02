#include<stdio.h>
#include<stdlib.h>
void mid(int a[],int b[],int f[])
{
    int n=4,i;
    float x[n],f1=0,fx[n],f2=0;
    for(i=0;i<n;i++)
    {
        x[i]=(a[i]+b[i])/2;
        f1+=f[i];
        fx[i]=f[i]*x[i];
        f2+=fx[i];
        
    }
    printf("x elements are:");
    for(i=0;i<n;i++)
    {
        printf("%f ",x[i]);
    }
    printf("Enter freq:\n%f",f1);
    printf("\narray fx is:");
    for(i=0;i<n;i++)
    {
        printf("%f ",fx[i]);
    }
    printf("sum of fx:\n%f",f2);
}
int main()
{
    int n;
    // printf("Enter length:");
    // scanf("%d",&n);
    int a[]={10,13,16,19};
    int b[]={12,15,18,21};
    int f[]={4,12,20,14};
    mid(a,b,f);
    
}
