#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

  int list[] = {
    22, 3, 77, 50, 40, 23, 37, 35, 22, 2, 61, 71, 0
  };

  int contador;

  printf("\nla lista descolocada es:\t");

  //imprime la lista descolocada
  for(int i = 0 ; i < sizeof(list) / sizeof(int) ; i++)
    printf("%i ", list[i]);

  //bucle que va repitiendose comparando todos los numeros hasta estar ordenados de mayor a menor
  for(int primero = 0 ; primero <= sizeof(list) / sizeof(int) ; primero++){
    contador = 0;

    for(; contador < sizeof(list) / sizeof(int) ;){

      //si el numero comparado es superior al primer numero los cambiamos
      if(list[contador] - list[contador+1] > 0){
	int comodin = list[contador+1];

	list[contador+1] = list[contador];
	list[contador] = comodin;
	contador = 0;
      }

      //sino es superior aumentamos en 1 para pasar al siguiente numero
      contador++;    

    }

  }

  //una vez colocados los numeros los imprimimos
  printf("\nla  lista  colocada  es:\t");
  for(int i = 0 ; i < sizeof(list) / sizeof(int) ; i++)
    printf("%i ", list[i]);
  printf("\n\n");

  return EXIT_SUCCESS;
}
