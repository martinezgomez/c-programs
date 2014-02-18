#include <stdio.h>
#include <stdlib.h>

#define MAX 20
int main(){

    char frase[10];
    printf("\n Dime la frase: ");
    gets(frase);

    for(int i=0; i<10; i++){
	printf(" %s \n", frase);

    }




    return EXIT_SUCCESS;
}
