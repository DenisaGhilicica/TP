#include<stdio.h>
#include<stdlib.h>
#include<string.h>



void suma(int *p, int *q, int *s)
{
	int a, b;
	p = &a;
	q = &b;
	*s = *p + *q;
}

int main()
{
	int *s = 0, a, b;
	printf("Introduceti numerele: \n"); scanf("%d%d", &a, &b);

	suma(&a, &b, &s);
	printf("Suma este %p\n", s);
	system("pause");
	return 0;
}