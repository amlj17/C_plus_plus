//
//  main.cpp
//  kruskal 2.0
//
//  Created by Andres Moguel on 5/4/20.
//  Copyright © 2020 Andres Moguel. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
#define edge pair<int,int>
 
class Graph {
private:
    vector<pair<int, edge>> G; // graph
    vector<pair<int, edge>> T; // mst
    int *parent;
    int V; // number of vertices/nodes in graph
public:
    Graph(int V);
    void AddWeightedEdge(int u, int v, int w);
    int find_set(int i);
    void union_set(int u, int v);
    void kruskal();
    void print();
};
Graph::Graph(int V) {
    parent = new int[V];
 
    //i 0 1 2 3 4 5
    //parent[i] 0 1 2 3 4 5
    for (int i = 0; i < V; i++)
        parent[i] = i;
 
    G.clear();
    T.clear();
}
void Graph::AddWeightedEdge(int u, int v, int w) {
    G.push_back(make_pair(w, edge(u, v)));
}
int Graph::find_set(int i) {
    // If i is the parent of itself
    if (i == parent[i])
        return i;
    else
        // Else if i is not the parent of itself
        // Then i is not the representative of his set,
        // so we recursively call Find on its parent
        return find_set(parent[i]);
}
 
void Graph::union_set(int u, int v) {
    parent[u] = parent[v];
}
void Graph::kruskal() {
    int i, uRep, vRep;
    sort(G.begin(), G.end()); // increasing weight
    for (i = 0; i < G.size(); i++) {
        uRep = find_set(G[i].second.first);
        vRep = find_set(G[i].second.second);
        if (uRep != vRep) {
            T.push_back(G[i]); // add to tree
            union_set(uRep, vRep);
        }
    }
}
void Graph::print() {
    cout << "Edge :" << " Weight" << endl;
    for (int i = 0; i < T.size(); i++) {
        cout << T[i].second.first << " - " << T[i].second.second << " : "
                << T[i].first;
        cout << endl;
    }
}
int main() {
    Graph g(5);
    g.AddWeightedEdge(0, 1, 8);
    g.AddWeightedEdge(0, 2, 8);
    g.AddWeightedEdge(0, 3, 5);
    g.AddWeightedEdge(0, 4, 6);
    g.AddWeightedEdge(1, 2, 3);
    g.AddWeightedEdge(1, 3, 11);
    g.AddWeightedEdge(1, 4, 10);
    g.AddWeightedEdge(2, 3, 8);
    g.AddWeightedEdge(2, 4, 9);
    g.AddWeightedEdge(3, 4, 5);
    g.kruskal();
    g.print();
    return 0;
}
