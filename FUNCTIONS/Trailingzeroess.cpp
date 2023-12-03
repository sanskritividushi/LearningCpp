#include <iostream>
using namespace std;

int trailing(int n){
    int ans=0;

    for (int d=5; n/d>=1; d*=5){
        ans+=n/d;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout << trailing(n) <<endl;
    return 0;
    
}

question is to check the triling seroes when taking a factorial of any number. 
here if we take 25!, we get traling seroes whenever a 10 occurs. 
factors of 10 are 2 and 5, so whenever 2*5 occurs, we obtain a zero. 
since 2 occurs way more than 5 in many numbers, we check the occurance of 5 only. 
to check the number of 5s per the factorial number, the formula used is n/d+ n/d^2+ n/d^3+....  till n/d^n is zero. 
we take square and cube for numbers where 5 occurs more than once for a single digit, eg in 25, 5 occurs twice, in 125, 5 occurs thrice. 