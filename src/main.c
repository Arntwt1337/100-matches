#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "screen.h"

int main()
{
    srand(time(NULL));
	system("clear");
	display();
    int count = 100;
    char compNum;
    char buf[32];
	int inputNum;
    int key = 2;
    while (count > 0) {
        printf("Осталось спичек: %d\n", count);
        printf("Сколько спичек вы хотите взять? ");
        fgets(buf, 31, stdin);
        if (sscanf(buf, "%d", &inputNum) != 1) {
            printf("Неправильный ввод\n");
            continue;
        }
        if ((inputNum < 1) || (inputNum > 10)) {
            printf("Введите число от 1 до 10\n");
            continue;
        } else
            count -= inputNum;
		printf("Осталось спичек: %d\n", count);
        key = 2;
        if (count > 0) {
            compNum = rand() % 10 + 1;
            printf("Компьютер взял %d\n", compNum);
            count -= compNum;
            key = 1;
        }
    }
    if (key == 1) {
        printf("Вы выиграли\n");
    } else {
        printf("Вы проиграли\n");
    }

    return 0;
}