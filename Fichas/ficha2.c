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

float multInt3 (int n, float m, int *count){
    float r = 0;
    int i;
    *count = 0;

    for(i = 1; n >= 1; i++){
        (*count)++;
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

// Exercício 4

int mdc2 (int a, int b){
    while (a != b){
        if (a > b)
            a -= b;
        else if (a < b)
            b -= a;
    }
    return a;
}

int mdc3 (int a, int b, int *count){
    *count = 0;
    while (a != b){
        (*count)++;
        if (a > b)
            a -= b;
        else if (a < b)
            b -= a;
    }
    return a;
}

// Exercício 5

int mdc4 (int a, int b, int *count){
    int res = 1;
    *count = 0;
    while (a > 0 && b > 0){
        (*count)++;
        if (a > b)
            a %= b;
        else if (a < b)
            b %= a;
    }
    if (a == 0)
        res = b;
    else
        res = a;
    return res;
}

// Exercício 6

// A

int fib (int n){
    int res = 0;
        if (n > 2){
            res = fib(n-1) + fib(n-2);
        }else if (n == 2 || n == 1){
            res = 1;
        }else
            res = 0;
    return res;
}

// B

int fastfib (int n){
    int aux = 0, i, a = 0, b = 1;

    if(n == 1 || n == 2){
        return 1;
    }else if (n < 1){
        return 0;
    }else{
        for(i = 2; i <= n; i++){
            aux = a + b;
            a = b;
            b = aux;
        }
        return b;
    }
}
