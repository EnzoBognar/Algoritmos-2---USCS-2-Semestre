#include <stdio.h>

//uso de condicional - 1º semestre de Ciência da Computação USCS
//Enzo Bognar - 8123357

int main(){
	int idade;
	
	printf("\nBem vindo! aqui voce sabera se pode doar sangue.");
	
	printf("\nInsira sua idade: ");
	scanf("%d", &idade);
	
	if((idade<=0) || (idade >=100)){
		printf("\nidade invalida");
	}

	if((idade>=18) && (idade<=67)){
		printf("\npode");
	}
	else{
	printf("\nnao pode.");
	}

}
