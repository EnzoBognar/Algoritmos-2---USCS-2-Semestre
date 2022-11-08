#include <stdio.h>

//Enzo Bognar - 8123357 - Exercício 07/11 Fibonacci

int fib (int n) {
    int x;
    printf("\nDentro da função fib n=%d", n);
    
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
        x = fib(n-1) + fib(n-2);
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
