#include <stdio.h>
#include <string.h>


float entradaSaltos(float *salto, int qtd){

  int i;

  for (i=0;i<qtd;i++){
    printf("\nInforme o salto nr %i ", i+1);
    scanf("%f",&salto[i]);
    }
  return (float) salto[qtd];
}