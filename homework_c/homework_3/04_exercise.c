#include <stdio.h>

int main(){

    int a = 0, b = 0, N = 0;
    printf("Enter a - ");
    scanf("%d", &a);

    while(b == 0){
        printf("Enter b - ");
        scanf("%d", &b);
    }

    while(N < 1 || N > 100){
        printf("Enter N - ");
        scanf("%d", &N);
    }
    
    printf("%d / %d = %.*f", a, b, N, (float)a/b);

    return 0;
}
/*Задача 4. Дадени са a, b, N (b !=0, 1<=N<=100). Да се намери частното a/b и да се отпечата на екрана с
N цифри след десетичната запетая.*/