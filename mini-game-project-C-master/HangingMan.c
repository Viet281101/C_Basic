#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define NBR_MOTS 20

char mot[30]="\0";

void CopierMot(char *MotAleatoire, char *mot)
{
    int i=0;
    while (MotAleatoire[i] != '\0') {
        mot[i] = MotAleatoire[i++];
    }
    mot[i] = '\0';
}

void ChoisirMot()
{
    //Creer une liste
    char MotAleatoire[NBR_MOTS][20]={
        "HEUREUSEMENT",
        "MAGNIFIQUE",
        "BONJOUR",
        "ALEATOIRE",
        "ANTICONSTITUTIONEL",
        "FARFADET",
        "REELECTION",
        "ENTRAVER",
        "TIRAILLEMENT",
        "CONNAISSEUSE",
        "SALOPETTE",
        "TISONNIER",
        "ATTESTER",
        "MARINE",
        "POLITIQUE",
        "DECODER",
        "INTERNATIONAL",
        "TECHNIQUE"};
    int aleatoire;
    srand(time(NULL));
    aleatoire = (rand() %(NBR_MOTS)); //Pour choisir un mot de manière aléatoire dans la liste
    CopierMot(MotAleatoire[aleatoire], mot);
}

int StringLength(char ch[])
{
    int i=0;
    while (ch[i]){ 
        i++;
    }
    return i;
}

//Pour compare 2 chaine
int ChaineComparer (char str1[], char str2[])
{
    int i=0;
    if (StringLength(str1) == StringLength(str2))
    {while (str1[i] && str2[i])
        {
            if (str1[i] != str2[i++]) {
                return 0;
            }
        }
        return 1;
    }
}

int TestLettre (char mot[], char lettre[])
{
    int i=0;
    while (mot[i])
    {
        if (mot[i++] == lettre[0]) {
            return 1;
        }
    }
    return 0;
}

int Affichage (char mot[], char trouves[])
{
    int i=-1, win=1;
    while (mot[++i])
    {
        if (TestLettre(trouves,&mot[i])==1){
            printf("%c ",mot[i]);
        }else{
            printf("_ " );
            win=0;
        }
    }
    return win;
}

int PenduDessiner(int erreurs)
{
    //Affichage l'image de pendu
    printf("\n\n\n" );
    if (erreurs <= 3){
        printf("\n" );
    }else{
        printf(" ________\n" );
    }if (erreurs >= 5) {
        printf(" |/     |\n" );
        
    }else if (erreurs >= 3) {
        printf(" |/\n" );
    }else if (erreurs >= 2) {
        printf(" |\n" );
    }else{
        printf("\n" );
    }
    if (erreurs >= 6) {
        printf(" |      O\n" );
    }else if (erreurs >= 2) {
        printf(" |\n" );
    }else {
        printf("\n" );
    }
    if (erreurs >= 7) {
        printf(" |     /|\n" );
    }else if (erreurs >= 2) {
        printf(" |\n" );
    }else {
        printf("\n" );
    }
    if (erreurs >= 8) {
        printf(" |      |\n" );
    }else if (erreurs >= 2) {
        printf(" |\n" );
    }else {
        printf("\n" );
    }
    if (erreurs == 9) {
        printf("Attention !!! Une seule dernière chance pour toi !!\n" );
    }
    if (erreurs >= 10) {
        printf("\n\nGAME OVER ! \n");
        printf("\nPerdu ! Pend-toi ! \n\n");
        return 0;
    }
    else {return 1;}
}

// char lireCaractere()
// {
//     char caractere = 0;

//     caractere = getchar();
//     caractere = toupper(caractere);

//     while (getchar() != '\n') ;

//     return caractere;
// }

int main()
{
    char lettre[5]="\0", trouves[30]="\0";
    int fautes=0, n=0;
    int i = 0;
    ChoisirMot();
    printf("\n-----Bienvenue dans le Pendu !--------\n");
    while ((ChaineComparer(lettre, "quit" ) != 1) && (Affichage(mot, trouves) != 1) && (PenduDessiner(fautes) == 1))
    {
        printf("\n\n\n\n\nSaisissez une lettre : '%s'\n\n",trouves);
        printf("\n\n\nEntrez une lettre ou 'quit' pour quitter\n" );
        scanf("%s",lettre);
        //// On met la lettre en majuscule
        // while(lettre[i] != 0){
        //     if(isalpha(lettre[i])){
        //         if(lettre[i] > 97){
        //             lettre[i] -= 32;
        //             return lettre[i];
        //         }
        //     }
        //     i++;
        // }
        printf("\n\n" );
        if (TestLettre(mot,lettre)){
            trouves[n++]= lettre[i];
        }
        else if (ChaineComparer(lettre, "quit" ) != 1){
            fautes++;
        }
        
        printf("\nVous avez trouvé les lettres '%s'\n\n",trouves);
        printf("\n\n%d fautes\n\n",fautes);
        printf("\nNombre d’erreurs restantes : %d \n",(10-fautes)); //afficher le nombre d’erreurs restantes
        
        
    }
    if( TestLettre(mot, trouves) == 1 ) /* gagné !!! */
    {
        printf("\n\n\n GAGNÉ\n");
        printf("Bravo ! Vous remportez la partie !\n\n\n");
        return 0;
    }
    if(ChaineComparer(lettre, "quit") == 1){
        return 0;
    }
    
    return 0;
    
}