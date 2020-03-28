#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int IsFull(int* varf)
{
	if (*varf == MAX)
	{
		return 1;
	}
	return 0;
}

void Push(int *x,int *varf, int*stiva)
{
	if (IsFull(varf))
	{
		printf("Eroare! Stiva este plina!\n");
		return;
	}
	stiva[++(*varf)] = *x;
}
void Pop(int*varf,int*stiva)
{
	if (*varf == -1)
	{
		printf("Eroare!\n");
		return;
	}
	(*varf)--;
}
int Peek(int*varf,int*stiva)
{
	return stiva[*varf];
}
int IsEmpty(int*varf)
{
	if (*varf == -1)
	{
		return 1;
	}
	return 0;
}
void Print(int*varf,int*stiva)
{
	int *i=(int*)malloc(sizeof(int));
	printf("Stiva: ");
	for (*i = 0; *i <=*varf; (*i)++)
	{
		printf("%d ", stiva[*i]);
	}
	printf("\n");
}
int main()
{
	int* x = (int*)malloc(sizeof(int));
	int *i= (int*)malloc(sizeof(int));
	int *stiva= (int*)malloc(sizeof(int)*MAX);
	int *varf= (int*)malloc(sizeof(int));
	*varf = -1;
	for (*i = 0; *i <7; (*i)++)
	{
		printf("Introduceti numarul ");
		scanf("%d", x);
		Push(x, varf, stiva);
	}
	Print(varf, stiva);
	printf("\n");
	while (!IsEmpty(varf))
	{
		printf("%d ", Peek(varf, stiva));
		Pop(varf, stiva);
	}
	system("pause");
	return 0;
}