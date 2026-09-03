#include <studio. h>

int main() {

char tabuleiro[3][3] = {
    {' '.' '.' '.},
    {' '.' '.' '.},
    {' '.' '.' '.}
};

int linha;
int coluna;

  printf("Escolha uma linha (0, 1 ou 2): ");
    scanf("%d", &linha);

  printf("Escolha uma coluna (0, 1 ou 2): ");
    scanf("%d", &coluna);

  tabuleiro [linha][coluna] = 'X';

  printf ("\n");

  printf(" %c | %c | %c\n",
tabuleiro[0][0] tabuleiro[0][0]
tabuleiro[0][2] );
  printf("---+---+---\n");
  printf(" %c | %c | %c\n",
tabuleiro[1][0] tabuleiro[1][1]
tabuleiro[1][2] );    
    printf("---+---+---\n");
  printf(" %c | %c | %c\n",
tabuleiro[2][0] tabuleiro[2][2]
tabuleiro[2][2] );

   return 0;

}
