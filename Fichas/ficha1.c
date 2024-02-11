#include <stdio.h>

// Estado e atribuicoes

// Exercicio 1:

// 12 16

// Exercicio 2:

// erro

// Exercicio 3:

// A 65
// B 66 2 50
// b 98

//Exercicio 4:

// 100 200

// Estruturas de controlo

// Exercicio 1

// a:

// 3 5

//b:

// 11 66

//c:

//_#_#_#_#_#_#_#_#_#_#

//d:

// 1
// 01
// 11
// 001
// 101
// 011
// 111
// 0001
// 1001
// 0101
// 1101
// 0011
// 1011
// 0111
// 1111

// Programas Iterativos

// Exercicio 1

void quadrado (int n) {
    int i, j = 0;
    for (j = 0; j < n; j++){
        for (i = 0; i < n; i++){
            putchar ('#');
        }
        putchar ('\n');
    }
}

//Exercicio 2

void xadrez (int n) {
    int i, j = 0;
    for (j = 0; j < n; j++){
        for (i = 0; i < n; i++){
            if (j%2 == 0){
                if (i%2 == 0)
                    putchar ('#');
                else
                    putchar ('_');
                
            }else{
                if (i%2 == 0)
                    putchar ('_');
                else
                    putchar ('#');
                
            }
        }
        putchar ('\n');
    }
}
