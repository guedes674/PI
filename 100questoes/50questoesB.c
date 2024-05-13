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

//11
int removeDups (LInt *l){
    int count = 0;

    for(; (*l); l = &((*l) -> prox)){
        LInt ant = (*l);
        LInt seg = (*l) -> prox;
        for(; seg; seg = ant -> prox){
            if((*l) -> valor == seg -> valor){
                count++;
                ant -> prox = seg -> prox;
                free(seg);
            }else{
                ant = seg;
            }
        }
    }
    return count;
}

//12
int findMaior (LInt *l){
    int maior = 0;

    for(;*l; l = &(*l) -> prox){
        if((*l) -> valor >= maior){
            maior = (*l) -> valor;
        }
    }
    return maior;
}

int removeMaiorL (LInt *l){
    int maior = findMaior(l);
    LInt temp;
    
    while((*l) -> valor != maior){
        l = &((*l) -> prox);
    }
    
    temp = (*l) -> prox;
    free(*l);
    (*l) = temp;
    
    return maior;
}

//13
void init (LInt *l){
    LInt temp;

    while((*l) -> prox){
        l = &((*l) -> prox);
    }

    temp = (*l) -> prox;
    free(*l);
    (*l) = temp;
}

//14
void appendL (LInt *l, int x){
    LInt novo = malloc(sizeof(struct lligada));
    novo -> valor = x;
    novo -> prox = NULL;

    while(*l){
        l = &((*l) -> prox);
    }

    (*l) = novo;
}

//15
void concatL (LInt *a, LInt b){
    LInt *n = &b;

    while(*a){
        a = &((*a) -> prox);
    }

    (*a) = (*n);
}

//16
LInt cloneL (LInt l){
    LInt nova_lista;
    LInt ap*;

    (*ap) = &nova_lista;

    while(l){
        (*ap) = malloc(sizeof(struct lligada));
        (*ap) -> valor = l -> valor;
        l = l -> prox;
        ap = &((*ap) -> prox);
    }

    *ap = NULL;

    return nova_lista;
}

//17
LInt cloneRev (LInt l){
    LInt aux = NULL;
    LInt ret = NULL;

    while(l){
        aux = malloc(sizeof(struct lligada));
        aux -> valor = l -> valor;
        aux -> prox = ret;
        ret = aux;
        
        l = l -> prox;
    }

    return aux;
}

//18
int maximo (LInt l){
    int maximo = 0;

    for(; l; l = l -> prox){
        if(l -> valor > maximo){
            maximo = l -> valor;
        }
    }

    return maximo;
}

//19
int take (int n, LInt *l){
    int i = 0;
    LInt temp;

    while((*l) && i < n){
        i++;
        l = &((*l) -> prox);
    }

    while(*l){
        temp = (*l) -> prox;
        free(*l);
        (*l) = temp;
    }

    return i;
}

//20
int drop (int n, LInt *l){
    int i = 0;
    LInt temp;

    while((*l) && i < n){
        temp = (*l) -> prox;
        free(*l);
        (*l) = temp;
        i++;
    }
    return i;
}

//21
LInt NForward (LInt l, int N){

    while(N > 0){
        N--;
        l = l -> prox;
    }

    return l;
}

//22
int listToArray (LInt l, int v[], int N){
    int i = 0;

    while(i < N && l){
        v[i] = l -> valor;
        l = l -> prox;
        i++;
    }
    return i;
}

//23
LInt arrayToList (int v[], int N){
    
    if(N == 0){
        return NULL;
    }
    
    LInt l = malloc(sizeof(struct lligada));
    l -> valor = v[0];
    l -> prox = NULL;
    i++;

    while(i < N){
        l -> valor = v[i];
        l = l -> prox;
        i++;
    }

    l -> prox = NULL;

    return l;
}

//24
LInt somasAcL (LInt l){
    LInt lista;
    LInt *p = &lista;
    int acc = 0;

    for(; l; p = &((*p) -> prox)){
        acc += l -> valor;
        *p = malloc(sizeof(struct lligada));
        (*p) -> valor = acc;
        l = l -> prox;
    }

    (*p) = NULL;

    return lista;
}

//25
void remreps (LInt l){

    for(; l; l = l -> prox){
        LInt *p = &(l -> prox);

        while((*p) && (*p) -> valor == l -> valor){
            LInt temp = (*p);
            (*p) = (*p) -> prox;
            free(temp);
        }
    }
}

