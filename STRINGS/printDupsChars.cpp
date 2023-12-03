//Print all the duplicate characters in a string

#include <iostream>
using namespace std;

int main(){
    string str = "fuckyoubitch";
    int n = str.length();
    sort(str.begin(), str.end());
    for (int i = 0; i < n; i++){
        int count = 1;
        while(i<n-1 && str[i] == str[i+1]){
            count++;
            i++;
        }
        if (count > 1){
            cout << "count of " << str[i] << " is " << count << endl; 
        }
    }
}