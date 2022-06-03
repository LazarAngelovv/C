#include <stdio.h>

int main(){

    int N;
    printf("Enter num - ");
    scanf("%d", &N);

    int result = 0;
    for (int i = 0; i <= N; i++){
        for(int j = 0; j <= N; j++){
            result = i + j;
            if(result == N)
                printf("%d + %d = %d\n", i, j, result);
        }
    }

    return 0;
}
/*Задача 3. По зададено естествено число N, да се намерят всички двойки естествени числа М и К, за
които М2+К2=N.*/

