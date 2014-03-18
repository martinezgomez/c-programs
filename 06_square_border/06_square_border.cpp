#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

  int lado;

  printf("dime lo que vale L:\n");
  scanf(" %i", &lado);

  for (int fila=0; fila<lado; fila++){
    for (int col=0;	col<lado; col++)
      if (fila == 0 || fila == lado -1 || col == 0 || col == lado -1)
	printf("*");
      else
	printf(" ");
    printf("\n");
  }

  return EXIT_SUCCESS;
}
