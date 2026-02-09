/*Ler a altura de um grupo de inviduos.Mostrar a maior e a menor altura do grupo*/

#include<stdio.h>
int main (void)
{

	float altura=0,alturaMaior=0,alturaMenor=99999;
	
	
	printf("Informe a sua altura ou zero ou numero negativo para encerrar: ");
	scanf("%f", &altura);
	
	
    while(altura!=0)
    {
    	
		
		if(altura>alturaMaior){
			alturaMaior=altura;
	    }
	    
	    if(altura<alturaMenor){
			alturaMenor=altura;
	    }
	
		printf("Informe a sua altura ou zero para encerrar: ");
		scanf("%f", &altura);
	
	}//fim do comando while
	
	printf("A maior altura eh:%f e a menor %f",alturaMaior,alturaMenor);
	printf("Informe a sua altura: ");
	
}



