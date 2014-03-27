#include<stdio.h>
#include<stdlib.h>

#define N 40

int main(int argc, char *argv[]){

  int numero[40];
  numero[0] = 1;
  numero[1] = 1;

  for(int fila=2; fila<N; fila++)
    numero[fila] = numero[fila-1] + numero[fila-2];


  for(int fila=0; fila<N; fila++)
    printf("%i  ", numero[fila]);

  return EXIT_SUCCESS;
}
