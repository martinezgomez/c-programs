#include <stdio.h>
#include <stdlib.h>



double add(double first, double second){

  double result = 0;
  result = first + second;

  return resultado;
}
int main(int argc, char *argv[]){

  double first = atof(argc[1]),
	 second = atof(argc[2]),
	 result = 0;

  result = add (first, second);

  printf("%2.lf +  %2.lf =  %2.lf" first, second, result);

  return EXIT_SUCCESS;
}

