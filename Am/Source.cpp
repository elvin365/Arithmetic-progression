#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>

int Func1(float a1, float a2, int m)
{
	int i = 0;
	float d = a2 - a1;
	float a = a2;//текущее значение ариф. прогресси
	for (i = 3; i <= m; i++)
	{
		a += d;
	}
	return a;
	// d*i+a i-оставшееся количество шагов 
}


int main()
{
	int m = 0;
	int i = 0;
    float a1 = 0;
	float a2 = 0;
	scanf("%f", &a1);
	scanf("%f", &a2);
	scanf("%d", &m);
	float a = Func1(a1, a2, m);
	printf("%f",a);
	_getch();
	return 0;
}
