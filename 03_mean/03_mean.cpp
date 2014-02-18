#include<stdio.h>
#include<stdlib.h>

#define max 100
int main(){

double numero=0, media;
int numeradores=0;

printf("introduce un numero\n");
scanf(" %lf", &numero);
//si el numero es superior o = a 0 sumar a la media
if(numero>=0){
numeradores++;
for(int n=0; n<max; n++){
media +=numero;
}
}

else
{
media/=numeradores;
printf("media:  %lf\n", media);
}

return EXIT_SUCCESS;
}
//sumar la media
//numero inferios a 0 dividir media entre cantidad de numeros
