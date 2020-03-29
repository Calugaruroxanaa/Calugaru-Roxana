#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
int stiva[MAX];
int varf = -1;
int stiva1[MAX];
int varf1 = -1;
void Push(int x, int *varf, int stiva[])
{
	if (*varf == MAX - 1)
	{
		printf("Eroare! Stiva este plina!\n");
		return;
	}
	stiva[++(*varf)] = x;
}
void Pop(int* varf, int stiva[])
{
	if (*varf == -1)
	{
		printf("Eroare!\n");
		return;
	}
	(*varf)--;
}
int Peek(int* varf, int stiva[])
{
	return stiva[*varf];
}
int IsEmpty(int* varf)
{
	if (*varf == -1)
	{
		return 1;
	}
	return 0;
}
void Print(int *varf,int stiva[])
{
	int i;
	printf("Stiva: ");
	for (i = 0; i <= *varf; i++)
	{
		printf("%d ", stiva[i]);
	}
	printf("\n");
}
int main()
{
	int aux, x, n;
	int i;
	varf = -1;
	printf("Introduceti numarul de elemente ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Elementul %d ", i + 1);
		scanf("%d", &x);

		aux = x;
		while (aux)
		{
			Push(aux % 10, &varf, stiva);
			aux = aux / 10;
		}
		aux = x;
		while (aux)
		{
			if (aux % 10 == Peek(&varf, stiva))
			{
				Push(x, &varf1, stiva1);
				break;
			}
			aux = aux / 10;
			varf--;
		
			
		}

	}
       Print(&varf1,stiva1);
	system("pause");
	return 0;
}