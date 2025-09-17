      #include <stdio.h>

int main(){

    int idade;
    float renda;

// programa para verificar se uma pessoa está qualificada 
// para um desconto especial com base na idade e na renda mensal
// A pessoa deve ter mais de 60 anos ou menos de 18 e uma renda
// menor que 2000 mil;

printf( "Digite a sua idade: \n");
scanf ("%d",&idade);

printf( "Digite a sua renda mensal: \n");
scanf ("%f",&renda);


if(idade >60 && renda <=2000) 

{printf("Você possui benefício para receber \n");

}

if (idade <=18 && renda <=2000)

{printf("Você possui benefício para receber \n");

}


else{printf("Você não possui direito ao benefício");}


}