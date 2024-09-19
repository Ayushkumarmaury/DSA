#include <bits/stdc++.h> 

int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  
    unordered_map<int, list<int>>adj;
    for(int i=0; i<edges.size(); i++){
        int u = edges[i].first - 1;
        int v = edges[i].second - 1;

        adj[u].push_back(v);
    }

    //find all indegress
    vector<int>indegree(n);
    for(auto i: adj){
        for(auto j: i.second){
            indegree[j]++;
        }
    }

    //0 indegree push
    queue<int>q;
    for(int i=0; i<n; i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }

    //do BFS
    int count = 0;
    vector<int>ans;
    while(!q.empty()){
        int front = q.front();
        q.pop();

        //increase count 
        count++;

        //neighbour indegree update
        for(auto neighbour:adj[front]){
            indegree[neighbour]-- ;
            if(indegree[neighbour]==0){
                q.push(neighbour);
            }
        }

    }

    if(count==n){
      return false;
    }else{
      return true;
    }
}
