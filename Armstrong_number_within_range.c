#include<stdio.h>
#include<math.h>
void armstrong(int n){
    int digit=0,org,rem,sum=0;
    org = n;
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
    //printf("%d ",org);
    //printf("%d \n",sum);
    if((int)sum == org){
        printf("%d ",org);
    }
}
int main(){
    int a,b,i;
    printf("Enter the starting number:");
    scanf("%d",&a);
    printf("Enter the ending number:");
    scanf("%d",&b);
    //printf("%d%d",a,b);
    printf("Armstrong number between %d and %d are:\n",a,b);
    for(i=a;i<=b;i++){
        armstrong(i);
    }
}
