#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){


  const char *sentence = "the world is a vampire.";
  const char *beginning = sentence;

  //aumenta posiciones de memoria hasta encontrarte con el \0
  do{
    *beginning++;
  }while (*beginning != '\0');

  printf("\n");
  //decrementa una posicion de memoria e imprimela, azlo varias veces hasta que llegues a la posicion donde el puntero end apunta
  do{
    *beginning--;
    printf("%c", *beginning);

  }while (beginning != sentence);

  printf("\n\n");

  return EXIT_SUCCESS;
}
