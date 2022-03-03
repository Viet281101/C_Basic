#include <stdio.h>

double fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}

int main()
{
	int x;
	printf("Veuillez entrer une valeur entière : ");
	scanf("%d",&x);
	double result = fact(x); 
	printf("Le factorielle de %d est %lf\n",x,result);
	return 0;
}
