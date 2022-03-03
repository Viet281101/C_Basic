#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int renverser(int nbr, int rev)
{
    if(nbr==0)
        return rev;
    else
        return renverser(nbr/10, rev*10 + nbr%10);
}

int main()
{
	int nombre, result;
    	printf("Entrez un nombre : ");
    	scanf("%d",&nombre);
    	result = renverser(nombre,0);

    	printf("L'inverse de %d est %d.",nombre,result);
    	return 0;
}
