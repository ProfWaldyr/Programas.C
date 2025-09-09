#include <stdio.h>
 
int main() {
    
    int x = 10;
    int y = 3;

    int soma = x + y;
    int diferenca = x - y;
    int produto = x * y;
    int quociente = x / y;

 
// Exibição dos resultados
    printf("Soma: %.2d\n", soma);
    printf("Subtração: %.2d\n", diferenca);
    printf("Multiplicação: %.2d\n", produto);
    printf("Divisão: %.2d\n", quociente);

    return 0;

}
