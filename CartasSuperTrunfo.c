#include <stdio.h>

int main(){

printf("desafio cartas!\n");

char Estado[10];
char Codigo [5];
char Cidade [20];
int Populacao;
float Area;
float Pib;
int pontosturisticos;

printf("digite seu estado: \n");
scanf("%s", &Estado);

printf("Codigo: \n");
scanf("%s", &Codigo);

printf("Nome Da Cidade: \n");
scanf("%s", &Cidade);

printf("Total De Habitantes: \n" );
scanf ("%d", &Populacao);

printf("Area: \n");
scanf("%d", &Area);

printf("Pib: \n");
scanf("%d", &Pib);

printf("Quantidade De Pontos Turisticos: \n");
scanf("%d", &pontosturisticos);

return 0;

}
