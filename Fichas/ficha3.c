#include <stdio.h>

//1
//A

/*
1 1 4
2 2 6
3 3 8
4 4 10
5 5 12
*/

//B

//13

//2
void swapM (int *x, int *y){
    int temp = (*y);

    *y = (*x);
    *x = temp;
}

//3
void swap (int v[], int i, int j){
    int temp = v[j];

    v[j] = v[i];
    v[i] = temp;
}

//4
int soma (int v[], int N){
    int i, total = 0;

    for (i = 0; i < N; i++){
        total += v[i];
    }
    return total;
}

//5
void inverteArray (int v[], int N){
    int i, int j = N-1;

    for(i = 0; i < N/2; i++){
        swap(v, i, j);
        j--;
    }
}

void inverteArrayV2(int v[], int N){
    int i, j = N-1;

    for(i = 0; i < N/2; i++){
        swapM(&v[i], &v[j]);
        j--;
    }
}

//6
int maximum (int v[], int N, int *m){
    int i, maior = 0, ret = 0;

    if(N > 0){
        for(i = 0; i < N; i++){
            if(v[i] > maior){
                maior = v[i];
                *m = v[i];
        }
    }
    }else{
        ret = -1;
    }
    return ret;
}

//7
void quadrados (int q[], int N){
    int i, acc = 0;
    q[0] = acc;

    for(i = 0; i <= N; i++){
        acc += (2*i) + 1;
        q[i] = acc;
    }
}

//8
void pascal (int v[], int N){
    int i, j, tam = 0;

    for(j = 0; j <= N; j++){
        for(i = tam; i >= 0; i--){
            if(i == 0 || i == tam){
                v[i] = 1;
            }else{
                v[i] += v[i-1];
            }
        }
        tam++;
    }
}

void desenhaTriangulpP (int N){
    int i, j, tam = 0, sNumb = (N-1)/2;
    int v[N];
    int aux = sNumb;

    for(j = 0; j <= N; j++){
        for(i = tam; i >= 0; i--){
            while(sNumb >= 0){
                printf(" ");
                sNumb --;
            }
            if(i == 0 || i == tam){
                v[i] = 1;
                printf("%d", v[i]);
            }else{
                v[i] += v[i-1];
                printf("%d", v[i]);
            }
            printf(" ");
        }
        printf("\n");
        tam++;
        aux--;
        sNumb = aux;
    }
}
