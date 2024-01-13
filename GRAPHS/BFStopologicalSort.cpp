#include<iostream>
#include<map>
#include<list>
#include<queue>
using namespace std;

template <typename T>
class Graph
{
    // adj list
    map<T,list<T>> m;
public:
    void addEdge(T x, T y){
        m[x].push_back(y);
    }
    
    // Topological sort using bfs
    void topological_sort(){
        map<T,T> indegree; //crated map for indegree list, not list ds like in video
        for(auto p:m){
            // initialising indegree of all vertices = 0
            indegree[p.first] = 0;
        }
        
        for(auto p:m){
            for(auto nbr:m[p.first]){
                if(nbr != p.first){
                    indegree[nbr]++;
                }
            }
        }
        
        // BFS
        queue<T> q;
        for(auto p:m){
            if(indegree[p.first] == 0){
                q.push(p.first);
            }
        }
        
        
        while(!q.empty()){
            T node = q.front();
            cout<<node<<" ";
            q.pop();
            for(auto nbr:m[node]){
                indegree[nbr]--;
                if(indegree[nbr] == 0){
                    q.push(nbr);
                }
            }
        }
    }
};

int main(){
    
    Graph<int> g;
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(1,4);
    g.addEdge(2,3);
    g.addEdge(2,5);
    g.addEdge(3,5);
    g.addEdge(4,5);
    g.addEdge(5,5);
    
    g.topological_sort();
    
    
    return 0;
}