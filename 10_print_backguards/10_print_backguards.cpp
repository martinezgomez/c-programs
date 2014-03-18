
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){


  const char *sentence = "the world is a vampire.";
  const char *beginning = sentence;
  const char *end = sentence;

  do{
    *beginning++;
  }while (*beginning != '\0');


  do{
    *beginning--;
    printf("%c", *beginning);

  }while (*beginning != 't');
  printf("\n");
  return EXIT_SUCCESS;
}
