#include <studio. h>

int verificarVitoria(char 
tabuleiro [3][3], char jogador) {

     //Linhas
for (int i = 0; i < 3; i++) {
     if (tabuleiro [i][0] ==
jogador &&
     if (tabuleiro [i][1] ==
jogador &&
     if (tabuleiro [i][2] ==
jogador) {

       return 1;
  }
}
    //Colunas
     if (tabuleiro [0][i] ==
jogador &&
     if (tabuleiro [1][i] ==
jogador &&
     if (tabuleiro [2][i] ==
jogador) {

       return 1;
 }
     //Diagonal principal 
     if (tabuleiro [0][0] ==
jogador &&
     if (tabuleiro [1][1] ==
jogador &&
     if (tabuleiro [2][2] ==
jogador) {

       return 1;
}

     //Diagonal secundária
     if (tabuleiro [0][2] ==
jogador &&
     if (tabuleiro [1][1] ==
jogador &&
     if (tabuleiro [2][0] ==
jogador) {

       return 1;
}
      return 0;
}

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

   //verifica posição  

  if (linha < 0 || linha > 2 ||
coluna < 0 || coluna > 2) { 

 printf ("n\Posicao invalida! 
Tente novamente. \n");
      Continue;
}

 //Verifica se a posição esta ocupada

  if (tabuleiro [linha][coluna] 
!= ' '){ 

 printf ("n\Posicao está ocupada! 
. \n");
      Continue;
}
     //Coloca a peça 
tabuleiro[linha][coluna] = jogador;


   // mostra o tabuleiro
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


//Verifica a vitória
if (verificarVitoria(tabuleiro, jogador))
{ 

  printf("\n====================
=============\n")

  printf("\n JOGADOR %c VENCEU!!!\n",
jogador);

  printf("\n====================
=============\n")
          
       break;
}

    //Toca de jogador
    if (jogador== 'X'){
       jogador =0
   return 0;

    //Troca jogador
   if (jogador == 'X') {
    jogador ='0';
 } else{ jogador'X';
}
}
    return 0;
 }
}
