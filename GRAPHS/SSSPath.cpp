//songle source shortest path
//shortest dist froms ourec node to all other nodes in graph
#include <iostream>
#include <map>
#include <list>
#include <queue>
using namespace std;

//we'll maintain a hashmap to keep count of dist bw source and visited nodes
template <typename T>
class graph{
    map<T, list<T>> l;
    public:
    void addEdge(int x, int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void bfs(T src){
        //make a map of type bool to keep count of visited
        map<T, int> dist;
        queue<T> q;
        q.push(src);
        dist[src] = 0;
        //all other nodes will have int_max or infinite dist
        for(auto node_pair:l){ //node in adj list
        //node pair means node and list adj loist together in a pair
        //they can be accessed used first and .second
            T node=node_pair.first;
            dist[node] = INT_MAX;
        }
        q.push(src);
        dist[src] = 0;

        while(!q.empty()){
            T node = q.front();
            q.pop();
            // cout << node << " ";
            for(int nbr:l[node]){
                if(dist[nbr]==INT_MAX){
                    q.push(nbr);
                    //mark nbr as visited
                    dist[nbr] = dist[node]+1;
                }
            }
        }
        for(auto node_pair:l){
                T node = node_pair.first;
                cout << node << " Dist from src " << dist[node] << endl;
        }
    }
};

int main(){
    graph<int> g;
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 5);
    g.bfs(0);
    return 0;
}
