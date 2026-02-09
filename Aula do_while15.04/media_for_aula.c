/*Escrever um programa que le 10 numeros. Mostrar a media dos impares*/

#include<stdio.h>
int main (void)
{
	int nro,cont=0;
	int quantidade=0;//variavel contadora 
	int soma=0;//variavel acumuladora
	float media;//variavel de saida
	
	for (cont =0; cont <10; cont++) {
        printf("Informe os numeros: ");
        scanf("%d",&nro);
        
        if (nro % 2 ==1){//(nro%2!=0)
		soma=nro+soma;//soma+=nro
		 quantidade++;//quantidade=quantidade+1
		}
        
		}//fim do for
		
		if(quantidade!=0)
		{
		
		media=(double)soma/quantidade;
		printf("a media dos impares eh %lf", media);
		}
}
	
	
	
	
	
	
	
