#include <stdlib.h>
#include <stdio.h>

#define MAXLINE 11

int main(void) {
  int i = 0;

  for(i = 0; i < MAXLINE; ++i){
    printf("line %d", i);
  }

  return 0;
}
