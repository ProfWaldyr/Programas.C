
// o programa faz um divisão por 2 enquato o resto for <> de 0;
// sempre estará solicitando um número a  menos que digite um número par;

#include <stdio.h>

int main(){

    int numero;

    do {

    printf("Digite um numero par para sair do programa....");
    scanf("%d", &numero);

    if(numero % 2 == 0){
        printf("%d é par!" , numero);
    }    
        else{
        printf("%d é ímpar!" , numero);
    }

} while(numero % 2 != 0);

printf("Você digitou um número par! Saindo do programa...");    

return 0;
}
