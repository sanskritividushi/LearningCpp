#include <iostream>
#include <vector>
using namespace std;

class heap{
    //2 data memebrs, vector and type
    vector<int> v;
    bool minheap;

    bool compare(int a, int b){
        if(minheap){
            return a < b;
        }
        else{
            return a>b;
        }
    }
public:
    heap(int defsize = 10, bool type=true){
        v.reserve(defsize);
        v.push_back(-1);
        minheap = type; //if type var is true then type is minheap else maxheap

    }

    void push(int data){
        v.push_back(data);
        int index = v.size() - 1; //index 0 is blocked so last element is at 11th index therefore -1 to get 10th index
        int parent = (index) / 2;

        //keep puhsing to top till root node reached or stop midway coz curr el is greater than node
        while (index > 1 && compare(v[index], v[parent])){
            swap(v[index], v[parent]);
            index = parent;
            parent = parent / 2;

        }
    }
    void print(){
        for (int i=1; i<v.size(); i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    heap h;
    h.push(1);
    h.push(2);
    h.push(3);
    h.push(17);
    h.push(19);
    h.push(36);
    h.push(7);
    h.push(25);
    h.push(100);
    h.print();

    h.push(0);
    h.print();

    // print();
    // give initial size and type(min or max heap)
    return 0;
}