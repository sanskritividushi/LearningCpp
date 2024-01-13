#include <iostream>
#include <map>
#include <list>
#include <queue>
using namespace std;

class graph{
    int V;
    list<int> *l;
    public:
    graph(int v){
        V = v;
        l = new list<int> [V];
    }

    void addedge(int x, int y, bool dir = true)
    {
        l[x].push_back(y);
        if(!dir){
            l[y].push_back(x);
        }
    }

    bool hascycle(int node, bool *visited, bool *stack){
        visited[node] = true; //visited node is put as true
        stack[node] = true; //node added to stack
        for(int nbr:l[node]){
            if(stack[nbr]==true){
                return true;
            }
            //rec call onnext node to check cycle
            if(visited[nbr]==false){
                bool foundcycle = hascycle(nbr, visited, stack);
                if(foundcycle==true){
                    return true;
                }
            }
        }
        //incase we leave a node
        stack[node] = false;
        return false;
    }

    bool containscycle(){
        bool *visited = new bool[V];
        bool *stack = new bool[V];
        for (int i = 0; i < V; i++)
        {
            visited[i] = false;
            stack[i] = false;
        }
            return hascycle(0, visited, stack);
    }
};

int main(){
    graph g(7);
    g.addedge(0, 1);
    g.addedge(1, 2);
    g.addedge(2, 3);
    g.addedge(3, 4);
    g.addedge(4, 5);
    g.addedge(1, 5);
    g.addedge(5, 6);
    g.addedge(4, 2);

    if(g.containscycle()){
        cout<<"Cycle is present"<<endl;
    }
    else{
        cout<<"Cycle is not present"<<endl;
    }
    return 0;
}