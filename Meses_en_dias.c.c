#include <stdio.h>


int mes;
int mes2;



int main()
{
	printf("Programa que calcula el numero de dias que hay en dos mes\n");
	printf("Enero:1\nFebrero:2\nMarzo:3\nAbril:4\nMayo:5\nJunio:6\nJulio:7\nAgosto:8\nSeptiembre:9\nOctubre:10\nNoviembre:11\nDiciembre:12\n");
	printf("Escriba el numero del mes:\n");
	scanf("%d", & mes);
	printf("Escriba el numero del segundo mes:\n");
	scanf("%d", & mes2);
if(mes>=13){
	mes2=0;
	printf("\nNO SE PUEDE REALIZAR LA SUMA");
}
else{
	if(mes2>=13){
		mes=0;
		printf("\nNO SE PUEDE REALIZAR LA SUMA\n");
		
	}
switch(mes){
 
 	 case 1:{	
 	 		mes=31;
 	 		
 	 		break;
 	 	} 
 	case 2:{
 			mes=28;
 			
 			break;
 		}
 	case 3:
 		{
 			mes=31;
 			
 			break;
 		}
	case 4:
 		{
 			mes=30;
 			
 			break;
 		}
 	case 5:
 		{
 			mes=31;
 			
 			break;
 		}
 	case 6:{
 			mes=30;
 			
 			break;
 		}
 	case 7:{
 			mes=31;
 			
 			break;
 		}
 	case 8:
 		{
 			mes=31;
 			
 			break;
 		}
 	case 9:
 		{
 			mes=30;
 			
 			break;
 		}
 	case 10:
 		{
 			mes=31;
 			
 			break;
 		}
 	case 11:
 		{
 			mes=30;
 			
 			break;
 		}
 	case 12:
 		{
 			mes=31;
			
 			break;
 		}
 	default: 
 	{
 		printf("No es un mes\n");
 		break;
 	}	
	
	

	


}



switch(mes2){
 
 	 case 1:{	
 	 		mes2=31;
 	 		printf("La suma de los meses son:%d",mes+mes2);
 	 		break;
 	 	} 
 	case 2:{
 			mes2=28;
 			printf("La suma de los meses son:%d",mes+mes2);
 			break;
 		}
 	case 3:
 		{
 			mes2=31;
 			printf("La suma de los meses son:%d",mes+mes2);
 			break;
 		}
	case 4:
 		{
 			mes2=30;
 			printf("La suma de los meses son:%d",mes+mes2);
 			break;
 		}
 	case 5:
 		{
 			mes2=31;
 			printf("La suma de los meses son:%d",mes+mes2);
 			break;
 		}
 	case 6:{
 			mes2=30;
 			printf("La suma de los meses son:%d",mes+mes2);
 			break;
 		}
 	case 7:{
 			mes2=31;
 			printf("La suma de los meses son:%d",mes+mes2);
 			break;
 		}
 	case 8:
 		{
 			mes2=31;
 			printf("La suma de los meses son.%d",mes+mes2);
 			break;
 		}
 	case 9:
 		{
 			mes2=30;
 			printf("La suma de los meses son%d",mes+mes2);
 			break;
 		}
 	case 10:
 		{
 			mes2=31;
 			printf("La suma de los meses son:%d",mes+mes2);
 			break;
 		}
 	case 11:
 		{
 			mes2=30;
 			printf("La suma de los meses son:%d",mes+mes2);
 			break;
 		}
 	case 12:
 		{
 			mes2=31;
			printf("La suma de los meses son:%d",mes+mes2);
 			break;
 		}
 	default: 
 	{
 		printf("No es un mes");
 		break;
 		
 	}	
	
	

	


}


	
}

}


