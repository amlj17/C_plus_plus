//
//  main.c
//  Tarea 3 full
//
//  Created by Andres Moguel on 1/26/20.
//  Copyright © 2020 Andres Moguel. All rights reserved.
//

#include <stdio.h>
int main(void)
{
int i,j,k,p,ch,n1,n2,set1[10],set2[10], set3[20],flag;
char wish;
do
{
printf("presiona 1 union");
printf("\npresiona 2 intersectar");
printf("\npresiona 3 resta");
printf("\nIndica lo deseado");
scanf("%d",&ch);
switch(ch)
{
case 1://union
printf("\n ingresa el tamanio de set1\n");
scanf("%d",&n1);
printf("ingresa elementos de set1\n");
for(i=0;i<n1;i++)
scanf("%d",&set1[i]);
printf("ingresa el tamano de set2\n");
scanf("%d",&n2);
printf("ingresa elementos de set2\n");
for(i=0;i<n2;i++)
scanf("%d",&set2[i]);
k=0;
for(i=0;i<n1;i++)
{
set3[k]=set1[i];
k++;
}
for(i=0;i<n2;i++)
{
flag=1;
for(j=0;j<n1;j++)
{
if(set2[i]==set1[j])
{
flag=0;
break;
}
}
if(flag==1)
{
set3[k]=set2[i];
k++;
}
}
p=k;
for(k=0;k <p;k++)
 
{
printf(" %d",set3[k]);
}

break;
case 2: //interseccion
printf("Ingresa el tamanio de set1");
scanf("%d",&n1);
printf("ingrtesa elementos de set1");
for(i=0;i<n1;i++)
scanf("%d",&set1[i]);
printf("ingresa el tamanio de set2");
scanf("%d",&n2);
printf("ingresa elementos de set2");
for(i=0;i<n2;i++)
scanf("%d",&set2[i]);
k=0;
for(i=0;i<n2;i++)
{
flag=1;
for(j=0;j<n1;j++)
{
if(set2[i]==set1[j])
{
flag=0;
break;
}
}
if(flag==0)
{
set3[k]=set2[i];
k++;
}
}
p=k;
for(k=0;k <p;k++)

{
printf(" %d",set3[k]);

}
break;
case 3://for subtraction
printf("ingresa el tamanio de set1:\n");
scanf("%d",&n1);
printf("ingresa los elementos de set1:\n");
for(i=0;i<n1;i++)
scanf("%d",&set1[i]);
printf("ingresa el tamaño de set2:\n");
scanf("%d",&n2);
printf("ingresa los elementos de set2:\n");
for(i=0;i<n2;i++)
scanf("%d",&set2[i]);
k=0;
for(i=0;i<n1;i++)
{
flag=1;
for(j=0;j<n2;j++)
{
if(set1[i]==set2[j])
{
flag=0;
break;
}
}
if(flag==1)
{
set3[k]=set1[i];
k++;
}
}
p=k;
for(k=0;k <p;k++)

{
printf(" %d",set3[k]);

}
break;

}

printf("\n queires continuar: ");

scanf("%c",&wish);
}
while(wish!='n');
}
