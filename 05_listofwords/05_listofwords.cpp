#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  int cuenta = 0;  

  const char *list [] = {
    "bread",
    "toast",
    "bacon",
    "cereals",
    "colacao",
    "chococrispies",
    NULL
  };

  for(int i=0; list[i]; i++){

    cuenta++;  
    printf("palabra nº%i: %s\n",cuenta, list[i]);
  }


  printf("\nLa lista contiene %i palabras.\n", cuenta);

  return EXIT_SUCCESS;
}
