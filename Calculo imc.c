#include <stdio.h>
#include <locale.h>

//C�lculo de IMC - 1� Semestre Ci�ncia da Computa��o USCS
//Enzo Bognar - 8123357

int main(){
	setlocale(LC_ALL, "Portuguese");
	double Altura, Peso, IMC;
	
	printf("\nDigite sua Altura em metros(Use V�rgula): ");
	scanf("%lf", &Altura);
	
	printf("\nDigite seu Peso em KG(Use Virgula): ");
	scanf("%lf", &Peso);
	
	IMC = Peso / (Altura * Altura);
	
	printf("IMC = %.1f", IMC);

      if(IMC <= 18.5)
		printf("\nAbaixo do Peso!");
else if((IMC >= 18.5) && (IMC<24.9))
		printf("\nPeso normal!");
	else if((IMC >= 24.9) && (IMC <29.9))
		printf("\nSobrepeso!");
	else if((IMC >=30) && (IMC <34.9))
		printf("\nObesidade Grau 1");
	else if((IMC >=35) && (IMC <39.9))
		printf("\nObesidade Grau 2");
	else if((IMC >=40))
		printf("\nObesidade m�rbida");
}
