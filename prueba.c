#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>


void printASCII()
{
	printf("ASCII \n");
	int i;
	for (i=1; i<= 32; i++)
	{
		printf("%d=%c \t \t %d=%c \t \t %d=%c \t \t %d=%c \t \t %d=%c \t \t %d=%c \t \t %d=%c \t \t %d=%c \t \t %d=%c \t \t \n", i,i,i+32,i+32,i+64,i+64,i+96,i+96,i+124,i+124,i+156,i+156,i+188,i+188,i+210,i+210,i+242,i+242); 		
	}
}

void printASCII2()
{
	printf("Ingrese la cantidad de columnas deseadas \n");
	int num = 4;
	int filas = 256/num;
	int col = num;
	int i;
	int e;
	int ip=1;
	for (i=1; i<=64;i++)
	{
		if (ip>256)
			break;
		for (e=1;e<=4;e++)
		{
			printf ("%d=%c \t",ip,ip);
			ip=ip+64;
		}
		printf("\n");
		e=0;
	}
}

void arreglo()
{
	char *line = NULL;
	size_t len=0;
	ssize_t read =0;

	puts("Ingrese su texto");
	read = getline(&line, &len, stdin);
	printf("linea = %s", line);
	printf("largo de linea= %zu\n", read-1);
	puts("");

	char arreglo[100]; //arreglo es un arreglo de 100 espacios
	strcpy(arreglo, line); //strcpy guarda el string char por char en el arreglo
	//printf("%s\n", arreglo); //Imprime el arreglo
	//printf("arreglo[%d] = %c\n", 1, arreglo[1]); //prueba de posiciones
	int pos;
	printf("Ingrese el numero de posicion a buscar: ");
	scanf("%d", &pos);  //guarda el numero en pos
	printf("numero ingresado %d\n", pos); //prueba
	while (pos>len)
	{
		printf("Esa posicion se encuentra vacia. Intente nuevamente");
		printf("Ingrese el numero de posicion a buscar: ");
		scanf("%d", &pos);  //guarda el numero en pos
		printf("numero ingresado %d\n", pos); //prueba
	}
	printf("\n\nCaracter: %c\n Digito : %d\n Direccion de memoria del arreglo: %d\n Direccion de memoria de la casilla %d\n", arreglo[pos], arreglo[pos], &arreglo, &arreglo[pos]);
}

void matriz()
{
	char matriz[10][10];
	char *line = NULL;
	size_t len=0;
	ssize_t read =0;

	int row, column=0;

	for (row=0; row<10; row++)
     	{
        	for(column=0; column<10; column++)
        	{
			matriz[row][column]=0;
		}
     	}
	//lee el texto
	puts("Ingrese su texto");
	read = getline(&line, &len, stdin);
	printf("linea = %s", line);
	printf("largo de linea= %zu\n", read-1);
	puts("");

	strcpy(matriz, line); //imprime los caracteres en el arreglo 

	row, column = 0;

    	for (row=0; row<10; row++)
     	{
        	for(column=0; column<10; column++)
        	{
			printf("%c ", matriz[row][column]);
		}
          	printf("\n");
     	}

	int pos;
	int pos2;
	printf("Ingrese el numero de columna a buscar: ");
	scanf("%d", &pos);  //guarda el numero en pos
	printf("Ingrese el numero de fila a buscar: ");
	scanf("%d", &pos2);  //guarda el numero en pos
	printf("fila %d\ncolumna %d\n", pos2, pos); //prueba
	while (matriz[pos][pos2]==0)
	{
		printf("Esa posicion se encuentra vacia. Intente nuevamente");
		printf("Ingrese el numero de columna a buscar: ");
		scanf("%d", &pos);  //guarda el numero en pos
		printf("Ingrese el numero de fila a buscar: ");
		scanf("%d", &pos2);  //guarda el numero en pos
		printf("fila %d\n columna %d\n", pos2, pos); //prueba
	}
	printf("\n\nCaracter: %c\nDigito : %d\nDireccion de memoria de la matriz: %d\nDireccion de memoria de la casilla %d\n", matriz[pos][pos2], matriz[pos][pos2], &matriz, &matriz[pos][pos2]);

}

int main()
{
	//printASCII();
	//printASCII2();
	//arreglo();
	matriz();
	return 0;
}
