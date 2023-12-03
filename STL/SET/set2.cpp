#include <iostream> 
#include <set>
using namespace std;

int main(){
    set <pair <int, int>> s;
    s.insert(make_pair(1,2));
    s.insert(make_pair(3,4));
    s.insert(make_pair(5,6));
    s.insert(make_pair(7,8));
    s.insert(make_pair(9,10));
    s.insert(make_pair(11,12));

    s.erase(make_pair(5,6));
    s.insert(make_pair(13,14));

    auto it = s.upper_bound(make_pair(3,4));
    cout << it->first << " " << it->second << endl;



    for(auto p:s){
        cout << p.first << " " << p.second << endl;
    }
}