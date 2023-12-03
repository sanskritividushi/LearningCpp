#include <iostream>
using namespace std;
/*
//address of pointers
int main(){
    int a=10;
    float f=10.11;
    char ch='A';
    cout << a << endl;
    cout << &a<< endl; //address (0x in output denotes hexadec)

    cout << f << endl;
    cout << &f << endl; // address
    
    int arr[]={1,2,3,4};
    cout << arr <<endl; //address

    char ch_arr[10]= "Hello";
    cout << ch_arr << endl; //address

    cout << &ch <<endl; //address
}


int main(){
    int a=10;
    int *aptr=&a; //pointer created using "datatype + asterick + pointer_name"
    aptr stores address of var,, &a = address of a 

    float f=10;
    float *fptr=&f;

    char ch= 'a';
    char *chptr = &ch;

    cout << &a<< endl;
    cout << aptr<< endl;

    cout << &f<< endl;
    cout << fptr<< endl;

    cout << sizeof(aptr)<<endl;
    cout << sizeof(fptr)<<endl;
    cout <<sizeof(chptr)<<endl;
    //ans in bytes
    return 0;

//CHARACTER OPERATOR 

int main(){
    char ch= 'b';
    char *chptr = &ch;  
    char a[]= "abcd";
    
    cout << &ch <<endl;
    cout << chptr<<endl;

    cout << (int*)chptr<<endl; //type casting char element into forcefully producing int output i.e. address

    cout << a<< endl;
    cout << (float*) a<< endl;

}

//DEREFENCE OPERATOR 
int main (){
    int a =10;
    int *y;
    y=&a;

    cout << y <<endl;
    cout << &a <<endl;

    cout << *y <<endl;
    cout << a<< endl;
    cout << *(&a) <<endl;

    return 0;


}



void Update (int *a){
    *a=*a+1;
    cout << *a <<endl;

}
int main(){
    int x=10;
    Update (&x);
    cout  << x <<endl;
    return 0;
}

*/
//pointers and arrays 

// void Printarray(int *a, int n){
//         cout<< "functions"<< endl;
//          for (int i=0; i<4; i++){
//             cout << *(a+i) << " ";
//     }
// }
// int main(){

//         int a[]={1,2,3,4};
//         for (int i=0; i<4; i++){
//             cout << a[i] << " ";
//         }
//         cout <<endl;
//         Printarray (a,4);
//         return 0;
// }

