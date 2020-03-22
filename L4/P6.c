#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int suma(int a, int b)
{
	int* c;
	c = (int*)malloc(sizeof(int));
	*c = a + b;
	return *c;
}
int main()
{
	int x, y;
	int* z;
	z =(int*)malloc(sizeof(int));
	printf("x= ");
	scanf("%d", &x);
	printf("y= ");
	scanf("%d", &y);
	*z = suma(x, y);
	printf("Suma este %d ", *z);
	system("pause");
	return 0;
}