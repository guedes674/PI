#include <stdio.h>

void fibonacci () {
  int a = 0, b = 1, aux, n = 50, r;
  for (; n > 0; n--) {
    printf("%d\n",a);
    if (a % 2 == 0){
        r += 1;
    }
    aux = a;
    a = b;
    b = (b + aux) % 10000;
  }
  printf("%d", r);
}
