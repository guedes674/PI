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
