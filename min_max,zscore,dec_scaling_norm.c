#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float min(int a[],int n){
    int m=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<m){
            m=a[i];
        }
    }
    return m;
}
float max(int a[],int n){
    int m=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>m){
            m=a[i];
        }
    }
    return m;
}
float mean(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum/n;
}
double std(int a[],int n){
    float m=mean(a,n);
    double var=0;
    for(int i=0;i<n;i++){
        var+=pow((a[i]-m),2);
    }
    return sqrt(var/n);
}
int dgcount(int a){
    int cnt=0;
    while(a>0){
        a=a/10;
        cnt++;
    }
    return cnt;
}
void min_max_norm(int a[],int n){
    float mi=min(a,n);
    float ma=max(a,n);
    float norm[n];
    for(int i=0;i<n;i++){
        norm[i]=(a[i]-mi)/(ma-mi);
    }
    for(int i=0;i<n;i++){
        printf("\n %d %.2f",a[i],norm[i]);
    }
}
void zscore_norm(int a[],int n){
    double norm[n];
    float m=mean(a,n);
    double s=std(a,n);
    for(int i=0;i<n;i++){
        norm[i]=(a[i]-m)/s;
    }
    for(int i=0;i<n;i++){
        printf("\n %d  %f",a[i],norm[i]);
    }
}
void dec_scaling_norm(int a[],int n){
    double norm[n];
    for(int i=0;i<n;i++){
        int dgcnt=dgcount(a[i]);
        norm[i]=a[i]/pow(10,dgcnt);
    }
    for(int i=0;i<n;i++){
        printf("\n %d %f",a[i],norm[i]);
    }
}
int main(){
    int n;
    printf("Ent no.of ele:");
    scanf("%d",&n);
    int a[50]={8,10,15,20};
    printf("min max norm");
    min_max_norm(a,n);
    printf("\nzscore norm");
    zscore_norm(a,n);
    printf("\ndecimal scaling");
    dec_scaling_norm(a,n);
}
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  output:
  /tmp/UImQY5CPRu.o
Ent no.of ele:4
min max norm
 8   0.00
 10  0.17
 15  0.58
 20  1.00
zscore norm
 8    -1.072113
 10   -0.643268
 15    0.428845
 20    1.500958
decimal scaling
 8    0.800000
 10   0.100000
 15   0.150000
 20   0.200000
