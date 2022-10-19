// #################################################
//  Instituto Federal da Bahia
//  Salvador - BA
//  Curso de Análise e Desenvolvimento de Sistemas http://ads.ifba.edu.br
//  Disciplina: INF029 - Laboratório de Programação
//  Professor: Renato Novais - renato@ifba.edu.br

//  ----- Orientações gerais -----
//  Descrição: esse arquivo deve conter as questões do trabalho do aluno.
//  Cada aluno deve renomear esse arquivo para Aluno<MATRICULA>.c //* ok
// AgathaLuana20221160036
//  O aluno deve preencher seus dados abaixo, e implementar as questões do trabalho //* ok

//  ----- Dados do Aluno -----
//  Nome: Ágatha Luana Farias da Silva
//  email: agathaluana.ads@gmail.com
//  Matrícula: 20221160036
//  Semestre: 2

//  Copyright © 2016 Renato Novais. All rights reserved.
// Última atualização: 07/05/2021 - 19/08/2016

// #################################################

#include <stdio.h>
#include "AgathaLuana20221160036.h" // Substitua pelo seu arquivo de header renomeado
#include <stdlib.h>
#include <string.h>
/*
## função utilizada para testes  ##
 somar = somar dois valores
@objetivo
    Somar dois valores x e y e retonar o resultado da soma
@entrada
    dois inteiros x e y
@saida
    resultado da soma (x + y)
 */
int somar(int x, int y)
{
    int soma;
    soma = x + y ;
    return soma;
}

/*
## função utilizada para testes  ##
 fatorial = fatorial de um número
@objetivo
    calcular o fatorial de um número
@entrada
    um inteiro x
@saida
    fatorial de x -> x!
 */
int fatorial(int x)
{ //função utilizada para testes
  int i, fat = 1;
    
  for (i = x; i > 1; i--)
    fat = fat * i;
    
  return fat;
}

int teste(int a)
{
    int val;
    if (a == 2)
        val = 3;
    else
        val = 4;

    return val;
}



DataQuebrada quebraData(char data[]){
    DataQuebrada dq;
    char sDia[3];
	char sMes[3];
	char sAno[5];    
	int i; 

	for (i = 0; data[i] != '/'; i++){
		sDia[i] = data[i];	
	}
	if(i == 1 || i == 2){ // testa se tem 1 ou dois digitos
		sDia[i] = '\0';  // coloca o barra zero no final
	}else {
		dq.valido = 0;
    return dq;
  }  
	

	int j = i + 1; //anda 1 cada para pular a barra
	i = 0;

	for (; data[j] != '/'; j++){
		sMes[i] = data[j];
		i++;
	}

	if(i == 1 || i == 2){ // testa se tem 1 ou dois digitos
		sMes[i] = '\0';  // coloca o barra zero no final
	}else {
		dq.valido = 0;
    return dq;
  }
	

	j = j + 1; //anda 1 cada para pular a barra
	i = 0;
	
	for(; data[j] != '\0'; j++){
	 	sAno[i] = data[j];
	 	i++;
	}

	if(i == 2 || i == 4){ // testa se tem 2 ou 4 digitos
		sAno[i] = '\0';  // coloca o barra zero no final
	}else {
		dq.valido = 0;
    return dq;
  }

  dq.iDia = atoi(sDia);
  dq.iMes = atoi(sMes);
  dq.iAno = atoi(sAno); 

	dq.valido = 1;
    
  return dq;
}
/*
 Q1 = validar data
@objetivo
    Validar uma data
@entrada
    uma string data. Formatos que devem ser aceitos: dd/mm/aaaa, onde dd = dia, mm = mês, e aaaa, igual ao ano. dd em mm podem ter apenas um digito, e aaaa podem ter apenas dois digitos.
@saida
    0 -> se data inválida
    1 -> se data válida
 @restrições
    Não utilizar funções próprias de string (ex: strtok)   
    pode utilizar strlen para pegar o tamanho da string
 */
int q1(char data[])
{   
    //quebrar a string data em strings sDia, sMes, sAno
    int datavalida = 1;   
    DataQuebrada novaData;
    DataQuebrada dq;
    novaData = quebraData(data);
    dq.bissexto = 0;

    //fevereiro ano comum = 28, ano b = 29

    //bissexto    
    if(novaData.iMes < 1 || novaData.iMes > 12){ 
        datavalida = 0;
    } 
    else 
    {
        // Ano B
        if(novaData.iAno % 400 == 0 || (novaData.iAno % 4 == 0 && novaData.iAno % 100 != 0)){ 
        dq.bissexto = 1;
        printf("Ok?\n");            
        }
        // Validação Mês Dia
        if (novaData.iMes == 4 || novaData.iMes == 6 || novaData.iMes == 9 || novaData.iMes == 11){
            if(novaData.iDia > 0 && novaData.iDia <= 30){
                datavalida = 1;               
            } else {
                datavalida = 0;
            }
        } 
        else if(novaData.iMes == 01 || novaData.iMes == 03 || novaData.iMes == 05 || novaData.iMes == 07 || novaData.iMes == 8 || novaData.iMes == 10 || novaData.iMes == 12 )
        {
            if(novaData.iDia > 0 && novaData.iDia <= 31){
                datavalida = 1;              
            } else {
                datavalida = 0;
            }
        } else {
            if(dq.bissexto == 1){
                if(novaData.iDia > 0 && novaData.iDia <= 29){                    
                datavalida = 1;                
                } 
            } else {
                datavalida = 0;
                dq.bissexto = 0;
            } 
        }
    }

    if (datavalida){
        printf("Bissexto : %d\n", dq.bissexto);
        printf("Data valida\n");
        return 1;
    }   
    else{
        printf("Data invalida\n");
        return 0;        
    }
      
}



