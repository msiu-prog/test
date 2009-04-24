#include <stdlib.h>
#include <stdio.h>

#include "cool_lib.h"

#define MAXLINE 11

int main(void) {
  int i = 0;

  for(i = 0; i < MAXLINE; ++i){
    printf("line %d some num is %d\n", i, get_some_number());
  }

  return 0;
}

