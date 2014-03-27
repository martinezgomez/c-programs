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

  if (strcmp(list[0], list[2]) > 0){
    const char *comodin = list[2];
    list[2] = list[0];
    list[0] = comodin;
  }


  if (strcmp(list[1], list[2]) > 0){
    const char *comodin = list[2];
    list[2] = list[1];
    list[1] = comodin;
  }

  for(int i=0; i<3;i++)
    printf(" %s ", list[i]);
  printf("\n");

  return EXIT_SUCCESS;
}
