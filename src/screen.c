#include "screen.h"
#include <stdio.h>
#include <stdlib.h>

void display()
{
    system("clear");
    printf("==========================================================\n");
    printf("==        Добрый день, это игра 100 спичек              ==\n");
    printf("== Здесь по очереди компьютер и игрок берут 1-10 спичек ==\n");
    printf("== Проигрывает тот, кто взял последнюю спичку           ==\n");
    printf("== Для экстренного выхода из игры нажмите Ctrl+c        ==\n");
    printf("==========================================================\n\n");
}