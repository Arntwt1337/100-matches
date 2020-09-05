#include "logic.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int check_inputNum(int number, int* c)
{
    if ((number < 1) || (number > 10)) {
        return 0;
    }
	return 1;
}
int check_inputNum2(int number, int* c) 
{
    if (*c < number) {
    	return 0;
    } else
        *c -= number;
    return 1;
}
int check_compNum(int quantity, int* c)
{
    while (quantity > *c) {
        quantity = rand() % 10 + 1;
    }
    *c -= quantity;
    return 1;
}