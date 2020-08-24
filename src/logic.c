#include "logic.h"
#include <stdio.h>
#include <stdlib.h>

int check_inputNum(int number, int* c)
{
    if ((number < 1) || (number > 10)) {
        printf("Введите число от 1 до 10\n");
        return 1;
    }
	return 0;
}
int check_inputNum2(int number, int* c) 
{
    if (*c < number) {
		printf("Введите допустимое значение\n");
    	return 1;
    } else
        *c -= number;
    printf("Осталось спичек: %d\n", *c);
    return 0;
}
int check_compNum(int quantity, int* c)
{
    while (quantity > *c) {
        quantity = rand() % 10 + 1;
    }
    printf("Компьютер взял %d\n", quantity);
    *c -= quantity;
    return 0;
}