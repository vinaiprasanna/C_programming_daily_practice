#include<stdio.h>
#include<math.h>
int main(){
    int x,n,i,j,fact;
    float sum=0.0,val;
    printf("Enter the value for x:");
    scanf("%d",&x);
    printf("Enter the n value:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        fact=1;
        for(j=1;j<=(i*2);j++){
            fact=fact*j;
        }
        printf("%d ",fact);
        val= (pow(-1,i)*pow(x,2*i))/fact;
        sum+=val;
        }
        printf("%f",sum);
    }
