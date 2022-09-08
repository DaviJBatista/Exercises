
//Calcular o consumo de um veiculo
#include <stdio.h>

    int main()
{
    int contadorExercicios;

for (contadorExercicios = 1; contadorExercicios <= 15; 
contadorExercicios = contadorExercicios  + 1)
{

int exercicio;

if (contadorExercicios == 1)
{
    printf("         Escolha um exercicio: ");
} 
else if(contadorExercicios > 1) 
{
    printf("         Escolha outro exercicio: ");
}

scanf("%d", &exercicio);
// Calculo IMC
    if (exercicio ==  1)
    {
        //Declaração das Variáveis
            float peso; 
            float altura; 
            float imc;

        //Recebendo valores
            printf ("Digite a altura: ");
            scanf("%f", &altura);
            printf("Digite peso: ");
            scanf("%f", &peso);

        //Processamento
            imc=peso/(altura*altura);

        //Condições
        if(imc<=18.4)
        {
            printf("Abaixo do peso ");
        }
        else if(imc>=18.5 && imc<=24.9)
        {
            printf("Peso normal ");
        }
        else if(imc>=25 && imc<=29.9)
        {
            printf("Sobre peso ");
        }
        else if(imc>=30 && imc <=39.9)
        {
            printf("Digite obesidade ");
        }
        else
        {
            printf("Obesidade grave ");
        }

    }
    
//Media do aluno    
    else if (exercicio == 2)
    {
    //Declaração das variáveis
        float nota1;
        float nota2;
        float media;
    //Recebendo valores
        printf ("Digite nota1: ");
        scanf("%f", &nota1);
        printf("Digite nota2: ");
        scanf("%f", &nota2);
        
    //Processamento
        media=(nota1+nota2)/2;

     //Condições   
    if(media>=5)
    {
        printf("Aprovado!!! ");
    }
    else
    {
        printf("Reprovado snif snif ");
    }
    }

// Consumo do carro
    else if(exercicio == 3)
    {
        // Declaração de variáveis
        float tempoHoras;
        float velocidadeMedia;
        float distancia;
        float consumo;

    // Recebendo valores das variaveis
        printf("Digite o tempo: ");
        scanf("%f", &tempoHoras);
        printf("Digite a velocidade: ");
        scanf("%f", &velocidadeMedia);
    //Processamento
        distancia = tempoHoras * velocidadeMedia;
        consumo = distancia/12;

    //Saída
        printf("O consumo foi de: ");
        printf("%f", consumo);
    }
   
//Metade do numero digitado
    else if(exercicio == 4)
    {
    //Declaração de variáveis
        float numeroDigitado;
        float resultado;
    //Recebendo valores
        printf("Digite um numero: ");
        scanf("%f", &numeroDigitado);
    //processamento
    resultado = numeroDigitado/2;
    if(numeroDigitado >= 20)
    {
    printf("O resultado é: ");
    printf("%f", resultado);
    }
    else
    {
    printf("Não tenho permissão para resolver contas com o valor menor que 20! ");
    }
    }
    
//Soma dos numeros inteiros    
    else if(exercicio ==  5)
    {
    //declaração das variaveis
        int numero1;
        int numero2;
        int processo;
    
    //Recebendo os valores
        printf("Digite o primeiro número: ");
        scanf("%d", &numero1);

        printf("Digite o segundo número: ");
        scanf("%d", &numero2);
    
    //Processamento
        processo = numero1 + numero2;

    //Condições
        if(processo > 10)
        {
            printf("A soma dos números digitados é: ");
            printf("%d", processo);
        }
        else
        {
            printf("Não tenho permissão para somar números cuja a soma seja menor que 10! ");
        }
    }
    
//Metade de numeros inteiros
    else if(exercicio ==  6)
    {
        //declaração das variáveis
        int numero1;
        int numero2;
        int processo;
    
    //Recebendo os valores
        printf("Digite o primeiro número: ");
        scanf("%d", &numero1);

        printf("Digite o segundo número: ");
        scanf("%d", &numero2);
    
    //Processamento
        processo = (numero1 + numero2)/2;

    //Condições
        if( numero1 + numero2 > 10)
        {
            printf("A soma dos números digitados é: ");
            printf("%d", processo);
        }
        else
        {
            printf("Não tenho permissão para efetuar operações cuja a soma dos números seja menor que 10! ");
        }

    }
    
//ler se o que o numero é de 20    
    else if(exercicio ==  7)
    {
        //Declaração das variáveis
            int numeroDigitado;

        //Recebendo os valores
            printf("Digite um número ");
            scanf("%d", &numeroDigitado);
        
        //Condições
            if(numeroDigitado < 20)
            {
                printf("O número ");
                printf("%d", numeroDigitado);
                printf(" é menor que 20. ");
            }
            else if(numeroDigitado == 20)
            {
                printf("O número ");
                printf("%d", numeroDigitado);
                printf(" é igual a 20. ");
            }
            else if(numeroDigitado > 20)
            {
                printf("O número ");
                printf("%d", numeroDigitado);
                printf(" é maior que 20! ");
            }

    }
    
//Cauculo da idade    
    else if(exercicio ==  8)
    {
        //Declaração das variáveis
            int anoDeNascimento;
            int anoAtual = 2022;
            int processo;

        //Recebendo valores
            printf("Digite o ano que você nasceu: ");
            scanf("%d", &anoDeNascimento);
        
        //Processamento
            processo = anoAtual - anoDeNascimento;

            printf("Okay, você tem ");
            printf("%d", processo);
            printf(" anos. ");
    }
    
//Calculo do salário e prestação
    else if(exercicio == 9)
    {
        //Declaração das variáveis
            int salario;
            int valorEmprestimo;
            int processo;

        //Recebendo Valores
            printf("Digite seu salário: ");
            scanf("%d", &salario);
            printf("Digite o valor do emprestimo desejado: ");
            scanf("%d", &valorEmprestimo);

            processo = (salario/100)*20;

        //condições
        if (valorEmprestimo >= processo)
        {
            printf("O emprestimo no valor de: R$ ");
            printf("%d", valorEmprestimo);
            printf(" não pode ser concedido. ");
        }
        else
        {
            printf("O emprestimo no valor de: R$ ");
            printf("%d", valorEmprestimo);
            printf(" foi concedido. ");
        }
        
            
    }

    else
    {
        printf("Sem opções! ");
    };
};
}

