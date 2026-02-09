/*Ler o salario e a idade de 10 individuos e mostrar a media dos salarios dos individuos de idade entre 20 a 30 anos*/

#include<stdio.h>
int main (void)
{

	float salario,media,soma=0;
	int contS=0,idade;
	
	printf("Informe o salario ou nro negativo para encerrar: ");
	scanf("%f", &salario);
	
	
    while(salario>0)
    {
    	printf("Informe a idade: ");
		scanf("%d", &idade);
		
		if(idade>=20&&idade<30){
	
			soma+=salario;
			contS++;
	    }
		
		printf("Informe o salario ou nro negativo para encerrar: ");
		scanf("%f", &salario);
	
	}//fim do comando while
	
	if(contS!=0){
	
		media=soma/contS;
	
		printf("a media salarial eh : %f",media);
	}
}




