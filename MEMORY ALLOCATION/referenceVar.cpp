#include <iostream>
using namespace std;

//PASS BY REFERENCE AND VALUE 

int update(int& n){
    n++;
}
int updatewrong(int n){
    n++;
}

int main(){
    int i=5; 
    int &j=i;

    cout << i; 

    i++;
    cout << i; 
    j++;
    cout <<i; 
    cout << j;

    cout << endl;

    int n=5;
    cout << "before: " << n <<endl;
    update(n);
    // updatewrong(n);
    cout << "after: "<< n <<endl;
}