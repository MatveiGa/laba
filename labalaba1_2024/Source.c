/*
������� �������� � ��������� �����. ������ ���� � ��� �����, ����� �
���. �����:
�) ��� � ���������� �������;
�) ��� �������� ����;
�) ����� ������� ����.
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "Header.h"
#include "Header1.h"
int viod() {
	printf_s("������� ���������� ���");
	int numofdates1;
	scanf_s("%d", &numofdates1);
	Date* dates = (Date*)malloc(numofdates1 * sizeof(Date));
	Date1* dates1 = (Date*)malloc(numofdates1 * sizeof(Date));
	for (int i = 0; i < numofdates1; i++) {
		printf_s("������� ���� � ������� ��,��.����: ");
		scanf_s("%d.%d.%d", &dates[i].day, &dates[i].month, &dates[i].year);
	}
	for (int i = 0; i < numofdates1; i++) {
		dates1[i].day = dates[i].day;
		dates1[i].month = dates[i].month;
		dates1[i].year = dates[i].year;
	}
	printf_s("�������� ������:");
	for (int i = 0; i < numofdates1; i++) {
		printf_s("%d.%d.%d\n", dates[i].day, dates[i].month, dates[i].year);
	}
}


int main() {
	setlocale(LC_ALL, "rus");
	int numsofdates;
	viod();

	/*printf_s("������� ���������� ���");
	scanf_s("%d", &numsofdates);
	Date* dates = (Date*)malloc(numsofdates * sizeof(Date));//�������� ������
	for (int i = 0; i < numsofdates; i++) {//���� ������
		printf("������� ���� � ������� ��.��.����: ");
		scanf_s("%d.%d.%d", &dates[i].day, &dates[i].month, &dates[i].year);
	}
	//vvod(numofdates);
	int minYear = dates[0].year;//��� � ������� ������� 
	for (int i = 1; i < numsofdates; i++) {//���� ������ ���� 
		if (dates[i].year < minYear) {
			minYear = dates[i].year;
		}
	}
	printf_s("��� � ���������� ������� :%d\n", minYear);
	printf_s("�������� ���� :\n");
	int(*Ptrfunk1)(Date, Date) = camparedates;//��������� �� ������
	int(*Ptrfunk2)(Date) = vesndates;
	for (int i = 1; i < numsofdates; i++) {//����� �������� ��� 
		if (Ptrfunk2(dates[i])) {
			printf_s("%d.%d.%d\n", dates[i].day, dates[i].month, dates[i].year);
		}
	}
	Date latestDate = dates[0];
	for (int i = 1; i < numsofdates; i++) {//����� ����� ������� ����
		if (Ptrfunk1(dates[i], latestDate) == 1) {
			latestDate = dates[i];
		}
	}
	printf("����� ������� ����: %d.%d.%d\n", latestDate.day, latestDate.month, latestDate.year);

	free(dates); // ����������� ������

	return 0;



	return 1;*/
}