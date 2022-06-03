#include <stdio.h>
int numCount();

int main(){
    int num = 0;
    printf("Enter number - ");
    scanf("%d", &num);

    printf("The number count is %d digits.", numCount(num, 0));
    return 0;
}

int numCount(int num, int counter){
    if(num == 0)
        return counter;
    
    return numCount(num/10, ++counter);
}
