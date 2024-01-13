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
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void dfstraversal(T src, map<T, bool> &visited){
        cout << src << " ";
        visited[src] = true;
        //go to all neighbours of the node not viisted
        for(T nbr: l[src]){
            if(!visited[nbr]){
                dfstraversal(nbr, visited);
            }
        }
    }
    void dfs(T src){
        map<T, bool> visited;
        //make all noeds as not viisted int he starting 
        for(auto p:l){
            T node = p.first;
            visited[node] = false;
        }
        int count = 0;
        for (auto p : l)
        {
            T node = p.first;
            if (!visited[node]) //if any node is not visited we start another dfs for it and print it according to number of connectd components
            {
                cout<< "Component "<< count <<": ";
                dfstraversal(p.first, visited);
                count++;
                cout << endl;
            }
        }
        dfstraversal(src, visited);
    }
};

int main(){
    graph<int> g;
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 1);
    g.addEdge(5, 6);
    g.addEdge(6, 7);
    g.addEdge(8, 8);
    g.dfs(0);
    return 0;
}
