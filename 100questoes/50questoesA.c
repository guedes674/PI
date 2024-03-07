#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

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

//8
char *mystrcpy (char *dest, char source[]){
    int i;

    for(i = 0; source[i] != '\0'; i++){
        dest[i] = source[i];
    }
    dest[i] = '\0';
    
    return dest;
}

//9
int mystrcmp (char s1[], char s2[]){
    int i = 0, r = 0;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'){
        i++;
    }
    if(s1[i] > s2[i])
        r = 1;
    else if(s1 [i] < s2[i])
        r = -1;
    
    return r;
}

//10
char *mystrstr (char s1[], char s2[]){
    int i = 0, j = 0;
    char* ret = s1;

    while (s1[i] != s2[j] && s1[i] != '\0' && s1[i] != '\n'){
        i++;
        ret++;
    }
    if(s1[i] != '\0'){
        while(s1[i] == s2[j] && s1[i] != '\0' && s2 != '\0'){
            i++;
            j++;
        }
        if (s2[j] != '\0'){
            ret = NULL;
        }
    }
    return ret;
}

//11
void strrev (char s[]){
    int i = strlen(s)-1, j = 0;
    char newstr[strlen(s)];
    
    for(; i >= 0; i--){
        newstr[j] = s[i];
        j++;
    }
    newstr[j] = '\0';
    strcpy(s,newstr);
}

//12
void strnoV (char s[]){
    int i = 0, j = 0, k = 0;
    char newstr[strlen(s)];

    while(s[i] != '\0'){
        if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U'){
            i++;
        }else{
            newstr[j] = s[i];
            i++;
            j++;
        }
    }
    newstr[j] = '\0';
    strcpy(s,newstr);
}

//13
void truncW (char t[], int n){
    int i = 0, j = 0, aux = n;

    while(t[i] != '\0'){
        if(isspace(t[i])){
            t[j] = t[i];
            j++;
            i++;
            aux = n;
        }else if((isalpha(t[i]) || ispunct(t[i]) || iscntrl(t[i])) && aux > 0){
            t[j] = t[i];
            j++;
            i++;
            aux--;
        }else{
            i++;
        }
    }
    t[j] = '\0';
}

//14
char charMaisfreq (char s[]){
    int i = 0, j = 0, timesC = 0, acc = 0;
    char c = s[i];
    if(s[i] != '\0'){
        for(i = 0; s[i] != '\0'; i++){
            for(j = 0; s[j] != '\0'; j++){
                if(s[j] == s[i]){
                    acc++;
                }
            }
            if(acc > timesC){
                timesC = acc;
                c = s[i];
            }
            acc = 0;
        }
    }else{
        c = '0';
    }
    return c;
}

//15
int iguaisConsecutivos (char s[]){
    int i = 0, acc = 1, maiorSeq = 0;

    while(s[i] != '\0'){
        if (s[i] == s[i+1]){
            acc++;
        }else{
            if(acc > maiorSeq){
                maiorSeq = acc;
            }
            acc = 1;
        }
        i++;
    }
    return maiorSeq;
}

//16
int na_anterior (char s[], int a, int b){
    int i, ret = 1;

    for(i = a; i < b; i++){
        if(s[i] == s[b]){
            return 0;
        }
    }
    return ret;
}

int difConsecutivos (char s[]){
    int i = 0, j = 0, acc = 0, maiorSeq = 0;

    for(i = 0; s[i]; i++){
        for(j = i; s[j]; j++){
            if(na_anterior(s,i,j)){
                acc++;
            }else{
                break;
            }
        }
        if(acc > maiorSeq){
            maiorSeq = acc;
        }
        acc = 0;
    }
    return maiorSeq;
}

//17
int maiorPrefixo (char s1 [], char s2 []){
    int i = 0;

    while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'){
        i++;
    }
    return i;
}

//18
int maiorSufixo (char s1 [], char s2 []){
    int i = 0, j = 0;
    while(s1[i+1])
        i++;
    while(s2[j+1])
        j++;

    int r = 0;

    while(s1[i] == s2[j] && i >= 0 && j >= 0){
        r++;
        i--;
        j--;
    }
    return r;
}

//19
int sufPref (char s1[], char s2[]){
    int i = 0, j = 0, maior = 0, acc = 0;

    for(i = 0; s1[i]; i++){
        while(s1[i] != s2[j]){
            i++;
        }
        while(s1[i] == s2[j] && s1[i] && s2[j]){
            i++;
            j++;
            acc++;
        }
        if(acc > maior && s1[i] == '\0'){
            maior = acc;
        }
        acc = 0;
        j = 0;
    }
    return maior;
}


//20
int contaPal (char s[]){
    int i = 0, count = 0;

    while(s[i] != '\0'){
        if (s[i] != ' ' && s[i] != '\n' && (s[i+1] == ' ' || s[i+1] == '\0' || s[i+1] == '\n')){
            count++;
        }
        i++;
    }
    return count;
}

//21
int contaVogais (char s[]){
    int i = 0, count = 0;

    while(s[i] != '\0'){
        if(s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' || s[i] == 'I' || s[i] == 'i' || s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u'){
            count++;
        }
        i++;
    }
    return count;
}

//22
int contida (char a[], char b[]){
    int i = 0, j = 0;

    for(i = 0; a[i] != '\0'; i++){
        for(j = 0; b[j] != '\0' && a[i] != b[j]; j++){
            
        }
        if(b[j] == '\0'){
            return 0;
        }
    }
    return 1;
}

//23
int palindroma (char s[]){
    int i = 0, j = strlen(s)-1;

    while(s[i] != '\0'){
        if(s[i] != s[j]){
            return 0;
        }
        i++;
        j--;
    }
    return 1;
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
