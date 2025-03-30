#include <stdio.h>

int main(){
int populacao;
int turismo;
float PIB;
float Area;
char estado[20];
char cidade[10];
char carta[05];



printf("Digite sua populacao: \n");
scanf("%i,&populacao");

printf("Digite o turismo: \n");
scanf("%i,&turismo");

printf("Digite seu PIB: \n");
scanf("%f,&PIB");

printf("Digite sua Area: \n");
scanf("%f,&Area");

printf("Digite sua Cidade: \n");
scanf("%s,&Cidade");

printf("Digite seu Estado: \n");
scanf("%s,&Estado");

printf("Digite sua carta: \n");
scanf("%s,&carta");

printf("Nome do Estado:%s-Cidade:%s-carta: %i \n,Estado,Cidade,carta");
printf("PIB:%d-Area:%d \n,PIB,Area");

return 0;
}