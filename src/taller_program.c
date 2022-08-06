/************************************************************
*Fecha: 05-agosto-2022
*Autor: Edna Sofia Orjuela Puentes
*Materia: Computación Paralela y Distribiuida
*Tema: Introducción Lenguaje de Programación C
*Tópico: (SOURCE)-Primer Taller C
************************************************************/
       
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


/*1.- Escribe un programa en C que acepte dos enteros del usuario y calcule el producto de los
	dos enteros.
	Datos de prueba :
	Introduzca el primer entero: 25
	Introduzca el segundo entero: 15
	Salida esperada:
	Producto de los dos enteros anteriores = 375*/
void producto_enteros () {

	int num1, num2;
	printf("Digite el primer número entero: ");
	scanf("%d", &num1);
	printf("Digite el segundo número entero: ");
	scanf("%d", &num2);
	printf("\nEl producto de los dos enteros digitado es: %d", num1*num2);	
	
}


/*2.- Escribe un programa en C para convertir los días especificados en años, semanas y días.
	Nota: Ignore el año bisiesto.
	Datos de prueba :
	Número de días : 1329
	Salida esperada :
	Años: 3
	Semanas 33
	Días: 3*/
void conversion_dias(){

	int  num_dias=0, dias=0, anios=0, semanas=0;
	printf("Digite el número de dìas: ");
	scanf("%d", &num_dias);
	
	anios=num_dias-(num_dias%365);
	semanas=(num_dias- anios)-(num_dias-anios)%7;
	dias=num_dias-semanas-anios;
	anios=anios/365;
	semanas=semanas/7;
	
	printf("El número de días digitado anteriormente, equivalen a: ");
	printf("\nAños:  %d", anios);
	printf("\nSemanas:  %d", semanas);	
	printf("\nDias:  %d", dias);		
	
}


/*3.- Escribe un programa en C para calcular la distancia entre los dos puntos.
	Datos de prueba :
	Entrada x1: 25
	Entrada y1: 15
	Entrada x2: 35
	Entrada y2: 10
	Resultado esperado:
	Distancia entre dichos puntos: 11.1803*/
void distancia_puntos(){

	float x1, y1, x2, y2, distancia=0;
	printf("Digite x1:  ");
	scanf("%f", &x1);
	printf("Digite y1:  ");
	scanf("%f", &y1);
	printf("Digite x2:  ");
	scanf("%f", &x2);
	printf("Digite y2:  ");
	scanf("%f", &y2);
	
	distancia=sqrt(  pow ( (x2-x1),2) + pow ( (y2-y1),2)    );
	printf("\nLa distancia entre dichos puntos es:  %f", distancia );
	

}


/*4.- Escribe un programa en C para mostrar los 10 primeros números naturales.
	Salida esperada :
	1 2 3 4 5 6 7 8 9 10*/
void numeros_naturales(){

	for (int i=1; i<=10;i++){
		printf("%d ",i);
	}
}


/*5.- Escribe un programa en C para mostrar el patrón como triángulo rectángulo usando un
	asterisco. La cantidad de líneas del triangulo es ingresada por consola por el usuario, y el valor
	máximo de líneas es de 14.
	El patrón como :
	*
	**
	***
	**** */
void triangulo_rectangular(){

	int lineas=0;
	printf("Digite el número de filas que va a tener el triángulo ( máximo 14):  ");
	scanf("%d", &lineas);
	
	if(lineas>14){
		printf("Error, se excede de las 14 filas  ");
	}else{
		for(int i=1; i<=lineas;i++){
			for(int j=1; j<=i;j++){
				printf("*");
			}
			printf("\n");
		}
	}
}


/*6.- Escribe un programa que imprima una matriz de “1”, de tamaño NxN. El tamaño es
indicado por el usuario y debe ser siempre menor que 8.*/
void matriz_unos(){

	int n=0;
	printf("Digite el valor de n, tamaño de la matriz ( máximo 8x8):  ");
	scanf("%d", &n);
	
	if(n>8){
		printf("Error, se excede el tamaño de la matriz  ");
	}else{
		for(int i=1; i<=n;i++){
			for(int j=1; j<=n;j++){
				printf("  1 ");
			}
			printf("\n");
		}
	}
	

}


/*7.- Escribe un programa que imprima una matriz de números aleatorios enteros, entre 0 y 9, de
de tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8.*/
void matriz_aleatoria(){

	int n=0;
	printf("Digite el valor de n, tamaño de la matriz ( máximo 8x8):  ");
	scanf("%d", &n);
	
	if(n>8){
		printf("Error, se excede el tamaño de la matriz  ");
	}else{
		for(int i=1; i<=n;i++){
			for(int j=1; j<=n;j++){
				printf( "%d  ",rand()%10);
			}
			printf("\n");
		}
	}
}


