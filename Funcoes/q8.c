//Crie um programa que tenha uma função cadastrarCliente. Essa função deve ler os dados do cliente (nome, dataNascimento, cpf, sexo) e retornar os dados do cliente. A função main deve imprimir os dados do cliente.

#include<stdio.h>
#include<stdlib.h>

typedef struct {
    char nome[100];
    double cpf;
    char sexo[1];
    int dia, mes, ano;
    char dataNascimento;
}cliente;
cliente cadastrarCliente(cliente cadastro);

int main()
{
    cliente cadastro;
    
    cadastro = cadastrarCliente(cadastro);
    printf("\n");
    
    printf("Nome: %s", cadastro.nome);
    printf("Data de nascimento: %d / %d / %d\n", cadastro.dia, cadastro.mes, cadastro.ano);
    printf("CPF: %0.lf\n", cadastro.cpf);
    printf("Sexo: %s\n", cadastro.sexo);
}

cliente cadastrarCliente(cliente cadastro){
    puts("Digite o dados do cliente:");
    printf("Nome: ");
    fgets(cadastro.nome, 101, stdin);
    puts("Data de nascimento: ");
    printf("Dia: ");
    scanf("%d", &cadastro.dia);
    printf("Mês: ");
    scanf("%d", &cadastro.mes);
    printf("Ano: ");
    scanf("%d", &cadastro.ano);
    printf("CPF: ");
    scanf("%lf", &cadastro.cpf);
    printf("Sexo: ");
    getchar();
    fgets(cadastro.sexo, 2, stdin);
    
    return cadastro;
}