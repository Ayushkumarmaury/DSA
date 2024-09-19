#include<iostream>
#include<bits/stdc++.h>
#include<list>

using namespace std;


class Graph{

        public:
        unordered_map<int, list<int>>adj;

        void addEdge(int u, int v, int direction){
            //direction =0 -> directed graph
            //direction =1 -> undirected graph

            //create an edge from u to v
            adj[u].push_back(v);

            if(direction ==0 ){
                adj[v].push_back(u);
            };
        }

        void printAdjList(){
            for (auto i:adj){
                cout<<i.first<<"->";
                for(auto j: i.second){
                    cout<<j<<", ";
                }
                cout<<endl;
            }
        }

};





int main(){
    int n;
    cout<<"enter the number of nodes : "<<endl;
    cin >> n;

    int m;
    cout<<"enter the number of edges : "<<endl;
    cin >> m;


    Graph g;
    for(int i=0;i<m; i++){
        int u,v;
        cin >> u >> v;
        g.addEdge(u,v,0);//undirected graph

    }

    g.printAdjList();

    return 0;
}