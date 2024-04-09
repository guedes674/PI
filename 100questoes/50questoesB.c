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

//3
void imprimeL (LInt){
    while(l){
        printf("%d \n", l -> valor);
        l = l -> prox;
    }
}

//4
LInt reverseL (LInt l){
    LInt inicio, fim = NULL;

    while(l){
        inicio = l -> prox;
        l -> prox = fim;
        fim = l;
        l = inicio;
    }
    return fim;
}

//5
void insertOrd (LInt *l, int x){
    LInt novo;
    novo = malloc(sizeof(struct lligada));
    novo -> valor = x;
    novo -> prox = NULL;

    while((*l) && (*l) -> valor < x){
        l = &((*l) -> prox);
    }
    novo -> prox = (*l);
    (*l) = novo;
}

//6
int removeOneOrd (LInt *l, int x){
    int ret = 1;
    LInt temp;

    while((*l) && (*l) -> valor < x){
        l = &((*l) -> prox);
    }

    if((*l) && (*l) -> valor == x){
        ret = 0;
        temp = (*l);
        (*l) = (*l) -> prox;
        free(temp);
    }
    return ret;
}

//7
void merge (LInt *r, LInt l1, LInt l2){

    while(l1 || l2){
        if((l1 && l2 && l1 -> valor < l2 -> valor) || !l2){
            (*r) = l1;
            l1 = l1 -> prox;
        }else{
            (*r) = l2;
            l2 = l2 -> prox;
        }
        r = &((*r) -> prox);
    }
    (*r) = NULL;
}

//8
void splitQS (LInt l, int x, LInt *mx, LInt *Mx){

    while(l){
        if(l && l -> valor < x){
            (*mx) = l;
            mx = &((*mx) -> prox);
        }else{
            (*Mx) = l;
            Mx = &((*Mx) -> prox);
        }
        l = l -> prox;
    }
    (*mx) = NULL;
    (*Mx) = NULL;
}

//9
LInt parteAmeio (LInt *l){
    int count = length(*l)/2;
    LInt y = (*l);
    LInt ant = NULL;
    
    if(count == 0){
        return NULL;
    }

    while(count > 0){
        count--;
        ant = (*l);
        (*l) = (*l) -> prox;
    }
    ant -> prox = NULL;
    return y;
}

//10
int removeAll (LInt *l, int x){
    int count = 0, flag = 0;
    LInt aux = (*l);

    while(*l){
        if((*l) -> valor == x){
            count++;
            aux = (*l) -> prox;
            free(*l);
            (*l) = aux;
            flag = 1;
        }
        if(flag != 1){
            l = &((*l) -> prox);
        }
        flag = 0;
    }
    return count;
}
