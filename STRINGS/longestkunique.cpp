#include <iostream>
using namespace std;

void longestkunique(char a[], int k){
    int freq[26]={0};
    int len=-1;
    int i = 0;
    int unique = 0;
    for (int j = 0; a[j] != '\0'; j++)
    {
        freq[a[j] - 'a']++;
        if (freq[a[j] - 'a'] ==1){
            unique++;
        }
        while(unique>k){
            //more than k unique chars so shrink window
            freq[a[i] - 'a']--;
            if (freq[a[i] - 'a'] ==0){
                unique--;
            }
            i++;
        }
        if(unique == k){len = max(len, j - i + 1);}
    }
    cout << len;
}

int main(){
    char a[] = "abbcefff";
    longestkunique(a, 3);
    return 0;
}
