#include <stdio.h>

// Exercício 1

float multInt1 (int n, float m){
    float r = 0;
    int i;

    for (i = 0; r <= (n*m); i++)
        r += (i*m);

    return r;
}
