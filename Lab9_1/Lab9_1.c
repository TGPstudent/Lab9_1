// Lab9_1.c: К-ть місць в векторі де значення змінює знак
#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void)
{
	setlocale(LC_CTYPE, "ukr");

	const int N = 5; 
	int a[5] = {0};
	
	printf("\n Введiть значення елементiв масиву A: \n");
	for (int i=0; i < N; i++)
	{
		printf("\t а[%d]=", i + 1); scanf("%d", &a[i]);
	}
	system("cls");
	
	printf("\n Ви ввели вектор A[1,%d] = {", N);
	for (int *pa = a; pa < &a[5]; pa++)
		printf("%d, ", *(pa));
	printf("\b\b}");
	
	int k = 0;
	for (int *pa = a; pa < &a[4]; pa++)
		if (abs(*(pa+1)) + abs(*(pa)) != abs(*(pa+1) + *(pa))) k++;
	printf("\n В заданому векторi кiлькiсть дiлянок, де елементи змiнюють знак становить - %d \n", k);

	int getch(); getch();
	return 0;
}	

