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

Element *parser(char expression[], int taille)
{
  Element * tab;
  tab=(Element*)malloc(taille*sizeof(Element));
  int nbparenthese = 0,i=0;
  while(i<taille && expression[i]!='\0')
  {
    if(expression[i] >= 48 && expression[i] < 58)
    {
      if(i==0)
      {
        
      }
    }
  }
}
