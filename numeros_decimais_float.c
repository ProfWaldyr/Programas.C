#include <stdio.h>
 
int main() {
    
    float x = 5.5;
    float y = 2.2;

    float Soma = x + y;
    float Diferenca = x - y;
    float Produto = x * y;
    float Quociente = x / y;

 
// Exibição dos resultados
    printf("Soma: %.2f\n", Soma);
    printf("Subtração: %.2f\n", Diferenca);
    printf("Multiplicação: %.2f\n", Produto);
    printf("Divisão: %.2f\n", Quociente);

    return 0;

}
