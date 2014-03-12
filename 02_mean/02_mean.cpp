#include<stdio.h>
#include<stdlib.h>

#define max_numeros 10

int main(int argc, char *argv[]){

  double numero, 
	 media = 0;

  for(int numeros=0;numeros<max_numeros;numeros++){

    printf("dime el numero %i: ", numeros+1);
    scanf(" %lf", &numero);
    media += numero;
  }

  media /= max_numeros;
  printf("media: %lf\n", media);

  return EXIT_SUCCESS;
}
