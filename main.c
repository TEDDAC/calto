#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calto.h"

void test()
{
  Element e = nouvElem();
  printf("%d\n", vide(e));
  e.type = 1;
  printf("%d\n", vide(e));
}

int main() {
  char * expression;
  expression = lireIO();
  printf("%s\n",expression);

  test();
  return 0;
}
