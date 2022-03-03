#include <stdio.h>
#include <stdlib.h>

int puissance(int n,int nombre)
{
    if(n==0)
    {
        return 1;
    }

    else
    {
        return nombre*puissance(n-1,nombre);
    }
}

double puiss(int exposant, int base)
{
	if(exposant == 0)
		return 1;
	else if(exposant > 0)
		return base*puiss(exposant-1,base);
	else
		return 1/puiss(base,-exposant);
}

int main()
{
    int nombre;
    int n;
    printf("Saisir le nombre dont on calcule la puissance : ");
    scanf("%d",&nombre);
    printf("Saisir le rang : ");
    scanf("%d",&n);
    double result = puiss(n,nombre);
    printf("Le nombre a la puissance n est %lf\n",result);
    return 0;
}
