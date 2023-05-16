//
//  main.c
//  Tarea 4
//
//  Created by Andres Moguel on 2/9/20.
//  Copyright © 2020 Andres Moguel. All rights reserved.
//

#include <stdio.h>
int eleccion, n, i, j, n2, producto1, producto=1, p=1, sum2, sum=0;
int main() {
    printf("presiona 1 suma junta");
    printf("\npresiona 2 suma separada");
    printf("\npresiona 3 constante fuera");
    printf("\npresiona 4 constante dentro");
    printf("\npresiona 5 multiplicación junta");
    printf("\npresiona 6 multiplicación separada");
    printf("\nIndica lo deseado");
    scanf("%d",&eleccion);
    switch (eleccion) {
        case 1:
                printf("Ingresa un entero positivo: ");
                scanf("%d", &n);
                for (i = 1; i <= n; ++i) {
                    sum += i;
                }
                printf("Suma = %d", sum);
            break;
            
    case 2:
            printf("Ingresa un entero positivo: ");
                          scanf("%d", &n);
                          for (i = 1; i <= n; ++i) {
                              sum += i;
                          }
            printf("Ingresa otro entero positivo: ");
                          scanf("%d", &n2);
                          for (j = n+1; j <= n2; ++j) {
                              sum2 += j;
                          }
                          printf("Suma = %d", sum+sum2);
            break;
    
    case 3:
            printf("Ingresa un entero positivo: ");
            scanf("%d", &n);
            for (i = 1; i <= n; ++i) {
                sum += i;
            }
            printf("Suma = %d", 5*sum);
            break;
    
    case 4:
            printf("Ingresa un entero positivo: ");
            scanf("%d", &n);
            for (i = 1; i <= n; ++i) {
                sum += i*5;
            }
            printf("Suma = %d", sum);
            break;
            
    case 5:
            printf("Ingresa un entero positivo: ");
            scanf("\n%d",&n);
            for(i=1;i<=n;i++)
                p=p*i;
            printf("Product is %d\n",p);
            break;
        case 6:
            printf("Ingresa un entero positivo: ");
            scanf("\n%d",&n);
            for(i=1;i<=n;i++)
                p=p*i;
            printf("Ingresa otro entero positivo: ");
            scanf("\n%d",&n2);
            for(j=n+1;j<=n2;j++)
                producto=producto*j;
            
            printf("Product is %d\n",(p*producto));
            break;
    }
}


