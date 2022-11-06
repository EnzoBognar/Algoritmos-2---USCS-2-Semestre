#include <stdio.h>

//Código 2022 - Cálculo da Área do Retângulo - 1º Semestre
//Aluno: Enzo Bognar | RA: 8123357

void main(){
	int largura;
	int altura;
	int area;
	
	printf("por favor, inserir valor de largura: ");
	scanf("%d", &largura);
	
	printf("\nagora, insira valor de altura: ");
	scanf("%d", &altura);
	
	area = largura*altura;
	
	printf("\nsua area: %d", area);
}
