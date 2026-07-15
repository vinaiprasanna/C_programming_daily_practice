#include<stdio.h>
#include<math.h>
int main(){
    int x,n,i;
    float sum=0.0;
    printf("Enter the range:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum += 1.0/ i;
    }
    printf("%f",sum);
}
