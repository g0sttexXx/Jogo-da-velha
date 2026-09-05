#include <studio. h>

int main() {

char tabuleiro[3][3] = {
    {' '.' '.' '.},
    {' '.' '.' '.},
    {' '.' '.' '.}
};

int linha;
int coluna;
char jogador = 'X';

    while (1) {

  printf(\njogador %c\n, jogador);

  printf("Escolha uma linha (0, 1 ou 2): ");
    scanf("%d", &linha);

  printf("Escolha uma coluna (0, 1 ou 2): ");
    scanf("%d", &coluna);

  tabuleiro [linha][coluna] = 'X';

   //verifica se a posição é valida 

  if (linha < 0 || linha > 2 ||
coluna < 0 || coluna > 2) { 

 printf ("n\Posicao invalida! 
Tente novamente. \n");
      Continue;
}

 //Verifica se a posição esta ocupada

  if (tabuleiro [linha][coluna]


  printf ("\n");

  printf(" %c | %c | %c\n",
tabuleiro[0][0]
tabuleiro[0][0]
tabuleiro[0][2] );

  printf("---+---+---\n");
  printf(" %c | %c | %c\n",
tabuleiro[1][0] 
tabuleiro[1][1]
tabuleiro[1][2] );  

    printf("---+---+---\n");
  printf(" %c | %c | %c\n",
tabuleiro[2][0] 
tabuleiro[2][2]
tabuleiro[2][2] );

   return 0;

    //Troca jogador
   if (jogador == 'X') {
    jogador ='0';
 } else{ jogador'X';
}
    return 0;
 }
}
