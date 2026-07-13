#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,root1,root2,imaginary;
    printf("Enter a,b,c values for the quadratic Equation (ax^2+bx+c):");
    scanf("%f%f%f",&a,&b,&c);
    int dis = (b*b)-(4*a*c);
    switch(dis>0){
    case 1:
        root1= (-b + sqrt(dis))/(2*a);
        root2= (-b - sqrt(dis))/(2*a);
        printf("Roots are real and distinct\n Root1 = %.2f Root2 = %.2f",root1,root2);
        break;
    case 0:
        switch(dis <0){
        case 1:
            root1=root2=-b/(2*a);
            imaginary=sqrt(dis)/(2*a);
            printf("Roots are same and complex/n Root1 = %.2f+i%.2f  Root2 = %.2f - i%.2f",root1,imaginary,root2,imaginary);
            break;
        default:
            root1=root2=-b/(2*a);
             printf("Roots are real and equal/n Root1 = %.2f Root2 = %.2f",root1,root2);
        }

    }
}
