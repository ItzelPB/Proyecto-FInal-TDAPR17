#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{

	FILE *Archivo;
	char *token;
	char linea[100];
	int cont=0;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 

typedef struct ty_libro
{
	char pregunta[41];
	char correcta[41];
	char opciona[41];
	char opcionb[41];
	char opcionc[41];
	char opciond[41];
	char puntuacion[41];
}NODO;

void main()
{
	FILE	*Archivo;
	char *token;;
	char linea[255];
	int i=0;
	NODO vLibro;
	
	//Abro el archivo en modo lectura
	Archivo=fopen("libro1.csv","rt");
	if(Archivo==NULL)
	{
		printf("No se pudo abrir el Archivo de Entrada.\n");
	}
		else
		{
			printf("El archivo se abrio correctamente.\n");
		}
	
	while (!feof(Archivo))
	{
		vLibro=malloc(sizeof(NODO));
		if(vLibro==NULL)
		{
			printf("no hay espacio");
		}
		fscanf(archivo, "%15[^,],%15[^,],%15[^,],%15[^,],%15[^,],%15[^,],%15[^;]\n", vLibro->pregunta, vLibro->correcta, vLibro, opciona, vLibro->opcionb, vLibro->opcionc, vLibro->opciond, vLibro->puntuacion);

	/*		
		fgets(linea,255,Archivo);
 		token = strtok(linea,",");
		strcpy(vLibro[i].pregunta,token);
		printf("%s\n", vLibro[i].pregunta);
		
		token = strtok(NULL,",");
		printf("%s\n", token);
		strcpy(vLibro[i].correcta,token);
		printf("%s\n", vLibro[i].pregunta);
	/*	
		token = strtok(NULL,";");
		strcpy(vLibro[i].opciona,token);
 
		token = strtok(NULL,";");
		strcpy(vLibro[i].opcionb,token); 

		token = strtok(NULL,";");
		strcpy(vLibro[i].opcionc,token); 

		token = strtok(NULL,";");
		strcpy(vLibro[i].opciond,token); 

		token = strtok(NULL,";");
		strcpy(vLibro[i].puntuacion,token); */
		i++;  
	}
	//Cierro el archivo
	fclose(Archivo);
	//Muestro parte del contenido para verificar el correcto
	for(i=0;i<2;i++)
	{
		printf("\nPregunta: %s",vLibro[i].pregunta);
		printf("\ncorrecta: %s",vLibro[i].correcta);;
		printf("\nopciona: %s",vLibro[i].opciona);;
		printf("\nOpcionb: %s",vLibro[i].opcionb);;
		
	}

}
	Archivo=fopen("libro.csv","rt");
	if(!Archivo==NULL)
	{
		printf("No existe");
	}
	else
	{
		printf("El archivo se leyo correctamente");
	}
	while(!feof(Archivo))
	{
		fgets(linea, 50, Archivo);
	}

	printf("%s", linea);
}