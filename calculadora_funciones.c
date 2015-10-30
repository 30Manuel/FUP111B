#include<stdio.h>//Libreria de E/S
/*
*/
int main()
{

int eleccion,operador1,operador2;

do
{

printf("CALCULADORA\n\n");
printf("1. Suma\n");
printf("2. Resta\n");
printf("3. Multiplicacion\n");
printf("4. Division\n");
printf("5. Salir\n\n");

scanf("%d",&eleccion);

switch(eleccion)
{
    case 1:
        printf("Introduce un numero: ");
        scanf("%d",&operador1);
        printf("Introduce otro numero: ");
        scanf("%d",&operador2);
        printf("Resultado: %d\n",operador1+operador2);
        break;

    case 2:
        printf("Introduce un numero: ");
        scanf("%d",&operador1);
        printf("Introduce otro numero: ");
        scanf("%d",&operador2);
        printf("Resultado: %d\n",operador1-operador2);
        break;

    case 3:
        printf("Introduce un numero: ");
        scanf("%d",&operador1);
        printf("Introduce otro numero: ");
        scanf("%d",&operador2);
        printf("Resultado: %d\n",operador1*operador2);
        break;

    case 4:
        printf("Introduce un numero: ");
        scanf("%d",&operador1);
        printf("Introduce otro numero: ");
        scanf("%d",&operador2);

        if(operador2==0)
        {
            printf("No se puede dividir entre 0, intentalo otra  vez...\n ");
        }
        else
        {
            printf("Resultado: %d\n",operador1/operador2);    
        }
        break;

    case 5:
        printf("Saliendo...\n\n");
}
system("PAUSE");
 
}while(!(eleccion==5));

} 




