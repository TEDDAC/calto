#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

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
