#include <stdio.h>
 
int main() {
    
    int carta_1 = 1, carta_2 = 2;
    char estado_1[20] = "Paraná", estado_2[20] = "Santa Catarina";
    char cod_01[6] = "A21", cod_02[6] = "B21" ;
    char cidade_1[20] = "Curitiba", cidade_2[20] = "Florianópolis" ;
    int populacao_1 = 150000, populacao_2 = 130000;
    float area_1 = 154.45 , area_2 = 131.33 ;
    float PIB_1 = 190.2, PIB_2 = 98.1;
    int pontos_tur_1 = 15 , pontos_tur_2 = 28; 

    printf("Carta: %d \n", carta_1);
    printf("Estado: %s \n", estado_1);
    printf("Código Cidade: %s \n", cod_01);
    printf("Cidade: %s \n", cidade_1);
    printf("População: %d \n", populacao_1);
    printf("Area em km2: %.2f \n", area_1);
    printf("PIB em milhões: %.1f \n", PIB_1);
    printf("Número de pontos turísticos: %d \n\n", pontos_tur_1);
    
    printf("Carta: %d \n", carta_2);
    printf("Estado: %s \n", estado_2);
    printf("Código Cidade: %s \n", cod_02);
    printf("Cidade: %s \n", cidade_2);
    printf("População: %d \n", populacao_2);
    printf("Area km2: %.2f \n", area_2);
    printf("PIB em milhões: %.1f \n", PIB_2);
    printf("Número de pontos turísticos: %d \n\n", pontos_tur_2);
}
  
    
    
    
    


