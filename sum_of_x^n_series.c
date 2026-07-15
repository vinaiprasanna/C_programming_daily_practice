#include<stdio.h>
#include<math.h>
int main(){
    int x,n,i,sum;
    printf("Enter the base value:");
    scanf("%d",&x);
    printf("Enter the range:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        sum+=pow(x,i);
    }
    printf("%d",sum);
}
