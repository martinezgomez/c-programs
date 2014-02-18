#include<stdio.h>
#include<stdlib.h>

double add(double op1, double op2){

	double suma;

	suma = op1 + op2;	
	return suma;
}

int main(int argc, char *argv[]){

	double param1 = atoi(argv[1]), param2 = atoi(argv[2]), 
	       suma=0;
	
	suma = add(param1, param2);
printf("%.2lf\n", add(param1, param2) );

    return EXIT_SUCCESS;
}
