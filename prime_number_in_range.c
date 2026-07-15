#include<stdio.h>
void isprime(int n){
    int j,flag =1;
    if(n<=1){
        flag=0;
    }else{
        for(j=2;j <= (n/2);j++){
            if((n%j == 0)){
                flag=0;
            }
        }
    }
    if(flag){
        printf("%d ",n);
    }
}
int main(){
    int a,b,i;
    printf("Enter the starting number:");
    scanf("%d",&a);
    printf("Enter the ending number:");
    scanf("%d",&b);
    for(i=a;i<=b;i++){
        isprime(i);
    }
}
