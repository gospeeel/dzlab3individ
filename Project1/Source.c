#include <stdio.h>
#include <locale.h>
void main() 
{
	int n; 
	setlocale(LC_ALL, "RUS"); 
	printf("Ваше число:");
	scanf_s("%d", &n); 

	printf("\n Количество единиц: %d\n", n % 10);
	printf("\n Количество сотен: %d\n", n / 100);
	printf("\n Количество десятков: %d\n", (n / 10) % 10);



}