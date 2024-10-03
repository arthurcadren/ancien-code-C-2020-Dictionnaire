//seumegni_20w2176
#include<stdio.h>
#include<stdlib.h>
#include"table_hachage.h"
#include<string.h>
#define N 200
void ajouter(dict *table,char *mot)
{
   int i;
   for(i=0;i<n;i++)
   {
       if(strcmp(table[i].mot,"")==0)
       {
           strcpy(table[i].mot,mot);
       }
   }
}
void traduction(char *Mot)
{
int j=0,i=0,nbr=0;
dict *tab=(dict*)malloc(sizeof(dict)*N);
dict *mots=(dict*)malloc(sizeof(dict)*N);
FILE *mot,*traduction;
mot=fopen("mot.txt","r");
traduction=fopen("traduction.txt","r");
if(mot!=NULL&&traduction!=NULL)
{
    while(fgets(mots[i].mot,40,mot)!=NULL)
    {
       j=Hach(mots[i].mot);
       fgets(tab[j].mot,40,traduction);
       i++;
    }
    fclose(mot);
    fclose(traduction);
}
nbr=Hach(Mot);
printf("%s -->%s\tCle : %d\n",Mot,tab[nbr].mot,nbr);
}
void ajoute(char *mot,char *traduct)
{
    FILE *m,*t;
    if(strcmp(mot,"")!=0&&strcmp(traduct,"")!=0)
    {
        m=fopen("mot.txt","a+");
    t=fopen("traduction.txt","a");
    if(m!=NULL&&t!=NULL)
    {
        fputs(mot,m);
        fputs(traduct,t);
        fclose(m);
        fclose(t);
    }
    }
    else
    {
        printf("Impossible d'ajouter le mot\n");
    }
}
void Supprimer(char*mo)
{
int j=0,i=0,nbr=0;
dict *tab=(dict*)malloc(sizeof(dict)*N);
dict *mots=(dict*)malloc(sizeof(dict)*N);
FILE *mot,*traduction;
mot=fopen("mot.txt","r");
traduction=fopen("traduction.txt","r");
if(mot!=NULL&&traduction!=NULL)
{
    while(fgets(mots[i].mot,40,mot)!=NULL&&fgets(tab[j].mot,40,traduction))
    {
       i++;
    }
    fclose(mot);
    fclose(traduction);
}
    for(i=0;i<N;i++)
    {
       if(strcmp(tab[i].mot,mo)==0)
          {
              nbr=i;
          }
    }
    for(i=0;i<N;i++)
    {
        strcpy(tab[i].mot,tab[i+1].mot);
        strcpy(mots[i].mot,mots[i+1].mot);
    }
mot=fopen("mot.txt","w+");
traduction=fopen("traduction.txt","w+");
if(mot!=NULL&&traduction!=NULL)
{
        for(i=0;i<N;i++)
    {
      fputs(tab[i].mot,traduction);
      fputs(mots[i].mot,mot);
    }
}

}
