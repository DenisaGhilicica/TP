#include<stdlib.h>
#include<string.h>
#include<stdio.h>

void patratul(int n)
{
	int x = n;
	int p = 0;
	int i = 0;

	while (x > 0)
	{ //daca e impar 
		if ((x & 1) == 1)
		{
			p += n << i;
		}

		x = x >> 1;
		i++;
	}
printf("Patratul numarului introdus este %d \n", p);
}

int main()
{
	int n ;
	printf("Introduceti numarul: ");
	scanf("%d", &n);
	patratul(n);
	system("pause");
	return 0;
}