/*Ler o salario de 10 individuos e mostrar a media dos salarios*/

#include<stdio.h>
int main (void)
{

	float salario,media,soma=0;
	int cont;
	
	for(cont=0; cont<10; cont++)
	{
	
    
    printf("Informe o salario: ");
	scanf("%f", &salario);
	
	soma+=salario;//soma=soma+salario;
	}
	media=soma/10;
	
	printf("a media salarial eh : %f",media);
}



	
	
	    
