#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

void affiche_tab(int tab[],int debut,int longueur)
{
    if(debut>=longueur)
	    return;
    printf("%d  ",tab[debut]);

    affiche_tab(tab,debut+1,longueur);
}

int main()
{
	int tab[MAX_SIZE];
    	int taille, elements;
	int i;
    
    	printf("Entrez la taille du tableau : ");
    	scanf("%d",&taille);
    	for(i=0;i<taille;i++) 
    	{
    		printf("Entrez un élement : ");
        	scanf("%d",&tab[i]);
    	}
        
    	printf("Elements dans le tableau : ");
    	affiche_tab(tab,0,taille);
    
    return 0;
}
