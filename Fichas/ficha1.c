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
    int i, j;
    for (j = 0; j < n; j++){
        for (i = 0; i < n; i++){
            putchar ('#');
        }
        putchar ('\n');
    }
}

//Exercicio 2

void xadrez (int n) {
    int i, j;
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

//Exercicio 3

void trianguloH (int n){
    int i, j;
    for (i = 1; i <= n; i++){
        for (j = 0; j < i; j++)
            putchar ('#');
        putchar ('\n');
    }

    for (i = n-1; i > 0; i--){
        for (j = 0; j < i; j++)
            putchar ('#');
        putchar ('\n');
    }
}

void trianguloV (int n){
    int i, j, k;
    int a = 0;
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n - i; j++){
            putchar(' ');
        }
        for (k = 0; k <= a; k++){
            putchar('#');
        }
        a+=2;
        putchar ('\n');
    }
}

// Exercicio 4 (não completa e incorreta)

//int circulo (int raio){
//    int i, j, k;
//    int a = 0;
//    for (i = 1; i <= raio; i++){
//        for (j = 1; j <= raio - i; j++){
//            putchar(' ');
//        }
//        for (k = 0; k <= a; k++){
//            putchar('#');
//        }
//        a+=2;
//        putchar ('\n');
//    }
//}
