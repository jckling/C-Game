#include<stdio.h>
int main()
{
	char a[3];
	scanf("%s", a);
	if (a[1] == '\0')
	{
		switch (a[0]) {
		case'0':
			printf("Zero");
			break;
		case'1':
			printf("One");
			break;
		case'2':
			printf("Two");
			break;
		case'3':
			printf("Three");
			break;
		case'4':
			printf("Four");
			break;
		case'5':
			printf("Five");
			break;
		case'6':
			printf("Six");
			break;
		case'7':
			printf("Seven");
			break;
		case'8':
			printf("Eight");
			break;
		case'9':
			printf("Nine");
			break;
		}

	}
	else if (a[0] == '1')
	{
		switch (a[1]) {
		case'0':
			printf("Ten");
			break;
		case'1':
			printf("Eleven");
			break;
		case'2':
			printf("Twelve");
			break;
		case'3':
			printf("Thriteen");
			break;
		case'4':
			printf("Fourteen");
			break;
		case'5':
			printf("Fifteen");
			break;
		case'6':
			printf("Sixteen");
			break;
		case'7':
			printf("Seventeen");
			break;
		case'8':
			printf("Eighteen");
			break;
		case'9':
			printf("Ninteen");
			break;
		}
	}
	else
	{
		switch (a[0]) {
		case'2':
			printf("Twenty");
			break;
		case'3':
			printf("Thirty");
			break;
		case'4':
			printf("Forty");
			break;
		case'5':
			printf("Fifty");
			break;
		case'6':
			printf("Sixty");
			break;
		case'7':
			printf("Seventy");
			break;
		case'8':
			printf("Eighty");
			break;
		case'9':
			printf("Ninety");
			break;
		}
		switch (a[1]) {
		case'0':
			break;
		case'1':
			printf("-one");
			break;
		case'2':
			printf("-two");
			break;
		case'3':
			printf("-three");
			break;
		case'4':
			printf("-four");
			break;
		case'5':
			printf("-five");
			break;
		case'6':
			printf("-six");
			break;
		case'7':
			printf("-seven");
			break;
		case'8':
			printf("-eight");
			break;
		case'9':
			printf("-nine");
			break;
		}

	}
	return 0;
}