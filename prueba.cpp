#include <stdio.h>
#include <stdlib.h>
int main()
{
int numero;
for (int i=0; i<5; i++){

numero = rand() % 5;
printf("mumero aleatorio #%d: %d\n",i+1,numero);
}
}
