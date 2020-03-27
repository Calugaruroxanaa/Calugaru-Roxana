/*Se citeste de la tastatura un numar C cu valori posibile intre 0 - 7.
Dupa citirea numarului "C" se vor citi de la tastatura "N" numere iar acele numere care au in reprezentarea lor binara,
bitul de pe pozitia "C" cu valoare 1, se vor afisa
Ex :
C = 2
N = 5
- Acum se citesc 5 numere :
	1 2 3 4 5
	- Se afiseaza la sfarsit
	4 5
	Deoarece 4 = 100 si 5 = 101, bitul de pe pozitia "2" este "1"*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int validare_nr(int c)
{
	if (c >= 0 && c <= 7)
		return 1;
	else
		return 0;
}
int main()
{
	int c, n, i, v, a[90];
	printf("Introduceti numarul C ");
	scanf("%d", &c);
	v = validare_nr(c);
	if (v == 0)
		printf("Numarul introdus nu este corect, acesta trebuie sa aiba o valoare intre 0 si 7!\n");
	printf("Introduceti numarul de elemente ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("a[%d]=", i + 1);
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++)
	{
		if ((a[i] >> c) & 1)
			printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}
