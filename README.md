# Encabezado
<p align="center"><img src="https://res-5.cloudinary.com/crunchbase-production/image/upload/c_lpad,h_256,w_256,f_auto,q_auto:eco/v1455514364/pim02bzqvgz0hibsra41.png"width="200" height="200">
</img><br>
<i><b>Docente:</b></i> John Corredor, PhD.
<br>
<i><b>Asignatura:</b></i> Computación Paralela y Distribuida
<br>
<i><b>Estudiante:</b></i> Edna Sofía Orjuela Puentes
<br>
<i><b>Tema:</b></i> Primer taller en C
<br>
<i><b>Fecha:</b></i>06/08/22
<br>
</p>

# Introducción

El presente taller tiene como objetivo el desarrollo de diez ejercicios en lenguaje
c, los cuales se encuentran contenidos en funciones que posteriormente serán llamados en
un menú, donde el usuario podrá elegir el programa que desea visualizar.

A continuación, se encontrará el enunciado del ejercicio, el algoritmo y su respectiva ejecución, así mismo, encontrará archivos adicionales, tales como, “lib.h”,”lib.c”,”main” y “Makefile” para poder llevar a cabo el proceso de compilación. 

# Desarrollo

## 2.1  Producto de dos enteros

Escribe un programa en C que acepte dos enteros del usuario y calcule el producto de los  dos enteros.<br>

**Datos de prueba :**<br>
Introduzca el primer entero: 25<br> 
Introduzca el segundo entero: 15<br><br>  
**Salida esperada:**<br> 
Producto de los dos enteros anteriores = 375 

## 2.2  Conversión de días
Escribe un programa en C para convertir los días especificados en años, semanas y días.<br>Nota: Ignore el año bisiesto.<br><br>  
**Datos de prueba :**<br>
Número de días : 1329<br><br> 
**Salida esperada :**<br>
Años: 3<br> 
Semanas 33<br> 
Días: 3<br> 

## 2.3 Distancia entre dos puntos
Escribe un programa en C para calcular la distancia entre los dos puntos.<br>  
**Datos de prueba :**<br> 
Entrada x1: 25<br> 
Entrada y1: 15<br> 
Entrada x2: 35<br> 
Entrada y2: 10<br><br> 
**Resultado esperado:**<br> 
Distancia entre dichos puntos: 11.1803 

## 2.4 Números naturales
Escribe un programa en C para mostrar los 10 primeros números naturales.<br><br>  
**Salida esperada :**<br><br> 
1 2 3 4 5 6 7 8 9 10 

## 2.5 Triángulo rectángulo
Escribe un programa en C para mostrar el patrón como triángulo rectángulo usando un  asterisco.<br>La cantidad de líneas del triángulo es ingresada por consola por el usuario, y el valor  máximo de líneas es de 14. 
El patrón como:<br>  
      *<br>  
      **<br>  
      ***<br>  
      ****<br> 

## 2.6  Matriz de unos 
Escribe un programa que imprima una matriz de “1”, de tamaño NxN.<br>El tamaño es  indicado por el usuario y debe ser siempre menor que 8.

## 2.7 Matriz aleatoria

Escribe un programa que imprima una matriz de números aleatorios enteros, entre 0 y 9,  de tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8

## 2.8 Suma de matrices
Escribe un programa que muestre dos matrices de números aleatorios, entre 0 y 9, de  tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8.  Finalmente, se presenta la suma de las dos matrices. 

## 2.9 Resta de matrices
Escribe un programa que muestre dos matrices de números aleatorios, entre 0 y 9, de  tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8.  Finalmente, se presenta la resta de las dos matrices. 

## 2.10 Producto de matrices
Escribe un programa que muestre dos matrices de números aleatorios, entre 0 y 9, de  tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8.  Finalmente, se presenta el producto de las dos matrices.

# Guía para la ejecución del proyecto
Este proyecto cuenta con cuatro archivos que corresponden a:<br> 

*  **taller_lib.c:** Este archivo al ser el módulo de funciones, contendrá el desarrollo de las distintas funciones a usar, pero no estará la función main.<br> 

*  **taller_lib.h:** Esta será la interfaz del prototipo de funciones disponibles en la biblioteca para que estén disponibles, en ella se incluirán los pragmas, instrucciones realizadas directamente al compilador, y además contendrá únicamente los métodos a llamar.<br> 

*  **taller_main.c:** Este archivo contendrá únicamente, el método main y las bibliotecas correspondientes, agregando #include "taller_lib.h", la cual permitirá enlazar posteriormente las clases.<br>

*  **taller_program.c:** Este archivo contiene el código completo.<br>

*  **Makefile:** contiene las instrucciones que se deben ejecutar, como crear el objeto (-c)  y crear el ejecutable enlazando el objeto (-o), todo en un solo archivo, que a la vez se encargue de borrar los archivos creados a medida que se actualicen. Los comandos, -ansi, -pendantic, permiten que el compilador implemente el lenguaje ANSI y el comando Wall, activa todas las advertencias.<br>
Por otra parte, se agrega “MATH FLAGS” para poder hacer uso de las funciones matemáticas, como “pow”.<br>


Para realizar la compilación y ejecución del proyecto simplemente deberá hacer uso del archivo "Makefile", por medio del comando **make taller_main**, luego de esto, usted podrá hacer uso del ejecutable **taller_main**, por medio del comando **./taller_main**.<br><br>
En caso tal que desee eliminar los archivos generados, para nuevamente realizar la compilación, deberá usar el comando **make clean**.<br>

Para mayor entendimiento del proceso a realizar, revisar la figura 1.
<p align="center"> <img src="https://github.com/edso2103/Primer_Taller_C/blob/main/figura1.png" width="800"/> </p> 

<p align="center"><i><b>Figura 1</i></b></p>



