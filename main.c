#include<stdio.h>

// Funções

void menu(void){
    printf("--- MENU ---\n");
    printf("1 - Calculadora da media do aluno;\n");
    printf("2 - Verificador de presenca;\n");
    printf("3 - Aprovação.");
}

float media_aritmetica(float n1, float n2){
    // n1 e n2 são notas do aluno
    // med é a média artimética entre n1 e n2
    // float med = (n1 + n2)/2;
    return (n1 + n2)/2;
}

void verificador_presenca(int p){
    // p é a presença/ frequencia do aluno  de 0 a 100
    if(p >= 75 && p <= 100){
        printf("Aluno esta com presenca em dia!\n");
    }else if(p >= 0 && p <= 74){
        printf("Aluno esta com presenca pendente!\n");
    }else{
        printf("Valor de presenca invalida!\n");
    }
}

void criterio_aprovacao_media(float m){
    // m --> media do aluno
    if(m >= 6 && m <= 10){
        printf("Aluno Aprovado!");
    }else if(m >= 4 && m < 6){
        printf("Aluno em Recuperacao!");
    }else{
        printf("Aluno Reprovado!");
    }
}
int main(){
    // Declarações de Variáveis
    int opcao, presenca;
    float media, nota_1, nota_2;
    menu();
    printf("Escolha uma das opcoes: ");
    scanf("%d", &opcao);
    switch(opcao){
        case 1: 
        printf("--- CALCULADORA DE MEDIA ---\n"); 
        printf("Digite sua primeira nota: ");
        scanf("%f", &nota_1);
        printf("Digite sua segunda nota: ");
        scanf("%f", &nota_2);
        media = media_aritmetica(nota_1, nota_2);
        printf("A nota do aluno e: %.2f", media);
        break;

        case 2: 
        printf("--- VERIFICADOR DE PRESENCA ---\n"); 
        printf("Digite a frequencia do aluno (0-100): ");
        scanf("%d", &presenca);
        verificador_presenca(presenca);
        break;

        case 3:
        // aprovação
        criterio_aprovacao_media(media);
        break;

        default: printf("Opcao invalida!\n");
    }
    return 0;
}

// Compilar --> gcc main.c(o nome do seu arquivo com extensão .c) -o programa
// Executar --> programa ou programa.exe

//=== Aula Vetores ===

#include<stdio.h>

void exibir_vetor(int vetor[], int n){
    for(int i = 0; i < n; i++){
        int valor = vetor[i];
        printf("O indice do valor e: %d\nO valor do vetor e: %d\n\n",i ,valor);
    }
}

int main(){
    int tamanho; // tamanho do vetor
    int valores[5]; // inicialização qualquer do vetor

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    valores[tamanho]; // vetor a ser utilizado
    exibir_vetor(valores, tamanho);
    // Exibir os valores dentro do vetor
    // Antes
    /* for(int i = 0; i < 3; i++){
        int valor = valores[i];
        printf("O indice do valor e: %d\nO valor do vetor e: %d\n\n",i ,valor);
    } */
    // Depois com função
    
    /* exibir_vetor(valores);
    // Através da interação do usuário, armazenar os valor 1, 5, 4
    for(int i = 0; i < 3; i++){
        printf("Digite o valor que gostaria de armazenar no indice %d: ", i);
        scanf("%d", &valores[i]);
    }
    // Exibir os valores dentro do vetor
    exibir_vetor(valores); */

    return 0;
}

//=== Gabarito Exercício ===

#include<stdio.h>

void exibir_vetor(int vetor[], int n){
    for(int i = 0; i < n; i++){
        int valor = vetor[i];
        printf("O indice do valor e: %d\nO valor do vetor e: %d\n\n",i ,valor);
    }
}


int main(){
	int quantidade;
	printf("Digite a quantidade de notas que gostaria: ");
	scanf("%d", &quantidade);
	float notas[quantidade];
	float soma = 0;
	for(int i = 0; i < quantidade; i++){
		printf("Digite a nota %d: ", i + 1);
		scanf("%f", &notas[i]);
		soma += notas[i];
	}
	
	printf("A media do aluno e: %.2f\n", soma/quantidade);

    return 0;
}