#include <iostream>
#include <vector>
using namespace std;

void print(vector <int> v){
    for(int x:v){
        cout << x << " ";
    }
    cout <<endl;
}
bool minheap = false;
bool compare(int a, int b)
{
    if (minheap)
    {
        return a < b;
    }
    else
    {
        return a > b;
    }
}
    void heapify(vector <int> &v, int index){
        int left = 2 * index;
        int right = 2 * index + 1;

        int minindex = index;
        int last= v.size() - 1;
        // if l and r child exist only then comparison is possible
        if (left <=last && compare(v[left], v[index])){
            minindex = left;
        }
        if (right <=last && compare(v[right], v[minindex])){
            minindex = right;
        }
        if(minindex != index){
            swap(v[index], v[minindex]);
            heapify(v, minindex);
        }
    }

void buildheapon(vector <int> &v){
        for (int i = (v.size() - 1) / 2; i >= 1 ; i--)
        {
            heapify(v, i);
        }
}
int main(){
    vector <int> v{-1, 10,20, 5,6,1,8,9,4};
    print(v);
    buildheapon(v);
    print(v);
}