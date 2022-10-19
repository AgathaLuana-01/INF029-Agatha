/*Evolua o programa que tem a função cadastrarCliente, para fazer as validações dos dados. Cadavalidação deve ser feita em uma função diferente, conforme lista abaixo. A função cadastrarClientedeve chamar cada uma dessas funções. A função main deve imprimir se o cadastro foi realizadocom sucesso ou se houve erro, informando onde foi o erro:
• função validarNome: recebe o nome digitado, e valida se nome tem até 20 caracteres;
• função validarSexo: recebe o sexo digitado, e valida é um sexo válido (opções: m e M para
masculino; f e F para feminino, o e O para outro).
• função validarCPF: recebe o cpf digitado, e valida é um cpf válido;
• função validarNacimento: recebe o data digitada, e valida é uma data válida.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


typedef struct{
    char nome[20];
    char sexo[2];
    
}cliente;

cliente cadastrarCliente(cliente cadastro);
int contaCaractersNome(char verificaNome[]);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    cliente cadastro;
    
    printf("Cadastro de clientes: ");
    cadastro = cadastrarCliente(cadastro);
    
   //descobri pq n vai
   printf("Nome cadastrado: %s", cadastro.nome);

}

cliente cadastrarCliente(cliente cadastro){
    char guardaNome[101];
    printf("Nome: ");
    fgets(guardaNome, 100, stdin);
    contaCaractersNome(guardaNome);
    return cadastro;
}

int contaCaractersNome(char verificaNome[]){
 int tamanho;
 cliente cliente_1;
 tamanho = strlen(verificaNome) - 1;
    
    if(tamanho > 20){
        printf("Erro!! Quantidade de caracters superior a 20!");
    } else {
        strcpy(cliente_1.nome, verificaNome);
        //puts(cliente_1.nome);
    }
}



// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <locale.h>


// typedef struct{
//     char nome[20];
//     char sexo[2];
    
// }cliente;

// cliente cadastrarCliente(cliente cadastro);
// int contaCaractersNome(char verificaNome[]);
// char validarSexo(char verificaSexo[]);

// int main()
// {
//     setlocale(LC_ALL, "Portuguese");
    
//     cliente cadastro;
    
//     printf("Cadastro de clientes: ");
//     cadastro = cadastrarCliente(cadastro);
    
//   //descobri pq n vai
//   printf("Nome cadastrado: %s", cadastro.nome);
//   printf("Sexo cadastrado: %s", cadastro.sexo);

// }

// cliente cadastrarCliente(cliente cadastro){
//     printf("Nome: ");
//     fgets(cadastro.nome, 100, stdin);
//     contaCaractersNome(cadastro.nome);
//     printf("Sexo: ");
//     fgets(cadastro.sexo, 2, stdin);
//     validarSexo(cadastro.sexo);
    
//     return cadastro;
// }

// int contaCaractersNome(char verificaNome[]){
//  int tamanho;
//  cliente cliente_1;
//  tamanho = strlen(verificaNome) - 1;
    
//     if(tamanho > 20){
//         printf("Erro!! Quantidade de caracters superior a 20!");
       
//     } else {
//         strcpy(cliente_1.nome, verificaNome);
//     }
// }

// char validarSexo(char verificaSexo[]){
//     int i;
//     for(i =  0; i < 2; i++){
//         if(verificaSexo[i] == "M"){
//             printf("Ok");
//         } else {
//             printf("erro");
//         }
//     }
// }