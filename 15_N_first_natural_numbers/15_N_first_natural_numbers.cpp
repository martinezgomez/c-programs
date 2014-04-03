
#include <stdio.h>
#include <stdlib.h>

#define N 7

int products(int number){
  if (number <= 0)
    return 0;

  printf(" %i ", number);

  return number * products(number-1);

}

int main(int argc, char *argv[]){

  printf("= %i\n", products(N));

  return EXIT_SUCCESS;
}
