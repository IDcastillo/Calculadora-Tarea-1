#include <iostream>
#include <stdio.h>
#include <conio.h>

int main()
{
   int val1, val2,opc, resultado;
   
     while(opc!=7)
     {
     	printf("*********************HOLA QUE TAL***************************\n");
     	printf("*********************BIENVENIDO A LA***************************\n");
     	printf("*********************CALCULADORA DE ISRAEL***************************\n");
     	printf("*********************¿QUE OPERACION DESEAS HACER?***************************\n");
     	printf("1.-Suma\n");
     	printf("2.-Resta\n");
     	printf("3.-Multiplicacion\n");
     	printf("4.-Divicion\n");
     	printf("Z/z.-Salir\n");
     	printf("Selecciona una opcion\n");
     	scanf("%d", &opc);
     	
     	if(opc!=7)
     	{
     		printf("Dame el primer valor");
     		scanf("%d", &val1);
     		printf("Dame el segundo valor");
     		scanf("%d", &val2);
		 }
		 switch(opc)
		 {
		 	
		 	case 1:
		 		  resultado= val1+val2;
		 		  printf("el resultado de la suma es %d \n",resultado);
		 		  break;
		 		  
		 	case 2:
		 		  resultado= val1-val2;
		 		  printf("el resultado de la resta es %d \n",resultado);
		 		  break;
				   	  
		 	case 3:
		 		  resultado= val1*val2;
		 		  printf("el resultado de la multiplicacion es %d \n",resultado);
		 		  break;
				   	  
		 	case 4:
		 		  resultado= val1/val2;
		 		  printf("el resultado de la division es %d \n",resultado);
		 		  break;
		 		  
		 	case 5:
		 		  break;	  		 		  
		 } 
	 }	 	
}




