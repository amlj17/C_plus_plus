//
//  main.cpp
//  Transitividad
//
//  Created by Andres Moguel on 4/27/20.
//  Copyright © 2020 Andres Moguel. All rights reserved.
//

/*
 * C++ Program to Implement Adjacency Matrix
 */
#include <iostream>
#include <cstdlib>
using namespace std;
#define MAX 20
/*
 * Adjacency Matrix Class
 */
class AdjacencyMatrix
{
    private:
        int n;
        int **adj;
        bool *visited;
    public:
        AdjacencyMatrix(int n)
        {
            this->n = n;
            visited = new bool [n];
            adj = new int* [n];
            for (int i = 0; i < n; i++)
            {
                adj[i] = new int [n];
                for(int j = 0; j < n; j++)
                {
                    adj[i][j] = 0;
                }
            }
        }
        /*
         * Adding Edge to Graph
         */
        void add_edge(int origin, int destin)
        {
            if( origin > n || destin > n || origin < 0 || destin < 0)
            {
                cout<<"Invalid edge!\n";
            }
            else
            {
                adj[origin - 1][destin - 1] = 1;
            }
        }
        /*
         * Print the graph
         */
        void display()
        {
            int i,j;
            for(i = 0;i < n;i++)
            {
                for(j = 0; j < n; j++)
                    cout<<adj[i][j]<<"  ";
                cout<<endl;
            }
        }
};
/*
 * Main
 */
int main()
{
    int nodes, max_edges, origin, destin;
    int n;
    cout<<"Ingrese el número de nodos de su matriz de adyacencia: ";
    cin>>nodes;
    AdjacencyMatrix am(nodes);
    max_edges = nodes * (nodes - 1);
    for (int i = 0; i < max_edges; i++)
    {
        cout<<"Enter edge (-1 -1 to exit) (de que nodo a que nodo va: ";
        cin>>origin>>destin;
        if((origin == -1) && (destin == -1))
            break;
        am.add_edge(origin, destin);
    }
    am.display();
     cout<< "presionar q y enter para ver resultado de transitividad";
     bool trans = true;
        cin >> n;

        int **m = new int*[n];
        for (int i = 0; i < n; i++) {
            m[i] = new int[n];
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++)
                {
                    if ((i!=j && j!=k) && !(m[i][j] == 1 && m[j][k] == 1 && m[k][i] == 1))
                        trans = false;
                }
            }
        }

    if (trans){
            cout<<"Es transitivo";
            cout << 1;
    }
        else
        {
            cout<<"No es transitivo";
            cout << 0;
        }
    }


    
  
   
