#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

  int lado = argv[1];

  for (int fila=0; fila<lado; fila++){
    for (int col=0;	col<lado; col++)
      if(fila >= col)
	printf(" * ");
      else
	printf("   ");
    printf("\n");
  }

  return EXIT_SUCCESS;
} 
