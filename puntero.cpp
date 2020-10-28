#include<stdio.h>
int main(){
	char cad1[20],cad2[20];
	char *ptr1,*ptr2;
	int i,j;
	printf("\n Ingresa cadena de mas de 9 caracteres\n");
	printf("Ingresa cadena 1: \n");
	gets(cad1);
	printf("Ingresa cadena 2: \n");
	gets(cad2);
	
	for(ptr1=cad1;*ptr1=='\o';ptr1=ptr1+1){	
	for(ptr2=cad2;*ptr2=='\o';ptr1=ptr1+1,ptr2=ptr2+1)
	*ptr1=*ptr2;
}
	*ptr1='\o';
	printf("\n la cadena 1 es %s",cad1);
	printf("\n la cadena 2 es %s",cad2);
	return 0;
}

