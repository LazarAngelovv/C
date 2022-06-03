#include <stdio.h>
int rectangleArea();

int main(){
   
    int a = 0, b = 0;
    
    printf("Enter first side - ");
    scanf("%d", &a);
    
    printf("Enter second side - ");
    scanf("%d", &b);

    printf("The area of rectangle is %d.", rectangleArea(a, b));
    return 0;
}

int rectangleArea(int a, int b){
    return a * b;
}   

