#include<stdio.h>
int main()
/**
 *main - programa donde el usuario ingresa su edad y este le 
dice si es mayor o menor de edad
 *
 *
 */ 
{
  int edad;
  printf("digite la su edad\n");
  scanf("%d",&edad);
  if (edad>=18)
    printf("eres mayor de edad\n");
  else
    printf("eres menor de edad\n");
  return(0);
}
