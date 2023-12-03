#include <iostream> 
using namespace std;

int power(int a, int n){
    if(n==0){
        return 1;
    }
    //recursive
    int smaller= power(a,n-1);
    int biggerprob= a* smaller;
    return biggerprob;
}
int main(){
    int a=2;
    int n=3;
    cout << power(a,n) <<endl;
}