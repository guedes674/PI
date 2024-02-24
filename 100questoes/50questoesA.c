#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//1
int maior(){
    int maior = 0, numb = -1;

    printf ("Insira os números que desejar da sequência: ");
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

    printf ("Insira os números que desejar da sequência: ");
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

    printf ("Insira os números que desejar da sequência: ");
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

int main(){
    int perg = 0;

    printf("Insira o número da pergunta que pretende testar: ");
    scanf("%d", &perg);

    if(perg == 1){
        printf("O maior número da sequência é: %d", maior());
    }
    if(perg == 2){
        printf("A média da sequência é: %lf", media());
    }
    if(perg == 3){
        printf("O segundo maior elemento da sequência é: %d", segMaior());
    }
}
