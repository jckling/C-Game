#include <stdio.h>

typedef struct Date {
	int year;
	int month;
	int day;
}Date;

int IsLeapYear(int year) {  // �ж��Ƿ�Ϊ����
	return (year % 400 == 0 || year % 4 == 0 && year % 100 != 0);
}

int GetMaxDay(int year, int month) {  // ����ĳ��ĳ�µ�����
	switch (month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		case 2:
			return IsLeapYear(year) ? 29 : 28;
		default:
			return -1;
	}
}

int IsEqual(Date date1, Date date2) {  // �ж����������Ƿ����
	if (date1.year == date2.year && date1.month == date2.month && date1.day == date2.day) {
		return 1;
	}
	return 0;
}

int GetdiffDays(Date date1, Date date2) {  //  ������������֮���������
	int x = 0;

	while (!IsEqual(date1, date2)) {
		if (date1.day != GetMaxDay(date1.year, date1.month)) {
			date1.day++;
		}
		else {
			if (date1.month != 12) {
				date1.month++;
				date1.day = 1;
			}
			else {
				date1.day = date1.month = 1;
				date1.year++;
			}
		}
		x++;
	}

	return x;
}

int main(){
	Date date1,date2;
	int x = 0;
	date1.year = 1992;
	date1.month = 1;
	date1.day = 1;

	printf("���������ڣ�");
	scanf("%d%d%d", &date2.year, &date2.month, &date2.day);

	x = GetdiffDays(date1, date2);
	printf("���ڲ�Ϊ��%d��\n", x);

	x = x % 5;
	if (x == 0 || x == 1) {
		printf("ɹ��\n");
	}
	else {
		printf("����\n");
	}

	return 0;
}