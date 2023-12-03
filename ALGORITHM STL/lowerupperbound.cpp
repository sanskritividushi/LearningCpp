#include <iostream> 
#include <algorithm> 
using namespace std;

int main(){
    int a[]={10,20,40,40,40,50,60};
    int n= sizeof(a)/sizeof(int);

    int *ans= lower_bound(a, a+n, 40);
    cout << "value " << *ans <<endl;
    cout << "first occurence of 40: " << ans-a <<endl;

    int *x= upper_bound(a,a+n, 40);
    cout << "value " << *x <<endl;
    cout << "last occurence of 40: " << x-a-1 <<endl;

}
