#include<stdio.h>
int main(){
    int a=0,b=1,temp,n,i=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(i<n){
        printf("%d ",a);
        temp=a+b;
        a=b;
        b=temp;
        i++;
    }

}
