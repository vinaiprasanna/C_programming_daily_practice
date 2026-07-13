#include<stdio.h>
enum day{
    mon=10,
    tues=15,
    wed=20,
    thurs=25,
    fri=30,
    sat=35,
    sun=40
};
int main(){
    /*int a,b,c,i;
    printf("Enetr three number:");
    scanf("%d%d%d",&a,&b,&c);
    switch((a>b)&&(a>c)){
    case 1:
        printf("%d is greater",a);
        break;
    default:
        printf("%d is greater",b>c?b:c);
    }
    enum day today = wed;
    printf("%d",today);
    switch(today){
    case 10:
        printf("Monday");
        break;
     case 15:
        printf("Tuesday");
        break;
     case 20:
        printf("Wednesday");
        break;
     case 25:
        printf("Thursday");
        break;
     case 30:
        printf("Friday");
        break;
     case 35:
        printf("Saturday");
        break;
     case 40:
        printf("Sunday");
        break;
        */
        int i=1;
        print:
            printf("backward jump:%d \n ",i);
            i++;
        if(i<=5){
             goto print;
        }else{
            goto skip;
        }
        skip:
            printf("\nforward jump:%d",i);

    }
