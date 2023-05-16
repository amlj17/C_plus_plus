//
//  main.c
//  Matriz de Relaciones
//
//  Created by Andres Moguel on 4/26/20.
//  Copyright © 2020 Andres Moguel. All rights reserved.
//

#include<stdio.h>
int main()
{
  int m, n, c, d, matrix[10][10], transpose[10][10], valor, sec[10][10], k, mul[10][10], p,q, tot= 0 ;
int flag=0 ;

  printf("Ingrese el numero de filas y columnas de la matriz\n");
  scanf("%d%d", &m, &n);
  printf("Ingrese los elementos de la matriz. Estamos trabajando con una matriz de adyacencia así que ingrese 1 o 0 como entrada.\n");

  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &matrix[c][d]);

    printf("Seleccione una opción: \n");
    printf ("Que desea revisar de dicha matriz\n");
    printf(" 1 simetria\n");
    printf(" 2 reflexividad\n");
    printf(" 3 transitividad\n");
    printf("ingrese el valor deseado: \n");
    scanf("%d", &valor);
    
    switch (valor) {
    case 1:
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      transpose[d][c] = matrix[c][d];

  if (m == n) /* checar el orden */
  {
    for (c = 0; c < m; c++)
    {
      for (d = 0; d < m; d++)
      {
        if (matrix[c][d] != transpose[c][d])
          break;
      }
      if (d != m)
        break;
    }
    if (c == m)
      printf(" La matriz es simétrica.\n");
    else
      printf("La matriz no es simétrica.\n");
  }
            break;
            
            case 2:
            
           for (c = 0; c < m; c++)
               {
                   for (d = 0; d < n; d++)
                   {
                       if (c == d && matrix[c][d] != 1)
                       {
                           flag = -1;
                           break;
                       }
               }
            
               if (flag == 0)
               {
                   printf ("La matriz es reflexiva\n");
               }
               else
               {
                   printf ("la matriz NO es reflexiva\n");
               }
               }
            break;
            
            case 3:
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
                 tot = tot + matrix[c][k] * sec[k][d];
               }
               mul[c][d] = tot;
               tot = 0;
             }
           }
                   
                   // si las entradas de la matriz original que son 0 se mantienen como 0 al elevarlas al cuadrado entonces es transitivo.
                   for (c = 0; c < m; c++)
                     for (d = 0; d < n; d++)
                       mul[c][d] = matrix[c][d];

                   if (m == n) /* checar el orden */
                   {
                     for (c = 0; c < m; c++)
                     {
                       for (d = 0; d < m; d++)
                       {
                         if (matrix[c][d] != transpose[c][d])
                           break;
                       }
                       if (d != m)
                         break;
                     }
                     if ((c && m)>0)
                       printf(" La matriz es transitiva.\n");
                     else
                       printf("La matriz no es transitiva\n");
               }
            break;
               }
    }
            
  return 0;
}



