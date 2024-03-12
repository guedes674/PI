#include <stdio.h>
#include <string.h>

//1
int contaVogais (char *s) {
    int count = 0;
    while ((*s) != '\0'){
        if((*s) == 'a' || (*s) == 'A' || (*s) == 'e' || (*s) == 'E' || (*s) == 'i' || (*s) == 'I' || (*s) == 'o' || (*s) == 'O' || (*s) == 'u' || (*s) == 'U'){
            count++;
        }
        s++;
    }
    return count;
}

//2
int eVogal(char c){
    if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U'){
        return 1;
    }
    return 0;
}

int retiraVogaisRep (char *s){
    int count = 0, i = 0, j = 0;

    while(s[i] != '\0'){
        if(eVogal(s[i]) && s[i] == s[i+1]){
            j = i;
            while(s[j] != '\0'){
                s[j] = s[j+1];
                j++;
            }
            i--;
            count++;
        }
        i++;
        j = 0;
    }
    return count;
}

//3
int duplicaVogais (char *s){
    int count = 0, i = 0, j = 0;

    while(s[i] != '\0'){
        if(eVogal(s[i])){
            j = strlen(s);
            while(j > i){
                s[j+1] = s[j];
                j--;
            }
            s[i+1] = s[i];
            i++;
            j = 0;
            count++;
        }
        i++;
    }
    return count;
}

//4
int ordenado (int a[], int N){
    int i = 0;

    while(i < N){
        if(a[i] > a[i+1]){
            return 0;
        }
        i++;
    }
    return 1;
}

//5
void merge (int a[], int na, int b[], int nb, int r[]){
    int i = 0, j = 0, k = 0;

    while(i < na && j < nb){
        if(a[i] <= b[j]){
            r[k] = a[i];
            i++;
        }else{
            r[k] = b[j];
            j++;
        }
        k++;
    }
    if (i == na){
        while(j < nb){
            r[k] = b[j];
            j++;
            k++;
        }
    }else{
        while(i < na){
            r[k] = a[i];
            i++;
            k++;
        }
    }
}

//3
int partition (int v[], int N, int x){
    int i = 0, j = N-1, count = 0, aux = -1;

    while(i < j+1){
        if(v[i] <= x){
            i++;
            count++;
        }else{
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;
            j--;
        }
    }
    return count;
}
