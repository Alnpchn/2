
#include <locale.h>
#include<stdio.h>
int N, K;
void main(void)
{
	setlocale(LC_ALL, "RUS");
	printf("сейчас %g часов %g минут %g секунд\n", 15., 38., 47.);
	printf("идет %g минута суток\n", 939.);
	printf("до полуночи осталось %g часов %g минут\n", 8., 22.);
	printf("с 8:00 прошло %g секунд\n", 28740.);
	printf("текущий час=%g суток и текущая минута %g часа\n", N/24., K/60.);
}
