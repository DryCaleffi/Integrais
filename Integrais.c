#include <stdio.h>
#include <math.h>
// Adryelle Caroline de Souza Calefi 

// Integral Definida- Atividade computacional 4

float OP1(float a, float b, float k)
{
    float resposta;
    // Entrada dos valores
    printf("Informe o valor que a integral se inicia: ");
    scanf("%f", &a);
    printf("Informe o valor que a integral termina: ");
    scanf("%f", &b);
    printf("Informe o valor da constante K: ");
    scanf("%f", &k);
    //calculo da integral
    resposta = (pow(b, (k + 1)) / (k + 1)) - (pow(a, (k + 1)) / (k + 1));

    printf("Integral(%f; %f) f(x) dx = %.2f\n", a, b, resposta);

    return resposta;
}

float OP2(float a, float b, float resposta)
{
//f(x) =  1/ x -  Integral = ln |x| (ln é log sem ser na base 10)
    printf("Informe o valor que a integral se inicia : ");
    scanf("%f" ,&a);
    printf("Informe o valor que a integral termina : ");
    scanf("%f" ,&b);
    resposta = log(b) - log(a);
    printf("Integral(%f; %f) f(x) dx = %f " , a ,b, resposta);
}
float OP3(float a, float b, float resposta)
{
//f(x) = cos(x) = Integral = sen(x)
    printf("Informe o valor que a integral se inicia : ");
    scanf("%f" ,&a);
    printf("Informe o valor que a integral termina : ");
    scanf("%f" ,&b);
    resposta = sin(b) - sin(a);
    printf("Integral(%f; %f) f(x) dx = %f " , a ,b, resposta);
}
int main()
{
    float a, b, resposta, k;
    int opcao;
    printf("-----MENU-----");
    printf("\nOpção 1 - F(x) x ^ k \n ");
    printf("\nOpção 2 - F(x) 1/x \n ");
    printf("\nOpção 3 - F(x) cos(x)\n ");
    printf("\nOpção 4 - Sair\n ");
    printf("\nInforme a opção desejada :\n ");
    scanf("%d" ,&opcao);

    do{
        switch(opcao)
        {
            case 1:
            OP1(a, b, k);
            break;
            
            case 2:
            OP2(a,b,resposta);
            break;

            case 3:
            OP3(a,b,resposta);
            break;

            case 4:
            printf("Saindo...");
            break;

        }
    }
    while(opcao == 4);
 

}