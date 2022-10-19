//Crie um programa que tenha uma função ler3Letras. Essa função deve ler três letras do usuário e retornar as três letras. A função main deve imprimir essas três letras.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define N 3

char ler3Letras(char _ler3Letras[]);

int main()
{
    char ler[N];
    ler3Letras(ler);
    puts(ler);
}

char ler3Letras(char _ler3Letras[]){
    char caracter;
        printf("Digite um caracter: ");
        for(int i = 0; i < N; i++){
            printf("C.%i: ", i+1);
            scanf("%c", &caracter);
            _ler3Letras[i] = caracter;
            getchar();
        }
}