typedef struct maillona
{
    struct maillona *g;
    Element e;
    struct maillona *d;
} Maillona, *Arbre;

Arbre arbnouv();
Arbre ad(Arbre a);
Arbre ag(Arbre a);
Booleen videA(Arbre a);
Element r(Arbre a);
