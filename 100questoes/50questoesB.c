typedef struct lligada {
    int valor;
    struct lligada *prox;
} *LInt;

//1
int length (LInt l){
    int comp = 0;

    while (l){
        comp++;
        l = l -> prox;
    }
    return comp;
}

//2
void freeL (LInt){
    LInt atual = l;

    while(l){
        atual = l -> prox;
        free(l);
        l = atual;
    }
}
