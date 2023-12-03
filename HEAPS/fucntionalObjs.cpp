#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

class fun{
    public:
    void operator()(string s){
        cout << "having fun w " <<s << endl;
    }
    // void operator()(){
    //     cout << "having fun new" << endl;
    // }

};

int main(){
        fun f; //constructor call
        f("chh");  //overloaded () op = fn call where f is an obj
    //f is an obj but is behaivng like a function call therefore alsp called "FUNCTOR   "
        return 0;
}

//WE CAN MAKE ANY OBJ AS A  FUCNTIONAL OBJ JUST BY DEFNING THE () AS AN OPERATOR INSIDE THAT CLASS 
//USED TO MAKE COMPARATORS IN PRIORITY QUEUE 