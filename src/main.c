#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "screen.h"
#include "logic.h"

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
			if(inputNum == EOF) { 
				exit(0);
			}
            printf("Неправильный ввод\n");
            continue;
		}
		if (proverka(inputNum, &count)) {
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
        printf("Вы выиграли\n");
    } else {
        printf("Вы проиграли\n");
    }

    return 0;
}