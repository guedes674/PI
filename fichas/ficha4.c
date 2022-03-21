#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Exercicio 1

int eVogal (char c){
    int k = 0;
    int resultado;
    char vogais[11] = "aAeEiIoOuU";

    while(vogais[k]){
        if(vogais[k] == c){
            resultado = 1;
            break;
        }
        k++;
    }
    return resultado;
}

int contaVogais (char *s){
    int i = 0;
    int count = 0;

    while(s[i]){
        if(eVogal(s[i])){
            count++;
        }
        i++;
    }
    return count;
}

//Exercicio 2

int retiraVogaisRep (char *s){
    int i = 0, j = 0, resultado = 0, anterior = 0;

    while(s[i]){
        if(anterior != 0 && anterior == s[i]){
            resultado++;
            for(j = i; s[j]; j++){
                s[j] = s[j+1];
            }
        }else{
            if(eVogal(s[i])){
                anterior = s[i];
            }else{
                anterior = 0;
            }
            i++;
        }
    }
    return resultado;
}

//Exercicio 3
int duplicaVogais (char *s){
    char aux[strlen(s) + contaVogais(s)];
    int i = 0, j = 0, resultado = 0;

    while(s[i]){
        if(eVogal(s[i])){
            s[j] = s[i];
            j++;
            s[j] = s[i];
            j++;
            resultado++;
        }else{
            s[j] = s[i];
            j++;
        }
        i++;
    }
    for(i = 0; s[i]; i++){
        s[i] = aux[i];
    }
    return resultado;
}

//Exercicio 4
int ordenado(int v[], int N){
    int i = 0, resultado;

    while(v[i] && v[i] <= v[i+1]){
        i++;
    }
    if(i == N){
        resultado = 1;
    }else{
        resultado = 0;
    }
    return resultado;
}

//Exercicio 5
void merge(int a[], int na, int b[], int nb, int r[]){
    int i = 0, j = 0, k;

    for(k = 0; i < na && j < nb; k++){
        if(a[i] < b[j]){
            r[k] = a[i];
            i++;
        }else{
            r[k] = b[j];
            j++;
        }
    }

    while(i < na){
        r[k] = a[i];
        k++;
        i++;
    }

    while(j < nb){
        r[k] = b[j];
        k++;
        j++;
    }
}

//Exercicio 6
void swap(int v[], int i, int j){
    int temp;

    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

int partition(int v[], int N, int x){
    
}