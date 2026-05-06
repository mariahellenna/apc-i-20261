#include <stdio.h>

int main(){   

int nota= 0;
printf("Entre com uma nota de 1 a 5: ");
scanf("%i", &nota);


// if (nota == 1){

//pntf("riGanhou umae strela *\n");

 //} else if (nota == 2){
//printf("Ganhou duas estrelas **\n");

//} else if (nota == 3){
//printf("Ganhou tres estrelas ***\n");

 //} else if (nota == 4){
//printf("Ganhou quatro estrelas ****\n");

//} else if (nota == 5){
    //("Ganhou cinco estrelas *****\n");
//} else {
//printf("Nota invalida!  Tente de novo.\n");
// }


 switch (nota) {
    case 1: printf("Ganhou uma estrela! *\n"); break;
    case 2: printf("Ganhou duas estrelas! **\n"); break;
    case 3: printf("Ganhou tres estrelas! ***\n"); break;
    case 4: printf("Ganhou 4 estrelas! ****\n"); break;
    case 5: printf("Ganhou 5 estrelas! *****\n"); break;
    default : printf("Nota Invalida! Tente de novo.\n");
 }
    return 0;
}