//26
LInt rotateL (LInt l){

    if(length (l) <= 1){
        return l;
    }
    
    LInt h = l -> prox;

    LInt p = l;

    while(p -> prox){
        p = p -> prox;
    }
    
    p -> prox = l;
    l -> prox = NULL;

    return h;
}

//27
LInt parte (LInt l){
    LInt ret, *p = &ret, *p2 = &l;
    int i = 0;

    while(*p2){
        if(i % 2 != 0){
            (*p) = (*p2);
            (*p2) = (*p2) -> prox;
            p = &((*p) -> prox);
        }else{
            p2 = &((*p2) -> prox);
        }
        i++;
    }
    (*p) = NULL;
    return ret;
}

typedef struct nodo {
int valor;
struct nodo *esq, *dir;
} *ABin;

//28
int maior(int a, int b){
    
    if(a >= b){
        return a;
    }else{
        return b;
    }
}

int altura (ABin a){
    int max = 0;

    if(!a){
        max = 0;
    }else{
        max = 1 + maior((altura(a -> esq)),(altura(a -> dir)));
    }

    return max;
}

//29
ABin cloneAB (ABin a){
    ABin nova;

    if(a){
        nova = malloc(sizeof(struct nodo));
        nova -> valor = a -> valor;
        nova -> esq = cloneAB(a -> esq);
        nova -> dir = cloneAB(a -> dir);
    }else{
        nova = NULL;
    }

    return nova;
}

//30
void mirror (ABin *a) {
    if((*a)){
        ABin temp = (*a) -> esq;
        (*a) -> esq = (*a) -> dir;
        (*a) -> dir = temp;
        mirror(&((*a) -> esq));
        mirror(&((*a) -> dir));
    }
}

//31
void inorder (ABin a, LInt *l) {
    
    if(a){
        inorder(a -> esq, l);
        while(*l){
            l = &((*l) -> prox);
        }

        (*l) = malloc(sizeof (struct nodo));
        (*l) -> valor = a -> valor;

        inorder(a -> dir, &((*l) -> prox));
    }else{
        (*l) = NULL;
    }
}

//32
void preorder (ABin a, LInt *l) {

    if(a){
        (*l) = malloc(sizeof (struct nodo));
        (*l) -> valor = a -> valor;

        preorder(a -> esq, &((*l) -> prox));
        while(*l){
            l = &((*l) -> prox);
        }

        preorder(a -> dir, l);

    }else{
        (*l) = NULL;
    }
}

//33
void posorder (ABin a, LInt *l) {

    if(a){
        posorder(a -> esq, l);
        while(*l){
            l = &((*l) -> prox);
        }

        posorder(a -> dir, l);
        while(*l){
            l = &((*l) -> prox);
        }

        (*l) = malloc(sizeof (struct nodo));
        (*l) -> valor = a -> valor;
        (*l) -> prox = NULL;
    }else{
        (*l) = NULL;
    }
}

//34
int depth (ABin a, int x){
    int e, d;

    if(a == NULL){
        return -1;
    }

    if(a -> valor == x){
        return 1;
    }

    e = depth(a -> esq, x);
    d = depth(a -> dir, x);

    if(e == -1 && d == -1){
        return -1;
    }else{
        if(e == -1){
            return 1+d;
        }else if(d == -1){
            return 1+e;
        }
        else{
            if(e < d){
                return 1+e;
            }else{
                return 1+d;
            }
        }
    }
}

//35
int freeAB (ABin a){
    int ret = 0;
    
    if(a != NULL){
        ABin tmp1 = a -> esq;
        ABin tmp2 = a -> dir;
        free(a);
        ret = 1 + freeAB(tmp1) + freeAB(tmp2);
    }

    return ret;
}

//36
int pruneAB (ABin *a, int l) {
    int count = 0;

    if((*a) != NULL && l > 0){
        count = pruneAB(&(*a) -> esq, l-1) + pruneAB(&(*a) -> dir, l-1);
    }else if((*a) != NULL && l <= 0){
        count = 1 + pruneAB(&(*a) -> esq, l-1) + pruneAB(&(*a) -> dir, l-1);
        free(*a);
        *a = NULL;
    }
    return count;
}
