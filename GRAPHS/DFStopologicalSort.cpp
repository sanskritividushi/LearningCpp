#include <iostream>
#include <map>
#include <list>
#include <queue>
using namespace std;

template <typename T>
class graph{
    map<T, list<T>> l;
    public:
    void addEdge(int x, int y){
        l[x].push_back(y); //unidirectional edge now, not bidir
        // l[y].push_back(x);
    }

    void dfstraversal(T src, map<T, bool> &visited, list<T> &ordering){
        // cout << src << " ";
        visited[src] = true; //mark node as visited once you come to it 
        //go to all neighbours of the node not viisted
        for(T nbr: l[src]){
            if(!visited[nbr]){
                dfstraversal(nbr, visited, ordering);
            }
        }
        ordering.push_front(src);//just before returning, push node to front of list, this means the dependant node's parent gets pushed to list.
        //ordering means first el is one on which other nodes are dependant, 2nd node is dependent on 1st and so on
        return;
    }
    void dfs(T src){
        map<T, bool> visited;
        list<T> ordering; //stores order of tasks/ nodes 

        // make all noeds as not viisted int he starting
        for(auto p:l){
            T node = p.first;
            visited[node] = false;
        }
        //now call dfs traversal function to perform actual dfs
        for (auto p : l){
            T node = p.first;
            if (!visited[node]) //if any node is not visited we start another dfs for it and print it according to number of connectd components
            {
                dfstraversal(node, visited, ordering);
            }
        }
        for(auto node: ordering){
            cout << node << " ";
        }
    }
};

int main(){
    graph<int> g;
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(3, 4);
    // g.addEdge(4, 5);
    g.dfs(1);
    return 0;
}
