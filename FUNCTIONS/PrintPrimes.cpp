 #include<iostream>
 using namespace std;

void Printprime(int m){
int i;
int n;

for (n=2; n<=m; n++){
    for (i=2; i<m; i++){
        if (n%i==0){
            break;
        }
    }
    if (i==n){
        cout << n<<" ";
    }
    }
}

int main(){
    int m;
    cin>>m;
    Printprime(m);
    cout<<endl;
    Printprime(m);
    cout<<endl;
    return 0;
}
