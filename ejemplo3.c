#include <stdio.h>
int main()
{
  int n;
  printf("ingrese un numero\n");
  scanf("%d",&n);
  if (n%2 == 0)
    printf("el numero es par\n");
  else
    printf("el numero es impar\n");

  return(0);
}
