#include <stdio.h>

int carre(int x)
{
        return x*x;
}

int main()
{
        int i = 1;
        int compteur,resultat,somme;

        somme = 0;

        for(compteur=0;compteur<20;compteur++)
        {
                if(i%2 != 0)
                {
                    resultat = carre(i);
                    printf("%d² = %d\n",i,resultat);
                    somme = somme + resultat;
                }
                i++;
        }

        printf("La somme des carrés des nombres impaires est %d\n",somme);

    return 0;
}
