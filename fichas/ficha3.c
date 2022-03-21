#include <stdio.h>

//Exercicio 1

//A

int ex1a () {
    int x [15] = {1, 2, 3, 4, 5,
                  6, 7, 8, 9,10,
                  11,12,13,14,15};
    int *y, *z, i;
    y = x;
    z = x+3;
    for (i=0; i<5; i++) {
        printf ("%d %d %d\n", x[i], *y, *z);
        y = y+1; z = z+2;
    }
}

//Output:
// 1 1 4
// 2 2 6
// 3 3 8
// 4 4 10
// 5 5 12

//B

int main () {
    int i, j, *a, *b;
    i=3; j=5;
    a = b = 42;
    a = &i; b = &j;
    i++;
    j = i + *b;
    b = a;
    j = j + *b;
    printf ("%d\n", j);
    return 0;
}

//Output:
//13

//Exercicio 2

void swapM (int *x, int *y){
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

//Exercicio 3

void swap (int v[], int i, int j){
    int temp;

    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

