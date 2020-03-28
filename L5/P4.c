#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_SIZE 7

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
	else
	{
		return 0;
	}
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
//stergere
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
void peek(st *s)
{
	if (gol(&s))
	{
		printf("Stiva e goala\n");
	}
	else
	{
		printf("Elementul din varf este: %d\n", s->data[s->top]);
	}
}

void main()
{
	st s;
	int n, opt;
	s.top = -1;
	while (1)
	{
		printf("1.Push\n");
		printf("2.Pop\n");
		printf("3.Peek\n");
		printf("4.Exit\n");

		printf("Introduceti optiunea dumneavostra: ");
		scanf("%d", &opt);
		switch (opt)
		{
		case 1: printf("Introduceti elementul: ");
			scanf("%d", &n);
			push(&s, n);
			break;
		case 2: n = pop(&s);
			if (n == 0)
			{
				printf("Stiva e goala\n");
			}
			else
			{
				printf("Elementul sters este: %d\n", n);
			}
			break;
		case 3: peek(&s);
			break;
		case 4: exit(0);
			break;
		default: printf("Optiunea dvs. este gresita!\n");
		}
	}
}
