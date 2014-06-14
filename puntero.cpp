#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

const char *nombre = "pepe";
const char *puntero;
puntero = nombre;
//con * apunta a una parte especifica de la memoria y sin asterisco apunta a la variable
char letra = *puntero;
puntero++;

//asi se lleva un puntero hasta el final
while(*puntero !='\0');
puntero++;

//asi se lleva un puntero hasta el principio
while(*puntero != *nombre)
puntero--;
printf("%c", *puntero);



    return EXIT_SUCCESS;
}
