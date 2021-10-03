#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void test()
{
  Element e = nouvElem();
  printf("%d\n", videElem(e));
  e.type = 1;
  printf("%d\n", videElem(e));
}

int main() {
  char * expression;
  expression = lireIO();
  printf("%s\n",expression);
  return 0;
}
