
#include<stdio.h>//Libreria de E/S
/*
*/
int main() 
{ 
int a,b,i,VM,vm; //VM=VAlor Mayor, vm=Valor Menor 

printf("\nCuantos Numeros quieres:"); 
scanf("%d",&a); 
for(i=0; i<a; i++){ 

printf("Dame un numero : "); 
scanf("%d",&b); 

if(i==0){ 

VM = b;//El primer numero es tanto el menor como el mayor 
vm = b;//El primer numero es tanto el menor como el mayor 

} else { 

if(b>VM) 
VM=b; 
if(b<vm) 
vm=b; 
} 

} 
printf("\n El numero mayor es : %d",VM); 
printf("\n El numero menor es : %d",vm); 
}
