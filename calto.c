#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calto.h"

char *lireIO()
{
  char * expression;
  expression = (char*)malloc(sizeof(char)*100);
  scanf("%s", expression);
  return expression;
}

Element nouvElem()
{
  Element e;
  e.type = '0';
  return e;
}

Booleen videElem(Element e)
{
  return e.type == '0';
}

/*void afficherElement(Element e)
{

}*/
