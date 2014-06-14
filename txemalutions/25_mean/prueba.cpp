#include<stdlib.h>
#include<stdio.h>
//crear una estructura llamada contenidos con 2 double programacion y bases de datos
struct TContenidos {
    double programacion;
    double bases_de_datos;
};
//crear una estructura llamadaAlumo con 1 char llamado nombre y otro del tipo contenidos llamado asignatura
struct TAlumno{
    char nombre[20];
    struct TContenidos asignaturas;
};

int main(){
    //crear otra estructura del tipo alumno llamada clase con N campos
    struct TAlumno clase[5];

    //pedir los datos y guardaros en los diferentes apartados
    for(int i=0; i<2; i++){
	printf("nombre del alumno\n");
	scanf("%s", clase[i].nombre );
	printf("Nota de programacion\n");
	scanf("%2lf", &clase[i].asignaturas.programacion);
	printf("Nota de Bases de Datos\n");
	scanf("%2lf", &clase[i].asignaturas.bases_de_datos);
    }

    //imprimir los datos
    for(int i=0; i<2; i++){
	printf("nombre: %s\n", clase[i].nombre);
	printf("nota programacion: %2.lf\n", clase[i].asignaturas.programacion);
	printf("nota bases: %2.lf\n\n\n", clase[i].asignaturas.bases_de_datos);
    }

    return EXIT_SUCCESS;

}
