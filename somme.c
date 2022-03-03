#include <stdio.h>
#include <stdlib.h>

int sum(int n)
{
	if(n)
		return (n + sum(n-1));
	else 
		return 0;
}

int main()
{
	int nombre;

	printf("Entrez un entier positif : ");
	scanf("%d",&nombre);

	int result = sum(nombre);

	printf("La somme des entiers jusqu'à %d est %d\n",nombre,result);
}
