#include <stdio.h>;

int main() {

    int nota_1, nota_2, nota_3;
    int media;
    int nota;

    printf("***   PROGRAMA DE CALCULO DE NOTAS    ***\n" );

    printf("Digite quantidade de notas:  \n");
    scanf("%d", &nota);

    printf("Digite a sua primeira nota:  \n");
    scanf("%d", &nota_1);

    printf("Digite a sua segunda nota:  \n");
    scanf("%d", &nota_2);

    printf("Digite a sua terceira nota:  \n");
    scanf("%d", &nota_3);   
    

    media = (nota_1 + nota_2 + nota_3) / (nota);

    printf("A média das notas é: %d", media);

   return 0;

}