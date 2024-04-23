struct staticStack {
    int sp;
    int values [Max];
} STACK, *SStack;

//1
//a
void SinitStack (SStack s){
    s -> sp = 0;
}

//b
int SisEmpty (SStack s){
    return s -> sp == 0;
}

//c
int Spush (SStack s, int x){
    s -> sp++;
    if(s -> sp == Max){
        return 1;
    }else{
        s -> values[s -> sp] = x;
    }

    return 0;
}

//d
int  Spop (SStack s, int *x){
    s -> sp --;
    if(s -> sp == 0){
        return 1;
    }else{
        (*x) = s -> values[s -> sp--];
        return 0;
    }
}

//e
int Stop (SStack s, int *x){
    if(s -> sp == 0){
        return 1;
    }else{
        (*x) = s -> values[s -> sp];
        return 0;
    }
}

struct staticQueue {
int front;
int length;
int values [Max];
} QUEUE, *SQueue;

//2
//a
void SinitQueue (SQueue q){
    q -> front = 0;
    q -> length = 0;
}

//b
int SisEmptyQ (SQueue q){
    return q -> length == 0;
}

//c
int Senqueue (SQueue q, int x){
    if(q -> front + q -> length == Max){
        return 1;
    }else{
        q -> values[q -> front + q -> length++] = x;
        return 0;
    }
}

//d
int Sdequeue (SQueue q, int *x){
    if(q -> length == 0){
        return 1;
    }else{
        (*x) = q -> values[q -> front++];
        return 0;
    }
}

//e
int Sfront (SQueue q, int *x){
    if(q -> length == 0){
        return 1;
    }else{
        (*x) = q -> values[q -> front];
        return 0;
    }
}
