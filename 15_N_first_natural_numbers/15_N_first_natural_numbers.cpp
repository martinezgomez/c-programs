#include <stdio.h>
#include <stdlib.h>

//Imprimir el producto de los N numeros naturales

//En primer lugar definimos la cantidad de numeros

#define N 12

//despues creamos una funcion para crear la recursividad

int producto(int cantidad){

  //aqui el estamos diciendo que si la cantidad de numeros es diferente de 1
  //multiplique los numeros entre si y sino que imprima el numero 1

  return cantidad != 1 ? cantidad * producto(cantidad-1) : cantidad = 1;
}

//Ahora creamos el main para imprimir el resultado dentro

int main (int argc, char *argv[]){

  printf("\n\tEl producto de los %i primeros numeros naturales es: %i\n\n"
          , N, producto(N));
  return EXIT_SUCCESS;

}
