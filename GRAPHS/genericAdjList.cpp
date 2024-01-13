#include <iostream>
#include <list>
#include <unordered_map>
#include <cstring>
using namespace std;

//weighted graph
//list cant be used as nodes are generic i.e. chars not int datatype
//hence we'll use hashmaps

// hashmap in such a way that
// string key -> list < pair <string , int> >;

class graph{
    unordered_map <string, list <pair <string , int> > > l;
    public:
    void addedge(string x, string y, bool bidir, int wt){
        l[x].push_back(make_pair(y, wt));
        if (bidir){
            l[y].push_back(make_pair(x, wt));
        }
    }
    void printadj(){
        for(auto p:l){
            //whenever we iterate over an edge, we get key and a value pair
            string city = p.first;
            list <pair <string , int> > nbrs = p.second;
            for(auto nbr : nbrs){
                string dest = nbr.first; //destination city
                int dist = nbr.second;
                cout << city << "->" << dest << " " << dist << ", ";
            }
            cout << endl;
        }
    }
};

int main(){
    graph g;
    g.addedge("a", "b", true, 20);
    g.addedge("a", "c", true, 40);
    g.addedge("b", "d", true, 10);
    g.addedge("c", "d", true, 40);
    g.addedge("a", "d", false, 50);
    g.printadj(); //nodes not in specific order since we used unordered map
    //use map to sort cities lexographically
    return 0;
}