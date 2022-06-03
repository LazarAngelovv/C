#include <stdio.h>

void fnSume(double, double);
void fnSubtract(double, double);
void fnMultiply(double, double);
void fnDivide(double, double);
void(*func_ptr[4])(double, double) = {fnSume, fnSubtract, fnMultiply, fnDivide};

int main(){
    double firstNum, secondNum;
    int operator;
    printf("Enter first number - "); scanf("%lf", &firstNum);
    printf("Enter second number - "); scanf("%lf", &secondNum);
    printf("Select sign (0 to sume, 1 to subtract, 2 to multiply, 3 to divide) - "); scanf("%d", &operator);
    func_ptr[operator](firstNum, secondNum);
    return 0;
}

void fnSume(double x, double y){
    double result = x + y;
    printf("\nThe Sum is: %.2lf", result);
}

void fnSubtract(double x, double y){
    double result = x - y;
    printf("\nThe Subtraction is: %.2lf", result);
}

void fnMultiply(double x, double y){
    double result = x * y;
    printf("\nThe Multiplication is: %.2lf", result);
}

void fnDivide(double x, double y){
    double result = x / y;
    if (y == 0)
        printf("You can't devided to 0!\n Result is: INFINITY\n");
    else
        printf("\nThe Division is: %.2lf", result);
}
/*
Задача 3. Направете масив от указатели към функции по следния начин:
void add(){…}
void fun2(){…}
void fun3(){...}
void (*func_ptr[3])() = {fun1, fun2, fun3};

Направете меню, с което да питате потребителя коя от горните функции иска да
използва – събиране, изваждане, умножение и деление.

След това попитайте за числата, които да участват в тази операция,
и извикайте функцията, която да извърши желаната операция.
*/
