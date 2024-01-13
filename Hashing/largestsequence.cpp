#include <iostream>
#include <unordered_map>
using namespace std;

int findlargestsequence(int a[], int n){

    unordered_map<int, int> m; //no and streak length
    for (int i = 0; i < n; i++){
        int no = a[i];

        if(m.count(no-1)==0 and m.count(no+1)==0){
            m[no] = 1;
        }
        else if(m.count(no-1) and m.count(no+1)){
            int l1 = m[no - 1];
            int l2 = m[no + 1];

            int streak = l1 + l2 + 1;
            m[no - l1] = streak;
            m[no + l2] = streak;
        }
        else if(m.count(no-1) and !m.count(no+1)){
            int l = m[no - 1];
            m[no - l] = l + 1;
            m[no] = l + 1;
        }
        else{
            int l = m[no + 1];
            m[no + l] = l + 1;
            m[no] = l+1;
        }
}
int largest = 0;
for(auto p:m){
    largest = max(largest, p.second);
}
return largest;
}

int main(){
    int a[] = {14, 5, 1, 2, 6, 3, 7, 8, 9, 13, 11, 12, 13, 17, 15};
    int n = sizeof(a) / sizeof(int);
    cout << findlargestsequence(a, n) << endl;
    return 0;
}
