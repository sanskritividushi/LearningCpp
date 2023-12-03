#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

//BUBBLE SORT ALGO WITH GRAPH 
//best to worst case table 
void sorted(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        arr[i]= i+1;
    }
}
void avg(){
    int size;
    cin>>size;
    int arr[size];
    int ub=200;
    int lb= 10;
    for(int i=0; i<size; i++){
        arr[i]=(rand() % (ub - lb + 1)) + lb ;
    }
}

void reverse(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=size-1; i>=0; i--){
        int j=0;
        arr[i]=j;
        j++;
    }
}
int main(){
    int size;
    cin>>size;
    int arr[size];

    // SORTED
    // for(int i=0; i<size; i++){
    //     arr[i]= i+1;
    // }
    // cout << endl;

    //AVERAGE 
    // int ub=200;
    // int lb= 0;
    // for(int i=0; i<size; i++){
    //     arr[i]=(rand() % (ub - lb + 1)) + lb ;
    // }

    //REVERSE 
    for(int i=0; i<size; i++){
        arr[i]=size-i;;
        i++;
    }
    // for(int i=0; i<size; i++){
    //     cout << arr[i] << " ";
    // }
//system clock function used
auto begin = std::chrono::high_resolution_clock::now();    
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    // for(int i = 0 ;i<size ;i++){
    //     cout<<arr[i]<<" ";
    // }
    auto end = std::chrono::high_resolution_clock::now();

    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cout<<"time elapsed "<<elapsed.count() * 1e-9 <<endl;
    
    return 0;
}
