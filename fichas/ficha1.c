//Exercicio 1

int x,y;
x = 3;
y = x + 1;
x = x * y;
y = x + y;

printf("%d %d\n", x, y);

//Output:
//12 16

//Exercicio 2

int x,y;
x = 0;
printf("%d %d\n", x, y);

//Output:
//0 y

//Exercicio 3

char a, b, c;
a = 'A'; b = ' '; c = '0';
printf ("%c %d\n", a, a);
a = a+1; c = c+2;
printf ("%c %d %c %d\n", a, a, c, c);
c = a + b;
printf ("%c %d\n", c, c);

//Output:
//A 65
//B 66 2 50
//a 97

//Exercicio 4

int x, y;
x = 200; y = 100;
x = x+y; y = x-y; x = x-y;
printf ("%d %d\n", x, y);

//Output:
//200 100

//Exercicio 5

//A

int x, y;
x = 3; y = 5;
if (x > y)
    y = 6;
printf ("%d %d\n", x, y);

//Output:
//3 5

//B

int x, y;
x = y = 0;
while (x != 11) {
x = x+1; y += x;
}
printf ("%d %d\n", x, y);

//Output:
//11 66

//C

int i;
for (i=0; (i<20) ; i++){
    if (i%2 == 0) putchar ('_');
    else putchar ('#');
}

//Output:
//_#_#_#_#_#_#_#_#_#_#

//D

void f (int n) {
    while (n>0) {
        if (n%2 == 0) putchar ('0');
        else putchar ('1');
        n = n/2;
    }
    putchar ('\n');
}
int main () {
    int i;
    for (i=0;(i<16);i++){
        f (i);
    return 0;
    }
}

//Output:
//
//1
//01
//11
//001
//101
//011

//Exercicio 3

//1
void quadrado(int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            putchar('#');
        }
        putchar('\n')
    }
    
}

int main(){
    int x = 5;
    quadrado(x);
    return 0;
}

//2
void quadrado(int n){
    int i, j;
    for(i = 0; i < n; i++){
      if (i % 2 == 0){
        for(j = 0; j < n; j++){
          if(j % 2 == 0){
            putchar('#');
          }else{
            putchar('_');
          }
        }else{ for(j = 0; j < n; j++){
          if(j % 2 == 0){
            putchar('_');
          }else{
            putchar('#');
          }
        }
        }
        putchar('\n');
    }
}

int main(){
    int x = 5;
    quadrado(x);
    return 0;
}
//Sugestão:

putchar(if j % 2 == 0 ? '#' : '_')

//3
void trianguloV(int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j <= i; j++){
            putchar('#');
        }
        putchar('\n');
    }
    for(i = n-1; i > 0; i--){
        for(j = 0; j < i; j++){
            putchar('#');
        }
        putchar('\n');
    }
}

int main(){
    int x = 5;
    trianguloV(x);
    return 0;
}

//4
void trianguloH(int n){
    int i, j, e = n-1, c = 1;
    for(i = 0; i < n; i++){
        for(j = 0; j < e; j++){
            putchar(' ');
        }
        for(j = 0; j < c; j++){
            putchar('#');
        }
        putchar('\n');e--;c += 2;
    }
}

int main(){
    int x = 5;
    trianguloH(x);
    return 0;
}

//5
void circulo(int n){
    int x, y;
    for(y = x-1; y >= (-1)*(n-1); y--){
        for(x = (-1)*(n-1); x <= n-1; x++){
            if(x*x + y*y <= (n-1)*(n-1){
                putchar('#');
            }else{
                putchar(' ');
            }
        }
        putchar('\n');
    }
}

int main(){
    int x = 5;
    circulo(x);
    return 0;
}
