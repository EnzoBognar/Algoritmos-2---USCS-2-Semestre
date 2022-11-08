#include <stdio.h>

//Enzo Bognar - 8123357 - Exercício 07/11 Fibonacci
//João Vitor dos Santos - 8135154

int fib (int n) {
    int x, i, a = 0, b = 1;
    printf("\nDentro da função fib n=%d", n);
    
    if(n==1){
        return a;
    }
    else if(n==2){
        return b;
    }
    
    for(i = 2; i < n; i++){
        x = a + b;
        a = b;
        b = x;
    }
    return x;
}

int main()
{
    int aux, n;
    
    printf("Digite o valor de n: ");
    scanf ("%d", &n);
    
    aux = fib(n);
    
    printf ("\n\nO valor retornado é %d", aux);

    return 0;
}
