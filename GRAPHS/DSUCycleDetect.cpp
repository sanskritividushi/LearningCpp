#include <iostream>
#include <map>
#include <list>
#include <queue>
using namespace std;

class graph{
    int v;
    list<pair<int, int>> l;
    public:
    graph(int v){
        this->v = v;
    }
    int addedge(int u, int v){
        l.push_back({u, v});
    }

    int findset(int i, int parent[]){
        if( parent[i]==-1){
            return i;
        }
        return findset(parent[i], parent);
    }
    void unionset(int x, int y, int parent[]){
        int s1 = findset(x, parent);
        int s2 = findset(y, parent);
        if(s1!=s2){
            parent[s1] = s2;
        }
    }
    bool containscycle(){
        //dsu logic
        //in beginning assume all nodes are a set of their own
        int *parent = new int[v];
        for(int i = 0; i < v; i++){
            parent[i] = -1;
        }
        //iteratre over edge list and check if it forms a cycle
        for(auto edge: l){
            int i = edge.first;
            int j = edge.second;
            int s1 = findset(i, parent);
            int s2 = findset(j, parent);
            if(s1!=s2){
                unionset(s1, s2, parent);
            }
            else{
                cout << "Same parents " << s1 << " and " << s2 <<endl;
                return true;
            }
        }
        delete[] parent;
        return false;
    }
    void printadj(){
        for(auto edge: l){
            cout<<edge.first<<" "<<edge.second<<endl;
        }
    }
};

int main(){
    graph g(4);
    g.addedge(0, 1);
    g.addedge(1, 2);
    g.addedge(2,3);
    g.addedge(3,0);
    if(g.containscycle()){
        cout<<"Cycle is present";
    }
    else{
        cout<<"No cycle";
    }
}