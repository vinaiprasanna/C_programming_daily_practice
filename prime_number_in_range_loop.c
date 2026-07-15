#include<stdio.h>
#include<math.h>
int main(){
    int a,b,i,digit,org,rem;
    float sum;
    printf("Enter the starting number:");
    scanf("%d",&a);
    printf("Enter the ending number:");
    scanf("%d",&b);
    printf("%d%d",a,b);
    printf("Armstrong number between %d and %d are:\n",a,b);
    for(i=a;i<=b;i++){
        org = i;
        digit=0;
        sum=0;
        while(org>0){
            org=org/10;
            digit++;
        }
        org=i;
        //printf("%d ",org);
        while(org>0){
            rem=org%10;
            sum+=pow(rem,digit);
            org=org/10;
            //printf("%d %f %d",rem,sum,org);
        }
        //printf("%d ",org);
        //printf("%d \n",sum);
        if((int)sum == i){
            printf("%d ",i);
        }

    }
}
