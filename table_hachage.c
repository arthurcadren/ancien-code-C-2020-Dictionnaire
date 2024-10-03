//seumegni_20w2176
#include"table_hachage.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void afficher (dict *tab,int t)
{
    int i;
    printf("mot\tcle\n");
        for(i=0;i<t;i++)
    {
      printf("%s\t%d\n",tab[i].mot,tab[i].key);
    }
}
int Hach(char*mot)
{
    int j,nbr=0;
    for(j=0;mot[j]!='\0';j++)
         {
             nbr+= (int) (mot[j]);

         }
         nbr%=10;
         return nbr;
}

