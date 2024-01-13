#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int minDAYS(int s, int n, int m){ //s=no of days ,
    int sunday = s / 7;
    int buyingdays = s - sunday;
    int totfood = s * m;
    int ans = 0;
    if(totfood%n==0){
        ans= totfood/n;
    }
    else{
        ans = totfood/n + 1;
    }
    if(ans<=buyingdays){
        return ans;
    }
    else{
        return -1;
    }
}