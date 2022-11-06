//Enzo Bognar - RA 8123357 - 31/10 Exercício 4 Iterativo

#include <stdio.h>

int fatorial (int n) {
    int fat = 1;
     
    for (int i=1; i<= n; i++) {
           fat = fat * i;
    }
    return fat;
}




int main()
{
    printf("\n%d", fatorial(6));

    return 0;
}

