//Crie um programa que tenha uma função ler3Numeros. Essa função deve ler três números do usuário e retornar os três números. A função main deve imprimir esses três números. Utilize vetor para fazer o retorno.

#include <stdio.h>
#define N 3
void ler3Numeros(int _ler3Numeros[]);

int main()
{
    int numeros[N];
    int i;
   
    ler3Numeros(numeros);
    
    printf("Números: \n");
    for(i=0; i< N; i++){
        printf("[%d] = %d\n", i+1, numeros[i]);
    }
    
}

void ler3Numeros(int _ler3Numeros[]){
    int i;
    printf("Digite três números: \n");
    for(i = 0; i < N; i++){
        printf("%d:", i+1);
        scanf("%d", &_ler3Numeros[i]);
    }
}