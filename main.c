#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "entradaDados.h"
#include "entradaSaltos.h"
#include "saltoMedio.h"
#include "impressaoResultado.h"
#define tam  20
#define qtd  3
int main(void) {

  
  char nome[tam];
  float salto[qtd], soma, med;
  
  soma = med = 0.0;
  entradaDados(&nome, tam);
  entradaSaltos(&salto, qtd);
  saltoMedio(salto, qtd, &soma, &med);
  impressaoResultado(med);
 
    
  printf("\nBen Inf agradece vossa consulta. Ateh breve!!!");
  printf("\nBy BQB");
  
  return 0;
}