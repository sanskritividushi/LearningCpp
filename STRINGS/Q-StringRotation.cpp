//check whether one string is a rotation of another string 
#include <iostream>
using namespace std;

void reverse(string s){
    string x = s;
    for (int i = x.length() - 1; i >= 0; i--)
    {
        cout << x[i] << " ";
    }
}

void pal(string h){
    int i = 0; 
    int j= h.length()-1;
    while(i<j){
        if(h[i]!=h[j]){
            cout << "not a palindrome";
            return;
        }
        i++;
        j--;
    }
        cout << "is a palindrome";
    
}
int main(){
    // reverse("hello");
    pal("nitin");
}

