#include<stdio.h>
int main(){
    int sum,n,dig=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        dig=(dig*10)+9;
        sum+=dig;
    }
    printf("%d",sum);
}
