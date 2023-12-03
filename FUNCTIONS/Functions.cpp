#include <iostream>
using namespace std;
/*
void mul(int a,int b){
    cout << a*b<<endl;
}

    int main (){

        mul(10,20);
    
        return 0;
}
*/
int mult(int a, int b){
    cout << a*b <<endl;
    int p=a*b;
    return p;
}

    int main(){
        int ans= mult(10,20);
        cout<< ans+10 <<endl;
 
        return 0;

    }