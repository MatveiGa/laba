/*
Имеются сведения о различных датах. Каждая дата – это число, месяц и
год. Найти:
а) год с наименьшим номером;
б) все весенние даты;
в) самую позднюю дату.
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "Header.h"
#include "Header1.h"
int viod() {
	printf_s("Введите количкство дат");
	int numofdates1;
	scanf_s("%d", &numofdates1);
	Date* dates = (Date*)malloc(numofdates1 * sizeof(Date));
	Date1* dates1 = (Date*)malloc(numofdates1 * sizeof(Date));
	for (int i = 0; i < numofdates1; i++) {
		printf_s("Введите дату в формате ДД,ММ.ГГГГ: ");
		scanf_s("%d.%d.%d", &dates[i].day, &dates[i].month, &dates[i].year);
	}
	for (int i = 0; i < numofdates1; i++) {
		dates1[i].day = dates[i].day;
		dates1[i].month = dates[i].month;
		dates1[i].year = dates[i].year;
	}
	printf_s("Исходные данные:");
	for (int i = 0; i < numofdates1; i++) {
		printf_s("%d.%d.%d\n", dates[i].day, dates[i].month, dates[i].year);
	}
}


int main() {
	setlocale(LC_ALL, "rus");
	int numsofdates;
	viod();

	/*printf_s("Введите количество дат");
	scanf_s("%d", &numsofdates);
	Date* dates = (Date*)malloc(numsofdates * sizeof(Date));//выделяем память
	for (int i = 0; i < numsofdates; i++) {//ввод данных
		printf("Введите дату в формате ДД.ММ.ГГГГ: ");
		scanf_s("%d.%d.%d", &dates[i].day, &dates[i].month, &dates[i].year);
	}
	//vvod(numofdates);
	int minYear = dates[0].year;//год с меньшим намером 
	for (int i = 1; i < numsofdates; i++) {//цикл поиска года 
		if (dates[i].year < minYear) {
			minYear = dates[i].year;
		}
	}
	printf_s("Год с наименьшим номером :%d\n", minYear);
	printf_s("Весенние даты :\n");
	int(*Ptrfunk1)(Date, Date) = camparedates;//указатели на фунции
	int(*Ptrfunk2)(Date) = vesndates;
	for (int i = 1; i < numsofdates; i++) {//поиск весенних дат 
		if (Ptrfunk2(dates[i])) {
			printf_s("%d.%d.%d\n", dates[i].day, dates[i].month, dates[i].year);
		}
	}
	Date latestDate = dates[0];
	for (int i = 1; i < numsofdates; i++) {//поиск самой поздней даты
		if (Ptrfunk1(dates[i], latestDate) == 1) {
			latestDate = dates[i];
		}
	}
	printf("Самая поздняя дата: %d.%d.%d\n", latestDate.day, latestDate.month, latestDate.year);

	free(dates); // Освобождаем память

	return 0;



	return 1;*/
}