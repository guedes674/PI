#include <stdio.h>

typedef struct aluno {
    int numero;
    char nome[100];
    int miniT [6];
    float teste;
} Aluno;

//1
int nota (Aluno a){
    int minitestes = 0, i = 0, total = 0;
    float teste = a.teste;

    while(a.miniT[i] < 6){
        minitestes += a.miniT[i];
        i++;
    }
    total = (minitestes*2)*0.2 + (teste)*0.8;

    return total;
}

//2
int procuraNum (int num, Aluno t[], int N){
    int ret = -1, i;

    for(i = 0; i < N; i++){
        if(t[i].numero == num){
            ret = i;
        }
    }
    return ret;
}

//3
void ordenaPorNum (Aluno t [], int N){
    Aluno aux;
    int i, j;

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(t[i].numero < t[j].numero){
                aux = t[j];
                t[j] = t[i];
                t[i] = aux;
            }
        }
    }
}

//4
void criaIndPorNum (Aluno t [], int N, int ind[]){
    int i, j;

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(t[i].numero > t[j].numero){
                ind[i] += 1;
            }
        }
    }
}

//5
void imprimeTurma (int ind[], Aluno t[], int N){
    int i, j, pos = 0;

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(pos == ind[j]){
                printf("%d %s %d \n", t[j].numero, t[j].nome, nota(t[j]));
                pos++;
            }
        }
    }
}
