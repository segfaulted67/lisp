#include <stdio.h>
#include "mpc/mpc.h"

static char input[2048];

int main()
{
  puts("Lispy Version 0.0.0.0.1");
  puts("Press Ctrl-c to exit");

  while(1) {
    fputs("lispy> ", stdout);
    fgets(input, 2048, stdin);

    printf("%s", input);
  }
  return 0;
}
