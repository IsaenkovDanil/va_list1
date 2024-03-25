
#include <iostream>
#include <stdio.h>
#include <stdarg.h>
using namespace std;
double sum(int, ...);
int main(void)
{
	setlocale(LC_ALL, "ru");



	int t = 5;
	switch (t)
	{
	case 5: {
		cout << '5'; t = 4;
	}
	case 4:cout << '4';
	}
	int k = 10;	float z = 10;
	float* p = nullptr; p = &z;
	int* q = nullptr; q = &k;
	void* ee;
	//p = q; // нельзя
	//q = p; // нельзя
	ee = p;
	p = (float*)q; // можно
	q = (int*)p; // можно
	cout << *p << " " << *q << *(int*)ee;


	double s, tt;
	s = sum(3, 1, 2, 3);
	tt = sum(6 * 3, 1.1, 2.1, 0, 4.1, 5.1, 6.1, 1.1, 2.1, 13.1, 4.1, 5.1, 6.1, 1.1, 2.1, 13.1, 4.1, 5.1, 6.1, 1.1, 2.1, 13.1, 4.1, 5.1, 6.1, 1.1, 2.1, 13.1, 4.1, 5.1, 6.1, 1.1, 2.1, 13.1, 4.1, 5.1, 6.1);
	printf("возвращаемое значение " "surn(3, 1.1, 2.5, 13.3): %g\n", s);
	printf("возвращаемое значение "	"surn(6, 1.1, 2.1, 13.1, 4.1, 5.1, 6.1) : % g\n", t);
	return 0;
}
double sum(int lim, ...)
{
	va_list ap; //a
	double tot = 0;
	int i;
	va_start(ap, lim); //
	for (i = 0; i < lim; i++)
		tot += va_arg(ap, double); //
	va_end(ap); //
	//объявление объекта для хранения аргументов
	//инициализация ар списком аргументов
	//доступ к каждому элементу в списке аргументов
	//очистка
	return tot;
}
