#include <iostream> 
using namespace std;

class hero{
    public:
    char level; 
    public:
    int health; 

    hero(int hlt){
        cout << "constructor"<< endl;
        this->health=hlt;
    }    

    //copy constructor 
    //hero (hero temp){  //this will be an error since we are PASSING BY VALUE of a copy i.e. temp bucket IN A CONSTRUCTOR THAT IS ALREADY A COPY CONSTRUCTOR
                         //thus we need to PASS BY REFERENCE j  
        //this->health=temp.health;
    //}

    hero (hero &temp){
        this->health=temp.health;
    }
    void print(){
        cout << this->health << endl;
    }
};

int main(){
    

    hero h1(999);
    h1.print();
    hero hh1(h1); // copy constructor 
    hh1.print();
    // basically this happens --->> h1.health= h2.health;


}