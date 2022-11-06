#include <stdio.h>
#define TAM 3
#include <string.h>

//Enzo Bognar - 8123357 - Ciência da Computação 2º Semestre - Código para digitar Bandas


typedef struct Banda{
    char nome[30];
    char estilo[15];
    int quantint;
    int rank;
} BANDA;

void exibeBanda(BANDA *v){
   for(int i = 0; i < TAM; i++){
    printf("\n--------- BANDA %d ---------", i + 1);
    printf("\nnome = %s", v[i].nome);
    printf("\nestilo = %s", v[i].estilo);
    printf("\nquantidade de integrantes = %d", v[i].quantint);
    printf("\nranking pessoal = %dº lugar\n", v[i].rank);
   }
}
void leBanda(BANDA *v){
    for(int i = 0; i < TAM; i++){
    printf("\nBanda %d = ", i + 1);  scanf("%s", v[i].nome);
    printf("Estilo = ");             scanf("%s", v[i].estilo);
    printf("Quantia de membros = "); scanf("%d", &v[i].quantint);
    printf("Ranking pessoal = ");    scanf("%d", &v[i].rank);
    }
}

void pesquisaBanda(BANDA *v){
    char estilo[20];
    char aux[30];
    int achou = 0;
    
    printf("\nDigite seu estilo de música favorita: "); scanf("%s", aux);
    
    for(int i=0;i<TAM;i++){
        aux == v[i].estilo;
    if(strcmp(aux, v[i].estilo) == 0){
        achou = 1;
        printf("Banda com estilo favorito = %s", v[i].nome);
     }
    }
    
    if(achou) printf("\nBanda encontrada!");
    else   printf("\nBanda não encontrada");
}


int main()
{
    BANDA v[TAM];
    
    
    leBanda(v);
    exibeBanda(v);
    
    
    pesquisaBanda(v);
    
    
    
    
    return 0;
}

