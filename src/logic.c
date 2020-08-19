#include "logic.h"
#include <stdio.h>
#include <stdlib.h>

int proverka(int number, int* c)
{
    if ((number < 1) || (number > 10)) {
        printf("Введите число от 1 до 10\n");
    }
    if ((*c!= 1) && (*c < number)) {
        printf("Введите допустимое значение\n");
    } else
        *c -= number;
    printf("Осталось спичек: %d\n", *c);
    return 0;
}
int check(int quantity, int* c)
{
    while (quantity > *c) {
        quantity = rand() % 10 + 1;
    }
    printf("Компьютер взял %d\n", quantity);
    *c -= quantity;
    return 0;
}