//Exercicio 1

float multInt1 (int n, float m){

    int r, i;
    r = 0;

    for(i = 0; i < n; i++){
        r += m;
    }
    return r;
}

//Exericio 2

float multInt2 (int n, float m){
    float resultado = 0;

    while(n >= 1){
        if(n % 2 == 0){
            resultado = resultado + m;
            n /= 2;
            m /= 2;
        }else{
            n /= 2;
            m /= 2;
        }
    }
    return resultado;
}

//Exercicio 3

int mdc (int a, int b){
    int i, divisor;

    if(a < b){
        for(i = 0; i <= a; i++){
            if(a % i == 0 && b % i == 0){
                divisor = i;
            }
        }
    }else{
        for(i = 0; i <= b; i++){
            if(b % i == 0 && a % i == 0){
                divisor = i;
            }
        }
    }
    return divisor;
}

//Exercicio 4

int mdcalt (int a, int b){

    while(a > 0 && b > 0){
        if(a > b){
            a = a - b;
        }else{
            b = b - a;
        }
    }
    if (a > 0){
        return a;
    }else{
        return b;
    }
}

//Exercicio 5

int mdcalt2 (int a, int b){

    while(a != 0 && b != 0){
        if(a > b){
            a = a % b;
        }else{
            b = b % b;
        }
    }
    if(a > 0){
        return a;
    }else{
        return b;
    }
}

//Exercicio 6

//A

int fib (int n){
    int r;

    if(n <= 2){
        r = 1;
    }else{
        r = fib(n - 1) + fib(n - 2);
    }
}

//B

int fib2 (int n){
    int i, resultado;
    int a = 1;
    int b = 1;

    if(n == 1 || n == 0){
        return 1;
    }
    for(i = 1; i < n; i++){
        resultado = a + b;
        a = b;
        b = resultado;
    }
    return resultado;
}

