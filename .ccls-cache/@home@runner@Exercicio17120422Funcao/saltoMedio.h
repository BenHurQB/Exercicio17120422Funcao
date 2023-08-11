#include <stdio.h>

float saltoMedio(float salto[], int qtd,  float *soma, float *med){

  int i;

  for (i=0;i<qtd;i++){
    *soma = *soma + salto[i];
    }
  *med = *soma / qtd;
  return *med;
}