#include<stdio.h>
int main(){
    int sq,n,sum=0;
    printf("Enter the value for n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sq=i*i;
        printf("%d ",sq);
        sum+=sq;
    }
    printf("sum of squares :%d",sum);
}
