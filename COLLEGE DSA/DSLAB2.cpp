#include <iostream>
using namespace std;

//wap that reads "igdtuw" in 7 diff strings . concat str and print results 
void igdtuw(){
    string s1="indira";
    string s2="gandhi";
    string s3="delhi";
    string s4="technical";
    string s5="university";
    string s6="for";
    string s7="women";

    string s;
    s=s1+" "+s2+" "+s3+" "+s4+" "+s5+" "+s6+" "+s7;
    cout << s;
}
//wap to convert dec no to bin and store in an arr
void toBin(){
    int dec;
    cin>>dec;

    int bin[100];
    int i=0;
    int rem;
    int noOFdigits=0;
    while(dec!=0){
        rem=dec%2;
        bin[i]=rem;
        dec=dec/2;
        i++;
        noOFdigits++;
    }
    for(int i=noOFdigits-1; i>=0; i--){
        cout << bin[i];
    }
}

//wap to reverse an arr 
void reverse(){
    int n = 9;
    int arr[9] = {2,5,6,4,7,8,3,6,4};
    int temp;
    for(int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
//wap to interchange odd and even pos in an arr

void oddeven(){
    int n = 9;
    int arr[9] = {2,5,6,4,7,8,3,6,4};
    for(int i = 0; i<n-1; i++){
        if(i%2==0){
            swap(arr[i], arr[i+1]);
        }
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

//write a menu driven prog to perform addn subtrn mul of 2 matries where order of matrix is user defined 
void matadd(){
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;

    cout << "Enter number of rows (between 1 and 100): ";
    cin >> r;

    cout << "Enter number of columns (between 1 and 100): ";
    cin >> c;

    cout << endl << "Enter elements of 1st matrix: " << endl;

    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }

    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }

    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
            sum[i][j] = a[i][j] + b[i][j];


    cout << endl << "Sum of two matrix is: " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == c - 1)
                cout << endl;
        }
}

void matsub(){
    int r, c, a[100][100], b[100][100], sub[100][100], i, j;

    cout << "Enter number of rows (between 1 and 100): ";
    cin >> r;

    cout << "Enter number of columns (between 1 and 100): ";
    cin >> c;

    cout << endl << "Enter elements of 1st matrix: " << endl;

    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }

    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }

    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
            sub[i][j] = a[i][j] - b[i][j];

    cout << endl << "Subtraction of two matrices is: " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << sub[i][j] << "  ";
            if(j == c - 1)
                cout << endl;
        }
    
}

int main(){
    int choice;
    cout << "Enter 1 for addition and 2 for subtraction: ";
    cin >> choice;
    if(choice == 1){
        matadd();
    }
    else if(choice == 2){
        matsub();
    }
}





