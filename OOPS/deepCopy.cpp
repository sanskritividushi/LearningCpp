#include <iostream> 
using namespace std;

class hero{
    public:
    char level; 
    char *name;
    int health; 

    hero (){
        name= new char[100];
    }
    // hero(int hlt){
    //     cout << "constructor"<< endl;
    //     this->health=hlt;
    // }    
    hero (hero &temp){
        //for deep copy we name another copy constr with a different array
        char *ch= new char [strlen(temp.name)+1];
        this->name= ch;

        strcpy(ch, temp.name);
        this->health=temp.health;
    }
    void print(){
        cout << this->health << endl;
        cout << this-> level <<endl;
        cout << this-> name <<endl;
        cout << endl;
    }
    void setName(char name[]){
        strcpy(this->name,name);  //strcpy used to copy one string into another 
    }

};

int main(){
    
    hero h1;
    h1.health=70;
    h1.level='d';
    char name[5]= "pari";
    h1.setName(name);
    h1.print();

    hero h2(h1);
    h2.print();

    h1.name[0]='h';
    h1.print();
    h2.print();
}