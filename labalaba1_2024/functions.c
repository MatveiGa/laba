#include "Header1.h"


int vesndates(Date date) {
	if (date.month >= 3 && date.month <= 5) {
		return 1;
	}
	return 0;
}
int camparedates(Date date1, Date date2) {
	if (date1.year > date2.year) {
		return 1;
	}
	else if (date1.year < date2.year) {
		return -1;
	}
	else { // Если годы равны, сравниваем месяцы
		if (date1.month > date2.month) {
			return 1;
		}
		else if (date1.month < date2.month) {
			return -1;
		}
		else { // Если месяцы равны, сравниваем дни
			if (date1.day > date2.day) {
				return 1;
			}
			else if (date1.day < date2.day) {
				return -1;
			}
			else { // Если даты полностью совпадают
				return 0;
			}
		}
	}

}