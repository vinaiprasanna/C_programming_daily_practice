// C operators practices

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 2 numbers:");
    scanf("%d%d",&a,&b);
    //Arithmatic Operators
    printf("ARITHMATIC OPERATOR\n");
    printf("\nAddition: %d\n",a+b);
    printf("Subraction: %d\n",a-b);
    printf("Multiplication: %d\n",a*b);
    printf("Division: %d\n",a/b);
    printf("Modular division: %d\n",a%b);

    // Relational Operators
    printf("RELATIONAL OPERATOR\n");
    printf("Greater then: %d\n",a>b);
    printf("Greater then or Equals: %d\n",a>=b);
    printf("Lesser then : %d\n",a<b);
    printf("lesser than or equal: %d\n",a<=b);
    printf("both are Equal: %d\n",a==b);
    printf("both are not equal: %d\n",a!=b);

    //logical operators
    printf("LOGICAL OPERATOR\n");
    printf("Logical AND: %d\n",((a>b)&&(a!=b)));
    printf("logical OR: %d\n",((a>b)||(a!=b)));
    printf("Logical NOT: %d\n",!(a>b));

    //Bitwise operator
    printf("BITWISE OPERATOR\n");
    printf("bitwise AND : %d\n",a&b);
    printf("Bitwise OR : %d\n",a|b);
    printf("Bitwise XOR : %d\n",a^b);
    printf("Bitwise NOT : %d\n",~b);
    printf("Left shift : %d\n",a<<2);
    printf("Right shift : %d\n",a>>2);

    // Ternary operator[number divisible by 5 and 7]
    printf("TERNARY OPERATOR\n");
    printf("Checking if a number is divisible by both 5 and 7 using ternary operator:\n");
    ((a%5)==0 && (a%7)==0)? printf("divisible by 5 and 7"): ((a%5)==0)? printf("divisible by 5"): ((a%7)==0)? printf("divisible by 7"): printf("not divided by 5 and 7");
    printf("\n printing the 11 odd number from the number A which is divisible by 4\n");
    ((a%4)==0)? printf("%d is the 11th odd number.",((2*10)+1)+a):printf("It is not divisible by 4");
}
