#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

  double resultado = 0;

  for(int cantidad = 0; cantidad<argc; cantidad++)
    resultado += atof(cantidad[argv]);
  printf("%lf\n", resultado);

  return EXIT_SUCCESS;
}
