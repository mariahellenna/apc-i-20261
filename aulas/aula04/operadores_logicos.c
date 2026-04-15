#include  <stdio.h>

 int main(){
  int idade;


  printf("Entre com a sua idade:");
  scanf("%i", &idade);
  while (getchar() != '\n');

  printf("Voce eh uma crianca?%i\n", idade >= 0 && idade <= 12);
  // && => 0 False E qualquer coisa = Sempre falso
  printf("Voce tem prioridade para vacinar? %i\n", idade <=6 || idade >= 60);
  // || => 1 Verdadeiro Ou qualquer coisa= Sempre verdadeiro 
    

  // ! => NAO verdadeiro= Falso, NAO falso= verdadeiro

  printf("Voce naum pode votar? %i\n", !(idade >= 16));


  



    return 0;
 }