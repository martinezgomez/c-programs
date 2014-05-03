#include<stdio.h>
#include<stdlib.h>
#include <stdio_ext.h>

#define MAX 50
#define N 2
//declaro una estructura con las asignaturas y la llamare asignaturas

struct Tasignaturas{
  double bases_de_datos;
  double programacion;
  //  double media;
};

// despues declaro otra estructura con el nombre de los alumno y una variable que contenga las con la estructura de la anterior asignaturas y la llamare datos

struct Tdatos{
  char Nombre[50];
  struct Tasignaturas calificaciones;
};

int main(){

  //declaro una variable del tipo de la estructura datos y la llamare notas
  struct Tdatos notas[N];
  //pido los datos y los voy guardando en las variables

  for(int i=0; i<N; i++){
    printf("Nombre y 2 apellidos del alumno:  ");
    __fpurge(stdin);    
    gets(notas[i].Nombre);

    printf("Nota de Bases de Datos:  ");    
    __fpurge(stdin);    
    scanf("%lf", &notas[i].calificaciones.bases_de_datos);

    printf("Nota de programacion:  ");
    __fpurge(stdin);    
    scanf("%lf", &notas[i].calificaciones.programacion);
  }

  //imprimo los resultados  __fpurge(stdin); entre el printf y el scanf

  for(int p=0; p<N; p++){
    printf("\nNombre: %s\n", notas[p].Nombre);
    printf("\nNota de Bases de datos: %.2lf\n", notas[p].calificaciones.bases_de_datos);
    printf("\nNota de programacion: %.2lf\n", notas[p].calificaciones.programacion);
    //    printf("\nMedia %.2lf\n");
  }
  printf("\n");

  return EXIT_SUCCESS;
}
