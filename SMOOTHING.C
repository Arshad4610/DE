#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,b;
    printf("Enter no.ofele:");
    scanf("%d",&n);
    printf("\n bin length:");
    scanf("%d",&b);
    int k=n/b;
    int l[k][b];
    float mean[k];
    for(int i=0;i<k;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&l[i][j]);
        }
    }
    for(int i=0;i<k;i++){
        float sum=0;
        for(int j=0;j<b;j++){
            sum+=l[i][j];
        }
        mean[i]=(sum)/b;
    }
    for(int i=0;i<k;i++){
        for(int j=0;j<b;j++){
            printf("%.2f ",mean[i]);
        }
        printf("\n");
    }
}
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
output:
Enter no.ofele:27
bin length:3
13 
15
16
16
19
20
20
21
22
22
25
25
25
25
30
33
33
35
35
35
35
36
40
45
46
52
70
14.67  14.67  14.67 
18.33  18.33  18.33 
21.00  21.00  21.00 
24.00  24.00  24.00 
26.67  26.67  26.67 
33.67  33.67  33.67 
35.00  35.00  35.00 
40.33  40.33  40.33 
56.00  56.00  56.00 
