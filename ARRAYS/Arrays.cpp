#include <iostream>
using namespace std;

//int main(){
  //  cout << "enter your name" << endl;
   // string name;
   // cin >> name ;
    //cout << "hello world you are " << name << "!" << endl;}

/*

int main(){
    //declare
    int number[15];

    //accessing an array
    cout << "value at index 13 is " << number[13] <<endl;

    //initialising an array
    int second[3]= {66,77,88};
    cout << " value at index 2 is "<< second[2] <<endl;

    //printing an array
    int third[4]={3,4,5};
    int n= 4;
    for (int i=0; i<n ; i++){
        cout << third[i] << " " ; 
    }
    cout << endl;
    cout<< "everything is fine" << endl;
    }

*/

// printing array using functions
/*
void printarray(int arr[], int size){
    cout << " printing the array" << endl;
    
    for (int i=0; i<size; i++){
        cout << arr[i] << " " ;
    }
}

void printarray1(char arr1[], int size){
    cout << " printing the array" << endl;
    
    for (int i=0; i<size; i++){
        cout << arr1[i] << " " ;
    }
}

*/
/*
int main(){
    // calling function to print array 
    int third[4]={3,4,5};
    int n= 4;
    printarray(third, 4);
    cout << endl;

    // printing size of array 
    int thirdsize= sizeof(third)/ sizeof(int);
    cout << " size of array is " << thirdsize << endl;
}

*/

/*
int main(){
    //printing character array
    char arr1[5]= {'a' , 'z', 'c', 'h', 'f'} ;
    int n = 5;

    printarray1(arr1, 5);
}

// print sum of elements in an array 


int getsum(int num[], int size){
    int sum=0;

    for (int i=0; i<size; i++){
        sum=sum + num[i];
    }
    return sum;
}

int main(){
    int size;
    cin>> size;

    int num[100];
    for (int i=0; i<size; i++){
        cin >> num[i];
    }
    cout << "sum of elements of array is " << getsum(num , size) <<endl;
}




// max/ min number in array


int getmax(int num[], int n){
    int max1= INT_MIN;

    for (int i=0; i<n; i++ ){

        max1= max(max1, num[i]);
        //if ( num[i] > max){
          //  max= num[i];
        //}
    }
    return max1; 
}

int main(){
    int size;
    cin>> size;

    int num[100]; /////**doubt/////
    for (int i=0; i<size; i++ ){
        cin>> num[i];
    }
    cout << "maximum value is " << getmax(num, size) << endl;
}

*/


// //reversing an array

// void reverse(int arr[], int n){
//     int start =0;
//     int end= n-1;

//     while(start<=end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }


// void printarray(int arr[], int n){

//     for (int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }
//     cout <<endl;
// }



// int main(){
//     int arr[6]= {1,2,3,4,5,6};
//     int brr[5]= {1,2,4,5,6};

//     reverse(arr,6);
//     reverse(brr,5);

//     printarray(arr,6);
//     printarray(brr,5);
// }




// linear search in array 

/*
bool search (int arr[], int size, int key ){
    for (int i=0; i<size; i++){
        if (arr[i]== key){
            return 1;
        }
    }
    return 0;
}

int main (){
    int arr[10]= {2,6,63,4,667,73,2,55,678,99};
    cout << " enter the element to search for: " << endl;
    int key;
    cin>> key;

    bool found = search (arr, 10, key);
    
    if (found){
        cout << " Key is present." << endl;
    }
    else{
        cout << "Key is not present." << endl;
    }
}
*/

// Find unique 
/*
int findunique(int arr[], int size){
        int ans=0;
        for (int i=0; i< size; i++){
        ans=ans^arr[i];
    }
    return ans;
}


int main(){
   int arr[8]={2,3,4,5,6,7,8,8};
    int size= 8;
    cout << findunique(arr, 8) <<endl;
}


*/

#include <iostream> 
using namespace std;

void reverse(int arr[], int n){
    int start=0 ;
    int end=n-1 ;

    while(start<=end){
		if (arr[start]==0 & arr[end]== 0){
			continue;
		}
		else{
			swap(arr[start], arr[end]);
			start++;
			end--;
		}
    }
	// for (int i=0; i<n; i++){
    //     cout << arr[i] << " ";
    // }
    // cout <<endl;

}


void printarray(int arr[], int n){

    for (int i=0; i<n; i++){
        cout  << arr[i] << " ";
		}
    cout <<endl;
}

int main() {
	int n;
	cin >>n; 

	int arr[n];
	for (int i=0; i<n; i++){
		cin >> arr[i] ;
	}
	cout <<endl;

	reverse (arr,n);
	printarray(arr,n);
	
	return 0;
}
