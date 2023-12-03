#include <iostream>
#include<vector>
using namespace std;

//SELECTION SORT 
/*
void selsort(vector <int>& arr, int n)
{
    for (int i=0; i<n-1;i++){
        int minIndex=i;

        for (int j=i+1; j<n;j++){
            if (arr[j]< arr[minIndex]){
                minIndex= j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}
*/

//BUBBLE SORT
//THE LARGEST ELEMENT REACHES ITS CORRECT PLACE FIRST I.E. LARGEST EL COMES AT THE END FIRST

void bubsort(vector <int>& arr, int n){
    //round 1 to n-1 
    bool swapped= false;

    for (int i=0;i<n; i++){
        for (int j=0, j<n-i;j++)
        //process element till n-1 index 
        {
            if (arr[j]> arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped= true;
            }
        }
        if (swapped== false){
            //already sorted optimisation
            break;
        }

    }
}