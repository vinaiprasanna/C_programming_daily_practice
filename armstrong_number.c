#include<stdio.h>
#include<math.h>
int main(){
    int digit=0,n,org,sum,rem;
    printf("Enter a number:");
    scanf("%d",&n);
    org=n;
    while(n>0){
        n=n/10;
        digit++;
    }
    n=org;
    while(n>0){
        rem=n%10;
        sum+=pow(rem,digit);
        n=n/10;
    }
    if((int)sum == org){
        printf("Armstrong number");
    }else{
        printf("Not a armstrong number.");
    }

}
