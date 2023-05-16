//
//  main.cpp
//  Multiplicación de Matrices
//
//  Created by Andres Moguel on 4/19/20.
//  Copyright © 2020 Andres Moguel. All rights reserved.
//

// C++ program to multiply
// two square matrices.
#include<stdio.h>
#include <stdlib.h>

int main(void)
{
  int c, d, p, q, m, n, k, tot = 0;
  int fst[10][10], sec[10][10], mul[10][10], cubo[10][10], fth[10][10];
    char respuesta;

  printf(" Inserte el numero de filas y columnas de la primera matriz \n ");
  scanf("%d%d", &m, &n);

  printf(" Inserte las entradas de la primera matriz : \n ");
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &fst[c][d]);
 
  printf(" Inserte el numero de filas y columnas de la segunda matriz \n");
  scanf(" %d %d", &p, &q);

  if (n != p)
    printf(" No se pueden multiplicar estas matrices. \n ");
  else
  {
    printf(" Insert your elements for second matrix \n ");
      printf("Si desea elevar la matriz al cuadrado, escriba los mismos coeficientes en el mismo orden");
 
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &sec[c][d] );

    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          tot = tot + fst[c][k] * sec[k][d];
        }
        mul[c][d] = tot;
        tot = 0;
      }
    }
 
    printf(" Al multiplicar las matrices nos da la matriz: \n ");
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d \t", mul[c][d] );
      printf(" \n ");
    }
      
      printf("¿Desea multiplicar otra matriz? Si (Una nueva) (S)/ Multiplicar resultado por otra (R)");
      printf( "Si deseas hacer una matriz al cubo elige R");
      scanf(" %c", &respuesta);
      if(respuesta == 's' || respuesta == 'S'){
          main();
        }
        else if(respuesta == 'r' || respuesta == 'r')
        {
            for (c = 0; c < m; c++) {
                 for (d = 0; d < q; d++) {
                   for (k = 0; k < p; k++) {
                     tot = tot + fst[c][k] * mul[k][d];
                   }
                   cubo[c][d] = tot;
                   tot = 0;
                 }
               }
            
               printf(" Al multiplicar las matrices nos da la matriz: \n ");
               for (c = 0; c < m; c++) {
                 for (d = 0; d < q; d++)
                   printf("%d \t", cubo[c][d] );
                 printf(" \n ");
               }
          }
      else{
         printf("Para que el programa funcione seleccione una opcion valida (letra f\
      o c ya sea minuscula o mayuscula)");
          
       }
      
      printf("¿Desea multiplicar otra matriz? Si (Una nueva) (S)/ Multiplicar resultado por otra (R)");
      printf( "Si deseas hacer una matriz a la 4ta potencia elige R");
      scanf(" %c", &respuesta);
      if(respuesta == 's' || respuesta == 'S'){
          main();
        }
        else if(respuesta == 'r' || respuesta == 'r')
        {
            for (c = 0; c < m; c++) {
                 for (d = 0; d < q; d++) {
                   for (k = 0; k < p; k++) {
                     tot = tot + fst[c][k] * cubo[k][d];
                   }
                   fth[c][d] = tot;
                   tot = 0;
                 }
               }
            
               printf(" Al multiplicar las matrices nos da la matriz: \n ");
               for (c = 0; c < m; c++) {
                 for (d = 0; d < q; d++)
                   printf("%d \t", fth[c][d] );
                 printf(" \n ");
               }
          }
      else{
         printf("Para que el programa funcione seleccione una opcion valida (letra f\
      o c ya sea minuscula o mayuscula)");

      }
      
  }
  return 0;
}


