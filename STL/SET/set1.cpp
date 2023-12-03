#include <iostream> 
#include <set>
using namespace std;

int main(){
    int arr[] = {10, 23, 5, 51, 22, 44, 44};
    int n = sizeof(arr)/sizeof(int);
    set <int> s;
    for (int i = 0; i < n; i++){
        s.insert(arr[i]);
    }
    //method to erase 
    //m1
    s.erase(5);

    //m2
    auto it = s.find(23);
    s.erase(it);

    //print elements
    for (set<int>::iterator it = s.begin(); it != s.end(); it++)
    {
        cout << *(it) << " ";
    }

    return 0;
}
