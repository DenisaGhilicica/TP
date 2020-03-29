#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 8

typedef struct stack
{
	int data[MAX_SIZE];
	int top;
}st;

int gol(st *s)
{
	if (s->top == -1)
	{
		return 1;
	}
	return 0;
}


int plin(st *s)
{
	if (s->top == MAX_SIZE - 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
//adaugare
void push(st *s, int x)
{
	if (s->top == MAX_SIZE - 1)
	{
		printf("Stiva e plina\n");
		return;
	}
	s->top = s->top + 1;
	s->data[s->top] = x;
	printf("%d adaugat in stiva\n", x);

}
int pop(st *s)
{
	int x;
	if (s->top == -1)
	{
		return	NULL;
	}
	x = s->data[s->top];
	s->top = s->top - 1;
	return x;
}
// ?? maximul din stiva format din valorile gasite in ea
void maxim(st *s, int x)
{
	int p = 0, n = 1;
	while (plin(&s))
	{
		if (s->data[s->top] == 1)
		{
			p = p * 10 + s->data[s->top];
		}
		else
		{
			n = n * 10;
		}
		x= p * n;
		printf("Maximul din stiva este: ", p);
		
	}


}
void main()
{
	st s;
	int n;

	s.top = -1;
	printf("Introduceti numarul: ");
	scanf("%d", &n);
	
	

	while ((n != 0))
	{
		if (!plin(&s))
		{
			push(&s, n % 2);
			n = n / 2;
		}
		else
		{
			printf("Stiva e plina\n");
			exit(0);
		}
	}
	printf("Numarul in forma binara este: ");
	while (!gol(&s))
	{
		n = pop(&s);
		printf("%d", n);

	}
	maxim(&s, n);
	
	printf("\n");
    system("pause");
	
}