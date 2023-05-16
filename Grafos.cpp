//
//  main.cpp
//  Tarea Grafos
//
//  Created by Andres Moguel on 3/29/20.
//  Copyright © 2020 Andres Moguel. All rights reserved.
//

#include <iostream>
using namespace std;

class Graph {
private:
      bool** matrizAdaycencia;
      int NumeroVertices;
public:
      Graph(int numVertices) {
            this->NumeroVertices = numVertices;
            matrizAdaycencia = new bool*[numVertices];
            for (int filas = 0; filas < numVertices; filas++) {
                  matrizAdaycencia[filas] = new bool[numVertices];
                  for (int columnas = 0; columnas < numVertices; columnas++)
                        matrizAdaycencia[filas][columnas] = false;
          }
    }
 
      void addEdge(int filas, int columnas) {
                  matrizAdaycencia[filas][columnas] = true;
                  matrizAdaycencia[columnas][filas] = true;
    }
 
      void removeEdge(int filas, int columnas) {
                  matrizAdaycencia[filas][columnas] = false;
                  matrizAdaycencia[columnas][filas] = false;
    }
 
      bool isEdge(int filas, int columnas) {
                  return matrizAdaycencia[filas][columnas];
    }

    void toString() {
      for (int filas = 0; filas < NumeroVertices; filas++) {
                  cout << filas << " : ";
                  for (int columnas = 0; columnas < NumeroVertices; columnas++)
                        cout << matrizAdaycencia[filas][columnas] << " ";
                  cout << "\n";
      }

    }
 
    ~Graph() {
            for (int filas = 0; filas < NumeroVertices; filas++)
                  delete[] matrizAdaycencia[filas];
            delete[] matrizAdaycencia;
    }
};


int main(){
        Graph g(4); /*Nos dice cuantos vértices tiene el grafo. Se le puede cambiar el numero de vertices al cambiar el número dentro de los paréntesis*/
 
            /* nos dice entre que grafos existen aristas*/
        g.addEdge(0, 0);
        g.addEdge(0, 1);
        g.addEdge(0, 2);
        g.addEdge(1, 2);
        g.addEdge(1, 3);
        g.addEdge(2, 3);
        g.addEdge(3, 3);
        
    
        g.toString();
       
/*Imprime el grafo de la tarea, el que está como ejemplo*/
}
