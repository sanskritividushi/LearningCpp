//if graph has cycle, its not a tree
#include <iostream>
#include <map>
#include <list>
#include <queue>
using namespace std;

class graph{
    list<int> *l;
    int v;
    public:
    graph(int v){
        this->v = v;
        l = new list<int> [v];//array of linked lists
    }
    void addedge(int x, int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }
    bool istree(){
        bool *visited = new bool[v];
        int *parent = new int[v];
        for(int i = 0; i < v; i++){
            visited[i] = false;
            parent[i] = i;
        }
        queue<int> q;
        int src = 0;
        q.push(src);
        visited[src] = true;

        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto nbr: l[node]){
                if(visited[nbr]==true and parent[node] != nbr){
                    return false;
                }
                else if (!visited[nbr])
                {
                    visited[nbr] = true;
                    parent[nbr] = node;
                    q.push(nbr);
                }
            }
        }
        return true;
    }
};

int main(){
    graph g(4);
    g.addedge(0, 1);
    g.addedge(3, 2);
    g.addedge(1, 2);
    g.addedge(0, 3);
    if(g.istree()){
        cout<<"Graph is a tree";
    }
    else{
        cout<<"Graph is not a tree";
    }

    return 0;
}

