#include <stdio.h>
#include <stdlib.h>

#define MAX 20
int main(int argc, char *argv[]){

  if(argc>1){
    for(int i=0; i<10; i++)
      printf("%s\n", argv[1]);
  }
  else{
    printf("\nSi no pones nada no puedo imprimir nada!!\n\n");
  }


  return EXIT_SUCCESS;
}
