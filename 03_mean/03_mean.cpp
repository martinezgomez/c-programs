#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
int introducido, cantidad_numeros=0;
double total;

  //preguntar un numero
do{ 
  printf("\n\tDime un numero:");
  scanf(" %i", &introducido);
if(introducido >= 0){
  total += introducido;
  cantidad_numeros++;}
}while(introducido >=1);
total /= cantidad_numeros;
printf("\n\t la media de tus %i numeros introducidos es: %.2lf",cantidad_numeros, total);
printf("\n\n\n");
//mientras el numero sea mayor que 0 sumarlo a la variable
//si es menor calcular la media
return EXIT_SUCCESS;
}