/*
 Q2 = diferença entre duas datas
 @objetivo
    Calcular a diferença em anos, meses e dias entre duas datas
 @entrada
    uma string datainicial, uma string datafinal. 
 @saida
    Retorna um tipo DiasMesesAnos. No atributo retorno, deve ter os possíveis valores abaixo
    1 -> cálculo de diferença realizado com sucesso
    2 -> datainicial inválida
    3 -> datafinal inválida
    4 -> datainicial > datafinal
    Caso o cálculo esteja correto, os atributos qtdDias, qtdMeses e qtdAnos devem ser preenchidos com os valores correspondentes.
 */
DiasMesesAnos q2(char datainicial[], char datafinal[])
{
    printf("\n\n");
    DataQuebrada dataI, dataF;
    dataI = quebraData(datainicial);
    dataF = quebraData(datafinal);
    //calcule os dados e armazene nas três variáveis a seguir
    DiasMesesAnos dma;

    int vc = 0; // Validar e comparar, passando = 1;
    
    puts(datainicial);
    puts(datafinal);

    if (q1(datainicial) == 0){
      dma.retorno = 2;
      return dma;
    }else if (q1(datafinal) == 0){
      dma.retorno = 3;
      return dma;
    }else{

    printf("%d - %d\n", dataI.iAno, dataF.iAno);
    //verifique se a data final não é menor que a data inicial

    int qtDia;
    if(dataI.bissexto == 0){
        qtDia = 365;
    } else if(dataI.bissexto == 1){
        qtDia = 366;
    }

    if(dataF.bissexto == 0){
        qtDia = 365;
    } else if(dataF.bissexto == 1){
        qtDia = 366;
    }

    
        

    
        
        

    

   



        
        
    if(dataI.iAno <= dataF.iAno){
        printf("entrou\n");
        dma.qtdAnos = (dataF.iAno - dataI.iAno);
        printf("Diferença de Anos: %d \n", dma.qtdAnos);
        vc = 1;
        if(dataI.iAno != dataF.iAno){
            printf("anos diferentes\n");
        } else {
            printf("anos iguais\n");
            if(dataI.iMes != dataF.iMes){
                printf("Meses diferentes\n");
            } else {
                printf("Meses iguais...\n");
                if(dataI.iDia != dataF.iDia){
                    printf("Dias diferentes\n");                    
                } else {
                    printf("Datas iguais.......\n");
                    vc = 0;
                }
            }
        }
        
    } else {
        printf("Ano inicial > Final \n");
        vc = 0;
    }    

        
    //calcule a distancia entre as datas


      //se tudo der certo
      dma.retorno = 1;
      return dma;
      
    }
    
}

/*
 Q3 = encontrar caracter em texto
 @objetivo
    Pesquisar quantas vezes um determinado caracter ocorre em um texto
 @entrada
    uma string texto, um caracter c e um inteiro que informa se é uma pesquisa Case Sensitive ou não. Se isCaseSensitive = 1, a pesquisa deve considerar diferenças entre maiúsculos e minúsculos.
        Se isCaseSensitive != 1, a pesquisa não deve  considerar diferenças entre maiúsculos e minúsculos.
 @saida
    Um número n >= 0.
 */
int q3(char *texto, char c, int isCaseSensitive)
{
    int qtdOcorrencias = -1;

    return qtdOcorrencias;
}

/*
 Q4 = encontrar palavra em texto
 @objetivo
    Pesquisar todas as ocorrências de uma palavra em um texto
 @entrada
    uma string texto base (strTexto), uma string strBusca e um vetor de inteiros (posicoes) que irá guardar as posições de início e fim de cada ocorrência da palavra (strBusca) no texto base (texto).
 @saida
    Um número n >= 0 correspondente a quantidade de ocorrências encontradas.
    O vetor posicoes deve ser preenchido com cada entrada e saída correspondente. Por exemplo, se tiver uma única ocorrência, a posição 0 do vetor deve ser preenchido com o índice de início do texto, e na posição 1, deve ser preenchido com o índice de fim da ocorrencias. Se tiver duas ocorrências, a segunda ocorrência será amazenado nas posições 2 e 3, e assim consecutivamente. Suponha a string "Instituto Federal da Bahia", e palavra de busca "dera". Como há uma ocorrência da palavra de busca no texto, deve-se armazenar no vetor, da seguinte forma:
        posicoes[0] = 13;
        posicoes[1] = 16;
        Observe que o índice da posição no texto deve começar ser contado a partir de 1.
        O retorno da função, n, nesse caso seria 1;
 */
int q4(char *strTexto, char *strBusca, int posicoes[30])
{
    int qtdOcorrencias = -1;

    return qtdOcorrencias;
}

/*
 Q5 = inverte número
 @objetivo
    Inverter número inteiro
 @entrada
    uma int num.
 @saida
    Número invertido
 */

int q5(int num)
{
    int max = 9, gamb = 0;
    
    int i, j;

    for(int i = 0; i < 10; i++){       
        if(max <= num){
           max = max * 10;            
        } 
    }    
    max = (max / 9);

    

    

    
    printf("num %d max %d", num, max);

    printf("\n\n");

    return num;
}

/*
 Q6 = ocorrência de um número em outro
 @objetivo
    Verificar quantidade de vezes da ocorrência de um número em outro
 @entrada
    Um número base (numerobase) e um número de busca (numerobusca).
 @saida
    Quantidade de vezes que número de busca ocorre em número base
 */

int q6(int numerobase, int numerobusca)
{
    int qtdOcorrencias;
    return qtdOcorrencias;
}