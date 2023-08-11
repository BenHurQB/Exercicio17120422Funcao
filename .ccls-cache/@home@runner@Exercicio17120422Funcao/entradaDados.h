#include <stdio.h>
#include <string.h>

#include <stdlib.h>


char entradaDados(char *nome, int tam){

  printf("Informe o nome do atleta: ");
  scanf("%s", &nome[tam]);
  

   
  return (char) nome[tam];
  
}