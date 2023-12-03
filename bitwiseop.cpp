#include<iostream>
using namespace std;


int main() {
    /*
    int a = 4;
    int b = 6;

    cout << "a&b " << (a&b) << endl;
    cout << "a|b " <<(a|b) << endl;
    cout << "~a " << (~a) << endl;
    cout << "a^b " << (a^b)<< endl;

cout << (17>>1) <<endl;
cout << (17>>2)<< endl;
cout << (19<<1)<<endl;
cout << (21<<2)<<endl;


int a=7;

cout << (++a)<<endl;
cout << (a++)<<endl;
cout << (--a)<<endl;
cout << (a--)<<endl;

//q1
int a,b=1;
a=10;
if (++a){
    cout << b;
}
else{
    cout << (++b);
}

//q2
int a=1;
int b=2;

if (a-- > 0 && ++b > 2){
    cout << " stage 1- inside if ";
}
else {
    cout << "stage 2- inside else ";
}
cout << a << " " << b << endl;

//q3
int n=3;
cout << (25 * (++n));

int a=1;
int b= (a++);
int c= (++a);
cout << b;
cout << c;


//q4
int n;
cout << "enter a number "<< endl;
cin >> n;
for (int i=1; i<=n; i++){
    cout << i << endl;
}

int n;
cout << "enter a number "<< endl;
cin >> n;
int i=1;
for (; ; ){
    if (i<=n){
        cout << i << endl;
    }
    else{
        break;
    }
    i++;
}


for (int a=1, b=1; a>=0 && b>=1; a--,b--){
    cout << a << " " << b<< endl;
}


int n;
cout << "enter a number "<< endl;
cin >> n;
int sum=0;

for (int i=1; i<=n; i++){
    sum=sum+=i;
} 
cout << sum << endl;



//fibonacci series


int n;
cout << "enter a number "<< endl;
cin >> n;
int a=0;
int b=1;
cout <<a << " " <<b << " ";

for (int i=1; i<=n; i++){
    int sum=a+b;
    cout << sum << " ";

    a=b;
    b=sum;
    
}


int n;
cout << "enter a number "<< endl;
cin >> n;

for (int i=2; i<n; i++){
    if (n%i==0){
        cout << n << " is not prime " << endl;
        break;
    }
    else{
        cout << n << " is prime "<< endl;
        break;
    }
}

//OR 
int n;
cout << "enter a number "<< endl;
cin >> n;
bool isprime=1;

for (int i=2; i<n; i++){
    if (n%i==0){
        isprime=0;
        break;
    }
}
if (isprime==0){
        cout << "not a prime number" << endl;
    }
else{
        cout << "is a prime" <<endl;
    }

for (int i=0;i<5; i++){
    cout << "hey "<< " ";
    cout << "hi "<< " ";
    continue;
    cout << "reply toh karde";

}


//q1 continue and break and for loop

for(int i=0; i<=5; i++){
     cout<< i<< " ";
     i++;
}

for(int i=0; i<=15; i+=2){
     cout<< i<< " ";

     if(i&1){
        continue;
     }
     i++;
}
*/

for (int i=0; i<5; i++){
    for (int j=1; j<=5; j++){
        cout << i << " " << j <<endl;
    }
}
}


