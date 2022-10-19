#include <stdio.h>
//Crie um programa que tenha uma função soma e a função main. A função main deve ler dois valores, enviar para a função soma. A função soma deve realizar a soma e retornar o valor. A Função main deve imprimir o resultado da soma

int soma(int numero1, int numero2,int numero3);

int main(){
  int valorA, valorB, valorC, resultado;
  printf("Digite três numeros para subtrair:\nNumero 1: ");
  scanf("%d", &valorA);
  printf("Numero 2: ");
  scanf("%d", &valorB);
  printf("Numero 3: ");
  scanf("%d", &valorC);
  
  resultado = soma(valorA, valorB, valorC);
  printf("Subtração: %d", resultado);
  
}
int soma(int numero1, int numero2,int numero3){
  return numero1 - numero2 - numero3;
}