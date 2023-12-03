
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void sort(int a[],int n)
{
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
void quartile(int a[],int n){
    int q3,q1;
    if(n%2==0){
        q3=a[3*(n+1)/4];
        q1=a[(n+1)/4];
    }
    else{
        q3=a[3*n/4];
        q1=a[n/4];
    }
    float iqr=(q3-q1);
    float lwhk=q1-(1.5*iqr);
    float upwhk=q3+(1.5*iqr);
    printf("lower whisker is:%.2f",lwhk);
    printf("\nupper whisker is:%.2f",upwhk);
}
int main(){
    int n=27;
    int a[]={13, 15, 16, 16, 19, 20, 20, 21, 22, 22, 25, 25, 25, 25, 30, 33, 33, 35, 35, 35, 36, 40, 45, 52, 70};
    sort(a,n);
    quartile(a,n);
}
------------------------------------------------------------------------------------------------------------------------------
output:
    /tmp/52AGqaVhYz.o
lower whisker is:-2.50
upper whisker is:57.50
