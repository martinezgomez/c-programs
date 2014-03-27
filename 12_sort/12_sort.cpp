#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]){

  const char *list[] = {"yield", "yelp", "yellow"};

  if (strcmp(list[0], list[1]) > 0){
    const char *comodin = list[1];
    list[1] = list[0];
    list[0] = comodin;
  }

  for(int i=0; i<2;i++)
    printf(" %s ", list[i]);
  printf("\n");

  return EXIT_SUCCESS;
}
