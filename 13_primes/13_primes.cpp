#include<stdlib.h>
#include<stdio.h>

#define N 70

int main(int argc, char *argv[]){

  //pintar una raid con 70 numeros
  int primos[N];

  //parto sabiendo que el primero de los primos [0] es el 2
  //entonces el siguientte primo ocuparia el puesto 1
  int primo_siguiente = 1;
  primos[0]= 2;

  //mientras no llene la raid de 70 primos
  for (int posible_primo = 3 ; primo_siguiente < N ; posible_primo++){
    bool es_primo = true;


    //cojo el primo y lo divido entre los primos empezando desde el 2 ya que todos los numeros pares se dividen entre 2
      //si se divide por alguno de los primos pruebo con el siguientte numero
    for (int posicion_primo = 0 ; posicion_primo < primo_siguiente ; posicion_primo++)

      if(posible_primo % primos[posicion_primo] == 0)
	es_primo = false;

    //si no se divide entre ninguno lo meto en la posicion de siguiente primo y avanzo siguiente primo en 1
    if(es_primo)
      primos[primo_siguiente] = posible_primo;
    primo_siguiente++;
  }

  for(int imprimir=0; imprimir<N; imprimir++)
    printf("%i", primos[imprimir]);
  printf("\n");

  return EXIT_SUCCESS;
}





