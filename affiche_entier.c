#include <stdio.h>
#include <stdlib.h>

void affiche_entiers_nat(int lim_inf, int lim_sup)
{
	if(lim_inf > lim_sup)
	{
		return ;
	}
	printf("%d\n",lim_inf);
	affiche_entiers_nat(lim_inf+1,lim_sup);
}

int main()
{
	int lim_inf = -100;
	int lim_sup = 100;
	affiche_entiers_nat(lim_inf,lim_sup);
    	return 0;
}

