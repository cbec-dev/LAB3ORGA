#include <stdio.h>
#include <string.h>
#include <stdlib.h> // For exit() function


long decToBin(long n)
{
  long c, k;
 
  printf("%d in binary number system is:\n", n);
 
  for (c = 31; c >= 0; c--)
  {
    k = n >> c;
 
    if (k & 1)
      printf("1");
    else
      printf("0");
  }
 
  printf("\n");
 
  return 0;
}




int main()
{
	char c[1000];			//Variable auxiliar
    FILE *fptr;				//puntero al archivo de entrada	
	char inputFile[30];		//nombre archivo de entrada	
	char outputFile1[30];	//nombre archivo de salida 1
	char outputFile2[30];	//nombre archivo de salida 2
	
/* 	printf("Bienvenido, por favor ingrese el nombre de su archivo de entrada (incluyendo extensión):\n"); // PANTALLA DE BIENVENIDA E INGRESO DE ARCHIVO DE ENTRADA
	scanf("%s", inputFile);
	
	while ((fptr = fopen(inputFile, "r")) == NULL)														 // CAPTURA DE ERRORES EN CASO DE NOMBRES DE ARCHIVO CONFLICTIVOS ENTRE SI O INEXISTENTES.
    {
        printf("ERROR: El archivo no existe, por favor ingrese otro archivo:\n");
		scanf("%s", inputFile);
    } */
	
	decToBin(3);


	
	
}