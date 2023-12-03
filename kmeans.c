#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int x[8]={2,2,8,5,7,6,1,4};
    int y[8]={10,5,4,8,5,4,2,9};
    int c1[8][2],c2[8][2],p,q;
    float mx1=2,my1=5,mx2=6,my2=4,ox1,oy1,ox2,oy2,t1,t2;
    do{
        ox1=mx1;
        oy1=my1;
        ox2=mx2;
        oy2=my2;
        p=0;
        q=0;
        for(int i=0;i<8;i++){
            t1=(x[i]-mx1)+(y[i]-my1);
            if(t1<0){
                t1=-1*t1;
            }
            t2=(x[i]-mx2)+(y[i]-my2);
            if(t2<0){
                t2=-1*t2;
            }
            if(t1<t2){
                c1[p][0]=x[i];
                c1[p][1]=y[i];
                p++;
            }
            else{
                c2[q][0]=x[i];
                c2[q][1]=y[i];
                q++;
            }
        }
        float s1x=0.0,s1y=0.0;
        for(int i=0;i<p;i++){
            s1x+=c1[i][0];
            s1y+=c1[i][1];
        }
        mx1=s1x/p;
        my1=s1y/p;
        float s2x=0.0,s2y=0.0;
        for(int i=0;i<q;i++){
            s2x+=c2[i][0];
            s2y+=c2[i][1];
        }
        mx2=s2x/q;
        my2=s2y/q;
    }while(ox1!=mx1 && oy1!=my1 && ox2!=mx2 && oy2!=my2);
    printf("cluster 1 :");
    for(int i=0;i<p;i++){
        for(int j=0;j<2;j++){
            printf("%d ",c1[i][j]);
        }
        printf("\n");
    }
    printf("cluster 2 :");
    for(int i=0;i<q;i++){
        for(int j=0;j<2;j++){
            printf("%d ",c2[i][j]);
        }
        printf("\n");
    }
}
--------------------------------------------------------------------------------------------------------------------------
output:
/tmp/zlor4Hrlga.o
cluster 1 :2 5 
1 2 
cluster 2 :2 10 
8 4 
5 8 
7 5 
6 4 
4 9 
