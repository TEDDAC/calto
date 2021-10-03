typedef enum {faux,vrai} Booleen;
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


typedef struct
{
  char type; //0: vide, 1: opérateur unaire, 2: opérateur binaire, n: nombre
  char op;
  int n;
} Element;



char *lireIO();
//void afficherElement(Element e);
Booleen videElem(Element e);
Element nouvElem();
Arbre parser(char expression[]);
