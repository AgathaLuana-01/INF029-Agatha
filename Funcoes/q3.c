//Faça um programa que tenha uma função que recebe um número inteiro e retorna o fatorial deste número. Esta função deve ainda verificar se é possível calcular o fatorial, se não for, ela deve de alguma forma retornar para a main que deu algum erro. A função main deve solicitar o valor do usuário e imprimir o fatorial dele, ou se não é possível calcular o fatorial.
#include <stdio.h>

int main()
{
    int numero, fatorial;
    int i, contador;
    
    printf("Digite o número para calcular fatorial: ");
    scanf("%i", &numero);
    
    contador = numero;
    
    
    if(numero == 1){
        fatorial = 1;
    } else if(numero == 0){
        fatorial = 1;
    } else if (numero > 1){
        fatorial = numero;
        for(i = 1; i < contador; i++){
        fatorial *= i;
        }  
    } else {
        printf("\nNúmero não possui fatorial. \nFatorial é um número natural inteiro positivo.");
    }

    if(numero >= 0){
        printf("%d! = %d", numero, fatorial);
    }
    
}

