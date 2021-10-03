typedef struct
{
  char type; //0: vide, 1: opérateur unaire, 2: opérateur binaire, n: nombre
  char op;
  int n;
} Element;

typedef enum {faux,vrai} Booleen;

char *lireIO();
void afficherElement(Element e);
Booleen videElem(Element e);
Element nouvElem();
