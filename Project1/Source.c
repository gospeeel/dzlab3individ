#include <stdio.h>
#include <locale.h>
void main() 
{
	int n; 
	setlocale(LC_ALL, "RUS"); 
	printf("���� �����:");
	scanf_s("%d", &n); 

	printf("\n ���������� ������: %d\n", n % 10);
	printf("\n ���������� �����: %d\n", n / 100);
	printf("\n ���������� ��������: %d\n", (n / 10) % 10);



}