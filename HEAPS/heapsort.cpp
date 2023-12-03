#include <iostream>
#include <vector>
using namespace std;

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

void heapify(vector <int> &v, int index, int size){
        int left = 2 * index;
        int right = 2 * index + 1;

        int minindex = index;
        int last= size - 1;
        // if l and r child exist only then comparison is possible
        if (left <=last && compare(v[left], v[index])){
            minindex = left;
        }
        if (right <=last && compare(v[right], v[minindex])){
            minindex = right;
        }
        if(minindex != index){
            swap(v[index], v[minindex]);
            heapify(v, minindex,size);
        }
    }

void buildheap(vector <int> &v){
        for (int i = (v.size() - 1) / 2; i >= 1 ; i--)
        {
            heapify(v, i, v.size());
        }
}
void print(vector <int> v){
        for (int x = 1; x < v.size(); x++)
        {
            cout << v[x] << " ";
        }
    cout <<endl;
}
void heapsort(vector <int> &arr){
    buildheap(arr);
    int n = arr.size();

    //remove n-1 el from heap
    while(n > 1){
        swap(arr[1], arr[n-1]);
        n--;
        heapify(arr, 1, n);
    }
}

int main(){
    vector<int> v;
    v.push_back(-1);
    int n;
    cin >> n;
    int temp;
    for(int i=0; i<n; i++){
        cin >> temp;
        v.push_back(temp);
    }
    heapsort(v);
    print(v);
}