#include<stdio.h>
#include<ctype.h>
int main(){
    char c;
    printf("Enter a character:");
    scanf("%c",&c);
    if(isdigit(c)){
        printf("It is an digit\n");
    }else if(isalpha(c)&&isupper(c)){
        printf("It is an upper case alphabet\n");
    }
    else if(isalpha(c)&&islower(c)){
        printf("It is an lower case alphabet\n");
    }else if(!isalnum(c)){
        printf("It is a special char");
    }
    else{
        printf("Not a alphabet\n");
    }
}
