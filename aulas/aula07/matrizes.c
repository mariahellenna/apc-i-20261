#include  <stdio.h>

int main(){
  int tabela [3][3];
  //      0  1  2
  //  0  |  |  |
  //  1  |  |  |


  for (int i = 0; i < 3; i++){ // percorre a linha
        for(int j = 0; j < 3; j++) { // percorre a coluna
       printf("Entre com a posicao[%i,%i]: ", i , j);
       scanf("%i", &tabela[i][j]);
    }
  }

  printf("A tabela ficou assim: \n");
  for (int i = 0; i < 3; i++); {
    for (int j = 0; j < 3; j++){
        printf("%i ", tabela[i][j]);
    }
  }
    return 0;
}