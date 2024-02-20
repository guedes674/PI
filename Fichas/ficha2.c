#include <stdio.h>

// Exercício 1

float multInt1 (int n, float m){
    float r = 0;
    int i;

    for (i = 0; r < (n*m); i++)
        r += m;

    return r;
}

// Exercício 2

float multInt2 (int n, float m){
    float r = 0;
    int i;

    for(i = 1; n >= 1; i++){
        if (n % 2 != 0){
            r += m;
        }
        n /= 2;
        m *= 2;
    }
    return r;
}

// Exercício 3

int mdc1 (int a, int b){
    int i , menor = a;
    
    if (a > b)
        menor = b;
    
    i = menor;

    while ((a%i == 0 && b%i == 0) == 0){
        i--;
    }
    return i;
}