/*8.- Escribe un programa que muestre dos matrices de números aleatorios, entre 0 y 9, de
tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8.
Finalmente, se presenta la suma de las dos matrices.*/
void suma_matrices(){


	int n;
	printf("Digite el valor de n, tamaño de la matriz ( máximo 8x8):  ");
	scanf("%d", &n);
	
	if(n>8){
		printf("Error, se excede el tamaño de la matriz  ");
	}else{
		 int matriz_1[n][n],matriz_2[n][n], resultado[n][n];
		for(int i=1; i<=n;i++){
			for(int j=1; j<=n;j++){
				matriz_1[i][j]=rand()%10;
				printf( "%i  ",matriz_1[i][j]);
			}
			printf("\n");
		}
		
		printf("\n");
		
		for(int i=1; i<=n;i++){
			for(int j=1; j<=n;j++){
				matriz_2[i][j]=rand()%10;
				printf( "%i  ",matriz_2[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		for(int i=1; i<=n;i++){
			for(int j=1; j<=n;j++){
				resultado[i][j]=matriz_1[i][j]+matriz_2[i][j];
				printf( "%i    ",resultado[i][j]);
			}
			printf("\n");
		}
	}
	
}


/*9.- Escribe un programa que muestre dos matrices de números aleatorios, entre 0 y 9, de
tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8.
Finalmente, se presenta la resta de las dos matrices.*/
void resta_matrices(){

	
	int n;
	printf("Digite el valor de n, tamaño de la matriz ( máximo 8x8):  ");
	scanf("%d", &n);
	
	if(n>8){
		printf("Error, se excede el tamaño de la matriz  ");
	}else{
		 int matriz_1[n][n],matriz_2[n][n], resultado[n][n];
		for(int i=1; i<=n;i++){
			for(int j=1; j<=n;j++){
				matriz_1[i][j]=rand()%10;
				printf( "%i  ",matriz_1[i][j]);
			}
			printf("\n");
		}
		
		printf("\n");
		
		for(int i=1; i<=n;i++){
			for(int j=1; j<=n;j++){
				matriz_2[i][j]=rand()%10;
				printf( "%i  ",matriz_2[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		for(int i=1; i<=n;i++){
			for(int j=1; j<=n;j++){
				resultado[i][j]=matriz_1[i][j]-matriz_2[i][j];
				printf( "%i    ",resultado[i][j]);
			}
			printf("\n");
		}
	}
}


/*10.- Escribe un programa que muestre dos matrices de números aleatorios, entre 0 y 9, de
tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8.
Finalmente, se presenta el producto de las dos matrices.*/
void producto_matrices(){

	
	int n;
	printf("Digite el valor de n, tamaño de la matriz ( máximo 8x8):  ");
	scanf("%d", &n);
	
	if(n>8){
		printf("Error, se excede el tamaño de la matriz  ");
	}else{
		 int matriz_1[n][n],matriz_2[n][n], resultado[n][n];
		for(int i=1; i<=n;i++){
			for(int j=1; j<=n;j++){
				matriz_1[i][j]=rand()%10;
				printf( "%i  ",matriz_1[i][j]);
			}
			printf("\n");
		}
		
		printf("\n");
		
		for(int i=1; i<=n;i++){
			for(int j=1; j<=n;j++){
				matriz_2[i][j]=rand()%10;
				printf( "%i  ",matriz_2[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		for(int i=1; i<=n;i++){
			for(int j=1; j<=n;j++){
				int suma=0;
				for(int k=1; k<=n;k++){
					suma+=matriz_1[i][k]*matriz_2[k][j];
					
				}
				resultado[i][j]=suma;
				printf( "%i ",resultado[i][j]);
			}
			printf("\n");
		}
	}
}


void menu () {

	int opcion;
  	
        printf("============================================================================\n");
	printf ("      -                           Menú principal                       -    \n" );
	printf("============================================================================\n");
	printf("A continuación, se encuentran diez ejericicios en lenguaje de programación C. \n\n");
printf("============================================================================\n");
	do {
		printf("\n\n============================================================================");
				
		printf("Para ver algun ejercicio, por favor digite su respectivo número\n\n\n");
		printf("1.  Producto de dos enteros \n");
		printf("2.  Conversión de días \n");
		printf("3.  Distancia entre dos puntos \n");
		printf("4.  Números naturales \n");
		printf("5.  Triángulo rectángular\n");
		printf("6.  Matriz de unos \n");
		printf("7.  Matriz aleatoria \n");
		printf("8.  Suma de matrices\n");
		printf("9.  Resta de matrices \n");
		printf("10. Producto de matrices\n");
		printf("11. Salir\n\n");

		scanf("%d", &opcion);
		
		switch ( opcion ){
			case 1:  
				producto_enteros();
				break;
			case 2:
				conversion_dias();
				break;
			case 3:
				distancia_puntos();
				break;
			case 4:
				numeros_naturales();
				break;
			case 5:
				triangulo_rectangular();
				break;
			case 6: 
				matriz_unos();
				break;
			case 7:
				matriz_aleatoria();
				break;
			case 8: 
				suma_matrices();
				break;
			case 9:
				resta_matrices();
				break;
			case 10:
				producto_matrices();
				break;
			}
        } while (opcion!=11); 
        
}


int main() {
	menu();
	
	return 0;
}




