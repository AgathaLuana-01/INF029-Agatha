//Crie um programa que tenha uma função ler3Palavras. Essa função deve ler três palavras do usuário e retornar as três palavras. A função main deve imprimir essas três palavras

char ler3Palavras(char *_ler3Palavras,int limite);

int main()
{
    char ler[N][20];
    int i;
    for(i = 0; i < N; i++){
        ler3Palavras(ler[i],20);
    }
    for(i = 0; i < N; i++){
        printf("Palavra %i: ", i+1);
        puts(ler[i]);
    }
}

char ler3Palavras(char *_ler3Palavras,int limite){
    char palavra[limite];
    printf("Digite a palavra: ");
    fgets(palavra, 19, stdin);
    strcpy(_ler3Palavras, palavra);
}