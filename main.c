#include <stdio.h>

int main(void) {
  int calificacion;

  printf("Ingresar calificacion: ");
  scanf("%i", &calificacion);

  if (calificacion > 90)
    printf("Aprobado :) ");
  else if (calificacion > 60)
    printf("Aprobado");
  else
    printf("Reprobado");

  return 0;
}