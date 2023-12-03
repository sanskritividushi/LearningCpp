#include <iostream> 
using namespace std;

class hero{
    public:
    char level; 

    public:
    int health; 

    hero(int hlt){
        cout << "constructor"<< endl;
        //this is a pointer pointing to the current address of the obj 
        //this scores tthe address of the current obj
        this->health=hlt; //or health=hlt;
        cout << hlt;
    }    
    char getLevel(){
        return level;
    }
    void setLevel (char l){
        level=l;
    }
};

int main(){
    
    //obj dynamically
    hero *h= new hero(78);
    

}