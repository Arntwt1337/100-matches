#include "logic.h"
#include "screen.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    display();
    char compNum;
    char buf[32];
    int inputNum;
    int key = 2;
    char choice;
    while (1) {
        int count = 100;
        while (count > 0) {
            printf("Осталось спичек: %d\n", count);
            printf("Сколько спичек вы хотите взять? ");
            fgets(buf, 32, stdin);
            if (sscanf(buf, "%d", &inputNum) != 1) {
                printf("Неправильный ввод\n");
                continue;
            }
            if (proverka(inputNum, &count)) {
                continue;
            }
			if (proverka2(inputNum, &count)) {
				continue;
			}
            key = 2;
            if (count > 0) {
                compNum = rand() % 10 + 1;
                check(compNum, &count);
                key = 1;
            }
        }
        if (key == 1) {
            printf("  Вы выиграли\n");
        } else {
            printf("  Вы проиграли\n");
        }
        printf("Выйти из игры?(n) Продолжить?(y)\n");
        scanf("%c%*c", &choice);
        if (choice == 'n' || choice == 'N')
            exit(0);
        if (choice == 'y' || choice == 'Y')
            display();
    }
    return 0;
}