#include <iostream> 
using namespace std;

class hero{
    public:
    char level; 
    char *name;
    int health; 
    const int time;

    hero():time(1){ //this is an initialisation list 
        name= new char[100];
    }
    hero (char l, int h=200):time(3){
        this->level=l;
        this->health=h;
    }
    hero (hero &temp):time(temp.time){
        char *ch= new char [strlen(temp.name)+1];
        this->name= ch;

        strcpy(ch, temp.name);
        this->health=temp.health;
    }
    void print(){
        cout << this->health << endl;
        cout << this-> level <<endl;
        // cout << this-> name <<endl;
    }
    void setName(char name[]){
        strcpy(this->name,name);  //strcpy used to copy one string into another 
    }

};
int main(){

    // hero d;
    // d.health=666;
    // d.level='f';
    // char name[10]="sanskriti";
    // d.setName(name);
    // d.print();

    hero f('g', 200);
    cout << f.time <<endl;
    f.print();

    hero hh1(f);
    hh1.print();
    
}