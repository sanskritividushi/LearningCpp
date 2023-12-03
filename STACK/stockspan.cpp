#include <iostream> 
#include <vector>
#include <stack>
using namespace std;

void stockspan(int prices[], int n, int span[]){
    stack<int> s; //indices of the days
    s.push(0);

    span[0]=1;
    //lopp for rest of the days 
    for(int i=1; i<=n-1; i++){
        int currprice=prices[i];
        //topmost el that is higher than curr prices 
        while(!s.empty() && prices[s.top()]<=currprice){
            s.pop();
        }
        if(!s.empty()){
            int prevhighest=s.top();
            span[i]=i-prevhighest;
        }
        else{
            span[i]=i+1;
        }
        //push this el into stack 
        s.push(i);
    }
}

int main(){
    int prices[]={100,80,60,70,60,75,85};
    int n=sizeof(prices)/sizeof(int);
    int span[1000000]={0} ;
    stockspan(prices, n, span);
    for(int i=0; i<n; i++){
        cout << span[i] << " ";  
    }


    return 0;
}