#include <stdio.h>
void menu(){
    printf("1-Calculadora de media do aluno;\n ");
    printf("2 - Verificador de presenca;\n");
    printf("3 - aprovacao");
}
    void media_calculo(){
    float nota1 = 0;
    float nota2 = 0;
    int presenca = 0;
    float media = nota1 + nota2 /2;
    printf("Digite sua primeira nota:\n");
    scanf("%f", &nota1);
    printf("Digite sua segunda nota:\n ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) /2;
    printf("A media do aluno e: %.2f", media);
}

    void verificador_de_presenca(){
    int presenca = 0;
    printf("---Veificador de presenca---\n"); 
    printf("Digite sua presenca (0--100):\n ");
    scanf("%d", &presenca);
    if(presenca >= 75 && presenca < 101){;
     printf("Aluno esta com presenca em dia\n");
    }else if(presenca < 75){
            printf("presenca insuficiente");
    }else{
            printf("oxe");
    }
}

    void aprovacao(){
    float nota1 = 0;
    float nota2 = 0;
    int presenca = 0;
    float media = nota1 + nota2 /2;
    printf("Digite sua primeira nota:\n");
    scanf("%f", &nota1);
    printf("Digite sua segunda nota:\n ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) /2;
    printf("Digite sua presenca (0--100):\n ");
    scanf("%d", &presenca);
if(media >= 6 && presenca >= 75){
                printf("aprovado");
            }else if(media >= 4 && presenca >= 75){
                printf("recuperacao");
            }else if(media < 4 && presenca >= 75){
                printf("reprovado");
            }else{
                printf("reprovado");
            }





}








int main(){
    int opcao = 9;
    printf("---Menu---\n");
    menu();
    printf("Escolha uma das opcoes:\n ");
    scanf("%d", &opcao);
    switch(opcao){
            case 1: 
             media_calculo(); break;

            case 2: 
             verificador_de_presenca();
            break;
            case 3: printf("aprovacao\n");
             aprovacao(); break;
            




            default: printf("Opcao invalida!");


    

    }
    return 0;
}
