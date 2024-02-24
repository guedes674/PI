#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
#include <string.h>

//1
int maior(){
    int maior = 0, numb = -1;

    printf ("Insira os números que desejar da sequência: \n");
    while (numb != 0){
        assert(scanf("%d", &numb)==1);
        if (numb > maior){
            maior = numb;
        }
    }
    return maior;
}

//2
double media(){
    int acc = 0, i = 0, numb = -1;

    printf ("Insira os números que desejar da sequência: \n");
    while (numb !=0){
        assert(scanf("%d", &numb)==1);
        acc += numb;
        i++;
    }
    return acc/i;
}

//3
int segMaior(){
    int maior = 0, segMaior = 0, numb = -1;

    printf ("Insira os números que desejar da sequência: \n");
    while(numb != 0){
        assert(scanf("%d", &numb)==1);
        if(numb > maior){
            segMaior = maior;
            maior = numb;
        }
        if(numb < maior && numb > segMaior){
            segMaior = numb;
        }
    }
    return segMaior;
}

//4
int bitsUm (unsigned int n){
    int acc = 0;

    while(n != 0){
        if (n % 2 == 1){
            acc++;
        }
        n /= 2;
    }
    return acc;
}

//5
int trailingZ (unsigned int n){
    int acc = 0;

    while(n != 0){
        if(n % 2 == 0){
            acc++;
        }
        n /= 2;
    }
    return acc;
}

//6
int qDig (unsigned int n){
    int acc = 0;

    while(n != 0){
        acc++;
        n /= 10;
    }
    return acc;
}

//7
char *mystrcat (char s1[], char s2[]){
    char newstr[strlen(s1) + strlen(s2)];
    int i = 0, j = 0;

    while(s1[i] != '\0'){
        newstr[i] = s1[i];
        i++;
    }
    while(s2[j] != '\0'){
        newstr[i] = s2[j];
        j++;
        i++;
    }
    newstr[strlen(s1)+strlen(s2)] = '\0';

    printf("%s\n", newstr);
    return newstr;
}

int main(){
    int perg = 0;

    printf("Insira o número da pergunta que pretende testar: \n");
    scanf("%d", &perg);

    if(perg == 1){
        printf("O maior número da sequência é: %d \n", maior());
    }
    if(perg == 2){
        printf("A média da sequência é: %lf \n", media());
    }
    if(perg == 3){
        printf("O segundo maior elemento da sequência é: %d \n", segMaior());
    }
    if(perg == 7){
        mystrcat("aaaaaaaaaaaaaaaaaaaaaa", "Ola");
    }
}
