//Crie um programa que tenha uma função subtrai e a função main. A função main deve ler três valores, enviar para a função subtrai. A função subtrai deve realizar a subtração dos três valores (primeiro menos o segundo menos o terceiro) e retornar o valor. A Função main deve imprimir o resultado da subtração.

#include <stdio.h>
int subtracao(x, y, z);

int main(){
  int subtracao;
  int a, b, c;
  printf("Digite três numeros para subtração:\nN1: ");
  scanf("%i", &a);
  printf("N2: ");
  scanf("%i", &b);
  printf("N3: ");
  scanf("%i", &c);

  subtracao = subtracao(a, b, c);

  printf("Resultado: %i", subtracao);
}

int subtracao(x, y, z){
  int subtracao = x - y - z;
  return subtracao;
}