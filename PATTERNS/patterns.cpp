#include <iostream>
using namespace std;
/*
int main() {
    int n;
    cin>>n;
int i=1;
while (i<=n){
int j=1;
while (j<=n){
    cout <<"*";
j=j+1;
    
}
cout <<endl;
i=i+1;
}
}
*/


/*
int main(){

    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/

/*
int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n){
        int j=1;
        while(j<=n){
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/
/*
int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n){
        int j=1;
        while(j<=n){
            cout<<n-j+1;
            j=j+1;
            }
            cout<<endl;
        i=i+1;
    }
}
*/
/*
int main(){
    int n;
    cin>>n;
    int i=1;
    int count=1;

    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/
/*
int main(){
    int n;
    cin>>n;
    int row=1;
    while (row<=n){
int col=1;
while(col<=row){
    cout<<"*";
    col=col+1;

}
cout<<endl;
row=row+1;
 
    }
}
*/


/*
int main(){
int n;
cin>>n;
int row=1;
while(row<=n){

    int col=1;
    while (col<=row){
        cout<<row;
        col=col+1;
    }
    cout<<endl;
    row=row+1;
}
}
*/

/*
int main(){
    int n;
    cin>>n;
    int i=1;
    int count=1;

    while(i<=n){
        int j=1;
        while(j<=i){
            cout << count <<" ";
            count = count +1;
            j=j+1;
    
        }
        cout<<endl;
        i=i+1;
    }
}
*/
/*
int main(){

 int n;
 cin>>n;

 int i=1;
 while (i<=n){
    int j=1;
    while (j<=n){

    cout<<j;
    j=j+1;
 }

cout<<endl;
i=i+1;
}
}
*/

/*
int main(){

int n;
cin>>n;
int i=1;
while (i<=n){
     int j=1;
    while(j<=n){
        cout << n-j+1;
        j=j+1;
    }
    cout << endl;
    i=i+1;

}

}

*/


/*
int main(){

  int n;
  cin>>n;
  int i=1;
  int count=1;

  while (i<=n){
    int j=1;
    while (j<=n){ 
    cout << count << " ";
    count=count+1;
    j=j+1;
    }

   
cout<< endl;
i=i+1;
  }
}

 */
/*
int main(){
    int n;
    cin>>n;

    int row=1;
    while (row<=n){
        int col=1;
        while (col<=row){
            cout << "*";
            col=col+1;

        }
        cout <<endl;
        row=row+1;
        
    }
}
*/

/*
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
int space=i-1;
while(space){
    cout<<" ";
    space=space-1;
}
int j=1;
while(j<=n-i+1){
    cout<<"*";
    j=j+1;
}
cout<<endl;
i=i+1;

}
}
*/
/*
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=i-1;
        while(space){
        cout << " ";
        space= space-1;
    }
    int j=1;
    while(j<=n-i+1){
        cout<<n-i+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;

}
}
*/

/*
int main(){
    int n;
    cin>>n;
    int i=1;
    
    while (i<=n){
    int space=n-i;
    while(space){
        cout << ".";
        space=space-1;
    }
    int j=1;
    while(j<=i){
        cout << i;
        j=j+1;

    }
    cout<<endl;
    i=i+1;
    }
}
*/


int main(){
    int n;
    cin>>n;
    int i=1;

    while(i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int j=1;
        int count =1;

    while (j<=i){
   cout<<count;
   count=count+1;
   j=j+1;
    }
    cout<<endl;
    i=i+1;
    }
}