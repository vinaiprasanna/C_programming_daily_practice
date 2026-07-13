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
        print:
            printf("%d ",i);
            i=i+2;
        if(i<=n){
            goto print;
        }
        break;
    case 2:
        int j=1;
        printf("Enter the value for n:");
        scanf("%d",&n);
        printf("Odd numbers....\n");
        printodd:
            printf("%d ",j);
            j=j+2;
        if(j<=n){
            goto printodd;
    }
    break;
    case 3:
        k=1;
        printf("Enter the value for n:");
        scanf("%d",&n);
        printf("sum of n natural numbers:");
        sumprint:
            sum+=k;
            k++;
        if(k<=n){
            goto sumprint;
        }
        printf("%d",sum);
        break;
    case 4:
        k=1;
        printf("Enter the value for n:");
        scanf("%d",&n);
        printf("factorial of a number:");
        factprint:
            fact*=k;
            k++;
        if(k<=n){
            goto factprint;
        }
        printf("%d",fact);
        break;
    case 5:
        k=1;
        printf("Enter the value for n:");
        scanf("%d",&n);
        printf("%d Table:\n",n);
        mulprint:
            printf("%d X %d = %d\n",k,n,k*n);
            k++;
        if(k<=10){
            goto mulprint;
        }
        break;
    case 6:
        printf("Enter the value for n:");
        scanf("%d",&n);
        //printf("Even numbers..../n");
        sumEprint:
            //printf("%d ",i);
            sum+=i;
            i=i+2;
        if(i<=n){
            goto sumEprint;
        }
        printf("sum of even number %d",sum);
        break;
    case 7:
        printf("Enter the value for n:");
        scanf("%d",&n);
        //printf("Even numbers..../n");
        sumOprint:
            //printf("%d ",i);
            sum+=j;
            j=j+2;
        if(j<=n){
            goto sumOprint;
        }
        printf("sum of odd number %d",sum);
        break;
    case 8:
        k=0;
        printf("Enter the value for n:");
        scanf("%d",&n);
        //printf("Even numbers..../n");
        powprint:
            printf("%d power %d = %.2f \n",n,k,pow(n,k));
            k++;
        if(k<=n){
            goto powprint;
        }
        break;
    case 9:
        k=0;
        printf("Enter the value for n:");
        scanf("%d",&n);
        //printf("Even numbers..../n");
        divpowprint:
            printf("1 divided by %d power %d = %f \n",n,k,1/pow(n,k));
            k++;
        if(k<=n){
            goto divpowprint;
        }
        break;


    }

}
