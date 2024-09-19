#include<bits/stdc++.h>

void dfs(int node, unordered_map<int , bool> &vis , stack<int> &st , unordered_map<int, list<int>> &adj){

	vis[node]=true;
	for(auto neigh: adj[node]){
		if(!vis[neigh]){
			dfs(neigh, vis, st, adj);
		}
	}

	st.push(node);
}

void revDfs(int node, unordered_map<int , bool> &vis,  unordered_map<int, list<int>> &adj){
	vis[node] =true;
	for(auto neigh : adj[node]){
		if(!vis[neigh]){
			revDfs(neigh, vis, adj);
		}
	}
}


int stronglyConnectedComponents(int v, vector<vector<int>> &edges)
{
	// adj list
	unordered_map<int, list<int>>adj;
	for(int i=0; i<edges.size(); i++){
		int u =edges[i][0];
		int v= edges[i][1];

		adj[u].push_back(v);
	}

	//topo short
	stack<int>st;
	unordered_map<int , bool>vis;
	for(int i=0; i<v; i++){
		if(!vis[i]){
			dfs(i, vis, st, adj);
		}
	}

	//create a transpose graph
	unordered_map<int, list<int>>transpose;
	for(int i=0; i<v; i++){
		vis[i] = 0;
		for(auto neigh: adj[i]){
			transpose[neigh].push_back(i);
		}
	}

	//call dfs using above odering
	int count =0;
	while(!st.empty()){
		int top = st.top();
		st.pop();
		if( !vis[top]){
			count++;
			revDfs(top, vis, transpose);
		}
	}

	return count;
}

//T.c=O(N+E)
//S.c=O(N)