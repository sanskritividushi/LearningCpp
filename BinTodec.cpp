/*
#include <iostream>
#include <math.h>
using namespace std;

int main (){
    int n;
    cin >> n;
    int i=0, ans=0;

if (n<0){
    n=n*(-1);

    while (n!=0){
    int bit = n&1;
    ans= ((bit * pow(10,i))+ans) ;

    int ans1= ~(ans);
    ans1= ans1+1;
    cout << ans1 << endl;

n=n>>1;
i++;
}
}

else {
    while (n!=0){
    int bit = n&1;
    ans= ((bit * pow(10,i))+ans) ;

n=n>>1;
i++;
cout << ans << endl;
}
}
}
*/



#include <iostream>
#include <math.h>
using namespace std;

int main (){
    int n;
    cin >> n;
    int i=0, ans1=0;

while (n!=0){
    int bit = n&1;
    ans1= ((bit * pow(10,i))+ans1) ;

n=n>>1;
i++;

if (n<0){
    n=n*(-1);

int ans2= ~(ans1);
ans2= ans2+1;
cout << ans2 << endl;
}

else {
   int ans2= int ans1
cout << ans2 << endl;
}
}
}