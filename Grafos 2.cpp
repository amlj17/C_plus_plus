//
//  main.cpp
//  Tarea Grafos 2 Suma de Col y Fil
//
//  Created by Andres Moguel on 4/12/20.
//  Copyright © 2020 Andres Moguel. All rights reserved.
//
#include<iostream>
using namespace std;
int vertArr[20][20]; //the adjacency matrix initially 0
int count = 0;
void displayMatrix(int v) {
   int i, j;
   for(i = 0; i < v; i++) {
      for(j = 0; j < v; j++) {
         cout << vertArr[i][j] << " ";
      }
      cout << endl;
   }
}
void add_edge(int u, int v) {       //function to add edge into the matrix
   vertArr[u][v] = 1;
   vertArr[v][u] = 1;
}
int main(int argc, char* argv[]) {
    int i, j, sumRow=0;
    int sumCol=0;
   int v = 6;    //there are 6 vertices in the graph
   add_edge(0, 4);
   add_edge(0, 3);
   add_edge(1, 2);
   add_edge(1, 4);
   add_edge(1, 5);
   add_edge(2, 3);
   add_edge(2, 5);
   add_edge(5, 3);
   add_edge(5, 4);
   displayMatrix(v);
    
    for (i = 0; i < v; ++i)
           {
               for (j = 0; j < v; ++j)
               {
                   sumRow = sumRow + vertArr[i][j] ;
               }
    
               printf("Sum of the %d row is = %d\n", i, sumRow);
               sumRow = 0;
    
           }
           sumCol = 0;
           for (j = 0; j < v; ++j)
           {
               for (i = 0; i < v; ++i)
               {
                   sumCol = sumCol + vertArr[i][j];
               }
    
               printf("Sum of the %d column is = %d\n", j, sumCol);
               sumCol = 0;
    
           }
    if ((sumRow = sumCol)) {
        printf("Grafo\n");
    } else {
        printf("digrafo\n");
    }
    }

