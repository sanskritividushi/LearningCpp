#include <iostream> 
using namespace std;

string a[]={ "zero", "one", "two", "three", "four", "five", "six", "seevn", "eight", "nine"};

void inttostr( int n){
    //base
    if(n==0){
        return;
    }
    //recursive case
    int digit= n%10;
    inttostr(n/10);
    cout << a[digit] << " ";

}

int main(){
    int n= 2048;
    inttostr(n);
    cout << endl;
    
}