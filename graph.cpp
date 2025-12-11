#include <bits/stdc++.h>
using namespace std;
template <typename T>
class graph{
    public:
    unordered_map<T,list<T>> adj;
    void addEdge(T u,T v,bool dir){
        adj[u].push_back(v);
        if(dir){
            adj[v].push_back(u);   //undirected graph
        }
    }
    void printGraph(){
        for(auto i:adj){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<j<<",";
            }
            cout<<endl;
        }
    }
};

int main() {
    int n,m;
    cout<<"Enter the no. of nodes:";
    cin>>n;
    cout<<"Enter the no. of edges:";
    cin>>m;
    graph<int> g;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,1); //assuming the graph is undirected
    }
    g.printGraph();
    return 0;
}