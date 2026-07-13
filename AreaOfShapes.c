#include<stdio.h>
int main(){
    int n,side,radius,height,length,breath;
    printf("-------MENU--------------\n 1.Area of Square\n 2. Area of Circle\n 3.Area of Reactangle\n4. Area of Triangle\n");
    printf("Enter a number:");
    scanf("%d",&n);
    switch(n){
    case 1:
        printf("Enter the side of the Square:");
        scanf("%d",&side);
        printf("Area of square: %d",side*side);
        break;
    case 2:
        printf("Enter the radius of the circle:");
        scanf("%d",&radius);
        printf("Area of circle: %.2f",3.14*(radius*radius));
        break;
    case 3:
        printf("Enter the length and breath:");
        scanf("%d%d",&length,&breath);
        printf("Area of rectangle %d",length*breath);
        break;
    case 4:
        printf("Enter the breath anh height:");
        scanf("%d%d",&breath,&height);
        printf("Area of triangle %.2f",(0.5)*breath*height);
        break;
    default:
        printf("Invalid choice");
    }
}
