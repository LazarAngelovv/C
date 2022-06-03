#include <stdio.h>

int main(){
    
    float weight; 
    
    printf("Enter your weight: ");
    scanf("%f", &weight);

    printf("Your weight on the moon is: %f",weight * 0.17); 

    return 0;
}

/*Задача 1. Гравитацията на Луната е само 17 % от тази на земята. Напишете
програма, в която потребителя да въвежда своето тегло на Земята и след
изчисляване да показва теглото му на Луната.*/