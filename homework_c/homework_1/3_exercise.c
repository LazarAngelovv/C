#include <stdio.h>

int main(){

    int days; 
    
    printf("Enter earth days: ");
    scanf("%d", &days);
    
    printf("%d days on Earth are equal to %f Jupiter years!\n", days, (float)days/4380);

    return 0;
}

/*Задача 3.Една година на Юпитер(времето необходимо на Юпитер за да
направи една пълна обиколка на Слънцето) има продължителност 12 земни
години. Напишете програма, която конвертира въведените от потребителя
земни дни в Юпитерски години.*/