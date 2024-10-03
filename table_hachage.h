//seumegni_20w2176
#ifndef DEF_H
#define DEF_H
#define n 50



    typedef struct dict dict;
    struct dict
        {
            char mot[n];
            int key;
        };
    void afficher (dict *tab,int t);
    int Hach(char *mot);

#endif
