#include <stdio.h>//Libreria de E/S
/*
*/

char cad1[20] = "\0"; 
char sub2[20]="\0"; 
char cade[20]="\0";
int Ab=0;
int Ba=0;
int fi=0;
int ne; 
int wi; 
int g; 
int i;

int main()
{
	
	printf("escribe una palabra:\n ");
	scanf("%s",cad1);
	for(Ab=0; cad1[Ab] != '\0';Ab++)
	
	{ 
		
	}
	
	printf("escribe la palabra a buscar:\n ");
	scanf("%s",sub2);
	for(Ba = 0; sub2[Ba] != '\0'; Ba++)
	
	{
		 
	}
	
	printf("escribe la palabra a cambiar:\n ");
	scanf("%s",cade);
	if(Ba <= Ab)
	
	{ 
		while(i <= Ab)
		{
		 i++;
			if(cad1[i] == sub2[fi] && sub2[fi] != '\0')
			{
				fi++;
				ne=i;
			}
			else
			{
				if(cad1[i] != '\0' && sub2[fi] != '\0')
				{
					fi = 0;
				}
			}
		}
		
		if( fi == Ba)
		{ 
			printf("\nSubcadena %s encontrada",sub2);
			
			wi = ne + 1 - Ba;
			
			g=0;
			
			
			for( i = wi; i <= ne; i++)
			{
				cad1[i] = cade[g];
				
				g++;
			}
			
			printf("\n palabra nueva: %s",cad1);
		}
		else
		{ 
			printf("\n No existe la subcadena");
		}
	}
	else
	{ 
		printf("Error, %s no puede ser subcadena de %s", sub2, cad1);
	}
}

