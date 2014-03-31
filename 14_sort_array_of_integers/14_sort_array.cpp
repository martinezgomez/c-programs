#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

  int list[] = {
    22, 3, 77, 50, 40, 23, 37, 35, 22, 2, 61, 71, 0
  };

  int contador;

  for(int primero = 0 ; primero <= sizeof(list) / sizeof(int) ; primero++){
    contador = 0;

    for(; contador < sizeof(list) / sizeof(int) ;){

      if(list[contador] - list[contador+1] > 0){
	int comodin = list[contador+1];
	list[contador+1] = list[contador];
	list[contador] = comodin;
	contador = 0;
      }

      contador++;    

    }

  }

  for(int i = 0 ; i < sizeof(list) / sizeof(int) ; i++)
    printf("%i ", list[i]);
  printf("\n");
  return EXIT_SUCCESS;
}
