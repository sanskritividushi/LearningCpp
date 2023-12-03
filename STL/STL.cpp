#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include<set>
#include <map>
using namespace std;

/*
// array in stl 
int main(){
    int basic[3]= {1,2,3};

    array<int,4> a={1,2,3,4}; 
    
    int size= a.size();
    cout << size << endl;

    for (int i=0; i<size; i++){
        cout << a[i]<< endl;

    }
    cout << " element at 2nd index is  "<< a.at(2)<< endl;
    cout << " empty or not? "<< a.empty()<< endl;
    cout << " first element "<< a.front()<< endl;
    cout << " last element "<< a.back()<< endl;
}
*/

// vectors in stl
// vector is similar to a dynamic array but if you want to add another element which is greater than the capacity of teh array, 
// the vector doubles itself to fit more elements in.

int main(){
/*
    vector <int> v;
    cout << "size: " <<v.capacity() <<endl; 

    v.push_back(1);
    cout << "size: " <<v.capacity() <<endl; 

    v.push_back(2);
    cout << "size: " <<v.capacity() <<endl; 

    v.push_back(3);
    cout << "size: " <<v.capacity() <<endl; //now capacity shown will be 4 since after 2nd element was put in,
    //for their element, the vector doubled its size
    cout << " element at 2nd index is  "<< v.at(2)<< endl;

    cout << " first element "<< v.front()<< endl;
    cout << " last element "<< v.back()<< endl;


    cout << "before pop: "<< endl;
    for (int i:v){
        cout << i << " ";
    }cout <<endl;
    v.pop_back();  //pop out last entered element

    cout << "after pop: "<< endl;
    for (int i:v){
        cout << i << " ";
    }cout <<endl;

     cout << "before clear size "<<v.size()<< endl;
     v.clear();
     cout << "after clear size "<<v.size()<< endl;

    vector <int> b(5,1);
    //5 is size and 1 is initialisation i.e. all vectors will start from 1 right now.

    cout << "print b" <<endl;
    for (int i:b){
        cout << i;
    }
    cout<<endl;

    vector <int> copy(b); //copy the vector b into another vector
    cout << "print copied vector" <<endl;
    for (int i:copy){
        cout << i;
    }


//DEQUE in STL
//Deque are dynamic array and are double-ended so both insertion and deletion is possible from both ends of the array

    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    d.push_back(3);
    for (int i:d){
        cout << i <<" ";
    }
    cout <<endl;

    d.pop_back();
    d.pop_front();
    cout <<endl;
    for (int i:d){
        cout << i<< " ";
    }

    cout << d.at(1)<<endl;
    cout << d.front() << endl;
    cout << d.back()<<endl;

    cout <<d.empty()<<endl;

    cout <<d.size()<<endl;

    d.erase(d.begin(), d.begin()+1);
     //erases one element from the beginning 
    cout <<d.size() << endl;

    for (int i:d){
        cout << i<< " ";    
    }
    cout<<endl;

    d.erase(d.end(), d.end()+1);
     //erases one element from the end

    for (int i:d){
        cout << i<< " ";    
    }
    cout <<endl;


//LIST in STL
//also double ended
    list <int> l;
    l.push_back(1);
    l.push_front(2);
    for (int i:l){
        cout << i<< " ";    
    }
    cout<<endl;

    l.erase(l.begin());
    for (int i:l){
        cout << i << " ";
    }
    cout<<endl;

    cout << l.size()<< endl;

    list <int> n(l);
    for (int i:n){
        cout << i<< " ";
    }
    cout << endl;

    list <int> j (5,100);
        for (int i:j){
        cout << i<< " ";
    }



//STACK 
//LIFO concept 

    stack <string> s;

    s.push("jon");
    s.push("arya");
    s.push("dany");
    cout << s.top() << endl;

    s.pop();
    cout << s.top();
    cout <<endl;

    cout << s.empty()<<endl;



//QUEUE in STL
//FIFO concept 

    queue <string> q;
    q.push("bran");
    q.push("sansa");
    q.push("robb");

    cout << q.size()<<endl;

    cout <<q.front()<<endl;
    q.pop();
    cout << q.front()<<endl;

    cout << q.size()<<endl;




//PRIORITY QUEUE 
//first el in queue always greatest, max heap 

//max heap
priority_queue<int> p;

//min heap
priority_queue<int, vector <int>, greater<int> > m;

p.push(1);
p.push(3);
p.push(2);
p.push(0);

cout << p.size()<<endl;
int n=p.size();
for (int i=0;i<n; i++){
    cout<< p.top()<< " ";

    p.pop();
}cout << endl;


m.push(2);
m.push(222);
m.push(22);
m.push(12);
m.push(25);

cout << m.size()<<endl;
int s=m.size();
for (int i=0;i<s; i++){
    cout<< m.top()<< " ";

    m.pop();
}cout << endl;

cout << m.empty();
cout<<endl;

//SET IN STL
//one element can come only once in a set 
    set <int> s;

    s.insert(3);
    s.insert(4);
    s.insert(42);
    s.insert(43);
    s.insert(41);
    for (int i:s){
        cout << i << " ";
    }
    cout <<endl;
    set <int> :: iterator it=s.begin();
    it++;
    s.erase(it);
    for (int i:s){
        cout << i << " ";
    }
    cout <<endl;
    cout << s.count(43)<<endl;
    set <int> :: iterator itr=s.find(4);
    for (auto it=itr;it!=s.end();it++){
        cout <<*it<<" ";
        cout <<endl;
    }

*/
//KEYS IN STL
//each key has unique value 
//each key can point to only one value 

    map <int, string> m;
    m[1]= "hello";
    m[3]= "hi";
    m[4]= "bye";

   // m.insert( {6,"ola"});

    for (auto i:m) {
        cout <<  i.first << " " << i.second << endl;
    }
    cout <<m.count (4)<<endl;

//ALGOS : WILL DO AFTER BIN SEARCH 




}