#include<stdio.h>
int main(){
    char c;
    printf("Enter a character:");
    scanf("%c",&c);
    switch(c){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("It is a vowel");
        break;
    default:
        printf("it is a constant");
    }
}
