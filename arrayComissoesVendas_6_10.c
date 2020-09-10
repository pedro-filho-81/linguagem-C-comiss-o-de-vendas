/* Exercício 6.10 Comissões de vendas. Use um array com subscrito
  único para resolver o problema a seguir. Uma empresa paga
  o salário de seus vendedores com base em uma comissão.
  O vendedor recebe R$ 200,00 por semana, e mais 9 por cento.
  de suas vendas brutas nessa semana. Por exemplo, um vendedor,
  que totalize R$ 3.000,00 em vendas em uma semana, receberá
  R$ 200,00 e mais 9 por cento de R$ 3.000,00, ou seja,
  R$ 470,00. Escreva um programa em C (usando um array de contadores)
  que determine quantos vendedores receberam salários dentro
  de cada um dos seguintes intervalos (suponha que o salário
  de cada vendedor seja arredondado em um valor inteiro):
  Deitel, Paul; Deitel, Harvey. C  Como Programar (Página 200).
  Edição do Kindle. Pedro Filho, 27/06/2020 */

//bibliotecas
#include <stdio.h>
#include <stdlib.h> //para system
#include <locale.h> // Para setlocale
#define SIZE  4 // PARA tamanhos
#define FREQUENCIA 4

// protótipos de função
void printArray( int arr[], int size );
void organizaArray( int arr[], int size );
void printOrganizado( int arr[], int size );

//Função principal
int main() { // início main

	//Define para Português Brasil
	setlocale(LC_ALL, "Portuguese");

  // variável
  int arrayVendas[ SIZE ] = {0}; // para armazenar os salários
  int totVendas = 0.0; // para o total das vendas INFO pelo usuário
  int salario, comissao; // para salários e comissões
  // variáveis
  int cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0;
  int cont6 = 0, cont7 =0 , cont8 = 0, cont9 = 0;

  // cabeçalho
  printf("{ COMISSÃO DE VENDAS }\n");

  // ADICIONA OS VALORES NO ARRAY VENDAS
  // loop para entrada de dados
  for( int i = 0; i < SIZE; i++ )
  {
    // entrada de dados pelo usuário
    printf( "Informe o total das vendas da semana R$" );
    scanf( "%d", &totVendas ); // entrada de valores, vendas da semana
    if( totVendas < 0 ) // // se totvendas menor que zero fim
    {
      break; // fim programa
    } // fim if
    else
    {

      // calcula comissão
      comissao = totVendas * 9 / 100;

      // calcula salário
      salario = comissao + 200;

      // adiciona os valores do salário no array vendas
      arrayVendas[ i ] = salario;

      // limpa variável comissão e salário
      comissao = 0;
      salario = 0;
    } // fim else if

  } // fim for

  system( "cls" ); // limpa a tela

  // imprime RESULTADO
  printf("\n****************************************\n" );
  printf( "Valor das comissõs (original):\n" );

  // imprime o inicio
  printf( "Vendas[ ] = { ");

  // chama a função printArray e mostra array original
  printArray( arrayVendas, SIZE );

  // chama a função organizaArray
  organizaArray( arrayVendas, SIZE );

  // imprime
  printf( "\nMostra os valores das comissões em ordem crecente:\n" );

  // imprime o inicio
  printf( "Vendas[ ] = { ");

  // chama a função printOrganizado
  printOrganizado( arrayVendas, SIZE );

  // VERIFICA FAIXA DE VALORES RECEBIDOS
  for( int resposta = 0; resposta < SIZE; resposta++ )
  {
    // se array maior ou igual a 200 e menor ou igual a 299
    if( arrayVendas[ resposta ] >= 200 && arrayVendas[ resposta ] <= 299 )
    {
      // cont1 recebe 1
      cont1 += 1;
    } // fim if

    // se array maior ou igual a 200 e menor ou igual a 299
    else if( arrayVendas[ resposta ] >= 300 && arrayVendas[ resposta ] <= 399 )
    {
      // cont1 recebe 2
      cont2 += 1;
    } // fim if

    // se array maior ou igual a 200 e menor ou igual a 299
    else if( arrayVendas[ resposta ] >= 400 && arrayVendas[ resposta ] <= 499 )
    {
      // cont1 recebe 1
      cont3 += 1;
    } // fim if

     // se array maior ou igual a 200 e menor ou igual a 299
    else if( arrayVendas[ resposta ] >= 500 && arrayVendas[ resposta ] <= 599 )
    {
      // cont1 recebe 1
      cont4 += 1;
    } // fim if

     // se array maior ou igual a 200 e menor ou igual a 299
    else if( arrayVendas[ resposta ] >= 600 && arrayVendas[ resposta ] <= 699 )
    {
      // cont1 recebe 1
      cont5 += 1;
    } // fim if

     // se array maior ou igual a 200 e menor ou igual a 299
    else if( arrayVendas[ resposta ] >= 700 && arrayVendas[ resposta ] <= 799 )
    {
      // cont1 recebe 1
      cont6 += 1;
    } // fim if

     // se array maior ou igual a 200 e menor ou igual a 299
    else if( arrayVendas[ resposta ] >= 800 && arrayVendas[ resposta ] <= 899 )
    {
      // cont1 recebe 1
      cont7 += 1;
    } // fim if

     // se array maior ou igual a 200 e menor ou igual a 299
    else if( arrayVendas[ resposta ] >= 900 && arrayVendas[ resposta ] <= 999 )
    {
      // cont1 recebe 1
      cont8 += 1;
    } // fim if

     // se array maior ou igual a 200 e menor ou igual a 299
    else if( arrayVendas[ resposta ] >= 1000 && arrayVendas[ resposta ] <= 1999 )
    {
      // cont1 recebe 1
      cont9 += 1;
    } // fim if

  } // fim for

  // imprime resultado
  printf( "Mostra quantos vendedores receberam salário:\n" );
  printf( "Entre R$200 a R$299 tiveram %d\n", cont1 );
  printf( "Entre R$300 a R$399 tiveram %d\n", cont2 );
  printf( "Entre R$400 a R$499 tiveram %d\n", cont3 );
  printf( "Entre R$500 a R$599 tiveram %d\n", cont4 );
  printf( "Entre R$600 a R$699 tiveram %d\n", cont5 );
  printf( "Entre R$700 a R$799 tiveram %d\n", cont6 );
  printf( "Entre R$800 a R$899 tiveram %d\n", cont7 );
  printf( "Entre R$900 a R$999 tiveram %d\n", cont8 );
  printf( "Entre R$1000 a R$2000 tiveram %d\n", cont9 );

	// pula uma linha
	printf("\n");

	// Pausa o sistema
	system("pause");

	 // fim do programa
	return 0;

} // fim main

