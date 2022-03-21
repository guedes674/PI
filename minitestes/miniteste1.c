#include <stdio.h>

int func(int x) {
  int r = 0;
  while (x > 0) {
    r += 2;
    x = x - r;
  }
  if (r == 6){
      printf("%d", r);
  }
  return r;
}

int main(){
  int x = 6;
  printf("%d", func(x));
  return 0;
}
