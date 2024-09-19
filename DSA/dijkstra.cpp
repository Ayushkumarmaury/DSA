#include <bits/stdc++.h> 
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    // create adj list
    unordered_map<int, list<pair<int , int>>>adj;
    for(int i=0; i<edges; i++){
        int u= vec[i][0];
        int v = vec[i][1];

        int w = vec[i][2];

        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

    vector<int>dist(vertices);
    for(int i=0; i<vertices; i++){
        dist[i] = INT_MAX;

    }

    set<pair<int , int>>st; 

    dist[source] = 0;
    st.insert(make_pair(0, source));

    while(!st.empty()){
        //fetch Top  record
        auto top = *(st.begin());
        int nodeDistance = top.first;
        int topNode  = top.second;

        //remove top record now
        st.erase(st.begin());


        //traverse on neighbours
        for(auto neigh:adj[topNode]){
            if(nodeDistance + neigh.second < dist[neigh.first]){
                auto record = st.find(make_pair(dist[neigh.first], neigh.first));

                //if record found,then erase it
                if(record!= st.end()){
                    st.erase(record);
                }

                //distance update
                dist[neigh.first]=nodeDistance + neigh.second;

                //record push in set
                st.insert(make_pair(dist[neigh.first] , neigh.first ));
            }
        }
    }

    return dist;

}
