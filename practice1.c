#include<stdio.h>
#include<math.h>
int  main(){
    int i=2,n,c,j,sum=0,k,fact=1;
    printf("-----Menu-----------\n 1.Even numbers within the range\n 2.Odd number within the range\n3.sum of N natural numbers\n4.Factorial of a number\n5.Multiplication table\n6.Sum of Even numbers\n7.Sum of Odd numbers\n8. power of a number\n9. Inverse of power of a number\n ");
    printf("Enter the choice:");
    scanf("%d",&c);
    switch(c){
    case 1:
        printf("Enter the value for n:");
        scanf("%d",&n);
        printf("Even numbers....\n");
        for(;i<=n;i+=2){
            printf("%d ",i);
        }
        break;
    case 2:
        int j=1;
        printf("Enter the value for n:");
        scanf("%d",&n);
        printf("Odd numbers....\n");
        for(;j<=n;j+=2){
            printf("%d ",j);
        }
        break;
    case 3:
        k=1;
        printf("Enter the value for n:");
        scanf("%d",&n);
        printf("sum of n natural numbers:");
        for(;k<=n;k++){
            sum+=k;
        }
        printf("%d ",sum);
        break;
    case 4:
        k=1;
        printf("Enter the value for n:");
        scanf("%d",&n);
        printf("factorial of a number:");
        for(;k<=n;k++){
            fact=fact*k;
        }
        printf("%d",fact);
        break;
    case 5:
        k=1;
        printf("Enter the value for n:");
        scanf("%d",&n);
        printf("%d Table:\n",n);
        for(;k<=10;k++){
            printf("%d X %d = %d\n",k,n,k*n);
        }
        break;
    case 6:
        printf("Enter the value for n:");
        scanf("%d",&n);
        //printf("Even numbers..../n");
        for(;i<=n;i+=2){
            sum=sum+i;
        }
        printf("sum of even number %d",sum);
        break;
    case 7:
        printf("Enter the value for n:");
        scanf("%d",&n);
        //printf("Even numbers..../n");
        for(j=1;j<=n;j+=2){
            sum+=j;
        }
        printf("sum of odd number %d",sum);
        break;
    case 8:
        k=0;
        printf("Enter the value for n:");
        scanf("%d",&n);
        //printf("Even numbers..../n");
        for(;k<=n;k++){
            printf("%d power %d is %.2f\n",n,k,pow(n,k));
        }
        break;
    case 9:
        k=0;
        printf("Enter the value for n:");
        scanf("%d",&n);
        //printf("Even numbers..../n");
        for(;k<=n;k++){
            printf("%d power %d is %.2f\n",n,k,(1/pow(n,k)));
        }
        break;
        default:
            printf("Invalid choice........");
    }

    }


