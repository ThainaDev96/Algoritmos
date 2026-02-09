/*Ler o salario de 10 individuos e mostrar a media dos salarios*/

#include<stdio.h>
int main (void)
{

	float salario,media,soma=0;
	int contS=0;
	
	printf("Informe o salario ou nro negativo para encerrar: ");
	scanf("%f", &salario);
	
    while(salario>0)
    {
	
	soma+=salario;//soma=soma+salario;
	
	printf("Informe o salario ou nro negativo para encerrar: ");
	scanf("%f", &salario);
	
	}//fim do comando while
	
	if(contS!=0){
	
	media=soma/contS;
	
	printf("a media salarial eh : %f",media);
}
}





	
	
