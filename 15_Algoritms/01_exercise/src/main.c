/*
11. Обичате да ядете бонбони, нали. Искате винаги да имате N бонбона в
себе си. Всеки час можете да си купите по един бонбон, да изядете по един
бонбон, който имате, или да удвоите всички бонбони. За колко най-малко
часа може да постигнете това?
Например:
Ако N е 1, отговорът би бил 0 (нищо за правене, вече имате 1).
Ако N е 2, отговорът би бил 1 (бихте могли или да купите нов бонбон, или да
удвоите тези, които имате).
Ако N е 7, отговорът би бил 4 (добавяте 1 в първия час, удвоявате двата
втория, удвоявате четирите третия и изяждате един през четвъртия час).
Ако N е 19, отговорът би бил 6: добавяте (стават 2), удвоявате (стават 4),
добавяте (стават 5), удвоявате (стават 10), удвоявате (стават 20), изяждате
(стават 19).
*/
#include "..\include\fnc.h "
#include<stdio.h>

int main(){
    int n;
    printf("Enter n :" );
    scanf("%d",&n);
    printf("%d",countOfHours(n));
}