#include <iostream> 
using namespace std;

class hero{
    public:
    char level; 

    public:
    int health; 

    hero(){
        cout << "constructor"<< endl;
    }    
    char getLevel(){
        return level;
    }
    void setLevel (char l){
        level=l;
    }
};

int main(){
     //obj created statically 
    hero h1;
    //obj dynamically
    hero *h= new hero();


}