#include <stdio.h>
#define QUANTIDADE 2

//Código para inserção de Matrícula de um aluno, Nota N1 e Nota N2. Para alterar a quantidade de alunos troque a constante QUANTIDADE. O Código devolve
//o Boletim dos alunos e a média da sala.
//Feito pelo aluno Enzo Bognar do curso de Ciência da Computação na USCS.

float calculaMedia(float n1, float n2){
    float media = (n1 + n2) / 2;
    
    return media;
}

float lerNota(){
    float temp;
    scanf("%f", &temp);
    while(temp < 0 || temp > 10){
        printf("Digite um valor valido entre zero e dez: ");
        scanf("%f", &temp);
    }
    return temp;
}

int main()
{
    int i = 0;
    float soma = 0;
    float md;
        struct aluno{
         int matricula;
        
         float n1;
         float n2;
         float media;
    } ;

    struct aluno vet[QUANTIDADE];
    
    for(int i = 0; i < QUANTIDADE; i++){
        printf("\nDigite a matricula do aluno: ");
        scanf("%d", &vet[i].matricula);
        
        printf("\nDigite a nota n1: ");
        vet[i].n1 = lerNota();
        
        printf("\nDigite a nota n2: ");
        vet[i].n2 = lerNota();
    }  
    for(i=0; i < QUANTIDADE; i++){
        vet[i].media = calculaMedia(vet[i].n1, vet[i].n2);
        printf("\n----------boletim do aluno %d ----------\n", i + 1);
        printf("\nMatricula do aluno = %d", vet[i].matricula);
        printf("\nMedia aluno %d = %.2f\n", i + 1, vet[i].media);
        soma = soma + vet[i].media;
    }
    
    md = soma / QUANTIDADE;
    printf("\n\n-----------------Media da sala = %.2f------------------", md);
    printf("\n\n----------Quantidade de alunos da sala = %d----------", QUANTIDADE);
}
