#include<stdio.h>
int main(){
    int n,rem,sum=0;
    printf("Enter the value for N:");
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        sum= sum+rem;
        n=n/10;
    }
    printf("%d",sum);

}
