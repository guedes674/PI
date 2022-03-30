//Exercicio 1

int one(){
    int maior = 0;
    int n;

    printf("Insira os numeros que desejar\n");
    while(n > 0){
        assert(scanf("%d", &n)==1);
        if(n >= maior){
            maior = n;
        }
    }
    return maior;
}

//Exercicio 2

int two(){
    int i = 0;
    float soma = 0;
    int numero;
    float media;
    
    while(numero != 0){
        printf("Insira um numero: ");
        scanf("%d", &numero);

        if(numero == 0){
            break;
        }

        soma += numero;
        i++;
    }

    media = soma/i;

    printf("Media: %.2f", media);
}

//Exercicio 3

void three(){
    int first = 0,
        second = 0,
        number;
    
    while(number != 0){
        printf("Insira um numero: ");
        scanf("%d", &number);

        if(number > first){
            second = first;
            first = number;
        }else if(number > second){
            second = number;
        }
    }
    printf("Second: %d", second);
}

//Exercicio 4

void bitsUm(unsigned int n){
    int one = 0;

    while(n != 0){
        if(n % 2 == 1)
            one++;
        n = n / 2;
    }
    printf("Number of 1's: %d", one);
}

//Exercicio 5

int trailingZ(unsigned int n){
    int zero = 0;

    while(n != 0){
        if(n % 2 == 0)
            zero++;
        n /= 2;
    }
    return zero;
}

//Exercicio 6

int qDig (unsigned int n){
    int i = 0;

    while(n != 0){
        i++;
        n /= 10;
    }
    return i;
}

//Exercicio 7

char *strcat (char s1[], char s2[]){
    char newstr[strlen(s1) + strlen(s2)];
    int i, j;

    for(i = 0; i < strlen(s1); i++){
        newstr[i] = s1[i];
    }

    for(j = 0; j < strlen(s2); j++){
        newstr[i + j] = s2[j];
    }

    newstr[strlen(s1) + strlen(s2)] = '\0';

    printf("%s ", newstr);
}

//Exercicio 8

char *strcpy (char *dest, char source[]){
    int i;

    for(i = 0; source[i] != '\0'; i++){
        dest[i] = source[i];
    }

    dest[i] = '\0';

    return dest;
}

//Exercicio 9

int strcmp (char s1[], char s2[]){
    int i = 0, p, q;

    while(s1[i] == s2[i] && s1[i]){
        i++;
    }

    p = s1[i];
    q = s2[i];

    return p - q;
}

//Exercicio 10

char *strstr (char s1[], char s2[]){

    if(*s1 == '\0' && *s2 == '\0'){
        return s1;
    }

    if(*s1 == '\n' && *s2 == '\n'){
        return s1;
    }

    for( ; *s1; s1++){
        if(*s1 == *s2){
            char *r = s1;
            char *p = s2;
            while(*s1 == *p && *s1){
                p++;
                s1++;
            }
            if(*p == '\0'){
                return r;
            }
        }
    }
    return NULL;
}

//Exercicio 11

void strrev (char s[]){
    int i, j = 0;
    char newstr[strlen(s)];

    for(i = strlen(s)-1; i >= 0; i--){
        newstr[j] = s[i];
        j++;
    }

    newstr[j] = '\0';

    printf("%s\n", newstr);
}

//Exercicio 12

int contaVogais (char s[]){
    int i = 0, vogais = 0;

    while(s[i]){
        if(s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' || s[i] == 'I' || s[i] == 'i' || s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u'){
            vogais++;
            i++;
        }else{
            i++;
        }
    }
    return vogais;
}

void strnoV (char s[]){
    int i = 0, j = 0;
    char newstr[strlen(s) - contaVogais(s)];

    while(s[i]){
        if(s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' || s[i] == 'I' || s[i] == 'i' || s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u'){
            i++;
        }else{
            newstr[j] = s[i];
            i++;
            j++;
        }
    }
    
    newstr[j] = '\0';

    printf("%s\n", newstr);
}

//Exercicio 13

void truncW(char t[], int N){
    int i, j = 0, n = 0;

    for(i = 0; t[i]; i++){
        if(t[i] == ' '){
            n = 0;
            t[j] = t[i];
            j++;
        } else {
            if (n < N){
                t[j] = t[i];
                j++;
                n++;
            }
        }
    }
    t[j] = '\0';
    
    printf("%s\n", t);
}

//Exercicio 14

char charMaisfreq (char s[]){
    int i = 0, j, count = 0, maior = 0;
    char maisFreq = s[i];

    for(i = 0; s[i]; i++){
        count = 0;
        for(j = 0; s[j]; j++){
            if(s[i] == s[j]){
                count++;
            }
            if(count > maior){
                maior = count;
                maisFreq = s[i];
            }
        }
    }
    
    printf("%c\n", maisFreq);

    return maisFreq;
}

//Exercicio 15
int iguaisConsecutivos (char s[]){
    int i = 0, maior = 0, count = 1;

    while(s[i]){
        while(s[i] == s[i+1]){
            count++;
            i++;
        }
        if(count > maior){
            maior = count;
            count = 1;
        }
        i++;
    }

    printf("%d", maior);

    return maior;
}
