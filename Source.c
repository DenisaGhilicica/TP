#include<stdlib.h>
#include<string.h>
#include<stdio.h>

int main()
{
	int *p;
	int v[5] = { 16,9,2000,10,8 };
	p = v;
	printf("p  este: %d \n", *p);

	p++;
	printf("Dupa incrementare, p trece la urmatorul element din vector adica  %d\n", *p);
	(*p)++;
	printf("P ia valorea respectiva din vector, adunand-o cu 1 adica %d\n", *p);

	p--;
	printf("Dupa decrementare, p trece la elementul de dinainte de actualul element din vector adica %d\n", *p);
	(*p)--;
	printf("P ia valorea din vector, scazand-o cu 1 adica %d\n", *p);
	system("pause");
	return 0;
}