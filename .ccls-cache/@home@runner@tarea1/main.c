#include <stdio.h>

int main(void) 
{
  int limiteinf, limitesup, numero;
  printf("Ingrese el limite inferior\n");
  scanf("%d",&limiteinf);
  
  printf("Ingrese el limite superior\n");
  scanf("%d",&limitesup);
    if (limitesup>limiteinf)
    {
      printf("Ingrese un numero\n");
      scanf("%d",&numero); 
      
      if (numero > limiteinf && numero < limitesup)
      {
        printf("El numero %i es mayor que %i y menor que %i \n",numero, limiteinf, limitesup);
      }
      else {
        printf("El numero esta fuera del intervalo ingresado\n");
      }
      
    }
    else {
      printf("Los datos ingresados no son validos\n");
    }
  
  
  return 0;
}