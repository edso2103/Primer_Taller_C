/************************************************************
*Fecha: 05-agosto-2022
*Autor: Edna Sofia Orjuela Puentes
*Materia: Computación Paralela y Distribiuida
*Tema: Introducción Lenguaje de Programación C
*Tópico: (INTERFAZ)-Primer Taller C
************************************************************/
/*Las siguientes lineas son conocidas como pragmas que permite la ejecución directa del compilador*/
#ifndef TALLER_LIB_H_INCLUDED
#define TALLER_LIB_H_INCLUDED


/*Este método busca multiplicar dos valores digitados por el usuario*/
void producto_enteros ();

/*Este método consiste en convertir el numero de dias digitado, en dias, semanas y años, para eso
usamos el módulo para saber si se cumple un año o una semana*/
void conversion_dias();

/*Este método halla la distancia entre dos puntos, usando la formula sqrt( (x2-x1)^2 + (y2-y1)^2  )  */
void distancia_puntos();

/*Este método imprime numeros del 1 al 10, por medio de un ciclo*/
void numeros_naturales();

/*Esta función  cuenta con dos ciclos, uno para las filas y otro para las columnas, 
y se va  mostrando  i veces el caracter "*"  */
void triangulo_rectangular();

/*Esta función crea una matriz con unos, es similar al ejercicio anterior solo que no 
no tiene en cuenta el numero de filas sino el tamaño de la matriz pedido*/
void matriz_unos();

/*Genera una matriz similar a la anterior, solo que con valores random, 
por medio del método rand() y se agrega el "%10" para los numeros vayan de 0 a 9*/
void matriz_aleatoria();

/*Para esta ocasión se crean dos matrices, con ciclos que recorren filas y columnas
pero se debe crear un for adicional para realizar la suma entre las dos matrices*/
void suma_matrices();

/*Al igual que con el ejercicio anterior, se restan las dos matrices*/
void resta_matrices();

/*Para multiplicar matrices, se toma la columa de una matriz con la fila de otra matriz, para luego sumar el resultado.*/
void producto_matrices();

/*Se implementa el menu, donde se encuentran todas las funciones*/
void menu ();

#endif



