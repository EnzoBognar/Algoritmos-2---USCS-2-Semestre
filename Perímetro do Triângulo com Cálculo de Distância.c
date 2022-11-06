#include <stdio.h>
#include <math.h>
#define QUANTIDADE_DE_PONTOS 3

//Enzo Bognar - 8123357 - Exercício 8 da Lista 4 - Perímetro do triângulo com Cálculo de Distância

int calculadistancia(int x, int X, int y, int Y)
{
    int distancia;
    
    distancia = sqrt(((x - X) * (x - X)) + ((y - Y) * (y - Y)));
    
    return distancia;
}

    typedef struct{
      int x;
      int y;
    } Ponto;


 int main()
{
    int i = 0;
    Ponto pontos[QUANTIDADE_DE_PONTOS];
    
    pontos[0].x = -4; pontos[0].y = 7;
    pontos[1].x = 2; pontos[1].y = -9;
    pontos[2].x = 5; pontos[2].y = 3;
    
    for(i = 0; i < QUANTIDADE_DE_PONTOS; i++){
        if(pontos[i].y > 0){
            printf("\nPonto %d acima do eixo\n", i);
            printf("X = %d \nY = %d \n", pontos[i].x, pontos[i].y);
        }
    }
    
    
    printf("\nDistancia ponto 0 e ponto 1 = %d", calculadistancia(pontos[0].x, pontos[1].x, pontos[0].y, pontos[1].y));
    printf("\nDistancia ponto 1 e ponto 2 = %d", calculadistancia(pontos[1].x, pontos[2].x, pontos[1].y, pontos[2].y));

    return 0;
}
