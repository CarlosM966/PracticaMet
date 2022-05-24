//Imprimir los numeros primos entre 2 y 1000 inclusive
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(int argc, char const *argv[])
{

  int i ;
  char divisor;
  bool primo = false;

  printf("Imprimir los numeros primos entre 2 y 1000");

  for (int i = 2; i < 1000; i++)
  {
    primo = true;
    divisor = 2;

    while (divisor <= sqrt(i) && primo = true)
    {
      if (i % divisor == 0)
      {
        primo = false;
      }
      else
      {
        divisor = divisor + 1;
      }
    }
    if (primo = true)
    {
      printf("%i\n", i);
    }
  }

  return 0;
}
