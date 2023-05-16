//
//  main.cpp
//  Dijkstra
//
//  Created by Andres Moguel on 4/19/20.
//  Copyright © 2020 Andres Moguel. All rights reserved.
//

#include<iostream>
#include<climits>
using namespace std;

// this method returns a minimum distance for the
// vertex which is not included in Tset.
int minimumDist(int dist[], bool Tset[])
{
    int min=INT_MAX,index;
              
    for(int i=0;i<5;i++)
    {
        if(Tset[i]==false && dist[i]<=min)
        {
            min=dist[i];
            index=i;
        }
    }
    return index;
}

void Dijkstra(int graph[6][6],int src) // adjacency matrix used is 6x6
{
    int dist[6]; // integer array to calculate minimum distance for each node.
    bool Tset[6];// boolean array to mark visted/unvisted for each node.
    
    // set the nodes with infinity distance
    // except for the initial node and mark
    // them unvisited.
    for(int i = 0; i<6; i++)
    {
        dist[i] = INT_MAX;
        Tset[i] = false;
    }
    
    dist[src] = 0;   // Source vertex distance is set to zero.
    
    for(int i = 0; i<6; i++)
    {
        int m=minimumDist(dist,Tset); // vertex not yet included.
        Tset[m]=true;// m with minimum distance included in Tset.
        for(int i = 0; i<6; i++)
        {
            // Updating the minimum distance for the particular node.
            if(!Tset[i] && graph[m][i] && dist[m]!=INT_MAX && dist[m]+graph[m][i]<dist[i])
                dist[i]=dist[m]+graph[m][i];
        }
    }
    cout<<"Vertex\t\tDistance from source"<<endl;
    for(int i = 0; i<6; i++)
    { //Printing
        char str=65+i; // Ascii values for pritning A,B,C..
        cout<<str<<"\t\t\t"<<dist[i]<<endl;
    }
}

int main()
{
    int graph[6][6]={
        {0, 2, 0, 1, 0, 0},
        {2, 0, 3, 0, 1, 0},
        {0, 3, 0, 0, 0, 2},
        {1, 0, 0, 0, 1, 0},
        {0, 1, 0, 0, 0, 2},
        {0, 0, 2, 0, 2, 0}
    };
    Dijkstra(graph,0);
    return 0;
}
