/*Ler a altura de um grupo de inviduos.Mostrar a maior e a menor altura do grupo*/

#include<stdio.h>
int main (void)
{
	char resposta;
	float altura=0,alturaMaior=0,alturaMenor=99999;
	
	
	printf("deseja iniciar?S--iniciar N--encerrar: ");
	scanf("%c", &resposta);
	
	
    while(resposta=='S')
    {
    	printf("Informe a sua altura: ");
		scanf("%f", &altura);
	
		
		if(altura>alturaMaior){
			alturaMaior=altura;
	    }
	    
	    if(altura<alturaMenor){
			alturaMenor=altura;
	    }
		fflush(stdin);
		
		printf("Deseja continuar? S--N: ");
		scanf("%c", &resposta);
	
	}//fim do comando while
	
	printf("A maior altura eh:%f e a menor %f",alturaMaior,alturaMenor);
	
	
}


