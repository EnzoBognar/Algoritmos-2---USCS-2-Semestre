#include <stdio.h>

//C�digo para calcular o quadrado de 10 n�meros reais. Feito no 1� Semestre de Ci�ncia da Computa��o
//Aluno: Enzo Bognar | RA: 8123357

int main(){
	int R1[10], R2[10], i, q;
	
	printf("Digite 10 numeros reais: ");
	for(i=0; i<10; i++){
		scanf("%d", &R1[i]);
	}
	
	for(i=0;i<10;i++){
	q = R1[i] * R1[i];
	R2[i] = q;
	printf("%d ", R2[i]);
}
		
	
	printf("\nConjunto 1 = ");
	for(i=0; i<10; i++){
		printf("%d ", R1[i]);
	}
	printf("\nConjunto 2 = ");
	for(i=0; i<10; i++){
		printf("%d ", R2[i]);
		
	}
return 0;
	
}
