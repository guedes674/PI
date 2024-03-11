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
