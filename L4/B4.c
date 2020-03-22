#include <stdio.h>
#include <stdlib.h>

typedef struct nr_binar
{
	int cifra;
	struct nr_binar* urm;
}nod;
nod* adaugare(nod* prim, int cifra)
{
	nod* p;
	p = (nod*)malloc(sizeof(nod));
	p->cifra = cifra;
	p->urm = prim;
	prim = p;
	return prim;

}
void afisare(nod* prim)
{
	nod* q;
	int k = 0;
	for (q = prim; q != NULL; q = q->urm)
		printf("%d", q->cifra);
	printf("\n");

}
int main()
{
	nod* prim;
	int nr_z, cifra_binara;
	prim = NULL;
	printf("Introduceti numarul zecimal : ");
	scanf("%d", &nr_z);
	while (nr_z != 0)
	{
		cifra_binara= nr_z% 2;
		prim = adaugare(prim, cifra_binara);
		nr_z = nr_z / 2;
	}
	afisare(prim);
	system("pause");
	return 0;
}