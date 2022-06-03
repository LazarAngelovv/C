#include <stdio.h>
#include <stdlib.h>

int fnPlus(int nA, int nB);
int fnMinus(int nA, int nB);
int fnMultiply(int nA, int nB);
int fnDivide(int nA, int nB);
int (*pfCalc)(int,int) = NULL;

int main(){
    char op;
    scanf("%c",&op);
    int a=4;
    int b=9;
    if(op == '+'){
        pfCalc = &fnPlus;
        printf("%d", *pfCalc);
    } else if(op == '-'){
        pfCalc = &fnMinus;
        printf("%d", *pfCalc);        
    } else if(op == '.'){
        pfCalc = &fnMultiply;
        printf("%d", *pfCalc);        
    } else if(op == '/'){
        pfCalc = &fnDivide;
        printf("%d", *pfCalc);        
    }

    printf("%d %c %d = %d\n", a, op, b, pfCalc(a,b));
    return 0;
}

int fnPlus(int nA, int nB) { return nA + nB; }
int fnMinus(int nA, int nB) { return nA - nB; }
int fnMultiply(int nA, int nB) { return nA * nB; }
int fnDivide(int nA, int nB) {return nA / nB; }

/*
Задача 2. Добавете към горния код функции за умножение и деление.

Указател към функция
#include <stdio.h>
#include <stdlib.h>
int fnPlus(int nA, int nB) { return(nA + nB); }
int fnMinus(int nA, int nB) { return(nA - nB); }
int ( * pfCalc ) ( int, int ) = NULL;
int main(){
char op;
scanf("%c",&op);
int a=4;
int b=9;
if(op=='+')
pfCalc =fnPlus(a,b);
printf("%d", ( * pfCalc ) );
}
Да се довърши задачата за домашна работа
*/