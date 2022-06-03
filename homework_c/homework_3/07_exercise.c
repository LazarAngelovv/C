#include <stdio.h>

int main()
{

    int first = 0, quotient = 0, N = 0;
    printf("Enter first num - ");
    scanf("%d", &first);
    printf("Enter the quotient from first two numbers - ");
    scanf("%d", &quotient);
    printf("Enter count of numbers you want to display - ");
    scanf("%d", &N);

    int current = first;
    printf("%d, ", current);
    while(N > 1){
        current *= quotient;
        printf("%d, ", current);
        N--;
    }

    return 0;
}
/*Задача 7. Да се изведат първите N числа на една редица (геометрична прогресия), ако са дадени първият
член на редицата и частното между първите два елемента. Да се напише програма.
Числата са на вход.*/