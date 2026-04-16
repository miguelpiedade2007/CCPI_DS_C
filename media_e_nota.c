#include <stdio.h>


int main(){
    float nota_1;
    float nota_2;
    int presenca;
    


    printf("qual sua nota 1?\n ");
    scanf("%f", &nota_1);
    printf("qual sua nota 2?\n ");
    scanf("%f", &nota_2);
    printf("digite sua presenca:\n ");
    scanf("%d", &presenca);
    
    float media = nota_1 + nota_2 /2;
    
    
    

    if(media >=9 && presenca >= 75){
        printf("excelente e aprovado");
    }else if(media >= 6 && presenca >= 75){
        printf("aprovado, parabens");
    }else if(media >= 6 && presenca <= 75){;
        printf("reprovado por faltas!");
    }else if(media <= 6 && presenca >= 75)
        printf("reprovado por media!");

    return 0;
        









}