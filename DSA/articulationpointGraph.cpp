#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void dfs(int node, int parent, vector<int> &disc , vector<int> &low, unordered_map<int, bool> &vis, unordered_map<int, list<int>> &adj,  vector<int> &artipoint, int &timer){
        vis[node] = true;
        disc[node] = low[node]= timer++;
        int child = 0;

        for(auto neigh: adj[node]){
            if(neigh == parent){
                continue;
            }
            if(!vis[neigh]){
                dfs(neigh, node,disc, low,  vis, adj, artipoint, timer);
                low[node] = min(low[node], low[neigh]);

                //check articulation point
                if(low[neigh] >= disc[node] && parent != -1){
                    artipoint[node] = 1;
                }
                child++;
            }
            else{
                low[node] =min(low[node], disc[neigh]);

            }
        }
        if(parent == -1 && child>1){
            artipoint[node] = 1;
        }
}



int main(){
    int n= 5;
    int e = 5;
    vector<pair<int, int>>edges;

    edges.push_back(make_pair(0, 3));
    edges.push_back(make_pair(3, 4));
    edges.push_back(make_pair(0, 4));
    edges.push_back(make_pair(0, 1));
    edges.push_back(make_pair(1, 2));


    //adj list
    unordered_map<int, list<int>>adj;

    for(int i=0; i<edges.size(); i++){
        int u = edges[i].first;
        int v = edges[i].second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int timer =0;
    vector<int>disc(n);
    vector<int>low(n);
    unordered_map<int, bool>vis;
    vector<int>artipoint(n, 0);

    for(int i=0; i<n; i++){
        disc[i] =-1;
        low[i] =-1;

    }

    //dfs
    for(int i=0; i<n; i++){
        if(!vis[i]){
            dfs(i, -1, disc, low, vis, adj, artipoint, timer);
        }
    }

    //print articulation point
    cout<<"articulation points : "<<endl;
    for(int i=0; i<n; i++){
        if(artipoint[i] != 0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    
    return 0;
}

//T.c = O(N+E)
//S.c = O(N)