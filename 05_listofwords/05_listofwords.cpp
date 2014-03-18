#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  const char *list [] = {
    "bread",
    "toast",
    "bacon",
    "cereals",
    "colacao",
    "chococrispies",
    NULL
  };
int i=0;  
for(int i=0; list[i]; i++)
    printf("%s\n", list[i]);
i++;  
printf("\n%i", i);

  return EXIT_SUCCESS;
}
