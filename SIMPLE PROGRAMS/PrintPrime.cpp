 #include<iostream>
 using namespace std;

int main(){
int i;
int m; 
int n;
cin>>m;
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
return 0;
}