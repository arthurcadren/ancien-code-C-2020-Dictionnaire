//seumegni_20w2176
#include<stdio.h>
#include<stdlib.h>
#include"table_hachage.h"
#include"fonction.h"
#include<string.h>



int main()
{

    char mot[50];
    char mot1[80];
    int i;
    printf("1: veuillez ajouter un mot et sa traduction \n");

    printf("2: Suppression un mot \n");

    printf("3: Traduire le mot \n");

    printf("\nveuillez entrez votre choix : ");

    scanf("%d", &i);
    switch (i)
    {
    case 1:
        printf("Entrez le mot : \n");
        scanf("%s",mot);
        printf("Entrez sa traduction : \n");
        scanf("%s",mot1);
        ajoute(mot, mot1);
        break;
    case 2:
        printf("Entrez le mot a supprimer : \n");
        scanf("%s",mot);
        Supprimer(mot);
        break;
    case 3:
        printf("Entrez le mot a traduire : \n");
        scanf("%s",mot);
        traduction(mot);
    break;

    default:
        printf("choix non disponible");
        break;
    }


    return 0;
}
