#include <iostream>
#include <vector>
using namespace std;


// INITIALISISNG VECTOR 

int main(){
    vector <int> a;
    vector <int> b(5,10);
    vector <int> c(b.begin(), b.end());
    vector <int> d{1,2,3,4,5};



// ITERATING OVER VECTOR 

    for (int i=0; i<c.size(); i++){
        cout << c[i] << " ";

    }
    cout <<endl;

    for (auto it= b.begin(); it!= b.end(); it++){
        cout << *it << " ";
    }
    cout << endl;


    //FOR EACH LOOP 
    for (int x:d){ //for every int x that lies in vector d
        cout << x <<" , ";
    }
    cout <<endl;


//FUNCTIONS
    vector <int> v; 
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        int no;
        cin >> no;
        v.push_back(no);
    }
    for (int x:d){
        cout << x << " ";
    }

    cout << v.size()<< endl; //predefined vector input doesnt extend size
    cout << v.capacity()<< endl; // pushback extends size, displays extended size
    cout << v.max_size()<< endl; //max no of elements vector can hold in worst case scenario 


}


int main(){


    vector<int> d{1,2,3,4,5};
    d.push_back(1);
    d.push_back(26);
    d.push_back(36);
    d.push_back(164);
    d.push_back(13);
    d.push_back(123);
    
    for (int x:d){
        cout << x << " "; 
    }
    d.pop_back();

    cout << "\n"<<  d.front() <<endl;
    cout <<d.back()<< endl;

    d.insert(d.begin()+ 3,4,100); //4 elements of value "100" added after begin +3

    d.erase(d.begin());
    d.erase(d.begin()+2, d.begin()+5);

    //size
    cout << d.size() <<endl;
    cout << d.capacity()<< endl;

    //resize
    d.resize(18); //if size is increasing, more memory will be allocated
    cout << d.size () << endl;


    cout << d.front()<< endl;
    cout <<d.back() <<endl;
    d.clear();

//DOUBLING IS AN EXPENSIVE OPERATION, USE RESERVE INSTEAD OF changing capacity at every step 

    int n;
    cin>> n;
    vector <int> v;
    v.reserve (1000); //reserving capacity so it doesnt change with every pushback 
    
    for (int i=0; i<n; i++){
        int no;
        cin>> no;
        v.push_back(no);
    }
    cout << v.capacity() <<endl;

    for (int x : v){
    cout <<  x << " ";
    }

    return 0;

}