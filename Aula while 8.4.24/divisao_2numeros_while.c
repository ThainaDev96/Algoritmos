/*Ler 2 numeros e calcular a divisao entre os dois numeros lidos.Para realizar a operacao o segundo numero não pode ser zero---valide a entrada de dados*/

#include<stdio.h>
int main (void)
{

	double nro1,nro2, divisao;
	
	printf("Informe o nro1: ");
	scanf("%lf", &nro1);
	
	printf("Informe o nro2: ");
	scanf("%lf", &nro2);
	
	while(nro2==0)
    {
	
	printf("erro");
	printf("informe um nro diferente de zero");
	scanf("%lf", &nro2);
	}
	divisao=nro1/nro2;
	
	printf("a divisao eh : %lf", divisao);
	
}
	
	
	
	
	
	
	
	
	
	
