   #include <stdio.h>

int main(){

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);


    // crianca < 12;
    // adolescente >= 12 && < 18;
    // adulto >= 18 && < 60;
    // idoso >=60;
    
    if(idade <12)
    {printf("Você é um criança mimada \n");
    }
    
    else if(idade>=12 && idade <18)
    {printf("Você é um adolescente \n");
    }

    else if(idade>=18 && idade <60)
    {printf("Você é adulto irresponsável \n");
    }

    else {printf("Você é idoso, tá ferrado no Brasil \n");
        
    }

}