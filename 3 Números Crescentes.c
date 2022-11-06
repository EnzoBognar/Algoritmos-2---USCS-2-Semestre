#include <stdio.h>
#include <locale.h>

//Código para colocar 3 números em Ordem Crescente. Enzo Bognar - 8123357
//Feito no Primeiro Semestre de Ciência da Computação na USCS

int main(){
	setlocale(LC_ALL, "Portuguese");
	int A, B, C;
	
	printf("\nDigite um valor: ");
	scanf("%d", &A);
	
	printf("\nDigite outro valor: ");
	scanf("%d", &B);
	
	printf("\nDigite mais um valor: ");
	scanf("%d", &C);
	
	if((A < B) && (A < C)){
		printf("\n%d", A);
		
		if(B < C) {
			printf("\n%d", B);
			printf("\n%d", C);
		} else {
			printf("\n%d", C);
			printf("\n%d", B);
		}	
	} else if ((B < A) && (B < C)) {
		printf("\n%d", B);
		
		if(A < C) {
			printf("\n%d", A);
			printf("\n%d", C);
		} else {
			printf("\n%d", C);
			printf("\n%d", A);
		}	
	} else {
		printf("\n%d", C);
		
		if(B < A) {
			printf("\n%d", B);
			printf("\n%d", A);
		} else {
			printf("\n%d", A);
			printf("\n%d", B);
		}	
	}
}
