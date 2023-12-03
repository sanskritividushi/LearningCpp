#include <iostream>
#include <unordered_map>
using namespace std;


int main(){
    unordered_map<string, int> m;
    //ways to insert
    m["mango"] = 100;
    m.insert(make_pair("apple", 200));


    if(m.count("mango")==1){ //means key mango is present. , at ==0, key absent 
        cout<<"price of mango is " <<m["mango"] <<endl;
    }
    else{
        cout<<"not present "<<endl;
    }

    m["guave"] = m["mango"] + 90;

    if(m.count("guave")==0){
        cout<<"guava doesnt exist " <<endl;
    }
    else{
        cout<<"guava costs " << m["guave"]<<endl;
    }

    m.erase("mango");

    // auto f= m.find("mango");
    if(f!=m.end()){
        cout << "price of mango is " << f->second <<endl;
    }
    else{
        cout<<"not present "<<endl;
    }



    // return 0;
}