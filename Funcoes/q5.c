//Crie um programa que tenha uma função ler4Numeros. Essa função deve ler quatro números do usuário e retornar os quatro números. A função main deve imprimir esses quatro números. Utilize struct para fazer o retorno.

#include <stdio.h>
#define N 4

typedef struct{
    int _ler4numeros[N];
}Numero;

Numero ler4numeros();

int main(){
    Numero recebeNumeros = ler4numeros();
    int i = 0;
    while(i < N){
        printf("%d ", recebeNumeros._ler4numeros[i]);
        i++;
    }
}

Numero ler4numeros(){
    Numero numeros;
    printf("Digite os 4 numeros: \n");
    for(int i = 0; i < N; i++){
        printf("%d: ", i+1);
        scanf("%d", &numeros._ler4numeros[i]);
    }
    return numeros;
};