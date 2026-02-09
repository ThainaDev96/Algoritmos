/*Escrever um programa que le dois numeros e calcula a divisao do primeiro pelo segundo,lembre-seque divisao por zero não existe,
portanto a entrada de dados do segundo número deve ser validada*/

#include<stdio.h>
int main (void)
{

	int nro1,nro2;
	double divisao;
	printf("Informe o nro1 ou zero para encerrar: ");
	scanf("%d",&nro1);
	do
	{
	printf("Informe o nro2 ou zero para encerrar: ");
	scanf("%d",&nro2);

	
	}while(nro2==0);
	
	divisao=(double)nro1/nro2;
	printf("divisao %f",divisao);
}
