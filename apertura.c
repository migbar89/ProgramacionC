#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	FILE *fich;
	int contador=0;
	char c;
	fich=fopen("ejemplo.txt","w");
	if(fich==NULL)
	{
		perror("Error en la apertura del archivo");
		exit (0);
	}
	//Escribir un caracter
	while((c=getchar())!=EOF)
	{
		if(c=='\n')
			contador++;
		fputc(c,fich);
	}
	printf("Se agregaron %d Lineas", contador);
	
	//Leer un caracter
	
	
	return 0;


