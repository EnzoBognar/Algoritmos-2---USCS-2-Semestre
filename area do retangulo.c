#include <stdio.h>

//C�digo 2022 - C�lculo da �rea do Ret�ngulo - 1� Semestre
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