// função printArray
void printArray( int arr[], int size )
{
  // MOSTRA ARRAY SALÁRIO ORIGINAL
  // loop para imprimir salários
  for( int i = 0; i < size; i++ )
  {
    // imprime lista com os salários, lado a lado.
    printf( "R$%d, ", arr[ i ] );

  } // fim for mostra array original
  printf( " }\n" ); // pula uma linha
} // fim função printArray

// função organiza array
void organizaArray( int arr[], int size )
{
  // variável
  int auxiliar = 0;

  // ORGANIZANDO O ARRAY EM ORDEM CRESCENTE
  // loop para organizar o array
  for( int i = 0; i < size; i++ ) // array principal
  {
    for( int j = 0; j < size; j++ ) // array secundário
    {
      //verifica se principal é menor que secundário
      if( arr[ i ] < arr[ j ] )
      { // se verdadeiro

        // variável recebe o valor do secundário
        auxiliar = arr[ j ];
        //secundário recebe o valor do principal
        arr[ j ] = arr[ i ];
        // principal recebe o valor do auxiliar
        arr[ i ] = auxiliar;

      } // fim de if
    } // fim for interno
  }// fim for externo

} // fim função organizaArray

// função printOrganizado
void printOrganizado( int arr[], int size )
{
  // MOSTRA O ARRAY ORGANIZADO
  // loop para mostrar o array organizado
  for( int i = 0; i < size; i++ )
  {
    // imprime valores dos salários em ordem crescente
    printf( "R$%d ", arr[ i ] );

  } // fim for em ordem
  printf( "\n\n" ); // pula linha

} // fim função printOrganizado
