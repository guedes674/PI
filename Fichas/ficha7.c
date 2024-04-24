typedef struct celula {
    char *palavra;
    int ocorr;
    struct celula * prox;
} * Palavras;

//1
void libertaLista (Palavras l){

    while(l){
        Palavras temp = l -> prox;
        free(l);
        l = temp;
    }
}

//2
int quantasP (Palavras l){
    int count = 0;

    while(l){
        if(l -> ocorr == 1){
            count++;
        }
        l = l -> prox;
    }
    return count;
}
