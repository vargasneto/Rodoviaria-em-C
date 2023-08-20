#include <stdio.h>
#include <stdlib.h>
#include "multi.h"

int main()
{

FILE *file;

struct dados
{

   int ped;
   float pas;
   int q;
   char cid [30];
   char ced [30];
   float v;
   float s;
   float c;
   int ac;
   int it;
   char salv[100];

};

char senha[20]="skywalker";  /////***/////////////////////////////////////////////// SENHA PARA ACESSAR A OPÇÃO 2 ////////////////////////////////////////////////////////// ****************

char se[20];

int y=0;

struct dados d;

        file=fopen("extrato.txt","a");

if(file==NULL)
{
 printf("erro");
 return 1;
}
do{
        printf("                                      Bem vindo a rodoviaria Dois Irmaos!\n\n");

        printf("\t(1) -Realizar uma compra");
        printf("\t(2) -Ver o Extrato do dia(Somente a administracao)*");
       printf("\t(3)-Encerrar o Programa");

        printf("\n*");
        scanf("%d",&d.it);
if(d.it==3) {
    printf("G O O D B Y E\n");
}

        switch (d.it){
    case 1:
        printf("\n");
fgets(d.cid,30,stdin);

printf("\n\nDigite a Cidade que e ponto de partida: ");
fgets(d.cid,30,stdin);

printf("\n\nDigite a Cidade que Deseja chegar: ");
fgets(d.ced,30,stdin);

printf("\n\nQuantas passagem voce deseja?: ");
scanf("%d",&d.q);

printf("\n\n **************  Separe o real de centavos com ' . '*********\n");
printf("\n\nValor da Passagem:R$ ");
scanf ("%f",&d.v);

printf("\n\n******  Coloque '  .  ' para separar horas e minutos****");

printf("\n\nHorario de saida: ");
scanf("%f",&d.s);

if(d.s>24) {
        printf("\nFORMADO ERRADO!!!! Digite Novamente\n");
    printf("\n\nHorario de saida : ");
scanf("%f",&d.s);

}

printf("\n\nHorario de chegada: ");

scanf("%f",&d.c);

if(d.c>24)
{
    printf("\nFORMADO ERRADO!!!! Digite Novamente\n");
    printf("\n\nHorario de saida: ");
scanf("%f",&d.c);
}


system("cls");
printf("\n\nSeu pedido: \n");



d.pas= mp(d.q,d.v);

printf("\n\Partida: %s",d.cid );

printf("\n\Destino: %s",d.ced );

printf("\n\nSaida Prevista: %.2f",d.s);

printf("\n\nChegada Prevista: %.2f",d.c);

printf("\n\nValor a pagar:R$ %.2f",d.pas);

printf("\n\n\nConfirma a compra? \n\n1-Confirma\n\n2-Cancelar\n\n*");
scanf("%d",&d.ped);




if(d.ped==1)
{
printf("\n\nCOMPRA EFEITUADA!!!\n\n");

fprintf(file,"\nPartida- %s\n",d.cid);
fprintf(file,"Destino- %s ",d.ced);
fprintf(file,"\nSaida- %.2f\n",d.s);
fprintf(file,"\nChegada- %.2f\n",d.c);
fprintf(file,"\nQuantidade de passagens- %d\n",d.q);
fprintf(file,"\nValor pago- R$ %.2f\n\n\n",d.pas);
fclose(file);

}
else printf("Retornando para tela inicial\n\n");
system ("pause");
system("cls");

 break;

    case 2:
        printf("Aguarde...\n");
        fgets(d.cid,20,stdin);
        printf("\nDigite a senha: ");
        fgets(se,20,stdin);

y=strncmp(senha,se,9);

        if (y==0) {
        printf("\n\nAutorizado!");



        printf("**********************************************************************************************************************************#########################################################################################################\n\n");
file =fopen("extrato.txt","r");

while(fgets(d.salv,100,file)!=NULL) {
    printf("%s",d.salv);
}

    fclose(file);
system ("pause");
system("cls");
        }
        else printf("!!!!! Senha incorreta. Voltando a tela inicial\n\n" );
        system ("pause");

        system ("cls");
break;

}


}while (d.it!=3);




   return(0);
}
